# Native libraries (arm64-v8a)

All `lib/<abi>/*.so` in the bundle were triaged by one rule: **if the library is open source and we can establish the exact upstream version, we cite that version and do not decompile it; otherwise we decompile it.** The other three ABIs (armeabi-v7a, x86, x86_64) ship the same sources compiled for those targets and were not processed separately.

Decompiled with **Ghidra 11.3.2** (headless, parallel decompiler, 60 s per-function timeout). Output per library is under `native/<lib>/`:

```
native/<lib>/c/funcs_<addr>.c     decompiled C, 400 functions per file, address order
native/<lib>/functions.tsv        address, size, name, auto|named
native/<lib>/strings.tsv          defined strings with addresses
native/<lib>/imports.txt, exports.txt
native/<lib>/failed_functions.asm capstone disassembly of functions Ghidra could not decompile
native/<lib>/summary.json         counts
```

**Read the fidelity notes at the bottom before trusting anything below.**

## 1. Decompiled: Discord-authored or closed-source

| Library | Size | What it is | Provenance / versions | Coverage |
|---|---|---|---|---|
| `libdiscord.so` | 12.4 MB | Discord voice/video engine (C++). Built on Chromium **WebRTC** (embedded source paths: `modules/`, `pc/`, `rtc_base/`, `video/`, `sdk/android/`) with `third_party/{boringssl,opus,abseil-cpp,protobuf,jni_zero}` and **libdave** (`discord_common/native/third_party/libdave`, Discord's MLS-based E2EE). Exports `discord::voice::Connection::*` C++ symbols (MLS key packages/proposals) and JNI entry points. | Discord fork; the WebRTC/Opus/BoringSSL/libvpx revisions are **not recoverable** from the binary (no version strings found), so it is decompiled in full. 24 of 31,461 functions failed (4 timeouts, 20 with no error text); all 24 have a disassembly fallback. | 31437 / 31461 functions (24 failed -> asm fallback)<br>[native/libdiscord/](../native/libdiscord/) |
| `liblibdiscore-rn-jsi-module.so` | 10.0 MB | "libdiscore": Discord core in **Rust**, exposed to JS through a JSI module (Java bridge: `com/discord/libdiscore`). Contains SQLite and an HTTP/TLS stack (hyper/reqwest/rustls/tokio), serde-based stores (`CacheableExperimentConfig`, "Snowflake ID cannot be zero", database change tracking, ...). | Discord code. Toolchain `rustc 1.99.0-nightly (73dc9167f 2026-08-01)`. Embedded SQLite **3.50.2** (source id `2025-06-28 14:00:48 2af157d7…`). Open-source crates and exact versions: see [native/rust-crates.md](native/rust-crates.md). | 22434 / 22446 functions (12 failed -> asm fallback)<br>[native/liblibdiscore-rn-jsi-module/](../native/liblibdiscore-rn-jsi-module/) |
| `libappmodules.so` | 8.6 MB | React Native new-architecture app-modules registry (links the `libreact_codegen_*` libraries) **plus Rust**: Discord's `discord_markdown` crate (inline/link/emoji grammar). Its crate list is parsing-oriented (`nom`, `phf`, `aho-corasick`, `memchr`, `url`/`idna`, `icu_*`, `serde`); it has no HTTP/TLS or SQLite crates. | Toolchain `rustc 1.98.1 (48a229cea 2026-09-01)`. Crate versions: [native/rust-crates.md](native/rust-crates.md). | 15807 / 15810 functions (3 failed -> asm fallback)<br>[native/libappmodules/](../native/libappmodules/) |
| `libkv_storage.so` | 2.1 MB | Key-value storage JSI module (fbjni/JSI/ReactNative), statically linked SQLite. | Discord code. Embedded SQLite **3.40.0** (source id `2022-11-16 12:10:08 89c459e7…`). | 4540 / 4541 functions (1 failed -> asm fallback)<br>[native/libkv_storage/](../native/libkv_storage/) |
| `libdsti.so` | 1.1 MB | JNI for `com.discord.rlottie.RLottieDrawable` (Lottie/rlottie renderer). | Discord build of **rlottie** (Samsung, MIT; the same code Telegram forked). Upstream version is not recoverable, so decompiled in full. | 3179 / 3179 functions (0 failed -> asm fallback)<br>[native/libdsti/](../native/libdsti/) |
| `libsizing_util.so` | 0.0 MB | `facebook::react::SizingUtilState` (Java: `com/discord/sizing_util`). | Discord code; tiny. | 91 / 91 functions (0 failed -> asm fallback)<br>[native/libsizing_util/](../native/libsizing_util/) |
| `libtimezone-hermes-fix.so` | 0.0 MB | `TimezoneHermesFix` / `resetTzHermes` workaround for Hermes timezone caching. | Discord code; tiny. | 191 / 191 functions (0 failed -> asm fallback)<br>[native/libtimezone-hermes-fix/](../native/libtimezone-hermes-fix/) |
| `libcrash-reporting.so` | 0.1 MB | `discord::NativeCrashReporting` JNI (`initNative`, `registerNatives`) with a glog sink named `sentry_sink`, i.e. forwards native logging/crashes to Sentry. | Discord code; tiny. | 284 / 284 functions (0 failed -> asm fallback)<br>[native/libcrash-reporting/](../native/libcrash-reporting/) |
| `libkrisp-audio-sdk.so` | 6.6 MB | Krisp noise-suppression / VAD SDK (`krispProcessVadInt16`, ...), bundling ONNX Runtime and protobuf. | **Proprietary, closed-source third-party SDK (Krisp).** Decompiled because it has no open-source version to cite. Check Krisp's licence terms before redistributing or reverse-engineering further. Embedded ONNX Runtime build info: `git-commit-id=387127404e`. | 16453 / 16456 functions (3 failed -> asm fallback)<br>[native/libkrisp-audio-sdk/](../native/libkrisp-audio-sdk/) |

## 2. Decompiled because no exact upstream version could be established

These are open source, but the APK does not contain their package version, so we could not honour "cite the exact version". If you can identify the versions (e.g. from Discord's lockfile), these can be dropped in favour of upstream source.

| Library | Size | What it is | Notes | Coverage |
|---|---|---|---|---|
| `libplayagerangedeclaration.so` | 0.2 MB | Nitro HybridObject `margelo::nitro::playagerangedeclaration::HybridPlayAgeRangeDeclarationSpec` (Play Age Range declaration API). | Author and version not determinable from the APK. | 683 / 683 functions (0 failed -> asm fallback)<br>[native/libplayagerangedeclaration/](../native/libplayagerangedeclaration/) |
| `libgesturehandler.so` | 0.1 MB | react-native-gesture-handler native code (`com/swmansion/gesturehandler`). | Open source (software-mansion/react-native-gesture-handler); version not present in the APK. | 328 / 328 functions (0 failed -> asm fallback)<br>[native/libgesturehandler/](../native/libgesturehandler/) |
| `librnscreens.so` | 0.1 MB | react-native-screens native code. | Open source (software-mansion/react-native-screens); version not present in the APK. | 387 / 387 functions (0 failed -> asm fallback)<br>[native/librnscreens/](../native/librnscreens/) |
| `libreact_codegen_ReanimatedView.so` | 0.1 MB | RN codegen for Reanimated view components. | Generated from the Reanimated package (3.19.4, see below). | 360 / 360 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_ReanimatedView/](../native/libreact_codegen_ReanimatedView/) |
| `libreact_codegen_RNKC.so` | 0.1 MB | RN codegen for react-native-keyboard-controller. | Open source; version not present in the APK. | 433 / 433 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_RNKC/](../native/libreact_codegen_RNKC/) |
| `libreact_codegen_safeareacontext.so` | 0.1 MB | RN codegen for react-native-safe-area-context. | Open source; version not present in the APK. | 466 / 466 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_safeareacontext/](../native/libreact_codegen_safeareacontext/) |
| `libreact_codegen_RNCSlider.so` | 0.2 MB | RN codegen for @react-native-community/slider. | Open source; version not present in the APK. | 479 / 479 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_RNCSlider/](../native/libreact_codegen_RNCSlider/) |
| `libnative-filters.so` | 0.0 MB | Fresco native filters. | Open source (facebook/fresco); version not present in the APK. | 48 / 48 functions (0 failed -> asm fallback)<br>[native/libnative-filters/](../native/libnative-filters/) |
| `libimagepipeline.so` | 0.0 MB | Fresco image pipeline JNI. | Open source (facebook/fresco); version not present in the APK. | 37 / 37 functions (0 failed -> asm fallback)<br>[native/libimagepipeline/](../native/libimagepipeline/) |
| `liblitr-jni.so` | 0.2 MB | LiTr (LinkedIn) video transcoding JNI. | Open source (linkedin/LiTr); version not present in the APK. Built with Android clang 12.0.8. | 632 / 632 functions (0 failed -> asm fallback)<br>[native/liblitr-jni/](../native/liblitr-jni/) |
| `libgifimage.so` | 0.3 MB | Fresco animated-GIF decoder (giflib). | Open source; Fresco and giflib versions not present in the APK. | 881 / 881 functions (0 failed -> asm fallback)<br>[native/libgifimage/](../native/libgifimage/) |
| `libreact_codegen_rngesturehandler_codegen.so` | 0.3 MB | RN codegen for gesture-handler. | Open source; version not present in the APK. | 772 / 772 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_rngesturehandler_codegen/](../native/libreact_codegen_rngesturehandler_codegen/) |
| `libNitroModules.so` | 0.7 MB | react-native-nitro-modules runtime (Margelo). | Open source (mrousavy/nitro); version not present in the APK. | 1712 / 1712 functions (0 failed -> asm fallback)<br>[native/libNitroModules/](../native/libNitroModules/) |
| `libnative-imagetranscoder.so` | 0.6 MB | Fresco native JPEG transcoder. | Open source; embeds **libjpeg-turbo 2.1.5.1 (build 20240418)**; Fresco version not present in the APK. | 1132 / 1134 functions (2 failed -> asm fallback)<br>[native/libnative-imagetranscoder/](../native/libnative-imagetranscoder/) |
| `libstatic-webp.so` | 0.5 MB | Fresco static libwebp. | Open source; libwebp/Fresco versions not recoverable from strings. | 1112 / 1116 functions (4 failed -> asm fallback)<br>[native/libstatic-webp/](../native/libstatic-webp/) |
| `libapng-drawable.so` | 0.6 MB | APNG drawable decoder. | Open source; embeds **libpng 1.6.44**; package version not present in the APK. | 1940 / 1940 functions (0 failed -> asm fallback)<br>[native/libapng-drawable/](../native/libapng-drawable/) |
| `libreact_codegen_rnsvg.so` | 0.6 MB | RN codegen for react-native-svg. | Open source; version not present in the APK. | 1130 / 1130 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_rnsvg/](../native/libreact_codegen_rnsvg/) |
| `libucrop.so` | 1.1 MB | uCrop image-cropping native code. | Open source (Yalantis/uCrop); embeds **libpng 1.6.37**; uCrop version not present in the APK. | 2283 / 2284 functions (1 failed -> asm fallback)<br>[native/libucrop/](../native/libucrop/) |
| `libreact_codegen_rnscreens.so` | 0.9 MB | RN codegen for react-native-screens. | Open source; version not present in the APK. | 2394 / 2394 functions (0 failed -> asm fallback)<br>[native/libreact_codegen_rnscreens/](../native/libreact_codegen_rnscreens/) |
| `librive.so` | 2.6 MB | Nitro HybridObject module for Rive (`margelo::nitro::rive`). | Open source (rive-app); version not present in the APK. | 5035 / 5035 functions (0 failed -> asm fallback)<br>[native/librive/](../native/librive/) |
| `librive-android.so` | 5.5 MB | Rive Android runtime (embeds HarfBuzz, miniaudio). | Open source (rive-app/rive-android); version not present in the APK. | 15711 / 15712 functions (1 failed -> asm fallback)<br>[native/librive-android/](../native/librive-android/) |

## 3. Open source with exact version: NOT decompiled, use upstream source

| Library | What | Version | Evidence | Upstream at that version |
|---|---|---|---|---|
| `libreactnative.so` | React Native (core C++ / Fabric / TurboModules) | **0.86.0** | `ReactNativeVersion.VERSION` = {major 0, minor 86, patch 0} in `android/sources/com/facebook/react/modules/systeminfo/ReactNativeVersion.java`. Caveat: Discord ships `com/discord/react_fork_overrides`, so some RN pieces are patched; the native lib was not diffed against stock 0.86.0. | https://github.com/facebook/react-native/tree/v0.86.0 |
| `libjsi.so, libfbjni.so, libreact_utilities.so, libhermestooling.so` | JSI, fbjni, RN utilities, Hermes tooling shipped inside React Native | **bundled with RN 0.86.0** | Same RN prefab/AAR; individual version strings are not embedded (inferred from being part of the RN release). | https://github.com/facebook/react-native/tree/v0.86.0/packages/react-native/ReactAndroid |
| `libhermesvm.so` | Hermes JS engine (bytecode **v98**) | **probably hermes-compiler `250829098.0.15`** | The string `250829098.0.15` sits among Hermes runtime messages in `.rodata` and the bundle header says bytecode v98; the exact mapping to a Hermes tag was not confirmed. | https://github.com/facebook/hermes |
| `libworklets.so, libreanimated.so` | react-native-reanimated native + worklets runtime | **3.19.4** | Java `com/swmansion/reanimated/BuildConfig` and the JS module (`jsVersion = '3.19.4'`, bundle module #1711) both say 3.19.4. | https://github.com/software-mansion/react-native-reanimated/tree/3.19.4 |
| `libsentry.so` | sentry-native | **0.12.3** | string `sentry.native.android/0.12.3`. | https://github.com/getsentry/sentry-native/tree/0.12.3 |
| `libsentry-android.so` | Sentry Android NDK JNI | **8.31.0** (SDK release) | `io/sentry/android/replay/BuildConfig.VERSION_NAME = "8.31.0"` (same SDK release train; the NDK module version itself is not embedded). | https://github.com/getsentry/sentry-java/tree/8.31.0 |
| `libmmkv.so` | Tencent MMKV | **v1.3.14** | string `v1.3.14` alongside `version %s, page size %d, arch %s`. | https://github.com/Tencent/MMKV/tree/v1.3.14 |
| `libzstd-jni-1.5.7-3.so` | zstd-jni (bundles zstd 1.5.7) | **1.5.7-3** | version is in the library file name. | https://github.com/luben/zstd-jni/tree/v1.5.7-3 |
| `libc++_shared.so` | LLVM libc++ from the Android NDK | Android clang **18.0.1 (r522817)** | `.comment` section; NDK revision not stated in the binary. | https://developer.android.com/ndk |

### Open-source code embedded *inside* the Discord libraries

| Embedded in | Component | Version | Evidence |
|---|---|---|---|
| `liblibdiscore-rn-jsi-module.so` | SQLite | 3.50.2 | version string + source id 2025-06-28; `rusqlite 0.37.0` in crate list |
| `libkv_storage.so` | SQLite | 3.40.0 | source id 2022-11-16 |
| `liblibdiscore-rn-jsi-module.so`, `libappmodules.so` | 58 + 26 Rust crates | see [native/rust-crates.md](native/rust-crates.md) | cargo registry paths in panic strings |
| `libdiscord.so` | WebRTC, BoringSSL, Opus, abseil, protobuf, libdave, libvpx | **not recoverable** | source paths only; no version strings |
| `libkrisp-audio-sdk.so` | ONNX Runtime | build `387127404e` | embedded build-info string |
| `libucrop.so` / `libapng-drawable.so` / `libnative-imagetranscoder.so` | libpng 1.6.37 / libpng 1.6.44 / libjpeg-turbo 2.1.5.1 | as listed | embedded version strings |

## Fidelity notes

* **Pseudo-C, not source.** Ghidra output is typed-by-inference C: `FUN_xxxx` names, `param_N`, `local_N`, no original names. Exported symbols (`libdiscord.so` exports many demangled C++ names; the Rust libs expose some) keep their names.
* **Stripped binaries.** Function discovery is heuristic; a few "functions" are really data (e.g. symbols such as `tokio::runtime::io::EXPOSE_IO`).
* **Rust is hard to read** in decompiled form (monomorphised generics, inlined iterators, `core::fmt` plumbing). The embedded panic strings and crate paths are often more informative than the code.
* **Unmodelled instructions (libdiscord.so only).** Ghidra 11.3.2 cannot translate the ARMv8.6 `usdot` instruction: 684 "Pcode error" log lines at 123 distinct addresses, all `usdot`, inside 10 functions. Those functions' C is unreliable around the vector code (one of them is `[FAILED]` and disassembly-only). List: [native/libdiscord/UNMODELLED_INSTRUCTIONS.md](../native/libdiscord/UNMODELLED_INSTRUCTIONS.md). No other library produced Pcode errors.
* **Few names.** Stripped binaries keep names only for exported/dynamic symbols. E.g. `libdiscord.so`: 542 of 31,461 functions are named (about 1.7%); the rest are `FUN_<address>`. Use `exports.txt` and `strings.tsv` as the entry points.
* **Timeouts.** Functions that exceeded 60 s are marked `[FAILED]` in the C and disassembled in `failed_functions.asm` instead.
* **Not re-verified:** no behavioural testing, and no diff against upstream sources.
