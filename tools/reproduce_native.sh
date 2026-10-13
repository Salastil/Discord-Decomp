#!/usr/bin/env bash
# Reproduce native/ (Ghidra decompilation of the arm64-v8a libraries).
#
#   tools/reproduce_native.sh /path/to/discord.apkm /path/to/workdir [lib.so ...]
#
# With no lib names, processes the full list below (everything under native/).
# Requirements: Java 21, python3, unzip, curl, ~10 GB RAM, ~10 GB disk.
# Time on 4 cores: libdiscord.so ~25 min, libdiscore ~16 min, libkrisp ~10 min, the rest a few min each.
set -euo pipefail

APKM="$(realpath "$1")"
WORK="$(realpath -m "${2:-./work-native}")"
shift 2 || true
HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
GHIDRA_VERSION=11.3.2
GHIDRA_ZIP="ghidra_${GHIDRA_VERSION}_PUBLIC_20250415.zip"
GHIDRA_URL="https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_${GHIDRA_VERSION}_build/${GHIDRA_ZIP}"

LIBS=("$@")
if [ ${#LIBS[@]} -eq 0 ]; then
  LIBS=(
    # Discord-authored / closed-source
    libdiscord.so liblibdiscore-rn-jsi-module.so libappmodules.so libkv_storage.so libdsti.so
    libsizing_util.so libtimezone-hermes-fix.so libcrash-reporting.so libkrisp-audio-sdk.so
    # open source, exact version not recoverable from the APK
    libplayagerangedeclaration.so libgesturehandler.so librnscreens.so libreact_codegen_ReanimatedView.so
    libreact_codegen_RNKC.so libreact_codegen_safeareacontext.so libreact_codegen_RNCSlider.so
    libnative-filters.so libimagepipeline.so liblitr-jni.so libgifimage.so
    libreact_codegen_rngesturehandler_codegen.so libNitroModules.so libnative-imagetranscoder.so
    libstatic-webp.so libapng-drawable.so libreact_codegen_rnsvg.so libucrop.so
    libreact_codegen_rnscreens.so librive.so librive-android.so
  )
fi

mkdir -p "$WORK"/{bundle,libs,ghproj,out,logs,tools}
cd "$WORK"

echo "== unpack arm64-v8a libs"
unzip -q -o "$APKM" split_config.arm64_v8a.apk -d bundle
unzip -q -o bundle/split_config.arm64_v8a.apk 'lib/arm64-v8a/*' -d libs

echo "== Ghidra ${GHIDRA_VERSION}"
if [ ! -d tools/ghidra ]; then
  curl -sSL -o tools/ghidra.zip "$GHIDRA_URL"
  unzip -q -o tools/ghidra.zip -d tools/ghidra-dist
  mv tools/ghidra-dist/ghidra_${GHIDRA_VERSION}_PUBLIC tools/ghidra
fi
G="$WORK/tools/ghidra"
# let us set the JVM heap from the environment (default in analyzeHeadless is 2G)
sed -i 's/^MAXMEM=2G/MAXMEM=${GHIDRA_MAXMEM:-2G}/' "$G/support/analyzeHeadless"
pip install -q capstone

mkdir -p tools/scripts && cp "$HERE/ExportDecompiled.java" tools/scripts/

for lib in "${LIBS[@]}"; do
  name="${lib%.so}"
  mem=2G
  case "$lib" in libdiscord.so) mem=6G;; liblibdiscore-rn-jsi-module.so|libappmodules.so|libkrisp-audio-sdk.so|libkv_storage.so) mem=5G;; esac
  echo "== $lib (heap $mem)"
  mkdir -p "out/$name"
  GHIDRA_MAXMEM=$mem "$G/support/analyzeHeadless" "ghproj/$name" "$name" \
      -import "libs/lib/arm64-v8a/$lib" \
      -scriptPath tools/scripts -postScript ExportDecompiled.java "$WORK/out/$name" 400 60 \
      -deleteProject > "logs/$name.log" 2>&1
  python3 "$HERE/native_fallback_disasm.py" "libs/lib/arm64-v8a/$lib" "out/$name"
done
echo "done: $WORK/out/<lib>/"
