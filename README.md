# Discord-Decomp

Decompilation of **Discord for Android 348.10 (stable), `com.discord`, versionCode 348010**
for study and cross-checking against Nobilis.

> **Read [docs/KNOWN-GAPS.md](docs/KNOWN-GAPS.md) before relying on anything here.**
> This is reconstructed code, not Discord's source. Native libraries are not
> decompiled, names are minified, and the Hermes (JavaScript) output is pseudo-JS.

## What the app is made of

Discord Android is no longer a plain Kotlin app. It is a **React Native app on
Hermes**, plus a Java/Kotlin shell and native libraries:

| Layer | Where | Size | Decompiled here as |
|---|---|---|---|
| Application logic (UI, stores, API/gateway handling) | `assets/index.android.bundle`, Hermes bytecode **v98** | 67 MB, 153,899 functions, 17,808 Metro modules | `hermes/` (pseudo-JS) |
| Java/Kotlin shell, RN bridge, native-module wrappers, 3rd-party SDKs | `classes.dex` ..`classes4.dex` | 14,046 classes | `android/sources/` (jadx) |
| Native code (`libdiscord`, `libdiscore` JSI module, Hermes VM, ...) | `lib/<abi>/*.so` | tens of MB per ABI | **not decompiled** |

So for protocol and behaviour questions (REST routes, gateway events, store
logic, feature flags), **start in `hermes/`**, not `android/`.

## Layout

```
android/
  sources/            jadx output: Java/Kotlin (R8-obfuscated names, e.g. wq/s.java)
  resources/          AndroidManifest.xml, decoded res/ XML, text assets (no png/webp/fonts/audio)
hermes/
  js/modules_NNNNNN-NNNNNN.js   decompiled top-level modules, 250 per file, in bundle order
  js/_global.js                 the bundle's global function (Metro runtime + __d(...) registrations)
  js/missing_functions.js       95 functions under one oversized module (#5062), decompiled individually
  js/toplevel.json              [function_id, opcode] for each top-level closure, by index
  module-index.json             Metro moduleId -> factory fn, dependency moduleIds, chunk file
  strings.tsv                   all 335,441 string-table entries (index<TAB>string)
  coverage/                     summary.json (153,899/153,899 functions covered) + per-range stats
docs/KNOWN-GAPS.md    fidelity limits, jadx failures, provenance + hashes
tools/                the scripts and the hermes-dec patch used; reproduce.sh rebuilds everything
```

## Finding things

* Strings and endpoints: `grep -n '/channels/' hermes/strings.tsv`, then grep the
  `modules_*.js` chunks for the same literal; the decompiler keeps string constants
  and property names verbatim.
* A Metro module's dependencies: look it up in `hermes/module-index.json`
  (`modules["1234"]` gives `factory_fn`, `deps`, and the `chunk` file that contains it);
  in the chunk, search for `fn#<factory_fn>`.
* Each module starts with `// ===== top-level #K  fn#F  [status] =====`.
* A function's own header shows `// Original name: X` when Hermes kept a name.
* Java: Discord's own bridge code is under `android/sources/com/discord/**` with
  readable names; everything else is mostly obfuscated single-letter packages.

## How it was produced

* Input: user-supplied `discord.apkm` (APKMirror bundle: `base.apk` + split APKs for ABIs, densities and languages).
* Java: **jadx 1.5.1** on `base.apk` (`--show-bad-code`).
* JS: **hermes-dec 0.1.7** (`pip install hermes-dec==0.1.7`) with
  [a small patch](tools/hermes-dec-0.1.7-v98-classes.patch) adding the Hermes v98 class
  opcodes it lacks, driven by [tools/hermes_decompile.py](tools/hermes_decompile.py)
  (parallel, one top-level module at a time, with output caps and a disassembly fallback).
* [tools/reproduce.sh](tools/reproduce.sh) re-runs the whole pipeline from the `.apkm`.
* The full Hermes disassembly (~620 MB) is not committed; regenerate with
  `hbc-disassembler` (see `reproduce.sh`).

### Hashes of what was processed

```
128af8c302d12467e3f4fd70ce8bc936062938a5e9b6c402370146c9f2530baf  discord.apkm
f55d93282953cb8cb5f0375a69e6358f5a33641a14c56d7a7b79692c064ea6e7  base.apk
bf13d2dfd752b7802d7edd9e4c8b0d950f20bde5a98634c5256cc6ff42b02d90  assets/index.android.bundle
```

The bundle came from a third-party mirror and its Discord signature was not verified.

## Using this to check Nobilis

Treat the decompiled output as **evidence of what the client does**, not as a
spec: names are lost, control flow is approximate, and logic that lives in
`libdiscore` is invisible here. Good cross-checks are the ones that survive
decompilation: literal strings (routes, event/op names, flag names), constants,
the shape of payload objects built in the JS, and which fields the Java bridge
passes. For anything that depends on exact control flow, confirm against the
disassembly or the raw bytecode.
