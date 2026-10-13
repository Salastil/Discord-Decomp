#!/bin/bash
# usage: run_ghidra.sh <libfile> <heap>
cd "$(dirname "$0")"
LIB="$1"; MEM="${2:-4G}"; NAME="${LIB%.so}"
G=$PWD/tools/ghidra-dist/ghidra_11.3.2_PUBLIC
export GHIDRA_MAXMEM=$MEM
mkdir -p ghproj/$NAME native/out/$NAME logs-native
START=$(date +%s)
$G/support/analyzeHeadless ghproj/$NAME $NAME -import native/arm64/lib/arm64-v8a/$LIB \
  -scriptPath ghidra_scripts -postScript ExportDecompiled.java $PWD/native/out/$NAME 400 60 \
  -deleteProject > logs-native/$NAME.log 2>&1
echo "exit=$? seconds=$(( $(date +%s) - START ))" > logs-native/$NAME.done
