#!/usr/bin/env python3
"""Parallel, chunked driver around hermes-dec for a large Metro/Hermes bundle.

Usage:
  hermes_decompile.py index  <bundle> <outdir>
  hermes_decompile.py worker <bundle> <outdir> <start> <end> [mods_per_file]
  hermes_decompile.py extra  <bundle> <outdir>

The stock hbc-decompiler walks the whole bundle single-threaded into one file.
This splits it by top-level closure of the global function (one Metro module
factory each, nested closures inlined) so it can run on N cores and the output
lands in reviewable chunks instead of one multi-GB file.
"""
import io
import json
import logging
import os
import signal
import sys
import time
import traceback

sys.setrecursionlimit(50000)
logging.getLogger().setLevel(logging.ERROR)

from hermes_dec.parsers.hbc_file_parser import HBCReader
from hermes_dec.parsers.hbc_bytecode_parser import parse_hbc_bytecode
from hermes_dec.decompilation.defs import HermesDecompiler, FunctionTableIndex
from hermes_dec.decompilation import hbc_decompiler as D
from hermes_dec.disassembly.hbc_disassembler import disassemble_function

PER_FUNC_TIMEOUT = int(os.environ.get('HERMES_TIMEOUT', '180'))


class Timeout(BaseException):
    pass


def _alarm(signum, frame):
    raise Timeout()


signal.signal(signal.SIGALRM, _alarm)


VISITED = set()
_orig_decompile_function = D.decompile_function


def _tracking_decompile_function(state, function_id, **kwargs):
    VISITED.add(function_id)
    return _orig_decompile_function(state, function_id, **kwargs)


D.decompile_function = _tracking_decompile_function


def load(path):
    reader = HBCReader()
    fh = open(path, 'rb')
    reader.read_whole_file(fh)
    state = HermesDecompiler()
    state.hbc_reader = reader
    state.calldirect_function_ids = set()
    state.indent_level = 0
    return state, reader


def top_level_closures(reader):
    g = reader.header.globalCodeIndex
    out = []
    for ins in parse_hbc_bytecode(reader.function_headers[g], reader):
        if ins.inst.name in (
            'CreateClosure', 'CreateClosureLongIndex',
            'CreateAsyncClosure', 'CreateAsyncClosureLongIndex',
            'CreateGenerator', 'CreateGeneratorLongIndex',
        ):
            out.append((ins.arg3, ins.inst.name))
    return out


class Overflow(BaseException):
    pass


class CappedIO(io.StringIO):
    """StringIO that aborts decompilation when output explodes."""

    def __init__(self, cap):
        super().__init__()
        self.cap = cap
        self.n = 0

    def write(self, s):
        self.n += len(s)
        if self.n > self.cap:
            raise Overflow()
        return super().write(s)


MODULE_BUDGET = int(os.environ.get('HERMES_BUDGET', '120'))
MODULE_DEADLINE = 0
OUTPUT_CAP = int(os.environ.get('HERMES_CAP', str(8 * 1024 * 1024)))


def child_closures(reader, fid):
    out = []
    for ins in parse_hbc_bytecode(reader.function_headers[fid], reader):
        if ins.inst.name in (
            'CreateClosure', 'CreateClosureLongIndex',
            'CreateAsyncClosure', 'CreateAsyncClosureLongIndex',
            'CreateGenerator', 'CreateGeneratorLongIndex',
        ):
            out.append(ins.arg3)
    return out


def decompile_to_str(state, reader, fid, depth=0, **kw):
    """Decompile one function (closures inlined). Falls back to disassembly.

    If inlining nested closures explodes (shared closures re-inlined into each
    other), the function is emitted as plain disassembly and each distinct
    direct child closure is decompiled separately, recursively.
    """
    global MODULE_DEADLINE
    if depth == 0:
        MODULE_DEADLINE = time.time() + MODULE_BUDGET
    over_budget = time.time() > MODULE_DEADLINE
    buf = CappedIO(OUTPUT_CAP if depth == 0 else OUTPUT_CAP // 4)
    old = sys.stdout
    sys.stdout = buf
    status = 'ok'
    extra = ''
    try:
        if over_budget:
            raise Overflow()
        signal.alarm(PER_FUNC_TIMEOUT if depth == 0 else max(5, PER_FUNC_TIMEOUT // 6))
        state.indent_level = 0
        state._active_decompilations = set()
        D.decompile_function(state, fid, **kw)
        signal.alarm(0)
    except (Timeout, Overflow) as e:
        signal.alarm(0)
        status = 'timeout' if isinstance(e, Timeout) else 'oversized'
        sys.stdout = old
        buf = io.StringIO()
        sys.stdout = buf
        buf.write('/* decompiler %s with nested closures inlined (fn#%d);\n'
                  '   emitting disassembly of this function, children decompiled separately below */\n'
                  % (status, fid))
        try:
            disassemble_function(reader, fid, reader.function_headers[fid])
        except BaseException:
            buf.write('(disassembly failed)\n')
        sys.stdout = old
        if depth < 12 and not over_budget:
            seen = set()
            for cid in child_closures(reader, fid):
                if cid in seen or cid == fid:
                    continue
                seen.add(cid)
                ctext, _ = decompile_to_str(state, reader, cid, depth + 1, is_closure=True)
                extra += '\n/* ---- child closure fn#%d of fn#%d ---- */\n%s\n' % (cid, fid, ctext)
        buf.write(extra)
    except BaseException:
        signal.alarm(0)
        status = 'error'
        buf.write('\n==== decompiler crashed ====\n')
        buf.write(traceback.format_exc())
    finally:
        signal.alarm(0)
        sys.stdout = old
    text = buf.getvalue()
    if status == 'ok' and '==== Falling back to Disassembly ====' in text:
        status = 'fallback'
    return text, status


def cmd_index(bundle, outdir):
    state, reader = load(bundle)
    tl = top_level_closures(reader)
    os.makedirs(outdir, exist_ok=True)
    with open(os.path.join(outdir, 'toplevel.json'), 'w') as f:
        json.dump(tl, f)
    print('top-level closures:', len(tl), 'functions:', len(reader.function_headers))

    # Decompile the global function with its direct closures shown as
    # placeholders; this yields the Metro __d(<factory>, moduleId, [deps]) table.
    orig = FunctionTableIndex.closure_decompile

    def patched(self, parent_closure):
        sys.stdout.write('<fn#%d>' % self.function_id)

    FunctionTableIndex.closure_decompile = patched
    text, status = decompile_to_str(state, reader, reader.header.globalCodeIndex)
    FunctionTableIndex.closure_decompile = orig
    with open(os.path.join(outdir, '_global.js'), 'w', encoding='utf-8') as f:
        f.write('// status: %s\n' % status)
        f.write(text)
    print('global:', status, len(text), 'bytes')


def cmd_worker(bundle, outdir, start, end, per_file=250):
    state, reader = load(bundle)
    with open(os.path.join(outdir, 'toplevel.json')) as f:
        tl = json.load(f)
    end = min(end, len(tl))
    stats = {'ok': 0, 'fallback': 0, 'timeout': 0, 'oversized': 0, 'error': 0}
    failed = []
    t0 = time.time()
    i = start
    while i < end:
        j = min(i + per_file, end)
        path = os.path.join(outdir, 'modules_%06d-%06d.js' % (i, j - 1))
        tmp = path + '.part'
        with open(tmp, 'w', encoding='utf-8') as out:
            out.write('// Decompiled with hermes-dec from index.android.bundle (Hermes v98)\n')
            out.write('// top-level function index %d..%d\n\n' % (i, j - 1))
            for k in range(i, j):
                fid, kind = tl[k]
                kw = {'is_closure': True}
                if kind.startswith('CreateAsync'):
                    kw['is_async'] = True
                if kind.startswith('CreateGenerator'):
                    kw['is_generator'] = True
                t1 = time.time()
                text, status = decompile_to_str(state, reader, fid, **kw)
                if time.time() - t1 > 5:
                    print('slow top-level #%d fn#%d %.0fs %s %d bytes' % (k, fid, time.time() - t1, status, len(text)), flush=True)
                stats[status] += 1
                if status != 'ok':
                    failed.append((k, fid, status))
                out.write('// ===== top-level #%d  fn#%d  [%s] =====\n' % (k, fid, status))
                out.write(text)
                out.write('\n\n')
        os.replace(tmp, path)
        print('[%d-%d] done %.0fs stats=%s' % (i, j - 1, time.time() - t0, stats), flush=True)
        i = j
    with open(os.path.join(outdir, 'failed_%06d-%06d.json' % (start, end - 1)), 'w') as f:
        json.dump({'stats': stats, 'failed': failed,
                   'calldirect': sorted(state.calldirect_function_ids),
                   'visited': sorted(VISITED)}, f)


def cmd_extra(bundle, outdir):
    """Decompile functions reachable only via CallDirect (not nested closures)."""
    import glob
    ids = set()
    for p in glob.glob(os.path.join(outdir, 'failed_*.json')):
        with open(p) as f:
            ids.update(json.load(f)['calldirect'])
    state, reader = load(bundle)
    path = os.path.join(outdir, 'calldirect.js')
    with open(path, 'w', encoding='utf-8') as out:
        for fid in sorted(ids):
            text, status = decompile_to_str(state, reader, fid)
            out.write('// ===== calldirect fn#%d [%s] =====\n' % (fid, status))
            out.write(text + '\n\n')
    print('calldirect functions:', len(ids))


if __name__ == '__main__':
    cmd = sys.argv[1]
    if cmd == 'index':
        cmd_index(sys.argv[2], sys.argv[3])
    elif cmd == 'worker':
        cmd_worker(sys.argv[2], sys.argv[3], int(sys.argv[4]), int(sys.argv[5]),
                   int(sys.argv[6]) if len(sys.argv) > 6 else 250)
    elif cmd == 'extra':
        cmd_extra(sys.argv[2], sys.argv[3])
