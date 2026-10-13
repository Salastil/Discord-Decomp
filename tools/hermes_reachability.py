import sys, json, time
sys.path.insert(0,'.')
import hermes_decompile as H
from hermes_dec.parsers.hbc_bytecode_parser import parse_hbc_bytecode
state, reader = H.load('base/assets/index.android.bundle')
n=len(reader.function_headers)
CL=('CreateClosure','CreateClosureLongIndex','CreateAsyncClosure','CreateAsyncClosureLongIndex','CreateGenerator','CreateGeneratorLongIndex')
children={}
other_refs={}
t=time.time()
for fid in range(n):
    ch=[];ot=[]
    try:
        for ins in parse_hbc_bytecode(reader.function_headers[fid], reader):
            nm=ins.inst.name
            if nm in CL: ch.append(ins.arg3)
            elif nm.startswith(('CreateBaseClass','CreateDerivedClass')):
                ch.append(ins.arg4 if nm.startswith('CreateBaseClass') else ins.arg5)
            elif nm.startswith('CallDirect'): ot.append(getattr(ins,'arg3',None))
    except Exception as e:
        print('parse fail',fid,e)
    children[fid]=ch; other_refs[fid]=ot
print('parsed',time.time()-t)
g=reader.header.globalCodeIndex
seen={g}; stack=[g]
while stack:
    f=stack.pop()
    for c in children[f]:
        if c not in seen: seen.add(c); stack.append(c)
print('total',n,'reachable via closures',len(seen),'unreachable',n-len(seen))
un=[f for f in range(n) if f not in seen]
cd=sorted({x for v in other_refs.values() for x in v if x is not None})
print('calldirect targets',len(cd),'of which unreachable',len([x for x in cd if x not in seen]))
json.dump({'unreachable':un,'calldirect':cd},open('out/hermes-js/unreachable.json','w'))
# what are unreachable names
from collections import Counter
print(Counter(reader.strings[reader.function_headers[f].functionName] for f in un).most_common(15))
