# Known gaps and fidelity limits

A decompilation is a reconstruction, not the original source. Read this before
using anything here as ground truth.

## 1. Native code (arm64-v8a only)

Native libraries are handled in [NATIVE-LIBS.md](NATIVE-LIBS.md): Discord-authored and closed-source libs, and open-source libs whose
exact version could not be established, are decompiled with Ghidra 11.3.2 into `native/`; open-source libs with an established
version are only cited (version + upstream link). Key limits:

* **arm64-v8a only.** armeabi-v7a, x86 and x86_64 builds were not processed.
* **Pseudo-C from stripped binaries**: `FUN_<addr>` names (only ~1.7% of `libdiscord.so` functions have names), inferred types.
* **`libdiscord.so` has 10 functions Ghidra cannot model** (`usdot`), see `native/libdiscord/UNMODELLED_INSTRUCTIONS.md`.
* 51 functions across all libs timed out or crashed the decompiler; each has a capstone disassembly in `failed_functions.asm`.
* The Rust libraries (`libdiscore`, `libappmodules`) decompile poorly; use their crate list (`docs/native/rust-crates.md`) and strings.
* Versions of WebRTC/Opus/BoringSSL inside `libdiscord.so` are not recoverable.
* `libkrisp-audio-sdk.so` is proprietary third-party code (Krisp); check its licence before redistributing.

## 2. Java / Kotlin (jadx 1.5.1)

* 14,046 `.java` files from `classes.dex`..`classes4.dex`.
* Names are **R8-obfuscated** (`wq.s`, `ip.o0`, ...). Discord's own bridge
  packages under `com/discord/*` keep real names; most of the rest does not.
  No de-obfuscation (`--deobf`) was applied, so names are the ones in the APK.
* jadx marks code it could not fully structure with `JADX WARN` comments
  (~23.7k comments across the tree; e.g. 452 files contain
  `Code restructure failed`, 87 `Failed to restore switch`). Treat those methods
  as approximate and check the bytecode.
* jadx reported 32 error entries in total. The distinct methods that failed
  outright (partial body / skipped) are:

  ```
  bd.a.b(qc.k,long)                                   Regions count limit reached
  n2.h.D(BufferedInputStream,BufferedOutputStream)    Regions count limit reached
  gq.g.b(cq.i0,eq.g,a4.i,boolean)                     IfRegionVisitor
  com.facebook.imagepipeline.core.c.e()               ModVisitor
  com.facebook.imagepipeline.nativecode.b.w(...)      ModVisitor
  androidx.appcompat.app.a.onCreateView(...)          RegionMakerVisitor
  app.rive.runtime.kotlin.controllers.RiveFileController.<init>(...)
  com.appsflyer.internal.AFa1jSDK.<clinit>            type inference
  com.appsflyer.internal.AFi1hSDK.<clinit>            type inference
  ij.j0.f(Object,protobuf.h,ij.l)                     type inference
  com.discord.chat.bridge.codedlinks.GuildEventInviteEmbedImpl.<init>(...)  NPE (huge synthetic ctor)
  com.facebook.react.views.scroll.ReactScrollViewHelper.ReactScrollViewScrollState.<init>(...)
  fe.a.e(byte[],int,boolean)
  tn.g.j(String,String)
  wq.c.<init>(...)  wq.s.<init>(...)
  ```

  Only one of these (`GuildEventInviteEmbedImpl`) is Discord-authored, and it is
  a synthetic default-argument constructor (`DefaultConstructorMarker`) with ~50 parameters.
* Binary resources (png/webp/ttf/mp3/lottie/webm and the raw `.dex` copies)
  are not in the repo; only decoded text resources are. They are in the
  original bundle.
* The 4 non-base split APKs for ABIs contain only `.so` files; the
  language/density splits contain only resources. They were not separately
  decoded (the base APK already carries the default strings).

## 3. Hermes bytecode (the JavaScript layer)

Most of Discord's application logic is in `assets/index.android.bundle`,
a 67 MB **Hermes bytecode v98** file (153,899 functions, 17,808 top-level Metro
modules, 335,441 strings). Original JS source is not recoverable. What you get is
produced by [hermes-dec](https://github.com/P1sec/hermes-dec) 0.1.7 and has
these properties:

* **Pseudo-JavaScript, not the original JS.** Locals are registers
  (`r0`..`rN`), arguments `a0..aN`, captured variables
  `_closureN_slotM` / `_env_rN_slotM`. Control flow that the tool could not
  structure is emitted as `switch(_funN_ip)` state machines.
* **Names are minified** by Metro/Hermes in the release build (`t`, `s`, ...).
  Property names and string constants are intact, and that is where most of the
  readable signal is: endpoints, event names, flag names, Redux-style action
  types (`CONNECTION_OPEN`, `MESSAGE_CREATE`, ...).
* hermes-dec 0.1.7 ships opcode tables up to v99 but logs a warning that v98 is
  "a development or recent version ... not formally supported". We checked it as follows: all 153,899 functions
  disassemble with zero unknown opcodes (190 distinct opcodes seen), and
  decompiled output is syntactically sensible. This validates the opcode table;
  it does **not** prove every instruction is *semantically* right.
* **Patch applied (`tools/hermes-dec-0.1.7-v98-classes.patch`).** Stock hermes-dec
  does not handle three v98 opcodes that Discord's bundle uses heavily:
  `CreateBaseClass` / `CreateDerivedClass` (+`LongIndex`; 1,521 uses) and
  `CallWithNewTarget` (833 uses, i.e. `super(...)`). Without the patch ~3,500
  functions (every ES6 class constructor and everything nested in them) are
  silently missing. The patch renders them as
  `__createBaseClass(function(){...})`, `__createDerivedClass(superCtor, function(){...})`
  and `__callWithNewTarget(superCtor, newTarget, [this, ...args])`. These helper
  names are our notation, not real JS. In `__callWithNewTarget(...)` the first
  array element is the `this`/receiver register. Methods attached to a class appear afterwards as ordinary
  property stores on the constructor / its `.prototype` register; the tool does
  not fold them back into `class { ... }` syntax.
* **Closure-environment resolution is partial.** Because each top-level module is
  decompiled independently, the tool prints warnings like
  `LoadFromEnvironment references unknown register N`, and some captured-variable
  reads appear as raw `_env_rN_slotM` instead of a named variable.
* **Output explosion in one module.** Top-level #5062 (`fn#5023`, a
  validation-schema helper library: `optional/and/or/select/between/...`)
  re-inlines shared closures into each other exponentially: a single 1.8 KB
  function expanded to >200 MB before we capped it. Handling:
  `hermes/js/modules_005000-005249.js` holds #5062 as plain *disassembly* of
  `fn#5023` (marked `[oversized]`), and the 95 functions nested under it are in
  `hermes/js/missing_functions.js`, decompiled one by one. 79 of those are normal
  decompiled pseudo-JS; 16 (the `between/lt/gt/lte/gte/int/finite/...` schema
  builders) are again too large to inline and appear as disassembly plus their
  child closures decompiled separately. So for this one library, expect a mix of
  pseudo-JS and raw bytecode listing.
* **Coverage is exact, not estimated.** The driver records every function ID it
  decompiles: 153,899 of 153,899 functions are present. 153,803 come from
  `modules_*.js`, 95 from `missing_functions.js`, and `fn#0` (the global
  function) is `_global.js`, where module factories show as `<fn#N>`
  placeholders. No "Unsupported instruction" markers remain in the output. See
  `hermes/coverage/summary.json`.
* `assets/index.android.bundle.patch` is an `MBSDIFF43` binary-diff file with
  26 non-zero bytes (a near-empty OTA patch). It contains no separate code.

## 4. Provenance

The input is an `.apkm` bundle from a third-party mirror (the signature files
inside are `APKMIRRO.*`; the bundle carries APKMirror's re-signing wrapper).
We did not verify Discord's original APK signature, so we cannot show these bytes
are byte-identical to what Google Play serves. SHA-256 of what we processed:

```
128af8c302d12467e3f4fd70ce8bc936062938a5e9b6c402370146c9f2530baf  discord.apkm
f55d93282953cb8cb5f0375a69e6358f5a33641a14c56d7a7b79692c064ea6e7  base.apk
bf13d2dfd752b7802d7edd9e4c8b0d950f20bde5a98634c5256cc6ff42b02d90  assets/index.android.bundle
```

If provenance matters for your verification, compare against a copy pulled
from a device you trust.
