#!/usr/bin/env python3
# usage: native_unmodelled.py <ghidra headless log> <native/<lib> output dir>
# Lists functions containing instructions whose p-code Ghidra failed to generate ("Pcode error at ...").
import re,sys,bisect,json
log,out=sys.argv[1],sys.argv[2]
rows=[l.rstrip('\n').split('\t') for l in open(out+'/functions.tsv')][1:]
fs=sorted((int(a,16),int(s),n) for a,s,n,_ in rows)
starts=[f[0] for f in fs]
addrs=sorted({int(m.group(1),16) for l in open(log,errors='replace') for m in [re.search(r'Pcode error at ([0-9a-f]+)',l)] if m})
aff={}
for a in addrs:
    i=bisect.bisect_right(starts,a)-1
    f=fs[i]
    if f[0]<=a<f[0]+f[1]: aff.setdefault(f,[]).append(a)
    else: aff.setdefault(('?',a),[]).append(a)
failed=set()
import glob
for p in glob.glob(out+'/c/*.c'):
    for l in open(p,errors='replace'):
        m=re.match(r'// ===== ([0-9a-f]+)  .*\[FAILED\]',l)
        if m: failed.add(int(m.group(1),16))
print('affected functions:',len(aff),'| of which Ghidra failed to decompile:',len([f for f in aff if f[0] in failed]))
lines=['# Functions affected by unmodelled `usdot` instructions\n',
'Ghidra 11.3.2 cannot translate the ARMv8.6 `usdot` (mixed-sign int8 dot product) instruction. Its p-code generation fails, so inside the functions below',
'the decompiled C is **missing or wrong around those instructions** (and Ghidra gave up on some of the functions entirely, marked `[FAILED]`',
'with a disassembly in `failed_functions.asm`). Only a handful of functions are affected; they have the dense vector-instruction profile of SIMD kernels (not inspected further).\n',
'| function | address | size | `usdot` count | Ghidra status |','|---|---|---|---|---|']
for f,v in sorted(aff.items(),key=lambda kv: kv[0][0] if kv[0][0]!='?' else kv[0][1]):
    if f[0]=='?': lines.append('| (no function) | %x | - | 1 | - |'%f[1]); continue
    lines.append('| `%s` | %08x | %d | %d | %s |'%(f[2],f[0],f[1],len(v),'FAILED (disassembly only)' if f[0] in failed else 'decompiled, unreliable'))
open(out+'/UNMODELLED_INSTRUCTIONS.md','w').write('\n'.join(lines)+'\n')
print('\n'.join(lines[:14]))
