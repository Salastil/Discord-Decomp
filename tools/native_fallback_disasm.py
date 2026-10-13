#!/usr/bin/env python3
"""Disassemble the functions Ghidra's decompiler failed on (timeouts, empty results).

usage: native_fallback_disasm.py <lib.so> <ghidra-out-dir>

Reads <out>/c/*.c for "[FAILED]" headers and <out>/functions.tsv for sizes, disassembles
those address ranges straight from the ELF with capstone and writes
<out>/failed_functions.asm. Ghidra rebases AArch64 ELF shared objects to 0x100000,
so file vaddr = ghidra address - 0x100000 (checked against the ELF's first PT_LOAD).
"""
import glob
import json
import os
import re
import struct
import sys

from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM

GHIDRA_BASE = 0x100000


def load_segments(elf):
    with open(elf, 'rb') as f:
        data = f.read()
    assert data[:4] == b'\x7fELF' and data[4] == 2, 'expected ELF64'
    e_phoff, = struct.unpack_from('<Q', data, 0x20)
    e_phentsize, e_phnum = struct.unpack_from('<HH', data, 0x36)
    segs = []
    for i in range(e_phnum):
        off = e_phoff + i * e_phentsize
        p_type, p_flags, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_align = struct.unpack_from('<IIQQQQQQ', data, off)
        if p_type == 1:
            segs.append((p_vaddr, p_offset, p_filesz))
    return data, segs


def read_vaddr(data, segs, vaddr, size):
    for va, off, fsz in segs:
        if va <= vaddr < va + fsz:
            start = off + (vaddr - va)
            return data[start:start + min(size, va + fsz - vaddr)]
    return b''


def main(elf, out):
    data, segs = load_segments(elf)
    sizes = {}
    with open(os.path.join(out, 'functions.tsv'), encoding='utf-8') as f:
        next(f)
        for line in f:
            a, s, n, _ = line.rstrip('\n').split('\t')
            sizes[a] = (int(s), n)
    failed = []
    for path in sorted(glob.glob(os.path.join(out, 'c', '*.c'))):
        with open(path, encoding='utf-8') as f:
            for line in f:
                m = re.match(r'// ===== ([0-9a-f]+)  (.*?)  \[FAILED\] =====', line)
                if m:
                    failed.append((m.group(1), m.group(2)))
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    md.detail = False
    n_ok = 0
    with open(os.path.join(out, 'failed_functions.asm'), 'w', encoding='utf-8') as o:
        o.write('; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone %s\n' % __import__('capstone').__version__)
        o.write('; addresses are Ghidra addresses (ELF vaddr + 0x%x)\n\n' % GHIDRA_BASE)
        for addr, name in failed:
            size, _ = sizes.get(addr, (0, name))
            va = int(addr, 16) - GHIDRA_BASE
            code = read_vaddr(data, segs, va, max(size, 4))
            o.write('; ===== %s  %s  (%d bytes) =====\n' % (addr, name, size))
            count = 0
            for ins in md.disasm(code, va + GHIDRA_BASE):
                o.write('%08x:  %-8s %s\n' % (ins.address, ins.mnemonic, ins.op_str))
                count += 1
            if count:
                n_ok += 1
            else:
                o.write('; (no instructions decoded)\n')
            o.write('\n')
    summ_path = os.path.join(out, 'summary.json')
    with open(summ_path) as f:
        s = json.load(f)
    s['failed_functions_disassembled'] = n_ok
    with open(summ_path, 'w') as f:
        json.dump(s, f)
    print('%s: %d failed functions, %d disassembled -> failed_functions.asm' % (os.path.basename(elf), len(failed), n_ok))


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
