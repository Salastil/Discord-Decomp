#!/usr/bin/env bash
# Reproduce the contents of android/ and hermes/ from the original .apkm.
#
#   tools/reproduce.sh /path/to/discord-348.10.apkm /path/to/workdir
#
# Requirements: Java 17+, python3 + pip, unzip, curl. Needs ~15 GB free and ~10 GB RAM.
# Takes roughly 10-15 minutes on 4 cores.
set -euo pipefail

APKM="$(realpath "$1")"
WORK="$(realpath -m "${2:-./work}")"
HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
JADX_VERSION=1.5.1
HERMES_DEC_VERSION=0.1.7

mkdir -p "$WORK"/{bundle,base,tools}
cd "$WORK"

echo "== 1. unpack the .apkm (a zip of split APKs) and base.apk"
unzip -q -o "$APKM" -d bundle
unzip -q -o bundle/base.apk -d base 2>/dev/null || true   # jadx's "zip bomb" warning is about the .patch asset

echo "== 2. jadx: dex -> Java/Kotlin sources + decoded resources"
if [ ! -x tools/jadx/bin/jadx ]; then
  curl -sSL -o tools/jadx.zip \
    "https://github.com/skylot/jadx/releases/download/v${JADX_VERSION}/jadx-${JADX_VERSION}.zip"
  unzip -q -o tools/jadx.zip -d tools/jadx
fi
JAVA_OPTS="-Xmx9g" tools/jadx/bin/jadx -j 3 --show-bad-code -d out/jadx-base bundle/base.apk || true
# jadx exits non-zero for per-method failures (see docs/KNOWN-GAPS.md); output is still complete.

echo "== 3. hermes-dec ${HERMES_DEC_VERSION} + our v98 class-opcode patch"
python3 -m pip install -q --target tools/hermesdec "hermes-dec==${HERMES_DEC_VERSION}"
patch -p1 -d tools/hermesdec < "$HERE/hermes-dec-0.1.7-v98-classes.patch"

echo "== 4. decompile the Hermes bundle (parallel, chunked)"
export PYTHONPATH="$WORK/tools/hermesdec" HERMES_TIMEOUT=60 HERMES_BUDGET=120
BUNDLE=base/assets/index.android.bundle
OUT=out/hermes-js
mkdir -p "$OUT" logs
python3 "$HERE/hermes_decompile.py" index "$BUNDLE" "$OUT"
seq 0 1000 17807 | xargs -P4 -I{} bash -c '
  e=$(( {} + 1000 )); [ $e -gt 17808 ] && e=17808
  python3 "'"$HERE"'/hermes_decompile.py" worker "'"$BUNDLE"'" "'"$OUT"'" {} $e 250 > logs/w{}.log 2>&1'

echo "== 5. (optional) full Hermes disassembly, ~620 MB, not committed to the repo"
echo "   python3 tools/hermesdec/bin/hbc-disassembler $BUNDLE out/hermes.hasm"

echo "done: $WORK/out/jadx-base (Java + resources), $WORK/$OUT (Hermes JS)"
echo "Module #5062 (fn#5023) needs a bigger budget: see docs/KNOWN-GAPS.md"
