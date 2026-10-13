# Functions affected by unmodelled `usdot` instructions

Ghidra 11.3.2 cannot translate the ARMv8.6 `usdot` (mixed-sign int8 dot product) instruction. Its p-code generation fails, so inside the functions below
the decompiled C is **missing or wrong around those instructions** (and Ghidra gave up on some of the functions entirely, marked `[FAILED]`
with a disassembly in `failed_functions.asm`). Only a handful of functions are affected; they have the dense vector-instruction profile of SIMD kernels (not inspected further).

| function | address | size | `usdot` count | Ghidra status |
|---|---|---|---|---|
| `FUN_00a31d68` | 00a31d68 | 1784 | 3 | FAILED (disassembly only) |
| `FUN_00acf2c0` | 00acf2c0 | 2076 | 49 | decompiled, unreliable |
| `FUN_00acfa48` | 00acfa48 | 48 | 4 | decompiled, unreliable |
| `FUN_00acfa9c` | 00acfa9c | 20 | 1 | decompiled, unreliable |
| (no function) | acfb0c | - | 1 | - |
| `FUN_00acfefc` | 00acfefc | 2684 | 58 | decompiled, unreliable |
| `FUN_00ad0850` | 00ad0850 | 48 | 4 | decompiled, unreliable |
| `FUN_00ad08a4` | 00ad08a4 | 20 | 1 | decompiled, unreliable |
| (no function) | ad0914 | - | 1 | - |
| (no function) | ad099c | - | 1 | - |
