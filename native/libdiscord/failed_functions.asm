; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 0043bcdc  FUN_0043bcdc  (11988 bytes) =====
0043bcdc:  stp      x29, x30, [sp, #-0x60]!
0043bce0:  stp      x28, x27, [sp, #0x10]
0043bce4:  stp      x26, x25, [sp, #0x20]
0043bce8:  stp      x24, x23, [sp, #0x30]
0043bcec:  stp      x22, x21, [sp, #0x40]
0043bcf0:  stp      x20, x19, [sp, #0x50]
0043bcf4:  mov      x29, sp
0043bcf8:  sub      sp, sp, #0x850
0043bcfc:  str      x1, [sp, #0x1a8]
0043bd00:  mrs      x8, tpidr_el0
0043bd04:  str      x8, [sp, #0x190]
0043bd08:  mov      w19, w2
0043bd0c:  ldr      x8, [x8, #0x28]
0043bd10:  mov      x22, x0
0043bd14:  stur     x8, [x29, #-0x18]
0043bd18:  bl       #0x62589c
0043bd1c:  mov      w8, #0x3e8
0043bd20:  ldr      x9, [x22, #0x480]
0043bd24:  mov      x10, #-0x8000000000000000
0043bd28:  str      w19, [sp, #0x19c]
0043bd2c:  mul      x8, x0, x8
0043bd30:  cmp      x9, x10
0043bd34:  b.ne     #0x43bd44
0043bd38:  mov      w12, w19
0043bd3c:  tbnz     w19, #2, #0x43bd74
0043bd40:  b        #0x43bd98
0043bd44:  mov      w24, wzr
0043bd48:  mov      w11, #-1
0043bd4c:  mov      w12, w19
0043bd50:  tbz      w19, #2, #0x43bda0
0043bd54:  mov      x10, #0x7fffffffffffffff
0043bd58:  cmp      x9, x10
0043bd5c:  b.eq     #0x43bda0
0043bd60:  mov      w10, #0x9680
0043bd64:  sub      x9, x8, x9
0043bd68:  movk     w10, #0x98, lsl #16
0043bd6c:  cmp      x9, x10
0043bd70:  b.le     #0x43bda0
0043bd74:  mov      w9, #3
0043bd78:  bics     wzr, w9, w12
0043bd7c:  b.ne     #0x43bd98
0043bd80:  str      x8, [x22, #0x480]
0043bd84:  bl       #0x511158
0043bd88:  ldr      w12, [sp, #0x19c]
0043bd8c:  mov      w24, #1
0043bd90:  fcvtzs   w11, d0
0043bd94:  b        #0x43bda0
0043bd98:  mov      w24, wzr
0043bd9c:  mov      w11, #-1
0043bda0:  str      w11, [sp, #0x18c]
0043bda4:  str      x22, [sp, #0x298]
0043bda8:  str      w24, [sp, #0x1b4]
0043bdac:  tbz      w12, #2, #0x43c788
0043bdb0:  ldr      x0, [x22, #0x88]
0043bdb4:  add      x8, sp, #0x6a0
0043bdb8:  ldr      x1, [x22, #0xe0]
0043bdbc:  bl       #0x4504fc
0043bdc0:  add      x0, sp, #0x640
0043bdc4:  mov      w1, #6
0043bdc8:  bl       #0x4df134
0043bdcc:  ldr      x19, [x22, #0x3e0]
0043bdd0:  ldr      x21, [x22, #0x3e8]
0043bdd4:  cmp      x19, x21
0043bdd8:  b.eq     #0x43c748
0043bddc:  adrp     x23, #0x1e9000
0043bde0:  add      x23, x23, #0xea8
0043bde4:  adrp     x25, #0x199000
0043bde8:  add      x25, x25, #0xd61
0043bdec:  adrp     x26, #0x1ad000
0043bdf0:  add      x26, x26, #0xb93
0043bdf4:  str      x21, [sp, #0x1a0]
0043bdf8:  b        #0x43be38
0043bdfc:  ldr      x22, [sp, #0x298]
0043be00:  adrp     x23, #0x1e9000
0043be04:  add      x23, x23, #0xea8
0043be08:  ldr      w24, [sp, #0x1b4]
0043be0c:  ldr      x19, [sp, #0x290]
0043be10:  adrp     x25, #0x199000
0043be14:  add      x25, x25, #0xd61
0043be18:  ldr      x21, [sp, #0x1a0]
0043be1c:  adrp     x26, #0x1ad000
0043be20:  add      x26, x26, #0xb93
0043be24:  sub      x0, x29, #0x60
0043be28:  bl       #0x4df880
0043be2c:  add      x19, x19, #0x10
0043be30:  cmp      x19, x21
0043be34:  b.eq     #0x43c748
0043be38:  ldr      x0, [x19]
0043be3c:  sub      x8, x29, #0x60
0043be40:  bl       #0x47fd28
0043be44:  ldr      x8, [x19]
0043be48:  add      x0, sp, #0x6a0
0043be4c:  add      x1, x8, #0x20
0043be50:  bl       #0x446e78
0043be54:  cbz      x0, #0x43be84
0043be58:  add      x0, x0, #0x28
0043be5c:  sub      x8, x29, #0x90
0043be60:  bl       #0x47386c
0043be64:  sub      x0, x29, #0x60
0043be68:  add      x1, sp, #0x610
0043be6c:  str      x26, [sp, #0x610]
0043be70:  bl       #0x4e148c
0043be74:  sub      x1, x29, #0x90
0043be78:  bl       #0x4dfa04
0043be7c:  sub      x0, x29, #0x90
0043be80:  bl       #0x4df880
0043be84:  add      x0, sp, #0x640
0043be88:  sub      x1, x29, #0x60
0043be8c:  bl       #0x4e1494
0043be90:  cbz      w24, #0x43be24
0043be94:  sub      x0, x29, #0x60
0043be98:  sub      x1, x29, #0x90
0043be9c:  stur     x23, [x29, #-0x90]
0043bea0:  bl       #0x4e148c
0043bea4:  mov      x27, x0
0043bea8:  sub      x0, x29, #0x60
0043beac:  sub      x1, x29, #0x90
0043beb0:  stur     x25, [x29, #-0x90]
0043beb4:  bl       #0x4e148c
0043beb8:  mov      x20, x0
0043bebc:  bl       #0x417e08
0043bec0:  tbnz     w0, #0, #0x43be24
0043bec4:  adrp     x8, #0x1a2000
0043bec8:  add      x9, x8, #0xdb8
0043becc:  mov      w8, #0x2871
0043bed0:  ldr      w0, [x22, #0x500]
0043bed4:  stp      x9, x8, [x29, #-0x90]
0043bed8:  add      x8, sp, #0x2f0
0043bedc:  stur     x8, [x29, #-0x80]
0043bee0:  bl       #0x48952c
0043bee4:  add      x8, sp, #0x2e0
0043bee8:  str      x0, [sp, #0x2e0]
0043beec:  str      x1, [sp, #0x2e8]
0043bef0:  mov      x0, x27
0043bef4:  str      x19, [sp, #0x290]
0043bef8:  str      x8, [sp, #0x2f8]
0043befc:  sub      x8, x29, #0x90
0043bf00:  str      x8, [sp, #0x300]
0043bf04:  adrp     x8, #0x1de000
0043bf08:  add      x8, x8, #0x51a
0043bf0c:  str      x8, [sp, #0x308]
0043bf10:  add      x8, sp, #0x2f8
0043bf14:  str      x8, [sp, #0x310]
0043bf18:  ldr      x8, [x19]
0043bf1c:  adrp     x19, #0x1c7000
0043bf20:  add      x19, x19, #0xbaf
0043bf24:  mov      x1, x19
0043bf28:  add      x8, x8, #0x20
0043bf2c:  str      x8, [sp, #0x318]
0043bf30:  add      x8, sp, #0x308
0043bf34:  str      x8, [sp, #0x320]
0043bf38:  adrp     x8, #0x1c1000
0043bf3c:  add      x8, x8, #0xde6
0043bf40:  str      x8, [sp, #0x328]
0043bf44:  add      x8, sp, #0x318
0043bf48:  str      x8, [sp, #0x330]
0043bf4c:  bl       #0x4e12e0
0043bf50:  bl       #0x4dff08
0043bf54:  add      x8, sp, #0x328
0043bf58:  adrp     x1, #0x1d2000
0043bf5c:  add      x1, x1, #0xd5a
0043bf60:  str      x8, [sp, #0x340]
0043bf64:  mov      w8, w0
0043bf68:  mov      x0, x27
0043bf6c:  str      x8, [sp, #0x338]
0043bf70:  adrp     x8, #0x197000
0043bf74:  add      x8, x8, #0x3fb
0043bf78:  str      x8, [sp, #0x348]
0043bf7c:  add      x8, sp, #0x338
0043bf80:  str      x8, [sp, #0x350]
0043bf84:  bl       #0x4e12e0
0043bf88:  bl       #0x4dff08
0043bf8c:  add      x8, sp, #0x348
0043bf90:  adrp     x22, #0x1a2000
0043bf94:  add      x22, x22, #0xdea
0043bf98:  adrp     x21, #0x1cd000
0043bf9c:  add      x21, x21, #0x86c
0043bfa0:  mov      x1, x22
0043bfa4:  str      x8, [sp, #0x360]
0043bfa8:  mov      w8, w0
0043bfac:  mov      x0, x27
0043bfb0:  str      x21, [sp, #0x368]
0043bfb4:  str      x8, [sp, #0x358]
0043bfb8:  add      x8, sp, #0x358
0043bfbc:  str      x8, [sp, #0x370]
0043bfc0:  bl       #0x4e12e0
0043bfc4:  bl       #0x4e0028
0043bfc8:  add      x8, sp, #0x368
0043bfcc:  str      x0, [sp, #0x378]
0043bfd0:  mov      x0, x27
0043bfd4:  adrp     x1, #0x1ef000
0043bfd8:  add      x1, x1, #0x47b
0043bfdc:  str      x8, [sp, #0x380]
0043bfe0:  adrp     x8, #0x1ef000
0043bfe4:  add      x8, x8, #0x463
0043bfe8:  str      x8, [sp, #0x388]
0043bfec:  add      x8, sp, #0x378
0043bff0:  str      x8, [sp, #0x390]
0043bff4:  bl       #0x4e12e0
0043bff8:  bl       #0x4e0124
0043bffc:  add      x8, sp, #0x388
0043c000:  str      x0, [sp, #0x398]
0043c004:  mov      x0, x27
0043c008:  adrp     x1, #0x1ef000
0043c00c:  add      x1, x1, #0x484
0043c010:  str      x8, [sp, #0x3a0]
0043c014:  adrp     x8, #0x19f000
0043c018:  add      x8, x8, #0xacf
0043c01c:  str      x8, [sp, #0x3a8]
0043c020:  add      x8, sp, #0x398
0043c024:  str      x8, [sp, #0x3b0]
0043c028:  bl       #0x4e12e0
0043c02c:  bl       #0x4e0124
0043c030:  add      x8, sp, #0x3a8
0043c034:  str      x0, [sp, #0x3b8]
0043c038:  mov      x0, x27
0043c03c:  adrp     x1, #0x1d0000
0043c040:  add      x1, x1, #0x17b
0043c044:  str      x8, [sp, #0x3c0]
0043c048:  adrp     x8, #0x197000
0043c04c:  add      x8, x8, #0x410
0043c050:  str      x8, [sp, #0x3c8]
0043c054:  add      x8, sp, #0x3b8
0043c058:  str      x8, [sp, #0x3d0]
0043c05c:  bl       #0x4e12e0
0043c060:  bl       #0x4e0124
0043c064:  add      x8, sp, #0x3c8
0043c068:  str      x0, [sp, #0x3d8]
0043c06c:  mov      x0, x20
0043c070:  mov      x1, x19
0043c074:  str      x8, [sp, #0x3e0]
0043c078:  adrp     x8, #0x197000
0043c07c:  add      x8, x8, #0x41b
0043c080:  str      x8, [sp, #0x3e8]
0043c084:  add      x8, sp, #0x3d8
0043c088:  str      x8, [sp, #0x3f0]
0043c08c:  bl       #0x4e12e0
0043c090:  bl       #0x4dff08
0043c094:  add      x8, sp, #0x3e8
0043c098:  adrp     x1, #0x1b9000
0043c09c:  add      x1, x1, #0x537
0043c0a0:  str      x8, [sp, #0x400]
0043c0a4:  mov      w8, w0
0043c0a8:  mov      x0, x20
0043c0ac:  str      x8, [sp, #0x3f8]
0043c0b0:  adrp     x8, #0x1a5000
0043c0b4:  add      x8, x8, #0xc1a
0043c0b8:  str      x8, [sp, #0x408]
0043c0bc:  add      x8, sp, #0x3f8
0043c0c0:  str      x8, [sp, #0x410]
0043c0c4:  bl       #0x4e12e0
0043c0c8:  add      x8, sp, #0x610
0043c0cc:  bl       #0x4dfbf8
0043c0d0:  add      x8, sp, #0x610
0043c0d4:  mov      x0, x20
0043c0d8:  adrp     x1, #0x19f000
0043c0dc:  add      x1, x1, #0xada
0043c0e0:  str      x8, [sp, #0x418]
0043c0e4:  add      x8, sp, #0x408
0043c0e8:  str      x8, [sp, #0x420]
0043c0ec:  adrp     x8, #0x1a2000
0043c0f0:  add      x8, x8, #0xdf6
0043c0f4:  str      x8, [sp, #0x428]
0043c0f8:  add      x8, sp, #0x418
0043c0fc:  str      x8, [sp, #0x430]
0043c100:  bl       #0x4e12e0
0043c104:  add      x8, sp, #0x2a0
0043c108:  bl       #0x4dfbf8
0043c10c:  add      x8, sp, #0x2a0
0043c110:  adrp     x19, #0x199000
0043c114:  add      x19, x19, #0xd67
0043c118:  mov      x0, x20
0043c11c:  mov      x1, x19
0043c120:  str      x8, [sp, #0x438]
0043c124:  add      x8, sp, #0x428
0043c128:  str      x8, [sp, #0x440]
0043c12c:  adrp     x8, #0x1bc000
0043c130:  add      x8, x8, #0x30e
0043c134:  str      x8, [sp, #0x448]
0043c138:  add      x8, sp, #0x438
0043c13c:  str      x8, [sp, #0x450]
0043c140:  bl       #0x4e12e0
0043c144:  adrp     x1, #0x1b6000
0043c148:  add      x1, x1, #0x450
0043c14c:  bl       #0x4e12e0
0043c150:  bl       #0x4dff08
0043c154:  add      x8, sp, #0x448
0043c158:  mov      x1, x19
0043c15c:  str      x21, [sp, #0x468]
0043c160:  str      x8, [sp, #0x460]
0043c164:  mov      w8, w0
0043c168:  mov      x0, x20
0043c16c:  str      x8, [sp, #0x458]
0043c170:  add      x8, sp, #0x458
0043c174:  str      x8, [sp, #0x470]
0043c178:  bl       #0x4e12e0
0043c17c:  mov      x1, x22
0043c180:  bl       #0x4e12e0
0043c184:  bl       #0x4dfde0
0043c188:  add      x8, sp, #0x468
0043c18c:  mov      x1, x19
0043c190:  str      x8, [sp, #0x480]
0043c194:  mov      w8, w0
0043c198:  mov      x0, x20
0043c19c:  str      x8, [sp, #0x478]
0043c1a0:  adrp     x8, #0x1c1000
0043c1a4:  add      x8, x8, #0xdf5
0043c1a8:  str      x8, [sp, #0x488]
0043c1ac:  add      x8, sp, #0x478
0043c1b0:  str      x8, [sp, #0x490]
0043c1b4:  bl       #0x4e12e0
0043c1b8:  bl       #0x43bb48
0043c1bc:  add      x8, sp, #0x488
0043c1c0:  str      x0, [sp, #0x498]
0043c1c4:  mov      x0, x20
0043c1c8:  adrp     x1, #0x1db000
0043c1cc:  add      x1, x1, #0x3ef
0043c1d0:  str      x8, [sp, #0x4a0]
0043c1d4:  adrp     x8, #0x1d5000
0043c1d8:  add      x8, x8, #0xdc6
0043c1dc:  str      x8, [sp, #0x4a8]
0043c1e0:  add      x8, sp, #0x498
0043c1e4:  str      x8, [sp, #0x4b0]
0043c1e8:  bl       #0x4e12e0
0043c1ec:  bl       #0x4dfde0
0043c1f0:  mov      w8, w0
0043c1f4:  adrp     x9, #0x1c7000
0043c1f8:  add      x9, x9, #0xbb4
0043c1fc:  adrp     x19, #0x1a2000
0043c200:  add      x19, x19, #0xdf9
0043c204:  mov      x0, x20
0043c208:  str      x8, [sp, #0x4b8]
0043c20c:  add      x8, sp, #0x4a8
0043c210:  str      x9, [sp, #0x4c8]
0043c214:  add      x9, sp, #0x4b8
0043c218:  mov      x1, x19
0043c21c:  str      x8, [sp, #0x4c0]
0043c220:  adrp     x8, #0x1b3000
0043c224:  add      x8, x8, #0x43f
0043c228:  str      x9, [sp, #0x4d0]
0043c22c:  str      x8, [sp, #0x4d8]
0043c230:  add      x8, sp, #0x4c8
0043c234:  str      x8, [sp, #0x4e0]
0043c238:  bl       #0x4e12e0
0043c23c:  adrp     x1, #0x1d2000
0043c240:  add      x1, x1, #0xd6a
0043c244:  bl       #0x4e12e0
0043c248:  bl       #0x4dfde0
0043c24c:  add      x8, sp, #0x4d8
0043c250:  mov      x1, x19
0043c254:  str      x8, [sp, #0x4f0]
0043c258:  mov      w8, w0
0043c25c:  mov      x0, x20
0043c260:  str      x8, [sp, #0x4e8]
0043c264:  adrp     x8, #0x1c7000
0043c268:  add      x8, x8, #0xbbb
0043c26c:  mov      x21, x8
0043c270:  str      x8, [sp, #0x4f8]
0043c274:  add      x8, sp, #0x4e8
0043c278:  str      x8, [sp, #0x500]
0043c27c:  bl       #0x4e12e0
0043c280:  adrp     x1, #0x1d5000
0043c284:  add      x1, x1, #0xdd2
0043c288:  bl       #0x4e12e0
0043c28c:  bl       #0x4dfde0
0043c290:  add      x8, sp, #0x4f8
0043c294:  adrp     x1, #0x1ca000
0043c298:  add      x1, x1, #0x539
0043c29c:  str      x8, [sp, #0x510]
0043c2a0:  mov      w8, w0
0043c2a4:  mov      x0, x20
0043c2a8:  str      x8, [sp, #0x508]
0043c2ac:  adrp     x8, #0x199000
0043c2b0:  add      x8, x8, #0xd70
0043c2b4:  str      x8, [sp, #0x518]
0043c2b8:  add      x8, sp, #0x508
0043c2bc:  str      x8, [sp, #0x520]
0043c2c0:  bl       #0x4e12e0
0043c2c4:  bl       #0x4dff08
0043c2c8:  add      x8, sp, #0x518
0043c2cc:  adrp     x1, #0x1d2000
0043c2d0:  add      x1, x1, #0xd74
0043c2d4:  str      x8, [sp, #0x530]
0043c2d8:  mov      w8, w0
0043c2dc:  mov      x0, x20
0043c2e0:  str      x8, [sp, #0x528]
0043c2e4:  adrp     x8, #0x1e9000
0043c2e8:  add      x8, x8, #0xeae
0043c2ec:  str      x8, [sp, #0x538]
0043c2f0:  add      x8, sp, #0x528
0043c2f4:  str      x8, [sp, #0x540]
0043c2f8:  bl       #0x4e12e0
0043c2fc:  bl       #0x4dfde0
0043c300:  mov      w8, w0
0043c304:  adrp     x9, #0x1bc000
0043c308:  add      x9, x9, #0x324
0043c30c:  mov      x0, x20
0043c310:  adrp     x1, #0x197000
0043c314:  add      x1, x1, #0x42a
0043c318:  str      x8, [sp, #0x548]
0043c31c:  add      x8, sp, #0x538
0043c320:  str      x9, [sp, #0x558]
0043c324:  add      x9, sp, #0x548
0043c328:  str      x8, [sp, #0x550]
0043c32c:  adrp     x8, #0x1d0000
0043c330:  add      x8, x8, #0x184
0043c334:  str      x9, [sp, #0x560]
0043c338:  str      x8, [sp, #0x568]
0043c33c:  add      x8, sp, #0x558
0043c340:  str      x8, [sp, #0x570]
0043c344:  bl       #0x4e12e0
0043c348:  bl       #0x4dfde0
0043c34c:  mov      w27, w0
0043c350:  mov      x0, x20
0043c354:  adrp     x1, #0x1a2000
0043c358:  add      x1, x1, #0xe05
0043c35c:  bl       #0x4e12e0
0043c360:  bl       #0x4dfde0
0043c364:  add      x8, sp, #0x568
0043c368:  adrp     x1, #0x1a5000
0043c36c:  add      x1, x1, #0xc24
0043c370:  str      x8, [sp, #0x580]
0043c374:  add      w8, w0, w27
0043c378:  mov      x0, x20
0043c37c:  str      x8, [sp, #0x578]
0043c380:  adrp     x8, #0x1c7000
0043c384:  add      x8, x8, #0xbbd
0043c388:  str      x8, [sp, #0x588]
0043c38c:  add      x8, sp, #0x578
0043c390:  str      x8, [sp, #0x590]
0043c394:  bl       #0x4e12e0
0043c398:  bl       #0x4dfde0
0043c39c:  add      x8, sp, #0x588
0043c3a0:  adrp     x1, #0x1d5000
0043c3a4:  add      x1, x1, #0xdde
0043c3a8:  str      x8, [sp, #0x5a0]
0043c3ac:  mov      w8, w0
0043c3b0:  mov      x0, x20
0043c3b4:  str      x8, [sp, #0x598]
0043c3b8:  adrp     x8, #0x19c000
0043c3bc:  add      x8, x8, #0xaaa
0043c3c0:  str      x8, [sp, #0x5a8]
0043c3c4:  add      x8, sp, #0x598
0043c3c8:  str      x8, [sp, #0x5b0]
0043c3cc:  bl       #0x4e12e0
0043c3d0:  bl       #0x4dfde0
0043c3d4:  add      x8, sp, #0x5a8
0043c3d8:  adrp     x1, #0x19c000
0043c3dc:  add      x1, x1, #0xaae
0043c3e0:  str      x8, [sp, #0x5c0]
0043c3e4:  mov      w8, w0
0043c3e8:  mov      x0, x20
0043c3ec:  str      x8, [sp, #0x5b8]
0043c3f0:  adrp     x8, #0x1d8000
0043c3f4:  add      x8, x8, #0xac8
0043c3f8:  str      x8, [sp, #0x5c8]
0043c3fc:  add      x8, sp, #0x5b8
0043c400:  str      x8, [sp, #0x5d0]
0043c404:  bl       #0x4e12e0
0043c408:  bl       #0x4dff08
0043c40c:  add      x8, sp, #0x5c8
0043c410:  adrp     x1, #0x1a5000
0043c414:  add      x1, x1, #0xc2a
0043c418:  str      x21, [sp, #0x2c8]
0043c41c:  str      x8, [sp, #0x5e0]
0043c420:  mov      w8, w0
0043c424:  mov      x0, x20
0043c428:  str      x8, [sp, #0x5d8]
0043c42c:  add      x8, sp, #0x5d8
0043c430:  str      x8, [sp, #0x2d0]
0043c434:  bl       #0x4e12e0
0043c438:  bl       #0x4dff08
0043c43c:  add      x8, sp, #0x2c8
0043c440:  adrp     x1, #0x1b0000
0043c444:  add      x1, x1, #0x828
0043c448:  stur     x8, [x29, #-0x28]
0043c44c:  mov      w8, w0
0043c450:  mov      x0, x20
0043c454:  stur     x8, [x29, #-0x30]
0043c458:  adrp     x8, #0x1ef000
0043c45c:  add      x8, x8, #0x48e
0043c460:  str      x8, [sp, #0x5f0]
0043c464:  sub      x8, x29, #0x30
0043c468:  str      x8, [sp, #0x5f8]
0043c46c:  bl       #0x4e12e0
0043c470:  bl       #0x4dff08
0043c474:  str      w0, [sp, #0x288]
0043c478:  mov      x0, x20
0043c47c:  adrp     x1, #0x19f000
0043c480:  add      x1, x1, #0xaf4
0043c484:  bl       #0x4e12e0
0043c488:  bl       #0x4dff08
0043c48c:  str      w0, [sp, #0x280]
0043c490:  ldr      x0, [sp, #0x5f8]
0043c494:  ldr      x10, [sp, #0x5f0]
0043c498:  ldr      x9, [x0, #8]
0043c49c:  ldp      x8, x11, [x9]
0043c4a0:  stp      x10, x8, [sp, #0x1f8]
0043c4a4:  ldr      x9, [x11, #8]
0043c4a8:  ldr      w16, [x11]
0043c4ac:  ldp      x10, x13, [x9]
0043c4b0:  ldr      x9, [x13, #8]
0043c4b4:  ldr      w14, [x13]
0043c4b8:  ldp      x8, x15, [x9]
0043c4bc:  stp      x8, x10, [sp, #0x1e8]
0043c4c0:  ldr      x9, [x15, #8]
0043c4c4:  ldr      w15, [x15]
0043c4c8:  ldp      x10, x17, [x9]
0043c4cc:  ldr      x9, [x17, #8]
0043c4d0:  ldr      w17, [x17]
0043c4d4:  ldp      x8, x1, [x9]
0043c4d8:  stp      x8, x10, [sp, #0x1d8]
0043c4dc:  ldp      x10, x2, [x1]
0043c4e0:  ldr      x9, [x2, #8]
0043c4e4:  ldp      x8, x1, [x9]
0043c4e8:  stp      x8, x10, [sp, #0x1c8]
0043c4ec:  ldr      x9, [x1, #8]
0043c4f0:  ldp      x10, x3, [x9]
0043c4f4:  ldr      x9, [x3, #8]
0043c4f8:  ldr      w11, [x3]
0043c4fc:  ldp      x8, x4, [x9]
0043c500:  stp      x8, x10, [sp, #0x1b8]
0043c504:  ldr      w10, [x2]
0043c508:  ldr      x9, [x4, #8]
0043c50c:  ldr      w12, [x4]
0043c510:  ldp      x30, x5, [x9]
0043c514:  ldp      x27, x6, [x5]
0043c518:  ldr      x9, [x6, #8]
0043c51c:  ldr      w13, [x6]
0043c520:  ldp      x8, x5, [x9]
0043c524:  str      x8, [sp, #0x278]
0043c528:  ldp      x8, x7, [x5]
0043c52c:  str      x8, [sp, #0x270]
0043c530:  ldp      x8, x5, [x7]
0043c534:  str      x8, [sp, #0x268]
0043c538:  ldr      x7, [x5, #8]
0043c53c:  ldr      w6, [x5]
0043c540:  ldp      x9, x8, [x7]
0043c544:  str      x9, [sp, #0x260]
0043c548:  ldr      x7, [x8, #8]
0043c54c:  ldr      w4, [x8]
0043c550:  ldr      w8, [x0]
0043c554:  ldp      x9, x28, [x7]
0043c558:  ldr      w0, [sp, #0x280]
0043c55c:  str      x9, [sp, #0x258]
0043c560:  ldp      x9, x7, [x28]
0043c564:  ldr      w28, [sp, #0x288]
0043c568:  str      x9, [sp, #0x250]
0043c56c:  ldp      x9, x24, [x7]
0043c570:  str      x9, [sp, #0x248]
0043c574:  ldp      x9, x7, [x24]
0043c578:  str      x9, [sp, #0x240]
0043c57c:  ldp      x9, x23, [x7]
0043c580:  str      x9, [sp, #0x238]
0043c584:  ldr      x7, [x23, #8]
0043c588:  ldr      w23, [x23]
0043c58c:  ldp      x9, x25, [x7]
0043c590:  str      x9, [sp, #0x230]
0043c594:  ldp      x9, x7, [x25]
0043c598:  str      x9, [sp, #0x228]
0043c59c:  ldp      x9, x19, [x7]
0043c5a0:  str      x9, [sp, #0x218]
0043c5a4:  ldp      x9, x7, [x19]
0043c5a8:  str      x9, [sp, #0x208]
0043c5ac:  ldp      x9, x26, [x7]
0043c5b0:  str      x9, [sp, #0x210]
0043c5b4:  ldp      x26, x7, [x26]
0043c5b8:  ldp      x24, x22, [x7]
0043c5bc:  ldp      x22, x7, [x22]
0043c5c0:  ldp      x9, x21, [x7]
0043c5c4:  str      x9, [sp, #0x220]
0043c5c8:  ldr      w9, [x1]
0043c5cc:  ldr      x2, [x21, #8]
0043c5d0:  ldr      w21, [x21]
0043c5d4:  ldp      x25, x1, [x2]
0043c5d8:  ldr      x2, [x1, #8]
0043c5dc:  ldr      w7, [x1]
0043c5e0:  ldp      x20, x3, [x2]
0043c5e4:  ldp      x19, x2, [x3]
0043c5e8:  ldp      x5, x3, [x2]
0043c5ec:  ldp      x3, x2, [x3]
0043c5f0:  ldp      x1, x2, [x2]
0043c5f4:  str      w8, [sp, #0x158]
0043c5f8:  ldr      x8, [sp, #0x200]
0043c5fc:  str      w9, [sp, #0xf0]
0043c600:  ldr      x9, [sp, #0x278]
0043c604:  str      w0, [sp, #0x178]
0043c608:  adrp     x0, #0x1f6000
0043c60c:  add      x0, x0, #0x154
0043c610:  str      x8, [sp, #0x150]
0043c614:  ldr      x8, [sp, #0x1f0]
0043c618:  str      w28, [sp, #0x168]
0043c61c:  ldr      x28, [sp, #0x1f8]
0043c620:  str      w6, [sp, #0x98]
0043c624:  mov      x6, x20
0043c628:  str      x8, [sp, #0x140]
0043c62c:  ldr      x8, [sp, #0x1e8]
0043c630:  str      w4, [sp, #0x88]
0043c634:  mov      x4, x5
0043c638:  mov      x5, x19
0043c63c:  str      x28, [sp, #0x160]
0043c640:  str      x8, [sp, #0x130]
0043c644:  ldr      x8, [sp, #0x1e0]
0043c648:  str      w16, [sp, #0x148]
0043c64c:  str      w14, [sp, #0x138]
0043c650:  str      x8, [sp, #0x120]
0043c654:  ldr      x8, [sp, #0x1d8]
0043c658:  str      w15, [sp, #0x128]
0043c65c:  str      w17, [sp, #0x118]
0043c660:  str      x8, [sp, #0x110]
0043c664:  ldr      x8, [sp, #0x1d0]
0043c668:  str      w10, [sp, #0x100]
0043c66c:  str      w11, [sp, #0xe0]
0043c670:  str      x8, [sp, #0x108]
0043c674:  ldr      x8, [sp, #0x1c8]
0043c678:  str      w12, [sp, #0xd0]
0043c67c:  stp      x27, x30, [sp, #0xc0]
0043c680:  str      x8, [sp, #0xf8]
0043c684:  ldr      x8, [sp, #0x1c0]
0043c688:  str      w13, [sp, #0xb8]
0043c68c:  str      w23, [sp, #0x58]
0043c690:  str      x8, [sp, #0xe8]
0043c694:  ldr      x8, [sp, #0x1b8]
0043c698:  stp      x22, x24, [sp, #0x18]
0043c69c:  str      w21, [sp, #8]
0043c6a0:  str      x8, [sp, #0xd8]
0043c6a4:  adrp     x8, #0x1c7000
0043c6a8:  add      x8, x8, #0xbbb
0043c6ac:  str      x25, [sp]
0043c6b0:  str      x8, [sp, #0x170]
0043c6b4:  ldr      x8, [sp, #0x270]
0043c6b8:  stp      x8, x9, [sp, #0xa8]
0043c6bc:  ldr      x8, [sp, #0x268]
0043c6c0:  ldr      x9, [sp, #0x258]
0043c6c4:  str      x8, [sp, #0xa0]
0043c6c8:  ldr      x8, [sp, #0x260]
0043c6cc:  str      x8, [sp, #0x90]
0043c6d0:  ldr      x8, [sp, #0x250]
0043c6d4:  stp      x8, x9, [sp, #0x78]
0043c6d8:  ldr      x9, [sp, #0x248]
0043c6dc:  ldr      x8, [sp, #0x240]
0043c6e0:  stp      x8, x9, [sp, #0x68]
0043c6e4:  ldr      x8, [sp, #0x238]
0043c6e8:  ldr      x9, [sp, #0x230]
0043c6ec:  str      x8, [sp, #0x60]
0043c6f0:  ldr      x8, [sp, #0x228]
0043c6f4:  stp      x8, x9, [sp, #0x48]
0043c6f8:  ldr      x9, [sp, #0x218]
0043c6fc:  ldr      x8, [sp, #0x208]
0043c700:  stp      x8, x9, [sp, #0x38]
0043c704:  ldr      x8, [sp, #0x210]
0043c708:  stp      x26, x8, [sp, #0x28]
0043c70c:  ldr      x8, [sp, #0x220]
0043c710:  str      x8, [sp, #0x10]
0043c714:  bl       #0x623bb0
0043c718:  ldrsb    w8, [sp, #0x2b7]
0043c71c:  tbnz     w8, #0x1f, #0x43c72c
0043c720:  ldrsb    w8, [sp, #0x627]
0043c724:  tbz      w8, #0x1f, #0x43bdfc
0043c728:  b        #0x43c73c
0043c72c:  ldr      x0, [sp, #0x2a0]
0043c730:  bl       #0xd13dd0
0043c734:  ldrsb    w8, [sp, #0x627]
0043c738:  tbz      w8, #0x1f, #0x43bdfc
0043c73c:  ldr      x0, [sp, #0x610]
0043c740:  bl       #0xd13dd0
0043c744:  b        #0x43bdfc
0043c748:  add      x0, sp, #0x640
0043c74c:  bl       #0x4e0534
0043c750:  tbnz     w0, #0, #0x43c774
0043c754:  adrp     x8, #0x197000
0043c758:  add      x8, x8, #0x438
0043c75c:  sub      x1, x29, #0x60
0043c760:  ldr      x0, [sp, #0x1a8]
0043c764:  stur     x8, [x29, #-0x60]
0043c768:  bl       #0x4e148c
0043c76c:  add      x1, sp, #0x640
0043c770:  bl       #0x4df948
0043c774:  add      x0, sp, #0x640
0043c778:  bl       #0x4df880
0043c77c:  add      x0, sp, #0x6a0
0043c780:  bl       #0x446dd8
0043c784:  ldr      w12, [sp, #0x19c]
0043c788:  tbz      w12, #1, #0x43cc70
0043c78c:  ldr      x0, [x22, #0x3d8]
0043c790:  cbz      x0, #0x43cc70
0043c794:  ldr      x20, [sp, #0x1a8]
0043c798:  mov      x1, x20
0043c79c:  bl       #0x465f80
0043c7a0:  cbz      w24, #0x43cd38
0043c7a4:  adrp     x19, #0x1a8000
0043c7a8:  add      x19, x19, #0x6ff
0043c7ac:  mov      x0, x20
0043c7b0:  mov      x1, x19
0043c7b4:  bl       #0x4e12e0
0043c7b8:  adrp     x1, #0x1e9000
0043c7bc:  add      x1, x1, #0xea8
0043c7c0:  bl       #0x4e12e0
0043c7c4:  mov      x20, x0
0043c7c8:  bl       #0x417e08
0043c7cc:  tbnz     w0, #0, #0x43c9a8
0043c7d0:  adrp     x8, #0x1a2000
0043c7d4:  add      x8, x8, #0xdb8
0043c7d8:  mov      w9, #0x29b9
0043c7dc:  add      x10, sp, #0x588
0043c7e0:  ldr      w0, [x22, #0x500]
0043c7e4:  str      x8, [sp, #0x6a0]
0043c7e8:  str      x9, [sp, #0x6a8]
0043c7ec:  str      x10, [sp, #0x6b0]
0043c7f0:  bl       #0x48952c
0043c7f4:  add      x8, sp, #0x598
0043c7f8:  add      x9, sp, #0x6a0
0043c7fc:  ldr      x10, [x22, #0x3d8]
0043c800:  str      x0, [sp, #0x598]
0043c804:  str      x1, [sp, #0x5a0]
0043c808:  adrp     x11, #0x1de000
0043c80c:  add      x11, x11, #0x533
0043c810:  str      x8, [sp, #0x5a8]
0043c814:  str      x9, [sp, #0x5b0]
0043c818:  add      x8, x10, #0x20
0043c81c:  add      x9, sp, #0x5b8
0043c820:  add      x12, sp, #0x5a8
0043c824:  adrp     x1, #0x1c7000
0043c828:  add      x1, x1, #0xbaf
0043c82c:  str      x8, [sp, #0x5c8]
0043c830:  add      x8, sp, #0x5c8
0043c834:  str      x9, [sp, #0x5d0]
0043c838:  adrp     x9, #0x1c1000
0043c83c:  add      x9, x9, #0xde6
0043c840:  mov      x0, x20
0043c844:  str      x11, [sp, #0x5b8]
0043c848:  str      x12, [sp, #0x5c0]
0043c84c:  str      x9, [sp, #0x5d8]
0043c850:  str      x8, [sp, #0x5e0]
0043c854:  bl       #0x4e12e0
0043c858:  bl       #0x4dff08
0043c85c:  mov      w8, w0
0043c860:  add      x9, sp, #0x5d8
0043c864:  adrp     x10, #0x1e1000
0043c868:  add      x10, x10, #0x54e
0043c86c:  add      x11, sp, #0x2c8
0043c870:  adrp     x1, #0x1db000
0043c874:  add      x1, x1, #0x3fc
0043c878:  mov      x0, x20
0043c87c:  str      x8, [sp, #0x2c8]
0043c880:  str      x9, [sp, #0x2d0]
0043c884:  stp      x10, x11, [x29, #-0x30]
0043c888:  bl       #0x4e12e0
0043c88c:  bl       #0x4e0124
0043c890:  sub      x8, x29, #0x30
0043c894:  adrp     x9, #0x1b0000
0043c898:  add      x9, x9, #0x833
0043c89c:  add      x10, sp, #0x5f0
0043c8a0:  str      x0, [sp, #0x5f0]
0043c8a4:  adrp     x1, #0x1d5000
0043c8a8:  add      x1, x1, #0xde5
0043c8ac:  mov      x0, x20
0043c8b0:  str      x8, [sp, #0x5f8]
0043c8b4:  str      x9, [sp, #0x2a0]
0043c8b8:  str      x10, [sp, #0x2a8]
0043c8bc:  bl       #0x4e12e0
0043c8c0:  bl       #0x4e0124
0043c8c4:  add      x8, sp, #0x2a0
0043c8c8:  adrp     x9, #0x1e7000
0043c8cc:  add      x9, x9, #0x1bb
0043c8d0:  add      x10, sp, #0x610
0043c8d4:  str      x0, [sp, #0x610]
0043c8d8:  adrp     x1, #0x1e7000
0043c8dc:  add      x1, x1, #0x1d6
0043c8e0:  mov      x0, x20
0043c8e4:  str      x8, [sp, #0x618]
0043c8e8:  stp      x9, x10, [x29, #-0x90]
0043c8ec:  bl       #0x4e12e0
0043c8f0:  bl       #0x4e0124
0043c8f4:  sub      x8, x29, #0x90
0043c8f8:  adrp     x9, #0x1b9000
0043c8fc:  add      x9, x9, #0x541
0043c900:  sub      x10, x29, #0x60
0043c904:  adrp     x1, #0x1a2000
0043c908:  add      x1, x1, #0xdea
0043c90c:  stp      x0, x8, [x29, #-0x60]
0043c910:  mov      x0, x20
0043c914:  str      x9, [sp, #0x640]
0043c918:  str      x10, [sp, #0x648]
0043c91c:  bl       #0x4e12e0
0043c920:  bl       #0x4dfde0
0043c924:  mov      w21, w0
0043c928:  adrp     x1, #0x1d5000
0043c92c:  add      x1, x1, #0xdf4
0043c930:  mov      x0, x20
0043c934:  bl       #0x4e12e0
0043c938:  bl       #0x4dfde0
0043c93c:  ldr      x8, [sp, #0x648]
0043c940:  ldr      x9, [sp, #0x640]
0043c944:  ldp      x8, x10, [x8]
0043c948:  ldp      x10, x11, [x10]
0043c94c:  ldp      x11, x12, [x11]
0043c950:  ldp      x12, x13, [x12]
0043c954:  ldp      x13, x14, [x13]
0043c958:  ldp      x14, x15, [x14]
0043c95c:  ldr      x16, [x15, #8]
0043c960:  ldr      w7, [x15]
0043c964:  adrp     x15, #0x1de000
0043c968:  add      x15, x15, #0x553
0043c96c:  ldp      x6, x17, [x16]
0043c970:  ldp      x5, x16, [x17]
0043c974:  ldp      x4, x17, [x16]
0043c978:  ldp      x3, x16, [x17]
0043c97c:  ldp      x1, x2, [x16]
0043c980:  str      w0, [sp, #0x48]
0043c984:  adrp     x0, #0x1f6000
0043c988:  add      x0, x0, #0x18b
0043c98c:  str      x15, [sp, #0x40]
0043c990:  str      w21, [sp, #0x38]
0043c994:  stp      x8, x9, [sp, #0x28]
0043c998:  stp      x11, x10, [sp, #0x18]
0043c99c:  stp      x13, x12, [sp, #8]
0043c9a0:  str      x14, [sp]
0043c9a4:  bl       #0x623bb0
0043c9a8:  ldr      x21, [sp, #0x1a8]
0043c9ac:  add      x1, sp, #0x6a0
0043c9b0:  str      x19, [sp, #0x6a0]
0043c9b4:  mov      x0, x21
0043c9b8:  bl       #0x4e148c
0043c9bc:  adrp     x20, #0x1b3000
0043c9c0:  add      x20, x20, #0x45f
0043c9c4:  mov      x1, x20
0043c9c8:  bl       #0x4e1714
0043c9cc:  tbz      w0, #0, #0x43ca1c
0043c9d0:  add      x1, sp, #0x6a0
0043c9d4:  mov      x0, x21
0043c9d8:  str      x19, [sp, #0x6a0]
0043c9dc:  bl       #0x4e148c
0043c9e0:  add      x1, sp, #0x640
0043c9e4:  str      x20, [sp, #0x640]
0043c9e8:  bl       #0x4e148c
0043c9ec:  sub      x8, x29, #0x90
0043c9f0:  mov      x19, x0
0043c9f4:  bl       #0x4e1dc4
0043c9f8:  add      x8, sp, #0x610
0043c9fc:  mov      x0, x19
0043ca00:  bl       #0x4e1dfc
0043ca04:  sub      x0, x29, #0x90
0043ca08:  add      x1, sp, #0x610
0043ca0c:  bl       #0x4df028
0043ca10:  tbz      w0, #0, #0x43d498
0043ca14:  ldr      w24, [sp, #0x1b4]
0043ca18:  ldr      x21, [sp, #0x1a8]
0043ca1c:  adrp     x19, #0x1e9000
0043ca20:  add      x19, x19, #0xeed
0043ca24:  mov      x0, x21
0043ca28:  mov      x1, x19
0043ca2c:  bl       #0x4e1714
0043ca30:  tbz      w0, #0, #0x43caf8
0043ca34:  add      x1, sp, #0x640
0043ca38:  mov      x0, x21
0043ca3c:  str      x19, [sp, #0x640]
0043ca40:  add      x19, sp, #0x640
0043ca44:  bl       #0x4e148c
0043ca48:  mov      x1, x0
0043ca4c:  add      x0, sp, #0x6a0
0043ca50:  bl       #0x4df5d8
0043ca54:  bl       #0x417e08
0043ca58:  tbnz     w0, #0, #0x43caec
0043ca5c:  adrp     x8, #0x1a2000
0043ca60:  add      x8, x8, #0xdb8
0043ca64:  mov      w9, #0x2cd1
0043ca68:  add      x10, sp, #0x5f0
0043ca6c:  ldr      w0, [x22, #0x500]
0043ca70:  str      x8, [sp, #0x640]
0043ca74:  str      x9, [sp, #0x648]
0043ca78:  str      x10, [sp, #0x650]
0043ca7c:  bl       #0x48952c
0043ca80:  add      x8, sp, #0x610
0043ca84:  str      x0, [sp, #0x610]
0043ca88:  str      x1, [sp, #0x618]
0043ca8c:  sub      x9, x29, #0x90
0043ca90:  adrp     x10, #0x1db000
0043ca94:  add      x10, x10, #0x408
0043ca98:  stp      x8, x19, [x29, #-0x90]
0043ca9c:  ldr      x8, [x22, #0x3d8]
0043caa0:  add      x0, sp, #0x6a0
0043caa4:  add      x1, sp, #0x2a0
0043caa8:  stp      x10, x9, [x29, #-0x60]
0043caac:  add      x19, x8, #0x20
0043cab0:  adrp     x8, #0x1a2000
0043cab4:  add      x8, x8, #0xe30
0043cab8:  str      x8, [sp, #0x2a0]
0043cabc:  bl       #0x4e148c
0043cac0:  bl       #0x4dff08
0043cac4:  ldp      x4, x8, [x29, #-0x60]
0043cac8:  mov      w7, w0
0043cacc:  adrp     x0, #0x1f6000
0043cad0:  add      x0, x0, #0x1a0
0043cad4:  adrp     x6, #0x1ca000
0043cad8:  add      x6, x6, #0x55a
0043cadc:  mov      x5, x19
0043cae0:  ldp      x3, x9, [x8]
0043cae4:  ldp      x1, x2, [x9]
0043cae8:  bl       #0x623bb0
0043caec:  add      x0, sp, #0x6a0
0043caf0:  bl       #0x4df880
0043caf4:  ldr      x21, [sp, #0x1a8]
0043caf8:  adrp     x19, #0x1ab000
0043cafc:  add      x19, x19, #0x2f3
0043cb00:  mov      x0, x21
0043cb04:  mov      x1, x19
0043cb08:  bl       #0x4e1714
0043cb0c:  ldr      w12, [sp, #0x19c]
0043cb10:  tbz      w0, #0, #0x43cc70
0043cb14:  add      x1, sp, #0x640
0043cb18:  ldr      x0, [sp, #0x1a8]
0043cb1c:  str      x19, [sp, #0x640]
0043cb20:  add      x19, sp, #0x640
0043cb24:  bl       #0x4e148c
0043cb28:  mov      x1, x0
0043cb2c:  add      x0, sp, #0x6a0
0043cb30:  bl       #0x4df5d8
0043cb34:  bl       #0x417e08
0043cb38:  tbnz     w0, #0, #0x43cc64
0043cb3c:  adrp     x8, #0x1a2000
0043cb40:  add      x8, x8, #0xdb8
0043cb44:  mov      w9, #0x2df1
0043cb48:  add      x10, sp, #0x5a8
0043cb4c:  ldr      w0, [x22, #0x500]
0043cb50:  str      x8, [sp, #0x640]
0043cb54:  str      x9, [sp, #0x648]
0043cb58:  str      x10, [sp, #0x650]
0043cb5c:  bl       #0x48952c
0043cb60:  add      x8, sp, #0x2c8
0043cb64:  ldr      x10, [x22, #0x3d8]
0043cb68:  adrp     x9, #0x1e1000
0043cb6c:  add      x9, x9, #0x55f
0043cb70:  str      x0, [sp, #0x2c8]
0043cb74:  sub      x11, x29, #0x30
0043cb78:  stp      x8, x19, [x29, #-0x30]
0043cb7c:  add      x8, x10, #0x20
0043cb80:  str      x1, [sp, #0x2d0]
0043cb84:  add      x10, sp, #0x5f0
0043cb88:  str      x9, [sp, #0x5f0]
0043cb8c:  adrp     x9, #0x1ca000
0043cb90:  add      x9, x9, #0x55a
0043cb94:  str      x8, [sp, #0x2a0]
0043cb98:  add      x8, sp, #0x2a0
0043cb9c:  add      x0, sp, #0x6a0
0043cba0:  add      x1, sp, #0x5d8
0043cba4:  str      x11, [sp, #0x5f8]
0043cba8:  str      x10, [sp, #0x2a8]
0043cbac:  str      x8, [sp, #0x618]
0043cbb0:  adrp     x8, #0x1b9000
0043cbb4:  add      x8, x8, #0x570
0043cbb8:  str      x9, [sp, #0x610]
0043cbbc:  str      x8, [sp, #0x5d8]
0043cbc0:  bl       #0x4e148c
0043cbc4:  bl       #0x4dfde0
0043cbc8:  sub      x8, x29, #0x90
0043cbcc:  adrp     x10, #0x1d0000
0043cbd0:  add      x10, x10, #0x184
0043cbd4:  mov      w9, w0
0043cbd8:  add      x11, sp, #0x610
0043cbdc:  add      x0, sp, #0x6a0
0043cbe0:  add      x1, sp, #0x5c8
0043cbe4:  stp      x10, x8, [x29, #-0x60]
0043cbe8:  adrp     x8, #0x1be000
0043cbec:  add      x8, x8, #0xebf
0043cbf0:  stp      x9, x11, [x29, #-0x90]
0043cbf4:  str      x8, [sp, #0x5c8]
0043cbf8:  bl       #0x4e148c
0043cbfc:  bl       #0x4dfde0
0043cc00:  mov      w19, w0
0043cc04:  adrp     x8, #0x1d5000
0043cc08:  add      x8, x8, #0xe09
0043cc0c:  add      x0, sp, #0x6a0
0043cc10:  add      x1, sp, #0x5b8
0043cc14:  str      x8, [sp, #0x5b8]
0043cc18:  bl       #0x4e148c
0043cc1c:  bl       #0x4dfde0
0043cc20:  ldp      x9, x8, [x29, #-0x60]
0043cc24:  ldr      x10, [x8, #8]
0043cc28:  ldr      w7, [x8]
0043cc2c:  adrp     x8, #0x1ef000
0043cc30:  add      x8, x8, #0x4dd
0043cc34:  ldp      x6, x11, [x10]
0043cc38:  ldp      x5, x10, [x11]
0043cc3c:  ldp      x4, x11, [x10]
0043cc40:  ldp      x3, x10, [x11]
0043cc44:  ldp      x1, x2, [x10]
0043cc48:  str      w0, [sp, #0x18]
0043cc4c:  adrp     x0, #0x1f6000
0043cc50:  add      x0, x0, #0x1a7
0043cc54:  str      x8, [sp, #0x10]
0043cc58:  str      w19, [sp, #8]
0043cc5c:  str      x9, [sp]
0043cc60:  bl       #0x623bb0
0043cc64:  add      x0, sp, #0x6a0
0043cc68:  bl       #0x4df880
0043cc6c:  ldr      w12, [sp, #0x19c]
0043cc70:  tbz      w12, #0, #0x43cc7c
0043cc74:  ldr      x8, [x22, #0xe0]
0043cc78:  cbnz     x8, #0x43cd48
0043cc7c:  tbz      w24, #0, #0x43eadc
0043cc80:  bl       #0x51259c
0043cc84:  bl       #0x5125ac
0043cc88:  mov      x19, x0
0043cc8c:  bl       #0x417e08
0043cc90:  tbnz     w0, #0, #0x43eadc
0043cc94:  mov      w8, #0xfffff
0043cc98:  cmp      x19, #0
0043cc9c:  add      x8, x19, x8
0043cca0:  adrp     x9, #0x1a2000
0043cca4:  add      x9, x9, #0xdb8
0043cca8:  mov      w10, #0x31a1
0043ccac:  csel     x19, x8, x19, lt
0043ccb0:  add      x8, sp, #0x5f0
0043ccb4:  ldr      w0, [x22, #0x500]
0043ccb8:  str      x9, [sp, #0x6a0]
0043ccbc:  str      x10, [sp, #0x6a8]
0043ccc0:  str      x8, [sp, #0x6b0]
0043ccc4:  bl       #0x48952c
0043ccc8:  add      x8, sp, #0x2a0
0043cccc:  add      x9, sp, #0x6a0
0043ccd0:  str      x0, [sp, #0x2a0]
0043ccd4:  ldr      w0, [sp, #0x18c]
0043ccd8:  str      x1, [sp, #0x2a8]
0043ccdc:  str      x8, [sp, #0x610]
0043cce0:  add      x8, sp, #0x610
0043cce4:  str      x9, [sp, #0x618]
0043cce8:  adrp     x9, #0x1be000
0043ccec:  add      x9, x9, #0xed5
0043ccf0:  cmn      w0, #1
0043ccf4:  stp      x9, x8, [x29, #-0x90]
0043ccf8:  b.eq     #0x43d404
0043ccfc:  sub      x8, x29, #0x60
0043cd00:  bl       #0x5490bc
0043cd04:  adrp     x1, #0x1ef000
0043cd08:  add      x1, x1, #0x44c
0043cd0c:  sub      x0, x29, #0x60
0043cd10:  mov      w2, #1
0043cd14:  bl       #0x547cac
0043cd18:  ldr      q0, [x0]
0043cd1c:  ldr      x8, [x0, #0x10]
0043cd20:  str      q0, [sp, #0x640]
0043cd24:  str      x8, [sp, #0x650]
0043cd28:  stp      xzr, xzr, [x0, #8]
0043cd2c:  str      xzr, [x0]
0043cd30:  ldur     x4, [x29, #-0x90]
0043cd34:  b        #0x43d440
0043cd38:  ldr      w8, [sp, #0x19c]
0043cd3c:  tbz      w8, #0, #0x43eadc
0043cd40:  ldr      x8, [x22, #0xe0]
0043cd44:  cbz      x8, #0x43eadc
0043cd48:  sub      x0, x29, #0x60
0043cd4c:  mov      w1, #7
0043cd50:  bl       #0x4df134
0043cd54:  ldr      x0, [x22, #0xe0]
0043cd58:  ldr      x8, [x0]
0043cd5c:  ldr      x9, [x8, #0x70]
0043cd60:  add      x8, sp, #0x640
0043cd64:  blr      x9
0043cd68:  ldr      w1, [sp, #0x640]
0043cd6c:  add      x0, sp, #0x6a0
0043cd70:  bl       #0x4df1c8
0043cd74:  adrp     x8, #0x1b3000
0043cd78:  add      x8, x8, #0x477
0043cd7c:  sub      x0, x29, #0x60
0043cd80:  sub      x1, x29, #0x90
0043cd84:  stur     x8, [x29, #-0x90]
0043cd88:  bl       #0x4e148c
0043cd8c:  add      x1, sp, #0x6a0
0043cd90:  bl       #0x4dfa04
0043cd94:  add      x0, sp, #0x6a0
0043cd98:  bl       #0x4df880
0043cd9c:  ldr      w1, [sp, #0x644]
0043cda0:  add      x0, sp, #0x6a0
0043cda4:  bl       #0x4df1c8
0043cda8:  adrp     x8, #0x1a8000
0043cdac:  add      x8, x8, #0x715
0043cdb0:  sub      x0, x29, #0x60
0043cdb4:  sub      x1, x29, #0x90
0043cdb8:  stur     x8, [x29, #-0x90]
0043cdbc:  bl       #0x4e148c
0043cdc0:  add      x1, sp, #0x6a0
0043cdc4:  bl       #0x4dfa04
0043cdc8:  add      x0, sp, #0x6a0
0043cdcc:  bl       #0x4df880
0043cdd0:  ldr      x1, [sp, #0x650]
0043cdd4:  add      x0, sp, #0x6a0
0043cdd8:  bl       #0x4df210
0043cddc:  adrp     x8, #0x1ab000
0043cde0:  add      x8, x8, #0x2fa
0043cde4:  sub      x0, x29, #0x60
0043cde8:  sub      x1, x29, #0x90
0043cdec:  stur     x8, [x29, #-0x90]
0043cdf0:  bl       #0x4e148c
0043cdf4:  add      x1, sp, #0x6a0
0043cdf8:  bl       #0x4dfa04
0043cdfc:  add      x0, sp, #0x6a0
0043ce00:  bl       #0x4df880
0043ce04:  ldr      x1, [sp, #0x658]
0043ce08:  add      x0, sp, #0x6a0
0043ce0c:  bl       #0x4df210
0043ce10:  adrp     x8, #0x1a5000
0043ce14:  add      x8, x8, #0xc3f
0043ce18:  sub      x0, x29, #0x60
0043ce1c:  sub      x1, x29, #0x90
0043ce20:  stur     x8, [x29, #-0x90]
0043ce24:  bl       #0x4e148c
0043ce28:  add      x1, sp, #0x6a0
0043ce2c:  bl       #0x4dfa04
0043ce30:  add      x0, sp, #0x6a0
0043ce34:  bl       #0x4df880
0043ce38:  ldr      w1, [x22, #0x4b8]
0043ce3c:  add      x0, sp, #0x6a0
0043ce40:  bl       #0x4df210
0043ce44:  adrp     x8, #0x1ca000
0043ce48:  add      x8, x8, #0x565
0043ce4c:  sub      x0, x29, #0x60
0043ce50:  sub      x1, x29, #0x90
0043ce54:  stur     x8, [x29, #-0x90]
0043ce58:  bl       #0x4e148c
0043ce5c:  add      x1, sp, #0x6a0
0043ce60:  bl       #0x4dfa04
0043ce64:  add      x0, sp, #0x6a0
0043ce68:  bl       #0x4df880
0043ce6c:  add      x28, x22, #0x488
0043ce70:  add      x0, sp, #0x6a0
0043ce74:  ldar     w1, [x28]
0043ce78:  bl       #0x4df1c8
0043ce7c:  adrp     x8, #0x1ab000
0043ce80:  add      x8, x8, #0x305
0043ce84:  sub      x0, x29, #0x60
0043ce88:  sub      x1, x29, #0x90
0043ce8c:  stur     x8, [x29, #-0x90]
0043ce90:  bl       #0x4e148c
0043ce94:  add      x1, sp, #0x6a0
0043ce98:  bl       #0x4dfa04
0043ce9c:  add      x0, sp, #0x6a0
0043cea0:  bl       #0x4df880
0043cea4:  add      x21, x22, #0x490
0043cea8:  add      x0, sp, #0x6a0
0043ceac:  ldar     x1, [x21]
0043ceb0:  bl       #0x4df230
0043ceb4:  adrp     x8, #0x1e1000
0043ceb8:  add      x8, x8, #0x577
0043cebc:  sub      x0, x29, #0x60
0043cec0:  sub      x1, x29, #0x90
0043cec4:  stur     x8, [x29, #-0x90]
0043cec8:  bl       #0x4e148c
0043cecc:  add      x1, sp, #0x6a0
0043ced0:  bl       #0x4dfa04
0043ced4:  add      x0, sp, #0x6a0
0043ced8:  bl       #0x4df880
0043cedc:  add      x27, x22, #0x498
0043cee0:  add      x0, sp, #0x6a0
0043cee4:  ldar     x1, [x27]
0043cee8:  bl       #0x4df230
0043ceec:  adrp     x8, #0x197000
0043cef0:  add      x8, x8, #0x456
0043cef4:  sub      x0, x29, #0x60
0043cef8:  sub      x1, x29, #0x90
0043cefc:  stur     x8, [x29, #-0x90]
0043cf00:  bl       #0x4e148c
0043cf04:  add      x1, sp, #0x6a0
0043cf08:  bl       #0x4dfa04
0043cf0c:  add      x0, sp, #0x6a0
0043cf10:  bl       #0x4df880
0043cf14:  ldr      x8, [x22, #0x468]
0043cf18:  adrp     x23, #0x1d0000
0043cf1c:  add      x23, x23, #0x1a4
0043cf20:  ldr      x9, [x22, #0x470]
0043cf24:  add      x0, sp, #0x6a0
0043cf28:  mov      w1, #6
0043cf2c:  cmp      x8, x9
0043cf30:  b.eq     #0x43d048
0043cf34:  bl       #0x4df134
0043cf38:  mov      x8, x22
0043cf3c:  ldr      x22, [x22, #0x468]
0043cf40:  ldr      x24, [x8, #0x470]
0043cf44:  cmp      x22, x24
0043cf48:  b.eq     #0x43d014
0043cf4c:  adrp     x19, #0x19c000
0043cf50:  add      x19, x19, #0xad0
0043cf54:  adrp     x20, #0x199000
0043cf58:  add      x20, x20, #0xdae
0043cf5c:  adrp     x25, #0x1d5000
0043cf60:  add      x25, x25, #0xe19
0043cf64:  sub      x0, x29, #0x90
0043cf68:  mov      w1, #7
0043cf6c:  bl       #0x4df134
0043cf70:  add      x0, sp, #0x610
0043cf74:  mov      x1, x22
0043cf78:  bl       #0x4df478
0043cf7c:  sub      x0, x29, #0x90
0043cf80:  add      x1, sp, #0x2a0
0043cf84:  str      x19, [sp, #0x2a0]
0043cf88:  bl       #0x4e148c
0043cf8c:  add      x1, sp, #0x610
0043cf90:  bl       #0x4dfa04
0043cf94:  add      x0, sp, #0x610
0043cf98:  bl       #0x4df880
0043cf9c:  ldr      x1, [x22, #0x18]
0043cfa0:  add      x0, sp, #0x610
0043cfa4:  bl       #0x4df230
0043cfa8:  sub      x0, x29, #0x90
0043cfac:  add      x1, sp, #0x2a0
0043cfb0:  str      x20, [sp, #0x2a0]
0043cfb4:  bl       #0x4e148c
0043cfb8:  add      x1, sp, #0x610
0043cfbc:  bl       #0x4dfa04
0043cfc0:  add      x0, sp, #0x610
0043cfc4:  bl       #0x4df880
0043cfc8:  ldrb     w1, [x22, #0x20]
0043cfcc:  add      x0, sp, #0x610
0043cfd0:  bl       #0x4df1c8
0043cfd4:  sub      x0, x29, #0x90
0043cfd8:  add      x1, sp, #0x2a0
0043cfdc:  str      x25, [sp, #0x2a0]
0043cfe0:  bl       #0x4e148c
0043cfe4:  add      x1, sp, #0x610
0043cfe8:  bl       #0x4dfa04
0043cfec:  add      x0, sp, #0x610
0043cff0:  bl       #0x4df880
0043cff4:  add      x0, sp, #0x6a0
0043cff8:  sub      x1, x29, #0x90
0043cffc:  bl       #0x4e1494
0043d000:  sub      x0, x29, #0x90
0043d004:  bl       #0x4df880
0043d008:  add      x22, x22, #0x30
0043d00c:  cmp      x22, x24
0043d010:  b.ne     #0x43cf64
0043d014:  sub      x0, x29, #0x60
0043d018:  sub      x1, x29, #0x90
0043d01c:  stur     x23, [x29, #-0x90]
0043d020:  bl       #0x4e148c
0043d024:  add      x1, sp, #0x6a0
0043d028:  bl       #0x4df948
0043d02c:  add      x0, sp, #0x6a0
0043d030:  bl       #0x4df880
0043d034:  ldr      x22, [sp, #0x298]
0043d038:  ldr      w24, [sp, #0x1b4]
0043d03c:  ldrb     w8, [x22, #0x454]
0043d040:  cbnz     w8, #0x43d074
0043d044:  b        #0x43d0ac
0043d048:  bl       #0x4df134
0043d04c:  sub      x0, x29, #0x60
0043d050:  sub      x1, x29, #0x90
0043d054:  stur     x23, [x29, #-0x90]
0043d058:  bl       #0x4e148c
0043d05c:  add      x1, sp, #0x6a0
0043d060:  bl       #0x4dfa04
0043d064:  add      x0, sp, #0x6a0
0043d068:  bl       #0x4df880
0043d06c:  ldrb     w8, [x22, #0x454]
0043d070:  cbz      w8, #0x43d0ac
0043d074:  ldr      w1, [x22, #0x450]
0043d078:  cbz      w1, #0x43d0ac
0043d07c:  add      x0, sp, #0x6a0
0043d080:  bl       #0x4df1ec
0043d084:  adrp     x8, #0x1d0000
0043d088:  add      x8, x8, #0x1b4
0043d08c:  sub      x0, x29, #0x60
0043d090:  sub      x1, x29, #0x90
0043d094:  stur     x8, [x29, #-0x90]
0043d098:  bl       #0x4e148c
0043d09c:  add      x1, sp, #0x6a0
0043d0a0:  bl       #0x4dfa04
0043d0a4:  add      x0, sp, #0x6a0
0043d0a8:  bl       #0x4df880
0043d0ac:  ldr      x0, [x22, #0xe8]
0043d0b0:  cbz      x0, #0x43d0bc
0043d0b4:  sub      x1, x29, #0x60
0043d0b8:  bl       #0x487734
0043d0bc:  adrp     x8, #0x1db000
0043d0c0:  add      x8, x8, #0x42f
0043d0c4:  add      x1, sp, #0x6a0
0043d0c8:  ldr      x0, [sp, #0x1a8]
0043d0cc:  add      x26, sp, #0x6a0
0043d0d0:  str      x8, [sp, #0x6a0]
0043d0d4:  bl       #0x4e148c
0043d0d8:  sub      x1, x29, #0x60
0043d0dc:  bl       #0x4df948
0043d0e0:  cbz      w24, #0x43e188
0043d0e4:  sub      x0, x29, #0x90
0043d0e8:  mov      w1, #7
0043d0ec:  str      x28, [sp, #0x288]
0043d0f0:  add      x19, sp, #0x6a0
0043d0f4:  str      x21, [sp, #0x280]
0043d0f8:  mov      x21, x27
0043d0fc:  bl       #0x4df134
0043d100:  ldr      x0, [x22, #0xf8]
0043d104:  sub      x1, x29, #0x90
0043d108:  ldr      x8, [x0]
0043d10c:  ldr      x8, [x8, #0x38]
0043d110:  blr      x8
0043d114:  add      x8, sp, #0x2c8
0043d118:  sub      x0, x29, #0x90
0043d11c:  bl       #0x4e1754
0043d120:  adrp     x20, #0xd51000
0043d124:  adrp     x27, #0xd51000
0043d128:  add      x28, x26, #0x18
0043d12c:  add      x22, x26, #0x10
0043d130:  mov      x1, x28
0043d134:  ldr      x20, [x20, #0xb10]
0043d138:  ldr      x27, [x27, #0xb18]
0043d13c:  add      x23, x20, #0x68
0043d140:  add      x25, x20, #0x40
0043d144:  ldp      x8, x9, [x27, #0x10]
0043d148:  str      x23, [sp, #0x720]
0043d14c:  str      x25, [sp, #0x6b0]
0043d150:  str      x8, [sp, #0x6a0]
0043d154:  ldur     x8, [x8, #-0x18]
0043d158:  str      x9, [x26, x8]
0043d15c:  ldr      x8, [sp, #0x6a0]
0043d160:  str      xzr, [sp, #0x6a8]
0043d164:  ldur     x8, [x8, #-0x18]
0043d168:  add      x24, x26, x8
0043d16c:  mov      x0, x24
0043d170:  bl       #0x520e8c
0043d174:  mov      w8, #-1
0043d178:  str      xzr, [x24, #0x88]
0043d17c:  ldr      x10, [x27, #8]
0043d180:  mov      x0, x28
0043d184:  str      x28, [sp, #0x290]
0043d188:  str      w8, [x24, #0x90]
0043d18c:  ldp      x9, x8, [x27, #0x20]
0043d190:  str      x9, [sp, #0x6b0]
0043d194:  ldur     x9, [x9, #-0x18]
0043d198:  str      x8, [x22, x9]
0043d19c:  ldr      x9, [x27, #0x30]
0043d1a0:  str      x10, [sp, #0x6a0]
0043d1a4:  ldur     x8, [x10, #-0x18]
0043d1a8:  add      x10, x20, #0x18
0043d1ac:  str      x9, [x26, x8]
0043d1b0:  str      x23, [sp, #0x720]
0043d1b4:  str      x10, [sp, #0x6a0]
0043d1b8:  str      x25, [sp, #0x6b0]
0043d1bc:  bl       #0x54a4c8
0043d1c0:  adrp     x8, #0xd51000
0043d1c4:  mov      w9, #0x18
0043d1c8:  movi     v0.2d, #0000000000000000
0043d1cc:  ldr      x8, [x8, #0xb20]
0043d1d0:  str      w9, [sp, #0x718]
0043d1d4:  ldr      x24, [sp, #0x2c8]
0043d1d8:  ldr      x23, [sp, #0x2d0]
0043d1dc:  stur     q0, [x19, #0x58]
0043d1e0:  add      x8, x8, #0x10
0043d1e4:  stur     q0, [x19, #0x68]
0043d1e8:  cmp      x24, x23
0043d1ec:  str      x8, [sp, #0x6b8]
0043d1f0:  b.eq     #0x43d2c4
0043d1f4:  adrp     x25, #0x199000
0043d1f8:  add      x25, x25, #0xdb6
0043d1fc:  adrp     x19, #0x1c1000
0043d200:  add      x19, x19, #0xe21
0043d204:  adrp     x26, #0x1b6000
0043d208:  add      x26, x26, #0x468
0043d20c:  adrp     x20, #0x1b9000
0043d210:  add      x20, x20, #0x584
0043d214:  adrp     x27, #0x1ca000
0043d218:  add      x27, x27, #0x575
0043d21c:  ldp      x9, x10, [x24]
0043d220:  mov      x0, x22
0043d224:  ldrsb    w8, [x24, #0x17]
0043d228:  cmp      w8, #0
0043d22c:  and      x8, x8, #0xff
0043d230:  csel     x1, x9, x24, lt
0043d234:  csel     x2, x10, x8, lt
0043d238:  bl       #0x428964
0043d23c:  mov      x1, x25
0043d240:  mov      w2, #8
0043d244:  bl       #0x428964
0043d248:  mov      x28, x0
0043d24c:  sub      x0, x29, #0x90
0043d250:  mov      x1, x24
0043d254:  bl       #0x4e146c
0043d258:  add      x1, sp, #0x610
0043d25c:  str      x19, [sp, #0x610]
0043d260:  bl       #0x4e148c
0043d264:  bl       #0x4dff08
0043d268:  mov      w1, w0
0043d26c:  mov      x0, x28
0043d270:  bl       #0x54bcd8
0043d274:  mov      x1, x26
0043d278:  mov      w2, #8
0043d27c:  bl       #0x428964
0043d280:  mov      x28, x0
0043d284:  sub      x0, x29, #0x90
0043d288:  mov      x1, x24
0043d28c:  bl       #0x4e146c
0043d290:  add      x1, sp, #0x2a0
0043d294:  str      x20, [sp, #0x2a0]
0043d298:  bl       #0x4e148c
0043d29c:  bl       #0x4dfde0
0043d2a0:  mov      w1, w0
0043d2a4:  mov      x0, x28
0043d2a8:  bl       #0x54bae0
0043d2ac:  mov      x1, x27
0043d2b0:  mov      w2, #3
0043d2b4:  bl       #0x428964
0043d2b8:  add      x24, x24, #0x18
0043d2bc:  cmp      x24, x23
0043d2c0:  b.ne     #0x43d21c
0043d2c4:  bl       #0x417e08
0043d2c8:  tbz      w0, #0, #0x43d2d4
0043d2cc:  ldr      x22, [sp, #0x298]
0043d2d0:  b        #0x43df80
0043d2d4:  ldr      x19, [sp, #0x298]
0043d2d8:  adrp     x8, #0x1a2000
0043d2dc:  add      x8, x8, #0xdb8
0043d2e0:  mov      w9, #0x2f99
0043d2e4:  add      x10, sp, #0x448
0043d2e8:  mov      x23, x21
0043d2ec:  ldr      w0, [x19, #0x500]
0043d2f0:  str      x8, [sp, #0x5d8]
0043d2f4:  str      x9, [sp, #0x5e0]
0043d2f8:  str      x10, [sp, #0x5e8]
0043d2fc:  bl       #0x48952c
0043d300:  add      x8, sp, #0x4b8
0043d304:  ldr      x10, [x19, #0x3d8]
0043d308:  add      x9, sp, #0x5d8
0043d30c:  str      x0, [sp, #0x4b8]
0043d310:  str      x1, [sp, #0x4c0]
0043d314:  adrp     x11, #0x1d5000
0043d318:  add      x11, x11, #0xe26
0043d31c:  str      x8, [sp, #0x4c8]
0043d320:  add      x8, x10, #0x20
0043d324:  str      x9, [sp, #0x4d0]
0043d328:  add      x9, sp, #0x4d8
0043d32c:  add      x12, sp, #0x4c8
0043d330:  sub      x0, x29, #0x60
0043d334:  add      x1, sp, #0x4a8
0043d338:  str      x8, [sp, #0x4e8]
0043d33c:  add      x8, sp, #0x4e8
0043d340:  str      x9, [sp, #0x4f0]
0043d344:  adrp     x9, #0x1a2000
0043d348:  add      x9, x9, #0xe42
0043d34c:  str      x11, [sp, #0x4d8]
0043d350:  str      x8, [sp, #0x500]
0043d354:  adrp     x8, #0x1a5000
0043d358:  add      x8, x8, #0xc3f
0043d35c:  str      x12, [sp, #0x4e0]
0043d360:  str      x9, [sp, #0x4f8]
0043d364:  str      x8, [sp, #0x4a8]
0043d368:  bl       #0x4e148c
0043d36c:  bl       #0x4dfde0
0043d370:  add      x8, sp, #0x508
0043d374:  mov      w9, w0
0043d378:  adrp     x10, #0x1a5000
0043d37c:  add      x10, x10, #0xc43
0043d380:  add      x11, sp, #0x4f8
0043d384:  sub      x0, x29, #0x60
0043d388:  str      x8, [sp, #0x520]
0043d38c:  adrp     x8, #0x1b3000
0043d390:  add      x8, x8, #0x477
0043d394:  add      x1, sp, #0x498
0043d398:  str      x10, [sp, #0x518]
0043d39c:  str      x9, [sp, #0x508]
0043d3a0:  str      x11, [sp, #0x510]
0043d3a4:  str      x8, [sp, #0x498]
0043d3a8:  bl       #0x4e148c
0043d3ac:  bl       #0x4dfde0
0043d3b0:  mov      w8, w0
0043d3b4:  add      x9, sp, #0x518
0043d3b8:  adrp     x10, #0x1d5000
0043d3bc:  add      x10, x10, #0xe41
0043d3c0:  add      x11, sp, #0x528
0043d3c4:  ldr      x0, [sp, #0x288]
0043d3c8:  str      x8, [sp, #0x528]
0043d3cc:  add      x8, sp, #0x610
0043d3d0:  str      x9, [sp, #0x530]
0043d3d4:  str      x10, [sp, #0x538]
0043d3d8:  str      x11, [sp, #0x540]
0043d3dc:  bl       #0x434e78
0043d3e0:  ldrsb    w8, [sp, #0x627]
0043d3e4:  tbnz     w8, #0x1f, #0x43dbd0
0043d3e8:  ldr      q0, [sp, #0x610]
0043d3ec:  add      x9, sp, #0x538
0043d3f0:  ldr      x8, [sp, #0x620]
0043d3f4:  str      q0, [sp, #0x5f0]
0043d3f8:  str      x8, [sp, #0x600]
0043d3fc:  str      x9, [sp, #0x608]
0043d400:  b        #0x43dc4c
0043d404:  mov      w10, #3
0043d408:  adrp     x8, #0x1b0000
0043d40c:  add      x8, x8, #0x855
0043d410:  add      x9, sp, #0x640
0043d414:  cmp      x9, x8
0043d418:  strb     w10, [sp, #0x657]
0043d41c:  b.hi     #0x43d42c
0043d420:  orr      x9, x9, #3
0043d424:  cmp      x9, x8
0043d428:  b.hi     #0x43eb5c
0043d42c:  mov      w8, #0x2f4e
0043d430:  adrp     x4, #0x1be000
0043d434:  add      x4, x4, #0xed5
0043d438:  movk     w8, #0x41, lsl #16
0043d43c:  str      w8, [sp, #0x640]
0043d440:  ldur     x8, [x29, #-0x88]
0043d444:  asr      x5, x19, #0x14
0043d448:  adrp     x0, #0x1f6000
0043d44c:  add      x0, x0, #0x1f1
0043d450:  adrp     x6, #0x19f000
0043d454:  add      x6, x6, #0xb08
0043d458:  ldp      x3, x9, [x8]
0043d45c:  add      x7, sp, #0x640
0043d460:  ldp      x1, x2, [x9]
0043d464:  bl       #0x623bb0
0043d468:  ldrsb    w8, [sp, #0x657]
0043d46c:  tbz      w8, #0x1f, #0x43d478
0043d470:  ldr      x0, [sp, #0x640]
0043d474:  bl       #0xd13dd0
0043d478:  ldr      w8, [sp, #0x18c]
0043d47c:  cmn      w8, #1
0043d480:  b.eq     #0x43eadc
0043d484:  ldursb   w8, [x29, #-0x49]
0043d488:  tbz      w8, #0x1f, #0x43eadc
0043d48c:  ldur     x0, [x29, #-0x60]
0043d490:  bl       #0xd13dd0
0043d494:  b        #0x43eadc
0043d498:  adrp     x9, #0xd51000
0043d49c:  adrp     x19, #0x1a2000
0043d4a0:  add      x19, x19, #0xdf9
0043d4a4:  adrp     x26, #0x199000
0043d4a8:  add      x26, x26, #0xd67
0043d4ac:  ldr      x9, [x9, #0xb18]
0043d4b0:  ldr      x8, [x9, #0x10]
0043d4b4:  str      x8, [sp, #0x290]
0043d4b8:  ldr      x8, [x9, #0x18]
0043d4bc:  str      x8, [sp, #0x288]
0043d4c0:  add      x8, sp, #0x6a0
0043d4c4:  add      x10, x8, #0x80
0043d4c8:  add      x24, x8, #0x10
0043d4cc:  add      x23, x8, #0x18
0043d4d0:  add      x8, x8, #0x58
0043d4d4:  str      x10, [sp, #0x280]
0043d4d8:  ldr      x10, [x9, #0x20]
0043d4dc:  str      x10, [sp, #0x278]
0043d4e0:  ldr      x10, [x9, #0x28]
0043d4e4:  str      x10, [sp, #0x270]
0043d4e8:  ldr      x10, [x9, #0x30]
0043d4ec:  str      x10, [sp, #0x268]
0043d4f0:  adrp     x10, #0xd51000
0043d4f4:  ldr      x10, [x10, #0xb20]
0043d4f8:  str      x8, [sp, #0x260]
0043d4fc:  ldr      x8, [x9, #8]
0043d500:  str      x8, [sp, #0x258]
0043d504:  ldr      x8, [x9]
0043d508:  str      x8, [sp, #0x250]
0043d50c:  add      x8, x10, #0x10
0043d510:  str      x8, [sp, #0x248]
0043d514:  ldr      x8, [x9, #0x40]
0043d518:  str      x8, [sp, #0x240]
0043d51c:  ldr      x8, [x9, #0x48]
0043d520:  str      x8, [sp, #0x238]
0043d524:  b        #0x43d59c
0043d528:  ldr      x8, [sp, #0x250]
0043d52c:  add      x9, sp, #0x6a0
0043d530:  ldr      x10, [sp, #0x240]
0043d534:  str      x8, [sp, #0x6a0]
0043d538:  ldur     x8, [x8, #-0x18]
0043d53c:  str      x10, [x9, x8]
0043d540:  adrp     x8, #0xd51000
0043d544:  ldr      x8, [x8, #0xb20]
0043d548:  ldrsb    w9, [sp, #0x70f]
0043d54c:  ldr      x10, [sp, #0x238]
0043d550:  add      x8, x8, #0x10
0043d554:  str      x10, [sp, #0x6b0]
0043d558:  str      x8, [sp, #0x6b8]
0043d55c:  tbnz     w9, #0x1f, #0x43dba8
0043d560:  mov      x0, x23
0043d564:  bl       #0x54a488
0043d568:  adrp     x8, #0xd51000
0043d56c:  add      x0, sp, #0x6a0
0043d570:  ldr      x8, [x8, #0xb18]
0043d574:  add      x1, x8, #8
0043d578:  bl       #0x54ce58
0043d57c:  ldr      x0, [sp, #0x280]
0043d580:  bl       #0x54a460
0043d584:  sub      x0, x29, #0x90
0043d588:  bl       #0x4defb8
0043d58c:  sub      x0, x29, #0x90
0043d590:  add      x1, sp, #0x610
0043d594:  bl       #0x4df028
0043d598:  tbnz     w0, #0, #0x43ca14
0043d59c:  sub      x0, x29, #0x90
0043d5a0:  bl       #0x4defac
0043d5a4:  adrp     x21, #0xd51000
0043d5a8:  add      x20, sp, #0x6a0
0043d5ac:  mov      x25, x0
0043d5b0:  mov      x1, x23
0043d5b4:  ldr      x21, [x21, #0xb10]
0043d5b8:  ldr      x8, [sp, #0x290]
0043d5bc:  ldr      x9, [sp, #0x288]
0043d5c0:  add      x28, x21, #0x68
0043d5c4:  add      x22, x21, #0x40
0043d5c8:  str      x8, [sp, #0x6a0]
0043d5cc:  str      x28, [sp, #0x720]
0043d5d0:  str      x22, [sp, #0x6b0]
0043d5d4:  ldur     x8, [x8, #-0x18]
0043d5d8:  str      x9, [x20, x8]
0043d5dc:  ldr      x8, [sp, #0x6a0]
0043d5e0:  str      xzr, [sp, #0x6a8]
0043d5e4:  ldur     x8, [x8, #-0x18]
0043d5e8:  add      x27, x20, x8
0043d5ec:  mov      x0, x27
0043d5f0:  bl       #0x520e8c
0043d5f4:  mov      w8, #-1
0043d5f8:  str      xzr, [x27, #0x88]
0043d5fc:  ldr      x9, [sp, #0x270]
0043d600:  mov      x0, x23
0043d604:  ldr      x10, [sp, #0x268]
0043d608:  str      w8, [x27, #0x90]
0043d60c:  ldr      x8, [sp, #0x278]
0043d610:  str      x8, [sp, #0x6b0]
0043d614:  ldur     x8, [x8, #-0x18]
0043d618:  str      x9, [x24, x8]
0043d61c:  ldr      x8, [sp, #0x258]
0043d620:  add      x9, x21, #0x18
0043d624:  str      x8, [sp, #0x6a0]
0043d628:  ldur     x8, [x8, #-0x18]
0043d62c:  str      x10, [x20, x8]
0043d630:  str      x22, [sp, #0x6b0]
0043d634:  ldr      x22, [sp, #0x298]
0043d638:  str      x28, [sp, #0x720]
0043d63c:  str      x9, [sp, #0x6a0]
0043d640:  bl       #0x54a4c8
0043d644:  ldr      x8, [sp, #0x248]
0043d648:  mov      x0, x24
0043d64c:  movi     v0.2d, #0000000000000000
0043d650:  adrp     x1, #0x1ef000
0043d654:  add      x1, x1, #0x4a9
0043d658:  mov      w2, #0x1f
0043d65c:  str      x8, [sp, #0x6b8]
0043d660:  ldr      x8, [sp, #0x260]
0043d664:  stp      q0, q0, [x8]
0043d668:  mov      w8, #0x18
0043d66c:  str      w8, [sp, #0x718]
0043d670:  bl       #0x428964
0043d674:  ldr      x8, [x22, #0x3d8]
0043d678:  ldr      x9, [x8, #0x20]!
0043d67c:  ldrb     w10, [x8, #0x17]
0043d680:  ldr      x11, [x8, #8]
0043d684:  sxtb     w12, w10
0043d688:  cmp      w12, #0
0043d68c:  csel     x1, x9, x8, lt
0043d690:  csel     x2, x11, x10, lt
0043d694:  bl       #0x428964
0043d698:  adrp     x1, #0x1a5000
0043d69c:  add      x1, x1, #0xc1a
0043d6a0:  mov      w2, #9
0043d6a4:  bl       #0x428964
0043d6a8:  mov      x27, x0
0043d6ac:  mov      x0, x25
0043d6b0:  adrp     x1, #0x1b9000
0043d6b4:  add      x1, x1, #0x537
0043d6b8:  bl       #0x4e12e0
0043d6bc:  add      x8, sp, #0x640
0043d6c0:  bl       #0x4dfbf8
0043d6c4:  ldrsb    w8, [sp, #0x657]
0043d6c8:  add      x11, sp, #0x640
0043d6cc:  ldr      x9, [sp, #0x640]
0043d6d0:  mov      x0, x27
0043d6d4:  ldr      x10, [sp, #0x648]
0043d6d8:  cmp      w8, #0
0043d6dc:  and      x8, x8, #0xff
0043d6e0:  csel     x1, x9, x11, lt
0043d6e4:  csel     x2, x10, x8, lt
0043d6e8:  bl       #0x428964
0043d6ec:  adrp     x1, #0x1a2000
0043d6f0:  add      x1, x1, #0xdf6
0043d6f4:  mov      w2, #2
0043d6f8:  bl       #0x428964
0043d6fc:  mov      x27, x0
0043d700:  mov      x0, x25
0043d704:  adrp     x1, #0x1ec000
0043d708:  add      x1, x1, #0xa6b
0043d70c:  bl       #0x4e12e0
0043d710:  sub      x8, x29, #0x60
0043d714:  bl       #0x4dfbf8
0043d718:  ldp      x9, x10, [x29, #-0x60]
0043d71c:  sub      x11, x29, #0x60
0043d720:  mov      x0, x27
0043d724:  ldursb   w8, [x29, #-0x49]
0043d728:  cmp      w8, #0
0043d72c:  and      x8, x8, #0xff
0043d730:  csel     x1, x9, x11, lt
0043d734:  csel     x2, x10, x8, lt
0043d738:  bl       #0x428964
0043d73c:  adrp     x1, #0x199000
0043d740:  add      x1, x1, #0xd7c
0043d744:  mov      w2, #0x15
0043d748:  bl       #0x428964
0043d74c:  mov      x27, x0
0043d750:  mov      x0, x25
0043d754:  adrp     x1, #0x1b9000
0043d758:  add      x1, x1, #0x552
0043d75c:  bl       #0x4e12e0
0043d760:  bl       #0x4dfde0
0043d764:  mov      w1, w0
0043d768:  mov      x0, x27
0043d76c:  bl       #0x54bae0
0043d770:  adrp     x1, #0x1c1000
0043d774:  add      x1, x1, #0xe08
0043d778:  mov      w2, #0x18
0043d77c:  bl       #0x428964
0043d780:  mov      x27, x0
0043d784:  mov      x0, x25
0043d788:  adrp     x1, #0x1e9000
0043d78c:  add      x1, x1, #0xeb7
0043d790:  bl       #0x4e12e0
0043d794:  bl       #0x4dff08
0043d798:  mov      w1, w0
0043d79c:  mov      x0, x27
0043d7a0:  bl       #0x54bcd8
0043d7a4:  adrp     x1, #0x1d2000
0043d7a8:  add      x1, x1, #0xd84
0043d7ac:  mov      w2, #0x16
0043d7b0:  bl       #0x428964
0043d7b4:  mov      x27, x0
0043d7b8:  mov      x0, x25
0043d7bc:  adrp     x1, #0x1b6000
0043d7c0:  add      x1, x1, #0x458
0043d7c4:  bl       #0x4e12e0
0043d7c8:  bl       #0x4dfde0
0043d7cc:  mov      w1, w0
0043d7d0:  mov      x0, x27
0043d7d4:  bl       #0x54bae0
0043d7d8:  adrp     x1, #0x1a2000
0043d7dc:  add      x1, x1, #0xe1a
0043d7e0:  mov      w2, #0x15
0043d7e4:  bl       #0x428964
0043d7e8:  mov      x27, x0
0043d7ec:  mov      x0, x25
0043d7f0:  adrp     x1, #0x1d5000
0043d7f4:  add      x1, x1, #0xdf4
0043d7f8:  bl       #0x4e12e0
0043d7fc:  bl       #0x4dfde0
0043d800:  mov      w1, w0
0043d804:  mov      x0, x27
0043d808:  bl       #0x54bae0
0043d80c:  adrp     x1, #0x19c000
0043d810:  add      x1, x1, #0xaba
0043d814:  mov      w2, #0x15
0043d818:  bl       #0x428964
0043d81c:  mov      x27, x0
0043d820:  mov      x0, x25
0043d824:  adrp     x1, #0x1a8000
0043d828:  add      x1, x1, #0x708
0043d82c:  bl       #0x4e12e0
0043d830:  bl       #0x4dfde0
0043d834:  mov      w1, w0
0043d838:  mov      x0, x27
0043d83c:  bl       #0x54bae0
0043d840:  adrp     x1, #0x1de000
0043d844:  add      x1, x1, #0x566
0043d848:  mov      w2, #0x15
0043d84c:  bl       #0x428964
0043d850:  mov      x27, x0
0043d854:  mov      x0, x25
0043d858:  adrp     x1, #0x1e9000
0043d85c:  add      x1, x1, #0xec5
0043d860:  bl       #0x4e12e0
0043d864:  bl       #0x4e03c4
0043d868:  tbz      w0, #0, #0x43d874
0043d86c:  mov      w0, #1
0043d870:  b        #0x43d888
0043d874:  mov      x0, x25
0043d878:  adrp     x1, #0x1ef000
0043d87c:  add      x1, x1, #0x4c9
0043d880:  bl       #0x4e12e0
0043d884:  bl       #0x4e03c4
0043d888:  and      w1, w0, #1
0043d88c:  mov      x0, x27
0043d890:  bl       #0x54b538
0043d894:  adrp     x1, #0x1b9000
0043d898:  add      x1, x1, #0x561
0043d89c:  mov      w2, #0xe
0043d8a0:  bl       #0x428964
0043d8a4:  mov      x27, x0
0043d8a8:  mov      x0, x25
0043d8ac:  adrp     x1, #0x1d0000
0043d8b0:  add      x1, x1, #0x190
0043d8b4:  bl       #0x4e12e0
0043d8b8:  bl       #0x4e03c4
0043d8bc:  adrp     x20, #0x1b3000
0043d8c0:  add      x20, x20, #0x471
0043d8c4:  adrp     x21, #0x1ca000
0043d8c8:  add      x21, x21, #0x547
0043d8cc:  adrp     x28, #0x1c7000
0043d8d0:  add      x28, x28, #0xbaf
0043d8d4:  tbz      w0, #0, #0x43d8e0
0043d8d8:  mov      w0, #1
0043d8dc:  b        #0x43d8f4
0043d8e0:  mov      x0, x25
0043d8e4:  adrp     x1, #0x1e9000
0043d8e8:  add      x1, x1, #0xeda
0043d8ec:  bl       #0x4e12e0
0043d8f0:  bl       #0x4e03c4
0043d8f4:  and      w1, w0, #1
0043d8f8:  mov      x0, x27
0043d8fc:  bl       #0x54b538
0043d900:  ldursb   w8, [x29, #-0x49]
0043d904:  tbnz     w8, #0x1f, #0x43dbb4
0043d908:  ldrsb    w8, [sp, #0x657]
0043d90c:  tbnz     w8, #0x1f, #0x43dbc4
0043d910:  mov      x0, x25
0043d914:  adrp     x1, #0x1b3000
0043d918:  add      x1, x1, #0x466
0043d91c:  bl       #0x4e12e0
0043d920:  mov      x25, x0
0043d924:  bl       #0x4e1d70
0043d928:  str      x0, [sp, #0x640]
0043d92c:  mov      x0, x25
0043d930:  str      x1, [sp, #0x648]
0043d934:  bl       #0x4e1da0
0043d938:  stp      x0, x1, [x29, #-0x60]
0043d93c:  b        #0x43d948
0043d940:  add      x0, sp, #0x640
0043d944:  bl       #0x4defb8
0043d948:  add      x0, sp, #0x640
0043d94c:  sub      x1, x29, #0x60
0043d950:  bl       #0x4df028
0043d954:  tbnz     w0, #0, #0x43db54
0043d958:  add      x0, sp, #0x640
0043d95c:  bl       #0x4defac
0043d960:  mov      x1, x20
0043d964:  mov      x25, x0
0043d968:  bl       #0x4e12e0
0043d96c:  bl       #0x4e03c4
0043d970:  tbnz     w0, #0, #0x43d940
0043d974:  mov      x0, x24
0043d978:  mov      x1, x21
0043d97c:  mov      w2, #0x12
0043d980:  bl       #0x428964
0043d984:  mov      x27, x0
0043d988:  mov      x0, x25
0043d98c:  mov      x1, x28
0043d990:  bl       #0x4e12e0
0043d994:  bl       #0x4dff08
0043d998:  mov      w1, w0
0043d99c:  mov      x0, x27
0043d9a0:  bl       #0x54bcd8
0043d9a4:  adrp     x1, #0x199000
0043d9a8:  add      x1, x1, #0xd92
0043d9ac:  mov      w2, #0x1b
0043d9b0:  bl       #0x428964
0043d9b4:  mov      x27, x0
0043d9b8:  mov      x0, x25
0043d9bc:  mov      x1, x19
0043d9c0:  bl       #0x4e12e0
0043d9c4:  adrp     x1, #0x1d2000
0043d9c8:  add      x1, x1, #0xd6a
0043d9cc:  bl       #0x4e12e0
0043d9d0:  bl       #0x4dfde0
0043d9d4:  mov      w1, w0
0043d9d8:  mov      x0, x27
0043d9dc:  bl       #0x54bae0
0043d9e0:  adrp     x1, #0x1c7000
0043d9e4:  add      x1, x1, #0xbbb
0043d9e8:  mov      w2, #1
0043d9ec:  bl       #0x428964
0043d9f0:  mov      x27, x0
0043d9f4:  mov      x0, x25
0043d9f8:  mov      x1, x19
0043d9fc:  bl       #0x4e12e0
0043da00:  adrp     x1, #0x1d5000
0043da04:  add      x1, x1, #0xdd2
0043da08:  bl       #0x4e12e0
0043da0c:  bl       #0x4dfde0
0043da10:  mov      w1, w0
0043da14:  mov      x0, x27
0043da18:  bl       #0x54bae0
0043da1c:  mov      x0, x24
0043da20:  adrp     x1, #0x1e1000
0043da24:  add      x1, x1, #0x54e
0043da28:  mov      w2, #0x10
0043da2c:  bl       #0x428964
0043da30:  mov      x27, x0
0043da34:  mov      x0, x25
0043da38:  mov      x1, x26
0043da3c:  bl       #0x4e12e0
0043da40:  adrp     x1, #0x1db000
0043da44:  add      x1, x1, #0x3e3
0043da48:  bl       #0x4e12e0
0043da4c:  adrp     x1, #0x1b6000
0043da50:  add      x1, x1, #0x450
0043da54:  bl       #0x4e12e0
0043da58:  bl       #0x4dff08
0043da5c:  mov      w1, w0
0043da60:  mov      x0, x27
0043da64:  bl       #0x54bcd8
0043da68:  adrp     x1, #0x197000
0043da6c:  add      x1, x1, #0x440
0043da70:  mov      w2, #0x15
0043da74:  bl       #0x428964
0043da78:  mov      x27, x0
0043da7c:  mov      x0, x25
0043da80:  adrp     x1, #0x1c7000
0043da84:  add      x1, x1, #0xbcc
0043da88:  bl       #0x4e12e0
0043da8c:  adrp     x1, #0x1a2000
0043da90:  add      x1, x1, #0xdea
0043da94:  bl       #0x4e12e0
0043da98:  bl       #0x4dfde0
0043da9c:  mov      w1, w0
0043daa0:  mov      x0, x27
0043daa4:  bl       #0x54bae0
0043daa8:  adrp     x1, #0x1bc000
0043daac:  add      x1, x1, #0x32c
0043dab0:  mov      w2, #0xe
0043dab4:  bl       #0x428964
0043dab8:  mov      x27, x0
0043dabc:  mov      x0, x25
0043dac0:  mov      x1, x26
0043dac4:  bl       #0x4e12e0
0043dac8:  bl       #0x43bb48
0043dacc:  mov      x1, x0
0043dad0:  mov      x0, x27
0043dad4:  bl       #0x54c088
0043dad8:  adrp     x1, #0x1c7000
0043dadc:  add      x1, x1, #0xbbd
0043dae0:  mov      w2, #0xe
0043dae4:  bl       #0x428964
0043dae8:  mov      x27, x0
0043daec:  mov      x0, x25
0043daf0:  adrp     x1, #0x1a5000
0043daf4:  add      x1, x1, #0xc24
0043daf8:  bl       #0x4e12e0
0043dafc:  bl       #0x4dfde0
0043db00:  mov      w1, w0
0043db04:  mov      x0, x27
0043db08:  bl       #0x54bae0
0043db0c:  adrp     x1, #0x19c000
0043db10:  add      x1, x1, #0xaaa
0043db14:  mov      w2, #3
0043db18:  bl       #0x428964
0043db1c:  mov      x27, x0
0043db20:  mov      x0, x25
0043db24:  adrp     x1, #0x1d5000
0043db28:  add      x1, x1, #0xdde
0043db2c:  bl       #0x4e12e0
0043db30:  bl       #0x4dfde0
0043db34:  mov      w1, w0
0043db38:  mov      x0, x27
0043db3c:  bl       #0x54bae0
0043db40:  adrp     x1, #0x1d5000
0043db44:  add      x1, x1, #0xe07
0043db48:  mov      w2, #1
0043db4c:  bl       #0x428964
0043db50:  b        #0x43d940
0043db54:  bl       #0x417e08
0043db58:  tbnz     w0, #0, #0x43d528
0043db5c:  ldr      w0, [x22, #0x500]
0043db60:  bl       #0x48952c
0043db64:  stp      x0, x1, [x29, #-0x60]
0043db68:  add      x8, sp, #0x640
0043db6c:  mov      x0, x23
0043db70:  bl       #0x54d504
0043db74:  sub      x3, x29, #0x60
0043db78:  add      x4, sp, #0x640
0043db7c:  adrp     x0, #0x1f6000
0043db80:  add      x0, x0, #0x19c
0043db84:  adrp     x1, #0x1a2000
0043db88:  add      x1, x1, #0xdb8
0043db8c:  mov      w2, #0x2ca1
0043db90:  bl       #0x623bb0
0043db94:  ldrsb    w8, [sp, #0x657]
0043db98:  tbz      w8, #0x1f, #0x43d528
0043db9c:  ldr      x0, [sp, #0x640]
0043dba0:  bl       #0xd13dd0
0043dba4:  b        #0x43d528
0043dba8:  ldr      x0, [sp, #0x6f8]
0043dbac:  bl       #0xd13dd0
0043dbb0:  b        #0x43d560
0043dbb4:  ldur     x0, [x29, #-0x60]
0043dbb8:  bl       #0xd13dd0
0043dbbc:  ldrsb    w8, [sp, #0x657]
0043dbc0:  tbz      w8, #0x1f, #0x43d910
0043dbc4:  ldr      x0, [sp, #0x640]
0043dbc8:  bl       #0xd13dd0
0043dbcc:  b        #0x43d910
0043dbd0:  ldr      x19, [sp, #0x618]
0043dbd4:  ldr      x21, [sp, #0x610]
0043dbd8:  cmp      x19, #0x16
0043dbdc:  b.hi     #0x43dbec
0043dbe0:  add      x0, sp, #0x5f0
0043dbe4:  strb     w19, [sp, #0x607]
0043dbe8:  b        #0x43dc1c
0043dbec:  mov      x8, #-0x11
0043dbf0:  movk     x8, #0x7fff, lsl #48
0043dbf4:  cmp      x19, x8
0043dbf8:  b.hi     #0x43eb88
0043dbfc:  orr      x8, x19, #0xf
0043dc00:  add      x22, x8, #1
0043dc04:  mov      x0, x22
0043dc08:  bl       #0xd13d90
0043dc0c:  orr      x8, x22, #0x8000000000000000
0043dc10:  str      x0, [sp, #0x5f0]
0043dc14:  str      x19, [sp, #0x5f8]
0043dc18:  str      x8, [sp, #0x600]
0043dc1c:  add      x2, x19, #1
0043dc20:  cmp      x0, x21
0043dc24:  b.hi     #0x43dc34
0043dc28:  add      x8, x0, x2
0043dc2c:  cmp      x8, x21
0043dc30:  b.hi     #0x43eb5c
0043dc34:  mov      x1, x21
0043dc38:  bl       #0xd13de0
0043dc3c:  add      x8, sp, #0x538
0043dc40:  mov      x0, x21
0043dc44:  str      x8, [sp, #0x608]
0043dc48:  bl       #0xd13dd0
0043dc4c:  add      x8, sp, #0x5f0
0043dc50:  adrp     x9, #0x1d5000
0043dc54:  add      x9, x9, #0xe5d
0043dc58:  ldr      x0, [sp, #0x280]
0043dc5c:  str      x8, [sp, #0x550]
0043dc60:  add      x8, sp, #0x610
0043dc64:  str      x9, [sp, #0x548]
0043dc68:  bl       #0x447034
0043dc6c:  ldrsb    w8, [sp, #0x627]
0043dc70:  tbnz     w8, #0x1f, #0x43dc90
0043dc74:  ldr      q0, [sp, #0x610]
0043dc78:  add      x9, sp, #0x548
0043dc7c:  ldr      x8, [sp, #0x620]
0043dc80:  str      q0, [sp, #0x2a0]
0043dc84:  str      x8, [sp, #0x2b0]
0043dc88:  str      x9, [sp, #0x2b8]
0043dc8c:  b        #0x43dd0c
0043dc90:  ldr      x19, [sp, #0x618]
0043dc94:  ldr      x20, [sp, #0x610]
0043dc98:  cmp      x19, #0x16
0043dc9c:  b.hi     #0x43dcac
0043dca0:  add      x0, sp, #0x2a0
0043dca4:  strb     w19, [sp, #0x2b7]
0043dca8:  b        #0x43dcdc
0043dcac:  mov      x8, #-0x11
0043dcb0:  movk     x8, #0x7fff, lsl #48
0043dcb4:  cmp      x19, x8
0043dcb8:  b.hi     #0x43eb8c
0043dcbc:  orr      x8, x19, #0xf
0043dcc0:  add      x21, x8, #1
0043dcc4:  mov      x0, x21
0043dcc8:  bl       #0xd13d90
0043dccc:  orr      x8, x21, #0x8000000000000000
0043dcd0:  str      x0, [sp, #0x2a0]
0043dcd4:  str      x19, [sp, #0x2a8]
0043dcd8:  str      x8, [sp, #0x2b0]
0043dcdc:  add      x2, x19, #1
0043dce0:  cmp      x0, x20
0043dce4:  b.hi     #0x43dcf4
0043dce8:  add      x8, x0, x2
0043dcec:  cmp      x8, x20
0043dcf0:  b.hi     #0x43eb5c
0043dcf4:  mov      x1, x20
0043dcf8:  bl       #0xd13de0
0043dcfc:  add      x8, sp, #0x548
0043dd00:  mov      x0, x20
0043dd04:  str      x8, [sp, #0x2b8]
0043dd08:  bl       #0xd13dd0
0043dd0c:  add      x8, sp, #0x2a0
0043dd10:  adrp     x9, #0x1ec000
0043dd14:  add      x9, x9, #0xa85
0043dd18:  mov      x0, x23
0043dd1c:  str      x8, [sp, #0x560]
0043dd20:  sub      x8, x29, #0x30
0043dd24:  str      x9, [sp, #0x558]
0043dd28:  bl       #0x447034
0043dd2c:  ldursb   w8, [x29, #-0x19]
0043dd30:  tbnz     w8, #0x1f, #0x43dd50
0043dd34:  ldur     q0, [x29, #-0x30]
0043dd38:  add      x9, sp, #0x558
0043dd3c:  ldur     x8, [x29, #-0x20]
0043dd40:  str      q0, [sp, #0x610]
0043dd44:  str      x8, [sp, #0x620]
0043dd48:  str      x9, [sp, #0x628]
0043dd4c:  b        #0x43ddc8
0043dd50:  ldp      x19, x21, [x29, #-0x30]
0043dd54:  cmp      x21, #0x16
0043dd58:  b.hi     #0x43dd68
0043dd5c:  add      x0, sp, #0x610
0043dd60:  strb     w21, [sp, #0x627]
0043dd64:  b        #0x43dd98
0043dd68:  mov      x8, #-0x11
0043dd6c:  movk     x8, #0x7fff, lsl #48
0043dd70:  cmp      x21, x8
0043dd74:  b.hi     #0x43eb90
0043dd78:  orr      x8, x21, #0xf
0043dd7c:  add      x20, x8, #1
0043dd80:  mov      x0, x20
0043dd84:  bl       #0xd13d90
0043dd88:  orr      x8, x20, #0x8000000000000000
0043dd8c:  str      x0, [sp, #0x610]
0043dd90:  str      x21, [sp, #0x618]
0043dd94:  str      x8, [sp, #0x620]
0043dd98:  add      x2, x21, #1
0043dd9c:  cmp      x0, x19
0043dda0:  b.hi     #0x43ddb0
0043dda4:  add      x8, x0, x2
0043dda8:  cmp      x8, x19
0043ddac:  b.hi     #0x43eb5c
0043ddb0:  mov      x1, x19
0043ddb4:  bl       #0xd13de0
0043ddb8:  add      x8, sp, #0x558
0043ddbc:  mov      x0, x19
0043ddc0:  str      x8, [sp, #0x628]
0043ddc4:  bl       #0xd13dd0
0043ddc8:  add      x8, sp, #0x610
0043ddcc:  adrp     x9, #0x1ca000
0043ddd0:  add      x9, x9, #0x579
0043ddd4:  ldr      x0, [sp, #0x290]
0043ddd8:  sub      x19, x29, #0x30
0043dddc:  str      x8, [sp, #0x570]
0043dde0:  sub      x8, x29, #0x30
0043dde4:  str      x9, [sp, #0x568]
0043dde8:  bl       #0x54d504
0043ddec:  add      x8, sp, #0x568
0043ddf0:  adrp     x9, #0x1c1000
0043ddf4:  add      x9, x9, #0xe30
0043ddf8:  add      x10, sp, #0x578
0043ddfc:  sub      x0, x29, #0x60
0043de00:  add      x1, sp, #0x488
0043de04:  str      x8, [sp, #0x580]
0043de08:  adrp     x8, #0x1db000
0043de0c:  add      x8, x8, #0x3fc
0043de10:  str      x19, [sp, #0x578]
0043de14:  str      x9, [sp, #0x588]
0043de18:  str      x10, [sp, #0x590]
0043de1c:  str      x8, [sp, #0x488]
0043de20:  bl       #0x4e148c
0043de24:  bl       #0x4e0124
0043de28:  add      x8, sp, #0x588
0043de2c:  adrp     x20, #0x1e7000
0043de30:  add      x20, x20, #0x1ea
0043de34:  add      x9, sp, #0x598
0043de38:  str      x0, [sp, #0x598]
0043de3c:  sub      x0, x29, #0x60
0043de40:  str      x8, [sp, #0x5a0]
0043de44:  adrp     x8, #0x1d2000
0043de48:  add      x8, x8, #0xd5a
0043de4c:  add      x1, sp, #0x478
0043de50:  str      x20, [sp, #0x5a8]
0043de54:  str      x9, [sp, #0x5b0]
0043de58:  str      x8, [sp, #0x478]
0043de5c:  bl       #0x4e148c
0043de60:  bl       #0x4e0124
0043de64:  add      x8, sp, #0x5a8
0043de68:  adrp     x9, #0x1bc000
0043de6c:  add      x9, x9, #0x32c
0043de70:  add      x10, sp, #0x5b8
0043de74:  str      x0, [sp, #0x5b8]
0043de78:  sub      x0, x29, #0x60
0043de7c:  str      x8, [sp, #0x5c0]
0043de80:  adrp     x8, #0x1e7000
0043de84:  add      x8, x8, #0x1f7
0043de88:  add      x1, sp, #0x468
0043de8c:  str      x9, [sp, #0x5c8]
0043de90:  str      x10, [sp, #0x5d0]
0043de94:  str      x8, [sp, #0x468]
0043de98:  bl       #0x4e148c
0043de9c:  bl       #0x4e0124
0043dea0:  mov      x19, x0
0043dea4:  adrp     x8, #0x1b6000
0043dea8:  add      x8, x8, #0x471
0043deac:  sub      x0, x29, #0x60
0043deb0:  add      x1, sp, #0x458
0043deb4:  str      x8, [sp, #0x458]
0043deb8:  bl       #0x4e148c
0043debc:  bl       #0x4e0124
0043dec0:  ldr      x8, [sp, #0x5d0]
0043dec4:  ldr      x9, [sp, #0x5c8]
0043dec8:  ldp      x8, x10, [x8]
0043decc:  ldp      x10, x11, [x10]
0043ded0:  ldp      x11, x12, [x11]
0043ded4:  ldp      x12, x13, [x12]
0043ded8:  ldp      x13, x14, [x13]
0043dedc:  ldp      x14, x15, [x14]
0043dee0:  ldr      x16, [x15, #0x18]
0043dee4:  ldp      x16, x17, [x16]
0043dee8:  ldr      x1, [x17, #0x18]
0043deec:  ldp      x22, x21, [x1]
0043def0:  ldr      x1, [x21, #0x18]
0043def4:  ldp      x24, x23, [x1]
0043def8:  ldr      x1, [x23, #8]
0043defc:  ldr      w23, [x23]
0043df00:  ldp      x25, x2, [x1]
0043df04:  ldr      x1, [x2, #8]
0043df08:  ldr      w7, [x2]
0043df0c:  ldp      x6, x3, [x1]
0043df10:  ldp      x5, x1, [x3]
0043df14:  ldp      x4, x3, [x1]
0043df18:  ldp      x3, x26, [x3]
0043df1c:  ldp      x1, x2, [x26]
0043df20:  stp      x20, x0, [sp, #0x80]
0043df24:  adrp     x0, #0x1f6000
0043df28:  add      x0, x0, #0x1b2
0043df2c:  stp      x9, x19, [sp, #0x70]
0043df30:  stp      x10, x8, [sp, #0x60]
0043df34:  stp      x12, x11, [sp, #0x50]
0043df38:  stp      x14, x13, [sp, #0x40]
0043df3c:  stp      x16, x15, [sp, #0x30]
0043df40:  stp      x22, x17, [sp, #0x20]
0043df44:  stp      x24, x21, [sp, #0x10]
0043df48:  str      w23, [sp, #8]
0043df4c:  str      x25, [sp]
0043df50:  bl       #0x623bb0
0043df54:  ldursb   w8, [x29, #-0x19]
0043df58:  tbz      w8, #0x1f, #0x43df64
0043df5c:  ldur     x0, [x29, #-0x30]
0043df60:  bl       #0xd13dd0
0043df64:  ldrsb    w8, [sp, #0x627]
0043df68:  ldr      x22, [sp, #0x298]
0043df6c:  tbnz     w8, #0x1f, #0x43e314
0043df70:  ldrsb    w8, [sp, #0x2b7]
0043df74:  tbnz     w8, #0x1f, #0x43e324
0043df78:  ldrsb    w8, [sp, #0x607]
0043df7c:  tbnz     w8, #0x1f, #0x43e334
0043df80:  ldr      x19, [x22, #0x468]
0043df84:  ldr      x24, [x22, #0x470]
0043df88:  cmp      x19, x24
0043df8c:  b.eq     #0x43e0c8
0043df90:  mov      w21, #0x3011
0043df94:  add      x27, sp, #0x5c8
0043df98:  add      x28, sp, #0x5d8
0043df9c:  add      x23, sp, #0x5f0
0043dfa0:  adrp     x25, #0x1a2000
0043dfa4:  add      x25, x25, #0xdb8
0043dfa8:  adrp     x20, #0x1f5000
0043dfac:  add      x20, x20, #0xf9c
0043dfb0:  b        #0x43dfc0
0043dfb4:  add      x19, x19, #0x30
0043dfb8:  cmp      x19, x24
0043dfbc:  b.eq     #0x43e0c8
0043dfc0:  bl       #0x417e08
0043dfc4:  tbnz     w0, #0, #0x43dfb4
0043dfc8:  ldr      w0, [x22, #0x500]
0043dfcc:  str      x25, [sp, #0x5f0]
0043dfd0:  str      x21, [sp, #0x5f8]
0043dfd4:  str      x27, [sp, #0x600]
0043dfd8:  bl       #0x48952c
0043dfdc:  str      x0, [sp, #0x5d8]
0043dfe0:  add      x8, sp, #0x2a0
0043dfe4:  mov      x0, x19
0043dfe8:  stp      x28, x23, [x29, #-0x30]
0043dfec:  str      x1, [sp, #0x5e0]
0043dff0:  bl       #0x4429a0
0043dff4:  ldrsb    w8, [sp, #0x2b7]
0043dff8:  tbnz     w8, #0x1f, #0x43e018
0043dffc:  ldr      q0, [sp, #0x2a0]
0043e000:  sub      x8, x29, #0x30
0043e004:  ldr      x9, [sp, #0x2b0]
0043e008:  str      q0, [sp, #0x610]
0043e00c:  str      x9, [sp, #0x620]
0043e010:  str      x8, [sp, #0x628]
0043e014:  b        #0x43e0a0
0043e018:  ldr      x26, [sp, #0x2a8]
0043e01c:  ldr      x21, [sp, #0x2a0]
0043e020:  cmp      x26, #0x16
0043e024:  b.hi     #0x43e034
0043e028:  add      x0, sp, #0x610
0043e02c:  strb     w26, [sp, #0x627]
0043e030:  b        #0x43e068
0043e034:  mov      x8, #-0x11
0043e038:  movk     x8, #0x7fff, lsl #48
0043e03c:  cmp      x26, x8
0043e040:  b.hi     #0x43eb84
0043e044:  orr      x8, x26, #0xf
0043e048:  add      x22, x8, #1
0043e04c:  mov      x0, x22
0043e050:  bl       #0xd13d90
0043e054:  orr      x8, x22, #0x8000000000000000
0043e058:  ldr      x22, [sp, #0x298]
0043e05c:  str      x0, [sp, #0x610]
0043e060:  str      x26, [sp, #0x618]
0043e064:  str      x8, [sp, #0x620]
0043e068:  add      x2, x26, #1
0043e06c:  cmp      x0, x21
0043e070:  b.hi     #0x43e080
0043e074:  add      x8, x0, x2
0043e078:  cmp      x8, x21
0043e07c:  b.hi     #0x43eb5c
0043e080:  mov      x1, x21
0043e084:  bl       #0xd13de0
0043e088:  sub      x8, x29, #0x30
0043e08c:  mov      x0, x21
0043e090:  str      x8, [sp, #0x628]
0043e094:  bl       #0xd13dd0
0043e098:  ldr      x8, [sp, #0x628]
0043e09c:  mov      w21, #0x3011
0043e0a0:  ldp      x3, x9, [x8]
0043e0a4:  add      x4, sp, #0x610
0043e0a8:  mov      x0, x20
0043e0ac:  ldp      x1, x2, [x9]
0043e0b0:  bl       #0x623bb0
0043e0b4:  ldrsb    w8, [sp, #0x627]
0043e0b8:  tbz      w8, #0x1f, #0x43dfb4
0043e0bc:  ldr      x0, [sp, #0x610]
0043e0c0:  bl       #0xd13dd0
0043e0c4:  b        #0x43dfb4
0043e0c8:  adrp     x20, #0xd51000
0043e0cc:  add      x9, sp, #0x6a0
0043e0d0:  ldr      x20, [x20, #0xb18]
0043e0d4:  ldr      x8, [x20]
0043e0d8:  ldp      x10, x11, [x20, #0x40]
0043e0dc:  str      x8, [sp, #0x6a0]
0043e0e0:  ldur     x8, [x8, #-0x18]
0043e0e4:  str      x10, [x9, x8]
0043e0e8:  adrp     x8, #0xd51000
0043e0ec:  add      x10, sp, #0x6a0
0043e0f0:  add      x19, x10, #0x80
0043e0f4:  ldr      x8, [x8, #0xb20]
0043e0f8:  str      x11, [sp, #0x6b0]
0043e0fc:  ldrsb    w9, [sp, #0x70f]
0043e100:  add      x8, x8, #0x10
0043e104:  str      x8, [sp, #0x6b8]
0043e108:  tbz      w9, #0x1f, #0x43e114
0043e10c:  ldr      x0, [sp, #0x6f8]
0043e110:  bl       #0xd13dd0
0043e114:  ldr      x0, [sp, #0x290]
0043e118:  bl       #0x54a488
0043e11c:  add      x1, x20, #8
0043e120:  add      x0, sp, #0x6a0
0043e124:  bl       #0x54ce58
0043e128:  mov      x0, x19
0043e12c:  bl       #0x54a460
0043e130:  ldr      x19, [sp, #0x2c8]
0043e134:  ldr      w24, [sp, #0x1b4]
0043e138:  cbz      x19, #0x43e180
0043e13c:  ldr      x8, [sp, #0x2d0]
0043e140:  mov      x0, x19
0043e144:  cmp      x8, x19
0043e148:  b.ne     #0x43e15c
0043e14c:  b        #0x43e178
0043e150:  mov      x8, x20
0043e154:  cmp      x20, x19
0043e158:  b.eq     #0x43e174
0043e15c:  ldursb   w9, [x8, #-1]
0043e160:  sub      x20, x8, #0x18
0043e164:  tbz      w9, #0x1f, #0x43e150
0043e168:  ldur     x0, [x8, #-0x18]
0043e16c:  bl       #0xd13dd0
0043e170:  b        #0x43e150
0043e174:  ldr      x0, [sp, #0x2c8]
0043e178:  str      x19, [sp, #0x2d0]
0043e17c:  bl       #0xd13dd0
0043e180:  sub      x0, x29, #0x90
0043e184:  bl       #0x4df880
0043e188:  ldr      x0, [sp, #0x688]
0043e18c:  cbz      x0, #0x43e198
0043e190:  str      x0, [sp, #0x690]
0043e194:  bl       #0xd13dd0
0043e198:  ldr      x0, [sp, #0x670]
0043e19c:  cbz      x0, #0x43e1a8
0043e1a0:  str      x0, [sp, #0x678]
0043e1a4:  bl       #0xd13dd0
0043e1a8:  sub      x0, x29, #0x60
0043e1ac:  bl       #0x4df880
0043e1b0:  ldr      w8, [sp, #0x19c]
0043e1b4:  tbz      w24, #0, #0x43eadc
0043e1b8:  tbz      w8, #2, #0x43cc80
0043e1bc:  ldr      x8, [x22, #0xe0]
0043e1c0:  cbz      x8, #0x43cc80
0043e1c4:  ldr      x24, [sp, #0x1a8]
0043e1c8:  adrp     x1, #0x1a8000
0043e1cc:  add      x1, x1, #0x6ff
0043e1d0:  mov      x0, x24
0043e1d4:  bl       #0x4e12e0
0043e1d8:  adrp     x1, #0x1e9000
0043e1dc:  add      x1, x1, #0xea8
0043e1e0:  bl       #0x4e12e0
0043e1e4:  mov      x20, x0
0043e1e8:  adrp     x1, #0x1db000
0043e1ec:  add      x1, x1, #0x42f
0043e1f0:  mov      x0, x24
0043e1f4:  bl       #0x4e12e0
0043e1f8:  mov      x19, x0
0043e1fc:  adrp     x1, #0x1bc000
0043e200:  add      x1, x1, #0x2b1
0043e204:  mov      x0, x24
0043e208:  bl       #0x4e12e0
0043e20c:  adrp     x1, #0x1a2000
0043e210:  add      x1, x1, #0xdb1
0043e214:  bl       #0x4e12e0
0043e218:  mov      x21, x0
0043e21c:  bl       #0x417e08
0043e220:  tbnz     w0, #0, #0x43e884
0043e224:  adrp     x8, #0x1a2000
0043e228:  add      x8, x8, #0xdb8
0043e22c:  mov      w9, #0x3069
0043e230:  add      x10, sp, #0x4f8
0043e234:  ldr      w0, [x22, #0x500]
0043e238:  mov      x23, #-0x11
0043e23c:  movk     x23, #0x7fff, lsl #48
0043e240:  stp      x8, x9, [x29, #-0x30]
0043e244:  stur     x10, [x29, #-0x20]
0043e248:  bl       #0x48952c
0043e24c:  add      x8, sp, #0x508
0043e250:  sub      x9, x29, #0x30
0043e254:  ldr      x10, [x22, #0x3d8]
0043e258:  str      x0, [sp, #0x508]
0043e25c:  str      x1, [sp, #0x510]
0043e260:  adrp     x11, #0x1ca000
0043e264:  add      x11, x11, #0x589
0043e268:  str      x8, [sp, #0x518]
0043e26c:  str      x9, [sp, #0x520]
0043e270:  add      x8, x10, #0x20
0043e274:  add      x9, sp, #0x528
0043e278:  add      x12, sp, #0x518
0043e27c:  adrp     x1, #0x197000
0043e280:  add      x1, x1, #0x3ce
0043e284:  str      x8, [sp, #0x538]
0043e288:  add      x8, sp, #0x538
0043e28c:  str      x9, [sp, #0x540]
0043e290:  adrp     x9, #0x1a8000
0043e294:  add      x9, x9, #0x727
0043e298:  mov      x0, x21
0043e29c:  str      x11, [sp, #0x528]
0043e2a0:  str      x12, [sp, #0x530]
0043e2a4:  str      x9, [sp, #0x548]
0043e2a8:  str      x8, [sp, #0x550]
0043e2ac:  bl       #0x4e12e0
0043e2b0:  bl       #0x4dff08
0043e2b4:  mov      w8, w0
0043e2b8:  add      x9, sp, #0x548
0043e2bc:  adrp     x10, #0x1a8000
0043e2c0:  add      x10, x10, #0x73d
0043e2c4:  add      x11, sp, #0x558
0043e2c8:  adrp     x1, #0x19f000
0043e2cc:  add      x1, x1, #0xa58
0043e2d0:  mov      x0, x20
0043e2d4:  str      x8, [sp, #0x558]
0043e2d8:  str      x9, [sp, #0x560]
0043e2dc:  str      x10, [sp, #0x568]
0043e2e0:  str      x11, [sp, #0x570]
0043e2e4:  bl       #0x4e12e0
0043e2e8:  add      x8, sp, #0x6a0
0043e2ec:  bl       #0x447188
0043e2f0:  ldrsb    w8, [sp, #0x6b7]
0043e2f4:  tbnz     w8, #0x1f, #0x43e340
0043e2f8:  ldr      q0, [sp, #0x6a0]
0043e2fc:  add      x9, sp, #0x568
0043e300:  ldr      x8, [sp, #0x6b0]
0043e304:  str      q0, [sp, #0x2a0]
0043e308:  str      x8, [sp, #0x2b0]
0043e30c:  str      x9, [sp, #0x2b8]
0043e310:  b        #0x43e3b4
0043e314:  ldr      x0, [sp, #0x610]
0043e318:  bl       #0xd13dd0
0043e31c:  ldrsb    w8, [sp, #0x2b7]
0043e320:  tbz      w8, #0x1f, #0x43df78
0043e324:  ldr      x0, [sp, #0x2a0]
0043e328:  bl       #0xd13dd0
0043e32c:  ldrsb    w8, [sp, #0x607]
0043e330:  tbz      w8, #0x1f, #0x43df80
0043e334:  ldr      x0, [sp, #0x5f0]
0043e338:  bl       #0xd13dd0
0043e33c:  b        #0x43df80
0043e340:  ldr      x24, [sp, #0x6a8]
0043e344:  ldr      x21, [sp, #0x6a0]
0043e348:  cmp      x24, #0x16
0043e34c:  b.hi     #0x43e35c
0043e350:  add      x0, sp, #0x2a0
0043e354:  strb     w24, [sp, #0x2b7]
0043e358:  b        #0x43e384
0043e35c:  cmp      x24, x23
0043e360:  b.hi     #0x43eb94
0043e364:  orr      x8, x24, #0xf
0043e368:  add      x22, x8, #1
0043e36c:  mov      x0, x22
0043e370:  bl       #0xd13d90
0043e374:  orr      x8, x22, #0x8000000000000000
0043e378:  str      x0, [sp, #0x2a0]
0043e37c:  str      x24, [sp, #0x2a8]
0043e380:  str      x8, [sp, #0x2b0]
0043e384:  add      x2, x24, #1
0043e388:  cmp      x0, x21
0043e38c:  b.hi     #0x43e39c
0043e390:  add      x8, x0, x2
0043e394:  cmp      x8, x21
0043e398:  b.hi     #0x43eb5c
0043e39c:  mov      x1, x21
0043e3a0:  bl       #0xd13de0
0043e3a4:  add      x8, sp, #0x568
0043e3a8:  mov      x0, x21
0043e3ac:  str      x8, [sp, #0x2b8]
0043e3b0:  bl       #0xd13dd0
0043e3b4:  add      x8, sp, #0x2a0
0043e3b8:  adrp     x24, #0x1c7000
0043e3bc:  add      x24, x24, #0xbbb
0043e3c0:  adrp     x1, #0x1e1000
0043e3c4:  add      x1, x1, #0x51b
0043e3c8:  mov      x0, x20
0043e3cc:  str      x8, [sp, #0x580]
0043e3d0:  str      x24, [sp, #0x578]
0043e3d4:  bl       #0x4e12e0
0043e3d8:  bl       #0x4e0124
0043e3dc:  add      x8, sp, #0x578
0043e3e0:  adrp     x9, #0x1e1000
0043e3e4:  add      x9, x9, #0x58f
0043e3e8:  add      x10, sp, #0x588
0043e3ec:  str      x0, [sp, #0x588]
0043e3f0:  adrp     x1, #0x1db000
0043e3f4:  add      x1, x1, #0x439
0043e3f8:  mov      x0, x20
0043e3fc:  str      x8, [sp, #0x590]
0043e400:  str      x9, [sp, #0x598]
0043e404:  str      x10, [sp, #0x5a0]
0043e408:  bl       #0x4e12e0
0043e40c:  add      x8, sp, #0x6a0
0043e410:  bl       #0x447188
0043e414:  ldrsb    w8, [sp, #0x6b7]
0043e418:  tbnz     w8, #0x1f, #0x43e438
0043e41c:  ldr      q0, [sp, #0x6a0]
0043e420:  add      x9, sp, #0x598
0043e424:  ldr      x8, [sp, #0x6b0]
0043e428:  str      q0, [sp, #0x610]
0043e42c:  str      x8, [sp, #0x620]
0043e430:  str      x9, [sp, #0x628]
0043e434:  b        #0x43e4ac
0043e438:  ldr      x25, [sp, #0x6a8]
0043e43c:  ldr      x21, [sp, #0x6a0]
0043e440:  cmp      x25, #0x16
0043e444:  b.hi     #0x43e454
0043e448:  add      x0, sp, #0x610
0043e44c:  strb     w25, [sp, #0x627]
0043e450:  b        #0x43e47c
0043e454:  cmp      x25, x23
0043e458:  b.hi     #0x43eb98
0043e45c:  orr      x8, x25, #0xf
0043e460:  add      x22, x8, #1
0043e464:  mov      x0, x22
0043e468:  bl       #0xd13d90
0043e46c:  orr      x8, x22, #0x8000000000000000
0043e470:  str      x0, [sp, #0x610]
0043e474:  str      x25, [sp, #0x618]
0043e478:  str      x8, [sp, #0x620]
0043e47c:  add      x2, x25, #1
0043e480:  cmp      x0, x21
0043e484:  b.hi     #0x43e494
0043e488:  add      x8, x0, x2
0043e48c:  cmp      x8, x21
0043e490:  b.hi     #0x43eb5c
0043e494:  mov      x1, x21
0043e498:  bl       #0xd13de0
0043e49c:  add      x8, sp, #0x598
0043e4a0:  mov      x0, x21
0043e4a4:  str      x8, [sp, #0x628]
0043e4a8:  bl       #0xd13dd0
0043e4ac:  add      x8, sp, #0x610
0043e4b0:  adrp     x1, #0x1de000
0043e4b4:  add      x1, x1, #0x57c
0043e4b8:  mov      x0, x20
0043e4bc:  str      x24, [sp, #0x5a8]
0043e4c0:  str      x8, [sp, #0x5b0]
0043e4c4:  bl       #0x4e12e0
0043e4c8:  add      x8, sp, #0x6a0
0043e4cc:  bl       #0x447188
0043e4d0:  ldrsb    w8, [sp, #0x6b7]
0043e4d4:  tbnz     w8, #0x1f, #0x43e4f0
0043e4d8:  ldr      q0, [sp, #0x6a0]
0043e4dc:  add      x9, sp, #0x5a8
0043e4e0:  ldr      x8, [sp, #0x6b0]
0043e4e4:  stur     q0, [x29, #-0x90]
0043e4e8:  stp      x8, x9, [x29, #-0x80]
0043e4ec:  b        #0x43e560
0043e4f0:  ldr      x25, [sp, #0x6a8]
0043e4f4:  ldr      x21, [sp, #0x6a0]
0043e4f8:  cmp      x25, #0x16
0043e4fc:  b.hi     #0x43e50c
0043e500:  sub      x0, x29, #0x90
0043e504:  sturb    w25, [x29, #-0x79]
0043e508:  b        #0x43e530
0043e50c:  cmp      x25, x23
0043e510:  b.hi     #0x43eb9c
0043e514:  orr      x8, x25, #0xf
0043e518:  add      x22, x8, #1
0043e51c:  mov      x0, x22
0043e520:  bl       #0xd13d90
0043e524:  orr      x8, x22, #0x8000000000000000
0043e528:  stur     x0, [x29, #-0x90]
0043e52c:  stp      x25, x8, [x29, #-0x88]
0043e530:  add      x2, x25, #1
0043e534:  cmp      x0, x21
0043e538:  b.hi     #0x43e548
0043e53c:  add      x8, x0, x2
0043e540:  cmp      x8, x21
0043e544:  b.hi     #0x43eb5c
0043e548:  mov      x1, x21
0043e54c:  bl       #0xd13de0
0043e550:  add      x8, sp, #0x5a8
0043e554:  mov      x0, x21
0043e558:  stur     x8, [x29, #-0x78]
0043e55c:  bl       #0xd13dd0
0043e560:  adrp     x8, #0x1bc000
0043e564:  add      x8, x8, #0x33b
0043e568:  sub      x9, x29, #0x90
0043e56c:  adrp     x10, #0x1de000
0043e570:  add      x10, x10, #0x58d
0043e574:  add      x11, sp, #0x5b8
0043e578:  adrp     x1, #0x1ad000
0043e57c:  add      x1, x1, #0xb9b
0043e580:  mov      x0, x20
0043e584:  str      x8, [sp, #0x5b8]
0043e588:  str      x9, [sp, #0x5c0]
0043e58c:  str      x10, [sp, #0x5c8]
0043e590:  str      x11, [sp, #0x5d0]
0043e594:  bl       #0x4e12e0
0043e598:  add      x8, sp, #0x6a0
0043e59c:  bl       #0x447188
0043e5a0:  ldrsb    w8, [sp, #0x6b7]
0043e5a4:  tbnz     w8, #0x1f, #0x43e5c0
0043e5a8:  ldr      q0, [sp, #0x6a0]
0043e5ac:  add      x9, sp, #0x5c8
0043e5b0:  ldr      x8, [sp, #0x6b0]
0043e5b4:  stur     q0, [x29, #-0x60]
0043e5b8:  stp      x8, x9, [x29, #-0x50]
0043e5bc:  b        #0x43e630
0043e5c0:  ldr      x22, [sp, #0x6a8]
0043e5c4:  ldr      x20, [sp, #0x6a0]
0043e5c8:  cmp      x22, #0x16
0043e5cc:  b.hi     #0x43e5dc
0043e5d0:  sub      x0, x29, #0x60
0043e5d4:  sturb    w22, [x29, #-0x49]
0043e5d8:  b        #0x43e600
0043e5dc:  cmp      x22, x23
0043e5e0:  b.hi     #0x43eba0
0043e5e4:  orr      x8, x22, #0xf
0043e5e8:  add      x21, x8, #1
0043e5ec:  mov      x0, x21
0043e5f0:  bl       #0xd13d90
0043e5f4:  orr      x8, x21, #0x8000000000000000
0043e5f8:  stur     x0, [x29, #-0x60]
0043e5fc:  stp      x22, x8, [x29, #-0x58]
0043e600:  add      x2, x22, #1
0043e604:  cmp      x0, x20
0043e608:  b.hi     #0x43e618
0043e60c:  add      x8, x0, x2
0043e610:  cmp      x8, x20
0043e614:  b.hi     #0x43eb5c
0043e618:  mov      x1, x20
0043e61c:  bl       #0xd13de0
0043e620:  add      x8, sp, #0x5c8
0043e624:  mov      x0, x20
0043e628:  stur     x8, [x29, #-0x48]
0043e62c:  bl       #0xd13dd0
0043e630:  sub      x8, x29, #0x60
0043e634:  adrp     x9, #0x1bc000
0043e638:  add      x9, x9, #0x348
0043e63c:  adrp     x1, #0x1db000
0043e640:  add      x1, x1, #0x439
0043e644:  mov      x0, x19
0043e648:  str      x8, [sp, #0x5e0]
0043e64c:  str      x9, [sp, #0x5d8]
0043e650:  bl       #0x4e12e0
0043e654:  add      x8, sp, #0x6a0
0043e658:  bl       #0x447188
0043e65c:  ldrsb    w8, [sp, #0x6b7]
0043e660:  tbnz     w8, #0x1f, #0x43e680
0043e664:  ldr      q0, [sp, #0x6a0]
0043e668:  add      x9, sp, #0x5d8
0043e66c:  ldr      x8, [sp, #0x6b0]
0043e670:  str      q0, [sp, #0x640]
0043e674:  str      x8, [sp, #0x650]
0043e678:  str      x9, [sp, #0x658]
0043e67c:  b        #0x43e6f4
0043e680:  ldr      x22, [sp, #0x6a8]
0043e684:  ldr      x20, [sp, #0x6a0]
0043e688:  cmp      x22, #0x16
0043e68c:  b.hi     #0x43e69c
0043e690:  add      x0, sp, #0x640
0043e694:  strb     w22, [sp, #0x657]
0043e698:  b        #0x43e6c4
0043e69c:  cmp      x22, x23
0043e6a0:  b.hi     #0x43eba4
0043e6a4:  orr      x8, x22, #0xf
0043e6a8:  add      x21, x8, #1
0043e6ac:  mov      x0, x21
0043e6b0:  bl       #0xd13d90
0043e6b4:  orr      x8, x21, #0x8000000000000000
0043e6b8:  str      x0, [sp, #0x640]
0043e6bc:  str      x22, [sp, #0x648]
0043e6c0:  str      x8, [sp, #0x650]
0043e6c4:  add      x2, x22, #1
0043e6c8:  cmp      x0, x20
0043e6cc:  b.hi     #0x43e6dc
0043e6d0:  add      x8, x0, x2
0043e6d4:  cmp      x8, x20
0043e6d8:  b.hi     #0x43eb5c
0043e6dc:  mov      x1, x20
0043e6e0:  bl       #0xd13de0
0043e6e4:  add      x8, sp, #0x5d8
0043e6e8:  mov      x0, x20
0043e6ec:  str      x8, [sp, #0x658]
0043e6f0:  bl       #0xd13dd0
0043e6f4:  add      x8, sp, #0x640
0043e6f8:  adrp     x1, #0x1ca000
0043e6fc:  add      x1, x1, #0x5a0
0043e700:  mov      x0, x19
0043e704:  str      x24, [sp, #0x2c8]
0043e708:  str      x8, [sp, #0x2d0]
0043e70c:  bl       #0x4e12e0
0043e710:  add      x8, sp, #0x5f0
0043e714:  bl       #0x447188
0043e718:  ldrsb    w8, [sp, #0x607]
0043e71c:  tbnz     w8, #0x1f, #0x43e740
0043e720:  ldr      q0, [sp, #0x5f0]
0043e724:  add      x8, sp, #0x2c8
0043e728:  ldr      x9, [sp, #0x600]
0043e72c:  ldr      x24, [sp, #0x1a8]
0043e730:  str      q0, [sp, #0x6a0]
0043e734:  str      x9, [sp, #0x6b0]
0043e738:  str      x8, [sp, #0x6b8]
0043e73c:  b        #0x43e7bc
0043e740:  ldr      x21, [sp, #0x5f8]
0043e744:  ldr      x19, [sp, #0x5f0]
0043e748:  ldr      x24, [sp, #0x1a8]
0043e74c:  cmp      x21, #0x16
0043e750:  b.hi     #0x43e760
0043e754:  add      x0, sp, #0x6a0
0043e758:  strb     w21, [sp, #0x6b7]
0043e75c:  b        #0x43e788
0043e760:  cmp      x21, x23
0043e764:  b.hi     #0x43eba8
0043e768:  orr      x8, x21, #0xf
0043e76c:  add      x20, x8, #1
0043e770:  mov      x0, x20
0043e774:  bl       #0xd13d90
0043e778:  orr      x8, x20, #0x8000000000000000
0043e77c:  str      x0, [sp, #0x6a0]
0043e780:  str      x21, [sp, #0x6a8]
0043e784:  str      x8, [sp, #0x6b0]
0043e788:  add      x2, x21, #1
0043e78c:  cmp      x0, x19
0043e790:  b.hi     #0x43e7a0
0043e794:  add      x8, x0, x2
0043e798:  cmp      x8, x19
0043e79c:  b.hi     #0x43eb5c
0043e7a0:  mov      x1, x19
0043e7a4:  bl       #0xd13de0
0043e7a8:  add      x8, sp, #0x2c8
0043e7ac:  mov      x0, x19
0043e7b0:  str      x8, [sp, #0x6b8]
0043e7b4:  bl       #0xd13dd0
0043e7b8:  ldr      x8, [sp, #0x6b8]
0043e7bc:  ldp      x8, x9, [x8]
0043e7c0:  add      x23, sp, #0x6a0
0043e7c4:  ldr      x10, [x9, #0x18]
0043e7c8:  ldp      x10, x11, [x10]
0043e7cc:  ldr      x12, [x11, #0x18]
0043e7d0:  ldp      x12, x13, [x12]
0043e7d4:  ldp      x13, x14, [x13]
0043e7d8:  ldr      x15, [x14, #0x18]
0043e7dc:  ldp      x15, x16, [x15]
0043e7e0:  ldr      x17, [x16, #0x18]
0043e7e4:  ldp      x17, x0, [x17]
0043e7e8:  ldp      x19, x1, [x0]
0043e7ec:  ldp      x21, x20, [x1]
0043e7f0:  ldr      x0, [x20, #0x18]
0043e7f4:  ldp      x22, x7, [x0]
0043e7f8:  ldr      x0, [x7, #8]
0043e7fc:  ldr      w7, [x7]
0043e800:  ldp      x6, x1, [x0]
0043e804:  ldp      x5, x0, [x1]
0043e808:  ldp      x4, x1, [x0]
0043e80c:  ldp      x3, x0, [x1]
0043e810:  ldp      x1, x2, [x0]
0043e814:  adrp     x0, #0x1b0000
0043e818:  add      x0, x0, #0x847
0043e81c:  stp      x9, x8, [sp, #0x60]
0043e820:  stp      x11, x10, [sp, #0x50]
0043e824:  stp      x23, x0, [sp, #0x70]
0043e828:  adrp     x0, #0x1f6000
0043e82c:  add      x0, x0, #0x1cb
0043e830:  stp      x13, x12, [sp, #0x40]
0043e834:  stp      x15, x14, [sp, #0x30]
0043e838:  stp      x17, x16, [sp, #0x20]
0043e83c:  stp      x21, x19, [sp, #0x10]
0043e840:  stp      x22, x20, [sp]
0043e844:  bl       #0x623bb0
0043e848:  ldrsb    w8, [sp, #0x6b7]
0043e84c:  tbz      w8, #0x1f, #0x43e858
0043e850:  ldr      x0, [sp, #0x6a0]
0043e854:  bl       #0xd13dd0
0043e858:  ldrsb    w8, [sp, #0x657]
0043e85c:  ldr      x22, [sp, #0x298]
0043e860:  tbnz     w8, #0x1f, #0x43eb10
0043e864:  ldursb   w8, [x29, #-0x49]
0043e868:  tbnz     w8, #0x1f, #0x43eb20
0043e86c:  ldursb   w8, [x29, #-0x79]
0043e870:  tbnz     w8, #0x1f, #0x43eb30
0043e874:  ldrsb    w8, [sp, #0x627]
0043e878:  tbnz     w8, #0x1f, #0x43eb40
0043e87c:  ldrsb    w8, [sp, #0x2b7]
0043e880:  tbnz     w8, #0x1f, #0x43eb50
0043e884:  adrp     x1, #0x197000
0043e888:  add      x1, x1, #0x438
0043e88c:  mov      x0, x24
0043e890:  bl       #0x4e12e0
0043e894:  mov      x19, x0
0043e898:  bl       #0x4e1d70
0043e89c:  stp      x0, x1, [x29, #-0x60]
0043e8a0:  mov      x0, x19
0043e8a4:  bl       #0x4e1da0
0043e8a8:  stp      x0, x1, [x29, #-0x90]
0043e8ac:  sub      x0, x29, #0x60
0043e8b0:  sub      x1, x29, #0x90
0043e8b4:  bl       #0x4df028
0043e8b8:  tbnz     w0, #0, #0x43cc80
0043e8bc:  adrp     x19, #0x1e9000
0043e8c0:  add      x19, x19, #0xea8
0043e8c4:  adrp     x23, #0x1ad000
0043e8c8:  add      x23, x23, #0xb93
0043e8cc:  adrp     x24, #0x1d5000
0043e8d0:  add      x24, x24, #0xe6c
0043e8d4:  add      x21, sp, #0x2a0
0043e8d8:  adrp     x25, #0x1e4000
0043e8dc:  add      x25, x25, #0x2c6
0043e8e0:  adrp     x22, #0x1bc000
0043e8e4:  add      x22, x22, #0x33b
0043e8e8:  adrp     x20, #0x1c7000
0043e8ec:  add      x20, x20, #0xbbb
0043e8f0:  adrp     x26, #0x1f6000
0043e8f4:  add      x26, x26, #0x1e2
0043e8f8:  b        #0x43e914
0043e8fc:  sub      x0, x29, #0x60
0043e900:  bl       #0x4defb8
0043e904:  sub      x0, x29, #0x60
0043e908:  sub      x1, x29, #0x90
0043e90c:  bl       #0x4df028
0043e910:  tbnz     w0, #0, #0x43ead0
0043e914:  sub      x0, x29, #0x60
0043e918:  bl       #0x4defac
0043e91c:  mov      x1, x19
0043e920:  mov      x27, x0
0043e924:  bl       #0x4e12e0
0043e928:  mov      x28, x0
0043e92c:  bl       #0x417e08
0043e930:  tbnz     w0, #0, #0x43e8fc
0043e934:  ldr      x8, [sp, #0x298]
0043e938:  ldr      w0, [x8, #0x500]
0043e93c:  adrp     x8, #0x1a2000
0043e940:  add      x8, x8, #0xdb8
0043e944:  str      x8, [sp, #0x6a0]
0043e948:  mov      w8, #0x30d1
0043e94c:  str      x8, [sp, #0x6a8]
0043e950:  add      x8, sp, #0x578
0043e954:  str      x8, [sp, #0x6b0]
0043e958:  bl       #0x48952c
0043e95c:  add      x8, sp, #0x588
0043e960:  str      x0, [sp, #0x588]
0043e964:  str      x1, [sp, #0x590]
0043e968:  mov      x0, x27
0043e96c:  adrp     x1, #0x19c000
0043e970:  add      x1, x1, #0xad0
0043e974:  str      x8, [sp, #0x598]
0043e978:  add      x8, sp, #0x6a0
0043e97c:  str      x8, [sp, #0x5a0]
0043e980:  adrp     x8, #0x1c4000
0043e984:  add      x8, x8, #0xd91
0043e988:  str      x8, [sp, #0x5a8]
0043e98c:  add      x8, sp, #0x598
0043e990:  str      x8, [sp, #0x5b0]
0043e994:  bl       #0x4e12e0
0043e998:  add      x8, sp, #0x640
0043e99c:  bl       #0x4dfbf8
0043e9a0:  add      x8, sp, #0x640
0043e9a4:  mov      x0, x28
0043e9a8:  adrp     x1, #0x1c4000
0043e9ac:  add      x1, x1, #0xdb6
0043e9b0:  str      x8, [sp, #0x5b8]
0043e9b4:  add      x8, sp, #0x5a8
0043e9b8:  str      x8, [sp, #0x5c0]
0043e9bc:  adrp     x8, #0x1cd000
0043e9c0:  add      x8, x8, #0x875
0043e9c4:  str      x8, [sp, #0x5c8]
0043e9c8:  add      x8, sp, #0x5b8
0043e9cc:  str      x8, [sp, #0x5d0]
0043e9d0:  bl       #0x4e12e0
0043e9d4:  bl       #0x4e0124
0043e9d8:  adrp     x8, #0x1ef000
0043e9dc:  add      x8, x8, #0x42b
0043e9e0:  str      x0, [sp, #0x5d8]
0043e9e4:  mov      x0, x28
0043e9e8:  adrp     x1, #0x1e9000
0043e9ec:  add      x1, x1, #0xef9
0043e9f0:  str      x8, [sp, #0x2c8]
0043e9f4:  add      x8, sp, #0x5d8
0043e9f8:  str      x8, [sp, #0x2d0]
0043e9fc:  add      x8, sp, #0x5c8
0043ea00:  str      x8, [sp, #0x5e0]
0043ea04:  adrp     x8, #0x1de000
0043ea08:  add      x9, x8, #0x5a4
0043ea0c:  add      x8, sp, #0x2c8
0043ea10:  stp      x9, x8, [x29, #-0x30]
0043ea14:  bl       #0x4e12e0
0043ea18:  bl       #0x4e0124
0043ea1c:  sub      x8, x29, #0x30
0043ea20:  str      x0, [sp, #0x5f0]
0043ea24:  mov      x0, x27
0043ea28:  mov      x1, x23
0043ea2c:  str      x8, [sp, #0x5f8]
0043ea30:  adrp     x8, #0x1a2000
0043ea34:  add      x8, x8, #0xe4a
0043ea38:  str      x8, [sp, #0x2a0]
0043ea3c:  add      x8, sp, #0x5f0
0043ea40:  str      x8, [sp, #0x2a8]
0043ea44:  bl       #0x4e12e0
0043ea48:  mov      x1, x24
0043ea4c:  bl       #0x4e12e0
0043ea50:  bl       #0x4e0028
0043ea54:  str      x0, [sp, #0x610]
0043ea58:  mov      x0, x27
0043ea5c:  mov      x1, x23
0043ea60:  str      x21, [sp, #0x618]
0043ea64:  bl       #0x4e12e0
0043ea68:  mov      x1, x25
0043ea6c:  bl       #0x4e12e0
0043ea70:  bl       #0x4e0124
0043ea74:  ldr      x8, [sp, #0x618]
0043ea78:  ldr      x9, [sp, #0x610]
0043ea7c:  ldp      x8, x10, [x8]
0043ea80:  ldp      x10, x11, [x10]
0043ea84:  ldp      x11, x12, [x11]
0043ea88:  ldp      x12, x13, [x12]
0043ea8c:  ldp      x7, x14, [x13]
0043ea90:  ldp      x6, x13, [x14]
0043ea94:  ldp      x5, x14, [x13]
0043ea98:  ldp      x4, x13, [x14]
0043ea9c:  ldp      x3, x14, [x13]
0043eaa0:  ldp      x1, x2, [x14]
0043eaa4:  stp      x0, x22, [sp, #0x30]
0043eaa8:  mov      x0, x26
0043eaac:  stp      x9, x20, [sp, #0x20]
0043eab0:  stp      x10, x8, [sp, #0x10]
0043eab4:  stp      x12, x11, [sp]
0043eab8:  bl       #0x623bb0
0043eabc:  ldrsb    w8, [sp, #0x657]
0043eac0:  tbz      w8, #0x1f, #0x43e8fc
0043eac4:  ldr      x0, [sp, #0x640]
0043eac8:  bl       #0xd13dd0
0043eacc:  b        #0x43e8fc
0043ead0:  ldr      x22, [sp, #0x298]
0043ead4:  ldr      w8, [sp, #0x1b4]
0043ead8:  cbnz     w8, #0x43cc80
0043eadc:  ldr      x8, [sp, #0x190]
0043eae0:  ldr      x8, [x8, #0x28]
0043eae4:  ldur     x9, [x29, #-0x18]
0043eae8:  cmp      x8, x9
0043eaec:  b.ne     #0x43ebac
0043eaf0:  add      sp, sp, #0x850
0043eaf4:  ldp      x20, x19, [sp, #0x50]
0043eaf8:  ldp      x22, x21, [sp, #0x40]
0043eafc:  ldp      x24, x23, [sp, #0x30]
0043eb00:  ldp      x26, x25, [sp, #0x20]
0043eb04:  ldp      x28, x27, [sp, #0x10]
0043eb08:  ldp      x29, x30, [sp], #0x60
0043eb0c:  ret      
0043eb10:  ldr      x0, [sp, #0x640]
0043eb14:  bl       #0xd13dd0
0043eb18:  ldursb   w8, [x29, #-0x49]
0043eb1c:  tbz      w8, #0x1f, #0x43e86c
0043eb20:  ldur     x0, [x29, #-0x60]
0043eb24:  bl       #0xd13dd0
0043eb28:  ldursb   w8, [x29, #-0x79]
0043eb2c:  tbz      w8, #0x1f, #0x43e874
0043eb30:  ldur     x0, [x29, #-0x90]
0043eb34:  bl       #0xd13dd0
0043eb38:  ldrsb    w8, [sp, #0x627]
0043eb3c:  tbz      w8, #0x1f, #0x43e87c
0043eb40:  ldr      x0, [sp, #0x610]
0043eb44:  bl       #0xd13dd0
0043eb48:  ldrsb    w8, [sp, #0x2b7]
0043eb4c:  tbz      w8, #0x1f, #0x43e884
0043eb50:  ldr      x0, [sp, #0x2a0]
0043eb54:  bl       #0xd13dd0
0043eb58:  b        #0x43e884
0043eb5c:  adrp     x0, #0x1de000
0043eb60:  add      x0, x0, #0x320
0043eb64:  adrp     x1, #0x1cd000
0043eb68:  add      x1, x1, #0x6b0
0043eb6c:  adrp     x3, #0x1d0000
0043eb70:  add      x3, x3, #0x29
0043eb74:  adrp     x4, #0x1c1000
0043eb78:  add      x4, x4, #0xcce
0043eb7c:  mov      w2, #0xec
0043eb80:  bl       #0xd13df0
0043eb84:  bl       #0xd13e00
0043eb88:  bl       #0xd13e00
0043eb8c:  bl       #0xd13e00
0043eb90:  bl       #0xd13e00
0043eb94:  bl       #0xd13e00
0043eb98:  bl       #0xd13e00
0043eb9c:  bl       #0xd13e00
0043eba0:  bl       #0xd13e00
0043eba4:  bl       #0xd13e00
0043eba8:  bl       #0xd13e00
0043ebac:  bl       #0xd13da0

; ===== 004c2890  Java_com_discord_native_engine_NativeConnection_setTransportOptions  (8368 bytes) =====
004c2890:  stp      d9, d8, [sp, #-0x70]!
004c2894:  stp      x29, x30, [sp, #0x10]
004c2898:  stp      x28, x27, [sp, #0x20]
004c289c:  stp      x26, x25, [sp, #0x30]
004c28a0:  stp      x24, x23, [sp, #0x40]
004c28a4:  stp      x22, x21, [sp, #0x50]
004c28a8:  stp      x20, x19, [sp, #0x60]
004c28ac:  add      x29, sp, #0x10
004c28b0:  sub      sp, sp, #0x990
004c28b4:  mrs      x24, tpidr_el0
004c28b8:  mov      x19, x1
004c28bc:  ldr      x8, [x24, #0x28]
004c28c0:  mov      x1, x0
004c28c4:  add      x0, sp, #0xa8
004c28c8:  mov      x21, x2
004c28cc:  stur     x8, [x29, #-0x28]
004c28d0:  bl       #0x4c1850
004c28d4:  bl       #0x4a3bd4
004c28d8:  ldr      x20, [x0, #0x578]
004c28dc:  bl       #0x4a2934
004c28e0:  ldr      x8, [x0]
004c28e4:  mov      x1, x19
004c28e8:  mov      x2, x20
004c28ec:  ldr      x8, [x8, #0x328]
004c28f0:  blr      x8
004c28f4:  ldp      x11, x19, [x0]
004c28f8:  cbz      x19, #0x4c2910
004c28fc:  add      x8, x19, #8
004c2900:  ldxr     x9, [x8]
004c2904:  add      x9, x9, #1
004c2908:  stxr     w10, x9, [x8]
004c290c:  cbnz     w10, #0x4c2900
004c2910:  cbz      x11, #0x4c484c
004c2914:  add      x0, sp, #0x398
004c2918:  str      x11, [sp, #0x98]
004c291c:  bl       #0x4d9768
004c2920:  add      x0, sp, #0x370
004c2924:  mov      w1, wzr
004c2928:  bl       #0x4df134
004c292c:  add      x8, sp, #0x488
004c2930:  mov      x0, x21
004c2934:  bl       #0x4a3c54
004c2938:  add      x0, sp, #0x398
004c293c:  add      x1, sp, #0x488
004c2940:  add      x2, sp, #0x370
004c2944:  mov      w3, wzr
004c2948:  bl       #0x4d9798
004c294c:  ldrsb    w8, [sp, #0x49f]
004c2950:  mov      w21, w0
004c2954:  tbz      w8, #0x1f, #0x4c2960
004c2958:  ldr      x0, [sp, #0x488]
004c295c:  bl       #0xd13dd0
004c2960:  sub      x20, x29, #0xe0
004c2964:  add      x22, sp, #0x458
004c2968:  add      x23, sp, #0x140
004c296c:  tbnz     w21, #0, #0x4c2988
004c2970:  adrp     x1, #0x1d0000
004c2974:  add      x1, x1, #0x378
004c2978:  adrp     x2, #0x1a8000
004c297c:  add      x2, x2, #0xbca
004c2980:  mov      w0, #6
004c2984:  bl       #0xd143e0
004c2988:  movi     v0.2d, #0000000000000000
004c298c:  add      x8, sp, #0x149
004c2990:  add      x9, sp, #0x209
004c2994:  nop      
004c2998:  adr      x11, #0x48870c
004c299c:  add      x10, sp, #0x229
004c29a0:  str      xzr, [sp, #0x888]
004c29a4:  adrp     x1, #0x1d2000
004c29a8:  add      x1, x1, #0xf33
004c29ac:  stur     q0, [x8, #0xff]
004c29b0:  add      x8, sp, #0x159
004c29b4:  stur     q0, [x9, #0xff]
004c29b8:  add      x9, sp, #0x219
004c29bc:  stur     q0, [x10, #0xff]
004c29c0:  nop      
004c29c4:  adr      x10, #0x488718
004c29c8:  stur     q0, [x8, #0xff]
004c29cc:  add      x8, sp, #0x169
004c29d0:  stur     q0, [x9, #0xff]
004c29d4:  add      x0, sp, #0x370
004c29d8:  stur     q0, [x22, #0x98]
004c29dc:  stur     q0, [x8, #0xff]
004c29e0:  add      x8, sp, #0x179
004c29e4:  stur     q0, [x22, #0xe8]
004c29e8:  stur     q0, [x22, #0xf8]
004c29ec:  stur     q0, [x8, #0xff]
004c29f0:  add      x8, sp, #0x189
004c29f4:  stur     q0, [x22, #0xa8]
004c29f8:  stur     q0, [x22, #0xb8]
004c29fc:  stur     q0, [x8, #0xff]
004c2a00:  add      x8, sp, #0x199
004c2a04:  stur     q0, [x22, #0xc8]
004c2a08:  stur     q0, [x22, #0xd8]
004c2a0c:  stur     q0, [x8, #0xff]
004c2a10:  add      x8, sp, #0x1a9
004c2a14:  stur     xzr, [x20, #4]
004c2a18:  stur     xzr, [x20, #9]
004c2a1c:  stur     q0, [x8, #0xff]
004c2a20:  add      x8, sp, #0x1b9
004c2a24:  stur     q0, [x20, #0x18]
004c2a28:  stur     q0, [x20, #0x28]
004c2a2c:  stur     q0, [x8, #0xff]
004c2a30:  add      x8, sp, #0x1c9
004c2a34:  stur     q0, [x20, #0x38]
004c2a38:  nop      
004c2a3c:  adr      x20, #0x4547f0
004c2a40:  str      wzr, [sp, #0x208]
004c2a44:  stur     q0, [x8, #0xff]
004c2a48:  add      x8, sp, #0x1d9
004c2a4c:  strb     wzr, [sp, #0x20c]
004c2a50:  strh     wzr, [sp, #0x210]
004c2a54:  stur     q0, [x8, #0xff]
004c2a58:  add      x8, sp, #0x1e9
004c2a5c:  stur     xzr, [x23, #0xd4]
004c2a60:  stur     xzr, [x23, #0xd9]
004c2a64:  stur     q0, [x8, #0xff]
004c2a68:  add      x8, sp, #0x1f9
004c2a6c:  str      xzr, [sp, #0x228]
004c2a70:  stur     q0, [x23, #0xf0]
004c2a74:  stur     q0, [x8, #0xff]
004c2a78:  add      x8, sp, #0x208
004c2a7c:  add      x9, x8, #0x138
004c2a80:  add      x8, x8, #0x148
004c2a84:  strb     wzr, [sp, #0x240]
004c2a88:  strb     wzr, [sp, #0x338]
004c2a8c:  str      x8, [sp, #0x10]
004c2a90:  str      q0, [x8]
004c2a94:  nop      
004c2a98:  adr      x8, #0x442f08
004c2a9c:  stur     xzr, [x9, #5]
004c2aa0:  adrp     x9, #0x1f1000
004c2aa4:  add      x9, x9, #0x910
004c2aa8:  str      xzr, [sp, #0x340]
004c2aac:  str      x8, [sp, #0x498]
004c2ab0:  nop      
004c2ab4:  adr      x8, #0x40dec4
004c2ab8:  stp      x11, x9, [x29, #-0x80]
004c2abc:  stp      x10, x9, [x29, #-0x58]
004c2ac0:  str      x9, [sp, #0x4a0]
004c2ac4:  str      x8, [sp, #0x4c0]
004c2ac8:  add      x8, sp, #0x4f9
004c2acc:  str      x9, [sp, #0x4c8]
004c2ad0:  str      x9, [sp, #0x4f8]
004c2ad4:  stur     q0, [x8, #0xff]
004c2ad8:  add      x8, sp, #0x509
004c2adc:  str      xzr, [sp, #0x360]
004c2ae0:  strb     wzr, [sp, #0x368]
004c2ae4:  stur     q0, [x8, #0xff]
004c2ae8:  add      x8, sp, #0x519
004c2aec:  sturh    wzr, [x29, #-0xe0]
004c2af0:  sturb    wzr, [x29, #-0x98]
004c2af4:  stur     q0, [x8, #0xff]
004c2af8:  add      x8, sp, #0x479
004c2afc:  str      x9, [sp, #0x608]
004c2b00:  sturb    wzr, [x29, #-0x70]
004c2b04:  stur     q0, [x8, #0xff]
004c2b08:  add      x8, sp, #0x489
004c2b0c:  sturb    wzr, [x29, #-0x48]
004c2b10:  stur     wzr, [x29, #-0x40]
004c2b14:  stur     q0, [x8, #0xff]
004c2b18:  add      x8, sp, #0x499
004c2b1c:  sturb    wzr, [x29, #-0x3c]
004c2b20:  stur     wzr, [x29, #-0x38]
004c2b24:  stur     q0, [x8, #0xff]
004c2b28:  add      x8, sp, #0x4a9
004c2b2c:  sturb    wzr, [x29, #-0x34]
004c2b30:  stur     wzr, [x29, #-0x30]
004c2b34:  stur     q0, [x8, #0xff]
004c2b38:  add      x8, sp, #0x4b9
004c2b3c:  sturb    wzr, [x29, #-0x2c]
004c2b40:  strb     wzr, [sp, #0x4a8]
004c2b44:  stur     q0, [x8, #0xff]
004c2b48:  add      x8, sp, #0x4c9
004c2b4c:  strb     wzr, [sp, #0x4d0]
004c2b50:  str      wzr, [sp, #0x4d8]
004c2b54:  stur     q0, [x8, #0xff]
004c2b58:  add      x8, sp, #0x4d9
004c2b5c:  strb     wzr, [sp, #0x4dc]
004c2b60:  stur     q0, [x22, #0x88]
004c2b64:  stur     q0, [x8, #0xff]
004c2b68:  add      x8, sp, #0x4e9
004c2b6c:  str      x20, [sp, #0x4f0]
004c2b70:  strb     wzr, [sp, #0x548]
004c2b74:  stur     q0, [x8, #0xff]
004c2b78:  str      x11, [sp, #0x5d8]
004c2b7c:  add      x11, sp, #0x488
004c2b80:  add      x8, x11, #0x309
004c2b84:  str      x9, [sp, #0x5e0]
004c2b88:  add      x9, sp, #0x769
004c2b8c:  str      xzr, [sp, #0x550]
004c2b90:  strb     wzr, [sp, #0x558]
004c2b94:  str      q0, [x8]
004c2b98:  add      x8, sp, #0x689
004c2b9c:  stur     q0, [x9, #0xff]
004c2ba0:  add      x9, sp, #0x779
004c2ba4:  strb     wzr, [sp, #0x560]
004c2ba8:  stur     q0, [x8, #0xff]
004c2bac:  add      x8, sp, #0x679
004c2bb0:  stur     q0, [x9, #0xff]
004c2bb4:  strh     wzr, [sp, #0x568]
004c2bb8:  stur     q0, [x8, #0xff]
004c2bbc:  add      x8, sp, #0x669
004c2bc0:  str      wzr, [sp, #0x56c]
004c2bc4:  strb     wzr, [sp, #0x570]
004c2bc8:  stur     q0, [x8, #0xff]
004c2bcc:  add      x8, sp, #0x659
004c2bd0:  str      xzr, [sp, #0x628]
004c2bd4:  str      x10, [sp, #0x600]
004c2bd8:  stur     q0, [x8, #0xff]
004c2bdc:  add      x8, sp, #0x649
004c2be0:  str      wzr, [sp, #0x620]
004c2be4:  strb     wzr, [sp, #0x630]
004c2be8:  stur     q0, [x8, #0xff]
004c2bec:  add      x8, sp, #0x639
004c2bf0:  strb     wzr, [sp, #0x7c0]
004c2bf4:  str      xzr, [sp, #0x7b8]
004c2bf8:  stur     q0, [x8, #0xff]
004c2bfc:  add      x8, sp, #0x629
004c2c00:  strb     wzr, [sp, #0x890]
004c2c04:  str      wzr, [sp, #0x898]
004c2c08:  stur     q0, [x8, #0xff]
004c2c0c:  add      x8, sp, #0x619
004c2c10:  strb     wzr, [sp, #0x89c]
004c2c14:  str      wzr, [sp, #0x8a0]
004c2c18:  stur     q0, [x8, #0xff]
004c2c1c:  add      x8, sp, #0x609
004c2c20:  strb     wzr, [sp, #0x8a4]
004c2c24:  str      wzr, [sp, #0x8a8]
004c2c28:  stur     q0, [x8, #0xff]
004c2c2c:  add      x8, sp, #0x5f9
004c2c30:  strb     wzr, [sp, #0x8ac]
004c2c34:  str      xzr, [sp, #0x8b0]
004c2c38:  stur     q0, [x8, #0xff]
004c2c3c:  add      x8, sp, #0x5e9
004c2c40:  strb     wzr, [sp, #0x8b8]
004c2c44:  str      xzr, [sp, #0x478]
004c2c48:  stur     q0, [x8, #0xff]
004c2c4c:  add      x8, sp, #0x5d9
004c2c50:  stur     xzr, [x22, #0x27]
004c2c54:  str      xzr, [sp, #0x468]
004c2c58:  stur     q0, [x8, #0xff]
004c2c5c:  add      x8, sp, #0x5c9
004c2c60:  stur     xzr, [x22, #0x17]
004c2c64:  str      xzr, [sp, #0x458]
004c2c68:  stur     q0, [x8, #0xff]
004c2c6c:  add      x8, sp, #0x5b9
004c2c70:  stur     xzr, [x22, #7]
004c2c74:  stp      xzr, xzr, [sp, #0x140]
004c2c78:  stur     q0, [x8, #0xff]
004c2c7c:  add      x8, sp, #0x5a9
004c2c80:  strb     wzr, [sp, #0x158]
004c2c84:  str      xzr, [sp, #0x150]
004c2c88:  stur     q0, [x8, #0xff]
004c2c8c:  add      x8, sp, #0x599
004c2c90:  stp      q0, q0, [x23, #0x30]
004c2c94:  str      q0, [x23, #0x20]
004c2c98:  stur     q0, [x8, #0xff]
004c2c9c:  add      x8, sp, #0x589
004c2ca0:  str      xzr, [sp, #0x190]
004c2ca4:  strb     wzr, [sp, #0x198]
004c2ca8:  stur     q0, [x8, #0xff]
004c2cac:  add      x8, sp, #0x579
004c2cb0:  stp      xzr, xzr, [sp, #0x1a8]
004c2cb4:  str      xzr, [sp, #0x1a0]
004c2cb8:  stur     q0, [x8, #0xff]
004c2cbc:  add      x8, sp, #0x569
004c2cc0:  strb     wzr, [sp, #0x1b8]
004c2cc4:  stp      q0, q0, [x23, #0x80]
004c2cc8:  stur     q0, [x8, #0xff]
004c2ccc:  add      x8, sp, #0x559
004c2cd0:  str      q0, [x23, #0xa0]
004c2cd4:  stur     q0, [x23, #0xa9]
004c2cd8:  stur     q0, [x8, #0xff]
004c2cdc:  add      x8, sp, #0x549
004c2ce0:  str      wzr, [sp, #0x200]
004c2ce4:  stur     q0, [x8, #0xff]
004c2ce8:  add      x8, sp, #0x539
004c2cec:  stur     q0, [x8, #0xff]
004c2cf0:  add      x8, sp, #0x6a9
004c2cf4:  stur     q0, [x8, #0xff]
004c2cf8:  add      x8, sp, #0x729
004c2cfc:  stur     q0, [x8, #0xff]
004c2d00:  add      x8, sp, #0x739
004c2d04:  stur     q0, [x8, #0xff]
004c2d08:  add      x8, sp, #0x6c9
004c2d0c:  stur     q0, [x8, #0xff]
004c2d10:  add      x8, sp, #0x6d9
004c2d14:  stur     q0, [x8, #0xff]
004c2d18:  add      x8, sp, #0x6e9
004c2d1c:  stur     q0, [x8, #0xff]
004c2d20:  add      x8, sp, #0x6f9
004c2d24:  stur     q0, [x8, #0xff]
004c2d28:  add      x8, sp, #0x709
004c2d2c:  stur     q0, [x8, #0xff]
004c2d30:  add      x8, sp, #0x719
004c2d34:  stur     q0, [x8, #0xff]
004c2d38:  add      x8, sp, #0x749
004c2d3c:  stur     q0, [x8, #0xff]
004c2d40:  add      x8, sp, #0x759
004c2d44:  stur     q0, [x8, #0xff]
004c2d48:  add      x8, x11, #0x388
004c2d4c:  str      xzr, [sp, #0x830]
004c2d50:  str      xzr, [sp, #0x828]
004c2d54:  str      x8, [sp, #0x808]
004c2d58:  add      x8, x11, #0x340
004c2d5c:  strb     wzr, [sp, #0x840]
004c2d60:  str      xzr, [sp, #0x838]
004c2d64:  str      x8, [sp, #0x90]
004c2d68:  stur     q0, [x8, #0xa9]
004c2d6c:  add      x8, sp, #0x769
004c2d70:  stur     q0, [x8, #0xff]
004c2d74:  add      x8, sp, #0x759
004c2d78:  stur     q0, [x8, #0xff]
004c2d7c:  add      x8, sp, #0x749
004c2d80:  stur     q0, [x8, #0xff]
004c2d84:  add      x8, sp, #0x140
004c2d88:  add      x8, x8, #0x48
004c2d8c:  str      x8, [sp]
004c2d90:  str      x8, [sp, #0x180]
004c2d94:  bl       #0x4e1714
004c2d98:  tbz      w0, #0, #0x4c2dc0
004c2d9c:  adrp     x1, #0x1d2000
004c2da0:  add      x1, x1, #0xf33
004c2da4:  add      x0, sp, #0x370
004c2da8:  bl       #0x4e1438
004c2dac:  bl       #0x4e03c4
004c2db0:  mov      w8, #1
004c2db4:  and      w9, w0, #1
004c2db8:  strb     w8, [sp, #0x211]
004c2dbc:  strb     w9, [sp, #0x210]
004c2dc0:  adrp     x1, #0x1ca000
004c2dc4:  add      x1, x1, #0x85b
004c2dc8:  add      x0, sp, #0x370
004c2dcc:  bl       #0x4e1714
004c2dd0:  str      x24, [sp, #0xa0]
004c2dd4:  str      x19, [sp, #8]
004c2dd8:  tbz      w0, #0, #0x4c2df8
004c2ddc:  adrp     x1, #0x1ca000
004c2de0:  add      x1, x1, #0x85b
004c2de4:  add      x0, sp, #0x370
004c2de8:  bl       #0x4e12e0
004c2dec:  add      x8, sp, #0x138
004c2df0:  bl       #0x4c1a90
004c2df4:  b        #0x4c2e00
004c2df8:  str      wzr, [sp, #0x138]
004c2dfc:  strb     wzr, [sp, #0x13c]
004c2e00:  adrp     x1, #0x197000
004c2e04:  add      x1, x1, #0x8c8
004c2e08:  add      x0, sp, #0x370
004c2e0c:  bl       #0x4e1438
004c2e10:  ldrb     w8, [sp, #0x13c]
004c2e14:  mov      x22, x0
004c2e18:  cbnz     w8, #0x4c2e28
004c2e1c:  mov      x0, x22
004c2e20:  bl       #0x4e05b4
004c2e24:  tbnz     w0, #0, #0x4c3138
004c2e28:  adrp     x1, #0x1ab000
004c2e2c:  add      x1, x1, #0x5aa
004c2e30:  mov      x0, x22
004c2e34:  bl       #0x4e1714
004c2e38:  tbz      w0, #0, #0x4c2e68
004c2e3c:  adrp     x1, #0x1ab000
004c2e40:  add      x1, x1, #0x5aa
004c2e44:  mov      x0, x22
004c2e48:  bl       #0x4e12e0
004c2e4c:  add      x8, sp, #0xb0
004c2e50:  bl       #0x4c1ad8
004c2e54:  ldrb     w21, [sp, #0xb4]
004c2e58:  tst      w21, #0xff
004c2e5c:  b.eq     #0x4c2e68
004c2e60:  ldr      s8, [sp, #0xb0]
004c2e64:  b        #0x4c2e70
004c2e68:  movi     d8, #0000000000000000
004c2e6c:  mov      w21, wzr
004c2e70:  adrp     x1, #0x1ad000
004c2e74:  add      x1, x1, #0xe78
004c2e78:  mov      x0, x22
004c2e7c:  bl       #0x4e1714
004c2e80:  tbz      w0, #0, #0x4c2eb0
004c2e84:  adrp     x1, #0x1ad000
004c2e88:  add      x1, x1, #0xe78
004c2e8c:  mov      x0, x22
004c2e90:  bl       #0x4e12e0
004c2e94:  add      x8, sp, #0xb0
004c2e98:  bl       #0x4c1a90
004c2e9c:  ldrb     w23, [sp, #0xb4]
004c2ea0:  tst      w23, #0xff
004c2ea4:  b.eq     #0x4c2eb0
004c2ea8:  ldrsw    x24, [sp, #0xb0]
004c2eac:  b        #0x4c2eb8
004c2eb0:  mov      w23, wzr
004c2eb4:  mov      x24, xzr
004c2eb8:  adrp     x1, #0x1d0000
004c2ebc:  add      x1, x1, #0x559
004c2ec0:  mov      x0, x22
004c2ec4:  bl       #0x4e1714
004c2ec8:  tbz      w0, #0, #0x4c2ef8
004c2ecc:  adrp     x1, #0x1d0000
004c2ed0:  add      x1, x1, #0x559
004c2ed4:  mov      x0, x22
004c2ed8:  bl       #0x4e12e0
004c2edc:  add      x8, sp, #0xb0
004c2ee0:  bl       #0x4c1a90
004c2ee4:  ldrb     w27, [sp, #0xb4]
004c2ee8:  tst      w27, #0xff
004c2eec:  b.eq     #0x4c2ef8
004c2ef0:  ldr      w25, [sp, #0xb0]
004c2ef4:  b        #0x4c2f00
004c2ef8:  mov      w27, wzr
004c2efc:  mov      w25, wzr
004c2f00:  adrp     x1, #0x1c5000
004c2f04:  add      x1, x1, #0x125
004c2f08:  mov      x0, x22
004c2f0c:  bl       #0x4e1714
004c2f10:  tbz      w0, #0, #0x4c2f40
004c2f14:  adrp     x1, #0x1c5000
004c2f18:  add      x1, x1, #0x125
004c2f1c:  mov      x0, x22
004c2f20:  bl       #0x4e12e0
004c2f24:  add      x8, sp, #0xb0
004c2f28:  bl       #0x4c1a90
004c2f2c:  ldrb     w19, [sp, #0xb4]
004c2f30:  tst      w19, #0xff
004c2f34:  b.eq     #0x4c2f40
004c2f38:  ldr      w26, [sp, #0xb0]
004c2f3c:  b        #0x4c2f48
004c2f40:  mov      w19, wzr
004c2f44:  mov      w26, wzr
004c2f48:  adrp     x1, #0x19f000
004c2f4c:  add      x1, x1, #0xfdb
004c2f50:  mov      x0, x22
004c2f54:  bl       #0x4e1714
004c2f58:  tbz      w0, #0, #0x4c2f8c
004c2f5c:  adrp     x1, #0x19f000
004c2f60:  add      x1, x1, #0xfdb
004c2f64:  mov      x0, x22
004c2f68:  bl       #0x4e12e0
004c2f6c:  add      x8, sp, #0xb0
004c2f70:  bl       #0x4c18d0
004c2f74:  ldrb     w28, [sp, #0xb1]
004c2f78:  tst      w28, #0xff
004c2f7c:  b.eq     #0x4c2f8c
004c2f80:  ldrb     w8, [sp, #0xb0]
004c2f84:  str      w8, [sp, #0x8c]
004c2f88:  b        #0x4c2f94
004c2f8c:  mov      w28, wzr
004c2f90:  str      wzr, [sp, #0x8c]
004c2f94:  adrp     x1, #0x197000
004c2f98:  add      x1, x1, #0x8f9
004c2f9c:  mov      x0, x22
004c2fa0:  bl       #0x4e1714
004c2fa4:  tbz      w0, #0, #0x4c2fd8
004c2fa8:  adrp     x1, #0x197000
004c2fac:  add      x1, x1, #0x8f9
004c2fb0:  mov      x0, x22
004c2fb4:  bl       #0x4e12e0
004c2fb8:  add      x8, sp, #0xb0
004c2fbc:  bl       #0x4c1ad8
004c2fc0:  ldrb     w8, [sp, #0xb4]
004c2fc4:  cbz      w8, #0x4c2fd8
004c2fc8:  mov      w8, #1
004c2fcc:  ldr      s9, [sp, #0xb0]
004c2fd0:  stp      w8, w21, [sp, #0x80]
004c2fd4:  b        #0x4c2ff8
004c2fd8:  orr      w8, w23, w21
004c2fdc:  movi     d9, #0000000000000000
004c2fe0:  orr      w8, w8, w27
004c2fe4:  orr      w8, w8, w19
004c2fe8:  orr      w8, w8, w28
004c2fec:  tst      w8, #0xff
004c2ff0:  b.eq     #0x4c3008
004c2ff4:  stp      wzr, w21, [sp, #0x80]
004c2ff8:  mov      w8, #1
004c2ffc:  str      w8, [sp, #0x7c]
004c3000:  str      w8, [sp, #0x88]
004c3004:  b        #0x4c3030
004c3008:  str      wzr, [sp, #0x7c]
004c300c:  mov      w28, wzr
004c3010:  stp      xzr, xzr, [sp, #0x80]
004c3014:  mov      w19, wzr
004c3018:  mov      w26, wzr
004c301c:  mov      w27, wzr
004c3020:  mov      w25, wzr
004c3024:  mov      w23, wzr
004c3028:  movi     d8, #0000000000000000
004c302c:  mov      x24, xzr
004c3030:  adrp     x1, #0x1ea000
004c3034:  add      x1, x1, #0x27e
004c3038:  mov      x0, x22
004c303c:  bl       #0x4e1714
004c3040:  tbz      w0, #0, #0x4c3088
004c3044:  adrp     x1, #0x1ea000
004c3048:  add      x1, x1, #0x27e
004c304c:  mov      x0, x22
004c3050:  bl       #0x4e12e0
004c3054:  add      x8, sp, #0xb0
004c3058:  bl       #0x4c1a48
004c305c:  ldrb     w8, [sp, #0xb4]
004c3060:  cbz      w8, #0x4c3088
004c3064:  ldr      w21, [sp, #0xb0]
004c3068:  mov      w22, #1
004c306c:  ldrb     w8, [sp, #0x13c]
004c3070:  cbnz     w8, #0x4c3098
004c3074:  ldr      w8, [sp, #0x7c]
004c3078:  orr      w8, w8, w22
004c307c:  cmp      w8, #1
004c3080:  b.eq     #0x4c30a8
004c3084:  b        #0x4c3138
004c3088:  mov      w22, wzr
004c308c:  mov      w21, wzr
004c3090:  ldrb     w8, [sp, #0x13c]
004c3094:  cbz      w8, #0x4c3074
004c3098:  ldr      w8, [sp, #0x138]
004c309c:  mov      w9, #1
004c30a0:  str      w8, [sp, #0x4d8]
004c30a4:  strb     w9, [sp, #0x4dc]
004c30a8:  add      x8, sp, #0x488
004c30ac:  adrp     x10, #0x1f1000
004c30b0:  add      x10, x10, #0x910
004c30b4:  ldr      x9, [sp, #0x4f8]
004c30b8:  ldr      x0, [sp, #0x4e0]
004c30bc:  str      x20, [sp, #0x4f0]
004c30c0:  stp      xzr, xzr, [x8, #0x58]!
004c30c4:  str      x10, [sp, #0x4f8]
004c30c8:  ldr      x8, [x9, #8]
004c30cc:  cbz      x8, #0x4c30d4
004c30d0:  blr      x8
004c30d4:  ldr      w8, [sp, #0x84]
004c30d8:  strb     wzr, [sp, #0x500]
004c30dc:  str      x24, [sp, #0x508]
004c30e0:  strb     w23, [sp, #0x510]
004c30e4:  strb     w8, [sp, #0x524]
004c30e8:  ldr      w8, [sp, #0x8c]
004c30ec:  str      w25, [sp, #0x518]
004c30f0:  strb     w27, [sp, #0x51c]
004c30f4:  strb     w8, [sp, #0x530]
004c30f8:  ldr      w8, [sp, #0x80]
004c30fc:  str      s8, [sp, #0x520]
004c3100:  str      w26, [sp, #0x528]
004c3104:  strb     w8, [sp, #0x538]
004c3108:  ldr      w8, [sp, #0x88]
004c310c:  strb     w19, [sp, #0x52c]
004c3110:  strb     w28, [sp, #0x531]
004c3114:  strb     w8, [sp, #0x548]
004c3118:  mov      w8, #1
004c311c:  str      s9, [sp, #0x534]
004c3120:  str      wzr, [sp, #0x53c]
004c3124:  strb     wzr, [sp, #0x540]
004c3128:  str      w21, [sp, #0x550]
004c312c:  strb     w22, [sp, #0x554]
004c3130:  strb     w22, [sp, #0x558]
004c3134:  strb     w8, [sp, #0x560]
004c3138:  adrp     x1, #0x1bc000
004c313c:  add      x1, x1, #0x667
004c3140:  add      x0, sp, #0x370
004c3144:  bl       #0x4e1714
004c3148:  tbz      w0, #0, #0x4c329c
004c314c:  adrp     x1, #0x1e7000
004c3150:  add      x1, x1, #0x695
004c3154:  add      x0, sp, #0x370
004c3158:  bl       #0x4e1714
004c315c:  tbz      w0, #0, #0x4c329c
004c3160:  adrp     x1, #0x1bc000
004c3164:  add      x1, x1, #0x667
004c3168:  add      x0, sp, #0x370
004c316c:  bl       #0x4e1714
004c3170:  tbz      w0, #0, #0x4c3198
004c3174:  adrp     x1, #0x1bc000
004c3178:  add      x1, x1, #0x667
004c317c:  add      x0, sp, #0x370
004c3180:  bl       #0x4e12e0
004c3184:  add      x8, sp, #0xb0
004c3188:  bl       #0x4c18d0
004c318c:  ldrb     w9, [sp, #0xb1]
004c3190:  ldrb     w8, [sp, #0xb0]
004c3194:  b        #0x4c31a0
004c3198:  mov      w8, wzr
004c319c:  mov      w9, wzr
004c31a0:  cmp      w9, #0
004c31a4:  adrp     x1, #0x1e7000
004c31a8:  add      x1, x1, #0x695
004c31ac:  ccmp     w8, #0, #4, ne
004c31b0:  add      x0, sp, #0x370
004c31b4:  cset     w19, ne
004c31b8:  bl       #0x4e1714
004c31bc:  tbz      w0, #0, #0x4c31e8
004c31c0:  adrp     x1, #0x1e7000
004c31c4:  add      x1, x1, #0x695
004c31c8:  add      x0, sp, #0x370
004c31cc:  bl       #0x4e12e0
004c31d0:  add      x8, sp, #0xb0
004c31d4:  bl       #0x4c1ad8
004c31d8:  ldrb     w8, [sp, #0xb4]
004c31dc:  cbz      w8, #0x4c31e8
004c31e0:  ldr      s8, [sp, #0xb0]
004c31e4:  b        #0x4c31ec
004c31e8:  movi     d8, #0000000000000000
004c31ec:  adrp     x1, #0x19a000
004c31f0:  add      x1, x1, #0x1a8
004c31f4:  add      x0, sp, #0x370
004c31f8:  bl       #0x4e1714
004c31fc:  tbz      w0, #0, #0x4c3224
004c3200:  adrp     x1, #0x19a000
004c3204:  add      x1, x1, #0x1a8
004c3208:  add      x0, sp, #0x370
004c320c:  bl       #0x4e12e0
004c3210:  add      x8, sp, #0xb0
004c3214:  bl       #0x4c18d0
004c3218:  ldrb     w8, [sp, #0xb1]
004c321c:  ldrb     w9, [sp, #0xb0]
004c3220:  b        #0x4c322c
004c3224:  mov      w9, wzr
004c3228:  mov      w8, wzr
004c322c:  cmp      w9, #0
004c3230:  adrp     x1, #0x1e7000
004c3234:  add      x1, x1, #0x6a7
004c3238:  ccmp     w8, #0, #4, ne
004c323c:  add      x0, sp, #0x370
004c3240:  mov      w8, #2
004c3244:  csel     w20, wzr, w8, eq
004c3248:  bl       #0x4e1714
004c324c:  mov      w8, wzr
004c3250:  mov      w9, wzr
004c3254:  tbz      w0, #0, #0x4c3278
004c3258:  adrp     x1, #0x1e7000
004c325c:  add      x1, x1, #0x6a7
004c3260:  add      x0, sp, #0x370
004c3264:  bl       #0x4e12e0
004c3268:  add      x8, sp, #0xb0
004c326c:  bl       #0x4c18d0
004c3270:  ldrb     w9, [sp, #0xb1]
004c3274:  ldrb     w8, [sp, #0xb0]
004c3278:  cmp      w9, #0
004c327c:  mov      w9, #1
004c3280:  ccmp     w8, #0, #4, ne
004c3284:  strb     w19, [sp, #0x214]
004c3288:  str      s8, [sp, #0x218]
004c328c:  strb     w9, [sp, #0x220]
004c3290:  cset     w8, ne
004c3294:  orr      w8, w20, w8
004c3298:  str      w8, [sp, #0x21c]
004c329c:  adrp     x1, #0x1b9000
004c32a0:  add      x1, x1, #0x9a7
004c32a4:  add      x0, sp, #0x370
004c32a8:  bl       #0x4e1714
004c32ac:  tbz      w0, #0, #0x4c32e0
004c32b0:  adrp     x1, #0x1b9000
004c32b4:  add      x1, x1, #0x9a7
004c32b8:  add      x0, sp, #0x370
004c32bc:  bl       #0x4e12e0
004c32c0:  add      x8, sp, #0xb0
004c32c4:  bl       #0x4c1a90
004c32c8:  ldrb     w8, [sp, #0xb4]
004c32cc:  cbz      w8, #0x4c32e0
004c32d0:  ldr      w8, [sp, #0xb0]
004c32d4:  mov      w9, #1
004c32d8:  str      w8, [sp, #0x208]
004c32dc:  strb     w9, [sp, #0x20c]
004c32e0:  adrp     x1, #0x1a5000
004c32e4:  add      x1, x1, #0xfef
004c32e8:  add      x0, sp, #0x370
004c32ec:  bl       #0x4e1714
004c32f0:  tbz      w0, #0, #0x4c3324
004c32f4:  adrp     x1, #0x1a5000
004c32f8:  add      x1, x1, #0xfef
004c32fc:  add      x0, sp, #0x370
004c3300:  bl       #0x4e12e0
004c3304:  add      x8, sp, #0xb0
004c3308:  bl       #0x4c1a90
004c330c:  ldrb     w8, [sp, #0xb4]
004c3310:  cbz      w8, #0x4c3324
004c3314:  ldr      w8, [sp, #0xb0]
004c3318:  mov      w9, #1
004c331c:  str      w8, [sp, #0x208]
004c3320:  strb     w9, [sp, #0x20c]
004c3324:  adrp     x1, #0x1d8000
004c3328:  add      x1, x1, #0xf5d
004c332c:  add      x0, sp, #0x370
004c3330:  bl       #0x4e1714
004c3334:  add      x24, sp, #0x140
004c3338:  tbz      w0, #0, #0x4c3370
004c333c:  adrp     x1, #0x1d8000
004c3340:  add      x1, x1, #0xf5d
004c3344:  add      x0, sp, #0x370
004c3348:  bl       #0x4e12e0
004c334c:  add      x8, sp, #0xb0
004c3350:  bl       #0x4c1a90
004c3354:  ldrb     w8, [sp, #0xb4]
004c3358:  tst      w8, #0xff
004c335c:  str      w8, [sp, #0x54]
004c3360:  b.eq     #0x4c3374
004c3364:  ldr      w8, [sp, #0xb0]
004c3368:  str      w8, [sp, #0x84]
004c336c:  b        #0x4c3378
004c3370:  str      wzr, [sp, #0x54]
004c3374:  str      wzr, [sp, #0x84]
004c3378:  adrp     x1, #0x1ea000
004c337c:  add      x1, x1, #0x266
004c3380:  add      x0, sp, #0x370
004c3384:  bl       #0x4e1714
004c3388:  tbz      w0, #0, #0x4c33c0
004c338c:  adrp     x1, #0x1ea000
004c3390:  add      x1, x1, #0x266
004c3394:  add      x0, sp, #0x370
004c3398:  bl       #0x4e12e0
004c339c:  add      x8, sp, #0xb0
004c33a0:  bl       #0x4c1a90
004c33a4:  ldrb     w8, [sp, #0xb4]
004c33a8:  tst      w8, #0xff
004c33ac:  b.eq     #0x4c33c4
004c33b0:  str      w8, [sp, #0x7c]
004c33b4:  ldr      w8, [sp, #0xb0]
004c33b8:  str      w8, [sp, #0x8c]
004c33bc:  b        #0x4c33cc
004c33c0:  mov      w8, wzr
004c33c4:  str      w8, [sp, #0x7c]
004c33c8:  str      wzr, [sp, #0x8c]
004c33cc:  adrp     x1, #0x19a000
004c33d0:  add      x1, x1, #0x1c3
004c33d4:  add      x0, sp, #0x370
004c33d8:  bl       #0x4e1714
004c33dc:  tbz      w0, #0, #0x4c3414
004c33e0:  adrp     x1, #0x19a000
004c33e4:  add      x1, x1, #0x1c3
004c33e8:  add      x0, sp, #0x370
004c33ec:  bl       #0x4e12e0
004c33f0:  add      x8, sp, #0xb0
004c33f4:  bl       #0x4c1a90
004c33f8:  ldrb     w8, [sp, #0xb4]
004c33fc:  tst      w8, #0xff
004c3400:  b.eq     #0x4c3418
004c3404:  str      w8, [sp, #0x74]
004c3408:  ldr      w8, [sp, #0xb0]
004c340c:  str      w8, [sp, #0x88]
004c3410:  b        #0x4c3420
004c3414:  mov      w8, wzr
004c3418:  str      w8, [sp, #0x74]
004c341c:  str      wzr, [sp, #0x88]
004c3420:  adrp     x1, #0x1ad000
004c3424:  add      x1, x1, #0xe65
004c3428:  add      x0, sp, #0x370
004c342c:  bl       #0x4e1714
004c3430:  tbz      w0, #0, #0x4c3468
004c3434:  adrp     x1, #0x1ad000
004c3438:  add      x1, x1, #0xe65
004c343c:  add      x0, sp, #0x370
004c3440:  bl       #0x4e12e0
004c3444:  add      x8, sp, #0xb0
004c3448:  bl       #0x4c1a90
004c344c:  ldrb     w8, [sp, #0xb4]
004c3450:  tst      w8, #0xff
004c3454:  b.eq     #0x4c346c
004c3458:  str      w8, [sp, #0x6c]
004c345c:  ldr      w8, [sp, #0xb0]
004c3460:  str      w8, [sp, #0x80]
004c3464:  b        #0x4c3474
004c3468:  mov      w8, wzr
004c346c:  str      w8, [sp, #0x6c]
004c3470:  str      wzr, [sp, #0x80]
004c3474:  adrp     x1, #0x1c5000
004c3478:  add      x1, x1, #0xfa
004c347c:  add      x0, sp, #0x370
004c3480:  bl       #0x4e1714
004c3484:  tbz      w0, #0, #0x4c34bc
004c3488:  adrp     x1, #0x1c5000
004c348c:  add      x1, x1, #0xfa
004c3490:  add      x0, sp, #0x370
004c3494:  bl       #0x4e12e0
004c3498:  add      x8, sp, #0xb0
004c349c:  bl       #0x4c1a90
004c34a0:  ldrb     w8, [sp, #0xb4]
004c34a4:  tst      w8, #0xff
004c34a8:  b.eq     #0x4c34c0
004c34ac:  str      w8, [sp, #0x64]
004c34b0:  ldr      w8, [sp, #0xb0]
004c34b4:  str      w8, [sp, #0x78]
004c34b8:  b        #0x4c34c8
004c34bc:  mov      w8, wzr
004c34c0:  str      w8, [sp, #0x64]
004c34c4:  str      wzr, [sp, #0x78]
004c34c8:  adrp     x1, #0x1d0000
004c34cc:  add      x1, x1, #0x530
004c34d0:  add      x0, sp, #0x370
004c34d4:  bl       #0x4e1714
004c34d8:  tbz      w0, #0, #0x4c3510
004c34dc:  adrp     x1, #0x1d0000
004c34e0:  add      x1, x1, #0x530
004c34e4:  add      x0, sp, #0x370
004c34e8:  bl       #0x4e12e0
004c34ec:  add      x8, sp, #0xb0
004c34f0:  bl       #0x4c1a90
004c34f4:  ldrb     w8, [sp, #0xb4]
004c34f8:  tst      w8, #0xff
004c34fc:  b.eq     #0x4c3514
004c3500:  str      w8, [sp, #0x5c]
004c3504:  ldr      w8, [sp, #0xb0]
004c3508:  str      w8, [sp, #0x70]
004c350c:  b        #0x4c351c
004c3510:  mov      w8, wzr
004c3514:  str      w8, [sp, #0x5c]
004c3518:  str      wzr, [sp, #0x70]
004c351c:  adrp     x1, #0x1de000
004c3520:  add      x1, x1, #0x832
004c3524:  add      x0, sp, #0x370
004c3528:  bl       #0x4e1714
004c352c:  tbz      w0, #0, #0x4c3564
004c3530:  adrp     x1, #0x1de000
004c3534:  add      x1, x1, #0x832
004c3538:  add      x0, sp, #0x370
004c353c:  bl       #0x4e12e0
004c3540:  add      x8, sp, #0xb0
004c3544:  bl       #0x4c1a90
004c3548:  ldrb     w8, [sp, #0xb4]
004c354c:  tst      w8, #0xff
004c3550:  b.eq     #0x4c3568
004c3554:  str      w8, [sp, #0x4c]
004c3558:  ldr      w8, [sp, #0xb0]
004c355c:  str      w8, [sp, #0x68]
004c3560:  b        #0x4c3570
004c3564:  mov      w8, wzr
004c3568:  str      w8, [sp, #0x4c]
004c356c:  str      wzr, [sp, #0x68]
004c3570:  adrp     x1, #0x1d2000
004c3574:  add      x1, x1, #0xf3c
004c3578:  add      x0, sp, #0x370
004c357c:  bl       #0x4e1714
004c3580:  tbz      w0, #0, #0x4c35b8
004c3584:  adrp     x1, #0x1d2000
004c3588:  add      x1, x1, #0xf3c
004c358c:  add      x0, sp, #0x370
004c3590:  bl       #0x4e12e0
004c3594:  add      x8, sp, #0xb0
004c3598:  bl       #0x4c1a90
004c359c:  ldrb     w8, [sp, #0xb4]
004c35a0:  tst      w8, #0xff
004c35a4:  b.eq     #0x4c35bc
004c35a8:  str      w8, [sp, #0x44]
004c35ac:  ldr      w8, [sp, #0xb0]
004c35b0:  str      w8, [sp, #0x60]
004c35b4:  b        #0x4c35c4
004c35b8:  mov      w8, wzr
004c35bc:  str      w8, [sp, #0x44]
004c35c0:  str      wzr, [sp, #0x60]
004c35c4:  adrp     x1, #0x1a6000
004c35c8:  add      x1, x1, #4
004c35cc:  add      x0, sp, #0x370
004c35d0:  bl       #0x4e1714
004c35d4:  tbz      w0, #0, #0x4c360c
004c35d8:  adrp     x1, #0x1a6000
004c35dc:  add      x1, x1, #4
004c35e0:  add      x0, sp, #0x370
004c35e4:  bl       #0x4e12e0
004c35e8:  add      x8, sp, #0xb0
004c35ec:  bl       #0x4c1a90
004c35f0:  ldrb     w8, [sp, #0xb4]
004c35f4:  tst      w8, #0xff
004c35f8:  b.eq     #0x4c3610
004c35fc:  str      w8, [sp, #0x3c]
004c3600:  ldr      w8, [sp, #0xb0]
004c3604:  str      w8, [sp, #0x58]
004c3608:  b        #0x4c3618
004c360c:  mov      w8, wzr
004c3610:  str      w8, [sp, #0x3c]
004c3614:  str      wzr, [sp, #0x58]
004c3618:  adrp     x1, #0x1e7000
004c361c:  add      x1, x1, #0x6c4
004c3620:  add      x0, sp, #0x370
004c3624:  bl       #0x4e1714
004c3628:  tbz      w0, #0, #0x4c3660
004c362c:  adrp     x1, #0x1e7000
004c3630:  add      x1, x1, #0x6c4
004c3634:  add      x0, sp, #0x370
004c3638:  bl       #0x4e12e0
004c363c:  add      x8, sp, #0xb0
004c3640:  bl       #0x4c1a90
004c3644:  ldrb     w8, [sp, #0xb4]
004c3648:  tst      w8, #0xff
004c364c:  b.eq     #0x4c3664
004c3650:  str      w8, [sp, #0x30]
004c3654:  ldr      w8, [sp, #0xb0]
004c3658:  str      w8, [sp, #0x50]
004c365c:  b        #0x4c366c
004c3660:  mov      w8, wzr
004c3664:  str      w8, [sp, #0x30]
004c3668:  str      wzr, [sp, #0x50]
004c366c:  adrp     x1, #0x1ab000
004c3670:  add      x1, x1, #0x588
004c3674:  add      x0, sp, #0x370
004c3678:  bl       #0x4e1714
004c367c:  tbz      w0, #0, #0x4c36b0
004c3680:  adrp     x1, #0x1ab000
004c3684:  add      x1, x1, #0x588
004c3688:  add      x0, sp, #0x370
004c368c:  bl       #0x4e12e0
004c3690:  add      x8, sp, #0xb0
004c3694:  bl       #0x4c1a90
004c3698:  ldrb     w21, [sp, #0xb4]
004c369c:  tst      w21, #0xff
004c36a0:  b.eq     #0x4c36b4
004c36a4:  ldr      w8, [sp, #0xb0]
004c36a8:  str      w8, [sp, #0x48]
004c36ac:  b        #0x4c36b8
004c36b0:  mov      w21, wzr
004c36b4:  str      wzr, [sp, #0x48]
004c36b8:  adrp     x1, #0x1c5000
004c36bc:  add      x1, x1, #0x10e
004c36c0:  add      x0, sp, #0x370
004c36c4:  bl       #0x4e1714
004c36c8:  tbz      w0, #0, #0x4c36fc
004c36cc:  adrp     x1, #0x1c5000
004c36d0:  add      x1, x1, #0x10e
004c36d4:  add      x0, sp, #0x370
004c36d8:  bl       #0x4e12e0
004c36dc:  add      x8, sp, #0xb0
004c36e0:  bl       #0x4c1a90
004c36e4:  ldrb     w8, [sp, #0xb4]
004c36e8:  cbz      w8, #0x4c36fc
004c36ec:  ldr      w8, [sp, #0xb0]
004c36f0:  mov      w9, #1
004c36f4:  str      w8, [sp, #0x56c]
004c36f8:  strb     w9, [sp, #0x570]
004c36fc:  adrp     x1, #0x1d5000
004c3700:  add      x1, x1, #0xdc2
004c3704:  add      x0, sp, #0x370
004c3708:  bl       #0x4e1714
004c370c:  tbz      w0, #0, #0x4c3740
004c3710:  adrp     x1, #0x1d5000
004c3714:  add      x1, x1, #0xdc2
004c3718:  add      x0, sp, #0x370
004c371c:  bl       #0x4e12e0
004c3720:  add      x8, sp, #0xb0
004c3724:  bl       #0x4c18d0
004c3728:  ldrb     w27, [sp, #0xb1]
004c372c:  tst      w27, #0xff
004c3730:  b.eq     #0x4c3744
004c3734:  ldrb     w8, [sp, #0xb0]
004c3738:  str      w8, [sp, #0x40]
004c373c:  b        #0x4c3748
004c3740:  mov      w27, wzr
004c3744:  str      wzr, [sp, #0x40]
004c3748:  adrp     x1, #0x1c5000
004c374c:  add      x1, x1, #0x121
004c3750:  add      x0, sp, #0x370
004c3754:  bl       #0x4e1714
004c3758:  tbz      w0, #0, #0x4c378c
004c375c:  adrp     x1, #0x1c5000
004c3760:  add      x1, x1, #0x121
004c3764:  add      x0, sp, #0x370
004c3768:  bl       #0x4e12e0
004c376c:  add      x8, sp, #0xb0
004c3770:  bl       #0x4c18d0
004c3774:  ldrb     w22, [sp, #0xb1]
004c3778:  tst      w22, #0xff
004c377c:  b.eq     #0x4c3790
004c3780:  ldrb     w8, [sp, #0xb0]
004c3784:  str      w8, [sp, #0x38]
004c3788:  b        #0x4c3794
004c378c:  mov      w22, wzr
004c3790:  str      wzr, [sp, #0x38]
004c3794:  adrp     x1, #0x1c2000
004c3798:  add      x1, x1, #0x109
004c379c:  add      x0, sp, #0x370
004c37a0:  bl       #0x4e1714
004c37a4:  tbz      w0, #0, #0x4c37d8
004c37a8:  adrp     x1, #0x1c2000
004c37ac:  add      x1, x1, #0x109
004c37b0:  add      x0, sp, #0x370
004c37b4:  bl       #0x4e12e0
004c37b8:  add      x8, sp, #0xb0
004c37bc:  bl       #0x4c1ad8
004c37c0:  ldrb     w26, [sp, #0xb4]
004c37c4:  tst      w26, #0xff
004c37c8:  b.eq     #0x4c37dc
004c37cc:  ldr      s0, [sp, #0xb0]
004c37d0:  fcvt     d9, s0
004c37d4:  b        #0x4c37e0
004c37d8:  mov      w26, wzr
004c37dc:  movi     d9, #0000000000000000
004c37e0:  adrp     x1, #0x1b3000
004c37e4:  add      x1, x1, #0x692
004c37e8:  add      x0, sp, #0x370
004c37ec:  bl       #0x4e1714
004c37f0:  tbz      w0, #0, #0x4c3824
004c37f4:  adrp     x1, #0x1b3000
004c37f8:  add      x1, x1, #0x692
004c37fc:  add      x0, sp, #0x370
004c3800:  bl       #0x4e12e0
004c3804:  add      x8, sp, #0xb0
004c3808:  bl       #0x4c18d0
004c380c:  ldrb     w8, [sp, #0xb1]
004c3810:  cbz      w8, #0x4c3824
004c3814:  ldrb     w8, [sp, #0xb0]
004c3818:  mov      w9, #1
004c381c:  sturb    w8, [x29, #-0xe0]
004c3820:  sturb    w9, [x29, #-0xdf]
004c3824:  adrp     x1, #0x1b9000
004c3828:  add      x1, x1, #0x9b7
004c382c:  add      x0, sp, #0x370
004c3830:  bl       #0x4e1714
004c3834:  tbz      w0, #0, #0x4c3868
004c3838:  adrp     x1, #0x1b9000
004c383c:  add      x1, x1, #0x9b7
004c3840:  add      x0, sp, #0x370
004c3844:  bl       #0x4e12e0
004c3848:  add      x8, sp, #0xb0
004c384c:  bl       #0x4c1a90
004c3850:  ldrb     w8, [sp, #0xb4]
004c3854:  cbz      w8, #0x4c3868
004c3858:  ldr      w8, [sp, #0xb0]
004c385c:  mov      w9, #1
004c3860:  str      w8, [sp, #0x898]
004c3864:  strb     w9, [sp, #0x89c]
004c3868:  adrp     x1, #0x1ab000
004c386c:  add      x1, x1, #0x599
004c3870:  add      x0, sp, #0x370
004c3874:  bl       #0x4e1714
004c3878:  tbz      w0, #0, #0x4c38ac
004c387c:  adrp     x1, #0x1ab000
004c3880:  add      x1, x1, #0x599
004c3884:  add      x0, sp, #0x370
004c3888:  bl       #0x4e12e0
004c388c:  add      x8, sp, #0xb0
004c3890:  bl       #0x4c1a90
004c3894:  ldrb     w8, [sp, #0xb4]
004c3898:  cbz      w8, #0x4c38ac
004c389c:  ldr      w8, [sp, #0xb0]
004c38a0:  mov      w9, #1
004c38a4:  str      w8, [sp, #0x8a0]
004c38a8:  strb     w9, [sp, #0x8a4]
004c38ac:  adrp     x1, #0x197000
004c38b0:  add      x1, x1, #0x8d9
004c38b4:  add      x0, sp, #0x370
004c38b8:  bl       #0x4e1714
004c38bc:  tbz      w0, #0, #0x4c38f0
004c38c0:  adrp     x1, #0x197000
004c38c4:  add      x1, x1, #0x8d9
004c38c8:  add      x0, sp, #0x370
004c38cc:  bl       #0x4e12e0
004c38d0:  add      x8, sp, #0xb0
004c38d4:  bl       #0x4c1a90
004c38d8:  ldrb     w8, [sp, #0xb4]
004c38dc:  cbz      w8, #0x4c38f0
004c38e0:  ldr      w8, [sp, #0xb0]
004c38e4:  mov      w9, #1
004c38e8:  str      w8, [sp, #0x8a8]
004c38ec:  strb     w9, [sp, #0x8ac]
004c38f0:  adrp     x1, #0x1a3000
004c38f4:  add      x1, x1, #0x210
004c38f8:  add      x0, sp, #0x370
004c38fc:  bl       #0x4e1714
004c3900:  tbz      w0, #0, #0x4c3938
004c3904:  adrp     x1, #0x1a3000
004c3908:  add      x1, x1, #0x210
004c390c:  add      x0, sp, #0x370
004c3910:  bl       #0x4e12e0
004c3914:  add      x8, sp, #0xb0
004c3918:  bl       #0x4c1a90
004c391c:  ldrb     w8, [sp, #0xb4]
004c3920:  tst      w8, #0xff
004c3924:  b.eq     #0x4c393c
004c3928:  str      w8, [sp, #0x2c]
004c392c:  ldr      w8, [sp, #0xb0]
004c3930:  str      w8, [sp, #0x28]
004c3934:  b        #0x4c3940
004c3938:  mov      w8, wzr
004c393c:  stp      wzr, w8, [sp, #0x28]
004c3940:  adrp     x1, #0x19f000
004c3944:  add      x1, x1, #0xfbb
004c3948:  add      x0, sp, #0x370
004c394c:  bl       #0x4e1714
004c3950:  tbz      w0, #0, #0x4c3988
004c3954:  adrp     x1, #0x19f000
004c3958:  add      x1, x1, #0xfbb
004c395c:  add      x0, sp, #0x370
004c3960:  bl       #0x4e12e0
004c3964:  add      x8, sp, #0xb0
004c3968:  bl       #0x4c18d0
004c396c:  ldrb     w8, [sp, #0xb1]
004c3970:  tst      w8, #0xff
004c3974:  b.eq     #0x4c398c
004c3978:  str      w8, [sp, #0x24]
004c397c:  ldrb     w8, [sp, #0xb0]
004c3980:  str      w8, [sp, #0x20]
004c3984:  b        #0x4c3990
004c3988:  mov      w8, wzr
004c398c:  stp      wzr, w8, [sp, #0x20]
004c3990:  adrp     x1, #0x1b9000
004c3994:  add      x1, x1, #0x9c6
004c3998:  add      x0, sp, #0x370
004c399c:  sub      x19, x29, #0xe0
004c39a0:  bl       #0x4e1714
004c39a4:  tbz      w0, #0, #0x4c39d8
004c39a8:  adrp     x1, #0x1b9000
004c39ac:  add      x1, x1, #0x9c6
004c39b0:  add      x0, sp, #0x370
004c39b4:  bl       #0x4e12e0
004c39b8:  add      x8, sp, #0xb0
004c39bc:  bl       #0x4c1ad8
004c39c0:  ldrb     w8, [sp, #0xb4]
004c39c4:  tst      w8, #0xff
004c39c8:  b.eq     #0x4c39dc
004c39cc:  ldr      s8, [sp, #0xb0]
004c39d0:  str      w8, [sp, #0x34]
004c39d4:  b        #0x4c39e4
004c39d8:  mov      w8, wzr
004c39dc:  str      w8, [sp, #0x34]
004c39e0:  movi     d8, #0000000000000000
004c39e4:  adrp     x1, #0x1b6000
004c39e8:  add      x1, x1, #0x892
004c39ec:  add      x0, sp, #0x370
004c39f0:  add      x25, x19, #0x18
004c39f4:  bl       #0x4e1438
004c39f8:  mov      x23, x0
004c39fc:  bl       #0x4e05d4
004c3a00:  tbz      w0, #0, #0x4c3b04
004c3a04:  movi     v0.2d, #0000000000000000
004c3a08:  adrp     x1, #0x1ab000
004c3a0c:  add      x1, x1, #0x5a5
004c3a10:  mov      x0, x23
004c3a14:  stp      q0, q0, [sp, #0xc0]
004c3a18:  str      q0, [sp, #0xb0]
004c3a1c:  bl       #0x4e1714
004c3a20:  tbz      w0, #0, #0x4c3ac8
004c3a24:  adrp     x1, #0x1ab000
004c3a28:  add      x1, x1, #0x5a5
004c3a2c:  mov      x0, x23
004c3a30:  bl       #0x4e12e0
004c3a34:  add      x8, sp, #0x118
004c3a38:  bl       #0x4c191c
004c3a3c:  ldrb     w8, [sp, #0x130]
004c3a40:  cbz      w8, #0x4c3ad4
004c3a44:  ldrsb    w8, [sp, #0xc7]
004c3a48:  tbz      w8, #0x1f, #0x4c3a54
004c3a4c:  ldr      x0, [sp, #0xb0]
004c3a50:  bl       #0xd13dd0
004c3a54:  add      x8, sp, #0x19
004c3a58:  adrp     x1, #0x1e4000
004c3a5c:  add      x1, x1, #0x551
004c3a60:  mov      x0, x23
004c3a64:  ldur     q0, [x8, #0xff]
004c3a68:  strb     wzr, [sp, #0x118]
004c3a6c:  ldr      x8, [sp, #0x128]
004c3a70:  strb     wzr, [sp, #0x12f]
004c3a74:  str      q0, [sp, #0xb0]
004c3a78:  str      x8, [sp, #0xc0]
004c3a7c:  bl       #0x4e1714
004c3a80:  tbz      w0, #0, #0x4c48bc
004c3a84:  adrp     x1, #0x1e4000
004c3a88:  add      x1, x1, #0x551
004c3a8c:  mov      x0, x23
004c3a90:  bl       #0x4e12e0
004c3a94:  add      x8, sp, #0xf0
004c3a98:  bl       #0x4c9778
004c3a9c:  ldrb     w8, [sp, #0x108]
004c3aa0:  cbz      w8, #0x4c4908
004c3aa4:  ldr      x0, [sp, #0xc8]
004c3aa8:  cbz      x0, #0x4c3ab4
004c3aac:  str      x0, [sp, #0xd0]
004c3ab0:  bl       #0xd13dd0
004c3ab4:  ldr      q0, [sp, #0xf0]
004c3ab8:  ldr      x8, [sp, #0x100]
004c3abc:  stur     q0, [sp, #0xc8]
004c3ac0:  str      x8, [sp, #0xd8]
004c3ac4:  b        #0x4c48d8
004c3ac8:  stp      xzr, xzr, [sp, #0x118]
004c3acc:  strb     wzr, [sp, #0x130]
004c3ad0:  str      xzr, [sp, #0x128]
004c3ad4:  ldrsb    w8, [sp, #0x12f]
004c3ad8:  tbz      w8, #0x1f, #0x4c3ae4
004c3adc:  ldr      x0, [sp, #0x118]
004c3ae0:  bl       #0xd13dd0
004c3ae4:  ldr      x0, [sp, #0xc8]
004c3ae8:  cbz      x0, #0x4c3af4
004c3aec:  str      x0, [sp, #0xd0]
004c3af0:  bl       #0xd13dd0
004c3af4:  ldrsb    w8, [sp, #0xc7]
004c3af8:  tbz      w8, #0x1f, #0x4c3b04
004c3afc:  ldr      x0, [sp, #0xb0]
004c3b00:  bl       #0xd13dd0
004c3b04:  adrp     x1, #0x1b3000
004c3b08:  add      x1, x1, #0x696
004c3b0c:  add      x0, sp, #0x370
004c3b10:  bl       #0x4e1714
004c3b14:  tbz      w0, #0, #0x4c3bc0
004c3b18:  adrp     x1, #0x1b3000
004c3b1c:  add      x1, x1, #0x696
004c3b20:  add      x0, sp, #0x370
004c3b24:  bl       #0x4e12e0
004c3b28:  add      x8, sp, #0xb0
004c3b2c:  add      x20, sp, #0xb0
004c3b30:  bl       #0x4c9958
004c3b34:  ldrb     w8, [sp, #0xe8]
004c3b38:  cbz      w8, #0x4c3be8
004c3b3c:  add      x8, sp, #0x140
004c3b40:  add      x9, sp, #0x140
004c3b44:  add      x23, x8, #0x40
004c3b48:  ldrh     w8, [sp, #0xb0]
004c3b4c:  ldrsb    w10, [sp, #0x17f]
004c3b50:  add      x19, x9, #0x28
004c3b54:  orr      x20, x20, #8
004c3b58:  strh     w8, [sp, #0x160]
004c3b5c:  tbz      w10, #0x1f, #0x4c3b68
004c3b60:  ldr      x0, [sp, #0x168]
004c3b64:  bl       #0xd13dd0
004c3b68:  ldr      q0, [x20]
004c3b6c:  mov      x0, x23
004c3b70:  ldr      x8, [x20, #0x10]
004c3b74:  strb     wzr, [sp, #0xcf]
004c3b78:  ldr      x1, [sp, #0x188]
004c3b7c:  strb     wzr, [sp, #0xb8]
004c3b80:  str      q0, [x19]
004c3b84:  str      x8, [x19, #0x10]
004c3b88:  bl       #0x441e1c
004c3b8c:  ldp      x8, x1, [sp, #0xd0]
004c3b90:  ldr      x9, [sp, #0xe0]
004c3b94:  stp      x8, x1, [sp, #0x180]
004c3b98:  str      x9, [sp, #0x190]
004c3b9c:  cbz      x9, #0x4c3bf0
004c3ba0:  ldr      x9, [sp]
004c3ba4:  add      x8, sp, #0xb0
004c3ba8:  add      x8, x8, #0x28
004c3bac:  str      x9, [x1, #0x10]
004c3bb0:  mov      x1, xzr
004c3bb4:  str      x8, [sp, #0xd0]
004c3bb8:  stp      xzr, xzr, [x8]
004c3bbc:  b        #0x4c3bf8
004c3bc0:  movi     v0.2d, #0000000000000000
004c3bc4:  add      x8, sp, #0xb0
004c3bc8:  add      x8, x8, #0x28
004c3bcc:  str      xzr, [sp, #0xe0]
004c3bd0:  strb     wzr, [sp, #0xe8]
004c3bd4:  stp      q0, q0, [sp, #0xc0]
004c3bd8:  ldr      x1, [sp, #0xd8]
004c3bdc:  str      q0, [sp, #0xb0]
004c3be0:  str      x8, [sp, #0xd0]
004c3be4:  b        #0x4c3c00
004c3be8:  ldr      x1, [sp, #0xd8]
004c3bec:  b        #0x4c3c00
004c3bf0:  ldr      x8, [sp]
004c3bf4:  str      x8, [sp, #0x180]
004c3bf8:  mov      w8, #1
004c3bfc:  strb     w8, [sp, #0x198]
004c3c00:  add      x8, sp, #0xb0
004c3c04:  add      x0, x8, #0x20
004c3c08:  bl       #0x441e1c
004c3c0c:  ldrsb    w8, [sp, #0xcf]
004c3c10:  tbz      w8, #0x1f, #0x4c3c1c
004c3c14:  ldr      x0, [sp, #0xb8]
004c3c18:  bl       #0xd13dd0
004c3c1c:  adrp     x1, #0x1e1000
004c3c20:  add      x1, x1, #0xa33
004c3c24:  add      x0, sp, #0x370
004c3c28:  bl       #0x4e1714
004c3c2c:  tbz      w0, #0, #0x4c3ca4
004c3c30:  adrp     x1, #0x1e1000
004c3c34:  add      x1, x1, #0xa33
004c3c38:  add      x0, sp, #0x370
004c3c3c:  bl       #0x4e12e0
004c3c40:  add      x8, sp, #0xb0
004c3c44:  bl       #0x4ca0f4
004c3c48:  ldrb     w8, [sp, #0xc8]
004c3c4c:  cbz      w8, #0x4c3cbc
004c3c50:  ldr      x19, [sp, #0x140]
004c3c54:  cbz      x19, #0x4c3d2c
004c3c58:  ldr      x8, [sp, #0x148]
004c3c5c:  mov      x0, x19
004c3c60:  cmp      x8, x19
004c3c64:  b.eq     #0x4c3d24
004c3c68:  sub      x23, x8, #0x18
004c3c6c:  b        #0x4c3c84
004c3c70:  sub      x8, x23, #0x38
004c3c74:  sub      x9, x23, #0x20
004c3c78:  mov      x23, x8
004c3c7c:  cmp      x9, x19
004c3c80:  b.eq     #0x4c3d20
004c3c84:  ldr      x1, [x23, #8]
004c3c88:  mov      x0, x23
004c3c8c:  bl       #0x441e1c
004c3c90:  ldursb   w8, [x23, #-1]
004c3c94:  tbz      w8, #0x1f, #0x4c3c70
004c3c98:  ldur     x0, [x23, #-0x18]
004c3c9c:  bl       #0xd13dd0
004c3ca0:  b        #0x4c3c70
004c3ca4:  mov      x19, xzr
004c3ca8:  stp      xzr, xzr, [sp, #0xb0]
004c3cac:  strb     wzr, [sp, #0xc8]
004c3cb0:  str      xzr, [sp, #0xc0]
004c3cb4:  cbnz     x19, #0x4c3cc4
004c3cb8:  b        #0x4c3d44
004c3cbc:  ldr      x19, [sp, #0xb0]
004c3cc0:  cbz      x19, #0x4c3d44
004c3cc4:  ldr      x8, [sp, #0xb8]
004c3cc8:  mov      x0, x19
004c3ccc:  cmp      x8, x19
004c3cd0:  b.eq     #0x4c3d14
004c3cd4:  sub      x23, x8, #0x18
004c3cd8:  b        #0x4c3cf0
004c3cdc:  sub      x8, x23, #0x38
004c3ce0:  sub      x9, x23, #0x20
004c3ce4:  mov      x23, x8
004c3ce8:  cmp      x9, x19
004c3cec:  b.eq     #0x4c3d10
004c3cf0:  ldr      x1, [x23, #8]
004c3cf4:  mov      x0, x23
004c3cf8:  bl       #0x441e1c
004c3cfc:  ldursb   w8, [x23, #-1]
004c3d00:  tbz      w8, #0x1f, #0x4c3cdc
004c3d04:  ldur     x0, [x23, #-0x18]
004c3d08:  bl       #0xd13dd0
004c3d0c:  b        #0x4c3cdc
004c3d10:  ldr      x0, [sp, #0xb0]
004c3d14:  str      x19, [sp, #0xb8]
004c3d18:  bl       #0xd13dd0
004c3d1c:  b        #0x4c3d44
004c3d20:  ldr      x0, [sp, #0x140]
004c3d24:  str      x19, [sp, #0x148]
004c3d28:  bl       #0xd13dd0
004c3d2c:  ldr      q0, [sp, #0xb0]
004c3d30:  mov      w9, #1
004c3d34:  ldr      x8, [sp, #0xc0]
004c3d38:  str      q0, [x24]
004c3d3c:  str      x8, [sp, #0x150]
004c3d40:  strb     w9, [sp, #0x158]
004c3d44:  adrp     x1, #0x19f000
004c3d48:  add      x1, x1, #0xfce
004c3d4c:  add      x0, sp, #0x370
004c3d50:  bl       #0x4e1714
004c3d54:  tbz      w0, #0, #0x4c3dcc
004c3d58:  adrp     x1, #0x19f000
004c3d5c:  add      x1, x1, #0xfce
004c3d60:  add      x0, sp, #0x370
004c3d64:  bl       #0x4e12e0
004c3d68:  add      x8, sp, #0xb0
004c3d6c:  bl       #0x4caa3c
004c3d70:  ldrb     w8, [sp, #0xe8]
004c3d74:  cbz      w8, #0x4c3ddc
004c3d78:  add      x9, sp, #0x140
004c3d7c:  ldrb     w8, [sp, #0xb0]
004c3d80:  ldrsb    w10, [sp, #0x1df]
004c3d84:  add      x19, x9, #0x88
004c3d88:  strb     w8, [sp, #0x1c0]
004c3d8c:  tbz      w10, #0x1f, #0x4c3d98
004c3d90:  ldr      x0, [sp, #0x1c8]
004c3d94:  bl       #0xd13dd0
004c3d98:  ldr      x8, [sp, #0xc8]
004c3d9c:  strb     wzr, [sp, #0xcf]
004c3da0:  ldur     q0, [sp, #0xb8]
004c3da4:  strb     wzr, [sp, #0xb8]
004c3da8:  ldr      q1, [sp, #0xd0]
004c3dac:  ldrh     w9, [sp, #0xe0]
004c3db0:  str      x8, [x19, #0x10]
004c3db4:  mov      w8, #1
004c3db8:  str      q0, [x19]
004c3dbc:  str      q1, [x24, #0xa0]
004c3dc0:  strh     w9, [sp, #0x1f0]
004c3dc4:  strb     w8, [sp, #0x1f8]
004c3dc8:  b        #0x4c3dec
004c3dcc:  movi     v0.2d, #0000000000000000
004c3dd0:  stur     q0, [sp, #0xd9]
004c3dd4:  stp      q0, q0, [sp, #0xc0]
004c3dd8:  str      q0, [sp, #0xb0]
004c3ddc:  ldrsb    w8, [sp, #0xcf]
004c3de0:  tbz      w8, #0x1f, #0x4c3dec
004c3de4:  ldr      x0, [sp, #0xb8]
004c3de8:  bl       #0xd13dd0
004c3dec:  adrp     x1, #0x1a3000
004c3df0:  add      x1, x1, #0x21e
004c3df4:  add      x0, sp, #0x370
004c3df8:  bl       #0x4e1714
004c3dfc:  tbz      w0, #0, #0x4c3e74
004c3e00:  adrp     x1, #0x1a3000
004c3e04:  add      x1, x1, #0x21e
004c3e08:  add      x0, sp, #0x370
004c3e0c:  bl       #0x4e12e0
004c3e10:  add      x8, sp, #0xb0
004c3e14:  bl       #0x4cac2c
004c3e18:  ldrb     w8, [sp, #0xc8]
004c3e1c:  cbz      w8, #0x4c3e8c
004c3e20:  ldr      x19, [sp, #0x1a0]
004c3e24:  cbz      x19, #0x4c3efc
004c3e28:  ldr      x8, [sp, #0x1a8]
004c3e2c:  mov      x0, x19
004c3e30:  cmp      x8, x19
004c3e34:  b.eq     #0x4c3ef4
004c3e38:  sub      x23, x8, #0x18
004c3e3c:  b        #0x4c3e54
004c3e40:  sub      x8, x23, #0x40
004c3e44:  sub      x9, x23, #0x28
004c3e48:  mov      x23, x8
004c3e4c:  cmp      x9, x19
004c3e50:  b.eq     #0x4c3ef0
004c3e54:  ldr      x1, [x23, #8]
004c3e58:  mov      x0, x23
004c3e5c:  bl       #0x441e1c
004c3e60:  ldursb   w8, [x23, #-9]
004c3e64:  tbz      w8, #0x1f, #0x4c3e40
004c3e68:  ldur     x0, [x23, #-0x20]
004c3e6c:  bl       #0xd13dd0
004c3e70:  b        #0x4c3e40
004c3e74:  mov      x19, xzr
004c3e78:  stp      xzr, xzr, [sp, #0xb0]
004c3e7c:  strb     wzr, [sp, #0xc8]
004c3e80:  str      xzr, [sp, #0xc0]
004c3e84:  cbnz     x19, #0x4c3e94
004c3e88:  b        #0x4c3f14
004c3e8c:  ldr      x19, [sp, #0xb0]
004c3e90:  cbz      x19, #0x4c3f14
004c3e94:  ldr      x8, [sp, #0xb8]
004c3e98:  mov      x0, x19
004c3e9c:  cmp      x8, x19
004c3ea0:  b.eq     #0x4c3ee4
004c3ea4:  sub      x23, x8, #0x18
004c3ea8:  b        #0x4c3ec0
004c3eac:  sub      x8, x23, #0x40
004c3eb0:  sub      x9, x23, #0x28
004c3eb4:  mov      x23, x8
004c3eb8:  cmp      x9, x19
004c3ebc:  b.eq     #0x4c3ee0
004c3ec0:  ldr      x1, [x23, #8]
004c3ec4:  mov      x0, x23
004c3ec8:  bl       #0x441e1c
004c3ecc:  ldursb   w8, [x23, #-9]
004c3ed0:  tbz      w8, #0x1f, #0x4c3eac
004c3ed4:  ldur     x0, [x23, #-0x20]
004c3ed8:  bl       #0xd13dd0
004c3edc:  b        #0x4c3eac
004c3ee0:  ldr      x0, [sp, #0xb0]
004c3ee4:  str      x19, [sp, #0xb8]
004c3ee8:  bl       #0xd13dd0
004c3eec:  b        #0x4c3f14
004c3ef0:  ldr      x0, [sp, #0x1a0]
004c3ef4:  str      x19, [sp, #0x1a8]
004c3ef8:  bl       #0xd13dd0
004c3efc:  ldr      q0, [sp, #0xb0]
004c3f00:  mov      w9, #1
004c3f04:  ldr      x8, [sp, #0xc0]
004c3f08:  str      q0, [x24, #0x60]
004c3f0c:  str      x8, [sp, #0x1b0]
004c3f10:  strb     w9, [sp, #0x1b8]
004c3f14:  adrp     x1, #0x1b6000
004c3f18:  add      x1, x1, #0x8a5
004c3f1c:  add      x0, sp, #0x370
004c3f20:  bl       #0x4e1714
004c3f24:  tbz      w0, #0, #0x4c3f58
004c3f28:  adrp     x1, #0x1b6000
004c3f2c:  add      x1, x1, #0x8a5
004c3f30:  add      x0, sp, #0x370
004c3f34:  bl       #0x4e12e0
004c3f38:  add      x8, sp, #0xb0
004c3f3c:  bl       #0x4c18d0
004c3f40:  ldrb     w8, [sp, #0xb1]
004c3f44:  cbz      w8, #0x4c3f58
004c3f48:  ldrb     w8, [sp, #0xb0]
004c3f4c:  mov      w9, #1
004c3f50:  strb     w8, [sp, #0x200]
004c3f54:  strb     w9, [sp, #0x201]
004c3f58:  adrp     x1, #0x19c000
004c3f5c:  add      x1, x1, #0xe9e
004c3f60:  add      x0, sp, #0x370
004c3f64:  bl       #0x4e1714
004c3f68:  tbz      w0, #0, #0x4c3f9c
004c3f6c:  adrp     x1, #0x19c000
004c3f70:  add      x1, x1, #0xe9e
004c3f74:  add      x0, sp, #0x370
004c3f78:  bl       #0x4e12e0
004c3f7c:  add      x8, sp, #0xb0
004c3f80:  bl       #0x4c18d0
004c3f84:  ldrb     w8, [sp, #0xb1]
004c3f88:  cbz      w8, #0x4c3f9c
004c3f8c:  ldrb     w8, [sp, #0xb0]
004c3f90:  mov      w9, #1
004c3f94:  strb     w8, [sp, #0x202]
004c3f98:  strb     w9, [sp, #0x203]
004c3f9c:  adrp     x1, #0x197000
004c3fa0:  add      x1, x1, #0x8e8
004c3fa4:  add      x0, sp, #0x370
004c3fa8:  bl       #0x4e1714
004c3fac:  tbz      w0, #0, #0x4c4010
004c3fb0:  adrp     x1, #0x197000
004c3fb4:  add      x1, x1, #0x8e8
004c3fb8:  add      x0, sp, #0x370
004c3fbc:  bl       #0x4e12e0
004c3fc0:  add      x8, sp, #0xb0
004c3fc4:  bl       #0x4cb584
004c3fc8:  ldrb     w8, [sp, #0xc8]
004c3fcc:  cbz      w8, #0x4c4028
004c3fd0:  ldr      x19, [sp, #0x350]
004c3fd4:  cbz      x19, #0x4c4084
004c3fd8:  ldr      x8, [sp, #0x358]
004c3fdc:  mov      x0, x19
004c3fe0:  cmp      x8, x19
004c3fe4:  b.ne     #0x4c3ff8
004c3fe8:  b        #0x4c407c
004c3fec:  mov      x8, x20
004c3ff0:  cmp      x20, x19
004c3ff4:  b.eq     #0x4c4078
004c3ff8:  ldursb   w9, [x8, #-0x29]
004c3ffc:  sub      x20, x8, #0x48
004c4000:  tbz      w9, #0x1f, #0x4c3fec
004c4004:  ldur     x0, [x8, #-0x40]
004c4008:  bl       #0xd13dd0
004c400c:  b        #0x4c3fec
004c4010:  mov      x19, xzr
004c4014:  stp      xzr, xzr, [sp, #0xb0]
004c4018:  strb     wzr, [sp, #0xc8]
004c401c:  str      xzr, [sp, #0xc0]
004c4020:  cbnz     x19, #0x4c4030
004c4024:  b        #0x4c40a0
004c4028:  ldr      x19, [sp, #0xb0]
004c402c:  cbz      x19, #0x4c40a0
004c4030:  ldr      x8, [sp, #0xb8]
004c4034:  mov      x0, x19
004c4038:  cmp      x8, x19
004c403c:  b.ne     #0x4c4050
004c4040:  b        #0x4c406c
004c4044:  mov      x8, x20
004c4048:  cmp      x20, x19
004c404c:  b.eq     #0x4c4068
004c4050:  ldursb   w9, [x8, #-0x29]
004c4054:  sub      x20, x8, #0x48
004c4058:  tbz      w9, #0x1f, #0x4c4044
004c405c:  ldur     x0, [x8, #-0x40]
004c4060:  bl       #0xd13dd0
004c4064:  b        #0x4c4044
004c4068:  ldr      x0, [sp, #0xb0]
004c406c:  str      x19, [sp, #0xb8]
004c4070:  bl       #0xd13dd0
004c4074:  b        #0x4c40a0
004c4078:  ldr      x0, [sp, #0x350]
004c407c:  str      x19, [sp, #0x358]
004c4080:  bl       #0xd13dd0
004c4084:  ldr      q0, [sp, #0xb0]
004c4088:  mov      w9, #1
004c408c:  ldr      x8, [sp, #0xc0]
004c4090:  ldr      x10, [sp, #0x10]
004c4094:  strb     w9, [sp, #0x368]
004c4098:  str      x8, [sp, #0x360]
004c409c:  str      q0, [x10]
004c40a0:  adrp     x1, #0x1a3000
004c40a4:  add      x1, x1, #0x22c
004c40a8:  add      x0, sp, #0x370
004c40ac:  bl       #0x4e1714
004c40b0:  tbz      w0, #0, #0x4c40e4
004c40b4:  adrp     x1, #0x1a3000
004c40b8:  add      x1, x1, #0x22c
004c40bc:  add      x0, sp, #0x370
004c40c0:  bl       #0x4e12e0
004c40c4:  add      x8, sp, #0xb0
004c40c8:  bl       #0x4c1a90
004c40cc:  ldrb     w28, [sp, #0xb4]
004c40d0:  tst      w28, #0xff
004c40d4:  b.eq     #0x4c40e8
004c40d8:  ldr      w8, [sp, #0xb0]
004c40dc:  str      w8, [sp, #0x10]
004c40e0:  b        #0x4c40ec
004c40e4:  mov      w28, wzr
004c40e8:  str      wzr, [sp, #0x10]
004c40ec:  adrp     x1, #0x1db000
004c40f0:  add      x1, x1, #0x7cd
004c40f4:  add      x0, sp, #0x370
004c40f8:  bl       #0x4e1714
004c40fc:  str      x25, [sp, #0x18]
004c4100:  tbz      w0, #0, #0x4c4130
004c4104:  adrp     x1, #0x1db000
004c4108:  add      x1, x1, #0x7cd
004c410c:  add      x0, sp, #0x370
004c4110:  bl       #0x4e12e0
004c4114:  add      x8, sp, #0xb0
004c4118:  bl       #0x4c1a90
004c411c:  ldrb     w20, [sp, #0xb4]
004c4120:  tst      w20, #0xff
004c4124:  b.eq     #0x4c4134
004c4128:  ldr      w25, [sp, #0xb0]
004c412c:  b        #0x4c4138
004c4130:  mov      w20, wzr
004c4134:  mov      w25, wzr
004c4138:  adrp     x1, #0x1e1000
004c413c:  add      x1, x1, #0xa41
004c4140:  add      x0, sp, #0x370
004c4144:  bl       #0x4e1714
004c4148:  tbz      w0, #0, #0x4c4178
004c414c:  adrp     x1, #0x1e1000
004c4150:  add      x1, x1, #0xa41
004c4154:  add      x0, sp, #0x370
004c4158:  bl       #0x4e12e0
004c415c:  add      x8, sp, #0xb0
004c4160:  bl       #0x4c1a90
004c4164:  ldrb     w19, [sp, #0xb4]
004c4168:  tst      w19, #0xff
004c416c:  b.eq     #0x4c417c
004c4170:  ldr      w24, [sp, #0xb0]
004c4174:  b        #0x4c4180
004c4178:  mov      w19, wzr
004c417c:  mov      w24, wzr
004c4180:  adrp     x1, #0x1d0000
004c4184:  add      x1, x1, #0x547
004c4188:  add      x0, sp, #0x370
004c418c:  bl       #0x4e1714
004c4190:  tbz      w0, #0, #0x4c41c4
004c4194:  adrp     x1, #0x1d0000
004c4198:  add      x1, x1, #0x547
004c419c:  add      x0, sp, #0x370
004c41a0:  bl       #0x4e12e0
004c41a4:  add      x8, sp, #0xb0
004c41a8:  bl       #0x4c1a90
004c41ac:  ldrb     w8, [sp, #0xb4]
004c41b0:  cbz      w8, #0x4c41c4
004c41b4:  ldr      w8, [sp, #0xb0]
004c41b8:  mov      w9, #1
004c41bc:  stur     w8, [x29, #-0x38]
004c41c0:  sturb    w9, [x29, #-0x34]
004c41c4:  ldr      w8, [sp, #0x40]
004c41c8:  strb     w27, [sp, #0x229]
004c41cc:  add      x27, sp, #0x208
004c41d0:  strb     w22, [sp, #0x22b]
004c41d4:  str      d9, [sp, #0x230]
004c41d8:  strb     w8, [sp, #0x228]
004c41dc:  ldr      w8, [sp, #0x38]
004c41e0:  strb     w26, [sp, #0x238]
004c41e4:  strb     w21, [sp, #0x29c]
004c41e8:  strb     w8, [sp, #0x22a]
004c41ec:  mov      w8, #1
004c41f0:  strh     wzr, [sp, #0x2a0]
004c41f4:  strb     w8, [sp, #0x240]
004c41f8:  ldr      w8, [sp, #0x84]
004c41fc:  str      w8, [sp, #0x248]
004c4200:  ldr      w8, [sp, #0x54]
004c4204:  strb     w8, [sp, #0x24c]
004c4208:  ldr      w8, [sp, #0x88]
004c420c:  str      w8, [sp, #0x250]
004c4210:  ldr      w8, [sp, #0x74]
004c4214:  strb     w8, [sp, #0x254]
004c4218:  ldr      w8, [sp, #0x8c]
004c421c:  str      w8, [sp, #0x258]
004c4220:  ldr      w8, [sp, #0x7c]
004c4224:  strb     w8, [sp, #0x25c]
004c4228:  ldr      w8, [sp, #0x80]
004c422c:  str      w8, [sp, #0x260]
004c4230:  ldr      w8, [sp, #0x6c]
004c4234:  strb     w8, [sp, #0x264]
004c4238:  ldr      w8, [sp, #0x78]
004c423c:  str      w8, [sp, #0x268]
004c4240:  ldr      w8, [sp, #0x64]
004c4244:  strb     w8, [sp, #0x26c]
004c4248:  ldr      w8, [sp, #0x70]
004c424c:  str      w8, [sp, #0x270]
004c4250:  ldr      w8, [sp, #0x5c]
004c4254:  strb     w8, [sp, #0x274]
004c4258:  ldr      w8, [sp, #0x68]
004c425c:  str      w8, [sp, #0x278]
004c4260:  ldp      w9, w8, [sp, #0x48]
004c4264:  strb     w8, [sp, #0x27c]
004c4268:  ldr      w8, [sp, #0x60]
004c426c:  str      w9, [sp, #0x298]
004c4270:  str      w8, [sp, #0x280]
004c4274:  ldr      w8, [sp, #0x44]
004c4278:  strb     w8, [sp, #0x284]
004c427c:  ldr      w8, [sp, #0x58]
004c4280:  str      w8, [sp, #0x288]
004c4284:  ldr      w8, [sp, #0x3c]
004c4288:  strb     w8, [sp, #0x28c]
004c428c:  ldr      w8, [sp, #0x50]
004c4290:  str      w8, [sp, #0x290]
004c4294:  ldr      w8, [sp, #0x30]
004c4298:  strb     w8, [sp, #0x294]
004c429c:  ldrsb    w8, [sp, #0x2bf]
004c42a0:  tbz      w8, #0x1f, #0x4c42ac
004c42a4:  ldr      x0, [sp, #0x2a8]
004c42a8:  bl       #0xd13dd0
004c42ac:  add      x22, sp, #0x458
004c42b0:  ldr      x8, [sp, #0x478]
004c42b4:  ldrsb    w10, [sp, #0x2df]
004c42b8:  str      xzr, [sp, #0x2a8]
004c42bc:  sturh    wzr, [x27, #0xb7]
004c42c0:  ldur     x9, [x22, #0x27]
004c42c4:  str      x8, [sp, #0x2b0]
004c42c8:  stur     x9, [x27, #0xaf]
004c42cc:  tbz      w10, #0x1f, #0x4c42d8
004c42d0:  ldr      x0, [sp, #0x2c8]
004c42d4:  bl       #0xd13dd0
004c42d8:  add      x8, sp, #0x488
004c42dc:  add      x10, sp, #0x208
004c42e0:  add      x23, x8, #0x1b0
004c42e4:  ldr      x8, [sp, #0x468]
004c42e8:  add      x21, sp, #0x458
004c42ec:  ldur     x9, [x22, #0x17]
004c42f0:  ldr      x22, [sp, #0x2e8]
004c42f4:  add      x26, x10, #0xe0
004c42f8:  str      xzr, [sp, #0x2c8]
004c42fc:  str      x8, [sp, #0x2d0]
004c4300:  stur     x9, [x27, #0xcf]
004c4304:  sturh    wzr, [x27, #0xd7]
004c4308:  cbz      x22, #0x4c4350
004c430c:  ldr      x8, [sp, #0x2f0]
004c4310:  mov      x0, x22
004c4314:  cmp      x8, x22
004c4318:  b.ne     #0x4c432c
004c431c:  b        #0x4c4348
004c4320:  mov      x8, x27
004c4324:  cmp      x27, x22
004c4328:  b.eq     #0x4c4344
004c432c:  ldursb   w9, [x8, #-1]
004c4330:  sub      x27, x8, #0x18
004c4334:  tbz      w9, #0x1f, #0x4c4320
004c4338:  ldur     x0, [x8, #-0x18]
004c433c:  bl       #0xd13dd0
004c4340:  b        #0x4c4320
004c4344:  ldr      x0, [sp, #0x2e8]
004c4348:  str      x22, [sp, #0x2f0]
004c434c:  bl       #0xd13dd0
004c4350:  sub      x9, x29, #0xe0
004c4354:  ldrsb    w8, [sp, #0x327]
004c4358:  orr      x27, x9, #4
004c435c:  strh     wzr, [sp, #0x308]
004c4360:  stp      xzr, xzr, [x26, #8]
004c4364:  str      xzr, [x26]
004c4368:  strb     wzr, [x26, #0x18]
004c436c:  tbz      w8, #0x1f, #0x4c4378
004c4370:  ldr      x0, [sp, #0x310]
004c4374:  bl       #0xd13dd0
004c4378:  add      x8, sp, #0x208
004c437c:  ldur     x9, [x21, #7]
004c4380:  add      x10, x8, #0x117
004c4384:  add      x8, x8, #0x11f
004c4388:  ldr      x11, [sp, #0x458]
004c438c:  mov      w22, #1
004c4390:  add      x1, sp, #0x208
004c4394:  mov      x0, x23
004c4398:  strh     wzr, [x8]
004c439c:  ldr      w8, [sp, #0x28]
004c43a0:  str      x9, [x10]
004c43a4:  str      xzr, [sp, #0x310]
004c43a8:  str      w8, [sp, #0x340]
004c43ac:  ldr      w8, [sp, #0x2c]
004c43b0:  str      x11, [sp, #0x318]
004c43b4:  strh     wzr, [sp, #0x330]
004c43b8:  strb     w8, [sp, #0x344]
004c43bc:  ldr      w8, [sp, #0x20]
004c43c0:  strb     w22, [sp, #0x338]
004c43c4:  strh     wzr, [sp, #0x34a]
004c43c8:  strb     w8, [sp, #0x348]
004c43cc:  ldr      w8, [sp, #0x24]
004c43d0:  strb     w22, [sp, #0x34c]
004c43d4:  strb     w8, [sp, #0x349]
004c43d8:  bl       #0x48adb8
004c43dc:  ldr      w8, [sp, #0x10]
004c43e0:  add      x10, sp, #0x47d
004c43e4:  ldr      x9, [x27]
004c43e8:  strb     w19, [sp, #0x7bc]
004c43ec:  ldrsb    w11, [sp, #0x5a7]
004c43f0:  strb     w22, [sp, #0x7a0]
004c43f4:  str      w8, [sp, #0x7a8]
004c43f8:  ldurh    w8, [x29, #-0xe0]
004c43fc:  stur     x9, [x10, #0xff]
004c4400:  add      x10, sp, #0x488
004c4404:  ldurb    w9, [x29, #-0xd0]
004c4408:  add      x19, x10, #0x108
004c440c:  strh     w8, [sp, #0x578]
004c4410:  ldr      w8, [x27, #8]
004c4414:  strb     w28, [sp, #0x7ac]
004c4418:  str      w25, [sp, #0x7b0]
004c441c:  strb     w20, [sp, #0x7b4]
004c4420:  str      w24, [sp, #0x7b8]
004c4424:  strb     w22, [sp, #0x7c0]
004c4428:  sturb    wzr, [x29, #-0xdf]
004c442c:  str      w8, [sp, #0x584]
004c4430:  strb     w9, [sp, #0x588]
004c4434:  sturb    wzr, [x29, #-0xd0]
004c4438:  tbz      w11, #0x1f, #0x4c4444
004c443c:  ldr      x0, [sp, #0x590]
004c4440:  bl       #0xd13dd0
004c4444:  ldr      x8, [sp, #0x18]
004c4448:  adrp     x22, #0x1f1000
004c444c:  add      x22, x22, #0x910
004c4450:  ldr      x0, [sp, #0x5a8]
004c4454:  ldr      x24, [sp, #0xa0]
004c4458:  nop      
004c445c:  adr      x25, #0x48870c
004c4460:  ldr      q0, [x8]
004c4464:  ldr      x8, [x8, #0x10]
004c4468:  sub      x26, x29, #0xe0
004c446c:  sturb    wzr, [x29, #-0xb1]
004c4470:  str      q0, [x19]
004c4474:  str      x8, [x19, #0x10]
004c4478:  sturb    wzr, [x29, #-0xc8]
004c447c:  cbz      x0, #0x4c4488
004c4480:  str      x0, [sp, #0x5b0]
004c4484:  bl       #0xd13dd0
004c4488:  sub      x8, x29, #0xe0
004c448c:  add      x9, sp, #0x4a9
004c4490:  str      x25, [sp, #0x5d8]
004c4494:  add      x19, sp, #0x488
004c4498:  add      x21, x26, #0x50
004c449c:  add      x20, x19, #0x140
004c44a0:  ldr      q0, [x8, #0x30]
004c44a4:  stur     xzr, [x29, #-0xb0]
004c44a8:  ldur     x8, [x29, #-0xa0]
004c44ac:  stp      xzr, xzr, [x29, #-0xa8]
004c44b0:  stur     q0, [x9, #0xff]
004c44b4:  ldurb    w9, [x29, #-0x98]
004c44b8:  str      x8, [sp, #0x5b8]
004c44bc:  ldr      x8, [sp, #0x5e0]
004c44c0:  sturb    wzr, [x29, #-0x98]
004c44c4:  strb     w9, [sp, #0x5c0]
004c44c8:  str      x22, [sp, #0x5e0]
004c44cc:  ldr      x8, [x8, #8]
004c44d0:  cbz      x8, #0x4c44dc
004c44d4:  ldr      x0, [sp, #0x5c8]
004c44d8:  blr      x8
004c44dc:  ldp      x8, x9, [x29, #-0x80]
004c44e0:  stp      x25, x22, [x29, #-0x80]
004c44e4:  add      x19, x19, #0x168
004c44e8:  ldr      q0, [x21]
004c44ec:  nop      
004c44f0:  adr      x21, #0x488718
004c44f4:  str      x8, [sp, #0x5d8]
004c44f8:  ldurb    w8, [x29, #-0x70]
004c44fc:  str      q0, [x20]
004c4500:  add      x20, x26, #0x78
004c4504:  str      x9, [sp, #0x5e0]
004c4508:  strb     w8, [sp, #0x5e8]
004c450c:  ldr      x8, [sp, #0x608]
004c4510:  sturb    wzr, [x29, #-0x70]
004c4514:  str      x22, [sp, #0x608]
004c4518:  str      x21, [sp, #0x600]
004c451c:  ldr      x8, [x8, #8]
004c4520:  cbz      x8, #0x4c452c
004c4524:  ldr      x0, [sp, #0x5f0]
004c4528:  blr      x8
004c452c:  ldp      x8, x9, [x29, #-0x58]
004c4530:  add      x1, sp, #0x140
004c4534:  stp      x21, x22, [x29, #-0x58]
004c4538:  ldr      q0, [x20]
004c453c:  ldr      x20, [sp, #0x90]
004c4540:  str      x8, [sp, #0x600]
004c4544:  ldurb    w8, [x29, #-0x48]
004c4548:  str      x9, [sp, #0x608]
004c454c:  ldur     w9, [x29, #-0x40]
004c4550:  str      q0, [x19]
004c4554:  mov      w19, #1
004c4558:  strb     w8, [sp, #0x610]
004c455c:  ldurb    w8, [x29, #-0x3c]
004c4560:  str      w9, [sp, #0x618]
004c4564:  ldur     w9, [x29, #-0x38]
004c4568:  mov      x0, x20
004c456c:  sturb    wzr, [x29, #-0x48]
004c4570:  strb     w8, [sp, #0x61c]
004c4574:  ldurb    w8, [x29, #-0x34]
004c4578:  str      w9, [sp, #0x620]
004c457c:  ldur     w9, [x29, #-0x30]
004c4580:  sturb    wzr, [x29, #-0x3c]
004c4584:  strb     w8, [sp, #0x624]
004c4588:  ldurb    w8, [x29, #-0x2c]
004c458c:  sturb    wzr, [x29, #-0x34]
004c4590:  str      w9, [sp, #0x628]
004c4594:  strb     w8, [sp, #0x62c]
004c4598:  sturb    wzr, [x29, #-0x2c]
004c459c:  strb     w19, [sp, #0x630]
004c45a0:  bl       #0x48af58
004c45a4:  ldr      w8, [sp, #0x34]
004c45a8:  add      x1, sp, #0x488
004c45ac:  ldr      x0, [sp, #0x98]
004c45b0:  strb     w19, [sp, #0x890]
004c45b4:  str      s8, [sp, #0x8b0]
004c45b8:  strb     w8, [sp, #0x8b4]
004c45bc:  strb     w19, [sp, #0x8b8]
004c45c0:  bl       #0xd14340
004c45c4:  add      x0, sp, #0x140
004c45c8:  bl       #0x4379f4
004c45cc:  mov      x0, x20
004c45d0:  bl       #0x4379f4
004c45d4:  mov      x0, x23
004c45d8:  bl       #0x43ba38
004c45dc:  ldr      x8, [sp, #0x608]
004c45e0:  ldr      x8, [x8, #8]
004c45e4:  cbz      x8, #0x4c45f0
004c45e8:  ldr      x0, [sp, #0x5f0]
004c45ec:  blr      x8
004c45f0:  ldr      x8, [sp, #0x5e0]
004c45f4:  ldr      x8, [x8, #8]
004c45f8:  cbz      x8, #0x4c4604
004c45fc:  ldr      x0, [sp, #0x5c8]
004c4600:  blr      x8
004c4604:  ldr      x0, [sp, #0x5a8]
004c4608:  cbz      x0, #0x4c4614
004c460c:  str      x0, [sp, #0x5b0]
004c4610:  bl       #0xd13dd0
004c4614:  ldrsb    w8, [sp, #0x5a7]
004c4618:  tbz      w8, #0x1f, #0x4c4624
004c461c:  ldr      x0, [sp, #0x590]
004c4620:  bl       #0xd13dd0
004c4624:  ldr      x8, [sp, #0x4f8]
004c4628:  ldr      x8, [x8, #8]
004c462c:  cbz      x8, #0x4c4638
004c4630:  ldr      x0, [sp, #0x4e0]
004c4634:  blr      x8
004c4638:  ldr      x8, [sp, #0x4c8]
004c463c:  ldr      x8, [x8, #8]
004c4640:  cbz      x8, #0x4c464c
004c4644:  ldr      x0, [sp, #0x4b0]
004c4648:  blr      x8
004c464c:  ldr      x8, [sp, #0x4a0]
004c4650:  ldr      x8, [x8, #8]
004c4654:  cbz      x8, #0x4c4660
004c4658:  ldr      x0, [sp, #0x488]
004c465c:  blr      x8
004c4660:  ldur     x8, [x29, #-0x50]
004c4664:  ldr      x8, [x8, #8]
004c4668:  cbz      x8, #0x4c4674
004c466c:  ldur     x0, [x29, #-0x68]
004c4670:  blr      x8
004c4674:  ldur     x8, [x29, #-0x78]
004c4678:  ldr      x8, [x8, #8]
004c467c:  cbz      x8, #0x4c4688
004c4680:  ldur     x0, [x29, #-0x90]
004c4684:  blr      x8
004c4688:  ldur     x0, [x29, #-0xb0]
004c468c:  cbz      x0, #0x4c4698
004c4690:  stur     x0, [x29, #-0xa8]
004c4694:  bl       #0xd13dd0
004c4698:  ldursb   w8, [x29, #-0xb1]
004c469c:  tbz      w8, #0x1f, #0x4c46a8
004c46a0:  ldur     x0, [x29, #-0xc8]
004c46a4:  bl       #0xd13dd0
004c46a8:  add      x0, sp, #0x208
004c46ac:  bl       #0x43ba38
004c46b0:  add      x0, sp, #0x370
004c46b4:  bl       #0x4df880
004c46b8:  ldrsb    w8, [sp, #0x44f]
004c46bc:  tbnz     w8, #0x1f, #0x4c4780
004c46c0:  ldrsb    w8, [sp, #0x40f]
004c46c4:  tbnz     w8, #0x1f, #0x4c4790
004c46c8:  ldr      x19, [sp, #0x3d0]
004c46cc:  ldr      x20, [sp, #0x3d8]
004c46d0:  cmp      x20, x19
004c46d4:  b.eq     #0x4c479c
004c46d8:  mov      x8, #0x81c1
004c46dc:  ldr      x9, [sp, #0x3e8]
004c46e0:  movk     x8, #0x703, lsl #16
004c46e4:  ldr      x10, [sp, #0x3f0]
004c46e8:  movk     x8, #0x1c0e, lsl #32
004c46ec:  mov      w13, #0x49
004c46f0:  movk     x8, #0x7038, lsl #48
004c46f4:  mov      w14, #0x38
004c46f8:  add      x10, x10, x9
004c46fc:  umulh    x11, x9, x8
004c4700:  umulh    x8, x10, x8
004c4704:  lsr      x11, x11, #5
004c4708:  lsr      x12, x8, #5
004c470c:  add      x21, x19, x11, lsl #3
004c4710:  msub     x9, x11, x13, x9
004c4714:  msub     x10, x12, x13, x10
004c4718:  ldr      x11, [x19, x12, lsl #3]
004c471c:  ldr      x8, [x21]
004c4720:  nop      
004c4724:  madd     x23, x9, x14, x8
004c4728:  madd     x22, x10, x14, x11
004c472c:  cmp      x23, x22
004c4730:  b.ne     #0x4c4740
004c4734:  b        #0x4c47a0
004c4738:  cmp      x23, x22
004c473c:  b.eq     #0x4c4774
004c4740:  cbz      x23, #0x4c4914
004c4744:  ldrsb    w9, [x23, #0x2f]
004c4748:  tbz      w9, #0x1f, #0x4c4758
004c474c:  ldr      x0, [x23, #0x18]
004c4750:  bl       #0xd13dd0
004c4754:  ldr      x8, [x21]
004c4758:  add      x23, x23, #0x38
004c475c:  sub      x9, x23, x8
004c4760:  cmp      x9, #0xff8
004c4764:  b.ne     #0x4c4738
004c4768:  ldr      x8, [x21, #8]!
004c476c:  mov      x23, x8
004c4770:  b        #0x4c4738
004c4774:  ldr      x20, [sp, #0x3d8]
004c4778:  ldr      x19, [sp, #0x3d0]
004c477c:  b        #0x4c47a0
004c4780:  ldr      x0, [sp, #0x438]
004c4784:  bl       #0xd13dd0
004c4788:  ldrsb    w8, [sp, #0x40f]
004c478c:  tbz      w8, #0x1f, #0x4c46c8
004c4790:  ldr      x0, [sp, #0x3f8]
004c4794:  bl       #0xd13dd0
004c4798:  b        #0x4c46c8
004c479c:  mov      x20, x19
004c47a0:  sub      x8, x20, x19
004c47a4:  str      xzr, [sp, #0x3f0]
004c47a8:  cmp      x8, #0x11
004c47ac:  b.lo     #0x4c47d4
004c47b0:  ldr      x0, [x19]
004c47b4:  bl       #0xd13dd0
004c47b8:  ldr      x8, [sp, #0x3d0]
004c47bc:  ldr      x20, [sp, #0x3d8]
004c47c0:  add      x19, x8, #8
004c47c4:  sub      x8, x20, x19
004c47c8:  cmp      x8, #0x10
004c47cc:  str      x19, [sp, #0x3d0]
004c47d0:  b.hi     #0x4c47b0
004c47d4:  lsr      x8, x8, #3
004c47d8:  cmp      x8, #1
004c47dc:  b.eq     #0x4c47f0
004c47e0:  cmp      x8, #2
004c47e4:  b.ne     #0x4c47f8
004c47e8:  mov      w8, #0x49
004c47ec:  b        #0x4c47f4
004c47f0:  mov      w8, #0x24
004c47f4:  str      x8, [sp, #0x3e8]
004c47f8:  cmp      x19, x20
004c47fc:  b.eq     #0x4c4834
004c4800:  ldr      x0, [x19], #8
004c4804:  bl       #0xd13dd0
004c4808:  cmp      x19, x20
004c480c:  b.ne     #0x4c4800
004c4810:  ldr      x9, [sp, #0x3d0]
004c4814:  ldr      x8, [sp, #0x3d8]
004c4818:  cmp      x8, x9
004c481c:  b.eq     #0x4c4834
004c4820:  sub      x9, x9, x8
004c4824:  add      x9, x9, #7
004c4828:  and      x9, x9, #0xfffffffffffffff8
004c482c:  add      x8, x8, x9
004c4830:  str      x8, [sp, #0x3d8]
004c4834:  ldr      x0, [sp, #0x3c8]
004c4838:  cbz      x0, #0x4c4840
004c483c:  bl       #0xd13dd0
004c4840:  add      x0, sp, #0x398
004c4844:  bl       #0x4491b8
004c4848:  ldr      x19, [sp, #8]
004c484c:  cbz      x19, #0x4c4880
004c4850:  add      x8, x19, #8
004c4854:  ldaxr    x9, [x8]
004c4858:  sub      x10, x9, #1
004c485c:  stlxr    w11, x10, [x8]
004c4860:  cbnz     w11, #0x4c4854
004c4864:  cbnz     x9, #0x4c4880
004c4868:  ldr      x8, [x19]
004c486c:  mov      x0, x19
004c4870:  ldr      x8, [x8, #0x10]
004c4874:  blr      x8
004c4878:  mov      x0, x19
004c487c:  bl       #0x5466cc
004c4880:  add      x0, sp, #0xa8
004c4884:  bl       #0x4c1858
004c4888:  ldr      x8, [x24, #0x28]
004c488c:  ldur     x9, [x29, #-0x28]
004c4890:  cmp      x8, x9
004c4894:  b.ne     #0x4c493c
004c4898:  add      sp, sp, #0x990
004c489c:  ldp      x20, x19, [sp, #0x60]
004c48a0:  ldp      x22, x21, [sp, #0x50]
004c48a4:  ldp      x24, x23, [sp, #0x40]
004c48a8:  ldp      x26, x25, [sp, #0x30]
004c48ac:  ldp      x28, x27, [sp, #0x20]
004c48b0:  ldp      x29, x30, [sp, #0x10]
004c48b4:  ldp      d9, d8, [sp], #0x70
004c48b8:  ret      
004c48bc:  mov      x0, xzr
004c48c0:  stp      xzr, xzr, [sp, #0xf0]
004c48c4:  strb     wzr, [sp, #0x108]
004c48c8:  str      xzr, [sp, #0x100]
004c48cc:  cbz      x0, #0x4c48d8
004c48d0:  str      x0, [sp, #0xf8]
004c48d4:  bl       #0xd13dd0
004c48d8:  add      x1, sp, #0xb0
004c48dc:  mov      x0, x25
004c48e0:  bl       #0x411268
004c48e4:  ldp      x1, x2, [sp, #0xc8]
004c48e8:  sub      x8, x29, #0xe0
004c48ec:  add      x0, x8, #0x30
004c48f0:  bl       #0x48a1f0
004c48f4:  mov      w8, #1
004c48f8:  sturb    w8, [x29, #-0x98]
004c48fc:  ldrsb    w8, [sp, #0x12f]
004c4900:  tbz      w8, #0x1f, #0x4c3ae4
004c4904:  b        #0x4c3adc
004c4908:  ldr      x0, [sp, #0xf0]
004c490c:  cbnz     x0, #0x4c48d0
004c4910:  b        #0x4c48d8
004c4914:  adrp     x0, #0x1de000
004c4918:  add      x0, x0, #0x320
004c491c:  adrp     x1, #0x1d2000
004c4920:  add      x1, x1, #0xc06
004c4924:  adrp     x3, #0x19f000
004c4928:  add      x3, x3, #0x97a
004c492c:  adrp     x4, #0x1e9000
004c4930:  add      x4, x4, #0xdb3
004c4934:  mov      w2, #0x3f
004c4938:  bl       #0xd13df0
004c493c:  bl       #0xd13da0

; ===== 0061106c  FUN_0061106c  (22852 bytes) =====
0061106c:  paciasp  
00611070:  str      d8, [sp, #-0x70]!
00611074:  stp      x29, x30, [sp, #0x10]
00611078:  stp      x28, x27, [sp, #0x20]
0061107c:  stp      x26, x25, [sp, #0x30]
00611080:  stp      x24, x23, [sp, #0x40]
00611084:  stp      x22, x21, [sp, #0x50]
00611088:  stp      x20, x19, [sp, #0x60]
0061108c:  add      x29, sp, #0x10
00611090:  sub      sp, sp, #2, lsl #12
00611094:  sub      sp, sp, #0x150
00611098:  mrs      x9, tpidr_el0
0061109c:  mov      x19, x2
006110a0:  mov      x28, x1
006110a4:  ldr      x8, [x9, #0x28]
006110a8:  mov      x20, x0
006110ac:  add      x26, sp, #0xb0
006110b0:  stur     x8, [x29, #-0x28]
006110b4:  ldrsb    w8, [x0, #0x17]
006110b8:  str      x9, [sp, #0x10]
006110bc:  tbz      w8, #0x1f, #0x611128
006110c0:  ldr      x8, [x20, #8]
006110c4:  cmp      x8, #0x19
006110c8:  b.ne     #0x611128
006110cc:  ldr      x8, [x20]
006110d0:  mov      x11, #0x6557
006110d4:  movk     x11, #0x5262, lsl #16
006110d8:  ldp      x9, x10, [x8]
006110dc:  movk     x11, #0x4354, lsl #32
006110e0:  movk     x11, #0x562e, lsl #48
006110e4:  ldr      x12, [x8, #0x10]
006110e8:  ldrb     w8, [x8, #0x18]
006110ec:  cmp      x9, x11
006110f0:  mov      x9, #0x6469
006110f4:  movk     x9, #0x6f65, lsl #16
006110f8:  movk     x9, #0x532e, lsl #32
006110fc:  movk     x9, #0x7263, lsl #48
00611100:  ccmp     x10, x9, #0, eq
00611104:  mov      x9, #0x6565
00611108:  movk     x9, #0x736e, lsl #16
0061110c:  movk     x9, #0x6168, lsl #32
00611110:  movk     x9, #0x6572, lsl #48
00611114:  ccmp     x12, x9, #0, eq
00611118:  mov      w9, #0x2e
0061111c:  ccmp     w8, w9, #0, eq
00611120:  cset     w27, eq
00611124:  b        #0x61112c
00611128:  mov      w27, wzr
0061112c:  add      x0, sp, #0x138
00611130:  mov      w1, #0xaa
00611134:  mov      w2, #0x2000
00611138:  bl       #0xd13db0
0061113c:  movi     v0.16b, #0xaa
00611140:  add      x0, sp, #0x110
00611144:  add      x1, sp, #0x138
00611148:  mov      w2, #0x2000
0061114c:  str      d0, [sp, #0x120]
00611150:  str      q0, [x26, #0x60]
00611154:  bl       #0x622830
00611158:  ldr      x8, [x20, #0x28]
0061115c:  cmp      x8, #0xc8
00611160:  b.ge     #0x61116c
00611164:  mov      w23, #-1
00611168:  b        #0x611178
0061116c:  ldr      x9, [x20, #0x20]
00611170:  add      x9, x9, x8, lsr #1
00611174:  sdiv     x23, x9, x8
00611178:  ldr      x8, [x20, #0x38]
0061117c:  cmp      x8, #0xc8
00611180:  b.ge     #0x611194
00611184:  mov      w22, #-1
00611188:  cmn      w23, #1
0061118c:  b.ne     #0x6111a8
00611190:  b        #0x6114c8
00611194:  ldr      x9, [x20, #0x30]
00611198:  add      x9, x9, x8, lsr #1
0061119c:  sdiv     x22, x9, x8
006111a0:  cmn      w23, #1
006111a4:  b.eq     #0x6114c8
006111a8:  tbz      w27, #0, #0x6112ec
006111ac:  adrp     x8, #0xd64000
006111b0:  add      x8, x8, #0x2c0
006111b4:  ldar     x24, [x8]
006111b8:  cbnz     x24, #0x61124c
006111bc:  ldrsb    x8, [x20, #0x17]
006111c0:  ldp      x9, x10, [x20]
006111c4:  adrp     x3, #0x1b3000
006111c8:  add      x3, x3, #0xe83
006111cc:  add      x0, sp, #0xd0
006111d0:  cmp      x8, #0
006111d4:  mov      w4, #0x12
006111d8:  add      x21, sp, #0xf0
006111dc:  csel     x1, x9, x20, mi
006111e0:  cmp      w8, #0
006111e4:  csel     x2, x10, x8, mi
006111e8:  add      x8, sp, #0xf0
006111ec:  bl       #0x5ff514
006111f0:  ldrb     w8, [sp, #0x107]
006111f4:  ldp      x10, x11, [sp, #0xf0]
006111f8:  mov      w2, #1
006111fc:  mov      w3, #0x2710
00611200:  mov      w4, #0x32
00611204:  sxtb     w9, w8
00611208:  cmp      w9, #0
0061120c:  csel     x0, x10, x21, mi
00611210:  csel     x1, x11, x8, mi
00611214:  bl       #0x6660d0
00611218:  ldrsb    w8, [sp, #0x107]
0061121c:  mov      x24, x0
00611220:  tbz      w8, #0x1f, #0x611234
00611224:  ldr      x8, [sp, #0x100]
00611228:  ldr      x0, [sp, #0xf0]
0061122c:  and      x1, x8, #0x7fffffffffffffff
00611230:  bl       #0x546bc0
00611234:  adrp     x2, #0xd64000
00611238:  add      x2, x2, #0x2c0
0061123c:  mov      x0, xzr
00611240:  mov      x1, x24
00611244:  bl       #0xd0f5e0
00611248:  cbz      x24, #0x611258
0061124c:  mov      x0, x24
00611250:  mov      w1, w23
00611254:  bl       #0x666568
00611258:  adrp     x8, #0xd64000
0061125c:  add      x8, x8, #0x2d0
00611260:  ldar     x24, [x8]
00611264:  cbnz     x24, #0x611438
00611268:  ldrsb    x8, [x20, #0x17]
0061126c:  ldp      x9, x10, [x20]
00611270:  adrp     x3, #0x1de000
00611274:  add      x3, x3, #0xd1e
00611278:  add      x0, sp, #0xd0
0061127c:  cmp      x8, #0
00611280:  mov      w4, #0x13
00611284:  add      x21, sp, #0xf0
00611288:  csel     x1, x9, x20, mi
0061128c:  cmp      w8, #0
00611290:  csel     x2, x10, x8, mi
00611294:  add      x8, sp, #0xf0
00611298:  bl       #0x5ff514
0061129c:  ldrb     w8, [sp, #0x107]
006112a0:  ldp      x10, x11, [sp, #0xf0]
006112a4:  mov      w2, #1
006112a8:  mov      w3, #0x2710
006112ac:  mov      w4, #0x32
006112b0:  sxtb     w9, w8
006112b4:  cmp      w9, #0
006112b8:  csel     x0, x10, x21, mi
006112bc:  csel     x1, x11, x8, mi
006112c0:  bl       #0x6660d0
006112c4:  ldrsb    w8, [sp, #0x107]
006112c8:  mov      x24, x0
006112cc:  tbz      w8, #0x1f, #0x6112e0
006112d0:  ldr      x8, [sp, #0x100]
006112d4:  ldr      x0, [sp, #0xf0]
006112d8:  and      x1, x8, #0x7fffffffffffffff
006112dc:  bl       #0x546bc0
006112e0:  adrp     x2, #0xd64000
006112e4:  add      x2, x2, #0x2d0
006112e8:  b        #0x611428
006112ec:  adrp     x8, #0xd64000
006112f0:  add      x8, x8, #0x2b8
006112f4:  ldar     x24, [x8]
006112f8:  cbnz     x24, #0x61138c
006112fc:  ldrsb    x8, [x20, #0x17]
00611300:  ldp      x9, x10, [x20]
00611304:  adrp     x3, #0x1b3000
00611308:  add      x3, x3, #0xe83
0061130c:  add      x0, sp, #0xd0
00611310:  cmp      x8, #0
00611314:  mov      w4, #0x12
00611318:  add      x21, sp, #0xf0
0061131c:  csel     x1, x9, x20, mi
00611320:  cmp      w8, #0
00611324:  csel     x2, x10, x8, mi
00611328:  add      x8, sp, #0xf0
0061132c:  bl       #0x5ff514
00611330:  ldrb     w8, [sp, #0x107]
00611334:  ldp      x10, x11, [sp, #0xf0]
00611338:  mov      w2, #1
0061133c:  mov      w3, #0x2710
00611340:  mov      w4, #0x32
00611344:  sxtb     w9, w8
00611348:  cmp      w9, #0
0061134c:  csel     x0, x10, x21, mi
00611350:  csel     x1, x11, x8, mi
00611354:  bl       #0x6660d0
00611358:  ldrsb    w8, [sp, #0x107]
0061135c:  mov      x24, x0
00611360:  tbz      w8, #0x1f, #0x611374
00611364:  ldr      x8, [sp, #0x100]
00611368:  ldr      x0, [sp, #0xf0]
0061136c:  and      x1, x8, #0x7fffffffffffffff
00611370:  bl       #0x546bc0
00611374:  adrp     x2, #0xd64000
00611378:  add      x2, x2, #0x2b8
0061137c:  mov      x0, xzr
00611380:  mov      x1, x24
00611384:  bl       #0xd0f5e0
00611388:  cbz      x24, #0x611398
0061138c:  mov      x0, x24
00611390:  mov      w1, w23
00611394:  bl       #0x666568
00611398:  adrp     x8, #0xd64000
0061139c:  add      x8, x8, #0x2c8
006113a0:  ldar     x24, [x8]
006113a4:  cbnz     x24, #0x611438
006113a8:  ldrsb    x8, [x20, #0x17]
006113ac:  ldp      x9, x10, [x20]
006113b0:  adrp     x3, #0x1de000
006113b4:  add      x3, x3, #0xd1e
006113b8:  add      x0, sp, #0xd0
006113bc:  cmp      x8, #0
006113c0:  mov      w4, #0x13
006113c4:  add      x21, sp, #0xf0
006113c8:  csel     x1, x9, x20, mi
006113cc:  cmp      w8, #0
006113d0:  csel     x2, x10, x8, mi
006113d4:  add      x8, sp, #0xf0
006113d8:  bl       #0x5ff514
006113dc:  ldrb     w8, [sp, #0x107]
006113e0:  ldp      x10, x11, [sp, #0xf0]
006113e4:  mov      w2, #1
006113e8:  mov      w3, #0x2710
006113ec:  mov      w4, #0x32
006113f0:  sxtb     w9, w8
006113f4:  cmp      w9, #0
006113f8:  csel     x0, x10, x21, mi
006113fc:  csel     x1, x11, x8, mi
00611400:  bl       #0x6660d0
00611404:  ldrsb    w8, [sp, #0x107]
00611408:  mov      x24, x0
0061140c:  tbz      w8, #0x1f, #0x611420
00611410:  ldr      x8, [sp, #0x100]
00611414:  ldr      x0, [sp, #0xf0]
00611418:  and      x1, x8, #0x7fffffffffffffff
0061141c:  bl       #0x546bc0
00611420:  adrp     x2, #0xd64000
00611424:  add      x2, x2, #0x2c8
00611428:  mov      x0, xzr
0061142c:  mov      x1, x24
00611430:  bl       #0xd0f5e0
00611434:  cbz      x24, #0x611444
00611438:  mov      x0, x24
0061143c:  mov      w1, w22
00611440:  bl       #0x666568
00611444:  ldrsb    x2, [x20, #0x17]
00611448:  tbnz     x2, #0x3f, #0x611454
0061144c:  mov      x1, x20
00611450:  b        #0x611458
00611454:  ldp      x1, x2, [x20]
00611458:  add      x0, sp, #0x110
0061145c:  bl       #0x6228b0
00611460:  adrp     x1, #0x19a000
00611464:  add      x1, x1, #0x60f
00611468:  mov      w2, #0x13
0061146c:  bl       #0x6228b0
00611470:  mov      w1, w23
00611474:  bl       #0x622910
00611478:  adrp     x1, #0x1de000
0061147c:  add      x1, x1, #0xd1c
00611480:  mov      w2, #1
00611484:  bl       #0x6228b0
00611488:  ldrsb    x2, [x20, #0x17]
0061148c:  tbnz     x2, #0x3f, #0x611498
00611490:  mov      x1, x20
00611494:  b        #0x61149c
00611498:  ldp      x1, x2, [x20]
0061149c:  bl       #0x6228b0
006114a0:  adrp     x1, #0x1c2000
006114a4:  add      x1, x1, #0x625
006114a8:  mov      w2, #0x14
006114ac:  bl       #0x6228b0
006114b0:  mov      w1, w22
006114b4:  bl       #0x622910
006114b8:  adrp     x1, #0x1de000
006114bc:  add      x1, x1, #0xd1c
006114c0:  mov      w2, #1
006114c4:  bl       #0x6228b0
006114c8:  movi     v0.16b, #0xaa
006114cc:  add      x8, sp, #0xf0
006114d0:  add      x0, x20, #0x128
006114d4:  str      q0, [x26, #0x40]
006114d8:  str      d0, [sp, #0x100]
006114dc:  bl       #0x5f4404
006114e0:  ldr      x8, [sp, #0xf0]
006114e4:  cmp      x8, #6
006114e8:  b.lt     #0x6116b8
006114ec:  tbz      w27, #0, #0x611584
006114f0:  adrp     x8, #0xd64000
006114f4:  add      x8, x8, #0x2e0
006114f8:  ldar     x22, [x8]
006114fc:  cbnz     x22, #0x611624
00611500:  ldrsb    x8, [x20, #0x17]
00611504:  ldp      x9, x10, [x20]
00611508:  adrp     x3, #0x1c8000
0061150c:  add      x3, x3, #0x41b
00611510:  add      x0, sp, #0xb0
00611514:  cmp      x8, #0
00611518:  mov      w4, #0x14
0061151c:  add      x21, sp, #0xd0
00611520:  csel     x1, x9, x20, mi
00611524:  cmp      w8, #0
00611528:  csel     x2, x10, x8, mi
0061152c:  add      x8, sp, #0xd0
00611530:  bl       #0x5ff514
00611534:  ldrb     w8, [sp, #0xe7]
00611538:  ldp      x10, x11, [sp, #0xd0]
0061153c:  mov      w2, #1
00611540:  mov      w3, #0x64
00611544:  mov      w4, #0x32
00611548:  sxtb     w9, w8
0061154c:  cmp      w9, #0
00611550:  csel     x0, x10, x21, mi
00611554:  csel     x1, x11, x8, mi
00611558:  bl       #0x6660d0
0061155c:  ldrsb    w8, [sp, #0xe7]
00611560:  mov      x22, x0
00611564:  tbz      w8, #0x1f, #0x611578
00611568:  ldr      x8, [sp, #0xe0]
0061156c:  ldr      x0, [sp, #0xd0]
00611570:  and      x1, x8, #0x7fffffffffffffff
00611574:  bl       #0x546bc0
00611578:  adrp     x2, #0xd64000
0061157c:  add      x2, x2, #0x2e0
00611580:  b        #0x611614
00611584:  adrp     x8, #0xd64000
00611588:  add      x8, x8, #0x2d8
0061158c:  ldar     x22, [x8]
00611590:  cbnz     x22, #0x611624
00611594:  ldrsb    x8, [x20, #0x17]
00611598:  ldp      x9, x10, [x20]
0061159c:  adrp     x3, #0x1c8000
006115a0:  add      x3, x3, #0x41b
006115a4:  add      x0, sp, #0xb0
006115a8:  cmp      x8, #0
006115ac:  mov      w4, #0x14
006115b0:  add      x21, sp, #0xd0
006115b4:  csel     x1, x9, x20, mi
006115b8:  cmp      w8, #0
006115bc:  csel     x2, x10, x8, mi
006115c0:  add      x8, sp, #0xd0
006115c4:  bl       #0x5ff514
006115c8:  ldrb     w8, [sp, #0xe7]
006115cc:  ldp      x10, x11, [sp, #0xd0]
006115d0:  mov      w2, #1
006115d4:  mov      w3, #0x64
006115d8:  mov      w4, #0x32
006115dc:  sxtb     w9, w8
006115e0:  cmp      w9, #0
006115e4:  csel     x0, x10, x21, mi
006115e8:  csel     x1, x11, x8, mi
006115ec:  bl       #0x6660d0
006115f0:  ldrsb    w8, [sp, #0xe7]
006115f4:  mov      x22, x0
006115f8:  tbz      w8, #0x1f, #0x61160c
006115fc:  ldr      x8, [sp, #0xe0]
00611600:  ldr      x0, [sp, #0xd0]
00611604:  and      x1, x8, #0x7fffffffffffffff
00611608:  bl       #0x546bc0
0061160c:  adrp     x2, #0xd64000
00611610:  add      x2, x2, #0x2d8
00611614:  mov      x0, xzr
00611618:  mov      x1, x22
0061161c:  bl       #0xd0f5e0
00611620:  cbz      x22, #0x611630
00611624:  ldr      w1, [sp, #0x100]
00611628:  mov      x0, x22
0061162c:  bl       #0x666568
00611630:  ldrsb    x2, [x20, #0x17]
00611634:  tbnz     x2, #0x3f, #0x611640
00611638:  mov      x1, x20
0061163c:  b        #0x611644
00611640:  ldp      x1, x2, [x20]
00611644:  add      x0, sp, #0x110
00611648:  bl       #0x6228b0
0061164c:  adrp     x1, #0x1de000
00611650:  add      x1, x1, #0xd32
00611654:  mov      w2, #0x15
00611658:  bl       #0x6228b0
0061165c:  mov      x22, x0
00611660:  add      x8, sp, #0xd0
00611664:  add      x0, sp, #0xf0
00611668:  add      x21, sp, #0xd0
0061166c:  bl       #0x5f41a8
00611670:  ldrb     w8, [sp, #0xe7]
00611674:  ldp      x10, x11, [sp, #0xd0]
00611678:  mov      x0, x22
0061167c:  sxtb     w9, w8
00611680:  cmp      w9, #0
00611684:  csel     x1, x10, x21, mi
00611688:  csel     x2, x11, x8, mi
0061168c:  bl       #0x6228b0
00611690:  adrp     x1, #0x1de000
00611694:  add      x1, x1, #0xd1c
00611698:  mov      w2, #1
0061169c:  bl       #0x6228b0
006116a0:  ldrsb    w8, [sp, #0xe7]
006116a4:  tbz      w8, #0x1f, #0x6116b8
006116a8:  ldr      x8, [sp, #0xe0]
006116ac:  ldr      x0, [sp, #0xd0]
006116b0:  and      x1, x8, #0x7fffffffffffffff
006116b4:  bl       #0x546bc0
006116b8:  ldr      x8, [x20, #0x48]
006116bc:  cmp      x8, #0xc8
006116c0:  b.ge     #0x6116cc
006116c4:  mov      w23, #-1
006116c8:  b        #0x6116d8
006116cc:  ldr      x9, [x20, #0x40]
006116d0:  add      x9, x9, x8, lsr #1
006116d4:  sdiv     x23, x9, x8
006116d8:  ldr      x8, [x20, #0x58]
006116dc:  cmp      x8, #0xc8
006116e0:  b.ge     #0x6116f4
006116e4:  mov      w22, #-1
006116e8:  cmn      w23, #1
006116ec:  b.ne     #0x611708
006116f0:  b        #0x611a28
006116f4:  ldr      x9, [x20, #0x50]
006116f8:  add      x9, x9, x8, lsr #1
006116fc:  sdiv     x22, x9, x8
00611700:  cmn      w23, #1
00611704:  b.eq     #0x611a28
00611708:  tbz      w27, #0, #0x61184c
0061170c:  adrp     x8, #0xd64000
00611710:  add      x8, x8, #0x2f0
00611714:  ldar     x24, [x8]
00611718:  cbnz     x24, #0x6117ac
0061171c:  ldrsb    x8, [x20, #0x17]
00611720:  ldp      x9, x10, [x20]
00611724:  adrp     x3, #0x1b6000
00611728:  add      x3, x3, #0xd89
0061172c:  add      x0, sp, #0xb0
00611730:  cmp      x8, #0
00611734:  mov      w4, #0x11
00611738:  add      x21, sp, #0xd0
0061173c:  csel     x1, x9, x20, mi
00611740:  cmp      w8, #0
00611744:  csel     x2, x10, x8, mi
00611748:  add      x8, sp, #0xd0
0061174c:  bl       #0x5ff514
00611750:  ldrb     w8, [sp, #0xe7]
00611754:  ldp      x10, x11, [sp, #0xd0]
00611758:  mov      w2, #1
0061175c:  mov      w3, #0x2710
00611760:  mov      w4, #0x32
00611764:  sxtb     w9, w8
00611768:  cmp      w9, #0
0061176c:  csel     x0, x10, x21, mi
00611770:  csel     x1, x11, x8, mi
00611774:  bl       #0x6660d0
00611778:  ldrsb    w8, [sp, #0xe7]
0061177c:  mov      x24, x0
00611780:  tbz      w8, #0x1f, #0x611794
00611784:  ldr      x8, [sp, #0xe0]
00611788:  ldr      x0, [sp, #0xd0]
0061178c:  and      x1, x8, #0x7fffffffffffffff
00611790:  bl       #0x546bc0
00611794:  adrp     x2, #0xd64000
00611798:  add      x2, x2, #0x2f0
0061179c:  mov      x0, xzr
006117a0:  mov      x1, x24
006117a4:  bl       #0xd0f5e0
006117a8:  cbz      x24, #0x6117b8
006117ac:  mov      x0, x24
006117b0:  mov      w1, w23
006117b4:  bl       #0x666568
006117b8:  adrp     x8, #0xd64000
006117bc:  add      x8, x8, #0x300
006117c0:  ldar     x24, [x8]
006117c4:  cbnz     x24, #0x611998
006117c8:  ldrsb    x8, [x20, #0x17]
006117cc:  ldp      x9, x10, [x20]
006117d0:  adrp     x3, #0x19a000
006117d4:  add      x3, x3, #0x623
006117d8:  add      x0, sp, #0xb0
006117dc:  cmp      x8, #0
006117e0:  mov      w4, #0x12
006117e4:  add      x21, sp, #0xd0
006117e8:  csel     x1, x9, x20, mi
006117ec:  cmp      w8, #0
006117f0:  csel     x2, x10, x8, mi
006117f4:  add      x8, sp, #0xd0
006117f8:  bl       #0x5ff514
006117fc:  ldrb     w8, [sp, #0xe7]
00611800:  ldp      x10, x11, [sp, #0xd0]
00611804:  mov      w2, #1
00611808:  mov      w3, #0x2710
0061180c:  mov      w4, #0x32
00611810:  sxtb     w9, w8
00611814:  cmp      w9, #0
00611818:  csel     x0, x10, x21, mi
0061181c:  csel     x1, x11, x8, mi
00611820:  bl       #0x6660d0
00611824:  ldrsb    w8, [sp, #0xe7]
00611828:  mov      x24, x0
0061182c:  tbz      w8, #0x1f, #0x611840
00611830:  ldr      x8, [sp, #0xe0]
00611834:  ldr      x0, [sp, #0xd0]
00611838:  and      x1, x8, #0x7fffffffffffffff
0061183c:  bl       #0x546bc0
00611840:  adrp     x2, #0xd64000
00611844:  add      x2, x2, #0x300
00611848:  b        #0x611988
0061184c:  adrp     x8, #0xd64000
00611850:  add      x8, x8, #0x2e8
00611854:  ldar     x24, [x8]
00611858:  cbnz     x24, #0x6118ec
0061185c:  ldrsb    x8, [x20, #0x17]
00611860:  ldp      x9, x10, [x20]
00611864:  adrp     x3, #0x1b6000
00611868:  add      x3, x3, #0xd89
0061186c:  add      x0, sp, #0xb0
00611870:  cmp      x8, #0
00611874:  mov      w4, #0x11
00611878:  add      x21, sp, #0xd0
0061187c:  csel     x1, x9, x20, mi
00611880:  cmp      w8, #0
00611884:  csel     x2, x10, x8, mi
00611888:  add      x8, sp, #0xd0
0061188c:  bl       #0x5ff514
00611890:  ldrb     w8, [sp, #0xe7]
00611894:  ldp      x10, x11, [sp, #0xd0]
00611898:  mov      w2, #1
0061189c:  mov      w3, #0x2710
006118a0:  mov      w4, #0x32
006118a4:  sxtb     w9, w8
006118a8:  cmp      w9, #0
006118ac:  csel     x0, x10, x21, mi
006118b0:  csel     x1, x11, x8, mi
006118b4:  bl       #0x6660d0
006118b8:  ldrsb    w8, [sp, #0xe7]
006118bc:  mov      x24, x0
006118c0:  tbz      w8, #0x1f, #0x6118d4
006118c4:  ldr      x8, [sp, #0xe0]
006118c8:  ldr      x0, [sp, #0xd0]
006118cc:  and      x1, x8, #0x7fffffffffffffff
006118d0:  bl       #0x546bc0
006118d4:  adrp     x2, #0xd64000
006118d8:  add      x2, x2, #0x2e8
006118dc:  mov      x0, xzr
006118e0:  mov      x1, x24
006118e4:  bl       #0xd0f5e0
006118e8:  cbz      x24, #0x6118f8
006118ec:  mov      x0, x24
006118f0:  mov      w1, w23
006118f4:  bl       #0x666568
006118f8:  adrp     x8, #0xd64000
006118fc:  add      x8, x8, #0x2f8
00611900:  ldar     x24, [x8]
00611904:  cbnz     x24, #0x611998
00611908:  ldrsb    x8, [x20, #0x17]
0061190c:  ldp      x9, x10, [x20]
00611910:  adrp     x3, #0x19a000
00611914:  add      x3, x3, #0x623
00611918:  add      x0, sp, #0xb0
0061191c:  cmp      x8, #0
00611920:  mov      w4, #0x12
00611924:  add      x21, sp, #0xd0
00611928:  csel     x1, x9, x20, mi
0061192c:  cmp      w8, #0
00611930:  csel     x2, x10, x8, mi
00611934:  add      x8, sp, #0xd0
00611938:  bl       #0x5ff514
0061193c:  ldrb     w8, [sp, #0xe7]
00611940:  ldp      x10, x11, [sp, #0xd0]
00611944:  mov      w2, #1
00611948:  mov      w3, #0x2710
0061194c:  mov      w4, #0x32
00611950:  sxtb     w9, w8
00611954:  cmp      w9, #0
00611958:  csel     x0, x10, x21, mi
0061195c:  csel     x1, x11, x8, mi
00611960:  bl       #0x6660d0
00611964:  ldrsb    w8, [sp, #0xe7]
00611968:  mov      x24, x0
0061196c:  tbz      w8, #0x1f, #0x611980
00611970:  ldr      x8, [sp, #0xe0]
00611974:  ldr      x0, [sp, #0xd0]
00611978:  and      x1, x8, #0x7fffffffffffffff
0061197c:  bl       #0x546bc0
00611980:  adrp     x2, #0xd64000
00611984:  add      x2, x2, #0x2f8
00611988:  mov      x0, xzr
0061198c:  mov      x1, x24
00611990:  bl       #0xd0f5e0
00611994:  cbz      x24, #0x6119a4
00611998:  mov      x0, x24
0061199c:  mov      w1, w22
006119a0:  bl       #0x666568
006119a4:  ldrsb    x2, [x20, #0x17]
006119a8:  tbnz     x2, #0x3f, #0x6119b4
006119ac:  mov      x1, x20
006119b0:  b        #0x6119b8
006119b4:  ldp      x1, x2, [x20]
006119b8:  add      x0, sp, #0x110
006119bc:  bl       #0x6228b0
006119c0:  adrp     x1, #0x1d3000
006119c4:  add      x1, x1, #0x71c
006119c8:  mov      w2, #0x12
006119cc:  bl       #0x6228b0
006119d0:  mov      w1, w23
006119d4:  bl       #0x622910
006119d8:  adrp     x1, #0x1de000
006119dc:  add      x1, x1, #0xd1c
006119e0:  mov      w2, #1
006119e4:  bl       #0x6228b0
006119e8:  ldrsb    x2, [x20, #0x17]
006119ec:  tbnz     x2, #0x3f, #0x6119f8
006119f0:  mov      x1, x20
006119f4:  b        #0x6119fc
006119f8:  ldp      x1, x2, [x20]
006119fc:  bl       #0x6228b0
00611a00:  adrp     x1, #0x19a000
00611a04:  add      x1, x1, #0x636
00611a08:  mov      w2, #0x13
00611a0c:  bl       #0x6228b0
00611a10:  mov      w1, w22
00611a14:  bl       #0x622910
00611a18:  adrp     x1, #0x1de000
00611a1c:  add      x1, x1, #0xd1c
00611a20:  mov      w2, #1
00611a24:  bl       #0x6228b0
00611a28:  movi     v0.16b, #0xaa
00611a2c:  add      x8, sp, #0xd0
00611a30:  add      x0, x20, #0x180
00611a34:  str      q0, [x26, #0x20]
00611a38:  str      d0, [sp, #0xe0]
00611a3c:  bl       #0x5f4404
00611a40:  ldr      x8, [sp, #0xd0]
00611a44:  cmp      x8, #6
00611a48:  b.lt     #0x611d1c
00611a4c:  tbz      w27, #0, #0x611ae4
00611a50:  adrp     x8, #0xd64000
00611a54:  add      x8, x8, #0x310
00611a58:  ldar     x22, [x8]
00611a5c:  cbnz     x22, #0x611b84
00611a60:  ldrsb    x8, [x20, #0x17]
00611a64:  ldp      x9, x10, [x20]
00611a68:  adrp     x3, #0x1d9000
00611a6c:  add      x3, x3, #0x586
00611a70:  add      x0, sp, #0x90
00611a74:  cmp      x8, #0
00611a78:  mov      w4, #0x13
00611a7c:  add      x21, sp, #0xb0
00611a80:  csel     x1, x9, x20, mi
00611a84:  cmp      w8, #0
00611a88:  csel     x2, x10, x8, mi
00611a8c:  add      x8, sp, #0xb0
00611a90:  bl       #0x5ff514
00611a94:  ldrb     w8, [sp, #0xc7]
00611a98:  ldp      x10, x11, [sp, #0xb0]
00611a9c:  mov      w2, #1
00611aa0:  mov      w3, #0x64
00611aa4:  mov      w4, #0x32
00611aa8:  sxtb     w9, w8
00611aac:  cmp      w9, #0
00611ab0:  csel     x0, x10, x21, mi
00611ab4:  csel     x1, x11, x8, mi
00611ab8:  bl       #0x6660d0
00611abc:  ldrsb    w8, [sp, #0xc7]
00611ac0:  mov      x22, x0
00611ac4:  tbz      w8, #0x1f, #0x611ad8
00611ac8:  ldr      x8, [sp, #0xc0]
00611acc:  ldr      x0, [sp, #0xb0]
00611ad0:  and      x1, x8, #0x7fffffffffffffff
00611ad4:  bl       #0x546bc0
00611ad8:  adrp     x2, #0xd64000
00611adc:  add      x2, x2, #0x310
00611ae0:  b        #0x611b74
00611ae4:  adrp     x8, #0xd64000
00611ae8:  add      x8, x8, #0x308
00611aec:  ldar     x22, [x8]
00611af0:  cbnz     x22, #0x611b84
00611af4:  ldrsb    x8, [x20, #0x17]
00611af8:  ldp      x9, x10, [x20]
00611afc:  adrp     x3, #0x1d9000
00611b00:  add      x3, x3, #0x586
00611b04:  add      x0, sp, #0x90
00611b08:  cmp      x8, #0
00611b0c:  mov      w4, #0x13
00611b10:  add      x21, sp, #0xb0
00611b14:  csel     x1, x9, x20, mi
00611b18:  cmp      w8, #0
00611b1c:  csel     x2, x10, x8, mi
00611b20:  add      x8, sp, #0xb0
00611b24:  bl       #0x5ff514
00611b28:  ldrb     w8, [sp, #0xc7]
00611b2c:  ldp      x10, x11, [sp, #0xb0]
00611b30:  mov      w2, #1
00611b34:  mov      w3, #0x64
00611b38:  mov      w4, #0x32
00611b3c:  sxtb     w9, w8
00611b40:  cmp      w9, #0
00611b44:  csel     x0, x10, x21, mi
00611b48:  csel     x1, x11, x8, mi
00611b4c:  bl       #0x6660d0
00611b50:  ldrsb    w8, [sp, #0xc7]
00611b54:  mov      x22, x0
00611b58:  tbz      w8, #0x1f, #0x611b6c
00611b5c:  ldr      x8, [sp, #0xc0]
00611b60:  ldr      x0, [sp, #0xb0]
00611b64:  and      x1, x8, #0x7fffffffffffffff
00611b68:  bl       #0x546bc0
00611b6c:  adrp     x2, #0xd64000
00611b70:  add      x2, x2, #0x308
00611b74:  mov      x0, xzr
00611b78:  mov      x1, x22
00611b7c:  bl       #0xd0f5e0
00611b80:  cbz      x22, #0x611b90
00611b84:  ldr      w1, [sp, #0xe0]
00611b88:  mov      x0, x22
00611b8c:  bl       #0x666568
00611b90:  ldrsb    x2, [x20, #0x17]
00611b94:  tbnz     x2, #0x3f, #0x611ba0
00611b98:  mov      x1, x20
00611b9c:  b        #0x611ba4
00611ba0:  ldp      x1, x2, [x20]
00611ba4:  add      x0, sp, #0x110
00611ba8:  bl       #0x6228b0
00611bac:  adrp     x1, #0x1ae000
00611bb0:  add      x1, x1, #0x54c
00611bb4:  mov      w2, #0x14
00611bb8:  bl       #0x6228b0
00611bbc:  mov      x22, x0
00611bc0:  add      x8, sp, #0xb0
00611bc4:  add      x0, sp, #0xd0
00611bc8:  add      x21, sp, #0xb0
00611bcc:  bl       #0x5f41a8
00611bd0:  ldrb     w8, [sp, #0xc7]
00611bd4:  ldp      x10, x11, [sp, #0xb0]
00611bd8:  mov      x0, x22
00611bdc:  sxtb     w9, w8
00611be0:  cmp      w9, #0
00611be4:  csel     x1, x10, x21, mi
00611be8:  csel     x2, x11, x8, mi
00611bec:  bl       #0x6228b0
00611bf0:  adrp     x1, #0x1de000
00611bf4:  add      x1, x1, #0xd1c
00611bf8:  mov      w2, #1
00611bfc:  bl       #0x6228b0
00611c00:  ldrsb    w8, [sp, #0xc7]
00611c04:  tbz      w8, #0x1f, #0x611c18
00611c08:  ldr      x8, [sp, #0xc0]
00611c0c:  ldr      x0, [sp, #0xb0]
00611c10:  and      x1, x8, #0x7fffffffffffffff
00611c14:  bl       #0x546bc0
00611c18:  ldr      x8, [sp, #0xf0]
00611c1c:  cmp      x8, #7
00611c20:  b.lt     #0x611d1c
00611c24:  ldr      x8, [sp, #0xd0]
00611c28:  cmp      x8, #6
00611c2c:  b.lt     #0x611d1c
00611c30:  ldr      w8, [sp, #0x100]
00611c34:  cmp      w8, #1
00611c38:  b.lt     #0x611d1c
00611c3c:  ldr      w9, [sp, #0xe0]
00611c40:  mov      w10, #0x64
00611c44:  mul      w9, w9, w10
00611c48:  add      w9, w9, w8, lsr #1
00611c4c:  sdiv     w8, w9, w8
00611c50:  cmp      w8, #0x64
00611c54:  csel     w22, w8, w10, lt
00611c58:  ldrsb    x8, [x20, #0x17]
00611c5c:  ldp      x9, x10, [x20]
00611c60:  adrp     x3, #0x1ca000
00611c64:  add      x3, x3, #0xdbe
00611c68:  add      x0, sp, #0x90
00611c6c:  cmp      x8, #0
00611c70:  mov      w4, #0x1a
00611c74:  add      x21, sp, #0xb0
00611c78:  csel     x1, x9, x20, mi
00611c7c:  cmp      w8, #0
00611c80:  csel     x2, x10, x8, mi
00611c84:  add      x8, sp, #0xb0
00611c88:  bl       #0x5ff514
00611c8c:  ldrb     w8, [sp, #0xc7]
00611c90:  ldp      x10, x11, [sp, #0xb0]
00611c94:  mov      w2, #0x65
00611c98:  sxtb     w9, w8
00611c9c:  cmp      w9, #0
00611ca0:  csel     x0, x10, x21, mi
00611ca4:  csel     x1, x11, x8, mi
00611ca8:  bl       #0x66631c
00611cac:  ldrsb    w8, [sp, #0xc7]
00611cb0:  mov      x23, x0
00611cb4:  tbz      w8, #0x1f, #0x611cc8
00611cb8:  ldr      x8, [sp, #0xc0]
00611cbc:  ldr      x0, [sp, #0xb0]
00611cc0:  and      x1, x8, #0x7fffffffffffffff
00611cc4:  bl       #0x546bc0
00611cc8:  cbz      x23, #0x611cd8
00611ccc:  mov      x0, x23
00611cd0:  mov      w1, w22
00611cd4:  bl       #0x666568
00611cd8:  ldrsb    x2, [x20, #0x17]
00611cdc:  tbnz     x2, #0x3f, #0x611ce8
00611ce0:  mov      x1, x20
00611ce4:  b        #0x611cec
00611ce8:  ldp      x1, x2, [x20]
00611cec:  add      x0, sp, #0x110
00611cf0:  bl       #0x6228b0
00611cf4:  adrp     x1, #0x19a000
00611cf8:  add      x1, x1, #0x64a
00611cfc:  mov      w2, #0x1b
00611d00:  bl       #0x6228b0
00611d04:  mov      w1, w22
00611d08:  bl       #0x622910
00611d0c:  adrp     x1, #0x1de000
00611d10:  add      x1, x1, #0xd1c
00611d14:  mov      w2, #1
00611d18:  bl       #0x6228b0
00611d1c:  ldr      x8, [x20, #0x68]
00611d20:  cmp      x8, #0xc8
00611d24:  b.lt     #0x611ec4
00611d28:  ldr      x9, [x20, #0x60]
00611d2c:  add      x9, x9, x8, lsr #1
00611d30:  sdiv     x22, x9, x8
00611d34:  cmn      w22, #1
00611d38:  b.eq     #0x611ec4
00611d3c:  tbz      w27, #0, #0x611dd4
00611d40:  adrp     x8, #0xd64000
00611d44:  add      x8, x8, #0x320
00611d48:  ldar     x23, [x8]
00611d4c:  cbnz     x23, #0x611e74
00611d50:  ldrsb    x8, [x20, #0x17]
00611d54:  ldp      x9, x10, [x20]
00611d58:  adrp     x3, #0x1bc000
00611d5c:  add      x3, x3, #0xd3c
00611d60:  add      x0, sp, #0x90
00611d64:  cmp      x8, #0
00611d68:  mov      w4, #0xe
00611d6c:  add      x21, sp, #0xb0
00611d70:  csel     x1, x9, x20, mi
00611d74:  cmp      w8, #0
00611d78:  csel     x2, x10, x8, mi
00611d7c:  add      x8, sp, #0xb0
00611d80:  bl       #0x5ff514
00611d84:  ldrb     w8, [sp, #0xc7]
00611d88:  ldp      x10, x11, [sp, #0xb0]
00611d8c:  mov      w2, #1
00611d90:  mov      w3, #0x3e8
00611d94:  mov      w4, #0x32
00611d98:  sxtb     w9, w8
00611d9c:  cmp      w9, #0
00611da0:  csel     x0, x10, x21, mi
00611da4:  csel     x1, x11, x8, mi
00611da8:  bl       #0x6660d0
00611dac:  ldrsb    w8, [sp, #0xc7]
00611db0:  mov      x23, x0
00611db4:  tbz      w8, #0x1f, #0x611dc8
00611db8:  ldr      x8, [sp, #0xc0]
00611dbc:  ldr      x0, [sp, #0xb0]
00611dc0:  and      x1, x8, #0x7fffffffffffffff
00611dc4:  bl       #0x546bc0
00611dc8:  adrp     x2, #0xd64000
00611dcc:  add      x2, x2, #0x320
00611dd0:  b        #0x611e64
00611dd4:  adrp     x8, #0xd64000
00611dd8:  add      x8, x8, #0x318
00611ddc:  ldar     x23, [x8]
00611de0:  cbnz     x23, #0x611e74
00611de4:  ldrsb    x8, [x20, #0x17]
00611de8:  ldp      x9, x10, [x20]
00611dec:  adrp     x3, #0x1bc000
00611df0:  add      x3, x3, #0xd3c
00611df4:  add      x0, sp, #0x90
00611df8:  cmp      x8, #0
00611dfc:  mov      w4, #0xe
00611e00:  add      x21, sp, #0xb0
00611e04:  csel     x1, x9, x20, mi
00611e08:  cmp      w8, #0
00611e0c:  csel     x2, x10, x8, mi
00611e10:  add      x8, sp, #0xb0
00611e14:  bl       #0x5ff514
00611e18:  ldrb     w8, [sp, #0xc7]
00611e1c:  ldp      x10, x11, [sp, #0xb0]
00611e20:  mov      w2, #1
00611e24:  mov      w3, #0x3e8
00611e28:  mov      w4, #0x32
00611e2c:  sxtb     w9, w8
00611e30:  cmp      w9, #0
00611e34:  csel     x0, x10, x21, mi
00611e38:  csel     x1, x11, x8, mi
00611e3c:  bl       #0x6660d0
00611e40:  ldrsb    w8, [sp, #0xc7]
00611e44:  mov      x23, x0
00611e48:  tbz      w8, #0x1f, #0x611e5c
00611e4c:  ldr      x8, [sp, #0xc0]
00611e50:  ldr      x0, [sp, #0xb0]
00611e54:  and      x1, x8, #0x7fffffffffffffff
00611e58:  bl       #0x546bc0
00611e5c:  adrp     x2, #0xd64000
00611e60:  add      x2, x2, #0x318
00611e64:  mov      x0, xzr
00611e68:  mov      x1, x23
00611e6c:  bl       #0xd0f5e0
00611e70:  cbz      x23, #0x611e80
00611e74:  mov      x0, x23
00611e78:  mov      w1, w22
00611e7c:  bl       #0x666568
00611e80:  ldrsb    x2, [x20, #0x17]
00611e84:  tbnz     x2, #0x3f, #0x611e90
00611e88:  mov      x1, x20
00611e8c:  b        #0x611e94
00611e90:  ldp      x1, x2, [x20]
00611e94:  add      x0, sp, #0x110
00611e98:  bl       #0x6228b0
00611e9c:  adrp     x1, #0x1d6000
00611ea0:  add      x1, x1, #0x737
00611ea4:  mov      w2, #0xf
00611ea8:  bl       #0x6228b0
00611eac:  mov      w1, w22
00611eb0:  bl       #0x622910
00611eb4:  adrp     x1, #0x1de000
00611eb8:  add      x1, x1, #0xd1c
00611ebc:  mov      w2, #1
00611ec0:  bl       #0x6228b0
00611ec4:  ldr      x8, [x20, #0x78]
00611ec8:  cmp      x8, #0xc8
00611ecc:  b.lt     #0x612088
00611ed0:  ldr      x9, [x20, #0x70]
00611ed4:  scvtf    s0, x9
00611ed8:  mov      w9, #0x447a0000
00611edc:  fmov     s1, w9
00611ee0:  fmul     s0, s0, s1
00611ee4:  ucvtf    s1, x8
00611ee8:  fdiv     s0, s0, s1
00611eec:  fmov     s1, #0.50000000
00611ef0:  fadd     s0, s0, s1
00611ef4:  fcvtzs   w22, s0
00611ef8:  cmn      w22, #1
00611efc:  b.eq     #0x612088
00611f00:  tbz      w27, #0, #0x611f98
00611f04:  adrp     x8, #0xd64000
00611f08:  add      x8, x8, #0x330
00611f0c:  ldar     x23, [x8]
00611f10:  cbnz     x23, #0x612038
00611f14:  ldrsb    x8, [x20, #0x17]
00611f18:  ldp      x9, x10, [x20]
00611f1c:  adrp     x3, #0x1d3000
00611f20:  add      x3, x3, #0x72f
00611f24:  add      x0, sp, #0x90
00611f28:  cmp      x8, #0
00611f2c:  mov      w4, #0x17
00611f30:  add      x21, sp, #0xb0
00611f34:  csel     x1, x9, x20, mi
00611f38:  cmp      w8, #0
00611f3c:  csel     x2, x10, x8, mi
00611f40:  add      x8, sp, #0xb0
00611f44:  bl       #0x5ff514
00611f48:  ldrb     w8, [sp, #0xc7]
00611f4c:  ldp      x10, x11, [sp, #0xb0]
00611f50:  mov      w2, #1
00611f54:  mov      w3, #0x3e8
00611f58:  mov      w4, #0x32
00611f5c:  sxtb     w9, w8
00611f60:  cmp      w9, #0
00611f64:  csel     x0, x10, x21, mi
00611f68:  csel     x1, x11, x8, mi
00611f6c:  bl       #0x6660d0
00611f70:  ldrsb    w8, [sp, #0xc7]
00611f74:  mov      x23, x0
00611f78:  tbz      w8, #0x1f, #0x611f8c
00611f7c:  ldr      x8, [sp, #0xc0]
00611f80:  ldr      x0, [sp, #0xb0]
00611f84:  and      x1, x8, #0x7fffffffffffffff
00611f88:  bl       #0x546bc0
00611f8c:  adrp     x2, #0xd64000
00611f90:  add      x2, x2, #0x330
00611f94:  b        #0x612028
00611f98:  adrp     x8, #0xd64000
00611f9c:  add      x8, x8, #0x328
00611fa0:  ldar     x23, [x8]
00611fa4:  cbnz     x23, #0x612038
00611fa8:  ldrsb    x8, [x20, #0x17]
00611fac:  ldp      x9, x10, [x20]
00611fb0:  adrp     x3, #0x1d3000
00611fb4:  add      x3, x3, #0x72f
00611fb8:  add      x0, sp, #0x90
00611fbc:  cmp      x8, #0
00611fc0:  mov      w4, #0x17
00611fc4:  add      x21, sp, #0xb0
00611fc8:  csel     x1, x9, x20, mi
00611fcc:  cmp      w8, #0
00611fd0:  csel     x2, x10, x8, mi
00611fd4:  add      x8, sp, #0xb0
00611fd8:  bl       #0x5ff514
00611fdc:  ldrb     w8, [sp, #0xc7]
00611fe0:  ldp      x10, x11, [sp, #0xb0]
00611fe4:  mov      w2, #1
00611fe8:  mov      w3, #0x3e8
00611fec:  mov      w4, #0x32
00611ff0:  sxtb     w9, w8
00611ff4:  cmp      w9, #0
00611ff8:  csel     x0, x10, x21, mi
00611ffc:  csel     x1, x11, x8, mi
00612000:  bl       #0x6660d0
00612004:  ldrsb    w8, [sp, #0xc7]
00612008:  mov      x23, x0
0061200c:  tbz      w8, #0x1f, #0x612020
00612010:  ldr      x8, [sp, #0xc0]
00612014:  ldr      x0, [sp, #0xb0]
00612018:  and      x1, x8, #0x7fffffffffffffff
0061201c:  bl       #0x546bc0
00612020:  adrp     x2, #0xd64000
00612024:  add      x2, x2, #0x328
00612028:  mov      x0, xzr
0061202c:  mov      x1, x23
00612030:  bl       #0xd0f5e0
00612034:  cbz      x23, #0x612044
00612038:  mov      x0, x23
0061203c:  mov      w1, w22
00612040:  bl       #0x666568
00612044:  ldrsb    x2, [x20, #0x17]
00612048:  tbnz     x2, #0x3f, #0x612054
0061204c:  mov      x1, x20
00612050:  b        #0x612058
00612054:  ldp      x1, x2, [x20]
00612058:  add      x0, sp, #0x110
0061205c:  bl       #0x6228b0
00612060:  adrp     x1, #0x1ea000
00612064:  add      x1, x1, #0x677
00612068:  mov      w2, #0x18
0061206c:  bl       #0x6228b0
00612070:  mov      w1, w22
00612074:  bl       #0x622910
00612078:  adrp     x1, #0x1de000
0061207c:  add      x1, x1, #0xd1c
00612080:  mov      w2, #1
00612084:  bl       #0x6228b0
00612088:  ldr      x8, [x20, #0x88]
0061208c:  cmp      x8, #0xc8
00612090:  b.lt     #0x612188
00612094:  ldr      x9, [x20, #0x80]
00612098:  scvtf    s0, x9
0061209c:  mov      w9, #0x42c80000
006120a0:  fmov     s1, w9
006120a4:  fmul     s0, s0, s1
006120a8:  ucvtf    s1, x8
006120ac:  fdiv     s0, s0, s1
006120b0:  fmov     s1, #0.50000000
006120b4:  fadd     s0, s0, s1
006120b8:  fcvtzs   w22, s0
006120bc:  cmn      w22, #1
006120c0:  b.eq     #0x612188
006120c4:  ldrsb    x8, [x20, #0x17]
006120c8:  ldp      x9, x10, [x20]
006120cc:  adrp     x3, #0x1bc000
006120d0:  add      x3, x3, #0xd4b
006120d4:  add      x0, sp, #0x90
006120d8:  cmp      x8, #0
006120dc:  mov      w4, #0x21
006120e0:  add      x21, sp, #0xb0
006120e4:  csel     x1, x9, x20, mi
006120e8:  cmp      w8, #0
006120ec:  csel     x2, x10, x8, mi
006120f0:  add      x8, sp, #0xb0
006120f4:  bl       #0x5ff514
006120f8:  ldrb     w8, [sp, #0xc7]
006120fc:  ldp      x10, x11, [sp, #0xb0]
00612100:  mov      w2, #0x65
00612104:  sxtb     w9, w8
00612108:  cmp      w9, #0
0061210c:  csel     x0, x10, x21, mi
00612110:  csel     x1, x11, x8, mi
00612114:  bl       #0x66631c
00612118:  ldrsb    w8, [sp, #0xc7]
0061211c:  mov      x23, x0
00612120:  tbz      w8, #0x1f, #0x612134
00612124:  ldr      x8, [sp, #0xc0]
00612128:  ldr      x0, [sp, #0xb0]
0061212c:  and      x1, x8, #0x7fffffffffffffff
00612130:  bl       #0x546bc0
00612134:  cbz      x23, #0x612144
00612138:  mov      x0, x23
0061213c:  mov      w1, w22
00612140:  bl       #0x666568
00612144:  ldrsb    x2, [x20, #0x17]
00612148:  tbnz     x2, #0x3f, #0x612154
0061214c:  mov      x1, x20
00612150:  b        #0x612158
00612154:  ldp      x1, x2, [x20]
00612158:  add      x0, sp, #0x110
0061215c:  bl       #0x6228b0
00612160:  adrp     x1, #0x1d6000
00612164:  add      x1, x1, #0x747
00612168:  mov      w2, #0x22
0061216c:  bl       #0x6228b0
00612170:  mov      w1, w22
00612174:  bl       #0x622910
00612178:  adrp     x1, #0x1de000
0061217c:  add      x1, x1, #0xd1c
00612180:  mov      w2, #1
00612184:  bl       #0x6228b0
00612188:  ldr      x8, [x20, #0x98]
0061218c:  cmp      x8, #0xc8
00612190:  b.lt     #0x612228
00612194:  ldr      x9, [x20, #0x90]
00612198:  add      x9, x9, x8, lsr #1
0061219c:  sdiv     x22, x9, x8
006121a0:  cmn      w22, #1
006121a4:  b.eq     #0x612228
006121a8:  ldrsb    x8, [x20, #0x17]
006121ac:  ldp      x9, x10, [x20]
006121b0:  adrp     x3, #0x1ab000
006121b4:  add      x3, x3, #0xb3a
006121b8:  add      x0, sp, #0x90
006121bc:  cmp      x8, #0
006121c0:  mov      w4, #0x22
006121c4:  add      x21, sp, #0xb0
006121c8:  csel     x1, x9, x20, mi
006121cc:  cmp      w8, #0
006121d0:  csel     x2, x10, x8, mi
006121d4:  add      x8, sp, #0xb0
006121d8:  bl       #0x5ff514
006121dc:  ldrb     w8, [sp, #0xc7]
006121e0:  ldp      x10, x11, [sp, #0xb0]
006121e4:  mov      w2, #0x14
006121e8:  sxtb     w9, w8
006121ec:  cmp      w9, #0
006121f0:  csel     x0, x10, x21, mi
006121f4:  csel     x1, x11, x8, mi
006121f8:  bl       #0x66631c
006121fc:  ldrsb    w8, [sp, #0xc7]
00612200:  mov      x23, x0
00612204:  tbz      w8, #0x1f, #0x612218
00612208:  ldr      x8, [sp, #0xc0]
0061220c:  ldr      x0, [sp, #0xb0]
00612210:  and      x1, x8, #0x7fffffffffffffff
00612214:  bl       #0x546bc0
00612218:  cbz      x23, #0x612228
0061221c:  mov      x0, x23
00612220:  mov      w1, w22
00612224:  bl       #0x666568
00612228:  ldr      x8, [x20, #0xa8]
0061222c:  cmp      x8, #0xc8
00612230:  b.lt     #0x6122e4
00612234:  ldr      x9, [x20, #0xa0]
00612238:  scvtf    s0, x9
0061223c:  mov      w9, #0x42c80000
00612240:  fmov     s1, w9
00612244:  fmul     s0, s0, s1
00612248:  ucvtf    s1, x8
0061224c:  fdiv     s0, s0, s1
00612250:  fmov     s1, #0.50000000
00612254:  fadd     s0, s0, s1
00612258:  fcvtzs   w22, s0
0061225c:  cmn      w22, #1
00612260:  b.eq     #0x6122e4
00612264:  ldrsb    x8, [x20, #0x17]
00612268:  ldp      x9, x10, [x20]
0061226c:  adrp     x3, #0x1a3000
00612270:  add      x3, x3, #0x703
00612274:  add      x0, sp, #0x90
00612278:  cmp      x8, #0
0061227c:  mov      w4, #0x1d
00612280:  add      x21, sp, #0xb0
00612284:  csel     x1, x9, x20, mi
00612288:  cmp      w8, #0
0061228c:  csel     x2, x10, x8, mi
00612290:  add      x8, sp, #0xb0
00612294:  bl       #0x5ff514
00612298:  ldrb     w8, [sp, #0xc7]
0061229c:  ldp      x10, x11, [sp, #0xb0]
006122a0:  mov      w2, #0x65
006122a4:  sxtb     w9, w8
006122a8:  cmp      w9, #0
006122ac:  csel     x0, x10, x21, mi
006122b0:  csel     x1, x11, x8, mi
006122b4:  bl       #0x66631c
006122b8:  ldrsb    w8, [sp, #0xc7]
006122bc:  mov      x23, x0
006122c0:  tbz      w8, #0x1f, #0x6122d4
006122c4:  ldr      x8, [sp, #0xc0]
006122c8:  ldr      x0, [sp, #0xb0]
006122cc:  and      x1, x8, #0x7fffffffffffffff
006122d0:  bl       #0x546bc0
006122d4:  cbz      x23, #0x6122e4
006122d8:  mov      x0, x23
006122dc:  mov      w1, w22
006122e0:  bl       #0x666568
006122e4:  ldr      x8, [x20, #0xb8]
006122e8:  cmp      x8, #0xc8
006122ec:  b.lt     #0x6123a0
006122f0:  ldr      x9, [x20, #0xb0]
006122f4:  scvtf    s0, x9
006122f8:  mov      w9, #0x42c80000
006122fc:  fmov     s1, w9
00612300:  fmul     s0, s0, s1
00612304:  ucvtf    s1, x8
00612308:  fdiv     s0, s0, s1
0061230c:  fmov     s1, #0.50000000
00612310:  fadd     s0, s0, s1
00612314:  fcvtzs   w22, s0
00612318:  cmn      w22, #1
0061231c:  b.eq     #0x6123a0
00612320:  ldrsb    x8, [x20, #0x17]
00612324:  ldp      x9, x10, [x20]
00612328:  adrp     x3, #0x1ab000
0061232c:  add      x3, x3, #0xb5d
00612330:  add      x0, sp, #0x90
00612334:  cmp      x8, #0
00612338:  mov      w4, #0x23
0061233c:  add      x21, sp, #0xb0
00612340:  csel     x1, x9, x20, mi
00612344:  cmp      w8, #0
00612348:  csel     x2, x10, x8, mi
0061234c:  add      x8, sp, #0xb0
00612350:  bl       #0x5ff514
00612354:  ldrb     w8, [sp, #0xc7]
00612358:  ldp      x10, x11, [sp, #0xb0]
0061235c:  mov      w2, #0x65
00612360:  sxtb     w9, w8
00612364:  cmp      w9, #0
00612368:  csel     x0, x10, x21, mi
0061236c:  csel     x1, x11, x8, mi
00612370:  bl       #0x66631c
00612374:  ldrsb    w8, [sp, #0xc7]
00612378:  mov      x23, x0
0061237c:  tbz      w8, #0x1f, #0x612390
00612380:  ldr      x8, [sp, #0xc0]
00612384:  ldr      x0, [sp, #0xb0]
00612388:  and      x1, x8, #0x7fffffffffffffff
0061238c:  bl       #0x546bc0
00612390:  cbz      x23, #0x6123a0
00612394:  mov      x0, x23
00612398:  mov      w1, w22
0061239c:  bl       #0x666568
006123a0:  ldr      x8, [x20, #0xc8]
006123a4:  cmp      x8, #0xc8
006123a8:  b.lt     #0x612440
006123ac:  ldr      x9, [x20, #0xc0]
006123b0:  add      x9, x9, x8, lsr #1
006123b4:  sdiv     x22, x9, x8
006123b8:  cmn      w22, #1
006123bc:  b.eq     #0x612440
006123c0:  ldrsb    x8, [x20, #0x17]
006123c4:  ldp      x9, x10, [x20]
006123c8:  adrp     x3, #0x1ef000
006123cc:  add      x3, x3, #0xb8d
006123d0:  add      x0, sp, #0x90
006123d4:  cmp      x8, #0
006123d8:  mov      w4, #0x23
006123dc:  add      x21, sp, #0xb0
006123e0:  csel     x1, x9, x20, mi
006123e4:  cmp      w8, #0
006123e8:  csel     x2, x10, x8, mi
006123ec:  add      x8, sp, #0xb0
006123f0:  bl       #0x5ff514
006123f4:  ldrb     w8, [sp, #0xc7]
006123f8:  ldp      x10, x11, [sp, #0xb0]
006123fc:  mov      w2, #0xa
00612400:  sxtb     w9, w8
00612404:  cmp      w9, #0
00612408:  csel     x0, x10, x21, mi
0061240c:  csel     x1, x11, x8, mi
00612410:  bl       #0x66631c
00612414:  ldrsb    w8, [sp, #0xc7]
00612418:  mov      x23, x0
0061241c:  tbz      w8, #0x1f, #0x612430
00612420:  ldr      x8, [sp, #0xc0]
00612424:  ldr      x0, [sp, #0xb0]
00612428:  and      x1, x8, #0x7fffffffffffffff
0061242c:  bl       #0x546bc0
00612430:  cbz      x23, #0x612440
00612434:  mov      x0, x23
00612438:  mov      w1, w22
0061243c:  bl       #0x666568
00612440:  ldr      x8, [x20, #0xd8]
00612444:  cmp      x8, #0xc8
00612448:  b.lt     #0x6125ac
0061244c:  ldr      x9, [x20, #0xd0]
00612450:  add      x9, x9, x8, lsr #1
00612454:  sdiv     x22, x9, x8
00612458:  cmn      w22, #1
0061245c:  b.eq     #0x6125ac
00612460:  tbz      w27, #0, #0x6124fc
00612464:  adrp     x8, #0xd64000
00612468:  add      x8, x8, #0x340
0061246c:  ldar     x23, [x8]
00612470:  cbnz     x23, #0x6125a0
00612474:  ldrsb    x8, [x20, #0x17]
00612478:  ldp      x9, x10, [x20]
0061247c:  adrp     x3, #0x1ed000
00612480:  add      x3, x3, #0xba
00612484:  add      x0, sp, #0x90
00612488:  cmp      x8, #0
0061248c:  mov      w4, #0x11
00612490:  add      x21, sp, #0xb0
00612494:  csel     x1, x9, x20, mi
00612498:  cmp      w8, #0
0061249c:  csel     x2, x10, x8, mi
006124a0:  add      x8, sp, #0xb0
006124a4:  bl       #0x5ff514
006124a8:  ldrb     w8, [sp, #0xc7]
006124ac:  ldp      x10, x11, [sp, #0xb0]
006124b0:  mov      w3, #0x86a0
006124b4:  mov      w2, #1
006124b8:  mov      w4, #0x32
006124bc:  sxtb     w9, w8
006124c0:  movk     w3, #1, lsl #16
006124c4:  cmp      w9, #0
006124c8:  csel     x0, x10, x21, mi
006124cc:  csel     x1, x11, x8, mi
006124d0:  bl       #0x6660d0
006124d4:  ldrsb    w8, [sp, #0xc7]
006124d8:  mov      x23, x0
006124dc:  tbz      w8, #0x1f, #0x6124f0
006124e0:  ldr      x8, [sp, #0xc0]
006124e4:  ldr      x0, [sp, #0xb0]
006124e8:  and      x1, x8, #0x7fffffffffffffff
006124ec:  bl       #0x546bc0
006124f0:  adrp     x2, #0xd64000
006124f4:  add      x2, x2, #0x340
006124f8:  b        #0x612590
006124fc:  adrp     x8, #0xd64000
00612500:  add      x8, x8, #0x338
00612504:  ldar     x23, [x8]
00612508:  cbnz     x23, #0x6125a0
0061250c:  ldrsb    x8, [x20, #0x17]
00612510:  ldp      x9, x10, [x20]
00612514:  adrp     x3, #0x1ed000
00612518:  add      x3, x3, #0xba
0061251c:  add      x0, sp, #0x90
00612520:  cmp      x8, #0
00612524:  mov      w4, #0x11
00612528:  add      x21, sp, #0xb0
0061252c:  csel     x1, x9, x20, mi
00612530:  cmp      w8, #0
00612534:  csel     x2, x10, x8, mi
00612538:  add      x8, sp, #0xb0
0061253c:  bl       #0x5ff514
00612540:  ldrb     w8, [sp, #0xc7]
00612544:  ldp      x10, x11, [sp, #0xb0]
00612548:  mov      w3, #0x86a0
0061254c:  mov      w2, #1
00612550:  mov      w4, #0x32
00612554:  sxtb     w9, w8
00612558:  movk     w3, #1, lsl #16
0061255c:  cmp      w9, #0
00612560:  csel     x0, x10, x21, mi
00612564:  csel     x1, x11, x8, mi
00612568:  bl       #0x6660d0
0061256c:  ldrsb    w8, [sp, #0xc7]
00612570:  mov      x23, x0
00612574:  tbz      w8, #0x1f, #0x612588
00612578:  ldr      x8, [sp, #0xc0]
0061257c:  ldr      x0, [sp, #0xb0]
00612580:  and      x1, x8, #0x7fffffffffffffff
00612584:  bl       #0x546bc0
00612588:  adrp     x2, #0xd64000
0061258c:  add      x2, x2, #0x338
00612590:  mov      x0, xzr
00612594:  mov      x1, x23
00612598:  bl       #0xd0f5e0
0061259c:  cbz      x23, #0x6125ac
006125a0:  mov      x0, x23
006125a4:  mov      w1, w22
006125a8:  bl       #0x666568
006125ac:  ldr      x8, [x20, #0xe8]
006125b0:  cmp      x8, #0xc8
006125b4:  b.lt     #0x612718
006125b8:  ldr      x9, [x20, #0xe0]
006125bc:  add      x9, x9, x8, lsr #1
006125c0:  sdiv     x22, x9, x8
006125c4:  cmn      w22, #1
006125c8:  b.eq     #0x612718
006125cc:  tbz      w27, #0, #0x612668
006125d0:  adrp     x8, #0xd64000
006125d4:  add      x8, x8, #0x350
006125d8:  ldar     x23, [x8]
006125dc:  cbnz     x23, #0x61270c
006125e0:  ldrsb    x8, [x20, #0x17]
006125e4:  ldp      x9, x10, [x20]
006125e8:  adrp     x3, #0x1ea000
006125ec:  add      x3, x3, #0x690
006125f0:  add      x0, sp, #0x90
006125f4:  cmp      x8, #0
006125f8:  mov      w4, #0x14
006125fc:  add      x21, sp, #0xb0
00612600:  csel     x1, x9, x20, mi
00612604:  cmp      w8, #0
00612608:  csel     x2, x10, x8, mi
0061260c:  add      x8, sp, #0xb0
00612610:  bl       #0x5ff514
00612614:  ldrb     w8, [sp, #0xc7]
00612618:  ldp      x10, x11, [sp, #0xb0]
0061261c:  mov      w3, #0x86a0
00612620:  mov      w2, #1
00612624:  mov      w4, #0x32
00612628:  sxtb     w9, w8
0061262c:  movk     w3, #1, lsl #16
00612630:  cmp      w9, #0
00612634:  csel     x0, x10, x21, mi
00612638:  csel     x1, x11, x8, mi
0061263c:  bl       #0x6660d0
00612640:  ldrsb    w8, [sp, #0xc7]
00612644:  mov      x23, x0
00612648:  tbz      w8, #0x1f, #0x61265c
0061264c:  ldr      x8, [sp, #0xc0]
00612650:  ldr      x0, [sp, #0xb0]
00612654:  and      x1, x8, #0x7fffffffffffffff
00612658:  bl       #0x546bc0
0061265c:  adrp     x2, #0xd64000
00612660:  add      x2, x2, #0x350
00612664:  b        #0x6126fc
00612668:  adrp     x8, #0xd64000
0061266c:  add      x8, x8, #0x348
00612670:  ldar     x23, [x8]
00612674:  cbnz     x23, #0x61270c
00612678:  ldrsb    x8, [x20, #0x17]
0061267c:  ldp      x9, x10, [x20]
00612680:  adrp     x3, #0x1ea000
00612684:  add      x3, x3, #0x690
00612688:  add      x0, sp, #0x90
0061268c:  cmp      x8, #0
00612690:  mov      w4, #0x14
00612694:  add      x21, sp, #0xb0
00612698:  csel     x1, x9, x20, mi
0061269c:  cmp      w8, #0
006126a0:  csel     x2, x10, x8, mi
006126a4:  add      x8, sp, #0xb0
006126a8:  bl       #0x5ff514
006126ac:  ldrb     w8, [sp, #0xc7]
006126b0:  ldp      x10, x11, [sp, #0xb0]
006126b4:  mov      w3, #0x86a0
006126b8:  mov      w2, #1
006126bc:  mov      w4, #0x32
006126c0:  sxtb     w9, w8
006126c4:  movk     w3, #1, lsl #16
006126c8:  cmp      w9, #0
006126cc:  csel     x0, x10, x21, mi
006126d0:  csel     x1, x11, x8, mi
006126d4:  bl       #0x6660d0
006126d8:  ldrsb    w8, [sp, #0xc7]
006126dc:  mov      x23, x0
006126e0:  tbz      w8, #0x1f, #0x6126f4
006126e4:  ldr      x8, [sp, #0xc0]
006126e8:  ldr      x0, [sp, #0xb0]
006126ec:  and      x1, x8, #0x7fffffffffffffff
006126f0:  bl       #0x546bc0
006126f4:  adrp     x2, #0xd64000
006126f8:  add      x2, x2, #0x348
006126fc:  mov      x0, xzr
00612700:  mov      x1, x23
00612704:  bl       #0xd0f5e0
00612708:  cbz      x23, #0x612718
0061270c:  mov      x0, x23
00612710:  mov      w1, w22
00612714:  bl       #0x666568
00612718:  ldr      x26, [x20, #0x590]
0061271c:  add      x25, x20, #0x598
00612720:  cmp      x26, x25
00612724:  b.eq     #0x61432c
00612728:  adrp     x23, #0x1d3000
0061272c:  add      x23, x23, #0x6f7
00612730:  add      x21, sp, #0xb0
00612734:  b        #0x612740
00612738:  cmp      x26, x25
0061273c:  b.eq     #0x61432c
00612740:  ldr      x8, [x26, #0x30]
00612744:  cmp      x8, #0xc8
00612748:  b.lt     #0x612ccc
0061274c:  ldr      x9, [x26, #0x28]
00612750:  add      x9, x9, x8, lsr #1
00612754:  sdiv     x22, x9, x8
00612758:  cmn      w22, #1
0061275c:  b.eq     #0x612ccc
00612760:  ldr      w24, [x26, #0x20]
00612764:  cmp      w24, #0
00612768:  b.gt     #0x61281c
0061276c:  cmn      w24, #1
00612770:  b.eq     #0x6128fc
00612774:  cbnz     w24, #0x6128d0
00612778:  tbz      w27, #0, #0x612a44
0061277c:  adrp     x8, #0xd64000
00612780:  add      x8, x8, #0x370
00612784:  ldar     x24, [x8]
00612788:  cbnz     x24, #0x612cc0
0061278c:  ldrsb    x8, [x20, #0x17]
00612790:  ldp      x9, x10, [x20]
00612794:  add      x0, sp, #0x90
00612798:  adrp     x3, #0x1b1000
0061279c:  add      x3, x3, #0x2f
006127a0:  cmp      x8, #0
006127a4:  mov      w4, #0x11
006127a8:  csel     x1, x9, x20, mi
006127ac:  cmp      w8, #0
006127b0:  csel     x2, x10, x8, mi
006127b4:  add      x8, sp, #0xb0
006127b8:  bl       #0x5ff514
006127bc:  ldrb     w8, [sp, #0xc7]
006127c0:  ldp      x10, x11, [sp, #0xb0]
006127c4:  mov      w2, #1
006127c8:  mov      w3, #0xc8
006127cc:  mov      w4, #0x32
006127d0:  sxtb     w9, w8
006127d4:  cmp      w9, #0
006127d8:  csel     x0, x10, x21, mi
006127dc:  csel     x1, x11, x8, mi
006127e0:  bl       #0x6660d0
006127e4:  ldrsb    w8, [sp, #0xc7]
006127e8:  mov      x24, x0
006127ec:  tbz      w8, #0x1f, #0x612800
006127f0:  ldr      x8, [sp, #0xc0]
006127f4:  ldr      x0, [sp, #0xb0]
006127f8:  and      x1, x8, #0x7fffffffffffffff
006127fc:  bl       #0x546bc0
00612800:  mov      x0, xzr
00612804:  mov      x1, x24
00612808:  adrp     x2, #0xd64000
0061280c:  add      x2, x2, #0x370
00612810:  bl       #0xd0f5e0
00612814:  cbnz     x24, #0x612cc0
00612818:  b        #0x612ccc
0061281c:  cmp      w24, #1
00612820:  b.eq     #0x6129a0
00612824:  cmp      w24, #2
00612828:  b.ne     #0x6128d0
0061282c:  tbz      w27, #0, #0x612ae4
00612830:  adrp     x8, #0xd64000
00612834:  add      x8, x8, #0x390
00612838:  ldar     x24, [x8]
0061283c:  cbnz     x24, #0x612cc0
00612840:  ldrsb    x8, [x20, #0x17]
00612844:  ldp      x9, x10, [x20]
00612848:  add      x0, sp, #0x90
0061284c:  adrp     x3, #0x1c8000
00612850:  add      x3, x3, #0x430
00612854:  cmp      x8, #0
00612858:  mov      w4, #0x11
0061285c:  csel     x1, x9, x20, mi
00612860:  cmp      w8, #0
00612864:  csel     x2, x10, x8, mi
00612868:  add      x8, sp, #0xb0
0061286c:  bl       #0x5ff514
00612870:  ldrb     w8, [sp, #0xc7]
00612874:  ldp      x10, x11, [sp, #0xb0]
00612878:  mov      w2, #1
0061287c:  mov      w3, #0xc8
00612880:  mov      w4, #0x32
00612884:  sxtb     w9, w8
00612888:  cmp      w9, #0
0061288c:  csel     x0, x10, x21, mi
00612890:  csel     x1, x11, x8, mi
00612894:  bl       #0x6660d0
00612898:  ldrsb    w8, [sp, #0xc7]
0061289c:  mov      x24, x0
006128a0:  tbz      w8, #0x1f, #0x6128b4
006128a4:  ldr      x8, [sp, #0xc0]
006128a8:  ldr      x0, [sp, #0xb0]
006128ac:  and      x1, x8, #0x7fffffffffffffff
006128b0:  bl       #0x546bc0
006128b4:  mov      x0, xzr
006128b8:  mov      x1, x24
006128bc:  adrp     x2, #0xd64000
006128c0:  add      x2, x2, #0x390
006128c4:  bl       #0xd0f5e0
006128c8:  cbnz     x24, #0x612cc0
006128cc:  b        #0x612ccc
006128d0:  bl       #0x4022fc
006128d4:  tbnz     w0, #0, #0x612ccc
006128d8:  adrp     x0, #0x1f4000
006128dc:  add      x0, x0, #0xe94
006128e0:  mov      x1, x23
006128e4:  mov      w2, #0x1062
006128e8:  adrp     x3, #0x1e4000
006128ec:  add      x3, x3, #0xac3
006128f0:  mov      w4, w24
006128f4:  bl       #0x623bb0
006128f8:  b        #0x612ccc
006128fc:  tbz      w27, #0, #0x612b84
00612900:  adrp     x8, #0xd64000
00612904:  add      x8, x8, #0x360
00612908:  ldar     x24, [x8]
0061290c:  cbnz     x24, #0x612cc0
00612910:  ldrsb    x8, [x20, #0x17]
00612914:  ldp      x9, x10, [x20]
00612918:  add      x0, sp, #0x90
0061291c:  adrp     x3, #0x1e4000
00612920:  add      x3, x3, #0xab4
00612924:  cmp      x8, #0
00612928:  mov      w4, #0xe
0061292c:  csel     x1, x9, x20, mi
00612930:  cmp      w8, #0
00612934:  csel     x2, x10, x8, mi
00612938:  add      x8, sp, #0xb0
0061293c:  bl       #0x5ff514
00612940:  ldrb     w8, [sp, #0xc7]
00612944:  ldp      x10, x11, [sp, #0xb0]
00612948:  mov      w2, #1
0061294c:  mov      w3, #0xc8
00612950:  mov      w4, #0x32
00612954:  sxtb     w9, w8
00612958:  cmp      w9, #0
0061295c:  csel     x0, x10, x21, mi
00612960:  csel     x1, x11, x8, mi
00612964:  bl       #0x6660d0
00612968:  ldrsb    w8, [sp, #0xc7]
0061296c:  mov      x24, x0
00612970:  tbz      w8, #0x1f, #0x612984
00612974:  ldr      x8, [sp, #0xc0]
00612978:  ldr      x0, [sp, #0xb0]
0061297c:  and      x1, x8, #0x7fffffffffffffff
00612980:  bl       #0x546bc0
00612984:  mov      x0, xzr
00612988:  mov      x1, x24
0061298c:  adrp     x2, #0xd64000
00612990:  add      x2, x2, #0x360
00612994:  bl       #0xd0f5e0
00612998:  cbnz     x24, #0x612cc0
0061299c:  b        #0x612ccc
006129a0:  tbz      w27, #0, #0x612c24
006129a4:  adrp     x8, #0xd64000
006129a8:  add      x8, x8, #0x380
006129ac:  ldar     x24, [x8]
006129b0:  cbnz     x24, #0x612cc0
006129b4:  ldrsb    x8, [x20, #0x17]
006129b8:  ldp      x9, x10, [x20]
006129bc:  add      x0, sp, #0x90
006129c0:  adrp     x3, #0x1d9000
006129c4:  add      x3, x3, #0x59a
006129c8:  cmp      x8, #0
006129cc:  mov      w4, #0x11
006129d0:  csel     x1, x9, x20, mi
006129d4:  cmp      w8, #0
006129d8:  csel     x2, x10, x8, mi
006129dc:  add      x8, sp, #0xb0
006129e0:  bl       #0x5ff514
006129e4:  ldrb     w8, [sp, #0xc7]
006129e8:  ldp      x10, x11, [sp, #0xb0]
006129ec:  mov      w2, #1
006129f0:  mov      w3, #0xc8
006129f4:  mov      w4, #0x32
006129f8:  sxtb     w9, w8
006129fc:  cmp      w9, #0
00612a00:  csel     x0, x10, x21, mi
00612a04:  csel     x1, x11, x8, mi
00612a08:  bl       #0x6660d0
00612a0c:  ldrsb    w8, [sp, #0xc7]
00612a10:  mov      x24, x0
00612a14:  tbz      w8, #0x1f, #0x612a28
00612a18:  ldr      x8, [sp, #0xc0]
00612a1c:  ldr      x0, [sp, #0xb0]
00612a20:  and      x1, x8, #0x7fffffffffffffff
00612a24:  bl       #0x546bc0
00612a28:  mov      x0, xzr
00612a2c:  mov      x1, x24
00612a30:  adrp     x2, #0xd64000
00612a34:  add      x2, x2, #0x380
00612a38:  bl       #0xd0f5e0
00612a3c:  cbnz     x24, #0x612cc0
00612a40:  b        #0x612ccc
00612a44:  adrp     x8, #0xd64000
00612a48:  add      x8, x8, #0x368
00612a4c:  ldar     x24, [x8]
00612a50:  cbnz     x24, #0x612cc0
00612a54:  ldrsb    x8, [x20, #0x17]
00612a58:  ldp      x9, x10, [x20]
00612a5c:  add      x0, sp, #0x90
00612a60:  adrp     x3, #0x1b1000
00612a64:  add      x3, x3, #0x2f
00612a68:  cmp      x8, #0
00612a6c:  mov      w4, #0x11
00612a70:  csel     x1, x9, x20, mi
00612a74:  cmp      w8, #0
00612a78:  csel     x2, x10, x8, mi
00612a7c:  add      x8, sp, #0xb0
00612a80:  bl       #0x5ff514
00612a84:  ldrb     w8, [sp, #0xc7]
00612a88:  ldp      x10, x11, [sp, #0xb0]
00612a8c:  mov      w2, #1
00612a90:  mov      w3, #0xc8
00612a94:  mov      w4, #0x32
00612a98:  sxtb     w9, w8
00612a9c:  cmp      w9, #0
00612aa0:  csel     x0, x10, x21, mi
00612aa4:  csel     x1, x11, x8, mi
00612aa8:  bl       #0x6660d0
00612aac:  ldrsb    w8, [sp, #0xc7]
00612ab0:  mov      x24, x0
00612ab4:  tbz      w8, #0x1f, #0x612ac8
00612ab8:  ldr      x8, [sp, #0xc0]
00612abc:  ldr      x0, [sp, #0xb0]
00612ac0:  and      x1, x8, #0x7fffffffffffffff
00612ac4:  bl       #0x546bc0
00612ac8:  mov      x0, xzr
00612acc:  mov      x1, x24
00612ad0:  adrp     x2, #0xd64000
00612ad4:  add      x2, x2, #0x368
00612ad8:  bl       #0xd0f5e0
00612adc:  cbnz     x24, #0x612cc0
00612ae0:  b        #0x612ccc
00612ae4:  adrp     x8, #0xd64000
00612ae8:  add      x8, x8, #0x388
00612aec:  ldar     x24, [x8]
00612af0:  cbnz     x24, #0x612cc0
00612af4:  ldrsb    x8, [x20, #0x17]
00612af8:  ldp      x9, x10, [x20]
00612afc:  add      x0, sp, #0x90
00612b00:  adrp     x3, #0x1c8000
00612b04:  add      x3, x3, #0x430
00612b08:  cmp      x8, #0
00612b0c:  mov      w4, #0x11
00612b10:  csel     x1, x9, x20, mi
00612b14:  cmp      w8, #0
00612b18:  csel     x2, x10, x8, mi
00612b1c:  add      x8, sp, #0xb0
00612b20:  bl       #0x5ff514
00612b24:  ldrb     w8, [sp, #0xc7]
00612b28:  ldp      x10, x11, [sp, #0xb0]
00612b2c:  mov      w2, #1
00612b30:  mov      w3, #0xc8
00612b34:  mov      w4, #0x32
00612b38:  sxtb     w9, w8
00612b3c:  cmp      w9, #0
00612b40:  csel     x0, x10, x21, mi
00612b44:  csel     x1, x11, x8, mi
00612b48:  bl       #0x6660d0
00612b4c:  ldrsb    w8, [sp, #0xc7]
00612b50:  mov      x24, x0
00612b54:  tbz      w8, #0x1f, #0x612b68
00612b58:  ldr      x8, [sp, #0xc0]
00612b5c:  ldr      x0, [sp, #0xb0]
00612b60:  and      x1, x8, #0x7fffffffffffffff
00612b64:  bl       #0x546bc0
00612b68:  mov      x0, xzr
00612b6c:  mov      x1, x24
00612b70:  adrp     x2, #0xd64000
00612b74:  add      x2, x2, #0x388
00612b78:  bl       #0xd0f5e0
00612b7c:  cbnz     x24, #0x612cc0
00612b80:  b        #0x612ccc
00612b84:  adrp     x8, #0xd64000
00612b88:  add      x8, x8, #0x358
00612b8c:  ldar     x24, [x8]
00612b90:  cbnz     x24, #0x612cc0
00612b94:  ldrsb    x8, [x20, #0x17]
00612b98:  ldp      x9, x10, [x20]
00612b9c:  add      x0, sp, #0x90
00612ba0:  adrp     x3, #0x1e4000
00612ba4:  add      x3, x3, #0xab4
00612ba8:  cmp      x8, #0
00612bac:  mov      w4, #0xe
00612bb0:  csel     x1, x9, x20, mi
00612bb4:  cmp      w8, #0
00612bb8:  csel     x2, x10, x8, mi
00612bbc:  add      x8, sp, #0xb0
00612bc0:  bl       #0x5ff514
00612bc4:  ldrb     w8, [sp, #0xc7]
00612bc8:  ldp      x10, x11, [sp, #0xb0]
00612bcc:  mov      w2, #1
00612bd0:  mov      w3, #0xc8
00612bd4:  mov      w4, #0x32
00612bd8:  sxtb     w9, w8
00612bdc:  cmp      w9, #0
00612be0:  csel     x0, x10, x21, mi
00612be4:  csel     x1, x11, x8, mi
00612be8:  bl       #0x6660d0
00612bec:  ldrsb    w8, [sp, #0xc7]
00612bf0:  mov      x24, x0
00612bf4:  tbz      w8, #0x1f, #0x612c08
00612bf8:  ldr      x8, [sp, #0xc0]
00612bfc:  ldr      x0, [sp, #0xb0]
00612c00:  and      x1, x8, #0x7fffffffffffffff
00612c04:  bl       #0x546bc0
00612c08:  mov      x0, xzr
00612c0c:  mov      x1, x24
00612c10:  adrp     x2, #0xd64000
00612c14:  add      x2, x2, #0x358
00612c18:  bl       #0xd0f5e0
00612c1c:  cbnz     x24, #0x612cc0
00612c20:  b        #0x612ccc
00612c24:  adrp     x8, #0xd64000
00612c28:  add      x8, x8, #0x378
00612c2c:  ldar     x24, [x8]
00612c30:  cbnz     x24, #0x612cc0
00612c34:  ldrsb    x8, [x20, #0x17]
00612c38:  ldp      x9, x10, [x20]
00612c3c:  add      x0, sp, #0x90
00612c40:  adrp     x3, #0x1d9000
00612c44:  add      x3, x3, #0x59a
00612c48:  cmp      x8, #0
00612c4c:  mov      w4, #0x11
00612c50:  csel     x1, x9, x20, mi
00612c54:  cmp      w8, #0
00612c58:  csel     x2, x10, x8, mi
00612c5c:  add      x8, sp, #0xb0
00612c60:  bl       #0x5ff514
00612c64:  ldrb     w8, [sp, #0xc7]
00612c68:  ldp      x10, x11, [sp, #0xb0]
00612c6c:  mov      w2, #1
00612c70:  mov      w3, #0xc8
00612c74:  mov      w4, #0x32
00612c78:  sxtb     w9, w8
00612c7c:  cmp      w9, #0
00612c80:  csel     x0, x10, x21, mi
00612c84:  csel     x1, x11, x8, mi
00612c88:  bl       #0x6660d0
00612c8c:  ldrsb    w8, [sp, #0xc7]
00612c90:  mov      x24, x0
00612c94:  tbz      w8, #0x1f, #0x612ca8
00612c98:  ldr      x8, [sp, #0xc0]
00612c9c:  ldr      x0, [sp, #0xb0]
00612ca0:  and      x1, x8, #0x7fffffffffffffff
00612ca4:  bl       #0x546bc0
00612ca8:  mov      x0, xzr
00612cac:  mov      x1, x24
00612cb0:  adrp     x2, #0xd64000
00612cb4:  add      x2, x2, #0x378
00612cb8:  bl       #0xd0f5e0
00612cbc:  cbz      x24, #0x612ccc
00612cc0:  mov      x0, x24
00612cc4:  mov      w1, w22
00612cc8:  bl       #0x666568
00612ccc:  ldr      x8, [x26, #0x40]
00612cd0:  cmp      x8, #0xc8
00612cd4:  b.lt     #0x613258
00612cd8:  ldr      x9, [x26, #0x38]
00612cdc:  add      x9, x9, x8, lsr #1
00612ce0:  sdiv     x22, x9, x8
00612ce4:  cmn      w22, #1
00612ce8:  b.eq     #0x613258
00612cec:  ldr      w24, [x26, #0x20]
00612cf0:  cmp      w24, #0
00612cf4:  b.gt     #0x612da8
00612cf8:  cmn      w24, #1
00612cfc:  b.eq     #0x612e88
00612d00:  cbnz     w24, #0x612e5c
00612d04:  tbz      w27, #0, #0x612fd0
00612d08:  adrp     x8, #0xd64000
00612d0c:  add      x8, x8, #0x3b0
00612d10:  ldar     x24, [x8]
00612d14:  cbnz     x24, #0x61324c
00612d18:  ldrsb    x8, [x20, #0x17]
00612d1c:  ldp      x9, x10, [x20]
00612d20:  add      x0, sp, #0x90
00612d24:  adrp     x3, #0x1a0000
00612d28:  add      x3, x3, #0x6c1
00612d2c:  cmp      x8, #0
00612d30:  mov      w4, #0x11
00612d34:  csel     x1, x9, x20, mi
00612d38:  cmp      w8, #0
00612d3c:  csel     x2, x10, x8, mi
00612d40:  add      x8, sp, #0xb0
00612d44:  bl       #0x5ff514
00612d48:  ldrb     w8, [sp, #0xc7]
00612d4c:  ldp      x10, x11, [sp, #0xb0]
00612d50:  mov      w2, #1
00612d54:  mov      w3, #0x1f4
00612d58:  mov      w4, #0x32
00612d5c:  sxtb     w9, w8
00612d60:  cmp      w9, #0
00612d64:  csel     x0, x10, x21, mi
00612d68:  csel     x1, x11, x8, mi
00612d6c:  bl       #0x6660d0
00612d70:  ldrsb    w8, [sp, #0xc7]
00612d74:  mov      x24, x0
00612d78:  tbz      w8, #0x1f, #0x612d8c
00612d7c:  ldr      x8, [sp, #0xc0]
00612d80:  ldr      x0, [sp, #0xb0]
00612d84:  and      x1, x8, #0x7fffffffffffffff
00612d88:  bl       #0x546bc0
00612d8c:  mov      x0, xzr
00612d90:  mov      x1, x24
00612d94:  adrp     x2, #0xd64000
00612d98:  add      x2, x2, #0x3b0
00612d9c:  bl       #0xd0f5e0
00612da0:  cbnz     x24, #0x61324c
00612da4:  b        #0x613258
00612da8:  cmp      w24, #1
00612dac:  b.eq     #0x612f2c
00612db0:  cmp      w24, #2
00612db4:  b.ne     #0x612e5c
00612db8:  tbz      w27, #0, #0x613070
00612dbc:  adrp     x8, #0xd64000
00612dc0:  add      x8, x8, #0x3d0
00612dc4:  ldar     x24, [x8]
00612dc8:  cbnz     x24, #0x61324c
00612dcc:  ldrsb    x8, [x20, #0x17]
00612dd0:  ldp      x9, x10, [x20]
00612dd4:  add      x0, sp, #0x90
00612dd8:  adrp     x3, #0x1a9000
00612ddc:  add      x3, x3, #0x224
00612de0:  cmp      x8, #0
00612de4:  mov      w4, #0x11
00612de8:  csel     x1, x9, x20, mi
00612dec:  cmp      w8, #0
00612df0:  csel     x2, x10, x8, mi
00612df4:  add      x8, sp, #0xb0
00612df8:  bl       #0x5ff514
00612dfc:  ldrb     w8, [sp, #0xc7]
00612e00:  ldp      x10, x11, [sp, #0xb0]
00612e04:  mov      w2, #1
00612e08:  mov      w3, #0x1f4
00612e0c:  mov      w4, #0x32
00612e10:  sxtb     w9, w8
00612e14:  cmp      w9, #0
00612e18:  csel     x0, x10, x21, mi
00612e1c:  csel     x1, x11, x8, mi
00612e20:  bl       #0x6660d0
00612e24:  ldrsb    w8, [sp, #0xc7]
00612e28:  mov      x24, x0
00612e2c:  tbz      w8, #0x1f, #0x612e40
00612e30:  ldr      x8, [sp, #0xc0]
00612e34:  ldr      x0, [sp, #0xb0]
00612e38:  and      x1, x8, #0x7fffffffffffffff
00612e3c:  bl       #0x546bc0
00612e40:  mov      x0, xzr
00612e44:  mov      x1, x24
00612e48:  adrp     x2, #0xd64000
00612e4c:  add      x2, x2, #0x3d0
00612e50:  bl       #0xd0f5e0
00612e54:  cbnz     x24, #0x61324c
00612e58:  b        #0x613258
00612e5c:  bl       #0x4022fc
00612e60:  tbnz     w0, #0, #0x613258
00612e64:  adrp     x0, #0x1f4000
00612e68:  add      x0, x0, #0xe94
00612e6c:  mov      x1, x23
00612e70:  mov      w2, #0x1102
00612e74:  adrp     x3, #0x197000
00612e78:  add      x3, x3, #0xd32
00612e7c:  mov      w4, w24
00612e80:  bl       #0x623bb0
00612e84:  b        #0x613258
00612e88:  tbz      w27, #0, #0x613110
00612e8c:  adrp     x8, #0xd64000
00612e90:  add      x8, x8, #0x3a0
00612e94:  ldar     x24, [x8]
00612e98:  cbnz     x24, #0x61324c
00612e9c:  ldrsb    x8, [x20, #0x17]
00612ea0:  ldp      x9, x10, [x20]
00612ea4:  add      x0, sp, #0x90
00612ea8:  adrp     x3, #0x1ca000
00612eac:  add      x3, x3, #0xdd9
00612eb0:  cmp      x8, #0
00612eb4:  mov      w4, #0xe
00612eb8:  csel     x1, x9, x20, mi
00612ebc:  cmp      w8, #0
00612ec0:  csel     x2, x10, x8, mi
00612ec4:  add      x8, sp, #0xb0
00612ec8:  bl       #0x5ff514
00612ecc:  ldrb     w8, [sp, #0xc7]
00612ed0:  ldp      x10, x11, [sp, #0xb0]
00612ed4:  mov      w2, #1
00612ed8:  mov      w3, #0x1f4
00612edc:  mov      w4, #0x32
00612ee0:  sxtb     w9, w8
00612ee4:  cmp      w9, #0
00612ee8:  csel     x0, x10, x21, mi
00612eec:  csel     x1, x11, x8, mi
00612ef0:  bl       #0x6660d0
00612ef4:  ldrsb    w8, [sp, #0xc7]
00612ef8:  mov      x24, x0
00612efc:  tbz      w8, #0x1f, #0x612f10
00612f00:  ldr      x8, [sp, #0xc0]
00612f04:  ldr      x0, [sp, #0xb0]
00612f08:  and      x1, x8, #0x7fffffffffffffff
00612f0c:  bl       #0x546bc0
00612f10:  mov      x0, xzr
00612f14:  mov      x1, x24
00612f18:  adrp     x2, #0xd64000
00612f1c:  add      x2, x2, #0x3a0
00612f20:  bl       #0xd0f5e0
00612f24:  cbnz     x24, #0x61324c
00612f28:  b        #0x613258
00612f2c:  tbz      w27, #0, #0x6131b0
00612f30:  adrp     x8, #0xd64000
00612f34:  add      x8, x8, #0x3c0
00612f38:  ldar     x24, [x8]
00612f3c:  cbnz     x24, #0x61324c
00612f40:  ldrsb    x8, [x20, #0x17]
00612f44:  ldp      x9, x10, [x20]
00612f48:  add      x0, sp, #0x90
00612f4c:  adrp     x3, #0x1d3000
00612f50:  add      x3, x3, #0x747
00612f54:  cmp      x8, #0
00612f58:  mov      w4, #0x11
00612f5c:  csel     x1, x9, x20, mi
00612f60:  cmp      w8, #0
00612f64:  csel     x2, x10, x8, mi
00612f68:  add      x8, sp, #0xb0
00612f6c:  bl       #0x5ff514
00612f70:  ldrb     w8, [sp, #0xc7]
00612f74:  ldp      x10, x11, [sp, #0xb0]
00612f78:  mov      w2, #1
00612f7c:  mov      w3, #0x1f4
00612f80:  mov      w4, #0x32
00612f84:  sxtb     w9, w8
00612f88:  cmp      w9, #0
00612f8c:  csel     x0, x10, x21, mi
00612f90:  csel     x1, x11, x8, mi
00612f94:  bl       #0x6660d0
00612f98:  ldrsb    w8, [sp, #0xc7]
00612f9c:  mov      x24, x0
00612fa0:  tbz      w8, #0x1f, #0x612fb4
00612fa4:  ldr      x8, [sp, #0xc0]
00612fa8:  ldr      x0, [sp, #0xb0]
00612fac:  and      x1, x8, #0x7fffffffffffffff
00612fb0:  bl       #0x546bc0
00612fb4:  mov      x0, xzr
00612fb8:  mov      x1, x24
00612fbc:  adrp     x2, #0xd64000
00612fc0:  add      x2, x2, #0x3c0
00612fc4:  bl       #0xd0f5e0
00612fc8:  cbnz     x24, #0x61324c
00612fcc:  b        #0x613258
00612fd0:  adrp     x8, #0xd64000
00612fd4:  add      x8, x8, #0x3a8
00612fd8:  ldar     x24, [x8]
00612fdc:  cbnz     x24, #0x61324c
00612fe0:  ldrsb    x8, [x20, #0x17]
00612fe4:  ldp      x9, x10, [x20]
00612fe8:  add      x0, sp, #0x90
00612fec:  adrp     x3, #0x1a0000
00612ff0:  add      x3, x3, #0x6c1
00612ff4:  cmp      x8, #0
00612ff8:  mov      w4, #0x11
00612ffc:  csel     x1, x9, x20, mi
00613000:  cmp      w8, #0
00613004:  csel     x2, x10, x8, mi
00613008:  add      x8, sp, #0xb0
0061300c:  bl       #0x5ff514
00613010:  ldrb     w8, [sp, #0xc7]
00613014:  ldp      x10, x11, [sp, #0xb0]
00613018:  mov      w2, #1
0061301c:  mov      w3, #0x1f4
00613020:  mov      w4, #0x32
00613024:  sxtb     w9, w8
00613028:  cmp      w9, #0
0061302c:  csel     x0, x10, x21, mi
00613030:  csel     x1, x11, x8, mi
00613034:  bl       #0x6660d0
00613038:  ldrsb    w8, [sp, #0xc7]
0061303c:  mov      x24, x0
00613040:  tbz      w8, #0x1f, #0x613054
00613044:  ldr      x8, [sp, #0xc0]
00613048:  ldr      x0, [sp, #0xb0]
0061304c:  and      x1, x8, #0x7fffffffffffffff
00613050:  bl       #0x546bc0
00613054:  mov      x0, xzr
00613058:  mov      x1, x24
0061305c:  adrp     x2, #0xd64000
00613060:  add      x2, x2, #0x3a8
00613064:  bl       #0xd0f5e0
00613068:  cbnz     x24, #0x61324c
0061306c:  b        #0x613258
00613070:  adrp     x8, #0xd64000
00613074:  add      x8, x8, #0x3c8
00613078:  ldar     x24, [x8]
0061307c:  cbnz     x24, #0x61324c
00613080:  ldrsb    x8, [x20, #0x17]
00613084:  ldp      x9, x10, [x20]
00613088:  add      x0, sp, #0x90
0061308c:  adrp     x3, #0x1a9000
00613090:  add      x3, x3, #0x224
00613094:  cmp      x8, #0
00613098:  mov      w4, #0x11
0061309c:  csel     x1, x9, x20, mi
006130a0:  cmp      w8, #0
006130a4:  csel     x2, x10, x8, mi
006130a8:  add      x8, sp, #0xb0
006130ac:  bl       #0x5ff514
006130b0:  ldrb     w8, [sp, #0xc7]
006130b4:  ldp      x10, x11, [sp, #0xb0]
006130b8:  mov      w2, #1
006130bc:  mov      w3, #0x1f4
006130c0:  mov      w4, #0x32
006130c4:  sxtb     w9, w8
006130c8:  cmp      w9, #0
006130cc:  csel     x0, x10, x21, mi
006130d0:  csel     x1, x11, x8, mi
006130d4:  bl       #0x6660d0
006130d8:  ldrsb    w8, [sp, #0xc7]
006130dc:  mov      x24, x0
006130e0:  tbz      w8, #0x1f, #0x6130f4
006130e4:  ldr      x8, [sp, #0xc0]
006130e8:  ldr      x0, [sp, #0xb0]
006130ec:  and      x1, x8, #0x7fffffffffffffff
006130f0:  bl       #0x546bc0
006130f4:  mov      x0, xzr
006130f8:  mov      x1, x24
006130fc:  adrp     x2, #0xd64000
00613100:  add      x2, x2, #0x3c8
00613104:  bl       #0xd0f5e0
00613108:  cbnz     x24, #0x61324c
0061310c:  b        #0x613258
00613110:  adrp     x8, #0xd64000
00613114:  add      x8, x8, #0x398
00613118:  ldar     x24, [x8]
0061311c:  cbnz     x24, #0x61324c
00613120:  ldrsb    x8, [x20, #0x17]
00613124:  ldp      x9, x10, [x20]
00613128:  add      x0, sp, #0x90
0061312c:  adrp     x3, #0x1ca000
00613130:  add      x3, x3, #0xdd9
00613134:  cmp      x8, #0
00613138:  mov      w4, #0xe
0061313c:  csel     x1, x9, x20, mi
00613140:  cmp      w8, #0
00613144:  csel     x2, x10, x8, mi
00613148:  add      x8, sp, #0xb0
0061314c:  bl       #0x5ff514
00613150:  ldrb     w8, [sp, #0xc7]
00613154:  ldp      x10, x11, [sp, #0xb0]
00613158:  mov      w2, #1
0061315c:  mov      w3, #0x1f4
00613160:  mov      w4, #0x32
00613164:  sxtb     w9, w8
00613168:  cmp      w9, #0
0061316c:  csel     x0, x10, x21, mi
00613170:  csel     x1, x11, x8, mi
00613174:  bl       #0x6660d0
00613178:  ldrsb    w8, [sp, #0xc7]
0061317c:  mov      x24, x0
00613180:  tbz      w8, #0x1f, #0x613194
00613184:  ldr      x8, [sp, #0xc0]
00613188:  ldr      x0, [sp, #0xb0]
0061318c:  and      x1, x8, #0x7fffffffffffffff
00613190:  bl       #0x546bc0
00613194:  mov      x0, xzr
00613198:  mov      x1, x24
0061319c:  adrp     x2, #0xd64000
006131a0:  add      x2, x2, #0x398
006131a4:  bl       #0xd0f5e0
006131a8:  cbnz     x24, #0x61324c
006131ac:  b        #0x613258
006131b0:  adrp     x8, #0xd64000
006131b4:  add      x8, x8, #0x3b8
006131b8:  ldar     x24, [x8]
006131bc:  cbnz     x24, #0x61324c
006131c0:  ldrsb    x8, [x20, #0x17]
006131c4:  ldp      x9, x10, [x20]
006131c8:  add      x0, sp, #0x90
006131cc:  adrp     x3, #0x1d3000
006131d0:  add      x3, x3, #0x747
006131d4:  cmp      x8, #0
006131d8:  mov      w4, #0x11
006131dc:  csel     x1, x9, x20, mi
006131e0:  cmp      w8, #0
006131e4:  csel     x2, x10, x8, mi
006131e8:  add      x8, sp, #0xb0
006131ec:  bl       #0x5ff514
006131f0:  ldrb     w8, [sp, #0xc7]
006131f4:  ldp      x10, x11, [sp, #0xb0]
006131f8:  mov      w2, #1
006131fc:  mov      w3, #0x1f4
00613200:  mov      w4, #0x32
00613204:  sxtb     w9, w8
00613208:  cmp      w9, #0
0061320c:  csel     x0, x10, x21, mi
00613210:  csel     x1, x11, x8, mi
00613214:  bl       #0x6660d0
00613218:  ldrsb    w8, [sp, #0xc7]
0061321c:  mov      x24, x0
00613220:  tbz      w8, #0x1f, #0x613234
00613224:  ldr      x8, [sp, #0xc0]
00613228:  ldr      x0, [sp, #0xb0]
0061322c:  and      x1, x8, #0x7fffffffffffffff
00613230:  bl       #0x546bc0
00613234:  mov      x0, xzr
00613238:  mov      x1, x24
0061323c:  adrp     x2, #0xd64000
00613240:  add      x2, x2, #0x3b8
00613244:  bl       #0xd0f5e0
00613248:  cbz      x24, #0x613258
0061324c:  mov      x0, x24
00613250:  mov      w1, w22
00613254:  bl       #0x666568
00613258:  ldr      x8, [x26, #0x50]
0061325c:  cmp      x8, #0xc8
00613260:  b.lt     #0x6137e4
00613264:  ldr      x9, [x26, #0x48]
00613268:  add      x9, x9, x8, lsr #1
0061326c:  sdiv     x22, x9, x8
00613270:  cmn      w22, #1
00613274:  b.eq     #0x6137e4
00613278:  ldr      w24, [x26, #0x20]
0061327c:  cmp      w24, #0
00613280:  b.gt     #0x613334
00613284:  cmn      w24, #1
00613288:  b.eq     #0x613414
0061328c:  cbnz     w24, #0x6133e8
00613290:  tbz      w27, #0, #0x61355c
00613294:  adrp     x8, #0xd64000
00613298:  add      x8, x8, #0x3f0
0061329c:  ldar     x24, [x8]
006132a0:  cbnz     x24, #0x6137d8
006132a4:  ldrsb    x8, [x20, #0x17]
006132a8:  ldp      x9, x10, [x20]
006132ac:  add      x0, sp, #0x90
006132b0:  adrp     x3, #0x1c2000
006132b4:  add      x3, x3, #0x63a
006132b8:  cmp      x8, #0
006132bc:  mov      w4, #0x12
006132c0:  csel     x1, x9, x20, mi
006132c4:  cmp      w8, #0
006132c8:  csel     x2, x10, x8, mi
006132cc:  add      x8, sp, #0xb0
006132d0:  bl       #0x5ff514
006132d4:  ldrb     w8, [sp, #0xc7]
006132d8:  ldp      x10, x11, [sp, #0xb0]
006132dc:  mov      w2, #1
006132e0:  mov      w3, #0xc8
006132e4:  mov      w4, #0x32
006132e8:  sxtb     w9, w8
006132ec:  cmp      w9, #0
006132f0:  csel     x0, x10, x21, mi
006132f4:  csel     x1, x11, x8, mi
006132f8:  bl       #0x6660d0
006132fc:  ldrsb    w8, [sp, #0xc7]
00613300:  mov      x24, x0
00613304:  tbz      w8, #0x1f, #0x613318
00613308:  ldr      x8, [sp, #0xc0]
0061330c:  ldr      x0, [sp, #0xb0]
00613310:  and      x1, x8, #0x7fffffffffffffff
00613314:  bl       #0x546bc0
00613318:  mov      x0, xzr
0061331c:  mov      x1, x24
00613320:  adrp     x2, #0xd64000
00613324:  add      x2, x2, #0x3f0
00613328:  bl       #0xd0f5e0
0061332c:  cbnz     x24, #0x6137d8
00613330:  b        #0x6137e4
00613334:  cmp      w24, #1
00613338:  b.eq     #0x6134b8
0061333c:  cmp      w24, #2
00613340:  b.ne     #0x6133e8
00613344:  tbz      w27, #0, #0x6135fc
00613348:  adrp     x8, #0xd64000
0061334c:  add      x8, x8, #0x410
00613350:  ldar     x24, [x8]
00613354:  cbnz     x24, #0x6137d8
00613358:  ldrsb    x8, [x20, #0x17]
0061335c:  ldp      x9, x10, [x20]
00613360:  add      x0, sp, #0x90
00613364:  adrp     x3, #0x1bf000
00613368:  add      x3, x3, #0x6bc
0061336c:  cmp      x8, #0
00613370:  mov      w4, #0x12
00613374:  csel     x1, x9, x20, mi
00613378:  cmp      w8, #0
0061337c:  csel     x2, x10, x8, mi
00613380:  add      x8, sp, #0xb0
00613384:  bl       #0x5ff514
00613388:  ldrb     w8, [sp, #0xc7]
0061338c:  ldp      x10, x11, [sp, #0xb0]
00613390:  mov      w2, #1
00613394:  mov      w3, #0xc8
00613398:  mov      w4, #0x32
0061339c:  sxtb     w9, w8
006133a0:  cmp      w9, #0
006133a4:  csel     x0, x10, x21, mi
006133a8:  csel     x1, x11, x8, mi
006133ac:  bl       #0x6660d0
006133b0:  ldrsb    w8, [sp, #0xc7]
006133b4:  mov      x24, x0
006133b8:  tbz      w8, #0x1f, #0x6133cc
006133bc:  ldr      x8, [sp, #0xc0]
006133c0:  ldr      x0, [sp, #0xb0]
006133c4:  and      x1, x8, #0x7fffffffffffffff
006133c8:  bl       #0x546bc0
006133cc:  mov      x0, xzr
006133d0:  mov      x1, x24
006133d4:  adrp     x2, #0xd64000
006133d8:  add      x2, x2, #0x410
006133dc:  bl       #0xd0f5e0
006133e0:  cbnz     x24, #0x6137d8
006133e4:  b        #0x6137e4
006133e8:  bl       #0x4022fc
006133ec:  tbnz     w0, #0, #0x6137e4
006133f0:  adrp     x0, #0x1f4000
006133f4:  add      x0, x0, #0xe94
006133f8:  mov      x1, x23
006133fc:  mov      w2, #0x11a2
00613400:  adrp     x3, #0x1e4000
00613404:  add      x3, x3, #0xaee
00613408:  mov      w4, w24
0061340c:  bl       #0x623bb0
00613410:  b        #0x6137e4
00613414:  tbz      w27, #0, #0x61369c
00613418:  adrp     x8, #0xd64000
0061341c:  add      x8, x8, #0x3e0
00613420:  ldar     x24, [x8]
00613424:  cbnz     x24, #0x6137d8
00613428:  ldrsb    x8, [x20, #0x17]
0061342c:  ldp      x9, x10, [x20]
00613430:  add      x0, sp, #0x90
00613434:  adrp     x3, #0x1ae000
00613438:  add      x3, x3, #0x561
0061343c:  cmp      x8, #0
00613440:  mov      w4, #0xf
00613444:  csel     x1, x9, x20, mi
00613448:  cmp      w8, #0
0061344c:  csel     x2, x10, x8, mi
00613450:  add      x8, sp, #0xb0
00613454:  bl       #0x5ff514
00613458:  ldrb     w8, [sp, #0xc7]
0061345c:  ldp      x10, x11, [sp, #0xb0]
00613460:  mov      w2, #1
00613464:  mov      w3, #0xc8
00613468:  mov      w4, #0x32
0061346c:  sxtb     w9, w8
00613470:  cmp      w9, #0
00613474:  csel     x0, x10, x21, mi
00613478:  csel     x1, x11, x8, mi
0061347c:  bl       #0x6660d0
00613480:  ldrsb    w8, [sp, #0xc7]
00613484:  mov      x24, x0
00613488:  tbz      w8, #0x1f, #0x61349c
0061348c:  ldr      x8, [sp, #0xc0]
00613490:  ldr      x0, [sp, #0xb0]
00613494:  and      x1, x8, #0x7fffffffffffffff
00613498:  bl       #0x546bc0
0061349c:  mov      x0, xzr
006134a0:  mov      x1, x24
006134a4:  adrp     x2, #0xd64000
006134a8:  add      x2, x2, #0x3e0
006134ac:  bl       #0xd0f5e0
006134b0:  cbnz     x24, #0x6137d8
006134b4:  b        #0x6137e4
006134b8:  tbz      w27, #0, #0x61373c
006134bc:  adrp     x8, #0xd64000
006134c0:  add      x8, x8, #0x400
006134c4:  ldar     x24, [x8]
006134c8:  cbnz     x24, #0x6137d8
006134cc:  ldrsb    x8, [x20, #0x17]
006134d0:  ldp      x9, x10, [x20]
006134d4:  add      x0, sp, #0x90
006134d8:  adrp     x3, #0x1d9000
006134dc:  add      x3, x3, #0x5ac
006134e0:  cmp      x8, #0
006134e4:  mov      w4, #0x12
006134e8:  csel     x1, x9, x20, mi
006134ec:  cmp      w8, #0
006134f0:  csel     x2, x10, x8, mi
006134f4:  add      x8, sp, #0xb0
006134f8:  bl       #0x5ff514
006134fc:  ldrb     w8, [sp, #0xc7]
00613500:  ldp      x10, x11, [sp, #0xb0]
00613504:  mov      w2, #1
00613508:  mov      w3, #0xc8
0061350c:  mov      w4, #0x32
00613510:  sxtb     w9, w8
00613514:  cmp      w9, #0
00613518:  csel     x0, x10, x21, mi
0061351c:  csel     x1, x11, x8, mi
00613520:  bl       #0x6660d0
00613524:  ldrsb    w8, [sp, #0xc7]
00613528:  mov      x24, x0
0061352c:  tbz      w8, #0x1f, #0x613540
00613530:  ldr      x8, [sp, #0xc0]
00613534:  ldr      x0, [sp, #0xb0]
00613538:  and      x1, x8, #0x7fffffffffffffff
0061353c:  bl       #0x546bc0
00613540:  mov      x0, xzr
00613544:  mov      x1, x24
00613548:  adrp     x2, #0xd64000
0061354c:  add      x2, x2, #0x400
00613550:  bl       #0xd0f5e0
00613554:  cbnz     x24, #0x6137d8
00613558:  b        #0x6137e4
0061355c:  adrp     x8, #0xd64000
00613560:  add      x8, x8, #0x3e8
00613564:  ldar     x24, [x8]
00613568:  cbnz     x24, #0x6137d8
0061356c:  ldrsb    x8, [x20, #0x17]
00613570:  ldp      x9, x10, [x20]
00613574:  add      x0, sp, #0x90
00613578:  adrp     x3, #0x1c2000
0061357c:  add      x3, x3, #0x63a
00613580:  cmp      x8, #0
00613584:  mov      w4, #0x12
00613588:  csel     x1, x9, x20, mi
0061358c:  cmp      w8, #0
00613590:  csel     x2, x10, x8, mi
00613594:  add      x8, sp, #0xb0
00613598:  bl       #0x5ff514
0061359c:  ldrb     w8, [sp, #0xc7]
006135a0:  ldp      x10, x11, [sp, #0xb0]
006135a4:  mov      w2, #1
006135a8:  mov      w3, #0xc8
006135ac:  mov      w4, #0x32
006135b0:  sxtb     w9, w8
006135b4:  cmp      w9, #0
006135b8:  csel     x0, x10, x21, mi
006135bc:  csel     x1, x11, x8, mi
006135c0:  bl       #0x6660d0
006135c4:  ldrsb    w8, [sp, #0xc7]
006135c8:  mov      x24, x0
006135cc:  tbz      w8, #0x1f, #0x6135e0
006135d0:  ldr      x8, [sp, #0xc0]
006135d4:  ldr      x0, [sp, #0xb0]
006135d8:  and      x1, x8, #0x7fffffffffffffff
006135dc:  bl       #0x546bc0
006135e0:  mov      x0, xzr
006135e4:  mov      x1, x24
006135e8:  adrp     x2, #0xd64000
006135ec:  add      x2, x2, #0x3e8
006135f0:  bl       #0xd0f5e0
006135f4:  cbnz     x24, #0x6137d8
006135f8:  b        #0x6137e4
006135fc:  adrp     x8, #0xd64000
00613600:  add      x8, x8, #0x408
00613604:  ldar     x24, [x8]
00613608:  cbnz     x24, #0x6137d8
0061360c:  ldrsb    x8, [x20, #0x17]
00613610:  ldp      x9, x10, [x20]
00613614:  add      x0, sp, #0x90
00613618:  adrp     x3, #0x1bf000
0061361c:  add      x3, x3, #0x6bc
00613620:  cmp      x8, #0
00613624:  mov      w4, #0x12
00613628:  csel     x1, x9, x20, mi
0061362c:  cmp      w8, #0
00613630:  csel     x2, x10, x8, mi
00613634:  add      x8, sp, #0xb0
00613638:  bl       #0x5ff514
0061363c:  ldrb     w8, [sp, #0xc7]
00613640:  ldp      x10, x11, [sp, #0xb0]
00613644:  mov      w2, #1
00613648:  mov      w3, #0xc8
0061364c:  mov      w4, #0x32
00613650:  sxtb     w9, w8
00613654:  cmp      w9, #0
00613658:  csel     x0, x10, x21, mi
0061365c:  csel     x1, x11, x8, mi
00613660:  bl       #0x6660d0
00613664:  ldrsb    w8, [sp, #0xc7]
00613668:  mov      x24, x0
0061366c:  tbz      w8, #0x1f, #0x613680
00613670:  ldr      x8, [sp, #0xc0]
00613674:  ldr      x0, [sp, #0xb0]
00613678:  and      x1, x8, #0x7fffffffffffffff
0061367c:  bl       #0x546bc0
00613680:  mov      x0, xzr
00613684:  mov      x1, x24
00613688:  adrp     x2, #0xd64000
0061368c:  add      x2, x2, #0x408
00613690:  bl       #0xd0f5e0
00613694:  cbnz     x24, #0x6137d8
00613698:  b        #0x6137e4
0061369c:  adrp     x8, #0xd64000
006136a0:  add      x8, x8, #0x3d8
006136a4:  ldar     x24, [x8]
006136a8:  cbnz     x24, #0x6137d8
006136ac:  ldrsb    x8, [x20, #0x17]
006136b0:  ldp      x9, x10, [x20]
006136b4:  add      x0, sp, #0x90
006136b8:  adrp     x3, #0x1ae000
006136bc:  add      x3, x3, #0x561
006136c0:  cmp      x8, #0
006136c4:  mov      w4, #0xf
006136c8:  csel     x1, x9, x20, mi
006136cc:  cmp      w8, #0
006136d0:  csel     x2, x10, x8, mi
006136d4:  add      x8, sp, #0xb0
006136d8:  bl       #0x5ff514
006136dc:  ldrb     w8, [sp, #0xc7]
006136e0:  ldp      x10, x11, [sp, #0xb0]
006136e4:  mov      w2, #1
006136e8:  mov      w3, #0xc8
006136ec:  mov      w4, #0x32
006136f0:  sxtb     w9, w8
006136f4:  cmp      w9, #0
006136f8:  csel     x0, x10, x21, mi
006136fc:  csel     x1, x11, x8, mi
00613700:  bl       #0x6660d0
00613704:  ldrsb    w8, [sp, #0xc7]
00613708:  mov      x24, x0
0061370c:  tbz      w8, #0x1f, #0x613720
00613710:  ldr      x8, [sp, #0xc0]
00613714:  ldr      x0, [sp, #0xb0]
00613718:  and      x1, x8, #0x7fffffffffffffff
0061371c:  bl       #0x546bc0
00613720:  mov      x0, xzr
00613724:  mov      x1, x24
00613728:  adrp     x2, #0xd64000
0061372c:  add      x2, x2, #0x3d8
00613730:  bl       #0xd0f5e0
00613734:  cbnz     x24, #0x6137d8
00613738:  b        #0x6137e4
0061373c:  adrp     x8, #0xd64000
00613740:  add      x8, x8, #0x3f8
00613744:  ldar     x24, [x8]
00613748:  cbnz     x24, #0x6137d8
0061374c:  ldrsb    x8, [x20, #0x17]
00613750:  ldp      x9, x10, [x20]
00613754:  add      x0, sp, #0x90
00613758:  adrp     x3, #0x1d9000
0061375c:  add      x3, x3, #0x5ac
00613760:  cmp      x8, #0
00613764:  mov      w4, #0x12
00613768:  csel     x1, x9, x20, mi
0061376c:  cmp      w8, #0
00613770:  csel     x2, x10, x8, mi
00613774:  add      x8, sp, #0xb0
00613778:  bl       #0x5ff514
0061377c:  ldrb     w8, [sp, #0xc7]
00613780:  ldp      x10, x11, [sp, #0xb0]
00613784:  mov      w2, #1
00613788:  mov      w3, #0xc8
0061378c:  mov      w4, #0x32
00613790:  sxtb     w9, w8
00613794:  cmp      w9, #0
00613798:  csel     x0, x10, x21, mi
0061379c:  csel     x1, x11, x8, mi
006137a0:  bl       #0x6660d0
006137a4:  ldrsb    w8, [sp, #0xc7]
006137a8:  mov      x24, x0
006137ac:  tbz      w8, #0x1f, #0x6137c0
006137b0:  ldr      x8, [sp, #0xc0]
006137b4:  ldr      x0, [sp, #0xb0]
006137b8:  and      x1, x8, #0x7fffffffffffffff
006137bc:  bl       #0x546bc0
006137c0:  mov      x0, xzr
006137c4:  mov      x1, x24
006137c8:  adrp     x2, #0xd64000
006137cc:  add      x2, x2, #0x3f8
006137d0:  bl       #0xd0f5e0
006137d4:  cbz      x24, #0x6137e4
006137d8:  mov      x0, x24
006137dc:  mov      w1, w22
006137e0:  bl       #0x666568
006137e4:  ldr      x8, [x26, #0x60]
006137e8:  cmp      x8, #0xc8
006137ec:  b.lt     #0x613d70
006137f0:  ldr      x9, [x26, #0x58]
006137f4:  add      x9, x9, x8, lsr #1
006137f8:  sdiv     x22, x9, x8
006137fc:  cmn      w22, #1
00613800:  b.eq     #0x613d70
00613804:  ldr      w24, [x26, #0x20]
00613808:  cmp      w24, #0
0061380c:  b.gt     #0x6138c0
00613810:  cmn      w24, #1
00613814:  b.eq     #0x6139a0
00613818:  cbnz     w24, #0x613974
0061381c:  tbz      w27, #0, #0x613ae8
00613820:  adrp     x8, #0xd64000
00613824:  add      x8, x8, #0x430
00613828:  ldar     x24, [x8]
0061382c:  cbnz     x24, #0x613d64
00613830:  ldrsb    x8, [x20, #0x17]
00613834:  ldp      x9, x10, [x20]
00613838:  add      x0, sp, #0x90
0061383c:  adrp     x3, #0x1b3000
00613840:  add      x3, x3, #0xe96
00613844:  cmp      x8, #0
00613848:  mov      w4, #0x11
0061384c:  csel     x1, x9, x20, mi
00613850:  cmp      w8, #0
00613854:  csel     x2, x10, x8, mi
00613858:  add      x8, sp, #0xb0
0061385c:  bl       #0x5ff514
00613860:  ldrb     w8, [sp, #0xc7]
00613864:  ldp      x10, x11, [sp, #0xb0]
00613868:  mov      w2, #1
0061386c:  mov      w3, #0x1f4
00613870:  mov      w4, #0x32
00613874:  sxtb     w9, w8
00613878:  cmp      w9, #0
0061387c:  csel     x0, x10, x21, mi
00613880:  csel     x1, x11, x8, mi
00613884:  bl       #0x6660d0
00613888:  ldrsb    w8, [sp, #0xc7]
0061388c:  mov      x24, x0
00613890:  tbz      w8, #0x1f, #0x6138a4
00613894:  ldr      x8, [sp, #0xc0]
00613898:  ldr      x0, [sp, #0xb0]
0061389c:  and      x1, x8, #0x7fffffffffffffff
006138a0:  bl       #0x546bc0
006138a4:  mov      x0, xzr
006138a8:  mov      x1, x24
006138ac:  adrp     x2, #0xd64000
006138b0:  add      x2, x2, #0x430
006138b4:  bl       #0xd0f5e0
006138b8:  cbnz     x24, #0x613d64
006138bc:  b        #0x613d70
006138c0:  cmp      w24, #1
006138c4:  b.eq     #0x613a44
006138c8:  cmp      w24, #2
006138cc:  b.ne     #0x613974
006138d0:  tbz      w27, #0, #0x613b88
006138d4:  adrp     x8, #0xd64000
006138d8:  add      x8, x8, #0x450
006138dc:  ldar     x24, [x8]
006138e0:  cbnz     x24, #0x613d64
006138e4:  ldrsb    x8, [x20, #0x17]
006138e8:  ldp      x9, x10, [x20]
006138ec:  add      x0, sp, #0x90
006138f0:  adrp     x3, #0x1ef000
006138f4:  add      x3, x3, #0xbb1
006138f8:  cmp      x8, #0
006138fc:  mov      w4, #0x11
00613900:  csel     x1, x9, x20, mi
00613904:  cmp      w8, #0
00613908:  csel     x2, x10, x8, mi
0061390c:  add      x8, sp, #0xb0
00613910:  bl       #0x5ff514
00613914:  ldrb     w8, [sp, #0xc7]
00613918:  ldp      x10, x11, [sp, #0xb0]
0061391c:  mov      w2, #1
00613920:  mov      w3, #0x1f4
00613924:  mov      w4, #0x32
00613928:  sxtb     w9, w8
0061392c:  cmp      w9, #0
00613930:  csel     x0, x10, x21, mi
00613934:  csel     x1, x11, x8, mi
00613938:  bl       #0x6660d0
0061393c:  ldrsb    w8, [sp, #0xc7]
00613940:  mov      x24, x0
00613944:  tbz      w8, #0x1f, #0x613958
00613948:  ldr      x8, [sp, #0xc0]
0061394c:  ldr      x0, [sp, #0xb0]
00613950:  and      x1, x8, #0x7fffffffffffffff
00613954:  bl       #0x546bc0
00613958:  mov      x0, xzr
0061395c:  mov      x1, x24
00613960:  adrp     x2, #0xd64000
00613964:  add      x2, x2, #0x450
00613968:  bl       #0xd0f5e0
0061396c:  cbnz     x24, #0x613d64
00613970:  b        #0x613d70
00613974:  bl       #0x4022fc
00613978:  tbnz     w0, #0, #0x613d70
0061397c:  adrp     x0, #0x1f4000
00613980:  add      x0, x0, #0xe94
00613984:  mov      x1, x23
00613988:  mov      w2, #0x1242
0061398c:  adrp     x3, #0x1a3000
00613990:  add      x3, x3, #0x733
00613994:  mov      w4, w24
00613998:  bl       #0x623bb0
0061399c:  b        #0x613d70
006139a0:  tbz      w27, #0, #0x613c28
006139a4:  adrp     x8, #0xd64000
006139a8:  add      x8, x8, #0x420
006139ac:  ldar     x24, [x8]
006139b0:  cbnz     x24, #0x613d64
006139b4:  ldrsb    x8, [x20, #0x17]
006139b8:  ldp      x9, x10, [x20]
006139bc:  add      x0, sp, #0x90
006139c0:  adrp     x3, #0x1ba000
006139c4:  add      x3, x3, #0x8f
006139c8:  cmp      x8, #0
006139cc:  mov      w4, #0xe
006139d0:  csel     x1, x9, x20, mi
006139d4:  cmp      w8, #0
006139d8:  csel     x2, x10, x8, mi
006139dc:  add      x8, sp, #0xb0
006139e0:  bl       #0x5ff514
006139e4:  ldrb     w8, [sp, #0xc7]
006139e8:  ldp      x10, x11, [sp, #0xb0]
006139ec:  mov      w2, #1
006139f0:  mov      w3, #0x1f4
006139f4:  mov      w4, #0x32
006139f8:  sxtb     w9, w8
006139fc:  cmp      w9, #0
00613a00:  csel     x0, x10, x21, mi
00613a04:  csel     x1, x11, x8, mi
00613a08:  bl       #0x6660d0
00613a0c:  ldrsb    w8, [sp, #0xc7]
00613a10:  mov      x24, x0
00613a14:  tbz      w8, #0x1f, #0x613a28
00613a18:  ldr      x8, [sp, #0xc0]
00613a1c:  ldr      x0, [sp, #0xb0]
00613a20:  and      x1, x8, #0x7fffffffffffffff
00613a24:  bl       #0x546bc0
00613a28:  mov      x0, xzr
00613a2c:  mov      x1, x24
00613a30:  adrp     x2, #0xd64000
00613a34:  add      x2, x2, #0x420
00613a38:  bl       #0xd0f5e0
00613a3c:  cbnz     x24, #0x613d64
00613a40:  b        #0x613d70
00613a44:  tbz      w27, #0, #0x613cc8
00613a48:  adrp     x8, #0xd64000
00613a4c:  add      x8, x8, #0x440
00613a50:  ldar     x24, [x8]
00613a54:  cbnz     x24, #0x613d64
00613a58:  ldrsb    x8, [x20, #0x17]
00613a5c:  ldp      x9, x10, [x20]
00613a60:  add      x0, sp, #0x90
00613a64:  adrp     x3, #0x1a3000
00613a68:  add      x3, x3, #0x721
00613a6c:  cmp      x8, #0
00613a70:  mov      w4, #0x11
00613a74:  csel     x1, x9, x20, mi
00613a78:  cmp      w8, #0
00613a7c:  csel     x2, x10, x8, mi
00613a80:  add      x8, sp, #0xb0
00613a84:  bl       #0x5ff514
00613a88:  ldrb     w8, [sp, #0xc7]
00613a8c:  ldp      x10, x11, [sp, #0xb0]
00613a90:  mov      w2, #1
00613a94:  mov      w3, #0x1f4
00613a98:  mov      w4, #0x32
00613a9c:  sxtb     w9, w8
00613aa0:  cmp      w9, #0
00613aa4:  csel     x0, x10, x21, mi
00613aa8:  csel     x1, x11, x8, mi
00613aac:  bl       #0x6660d0
00613ab0:  ldrsb    w8, [sp, #0xc7]
00613ab4:  mov      x24, x0
00613ab8:  tbz      w8, #0x1f, #0x613acc
00613abc:  ldr      x8, [sp, #0xc0]
00613ac0:  ldr      x0, [sp, #0xb0]
00613ac4:  and      x1, x8, #0x7fffffffffffffff
00613ac8:  bl       #0x546bc0
00613acc:  mov      x0, xzr
00613ad0:  mov      x1, x24
00613ad4:  adrp     x2, #0xd64000
00613ad8:  add      x2, x2, #0x440
00613adc:  bl       #0xd0f5e0
00613ae0:  cbnz     x24, #0x613d64
00613ae4:  b        #0x613d70
00613ae8:  adrp     x8, #0xd64000
00613aec:  add      x8, x8, #0x428
00613af0:  ldar     x24, [x8]
00613af4:  cbnz     x24, #0x613d64
00613af8:  ldrsb    x8, [x20, #0x17]
00613afc:  ldp      x9, x10, [x20]
00613b00:  add      x0, sp, #0x90
00613b04:  adrp     x3, #0x1b3000
00613b08:  add      x3, x3, #0xe96
00613b0c:  cmp      x8, #0
00613b10:  mov      w4, #0x11
00613b14:  csel     x1, x9, x20, mi
00613b18:  cmp      w8, #0
00613b1c:  csel     x2, x10, x8, mi
00613b20:  add      x8, sp, #0xb0
00613b24:  bl       #0x5ff514
00613b28:  ldrb     w8, [sp, #0xc7]
00613b2c:  ldp      x10, x11, [sp, #0xb0]
00613b30:  mov      w2, #1
00613b34:  mov      w3, #0x1f4
00613b38:  mov      w4, #0x32
00613b3c:  sxtb     w9, w8
00613b40:  cmp      w9, #0
00613b44:  csel     x0, x10, x21, mi
00613b48:  csel     x1, x11, x8, mi
00613b4c:  bl       #0x6660d0
00613b50:  ldrsb    w8, [sp, #0xc7]
00613b54:  mov      x24, x0
00613b58:  tbz      w8, #0x1f, #0x613b6c
00613b5c:  ldr      x8, [sp, #0xc0]
00613b60:  ldr      x0, [sp, #0xb0]
00613b64:  and      x1, x8, #0x7fffffffffffffff
00613b68:  bl       #0x546bc0
00613b6c:  mov      x0, xzr
00613b70:  mov      x1, x24
00613b74:  adrp     x2, #0xd64000
00613b78:  add      x2, x2, #0x428
00613b7c:  bl       #0xd0f5e0
00613b80:  cbnz     x24, #0x613d64
00613b84:  b        #0x613d70
00613b88:  adrp     x8, #0xd64000
00613b8c:  add      x8, x8, #0x448
00613b90:  ldar     x24, [x8]
00613b94:  cbnz     x24, #0x613d64
00613b98:  ldrsb    x8, [x20, #0x17]
00613b9c:  ldp      x9, x10, [x20]
00613ba0:  add      x0, sp, #0x90
00613ba4:  adrp     x3, #0x1ef000
00613ba8:  add      x3, x3, #0xbb1
00613bac:  cmp      x8, #0
00613bb0:  mov      w4, #0x11
00613bb4:  csel     x1, x9, x20, mi
00613bb8:  cmp      w8, #0
00613bbc:  csel     x2, x10, x8, mi
00613bc0:  add      x8, sp, #0xb0
00613bc4:  bl       #0x5ff514
00613bc8:  ldrb     w8, [sp, #0xc7]
00613bcc:  ldp      x10, x11, [sp, #0xb0]
00613bd0:  mov      w2, #1
00613bd4:  mov      w3, #0x1f4
00613bd8:  mov      w4, #0x32
00613bdc:  sxtb     w9, w8
00613be0:  cmp      w9, #0
00613be4:  csel     x0, x10, x21, mi
00613be8:  csel     x1, x11, x8, mi
00613bec:  bl       #0x6660d0
00613bf0:  ldrsb    w8, [sp, #0xc7]
00613bf4:  mov      x24, x0
00613bf8:  tbz      w8, #0x1f, #0x613c0c
00613bfc:  ldr      x8, [sp, #0xc0]
00613c00:  ldr      x0, [sp, #0xb0]
00613c04:  and      x1, x8, #0x7fffffffffffffff
00613c08:  bl       #0x546bc0
00613c0c:  mov      x0, xzr
00613c10:  mov      x1, x24
00613c14:  adrp     x2, #0xd64000
00613c18:  add      x2, x2, #0x448
00613c1c:  bl       #0xd0f5e0
00613c20:  cbnz     x24, #0x613d64
00613c24:  b        #0x613d70
00613c28:  adrp     x8, #0xd64000
00613c2c:  add      x8, x8, #0x418
00613c30:  ldar     x24, [x8]
00613c34:  cbnz     x24, #0x613d64
00613c38:  ldrsb    x8, [x20, #0x17]
00613c3c:  ldp      x9, x10, [x20]
00613c40:  add      x0, sp, #0x90
00613c44:  adrp     x3, #0x1ba000
00613c48:  add      x3, x3, #0x8f
00613c4c:  cmp      x8, #0
00613c50:  mov      w4, #0xe
00613c54:  csel     x1, x9, x20, mi
00613c58:  cmp      w8, #0
00613c5c:  csel     x2, x10, x8, mi
00613c60:  add      x8, sp, #0xb0
00613c64:  bl       #0x5ff514
00613c68:  ldrb     w8, [sp, #0xc7]
00613c6c:  ldp      x10, x11, [sp, #0xb0]
00613c70:  mov      w2, #1
00613c74:  mov      w3, #0x1f4
00613c78:  mov      w4, #0x32
00613c7c:  sxtb     w9, w8
00613c80:  cmp      w9, #0
00613c84:  csel     x0, x10, x21, mi
00613c88:  csel     x1, x11, x8, mi
00613c8c:  bl       #0x6660d0
00613c90:  ldrsb    w8, [sp, #0xc7]
00613c94:  mov      x24, x0
00613c98:  tbz      w8, #0x1f, #0x613cac
00613c9c:  ldr      x8, [sp, #0xc0]
00613ca0:  ldr      x0, [sp, #0xb0]
00613ca4:  and      x1, x8, #0x7fffffffffffffff
00613ca8:  bl       #0x546bc0
00613cac:  mov      x0, xzr
00613cb0:  mov      x1, x24
00613cb4:  adrp     x2, #0xd64000
00613cb8:  add      x2, x2, #0x418
00613cbc:  bl       #0xd0f5e0
00613cc0:  cbnz     x24, #0x613d64
00613cc4:  b        #0x613d70
00613cc8:  adrp     x8, #0xd64000
00613ccc:  add      x8, x8, #0x438
00613cd0:  ldar     x24, [x8]
00613cd4:  cbnz     x24, #0x613d64
00613cd8:  ldrsb    x8, [x20, #0x17]
00613cdc:  ldp      x9, x10, [x20]
00613ce0:  add      x0, sp, #0x90
00613ce4:  adrp     x3, #0x1a3000
00613ce8:  add      x3, x3, #0x721
00613cec:  cmp      x8, #0
00613cf0:  mov      w4, #0x11
00613cf4:  csel     x1, x9, x20, mi
00613cf8:  cmp      w8, #0
00613cfc:  csel     x2, x10, x8, mi
00613d00:  add      x8, sp, #0xb0
00613d04:  bl       #0x5ff514
00613d08:  ldrb     w8, [sp, #0xc7]
00613d0c:  ldp      x10, x11, [sp, #0xb0]
00613d10:  mov      w2, #1
00613d14:  mov      w3, #0x1f4
00613d18:  mov      w4, #0x32
00613d1c:  sxtb     w9, w8
00613d20:  cmp      w9, #0
00613d24:  csel     x0, x10, x21, mi
00613d28:  csel     x1, x11, x8, mi
00613d2c:  bl       #0x6660d0
00613d30:  ldrsb    w8, [sp, #0xc7]
00613d34:  mov      x24, x0
00613d38:  tbz      w8, #0x1f, #0x613d4c
00613d3c:  ldr      x8, [sp, #0xc0]
00613d40:  ldr      x0, [sp, #0xb0]
00613d44:  and      x1, x8, #0x7fffffffffffffff
00613d48:  bl       #0x546bc0
00613d4c:  mov      x0, xzr
00613d50:  mov      x1, x24
00613d54:  adrp     x2, #0xd64000
00613d58:  add      x2, x2, #0x438
00613d5c:  bl       #0xd0f5e0
00613d60:  cbz      x24, #0x613d70
00613d64:  mov      x0, x24
00613d68:  mov      w1, w22
00613d6c:  bl       #0x666568
00613d70:  ldr      x8, [x26, #0x70]
00613d74:  cmp      x8, #0xc8
00613d78:  b.lt     #0x6142fc
00613d7c:  ldr      x9, [x26, #0x68]
00613d80:  add      x9, x9, x8, lsr #1
00613d84:  sdiv     x22, x9, x8
00613d88:  cmn      w22, #1
00613d8c:  b.eq     #0x6142fc
00613d90:  ldr      w24, [x26, #0x20]
00613d94:  cmp      w24, #0
00613d98:  b.gt     #0x613e4c
00613d9c:  cmn      w24, #1
00613da0:  b.eq     #0x613f2c
00613da4:  cbnz     w24, #0x613f00
00613da8:  tbz      w27, #0, #0x614074
00613dac:  adrp     x8, #0xd64000
00613db0:  add      x8, x8, #0x470
00613db4:  ldar     x24, [x8]
00613db8:  cbnz     x24, #0x6142f0
00613dbc:  ldrsb    x8, [x20, #0x17]
00613dc0:  ldp      x9, x10, [x20]
00613dc4:  add      x0, sp, #0x90
00613dc8:  adrp     x3, #0x1a3000
00613dcc:  add      x3, x3, #0x75e
00613dd0:  cmp      x8, #0
00613dd4:  mov      w4, #0x12
00613dd8:  csel     x1, x9, x20, mi
00613ddc:  cmp      w8, #0
00613de0:  csel     x2, x10, x8, mi
00613de4:  add      x8, sp, #0xb0
00613de8:  bl       #0x5ff514
00613dec:  ldrb     w8, [sp, #0xc7]
00613df0:  ldp      x10, x11, [sp, #0xb0]
00613df4:  mov      w2, #1
00613df8:  mov      w3, #0xc8
00613dfc:  mov      w4, #0x32
00613e00:  sxtb     w9, w8
00613e04:  cmp      w9, #0
00613e08:  csel     x0, x10, x21, mi
00613e0c:  csel     x1, x11, x8, mi
00613e10:  bl       #0x6660d0
00613e14:  ldrsb    w8, [sp, #0xc7]
00613e18:  mov      x24, x0
00613e1c:  tbz      w8, #0x1f, #0x613e30
00613e20:  ldr      x8, [sp, #0xc0]
00613e24:  ldr      x0, [sp, #0xb0]
00613e28:  and      x1, x8, #0x7fffffffffffffff
00613e2c:  bl       #0x546bc0
00613e30:  mov      x0, xzr
00613e34:  mov      x1, x24
00613e38:  adrp     x2, #0xd64000
00613e3c:  add      x2, x2, #0x470
00613e40:  bl       #0xd0f5e0
00613e44:  cbnz     x24, #0x6142f0
00613e48:  b        #0x6142fc
00613e4c:  cmp      w24, #1
00613e50:  b.eq     #0x613fd0
00613e54:  cmp      w24, #2
00613e58:  b.ne     #0x613f00
00613e5c:  tbz      w27, #0, #0x614114
00613e60:  adrp     x8, #0xd64000
00613e64:  add      x8, x8, #0x490
00613e68:  ldar     x24, [x8]
00613e6c:  cbnz     x24, #0x6142f0
00613e70:  ldrsb    x8, [x20, #0x17]
00613e74:  ldp      x9, x10, [x20]
00613e78:  add      x0, sp, #0x90
00613e7c:  adrp     x3, #0x1c8000
00613e80:  add      x3, x3, #0x442
00613e84:  cmp      x8, #0
00613e88:  mov      w4, #0x12
00613e8c:  csel     x1, x9, x20, mi
00613e90:  cmp      w8, #0
00613e94:  csel     x2, x10, x8, mi
00613e98:  add      x8, sp, #0xb0
00613e9c:  bl       #0x5ff514
00613ea0:  ldrb     w8, [sp, #0xc7]
00613ea4:  ldp      x10, x11, [sp, #0xb0]
00613ea8:  mov      w2, #1
00613eac:  mov      w3, #0xc8
00613eb0:  mov      w4, #0x32
00613eb4:  sxtb     w9, w8
00613eb8:  cmp      w9, #0
00613ebc:  csel     x0, x10, x21, mi
00613ec0:  csel     x1, x11, x8, mi
00613ec4:  bl       #0x6660d0
00613ec8:  ldrsb    w8, [sp, #0xc7]
00613ecc:  mov      x24, x0
00613ed0:  tbz      w8, #0x1f, #0x613ee4
00613ed4:  ldr      x8, [sp, #0xc0]
00613ed8:  ldr      x0, [sp, #0xb0]
00613edc:  and      x1, x8, #0x7fffffffffffffff
00613ee0:  bl       #0x546bc0
00613ee4:  mov      x0, xzr
00613ee8:  mov      x1, x24
00613eec:  adrp     x2, #0xd64000
00613ef0:  add      x2, x2, #0x490
00613ef4:  bl       #0xd0f5e0
00613ef8:  cbnz     x24, #0x6142f0
00613efc:  b        #0x6142fc
00613f00:  bl       #0x4022fc
00613f04:  tbnz     w0, #0, #0x6142fc
00613f08:  adrp     x0, #0x1f4000
00613f0c:  add      x0, x0, #0xe94
00613f10:  mov      x1, x23
00613f14:  mov      w2, #0x12e2
00613f18:  adrp     x3, #0x1a0000
00613f1c:  add      x3, x3, #0x6d3
00613f20:  mov      w4, w24
00613f24:  bl       #0x623bb0
00613f28:  b        #0x6142fc
00613f2c:  tbz      w27, #0, #0x6141b4
00613f30:  adrp     x8, #0xd64000
00613f34:  add      x8, x8, #0x460
00613f38:  ldar     x24, [x8]
00613f3c:  cbnz     x24, #0x6142f0
00613f40:  ldrsb    x8, [x20, #0x17]
00613f44:  ldp      x9, x10, [x20]
00613f48:  add      x0, sp, #0x90
00613f4c:  adrp     x3, #0x1c5000
00613f50:  add      x3, x3, #0x61f
00613f54:  cmp      x8, #0
00613f58:  mov      w4, #0xf
00613f5c:  csel     x1, x9, x20, mi
00613f60:  cmp      w8, #0
00613f64:  csel     x2, x10, x8, mi
00613f68:  add      x8, sp, #0xb0
00613f6c:  bl       #0x5ff514
00613f70:  ldrb     w8, [sp, #0xc7]
00613f74:  ldp      x10, x11, [sp, #0xb0]
00613f78:  mov      w2, #1
00613f7c:  mov      w3, #0xc8
00613f80:  mov      w4, #0x32
00613f84:  sxtb     w9, w8
00613f88:  cmp      w9, #0
00613f8c:  csel     x0, x10, x21, mi
00613f90:  csel     x1, x11, x8, mi
00613f94:  bl       #0x6660d0
00613f98:  ldrsb    w8, [sp, #0xc7]
00613f9c:  mov      x24, x0
00613fa0:  tbz      w8, #0x1f, #0x613fb4
00613fa4:  ldr      x8, [sp, #0xc0]
00613fa8:  ldr      x0, [sp, #0xb0]
00613fac:  and      x1, x8, #0x7fffffffffffffff
00613fb0:  bl       #0x546bc0
00613fb4:  mov      x0, xzr
00613fb8:  mov      x1, x24
00613fbc:  adrp     x2, #0xd64000
00613fc0:  add      x2, x2, #0x460
00613fc4:  bl       #0xd0f5e0
00613fc8:  cbnz     x24, #0x6142f0
00613fcc:  b        #0x6142fc
00613fd0:  tbz      w27, #0, #0x614254
00613fd4:  adrp     x8, #0xd64000
00613fd8:  add      x8, x8, #0x480
00613fdc:  ldar     x24, [x8]
00613fe0:  cbnz     x24, #0x6142f0
00613fe4:  ldrsb    x8, [x20, #0x17]
00613fe8:  ldp      x9, x10, [x20]
00613fec:  add      x0, sp, #0x90
00613ff0:  adrp     x3, #0x1d3000
00613ff4:  add      x3, x3, #0x759
00613ff8:  cmp      x8, #0
00613ffc:  mov      w4, #0x12
00614000:  csel     x1, x9, x20, mi
00614004:  cmp      w8, #0
00614008:  csel     x2, x10, x8, mi
0061400c:  add      x8, sp, #0xb0
00614010:  bl       #0x5ff514
00614014:  ldrb     w8, [sp, #0xc7]
00614018:  ldp      x10, x11, [sp, #0xb0]
0061401c:  mov      w2, #1
00614020:  mov      w3, #0xc8
00614024:  mov      w4, #0x32
00614028:  sxtb     w9, w8
0061402c:  cmp      w9, #0
00614030:  csel     x0, x10, x21, mi
00614034:  csel     x1, x11, x8, mi
00614038:  bl       #0x6660d0
0061403c:  ldrsb    w8, [sp, #0xc7]
00614040:  mov      x24, x0
00614044:  tbz      w8, #0x1f, #0x614058
00614048:  ldr      x8, [sp, #0xc0]
0061404c:  ldr      x0, [sp, #0xb0]
00614050:  and      x1, x8, #0x7fffffffffffffff
00614054:  bl       #0x546bc0
00614058:  mov      x0, xzr
0061405c:  mov      x1, x24
00614060:  adrp     x2, #0xd64000
00614064:  add      x2, x2, #0x480
00614068:  bl       #0xd0f5e0
0061406c:  cbnz     x24, #0x6142f0
00614070:  b        #0x6142fc
00614074:  adrp     x8, #0xd64000
00614078:  add      x8, x8, #0x468
0061407c:  ldar     x24, [x8]
00614080:  cbnz     x24, #0x6142f0
00614084:  ldrsb    x8, [x20, #0x17]
00614088:  ldp      x9, x10, [x20]
0061408c:  add      x0, sp, #0x90
00614090:  adrp     x3, #0x1a3000
00614094:  add      x3, x3, #0x75e
00614098:  cmp      x8, #0
0061409c:  mov      w4, #0x12
006140a0:  csel     x1, x9, x20, mi
006140a4:  cmp      w8, #0
006140a8:  csel     x2, x10, x8, mi
006140ac:  add      x8, sp, #0xb0
006140b0:  bl       #0x5ff514
006140b4:  ldrb     w8, [sp, #0xc7]
006140b8:  ldp      x10, x11, [sp, #0xb0]
006140bc:  mov      w2, #1
006140c0:  mov      w3, #0xc8
006140c4:  mov      w4, #0x32
006140c8:  sxtb     w9, w8
006140cc:  cmp      w9, #0
006140d0:  csel     x0, x10, x21, mi
006140d4:  csel     x1, x11, x8, mi
006140d8:  bl       #0x6660d0
006140dc:  ldrsb    w8, [sp, #0xc7]
006140e0:  mov      x24, x0
006140e4:  tbz      w8, #0x1f, #0x6140f8
006140e8:  ldr      x8, [sp, #0xc0]
006140ec:  ldr      x0, [sp, #0xb0]
006140f0:  and      x1, x8, #0x7fffffffffffffff
006140f4:  bl       #0x546bc0
006140f8:  mov      x0, xzr
006140fc:  mov      x1, x24
00614100:  adrp     x2, #0xd64000
00614104:  add      x2, x2, #0x468
00614108:  bl       #0xd0f5e0
0061410c:  cbnz     x24, #0x6142f0
00614110:  b        #0x6142fc
00614114:  adrp     x8, #0xd64000
00614118:  add      x8, x8, #0x488
0061411c:  ldar     x24, [x8]
00614120:  cbnz     x24, #0x6142f0
00614124:  ldrsb    x8, [x20, #0x17]
00614128:  ldp      x9, x10, [x20]
0061412c:  add      x0, sp, #0x90
00614130:  adrp     x3, #0x1c8000
00614134:  add      x3, x3, #0x442
00614138:  cmp      x8, #0
0061413c:  mov      w4, #0x12
00614140:  csel     x1, x9, x20, mi
00614144:  cmp      w8, #0
00614148:  csel     x2, x10, x8, mi
0061414c:  add      x8, sp, #0xb0
00614150:  bl       #0x5ff514
00614154:  ldrb     w8, [sp, #0xc7]
00614158:  ldp      x10, x11, [sp, #0xb0]
0061415c:  mov      w2, #1
00614160:  mov      w3, #0xc8
00614164:  mov      w4, #0x32
00614168:  sxtb     w9, w8
0061416c:  cmp      w9, #0
00614170:  csel     x0, x10, x21, mi
00614174:  csel     x1, x11, x8, mi
00614178:  bl       #0x6660d0
0061417c:  ldrsb    w8, [sp, #0xc7]
00614180:  mov      x24, x0
00614184:  tbz      w8, #0x1f, #0x614198
00614188:  ldr      x8, [sp, #0xc0]
0061418c:  ldr      x0, [sp, #0xb0]
00614190:  and      x1, x8, #0x7fffffffffffffff
00614194:  bl       #0x546bc0
00614198:  mov      x0, xzr
0061419c:  mov      x1, x24
006141a0:  adrp     x2, #0xd64000
006141a4:  add      x2, x2, #0x488
006141a8:  bl       #0xd0f5e0
006141ac:  cbnz     x24, #0x6142f0
006141b0:  b        #0x6142fc
006141b4:  adrp     x8, #0xd64000
006141b8:  add      x8, x8, #0x458
006141bc:  ldar     x24, [x8]
006141c0:  cbnz     x24, #0x6142f0
006141c4:  ldrsb    x8, [x20, #0x17]
006141c8:  ldp      x9, x10, [x20]
006141cc:  add      x0, sp, #0x90
006141d0:  adrp     x3, #0x1c5000
006141d4:  add      x3, x3, #0x61f
006141d8:  cmp      x8, #0
006141dc:  mov      w4, #0xf
006141e0:  csel     x1, x9, x20, mi
006141e4:  cmp      w8, #0
006141e8:  csel     x2, x10, x8, mi
006141ec:  add      x8, sp, #0xb0
006141f0:  bl       #0x5ff514
006141f4:  ldrb     w8, [sp, #0xc7]
006141f8:  ldp      x10, x11, [sp, #0xb0]
006141fc:  mov      w2, #1
00614200:  mov      w3, #0xc8
00614204:  mov      w4, #0x32
00614208:  sxtb     w9, w8
0061420c:  cmp      w9, #0
00614210:  csel     x0, x10, x21, mi
00614214:  csel     x1, x11, x8, mi
00614218:  bl       #0x6660d0
0061421c:  ldrsb    w8, [sp, #0xc7]
00614220:  mov      x24, x0
00614224:  tbz      w8, #0x1f, #0x614238
00614228:  ldr      x8, [sp, #0xc0]
0061422c:  ldr      x0, [sp, #0xb0]
00614230:  and      x1, x8, #0x7fffffffffffffff
00614234:  bl       #0x546bc0
00614238:  mov      x0, xzr
0061423c:  mov      x1, x24
00614240:  adrp     x2, #0xd64000
00614244:  add      x2, x2, #0x458
00614248:  bl       #0xd0f5e0
0061424c:  cbnz     x24, #0x6142f0
00614250:  b        #0x6142fc
00614254:  adrp     x8, #0xd64000
00614258:  add      x8, x8, #0x478
0061425c:  ldar     x24, [x8]
00614260:  cbnz     x24, #0x6142f0
00614264:  ldrsb    x8, [x20, #0x17]
00614268:  ldp      x9, x10, [x20]
0061426c:  add      x0, sp, #0x90
00614270:  adrp     x3, #0x1d3000
00614274:  add      x3, x3, #0x759
00614278:  cmp      x8, #0
0061427c:  mov      w4, #0x12
00614280:  csel     x1, x9, x20, mi
00614284:  cmp      w8, #0
00614288:  csel     x2, x10, x8, mi
0061428c:  add      x8, sp, #0xb0
00614290:  bl       #0x5ff514
00614294:  ldrb     w8, [sp, #0xc7]
00614298:  ldp      x10, x11, [sp, #0xb0]
0061429c:  mov      w2, #1
006142a0:  mov      w3, #0xc8
006142a4:  mov      w4, #0x32
006142a8:  sxtb     w9, w8
006142ac:  cmp      w9, #0
006142b0:  csel     x0, x10, x21, mi
006142b4:  csel     x1, x11, x8, mi
006142b8:  bl       #0x6660d0
006142bc:  ldrsb    w8, [sp, #0xc7]
006142c0:  mov      x24, x0
006142c4:  tbz      w8, #0x1f, #0x6142d8
006142c8:  ldr      x8, [sp, #0xc0]
006142cc:  ldr      x0, [sp, #0xb0]
006142d0:  and      x1, x8, #0x7fffffffffffffff
006142d4:  bl       #0x546bc0
006142d8:  mov      x0, xzr
006142dc:  mov      x1, x24
006142e0:  adrp     x2, #0xd64000
006142e4:  add      x2, x2, #0x478
006142e8:  bl       #0xd0f5e0
006142ec:  cbz      x24, #0x6142fc
006142f0:  mov      x0, x24
006142f4:  mov      w1, w22
006142f8:  bl       #0x666568
006142fc:  ldr      x8, [x26, #8]
00614300:  cbz      x8, #0x614314
00614304:  mov      x26, x8
00614308:  ldr      x8, [x8]
0061430c:  cbnz     x8, #0x614304
00614310:  b        #0x612738
00614314:  mov      x8, x26
00614318:  ldr      x26, [x26, #0x10]
0061431c:  ldr      x9, [x26]
00614320:  cmp      x8, x9
00614324:  b.ne     #0x614314
00614328:  b        #0x612738
0061432c:  ldr      x22, [x20, #0x5a8]
00614330:  add      x21, x20, #0x5b0
00614334:  cmp      x22, x21
00614338:  b.eq     #0x6143ac
0061433c:  mov      x23, #0x100000000
00614340:  b        #0x61434c
00614344:  cmp      x22, x21
00614348:  b.eq     #0x6143ac
0061434c:  ldr      w8, [x22, #0x20]
00614350:  add      x1, x22, #0x28
00614354:  mov      x0, x20
00614358:  lsr      w9, w8, #8
0061435c:  cmn      w8, #1
00614360:  and      w8, w8, #0xff
00614364:  csel     w8, wzr, w8, eq
00614368:  csel     w24, w24, w9, eq
0061436c:  csel     x9, xzr, x23, eq
00614370:  orr      w8, w8, w24, lsl #8
00614374:  orr      x2, x9, x8
00614378:  bl       #0x6172e4
0061437c:  ldr      x8, [x22, #8]
00614380:  cbz      x8, #0x614394
00614384:  mov      x22, x8
00614388:  ldr      x8, [x8]
0061438c:  cbnz     x8, #0x614384
00614390:  b        #0x614344
00614394:  mov      x8, x22
00614398:  ldr      x22, [x22, #0x10]
0061439c:  ldr      x9, [x22]
006143a0:  cmp      x8, x9
006143a4:  b.ne     #0x614394
006143a8:  b        #0x614344
006143ac:  mov      x21, #0xf7cf
006143b0:  ldr      x8, [x20, #0x3f0]
006143b4:  movk     x21, #0xe353, lsl #16
006143b8:  movk     x21, #0x9ba5, lsl #32
006143bc:  cmn      x8, #1
006143c0:  movk     x21, #0x20c4, lsl #48
006143c4:  b.eq     #0x6147d0
006143c8:  ldr      x0, [x20, #0x18]
006143cc:  ldr      x8, [x0]
006143d0:  ldr      x8, [x8, #0x10]
006143d4:  blr      x8
006143d8:  tbnz     x0, #0x3f, #0x6143fc
006143dc:  lsr      x8, x0, #3
006143e0:  mov      w9, #0x3e8
006143e4:  umulh    x8, x8, x21
006143e8:  lsr      x8, x8, #4
006143ec:  msub     x9, x8, x9, x0
006143f0:  cmp      x9, #0x1f3
006143f4:  cinc     x8, x8, hi
006143f8:  b        #0x614420
006143fc:  neg      x8, x0
00614400:  mov      w10, #0x3e8
00614404:  lsr      x9, x8, #3
00614408:  umulh    x9, x9, x21
0061440c:  lsr      x9, x9, #4
00614410:  msub     x8, x9, x10, x8
00614414:  cmp      x8, #0x1f4
00614418:  csetm    x8, hi
0061441c:  sub      x8, x8, x9
00614420:  ldr      x9, [x20, #0x408]
00614424:  cmn      x9, #1
00614428:  b.eq     #0x614448
0061442c:  ldr      x10, [x20, #0x410]
00614430:  sub      x8, x8, x9
00614434:  add      x23, x8, x10
00614438:  mov      x8, #-1
0061443c:  str      x23, [x20, #0x410]
00614440:  str      x8, [x20, #0x408]
00614444:  b        #0x61444c
00614448:  ldr      x23, [x20, #0x410]
0061444c:  mov      w8, #0x2710
00614450:  cmp      x23, x8
00614454:  b.lt     #0x6145d8
00614458:  ldr      w8, [x19, #0x98]
0061445c:  ldr      w9, [x20, #0x530]
00614460:  ldr      w10, [x20, #0x588]
00614464:  ldr      w11, [x20, #0x58c]
00614468:  sub      w24, w8, w9
0061446c:  add      w8, w11, w10
00614470:  cmp      w8, w24
00614474:  csel     w25, wzr, w8, gt
00614478:  tbz      w27, #0, #0x614510
0061447c:  adrp     x8, #0xd64000
00614480:  add      x8, x8, #0x4a0
00614484:  ldar     x22, [x8]
00614488:  cbnz     x22, #0x6145b0
0061448c:  ldrsb    x8, [x20, #0x17]
00614490:  ldp      x9, x10, [x20]
00614494:  adrp     x3, #0x1b6000
00614498:  add      x3, x3, #0xd9b
0061449c:  add      x0, sp, #0x90
006144a0:  cmp      x8, #0
006144a4:  mov      w4, #0x1d
006144a8:  add      x22, sp, #0xb0
006144ac:  csel     x1, x9, x20, mi
006144b0:  cmp      w8, #0
006144b4:  csel     x2, x10, x8, mi
006144b8:  add      x8, sp, #0xb0
006144bc:  bl       #0x5ff514
006144c0:  ldrb     w8, [sp, #0xc7]
006144c4:  ldp      x10, x11, [sp, #0xb0]
006144c8:  mov      w2, #1
006144cc:  mov      w3, #0x64
006144d0:  mov      w4, #0x32
006144d4:  sxtb     w9, w8
006144d8:  cmp      w9, #0
006144dc:  csel     x0, x10, x22, mi
006144e0:  csel     x1, x11, x8, mi
006144e4:  bl       #0x6660d0
006144e8:  ldrsb    w8, [sp, #0xc7]
006144ec:  mov      x22, x0
006144f0:  tbz      w8, #0x1f, #0x614504
006144f4:  ldr      x8, [sp, #0xc0]
006144f8:  ldr      x0, [sp, #0xb0]
006144fc:  and      x1, x8, #0x7fffffffffffffff
00614500:  bl       #0x546bc0
00614504:  adrp     x2, #0xd64000
00614508:  add      x2, x2, #0x4a0
0061450c:  b        #0x6145a0
00614510:  adrp     x8, #0xd64000
00614514:  add      x8, x8, #0x498
00614518:  ldar     x22, [x8]
0061451c:  cbnz     x22, #0x6145b0
00614520:  ldrsb    x8, [x20, #0x17]
00614524:  ldp      x9, x10, [x20]
00614528:  adrp     x3, #0x1b6000
0061452c:  add      x3, x3, #0xd9b
00614530:  add      x0, sp, #0x90
00614534:  cmp      x8, #0
00614538:  mov      w4, #0x1d
0061453c:  add      x22, sp, #0xb0
00614540:  csel     x1, x9, x20, mi
00614544:  cmp      w8, #0
00614548:  csel     x2, x10, x8, mi
0061454c:  add      x8, sp, #0xb0
00614550:  bl       #0x5ff514
00614554:  ldrb     w8, [sp, #0xc7]
00614558:  ldp      x10, x11, [sp, #0xb0]
0061455c:  mov      w2, #1
00614560:  mov      w3, #0x64
00614564:  mov      w4, #0x32
00614568:  sxtb     w9, w8
0061456c:  cmp      w9, #0
00614570:  csel     x0, x10, x22, mi
00614574:  csel     x1, x11, x8, mi
00614578:  bl       #0x6660d0
0061457c:  ldrsb    w8, [sp, #0xc7]
00614580:  mov      x22, x0
00614584:  tbz      w8, #0x1f, #0x614598
00614588:  ldr      x8, [sp, #0xc0]
0061458c:  ldr      x0, [sp, #0xb0]
00614590:  and      x1, x8, #0x7fffffffffffffff
00614594:  bl       #0x546bc0
00614598:  adrp     x2, #0xd64000
0061459c:  add      x2, x2, #0x498
006145a0:  mov      x0, xzr
006145a4:  mov      x1, x22
006145a8:  bl       #0xd0f5e0
006145ac:  cbz      x22, #0x6145d8
006145b0:  smulh    x8, x23, x21
006145b4:  sub      w9, w24, w25
006145b8:  mov      x0, x22
006145bc:  lsl      w10, w9, #6
006145c0:  sub      w9, w10, w9, lsl #2
006145c4:  asr      x11, x8, #7
006145c8:  sxtw     x9, w9
006145cc:  add      x8, x11, x8, lsr #63
006145d0:  sdiv     x1, x9, x8
006145d4:  bl       #0x666568
006145d8:  ldr      x0, [x20, #0x18]
006145dc:  ldr      x8, [x0]
006145e0:  ldr      x8, [x8, #0x10]
006145e4:  blr      x8
006145e8:  tbnz     x0, #0x3f, #0x61460c
006145ec:  lsr      x8, x0, #3
006145f0:  mov      w9, #0x3e8
006145f4:  umulh    x8, x8, x21
006145f8:  lsr      x8, x8, #4
006145fc:  msub     x9, x8, x9, x0
00614600:  cmp      x9, #0x1f3
00614604:  cinc     x8, x8, hi
00614608:  b        #0x614630
0061460c:  neg      x8, x0
00614610:  mov      w10, #0x3e8
00614614:  lsr      x9, x8, #3
00614618:  umulh    x9, x9, x21
0061461c:  lsr      x9, x9, #4
00614620:  msub     x8, x9, x10, x8
00614624:  cmp      x8, #0x1f4
00614628:  csetm    x8, hi
0061462c:  sub      x8, x8, x9
00614630:  ldr      x9, [x20, #0x3f8]
00614634:  cmn      x9, #1
00614638:  b.eq     #0x614658
0061463c:  ldr      x10, [x20, #0x400]
00614640:  sub      x8, x8, x9
00614644:  add      x23, x8, x10
00614648:  mov      x8, #-1
0061464c:  str      x23, [x20, #0x400]
00614650:  str      x8, [x20, #0x3f8]
00614654:  b        #0x61465c
00614658:  ldr      x23, [x20, #0x400]
0061465c:  mov      w8, #0x2710
00614660:  cmp      x23, x8
00614664:  b.lt     #0x6147d0
00614668:  ldr      w24, [x19, #0x94]
0061466c:  ldr      w25, [x20, #0x52c]
00614670:  tbz      w27, #0, #0x614708
00614674:  adrp     x8, #0xd64000
00614678:  add      x8, x8, #0x4b0
0061467c:  ldar     x22, [x8]
00614680:  cbnz     x22, #0x6147a8
00614684:  ldrsb    x8, [x20, #0x17]
00614688:  ldp      x9, x10, [x20]
0061468c:  adrp     x3, #0x19a000
00614690:  add      x3, x3, #0x666
00614694:  add      x0, sp, #0x90
00614698:  cmp      x8, #0
0061469c:  mov      w4, #0x19
006146a0:  add      x22, sp, #0xb0
006146a4:  csel     x1, x9, x20, mi
006146a8:  cmp      w8, #0
006146ac:  csel     x2, x10, x8, mi
006146b0:  add      x8, sp, #0xb0
006146b4:  bl       #0x5ff514
006146b8:  ldrb     w8, [sp, #0xc7]
006146bc:  ldp      x10, x11, [sp, #0xb0]
006146c0:  mov      w2, #1
006146c4:  mov      w3, #0x64
006146c8:  mov      w4, #0x32
006146cc:  sxtb     w9, w8
006146d0:  cmp      w9, #0
006146d4:  csel     x0, x10, x22, mi
006146d8:  csel     x1, x11, x8, mi
006146dc:  bl       #0x6660d0
006146e0:  ldrsb    w8, [sp, #0xc7]
006146e4:  mov      x22, x0
006146e8:  tbz      w8, #0x1f, #0x6146fc
006146ec:  ldr      x8, [sp, #0xc0]
006146f0:  ldr      x0, [sp, #0xb0]
006146f4:  and      x1, x8, #0x7fffffffffffffff
006146f8:  bl       #0x546bc0
006146fc:  adrp     x2, #0xd64000
00614700:  add      x2, x2, #0x4b0
00614704:  b        #0x614798
00614708:  adrp     x8, #0xd64000
0061470c:  add      x8, x8, #0x4a8
00614710:  ldar     x22, [x8]
00614714:  cbnz     x22, #0x6147a8
00614718:  ldrsb    x8, [x20, #0x17]
0061471c:  ldp      x9, x10, [x20]
00614720:  adrp     x3, #0x19a000
00614724:  add      x3, x3, #0x666
00614728:  add      x0, sp, #0x90
0061472c:  cmp      x8, #0
00614730:  mov      w4, #0x19
00614734:  add      x22, sp, #0xb0
00614738:  csel     x1, x9, x20, mi
0061473c:  cmp      w8, #0
00614740:  csel     x2, x10, x8, mi
00614744:  add      x8, sp, #0xb0
00614748:  bl       #0x5ff514
0061474c:  ldrb     w8, [sp, #0xc7]
00614750:  ldp      x10, x11, [sp, #0xb0]
00614754:  mov      w2, #1
00614758:  mov      w3, #0x64
0061475c:  mov      w4, #0x32
00614760:  sxtb     w9, w8
00614764:  cmp      w9, #0
00614768:  csel     x0, x10, x22, mi
0061476c:  csel     x1, x11, x8, mi
00614770:  bl       #0x6660d0
00614774:  ldrsb    w8, [sp, #0xc7]
00614778:  mov      x22, x0
0061477c:  tbz      w8, #0x1f, #0x614790
00614780:  ldr      x8, [sp, #0xc0]
00614784:  ldr      x0, [sp, #0xb0]
00614788:  and      x1, x8, #0x7fffffffffffffff
0061478c:  bl       #0x546bc0
00614790:  adrp     x2, #0xd64000
00614794:  add      x2, x2, #0x4a8
00614798:  mov      x0, xzr
0061479c:  mov      x1, x22
006147a0:  bl       #0xd0f5e0
006147a4:  cbz      x22, #0x6147d0
006147a8:  smulh    x8, x23, x21
006147ac:  sub      w9, w24, w25
006147b0:  mov      x0, x22
006147b4:  lsl      w10, w9, #6
006147b8:  sub      w9, w10, w9, lsl #2
006147bc:  asr      x11, x8, #7
006147c0:  sxtw     x9, w9
006147c4:  add      x8, x11, x8, lsr #63
006147c8:  sdiv     x1, x9, x8
006147cc:  bl       #0x666568
006147d0:  ldr      x8, [x20, #0x3e8]
006147d4:  cmn      x8, #1
006147d8:  b.eq     #0x614efc
006147dc:  ldr      x0, [x20, #0x18]
006147e0:  ldr      x8, [x0]
006147e4:  ldr      x8, [x8, #0x10]
006147e8:  blr      x8
006147ec:  lsr      x9, x0, #3
006147f0:  neg      x10, x0
006147f4:  mov      w8, #0x3e8
006147f8:  lsr      x11, x10, #3
006147fc:  mov      w12, #0x3e8
00614800:  umulh    x9, x9, x21
00614804:  umulh    x11, x11, x21
00614808:  lsr      x9, x9, #4
0061480c:  lsr      x11, x11, #4
00614810:  msub     x8, x9, x8, x0
00614814:  msub     x10, x11, x12, x10
00614818:  cmp      x8, #0x1f3
0061481c:  cinc     x8, x9, hi
00614820:  cmp      x10, #0x1f4
00614824:  ldr      x10, [x20, #0x3e8]
00614828:  csetm    x9, hi
0061482c:  tst      x0, #-0x8000000000000000
00614830:  sub      x9, x9, x11
00614834:  csel     x8, x8, x9, eq
00614838:  mov      w9, #0x2710
0061483c:  sub      x8, x8, x10
00614840:  cmp      x8, x9
00614844:  b.lt     #0x614efc
00614848:  add      x0, x20, #0x478
0061484c:  smulh    x25, x8, x21
00614850:  bl       #0x61e0a8
00614854:  cmn      w0, #1
00614858:  b.eq     #0x614924
0061485c:  mov      w22, w0
00614860:  ldrsb    x8, [x20, #0x17]
00614864:  ldp      x9, x10, [x20]
00614868:  adrp     x3, #0x1b6000
0061486c:  add      x3, x3, #0xdb9
00614870:  add      x0, sp, #0x90
00614874:  cmp      x8, #0
00614878:  mov      w4, #0x18
0061487c:  add      x23, sp, #0xb0
00614880:  csel     x1, x9, x20, mi
00614884:  cmp      w8, #0
00614888:  csel     x2, x10, x8, mi
0061488c:  add      x8, sp, #0xb0
00614890:  bl       #0x5ff514
00614894:  ldrb     w8, [sp, #0xc7]
00614898:  ldp      x10, x11, [sp, #0xb0]
0061489c:  mov      w2, #0x65
006148a0:  sxtb     w9, w8
006148a4:  cmp      w9, #0
006148a8:  csel     x0, x10, x23, mi
006148ac:  csel     x1, x11, x8, mi
006148b0:  bl       #0x66631c
006148b4:  ldrsb    w8, [sp, #0xc7]
006148b8:  mov      x23, x0
006148bc:  tbz      w8, #0x1f, #0x6148d0
006148c0:  ldr      x8, [sp, #0xc0]
006148c4:  ldr      x0, [sp, #0xb0]
006148c8:  and      x1, x8, #0x7fffffffffffffff
006148cc:  bl       #0x546bc0
006148d0:  cbz      x23, #0x6148e0
006148d4:  mov      x0, x23
006148d8:  mov      w1, w22
006148dc:  bl       #0x666568
006148e0:  ldrsb    x2, [x20, #0x17]
006148e4:  tbnz     x2, #0x3f, #0x6148f0
006148e8:  mov      x1, x20
006148ec:  b        #0x6148f4
006148f0:  ldp      x1, x2, [x20]
006148f4:  add      x0, sp, #0x110
006148f8:  bl       #0x6228b0
006148fc:  adrp     x1, #0x1a9000
00614900:  add      x1, x1, #0x236
00614904:  mov      w2, #0x19
00614908:  bl       #0x6228b0
0061490c:  mov      w1, w22
00614910:  bl       #0x622910
00614914:  adrp     x1, #0x1de000
00614918:  add      x1, x1, #0xd1c
0061491c:  mov      w2, #1
00614920:  bl       #0x6228b0
00614924:  ldp      x11, x12, [x28]
00614928:  asr      x8, x25, #7
0061492c:  cmp      x11, x12
00614930:  b.eq     #0x614a3c
00614934:  movi     v0.2d, #0000000000000000
00614938:  mov      x13, x19
0061493c:  mov      w10, wzr
00614940:  ldr      x14, [x13, #0xa8]!
00614944:  mov      w23, wzr
00614948:  mov      w9, wzr
0061494c:  add      x15, x20, #0x540
00614950:  b        #0x614970
00614954:  add      v0.2s, v1.2s, v0.2s
00614958:  add      w9, w0, w9
0061495c:  add      w23, w17, w23
00614960:  add      w10, w16, w10
00614964:  add      x11, x11, #4
00614968:  cmp      x11, x12
0061496c:  b.eq     #0x614a18
00614970:  cbz      x14, #0x614964
00614974:  ldr      w1, [x11]
00614978:  mov      x16, x14
0061497c:  b        #0x614988
00614980:  ldr      x16, [x16]
00614984:  cbz      x16, #0x614964
00614988:  ldr      w17, [x16, #0x20]
0061498c:  cmp      w1, w17
00614990:  b.lo     #0x614980
00614994:  b.eq     #0x6149a4
00614998:  ldr      x16, [x16, #8]
0061499c:  cbnz     x16, #0x614988
006149a0:  b        #0x614964
006149a4:  cmp      x16, x13
006149a8:  b.eq     #0x614964
006149ac:  ldr      d1, [x16, #0x108]
006149b0:  ldr      x2, [x15]
006149b4:  ldr      w0, [x16, #0x110]
006149b8:  ldr      w17, [x16, #0x114]
006149bc:  ldr      w16, [x16, #0x118]
006149c0:  cbnz     x2, #0x6149d0
006149c4:  b        #0x614954
006149c8:  ldr      x2, [x2]
006149cc:  cbz      x2, #0x614954
006149d0:  ldr      w3, [x2, #0x20]
006149d4:  cmp      w1, w3
006149d8:  b.lo     #0x6149c8
006149dc:  b.eq     #0x6149ec
006149e0:  ldr      x2, [x2, #8]
006149e4:  cbnz     x2, #0x6149d0
006149e8:  b        #0x614954
006149ec:  cmp      x2, x15
006149f0:  b.eq     #0x614954
006149f4:  ldr      d2, [x2, #0x108]
006149f8:  ldr      w1, [x2, #0x110]
006149fc:  ldr      w3, [x2, #0x114]
00614a00:  ldr      w2, [x2, #0x118]
00614a04:  sub      v1.2s, v1.2s, v2.2s
00614a08:  sub      w0, w0, w1
00614a0c:  sub      w17, w17, w3
00614a10:  sub      w16, w16, w2
00614a14:  b        #0x614954
00614a18:  movi     v1.2s, #0x3c
00614a1c:  ucvtf    s2, w10
00614a20:  mov      w10, #0x42c80000
00614a24:  fmov     s3, w10
00614a28:  lsl      w10, w9, #6
00614a2c:  sub      w24, w10, w9, lsl #2
00614a30:  mul      v0.2s, v0.2s, v1.2s
00614a34:  fmul     s8, s2, s3
00614a38:  b        #0x614a4c
00614a3c:  movi     v0.2d, #0000000000000000
00614a40:  mov      x24, xzr
00614a44:  movi     d8, #0000000000000000
00614a48:  mov      w23, wzr
00614a4c:  str      q0, [sp]
00614a50:  add      x25, x8, x25, lsr #63
00614a54:  tbz      w27, #0, #0x614c54
00614a58:  adrp     x8, #0xd64000
00614a5c:  add      x8, x8, #0x4c0
00614a60:  ldar     x22, [x8]
00614a64:  cbnz     x22, #0x614af8
00614a68:  ldrsb    x8, [x20, #0x17]
00614a6c:  ldp      x9, x10, [x20]
00614a70:  adrp     x3, #0x1a6000
00614a74:  add      x3, x3, #0x371
00614a78:  add      x0, sp, #0x90
00614a7c:  cmp      x8, #0
00614a80:  mov      w4, #0x1c
00614a84:  add      x22, sp, #0xb0
00614a88:  csel     x1, x9, x20, mi
00614a8c:  cmp      w8, #0
00614a90:  csel     x2, x10, x8, mi
00614a94:  add      x8, sp, #0xb0
00614a98:  bl       #0x5ff514
00614a9c:  ldrb     w8, [sp, #0xc7]
00614aa0:  ldp      x10, x11, [sp, #0xb0]
00614aa4:  mov      w2, #1
00614aa8:  mov      w3, #0x2710
00614aac:  mov      w4, #0x32
00614ab0:  sxtb     w9, w8
00614ab4:  cmp      w9, #0
00614ab8:  csel     x0, x10, x22, mi
00614abc:  csel     x1, x11, x8, mi
00614ac0:  bl       #0x6660d0
00614ac4:  ldrsb    w8, [sp, #0xc7]
00614ac8:  mov      x22, x0
00614acc:  tbz      w8, #0x1f, #0x614ae0
00614ad0:  ldr      x8, [sp, #0xc0]
00614ad4:  ldr      x0, [sp, #0xb0]
00614ad8:  and      x1, x8, #0x7fffffffffffffff
00614adc:  bl       #0x546bc0
00614ae0:  adrp     x2, #0xd64000
00614ae4:  add      x2, x2, #0x4c0
00614ae8:  mov      x0, xzr
00614aec:  mov      x1, x22
00614af0:  bl       #0xd0f5e0
00614af4:  cbz      x22, #0x614b0c
00614af8:  ldr      q0, [sp]
00614afc:  mov      x0, x22
00614b00:  fmov     w8, s0
00614b04:  udiv     x1, x8, x25
00614b08:  bl       #0x666568
00614b0c:  adrp     x8, #0xd64000
00614b10:  add      x8, x8, #0x4d0
00614b14:  ldar     x22, [x8]
00614b18:  cbnz     x22, #0x614bac
00614b1c:  ldrsb    x8, [x20, #0x17]
00614b20:  ldp      x9, x10, [x20]
00614b24:  adrp     x3, #0x1ca000
00614b28:  add      x3, x3, #0xde8
00614b2c:  add      x0, sp, #0x90
00614b30:  cmp      x8, #0
00614b34:  mov      w4, #0x1b
00614b38:  add      x22, sp, #0xb0
00614b3c:  csel     x1, x9, x20, mi
00614b40:  cmp      w8, #0
00614b44:  csel     x2, x10, x8, mi
00614b48:  add      x8, sp, #0xb0
00614b4c:  bl       #0x5ff514
00614b50:  ldrb     w8, [sp, #0xc7]
00614b54:  ldp      x10, x11, [sp, #0xb0]
00614b58:  mov      w2, #1
00614b5c:  mov      w3, #0x2710
00614b60:  mov      w4, #0x32
00614b64:  sxtb     w9, w8
00614b68:  cmp      w9, #0
00614b6c:  csel     x0, x10, x22, mi
00614b70:  csel     x1, x11, x8, mi
00614b74:  bl       #0x6660d0
00614b78:  ldrsb    w8, [sp, #0xc7]
00614b7c:  mov      x22, x0
00614b80:  tbz      w8, #0x1f, #0x614b94
00614b84:  ldr      x8, [sp, #0xc0]
00614b88:  ldr      x0, [sp, #0xb0]
00614b8c:  and      x1, x8, #0x7fffffffffffffff
00614b90:  bl       #0x546bc0
00614b94:  adrp     x2, #0xd64000
00614b98:  add      x2, x2, #0x4d0
00614b9c:  mov      x0, xzr
00614ba0:  mov      x1, x22
00614ba4:  bl       #0xd0f5e0
00614ba8:  cbz      x22, #0x614bc0
00614bac:  ldr      q0, [sp]
00614bb0:  mov      x0, x22
00614bb4:  mov      w8, v0.s[1]
00614bb8:  udiv     x1, x8, x25
00614bbc:  bl       #0x666568
00614bc0:  adrp     x8, #0xd64000
00614bc4:  add      x8, x8, #0x4e0
00614bc8:  ldar     x22, [x8]
00614bcc:  cbnz     x22, #0x614e5c
00614bd0:  ldrsb    x8, [x20, #0x17]
00614bd4:  ldp      x9, x10, [x20]
00614bd8:  adrp     x3, #0x1c8000
00614bdc:  add      x3, x3, #0x455
00614be0:  add      x0, sp, #0x90
00614be4:  cmp      x8, #0
00614be8:  mov      w4, #0x1b
00614bec:  add      x22, sp, #0xb0
00614bf0:  csel     x1, x9, x20, mi
00614bf4:  cmp      w8, #0
00614bf8:  csel     x2, x10, x8, mi
00614bfc:  add      x8, sp, #0xb0
00614c00:  bl       #0x5ff514
00614c04:  ldrb     w8, [sp, #0xc7]
00614c08:  ldp      x10, x11, [sp, #0xb0]
00614c0c:  mov      w2, #1
00614c10:  mov      w3, #0x2710
00614c14:  mov      w4, #0x32
00614c18:  sxtb     w9, w8
00614c1c:  cmp      w9, #0
00614c20:  csel     x0, x10, x22, mi
00614c24:  csel     x1, x11, x8, mi
00614c28:  bl       #0x6660d0
00614c2c:  ldrsb    w8, [sp, #0xc7]
00614c30:  mov      x22, x0
00614c34:  tbz      w8, #0x1f, #0x614c48
00614c38:  ldr      x8, [sp, #0xc0]
00614c3c:  ldr      x0, [sp, #0xb0]
00614c40:  and      x1, x8, #0x7fffffffffffffff
00614c44:  bl       #0x546bc0
00614c48:  adrp     x2, #0xd64000
00614c4c:  add      x2, x2, #0x4e0
00614c50:  b        #0x614e4c
00614c54:  adrp     x8, #0xd64000
00614c58:  add      x8, x8, #0x4b8
00614c5c:  ldar     x22, [x8]
00614c60:  cbnz     x22, #0x614cf4
00614c64:  ldrsb    x8, [x20, #0x17]
00614c68:  ldp      x9, x10, [x20]
00614c6c:  adrp     x3, #0x1a6000
00614c70:  add      x3, x3, #0x371
00614c74:  add      x0, sp, #0x90
00614c78:  cmp      x8, #0
00614c7c:  mov      w4, #0x1c
00614c80:  add      x22, sp, #0xb0
00614c84:  csel     x1, x9, x20, mi
00614c88:  cmp      w8, #0
00614c8c:  csel     x2, x10, x8, mi
00614c90:  add      x8, sp, #0xb0
00614c94:  bl       #0x5ff514
00614c98:  ldrb     w8, [sp, #0xc7]
00614c9c:  ldp      x10, x11, [sp, #0xb0]
00614ca0:  mov      w2, #1
00614ca4:  mov      w3, #0x2710
00614ca8:  mov      w4, #0x32
00614cac:  sxtb     w9, w8
00614cb0:  cmp      w9, #0
00614cb4:  csel     x0, x10, x22, mi
00614cb8:  csel     x1, x11, x8, mi
00614cbc:  bl       #0x6660d0
00614cc0:  ldrsb    w8, [sp, #0xc7]
00614cc4:  mov      x22, x0
00614cc8:  tbz      w8, #0x1f, #0x614cdc
00614ccc:  ldr      x8, [sp, #0xc0]
00614cd0:  ldr      x0, [sp, #0xb0]
00614cd4:  and      x1, x8, #0x7fffffffffffffff
00614cd8:  bl       #0x546bc0
00614cdc:  adrp     x2, #0xd64000
00614ce0:  add      x2, x2, #0x4b8
00614ce4:  mov      x0, xzr
00614ce8:  mov      x1, x22
00614cec:  bl       #0xd0f5e0
00614cf0:  cbz      x22, #0x614d08
00614cf4:  ldr      q0, [sp]
00614cf8:  mov      x0, x22
00614cfc:  fmov     w8, s0
00614d00:  udiv     x1, x8, x25
00614d04:  bl       #0x666568
00614d08:  adrp     x8, #0xd64000
00614d0c:  add      x8, x8, #0x4c8
00614d10:  ldar     x22, [x8]
00614d14:  cbnz     x22, #0x614da8
00614d18:  ldrsb    x8, [x20, #0x17]
00614d1c:  ldp      x9, x10, [x20]
00614d20:  adrp     x3, #0x1ca000
00614d24:  add      x3, x3, #0xde8
00614d28:  add      x0, sp, #0x90
00614d2c:  cmp      x8, #0
00614d30:  mov      w4, #0x1b
00614d34:  add      x22, sp, #0xb0
00614d38:  csel     x1, x9, x20, mi
00614d3c:  cmp      w8, #0
00614d40:  csel     x2, x10, x8, mi
00614d44:  add      x8, sp, #0xb0
00614d48:  bl       #0x5ff514
00614d4c:  ldrb     w8, [sp, #0xc7]
00614d50:  ldp      x10, x11, [sp, #0xb0]
00614d54:  mov      w2, #1
00614d58:  mov      w3, #0x2710
00614d5c:  mov      w4, #0x32
00614d60:  sxtb     w9, w8
00614d64:  cmp      w9, #0
00614d68:  csel     x0, x10, x22, mi
00614d6c:  csel     x1, x11, x8, mi
00614d70:  bl       #0x6660d0
00614d74:  ldrsb    w8, [sp, #0xc7]
00614d78:  mov      x22, x0
00614d7c:  tbz      w8, #0x1f, #0x614d90
00614d80:  ldr      x8, [sp, #0xc0]
00614d84:  ldr      x0, [sp, #0xb0]
00614d88:  and      x1, x8, #0x7fffffffffffffff
00614d8c:  bl       #0x546bc0
00614d90:  adrp     x2, #0xd64000
00614d94:  add      x2, x2, #0x4c8
00614d98:  mov      x0, xzr
00614d9c:  mov      x1, x22
00614da0:  bl       #0xd0f5e0
00614da4:  cbz      x22, #0x614dbc
00614da8:  ldr      q0, [sp]
00614dac:  mov      x0, x22
00614db0:  mov      w8, v0.s[1]
00614db4:  udiv     x1, x8, x25
00614db8:  bl       #0x666568
00614dbc:  adrp     x8, #0xd64000
00614dc0:  add      x8, x8, #0x4d8
00614dc4:  ldar     x22, [x8]
00614dc8:  cbnz     x22, #0x614e5c
00614dcc:  ldrsb    x8, [x20, #0x17]
00614dd0:  ldp      x9, x10, [x20]
00614dd4:  adrp     x3, #0x1c8000
00614dd8:  add      x3, x3, #0x455
00614ddc:  add      x0, sp, #0x90
00614de0:  cmp      x8, #0
00614de4:  mov      w4, #0x1b
00614de8:  add      x22, sp, #0xb0
00614dec:  csel     x1, x9, x20, mi
00614df0:  cmp      w8, #0
00614df4:  csel     x2, x10, x8, mi
00614df8:  add      x8, sp, #0xb0
00614dfc:  bl       #0x5ff514
00614e00:  ldrb     w8, [sp, #0xc7]
00614e04:  ldp      x10, x11, [sp, #0xb0]
00614e08:  mov      w2, #1
00614e0c:  mov      w3, #0x2710
00614e10:  mov      w4, #0x32
00614e14:  sxtb     w9, w8
00614e18:  cmp      w9, #0
00614e1c:  csel     x0, x10, x22, mi
00614e20:  csel     x1, x11, x8, mi
00614e24:  bl       #0x6660d0
00614e28:  ldrsb    w8, [sp, #0xc7]
00614e2c:  mov      x22, x0
00614e30:  tbz      w8, #0x1f, #0x614e44
00614e34:  ldr      x8, [sp, #0xc0]
00614e38:  ldr      x0, [sp, #0xb0]
00614e3c:  and      x1, x8, #0x7fffffffffffffff
00614e40:  bl       #0x546bc0
00614e44:  adrp     x2, #0xd64000
00614e48:  add      x2, x2, #0x4d8
00614e4c:  mov      x0, xzr
00614e50:  mov      x1, x22
00614e54:  bl       #0xd0f5e0
00614e58:  cbz      x22, #0x614e68
00614e5c:  udiv     x1, x24, x25
00614e60:  mov      x0, x22
00614e64:  bl       #0x666568
00614e68:  cbz      w23, #0x614efc
00614e6c:  ldrsb    x8, [x20, #0x17]
00614e70:  ldp      x9, x10, [x20]
00614e74:  adrp     x3, #0x1e4000
00614e78:  add      x3, x3, #0xb1a
00614e7c:  add      x0, sp, #0x90
00614e80:  cmp      x8, #0
00614e84:  mov      w4, #0x23
00614e88:  add      x22, sp, #0xb0
00614e8c:  csel     x1, x9, x20, mi
00614e90:  cmp      w8, #0
00614e94:  csel     x2, x10, x8, mi
00614e98:  add      x8, sp, #0xb0
00614e9c:  bl       #0x5ff514
00614ea0:  ldrb     w8, [sp, #0xc7]
00614ea4:  ldp      x10, x11, [sp, #0xb0]
00614ea8:  mov      w2, #0x65
00614eac:  sxtb     w9, w8
00614eb0:  cmp      w9, #0
00614eb4:  csel     x0, x10, x22, mi
00614eb8:  csel     x1, x11, x8, mi
00614ebc:  bl       #0x66631c
00614ec0:  ldrsb    w8, [sp, #0xc7]
00614ec4:  mov      x22, x0
00614ec8:  tbz      w8, #0x1f, #0x614edc
00614ecc:  ldr      x8, [sp, #0xc0]
00614ed0:  ldr      x0, [sp, #0xb0]
00614ed4:  and      x1, x8, #0x7fffffffffffffff
00614ed8:  bl       #0x546bc0
00614edc:  cbz      x22, #0x614efc
00614ee0:  ucvtf    s0, w23
00614ee4:  fmov     s1, #0.50000000
00614ee8:  mov      x0, x22
00614eec:  fdiv     s0, s8, s0
00614ef0:  fadd     s0, s0, s1
00614ef4:  fcvtzs   w1, s0
00614ef8:  bl       #0x666568
00614efc:  ldr      x8, [x20, #0x3f0]
00614f00:  cmn      x8, #1
00614f04:  b.eq     #0x615200
00614f08:  ldr      x0, [x20, #0x18]
00614f0c:  ldr      x8, [x0]
00614f10:  ldr      x8, [x8, #0x10]
00614f14:  blr      x8
00614f18:  tbnz     x0, #0x3f, #0x614f3c
00614f1c:  lsr      x8, x0, #3
00614f20:  mov      w9, #0x3e8
00614f24:  umulh    x8, x8, x21
00614f28:  lsr      x8, x8, #4
00614f2c:  msub     x9, x8, x9, x0
00614f30:  cmp      x9, #0x1f3
00614f34:  cinc     x8, x8, hi
00614f38:  b        #0x614f60
00614f3c:  neg      x8, x0
00614f40:  mov      w10, #0x3e8
00614f44:  lsr      x9, x8, #3
00614f48:  umulh    x9, x9, x21
00614f4c:  lsr      x9, x9, #4
00614f50:  msub     x8, x9, x10, x8
00614f54:  cmp      x8, #0x1f4
00614f58:  csetm    x8, hi
00614f5c:  sub      x8, x8, x9
00614f60:  ldr      x9, [x20, #0x3f0]
00614f64:  sub      x8, x8, x9
00614f68:  mov      w9, #0x2710
00614f6c:  cmp      x8, x9
00614f70:  b.lt     #0x615200
00614f74:  tbz      w27, #0, #0x61500c
00614f78:  adrp     x8, #0xd64000
00614f7c:  add      x8, x8, #0x4f0
00614f80:  ldar     x22, [x8]
00614f84:  cbnz     x22, #0x6150ac
00614f88:  ldrsb    x8, [x20, #0x17]
00614f8c:  ldp      x9, x10, [x20]
00614f90:  adrp     x3, #0x1ba000
00614f94:  add      x3, x3, #0x9e
00614f98:  add      x0, sp, #0x90
00614f9c:  cmp      x8, #0
00614fa0:  mov      w4, #0x13
00614fa4:  add      x22, sp, #0xb0
00614fa8:  csel     x1, x9, x20, mi
00614fac:  cmp      w8, #0
00614fb0:  csel     x2, x10, x8, mi
00614fb4:  add      x8, sp, #0xb0
00614fb8:  bl       #0x5ff514
00614fbc:  ldrb     w8, [sp, #0xc7]
00614fc0:  ldp      x10, x11, [sp, #0xb0]
00614fc4:  mov      w2, #1
00614fc8:  mov      w3, #0x64
00614fcc:  mov      w4, #0x32
00614fd0:  sxtb     w9, w8
00614fd4:  cmp      w9, #0
00614fd8:  csel     x0, x10, x22, mi
00614fdc:  csel     x1, x11, x8, mi
00614fe0:  bl       #0x6660d0
00614fe4:  ldrsb    w8, [sp, #0xc7]
00614fe8:  mov      x22, x0
00614fec:  tbz      w8, #0x1f, #0x615000
00614ff0:  ldr      x8, [sp, #0xc0]
00614ff4:  ldr      x0, [sp, #0xb0]
00614ff8:  and      x1, x8, #0x7fffffffffffffff
00614ffc:  bl       #0x546bc0
00615000:  adrp     x2, #0xd64000
00615004:  add      x2, x2, #0x4f0
00615008:  b        #0x61509c
0061500c:  adrp     x8, #0xd64000
00615010:  add      x8, x8, #0x4e8
00615014:  ldar     x22, [x8]
00615018:  cbnz     x22, #0x6150ac
0061501c:  ldrsb    x8, [x20, #0x17]
00615020:  ldp      x9, x10, [x20]
00615024:  adrp     x3, #0x1ba000
00615028:  add      x3, x3, #0x9e
0061502c:  add      x0, sp, #0x90
00615030:  cmp      x8, #0
00615034:  mov      w4, #0x13
00615038:  add      x22, sp, #0xb0
0061503c:  csel     x1, x9, x20, mi
00615040:  cmp      w8, #0
00615044:  csel     x2, x10, x8, mi
00615048:  add      x8, sp, #0xb0
0061504c:  bl       #0x5ff514
00615050:  ldrb     w8, [sp, #0xc7]
00615054:  ldp      x10, x11, [sp, #0xb0]
00615058:  mov      w2, #1
0061505c:  mov      w3, #0x64
00615060:  mov      w4, #0x32
00615064:  sxtb     w9, w8
00615068:  cmp      w9, #0
0061506c:  csel     x0, x10, x22, mi
00615070:  csel     x1, x11, x8, mi
00615074:  bl       #0x6660d0
00615078:  ldrsb    w8, [sp, #0xc7]
0061507c:  mov      x22, x0
00615080:  tbz      w8, #0x1f, #0x615094
00615084:  ldr      x8, [sp, #0xc0]
00615088:  ldr      x0, [sp, #0xb0]
0061508c:  and      x1, x8, #0x7fffffffffffffff
00615090:  bl       #0x546bc0
00615094:  adrp     x2, #0xd64000
00615098:  add      x2, x2, #0x4e8
0061509c:  mov      x0, xzr
006150a0:  mov      x1, x22
006150a4:  bl       #0xd0f5e0
006150a8:  cbz      x22, #0x6150b8
006150ac:  ldr      w1, [x20, #0x428]
006150b0:  mov      x0, x22
006150b4:  bl       #0x666568
006150b8:  ldrsb    x2, [x20, #0x17]
006150bc:  tbnz     x2, #0x3f, #0x6150c8
006150c0:  mov      x1, x20
006150c4:  b        #0x6150cc
006150c8:  ldp      x1, x2, [x20]
006150cc:  add      x0, sp, #0x110
006150d0:  bl       #0x6228b0
006150d4:  adrp     x1, #0x1d3000
006150d8:  add      x1, x1, #0x76c
006150dc:  mov      w2, #0x14
006150e0:  bl       #0x6228b0
006150e4:  ldr      w1, [x20, #0x428]
006150e8:  bl       #0x622910
006150ec:  adrp     x1, #0x1de000
006150f0:  add      x1, x1, #0xd1c
006150f4:  mov      w2, #1
006150f8:  bl       #0x6228b0
006150fc:  ldr      x8, [x20, #0x420]
00615100:  mov      w9, #0x2710
00615104:  cmp      x8, x9
00615108:  b.lt     #0x615200
0061510c:  ldr      x9, [x20, #0x418]
00615110:  scvtf    s0, x9
00615114:  mov      w9, #0x42c80000
00615118:  fmov     s1, w9
0061511c:  fmul     s0, s0, s1
00615120:  ucvtf    s1, x8
00615124:  fdiv     s0, s0, s1
00615128:  fmov     s1, #0.50000000
0061512c:  fadd     s0, s0, s1
00615130:  fcvtzs   w22, s0
00615134:  cmn      w22, #1
00615138:  b.eq     #0x615200
0061513c:  ldrsb    x8, [x20, #0x17]
00615140:  ldp      x9, x10, [x20]
00615144:  adrp     x3, #0x1cd000
00615148:  add      x3, x3, #0xe37
0061514c:  add      x0, sp, #0x90
00615150:  cmp      x8, #0
00615154:  mov      w4, #0x13
00615158:  add      x23, sp, #0xb0
0061515c:  csel     x1, x9, x20, mi
00615160:  cmp      w8, #0
00615164:  csel     x2, x10, x8, mi
00615168:  add      x8, sp, #0xb0
0061516c:  bl       #0x5ff514
00615170:  ldrb     w8, [sp, #0xc7]
00615174:  ldp      x10, x11, [sp, #0xb0]
00615178:  mov      w2, #0x65
0061517c:  sxtb     w9, w8
00615180:  cmp      w9, #0
00615184:  csel     x0, x10, x23, mi
00615188:  csel     x1, x11, x8, mi
0061518c:  bl       #0x66631c
00615190:  ldrsb    w8, [sp, #0xc7]
00615194:  mov      x23, x0
00615198:  tbz      w8, #0x1f, #0x6151ac
0061519c:  ldr      x8, [sp, #0xc0]
006151a0:  ldr      x0, [sp, #0xb0]
006151a4:  and      x1, x8, #0x7fffffffffffffff
006151a8:  bl       #0x546bc0
006151ac:  cbz      x23, #0x6151bc
006151b0:  mov      x0, x23
006151b4:  mov      w1, w22
006151b8:  bl       #0x666568
006151bc:  ldrsb    x2, [x20, #0x17]
006151c0:  tbnz     x2, #0x3f, #0x6151cc
006151c4:  mov      x1, x20
006151c8:  b        #0x6151d0
006151cc:  ldp      x1, x2, [x20]
006151d0:  add      x0, sp, #0x110
006151d4:  bl       #0x6228b0
006151d8:  adrp     x1, #0x1d3000
006151dc:  add      x1, x1, #0x781
006151e0:  mov      w2, #0x14
006151e4:  bl       #0x6228b0
006151e8:  mov      w1, w22
006151ec:  bl       #0x622910
006151f0:  adrp     x1, #0x1de000
006151f4:  add      x1, x1, #0xd1c
006151f8:  mov      w2, #1
006151fc:  bl       #0x6228b0
00615200:  ldrb     w8, [x20, #0x448]
00615204:  cmp      w8, #1
00615208:  b.ne     #0x6154b8
0061520c:  ldr      x8, [x20, #0x440]
00615210:  mov      w9, #0x4e20
00615214:  cmp      x8, x9
00615218:  b.lt     #0x6154b8
0061521c:  ldr      x9, [x20, #0x438]
00615220:  ldr      x24, [x20, #0x450]
00615224:  scvtf    s0, x9
00615228:  mov      w9, #0x42c80000
0061522c:  fmov     s1, w9
00615230:  fmul     s0, s0, s1
00615234:  ucvtf    s1, x8
00615238:  mov      w8, #0x4e20
0061523c:  fdiv     s0, s0, s1
00615240:  fmov     s1, #0.50000000
00615244:  fadd     s0, s0, s1
00615248:  fcvtzs   w22, s0
0061524c:  cmn      w22, #1
00615250:  ccmp     x24, x8, #8, ne
00615254:  b.lt     #0x6154b8
00615258:  tbz      w27, #0, #0x615370
0061525c:  ldrsb    x8, [x20, #0x17]
00615260:  ldp      x9, x10, [x20]
00615264:  adrp     x3, #0x1e4000
00615268:  add      x3, x3, #0xb3e
0061526c:  add      x0, sp, #0x90
00615270:  cmp      x8, #0
00615274:  mov      w4, #0x29
00615278:  add      x23, sp, #0xb0
0061527c:  csel     x1, x9, x20, mi
00615280:  cmp      w8, #0
00615284:  csel     x2, x10, x8, mi
00615288:  add      x8, sp, #0xb0
0061528c:  bl       #0x5ff514
00615290:  ldrb     w8, [sp, #0xc7]
00615294:  ldp      x10, x11, [sp, #0xb0]
00615298:  mov      w2, #0x65
0061529c:  sxtb     w9, w8
006152a0:  cmp      w9, #0
006152a4:  csel     x0, x10, x23, mi
006152a8:  csel     x1, x11, x8, mi
006152ac:  bl       #0x66631c
006152b0:  ldrsb    w8, [sp, #0xc7]
006152b4:  mov      x23, x0
006152b8:  tbz      w8, #0x1f, #0x6152cc
006152bc:  ldr      x8, [sp, #0xc0]
006152c0:  ldr      x0, [sp, #0xb0]
006152c4:  and      x1, x8, #0x7fffffffffffffff
006152c8:  bl       #0x546bc0
006152cc:  cbz      x23, #0x6152dc
006152d0:  mov      x0, x23
006152d4:  mov      w1, w22
006152d8:  bl       #0x666568
006152dc:  adrp     x8, #0xd64000
006152e0:  add      x8, x8, #0x500
006152e4:  ldar     x22, [x8]
006152e8:  cbnz     x22, #0x615490
006152ec:  ldrsb    x8, [x20, #0x17]
006152f0:  ldp      x9, x10, [x20]
006152f4:  adrp     x3, #0x1c2000
006152f8:  add      x3, x3, #0x64d
006152fc:  add      x0, sp, #0x90
00615300:  cmp      x8, #0
00615304:  mov      w4, #0x2c
00615308:  add      x22, sp, #0xb0
0061530c:  csel     x1, x9, x20, mi
00615310:  cmp      w8, #0
00615314:  csel     x2, x10, x8, mi
00615318:  add      x8, sp, #0xb0
0061531c:  bl       #0x5ff514
00615320:  ldrb     w8, [sp, #0xc7]
00615324:  ldp      x10, x11, [sp, #0xb0]
00615328:  mov      w2, #1
0061532c:  mov      w3, #0x64
00615330:  mov      w4, #0x32
00615334:  sxtb     w9, w8
00615338:  cmp      w9, #0
0061533c:  csel     x0, x10, x22, mi
00615340:  csel     x1, x11, x8, mi
00615344:  bl       #0x6660d0
00615348:  ldrsb    w8, [sp, #0xc7]
0061534c:  mov      x22, x0
00615350:  tbz      w8, #0x1f, #0x615364
00615354:  ldr      x8, [sp, #0xc0]
00615358:  ldr      x0, [sp, #0xb0]
0061535c:  and      x1, x8, #0x7fffffffffffffff
00615360:  bl       #0x546bc0
00615364:  adrp     x2, #0xd64000
00615368:  add      x2, x2, #0x500
0061536c:  b        #0x615480
00615370:  ldrsb    x8, [x20, #0x17]
00615374:  ldp      x9, x10, [x20]
00615378:  adrp     x3, #0x1e4000
0061537c:  add      x3, x3, #0xb3e
00615380:  add      x0, sp, #0x90
00615384:  cmp      x8, #0
00615388:  mov      w4, #0x29
0061538c:  add      x23, sp, #0xb0
00615390:  csel     x1, x9, x20, mi
00615394:  cmp      w8, #0
00615398:  csel     x2, x10, x8, mi
0061539c:  add      x8, sp, #0xb0
006153a0:  bl       #0x5ff514
006153a4:  ldrb     w8, [sp, #0xc7]
006153a8:  ldp      x10, x11, [sp, #0xb0]
006153ac:  mov      w2, #0x65
006153b0:  sxtb     w9, w8
006153b4:  cmp      w9, #0
006153b8:  csel     x0, x10, x23, mi
006153bc:  csel     x1, x11, x8, mi
006153c0:  bl       #0x66631c
006153c4:  ldrsb    w8, [sp, #0xc7]
006153c8:  mov      x23, x0
006153cc:  tbz      w8, #0x1f, #0x6153e0
006153d0:  ldr      x8, [sp, #0xc0]
006153d4:  ldr      x0, [sp, #0xb0]
006153d8:  and      x1, x8, #0x7fffffffffffffff
006153dc:  bl       #0x546bc0
006153e0:  cbz      x23, #0x6153f0
006153e4:  mov      x0, x23
006153e8:  mov      w1, w22
006153ec:  bl       #0x666568
006153f0:  adrp     x8, #0xd64000
006153f4:  add      x8, x8, #0x4f8
006153f8:  ldar     x22, [x8]
006153fc:  cbnz     x22, #0x615490
00615400:  ldrsb    x8, [x20, #0x17]
00615404:  ldp      x9, x10, [x20]
00615408:  adrp     x3, #0x1c2000
0061540c:  add      x3, x3, #0x64d
00615410:  add      x0, sp, #0x90
00615414:  cmp      x8, #0
00615418:  mov      w4, #0x2c
0061541c:  add      x22, sp, #0xb0
00615420:  csel     x1, x9, x20, mi
00615424:  cmp      w8, #0
00615428:  csel     x2, x10, x8, mi
0061542c:  add      x8, sp, #0xb0
00615430:  bl       #0x5ff514
00615434:  ldrb     w8, [sp, #0xc7]
00615438:  ldp      x10, x11, [sp, #0xb0]
0061543c:  mov      w2, #1
00615440:  mov      w3, #0x64
00615444:  mov      w4, #0x32
00615448:  sxtb     w9, w8
0061544c:  cmp      w9, #0
00615450:  csel     x0, x10, x22, mi
00615454:  csel     x1, x11, x8, mi
00615458:  bl       #0x6660d0
0061545c:  ldrsb    w8, [sp, #0xc7]
00615460:  mov      x22, x0
00615464:  tbz      w8, #0x1f, #0x615478
00615468:  ldr      x8, [sp, #0xc0]
0061546c:  ldr      x0, [sp, #0xb0]
00615470:  and      x1, x8, #0x7fffffffffffffff
00615474:  bl       #0x546bc0
00615478:  adrp     x2, #0xd64000
0061547c:  add      x2, x2, #0x4f8
00615480:  mov      x0, xzr
00615484:  mov      x1, x22
00615488:  bl       #0xd0f5e0
0061548c:  cbz      x22, #0x6154b8
00615490:  lsr      x8, x24, #3
00615494:  ldr      w9, [x20, #0x44c]
00615498:  mov      x0, x22
0061549c:  umulh    x8, x8, x21
006154a0:  lsl      w10, w9, #6
006154a4:  sub      w9, w10, w9, lsl #2
006154a8:  sxtw     x9, w9
006154ac:  lsr      x8, x8, #4
006154b0:  sdiv     x1, x9, x8
006154b4:  bl       #0x666568
006154b8:  movi     v0.16b, #0xaa
006154bc:  add      x8, sp, #0xb0
006154c0:  add      x0, x20, #0x1d8
006154c4:  str      q0, [x8]
006154c8:  add      x8, sp, #0xb0
006154cc:  str      d0, [sp, #0xc0]
006154d0:  bl       #0x5f4404
006154d4:  ldr      x8, [sp, #0xb0]
006154d8:  cmp      x8, #7
006154dc:  b.lt     #0x6156c8
006154e0:  tbz      w27, #0, #0x615578
006154e4:  adrp     x8, #0xd64000
006154e8:  add      x8, x8, #0x510
006154ec:  ldar     x22, [x8]
006154f0:  cbnz     x22, #0x615618
006154f4:  ldrsb    x8, [x20, #0x17]
006154f8:  ldp      x9, x10, [x20]
006154fc:  adrp     x3, #0x1e4000
00615500:  add      x3, x3, #0xb68
00615504:  add      x0, sp, #0x70
00615508:  cmp      x8, #0
0061550c:  mov      w4, #0x11
00615510:  add      x21, sp, #0x90
00615514:  csel     x1, x9, x20, mi
00615518:  cmp      w8, #0
0061551c:  csel     x2, x10, x8, mi
00615520:  add      x8, sp, #0x90
00615524:  bl       #0x5ff514
00615528:  ldrb     w8, [sp, #0xa7]
0061552c:  ldp      x10, x11, [sp, #0x90]
00615530:  mov      w2, #1
00615534:  mov      w3, #0x2710
00615538:  mov      w4, #0x32
0061553c:  sxtb     w9, w8
00615540:  cmp      w9, #0
00615544:  csel     x0, x10, x21, mi
00615548:  csel     x1, x11, x8, mi
0061554c:  bl       #0x6660d0
00615550:  ldrsb    w8, [sp, #0xa7]
00615554:  mov      x22, x0
00615558:  tbz      w8, #0x1f, #0x61556c
0061555c:  ldr      x8, [sp, #0xa0]
00615560:  ldr      x0, [sp, #0x90]
00615564:  and      x1, x8, #0x7fffffffffffffff
00615568:  bl       #0x546bc0
0061556c:  adrp     x2, #0xd64000
00615570:  add      x2, x2, #0x510
00615574:  b        #0x615608
00615578:  adrp     x8, #0xd64000
0061557c:  add      x8, x8, #0x508
00615580:  ldar     x22, [x8]
00615584:  cbnz     x22, #0x615618
00615588:  ldrsb    x8, [x20, #0x17]
0061558c:  ldp      x9, x10, [x20]
00615590:  adrp     x3, #0x1e4000
00615594:  add      x3, x3, #0xb68
00615598:  add      x0, sp, #0x70
0061559c:  cmp      x8, #0
006155a0:  mov      w4, #0x11
006155a4:  add      x21, sp, #0x90
006155a8:  csel     x1, x9, x20, mi
006155ac:  cmp      w8, #0
006155b0:  csel     x2, x10, x8, mi
006155b4:  add      x8, sp, #0x90
006155b8:  bl       #0x5ff514
006155bc:  ldrb     w8, [sp, #0xa7]
006155c0:  ldp      x10, x11, [sp, #0x90]
006155c4:  mov      w2, #1
006155c8:  mov      w3, #0x2710
006155cc:  mov      w4, #0x32
006155d0:  sxtb     w9, w8
006155d4:  cmp      w9, #0
006155d8:  csel     x0, x10, x21, mi
006155dc:  csel     x1, x11, x8, mi
006155e0:  bl       #0x6660d0
006155e4:  ldrsb    w8, [sp, #0xa7]
006155e8:  mov      x22, x0
006155ec:  tbz      w8, #0x1f, #0x615600
006155f0:  ldr      x8, [sp, #0xa0]
006155f4:  ldr      x0, [sp, #0x90]
006155f8:  and      x1, x8, #0x7fffffffffffffff
006155fc:  bl       #0x546bc0
00615600:  adrp     x2, #0xd64000
00615604:  add      x2, x2, #0x508
00615608:  mov      x0, xzr
0061560c:  mov      x1, x22
00615610:  bl       #0xd0f5e0
00615614:  cbz      x22, #0x61563c
00615618:  ldr      w8, [sp, #0xc0]
0061561c:  mov      w9, #0x4dd3
00615620:  mov      x0, x22
00615624:  movk     w9, #0x1062, lsl #16
00615628:  lsl      w8, w8, #3
0061562c:  smull    x8, w8, w9
00615630:  asr      x9, x8, #0x26
00615634:  add      x1, x9, x8, lsr #63
00615638:  bl       #0x666568
0061563c:  ldrsb    x2, [x20, #0x17]
00615640:  tbnz     x2, #0x3f, #0x61564c
00615644:  mov      x1, x20
00615648:  b        #0x615650
0061564c:  ldp      x1, x2, [x20]
00615650:  add      x0, sp, #0x110
00615654:  bl       #0x6228b0
00615658:  adrp     x1, #0x1e7000
0061565c:  add      x1, x1, #0xb94
00615660:  mov      w2, #0x11
00615664:  bl       #0x6228b0
00615668:  mov      x22, x0
0061566c:  add      x8, sp, #0x90
00615670:  add      x0, sp, #0xb0
00615674:  mov      w1, #8
00615678:  add      x21, sp, #0x90
0061567c:  bl       #0x5f41b4
00615680:  ldrb     w8, [sp, #0xa7]
00615684:  ldp      x10, x11, [sp, #0x90]
00615688:  mov      x0, x22
0061568c:  sxtb     w9, w8
00615690:  cmp      w9, #0
00615694:  csel     x1, x10, x21, mi
00615698:  csel     x2, x11, x8, mi
0061569c:  bl       #0x6228b0
006156a0:  adrp     x1, #0x1de000
006156a4:  add      x1, x1, #0xd1c
006156a8:  mov      w2, #1
006156ac:  bl       #0x6228b0
006156b0:  ldrsb    w8, [sp, #0xa7]
006156b4:  tbz      w8, #0x1f, #0x6156c8
006156b8:  ldr      x8, [sp, #0xa0]
006156bc:  ldr      x0, [sp, #0x90]
006156c0:  and      x1, x8, #0x7fffffffffffffff
006156c4:  bl       #0x546bc0
006156c8:  movi     v0.16b, #0xaa
006156cc:  add      x8, sp, #0x90
006156d0:  add      x0, x20, #0x230
006156d4:  str      q0, [sp, #0x90]
006156d8:  str      d0, [sp, #0xa0]
006156dc:  bl       #0x5f4404
006156e0:  ldr      x8, [sp, #0x90]
006156e4:  cmp      x8, #7
006156e8:  b.lt     #0x6158d4
006156ec:  tbz      w27, #0, #0x615784
006156f0:  adrp     x8, #0xd64000
006156f4:  add      x8, x8, #0x520
006156f8:  ldar     x22, [x8]
006156fc:  cbnz     x22, #0x615824
00615700:  ldrsb    x8, [x20, #0x17]
00615704:  ldp      x9, x10, [x20]
00615708:  adrp     x3, #0x1ed000
0061570c:  add      x3, x3, #0xcc
00615710:  add      x0, sp, #0x50
00615714:  cmp      x8, #0
00615718:  mov      w4, #0x16
0061571c:  add      x21, sp, #0x70
00615720:  csel     x1, x9, x20, mi
00615724:  cmp      w8, #0
00615728:  csel     x2, x10, x8, mi
0061572c:  add      x8, sp, #0x70
00615730:  bl       #0x5ff514
00615734:  ldrb     w8, [sp, #0x87]
00615738:  ldp      x10, x11, [sp, #0x70]
0061573c:  mov      w2, #1
00615740:  mov      w3, #0x2710
00615744:  mov      w4, #0x32
00615748:  sxtb     w9, w8
0061574c:  cmp      w9, #0
00615750:  csel     x0, x10, x21, mi
00615754:  csel     x1, x11, x8, mi
00615758:  bl       #0x6660d0
0061575c:  ldrsb    w8, [sp, #0x87]
00615760:  mov      x22, x0
00615764:  tbz      w8, #0x1f, #0x615778
00615768:  ldr      x8, [sp, #0x80]
0061576c:  ldr      x0, [sp, #0x70]
00615770:  and      x1, x8, #0x7fffffffffffffff
00615774:  bl       #0x546bc0
00615778:  adrp     x2, #0xd64000
0061577c:  add      x2, x2, #0x520
00615780:  b        #0x615814
00615784:  adrp     x8, #0xd64000
00615788:  add      x8, x8, #0x518
0061578c:  ldar     x22, [x8]
00615790:  cbnz     x22, #0x615824
00615794:  ldrsb    x8, [x20, #0x17]
00615798:  ldp      x9, x10, [x20]
0061579c:  adrp     x3, #0x1ed000
006157a0:  add      x3, x3, #0xcc
006157a4:  add      x0, sp, #0x50
006157a8:  cmp      x8, #0
006157ac:  mov      w4, #0x16
006157b0:  add      x21, sp, #0x70
006157b4:  csel     x1, x9, x20, mi
006157b8:  cmp      w8, #0
006157bc:  csel     x2, x10, x8, mi
006157c0:  add      x8, sp, #0x70
006157c4:  bl       #0x5ff514
006157c8:  ldrb     w8, [sp, #0x87]
006157cc:  ldp      x10, x11, [sp, #0x70]
006157d0:  mov      w2, #1
006157d4:  mov      w3, #0x2710
006157d8:  mov      w4, #0x32
006157dc:  sxtb     w9, w8
006157e0:  cmp      w9, #0
006157e4:  csel     x0, x10, x21, mi
006157e8:  csel     x1, x11, x8, mi
006157ec:  bl       #0x6660d0
006157f0:  ldrsb    w8, [sp, #0x87]
006157f4:  mov      x22, x0
006157f8:  tbz      w8, #0x1f, #0x61580c
006157fc:  ldr      x8, [sp, #0x80]
00615800:  ldr      x0, [sp, #0x70]
00615804:  and      x1, x8, #0x7fffffffffffffff
00615808:  bl       #0x546bc0
0061580c:  adrp     x2, #0xd64000
00615810:  add      x2, x2, #0x518
00615814:  mov      x0, xzr
00615818:  mov      x1, x22
0061581c:  bl       #0xd0f5e0
00615820:  cbz      x22, #0x615848
00615824:  ldr      w8, [sp, #0xa0]
00615828:  mov      w9, #0x4dd3
0061582c:  mov      x0, x22
00615830:  movk     w9, #0x1062, lsl #16
00615834:  lsl      w8, w8, #3
00615838:  smull    x8, w8, w9
0061583c:  asr      x9, x8, #0x26
00615840:  add      x1, x9, x8, lsr #63
00615844:  bl       #0x666568
00615848:  ldrsb    x2, [x20, #0x17]
0061584c:  tbnz     x2, #0x3f, #0x615858
00615850:  mov      x1, x20
00615854:  b        #0x61585c
00615858:  ldp      x1, x2, [x20]
0061585c:  add      x0, sp, #0x110
00615860:  bl       #0x6228b0
00615864:  adrp     x1, #0x19a000
00615868:  add      x1, x1, #0x680
0061586c:  mov      w2, #0x16
00615870:  bl       #0x6228b0
00615874:  mov      x22, x0
00615878:  add      x8, sp, #0x70
0061587c:  add      x0, sp, #0x90
00615880:  mov      w1, #8
00615884:  add      x21, sp, #0x70
00615888:  bl       #0x5f41b4
0061588c:  ldrb     w8, [sp, #0x87]
00615890:  ldp      x10, x11, [sp, #0x70]
00615894:  mov      x0, x22
00615898:  sxtb     w9, w8
0061589c:  cmp      w9, #0
006158a0:  csel     x1, x10, x21, mi
006158a4:  csel     x2, x11, x8, mi
006158a8:  bl       #0x6228b0
006158ac:  adrp     x1, #0x1de000
006158b0:  add      x1, x1, #0xd1c
006158b4:  mov      w2, #1
006158b8:  bl       #0x6228b0
006158bc:  ldrsb    w8, [sp, #0x87]
006158c0:  tbz      w8, #0x1f, #0x6158d4
006158c4:  ldr      x8, [sp, #0x80]
006158c8:  ldr      x0, [sp, #0x70]
006158cc:  and      x1, x8, #0x7fffffffffffffff
006158d0:  bl       #0x546bc0
006158d4:  movi     v0.16b, #0xaa
006158d8:  add      x8, sp, #0x70
006158dc:  add      x0, x20, #0x2e0
006158e0:  str      q0, [sp, #0x70]
006158e4:  str      d0, [sp, #0x80]
006158e8:  bl       #0x5f4404
006158ec:  ldr      x8, [sp, #0x70]
006158f0:  cmp      x8, #7
006158f4:  b.lt     #0x615ae0
006158f8:  tbz      w27, #0, #0x615990
006158fc:  adrp     x8, #0xd64000
00615900:  add      x8, x8, #0x530
00615904:  ldar     x22, [x8]
00615908:  cbnz     x22, #0x615a30
0061590c:  ldrsb    x8, [x20, #0x17]
00615910:  ldp      x9, x10, [x20]
00615914:  adrp     x3, #0x1bf000
00615918:  add      x3, x3, #0x6cf
0061591c:  add      x0, sp, #0x30
00615920:  cmp      x8, #0
00615924:  mov      w4, #0x18
00615928:  add      x21, sp, #0x50
0061592c:  csel     x1, x9, x20, mi
00615930:  cmp      w8, #0
00615934:  csel     x2, x10, x8, mi
00615938:  add      x8, sp, #0x50
0061593c:  bl       #0x5ff514
00615940:  ldrb     w8, [sp, #0x67]
00615944:  ldp      x10, x11, [sp, #0x50]
00615948:  mov      w2, #1
0061594c:  mov      w3, #0x2710
00615950:  mov      w4, #0x32
00615954:  sxtb     w9, w8
00615958:  cmp      w9, #0
0061595c:  csel     x0, x10, x21, mi
00615960:  csel     x1, x11, x8, mi
00615964:  bl       #0x6660d0
00615968:  ldrsb    w8, [sp, #0x67]
0061596c:  mov      x22, x0
00615970:  tbz      w8, #0x1f, #0x615984
00615974:  ldr      x8, [sp, #0x60]
00615978:  ldr      x0, [sp, #0x50]
0061597c:  and      x1, x8, #0x7fffffffffffffff
00615980:  bl       #0x546bc0
00615984:  adrp     x2, #0xd64000
00615988:  add      x2, x2, #0x530
0061598c:  b        #0x615a20
00615990:  adrp     x8, #0xd64000
00615994:  add      x8, x8, #0x528
00615998:  ldar     x22, [x8]
0061599c:  cbnz     x22, #0x615a30
006159a0:  ldrsb    x8, [x20, #0x17]
006159a4:  ldp      x9, x10, [x20]
006159a8:  adrp     x3, #0x1bf000
006159ac:  add      x3, x3, #0x6cf
006159b0:  add      x0, sp, #0x30
006159b4:  cmp      x8, #0
006159b8:  mov      w4, #0x18
006159bc:  add      x21, sp, #0x50
006159c0:  csel     x1, x9, x20, mi
006159c4:  cmp      w8, #0
006159c8:  csel     x2, x10, x8, mi
006159cc:  add      x8, sp, #0x50
006159d0:  bl       #0x5ff514
006159d4:  ldrb     w8, [sp, #0x67]
006159d8:  ldp      x10, x11, [sp, #0x50]
006159dc:  mov      w2, #1
006159e0:  mov      w3, #0x2710
006159e4:  mov      w4, #0x32
006159e8:  sxtb     w9, w8
006159ec:  cmp      w9, #0
006159f0:  csel     x0, x10, x21, mi
006159f4:  csel     x1, x11, x8, mi
006159f8:  bl       #0x6660d0
006159fc:  ldrsb    w8, [sp, #0x67]
00615a00:  mov      x22, x0
00615a04:  tbz      w8, #0x1f, #0x615a18
00615a08:  ldr      x8, [sp, #0x60]
00615a0c:  ldr      x0, [sp, #0x50]
00615a10:  and      x1, x8, #0x7fffffffffffffff
00615a14:  bl       #0x546bc0
00615a18:  adrp     x2, #0xd64000
00615a1c:  add      x2, x2, #0x528
00615a20:  mov      x0, xzr
00615a24:  mov      x1, x22
00615a28:  bl       #0xd0f5e0
00615a2c:  cbz      x22, #0x615a54
00615a30:  ldr      w8, [sp, #0x80]
00615a34:  mov      w9, #0x4dd3
00615a38:  mov      x0, x22
00615a3c:  movk     w9, #0x1062, lsl #16
00615a40:  lsl      w8, w8, #3
00615a44:  smull    x8, w8, w9
00615a48:  asr      x9, x8, #0x26
00615a4c:  add      x1, x9, x8, lsr #63
00615a50:  bl       #0x666568
00615a54:  ldrsb    x2, [x20, #0x17]
00615a58:  tbnz     x2, #0x3f, #0x615a64
00615a5c:  mov      x1, x20
00615a60:  b        #0x615a68
00615a64:  ldp      x1, x2, [x20]
00615a68:  add      x0, sp, #0x110
00615a6c:  bl       #0x6228b0
00615a70:  adrp     x1, #0x1de000
00615a74:  add      x1, x1, #0xd48
00615a78:  mov      w2, #0x18
00615a7c:  bl       #0x6228b0
00615a80:  mov      x22, x0
00615a84:  add      x8, sp, #0x50
00615a88:  add      x0, sp, #0x70
00615a8c:  mov      w1, #8
00615a90:  add      x21, sp, #0x50
00615a94:  bl       #0x5f41b4
00615a98:  ldrb     w8, [sp, #0x67]
00615a9c:  ldp      x10, x11, [sp, #0x50]
00615aa0:  mov      x0, x22
00615aa4:  sxtb     w9, w8
00615aa8:  cmp      w9, #0
00615aac:  csel     x1, x10, x21, mi
00615ab0:  csel     x2, x11, x8, mi
00615ab4:  bl       #0x6228b0
00615ab8:  adrp     x1, #0x1de000
00615abc:  add      x1, x1, #0xd1c
00615ac0:  mov      w2, #1
00615ac4:  bl       #0x6228b0
00615ac8:  ldrsb    w8, [sp, #0x67]
00615acc:  tbz      w8, #0x1f, #0x615ae0
00615ad0:  ldr      x8, [sp, #0x60]
00615ad4:  ldr      x0, [sp, #0x50]
00615ad8:  and      x1, x8, #0x7fffffffffffffff
00615adc:  bl       #0x546bc0
00615ae0:  movi     v0.16b, #0xaa
00615ae4:  add      x8, sp, #0x50
00615ae8:  add      x0, x20, #0x338
00615aec:  str      q0, [sp, #0x50]
00615af0:  str      d0, [sp, #0x60]
00615af4:  bl       #0x5f4404
00615af8:  ldr      x8, [sp, #0x50]
00615afc:  cmp      x8, #7
00615b00:  b.lt     #0x615cec
00615b04:  tbz      w27, #0, #0x615b9c
00615b08:  adrp     x8, #0xd64000
00615b0c:  add      x8, x8, #0x540
00615b10:  ldar     x22, [x8]
00615b14:  cbnz     x22, #0x615c3c
00615b18:  ldrsb    x8, [x20, #0x17]
00615b1c:  ldp      x9, x10, [x20]
00615b20:  adrp     x3, #0x19d000
00615b24:  add      x3, x3, #0x2f8
00615b28:  add      x0, sp, #0x18
00615b2c:  cmp      x8, #0
00615b30:  mov      w4, #0x1e
00615b34:  add      x21, sp, #0x30
00615b38:  csel     x1, x9, x20, mi
00615b3c:  cmp      w8, #0
00615b40:  csel     x2, x10, x8, mi
00615b44:  add      x8, sp, #0x30
00615b48:  bl       #0x5ff514
00615b4c:  ldrb     w8, [sp, #0x47]
00615b50:  ldp      x10, x11, [sp, #0x30]
00615b54:  mov      w2, #1
00615b58:  mov      w3, #0x2710
00615b5c:  mov      w4, #0x32
00615b60:  sxtb     w9, w8
00615b64:  cmp      w9, #0
00615b68:  csel     x0, x10, x21, mi
00615b6c:  csel     x1, x11, x8, mi
00615b70:  bl       #0x6660d0
00615b74:  ldrsb    w8, [sp, #0x47]
00615b78:  mov      x22, x0
00615b7c:  tbz      w8, #0x1f, #0x615b90
00615b80:  ldr      x8, [sp, #0x40]
00615b84:  ldr      x0, [sp, #0x30]
00615b88:  and      x1, x8, #0x7fffffffffffffff
00615b8c:  bl       #0x546bc0
00615b90:  adrp     x2, #0xd64000
00615b94:  add      x2, x2, #0x540
00615b98:  b        #0x615c2c
00615b9c:  adrp     x8, #0xd64000
00615ba0:  add      x8, x8, #0x538
00615ba4:  ldar     x22, [x8]
00615ba8:  cbnz     x22, #0x615c3c
00615bac:  ldrsb    x8, [x20, #0x17]
00615bb0:  ldp      x9, x10, [x20]
00615bb4:  adrp     x3, #0x19d000
00615bb8:  add      x3, x3, #0x2f8
00615bbc:  add      x0, sp, #0x18
00615bc0:  cmp      x8, #0
00615bc4:  mov      w4, #0x1e
00615bc8:  add      x21, sp, #0x30
00615bcc:  csel     x1, x9, x20, mi
00615bd0:  cmp      w8, #0
00615bd4:  csel     x2, x10, x8, mi
00615bd8:  add      x8, sp, #0x30
00615bdc:  bl       #0x5ff514
00615be0:  ldrb     w8, [sp, #0x47]
00615be4:  ldp      x10, x11, [sp, #0x30]
00615be8:  mov      w2, #1
00615bec:  mov      w3, #0x2710
00615bf0:  mov      w4, #0x32
00615bf4:  sxtb     w9, w8
00615bf8:  cmp      w9, #0
00615bfc:  csel     x0, x10, x21, mi
00615c00:  csel     x1, x11, x8, mi
00615c04:  bl       #0x6660d0
00615c08:  ldrsb    w8, [sp, #0x47]
00615c0c:  mov      x22, x0
00615c10:  tbz      w8, #0x1f, #0x615c24
00615c14:  ldr      x8, [sp, #0x40]
00615c18:  ldr      x0, [sp, #0x30]
00615c1c:  and      x1, x8, #0x7fffffffffffffff
00615c20:  bl       #0x546bc0
00615c24:  adrp     x2, #0xd64000
00615c28:  add      x2, x2, #0x538
00615c2c:  mov      x0, xzr
00615c30:  mov      x1, x22
00615c34:  bl       #0xd0f5e0
00615c38:  cbz      x22, #0x615c60
00615c3c:  ldr      w8, [sp, #0x60]
00615c40:  mov      w9, #0x4dd3
00615c44:  mov      x0, x22
00615c48:  movk     w9, #0x1062, lsl #16
00615c4c:  lsl      w8, w8, #3
00615c50:  smull    x8, w8, w9
00615c54:  asr      x9, x8, #0x26
00615c58:  add      x1, x9, x8, lsr #63
00615c5c:  bl       #0x666568
00615c60:  ldrsb    x2, [x20, #0x17]
00615c64:  tbnz     x2, #0x3f, #0x615c70
00615c68:  mov      x1, x20
00615c6c:  b        #0x615c74
00615c70:  ldp      x1, x2, [x20]
00615c74:  add      x0, sp, #0x110
00615c78:  bl       #0x6228b0
00615c7c:  adrp     x1, #0x19a000
00615c80:  add      x1, x1, #0x697
00615c84:  mov      w2, #0x1e
00615c88:  bl       #0x6228b0
00615c8c:  mov      x22, x0
00615c90:  add      x8, sp, #0x30
00615c94:  add      x0, sp, #0x50
00615c98:  mov      w1, #8
00615c9c:  add      x21, sp, #0x30
00615ca0:  bl       #0x5f41b4
00615ca4:  ldrb     w8, [sp, #0x47]
00615ca8:  ldp      x10, x11, [sp, #0x30]
00615cac:  mov      x0, x22
00615cb0:  sxtb     w9, w8
00615cb4:  cmp      w9, #0
00615cb8:  csel     x1, x10, x21, mi
00615cbc:  csel     x2, x11, x8, mi
00615cc0:  bl       #0x6228b0
00615cc4:  adrp     x1, #0x1de000
00615cc8:  add      x1, x1, #0xd1c
00615ccc:  mov      w2, #1
00615cd0:  bl       #0x6228b0
00615cd4:  ldrsb    w8, [sp, #0x47]
00615cd8:  tbz      w8, #0x1f, #0x615cec
00615cdc:  ldr      x8, [sp, #0x40]
00615ce0:  ldr      x0, [sp, #0x30]
00615ce4:  and      x1, x8, #0x7fffffffffffffff
00615ce8:  bl       #0x546bc0
00615cec:  ldp      x8, x9, [x28, #0xe8]
00615cf0:  cmp      x8, x9
00615cf4:  b.eq     #0x615f20
00615cf8:  movi     v0.16b, #0xaa
00615cfc:  add      x8, sp, #0x30
00615d00:  add      x0, x20, #0x288
00615d04:  str      q0, [sp, #0x30]
00615d08:  str      d0, [sp, #0x40]
00615d0c:  bl       #0x5f4404
00615d10:  ldr      x8, [sp, #0x30]
00615d14:  cmp      x8, #7
00615d18:  b.lt     #0x615d2c
00615d1c:  ldrsb    x2, [x20, #0x17]
00615d20:  tbnz     x2, #0x3f, #0x615d40
00615d24:  mov      x1, x20
00615d28:  b        #0x615d44
00615d2c:  ldr      x8, [sp, #0xb0]
00615d30:  cmp      x8, #6
00615d34:  b.le     #0x615f20
00615d38:  mov      w21, wzr
00615d3c:  b        #0x615dc8
00615d40:  ldp      x1, x2, [x20]
00615d44:  ldr      w21, [sp, #0x40]
00615d48:  add      x0, sp, #0x110
00615d4c:  bl       #0x6228b0
00615d50:  adrp     x1, #0x1ae000
00615d54:  add      x1, x1, #0x571
00615d58:  mov      w2, #0x14
00615d5c:  bl       #0x6228b0
00615d60:  mov      x22, x0
00615d64:  add      x8, sp, #0x18
00615d68:  add      x0, sp, #0x30
00615d6c:  mov      w1, #8
00615d70:  add      x23, sp, #0x18
00615d74:  bl       #0x5f41b4
00615d78:  ldrb     w8, [sp, #0x2f]
00615d7c:  ldp      x10, x11, [sp, #0x18]
00615d80:  mov      x0, x22
00615d84:  sxtb     w9, w8
00615d88:  cmp      w9, #0
00615d8c:  csel     x1, x10, x23, mi
00615d90:  csel     x2, x11, x8, mi
00615d94:  bl       #0x6228b0
00615d98:  adrp     x1, #0x1de000
00615d9c:  add      x1, x1, #0xd1c
00615da0:  mov      w2, #1
00615da4:  bl       #0x6228b0
00615da8:  ldrsb    w8, [sp, #0x2f]
00615dac:  tbz      w8, #0x1f, #0x615dc0
00615db0:  ldr      x8, [sp, #0x28]
00615db4:  ldr      x0, [sp, #0x18]
00615db8:  and      x1, x8, #0x7fffffffffffffff
00615dbc:  bl       #0x546bc0
00615dc0:  cmn      w21, #1
00615dc4:  b.eq     #0x615f20
00615dc8:  tbz      w27, #0, #0x615e60
00615dcc:  adrp     x8, #0xd64000
00615dd0:  add      x8, x8, #0x550
00615dd4:  ldar     x22, [x8]
00615dd8:  cbnz     x22, #0x615f00
00615ddc:  ldrsb    x8, [x20, #0x17]
00615de0:  ldp      x9, x10, [x20]
00615de4:  adrp     x3, #0x1a0000
00615de8:  add      x3, x3, #0x6ff
00615dec:  add      x0, sp, #0x137
00615df0:  cmp      x8, #0
00615df4:  mov      w4, #0x14
00615df8:  add      x22, sp, #0x18
00615dfc:  csel     x1, x9, x20, mi
00615e00:  cmp      w8, #0
00615e04:  csel     x2, x10, x8, mi
00615e08:  add      x8, sp, #0x18
00615e0c:  bl       #0x5ff514
00615e10:  ldrb     w8, [sp, #0x2f]
00615e14:  ldp      x10, x11, [sp, #0x18]
00615e18:  mov      w2, #1
00615e1c:  mov      w3, #0x2710
00615e20:  mov      w4, #0x32
00615e24:  sxtb     w9, w8
00615e28:  cmp      w9, #0
00615e2c:  csel     x0, x10, x22, mi
00615e30:  csel     x1, x11, x8, mi
00615e34:  bl       #0x6660d0
00615e38:  ldrsb    w8, [sp, #0x2f]
00615e3c:  mov      x22, x0
00615e40:  tbz      w8, #0x1f, #0x615e54
00615e44:  ldr      x8, [sp, #0x28]
00615e48:  ldr      x0, [sp, #0x18]
00615e4c:  and      x1, x8, #0x7fffffffffffffff
00615e50:  bl       #0x546bc0
00615e54:  adrp     x2, #0xd64000
00615e58:  add      x2, x2, #0x550
00615e5c:  b        #0x615ef0
00615e60:  adrp     x8, #0xd64000
00615e64:  add      x8, x8, #0x548
00615e68:  ldar     x22, [x8]
00615e6c:  cbnz     x22, #0x615f00
00615e70:  ldrsb    x8, [x20, #0x17]
00615e74:  ldp      x9, x10, [x20]
00615e78:  adrp     x3, #0x1a0000
00615e7c:  add      x3, x3, #0x6ff
00615e80:  add      x0, sp, #0x137
00615e84:  cmp      x8, #0
00615e88:  mov      w4, #0x14
00615e8c:  add      x22, sp, #0x18
00615e90:  csel     x1, x9, x20, mi
00615e94:  cmp      w8, #0
00615e98:  csel     x2, x10, x8, mi
00615e9c:  add      x8, sp, #0x18
00615ea0:  bl       #0x5ff514
00615ea4:  ldrb     w8, [sp, #0x2f]
00615ea8:  ldp      x10, x11, [sp, #0x18]
00615eac:  mov      w2, #1
00615eb0:  mov      w3, #0x2710
00615eb4:  mov      w4, #0x32
00615eb8:  sxtb     w9, w8
00615ebc:  cmp      w9, #0
00615ec0:  csel     x0, x10, x22, mi
00615ec4:  csel     x1, x11, x8, mi
00615ec8:  bl       #0x6660d0
00615ecc:  ldrsb    w8, [sp, #0x2f]
00615ed0:  mov      x22, x0
00615ed4:  tbz      w8, #0x1f, #0x615ee8
00615ed8:  ldr      x8, [sp, #0x28]
00615edc:  ldr      x0, [sp, #0x18]
00615ee0:  and      x1, x8, #0x7fffffffffffffff
00615ee4:  bl       #0x546bc0
00615ee8:  adrp     x2, #0xd64000
00615eec:  add      x2, x2, #0x548
00615ef0:  mov      x0, xzr
00615ef4:  mov      x1, x22
00615ef8:  bl       #0xd0f5e0
00615efc:  cbz      x22, #0x615f20
00615f00:  lsl      w8, w21, #3
00615f04:  mov      w9, #0x4dd3
00615f08:  mov      x0, x22
00615f0c:  movk     w9, #0x1062, lsl #16
00615f10:  smull    x8, w8, w9
00615f14:  asr      x9, x8, #0x26
00615f18:  add      x1, x9, x8, lsr #63
00615f1c:  bl       #0x666568
00615f20:  ldr      w8, [x28, #0xc8]
00615f24:  cmn      w8, #1
00615f28:  b.ne     #0x615f38
00615f2c:  ldr      w8, [x28, #0xbc]
00615f30:  cmn      w8, #1
00615f34:  b.eq     #0x616144
00615f38:  movi     v0.16b, #0xaa
00615f3c:  add      x8, sp, #0x30
00615f40:  add      x0, x20, #0x390
00615f44:  str      q0, [sp, #0x30]
00615f48:  str      d0, [sp, #0x40]
00615f4c:  bl       #0x5f4404
00615f50:  ldr      x8, [sp, #0x30]
00615f54:  cmp      x8, #7
00615f58:  b.lt     #0x616144
00615f5c:  tbz      w27, #0, #0x615ff4
00615f60:  adrp     x8, #0xd64000
00615f64:  add      x8, x8, #0x560
00615f68:  ldar     x21, [x8]
00615f6c:  cbnz     x21, #0x616094
00615f70:  ldrsb    x8, [x20, #0x17]
00615f74:  ldp      x9, x10, [x20]
00615f78:  adrp     x3, #0x1ba000
00615f7c:  add      x3, x3, #0xb2
00615f80:  add      x0, sp, #0x137
00615f84:  cmp      x8, #0
00615f88:  mov      w4, #0x14
00615f8c:  add      x21, sp, #0x18
00615f90:  csel     x1, x9, x20, mi
00615f94:  cmp      w8, #0
00615f98:  csel     x2, x10, x8, mi
00615f9c:  add      x8, sp, #0x18
00615fa0:  bl       #0x5ff514
00615fa4:  ldrb     w8, [sp, #0x2f]
00615fa8:  ldp      x10, x11, [sp, #0x18]
00615fac:  mov      w2, #1
00615fb0:  mov      w3, #0x2710
00615fb4:  mov      w4, #0x32
00615fb8:  sxtb     w9, w8
00615fbc:  cmp      w9, #0
00615fc0:  csel     x0, x10, x21, mi
00615fc4:  csel     x1, x11, x8, mi
00615fc8:  bl       #0x6660d0
00615fcc:  ldrsb    w8, [sp, #0x2f]
00615fd0:  mov      x21, x0
00615fd4:  tbz      w8, #0x1f, #0x615fe8
00615fd8:  ldr      x8, [sp, #0x28]
00615fdc:  ldr      x0, [sp, #0x18]
00615fe0:  and      x1, x8, #0x7fffffffffffffff
00615fe4:  bl       #0x546bc0
00615fe8:  adrp     x2, #0xd64000
00615fec:  add      x2, x2, #0x560
00615ff0:  b        #0x616084
00615ff4:  adrp     x8, #0xd64000
00615ff8:  add      x8, x8, #0x558
00615ffc:  ldar     x21, [x8]
00616000:  cbnz     x21, #0x616094
00616004:  ldrsb    x8, [x20, #0x17]
00616008:  ldp      x9, x10, [x20]
0061600c:  adrp     x3, #0x1ba000
00616010:  add      x3, x3, #0xb2
00616014:  add      x0, sp, #0x137
00616018:  cmp      x8, #0
0061601c:  mov      w4, #0x14
00616020:  add      x21, sp, #0x18
00616024:  csel     x1, x9, x20, mi
00616028:  cmp      w8, #0
0061602c:  csel     x2, x10, x8, mi
00616030:  add      x8, sp, #0x18
00616034:  bl       #0x5ff514
00616038:  ldrb     w8, [sp, #0x2f]
0061603c:  ldp      x10, x11, [sp, #0x18]
00616040:  mov      w2, #1
00616044:  mov      w3, #0x2710
00616048:  mov      w4, #0x32
0061604c:  sxtb     w9, w8
00616050:  cmp      w9, #0
00616054:  csel     x0, x10, x21, mi
00616058:  csel     x1, x11, x8, mi
0061605c:  bl       #0x6660d0
00616060:  ldrsb    w8, [sp, #0x2f]
00616064:  mov      x21, x0
00616068:  tbz      w8, #0x1f, #0x61607c
0061606c:  ldr      x8, [sp, #0x28]
00616070:  ldr      x0, [sp, #0x18]
00616074:  and      x1, x8, #0x7fffffffffffffff
00616078:  bl       #0x546bc0
0061607c:  adrp     x2, #0xd64000
00616080:  add      x2, x2, #0x558
00616084:  mov      x0, xzr
00616088:  mov      x1, x21
0061608c:  bl       #0xd0f5e0
00616090:  cbz      x21, #0x6160b8
00616094:  ldr      w8, [sp, #0x40]
00616098:  mov      w9, #0x4dd3
0061609c:  mov      x0, x21
006160a0:  movk     w9, #0x1062, lsl #16
006160a4:  lsl      w8, w8, #3
006160a8:  smull    x8, w8, w9
006160ac:  asr      x9, x8, #0x26
006160b0:  add      x1, x9, x8, lsr #63
006160b4:  bl       #0x666568
006160b8:  ldrsb    x2, [x20, #0x17]
006160bc:  tbnz     x2, #0x3f, #0x6160c8
006160c0:  mov      x1, x20
006160c4:  b        #0x6160cc
006160c8:  ldp      x1, x2, [x20]
006160cc:  add      x0, sp, #0x110
006160d0:  bl       #0x6228b0
006160d4:  adrp     x1, #0x19a000
006160d8:  add      x1, x1, #0x6b6
006160dc:  mov      w2, #0x14
006160e0:  bl       #0x6228b0
006160e4:  mov      x21, x0
006160e8:  add      x8, sp, #0x18
006160ec:  add      x0, sp, #0x30
006160f0:  mov      w1, #8
006160f4:  add      x22, sp, #0x18
006160f8:  bl       #0x5f41b4
006160fc:  ldrb     w8, [sp, #0x2f]
00616100:  ldp      x10, x11, [sp, #0x18]
00616104:  mov      x0, x21
00616108:  sxtb     w9, w8
0061610c:  cmp      w9, #0
00616110:  csel     x1, x10, x22, mi
00616114:  csel     x2, x11, x8, mi
00616118:  bl       #0x6228b0
0061611c:  adrp     x1, #0x1de000
00616120:  add      x1, x1, #0xd1c
00616124:  mov      w2, #1
00616128:  bl       #0x6228b0
0061612c:  ldrsb    w8, [sp, #0x2f]
00616130:  tbz      w8, #0x1f, #0x616144
00616134:  ldr      x8, [sp, #0x28]
00616138:  ldr      x0, [sp, #0x18]
0061613c:  and      x1, x8, #0x7fffffffffffffff
00616140:  bl       #0x546bc0
00616144:  adrp     x1, #0x1ba000
00616148:  add      x1, x1, #0xc7
0061614c:  add      x0, sp, #0x110
00616150:  mov      w2, #0xf
00616154:  bl       #0x6228b0
00616158:  ldr      w1, [x19, #0x34]
0061615c:  bl       #0x6229f8
00616160:  adrp     x1, #0x1de000
00616164:  add      x1, x1, #0xd1c
00616168:  mov      w2, #1
0061616c:  bl       #0x6228b0
00616170:  ldrsb    x2, [x20, #0x17]
00616174:  tbnz     x2, #0x3f, #0x616180
00616178:  mov      x1, x20
0061617c:  b        #0x616184
00616180:  ldp      x1, x2, [x20]
00616184:  bl       #0x6228b0
00616188:  adrp     x1, #0x1b6000
0061618c:  add      x1, x1, #0xdd2
00616190:  mov      w2, #0x17
00616194:  bl       #0x6228b0
00616198:  ldr      w1, [x19, #0x4c]
0061619c:  bl       #0x6229f8
006161a0:  adrp     x1, #0x1de000
006161a4:  add      x1, x1, #0xd1c
006161a8:  mov      w2, #1
006161ac:  bl       #0x6228b0
006161b0:  tbz      w27, #0, #0x616248
006161b4:  adrp     x8, #0xd64000
006161b8:  add      x8, x8, #0x570
006161bc:  ldar     x21, [x8]
006161c0:  cbnz     x21, #0x6162e8
006161c4:  ldrsb    x8, [x20, #0x17]
006161c8:  ldp      x9, x10, [x20]
006161cc:  adrp     x3, #0x1d3000
006161d0:  add      x3, x3, #0x796
006161d4:  add      x0, sp, #0x18
006161d8:  cmp      x8, #0
006161dc:  mov      w4, #0x16
006161e0:  add      x21, sp, #0x30
006161e4:  csel     x1, x9, x20, mi
006161e8:  cmp      w8, #0
006161ec:  csel     x2, x10, x8, mi
006161f0:  add      x8, sp, #0x30
006161f4:  bl       #0x5ff514
006161f8:  ldrb     w8, [sp, #0x47]
006161fc:  ldp      x10, x11, [sp, #0x30]
00616200:  mov      w2, #1
00616204:  mov      w3, #0x3e8
00616208:  mov      w4, #0x32
0061620c:  sxtb     w9, w8
00616210:  cmp      w9, #0
00616214:  csel     x0, x10, x21, mi
00616218:  csel     x1, x11, x8, mi
0061621c:  bl       #0x6660d0
00616220:  ldrsb    w8, [sp, #0x47]
00616224:  mov      x21, x0
00616228:  tbz      w8, #0x1f, #0x61623c
0061622c:  ldr      x8, [sp, #0x40]
00616230:  ldr      x0, [sp, #0x30]
00616234:  and      x1, x8, #0x7fffffffffffffff
00616238:  bl       #0x546bc0
0061623c:  adrp     x2, #0xd64000
00616240:  add      x2, x2, #0x570
00616244:  b        #0x6162d8
00616248:  adrp     x8, #0xd64000
0061624c:  add      x8, x8, #0x568
00616250:  ldar     x21, [x8]
00616254:  cbnz     x21, #0x6162e8
00616258:  ldrsb    x8, [x20, #0x17]
0061625c:  ldp      x9, x10, [x20]
00616260:  adrp     x3, #0x1d3000
00616264:  add      x3, x3, #0x796
00616268:  add      x0, sp, #0x18
0061626c:  cmp      x8, #0
00616270:  mov      w4, #0x16
00616274:  add      x21, sp, #0x30
00616278:  csel     x1, x9, x20, mi
0061627c:  cmp      w8, #0
00616280:  csel     x2, x10, x8, mi
00616284:  add      x8, sp, #0x30
00616288:  bl       #0x5ff514
0061628c:  ldrb     w8, [sp, #0x47]
00616290:  ldp      x10, x11, [sp, #0x30]
00616294:  mov      w2, #1
00616298:  mov      w3, #0x3e8
0061629c:  mov      w4, #0x32
006162a0:  sxtb     w9, w8
006162a4:  cmp      w9, #0
006162a8:  csel     x0, x10, x21, mi
006162ac:  csel     x1, x11, x8, mi
006162b0:  bl       #0x6660d0
006162b4:  ldrsb    w8, [sp, #0x47]
006162b8:  mov      x21, x0
006162bc:  tbz      w8, #0x1f, #0x6162d0
006162c0:  ldr      x8, [sp, #0x40]
006162c4:  ldr      x0, [sp, #0x30]
006162c8:  and      x1, x8, #0x7fffffffffffffff
006162cc:  bl       #0x546bc0
006162d0:  adrp     x2, #0xd64000
006162d4:  add      x2, x2, #0x568
006162d8:  mov      x0, xzr
006162dc:  mov      x1, x21
006162e0:  bl       #0xd0f5e0
006162e4:  cbz      x21, #0x6162f4
006162e8:  ldr      w1, [x19, #0x4c]
006162ec:  mov      x0, x21
006162f0:  bl       #0x666568
006162f4:  ldrsb    x2, [x20, #0x17]
006162f8:  tbnz     x2, #0x3f, #0x616304
006162fc:  mov      x1, x20
00616300:  b        #0x616308
00616304:  ldp      x1, x2, [x20]
00616308:  add      x0, sp, #0x110
0061630c:  bl       #0x6228b0
00616310:  adrp     x1, #0x1bc000
00616314:  add      x1, x1, #0xd6d
00616318:  mov      w2, #0x1a
0061631c:  bl       #0x6228b0
00616320:  ldr      w1, [x19, #0x50]
00616324:  bl       #0x6229f8
00616328:  adrp     x1, #0x1de000
0061632c:  add      x1, x1, #0xd1c
00616330:  mov      w2, #1
00616334:  bl       #0x6228b0
00616338:  tbz      w27, #0, #0x6163d0
0061633c:  adrp     x8, #0xd64000
00616340:  add      x8, x8, #0x580
00616344:  ldar     x21, [x8]
00616348:  cbnz     x21, #0x616470
0061634c:  ldrsb    x8, [x20, #0x17]
00616350:  ldp      x9, x10, [x20]
00616354:  adrp     x3, #0x1bc000
00616358:  add      x3, x3, #0xd6d
0061635c:  add      x0, sp, #0x18
00616360:  cmp      x8, #0
00616364:  mov      w4, #0x1a
00616368:  add      x21, sp, #0x30
0061636c:  csel     x1, x9, x20, mi
00616370:  cmp      w8, #0
00616374:  csel     x2, x10, x8, mi
00616378:  add      x8, sp, #0x30
0061637c:  bl       #0x5ff514
00616380:  ldrb     w8, [sp, #0x47]
00616384:  ldp      x10, x11, [sp, #0x30]
00616388:  mov      w2, #1
0061638c:  mov      w3, #0x3e8
00616390:  mov      w4, #0x32
00616394:  sxtb     w9, w8
00616398:  cmp      w9, #0
0061639c:  csel     x0, x10, x21, mi
006163a0:  csel     x1, x11, x8, mi
006163a4:  bl       #0x6660d0
006163a8:  ldrsb    w8, [sp, #0x47]
006163ac:  mov      x21, x0
006163b0:  tbz      w8, #0x1f, #0x6163c4
006163b4:  ldr      x8, [sp, #0x40]
006163b8:  ldr      x0, [sp, #0x30]
006163bc:  and      x1, x8, #0x7fffffffffffffff
006163c0:  bl       #0x546bc0
006163c4:  adrp     x2, #0xd64000
006163c8:  add      x2, x2, #0x580
006163cc:  b        #0x616460
006163d0:  adrp     x8, #0xd64000
006163d4:  add      x8, x8, #0x578
006163d8:  ldar     x21, [x8]
006163dc:  cbnz     x21, #0x616470
006163e0:  ldrsb    x8, [x20, #0x17]
006163e4:  ldp      x9, x10, [x20]
006163e8:  adrp     x3, #0x1bc000
006163ec:  add      x3, x3, #0xd6d
006163f0:  add      x0, sp, #0x18
006163f4:  cmp      x8, #0
006163f8:  mov      w4, #0x1a
006163fc:  add      x21, sp, #0x30
00616400:  csel     x1, x9, x20, mi
00616404:  cmp      w8, #0
00616408:  csel     x2, x10, x8, mi
0061640c:  add      x8, sp, #0x30
00616410:  bl       #0x5ff514
00616414:  ldrb     w8, [sp, #0x47]
00616418:  ldp      x10, x11, [sp, #0x30]
0061641c:  mov      w2, #1
00616420:  mov      w3, #0x3e8
00616424:  mov      w4, #0x32
00616428:  sxtb     w9, w8
0061642c:  cmp      w9, #0
00616430:  csel     x0, x10, x21, mi
00616434:  csel     x1, x11, x8, mi
00616438:  bl       #0x6660d0
0061643c:  ldrsb    w8, [sp, #0x47]
00616440:  mov      x21, x0
00616444:  tbz      w8, #0x1f, #0x616458
00616448:  ldr      x8, [sp, #0x40]
0061644c:  ldr      x0, [sp, #0x30]
00616450:  and      x1, x8, #0x7fffffffffffffff
00616454:  bl       #0x546bc0
00616458:  adrp     x2, #0xd64000
0061645c:  add      x2, x2, #0x578
00616460:  mov      x0, xzr
00616464:  mov      x1, x21
00616468:  bl       #0xd0f5e0
0061646c:  cbz      x21, #0x61647c
00616470:  ldr      w1, [x19, #0x50]
00616474:  mov      x0, x21
00616478:  bl       #0x666568
0061647c:  ldrsb    x2, [x20, #0x17]
00616480:  tbnz     x2, #0x3f, #0x61648c
00616484:  mov      x1, x20
00616488:  b        #0x616490
0061648c:  ldp      x1, x2, [x20]
00616490:  add      x0, sp, #0x110
00616494:  bl       #0x6228b0
00616498:  adrp     x1, #0x1ed000
0061649c:  add      x1, x1, #0xe3
006164a0:  mov      w2, #0x1b
006164a4:  bl       #0x6228b0
006164a8:  ldr      w1, [x19, #0x54]
006164ac:  bl       #0x6229f8
006164b0:  adrp     x1, #0x1de000
006164b4:  add      x1, x1, #0xd1c
006164b8:  mov      w2, #1
006164bc:  bl       #0x6228b0
006164c0:  tbz      w27, #0, #0x616558
006164c4:  adrp     x8, #0xd64000
006164c8:  add      x8, x8, #0x590
006164cc:  ldar     x21, [x8]
006164d0:  cbnz     x21, #0x6165f8
006164d4:  ldrsb    x8, [x20, #0x17]
006164d8:  ldp      x9, x10, [x20]
006164dc:  adrp     x3, #0x1de000
006164e0:  add      x3, x3, #0xd61
006164e4:  add      x0, sp, #0x18
006164e8:  cmp      x8, #0
006164ec:  mov      w4, #0x1a
006164f0:  add      x21, sp, #0x30
006164f4:  csel     x1, x9, x20, mi
006164f8:  cmp      w8, #0
006164fc:  csel     x2, x10, x8, mi
00616500:  add      x8, sp, #0x30
00616504:  bl       #0x5ff514
00616508:  ldrb     w8, [sp, #0x47]
0061650c:  ldp      x10, x11, [sp, #0x30]
00616510:  mov      w2, #1
00616514:  mov      w3, #0x3e8
00616518:  mov      w4, #0x32
0061651c:  sxtb     w9, w8
00616520:  cmp      w9, #0
00616524:  csel     x0, x10, x21, mi
00616528:  csel     x1, x11, x8, mi
0061652c:  bl       #0x6660d0
00616530:  ldrsb    w8, [sp, #0x47]
00616534:  mov      x21, x0
00616538:  tbz      w8, #0x1f, #0x61654c
0061653c:  ldr      x8, [sp, #0x40]
00616540:  ldr      x0, [sp, #0x30]
00616544:  and      x1, x8, #0x7fffffffffffffff
00616548:  bl       #0x546bc0
0061654c:  adrp     x2, #0xd64000
00616550:  add      x2, x2, #0x590
00616554:  b        #0x6165e8
00616558:  adrp     x8, #0xd64000
0061655c:  add      x8, x8, #0x588
00616560:  ldar     x21, [x8]
00616564:  cbnz     x21, #0x6165f8
00616568:  ldrsb    x8, [x20, #0x17]
0061656c:  ldp      x9, x10, [x20]
00616570:  adrp     x3, #0x1de000
00616574:  add      x3, x3, #0xd61
00616578:  add      x0, sp, #0x18
0061657c:  cmp      x8, #0
00616580:  mov      w4, #0x1a
00616584:  add      x21, sp, #0x30
00616588:  csel     x1, x9, x20, mi
0061658c:  cmp      w8, #0
00616590:  csel     x2, x10, x8, mi
00616594:  add      x8, sp, #0x30
00616598:  bl       #0x5ff514
0061659c:  ldrb     w8, [sp, #0x47]
006165a0:  ldp      x10, x11, [sp, #0x30]
006165a4:  mov      w2, #1
006165a8:  mov      w3, #0x3e8
006165ac:  mov      w4, #0x32
006165b0:  sxtb     w9, w8
006165b4:  cmp      w9, #0
006165b8:  csel     x0, x10, x21, mi
006165bc:  csel     x1, x11, x8, mi
006165c0:  bl       #0x6660d0
006165c4:  ldrsb    w8, [sp, #0x47]
006165c8:  mov      x21, x0
006165cc:  tbz      w8, #0x1f, #0x6165e0
006165d0:  ldr      x8, [sp, #0x40]
006165d4:  ldr      x0, [sp, #0x30]
006165d8:  and      x1, x8, #0x7fffffffffffffff
006165dc:  bl       #0x546bc0
006165e0:  adrp     x2, #0xd64000
006165e4:  add      x2, x2, #0x588
006165e8:  mov      x0, xzr
006165ec:  mov      x1, x21
006165f0:  bl       #0xd0f5e0
006165f4:  cbz      x21, #0x616604
006165f8:  ldr      w1, [x19, #0x54]
006165fc:  mov      x0, x21
00616600:  bl       #0x666568
00616604:  ldrsb    x2, [x20, #0x17]
00616608:  tbnz     x2, #0x3f, #0x616614
0061660c:  mov      x1, x20
00616610:  b        #0x616618
00616614:  ldp      x1, x2, [x20]
00616618:  add      x0, sp, #0x110
0061661c:  bl       #0x6228b0
00616620:  adrp     x1, #0x1ea000
00616624:  add      x1, x1, #0x6a5
00616628:  mov      w2, #0x16
0061662c:  bl       #0x6228b0
00616630:  ldr      w1, [x19, #0x60]
00616634:  bl       #0x6229f8
00616638:  adrp     x1, #0x1de000
0061663c:  add      x1, x1, #0xd1c
00616640:  mov      w2, #1
00616644:  bl       #0x6228b0
00616648:  tbz      w27, #0, #0x6166e0
0061664c:  adrp     x8, #0xd64000
00616650:  add      x8, x8, #0x5a0
00616654:  ldar     x21, [x8]
00616658:  cbnz     x21, #0x616780
0061665c:  ldrsb    x8, [x20, #0x17]
00616660:  ldp      x9, x10, [x20]
00616664:  adrp     x3, #0x1ed000
00616668:  add      x3, x3, #0xff
0061666c:  add      x0, sp, #0x18
00616670:  cmp      x8, #0
00616674:  mov      w4, #0x15
00616678:  add      x21, sp, #0x30
0061667c:  csel     x1, x9, x20, mi
00616680:  cmp      w8, #0
00616684:  csel     x2, x10, x8, mi
00616688:  add      x8, sp, #0x30
0061668c:  bl       #0x5ff514
00616690:  ldrb     w8, [sp, #0x47]
00616694:  ldp      x10, x11, [sp, #0x30]
00616698:  mov      w2, #1
0061669c:  mov      w3, #0x3e8
006166a0:  mov      w4, #0x32
006166a4:  sxtb     w9, w8
006166a8:  cmp      w9, #0
006166ac:  csel     x0, x10, x21, mi
006166b0:  csel     x1, x11, x8, mi
006166b4:  bl       #0x6660d0
006166b8:  ldrsb    w8, [sp, #0x47]
006166bc:  mov      x21, x0
006166c0:  tbz      w8, #0x1f, #0x6166d4
006166c4:  ldr      x8, [sp, #0x40]
006166c8:  ldr      x0, [sp, #0x30]
006166cc:  and      x1, x8, #0x7fffffffffffffff
006166d0:  bl       #0x546bc0
006166d4:  adrp     x2, #0xd64000
006166d8:  add      x2, x2, #0x5a0
006166dc:  b        #0x616770
006166e0:  adrp     x8, #0xd64000
006166e4:  add      x8, x8, #0x598
006166e8:  ldar     x21, [x8]
006166ec:  cbnz     x21, #0x616780
006166f0:  ldrsb    x8, [x20, #0x17]
006166f4:  ldp      x9, x10, [x20]
006166f8:  adrp     x3, #0x1ed000
006166fc:  add      x3, x3, #0xff
00616700:  add      x0, sp, #0x18
00616704:  cmp      x8, #0
00616708:  mov      w4, #0x15
0061670c:  add      x21, sp, #0x30
00616710:  csel     x1, x9, x20, mi
00616714:  cmp      w8, #0
00616718:  csel     x2, x10, x8, mi
0061671c:  add      x8, sp, #0x30
00616720:  bl       #0x5ff514
00616724:  ldrb     w8, [sp, #0x47]
00616728:  ldp      x10, x11, [sp, #0x30]
0061672c:  mov      w2, #1
00616730:  mov      w3, #0x3e8
00616734:  mov      w4, #0x32
00616738:  sxtb     w9, w8
0061673c:  cmp      w9, #0
00616740:  csel     x0, x10, x21, mi
00616744:  csel     x1, x11, x8, mi
00616748:  bl       #0x6660d0
0061674c:  ldrsb    w8, [sp, #0x47]
00616750:  mov      x21, x0
00616754:  tbz      w8, #0x1f, #0x616768
00616758:  ldr      x8, [sp, #0x40]
0061675c:  ldr      x0, [sp, #0x30]
00616760:  and      x1, x8, #0x7fffffffffffffff
00616764:  bl       #0x546bc0
00616768:  adrp     x2, #0xd64000
0061676c:  add      x2, x2, #0x598
00616770:  mov      x0, xzr
00616774:  mov      x1, x21
00616778:  bl       #0xd0f5e0
0061677c:  cbz      x21, #0x61678c
00616780:  ldr      w1, [x19, #0x60]
00616784:  mov      x0, x21
00616788:  bl       #0x666568
0061678c:  ldrsb    x2, [x20, #0x17]
00616790:  tbnz     x2, #0x3f, #0x61679c
00616794:  mov      x1, x20
00616798:  b        #0x6167a0
0061679c:  ldp      x1, x2, [x20]
006167a0:  add      x0, sp, #0x110
006167a4:  bl       #0x6228b0
006167a8:  adrp     x1, #0x1e4000
006167ac:  add      x1, x1, #0xb7a
006167b0:  mov      w2, #0x1a
006167b4:  bl       #0x6228b0
006167b8:  ldr      w1, [x19, #0x58]
006167bc:  bl       #0x6229f8
006167c0:  adrp     x1, #0x1de000
006167c4:  add      x1, x1, #0xd1c
006167c8:  mov      w2, #1
006167cc:  bl       #0x6228b0
006167d0:  tbz      w27, #0, #0x616868
006167d4:  adrp     x8, #0xd64000
006167d8:  add      x8, x8, #0x5b0
006167dc:  ldar     x21, [x8]
006167e0:  cbnz     x21, #0x616908
006167e4:  ldrsb    x8, [x20, #0x17]
006167e8:  ldp      x9, x10, [x20]
006167ec:  adrp     x3, #0x1a6000
006167f0:  add      x3, x3, #0x38e
006167f4:  add      x0, sp, #0x18
006167f8:  cmp      x8, #0
006167fc:  mov      w4, #0x19
00616800:  add      x21, sp, #0x30
00616804:  csel     x1, x9, x20, mi
00616808:  cmp      w8, #0
0061680c:  csel     x2, x10, x8, mi
00616810:  add      x8, sp, #0x30
00616814:  bl       #0x5ff514
00616818:  ldrb     w8, [sp, #0x47]
0061681c:  ldp      x10, x11, [sp, #0x30]
00616820:  mov      w2, #1
00616824:  mov      w3, #0x3e8
00616828:  mov      w4, #0x32
0061682c:  sxtb     w9, w8
00616830:  cmp      w9, #0
00616834:  csel     x0, x10, x21, mi
00616838:  csel     x1, x11, x8, mi
0061683c:  bl       #0x6660d0
00616840:  ldrsb    w8, [sp, #0x47]
00616844:  mov      x21, x0
00616848:  tbz      w8, #0x1f, #0x61685c
0061684c:  ldr      x8, [sp, #0x40]
00616850:  ldr      x0, [sp, #0x30]
00616854:  and      x1, x8, #0x7fffffffffffffff
00616858:  bl       #0x546bc0
0061685c:  adrp     x2, #0xd64000
00616860:  add      x2, x2, #0x5b0
00616864:  b        #0x6168f8
00616868:  adrp     x8, #0xd64000
0061686c:  add      x8, x8, #0x5a8
00616870:  ldar     x21, [x8]
00616874:  cbnz     x21, #0x616908
00616878:  ldrsb    x8, [x20, #0x17]
0061687c:  ldp      x9, x10, [x20]
00616880:  adrp     x3, #0x1a6000
00616884:  add      x3, x3, #0x38e
00616888:  add      x0, sp, #0x18
0061688c:  cmp      x8, #0
00616890:  mov      w4, #0x19
00616894:  add      x21, sp, #0x30
00616898:  csel     x1, x9, x20, mi
0061689c:  cmp      w8, #0
006168a0:  csel     x2, x10, x8, mi
006168a4:  add      x8, sp, #0x30
006168a8:  bl       #0x5ff514
006168ac:  ldrb     w8, [sp, #0x47]
006168b0:  ldp      x10, x11, [sp, #0x30]
006168b4:  mov      w2, #1
006168b8:  mov      w3, #0x3e8
006168bc:  mov      w4, #0x32
006168c0:  sxtb     w9, w8
006168c4:  cmp      w9, #0
006168c8:  csel     x0, x10, x21, mi
006168cc:  csel     x1, x11, x8, mi
006168d0:  bl       #0x6660d0
006168d4:  ldrsb    w8, [sp, #0x47]
006168d8:  mov      x21, x0
006168dc:  tbz      w8, #0x1f, #0x6168f0
006168e0:  ldr      x8, [sp, #0x40]
006168e4:  ldr      x0, [sp, #0x30]
006168e8:  and      x1, x8, #0x7fffffffffffffff
006168ec:  bl       #0x546bc0
006168f0:  adrp     x2, #0xd64000
006168f4:  add      x2, x2, #0x5a8
006168f8:  mov      x0, xzr
006168fc:  mov      x1, x21
00616900:  bl       #0xd0f5e0
00616904:  cbz      x21, #0x616914
00616908:  ldr      w1, [x19, #0x58]
0061690c:  mov      x0, x21
00616910:  bl       #0x666568
00616914:  ldrsb    x2, [x20, #0x17]
00616918:  tbz      x2, #0x3f, #0x616924
0061691c:  ldp      x8, x2, [x20]
00616920:  mov      x20, x8
00616924:  add      x0, sp, #0x110
00616928:  mov      x1, x20
0061692c:  bl       #0x6228b0
00616930:  adrp     x1, #0x1d6000
00616934:  add      x1, x1, #0x76a
00616938:  mov      w2, #0x1f
0061693c:  bl       #0x6228b0
00616940:  ldr      w1, [x19, #0x5c]
00616944:  bl       #0x6229f8
00616948:  bl       #0x417e08
0061694c:  tbnz     w0, #0, #0x61696c
00616950:  ldr      x3, [sp, #0x110]
00616954:  adrp     x0, #0x1f4000
00616958:  add      x0, x0, #0xe98
0061695c:  adrp     x1, #0x1d3000
00616960:  add      x1, x1, #0x6f7
00616964:  mov      w2, #0x1941
00616968:  bl       #0x623bb0
0061696c:  ldr      x8, [sp, #0x10]
00616970:  ldr      x8, [x8, #0x28]
00616974:  ldur     x9, [x29, #-0x28]
00616978:  cmp      x8, x9
0061697c:  b.ne     #0x6169ac
00616980:  add      sp, sp, #2, lsl #12
00616984:  add      sp, sp, #0x150
00616988:  ldp      x20, x19, [sp, #0x60]
0061698c:  ldp      x22, x21, [sp, #0x50]
00616990:  ldp      x24, x23, [sp, #0x40]
00616994:  ldp      x26, x25, [sp, #0x30]
00616998:  ldp      x28, x27, [sp, #0x20]
0061699c:  ldp      x29, x30, [sp, #0x10]
006169a0:  ldr      d8, [sp], #0x70
006169a4:  autiasp  
006169a8:  ret      
006169ac:  bl       #0xd13da0

; ===== 00670c3c  FUN_00670c3c  (300 bytes) =====
00670c3c:  bti      c
00670c40:  lsr      x8, x1, #1
00670c44:  cbz      x8, #0x670ca0
00670c48:  cmp      x1, #0x10
00670c4c:  b.lo     #0x670c6c
00670c50:  and      x9, x1, #0xfffffffffffffffe
00670c54:  add      x10, x0, x9
00670c58:  cmp      x2, x10
00670c5c:  b.hs     #0x670ca8
00670c60:  add      x9, x2, x9
00670c64:  cmp      x0, x9
00670c68:  b.hs     #0x670ca8
00670c6c:  mov      x9, xzr
00670c70:  lsl      x10, x9, #1
00670c74:  sub      x9, x8, x9
00670c78:  add      x11, x10, x0
00670c7c:  add      x10, x2, x10
00670c80:  add      x11, x11, #1
00670c84:  ldurh    w12, [x11, #-1]
00670c88:  subs     x9, x9, #1
00670c8c:  add      x11, x11, #2
00670c90:  rev      w12, w12
00670c94:  lsr      w12, w12, #0x10
00670c98:  strh     w12, [x10], #2
00670c9c:  b.ne     #0x670c84
00670ca0:  mov      x0, x8
00670ca4:  ret      
00670ca8:  cmp      x1, #0x40
00670cac:  b.hs     #0x670cb8
00670cb0:  mov      x9, xzr
00670cb4:  b        #0x670d28
00670cb8:  and      x9, x8, #0x7fffffffffffffe0
00670cbc:  add      x10, x0, #0x20
00670cc0:  add      x11, x2, #0x20
00670cc4:  and      x12, x8, #0x7fffffffffffffe0
00670cc8:  sub      x13, x10, #0x20
00670ccc:  ld2      {v2.16b, v3.16b}, [x10]
00670cd0:  subs     x12, x12, #0x20
00670cd4:  add      x10, x10, #0x40
00670cd8:  ld2      {v0.16b, v1.16b}, [x13]
00670cdc:  ushll2   v7.8h, v3.16b, #0
00670ce0:  shll     v16.8h, v2.8b, #8
00670ce4:  shll2    v4.8h, v0.16b, #8
00670ce8:  ushll2   v5.8h, v1.16b, #0
00670cec:  shll     v6.8h, v0.8b, #8
00670cf0:  ushll    v0.8h, v1.8b, #0
00670cf4:  shll2    v1.8h, v2.16b, #8
00670cf8:  ushll    v2.8h, v3.8b, #0
00670cfc:  orr      v3.16b, v4.16b, v5.16b
00670d00:  orr      v0.16b, v6.16b, v0.16b
00670d04:  orr      v1.16b, v1.16b, v7.16b
00670d08:  orr      v2.16b, v16.16b, v2.16b
00670d0c:  stp      q0, q3, [x11, #-0x20]
00670d10:  stp      q2, q1, [x11], #0x40
00670d14:  b.ne     #0x670cc8
00670d18:  cmp      x8, x9
00670d1c:  b.eq     #0x670ca0
00670d20:  tst      x1, #0x30
00670d24:  b.eq     #0x670c70
00670d28:  mov      x10, x9
00670d2c:  and      x9, x8, #0x7ffffffffffffff8
00670d30:  lsl      x12, x10, #1
00670d34:  sub      x10, x10, x9
00670d38:  add      x11, x2, x12
00670d3c:  add      x12, x0, x12
00670d40:  ld2      {v0.8b, v1.8b}, [x12], #16
00670d44:  adds     x10, x10, #8
00670d48:  shll     v2.8h, v0.8b, #8
00670d4c:  ushll    v0.8h, v1.8b, #0
00670d50:  orr      v0.16b, v2.16b, v0.16b
00670d54:  str      q0, [x11], #0x10
00670d58:  b.ne     #0x670d40
00670d5c:  cmp      x8, x9
00670d60:  b.eq     #0x670ca0
00670d64:  b        #0x670c70

; ===== 00672984  FUN_00672984  (568 bytes) =====
00672984:  paciasp  
00672988:  sub      sp, sp, #0x70
0067298c:  stp      x29, x30, [sp, #0x10]
00672990:  stp      x28, x27, [sp, #0x20]
00672994:  stp      x26, x25, [sp, #0x30]
00672998:  stp      x24, x23, [sp, #0x40]
0067299c:  stp      x22, x21, [sp, #0x50]
006729a0:  stp      x20, x19, [sp, #0x60]
006729a4:  add      x29, sp, #0x10
006729a8:  sxtw     x8, w2
006729ac:  mov      x22, x0
006729b0:  mov      w9, #1
006729b4:  mov      x19, x5
006729b8:  mov      x21, x4
006729bc:  mov      x24, x1
006729c0:  and      x25, x8, #0x7ffffffffffffffe
006729c4:  sturh    w9, [x29, #-4]
006729c8:  mov      x0, x25
006729cc:  bl       #0xd140f0
006729d0:  mov      x20, x0
006729d4:  cbz      x25, #0x6729ec
006729d8:  sub      x23, x25, #2
006729dc:  cmp      x23, #0xe
006729e0:  b.hs     #0x6729f4
006729e4:  mov      x9, xzr
006729e8:  b        #0x672a8c
006729ec:  mov      x24, xzr
006729f0:  b        #0x672af8
006729f4:  lsr      x8, x23, #1
006729f8:  cmp      x23, #0x1e
006729fc:  add      x8, x8, #1
00672a00:  b.hs     #0x672a4c
00672a04:  mov      x10, xzr
00672a08:  and      x11, x8, #0xfffffffffffffff8
00672a0c:  lsl      x13, x10, #1
00672a10:  lsl      x9, x11, #1
00672a14:  sub      x10, x10, x11
00672a18:  add      x12, x24, x13
00672a1c:  add      x13, x20, x13
00672a20:  ld2      {v0.8b, v1.8b}, [x12], #16
00672a24:  adds     x10, x10, #8
00672a28:  fmov     d2, d1
00672a2c:  sli      v2.8b, v0.8b, #4
00672a30:  sri      v0.8b, v1.8b, #4
00672a34:  fmov     d1, d2
00672a38:  st2      {v0.8b, v1.8b}, [x13], #16
00672a3c:  b.ne     #0x672a20
00672a40:  cmp      x8, x11
00672a44:  b.ne     #0x672a8c
00672a48:  b        #0x672ac0
00672a4c:  and      x10, x8, #0xfffffffffffffff0
00672a50:  and      x9, x8, #0xfffffffffffffff0
00672a54:  mov      x11, x20
00672a58:  mov      x12, x24
00672a5c:  ld2      {v0.16b, v1.16b}, [x12], #32
00672a60:  subs     x9, x9, #0x10
00672a64:  mov      v2.16b, v1.16b
00672a68:  sli      v2.16b, v0.16b, #4
00672a6c:  sri      v0.16b, v1.16b, #4
00672a70:  mov      v1.16b, v2.16b
00672a74:  st2      {v0.16b, v1.16b}, [x11], #32
00672a78:  b.ne     #0x672a5c
00672a7c:  cmp      x8, x10
00672a80:  b.eq     #0x672ac0
00672a84:  tbnz     w8, #3, #0x672a08
00672a88:  lsl      x9, x10, #1
00672a8c:  add      x8, x24, x9
00672a90:  add      x12, x9, #3
00672a94:  ldrb     w10, [x8]
00672a98:  ldrb     w8, [x8, #1]
00672a9c:  cmp      x12, x25
00672aa0:  and      w11, w10, #0xf0
00672aa4:  orr      w11, w11, w8, lsr #4
00672aa8:  bfi      w8, w10, #4, #8
00672aac:  add      x10, x20, x9
00672ab0:  add      x9, x9, #2
00672ab4:  strb     w11, [x10]
00672ab8:  strb     w8, [x10, #1]
00672abc:  b.lo     #0x672a8c
00672ac0:  lsr      x24, x25, #1
00672ac4:  add      x26, x20, x25
00672ac8:  add      x25, x20, #2
00672acc:  mov      x27, x24
00672ad0:  mov      x0, x25
00672ad4:  mov      x1, x25
00672ad8:  mov      x2, x23
00672adc:  ldrb     w28, [x0, #-1]!
00672ae0:  bl       #0xd13de0
00672ae4:  subs     x27, x27, #1
00672ae8:  sub      x23, x23, #1
00672aec:  add      x25, x25, #1
00672af0:  sturb    w28, [x26, #-1]
00672af4:  b.ne     #0x672ad0
00672af8:  ldr      x0, [x22, #8]
00672afc:  sub      x4, x29, #4
00672b00:  mov      x1, x20
00672b04:  mov      x2, x24
00672b08:  mov      x3, x21
00672b0c:  bl       #0x672cfc
00672b10:  mov      x23, x0
00672b14:  ldr      x0, [x22, #0x10]
00672b18:  add      x1, x20, x24
00672b1c:  add      x3, x21, x23, lsl #1
00672b20:  sub      x4, x29, #4
00672b24:  mov      x2, x24
00672b28:  bl       #0x672cfc
00672b2c:  mov      x22, x0
00672b30:  cmp      x0, x23
00672b34:  b.ne     #0x672b7c
00672b38:  lsl      x22, x23, #1
00672b3c:  cbz      x22, #0x672b7c
00672b40:  mvn      x8, x23
00672b44:  and      x25, x23, #0x7fffffffffffffff
00672b48:  add      x23, x21, #2
00672b4c:  add      x8, x8, x22
00672b50:  lsl      x24, x8, #1
00672b54:  ldrh     w26, [x21, x25, lsl #1]
00672b58:  add      x0, x23, #2
00672b5c:  mov      x1, x23
00672b60:  mov      x2, x24
00672b64:  bl       #0xd13de0
00672b68:  add      x25, x25, #1
00672b6c:  sub      x24, x24, #2
00672b70:  cmp      x25, x22
00672b74:  strh     w26, [x23], #4
00672b78:  b.lo     #0x672b54
00672b7c:  ldurh    w0, [x29, #-4]
00672b80:  bl       #0x6705b4
00672b84:  str      w0, [x19]
00672b88:  cbz      x20, #0x672b94
00672b8c:  mov      x0, x20
00672b90:  bl       #0xd14100
00672b94:  mov      w0, w22
00672b98:  ldp      x20, x19, [sp, #0x60]
00672b9c:  ldp      x22, x21, [sp, #0x50]
00672ba0:  ldp      x24, x23, [sp, #0x40]
00672ba4:  ldp      x26, x25, [sp, #0x30]
00672ba8:  ldp      x28, x27, [sp, #0x20]
00672bac:  ldp      x29, x30, [sp, #0x10]
00672bb0:  add      sp, sp, #0x70
00672bb4:  autiasp  
00672bb8:  ret      

; ===== 006941ac  FUN_006941ac  (6204 bytes) =====
006941ac:  paciasp  
006941b0:  stp      d15, d14, [sp, #-0xa0]!
006941b4:  stp      d13, d12, [sp, #0x10]
006941b8:  stp      d11, d10, [sp, #0x20]
006941bc:  stp      d9, d8, [sp, #0x30]
006941c0:  stp      x29, x30, [sp, #0x40]
006941c4:  stp      x28, x27, [sp, #0x50]
006941c8:  stp      x26, x25, [sp, #0x60]
006941cc:  stp      x24, x23, [sp, #0x70]
006941d0:  stp      x22, x21, [sp, #0x80]
006941d4:  stp      x20, x19, [sp, #0x90]
006941d8:  add      x29, sp, #0x40
006941dc:  sub      sp, sp, #0x410
006941e0:  movi     v0.16b, #0xaa
006941e4:  mov      x8, x0
006941e8:  mov      w11, #1
006941ec:  ldrsh    w9, [x8, #0xc]!
006941f0:  ldrh     w10, [x8, #2]
006941f4:  str      x8, [sp, #0x318]
006941f8:  ldur     w8, [x8, #-4]
006941fc:  cmp      w10, #1
00694200:  stur     x0, [x29, #-0x100]
00694204:  stur     q0, [x29, #-0x60]
00694208:  stur     d0, [x29, #-0x50]
0069420c:  stp      w11, w9, [x29, #-0x68]
00694210:  b.ne     #0x694220
00694214:  mov      x19, xzr
00694218:  mov      w9, #2
0069421c:  b        #0x69430c
00694220:  ldur     x11, [x29, #-0x100]
00694224:  ldrsh    w10, [x11, #0x10]
00694228:  ldrh     w11, [x11, #0x12]
0069422c:  mul      w9, w9, w10
00694230:  cmp      w11, #1
00694234:  stur     w9, [x29, #-0x60]
00694238:  b.ne     #0x694248
0069423c:  mov      w19, #1
00694240:  mov      w9, #4
00694244:  b        #0x69430c
00694248:  ldur     x11, [x29, #-0x100]
0069424c:  ldrsh    w10, [x11, #0x14]
00694250:  ldrh     w11, [x11, #0x16]
00694254:  mul      w9, w9, w10
00694258:  cmp      w11, #1
0069425c:  stur     w9, [x29, #-0x5c]
00694260:  b.ne     #0x694270
00694264:  mov      w19, #2
00694268:  mov      w9, #6
0069426c:  b        #0x69430c
00694270:  ldur     x11, [x29, #-0x100]
00694274:  ldrsh    w10, [x11, #0x18]
00694278:  ldrh     w11, [x11, #0x1a]
0069427c:  mul      w9, w9, w10
00694280:  cmp      w11, #1
00694284:  stur     w9, [x29, #-0x58]
00694288:  b.ne     #0x694298
0069428c:  mov      w19, #3
00694290:  mov      w9, #8
00694294:  b        #0x69430c
00694298:  ldur     x11, [x29, #-0x100]
0069429c:  ldrsh    w10, [x11, #0x1c]
006942a0:  ldrh     w11, [x11, #0x1e]
006942a4:  mul      w9, w9, w10
006942a8:  cmp      w11, #1
006942ac:  stur     w9, [x29, #-0x54]
006942b0:  b.ne     #0x6942c0
006942b4:  mov      w19, #4
006942b8:  mov      w9, #0xa
006942bc:  b        #0x69430c
006942c0:  ldur     x11, [x29, #-0x100]
006942c4:  ldrsh    w10, [x11, #0x20]
006942c8:  ldrh     w11, [x11, #0x22]
006942cc:  mul      w9, w9, w10
006942d0:  cmp      w11, #1
006942d4:  stur     w9, [x29, #-0x50]
006942d8:  b.ne     #0x6942e8
006942dc:  mov      w19, #5
006942e0:  mov      w9, #0xc
006942e4:  b        #0x69430c
006942e8:  ldur     x11, [x29, #-0x100]
006942ec:  ldrsh    w10, [x11, #0x24]
006942f0:  ldrh     w11, [x11, #0x26]
006942f4:  mul      w9, w9, w10
006942f8:  cmp      w11, #1
006942fc:  stur     w9, [x29, #-0x4c]
00694300:  b.ne     #0x6959e4
00694304:  mov      w19, #6
00694308:  mov      w9, #0xe
0069430c:  bic      w8, w8, w8, asr #31
00694310:  mov      w10, #0x4f3
00694314:  movi     v12.2s, #0xbf, lsl #24
00694318:  movk     w10, #0xbf35, lsl #16
0069431c:  str      w8, [sp, #0x14]
00694320:  ldr      x8, [sp, #0x318]
00694324:  fmov     s14, w10
00694328:  add      x8, x8, x9, lsl #1
0069432c:  sub      x9, x1, #4
00694330:  str      x9, [sp, #8]
00694334:  add      x9, x1, #4
00694338:  stp      x9, x1, [sp, #0x138]
0069433c:  mov      w9, #0x4f3
00694340:  ldursh   w20, [x8, #-2]
00694344:  movk     w9, #0x3f35, lsl #16
00694348:  fmov     s13, w9
0069434c:  stp      s14, s13, [sp, #0x58]
00694350:  b        #0x694360
00694354:  cmp      x19, #0
00694358:  sub      x19, x19, #1
0069435c:  b.le     #0x695998
00694360:  mov      w24, w20
00694364:  cbz      x19, #0x6944bc
00694368:  ldr      x8, [sp, #0x318]
0069436c:  add      x9, x8, x19, lsl #2
00694370:  lsl      x8, x19, #1
00694374:  ldursh   w20, [x9, #-2]
00694378:  ldr      x9, [sp, #0x318]
0069437c:  ldrh     w8, [x9, x8, lsl #1]
00694380:  cmp      w8, #3
00694384:  b.gt     #0x6944d0
00694388:  cmp      w8, #2
0069438c:  b.eq     #0x6956f4
00694390:  cmp      w8, #3
00694394:  b.ne     #0x694354
00694398:  sub      x8, x29, #0x68
0069439c:  ldr      w8, [x8, x19, lsl #2]
006943a0:  cmp      w8, #1
006943a4:  b.lt     #0x694354
006943a8:  ldr      w9, [sp, #0x14]
006943ac:  ldur     x11, [x29, #-0x100]
006943b0:  mov      w12, w24
006943b4:  mov      x14, xzr
006943b8:  lsl      w10, w8, w9
006943bc:  ldr      x11, [x11, #0x38]
006943c0:  smull    x9, w10, w24
006943c4:  sxtw     x13, w10
006943c8:  lsl      w10, w24, #1
006943cc:  add      x11, x11, x9, lsl #3
006943d0:  sxtw     x9, w12
006943d4:  ldr      s2, [x11, #4]
006943d8:  lsl      x11, x13, #4
006943dc:  lsl      x12, x9, #3
006943e0:  lsl      x13, x13, #3
006943e4:  ldur     x16, [x29, #-0x100]
006943e8:  mul      w15, w20, w14
006943ec:  mov      x3, x9
006943f0:  ldr      x16, [x16, #0x38]
006943f4:  add      x15, x1, w15, sxtw #3
006943f8:  add      x16, x16, #4
006943fc:  mov      x17, x16
00694400:  ldr      d0, [x15, x9, lsl #3]
00694404:  ldr      d1, [x15, w10, sxtw #3]
00694408:  add      x2, x15, x12
0069440c:  ldp      s5, s6, [x17, #-4]
00694410:  subs     x3, x3, #1
00694414:  rev64    v3.2s, v0.2s
00694418:  rev64    v4.2s, v1.2s
0069441c:  add      x17, x17, x13
00694420:  ldp      s7, s16, [x16, #-4]
00694424:  add      x16, x16, x11
00694428:  fmul     v0.2s, v0.2s, v5.s[0]
0069442c:  fmul     v3.2s, v3.2s, v6.s[0]
00694430:  fmul     v1.2s, v1.2s, v7.s[0]
00694434:  fmul     v4.2s, v4.2s, v16.s[0]
00694438:  fsub     v5.2s, v0.2s, v3.2s
0069443c:  fadd     v0.2s, v0.2s, v3.2s
00694440:  fsub     v3.2s, v1.2s, v4.2s
00694444:  fadd     v1.2s, v1.2s, v4.2s
00694448:  ldr      d4, [x15]
0069444c:  mov      v5.s[1], v0.s[1]
00694450:  mov      v3.s[1], v1.s[1]
00694454:  fadd     v0.2s, v5.2s, v3.2s
00694458:  fsub     v3.2s, v5.2s, v3.2s
0069445c:  fmul     v1.2s, v0.2s, v12.2s
00694460:  rev64    v3.2s, v3.2s
00694464:  fadd     v1.2s, v4.2s, v1.2s
00694468:  str      d1, [x15, x9, lsl #3]
0069446c:  ldr      d1, [x15]
00694470:  fadd     v0.2s, v0.2s, v1.2s
00694474:  fmul     v1.2s, v3.2s, v2.s[0]
00694478:  str      d0, [x15]
0069447c:  ldr      d0, [x15, x9, lsl #3]
00694480:  fadd     v3.2s, v0.2s, v1.2s
00694484:  fsub     v0.2s, v0.2s, v1.2s
00694488:  mov      v3.s[1], v0.s[1]
0069448c:  mov      s0, v1.s[1]
00694490:  str      d3, [x15, w10, sxtw #3]
00694494:  add      x15, x15, #8
00694498:  ldp      s3, s4, [x2]
0069449c:  fsub     s1, s3, s1
006944a0:  fadd     s0, s0, s4
006944a4:  stp      s1, s0, [x2]
006944a8:  b.ne     #0x694400
006944ac:  add      x14, x14, #1
006944b0:  cmp      x14, x8
006944b4:  b.ne     #0x6943e4
006944b8:  b        #0x694354
006944bc:  mov      w20, #1
006944c0:  ldr      x9, [sp, #0x318]
006944c4:  ldrh     w8, [x9, xzr, lsl #1]
006944c8:  cmp      w8, #3
006944cc:  b.le     #0x694388
006944d0:  cmp      w8, #4
006944d4:  b.eq     #0x6957d0
006944d8:  cmp      w8, #5
006944dc:  b.ne     #0x694354
006944e0:  sub      x8, x29, #0x68
006944e4:  ldr      w27, [x8, x19, lsl #2]
006944e8:  cmp      w27, #1
006944ec:  b.lt     #0x694354
006944f0:  cmp      w24, #1
006944f4:  b.lt     #0x694354
006944f8:  ldr      w8, [sp, #0x14]
006944fc:  lsl      w11, w24, #1
00694500:  lsl      w12, w24, #2
00694504:  mov      w13, w24
00694508:  ldr      x15, [sp, #8]
0069450c:  ldr      x16, [sp, #0x138]
00694510:  lsl      w9, w27, w8
00694514:  ldur     x8, [x29, #-0x100]
00694518:  sxtw     x25, w11
0069451c:  add      w11, w11, w24
00694520:  sxtw     x26, w12
00694524:  mov      w5, w24
00694528:  ldr      x6, [x8, #0x38]
0069452c:  mov      w8, w24
00694530:  smull    x10, w9, w24
00694534:  sxtw     x22, w8
00694538:  ubfiz    x8, x13, #3, #0x20
0069453c:  sxtw     x0, w11
00694540:  sxtw     x9, w9
00694544:  add      x17, x6, #4
00694548:  mov      w3, wzr
0069454c:  add      x13, x6, x10, lsl #3
00694550:  lsl      x11, x22, #3
00694554:  add      x10, x6, x10, lsl #4
00694558:  lsl      x21, x9, #5
0069455c:  lsl      x2, x9, #4
00694560:  mov      x4, xzr
00694564:  ldp      s3, s4, [x13]
00694568:  add      x12, x11, x8
0069456c:  lsl      x13, x26, #3
00694570:  add      x14, x1, x11
00694574:  add      x11, x16, x11
00694578:  str      x14, [sp, #0x170]
0069457c:  add      x14, x15, x12
00694580:  add      x12, x1, x12
00694584:  stp      x11, x14, [sp, #0x128]
00694588:  add      x11, x13, x8
0069458c:  lsl      x14, x25, #3
00694590:  str      x12, [sp, #0x120]
00694594:  add      x12, x1, x13
00694598:  mov      v20.16b, v4.16b
0069459c:  str      x12, [sp, #0x168]
006945a0:  add      x12, x15, x11
006945a4:  add      x11, x1, x11
006945a8:  str      x12, [sp, #0x118]
006945ac:  add      x12, x16, x13
006945b0:  lsl      x13, x0, #3
006945b4:  stp      x11, x12, [sp, #0x108]
006945b8:  add      x12, x14, x8
006945bc:  add      x11, x1, x14
006945c0:  str      x11, [sp, #0x160]
006945c4:  add      x11, x15, x12
006945c8:  str      x11, [sp, #0x100]
006945cc:  add      x11, x16, x14
006945d0:  str      x11, [sp, #0xf8]
006945d4:  add      x11, x1, x12
006945d8:  add      x12, x1, x13
006945dc:  str      x11, [sp, #0xf0]
006945e0:  add      x11, x13, x8
006945e4:  add      x13, x16, x13
006945e8:  ldp      s5, s6, [x10]
006945ec:  sub      x10, x5, #1
006945f0:  str      x12, [sp, #0x158]
006945f4:  add      x12, x15, x11
006945f8:  tst      x10, #-0x800000000000000
006945fc:  stp      x13, x12, [sp, #0xe0]
00694600:  lsl      x12, x10, #5
00694604:  mov      w10, #0x18
00694608:  umaddl   x10, w24, w10, x6
0069460c:  ccmp     w9, #1, #0, eq
00694610:  add      x11, x1, x11
00694614:  add      x14, x6, x12
00694618:  str      x11, [sp, #0xd8]
0069461c:  add      x11, x17, x12
00694620:  ccmp     x14, x6, #0, eq
00694624:  add      x13, x6, w24, uxtw #4
00694628:  sub      x14, x10, #0x14
0069462c:  ccmp     x11, x17, #0, hs
00694630:  add      x11, x6, x5, lsl #5
00694634:  fmov     d0, x14
00694638:  sub      x10, x10, #0x10
0069463c:  sub      x12, x13, #0xc
00694640:  sub      x16, x11, #0x1c
00694644:  sub      x11, x11, #0x18
00694648:  stp      x10, x14, [sp, #0xb8]
0069464c:  fmov     d1, x16
00694650:  stp      x11, x16, [sp, #0xa0]
00694654:  lsl      x16, x9, #3
00694658:  mov      v0.d[1], x10
0069465c:  add      x14, x6, x8
00694660:  sub      x13, x13, #8
00694664:  sub      x10, x14, #4
00694668:  stp      x13, x12, [sp, #0xc8]
0069466c:  sub      x7, x14, #4
00694670:  mov      v1.d[1], x11
00694674:  add      x11, x16, x9
00694678:  str      x10, [sp, #0x98]
0069467c:  add      x10, x6, x8
00694680:  lsl      x11, x11, #3
00694684:  fmov     d2, x7
00694688:  str      q0, [sp, #0x340]
0069468c:  fmov     d0, x12
00694690:  mov      w12, #4
00694694:  str      x10, [sp, #0xb0]
00694698:  add      x10, x9, x9, lsl #1
0069469c:  mov      v21.16b, v6.16b
006946a0:  str      x11, [sp, #0x50]
006946a4:  mov      w11, #4
006946a8:  mov      v2.d[1], x14
006946ac:  mov      v0.d[1], x13
006946b0:  bfi      x11, x9, #5, #0x3b
006946b4:  bfi      x12, x10, #3, #0x3d
006946b8:  lsl      x13, x9, #6
006946bc:  mov      v20.s[1], v6.s[0]
006946c0:  mov      v21.s[1], v4.s[0]
006946c4:  stp      x12, x11, [sp, #0x40]
006946c8:  lsl      x11, x10, #4
006946cc:  lsl      x12, x9, #7
006946d0:  add      x9, x15, x8
006946d4:  lsl      x30, x10, #5
006946d8:  lsl      x10, x10, #3
006946dc:  stp      q1, q0, [sp, #0x320]
006946e0:  fmov     d0, x6
006946e4:  str      x11, [sp, #0x38]
006946e8:  and      x11, x5, #0x7ffffffc
006946ec:  mov      x15, x10
006946f0:  str      x9, [sp, #0x78]
006946f4:  and      x9, x5, #0x7ffffffc
006946f8:  mov      v0.d[1], x17
006946fc:  stp      x13, x9, [sp, #0x28]
00694700:  lsl      x9, x11, #3
00694704:  str      q2, [sp, #0x2e0]
00694708:  stp      x12, x9, [sp, #0x18]
0069470c:  add      x9, x1, x8
00694710:  and      x8, x8, #0x3ffffffe0
00694714:  stur     x8, [x29, #-0xf8]
00694718:  cset     w8, lo
0069471c:  str      q0, [sp, #0x80]
00694720:  str      x9, [sp, #0x70]
00694724:  str      w8, [sp, #0x2dc]
00694728:  str      x19, [sp, #0x1b8]
0069472c:  str      w20, [sp, #0x1b4]
00694730:  stp      x27, x24, [sp, #0x1a0]
00694734:  stp      x22, x5, [sp, #0x190]
00694738:  stp      x26, x25, [sp, #0x180]
0069473c:  str      x0, [sp, #0x178]
00694740:  str      x16, [sp, #0x150]
00694744:  stur     x30, [x29, #-0x98]
00694748:  str      x10, [sp, #0x148]
0069474c:  str      x21, [sp, #0x310]
00694750:  str      x2, [sp, #0x308]
00694754:  str      q20, [sp, #0x60]
00694758:  mul      w8, w20, w4
0069475c:  cmp      w24, #0x10
00694760:  sbfiz    x14, x8, #3, #0x20
00694764:  add      x23, x1, x14
00694768:  add      x8, x23, x22, lsl #3
0069476c:  add      x12, x23, x25, lsl #3
00694770:  add      x10, x23, x0, lsl #3
00694774:  add      x28, x23, x26, lsl #3
00694778:  b.hs     #0x694784
0069477c:  mov      x13, xzr
00694780:  b        #0x695458
00694784:  ldr      w9, [sp, #0x2dc]
00694788:  tbz      w9, #0, #0x694794
0069478c:  mov      x13, xzr
00694790:  b        #0x69544c
00694794:  ldp      x13, x9, [sp, #0x130]
00694798:  dup      v17.2d, x23
0069479c:  str      x3, [sp, #0x300]
006947a0:  ldp      q10, q31, [sp, #0x330]
006947a4:  ldr      q30, [sp, #0x2e0]
006947a8:  ldr      x11, [sp, #0x170]
006947ac:  ldr      q15, [sp, #0x320]
006947b0:  add      x27, x13, x14
006947b4:  cmhi     v0.2d, v10.2d, v17.2d
006947b8:  cmhi     v18.2d, v30.2d, v17.2d
006947bc:  ldp      x13, x15, [sp, #0x120]
006947c0:  dup      v12.2d, x27
006947c4:  add      x22, x9, x14
006947c8:  add      x11, x11, x14
006947cc:  ext      v20.16b, v31.16b, v15.16b, #8
006947d0:  uzp1     v0.4s, v18.4s, v0.4s
006947d4:  dup      v7.2d, x22
006947d8:  ext      v29.16b, v10.16b, v31.16b, #8
006947dc:  add      x19, x13, x14
006947e0:  ldr      x13, [sp, #0x168]
006947e4:  add      x3, x15, x14
006947e8:  dup      v23.2d, x11
006947ec:  dup      v1.2d, x3
006947f0:  mov      v19.d[0], x19
006947f4:  add      x1, x13, x14
006947f8:  ldp      x13, x15, [sp, #0x110]
006947fc:  dup      v9.2d, x1
00694800:  str      q0, [sp, #0x2a0]
00694804:  cmhi     v14.2d, v31.2d, v7.2d
00694808:  cmhi     v16.2d, v15.2d, v7.2d
0069480c:  ldr      x9, [sp, #0x70]
00694810:  mov      v26.16b, v23.16b
00694814:  add      x5, x15, x14
00694818:  add      x21, x13, x14
0069481c:  mov      v8.16b, v7.16b
00694820:  ldp      x13, x15, [sp, #0xf8]
00694824:  mov      v2.d[0], x5
00694828:  cmhi     v0.2d, v31.2d, v9.2d
0069482c:  cmhi     v28.2d, v29.2d, v1.2d
00694830:  stur     q20, [x29, #-0x90]
00694834:  uzp1     v14.4s, v14.4s, v16.4s
00694838:  add      x9, x9, x14
0069483c:  cmhi     v27.2d, v10.2d, v7.2d
00694840:  add      x25, x15, x14
00694844:  add      x24, x13, x14
00694848:  str      q1, [sp, #0x1c0]
0069484c:  ldp      x13, x15, [sp, #0xe0]
00694850:  stp      q12, q2, [x29, #-0xe0]
00694854:  mov      v2.d[0], x25
00694858:  dup      v25.2d, x24
0069485c:  ldur     q16, [x29, #-0xd0]
00694860:  mov      v26.d[1], x3
00694864:  mov      v8.d[1], x24
00694868:  zip1     v31.2d, v19.2d, v30.2d
0069486c:  add      x20, x15, x14
00694870:  add      x0, x13, x14
00694874:  mov      v18.16b, v19.16b
00694878:  dup      v22.2d, x0
0069487c:  stp      q29, q25, [x29, #-0xc0]
00694880:  mov      v29.16b, v1.16b
00694884:  str      q2, [sp, #0x290]
00694888:  mov      v2.d[0], x20
0069488c:  mov      v25.d[1], x3
00694890:  mov      v19.d[1], x20
00694894:  cmhi     v13.2d, v30.2d, v7.2d
00694898:  mov      v11.16b, v7.16b
0069489c:  stur     q22, [x29, #-0xf0]
006948a0:  mov      v24.16b, v7.16b
006948a4:  mov      v7.d[1], x0
006948a8:  str      q22, [sp, #0x280]
006948ac:  mov      v22.d[1], x3
006948b0:  mov      v12.d[1], x9
006948b4:  stp      q2, q17, [sp, #0x2b0]
006948b8:  cmhi     v2.2d, v10.2d, v9.2d
006948bc:  cmhi     v17.2d, v20.2d, v1.2d
006948c0:  ldr      q20, [sp, #0x290]
006948c4:  ldr      q1, [sp, #0x2b0]
006948c8:  ext      v10.16b, v15.16b, v16.16b, #8
006948cc:  uzp1     v27.4s, v13.4s, v27.4s
006948d0:  mov      v29.d[1], x21
006948d4:  mov      v11.d[1], x21
006948d8:  uzp1     v0.4s, v2.4s, v0.4s
006948dc:  mov      v20.d[1], x9
006948e0:  cmhi     v2.2d, v19.2d, v25.2d
006948e4:  mov      v1.d[1], x9
006948e8:  mov      v24.d[1], x3
006948ec:  ldr      x15, [sp, #0x108]
006948f0:  mov      v18.d[1], x25
006948f4:  ldr      x13, [sp, #0x78]
006948f8:  str      x4, [sp, #0x2f8]
006948fc:  cmhi     v13.2d, v10.2d, v29.2d
00694900:  mov      v29.16b, v9.16b
00694904:  add      x17, x15, x14
00694908:  str      q0, [sp, #0x2b0]
0069490c:  uzp1     v0.4s, v28.4s, v17.4s
00694910:  cmhi     v15.2d, v20.2d, v8.2d
00694914:  dup      v8.2d, v16.d[0]
00694918:  cmhi     v7.2d, v1.2d, v7.2d
0069491c:  mov      v17.16b, v9.16b
00694920:  ldr      q20, [sp, #0x280]
00694924:  mov      v29.d[1], x24
00694928:  ldr      x15, [sp, #0x160]
0069492c:  add      x4, x13, x14
00694930:  stp      q8, q12, [sp, #0x240]
00694934:  cmp      x23, x9
00694938:  str      q0, [sp, #0x1d0]
0069493c:  mov      v0.16b, v16.16b
00694940:  cmhi     v16.2d, v10.2d, v26.2d
00694944:  mov      v1.16b, v8.16b
00694948:  mov      v17.d[1], x0
0069494c:  mov      v20.d[1], x11
00694950:  mov      v8.d[0], x25
00694954:  ldr      q26, [sp, #0x1c0]
00694958:  stp      q2, q16, [sp, #0x220]
0069495c:  cmhi     v2.2d, v31.2d, v22.2d
00694960:  mov      v0.d[1], x9
00694964:  mov      v1.d[0], x20
00694968:  zip1     v16.2d, v12.2d, v30.2d
0069496c:  mov      v19.16b, v26.16b
00694970:  dup      v22.2d, x19
00694974:  add      x2, x15, x14
00694978:  ldr      x15, [sp, #0xf0]
0069497c:  str      q2, [sp, #0x210]
00694980:  uzp1     v2.8h, v27.8h, v14.8h
00694984:  ldur     q27, [x29, #-0xb0]
00694988:  cmhi     v0.2d, v0.2d, v11.2d
0069498c:  mov      v19.d[1], x11
00694990:  add      x26, x15, x14
00694994:  mov      v27.d[1], x11
00694998:  cmhi     v1.2d, v1.2d, v17.2d
0069499c:  cmhi     v17.2d, v30.2d, v9.2d
006949a0:  cmhi     v16.2d, v16.2d, v20.2d
006949a4:  ldr      x15, [sp, #0x158]
006949a8:  dup      v14.2d, x26
006949ac:  str      q2, [sp, #0x200]
006949b0:  uzp1     v2.4s, v15.4s, v7.4s
006949b4:  cmhi     v7.2d, v12.2d, v24.2d
006949b8:  uzp1     v17.4s, v1.4s, v17.4s
006949bc:  cmhi     v24.2d, v8.2d, v29.2d
006949c0:  mov      v29.16b, v12.16b
006949c4:  ldr      q1, [sp, #0x330]
006949c8:  add      x16, x15, x14
006949cc:  ldr      x15, [sp, #0xd8]
006949d0:  uzp1     v0.4s, v7.4s, v0.4s
006949d4:  mov      v7.16b, v12.16b
006949d8:  ldr      q15, [sp, #0x80]
006949dc:  stp      q0, q2, [sp, #0x280]
006949e0:  mov      v2.16b, v12.16b
006949e4:  mov      v29.d[1], x25
006949e8:  uzp1     v28.4s, v13.4s, v24.4s
006949ec:  ext      v1.16b, v30.16b, v1.16b, #8
006949f0:  add      x7, x15, x14
006949f4:  mov      v7.d[1], x5
006949f8:  mov      v9.d[1], x2
006949fc:  dup      v24.2d, x4
00694a00:  mov      v2.d[1], x20
00694a04:  ccmp     x22, x4, #2, lo
00694a08:  ldr      x13, [sp, #0xa8]
00694a0c:  cmhi     v11.2d, v1.2d, v23.2d
00694a10:  mov      v20.16b, v24.16b
00694a14:  cmhi     v7.2d, v7.2d, v19.2d
00694a18:  dup      v19.2d, x16
00694a1c:  cmhi     v2.2d, v2.2d, v27.2d
00694a20:  fmov     d27, x21
00694a24:  stp      q1, q19, [sp, #0x260]
00694a28:  uzp1     v16.4s, v2.4s, v16.4s
00694a2c:  ldr      q2, [sp, #0x2b0]
00694a30:  mov      v0.16b, v27.16b
00694a34:  mov      v27.d[1], x11
00694a38:  str      q14, [sp, #0x2b0]
00694a3c:  mov      v14.d[1], x7
00694a40:  uzp1     v2.8h, v17.8h, v2.8h
00694a44:  mov      v0.d[1], x3
00694a48:  cmhi     v27.2d, v29.2d, v27.2d
00694a4c:  ext      v30.16b, v14.16b, v12.16b, #8
00694a50:  stp      q2, q22, [sp, #0x1e0]
00694a54:  ldr      q2, [sp, #0x1d0]
00694a58:  cmhi     v25.2d, v18.2d, v0.2d
00694a5c:  ldr      q0, [sp, #0x340]
00694a60:  mov      v18.16b, v24.16b
00694a64:  uzp1     v2.8h, v2.8h, v28.8h
00694a68:  uzp1     v28.4s, v7.4s, v27.4s
00694a6c:  mov      v27.16b, v19.16b
00694a70:  mov      v7.16b, v22.16b
00694a74:  zip1     v19.2d, v14.2d, v12.2d
00694a78:  mov      v18.d[1], x9
00694a7c:  mov      v27.d[1], x3
00694a80:  str      q2, [sp, #0x1d0]
00694a84:  mov      v2.16b, v1.16b
00694a88:  ldur     q1, [x29, #-0xc0]
00694a8c:  uzp1     v17.8h, v28.8h, v16.8h
00694a90:  mov      v7.d[1], x17
00694a94:  cmhi     v29.2d, v1.2d, v23.2d
00694a98:  ldur     q1, [x29, #-0x90]
00694a9c:  cmhi     v28.2d, v2.2d, v26.2d
00694aa0:  ldr      q2, [sp, #0x2c0]
00694aa4:  cmhi     v8.2d, v1.2d, v23.2d
00694aa8:  mov      v23.d[1], x22
00694aac:  cmhi     v1.2d, v0.2d, v2.2d
00694ab0:  ldr      q0, [sp, #0x320]
00694ab4:  uzp1     v11.4s, v11.4s, v29.4s
00694ab8:  zip1     v24.2d, v7.2d, v12.2d
00694abc:  ext      v16.16b, v7.16b, v12.16b, #8
00694ac0:  ldr      q12, [sp, #0x200]
00694ac4:  cmhi     v31.2d, v0.2d, v2.2d
00694ac8:  ext      v26.16b, v18.16b, v7.16b, #8
00694acc:  zip1     v0.2d, v23.2d, v27.2d
00694ad0:  zip1     v22.2d, v23.2d, v9.2d
00694ad4:  mov      v10.16b, v23.16b
00694ad8:  zip1     v2.2d, v23.2d, v15.2d
00694adc:  uzp1     v17.16b, v12.16b, v17.16b
00694ae0:  mov      v12.16b, v7.16b
00694ae4:  uzp1     v13.4s, v1.4s, v31.4s
00694ae8:  ldr      q1, [sp, #0x230]
00694aec:  mov      v10.d[1], x2
00694af0:  cmhi     v26.2d, v26.2d, v23.2d
00694af4:  uzp1     v29.4s, v8.4s, v1.4s
00694af8:  ldr      q1, [sp, #0x220]
00694afc:  mov      v12.d[0], x9
00694b00:  str      q17, [sp, #0x2c0]
00694b04:  cmhi     v17.2d, v30.2d, v2.2d
00694b08:  ext      v2.16b, v9.16b, v9.16b, #8
00694b0c:  uzp1     v31.4s, v25.4s, v1.4s
00694b10:  ldr      q1, [sp, #0x210]
00694b14:  cmhi     v25.2d, v19.2d, v0.2d
00694b18:  ext      v0.16b, v27.16b, v27.16b, #8
00694b1c:  cmhi     v19.2d, v24.2d, v22.2d
00694b20:  mov      v22.16b, v23.16b
00694b24:  uzp1     v28.4s, v1.4s, v28.4s
00694b28:  ext      v1.16b, v27.16b, v15.16b, #8
00694b2c:  ext      v24.16b, v18.16b, v14.16b, #8
00694b30:  cmhi     v16.2d, v16.2d, v10.2d
00694b34:  mov      v10.16b, v14.16b
00694b38:  uzp1     v29.8h, v11.8h, v29.8h
00694b3c:  mov      v22.d[0], x2
00694b40:  zip1     v18.2d, v27.2d, v9.2d
00694b44:  mov      v27.d[1], x22
00694b48:  mov      v23.16b, v9.16b
00694b4c:  ext      v30.16b, v15.16b, v9.16b, #8
00694b50:  mov      v9.d[1], x22
00694b54:  stp      q0, q1, [sp, #0x220]
00694b58:  ldp      q8, q1, [sp, #0x280]
00694b5c:  uzp1     v28.8h, v31.8h, v28.8h
00694b60:  mov      v10.d[0], x9
00694b64:  uzp1     v17.4s, v25.4s, v17.4s
00694b68:  cmhi     v25.2d, v24.2d, v22.2d
00694b6c:  ldp      q24, q22, [sp, #0x1d0]
00694b70:  uzp1     v1.8h, v8.8h, v1.8h
00694b74:  ldr      q8, [sp, #0x2a0]
00694b78:  dup      v0.2d, x9
00694b7c:  uzp1     v16.4s, v19.4s, v16.4s
00694b80:  cmhi     v31.2d, v20.2d, v15.2d
00694b84:  mov      v23.d[0], x3
00694b88:  uzp1     v13.8h, v8.8h, v13.8h
00694b8c:  uzp1     v22.16b, v24.16b, v22.16b
00694b90:  cmhi     v19.2d, v10.2d, v27.2d
00694b94:  cmhi     v0.2d, v0.2d, v15.2d
00694b98:  cmhi     v27.2d, v12.2d, v9.2d
00694b9c:  ldur     q8, [x29, #-0xd0]
00694ba0:  ext      v24.16b, v15.16b, v15.16b, #8
00694ba4:  cset     w9, lo
00694ba8:  cmp      x23, x27
00694bac:  zip1     v11.2d, v8.2d, v14.2d
00694bb0:  mov      v8.d[1], x7
00694bb4:  ccmp     x11, x4, #2, lo
00694bb8:  uzp1     v1.16b, v13.16b, v1.16b
00694bbc:  uzp1     v0.4s, v0.4s, v0.4s
00694bc0:  ldr      q13, [sp, #0x320]
00694bc4:  str      w9, [sp, #0x210]
00694bc8:  cset     w9, lo
00694bcc:  cmp      x23, x19
00694bd0:  ccmp     x3, x4, #2, lo
00694bd4:  ldr      x19, [sp, #0xa0]
00694bd8:  cmhi     v2.2d, v11.2d, v2.2d
00694bdc:  cmhi     v18.2d, v8.2d, v18.2d
00694be0:  str      q1, [sp, #0x280]
00694be4:  uzp1     v1.16b, v29.16b, v28.16b
00694be8:  uzp1     v0.8h, v0.8h, v0.8h
00694bec:  ldp      x11, x3, [sp, #0xb0]
00694bf0:  stp      q1, q22, [sp, #0x290]
00694bf4:  uzp1     v1.8h, v16.8h, v17.8h
00694bf8:  uzp1     v16.4s, v25.4s, v19.4s
00694bfc:  uzp1     v17.4s, v26.4s, v27.4s
00694c00:  uzp1     v25.4s, v31.4s, v31.4s
00694c04:  ldr      q19, [sp, #0x1f0]
00694c08:  cmhi     v26.2d, v7.2d, v30.2d
00694c0c:  cmhi     v19.2d, v19.2d, v24.2d
00694c10:  uzp1     v10.16b, v0.16b, v1.16b
00694c14:  zip1     v0.2d, v14.2d, v7.2d
00694c18:  uzp1     v16.8h, v17.8h, v16.8h
00694c1c:  uzp1     v25.8h, v25.8h, v25.8h
00694c20:  ldp      q17, q22, [sp, #0x240]
00694c24:  uzp1     v26.4s, v26.4s, v2.4s
00694c28:  uzp1     v28.4s, v19.4s, v19.4s
00694c2c:  str      w9, [sp, #0x240]
00694c30:  cmhi     v27.2d, v17.2d, v15.2d
00694c34:  ldr      q17, [sp, #0x2e0]
00694c38:  cset     w9, lo
00694c3c:  cmp      x23, x5
00694c40:  str      w9, [sp, #0x200]
00694c44:  uzp1     v1.16b, v25.16b, v16.16b
00694c48:  ldur     q25, [x29, #-0xf0]
00694c4c:  ext      v16.16b, v7.16b, v7.16b, #8
00694c50:  uzp1     v2.4s, v18.4s, v27.4s
00694c54:  dup      v18.2d, v17.d[0]
00694c58:  uzp1     v9.8h, v28.8h, v26.8h
00694c5c:  zip1     v28.2d, v22.2d, v7.2d
00694c60:  ext      v26.16b, v14.16b, v7.16b, #8
00694c64:  ccmp     x1, x4, #2, lo
00694c68:  ldp      q22, q8, [sp, #0x260]
00694c6c:  cset     w9, lo
00694c70:  stur     q1, [x29, #-0xd0]
00694c74:  uzp1     v1.4s, v27.4s, v27.4s
00694c78:  mov      v27.16b, v25.16b
00694c7c:  mov      v18.d[0], x20
00694c80:  cmp      x23, x17
00694c84:  str      w9, [sp, #0x250]
00694c88:  mov      v12.16b, v8.16b
00694c8c:  ccmp     x21, x4, #2, lo
00694c90:  mov      v27.d[1], x16
00694c94:  cset     w9, lo
00694c98:  cmp      x23, x25
00694c9c:  uzp1     v29.8h, v2.8h, v1.8h
00694ca0:  ldp      q1, q7, [sp, #0x220]
00694ca4:  cmhi     v2.2d, v16.2d, v23.2d
00694ca8:  mov      v12.d[1], x0
00694cac:  ccmp     x2, x4, #2, lo
00694cb0:  cmhi     v1.2d, v0.2d, v1.2d
00694cb4:  cmhi     v16.2d, v26.2d, v7.2d
00694cb8:  ldp      q7, q0, [x29, #-0xc0]
00694cbc:  cmhi     v26.2d, v22.2d, v25.2d
00694cc0:  cmhi     v18.2d, v18.2d, v27.2d
00694cc4:  cmhi     v23.2d, v13.2d, v0.2d
00694cc8:  cmhi     v22.2d, v22.2d, v8.2d
00694ccc:  mov      v27.16b, v0.16b
00694cd0:  cmhi     v31.2d, v7.2d, v25.2d
00694cd4:  uzp1     v25.4s, v2.4s, v1.4s
00694cd8:  dup      v1.2d, x20
00694cdc:  cmhi     v11.2d, v7.2d, v8.2d
00694ce0:  uzp1     v16.4s, v16.4s, v19.4s
00694ce4:  ldur     q2, [x29, #-0x90]
00694ce8:  uzp1     v19.4s, v23.4s, v18.4s
00694cec:  mov      v27.d[1], x0
00694cf0:  stur     w9, [x29, #-0xc0]
00694cf4:  mov      v23.16b, v1.16b
00694cf8:  uzp1     v18.4s, v26.4s, v31.4s
00694cfc:  cmhi     v26.2d, v2.2d, v8.2d
00694d00:  uzp1     v22.4s, v22.4s, v11.4s
00694d04:  ext      v11.16b, v13.16b, v17.16b, #8
00694d08:  mov      v8.d[1], x24
00694d0c:  ldp      q7, q2, [sp, #0x330]
00694d10:  uzp1     v25.8h, v25.8h, v16.8h
00694d14:  mov      v23.d[1], x26
00694d18:  cmhi     v16.2d, v28.2d, v30.2d
00694d1c:  cset     w9, lo
00694d20:  cmp      x23, x26
00694d24:  stur     w9, [x29, #-0x90]
00694d28:  cmhi     v31.2d, v7.2d, v0.2d
00694d2c:  cmhi     v11.2d, v11.2d, v12.2d
00694d30:  cmhi     v12.2d, v2.2d, v0.2d
00694d34:  uzp1     v22.8h, v19.8h, v22.8h
00694d38:  zip1     v30.2d, v8.2d, v15.2d
00694d3c:  ccmp     x24, x4, #2, lo
00694d40:  cmhi     v23.2d, v23.2d, v27.2d
00694d44:  cmhi     v27.2d, v17.2d, v0.2d
00694d48:  ldr      q0, [sp, #0x2b0]
00694d4c:  uzp1     v26.4s, v26.4s, v11.4s
00694d50:  uzp1     v31.4s, v31.4s, v12.4s
00694d54:  dup      v11.2d, x2
00694d58:  cset     w9, lo
00694d5c:  cmp      x23, x20
00694d60:  cmhi     v14.2d, v14.2d, v8.2d
00694d64:  uzp1     v23.4s, v23.4s, v27.4s
00694d68:  dup      v27.2d, x7
00694d6c:  ccmp     x16, x4, #2, lo
00694d70:  cmhi     v19.2d, v7.2d, v11.2d
00694d74:  cmhi     v28.2d, v17.2d, v11.2d
00694d78:  stur     w9, [x29, #-0xb0]
00694d7c:  uzp1     v18.8h, v26.8h, v18.8h
00694d80:  dup      v26.2d, x25
00694d84:  cset     w9, lo
00694d88:  cmhi     v12.2d, v27.2d, v24.2d
00694d8c:  mov      v27.d[1], x20
00694d90:  cmp      x23, x7
00694d94:  uzp1     v23.8h, v23.8h, v31.8h
00694d98:  cmhi     v31.2d, v1.2d, v24.2d
00694d9c:  mov      v1.d[1], x7
00694da0:  uzp1     v19.4s, v28.4s, v19.4s
00694da4:  cmhi     v28.2d, v0.2d, v15.2d
00694da8:  ldur     q0, [x29, #-0xe0]
00694dac:  cmhi     v26.2d, v26.2d, v15.2d
00694db0:  ccmp     x0, x4, #2, lo
00694db4:  stur     w9, [x29, #-0xf0]
00694db8:  cmhi     v27.2d, v27.2d, v30.2d
00694dbc:  cmhi     v30.2d, v2.2d, v11.2d
00694dc0:  cmhi     v11.2d, v13.2d, v11.2d
00694dc4:  cmhi     v13.2d, v0.2d, v24.2d
00694dc8:  cmhi     v1.2d, v1.2d, v24.2d
00694dcc:  cset     w9, lo
00694dd0:  cmp      x1, x13
00694dd4:  uzp1     v8.4s, v28.4s, v28.4s
00694dd8:  uzp1     v26.4s, v26.4s, v26.4s
00694ddc:  ccmp     x6, x5, #2, lo
00694de0:  uzp1     v24.4s, v30.4s, v11.4s
00694de4:  uzp1     v30.4s, v14.4s, v28.4s
00694de8:  uzp1     v27.4s, v28.4s, v27.4s
00694dec:  uzp1     v1.4s, v31.4s, v1.4s
00694df0:  uzp1     v28.4s, v12.4s, v12.4s
00694df4:  uzp1     v31.4s, v31.4s, v31.4s
00694df8:  uzp1     v16.4s, v13.4s, v16.4s
00694dfc:  uzp1     v11.4s, v13.4s, v13.4s
00694e00:  str      w9, [sp, #0x2b0]
00694e04:  cset     w9, lo
00694e08:  cmp      x1, x19
00694e0c:  add      x1, x6, #4
00694e10:  stur     w9, [x29, #-0xe0]
00694e14:  uzp1     v19.8h, v19.8h, v24.8h
00694e18:  ccmp     x1, x5, #2, lo
00694e1c:  uzp1     v24.8h, v30.8h, v8.8h
00694e20:  uzp1     v26.8h, v26.8h, v26.8h
00694e24:  cset     w9, lo
00694e28:  cmp      x21, x25
00694e2c:  uzp1     v1.8h, v1.8h, v28.8h
00694e30:  uzp1     v27.8h, v27.8h, v31.8h
00694e34:  ccmp     x2, x17, #2, lo
00694e38:  uzp1     v16.8h, v11.8h, v16.8h
00694e3c:  str      w9, [sp, #0x270]
00694e40:  cset     w9, lo
00694e44:  cmp      x21, x26
00694e48:  ccmp     x24, x17, #2, lo
00694e4c:  str      w9, [sp, #0x260]
00694e50:  uzp1     v19.16b, v19.16b, v23.16b
00694e54:  cset     w9, lo
00694e58:  cmp      x21, x20
00694e5c:  uzp1     v23.16b, v26.16b, v24.16b
00694e60:  uzp1     v17.16b, v22.16b, v18.16b
00694e64:  uzp1     v1.16b, v27.16b, v1.16b
00694e68:  ccmp     x16, x17, #2, lo
00694e6c:  uzp1     v2.16b, v16.16b, v25.16b
00694e70:  ldr      q0, [sp, #0x280]
00694e74:  ldur     q16, [x29, #-0xd0]
00694e78:  str      w9, [sp, #0x230]
00694e7c:  cset     w9, lo
00694e80:  cmp      x21, x7
00694e84:  and      v16.16b, v0.16b, v16.16b
00694e88:  ldr      q0, [sp, #0x2c0]
00694e8c:  ccmp     x0, x17, #2, lo
00694e90:  uzp1     v7.16b, v9.16b, v29.16b
00694e94:  str      w9, [sp, #0x220]
00694e98:  cset     w9, lo
00694e9c:  and      v0.16b, v0.16b, v10.16b
00694ea0:  and      v18.16b, v19.16b, v23.16b
00694ea4:  stur     w9, [x29, #-0xd0]
00694ea8:  ldr      x9, [sp, #0x98]
00694eac:  and      v1.16b, v17.16b, v1.16b
00694eb0:  ldp      q19, q17, [sp, #0x290]
00694eb4:  cmp      x21, x9
00694eb8:  cset     w9, lo
00694ebc:  cmp      x21, x11
00694ec0:  ldr      x11, [sp, #0xd0]
00694ec4:  and      v2.16b, v19.16b, v2.16b
00694ec8:  and      v7.16b, v17.16b, v7.16b
00694ecc:  orr      v0.16b, v0.16b, v1.16b
00694ed0:  orr      v1.16b, v16.16b, v18.16b
00694ed4:  cset     w27, lo
00694ed8:  cmp      x21, x11
00694edc:  ldp      x14, x11, [sp, #0xc0]
00694ee0:  cset     w15, lo
00694ee4:  shl      v2.16b, v2.16b, #7
00694ee8:  shl      v7.16b, v7.16b, #7
00694eec:  shl      v0.16b, v0.16b, #7
00694ef0:  shl      v1.16b, v1.16b, #7
00694ef4:  cmp      x21, x11
00694ef8:  cset     w11, lo
00694efc:  cmp      x21, x14
00694f00:  cmlt     v2.16b, v2.16b, #0
00694f04:  adrp     x14, #0x1f2000
00694f08:  cmlt     v7.16b, v7.16b, #0
00694f0c:  cmlt     v0.16b, v0.16b, #0
00694f10:  cmlt     v1.16b, v1.16b, #0
00694f14:  ldr      q16, [x14, #0xd70]
00694f18:  cset     w5, lo
00694f1c:  cmp      x21, x3
00694f20:  and      v2.16b, v2.16b, v16.16b
00694f24:  and      v7.16b, v7.16b, v16.16b
00694f28:  and      v0.16b, v0.16b, v16.16b
00694f2c:  and      v1.16b, v1.16b, v16.16b
00694f30:  cset     w22, lo
00694f34:  cmp      x21, x13
00694f38:  cset     w14, lo
00694f3c:  cmp      x6, x17
00694f40:  ext      v16.16b, v2.16b, v2.16b, #8
00694f44:  ext      v17.16b, v7.16b, v7.16b, #8
00694f48:  ext      v18.16b, v0.16b, v0.16b, #8
00694f4c:  ext      v19.16b, v1.16b, v1.16b, #8
00694f50:  csel     w4, wzr, w9, hs
00694f54:  csel     w30, wzr, w15, hs
00694f58:  csel     w5, wzr, w5, hs
00694f5c:  csel     w15, wzr, w14, hs
00694f60:  cmp      x21, x19
00694f64:  cset     w14, lo
00694f68:  cmp      x1, x17
00694f6c:  zip1     v2.16b, v2.16b, v16.16b
00694f70:  zip1     v7.16b, v7.16b, v17.16b
00694f74:  zip1     v0.16b, v0.16b, v18.16b
00694f78:  zip1     v1.16b, v1.16b, v19.16b
00694f7c:  csel     w9, wzr, w27, hs
00694f80:  csel     w27, wzr, w11, hs
00694f84:  csel     w21, wzr, w22, hs
00694f88:  csel     w17, wzr, w14, hs
00694f8c:  cmp      x2, x26
00694f90:  ccmp     x24, x25, #2, lo
00694f94:  cset     w26, lo
00694f98:  cmp      x2, x20
00694f9c:  addv     h2, v2.8h
00694fa0:  ccmp     x16, x25, #2, lo
00694fa4:  addv     h7, v7.8h
00694fa8:  addv     h0, v0.8h
00694fac:  addv     h1, v1.8h
00694fb0:  cset     w16, lo
00694fb4:  cmp      x2, x7
00694fb8:  ccmp     x0, x25, #2, lo
00694fbc:  fmov     w14, s2
00694fc0:  cset     w2, lo
00694fc4:  cmp      x0, x3
00694fc8:  fmov     w22, s7
00694fcc:  fmov     w25, s0
00694fd0:  fmov     w3, s1
00694fd4:  cset     w11, lo
00694fd8:  cmp      x0, x13
00694fdc:  ccmp     x6, x7, #2, lo
00694fe0:  cset     w20, lo
00694fe4:  cmp      x0, x19
00694fe8:  orr      w13, w25, w22
00694fec:  orr      w14, w3, w14
00694ff0:  cset     w3, lo
00694ff4:  cmp      x1, x7
00694ff8:  orr      w13, w14, w13
00694ffc:  csel     w25, wzr, w11, hs
00695000:  csel     w7, wzr, w3, hs
00695004:  tst      w13, #0xffff
00695008:  mov      x13, xzr
0069500c:  b.ne     #0x695670
00695010:  movi     v12.2s, #0xbf, lsl #24
00695014:  ldp      s14, s13, [sp, #0x58]
00695018:  ldr      w11, [sp, #0x210]
0069501c:  ldr      q20, [sp, #0x60]
00695020:  tbnz     w11, #0, #0x695424
00695024:  ldr      w11, [sp, #0x240]
00695028:  tbnz     w11, #0, #0x695424
0069502c:  ldr      w11, [sp, #0x200]
00695030:  tbnz     w11, #0, #0x695424
00695034:  ldr      w11, [sp, #0x250]
00695038:  tbnz     w11, #0, #0x695424
0069503c:  ldur     w11, [x29, #-0xc0]
00695040:  tbnz     w11, #0, #0x695424
00695044:  ldur     w11, [x29, #-0x90]
00695048:  tbnz     w11, #0, #0x695424
0069504c:  ldur     w11, [x29, #-0xb0]
00695050:  tbnz     w11, #0, #0x695424
00695054:  ldur     w11, [x29, #-0xf0]
00695058:  tbnz     w11, #0, #0x695424
0069505c:  ldr      w11, [sp, #0x2b0]
00695060:  tbnz     w11, #0, #0x695424
00695064:  ldur     w11, [x29, #-0xe0]
00695068:  tbnz     w11, #0, #0x695424
0069506c:  ldr      w11, [sp, #0x270]
00695070:  tbnz     w11, #0, #0x695424
00695074:  ldr      w11, [sp, #0x260]
00695078:  tbnz     w11, #0, #0x695424
0069507c:  ldr      w11, [sp, #0x230]
00695080:  tbnz     w11, #0, #0x695424
00695084:  ldr      w11, [sp, #0x220]
00695088:  tbnz     w11, #0, #0x695424
0069508c:  ldur     w11, [x29, #-0xd0]
00695090:  tbnz     w11, #0, #0x695424
00695094:  tbnz     w4, #0, #0x695424
00695098:  tbnz     w9, #0, #0x695424
0069509c:  tbnz     w30, #0, #0x695424
006950a0:  tbnz     w27, #0, #0x695424
006950a4:  ldr      x1, [sp, #0x140]
006950a8:  ldur     x30, [x29, #-0x98]
006950ac:  tbnz     w5, #0, #0x6956d4
006950b0:  ldr      x0, [sp, #0x178]
006950b4:  tbnz     w21, #0, #0x695610
006950b8:  tbnz     w15, #0, #0x695610
006950bc:  tbnz     w17, #0, #0x695610
006950c0:  ldr      x15, [sp, #0x148]
006950c4:  tbnz     w26, #0, #0x69564c
006950c8:  tbnz     w16, #0, #0x69564c
006950cc:  ldr      x26, [sp, #0x180]
006950d0:  tbnz     w2, #0, #0x6956b0
006950d4:  ldr      x16, [sp, #0x150]
006950d8:  tbnz     w25, #0, #0x69562c
006950dc:  tbnz     w20, #0, #0x69562c
006950e0:  ldp      x27, x24, [sp, #0x1a0]
006950e4:  ldr      x19, [sp, #0x1b8]
006950e8:  ldp      x22, x5, [sp, #0x190]
006950ec:  ldr      w20, [sp, #0x1b4]
006950f0:  ldr      x3, [sp, #0x300]
006950f4:  ldr      x4, [sp, #0x2f8]
006950f8:  ldr      x25, [sp, #0x188]
006950fc:  ldr      x21, [sp, #0x310]
00695100:  ldr      x2, [sp, #0x308]
00695104:  tbnz     w7, #0, #0x695458
00695108:  sbfiz    x11, x3, #3, #0x20
0069510c:  ldp      x14, x24, [sp, #0x20]
00695110:  ldp      x3, x7, [sp, #0x40]
00695114:  mov      x9, xzr
00695118:  add      x13, x1, x11
0069511c:  ldr      x27, [sp, #0x38]
00695120:  ldr      x15, [sp, #0x18]
00695124:  stur     x13, [x29, #-0xb0]
00695128:  ldr      x13, [sp, #0x170]
0069512c:  add      x28, x28, x14
00695130:  ldr      x5, [sp, #0x50]
00695134:  add      x10, x10, x14
00695138:  add      x12, x12, x14
0069513c:  add      x13, x13, x11
00695140:  add      x8, x8, x14
00695144:  add      x23, x23, x14
00695148:  stur     x13, [x29, #-0xc0]
0069514c:  ldr      x13, [sp, #0x160]
00695150:  mov      x4, x24
00695154:  mov      x20, x27
00695158:  mov      w22, #4
0069515c:  mov      x25, x30
00695160:  add      x13, x13, x11
00695164:  mov      w19, #4
00695168:  mov      w14, #4
0069516c:  stur     x13, [x29, #-0xd0]
00695170:  ldr      x13, [sp, #0x158]
00695174:  add      x13, x13, x11
00695178:  stur     x13, [x29, #-0xe0]
0069517c:  ldr      x13, [sp, #0x168]
00695180:  add      x11, x13, x11
00695184:  stur     x11, [x29, #-0xf0]
00695188:  mov      x11, x6
0069518c:  ldur     x13, [x29, #-0xd0]
00695190:  add      x17, x11, x22
00695194:  add      x0, x11, x9
00695198:  ldp      s1, s2, [x17, #-4]
0069519c:  add      x1, x11, x2
006951a0:  add      x16, x13, x9
006951a4:  ldur     x13, [x29, #-0xc0]
006951a8:  ld2      {v24.4s, v25.4s}, [x0]
006951ac:  add      x0, x11, x21
006951b0:  add      x26, x11, x27
006951b4:  add      x30, x11, x19
006951b8:  add      x6, x13, x9
006951bc:  ldur     x13, [x29, #-0xb0]
006951c0:  stur     x16, [x29, #-0x90]
006951c4:  ld2      {v18.4s, v19.4s}, [x6]
006951c8:  add      x27, x27, x24
006951cc:  add      x22, x22, x24
006951d0:  add      x13, x13, x9
006951d4:  add      x21, x21, x24
006951d8:  add      x2, x2, x24
006951dc:  ld2      {v22.4s, v23.4s}, [x13]
006951e0:  ld2      {v16.4s, v17.4s}, [x16]
006951e4:  ld1      {v1.s}[1], [x1], #4
006951e8:  ld1      {v1.s}[2], [x0], #4
006951ec:  fmul     v8.4s, v18.4s, v24.4s
006951f0:  fmul     v9.4s, v19.4s, v25.4s
006951f4:  fmul     v10.4s, v18.4s, v25.4s
006951f8:  fmul     v18.4s, v24.4s, v19.4s
006951fc:  ld1      {v1.s}[3], [x26], #4
00695200:  ld1      {v2.s}[1], [x1]
00695204:  ldp      s7, s0, [x30, #-4]
00695208:  add      x1, x11, x3
0069520c:  sub      x17, x1, #4
00695210:  ldur     x16, [x29, #-0xe0]
00695214:  add      x30, x11, x14
00695218:  ld1      {v2.s}[2], [x0]
0069521c:  add      x0, x11, x20
00695220:  fmul     v19.4s, v16.4s, v1.4s
00695224:  ld1      {v7.s}[1], [x17]
00695228:  add      x17, x16, x9
0069522c:  fmul     v1.4s, v1.4s, v17.4s
00695230:  ld2      {v26.4s, v27.4s}, [x17]
00695234:  fadd     v18.4s, v18.4s, v10.4s
00695238:  add      x14, x14, x15
0069523c:  ld1      {v2.s}[3], [x26]
00695240:  add      x26, x11, x5
00695244:  ld1      {v7.s}[2], [x0], #4
00695248:  fmul     v24.4s, v17.4s, v2.4s
0069524c:  fmul     v2.4s, v16.4s, v2.4s
00695250:  ld1      {v7.s}[3], [x26], #4
00695254:  ld1      {v0.s}[1], [x1]
00695258:  ldp      s28, s31, [x30, #-4]
0069525c:  add      x1, x11, x7
00695260:  sub      x16, x1, #4
00695264:  add      x7, x7, x15
00695268:  ld1      {v0.s}[2], [x0]
0069526c:  fmul     v16.4s, v26.4s, v7.4s
00695270:  fmul     v7.4s, v7.4s, v27.4s
00695274:  ld1      {v28.s}[1], [x16]
00695278:  ldur     x16, [x29, #-0xf0]
0069527c:  fsub     v19.4s, v19.4s, v24.4s
00695280:  fadd     v1.4s, v1.4s, v2.4s
00695284:  add      x0, x16, x9
00695288:  add      x16, x11, x4
0069528c:  ld1      {v0.s}[3], [x26]
00695290:  ld2      {v29.4s, v30.4s}, [x0]
00695294:  ld1      {v28.s}[2], [x16], #4
00695298:  add      x26, x11, x25
0069529c:  add      x9, x9, #0x20
006952a0:  add      x25, x25, x15
006952a4:  fmul     v17.4s, v27.4s, v0.4s
006952a8:  fmul     v0.4s, v26.4s, v0.4s
006952ac:  add      x4, x4, x15
006952b0:  ld1      {v28.s}[3], [x26], #4
006952b4:  ld1      {v31.s}[1], [x1]
006952b8:  ldur     x30, [x29, #-0x98]
006952bc:  ld1      {v31.s}[2], [x16]
006952c0:  fmul     v25.4s, v29.4s, v28.4s
006952c4:  fmul     v26.4s, v28.4s, v30.4s
006952c8:  fsub     v28.4s, v8.4s, v9.4s
006952cc:  fsub     v16.4s, v16.4s, v17.4s
006952d0:  fadd     v2.4s, v7.4s, v0.4s
006952d4:  add      x5, x5, x30
006952d8:  add      x19, x19, x30
006952dc:  add      x20, x20, x30
006952e0:  ld1      {v31.s}[3], [x26]
006952e4:  add      x3, x3, x30
006952e8:  fadd     v24.4s, v19.4s, v16.4s
006952ec:  fsub     v0.4s, v19.4s, v16.4s
006952f0:  fmul     v11.4s, v30.4s, v31.4s
006952f4:  fmul     v27.4s, v29.4s, v31.4s
006952f8:  fmul     v29.4s, v0.4s, v6.s[0]
006952fc:  fmul     v0.4s, v0.4s, v4.s[0]
00695300:  fsub     v17.4s, v25.4s, v11.4s
00695304:  fadd     v7.4s, v26.4s, v27.4s
00695308:  fadd     v26.4s, v1.4s, v2.4s
0069530c:  fsub     v1.4s, v1.4s, v2.4s
00695310:  fmul     v2.4s, v24.4s, v5.s[0]
00695314:  fadd     v25.4s, v28.4s, v17.4s
00695318:  fadd     v27.4s, v18.4s, v7.4s
0069531c:  fsub     v7.4s, v18.4s, v7.4s
00695320:  fmul     v18.4s, v26.4s, v5.s[0]
00695324:  fsub     v17.4s, v28.4s, v17.4s
00695328:  fmul     v28.4s, v1.4s, v6.s[0]
0069532c:  fmul     v1.4s, v1.4s, v4.s[0]
00695330:  fmul     v16.4s, v25.4s, v3.s[0]
00695334:  fmul     v19.4s, v27.4s, v3.s[0]
00695338:  fadd     v30.4s, v24.4s, v25.4s
0069533c:  fmul     v31.4s, v7.4s, v4.s[0]
00695340:  fmul     v7.4s, v7.4s, v6.s[0]
00695344:  fadd     v2.4s, v2.4s, v16.4s
00695348:  fadd     v16.4s, v26.4s, v27.4s
0069534c:  fadd     v18.4s, v18.4s, v19.4s
00695350:  fadd     v28.4s, v28.4s, v31.4s
00695354:  fadd     v30.4s, v22.4s, v30.4s
00695358:  fmul     v19.4s, v17.4s, v4.s[0]
0069535c:  fmul     v17.4s, v17.4s, v6.s[0]
00695360:  fsub     v1.4s, v1.4s, v7.4s
00695364:  fadd     v31.4s, v23.4s, v16.4s
00695368:  fadd     v16.4s, v23.4s, v18.4s
0069536c:  fmul     v18.4s, v24.4s, v3.s[0]
00695370:  fmul     v24.4s, v25.4s, v5.s[0]
00695374:  fmul     v25.4s, v26.4s, v3.s[0]
00695378:  fmul     v26.4s, v27.4s, v5.s[0]
0069537c:  fadd     v2.4s, v22.4s, v2.4s
00695380:  fadd     v19.4s, v29.4s, v19.4s
00695384:  fsub     v0.4s, v17.4s, v0.4s
00695388:  st2      {v30.4s, v31.4s}, [x13]
0069538c:  ldur     x13, [x29, #-0x90]
00695390:  fadd     v18.4s, v18.4s, v24.4s
00695394:  fadd     v24.4s, v25.4s, v26.4s
00695398:  fsub     v8.4s, v2.4s, v28.4s
0069539c:  fadd     v25.4s, v28.4s, v2.4s
006953a0:  fadd     v9.4s, v19.4s, v16.4s
006953a4:  fsub     v26.4s, v16.4s, v19.4s
006953a8:  fadd     v7.4s, v22.4s, v18.4s
006953ac:  fadd     v2.4s, v23.4s, v24.4s
006953b0:  st2      {v8.4s, v9.4s}, [x6]
006953b4:  fadd     v16.4s, v1.4s, v7.4s
006953b8:  fsub     v18.4s, v7.4s, v1.4s
006953bc:  fadd     v17.4s, v0.4s, v2.4s
006953c0:  fsub     v19.4s, v2.4s, v0.4s
006953c4:  st2      {v25.4s, v26.4s}, [x0]
006953c8:  st2      {v16.4s, v17.4s}, [x13]
006953cc:  ldur     x13, [x29, #-0xf8]
006953d0:  cmp      x13, x9
006953d4:  st2      {v18.4s, v19.4s}, [x17]
006953d8:  b.ne     #0x69518c
006953dc:  ldp      x5, x27, [sp, #0x198]
006953e0:  mov      x6, x11
006953e4:  ldr      x9, [sp, #0x30]
006953e8:  ldp      x1, x15, [sp, #0x140]
006953ec:  ldp      x25, x22, [sp, #0x188]
006953f0:  ldr      x19, [sp, #0x1b8]
006953f4:  cmp      x9, x5
006953f8:  and      x13, x5, #0x7ffffffc
006953fc:  ldr      w20, [sp, #0x1b4]
00695400:  ldp      x0, x26, [sp, #0x178]
00695404:  ldr      x24, [sp, #0x1a8]
00695408:  ldr      x3, [sp, #0x300]
0069540c:  ldr      x4, [sp, #0x2f8]
00695410:  ldr      x16, [sp, #0x150]
00695414:  ldr      x21, [sp, #0x310]
00695418:  ldr      x2, [sp, #0x308]
0069541c:  b.ne     #0x695458
00695420:  b        #0x6955fc
00695424:  ldp      x27, x24, [sp, #0x1a0]
00695428:  ldr      x19, [sp, #0x1b8]
0069542c:  ldp      x22, x5, [sp, #0x190]
00695430:  ldr      w20, [sp, #0x1b4]
00695434:  ldr      x3, [sp, #0x300]
00695438:  ldr      x4, [sp, #0x2f8]
0069543c:  ldr      x0, [sp, #0x178]
00695440:  ldr      x1, [sp, #0x140]
00695444:  ldp      x26, x25, [sp, #0x180]
00695448:  ldp      x15, x16, [sp, #0x148]
0069544c:  ldr      x21, [sp, #0x310]
00695450:  ldr      x2, [sp, #0x308]
00695454:  nop      
00695458:  madd     x9, x21, x13, x6
0069545c:  madd     x11, x2, x13, x6
00695460:  madd     x14, x15, x13, x6
00695464:  madd     x17, x16, x13, x6
00695468:  sub      x13, x5, x13
0069546c:  ldr      d0, [x17]
00695470:  ldr      d7, [x11]
00695474:  add      x11, x11, x2
00695478:  ldr      d17, [x14]
0069547c:  ldr      d23, [x9]
00695480:  add      x9, x9, x21
00695484:  ldr      d1, [x12]
00695488:  ldr      d25, [x28]
0069548c:  zip2     v22.2s, v7.2s, v0.2s
00695490:  zip2     v27.2s, v23.2s, v17.2s
00695494:  ldr      d2, [x8]
00695498:  ldr      d16, [x10]
0069549c:  mov      v24.16b, v1.16b
006954a0:  mov      v28.16b, v25.16b
006954a4:  zip1     v18.2s, v0.2s, v1.2s
006954a8:  ext      v19.8b, v2.8b, v7.8b, #4
006954ac:  zip1     v7.2s, v7.2s, v2.2s
006954b0:  ext      v0.8b, v1.8b, v0.8b, #4
006954b4:  ext      v26.8b, v16.8b, v23.8b, #4
006954b8:  zip1     v23.2s, v23.2s, v16.2s
006954bc:  ext      v29.8b, v25.8b, v17.8b, #4
006954c0:  mov      v24.s[1], v2.s[1]
006954c4:  mov      v2.s[1], v1.s[1]
006954c8:  rev64    v1.2s, v22.2s
006954cc:  mov      v28.s[1], v16.s[1]
006954d0:  zip1     v17.2s, v17.2s, v25.2s
006954d4:  mov      v16.s[1], v25.s[1]
006954d8:  rev64    v25.2s, v27.2s
006954dc:  fmul     v18.2s, v18.2s, v19.2s
006954e0:  fmul     v0.2s, v7.2s, v0.2s
006954e4:  subs     x13, x13, #1
006954e8:  add      x14, x14, x15
006954ec:  add      x17, x17, x16
006954f0:  fmul     v19.2s, v24.2s, v22.2s
006954f4:  fmul     v1.2s, v2.2s, v1.2s
006954f8:  fmul     v2.2s, v23.2s, v29.2s
006954fc:  fmul     v7.2s, v28.2s, v27.2s
00695500:  fmul     v17.2s, v17.2s, v26.2s
00695504:  fmul     v16.2s, v16.2s, v25.2s
00695508:  fadd     v22.2s, v0.2s, v19.2s
0069550c:  fsub     v0.2s, v0.2s, v19.2s
00695510:  fadd     v19.2s, v2.2s, v7.2s
00695514:  fsub     v2.2s, v2.2s, v7.2s
00695518:  fadd     v7.2s, v18.2s, v1.2s
0069551c:  fsub     v1.2s, v18.2s, v1.2s
00695520:  fadd     v18.2s, v17.2s, v16.2s
00695524:  fsub     v16.2s, v17.2s, v16.2s
00695528:  ext      v17.8b, v0.8b, v7.8b, #4
0069552c:  ext      v23.8b, v16.8b, v19.8b, #4
00695530:  ext      v24.8b, v1.8b, v22.8b, #4
00695534:  ext      v25.8b, v2.8b, v18.8b, #4
00695538:  mov      v7.s[1], v1.s[1]
0069553c:  mov      v22.s[1], v0.s[1]
00695540:  mov      v19.s[1], v2.s[1]
00695544:  mov      v18.s[1], v16.s[1]
00695548:  ldr      d1, [x23]
0069554c:  fadd     v0.2s, v17.2s, v23.2s
00695550:  fadd     v2.2s, v24.2s, v25.2s
00695554:  mov      s23, v1.s[1]
00695558:  fsub     v7.2s, v7.2s, v19.2s
0069555c:  fsub     v16.2s, v22.2s, v18.2s
00695560:  fmul     s17, s3, s0
00695564:  fmul     s18, s5, s2
00695568:  fmul     s19, s3, v0.s[1]
0069556c:  fmul     s22, s5, v2.s[1]
00695570:  mov      s24, v2.s[1]
00695574:  mov      s25, v0.s[1]
00695578:  fmul     v26.2s, v0.2s, v5.s[0]
0069557c:  fmul     v27.2s, v2.2s, v3.s[0]
00695580:  fmul     s28, s4, s7
00695584:  fmul     s29, s6, s16
00695588:  fadd     v0.2s, v2.2s, v0.2s
0069558c:  fmul     v2.2s, v20.2s, v16.2s
00695590:  fadd     s17, s18, s17
00695594:  fmul     s18, s4, v16.s[1]
00695598:  fadd     s19, s22, s19
0069559c:  fmul     s22, s6, v7.s[1]
006955a0:  fmul     v7.2s, v21.2s, v7.2s
006955a4:  fadd     s16, s24, s25
006955a8:  fadd     v24.2s, v27.2s, v26.2s
006955ac:  fadd     s25, s29, s28
006955b0:  fadd     v0.2s, v1.2s, v0.2s
006955b4:  fadd     s17, s1, s17
006955b8:  fadd     s18, s22, s18
006955bc:  fadd     s19, s23, s19
006955c0:  fsub     v2.2s, v2.2s, v7.2s
006955c4:  fadd     s16, s23, s16
006955c8:  fadd     v1.2s, v1.2s, v24.2s
006955cc:  fsub     s7, s17, s25
006955d0:  fadd     s17, s25, s17
006955d4:  fadd     s22, s18, s19
006955d8:  stp      s0, s16, [x23], #8
006955dc:  fsub     s0, s19, s18
006955e0:  fadd     v16.2s, v2.2s, v1.2s
006955e4:  fsub     v1.2s, v1.2s, v2.2s
006955e8:  stp      s7, s22, [x8], #8
006955ec:  stp      s17, s0, [x28], #8
006955f0:  str      d16, [x12], #8
006955f4:  str      d1, [x10], #8
006955f8:  b.ne     #0x69546c
006955fc:  add      x4, x4, #1
00695600:  add      w3, w3, w20
00695604:  cmp      x4, x27
00695608:  b.ne     #0x694758
0069560c:  b        #0x694354
00695610:  ldp      x27, x24, [sp, #0x1a0]
00695614:  ldr      x19, [sp, #0x1b8]
00695618:  ldp      x22, x5, [sp, #0x190]
0069561c:  ldr      w20, [sp, #0x1b4]
00695620:  ldr      x3, [sp, #0x300]
00695624:  ldr      x4, [sp, #0x2f8]
00695628:  b        #0x695444
0069562c:  ldp      x27, x24, [sp, #0x1a0]
00695630:  ldr      x19, [sp, #0x1b8]
00695634:  ldp      x22, x5, [sp, #0x190]
00695638:  ldr      w20, [sp, #0x1b4]
0069563c:  ldr      x3, [sp, #0x300]
00695640:  ldr      x4, [sp, #0x2f8]
00695644:  ldr      x25, [sp, #0x188]
00695648:  b        #0x69544c
0069564c:  ldp      x27, x24, [sp, #0x1a0]
00695650:  ldr      x19, [sp, #0x1b8]
00695654:  ldp      x22, x5, [sp, #0x190]
00695658:  ldr      w20, [sp, #0x1b4]
0069565c:  ldr      x3, [sp, #0x300]
00695660:  ldr      x4, [sp, #0x2f8]
00695664:  ldr      x16, [sp, #0x150]
00695668:  ldp      x26, x25, [sp, #0x180]
0069566c:  b        #0x69544c
00695670:  ldp      s14, s13, [sp, #0x58]
00695674:  movi     v12.2s, #0xbf, lsl #24
00695678:  ldp      x27, x24, [sp, #0x1a0]
0069567c:  ldr      x19, [sp, #0x1b8]
00695680:  ldp      x22, x5, [sp, #0x190]
00695684:  ldr      w20, [sp, #0x1b4]
00695688:  ldr      x3, [sp, #0x300]
0069568c:  ldr      x4, [sp, #0x2f8]
00695690:  ldr      x0, [sp, #0x178]
00695694:  ldr      x16, [sp, #0x150]
00695698:  ldr      x21, [sp, #0x310]
0069569c:  ldr      x2, [sp, #0x308]
006956a0:  ldr      q20, [sp, #0x60]
006956a4:  ldp      x26, x25, [sp, #0x180]
006956a8:  ldp      x1, x15, [sp, #0x140]
006956ac:  b        #0x695458
006956b0:  ldp      x27, x24, [sp, #0x1a0]
006956b4:  ldr      x19, [sp, #0x1b8]
006956b8:  ldp      x22, x5, [sp, #0x190]
006956bc:  ldr      w20, [sp, #0x1b4]
006956c0:  ldr      x3, [sp, #0x300]
006956c4:  ldr      x4, [sp, #0x2f8]
006956c8:  ldr      x25, [sp, #0x188]
006956cc:  ldr      x16, [sp, #0x150]
006956d0:  b        #0x69544c
006956d4:  ldp      x27, x24, [sp, #0x1a0]
006956d8:  ldr      x19, [sp, #0x1b8]
006956dc:  ldp      x22, x5, [sp, #0x190]
006956e0:  ldr      w20, [sp, #0x1b4]
006956e4:  ldr      x3, [sp, #0x300]
006956e8:  ldr      x4, [sp, #0x2f8]
006956ec:  ldr      x0, [sp, #0x178]
006956f0:  b        #0x695444
006956f4:  cmp      w24, #4
006956f8:  b.ne     #0x6959cc
006956fc:  sub      x8, x29, #0x68
00695700:  add      x9, x1, #0x20
00695704:  ldr      w8, [x8, x19, lsl #2]
00695708:  cmp      w8, #1
0069570c:  b.lt     #0x694354
00695710:  ldp      s0, s1, [x9, #8]
00695714:  sub      x10, x9, #0x1c
00695718:  ldp      s3, s2, [x9, #0x18]
0069571c:  subs     w8, w8, #1
00695720:  ldp      s19, s20, [x9, #-0x10]
00695724:  fadd     s4, s0, s1
00695728:  fsub     s0, s1, s0
0069572c:  fsub     s5, s2, s3
00695730:  fadd     s2, s2, s3
00695734:  ldur     q3, [x9, #-8]
00695738:  mov      v7.16b, v3.16b
0069573c:  fmul     s1, s4, s13
00695740:  fmul     s0, s0, s13
00695744:  fmul     s4, s5, s13
00695748:  ldp      s5, s6, [x9, #-0x18]
0069574c:  fmul     s2, s2, s14
00695750:  fsub     s16, s5, s1
00695754:  fadd     s1, s5, s1
00695758:  ldur     d5, [x9, #-0x20]
0069575c:  mov      v7.s[0], v4.s[0]
00695760:  fsub     s17, s6, s0
00695764:  fadd     s0, s0, s6
00695768:  mov      v21.d[1], v5.d[0]
0069576c:  ldp      s18, s6, [x9, #0x10]
00695770:  ld1      {v5.s}[1], [x10]
00695774:  mov      v7.s[1], v2.s[0]
00695778:  stp      s16, s17, [x9, #8]
0069577c:  fsub     s16, s19, s6
00695780:  fadd     s17, s18, s20
00695784:  stp      s1, s0, [x9, #-0x18]
00695788:  fadd     s0, s6, s19
0069578c:  ldr      d1, [x9]
00695790:  fsub     s6, s20, s18
00695794:  fsub     v18.4s, v21.4s, v3.4s
00695798:  fadd     v7.4s, v3.4s, v7.4s
0069579c:  fadd     v1.2s, v1.2s, v5.2s
006957a0:  ldur     s5, [x9, #-4]
006957a4:  fsub     s3, s3, s4
006957a8:  stp      s16, s17, [x9, #0x10]
006957ac:  fsub     s2, s5, s2
006957b0:  stp      s0, s6, [x9, #-0x10]
006957b4:  mov      v7.d[1], v18.d[1]
006957b8:  stur     d1, [x9, #-0x20]
006957bc:  stp      s3, s2, [x9, #0x18]
006957c0:  stur     q7, [x9, #-8]
006957c4:  add      x9, x9, #0x40
006957c8:  b.ne     #0x695710
006957cc:  b        #0x694354
006957d0:  sub      x8, x29, #0x68
006957d4:  cmp      w24, #1
006957d8:  ldr      w8, [x8, x19, lsl #2]
006957dc:  b.ne     #0x695840
006957e0:  cmp      w8, #1
006957e4:  b.lt     #0x694354
006957e8:  mov      x9, x1
006957ec:  ldp      d3, d0, [x9]
006957f0:  subs     w8, w8, #1
006957f4:  ldp      d4, d1, [x9, #0x10]
006957f8:  mov      v3.d[1], v3.d[0]
006957fc:  fsub     v2.4s, v0.4s, v1.4s
00695800:  mov      v4.d[1], v4.d[0]
00695804:  fadd     v0.4s, v0.4s, v1.4s
00695808:  rev64    v5.4s, v2.4s
0069580c:  fadd     v1.4s, v3.4s, v4.4s
00695810:  fsub     v3.4s, v3.4s, v4.4s
00695814:  zip1     v2.4s, v2.4s, v5.4s
00695818:  mov      v1.d[1], v3.d[1]
0069581c:  mov      v2.d[0], v0.d[0]
00695820:  fsub     v0.4s, v1.4s, v2.4s
00695824:  fadd     v1.4s, v1.4s, v2.4s
00695828:  mov      v2.16b, v0.16b
0069582c:  mov      v2.s[3], v1.s[3]
00695830:  mov      v1.s[3], v0.s[3]
00695834:  stp      q1, q2, [x9], #0x20
00695838:  b.ne     #0x6957ec
0069583c:  b        #0x694354
00695840:  cmp      w8, #1
00695844:  b.lt     #0x694354
00695848:  cmp      w24, #1
0069584c:  b.lt     #0x694354
00695850:  ldr      w9, [sp, #0x14]
00695854:  lsl      w10, w24, #1
00695858:  sxtw     x14, w24
0069585c:  mov      w16, #4
00695860:  lsl      w9, w8, w9
00695864:  sxtw     x13, w10
00695868:  orr      x14, x16, x14, lsl #3
0069586c:  sxtw     x11, w9
00695870:  add      w9, w10, w24
00695874:  orr      x13, x16, x13, lsl #3
00695878:  sxtw     x15, w9
0069587c:  add      x12, x11, x11, lsl #1
00695880:  lsl      x9, x11, #4
00695884:  lsl      x10, x11, #3
00695888:  lsl      x11, x12, #3
0069588c:  orr      x12, x16, x15, lsl #3
00695890:  mov      x15, xzr
00695894:  ldur     x17, [x29, #-0x100]
00695898:  mul      w16, w20, w15
0069589c:  mov      w7, w24
006958a0:  ldr      x17, [x17, #0x38]
006958a4:  add      x16, x1, w16, sxtw #3
006958a8:  add      x17, x17, #4
006958ac:  mov      x6, x17
006958b0:  mov      x2, x17
006958b4:  add      x3, x16, x14
006958b8:  add      x4, x16, x13
006958bc:  add      x5, x16, x12
006958c0:  ldp      s0, s1, [x2, #-4]
006958c4:  subs     w7, w7, #1
006958c8:  ldp      s2, s3, [x3, #-4]
006958cc:  add      x2, x2, x10
006958d0:  ldp      s4, s5, [x6, #-4]
006958d4:  add      x6, x6, x9
006958d8:  ldp      s6, s7, [x4, #-4]
006958dc:  ldp      s18, s19, [x5, #-4]
006958e0:  fmul     s16, s2, s0
006958e4:  ldp      s20, s21, [x17, #-4]
006958e8:  fmul     s17, s3, s1
006958ec:  fmul     s1, s2, s1
006958f0:  fmul     s0, s0, s3
006958f4:  add      x17, x17, x11
006958f8:  fmul     s2, s6, s4
006958fc:  fmul     s3, s7, s5
00695900:  fmul     s5, s6, s5
00695904:  fmul     s4, s4, s7
00695908:  fmul     s6, s18, s20
0069590c:  fmul     s7, s19, s21
00695910:  fsub     s16, s16, s17
00695914:  fmul     s18, s18, s21
00695918:  fmul     s19, s20, s19
0069591c:  fadd     s0, s0, s1
00695920:  fsub     s2, s2, s3
00695924:  fadd     s1, s4, s5
00695928:  fsub     s3, s6, s7
0069592c:  ldp      s5, s6, [x16]
00695930:  fadd     s4, s19, s18
00695934:  fadd     s7, s2, s5
00695938:  fadd     s18, s1, s6
0069593c:  fsub     s2, s5, s2
00695940:  fadd     s17, s16, s3
00695944:  fsub     s1, s6, s1
00695948:  fsub     s3, s16, s3
0069594c:  fadd     s19, s0, s4
00695950:  fsub     s0, s0, s4
00695954:  fsub     s4, s7, s17
00695958:  fadd     s6, s7, s17
0069595c:  fsub     s5, s18, s19
00695960:  fadd     s7, s19, s18
00695964:  fadd     s16, s2, s0
00695968:  fsub     s0, s2, s0
0069596c:  stp      s4, s5, [x4, #-4]
00695970:  fsub     s4, s1, s3
00695974:  fadd     s1, s1, s3
00695978:  stp      s6, s7, [x16], #8
0069597c:  stp      s16, s4, [x3, #-4]
00695980:  stp      s0, s1, [x5, #-4]
00695984:  b.ne     #0x6958b4
00695988:  add      x15, x15, #1
0069598c:  cmp      x15, x8
00695990:  b.ne     #0x695894
00695994:  b        #0x694354
00695998:  add      sp, sp, #0x410
0069599c:  ldp      x20, x19, [sp, #0x90]
006959a0:  ldp      x22, x21, [sp, #0x80]
006959a4:  ldp      x24, x23, [sp, #0x70]
006959a8:  ldp      x26, x25, [sp, #0x60]
006959ac:  ldp      x28, x27, [sp, #0x50]
006959b0:  ldp      x29, x30, [sp, #0x40]
006959b4:  ldp      d9, d8, [sp, #0x30]
006959b8:  ldp      d11, d10, [sp, #0x20]
006959bc:  ldp      d13, d12, [sp, #0x10]
006959c0:  ldp      d15, d14, [sp], #0xa0
006959c4:  autiasp  
006959c8:  ret      
006959cc:  adrp     x0, #0x1ea000
006959d0:  add      x0, x0, #0x969
006959d4:  adrp     x1, #0x1c2000
006959d8:  add      x1, x1, #0xa56
006959dc:  mov      w2, #0x50
006959e0:  bl       #0x67be00
006959e4:  brk      #0x5512

; ===== 007c7020  FUN_007c7020  (252 bytes) =====
007c7020:  bti      c
007c7024:  sub      w8, w3, #1
007c7028:  cmp      w8, #1
007c702c:  b.lt     #0x7c70d0
007c7030:  sub      w9, w3, #2
007c7034:  cmp      w9, #0x1e
007c7038:  b.lo     #0x7c7060
007c703c:  lsr      w9, w9, #1
007c7040:  add      x10, x0, w9, uxtw #2
007c7044:  add      x10, x10, #4
007c7048:  cmp      x2, x10
007c704c:  b.hs     #0x7c70e0
007c7050:  add      x10, x2, w9, uxtw #1
007c7054:  add      x10, x10, #2
007c7058:  cmp      x0, x10
007c705c:  b.hs     #0x7c70e0
007c7060:  mov      w11, wzr
007c7064:  mov      x10, x0
007c7068:  mov      x9, x2
007c706c:  ldrb     w12, [x10]
007c7070:  ldrb     w13, [x10, #1]
007c7074:  add      w11, w11, #2
007c7078:  cmp      w11, w8
007c707c:  add      w12, w12, w13
007c7080:  add      w12, w12, #1
007c7084:  lsr      w12, w12, #1
007c7088:  strb     w12, [x9]
007c708c:  ldrb     w12, [x10, #2]
007c7090:  ldrb     w13, [x10, #3]
007c7094:  add      x10, x10, #4
007c7098:  add      w12, w12, w13
007c709c:  add      w12, w12, #1
007c70a0:  lsr      w12, w12, #1
007c70a4:  strb     w12, [x9, #1]
007c70a8:  add      x9, x9, #2
007c70ac:  b.lt     #0x7c706c
007c70b0:  tbz      w3, #0, #0x7c70cc
007c70b4:  ldrb     w8, [x10]
007c70b8:  ldrb     w10, [x10, #1]
007c70bc:  add      w8, w8, w10
007c70c0:  add      w8, w8, #1
007c70c4:  lsr      w8, w8, #1
007c70c8:  strb     w8, [x9]
007c70cc:  ret      
007c70d0:  mov      x9, x2
007c70d4:  mov      x10, x0
007c70d8:  tbnz     w3, #0, #0x7c70b4
007c70dc:  b        #0x7c70cc
007c70e0:  add      w12, w9, #1
007c70e4:  and      x13, x12, #0xfffffff0
007c70e8:  and      x14, x12, #0xfffffff0
007c70ec:  lsl      w11, w13, #1
007c70f0:  add      x10, x0, x13, lsl #2
007c70f4:  add      x9, x2, x13, lsl #1
007c70f8:  ld4      {v0.16b, v1.16b, v2.16b, v3.16b}, [x0], #64
007c70fc:  subs     x14, x14, #0x10
007c7100:  urhadd   v4.16b, v0.16b, v1.16b
007c7104:  urhadd   v5.16b, v2.16b, v3.16b
007c7108:  st2      {v4.16b, v5.16b}, [x2], #32
007c710c:  b.ne     #0x7c70f8
007c7110:  cmp      x13, x12
007c7114:  b.ne     #0x7c706c
007c7118:  b        #0x7c70b0

; ===== 007c85cc  FUN_007c85cc  (300 bytes) =====
007c85cc:  bti      c
007c85d0:  subs     w8, w3, #1
007c85d4:  b.lt     #0x7c8650
007c85d8:  cmp      w3, #8
007c85dc:  b.lo     #0x7c8600
007c85e0:  add      x9, x0, w8, uxtw #2
007c85e4:  add      x9, x9, #4
007c85e8:  cmp      x2, x9
007c85ec:  b.hs     #0x7c8654
007c85f0:  add      x8, x2, w8, uxtw #1
007c85f4:  add      x8, x8, #2
007c85f8:  cmp      x0, x8
007c85fc:  b.hs     #0x7c8654
007c8600:  mov      w11, wzr
007c8604:  mov      x8, x0
007c8608:  mov      x9, x2
007c860c:  sub      w10, w3, w11
007c8610:  ldrb     w11, [x8]
007c8614:  ldrb     w12, [x8, #2]
007c8618:  subs     w10, w10, #1
007c861c:  add      w11, w11, w12
007c8620:  add      w11, w11, #1
007c8624:  lsr      w11, w11, #1
007c8628:  strb     w11, [x9]
007c862c:  ldrb     w11, [x8, #1]
007c8630:  ldrb     w12, [x8, #3]
007c8634:  add      x8, x8, #4
007c8638:  add      w11, w11, w12
007c863c:  add      w11, w11, #1
007c8640:  lsr      w11, w11, #1
007c8644:  strb     w11, [x9, #1]
007c8648:  add      x9, x9, #2
007c864c:  b.ne     #0x7c8610
007c8650:  ret      
007c8654:  cmp      w3, #0x10
007c8658:  mov      w10, w3
007c865c:  b.hs     #0x7c86b4
007c8660:  mov      x12, xzr
007c8664:  and      x11, x10, #0x7ffffff8
007c8668:  add      x13, x2, x12, lsl #1
007c866c:  add      x14, x0, x12, lsl #2
007c8670:  add      x8, x0, x11, lsl #2
007c8674:  add      x9, x2, x11, lsl #1
007c8678:  sub      x12, x12, x11
007c867c:  ld4      {v0.8b, v1.8b, v2.8b, v3.8b}, [x14], #32
007c8680:  adds     x12, x12, #8
007c8684:  urhadd   v4.8b, v0.8b, v2.8b
007c8688:  urhadd   v0.8b, v1.8b, v3.8b
007c868c:  ushll    v1.8h, v4.8b, #0
007c8690:  ushll    v0.8h, v0.8b, #0
007c8694:  zip2     v2.8h, v1.8h, v0.8h
007c8698:  zip1     v0.8h, v1.8h, v0.8h
007c869c:  uzp1     v0.16b, v0.16b, v2.16b
007c86a0:  str      q0, [x13], #0x10
007c86a4:  b.ne     #0x7c867c
007c86a8:  cmp      x11, x10
007c86ac:  b.ne     #0x7c860c
007c86b0:  b        #0x7c8650
007c86b4:  and      x12, x10, #0x7ffffff0
007c86b8:  and      x8, x10, #0x7ffffff0
007c86bc:  mov      x9, x0
007c86c0:  mov      x11, x2
007c86c4:  ld4      {v0.16b, v1.16b, v2.16b, v3.16b}, [x9], #64
007c86c8:  subs     x8, x8, #0x10
007c86cc:  urhadd   v4.16b, v0.16b, v2.16b
007c86d0:  urhadd   v5.16b, v1.16b, v3.16b
007c86d4:  st2      {v4.16b, v5.16b}, [x11], #32
007c86d8:  b.ne     #0x7c86c4
007c86dc:  cmp      x12, x10
007c86e0:  b.eq     #0x7c8650
007c86e4:  tbnz     w10, #3, #0x7c8664
007c86e8:  add      x8, x0, x12, lsl #2
007c86ec:  add      x9, x2, x12, lsl #1
007c86f0:  mov      w11, w12
007c86f4:  b        #0x7c860c

; ===== 007c86f8  FUN_007c86f8  (472 bytes) =====
007c86f8:  bti      c
007c86fc:  subs     w8, w3, #1
007c8700:  b.lt     #0x7c8784
007c8704:  cmp      w3, #8
007c8708:  b.hs     #0x7c8788
007c870c:  mov      w11, wzr
007c8710:  mov      x12, x0
007c8714:  mov      x9, x2
007c8718:  sub      w8, w3, w11
007c871c:  add      x10, x12, #1
007c8720:  ldurb    w11, [x10, #-1]
007c8724:  ldrb     w12, [x10, #1]
007c8728:  add      x13, x10, x1
007c872c:  ldurb    w14, [x13, #-1]
007c8730:  ldrb     w15, [x13, #1]
007c8734:  subs     w8, w8, #1
007c8738:  add      w11, w11, w12
007c873c:  add      w11, w11, w14
007c8740:  add      w11, w11, w15
007c8744:  add      w11, w11, #2
007c8748:  lsr      w11, w11, #2
007c874c:  strb     w11, [x9]
007c8750:  ldrb     w11, [x10]
007c8754:  ldrb     w12, [x10, #2]
007c8758:  ldrb     w14, [x13]
007c875c:  ldrb     w13, [x13, #2]
007c8760:  add      x10, x10, #4
007c8764:  add      w11, w11, w12
007c8768:  add      w11, w11, w14
007c876c:  add      w11, w11, w13
007c8770:  add      w11, w11, #2
007c8774:  lsr      w11, w11, #2
007c8778:  strb     w11, [x9, #1]
007c877c:  add      x9, x9, #2
007c8780:  b.ne     #0x7c8720
007c8784:  ret      
007c8788:  ubfiz    x9, x8, #2, #0x20
007c878c:  add      x8, x2, w8, uxtw #1
007c8790:  add      x12, x0, x1
007c8794:  add      x10, x0, x9
007c8798:  add      x11, x8, #2
007c879c:  add      x8, x12, x9
007c87a0:  add      x10, x10, #4
007c87a4:  add      x9, x8, #4
007c87a8:  cmp      x2, x10
007c87ac:  ccmp     x0, x11, #2, lo
007c87b0:  cset     w8, lo
007c87b4:  cmp      x12, x11
007c87b8:  mov      w11, wzr
007c87bc:  ccmp     x2, x9, #2, lo
007c87c0:  b.lo     #0x7c8710
007c87c4:  tbnz     w8, #0, #0x7c8710
007c87c8:  cmp      w3, #0x10
007c87cc:  mov      w8, w3
007c87d0:  b.hs     #0x7c884c
007c87d4:  mov      x10, xzr
007c87d8:  movi     v0.8h, #2
007c87dc:  and      x11, x8, #0x7ffffff8
007c87e0:  add      x13, x2, x10, lsl #1
007c87e4:  add      x12, x0, x11, lsl #2
007c87e8:  add      x9, x2, x11, lsl #1
007c87ec:  add      x14, x0, x10, lsl #2
007c87f0:  sub      x10, x10, x11
007c87f4:  add      x15, x14, x1
007c87f8:  ld4      {v1.8b, v2.8b, v3.8b, v4.8b}, [x14], #32
007c87fc:  adds     x10, x10, #8
007c8800:  ld4      {v16.8b, v17.8b, v18.8b, v19.8b}, [x15]
007c8804:  uaddl    v5.8h, v1.8b, v3.8b
007c8808:  uaddl    v1.8h, v2.8b, v4.8b
007c880c:  uaddw    v2.8h, v5.8h, v16.8b
007c8810:  uaddw    v1.8h, v1.8h, v17.8b
007c8814:  uaddw    v2.8h, v2.8h, v18.8b
007c8818:  uaddw    v1.8h, v1.8h, v19.8b
007c881c:  add      v2.8h, v2.8h, v0.8h
007c8820:  add      v1.8h, v1.8h, v0.8h
007c8824:  ushr     v2.8h, v2.8h, #2
007c8828:  ushr     v1.8h, v1.8h, #2
007c882c:  zip2     v3.8h, v2.8h, v1.8h
007c8830:  zip1     v1.8h, v2.8h, v1.8h
007c8834:  uzp1     v1.16b, v1.16b, v3.16b
007c8838:  str      q1, [x13], #0x10
007c883c:  b.ne     #0x7c87f4
007c8840:  cmp      x11, x8
007c8844:  b.ne     #0x7c8718
007c8848:  b        #0x7c8784
007c884c:  and      x10, x8, #0x7ffffff0
007c8850:  and      x9, x8, #0x7ffffff0
007c8854:  mov      x11, x0
007c8858:  mov      x12, x2
007c885c:  add      x13, x11, x1
007c8860:  ld4      {v0.16b, v1.16b, v2.16b, v3.16b}, [x11], #64
007c8864:  subs     x9, x9, #0x10
007c8868:  ld4      {v4.16b, v5.16b, v6.16b, v7.16b}, [x13]
007c886c:  uaddl    v16.8h, v0.8b, v2.8b
007c8870:  uaddl2   v17.8h, v0.16b, v2.16b
007c8874:  uaddl    v18.8h, v1.8b, v3.8b
007c8878:  uaddl2   v0.8h, v1.16b, v3.16b
007c887c:  uaddw    v16.8h, v16.8h, v4.8b
007c8880:  uaddw2   v17.8h, v17.8h, v4.16b
007c8884:  uaddw    v18.8h, v18.8h, v5.8b
007c8888:  uaddw2   v0.8h, v0.8h, v5.16b
007c888c:  uaddw    v16.8h, v16.8h, v6.8b
007c8890:  uaddw2   v3.8h, v17.8h, v6.16b
007c8894:  uaddw2   v0.8h, v0.8h, v7.16b
007c8898:  rshrn    v1.8b, v16.8h, #2
007c889c:  uaddw    v16.8h, v18.8h, v7.8b
007c88a0:  rshrn2   v1.16b, v3.8h, #2
007c88a4:  rshrn    v2.8b, v16.8h, #2
007c88a8:  rshrn2   v2.16b, v0.8h, #2
007c88ac:  st2      {v1.16b, v2.16b}, [x12], #32
007c88b0:  b.ne     #0x7c885c
007c88b4:  cmp      x10, x8
007c88b8:  b.eq     #0x7c8784
007c88bc:  tbnz     w8, #3, #0x7c87d8
007c88c0:  add      x12, x0, x10, lsl #2
007c88c4:  add      x9, x2, x10, lsl #1
007c88c8:  mov      w11, w10
007c88cc:  b        #0x7c8718

; ===== 00929e40  FUN_00929e40  (440 bytes) =====
00929e40:  bti      c
00929e44:  ldr      x8, [x0, #0x28]
00929e48:  cmp      x8, #4
00929e4c:  b.ne     #0x929e80
00929e50:  paciasp  
00929e54:  sub      sp, sp, #0x60
00929e58:  stp      x29, x30, [sp, #0x40]
00929e5c:  str      x19, [sp, #0x50]
00929e60:  add      x29, sp, #0x40
00929e64:  mov      x19, x0
00929e68:  bl       #0x65901c
00929e6c:  tbz      w0, #0, #0x929e88
00929e70:  mov      w0, wzr
00929e74:  mov      w8, #2
00929e78:  str      x8, [x19, #0x28]
00929e7c:  b        #0x929fb0
00929e80:  mov      w0, #-1
00929e84:  ret      
00929e88:  movi     v0.16b, #0xaa
00929e8c:  add      x8, sp, #0x20
00929e90:  mov      x0, x19
00929e94:  stp      q0, q0, [sp, #0x20]
00929e98:  bl       #0x65902c
00929e9c:  movi     v0.16b, #0xaa
00929ea0:  ldr      x1, [x19, #0x18]
00929ea4:  mov      x8, sp
00929ea8:  mov      x0, x19
00929eac:  mov      w2, #2
00929eb0:  stp      q0, q0, [sp]
00929eb4:  bl       #0x6591e8
00929eb8:  ldr      x8, [sp, #0x28]
00929ebc:  cbz      x8, #0x929fac
00929ec0:  ldr      x9, [sp, #0x30]
00929ec4:  ldr      x10, [sp, #0x10]
00929ec8:  cmp      x8, #0x18
00929ecc:  b.lo     #0x929f60
00929ed0:  sub      x12, x8, #1
00929ed4:  add      x11, x9, #6
00929ed8:  lsl      x13, x12, #3
00929edc:  add      x14, x11, x13
00929ee0:  cmp      x14, x11
00929ee4:  mov      x11, xzr
00929ee8:  b.lo     #0x929f64
00929eec:  add      x14, x9, #4
00929ef0:  add      x15, x14, x13
00929ef4:  cmp      x15, x14
00929ef8:  b.lo     #0x929f64
00929efc:  add      x14, x9, #2
00929f00:  add      x15, x14, x13
00929f04:  cmp      x15, x14
00929f08:  b.lo     #0x929f64
00929f0c:  lsl      x14, x12, #2
00929f10:  add      x15, x10, x14
00929f14:  cmp      x15, x10
00929f18:  b.lo     #0x929f64
00929f1c:  add      x15, x10, #2
00929f20:  add      x14, x15, x14
00929f24:  cmp      x14, x15
00929f28:  b.lo     #0x929f64
00929f2c:  lsr      x14, x12, #0x3e
00929f30:  cbnz     x14, #0x929f64
00929f34:  add      x13, x9, x13
00929f38:  cmp      x13, x9
00929f3c:  b.lo     #0x929f64
00929f40:  lsr      x12, x12, #0x3d
00929f44:  cbnz     x12, #0x929f64
00929f48:  add      x11, x9, x8, lsl #3
00929f4c:  cmp      x10, x11
00929f50:  b.hs     #0x929fc4
00929f54:  add      x11, x10, x8, lsl #2
00929f58:  cmp      x9, x11
00929f5c:  b.hs     #0x929fc4
00929f60:  mov      x11, xzr
00929f64:  add      x10, x10, x11, lsl #2
00929f68:  add      x12, x9, x11, lsl #3
00929f6c:  sub      x8, x8, x11
00929f70:  add      x9, x10, #2
00929f74:  add      x10, x12, #4
00929f78:  ldursh   w11, [x10, #-4]
00929f7c:  ldursh   w12, [x10, #-2]
00929f80:  subs     x8, x8, #1
00929f84:  add      w11, w12, w11
00929f88:  lsr      w11, w11, #1
00929f8c:  sturh    w11, [x9, #-2]
00929f90:  ldrsh    w11, [x10]
00929f94:  ldrsh    w12, [x10, #2]
00929f98:  add      x10, x10, #8
00929f9c:  add      w11, w12, w11
00929fa0:  lsr      w11, w11, #1
00929fa4:  strh     w11, [x9], #4
00929fa8:  b.ne     #0x929f78
00929fac:  mov      w0, wzr
00929fb0:  ldp      x29, x30, [sp, #0x40]
00929fb4:  ldr      x19, [sp, #0x50]
00929fb8:  add      sp, sp, #0x60
00929fbc:  autiasp  
00929fc0:  ret      
00929fc4:  and      x11, x8, #0x3ffffffffffffff8
00929fc8:  mov      x12, x9
00929fcc:  mov      x13, x10
00929fd0:  and      x14, x8, #0x3ffffffffffffff8
00929fd4:  ld4      {v0.8h, v1.8h, v2.8h, v3.8h}, [x12], #64
00929fd8:  subs     x14, x14, #8
00929fdc:  shadd    v4.8h, v1.8h, v0.8h
00929fe0:  shadd    v5.8h, v3.8h, v2.8h
00929fe4:  st2      {v4.8h, v5.8h}, [x13], #32
00929fe8:  b.ne     #0x929fd4
00929fec:  cmp      x8, x11
00929ff0:  b.eq     #0x929fac
00929ff4:  b        #0x929f64

; ===== 00929ff8  FUN_00929ff8  (364 bytes) =====
00929ff8:  bti      c
00929ffc:  ldr      x2, [x0]
0092a000:  cmp      x2, #2
0092a004:  b.lo     #0x92a12c
0092a008:  ldr      x8, [x1]
0092a00c:  cmp      x8, #1
0092a010:  b.ne     #0x92a028
0092a014:  ldp      x9, x8, [x0, #8]
0092a018:  ldr      x3, [x1, #0x10]
0092a01c:  mov      x0, x8
0092a020:  mov      x1, x9
0092a024:  b        #0x5eed34
0092a028:  cmp      x2, #4
0092a02c:  b.ne     #0x92a12c
0092a030:  cmp      x8, #2
0092a034:  b.ne     #0x92a12c
0092a038:  ldr      x8, [x0, #8]
0092a03c:  cbz      x8, #0x92a12c
0092a040:  ldr      x9, [x0, #0x10]
0092a044:  ldr      x10, [x1, #0x10]
0092a048:  cmp      x8, #0x18
0092a04c:  b.lo     #0x92a0e0
0092a050:  sub      x12, x8, #1
0092a054:  add      x11, x9, #6
0092a058:  lsl      x13, x12, #3
0092a05c:  add      x14, x11, x13
0092a060:  cmp      x14, x11
0092a064:  mov      x11, xzr
0092a068:  b.lo     #0x92a0e4
0092a06c:  add      x14, x9, #4
0092a070:  add      x15, x14, x13
0092a074:  cmp      x15, x14
0092a078:  b.lo     #0x92a0e4
0092a07c:  add      x14, x9, #2
0092a080:  add      x15, x14, x13
0092a084:  cmp      x15, x14
0092a088:  b.lo     #0x92a0e4
0092a08c:  lsl      x14, x12, #2
0092a090:  add      x15, x10, x14
0092a094:  cmp      x15, x10
0092a098:  b.lo     #0x92a0e4
0092a09c:  add      x15, x10, #2
0092a0a0:  add      x14, x15, x14
0092a0a4:  cmp      x14, x15
0092a0a8:  b.lo     #0x92a0e4
0092a0ac:  lsr      x14, x12, #0x3e
0092a0b0:  cbnz     x14, #0x92a0e4
0092a0b4:  add      x13, x9, x13
0092a0b8:  cmp      x13, x9
0092a0bc:  b.lo     #0x92a0e4
0092a0c0:  lsr      x12, x12, #0x3d
0092a0c4:  cbnz     x12, #0x92a0e4
0092a0c8:  add      x11, x9, x8, lsl #3
0092a0cc:  cmp      x10, x11
0092a0d0:  b.hs     #0x92a130
0092a0d4:  add      x11, x10, x8, lsl #2
0092a0d8:  cmp      x9, x11
0092a0dc:  b.hs     #0x92a130
0092a0e0:  mov      x11, xzr
0092a0e4:  add      x10, x10, x11, lsl #2
0092a0e8:  add      x12, x9, x11, lsl #3
0092a0ec:  sub      x8, x8, x11
0092a0f0:  add      x9, x10, #2
0092a0f4:  add      x10, x12, #4
0092a0f8:  ldursh   w11, [x10, #-4]
0092a0fc:  ldursh   w12, [x10, #-2]
0092a100:  subs     x8, x8, #1
0092a104:  add      w11, w12, w11
0092a108:  lsr      w11, w11, #1
0092a10c:  sturh    w11, [x9, #-2]
0092a110:  ldrsh    w11, [x10]
0092a114:  ldrsh    w12, [x10, #2]
0092a118:  add      x10, x10, #8
0092a11c:  add      w11, w12, w11
0092a120:  lsr      w11, w11, #1
0092a124:  strh     w11, [x9], #4
0092a128:  b.ne     #0x92a0f8
0092a12c:  ret      
0092a130:  and      x11, x8, #0x3ffffffffffffff8
0092a134:  mov      x12, x9
0092a138:  mov      x13, x10
0092a13c:  and      x14, x8, #0x3ffffffffffffff8
0092a140:  ld4      {v0.8h, v1.8h, v2.8h, v3.8h}, [x12], #64
0092a144:  subs     x14, x14, #8
0092a148:  shadd    v4.8h, v1.8h, v0.8h
0092a14c:  shadd    v5.8h, v3.8h, v2.8h
0092a150:  st2      {v4.8h, v5.8h}, [x13], #32
0092a154:  b.ne     #0x92a140
0092a158:  cmp      x8, x11
0092a15c:  b.eq     #0x92a12c
0092a160:  b        #0x92a0e4

; ===== 009fc2a8  FUN_009fc2a8  (2620 bytes) =====
009fc2a8:  paciasp  
009fc2ac:  sub      sp, sp, #0xa0
009fc2b0:  stp      x29, x30, [sp, #0x40]
009fc2b4:  stp      x28, x27, [sp, #0x50]
009fc2b8:  stp      x26, x25, [sp, #0x60]
009fc2bc:  stp      x24, x23, [sp, #0x70]
009fc2c0:  stp      x22, x21, [sp, #0x80]
009fc2c4:  stp      x20, x19, [sp, #0x90]
009fc2c8:  ldr      x8, [x1, #0x1fa0]
009fc2cc:  str      x2, [sp, #0x38]
009fc2d0:  ldrb     w13, [x8]
009fc2d4:  cmp      w13, #4
009fc2d8:  cset     w9, ne
009fc2dc:  cmp      w13, #9
009fc2e0:  csel     w2, wzr, w9, eq
009fc2e4:  cmp      w13, #4
009fc2e8:  ccmp     w13, #9, #4, ne
009fc2ec:  b.ne     #0x9fc2fc
009fc2f0:  mov      x11, xzr
009fc2f4:  mov      w9, #1
009fc2f8:  b        #0x9fc338
009fc2fc:  ldr      x9, [x1, #0x1848]
009fc300:  ldr      x10, [x1, #0x1840]
009fc304:  orr      x9, x9, x9, lsr #32
009fc308:  orr      x10, x10, x10, lsr #32
009fc30c:  lsr      x11, x9, #0x10
009fc310:  lsr      x14, x10, #0x10
009fc314:  orr      w9, w9, w11
009fc318:  orr      w10, w10, w14
009fc31c:  mov      w11, #0x10
009fc320:  orr      w9, w9, w9, lsr #8
009fc324:  orr      w10, w10, w10, lsr #8
009fc328:  tst      w9, #0xfe
009fc32c:  cset     w9, eq
009fc330:  tst      w10, #0xfe
009fc334:  csel     w9, wzr, w9, ne
009fc338:  cmp      w2, #0
009fc33c:  mov      w10, #0x17
009fc340:  cinc     x10, x10, ne
009fc344:  add      x15, x10, #1
009fc348:  sub      x16, x15, x11
009fc34c:  cmp      x16, #4
009fc350:  b.hs     #0x9fc35c
009fc354:  mov      w14, w9
009fc358:  b        #0x9fc434
009fc35c:  cmp      x16, #0x20
009fc360:  b.hs     #0x9fc370
009fc364:  mov      x17, xzr
009fc368:  mov      w14, w9
009fc36c:  b        #0x9fc3c0
009fc370:  mov      w14, #0x1840
009fc374:  and      x17, x16, #0xffffffffffffffe0
009fc378:  add      x14, x1, x14
009fc37c:  add      x14, x14, x11
009fc380:  ldp      q1, q0, [x14]
009fc384:  adrp     x14, #0x1f2000
009fc388:  orr      v0.16b, v0.16b, v1.16b
009fc38c:  ldr      q1, [x14, #0xd70]
009fc390:  cmeq     v0.16b, v0.16b, #0
009fc394:  bic      v0.16b, v1.16b, v0.16b
009fc398:  ext      v1.16b, v0.16b, v0.16b, #8
009fc39c:  zip1     v0.16b, v0.16b, v1.16b
009fc3a0:  addv     h0, v0.8h
009fc3a4:  fmov     w14, s0
009fc3a8:  tst      w14, #0xffff
009fc3ac:  csel     w14, w9, wzr, eq
009fc3b0:  cmp      x16, x17
009fc3b4:  b.eq     #0x9fc45c
009fc3b8:  tst      x16, #0x1c
009fc3bc:  b.eq     #0x9fccd8
009fc3c0:  cmp      w14, w9
009fc3c4:  and      x15, x15, #3
009fc3c8:  mov      w3, #0x1840
009fc3cc:  cset     w14, ne
009fc3d0:  dup      v0.4h, w14
009fc3d4:  sub      x14, x16, x15
009fc3d8:  add      x16, x11, x17
009fc3dc:  mvn      x17, x10
009fc3e0:  add      x12, x16, x1
009fc3e4:  add      x11, x11, x14
009fc3e8:  add      x16, x17, x16
009fc3ec:  add      x14, x12, x3
009fc3f0:  add      x16, x16, x15
009fc3f4:  ldr      s1, [x14], #4
009fc3f8:  adds     x16, x16, #4
009fc3fc:  ushll    v1.8h, v1.8b, #0
009fc400:  cmeq     v1.4h, v1.4h, #0
009fc404:  orn      v0.8b, v0.8b, v1.8b
009fc408:  b.ne     #0x9fc3f4
009fc40c:  shl      v0.4h, v0.4h, #0xf
009fc410:  adrp     x14, #0x1f5000
009fc414:  ldr      d1, [x14, #0x910]
009fc418:  cmlt     v0.4h, v0.4h, #0
009fc41c:  and      v0.8b, v0.8b, v1.8b
009fc420:  addv     h0, v0.4h
009fc424:  fmov     w14, s0
009fc428:  tst      w14, #0xf
009fc42c:  csel     w14, w9, wzr, eq
009fc430:  cbz      x15, #0x9fc45c
009fc434:  sub      x9, x10, x11
009fc438:  add      x10, x11, x1
009fc43c:  mov      w11, #0x1840
009fc440:  add      x9, x9, #1
009fc444:  add      x10, x10, x11
009fc448:  ldrb     w11, [x10], #1
009fc44c:  cmp      w11, #0
009fc450:  csel     w14, w14, wzr, eq
009fc454:  subs     x9, x9, #1
009fc458:  b.ne     #0x9fc448
009fc45c:  strb     w14, [x8, #9]
009fc460:  ldr      x8, [x1, #0x1fa0]
009fc464:  ldrb     w9, [x8, #9]
009fc468:  cbz      w9, #0x9fc49c
009fc46c:  add      x9, x0, #0x18, lsl #12
009fc470:  ldr      w9, [x9, #0x3280]
009fc474:  cbz      w9, #0x9fc578
009fc478:  ldrb     w9, [x8]
009fc47c:  ldr      x8, [x1, #0x1ff0]
009fc480:  cmp      w9, #4
009fc484:  b.eq     #0x9fc490
009fc488:  cmp      w9, #9
009fc48c:  b.ne     #0x9fc5a0
009fc490:  str      xzr, [x8]
009fc494:  ldr      x8, [x1, #0x1ff8]
009fc498:  b        #0x9fc5b0
009fc49c:  adrp     x10, #0xd53000
009fc4a0:  mov      w8, #1
009fc4a4:  cmp      w13, #4
009fc4a8:  ldr      x10, [x10, #0x1b0]
009fc4ac:  mov      w9, #3
009fc4b0:  adrp     x11, #0x234000
009fc4b4:  add      x11, x11, #0xdc0
009fc4b8:  str      x2, [sp, #0x30]
009fc4bc:  b.eq     #0x9fc798
009fc4c0:  cmp      w13, #9
009fc4c4:  b.eq     #0x9fc798
009fc4c8:  ldr      x13, [x1, #0x1ff0]
009fc4cc:  ldr      x14, [x1, #0x1ff8]
009fc4d0:  mov      w8, #0x1858
009fc4d4:  ldr      x12, [sp, #0x38]
009fc4d8:  ldrb     w16, [x1, x8]
009fc4dc:  ldrb     w8, [x13, #8]
009fc4e0:  ldrb     w9, [x14, #8]
009fc4e4:  ldr      x15, [x12]
009fc4e8:  add      w8, w9, w8
009fc4ec:  cbz      w16, #0x9fc5e4
009fc4f0:  ldr      x4, [x1, #0x1e20]
009fc4f4:  cmp      w8, #3
009fc4f8:  ldrsh    x9, [x4]
009fc4fc:  add      x9, x11, x9, lsl #2
009fc500:  add      x9, x9, #2, lsl #12
009fc504:  ldrh     w17, [x9, #2]
009fc508:  strh     w17, [x15, #8]
009fc50c:  ldrh     w9, [x9]
009fc510:  strb     w9, [x15, #0xa]
009fc514:  b.hi     #0x9fcce0
009fc518:  add      x17, x0, #0x1b, lsl #12
009fc51c:  mov      w12, #0xb
009fc520:  cmp      w8, #3
009fc524:  add      x17, x17, #0xa0d
009fc528:  umaddl   x12, w8, w12, x17
009fc52c:  strb     wzr, [x15, #0xb]
009fc530:  str      x12, [x15]
009fc534:  b.eq     #0x9fcce0
009fc538:  cmp      w9, #0xc
009fc53c:  b.hi     #0x9fcce0
009fc540:  mov      w12, #0x275c
009fc544:  mov      w5, #0x30
009fc548:  cmp      w9, #0xc
009fc54c:  add      x3, x1, x12
009fc550:  umaddl   x8, w8, w5, x3
009fc554:  ldr      w12, [x8, w9, uxtw #2]
009fc558:  add      w12, w12, #1
009fc55c:  str      w12, [x8, w9, uxtw #2]
009fc560:  b.eq     #0x9fcce0
009fc564:  ldrb     w5, [x10, w9, uxtw]
009fc568:  cmp      w16, #1
009fc56c:  b.ne     #0x9fc638
009fc570:  add      x8, x15, #0x10
009fc574:  b        #0x9fc718
009fc578:  ldp      x20, x19, [sp, #0x90]
009fc57c:  ldr      x2, [sp, #0x38]
009fc580:  ldp      x22, x21, [sp, #0x80]
009fc584:  ldp      x24, x23, [sp, #0x70]
009fc588:  ldp      x26, x25, [sp, #0x60]
009fc58c:  ldp      x28, x27, [sp, #0x50]
009fc590:  ldp      x29, x30, [sp, #0x40]
009fc594:  add      sp, sp, #0xa0
009fc598:  autiasp  
009fc59c:  b        #0x9fcce4
009fc5a0:  strb     wzr, [x8, #8]
009fc5a4:  str      xzr, [x8]
009fc5a8:  ldr      x8, [x1, #0x1ff8]
009fc5ac:  strb     wzr, [x8, #8]
009fc5b0:  str      xzr, [x8]
009fc5b4:  ldr      w8, [x1, #0x22d8]
009fc5b8:  add      w8, w8, #1
009fc5bc:  str      w8, [x1, #0x22d8]
009fc5c0:  ldp      x20, x19, [sp, #0x90]
009fc5c4:  ldp      x22, x21, [sp, #0x80]
009fc5c8:  ldp      x24, x23, [sp, #0x70]
009fc5cc:  ldp      x26, x25, [sp, #0x60]
009fc5d0:  ldp      x28, x27, [sp, #0x50]
009fc5d4:  ldp      x29, x30, [sp, #0x40]
009fc5d8:  add      sp, sp, #0xa0
009fc5dc:  autiasp  
009fc5e0:  ret      
009fc5e4:  mov      w9, #0xb
009fc5e8:  cmp      w8, #3
009fc5ec:  strb     w9, [x15, #0xa]
009fc5f0:  b.hi     #0x9fcce0
009fc5f4:  mov      w9, #0xb
009fc5f8:  cmp      w8, #3
009fc5fc:  strb     wzr, [x15, #0xb]
009fc600:  nop      
009fc604:  umaddl   x9, w8, w9, x0
009fc608:  add      x9, x9, #0x1b, lsl #12
009fc60c:  add      x9, x9, #0xa0d
009fc610:  str      x9, [x15]
009fc614:  b.eq     #0x9fcce0
009fc618:  mov      w9, #0x30
009fc61c:  mov      w16, wzr
009fc620:  umaddl   x8, w8, w9, x1
009fc624:  ldr      w9, [x8, #0x2788]
009fc628:  add      w9, w9, #1
009fc62c:  str      w9, [x8, #0x2788]
009fc630:  add      x8, x15, #0x10
009fc634:  b        #0x9fc780
009fc638:  adrp     x12, #0xd53000
009fc63c:  lsl      x9, x16, #4
009fc640:  mov      x8, xzr
009fc644:  ldr      x12, [x12, #0x1b8]
009fc648:  mov      w19, #0x90
009fc64c:  mov      w20, #0x30
009fc650:  sub      x7, x9, #0x10
009fc654:  mov      w9, #0xb
009fc658:  add      x2, x12, #4
009fc65c:  adrp     x12, #0x233000
009fc660:  add      x12, x12, #0x3d0
009fc664:  add      x6, x12, #1
009fc668:  cmp      x8, #0xf0
009fc66c:  b.eq     #0x9fcce0
009fc670:  ldrsw    x21, [x2], #4
009fc674:  add      x23, x15, x8
009fc678:  ldrb     w22, [x6], #1
009fc67c:  ldrsh    x21, [x4, x21, lsl #1]
009fc680:  cmp      x22, #7
009fc684:  add      x21, x11, x21, lsl #2
009fc688:  add      x21, x21, #2, lsl #12
009fc68c:  ldrh     w24, [x21, #2]
009fc690:  strh     w24, [x23, #0x18]
009fc694:  ldrsh    x21, [x21]
009fc698:  strb     w21, [x23, #0x1a]
009fc69c:  b.hi     #0x9fcce0
009fc6a0:  cmp      x5, #3
009fc6a4:  b.hi     #0x9fcce0
009fc6a8:  add      x24, x22, x22, lsl #5
009fc6ac:  cmp      x5, #0
009fc6b0:  add      x25, x15, x8
009fc6b4:  cset     w26, eq
009fc6b8:  cmp      x5, #3
009fc6bc:  add      x24, x17, x24
009fc6c0:  strb     w26, [x25, #0x1b]
009fc6c4:  nop      
009fc6c8:  madd     x24, x5, x9, x24
009fc6cc:  str      x24, [x23, #0x10]
009fc6d0:  b.eq     #0x9fcce0
009fc6d4:  cmp      w21, #0xc
009fc6d8:  b.hi     #0x9fcce0
009fc6dc:  umaddl   x22, w22, w19, x3
009fc6e0:  cmp      w21, #0xc
009fc6e4:  madd     x5, x5, x20, x22
009fc6e8:  ldr      w22, [x5, x21, lsl #2]
009fc6ec:  add      w22, w22, #1
009fc6f0:  str      w22, [x5, x21, lsl #2]
009fc6f4:  b.eq     #0x9fcce0
009fc6f8:  add      x8, x8, #0x10
009fc6fc:  ldrb     w5, [x10, x21]
009fc700:  cmp      x7, x8
009fc704:  b.ne     #0x9fc668
009fc708:  add      x15, x15, x8
009fc70c:  cmp      w16, #0xf
009fc710:  add      x8, x15, #0x10
009fc714:  b.hi     #0x9fc77c
009fc718:  adrp     x9, #0x233000
009fc71c:  add      x9, x9, #0x3d0
009fc720:  ldrb     w9, [x9, x16]
009fc724:  mov      w16, #0xb
009fc728:  strb     w16, [x15, #0x1a]
009fc72c:  cmp      x9, #7
009fc730:  b.hi     #0x9fcce0
009fc734:  cmp      x5, #3
009fc738:  b.hi     #0x9fcce0
009fc73c:  add      x16, x9, x9, lsl #5
009fc740:  mov      w12, #0xb
009fc744:  cmp      x5, #3
009fc748:  add      x16, x17, x16
009fc74c:  umaddl   x16, w5, w12, x16
009fc750:  str      x16, [x8]
009fc754:  strb     wzr, [x15, #0x1b]
009fc758:  b.eq     #0x9fcce0
009fc75c:  mov      w8, #0x90
009fc760:  umaddl   x8, w9, w8, x3
009fc764:  mov      w9, #0x30
009fc768:  umaddl   x8, w5, w9, x8
009fc76c:  ldr      w9, [x8, #0x2c]
009fc770:  add      w9, w9, #1
009fc774:  str      w9, [x8, #0x2c]
009fc778:  add      x8, x15, #0x20
009fc77c:  mov      w16, #1
009fc780:  ldp      x2, x12, [sp, #0x30]
009fc784:  mov      x9, xzr
009fc788:  str      x8, [x12]
009fc78c:  mov      w8, #2
009fc790:  strb     w16, [x14, #8]
009fc794:  strb     w16, [x13, #8]
009fc798:  ldr      x12, [sp, #0x38]
009fc79c:  str      x0, [sp, #8]
009fc7a0:  mov      w13, #0x108
009fc7a4:  mov      w16, #0x480
009fc7a8:  umaddl   x0, w9, w13, x0
009fc7ac:  ubfiz    x5, x2, #4, #0x20
009fc7b0:  ldr      x14, [x12]
009fc7b4:  adrp     x12, #0xd53000
009fc7b8:  umaddl   x9, w9, w16, x1
009fc7bc:  ldr      x12, [x12, #0x1b8]
009fc7c0:  mov      w3, w8
009fc7c4:  mov      w15, #0x18e0
009fc7c8:  mov      w16, #0x22dc
009fc7cc:  orr      x4, x2, x2, lsl #5
009fc7d0:  add      x13, x1, x15
009fc7d4:  add      x8, x12, w8, uxtw #2
009fc7d8:  add      x15, x0, #0x1b, lsl #12
009fc7dc:  add      x6, x9, x16
009fc7e0:  add      x7, x15, #0x905
009fc7e4:  mov      x17, xzr
009fc7e8:  mov      w23, #0xb
009fc7ec:  str      x8, [sp, #0x10]
009fc7f0:  orr      x8, x5, x2, lsl #7
009fc7f4:  mov      w24, #0x30
009fc7f8:  mov      w25, #0x90
009fc7fc:  add      x9, x9, x8
009fc800:  add      x8, x6, x8
009fc804:  stp      x8, x9, [sp, #0x18]
009fc808:  add      x8, x7, x4
009fc80c:  str      x8, [sp, #0x28]
009fc810:  mov      x8, #-0x100
009fc814:  orr      x22, x8, x3, lsl #4
009fc818:  b        #0x9fc840
009fc81c:  mov      w9, #1
009fc820:  ldp      x2, x8, [sp, #0x30]
009fc824:  add      x17, x17, #1
009fc828:  cmp      x17, #0x10
009fc82c:  add      x13, x13, #0x38
009fc830:  str      x14, [x8]
009fc834:  strb     w9, [x29, x28]
009fc838:  strb     w9, [x27, x26]
009fc83c:  b.eq     #0x9fca78
009fc840:  adrp     x9, #0xd53000
009fc844:  ldr      x8, [x13, #0x28]
009fc848:  ldr      x9, [x9, #0x190]
009fc84c:  ldrb     w26, [x9, x17]
009fc850:  adrp     x9, #0x234000
009fc854:  add      x9, x9, #0xd8d
009fc858:  ldr      x27, [x1, #0x1ff0]
009fc85c:  ldr      x29, [x1, #0x1ff8]
009fc860:  ldrb     w30, [x8]
009fc864:  ldrb     w28, [x9, x17]
009fc868:  ldrb     w8, [x27, x26]
009fc86c:  cmp      w30, w2
009fc870:  ldrb     w9, [x29, x28]
009fc874:  add      w8, w9, w8
009fc878:  b.ls     #0x9fc9cc
009fc87c:  ldr      x5, [x13]
009fc880:  cmp      w8, #3
009fc884:  ldrsh    x9, [x5, x2, lsl #1]
009fc888:  add      x9, x11, x9, lsl #2
009fc88c:  add      x9, x9, #2, lsl #12
009fc890:  ldrh     w15, [x9, #2]
009fc894:  strh     w15, [x14, #8]
009fc898:  ldrsh    x9, [x9]
009fc89c:  strb     w9, [x14, #0xa]
009fc8a0:  b.hi     #0x9fcce0
009fc8a4:  ldr      x12, [sp, #0x28]
009fc8a8:  nop      
009fc8ac:  umaddl   x15, w8, w23, x12
009fc8b0:  cmp      w8, #3
009fc8b4:  strb     wzr, [x14, #0xb]
009fc8b8:  str      x15, [x14]
009fc8bc:  b.eq     #0x9fcce0
009fc8c0:  cmp      w9, #0xc
009fc8c4:  b.hi     #0x9fcce0
009fc8c8:  ldr      x12, [sp, #0x18]
009fc8cc:  nop      
009fc8d0:  umaddl   x8, w8, w24, x12
009fc8d4:  cmp      w9, #0xc
009fc8d8:  ldr      w15, [x8, x9, lsl #2]
009fc8dc:  add      w15, w15, #1
009fc8e0:  str      w15, [x8, x9, lsl #2]
009fc8e4:  b.eq     #0x9fcce0
009fc8e8:  ldrb     w8, [x10, x9]
009fc8ec:  cmp      w3, w30
009fc8f0:  b.hs     #0x9fca18
009fc8f4:  adrp     x12, #0xd53000
009fc8f8:  neg      x9, x3
009fc8fc:  mov      x0, xzr
009fc900:  ldr      x12, [x12, #0x1a8]
009fc904:  ldr      x19, [sp, #0x10]
009fc908:  add      x9, x9, x30
009fc90c:  add      x4, x12, x3
009fc910:  cmn      x22, x0
009fc914:  b.eq     #0x9fcce0
009fc918:  ldrsw    x15, [x19], #4
009fc91c:  add      x16, x14, x0
009fc920:  ldrsh    x15, [x5, x15, lsl #1]
009fc924:  add      x15, x11, x15, lsl #2
009fc928:  add      x20, x15, #2, lsl #12
009fc92c:  ldrb     w15, [x4], #1
009fc930:  ldrh     w12, [x20, #2]
009fc934:  cmp      x15, #7
009fc938:  strh     w12, [x16, #0x18]
009fc93c:  ldrsh    x20, [x20]
009fc940:  strb     w20, [x16, #0x1a]
009fc944:  b.hi     #0x9fcce0
009fc948:  cmp      x8, #3
009fc94c:  b.hi     #0x9fcce0
009fc950:  add      x12, x15, x15, lsl #5
009fc954:  cmp      x8, #0
009fc958:  add      x2, x14, x0
009fc95c:  cset     w21, eq
009fc960:  cmp      x8, #3
009fc964:  add      x12, x7, x12
009fc968:  strb     w21, [x2, #0x1b]
009fc96c:  nop      
009fc970:  madd     x12, x8, x23, x12
009fc974:  str      x12, [x16, #0x10]
009fc978:  b.eq     #0x9fcce0
009fc97c:  cmp      w20, #0xc
009fc980:  b.hi     #0x9fcce0
009fc984:  umaddl   x12, w15, w25, x6
009fc988:  cmp      w20, #0xc
009fc98c:  madd     x8, x8, x24, x12
009fc990:  ldr      w12, [x8, x20, lsl #2]
009fc994:  add      w12, w12, #1
009fc998:  str      w12, [x8, x20, lsl #2]
009fc99c:  b.eq     #0x9fcce0
009fc9a0:  ldrb     w8, [x10, x20]
009fc9a4:  subs     x9, x9, #1
009fc9a8:  add      x0, x0, #0x10
009fc9ac:  b.ne     #0x9fc910
009fc9b0:  add      x15, x14, x0
009fc9b4:  cmp      w30, #0xf
009fc9b8:  add      x14, x15, #0x10
009fc9bc:  b.hi     #0x9fc81c
009fc9c0:  add      x9, x15, #0x10
009fc9c4:  mov      x14, x15
009fc9c8:  b        #0x9fca20
009fc9cc:  cmp      w8, #3
009fc9d0:  strb     w23, [x14, #0xa]
009fc9d4:  b.hi     #0x9fcce0
009fc9d8:  ldr      x9, [sp, #0x28]
009fc9dc:  cmp      w8, #3
009fc9e0:  strb     wzr, [x14, #0xb]
009fc9e4:  nop      
009fc9e8:  umaddl   x9, w8, w23, x9
009fc9ec:  str      x9, [x14]
009fc9f0:  b.eq     #0x9fcce0
009fc9f4:  ldr      x12, [sp, #0x20]
009fc9f8:  nop      
009fc9fc:  umaddl   x8, w8, w24, x12
009fca00:  mov      w9, wzr
009fca04:  add      x14, x14, #0x10
009fca08:  ldr      w15, [x8, #0x2308]
009fca0c:  add      w15, w15, #1
009fca10:  str      w15, [x8, #0x2308]
009fca14:  b        #0x9fc820
009fca18:  add      x9, x14, #0x10
009fca1c:  mov      x30, x3
009fca20:  adrp     x12, #0x233000
009fca24:  add      x12, x12, #0x3d0
009fca28:  ldrb     w15, [x12, x30]
009fca2c:  strb     w23, [x14, #0x1a]
009fca30:  cmp      x15, #7
009fca34:  b.hi     #0x9fcce0
009fca38:  cmp      x8, #3
009fca3c:  b.hi     #0x9fcce0
009fca40:  add      x12, x15, x15, lsl #5
009fca44:  cmp      x8, #3
009fca48:  add      x12, x7, x12
009fca4c:  umaddl   x12, w8, w23, x12
009fca50:  str      x12, [x9]
009fca54:  strb     wzr, [x14, #0x1b]
009fca58:  b.eq     #0x9fcce0
009fca5c:  umaddl   x9, w15, w25, x6
009fca60:  add      x14, x14, #0x20
009fca64:  umaddl   x8, w8, w24, x9
009fca68:  ldr      w9, [x8, #0x2c]
009fca6c:  add      w9, w9, #1
009fca70:  str      w9, [x8, #0x2c]
009fca74:  b        #0x9fc81c
009fca78:  ldr      x8, [sp, #8]
009fca7c:  mov      w9, #0x2bdc
009fca80:  mov      w12, #0x10
009fca84:  add      x0, x1, x9
009fca88:  mov      w3, #0xb
009fca8c:  mov      w4, #0x30
009fca90:  add      x8, x8, #0x1b, lsl #12
009fca94:  mov      w5, #0x90
009fca98:  add      x17, x8, #0xb15
009fca9c:  b        #0x9fcac8
009fcaa0:  mov      w21, #1
009fcaa4:  ldr      x9, [sp, #0x38]
009fcaa8:  add      x12, x12, #1
009fcaac:  add      x13, x13, #0x38
009fcab0:  cmp      x12, #0x18
009fcab4:  mov      x14, x8
009fcab8:  str      x8, [x9]
009fcabc:  strb     w21, [x20, x19]
009fcac0:  strb     w21, [x7, x6]
009fcac4:  b.eq     #0x9fc5c0
009fcac8:  adrp     x9, #0xd53000
009fcacc:  ldr      x8, [x13, #0x28]
009fcad0:  ldr      x9, [x9, #0x190]
009fcad4:  ldrb     w6, [x9, x12]
009fcad8:  adrp     x9, #0x234000
009fcadc:  add      x9, x9, #0xd8d
009fcae0:  ldr      x7, [x1, #0x1ff0]
009fcae4:  ldr      x20, [x1, #0x1ff8]
009fcae8:  ldrb     w21, [x8]
009fcaec:  ldrb     w19, [x9, x12]
009fcaf0:  ldrb     w8, [x7, x6]
009fcaf4:  ldrb     w9, [x20, x19]
009fcaf8:  add      w9, w9, w8
009fcafc:  cbz      w21, #0x9fcb70
009fcb00:  ldr      x8, [x13]
009fcb04:  cmp      w9, #3
009fcb08:  ldrsh    x15, [x8]
009fcb0c:  add      x15, x11, x15, lsl #2
009fcb10:  add      x15, x15, #2, lsl #12
009fcb14:  ldrh     w16, [x15, #2]
009fcb18:  strh     w16, [x14, #8]
009fcb1c:  ldrh     w15, [x15]
009fcb20:  strb     w15, [x14, #0xa]
009fcb24:  b.hi     #0x9fcce0
009fcb28:  umaddl   x16, w9, w3, x17
009fcb2c:  cmp      w9, #3
009fcb30:  strb     wzr, [x14, #0xb]
009fcb34:  str      x16, [x14]
009fcb38:  b.eq     #0x9fcce0
009fcb3c:  cmp      w15, #0xc
009fcb40:  b.hi     #0x9fcce0
009fcb44:  umaddl   x9, w9, w4, x0
009fcb48:  cmp      w15, #0xc
009fcb4c:  ldr      w16, [x9, w15, uxtw #2]
009fcb50:  add      w16, w16, #1
009fcb54:  str      w16, [x9, w15, uxtw #2]
009fcb58:  b.eq     #0x9fcce0
009fcb5c:  ldrb     w22, [x10, w15, uxtw]
009fcb60:  cmp      w21, #1
009fcb64:  b.ne     #0x9fcbac
009fcb68:  add      x8, x14, #0x10
009fcb6c:  b        #0x9fcc80
009fcb70:  cmp      w9, #3
009fcb74:  strb     w3, [x14, #0xa]
009fcb78:  b.hi     #0x9fcce0
009fcb7c:  umaddl   x8, w9, w3, x17
009fcb80:  cmp      w9, #3
009fcb84:  strb     wzr, [x14, #0xb]
009fcb88:  str      x8, [x14]
009fcb8c:  b.eq     #0x9fcce0
009fcb90:  umaddl   x8, w9, w4, x1
009fcb94:  mov      w21, wzr
009fcb98:  ldr      w9, [x8, #0x2c08]
009fcb9c:  add      w9, w9, #1
009fcba0:  str      w9, [x8, #0x2c08]
009fcba4:  add      x8, x14, #0x10
009fcba8:  b        #0x9fcaa4
009fcbac:  adrp     x15, #0xd53000
009fcbb0:  lsl      x9, x21, #4
009fcbb4:  mov      x23, xzr
009fcbb8:  ldr      x15, [x15, #0x1b8]
009fcbbc:  sub      x26, x9, #0x10
009fcbc0:  add      x24, x15, #4
009fcbc4:  adrp     x15, #0x233000
009fcbc8:  add      x15, x15, #0x3d0
009fcbcc:  add      x25, x15, #1
009fcbd0:  cmp      x23, #0xf0
009fcbd4:  b.eq     #0x9fcce0
009fcbd8:  ldrsw    x9, [x24], #4
009fcbdc:  add      x15, x14, x23
009fcbe0:  ldrb     w27, [x25], #1
009fcbe4:  ldrsh    x9, [x8, x9, lsl #1]
009fcbe8:  cmp      x27, #7
009fcbec:  add      x9, x11, x9, lsl #2
009fcbf0:  add      x9, x9, #2, lsl #12
009fcbf4:  ldrh     w16, [x9, #2]
009fcbf8:  strh     w16, [x15, #0x18]
009fcbfc:  ldrsh    x9, [x9]
009fcc00:  strb     w9, [x15, #0x1a]
009fcc04:  b.hi     #0x9fcce0
009fcc08:  cmp      x22, #3
009fcc0c:  b.hi     #0x9fcce0
009fcc10:  add      x16, x27, x27, lsl #5
009fcc14:  cmp      x22, #0
009fcc18:  add      x2, x14, x23
009fcc1c:  cset     w28, eq
009fcc20:  cmp      x22, #3
009fcc24:  add      x16, x17, x16
009fcc28:  strb     w28, [x2, #0x1b]
009fcc2c:  nop      
009fcc30:  madd     x16, x22, x3, x16
009fcc34:  str      x16, [x15, #0x10]
009fcc38:  b.eq     #0x9fcce0
009fcc3c:  cmp      w9, #0xc
009fcc40:  b.hi     #0x9fcce0
009fcc44:  umaddl   x15, w27, w5, x0
009fcc48:  cmp      w9, #0xc
009fcc4c:  madd     x15, x22, x4, x15
009fcc50:  ldr      w16, [x15, x9, lsl #2]
009fcc54:  add      w16, w16, #1
009fcc58:  str      w16, [x15, x9, lsl #2]
009fcc5c:  b.eq     #0x9fcce0
009fcc60:  add      x23, x23, #0x10
009fcc64:  ldrb     w22, [x10, x9]
009fcc68:  cmp      x26, x23
009fcc6c:  b.ne     #0x9fcbd0
009fcc70:  add      x14, x14, x23
009fcc74:  cmp      w21, #0xf
009fcc78:  add      x8, x14, #0x10
009fcc7c:  b.hi     #0x9fcaa0
009fcc80:  adrp     x9, #0x233000
009fcc84:  add      x9, x9, #0x3d0
009fcc88:  ldrb     w9, [x9, x21]
009fcc8c:  strb     w3, [x14, #0x1a]
009fcc90:  cmp      x9, #7
009fcc94:  b.hi     #0x9fcce0
009fcc98:  cmp      x22, #3
009fcc9c:  b.hi     #0x9fcce0
009fcca0:  add      x15, x9, x9, lsl #5
009fcca4:  cmp      x22, #3
009fcca8:  add      x15, x17, x15
009fccac:  umaddl   x15, w22, w3, x15
009fccb0:  str      x15, [x8]
009fccb4:  strb     wzr, [x14, #0x1b]
009fccb8:  b.eq     #0x9fcce0
009fccbc:  umaddl   x8, w9, w5, x0
009fccc0:  umaddl   x8, w22, w4, x8
009fccc4:  ldr      w9, [x8, #0x2c]
009fccc8:  add      w9, w9, #1
009fcccc:  str      w9, [x8, #0x2c]
009fccd0:  add      x8, x14, #0x20
009fccd4:  b        #0x9fcaa0
009fccd8:  orr      x11, x11, x17
009fccdc:  b        #0x9fc434
009fcce0:  brk      #0x5512

; ===== 00a1f4dc  FUN_00a1f4dc  (880 bytes) =====
00a1f4dc:  bti      c
00a1f4e0:  str      d8, [sp, #-0x10]!
00a1f4e4:  lsl      w9, w1, #3
00a1f4e8:  sxtw     x8, w1
00a1f4ec:  movi     v0.16b, #0x80
00a1f4f0:  ldr      d1, [x0, #-4]!
00a1f4f4:  movi     v30.16b, #0x12
00a1f4f8:  add      x10, x0, w9, sxtw
00a1f4fc:  add      x11, x0, x8
00a1f500:  movi     v31.8h, #0x3f
00a1f504:  ldr      d2, [x11]
00a1f508:  add      x11, x11, x8
00a1f50c:  movi     v8.16b, #0x1b
00a1f510:  ldr      d5, [x10]
00a1f514:  add      x10, x10, x8
00a1f518:  ldr      d3, [x11]
00a1f51c:  ldr      d6, [x10]
00a1f520:  add      x10, x10, x8
00a1f524:  add      x11, x11, x8
00a1f528:  ldr      d7, [x10]
00a1f52c:  add      x10, x10, x8
00a1f530:  ldr      d4, [x11]
00a1f534:  add      x11, x11, x8
00a1f538:  ldr      d17, [x10]
00a1f53c:  add      x10, x10, x8
00a1f540:  ldr      d16, [x11]
00a1f544:  add      x11, x11, x8
00a1f548:  ldr      d18, [x10]
00a1f54c:  add      x10, x10, x8
00a1f550:  ldr      d19, [x11]
00a1f554:  add      x11, x11, x8
00a1f558:  ldr      d20, [x10]
00a1f55c:  add      x10, x10, x8
00a1f560:  ldr      d21, [x11]
00a1f564:  add      x11, x11, x8
00a1f568:  ldr      d22, [x10]
00a1f56c:  add      x10, x10, x8
00a1f570:  ldr      d23, [x11]
00a1f574:  ldr      d24, [x10]
00a1f578:  mov      v1.d[1], v5.d[0]
00a1f57c:  mov      v2.d[1], v6.d[0]
00a1f580:  mov      v3.d[1], v7.d[0]
00a1f584:  mov      v4.d[1], v17.d[0]
00a1f588:  mov      v16.d[1], v18.d[0]
00a1f58c:  mov      v19.d[1], v20.d[0]
00a1f590:  mov      v21.d[1], v22.d[0]
00a1f594:  mov      v23.d[1], v24.d[0]
00a1f598:  movi     v22.8b, #3
00a1f59c:  sub      w9, w9, w1
00a1f5a0:  sxtw     x9, w9
00a1f5a4:  trn2     v5.4s, v1.4s, v16.4s
00a1f5a8:  trn2     v6.4s, v2.4s, v19.4s
00a1f5ac:  trn2     v7.4s, v3.4s, v21.4s
00a1f5b0:  trn2     v17.4s, v4.4s, v23.4s
00a1f5b4:  trn1     v1.4s, v1.4s, v16.4s
00a1f5b8:  trn1     v3.4s, v3.4s, v21.4s
00a1f5bc:  trn1     v2.4s, v2.4s, v19.4s
00a1f5c0:  trn1     v4.4s, v4.4s, v23.4s
00a1f5c4:  sub      x11, x11, x9
00a1f5c8:  add      x12, x11, x8
00a1f5cc:  sub      x9, x10, x9
00a1f5d0:  trn1     v16.8h, v5.8h, v7.8h
00a1f5d4:  trn2     v5.8h, v5.8h, v7.8h
00a1f5d8:  add      x10, x12, x8
00a1f5dc:  trn1     v18.8h, v6.8h, v17.8h
00a1f5e0:  trn1     v19.8h, v1.8h, v3.8h
00a1f5e4:  trn2     v20.8h, v1.8h, v3.8h
00a1f5e8:  trn1     v3.8h, v2.8h, v4.8h
00a1f5ec:  trn2     v2.8h, v2.8h, v4.8h
00a1f5f0:  trn2     v6.8h, v6.8h, v17.8h
00a1f5f4:  movi     v17.16b, #3
00a1f5f8:  trn1     v21.16b, v16.16b, v18.16b
00a1f5fc:  trn2     v18.16b, v16.16b, v18.16b
00a1f600:  trn1     v1.16b, v19.16b, v3.16b
00a1f604:  trn2     v3.16b, v19.16b, v3.16b
00a1f608:  trn1     v19.16b, v20.16b, v2.16b
00a1f60c:  trn2     v20.16b, v20.16b, v2.16b
00a1f610:  trn1     v4.16b, v5.16b, v6.16b
00a1f614:  trn2     v2.16b, v5.16b, v6.16b
00a1f618:  eor      v7.16b, v21.16b, v0.16b
00a1f61c:  uabd     v26.16b, v18.16b, v21.16b
00a1f620:  eor      v6.16b, v18.16b, v0.16b
00a1f624:  uabd     v23.16b, v1.16b, v3.16b
00a1f628:  uabd     v24.16b, v3.16b, v19.16b
00a1f62c:  eor      v5.16b, v19.16b, v0.16b
00a1f630:  uabd     v25.16b, v19.16b, v20.16b
00a1f634:  eor      v16.16b, v20.16b, v0.16b
00a1f638:  uabd     v20.16b, v20.16b, v21.16b
00a1f63c:  smull    v27.8h, v7.8b, v22.8b
00a1f640:  uabd     v28.16b, v4.16b, v18.16b
00a1f644:  uabd     v18.16b, v19.16b, v18.16b
00a1f648:  uabd     v29.16b, v2.16b, v4.16b
00a1f64c:  umax     v19.16b, v23.16b, v24.16b
00a1f650:  sqsub    v23.16b, v5.16b, v6.16b
00a1f654:  umax     v21.16b, v25.16b, v26.16b
00a1f658:  smull2   v24.8h, v7.16b, v17.16b
00a1f65c:  uqadd    v20.16b, v20.16b, v20.16b
00a1f660:  ushr     v18.16b, v18.16b, #1
00a1f664:  dup      v26.16b, w3
00a1f668:  eor      v3.16b, v3.16b, v0.16b
00a1f66c:  smlsl    v27.8h, v16.8b, v22.8b
00a1f670:  umax     v22.16b, v28.16b, v29.16b
00a1f674:  movi     v28.16b, #9
00a1f678:  umax     v19.16b, v19.16b, v21.16b
00a1f67c:  movi     v29.8h, #0x3f
00a1f680:  eor      v4.16b, v4.16b, v0.16b
00a1f684:  smlsl2   v24.8h, v16.16b, v17.16b
00a1f688:  uqadd    v18.16b, v20.16b, v18.16b
00a1f68c:  dup      v20.16b, w2
00a1f690:  saddw    v25.8h, v27.8h, v23.8b
00a1f694:  umax     v19.16b, v19.16b, v22.16b
00a1f698:  saddw2   v23.8h, v24.8h, v23.16b
00a1f69c:  cmhs     v18.16b, v20.16b, v18.16b
00a1f6a0:  dup      v20.16b, w4
00a1f6a4:  sqxtn    v22.8b, v25.8h
00a1f6a8:  cmhs     v19.16b, v26.16b, v19.16b
00a1f6ac:  movi     v24.8h, #0x3f
00a1f6b0:  movi     v25.8b, #0x1b
00a1f6b4:  movi     v26.8h, #0x3f
00a1f6b8:  and      v18.16b, v19.16b, v18.16b
00a1f6bc:  cmhs     v19.16b, v20.16b, v21.16b
00a1f6c0:  movi     v20.16b, #4
00a1f6c4:  sqxtn2   v22.16b, v23.8h
00a1f6c8:  movi     v21.8b, #9
00a1f6cc:  movi     v23.8b, #0x12
00a1f6d0:  and      v18.16b, v18.16b, v22.16b
00a1f6d4:  movi     v22.8h, #0x3f
00a1f6d8:  bic      v27.16b, v18.16b, v19.16b
00a1f6dc:  and      v18.16b, v19.16b, v18.16b
00a1f6e0:  movi     v19.8h, #0x3f
00a1f6e4:  sqadd    v20.16b, v27.16b, v20.16b
00a1f6e8:  smlal    v22.8h, v18.8b, v21.8b
00a1f6ec:  smlal    v24.8h, v18.8b, v23.8b
00a1f6f0:  smlal    v26.8h, v18.8b, v25.8b
00a1f6f4:  sqadd    v17.16b, v27.16b, v17.16b
00a1f6f8:  smlal2   v29.8h, v18.16b, v28.16b
00a1f6fc:  smlal2   v31.8h, v18.16b, v30.16b
00a1f700:  smlal2   v19.8h, v18.16b, v8.16b
00a1f704:  sshr     v18.16b, v20.16b, #3
00a1f708:  sqshrn   v20.8b, v22.8h, #7
00a1f70c:  sqshrn   v21.8b, v24.8h, #7
00a1f710:  sqshrn   v22.8b, v26.8h, #7
00a1f714:  sshr     v17.16b, v17.16b, #3
00a1f718:  sqsub    v7.16b, v7.16b, v18.16b
00a1f71c:  sqshrn2  v20.16b, v29.8h, #7
00a1f720:  sqshrn2  v21.16b, v31.8h, #7
00a1f724:  sqadd    v16.16b, v16.16b, v17.16b
00a1f728:  sqshrn2  v22.16b, v19.8h, #7
00a1f72c:  sqadd    v3.16b, v3.16b, v20.16b
00a1f730:  sqsub    v6.16b, v6.16b, v21.16b
00a1f734:  sqsub    v4.16b, v4.16b, v20.16b
00a1f738:  sqsub    v7.16b, v7.16b, v22.16b
00a1f73c:  sqadd    v5.16b, v5.16b, v21.16b
00a1f740:  sqadd    v16.16b, v16.16b, v22.16b
00a1f744:  eor      v3.16b, v3.16b, v0.16b
00a1f748:  eor      v6.16b, v6.16b, v0.16b
00a1f74c:  eor      v4.16b, v4.16b, v0.16b
00a1f750:  eor      v7.16b, v7.16b, v0.16b
00a1f754:  eor      v5.16b, v5.16b, v0.16b
00a1f758:  eor      v0.16b, v16.16b, v0.16b
00a1f75c:  trn1     v17.4s, v3.4s, v6.4s
00a1f760:  trn2     v3.4s, v3.4s, v6.4s
00a1f764:  trn1     v16.4s, v1.4s, v7.4s
00a1f768:  trn1     v18.4s, v5.4s, v4.4s
00a1f76c:  trn1     v19.4s, v0.4s, v2.4s
00a1f770:  trn2     v1.4s, v1.4s, v7.4s
00a1f774:  trn2     v4.4s, v5.4s, v4.4s
00a1f778:  trn2     v0.4s, v0.4s, v2.4s
00a1f77c:  trn1     v20.8h, v16.8h, v18.8h
00a1f780:  trn1     v21.8h, v17.8h, v19.8h
00a1f784:  trn2     v2.8h, v16.8h, v18.8h
00a1f788:  trn2     v5.8h, v17.8h, v19.8h
00a1f78c:  trn1     v16.8h, v1.8h, v4.8h
00a1f790:  trn1     v17.8h, v3.8h, v0.8h
00a1f794:  trn2     v1.8h, v1.8h, v4.8h
00a1f798:  trn2     v0.8h, v3.8h, v0.8h
00a1f79c:  trn1     v6.16b, v20.16b, v21.16b
00a1f7a0:  trn2     v7.16b, v20.16b, v21.16b
00a1f7a4:  trn1     v18.16b, v2.16b, v5.16b
00a1f7a8:  trn2     v2.16b, v2.16b, v5.16b
00a1f7ac:  trn1     v3.16b, v16.16b, v17.16b
00a1f7b0:  ext      v19.16b, v6.16b, v6.16b, #8
00a1f7b4:  ext      v5.16b, v7.16b, v7.16b, #8
00a1f7b8:  str      d6, [x11]
00a1f7bc:  ext      v4.16b, v18.16b, v18.16b, #8
00a1f7c0:  trn2     v6.16b, v16.16b, v17.16b
00a1f7c4:  add      x11, x10, x8
00a1f7c8:  ext      v16.16b, v3.16b, v3.16b, #8
00a1f7cc:  str      d19, [x9]
00a1f7d0:  add      x9, x9, x8
00a1f7d4:  str      d7, [x12]
00a1f7d8:  ext      v7.16b, v2.16b, v2.16b, #8
00a1f7dc:  str      d5, [x9]
00a1f7e0:  add      x9, x9, x8
00a1f7e4:  trn1     v5.16b, v1.16b, v0.16b
00a1f7e8:  str      d18, [x10]
00a1f7ec:  trn2     v0.16b, v1.16b, v0.16b
00a1f7f0:  add      x10, x11, x8
00a1f7f4:  str      d4, [x9]
00a1f7f8:  add      x9, x9, x8
00a1f7fc:  str      d2, [x11]
00a1f800:  ext      v2.16b, v6.16b, v6.16b, #8
00a1f804:  str      d7, [x9]
00a1f808:  add      x9, x9, x8
00a1f80c:  ext      v1.16b, v5.16b, v5.16b, #8
00a1f810:  str      d3, [x10]
00a1f814:  add      x10, x10, x8
00a1f818:  str      d16, [x9]
00a1f81c:  add      x9, x9, x8
00a1f820:  str      d6, [x10]
00a1f824:  add      x10, x10, x8
00a1f828:  str      d2, [x9]
00a1f82c:  ext      v2.16b, v0.16b, v0.16b, #8
00a1f830:  add      x9, x9, x8
00a1f834:  str      d5, [x10]
00a1f838:  str      d1, [x9]
00a1f83c:  str      d0, [x10, x8]
00a1f840:  str      d2, [x9, x8]
00a1f844:  ldr      d8, [sp], #0x10
00a1f848:  ret      

; ===== 00a1f84c  FUN_00a1f84c  (800 bytes) =====
00a1f84c:  bti      c
00a1f850:  str      d8, [sp, #-0x10]!
00a1f854:  sxtw     x8, w1
00a1f858:  ldr      d0, [x0, #-4]!
00a1f85c:  ldr      d2, [x5, #-4]!
00a1f860:  movi     v30.16b, #0x12
00a1f864:  add      x17, x0, x8
00a1f868:  add      x9, x5, x8
00a1f86c:  movi     v31.8h, #0x3f
00a1f870:  add      x1, x17, x8
00a1f874:  add      x10, x9, x8
00a1f878:  ldr      d1, [x17]
00a1f87c:  add      x6, x1, x8
00a1f880:  add      x11, x10, x8
00a1f884:  ldr      d3, [x9]
00a1f888:  add      x7, x6, x8
00a1f88c:  add      x12, x11, x8
00a1f890:  ldr      d4, [x1]
00a1f894:  add      x16, x7, x8
00a1f898:  add      x13, x12, x8
00a1f89c:  ldr      d5, [x10]
00a1f8a0:  add      x15, x16, x8
00a1f8a4:  add      x14, x13, x8
00a1f8a8:  ldr      d6, [x6]
00a1f8ac:  ldr      d7, [x11]
00a1f8b0:  ldr      d16, [x7]
00a1f8b4:  ldr      d17, [x12]
00a1f8b8:  ldr      d18, [x16]
00a1f8bc:  ldr      d19, [x13]
00a1f8c0:  ldr      d20, [x15]
00a1f8c4:  ldr      d21, [x14]
00a1f8c8:  ldr      d22, [x15, x8]
00a1f8cc:  ldr      d23, [x14, x8]
00a1f8d0:  mov      v0.d[1], v2.d[0]
00a1f8d4:  mov      v1.d[1], v3.d[0]
00a1f8d8:  mov      v4.d[1], v5.d[0]
00a1f8dc:  mov      v6.d[1], v7.d[0]
00a1f8e0:  mov      v16.d[1], v17.d[0]
00a1f8e4:  mov      v18.d[1], v19.d[0]
00a1f8e8:  mov      v20.d[1], v21.d[0]
00a1f8ec:  mov      v22.d[1], v23.d[0]
00a1f8f0:  movi     v8.16b, #0x1b
00a1f8f4:  trn2     v2.4s, v0.4s, v16.4s
00a1f8f8:  trn2     v3.4s, v1.4s, v18.4s
00a1f8fc:  trn1     v0.4s, v0.4s, v16.4s
00a1f900:  trn2     v5.4s, v4.4s, v20.4s
00a1f904:  trn2     v7.4s, v6.4s, v22.4s
00a1f908:  trn1     v4.4s, v4.4s, v20.4s
00a1f90c:  trn1     v1.4s, v1.4s, v18.4s
00a1f910:  trn1     v6.4s, v6.4s, v22.4s
00a1f914:  trn1     v16.8h, v2.8h, v5.8h
00a1f918:  trn1     v17.8h, v3.8h, v7.8h
00a1f91c:  trn1     v18.8h, v0.8h, v4.8h
00a1f920:  trn1     v19.8h, v1.8h, v6.8h
00a1f924:  trn2     v4.8h, v0.8h, v4.8h
00a1f928:  trn2     v6.8h, v1.8h, v6.8h
00a1f92c:  movi     v1.16b, #0x80
00a1f930:  trn2     v2.8h, v2.8h, v5.8h
00a1f934:  trn2     v5.8h, v3.8h, v7.8h
00a1f938:  trn1     v20.16b, v16.16b, v17.16b
00a1f93c:  trn2     v22.16b, v16.16b, v17.16b
00a1f940:  movi     v17.16b, #3
00a1f944:  trn1     v0.16b, v18.16b, v19.16b
00a1f948:  trn2     v3.16b, v18.16b, v19.16b
00a1f94c:  movi     v19.8b, #3
00a1f950:  trn1     v18.16b, v4.16b, v6.16b
00a1f954:  trn2     v21.16b, v4.16b, v6.16b
00a1f958:  trn1     v4.16b, v2.16b, v5.16b
00a1f95c:  trn2     v2.16b, v2.16b, v5.16b
00a1f960:  eor      v7.16b, v20.16b, v1.16b
00a1f964:  uabd     v26.16b, v22.16b, v20.16b
00a1f968:  eor      v6.16b, v22.16b, v1.16b
00a1f96c:  uabd     v23.16b, v0.16b, v3.16b
00a1f970:  uabd     v24.16b, v3.16b, v18.16b
00a1f974:  uabd     v25.16b, v18.16b, v21.16b
00a1f978:  eor      v16.16b, v21.16b, v1.16b
00a1f97c:  smull    v27.8h, v7.8b, v19.8b
00a1f980:  eor      v5.16b, v18.16b, v1.16b
00a1f984:  uabd     v20.16b, v21.16b, v20.16b
00a1f988:  uabd     v18.16b, v18.16b, v22.16b
00a1f98c:  uabd     v28.16b, v4.16b, v22.16b
00a1f990:  uabd     v29.16b, v2.16b, v4.16b
00a1f994:  umax     v21.16b, v23.16b, v24.16b
00a1f998:  umax     v22.16b, v25.16b, v26.16b
00a1f99c:  smull2   v24.8h, v7.16b, v17.16b
00a1f9a0:  sqsub    v23.16b, v5.16b, v6.16b
00a1f9a4:  dup      v26.16b, w3
00a1f9a8:  eor      v3.16b, v3.16b, v1.16b
00a1f9ac:  smlsl    v27.8h, v16.8b, v19.8b
00a1f9b0:  uqadd    v19.16b, v20.16b, v20.16b
00a1f9b4:  ushr     v18.16b, v18.16b, #1
00a1f9b8:  umax     v20.16b, v28.16b, v29.16b
00a1f9bc:  umax     v21.16b, v21.16b, v22.16b
00a1f9c0:  movi     v28.16b, #9
00a1f9c4:  smlsl2   v24.8h, v16.16b, v17.16b
00a1f9c8:  movi     v29.8h, #0x3f
00a1f9cc:  eor      v4.16b, v4.16b, v1.16b
00a1f9d0:  saddw    v25.8h, v27.8h, v23.8b
00a1f9d4:  uqadd    v18.16b, v19.16b, v18.16b
00a1f9d8:  dup      v19.16b, w2
00a1f9dc:  umax     v20.16b, v21.16b, v20.16b
00a1f9e0:  saddw2   v23.8h, v24.8h, v23.16b
00a1f9e4:  movi     v24.8h, #0x3f
00a1f9e8:  sqxtn    v21.8b, v25.8h
00a1f9ec:  movi     v25.8b, #0x1b
00a1f9f0:  cmhs     v18.16b, v19.16b, v18.16b
00a1f9f4:  cmhs     v19.16b, v26.16b, v20.16b
00a1f9f8:  dup      v20.16b, w4
00a1f9fc:  movi     v26.8h, #0x3f
00a1fa00:  sqxtn2   v21.16b, v23.8h
00a1fa04:  and      v18.16b, v19.16b, v18.16b
00a1fa08:  cmhs     v19.16b, v20.16b, v22.16b
00a1fa0c:  movi     v20.16b, #4
00a1fa10:  movi     v22.8h, #0x3f
00a1fa14:  movi     v23.8b, #0x12
00a1fa18:  and      v18.16b, v18.16b, v21.16b
00a1fa1c:  movi     v21.8b, #9
00a1fa20:  bic      v27.16b, v18.16b, v19.16b
00a1fa24:  and      v18.16b, v19.16b, v18.16b
00a1fa28:  movi     v19.8h, #0x3f
00a1fa2c:  sqadd    v20.16b, v27.16b, v20.16b
00a1fa30:  smlal    v22.8h, v18.8b, v21.8b
00a1fa34:  smlal    v24.8h, v18.8b, v23.8b
00a1fa38:  smlal    v26.8h, v18.8b, v25.8b
00a1fa3c:  sqadd    v17.16b, v27.16b, v17.16b
00a1fa40:  smlal2   v29.8h, v18.16b, v28.16b
00a1fa44:  smlal2   v31.8h, v18.16b, v30.16b
00a1fa48:  smlal2   v19.8h, v18.16b, v8.16b
00a1fa4c:  sshr     v18.16b, v20.16b, #3
00a1fa50:  sqshrn   v20.8b, v22.8h, #7
00a1fa54:  sqshrn   v21.8b, v24.8h, #7
00a1fa58:  sqshrn   v22.8b, v26.8h, #7
00a1fa5c:  sshr     v17.16b, v17.16b, #3
00a1fa60:  sqsub    v7.16b, v7.16b, v18.16b
00a1fa64:  sqshrn2  v20.16b, v29.8h, #7
00a1fa68:  sqshrn2  v21.16b, v31.8h, #7
00a1fa6c:  sqadd    v16.16b, v16.16b, v17.16b
00a1fa70:  sqshrn2  v22.16b, v19.8h, #7
00a1fa74:  sqadd    v3.16b, v3.16b, v20.16b
00a1fa78:  sqsub    v6.16b, v6.16b, v21.16b
00a1fa7c:  sqsub    v4.16b, v4.16b, v20.16b
00a1fa80:  sqsub    v7.16b, v7.16b, v22.16b
00a1fa84:  sqadd    v5.16b, v5.16b, v21.16b
00a1fa88:  sqadd    v16.16b, v16.16b, v22.16b
00a1fa8c:  eor      v3.16b, v3.16b, v1.16b
00a1fa90:  eor      v6.16b, v6.16b, v1.16b
00a1fa94:  eor      v4.16b, v4.16b, v1.16b
00a1fa98:  eor      v7.16b, v7.16b, v1.16b
00a1fa9c:  eor      v5.16b, v5.16b, v1.16b
00a1faa0:  eor      v1.16b, v16.16b, v1.16b
00a1faa4:  trn1     v17.4s, v3.4s, v6.4s
00a1faa8:  trn2     v3.4s, v3.4s, v6.4s
00a1faac:  trn1     v16.4s, v0.4s, v7.4s
00a1fab0:  trn1     v18.4s, v5.4s, v4.4s
00a1fab4:  trn1     v19.4s, v1.4s, v2.4s
00a1fab8:  trn2     v0.4s, v0.4s, v7.4s
00a1fabc:  trn2     v4.4s, v5.4s, v4.4s
00a1fac0:  trn2     v1.4s, v1.4s, v2.4s
00a1fac4:  trn1     v2.8h, v16.8h, v18.8h
00a1fac8:  trn1     v5.8h, v17.8h, v19.8h
00a1facc:  trn2     v6.8h, v16.8h, v18.8h
00a1fad0:  trn2     v7.8h, v17.8h, v19.8h
00a1fad4:  trn1     v16.8h, v0.8h, v4.8h
00a1fad8:  trn1     v17.8h, v3.8h, v1.8h
00a1fadc:  trn2     v0.8h, v0.8h, v4.8h
00a1fae0:  trn2     v1.8h, v3.8h, v1.8h
00a1fae4:  trn1     v18.16b, v2.16b, v5.16b
00a1fae8:  trn2     v2.16b, v2.16b, v5.16b
00a1faec:  trn1     v3.16b, v6.16b, v7.16b
00a1faf0:  trn2     v4.16b, v6.16b, v7.16b
00a1faf4:  trn1     v5.16b, v16.16b, v17.16b
00a1faf8:  trn2     v6.16b, v16.16b, v17.16b
00a1fafc:  trn1     v7.16b, v0.16b, v1.16b
00a1fb00:  trn2     v0.16b, v0.16b, v1.16b
00a1fb04:  str      d18, [x0]
00a1fb08:  ext      v1.16b, v18.16b, v18.16b, #8
00a1fb0c:  str      d2, [x17]
00a1fb10:  ext      v2.16b, v2.16b, v2.16b, #8
00a1fb14:  str      d3, [x1]
00a1fb18:  ext      v3.16b, v3.16b, v3.16b, #8
00a1fb1c:  str      d4, [x6]
00a1fb20:  ext      v4.16b, v4.16b, v4.16b, #8
00a1fb24:  str      d5, [x7]
00a1fb28:  ext      v5.16b, v5.16b, v5.16b, #8
00a1fb2c:  str      d6, [x16]
00a1fb30:  str      d7, [x15]
00a1fb34:  str      d0, [x15, x8]
00a1fb38:  ext      v0.16b, v0.16b, v0.16b, #8
00a1fb3c:  str      d1, [x5]
00a1fb40:  ext      v1.16b, v6.16b, v6.16b, #8
00a1fb44:  str      d2, [x9]
00a1fb48:  ext      v2.16b, v7.16b, v7.16b, #8
00a1fb4c:  str      d3, [x10]
00a1fb50:  str      d4, [x11]
00a1fb54:  str      d5, [x12]
00a1fb58:  str      d1, [x13]
00a1fb5c:  str      d2, [x14]
00a1fb60:  str      d0, [x14, x8]
00a1fb64:  ldr      d8, [sp], #0x10
00a1fb68:  ret      

; ===== 00a217f8  FUN_00a217f8  (580 bytes) =====
00a217f8:  bti      c
00a217fc:  sxtw     x8, w1
00a21800:  ldr      d0, [x0, #-4]!
00a21804:  add      x9, x0, x8
00a21808:  add      x10, x9, x8
00a2180c:  ldr      d1, [x9]
00a21810:  add      x11, x10, x8
00a21814:  ldr      d2, [x10]
00a21818:  add      x12, x11, x8
00a2181c:  ldr      d3, [x11]
00a21820:  add      x13, x12, x8
00a21824:  ldr      d4, [x12]
00a21828:  add      x14, x13, x8
00a2182c:  ldr      d5, [x13]
00a21830:  add      x15, x14, x8
00a21834:  ldr      d6, [x14]
00a21838:  add      x16, x15, x8
00a2183c:  ldr      d7, [x15]
00a21840:  add      x9, x16, x8
00a21844:  ldr      d16, [x16]
00a21848:  add      x10, x9, x8
00a2184c:  ldr      d17, [x9]
00a21850:  add      x11, x10, x8
00a21854:  ldr      d18, [x10]
00a21858:  mov      v0.d[1], v16.d[0]
00a2185c:  add      x12, x11, x8
00a21860:  ldr      d19, [x11]
00a21864:  mov      v1.d[1], v17.d[0]
00a21868:  add      x9, x12, x8
00a2186c:  ldr      d20, [x12]
00a21870:  mov      v2.d[1], v18.d[0]
00a21874:  add      x10, x9, x8
00a21878:  ldr      d21, [x9]
00a2187c:  mov      v3.d[1], v19.d[0]
00a21880:  ldr      d22, [x10]
00a21884:  ldr      d23, [x10, x8]
00a21888:  mov      v4.d[1], v20.d[0]
00a2188c:  mov      v5.d[1], v21.d[0]
00a21890:  dup      v21.16b, w4
00a21894:  lsl      w9, w1, #3
00a21898:  mov      v6.d[1], v22.d[0]
00a2189c:  mov      v7.d[1], v23.d[0]
00a218a0:  add      x10, x0, #2
00a218a4:  sxtw     x9, w9
00a218a8:  add      x11, x10, x8
00a218ac:  trn1     v16.4s, v0.4s, v4.4s
00a218b0:  trn2     v4.4s, v0.4s, v4.4s
00a218b4:  trn1     v0.4s, v1.4s, v5.4s
00a218b8:  trn2     v1.4s, v1.4s, v5.4s
00a218bc:  trn1     v17.4s, v2.4s, v6.4s
00a218c0:  trn1     v18.4s, v3.4s, v7.4s
00a218c4:  trn2     v2.4s, v2.4s, v6.4s
00a218c8:  trn2     v3.4s, v3.4s, v7.4s
00a218cc:  trn2     v5.8h, v16.8h, v17.8h
00a218d0:  trn2     v6.8h, v0.8h, v18.8h
00a218d4:  trn1     v7.8h, v4.8h, v2.8h
00a218d8:  trn1     v19.8h, v1.8h, v3.8h
00a218dc:  trn1     v16.8h, v16.8h, v17.8h
00a218e0:  trn1     v17.8h, v0.8h, v18.8h
00a218e4:  movi     v0.16b, #0x80
00a218e8:  trn2     v2.8h, v4.8h, v2.8h
00a218ec:  trn2     v1.8h, v1.8h, v3.8h
00a218f0:  trn1     v18.16b, v5.16b, v6.16b
00a218f4:  trn2     v5.16b, v5.16b, v6.16b
00a218f8:  trn1     v6.16b, v7.16b, v19.16b
00a218fc:  trn2     v7.16b, v7.16b, v19.16b
00a21900:  movi     v19.8b, #3
00a21904:  trn1     v3.16b, v16.16b, v17.16b
00a21908:  trn2     v4.16b, v16.16b, v17.16b
00a2190c:  trn1     v24.16b, v2.16b, v1.16b
00a21910:  trn2     v1.16b, v2.16b, v1.16b
00a21914:  uabd     v16.16b, v18.16b, v5.16b
00a21918:  eor      v23.16b, v18.16b, v0.16b
00a2191c:  eor      v25.16b, v5.16b, v0.16b
00a21920:  uabd     v17.16b, v7.16b, v6.16b
00a21924:  eor      v20.16b, v6.16b, v0.16b
00a21928:  eor      v22.16b, v7.16b, v0.16b
00a2192c:  uabd     v3.16b, v3.16b, v4.16b
00a21930:  uabd     v4.16b, v4.16b, v18.16b
00a21934:  uabd     v5.16b, v5.16b, v6.16b
00a21938:  uabd     v1.16b, v1.16b, v24.16b
00a2193c:  umax     v2.16b, v16.16b, v17.16b
00a21940:  movi     v16.16b, #3
00a21944:  smull    v17.8h, v20.8b, v19.8b
00a21948:  sqsub    v26.16b, v23.16b, v22.16b
00a2194c:  umax     v3.16b, v3.16b, v4.16b
00a21950:  uqadd    v5.16b, v5.16b, v5.16b
00a21954:  cmhs     v6.16b, v21.16b, v2.16b
00a21958:  uabd     v21.16b, v24.16b, v7.16b
00a2195c:  uabd     v7.16b, v18.16b, v7.16b
00a21960:  smull2   v4.8h, v20.16b, v16.16b
00a21964:  smlsl    v17.8h, v25.8b, v19.8b
00a21968:  umax     v2.16b, v3.16b, v2.16b
00a2196c:  bic      v18.16b, v26.16b, v6.16b
00a21970:  ushr     v7.16b, v7.16b, #1
00a21974:  umax     v1.16b, v21.16b, v1.16b
00a21978:  smlsl2   v4.8h, v25.16b, v16.16b
00a2197c:  saddw    v3.8h, v17.8h, v18.8b
00a21980:  uqadd    v5.16b, v5.16b, v7.16b
00a21984:  dup      v7.16b, w2
00a21988:  dup      v17.16b, w3
00a2198c:  umax     v1.16b, v2.16b, v1.16b
00a21990:  sqxtn    v2.8b, v3.8h
00a21994:  saddw2   v3.8h, v4.8h, v18.16b
00a21998:  cmhs     v4.16b, v7.16b, v5.16b
00a2199c:  cmhs     v1.16b, v17.16b, v1.16b
00a219a0:  sqxtn2   v2.16b, v3.8h
00a219a4:  and      v1.16b, v1.16b, v4.16b
00a219a8:  movi     v3.16b, #4
00a219ac:  and      v1.16b, v1.16b, v2.16b
00a219b0:  sqadd    v2.16b, v1.16b, v3.16b
00a219b4:  sqadd    v1.16b, v1.16b, v16.16b
00a219b8:  sshr     v2.16b, v2.16b, #3
00a219bc:  sshr     v1.16b, v1.16b, #3
00a219c0:  srshr    v3.16b, v2.16b, #1
00a219c4:  sqsub    v2.16b, v20.16b, v2.16b
00a219c8:  sqadd    v1.16b, v25.16b, v1.16b
00a219cc:  and      v3.16b, v6.16b, v3.16b
00a219d0:  sqsub    v4.16b, v22.16b, v3.16b
00a219d4:  sqadd    v3.16b, v23.16b, v3.16b
00a219d8:  eor      v7.16b, v4.16b, v0.16b
00a219dc:  eor      v6.16b, v2.16b, v0.16b
00a219e0:  eor      v5.16b, v1.16b, v0.16b
00a219e4:  eor      v4.16b, v3.16b, v0.16b
00a219e8:  ext      v0.16b, v4.16b, v4.16b, #8
00a219ec:  st4      {v4.b, v5.b, v6.b, v7.b}[0], [x10], x9
00a219f0:  ext      v1.16b, v5.16b, v5.16b, #8
00a219f4:  st4      {v4.b, v5.b, v6.b, v7.b}[1], [x11], x8
00a219f8:  ext      v2.16b, v6.16b, v6.16b, #8
00a219fc:  ext      v3.16b, v7.16b, v7.16b, #8
00a21a00:  st4      {v4.b, v5.b, v6.b, v7.b}[2], [x11], x8
00a21a04:  st4      {v4.b, v5.b, v6.b, v7.b}[3], [x11], x8
00a21a08:  st4      {v4.b, v5.b, v6.b, v7.b}[4], [x11], x8
00a21a0c:  st4      {v4.b, v5.b, v6.b, v7.b}[5], [x11], x8
00a21a10:  st4      {v4.b, v5.b, v6.b, v7.b}[6], [x11], x8
00a21a14:  st4      {v4.b, v5.b, v6.b, v7.b}[7], [x11]
00a21a18:  st4      {v0.b, v1.b, v2.b, v3.b}[0], [x10], x8
00a21a1c:  st4      {v0.b, v1.b, v2.b, v3.b}[1], [x10], x8
00a21a20:  st4      {v0.b, v1.b, v2.b, v3.b}[2], [x10], x8
00a21a24:  st4      {v0.b, v1.b, v2.b, v3.b}[3], [x10], x8
00a21a28:  st4      {v0.b, v1.b, v2.b, v3.b}[4], [x10], x8
00a21a2c:  st4      {v0.b, v1.b, v2.b, v3.b}[5], [x10], x8
00a21a30:  st4      {v0.b, v1.b, v2.b, v3.b}[6], [x10], x8
00a21a34:  st4      {v0.b, v1.b, v2.b, v3.b}[7], [x10]
00a21a38:  ret      

; ===== 00a21a3c  FUN_00a21a3c  (564 bytes) =====
00a21a3c:  bti      c
00a21a40:  sxtw     x8, w1
00a21a44:  ldr      d0, [x0, #-4]!
00a21a48:  ldr      d2, [x5, #-4]!
00a21a4c:  add      x9, x0, x8
00a21a50:  add      x10, x5, x8
00a21a54:  ldr      d1, [x9]
00a21a58:  add      x9, x9, x8
00a21a5c:  ldr      d3, [x10]
00a21a60:  add      x11, x9, x8
00a21a64:  add      x10, x10, x8
00a21a68:  ldr      d4, [x9]
00a21a6c:  add      x12, x11, x8
00a21a70:  add      x9, x10, x8
00a21a74:  ldr      d5, [x11]
00a21a78:  add      x11, x12, x8
00a21a7c:  ldr      d6, [x12]
00a21a80:  add      x12, x9, x8
00a21a84:  ldr      d7, [x11]
00a21a88:  add      x11, x11, x8
00a21a8c:  ldr      d19, [x9]
00a21a90:  ldr      d16, [x11]
00a21a94:  ldr      d17, [x11, x8]
00a21a98:  add      x11, x12, x8
00a21a9c:  add      x9, x11, x8
00a21aa0:  ldr      d18, [x10]
00a21aa4:  ldr      d20, [x12]
00a21aa8:  ldr      d21, [x11]
00a21aac:  ldr      d22, [x9]
00a21ab0:  ldr      d23, [x9, x8]
00a21ab4:  mov      v0.d[1], v2.d[0]
00a21ab8:  mov      v1.d[1], v3.d[0]
00a21abc:  mov      v4.d[1], v18.d[0]
00a21ac0:  mov      v5.d[1], v19.d[0]
00a21ac4:  mov      v6.d[1], v20.d[0]
00a21ac8:  mov      v7.d[1], v21.d[0]
00a21acc:  mov      v16.d[1], v22.d[0]
00a21ad0:  mov      v17.d[1], v23.d[0]
00a21ad4:  dup      v21.16b, w4
00a21ad8:  add      x9, x0, #2
00a21adc:  trn1     v2.4s, v0.4s, v6.4s
00a21ae0:  trn2     v3.4s, v0.4s, v6.4s
00a21ae4:  trn1     v0.4s, v1.4s, v7.4s
00a21ae8:  trn1     v6.4s, v4.4s, v16.4s
00a21aec:  trn1     v18.4s, v5.4s, v17.4s
00a21af0:  trn2     v1.4s, v1.4s, v7.4s
00a21af4:  trn2     v4.4s, v4.4s, v16.4s
00a21af8:  trn2     v5.4s, v5.4s, v17.4s
00a21afc:  trn2     v7.8h, v2.8h, v6.8h
00a21b00:  trn2     v16.8h, v0.8h, v18.8h
00a21b04:  trn1     v2.8h, v2.8h, v6.8h
00a21b08:  trn1     v17.8h, v3.8h, v4.8h
00a21b0c:  trn1     v19.8h, v1.8h, v5.8h
00a21b10:  trn1     v6.8h, v0.8h, v18.8h
00a21b14:  movi     v0.16b, #0x80
00a21b18:  trn2     v3.8h, v3.8h, v4.8h
00a21b1c:  trn2     v1.8h, v1.8h, v5.8h
00a21b20:  trn1     v18.16b, v7.16b, v16.16b
00a21b24:  trn2     v7.16b, v7.16b, v16.16b
00a21b28:  trn1     v16.16b, v17.16b, v19.16b
00a21b2c:  trn2     v17.16b, v17.16b, v19.16b
00a21b30:  movi     v19.8b, #3
00a21b34:  trn1     v4.16b, v2.16b, v6.16b
00a21b38:  trn2     v2.16b, v2.16b, v6.16b
00a21b3c:  trn1     v24.16b, v3.16b, v1.16b
00a21b40:  trn2     v1.16b, v3.16b, v1.16b
00a21b44:  uabd     v5.16b, v18.16b, v7.16b
00a21b48:  eor      v23.16b, v18.16b, v0.16b
00a21b4c:  eor      v25.16b, v7.16b, v0.16b
00a21b50:  uabd     v6.16b, v17.16b, v16.16b
00a21b54:  eor      v20.16b, v16.16b, v0.16b
00a21b58:  eor      v22.16b, v17.16b, v0.16b
00a21b5c:  uabd     v4.16b, v4.16b, v2.16b
00a21b60:  uabd     v2.16b, v2.16b, v18.16b
00a21b64:  uabd     v7.16b, v7.16b, v16.16b
00a21b68:  uabd     v1.16b, v1.16b, v24.16b
00a21b6c:  umax     v3.16b, v5.16b, v6.16b
00a21b70:  movi     v5.16b, #3
00a21b74:  smull    v6.8h, v20.8b, v19.8b
00a21b78:  sqsub    v26.16b, v23.16b, v22.16b
00a21b7c:  umax     v2.16b, v4.16b, v2.16b
00a21b80:  uqadd    v7.16b, v7.16b, v7.16b
00a21b84:  cmhs     v16.16b, v21.16b, v3.16b
00a21b88:  uabd     v21.16b, v24.16b, v17.16b
00a21b8c:  uabd     v17.16b, v18.16b, v17.16b
00a21b90:  smull2   v4.8h, v20.16b, v5.16b
00a21b94:  smlsl    v6.8h, v25.8b, v19.8b
00a21b98:  umax     v2.16b, v2.16b, v3.16b
00a21b9c:  bic      v18.16b, v26.16b, v16.16b
00a21ba0:  ushr     v17.16b, v17.16b, #1
00a21ba4:  umax     v1.16b, v21.16b, v1.16b
00a21ba8:  smlsl2   v4.8h, v25.16b, v5.16b
00a21bac:  saddw    v3.8h, v6.8h, v18.8b
00a21bb0:  uqadd    v6.16b, v7.16b, v17.16b
00a21bb4:  dup      v7.16b, w2
00a21bb8:  dup      v17.16b, w3
00a21bbc:  umax     v1.16b, v2.16b, v1.16b
00a21bc0:  sqxtn    v2.8b, v3.8h
00a21bc4:  saddw2   v3.8h, v4.8h, v18.16b
00a21bc8:  cmhs     v4.16b, v7.16b, v6.16b
00a21bcc:  cmhs     v1.16b, v17.16b, v1.16b
00a21bd0:  sqxtn2   v2.16b, v3.8h
00a21bd4:  and      v1.16b, v1.16b, v4.16b
00a21bd8:  movi     v3.16b, #4
00a21bdc:  and      v1.16b, v1.16b, v2.16b
00a21be0:  sqadd    v2.16b, v1.16b, v3.16b
00a21be4:  sqadd    v1.16b, v1.16b, v5.16b
00a21be8:  sshr     v2.16b, v2.16b, #3
00a21bec:  sshr     v1.16b, v1.16b, #3
00a21bf0:  srshr    v3.16b, v2.16b, #1
00a21bf4:  sqsub    v2.16b, v20.16b, v2.16b
00a21bf8:  sqadd    v1.16b, v25.16b, v1.16b
00a21bfc:  and      v3.16b, v16.16b, v3.16b
00a21c00:  sqsub    v4.16b, v22.16b, v3.16b
00a21c04:  sqadd    v3.16b, v23.16b, v3.16b
00a21c08:  eor      v7.16b, v4.16b, v0.16b
00a21c0c:  eor      v6.16b, v2.16b, v0.16b
00a21c10:  eor      v5.16b, v1.16b, v0.16b
00a21c14:  eor      v4.16b, v3.16b, v0.16b
00a21c18:  st4      {v4.b, v5.b, v6.b, v7.b}[0], [x9], x8
00a21c1c:  ext      v0.16b, v4.16b, v4.16b, #8
00a21c20:  ext      v1.16b, v5.16b, v5.16b, #8
00a21c24:  st4      {v4.b, v5.b, v6.b, v7.b}[1], [x9], x8
00a21c28:  ext      v2.16b, v6.16b, v6.16b, #8
00a21c2c:  ext      v3.16b, v7.16b, v7.16b, #8
00a21c30:  st4      {v4.b, v5.b, v6.b, v7.b}[2], [x9], x8
00a21c34:  st4      {v4.b, v5.b, v6.b, v7.b}[3], [x9], x8
00a21c38:  st4      {v4.b, v5.b, v6.b, v7.b}[4], [x9], x8
00a21c3c:  st4      {v4.b, v5.b, v6.b, v7.b}[5], [x9], x8
00a21c40:  st4      {v4.b, v5.b, v6.b, v7.b}[6], [x9], x8
00a21c44:  st4      {v4.b, v5.b, v6.b, v7.b}[7], [x9]
00a21c48:  add      x9, x5, #2
00a21c4c:  st4      {v0.b, v1.b, v2.b, v3.b}[0], [x9], x8
00a21c50:  st4      {v0.b, v1.b, v2.b, v3.b}[1], [x9], x8
00a21c54:  st4      {v0.b, v1.b, v2.b, v3.b}[2], [x9], x8
00a21c58:  st4      {v0.b, v1.b, v2.b, v3.b}[3], [x9], x8
00a21c5c:  st4      {v0.b, v1.b, v2.b, v3.b}[4], [x9], x8
00a21c60:  st4      {v0.b, v1.b, v2.b, v3.b}[5], [x9], x8
00a21c64:  st4      {v0.b, v1.b, v2.b, v3.b}[6], [x9], x8
00a21c68:  st4      {v0.b, v1.b, v2.b, v3.b}[7], [x9]
00a21c6c:  ret      

; ===== 00a2fbd0  FUN_00a2fbd0  (816 bytes) =====
00a2fbd0:  adrp     x8, #0x23d000
00a2fbd4:  add      x8, x8, #0x4a0
00a2fbd8:  cmp      w4, #4
00a2fbdc:  ld1      {v1.16b, v2.16b, v3.16b}, [x8]
00a2fbe0:  b.ne     #0xa2fd30
00a2fbe4:  add      x8, x0, x1
00a2fbe8:  movi     v4.8b, #0x80
00a2fbec:  ldr      d6, [x0]
00a2fbf0:  add      x9, x8, x1
00a2fbf4:  ldr      d5, [x8]
00a2fbf8:  add      x8, x9, x1
00a2fbfc:  ldr      d7, [x9]
00a2fc00:  add      x9, x8, x1
00a2fc04:  ldr      d16, [x8]
00a2fc08:  add      x8, x9, x1
00a2fc0c:  ldr      d17, [x9]
00a2fc10:  eor      v6.8b, v6.8b, v4.8b
00a2fc14:  ldr      d18, [x8]
00a2fc18:  ldr      d19, [x8, x1]
00a2fc1c:  eor      v5.8b, v5.8b, v4.8b
00a2fc20:  eor      v7.8b, v7.8b, v4.8b
00a2fc24:  eor      v16.8b, v16.8b, v4.8b
00a2fc28:  eor      v17.8b, v17.8b, v4.8b
00a2fc2c:  eor      v18.8b, v18.8b, v4.8b
00a2fc30:  eor      v19.8b, v19.8b, v4.8b
00a2fc34:  sub      x8, x0, x1
00a2fc38:  add      x8, x8, x1, lsl #3
00a2fc3c:  zip1     v6.8b, v6.8b, v7.8b
00a2fc40:  zip1     v5.8b, v5.8b, v16.8b
00a2fc44:  zip1     v7.8b, v7.8b, v17.8b
00a2fc48:  zip1     v20.8b, v16.8b, v18.8b
00a2fc4c:  zip1     v19.8b, v17.8b, v19.8b
00a2fc50:  zip1     v18.16b, v6.16b, v5.16b
00a2fc54:  zip1     v16.16b, v5.16b, v7.16b
00a2fc58:  zip1     v17.16b, v7.16b, v20.16b
00a2fc5c:  zip1     v5.16b, v20.16b, v19.16b
00a2fc60:  dup      v7.4s, v0.s[0]
00a2fc64:  dup      v0.4s, v0.s[1]
00a2fc68:  add      x9, x8, x1
00a2fc6c:  ldr      d19, [x8]
00a2fc70:  subs     w5, w5, #4
00a2fc74:  add      x10, x9, x1
00a2fc78:  ldr      d20, [x9]
00a2fc7c:  add      x9, x2, x3
00a2fc80:  add      x8, x10, x1
00a2fc84:  ldr      d21, [x10]
00a2fc88:  eor      v19.8b, v19.8b, v4.8b
00a2fc8c:  ldr      d22, [x8]
00a2fc90:  eor      v20.8b, v20.8b, v4.8b
00a2fc94:  add      x8, x8, x1
00a2fc98:  eor      v21.8b, v21.8b, v4.8b
00a2fc9c:  eor      v22.8b, v22.8b, v4.8b
00a2fca0:  zip1     v19.8b, v19.8b, v21.8b
00a2fca4:  movi     v21.4s, #0x40, lsl #8
00a2fca8:  zip1     v20.8b, v20.8b, v22.8b
00a2fcac:  movi     v22.4s, #0x40, lsl #8
00a2fcb0:  sdot     v21.4s, v18.16b, v7.16b
00a2fcb4:  zip1     v6.16b, v19.16b, v20.16b
00a2fcb8:  movi     v19.4s, #0x40, lsl #8
00a2fcbc:  movi     v20.4s, #0x40, lsl #8
00a2fcc0:  sdot     v22.4s, v5.16b, v7.16b
00a2fcc4:  tbl      v18.16b, {v5.16b, v6.16b}, v1.16b
00a2fcc8:  sdot     v19.4s, v17.16b, v7.16b
00a2fccc:  tbl      v17.16b, {v5.16b, v6.16b}, v3.16b
00a2fcd0:  sdot     v20.4s, v16.16b, v7.16b
00a2fcd4:  tbl      v16.16b, {v5.16b, v6.16b}, v2.16b
00a2fcd8:  sdot     v22.4s, v6.16b, v0.16b
00a2fcdc:  mov      v5.16b, v6.16b
00a2fce0:  sdot     v21.4s, v18.16b, v0.16b
00a2fce4:  sdot     v19.4s, v17.16b, v0.16b
00a2fce8:  sdot     v20.4s, v16.16b, v0.16b
00a2fcec:  shrn     v21.4h, v21.4s, #1
00a2fcf0:  shrn     v19.4h, v19.4s, #1
00a2fcf4:  shrn2    v21.8h, v20.4s, #1
00a2fcf8:  shrn2    v19.8h, v22.4s, #1
00a2fcfc:  sqrshrun v20.8b, v21.8h, #6
00a2fd00:  sqrshrun v19.8b, v19.8h, #6
00a2fd04:  mov      s21, v20.s[1]
00a2fd08:  mov      s22, v19.s[1]
00a2fd0c:  str      s20, [x2]
00a2fd10:  str      s21, [x9]
00a2fd14:  add      x9, x9, x3
00a2fd18:  str      s19, [x9]
00a2fd1c:  add      x9, x9, x3
00a2fd20:  add      x2, x9, x3
00a2fd24:  str      s22, [x9]
00a2fd28:  b.ne     #0xa2fc68
00a2fd2c:  b        #0xa2fefc
00a2fd30:  movi     v4.8b, #0x80
00a2fd34:  lsl      x9, x1, #3
00a2fd38:  dup      v5.4s, v0.s[0]
00a2fd3c:  dup      v0.4s, v0.s[1]
00a2fd40:  lsl      x8, x1, #2
00a2fd44:  sub      x9, x9, x1
00a2fd48:  add      x10, x0, x1
00a2fd4c:  ldr      d6, [x0]
00a2fd50:  add      x11, x10, x1
00a2fd54:  ldr      d7, [x10]
00a2fd58:  add      x12, x11, x1
00a2fd5c:  ldr      d16, [x11]
00a2fd60:  eor      v6.8b, v6.8b, v4.8b
00a2fd64:  add      x10, x12, x1
00a2fd68:  ldr      d17, [x12]
00a2fd6c:  eor      v7.8b, v7.8b, v4.8b
00a2fd70:  add      x11, x10, x1
00a2fd74:  ldr      d18, [x10]
00a2fd78:  eor      v16.8b, v16.8b, v4.8b
00a2fd7c:  ldr      d19, [x11]
00a2fd80:  ldr      d20, [x11, x1]
00a2fd84:  eor      v17.8b, v17.8b, v4.8b
00a2fd88:  eor      v18.8b, v18.8b, v4.8b
00a2fd8c:  mov      x10, x9
00a2fd90:  mov      w11, w5
00a2fd94:  eor      v19.8b, v19.8b, v4.8b
00a2fd98:  eor      v20.8b, v20.8b, v4.8b
00a2fd9c:  zip1     v6.16b, v6.16b, v16.16b
00a2fda0:  zip1     v7.16b, v7.16b, v17.16b
00a2fda4:  mov      x12, x2
00a2fda8:  zip1     v16.16b, v16.16b, v18.16b
00a2fdac:  zip1     v17.16b, v17.16b, v19.16b
00a2fdb0:  zip1     v24.16b, v18.16b, v20.16b
00a2fdb4:  zip1     v23.16b, v6.16b, v7.16b
00a2fdb8:  zip2     v22.16b, v6.16b, v7.16b
00a2fdbc:  zip1     v21.16b, v7.16b, v16.16b
00a2fdc0:  zip2     v19.16b, v7.16b, v16.16b
00a2fdc4:  zip1     v20.16b, v16.16b, v17.16b
00a2fdc8:  zip2     v18.16b, v16.16b, v17.16b
00a2fdcc:  zip1     v6.16b, v17.16b, v24.16b
00a2fdd0:  zip2     v16.16b, v17.16b, v24.16b
00a2fdd4:  add      x13, x0, x10
00a2fdd8:  movi     v28.4s, #0x40, lsl #8
00a2fddc:  movi     v30.4s, #0x40, lsl #8
00a2fde0:  add      x14, x13, x1
00a2fde4:  ldr      d24, [x13]
00a2fde8:  movi     v29.4s, #0x40, lsl #8
00a2fdec:  add      x13, x14, x1
00a2fdf0:  ldr      d25, [x14]
00a2fdf4:  movi     v31.4s, #0x40, lsl #8
00a2fdf8:  ldr      d26, [x13]
00a2fdfc:  ldr      d27, [x13, x1]
00a2fe00:  eor      v24.8b, v24.8b, v4.8b
00a2fe04:  eor      v25.8b, v25.8b, v4.8b
00a2fe08:  sdot     v28.4s, v22.16b, v5.16b
00a2fe0c:  sdot     v30.4s, v20.16b, v5.16b
00a2fe10:  eor      v26.8b, v26.8b, v4.8b
00a2fe14:  eor      v27.8b, v27.8b, v4.8b
00a2fe18:  sdot     v29.4s, v19.16b, v5.16b
00a2fe1c:  add      x13, x12, x3
00a2fe20:  subs     w11, w11, #4
00a2fe24:  add      x10, x10, x8
00a2fe28:  zip1     v26.16b, v24.16b, v26.16b
00a2fe2c:  zip1     v25.16b, v25.16b, v27.16b
00a2fe30:  movi     v24.4s, #0x40, lsl #8
00a2fe34:  movi     v27.4s, #0x40, lsl #8
00a2fe38:  zip1     v7.16b, v26.16b, v25.16b
00a2fe3c:  zip2     v17.16b, v26.16b, v25.16b
00a2fe40:  movi     v25.4s, #0x40, lsl #8
00a2fe44:  sdot     v24.4s, v23.16b, v5.16b
00a2fe48:  movi     v26.4s, #0x40, lsl #8
00a2fe4c:  sdot     v27.4s, v21.16b, v5.16b
00a2fe50:  sdot     v31.4s, v16.16b, v5.16b
00a2fe54:  tbl      v23.16b, {v6.16b, v7.16b}, v1.16b
00a2fe58:  tbl      v21.16b, {v6.16b, v7.16b}, v2.16b
00a2fe5c:  tbl      v20.16b, {v6.16b, v7.16b}, v3.16b
00a2fe60:  tbl      v22.16b, {v16.16b, v17.16b}, v1.16b
00a2fe64:  sdot     v25.4s, v6.16b, v5.16b
00a2fe68:  tbl      v19.16b, {v16.16b, v17.16b}, v2.16b
00a2fe6c:  sdot     v26.4s, v18.16b, v5.16b
00a2fe70:  tbl      v18.16b, {v16.16b, v17.16b}, v3.16b
00a2fe74:  sdot     v31.4s, v17.16b, v0.16b
00a2fe78:  mov      v16.16b, v17.16b
00a2fe7c:  sdot     v24.4s, v23.16b, v0.16b
00a2fe80:  sdot     v27.4s, v21.16b, v0.16b
00a2fe84:  sdot     v30.4s, v20.16b, v0.16b
00a2fe88:  sdot     v28.4s, v22.16b, v0.16b
00a2fe8c:  sdot     v25.4s, v7.16b, v0.16b
00a2fe90:  sdot     v29.4s, v19.16b, v0.16b
00a2fe94:  sdot     v26.4s, v18.16b, v0.16b
00a2fe98:  mov      v6.16b, v7.16b
00a2fe9c:  shrn     v24.4h, v24.4s, #1
00a2fea0:  shrn     v27.4h, v27.4s, #1
00a2fea4:  shrn     v25.4h, v25.4s, #1
00a2fea8:  shrn2    v24.8h, v28.4s, #1
00a2feac:  shrn     v28.4h, v30.4s, #1
00a2feb0:  shrn2    v27.8h, v29.4s, #1
00a2feb4:  shrn2    v25.8h, v31.4s, #1
00a2feb8:  shrn2    v28.8h, v26.4s, #1
00a2febc:  sqrshrun v24.8b, v24.8h, #6
00a2fec0:  sqrshrun v26.8b, v27.8h, #6
00a2fec4:  sqrshrun v25.8b, v25.8h, #6
00a2fec8:  sqrshrun v27.8b, v28.8h, #6
00a2fecc:  str      d24, [x12]
00a2fed0:  add      x12, x13, x3
00a2fed4:  str      d26, [x13]
00a2fed8:  add      x13, x12, x3
00a2fedc:  str      d27, [x12]
00a2fee0:  add      x12, x13, x3
00a2fee4:  str      d25, [x13]
00a2fee8:  b.ne     #0xa2fdd4
00a2feec:  subs     w4, w4, #8
00a2fef0:  add      x0, x0, #8
00a2fef4:  add      x2, x2, #8
00a2fef8:  b.ne     #0xa2fd48
00a2fefc:  ret      

; ===== 00a2ff00  FUN_00a2ff00  (904 bytes) =====
00a2ff00:  bti      c
00a2ff04:  ldr      q0, [x4, w7, sxtw #4]
00a2ff08:  adrp     x8, #0x23d000
00a2ff0c:  add      x8, x8, #0x4a0
00a2ff10:  ldr      w10, [sp, #8]
00a2ff14:  sub      x9, x1, x1, lsl #2
00a2ff18:  xtn      v7.8b, v0.8h
00a2ff1c:  ld1      {v0.16b, v1.16b, v2.16b}, [x8]
00a2ff20:  ldr      w8, [sp, #0x10]
00a2ff24:  cmp      w10, #4
00a2ff28:  add      x9, x0, x9
00a2ff2c:  b.ne     #0xa3009c
00a2ff30:  add      x10, x9, x1
00a2ff34:  movi     v3.8b, #0x80
00a2ff38:  ldr      d4, [x9]
00a2ff3c:  add      x11, x10, x1
00a2ff40:  ldr      d5, [x10]
00a2ff44:  add      x12, x11, x1
00a2ff48:  ldr      d6, [x11]
00a2ff4c:  add      x10, x12, x1
00a2ff50:  ldr      d16, [x12]
00a2ff54:  ldr      d17, [x10]
00a2ff58:  add      x10, x10, x1
00a2ff5c:  eor      v4.8b, v4.8b, v3.8b
00a2ff60:  ldr      d18, [x10]
00a2ff64:  ldr      d19, [x10, x1]
00a2ff68:  eor      v5.8b, v5.8b, v3.8b
00a2ff6c:  eor      v6.8b, v6.8b, v3.8b
00a2ff70:  eor      v16.8b, v16.8b, v3.8b
00a2ff74:  eor      v17.8b, v17.8b, v3.8b
00a2ff78:  eor      v18.8b, v18.8b, v3.8b
00a2ff7c:  eor      v19.8b, v19.8b, v3.8b
00a2ff80:  sub      x10, x9, x1
00a2ff84:  lsl      x9, x3, #1
00a2ff88:  add      x12, x10, x1, lsl #3
00a2ff8c:  lsl      x10, x3, #2
00a2ff90:  zip1     v4.8b, v4.8b, v6.8b
00a2ff94:  zip1     v5.8b, v5.8b, v16.8b
00a2ff98:  zip1     v6.8b, v6.8b, v17.8b
00a2ff9c:  zip1     v20.8b, v16.8b, v18.8b
00a2ffa0:  zip1     v19.8b, v17.8b, v19.8b
00a2ffa4:  add      x11, x9, x3
00a2ffa8:  zip1     v18.16b, v4.16b, v5.16b
00a2ffac:  zip1     v16.16b, v5.16b, v6.16b
00a2ffb0:  zip1     v17.16b, v6.16b, v20.16b
00a2ffb4:  zip1     v4.16b, v20.16b, v19.16b
00a2ffb8:  dup      v6.4s, v7.s[0]
00a2ffbc:  dup      v7.4s, v7.s[1]
00a2ffc0:  add      x13, x12, x1
00a2ffc4:  ldr      d19, [x12]
00a2ffc8:  subs     w8, w8, #4
00a2ffcc:  add      x14, x13, x1
00a2ffd0:  ldr      d20, [x13]
00a2ffd4:  add      x13, x2, x3
00a2ffd8:  add      x12, x14, x1
00a2ffdc:  ldr      d21, [x14]
00a2ffe0:  eor      v19.8b, v19.8b, v3.8b
00a2ffe4:  ldr      d22, [x12]
00a2ffe8:  eor      v20.8b, v20.8b, v3.8b
00a2ffec:  add      x12, x12, x1
00a2fff0:  eor      v21.8b, v21.8b, v3.8b
00a2fff4:  eor      v22.8b, v22.8b, v3.8b
00a2fff8:  zip1     v19.8b, v19.8b, v21.8b
00a2fffc:  movi     v21.4s, #0x40, lsl #8
00a30000:  zip1     v20.8b, v20.8b, v22.8b
00a30004:  movi     v22.4s, #0x40, lsl #8
00a30008:  sdot     v21.4s, v18.16b, v6.16b
00a3000c:  zip1     v5.16b, v19.16b, v20.16b
00a30010:  movi     v19.4s, #0x40, lsl #8
00a30014:  movi     v20.4s, #0x40, lsl #8
00a30018:  sdot     v22.4s, v4.16b, v6.16b
00a3001c:  tbl      v18.16b, {v4.16b, v5.16b}, v0.16b
00a30020:  sdot     v19.4s, v17.16b, v6.16b
00a30024:  tbl      v17.16b, {v4.16b, v5.16b}, v2.16b
00a30028:  sdot     v20.4s, v16.16b, v6.16b
00a3002c:  tbl      v16.16b, {v4.16b, v5.16b}, v1.16b
00a30030:  sdot     v22.4s, v5.16b, v7.16b
00a30034:  mov      v4.16b, v5.16b
00a30038:  sdot     v21.4s, v18.16b, v7.16b
00a3003c:  sdot     v19.4s, v17.16b, v7.16b
00a30040:  sdot     v20.4s, v16.16b, v7.16b
00a30044:  shrn     v21.4h, v21.4s, #1
00a30048:  shrn     v19.4h, v19.4s, #1
00a3004c:  shrn2    v21.8h, v20.4s, #1
00a30050:  shrn2    v19.8h, v22.4s, #1
00a30054:  ldr      s20, [x2]
00a30058:  ldr      s22, [x2, x9]
00a3005c:  ld1      {v20.s}[1], [x13]
00a30060:  add      x13, x2, x11
00a30064:  sqrshrun v21.8b, v21.8h, #6
00a30068:  sqrshrun v19.8b, v19.8h, #6
00a3006c:  ld1      {v22.s}[1], [x13]
00a30070:  urhadd   v20.8b, v21.8b, v20.8b
00a30074:  urhadd   v19.8b, v19.8b, v22.8b
00a30078:  mov      s21, v20.s[1]
00a3007c:  str      s20, [x2]
00a30080:  mov      s20, v19.s[1]
00a30084:  str      s21, [x2, x3]
00a30088:  str      s19, [x2, x9]
00a3008c:  str      s20, [x2, x11]
00a30090:  add      x2, x2, x10
00a30094:  b.ne     #0xa2ffc0
00a30098:  b        #0xa30284
00a3009c:  movi     v3.8b, #0x80
00a300a0:  lsl      x13, x1, #3
00a300a4:  dup      v4.4s, v7.s[0]
00a300a8:  dup      v5.4s, v7.s[1]
00a300ac:  lsl      x11, x3, #1
00a300b0:  lsl      x12, x3, #2
00a300b4:  sub      x13, x13, x1
00a300b8:  add      x14, x11, x3
00a300bc:  add      x15, x9, x1
00a300c0:  ldr      d6, [x9]
00a300c4:  add      x16, x15, x1
00a300c8:  ldr      d7, [x15]
00a300cc:  add      x17, x16, x1
00a300d0:  ldr      d16, [x16]
00a300d4:  eor      v6.8b, v6.8b, v3.8b
00a300d8:  add      x15, x17, x1
00a300dc:  ldr      d17, [x17]
00a300e0:  eor      v7.8b, v7.8b, v3.8b
00a300e4:  add      x16, x15, x1
00a300e8:  ldr      d18, [x15]
00a300ec:  eor      v16.8b, v16.8b, v3.8b
00a300f0:  ldr      d19, [x16]
00a300f4:  ldr      d20, [x16, x1]
00a300f8:  eor      v17.8b, v17.8b, v3.8b
00a300fc:  eor      v18.8b, v18.8b, v3.8b
00a30100:  add      x17, x9, x13
00a30104:  mov      w15, w8
00a30108:  eor      v19.8b, v19.8b, v3.8b
00a3010c:  eor      v20.8b, v20.8b, v3.8b
00a30110:  zip1     v6.16b, v6.16b, v16.16b
00a30114:  zip1     v7.16b, v7.16b, v17.16b
00a30118:  mov      x16, x2
00a3011c:  zip1     v16.16b, v16.16b, v18.16b
00a30120:  zip1     v17.16b, v17.16b, v19.16b
00a30124:  zip1     v24.16b, v18.16b, v20.16b
00a30128:  zip1     v23.16b, v6.16b, v7.16b
00a3012c:  zip2     v22.16b, v6.16b, v7.16b
00a30130:  zip1     v21.16b, v7.16b, v16.16b
00a30134:  zip2     v19.16b, v7.16b, v16.16b
00a30138:  zip1     v20.16b, v16.16b, v17.16b
00a3013c:  zip2     v18.16b, v16.16b, v17.16b
00a30140:  zip1     v6.16b, v17.16b, v24.16b
00a30144:  zip2     v16.16b, v17.16b, v24.16b
00a30148:  add      x0, x17, x1
00a3014c:  ldr      d24, [x17]
00a30150:  movi     v28.4s, #0x40, lsl #8
00a30154:  add      x4, x0, x1
00a30158:  ldr      d25, [x0]
00a3015c:  movi     v29.4s, #0x40, lsl #8
00a30160:  add      x17, x4, x1
00a30164:  ldr      d26, [x4]
00a30168:  eor      v24.8b, v24.8b, v3.8b
00a3016c:  ldr      d27, [x17]
00a30170:  eor      v25.8b, v25.8b, v3.8b
00a30174:  movi     v30.4s, #0x40, lsl #8
00a30178:  eor      v26.8b, v26.8b, v3.8b
00a3017c:  movi     v31.4s, #0x40, lsl #8
00a30180:  sdot     v28.4s, v21.16b, v4.16b
00a30184:  eor      v27.8b, v27.8b, v3.8b
00a30188:  sdot     v29.4s, v20.16b, v4.16b
00a3018c:  subs     w15, w15, #4
00a30190:  add      x17, x17, x1
00a30194:  zip1     v26.16b, v24.16b, v26.16b
00a30198:  movi     v24.4s, #0x40, lsl #8
00a3019c:  sdot     v30.4s, v18.16b, v4.16b
00a301a0:  zip1     v27.16b, v25.16b, v27.16b
00a301a4:  movi     v25.4s, #0x40, lsl #8
00a301a8:  sdot     v24.4s, v22.16b, v4.16b
00a301ac:  zip1     v7.16b, v26.16b, v27.16b
00a301b0:  zip2     v17.16b, v26.16b, v27.16b
00a301b4:  movi     v26.4s, #0x40, lsl #8
00a301b8:  sdot     v25.4s, v23.16b, v4.16b
00a301bc:  movi     v27.4s, #0x40, lsl #8
00a301c0:  sdot     v31.4s, v16.16b, v4.16b
00a301c4:  tbl      v23.16b, {v6.16b, v7.16b}, v0.16b
00a301c8:  tbl      v21.16b, {v6.16b, v7.16b}, v1.16b
00a301cc:  tbl      v20.16b, {v6.16b, v7.16b}, v2.16b
00a301d0:  tbl      v22.16b, {v16.16b, v17.16b}, v0.16b
00a301d4:  sdot     v26.4s, v6.16b, v4.16b
00a301d8:  sdot     v27.4s, v19.16b, v4.16b
00a301dc:  tbl      v19.16b, {v16.16b, v17.16b}, v1.16b
00a301e0:  tbl      v18.16b, {v16.16b, v17.16b}, v2.16b
00a301e4:  sdot     v31.4s, v17.16b, v5.16b
00a301e8:  mov      v16.16b, v17.16b
00a301ec:  sdot     v25.4s, v23.16b, v5.16b
00a301f0:  sdot     v28.4s, v21.16b, v5.16b
00a301f4:  sdot     v29.4s, v20.16b, v5.16b
00a301f8:  sdot     v24.4s, v22.16b, v5.16b
00a301fc:  sdot     v26.4s, v7.16b, v5.16b
00a30200:  mov      v6.16b, v7.16b
00a30204:  sdot     v27.4s, v19.16b, v5.16b
00a30208:  sdot     v30.4s, v18.16b, v5.16b
00a3020c:  shrn     v25.4h, v25.4s, #1
00a30210:  shrn     v28.4h, v28.4s, #1
00a30214:  shrn     v29.4h, v29.4s, #1
00a30218:  shrn2    v25.8h, v24.4s, #1
00a3021c:  shrn     v24.4h, v26.4s, #1
00a30220:  shrn2    v28.8h, v27.4s, #1
00a30224:  shrn2    v29.8h, v30.4s, #1
00a30228:  ldr      d26, [x16]
00a3022c:  ldr      d30, [x16, x14]
00a30230:  shrn2    v24.8h, v31.4s, #1
00a30234:  sqrshrun v25.8b, v25.8h, #6
00a30238:  sqrshrun v27.8b, v28.8h, #6
00a3023c:  sqrshrun v28.8b, v29.8h, #6
00a30240:  ldr      d29, [x16, x3]
00a30244:  sqrshrun v24.8b, v24.8h, #6
00a30248:  urhadd   v25.8b, v25.8b, v26.8b
00a3024c:  ldr      d26, [x16, x11]
00a30250:  urhadd   v27.8b, v27.8b, v29.8b
00a30254:  urhadd   v26.8b, v28.8b, v26.8b
00a30258:  urhadd   v24.8b, v24.8b, v30.8b
00a3025c:  str      d25, [x16]
00a30260:  str      d27, [x16, x3]
00a30264:  str      d26, [x16, x11]
00a30268:  str      d24, [x16, x14]
00a3026c:  add      x16, x16, x12
00a30270:  b.ne     #0xa30148
00a30274:  subs     w10, w10, #8
00a30278:  add      x9, x9, #8
00a3027c:  add      x2, x2, #8
00a30280:  b.ne     #0xa300bc
00a30284:  ret      

; ===== 00a30288  FUN_00a30288  (1940 bytes) =====
00a30288:  paciasp  
00a3028c:  stp      x29, x30, [sp, #-0x60]!
00a30290:  stp      x28, x27, [sp, #0x10]
00a30294:  stp      x26, x25, [sp, #0x20]
00a30298:  stp      x24, x23, [sp, #0x30]
00a3029c:  stp      x22, x21, [sp, #0x40]
00a302a0:  stp      x20, x19, [sp, #0x50]
00a302a4:  mov      x29, sp
00a302a8:  sub      x9, sp, #1, lsl #12
00a302ac:  sub      x9, x9, #0x220
00a302b0:  and      sp, x9, #0xffffffffffffffe0
00a302b4:  mrs      x13, tpidr_el0
00a302b8:  add      x27, x4, w5, sxtw #4
00a302bc:  ldr      w25, [x29, #0x70]
00a302c0:  ldr      x8, [x13, #0x28]
00a302c4:  ldr      w21, [x29, #0x68]
00a302c8:  mov      x19, x3
00a302cc:  mov      x20, x2
00a302d0:  mov      x22, x1
00a302d4:  mov      x23, x0
00a302d8:  str      x8, [sp, #0x1218]
00a302dc:  ldrh     w8, [x27]
00a302e0:  ldrh     w9, [x27, #0xe]
00a302e4:  orr      w8, w9, w8
00a302e8:  cbz      w8, #0xa302f4
00a302ec:  mov      w8, wzr
00a302f0:  b        #0xa30308
00a302f4:  ldrh     w8, [x27, #2]
00a302f8:  ldrh     w9, [x27, #0xc]
00a302fc:  orr      w8, w9, w8
00a30300:  cmp      w8, #0
00a30304:  cset     w8, eq
00a30308:  add      x28, x4, w7, sxtw #4
00a3030c:  ldrh     w9, [x28]
00a30310:  ldrh     w10, [x28, #0xe]
00a30314:  orr      w9, w10, w9
00a30318:  cbnz     w9, #0xa3032c
00a3031c:  ldrh     w9, [x28, #2]
00a30320:  ldrh     w10, [x28, #0xc]
00a30324:  orr      w9, w10, w9
00a30328:  cbz      w9, #0xa306a8
00a3032c:  add      x24, x22, x22, lsl #1
00a30330:  cmp      w8, #0
00a30334:  mov      x8, #-3
00a30338:  add      x0, sp, #0x40
00a3033c:  mov      w1, #0xaa
00a30340:  mov      w2, #0x11c0
00a30344:  str      x13, [sp, #0x38]
00a30348:  csinv    x26, x8, xzr, eq
00a3034c:  bl       #0xd13db0
00a30350:  ldr      q0, [x27]
00a30354:  ldr      q1, [x28]
00a30358:  add      x8, x23, x26
00a3035c:  sub      x0, x8, x24
00a30360:  add      x2, sp, #0x40
00a30364:  add      w4, w25, #7
00a30368:  xtn      v0.8b, v0.8h
00a3036c:  xtn      v1.8b, v1.8h
00a30370:  mov      x1, x22
00a30374:  mov      w3, w21
00a30378:  str      q1, [sp, #0x20]
00a3037c:  bl       #0xa30a1c
00a30380:  adrp     x8, #0x23d000
00a30384:  add      x8, x8, #0x4a0
00a30388:  movi     v3.8b, #0x80
00a3038c:  ld1      {v0.16b, v1.16b, v2.16b}, [x8]
00a30390:  cmp      w21, #4
00a30394:  b.ne     #0xa304c8
00a30398:  ldr      d4, [sp, #0x40]
00a3039c:  ldr      d5, [sp, #0x80]
00a303a0:  add      x8, sp, #0x40
00a303a4:  ldr      d6, [sp, #0xc0]
00a303a8:  ldr      d7, [sp, #0x100]
00a303ac:  add      x8, x8, #0x1c0
00a303b0:  ldr      d16, [sp, #0x140]
00a303b4:  ldr      d17, [sp, #0x180]
00a303b8:  eor      v4.8b, v4.8b, v3.8b
00a303bc:  ldr      d18, [sp, #0x1c0]
00a303c0:  eor      v5.8b, v5.8b, v3.8b
00a303c4:  eor      v6.8b, v6.8b, v3.8b
00a303c8:  eor      v7.8b, v7.8b, v3.8b
00a303cc:  eor      v16.8b, v16.8b, v3.8b
00a303d0:  eor      v17.8b, v17.8b, v3.8b
00a303d4:  eor      v18.8b, v18.8b, v3.8b
00a303d8:  ldr      x13, [sp, #0x38]
00a303dc:  zip1     v4.8b, v4.8b, v6.8b
00a303e0:  zip1     v5.8b, v5.8b, v7.8b
00a303e4:  zip1     v6.8b, v6.8b, v16.8b
00a303e8:  zip1     v7.8b, v7.8b, v17.8b
00a303ec:  zip1     v19.8b, v16.8b, v18.8b
00a303f0:  zip1     v18.16b, v4.16b, v5.16b
00a303f4:  zip1     v16.16b, v5.16b, v6.16b
00a303f8:  zip1     v17.16b, v6.16b, v7.16b
00a303fc:  zip1     v4.16b, v7.16b, v19.16b
00a30400:  ldr      q7, [sp, #0x20]
00a30404:  dup      v6.4s, v7.s[0]
00a30408:  dup      v7.4s, v7.s[1]
00a3040c:  ldr      d19, [x8]
00a30410:  ldr      d20, [x8, #0x40]
00a30414:  add      x9, x20, x19
00a30418:  ldr      d21, [x8, #0x80]
00a3041c:  ldr      d22, [x8, #0xc0]
00a30420:  add      x8, x8, #0x100
00a30424:  eor      v19.8b, v19.8b, v3.8b
00a30428:  eor      v20.8b, v20.8b, v3.8b
00a3042c:  subs     w25, w25, #4
00a30430:  eor      v21.8b, v21.8b, v3.8b
00a30434:  eor      v22.8b, v22.8b, v3.8b
00a30438:  zip1     v19.8b, v19.8b, v21.8b
00a3043c:  zip1     v20.8b, v20.8b, v22.8b
00a30440:  movi     v21.4s, #0x40, lsl #8
00a30444:  movi     v22.4s, #0x40, lsl #8
00a30448:  zip1     v5.16b, v19.16b, v20.16b
00a3044c:  movi     v19.4s, #0x40, lsl #8
00a30450:  movi     v20.4s, #0x40, lsl #8
00a30454:  sdot     v21.4s, v18.16b, v6.16b
00a30458:  sdot     v22.4s, v4.16b, v6.16b
00a3045c:  tbl      v18.16b, {v4.16b, v5.16b}, v0.16b
00a30460:  sdot     v19.4s, v17.16b, v6.16b
00a30464:  tbl      v17.16b, {v4.16b, v5.16b}, v2.16b
00a30468:  sdot     v20.4s, v16.16b, v6.16b
00a3046c:  tbl      v16.16b, {v4.16b, v5.16b}, v1.16b
00a30470:  sdot     v22.4s, v5.16b, v7.16b
00a30474:  mov      v4.16b, v5.16b
00a30478:  sdot     v21.4s, v18.16b, v7.16b
00a3047c:  sdot     v19.4s, v17.16b, v7.16b
00a30480:  sdot     v20.4s, v16.16b, v7.16b
00a30484:  shrn     v21.4h, v21.4s, #1
00a30488:  shrn     v19.4h, v19.4s, #1
00a3048c:  shrn2    v21.8h, v20.4s, #1
00a30490:  shrn2    v19.8h, v22.4s, #1
00a30494:  sqrshrun v20.8b, v21.8h, #6
00a30498:  sqrshrun v19.8b, v19.8h, #6
00a3049c:  mov      s21, v20.s[1]
00a304a0:  mov      s22, v19.s[1]
00a304a4:  str      s20, [x20]
00a304a8:  str      s21, [x9]
00a304ac:  add      x9, x9, x19
00a304b0:  str      s19, [x9]
00a304b4:  add      x9, x9, x19
00a304b8:  add      x20, x9, x19
00a304bc:  str      s22, [x9]
00a304c0:  b.ne     #0xa3040c
00a304c4:  b        #0xa30674
00a304c8:  ldr      q5, [sp, #0x20]
00a304cc:  ldr      x13, [sp, #0x38]
00a304d0:  add      x8, sp, #0x40
00a304d4:  dup      v4.4s, v5.s[0]
00a304d8:  dup      v5.4s, v5.s[1]
00a304dc:  ldr      d6, [x8]
00a304e0:  ldr      d7, [x8, #0x40]
00a304e4:  mov      w9, #0x1c0
00a304e8:  ldr      d16, [x8, #0x80]
00a304ec:  ldr      d17, [x8, #0xc0]
00a304f0:  mov      w10, w25
00a304f4:  ldr      d18, [x8, #0x100]
00a304f8:  ldr      d19, [x8, #0x140]
00a304fc:  eor      v6.8b, v6.8b, v3.8b
00a30500:  ldr      d20, [x8, #0x180]
00a30504:  eor      v7.8b, v7.8b, v3.8b
00a30508:  eor      v16.8b, v16.8b, v3.8b
00a3050c:  eor      v17.8b, v17.8b, v3.8b
00a30510:  eor      v18.8b, v18.8b, v3.8b
00a30514:  eor      v19.8b, v19.8b, v3.8b
00a30518:  eor      v20.8b, v20.8b, v3.8b
00a3051c:  mov      x11, x20
00a30520:  zip1     v6.16b, v6.16b, v16.16b
00a30524:  zip1     v7.16b, v7.16b, v17.16b
00a30528:  zip1     v16.16b, v16.16b, v18.16b
00a3052c:  zip1     v17.16b, v17.16b, v19.16b
00a30530:  zip1     v24.16b, v18.16b, v20.16b
00a30534:  zip1     v23.16b, v6.16b, v7.16b
00a30538:  zip2     v22.16b, v6.16b, v7.16b
00a3053c:  zip1     v21.16b, v7.16b, v16.16b
00a30540:  zip2     v19.16b, v7.16b, v16.16b
00a30544:  zip1     v20.16b, v16.16b, v17.16b
00a30548:  zip2     v18.16b, v16.16b, v17.16b
00a3054c:  zip1     v6.16b, v17.16b, v24.16b
00a30550:  zip2     v16.16b, v17.16b, v24.16b
00a30554:  add      x12, x8, x9
00a30558:  movi     v28.4s, #0x40, lsl #8
00a3055c:  movi     v30.4s, #0x40, lsl #8
00a30560:  ldr      d24, [x12]
00a30564:  ldr      d25, [x12, #0x40]
00a30568:  ldr      d26, [x12, #0x80]
00a3056c:  ldr      d27, [x12, #0xc0]
00a30570:  movi     v29.4s, #0x40, lsl #8
00a30574:  movi     v31.4s, #0x40, lsl #8
00a30578:  eor      v24.8b, v24.8b, v3.8b
00a3057c:  eor      v25.8b, v25.8b, v3.8b
00a30580:  eor      v26.8b, v26.8b, v3.8b
00a30584:  eor      v27.8b, v27.8b, v3.8b
00a30588:  sdot     v28.4s, v22.16b, v4.16b
00a3058c:  sdot     v30.4s, v20.16b, v4.16b
00a30590:  add      x12, x11, x19
00a30594:  subs     w10, w10, #4
00a30598:  add      x9, x9, #0x100
00a3059c:  zip1     v26.16b, v24.16b, v26.16b
00a305a0:  movi     v24.4s, #0x40, lsl #8
00a305a4:  sdot     v29.4s, v19.16b, v4.16b
00a305a8:  zip1     v25.16b, v25.16b, v27.16b
00a305ac:  movi     v27.4s, #0x40, lsl #8
00a305b0:  sdot     v24.4s, v23.16b, v4.16b
00a305b4:  zip1     v7.16b, v26.16b, v25.16b
00a305b8:  zip2     v17.16b, v26.16b, v25.16b
00a305bc:  movi     v25.4s, #0x40, lsl #8
00a305c0:  movi     v26.4s, #0x40, lsl #8
00a305c4:  sdot     v27.4s, v21.16b, v4.16b
00a305c8:  sdot     v31.4s, v16.16b, v4.16b
00a305cc:  tbl      v23.16b, {v6.16b, v7.16b}, v0.16b
00a305d0:  tbl      v21.16b, {v6.16b, v7.16b}, v1.16b
00a305d4:  tbl      v20.16b, {v6.16b, v7.16b}, v2.16b
00a305d8:  tbl      v22.16b, {v16.16b, v17.16b}, v0.16b
00a305dc:  sdot     v25.4s, v6.16b, v4.16b
00a305e0:  tbl      v19.16b, {v16.16b, v17.16b}, v1.16b
00a305e4:  sdot     v26.4s, v18.16b, v4.16b
00a305e8:  tbl      v18.16b, {v16.16b, v17.16b}, v2.16b
00a305ec:  sdot     v31.4s, v17.16b, v5.16b
00a305f0:  mov      v16.16b, v17.16b
00a305f4:  sdot     v24.4s, v23.16b, v5.16b
00a305f8:  sdot     v27.4s, v21.16b, v5.16b
00a305fc:  sdot     v30.4s, v20.16b, v5.16b
00a30600:  sdot     v28.4s, v22.16b, v5.16b
00a30604:  sdot     v25.4s, v7.16b, v5.16b
00a30608:  sdot     v29.4s, v19.16b, v5.16b
00a3060c:  sdot     v26.4s, v18.16b, v5.16b
00a30610:  mov      v6.16b, v7.16b
00a30614:  shrn     v24.4h, v24.4s, #1
00a30618:  shrn     v27.4h, v27.4s, #1
00a3061c:  shrn     v25.4h, v25.4s, #1
00a30620:  shrn2    v24.8h, v28.4s, #1
00a30624:  shrn     v28.4h, v30.4s, #1
00a30628:  shrn2    v27.8h, v29.4s, #1
00a3062c:  shrn2    v25.8h, v31.4s, #1
00a30630:  shrn2    v28.8h, v26.4s, #1
00a30634:  sqrshrun v24.8b, v24.8h, #6
00a30638:  sqrshrun v26.8b, v27.8h, #6
00a3063c:  sqrshrun v25.8b, v25.8h, #6
00a30640:  sqrshrun v27.8b, v28.8h, #6
00a30644:  str      d24, [x11]
00a30648:  add      x11, x12, x19
00a3064c:  str      d26, [x12]
00a30650:  add      x12, x11, x19
00a30654:  str      d27, [x11]
00a30658:  add      x11, x12, x19
00a3065c:  str      d25, [x12]
00a30660:  b.ne     #0xa30554
00a30664:  subs     w21, w21, #8
00a30668:  add      x8, x8, #8
00a3066c:  add      x20, x20, #8
00a30670:  b.ne     #0xa304dc
00a30674:  ldr      x8, [x13, #0x28]
00a30678:  ldr      x9, [sp, #0x1218]
00a3067c:  cmp      x8, x9
00a30680:  b.ne     #0xa30a18
00a30684:  mov      sp, x29
00a30688:  ldp      x20, x19, [sp, #0x50]
00a3068c:  ldp      x22, x21, [sp, #0x40]
00a30690:  ldp      x24, x23, [sp, #0x30]
00a30694:  ldp      x26, x25, [sp, #0x20]
00a30698:  ldp      x28, x27, [sp, #0x10]
00a3069c:  ldp      x29, x30, [sp], #0x60
00a306a0:  autiasp  
00a306a4:  ret      
00a306a8:  mov      x24, x22
00a306ac:  cbz      w8, #0xa30330
00a306b0:  ldr      q0, [x28]
00a306b4:  ldur     d1, [x27, #4]
00a306b8:  sub      x9, x23, #1
00a306bc:  cmp      w21, #4
00a306c0:  sub      x8, x9, x22
00a306c4:  abs      v0.8h, v0.8h
00a306c8:  shrn     v17.8b, v1.8h, #1
00a306cc:  shrn     v5.8b, v0.8h, #1
00a306d0:  b.ne     #0xa30824
00a306d4:  movi     v0.16b, #0x80
00a306d8:  ldr      q1, [x8]
00a306dc:  ldr      q2, [x9]
00a306e0:  ldr      q3, [x9, x22]
00a306e4:  adrp     x9, #0x1f1000
00a306e8:  movi     v6.4s, #0x20, lsl #8
00a306ec:  movi     v7.4s, #0x20, lsl #8
00a306f0:  movi     v16.4s, #0x20, lsl #8
00a306f4:  eor      v4.16b, v1.16b, v0.16b
00a306f8:  eor      v2.16b, v2.16b, v0.16b
00a306fc:  eor      v3.16b, v3.16b, v0.16b
00a30700:  ldr      q1, [x9, #0xe40]
00a30704:  add      x9, x22, x22, lsl #1
00a30708:  tbl      v4.16b, {v4.16b}, v1.16b
00a3070c:  tbl      v2.16b, {v2.16b}, v1.16b
00a30710:  tbl      v3.16b, {v3.16b}, v1.16b
00a30714:  add      x8, x8, x9
00a30718:  sdot     v7.4s, v4.16b, v17.4b[0]
00a3071c:  sdot     v16.4s, v2.16b, v17.4b[0]
00a30720:  sdot     v6.4s, v3.16b, v17.4b[0]
00a30724:  dup      v2.8b, v5.b[3]
00a30728:  uzp1     v3.8h, v7.8h, v16.8h
00a3072c:  uzp1     v4.8h, v16.8h, v6.8h
00a30730:  dup      v6.4s, v17.s[0]
00a30734:  sqrshrun v7.8b, v3.8h, #6
00a30738:  sqrshrun v16.8b, v4.8h, #6
00a3073c:  dup      v3.8b, v5.b[4]
00a30740:  dup      v4.8b, v5.b[2]
00a30744:  dup      v5.8b, v5.b[5]
00a30748:  add      x9, x8, x22
00a3074c:  ldr      q17, [x8]
00a30750:  movi     v21.4s, #0x20, lsl #8
00a30754:  ldr      q18, [x9]
00a30758:  add      x8, x9, x22
00a3075c:  movi     v22.4s, #0x20, lsl #8
00a30760:  eor      v17.16b, v17.16b, v0.16b
00a30764:  ldr      q19, [x8]
00a30768:  add      x8, x8, x22
00a3076c:  eor      v18.16b, v18.16b, v0.16b
00a30770:  ldr      q20, [x8]
00a30774:  movi     v23.4s, #0x20, lsl #8
00a30778:  eor      v19.16b, v19.16b, v0.16b
00a3077c:  movi     v24.4s, #0x20, lsl #8
00a30780:  add      x9, x20, x19
00a30784:  tbl      v17.16b, {v17.16b}, v1.16b
00a30788:  eor      v20.16b, v20.16b, v0.16b
00a3078c:  subs     w25, w25, #4
00a30790:  tbl      v18.16b, {v18.16b}, v1.16b
00a30794:  add      x8, x8, x22
00a30798:  tbl      v19.16b, {v19.16b}, v1.16b
00a3079c:  tbl      v20.16b, {v20.16b}, v1.16b
00a307a0:  sdot     v21.4s, v17.16b, v6.16b
00a307a4:  sdot     v22.4s, v18.16b, v6.16b
00a307a8:  sdot     v23.4s, v19.16b, v6.16b
00a307ac:  sdot     v24.4s, v20.16b, v6.16b
00a307b0:  uzp1     v17.8h, v21.8h, v22.8h
00a307b4:  uzp1     v18.8h, v23.8h, v24.8h
00a307b8:  sqrshrun v17.8b, v17.8h, #6
00a307bc:  sqrshrun v18.8b, v18.8h, #6
00a307c0:  ext      v19.8b, v16.8b, v17.8b, #4
00a307c4:  ext      v20.8b, v17.8b, v18.8b, #4
00a307c8:  umull    v21.8h, v19.8b, v3.8b
00a307cc:  umull    v22.8h, v20.8b, v3.8b
00a307d0:  umlal    v21.8h, v16.8b, v2.8b
00a307d4:  umlal    v22.8h, v17.8b, v2.8b
00a307d8:  umlsl    v21.8h, v7.8b, v4.8b
00a307dc:  umlsl    v22.8h, v19.8b, v4.8b
00a307e0:  umlsl    v21.8h, v17.8b, v5.8b
00a307e4:  umlsl    v22.8h, v18.8b, v5.8b
00a307e8:  sqrshrun v7.8b, v21.8h, #6
00a307ec:  sqrshrun v16.8b, v22.8h, #6
00a307f0:  mov      s17, v7.s[1]
00a307f4:  str      s7, [x20]
00a307f8:  fmov     d7, d20
00a307fc:  mov      s19, v16.s[1]
00a30800:  str      s17, [x9]
00a30804:  add      x9, x9, x19
00a30808:  str      s16, [x9]
00a3080c:  fmov     d16, d18
00a30810:  add      x9, x9, x19
00a30814:  add      x20, x9, x19
00a30818:  str      s19, [x9]
00a3081c:  b.ne     #0xa30748
00a30820:  b        #0xa30674
00a30824:  adrp     x9, #0x23d000
00a30828:  add      x9, x9, #0x470
00a3082c:  movi     v0.16b, #0x80
00a30830:  dup      v1.8b, v5.b[3]
00a30834:  dup      v2.8b, v5.b[4]
00a30838:  dup      v3.8b, v5.b[2]
00a3083c:  dup      v4.8b, v5.b[5]
00a30840:  ld1      {v5.16b, v6.16b}, [x9]
00a30844:  dup      v7.4s, v17.s[0]
00a30848:  add      x9, x22, x22, lsl #1
00a3084c:  add      x10, x8, x22
00a30850:  ldr      q16, [x8]
00a30854:  movi     v19.4s, #0x20, lsl #8
00a30858:  ldr      q17, [x10]
00a3085c:  ldr      q18, [x10, x22]
00a30860:  movi     v20.4s, #0x20, lsl #8
00a30864:  eor      v16.16b, v16.16b, v0.16b
00a30868:  movi     v21.4s, #0x20, lsl #8
00a3086c:  movi     v22.4s, #0x20, lsl #8
00a30870:  eor      v17.16b, v17.16b, v0.16b
00a30874:  eor      v18.16b, v18.16b, v0.16b
00a30878:  movi     v23.4s, #0x20, lsl #8
00a3087c:  movi     v24.4s, #0x20, lsl #8
00a30880:  add      x12, x8, x9
00a30884:  mov      x11, x20
00a30888:  tbl      v25.16b, {v16.16b}, v5.16b
00a3088c:  tbl      v16.16b, {v16.16b}, v6.16b
00a30890:  mov      w10, w25
00a30894:  tbl      v26.16b, {v17.16b}, v5.16b
00a30898:  tbl      v17.16b, {v17.16b}, v6.16b
00a3089c:  tbl      v27.16b, {v18.16b}, v5.16b
00a308a0:  tbl      v18.16b, {v18.16b}, v6.16b
00a308a4:  sdot     v19.4s, v25.16b, v7.16b
00a308a8:  sdot     v20.4s, v16.16b, v7.16b
00a308ac:  sdot     v21.4s, v26.16b, v7.16b
00a308b0:  sdot     v22.4s, v17.16b, v7.16b
00a308b4:  sdot     v23.4s, v27.16b, v7.16b
00a308b8:  sdot     v24.4s, v18.16b, v7.16b
00a308bc:  uzp1     v16.8h, v19.8h, v20.8h
00a308c0:  uzp1     v17.8h, v21.8h, v22.8h
00a308c4:  uzp1     v18.8h, v23.8h, v24.8h
00a308c8:  sqrshrun v16.8b, v16.8h, #6
00a308cc:  sqrshrun v17.8b, v17.8h, #6
00a308d0:  sqrshrun v18.8b, v18.8h, #6
00a308d4:  ldr      q19, [x12]
00a308d8:  add      x12, x12, x22
00a308dc:  movi     v22.4s, #0x20, lsl #8
00a308e0:  ldr      q20, [x12]
00a308e4:  add      x12, x12, x22
00a308e8:  movi     v23.4s, #0x20, lsl #8
00a308ec:  eor      v19.16b, v19.16b, v0.16b
00a308f0:  ldr      q21, [x12]
00a308f4:  movi     v25.4s, #0x20, lsl #8
00a308f8:  eor      v20.16b, v20.16b, v0.16b
00a308fc:  movi     v26.4s, #0x20, lsl #8
00a30900:  movi     v27.4s, #0x20, lsl #8
00a30904:  eor      v21.16b, v21.16b, v0.16b
00a30908:  movi     v29.4s, #0x20, lsl #8
00a3090c:  add      x12, x12, x22
00a30910:  tbl      v24.16b, {v19.16b}, v5.16b
00a30914:  tbl      v19.16b, {v19.16b}, v6.16b
00a30918:  subs     w10, w10, #4
00a3091c:  tbl      v28.16b, {v20.16b}, v5.16b
00a30920:  tbl      v20.16b, {v20.16b}, v6.16b
00a30924:  tbl      v30.16b, {v21.16b}, v5.16b
00a30928:  tbl      v21.16b, {v21.16b}, v6.16b
00a3092c:  sdot     v22.4s, v24.16b, v7.16b
00a30930:  sdot     v23.4s, v19.16b, v7.16b
00a30934:  movi     v24.4s, #0x20, lsl #8
00a30938:  sdot     v25.4s, v28.16b, v7.16b
00a3093c:  sdot     v26.4s, v20.16b, v7.16b
00a30940:  ldr      q20, [x12]
00a30944:  sdot     v27.4s, v30.16b, v7.16b
00a30948:  sdot     v29.4s, v21.16b, v7.16b
00a3094c:  add      x12, x12, x22
00a30950:  eor      v20.16b, v20.16b, v0.16b
00a30954:  uzp1     v19.8h, v22.8h, v23.8h
00a30958:  uzp1     v21.8h, v25.8h, v26.8h
00a3095c:  movi     v25.4s, #0x20, lsl #8
00a30960:  uzp1     v22.8h, v27.8h, v29.8h
00a30964:  tbl      v26.16b, {v20.16b}, v6.16b
00a30968:  sqrshrun v23.8b, v19.8h, #6
00a3096c:  sqrshrun v19.8b, v21.8h, #6
00a30970:  tbl      v21.16b, {v20.16b}, v5.16b
00a30974:  sqrshrun v20.8b, v22.8h, #6
00a30978:  umull    v22.8h, v18.8b, v2.8b
00a3097c:  sdot     v25.4s, v26.16b, v7.16b
00a30980:  umull    v27.8h, v23.8b, v2.8b
00a30984:  umull    v28.8h, v19.8b, v2.8b
00a30988:  sdot     v24.4s, v21.16b, v7.16b
00a3098c:  umull    v21.8h, v20.8b, v2.8b
00a30990:  umlal    v22.8h, v17.8b, v1.8b
00a30994:  umlal    v27.8h, v18.8b, v1.8b
00a30998:  umlal    v28.8h, v23.8b, v1.8b
00a3099c:  uzp1     v24.8h, v24.8h, v25.8h
00a309a0:  umlal    v21.8h, v19.8b, v1.8b
00a309a4:  umlsl    v22.8h, v16.8b, v3.8b
00a309a8:  umlsl    v27.8h, v17.8b, v3.8b
00a309ac:  umlsl    v28.8h, v18.8b, v3.8b
00a309b0:  sqrshrun v18.8b, v24.8h, #6
00a309b4:  umlsl    v21.8h, v23.8b, v3.8b
00a309b8:  umlsl    v22.8h, v23.8b, v4.8b
00a309bc:  umlsl    v27.8h, v19.8b, v4.8b
00a309c0:  umlsl    v28.8h, v20.8b, v4.8b
00a309c4:  umlsl    v21.8h, v18.8b, v4.8b
00a309c8:  sqrshrun v16.8b, v22.8h, #6
00a309cc:  sqrshrun v17.8b, v27.8h, #6
00a309d0:  sqrshrun v22.8b, v28.8h, #6
00a309d4:  sqrshrun v21.8b, v21.8h, #6
00a309d8:  str      d16, [x11]
00a309dc:  add      x11, x11, x19
00a309e0:  fmov     d16, d19
00a309e4:  str      d17, [x11]
00a309e8:  fmov     d17, d20
00a309ec:  add      x11, x11, x19
00a309f0:  str      d22, [x11]
00a309f4:  add      x11, x11, x19
00a309f8:  str      d21, [x11]
00a309fc:  add      x11, x11, x19
00a30a00:  b.ne     #0xa308d4
00a30a04:  subs     w21, w21, #8
00a30a08:  add      x8, x8, #8
00a30a0c:  add      x20, x20, #8
00a30a10:  b.ne     #0xa3084c
00a30a14:  b        #0xa30674
00a30a18:  bl       #0xd13da0

; ===== 00a31570  FUN_00a31570  (1232 bytes) =====
00a31570:  bti      c
00a31574:  add      x10, x4, w7, sxtw #4
00a31578:  ldr      w8, [sp, #0x10]
00a3157c:  ldr      w9, [sp, #8]
00a31580:  ldrh     w11, [x10]
00a31584:  ldrh     w12, [x10, #0xe]
00a31588:  orr      w11, w12, w11
00a3158c:  cbnz     w11, #0xa315a0
00a31590:  ldrh     w11, [x10, #2]
00a31594:  ldrh     w12, [x10, #0xc]
00a31598:  orr      w11, w12, w11
00a3159c:  cbz      w11, #0xa3187c
00a315a0:  ldr      q0, [x10]
00a315a4:  adrp     x10, #0x23d000
00a315a8:  add      x10, x10, #0x500
00a315ac:  cmp      w9, #4
00a315b0:  xtn      v6.8b, v0.8h
00a315b4:  ld1      {v0.16b, v1.16b, v2.16b}, [x10]
00a315b8:  sub      x10, x1, x1, lsl #2
00a315bc:  add      x10, x0, x10
00a315c0:  b.ne     #0xa316e0
00a315c4:  add      x9, x10, x1
00a315c8:  ldr      d5, [x10]
00a315cc:  add      x11, x9, x1
00a315d0:  ldr      d3, [x9]
00a315d4:  add      x12, x11, x1
00a315d8:  ldr      d4, [x11]
00a315dc:  add      x9, x12, x1
00a315e0:  ldr      d7, [x12]
00a315e4:  add      x11, x9, x1
00a315e8:  ldr      d16, [x9]
00a315ec:  zip1     v5.8b, v5.8b, v4.8b
00a315f0:  ldr      d17, [x11]
00a315f4:  ldr      d18, [x11, x1]
00a315f8:  zip1     v3.8b, v3.8b, v7.8b
00a315fc:  zip1     v4.8b, v4.8b, v16.8b
00a31600:  sub      x9, x10, x1
00a31604:  zip1     v19.8b, v7.8b, v17.8b
00a31608:  zip1     v18.8b, v16.8b, v18.8b
00a3160c:  add      x9, x9, x1, lsl #3
00a31610:  zip1     v17.16b, v5.16b, v3.16b
00a31614:  dup      v5.4s, v6.s[0]
00a31618:  dup      v6.4s, v6.s[1]
00a3161c:  zip1     v7.16b, v3.16b, v4.16b
00a31620:  zip1     v16.16b, v4.16b, v19.16b
00a31624:  zip1     v3.16b, v19.16b, v18.16b
00a31628:  add      x10, x9, x1
00a3162c:  ldr      d18, [x9]
00a31630:  subs     w8, w8, #4
00a31634:  add      x11, x10, x1
00a31638:  ldr      d19, [x10]
00a3163c:  add      x10, x2, x3
00a31640:  add      x9, x11, x1
00a31644:  ldr      d20, [x11]
00a31648:  ldr      d21, [x9]
00a3164c:  add      x9, x9, x1
00a31650:  zip1     v18.8b, v18.8b, v20.8b
00a31654:  movi     v20.2d, #0000000000000000
00a31658:  zip1     v19.8b, v19.8b, v21.8b
00a3165c:  movi     v21.2d, #0000000000000000
00a31660:  usdot    v20.4s, v17.16b, v5.16b
00a31664:  zip1     v4.16b, v18.16b, v19.16b
00a31668:  movi     v18.2d, #0000000000000000
00a3166c:  movi     v19.2d, #0000000000000000
00a31670:  usdot    v21.4s, v3.16b, v5.16b
00a31674:  tbl      v17.16b, {v3.16b, v4.16b}, v0.16b
00a31678:  usdot    v18.4s, v16.16b, v5.16b
00a3167c:  tbl      v16.16b, {v3.16b, v4.16b}, v2.16b
00a31680:  usdot    v19.4s, v7.16b, v5.16b
00a31684:  tbl      v7.16b, {v3.16b, v4.16b}, v1.16b
00a31688:  usdot    v21.4s, v4.16b, v6.16b
00a3168c:  mov      v3.16b, v4.16b
00a31690:  usdot    v20.4s, v17.16b, v6.16b
00a31694:  usdot    v18.4s, v16.16b, v6.16b
00a31698:  usdot    v19.4s, v7.16b, v6.16b
00a3169c:  shrn     v20.4h, v20.4s, #1
00a316a0:  shrn     v18.4h, v18.4s, #1
00a316a4:  shrn2    v20.8h, v19.4s, #1
00a316a8:  shrn2    v18.8h, v21.4s, #1
00a316ac:  sqrshrun v19.8b, v20.8h, #6
00a316b0:  sqrshrun v18.8b, v18.8h, #6
00a316b4:  mov      s20, v19.s[1]
00a316b8:  mov      s21, v18.s[1]
00a316bc:  str      s19, [x2]
00a316c0:  str      s20, [x10]
00a316c4:  add      x10, x10, x3
00a316c8:  str      s18, [x10]
00a316cc:  add      x10, x10, x3
00a316d0:  add      x2, x10, x3
00a316d4:  str      s21, [x10]
00a316d8:  b.ne     #0xa31628
00a316dc:  b        #0xa31878
00a316e0:  lsl      x11, x1, #3
00a316e4:  dup      v3.4s, v6.s[0]
00a316e8:  dup      v4.4s, v6.s[1]
00a316ec:  sub      x11, x11, x1
00a316f0:  add      x12, x10, x1
00a316f4:  ldr      d5, [x10]
00a316f8:  add      x13, x12, x1
00a316fc:  ldr      d6, [x12]
00a31700:  add      x14, x13, x1
00a31704:  ldr      d7, [x13]
00a31708:  add      x12, x14, x1
00a3170c:  ldr      d16, [x14]
00a31710:  add      x14, x10, x11
00a31714:  add      x13, x12, x1
00a31718:  ldr      d17, [x12]
00a3171c:  zip1     v5.16b, v5.16b, v7.16b
00a31720:  ldr      d18, [x13]
00a31724:  ldr      d19, [x13, x1]
00a31728:  zip1     v6.16b, v6.16b, v16.16b
00a3172c:  zip1     v23.16b, v7.16b, v17.16b
00a31730:  mov      w12, w8
00a31734:  mov      x13, x2
00a31738:  zip1     v16.16b, v16.16b, v18.16b
00a3173c:  zip1     v17.16b, v17.16b, v19.16b
00a31740:  zip1     v22.16b, v5.16b, v6.16b
00a31744:  zip2     v20.16b, v5.16b, v6.16b
00a31748:  zip1     v21.16b, v6.16b, v23.16b
00a3174c:  zip2     v7.16b, v6.16b, v23.16b
00a31750:  zip1     v19.16b, v23.16b, v16.16b
00a31754:  zip2     v18.16b, v23.16b, v16.16b
00a31758:  zip1     v5.16b, v16.16b, v17.16b
00a3175c:  zip2     v16.16b, v16.16b, v17.16b
00a31760:  add      x15, x14, x1
00a31764:  ldr      d23, [x14]
00a31768:  movi     v27.2d, #0000000000000000
00a3176c:  add      x16, x15, x1
00a31770:  ldr      d24, [x15]
00a31774:  movi     v28.2d, #0000000000000000
00a31778:  add      x14, x16, x1
00a3177c:  ldr      d25, [x16]
00a31780:  movi     v29.2d, #0000000000000000
00a31784:  ldr      d26, [x14]
00a31788:  movi     v30.2d, #0000000000000000
00a3178c:  subs     w12, w12, #4
00a31790:  zip1     v25.16b, v23.16b, v25.16b
00a31794:  movi     v23.2d, #0000000000000000
00a31798:  usdot    v27.4s, v19.16b, v3.16b
00a3179c:  zip1     v24.16b, v24.16b, v26.16b
00a317a0:  movi     v26.2d, #0000000000000000
00a317a4:  usdot    v28.4s, v20.16b, v3.16b
00a317a8:  usdot    v29.4s, v7.16b, v3.16b
00a317ac:  add      x14, x14, x1
00a317b0:  usdot    v23.4s, v22.16b, v3.16b
00a317b4:  zip1     v6.16b, v25.16b, v24.16b
00a317b8:  zip2     v17.16b, v25.16b, v24.16b
00a317bc:  movi     v25.2d, #0000000000000000
00a317c0:  movi     v24.2d, #0000000000000000
00a317c4:  usdot    v26.4s, v21.16b, v3.16b
00a317c8:  usdot    v30.4s, v16.16b, v3.16b
00a317cc:  tbl      v22.16b, {v5.16b, v6.16b}, v0.16b
00a317d0:  tbl      v21.16b, {v5.16b, v6.16b}, v1.16b
00a317d4:  tbl      v19.16b, {v5.16b, v6.16b}, v2.16b
00a317d8:  tbl      v20.16b, {v16.16b, v17.16b}, v0.16b
00a317dc:  usdot    v25.4s, v5.16b, v3.16b
00a317e0:  tbl      v7.16b, {v16.16b, v17.16b}, v1.16b
00a317e4:  usdot    v24.4s, v18.16b, v3.16b
00a317e8:  tbl      v18.16b, {v16.16b, v17.16b}, v2.16b
00a317ec:  usdot    v30.4s, v17.16b, v4.16b
00a317f0:  mov      v16.16b, v17.16b
00a317f4:  usdot    v23.4s, v22.16b, v4.16b
00a317f8:  usdot    v26.4s, v21.16b, v4.16b
00a317fc:  usdot    v27.4s, v19.16b, v4.16b
00a31800:  usdot    v28.4s, v20.16b, v4.16b
00a31804:  usdot    v25.4s, v6.16b, v4.16b
00a31808:  usdot    v29.4s, v7.16b, v4.16b
00a3180c:  usdot    v24.4s, v18.16b, v4.16b
00a31810:  mov      v5.16b, v6.16b
00a31814:  shrn     v23.4h, v23.4s, #1
00a31818:  shrn     v26.4h, v26.4s, #1
00a3181c:  shrn     v27.4h, v27.4s, #1
00a31820:  shrn     v25.4h, v25.4s, #1
00a31824:  shrn2    v23.8h, v28.4s, #1
00a31828:  shrn2    v26.8h, v29.4s, #1
00a3182c:  shrn2    v27.8h, v24.4s, #1
00a31830:  shrn2    v25.8h, v30.4s, #1
00a31834:  sqrshrun v23.8b, v23.8h, #6
00a31838:  sqrshrun v24.8b, v26.8h, #6
00a3183c:  sqrshrun v26.8b, v27.8h, #6
00a31840:  str      d23, [x13]
00a31844:  sqrshrun v23.8b, v25.8h, #6
00a31848:  add      x13, x13, x3
00a3184c:  str      d24, [x13]
00a31850:  add      x13, x13, x3
00a31854:  str      d26, [x13]
00a31858:  add      x13, x13, x3
00a3185c:  str      d23, [x13]
00a31860:  add      x13, x13, x3
00a31864:  b.ne     #0xa31760
00a31868:  subs     w9, w9, #8
00a3186c:  add      x10, x10, #8
00a31870:  add      x2, x2, #8
00a31874:  b.ne     #0xa316f0
00a31878:  ret      
00a3187c:  ldr      q0, [x10]
00a31880:  cmp      w9, #4
00a31884:  sub      x10, x0, x1
00a31888:  abs      v0.8h, v0.8h
00a3188c:  shrn     v4.8b, v0.8h, #1
00a31890:  b.ne     #0xa3195c
00a31894:  ldr      w9, [x0]
00a31898:  ldr      s0, [x10]
00a3189c:  add      x11, x0, x1
00a318a0:  dup      v1.8b, v4.b[3]
00a318a4:  dup      v2.8b, v4.b[4]
00a318a8:  dup      v3.8b, v4.b[2]
00a318ac:  fmov     s5, w9
00a318b0:  mov      v0.s[1], w9
00a318b4:  dup      v4.8b, v4.b[5]
00a318b8:  add      x9, x10, x1, lsl #1
00a318bc:  ld1      {v5.s}[1], [x11]
00a318c0:  add      x10, x9, x1
00a318c4:  ldr      s6, [x9]
00a318c8:  fmov     d7, d0
00a318cc:  add      x9, x10, x1
00a318d0:  ldr      w11, [x10]
00a318d4:  subs     w8, w8, #4
00a318d8:  ldr      w10, [x9]
00a318dc:  add      x9, x9, x1
00a318e0:  mov      v6.s[1], w11
00a318e4:  ldr      w12, [x9]
00a318e8:  fmov     s17, w11
00a318ec:  fmov     s0, w10
00a318f0:  add      x9, x9, x1
00a318f4:  mov      v17.s[1], w10
00a318f8:  add      x10, x2, x3
00a318fc:  mov      v0.s[1], w12
00a31900:  umull    v16.8h, v6.8b, v2.8b
00a31904:  umull    v18.8h, v0.8b, v2.8b
00a31908:  umlal    v16.8h, v5.8b, v1.8b
00a3190c:  fmov     s5, w12
00a31910:  ld1      {v5.s}[1], [x9]
00a31914:  umlal    v18.8h, v17.8b, v1.8b
00a31918:  umlsl    v16.8h, v7.8b, v3.8b
00a3191c:  umlsl    v18.8h, v6.8b, v3.8b
00a31920:  umlsl    v16.8h, v17.8b, v4.8b
00a31924:  umlsl    v18.8h, v5.8b, v4.8b
00a31928:  sqrshrun v6.8b, v16.8h, #6
00a3192c:  sqrshrun v7.8b, v18.8h, #6
00a31930:  mov      s16, v6.s[1]
00a31934:  str      s6, [x2]
00a31938:  mov      s17, v7.s[1]
00a3193c:  str      s16, [x10]
00a31940:  add      x10, x10, x3
00a31944:  str      s7, [x10]
00a31948:  add      x10, x10, x3
00a3194c:  add      x2, x10, x3
00a31950:  str      s17, [x10]
00a31954:  b.ne     #0xa318c0
00a31958:  b        #0xa31878
00a3195c:  dup      v0.8b, v4.b[3]
00a31960:  dup      v1.8b, v4.b[4]
00a31964:  add      x11, x1, x1, lsl #1
00a31968:  dup      v2.8b, v4.b[2]
00a3196c:  dup      v3.8b, v4.b[5]
00a31970:  add      x12, x10, x1
00a31974:  ldr      d4, [x10]
00a31978:  add      x14, x10, x11
00a3197c:  ldr      d5, [x12]
00a31980:  ldr      d6, [x12, x1]
00a31984:  mov      x13, x2
00a31988:  mov      w12, w8
00a3198c:  ldr      d7, [x14]
00a31990:  add      x14, x14, x1
00a31994:  umull    v16.8h, v6.8b, v1.8b
00a31998:  ldr      d17, [x14]
00a3199c:  add      x14, x14, x1
00a319a0:  subs     w12, w12, #4
00a319a4:  umull    v18.8h, v7.8b, v1.8b
00a319a8:  ldr      d19, [x14]
00a319ac:  add      x14, x14, x1
00a319b0:  umull    v20.8h, v17.8b, v1.8b
00a319b4:  umull    v21.8h, v19.8b, v1.8b
00a319b8:  umlal    v16.8h, v5.8b, v0.8b
00a319bc:  umlal    v18.8h, v6.8b, v0.8b
00a319c0:  umlal    v20.8h, v7.8b, v0.8b
00a319c4:  umlal    v21.8h, v17.8b, v0.8b
00a319c8:  umlsl    v16.8h, v4.8b, v2.8b
00a319cc:  umlsl    v18.8h, v5.8b, v2.8b
00a319d0:  umlsl    v20.8h, v6.8b, v2.8b
00a319d4:  ldr      d6, [x14]
00a319d8:  add      x14, x14, x1
00a319dc:  umlsl    v21.8h, v7.8b, v2.8b
00a319e0:  umlsl    v16.8h, v7.8b, v3.8b
00a319e4:  umlsl    v18.8h, v17.8b, v3.8b
00a319e8:  umlsl    v20.8h, v19.8b, v3.8b
00a319ec:  umlsl    v21.8h, v6.8b, v3.8b
00a319f0:  sqrshrun v4.8b, v16.8h, #6
00a319f4:  sqrshrun v5.8b, v18.8h, #6
00a319f8:  sqrshrun v7.8b, v20.8h, #6
00a319fc:  sqrshrun v16.8b, v21.8h, #6
00a31a00:  str      d4, [x13]
00a31a04:  add      x13, x13, x3
00a31a08:  fmov     d4, d17
00a31a0c:  str      d5, [x13]
00a31a10:  fmov     d5, d19
00a31a14:  add      x13, x13, x3
00a31a18:  str      d7, [x13]
00a31a1c:  add      x13, x13, x3
00a31a20:  str      d16, [x13]
00a31a24:  add      x13, x13, x3
00a31a28:  b.ne     #0xa3198c
00a31a2c:  subs     w9, w9, #8
00a31a30:  add      x10, x10, #8
00a31a34:  add      x2, x2, #8
00a31a38:  b.ne     #0xa31970
00a31a3c:  b        #0xa31878

; ===== 00a31a40  FUN_00a31a40  (808 bytes) =====
00a31a40:  bti      c
00a31a44:  ldr      q0, [x4, w7, sxtw #4]
00a31a48:  adrp     x8, #0x23d000
00a31a4c:  add      x8, x8, #0x500
00a31a50:  ldr      w10, [sp, #8]
00a31a54:  sub      x9, x1, x1, lsl #2
00a31a58:  xtn      v6.8b, v0.8h
00a31a5c:  ld1      {v0.16b, v1.16b, v2.16b}, [x8]
00a31a60:  ldr      w8, [sp, #0x10]
00a31a64:  cmp      w10, #4
00a31a68:  add      x9, x0, x9
00a31a6c:  b.ne     #0xa31bac
00a31a70:  add      x10, x9, x1
00a31a74:  ldr      d3, [x9]
00a31a78:  add      x11, x10, x1
00a31a7c:  ldr      d4, [x10]
00a31a80:  add      x12, x11, x1
00a31a84:  ldr      d5, [x11]
00a31a88:  add      x10, x12, x1
00a31a8c:  ldr      d7, [x12]
00a31a90:  add      x11, x10, x1
00a31a94:  ldr      d16, [x10]
00a31a98:  zip1     v3.8b, v3.8b, v5.8b
00a31a9c:  ldr      d17, [x11]
00a31aa0:  ldr      d18, [x11, x1]
00a31aa4:  zip1     v4.8b, v4.8b, v7.8b
00a31aa8:  zip1     v5.8b, v5.8b, v16.8b
00a31aac:  sub      x10, x9, x1
00a31ab0:  lsl      x9, x3, #1
00a31ab4:  zip1     v19.8b, v7.8b, v17.8b
00a31ab8:  zip1     v18.8b, v16.8b, v18.8b
00a31abc:  add      x12, x10, x1, lsl #3
00a31ac0:  lsl      x10, x3, #2
00a31ac4:  add      x11, x9, x3
00a31ac8:  zip1     v7.16b, v3.16b, v4.16b
00a31acc:  zip1     v16.16b, v4.16b, v5.16b
00a31ad0:  zip1     v17.16b, v5.16b, v19.16b
00a31ad4:  zip1     v3.16b, v19.16b, v18.16b
00a31ad8:  dup      v5.4s, v6.s[0]
00a31adc:  dup      v6.4s, v6.s[1]
00a31ae0:  add      x13, x12, x1
00a31ae4:  ldr      d18, [x12]
00a31ae8:  subs     w8, w8, #4
00a31aec:  add      x14, x13, x1
00a31af0:  ldr      d19, [x13]
00a31af4:  add      x13, x2, x3
00a31af8:  add      x12, x14, x1
00a31afc:  ldr      d20, [x14]
00a31b00:  ldr      d21, [x12]
00a31b04:  add      x12, x12, x1
00a31b08:  zip1     v18.8b, v18.8b, v20.8b
00a31b0c:  movi     v20.2d, #0000000000000000
00a31b10:  zip1     v19.8b, v19.8b, v21.8b
00a31b14:  movi     v21.2d, #0000000000000000
00a31b18:  usdot    v20.4s, v7.16b, v5.16b
00a31b1c:  zip1     v4.16b, v18.16b, v19.16b
00a31b20:  movi     v18.2d, #0000000000000000
00a31b24:  movi     v19.2d, #0000000000000000
00a31b28:  usdot    v21.4s, v3.16b, v5.16b
00a31b2c:  tbl      v7.16b, {v3.16b, v4.16b}, v0.16b
00a31b30:  usdot    v18.4s, v17.16b, v5.16b
00a31b34:  tbl      v17.16b, {v3.16b, v4.16b}, v2.16b
00a31b38:  usdot    v19.4s, v16.16b, v5.16b
00a31b3c:  tbl      v16.16b, {v3.16b, v4.16b}, v1.16b
00a31b40:  usdot    v21.4s, v4.16b, v6.16b
00a31b44:  mov      v3.16b, v4.16b
00a31b48:  usdot    v20.4s, v7.16b, v6.16b
00a31b4c:  usdot    v18.4s, v17.16b, v6.16b
00a31b50:  usdot    v19.4s, v16.16b, v6.16b
00a31b54:  shrn     v20.4h, v20.4s, #1
00a31b58:  shrn     v18.4h, v18.4s, #1
00a31b5c:  shrn2    v20.8h, v19.4s, #1
00a31b60:  shrn2    v18.8h, v21.4s, #1
00a31b64:  ldr      s19, [x2]
00a31b68:  ldr      s21, [x2, x9]
00a31b6c:  ld1      {v19.s}[1], [x13]
00a31b70:  add      x13, x2, x11
00a31b74:  sqrshrun v20.8b, v20.8h, #6
00a31b78:  sqrshrun v18.8b, v18.8h, #6
00a31b7c:  ld1      {v21.s}[1], [x13]
00a31b80:  urhadd   v19.8b, v20.8b, v19.8b
00a31b84:  urhadd   v18.8b, v18.8b, v21.8b
00a31b88:  mov      s20, v19.s[1]
00a31b8c:  str      s19, [x2]
00a31b90:  mov      s19, v18.s[1]
00a31b94:  str      s20, [x2, x3]
00a31b98:  str      s18, [x2, x9]
00a31b9c:  str      s19, [x2, x11]
00a31ba0:  add      x2, x2, x10
00a31ba4:  b.ne     #0xa31ae0
00a31ba8:  b        #0xa31d64
00a31bac:  lsl      x13, x1, #3
00a31bb0:  dup      v3.4s, v6.s[0]
00a31bb4:  dup      v4.4s, v6.s[1]
00a31bb8:  lsl      x11, x3, #1
00a31bbc:  lsl      x12, x3, #2
00a31bc0:  sub      x13, x13, x1
00a31bc4:  add      x14, x11, x3
00a31bc8:  add      x15, x9, x1
00a31bcc:  ldr      d5, [x9]
00a31bd0:  add      x16, x15, x1
00a31bd4:  ldr      d6, [x15]
00a31bd8:  add      x17, x16, x1
00a31bdc:  ldr      d7, [x16]
00a31be0:  add      x15, x17, x1
00a31be4:  ldr      d16, [x17]
00a31be8:  add      x17, x9, x13
00a31bec:  add      x16, x15, x1
00a31bf0:  ldr      d17, [x15]
00a31bf4:  zip1     v5.16b, v5.16b, v7.16b
00a31bf8:  ldr      d18, [x16]
00a31bfc:  ldr      d19, [x16, x1]
00a31c00:  zip1     v6.16b, v6.16b, v16.16b
00a31c04:  zip1     v7.16b, v7.16b, v17.16b
00a31c08:  mov      x15, x2
00a31c0c:  mov      w16, w8
00a31c10:  zip1     v16.16b, v16.16b, v18.16b
00a31c14:  zip1     v17.16b, v17.16b, v19.16b
00a31c18:  zip1     v22.16b, v5.16b, v6.16b
00a31c1c:  zip2     v21.16b, v5.16b, v6.16b
00a31c20:  zip1     v20.16b, v6.16b, v7.16b
00a31c24:  zip2     v18.16b, v6.16b, v7.16b
00a31c28:  zip1     v19.16b, v7.16b, v16.16b
00a31c2c:  zip2     v7.16b, v7.16b, v16.16b
00a31c30:  zip1     v5.16b, v16.16b, v17.16b
00a31c34:  zip2     v16.16b, v16.16b, v17.16b
00a31c38:  add      x0, x17, x1
00a31c3c:  ldr      d23, [x17]
00a31c40:  movi     v27.2d, #0000000000000000
00a31c44:  add      x4, x0, x1
00a31c48:  ldr      d24, [x0]
00a31c4c:  movi     v28.2d, #0000000000000000
00a31c50:  add      x17, x4, x1
00a31c54:  ldr      d25, [x4]
00a31c58:  movi     v29.2d, #0000000000000000
00a31c5c:  ldr      d26, [x17]
00a31c60:  movi     v30.2d, #0000000000000000
00a31c64:  subs     w16, w16, #4
00a31c68:  zip1     v25.16b, v23.16b, v25.16b
00a31c6c:  movi     v23.2d, #0000000000000000
00a31c70:  usdot    v27.4s, v20.16b, v3.16b
00a31c74:  zip1     v26.16b, v24.16b, v26.16b
00a31c78:  movi     v24.2d, #0000000000000000
00a31c7c:  usdot    v28.4s, v19.16b, v3.16b
00a31c80:  usdot    v29.4s, v7.16b, v3.16b
00a31c84:  add      x17, x17, x1
00a31c88:  usdot    v23.4s, v21.16b, v3.16b
00a31c8c:  zip1     v6.16b, v25.16b, v26.16b
00a31c90:  zip2     v17.16b, v25.16b, v26.16b
00a31c94:  movi     v25.2d, #0000000000000000
00a31c98:  usdot    v24.4s, v22.16b, v3.16b
00a31c9c:  movi     v26.2d, #0000000000000000
00a31ca0:  usdot    v30.4s, v16.16b, v3.16b
00a31ca4:  tbl      v22.16b, {v5.16b, v6.16b}, v0.16b
00a31ca8:  tbl      v20.16b, {v5.16b, v6.16b}, v1.16b
00a31cac:  tbl      v19.16b, {v5.16b, v6.16b}, v2.16b
00a31cb0:  tbl      v21.16b, {v16.16b, v17.16b}, v0.16b
00a31cb4:  usdot    v25.4s, v5.16b, v3.16b
00a31cb8:  usdot    v26.4s, v18.16b, v3.16b
00a31cbc:  tbl      v18.16b, {v16.16b, v17.16b}, v1.16b
00a31cc0:  tbl      v7.16b, {v16.16b, v17.16b}, v2.16b
00a31cc4:  usdot    v30.4s, v17.16b, v4.16b
00a31cc8:  mov      v16.16b, v17.16b
00a31ccc:  usdot    v24.4s, v22.16b, v4.16b
00a31cd0:  usdot    v27.4s, v20.16b, v4.16b
00a31cd4:  usdot    v28.4s, v19.16b, v4.16b
00a31cd8:  usdot    v23.4s, v21.16b, v4.16b
00a31cdc:  usdot    v25.4s, v6.16b, v4.16b
00a31ce0:  mov      v5.16b, v6.16b
00a31ce4:  usdot    v26.4s, v18.16b, v4.16b
00a31ce8:  usdot    v29.4s, v7.16b, v4.16b
00a31cec:  shrn     v24.4h, v24.4s, #1
00a31cf0:  shrn     v27.4h, v27.4s, #1
00a31cf4:  shrn     v28.4h, v28.4s, #1
00a31cf8:  shrn2    v24.8h, v23.4s, #1
00a31cfc:  shrn     v23.4h, v25.4s, #1
00a31d00:  shrn2    v27.8h, v26.4s, #1
00a31d04:  shrn2    v28.8h, v29.4s, #1
00a31d08:  ldr      d25, [x15]
00a31d0c:  ldr      d29, [x15, x14]
00a31d10:  shrn2    v23.8h, v30.4s, #1
00a31d14:  sqrshrun v24.8b, v24.8h, #6
00a31d18:  sqrshrun v26.8b, v27.8h, #6
00a31d1c:  sqrshrun v27.8b, v28.8h, #6
00a31d20:  ldr      d28, [x15, x3]
00a31d24:  sqrshrun v23.8b, v23.8h, #6
00a31d28:  urhadd   v24.8b, v24.8b, v25.8b
00a31d2c:  ldr      d25, [x15, x11]
00a31d30:  urhadd   v26.8b, v26.8b, v28.8b
00a31d34:  urhadd   v25.8b, v27.8b, v25.8b
00a31d38:  urhadd   v23.8b, v23.8b, v29.8b
00a31d3c:  str      d24, [x15]
00a31d40:  str      d26, [x15, x3]
00a31d44:  str      d25, [x15, x11]
00a31d48:  str      d23, [x15, x14]
00a31d4c:  add      x15, x15, x12
00a31d50:  b.ne     #0xa31c38
00a31d54:  subs     w10, w10, #8
00a31d58:  add      x9, x9, #8
00a31d5c:  add      x2, x2, #8
00a31d60:  b.ne     #0xa31bc8
00a31d64:  ret      

; ===== 00a31d68  FUN_00a31d68  (1784 bytes) =====
00a31d68:  paciasp  
00a31d6c:  stp      x29, x30, [sp, #-0x60]!
00a31d70:  stp      x28, x27, [sp, #0x10]
00a31d74:  stp      x26, x25, [sp, #0x20]
00a31d78:  stp      x24, x23, [sp, #0x30]
00a31d7c:  stp      x22, x21, [sp, #0x40]
00a31d80:  stp      x20, x19, [sp, #0x50]
00a31d84:  mov      x29, sp
00a31d88:  sub      x9, sp, #1, lsl #12
00a31d8c:  sub      x9, x9, #0x220
00a31d90:  and      sp, x9, #0xffffffffffffffe0
00a31d94:  mrs      x13, tpidr_el0
00a31d98:  add      x26, x4, w5, sxtw #4
00a31d9c:  ldr      w25, [x29, #0x70]
00a31da0:  ldr      x8, [x13, #0x28]
00a31da4:  ldr      w21, [x29, #0x68]
00a31da8:  mov      x19, x3
00a31dac:  mov      x20, x2
00a31db0:  mov      x22, x1
00a31db4:  mov      x23, x0
00a31db8:  str      x8, [sp, #0x1218]
00a31dbc:  ldrh     w8, [x26]
00a31dc0:  ldrh     w9, [x26, #0xe]
00a31dc4:  orr      w8, w9, w8
00a31dc8:  cbz      w8, #0xa31dd4
00a31dcc:  mov      w8, wzr
00a31dd0:  b        #0xa31de8
00a31dd4:  ldrh     w8, [x26, #2]
00a31dd8:  ldrh     w9, [x26, #0xc]
00a31ddc:  orr      w8, w9, w8
00a31de0:  cmp      w8, #0
00a31de4:  cset     w8, eq
00a31de8:  add      x28, x4, w7, sxtw #4
00a31dec:  ldrh     w9, [x28]
00a31df0:  ldrh     w10, [x28, #0xe]
00a31df4:  orr      w9, w10, w9
00a31df8:  cbnz     w9, #0xa31e0c
00a31dfc:  ldrh     w9, [x28, #2]
00a31e00:  ldrh     w10, [x28, #0xc]
00a31e04:  orr      w9, w10, w9
00a31e08:  cbz      w9, #0xa3212c
00a31e0c:  add      x24, x22, x22, lsl #1
00a31e10:  cmp      w8, #0
00a31e14:  mov      x8, #-3
00a31e18:  add      x0, sp, #0x40
00a31e1c:  mov      w1, #0xaa
00a31e20:  mov      w2, #0x11c0
00a31e24:  str      x13, [sp, #0x38]
00a31e28:  csinv    x27, x8, xzr, eq
00a31e2c:  bl       #0xd13db0
00a31e30:  ldr      q0, [x26]
00a31e34:  ldr      q1, [x28]
00a31e38:  add      x8, x23, x27
00a31e3c:  sub      x0, x8, x24
00a31e40:  add      x2, sp, #0x40
00a31e44:  add      w4, w25, #7
00a31e48:  xtn      v0.8b, v0.8h
00a31e4c:  xtn      v1.8b, v1.8h
00a31e50:  mov      x1, x22
00a31e54:  mov      w3, w21
00a31e58:  str      q1, [sp, #0x20]
00a31e5c:  bl       #0xa32460
00a31e60:  adrp     x8, #0x23d000
00a31e64:  add      x8, x8, #0x500
00a31e68:  cmp      w21, #4
00a31e6c:  ld1      {v0.16b, v1.16b, v2.16b}, [x8]
00a31e70:  b.ne     #0xa31f78
00a31e74:  ldr      d3, [sp, #0x40]
00a31e78:  ldr      d4, [sp, #0x80]
00a31e7c:  add      x8, sp, #0x40
00a31e80:  ldr      d5, [sp, #0xc0]
00a31e84:  ldr      d6, [sp, #0x100]
00a31e88:  add      x8, x8, #0x1c0
00a31e8c:  ldr      d7, [sp, #0x140]
00a31e90:  ldr      d16, [sp, #0x180]
00a31e94:  ldr      d17, [sp, #0x1c0]
00a31e98:  zip1     v3.8b, v3.8b, v5.8b
00a31e9c:  zip1     v4.8b, v4.8b, v6.8b
00a31ea0:  ldr      x13, [sp, #0x38]
00a31ea4:  zip1     v5.8b, v5.8b, v7.8b
00a31ea8:  zip1     v6.8b, v6.8b, v16.8b
00a31eac:  zip1     v18.8b, v7.8b, v17.8b
00a31eb0:  zip1     v17.16b, v3.16b, v4.16b
00a31eb4:  zip1     v7.16b, v4.16b, v5.16b
00a31eb8:  zip1     v16.16b, v5.16b, v6.16b
00a31ebc:  zip1     v3.16b, v6.16b, v18.16b
00a31ec0:  ldr      q6, [sp, #0x20]
00a31ec4:  dup      v5.4s, v6.s[0]
00a31ec8:  dup      v6.4s, v6.s[1]
00a31ecc:  ldr      d18, [x8]
00a31ed0:  ldr      d19, [x8, #0x40]
00a31ed4:  add      x9, x20, x19
00a31ed8:  ldr      d20, [x8, #0x80]
00a31edc:  ldr      d21, [x8, #0xc0]
00a31ee0:  add      x8, x8, #0x100
00a31ee4:  subs     w25, w25, #4
00a31ee8:  zip1     v18.8b, v18.8b, v20.8b
00a31eec:  zip1     v19.8b, v19.8b, v21.8b
00a31ef0:  movi     v20.2d, #0000000000000000
00a31ef4:  movi     v21.2d, #0000000000000000
00a31ef8:  zip1     v4.16b, v18.16b, v19.16b
00a31efc:  movi     v18.2d, #0000000000000000
00a31f00:  movi     v19.2d, #0000000000000000
00a31f04:  usdot    v20.4s, v17.16b, v5.16b
00a31f08:  usdot    v21.4s, v3.16b, v5.16b
00a31f0c:  tbl      v17.16b, {v3.16b, v4.16b}, v0.16b
00a31f10:  usdot    v18.4s, v16.16b, v5.16b
00a31f14:  tbl      v16.16b, {v3.16b, v4.16b}, v2.16b
00a31f18:  usdot    v19.4s, v7.16b, v5.16b
00a31f1c:  tbl      v7.16b, {v3.16b, v4.16b}, v1.16b
00a31f20:  usdot    v21.4s, v4.16b, v6.16b
00a31f24:  mov      v3.16b, v4.16b
00a31f28:  usdot    v20.4s, v17.16b, v6.16b
00a31f2c:  usdot    v18.4s, v16.16b, v6.16b
00a31f30:  usdot    v19.4s, v7.16b, v6.16b
00a31f34:  shrn     v20.4h, v20.4s, #1
00a31f38:  shrn     v18.4h, v18.4s, #1
00a31f3c:  shrn2    v20.8h, v19.4s, #1
00a31f40:  shrn2    v18.8h, v21.4s, #1
00a31f44:  sqrshrun v19.8b, v20.8h, #6
00a31f48:  sqrshrun v18.8b, v18.8h, #6
00a31f4c:  mov      s20, v19.s[1]
00a31f50:  mov      s21, v18.s[1]
00a31f54:  str      s19, [x20]
00a31f58:  str      s20, [x9]
00a31f5c:  add      x9, x9, x19
00a31f60:  str      s18, [x9]
00a31f64:  add      x9, x9, x19
00a31f68:  add      x20, x9, x19
00a31f6c:  str      s21, [x9]
00a31f70:  b.ne     #0xa31ecc
00a31f74:  b        #0xa320f8
00a31f78:  ldr      q4, [sp, #0x20]
00a31f7c:  ldr      x13, [sp, #0x38]
00a31f80:  add      x8, sp, #0x40
00a31f84:  dup      v3.4s, v4.s[0]
00a31f88:  dup      v4.4s, v4.s[1]
00a31f8c:  ldr      d5, [x8]
00a31f90:  ldr      d6, [x8, #0x40]
00a31f94:  mov      w9, #0x1c0
00a31f98:  ldr      d7, [x8, #0x80]
00a31f9c:  ldr      d16, [x8, #0xc0]
00a31fa0:  mov      w10, w25
00a31fa4:  ldr      d17, [x8, #0x100]
00a31fa8:  ldr      d18, [x8, #0x140]
00a31fac:  mov      x11, x20
00a31fb0:  ldr      d19, [x8, #0x180]
00a31fb4:  zip1     v5.16b, v5.16b, v7.16b
00a31fb8:  zip1     v6.16b, v6.16b, v16.16b
00a31fbc:  zip1     v7.16b, v7.16b, v17.16b
00a31fc0:  zip1     v16.16b, v16.16b, v18.16b
00a31fc4:  zip1     v17.16b, v17.16b, v19.16b
00a31fc8:  zip1     v22.16b, v5.16b, v6.16b
00a31fcc:  zip2     v21.16b, v5.16b, v6.16b
00a31fd0:  zip1     v20.16b, v6.16b, v7.16b
00a31fd4:  zip2     v18.16b, v6.16b, v7.16b
00a31fd8:  zip1     v19.16b, v7.16b, v16.16b
00a31fdc:  zip2     v7.16b, v7.16b, v16.16b
00a31fe0:  zip1     v5.16b, v16.16b, v17.16b
00a31fe4:  zip2     v16.16b, v16.16b, v17.16b
00a31fe8:  add      x12, x8, x9
00a31fec:  movi     v27.2d, #0000000000000000
00a31ff0:  movi     v29.2d, #0000000000000000
00a31ff4:  ldr      d23, [x12]
00a31ff8:  ldr      d24, [x12, #0x40]
00a31ffc:  ldr      d25, [x12, #0x80]
00a32000:  ldr      d26, [x12, #0xc0]
00a32004:  movi     v28.2d, #0000000000000000
00a32008:  movi     v30.2d, #0000000000000000
00a3200c:  zip1     v25.16b, v23.16b, v25.16b
00a32010:  movi     v23.2d, #0000000000000000
00a32014:  add      x12, x11, x19
00a32018:  zip1     v24.16b, v24.16b, v26.16b
00a3201c:  movi     v26.2d, #0000000000000000
00a32020:  usdot    v27.4s, v21.16b, v3.16b
00a32024:  usdot    v29.4s, v19.16b, v3.16b
00a32028:  subs     w10, w10, #4
00a3202c:  add      x9, x9, #0x100
00a32030:  usdot    v28.4s, v18.16b, v3.16b
00a32034:  usdot    v23.4s, v22.16b, v3.16b
00a32038:  zip1     v6.16b, v25.16b, v24.16b
00a3203c:  zip2     v17.16b, v25.16b, v24.16b
00a32040:  movi     v24.2d, #0000000000000000
00a32044:  movi     v25.2d, #0000000000000000
00a32048:  usdot    v26.4s, v20.16b, v3.16b
00a3204c:  usdot    v30.4s, v16.16b, v3.16b
00a32050:  tbl      v22.16b, {v5.16b, v6.16b}, v0.16b
00a32054:  tbl      v20.16b, {v5.16b, v6.16b}, v1.16b
00a32058:  tbl      v19.16b, {v5.16b, v6.16b}, v2.16b
00a3205c:  tbl      v21.16b, {v16.16b, v17.16b}, v0.16b
00a32060:  usdot    v24.4s, v5.16b, v3.16b
00a32064:  tbl      v18.16b, {v16.16b, v17.16b}, v1.16b
00a32068:  usdot    v25.4s, v7.16b, v3.16b
00a3206c:  tbl      v7.16b, {v16.16b, v17.16b}, v2.16b
00a32070:  usdot    v30.4s, v17.16b, v4.16b
00a32074:  mov      v16.16b, v17.16b
00a32078:  usdot    v23.4s, v22.16b, v4.16b
00a3207c:  usdot    v26.4s, v20.16b, v4.16b
00a32080:  usdot    v29.4s, v19.16b, v4.16b
00a32084:  usdot    v27.4s, v21.16b, v4.16b
00a32088:  usdot    v24.4s, v6.16b, v4.16b
00a3208c:  usdot    v28.4s, v18.16b, v4.16b
00a32090:  usdot    v25.4s, v7.16b, v4.16b
00a32094:  mov      v5.16b, v6.16b
00a32098:  shrn     v23.4h, v23.4s, #1
00a3209c:  shrn     v26.4h, v26.4s, #1
00a320a0:  shrn     v24.4h, v24.4s, #1
00a320a4:  shrn2    v23.8h, v27.4s, #1
00a320a8:  shrn     v27.4h, v29.4s, #1
00a320ac:  shrn2    v26.8h, v28.4s, #1
00a320b0:  shrn2    v24.8h, v30.4s, #1
00a320b4:  shrn2    v27.8h, v25.4s, #1
00a320b8:  sqrshrun v23.8b, v23.8h, #6
00a320bc:  sqrshrun v25.8b, v26.8h, #6
00a320c0:  sqrshrun v24.8b, v24.8h, #6
00a320c4:  sqrshrun v26.8b, v27.8h, #6
00a320c8:  str      d23, [x11]
00a320cc:  add      x11, x12, x19
00a320d0:  str      d25, [x12]
00a320d4:  add      x12, x11, x19
00a320d8:  str      d26, [x11]
00a320dc:  add      x11, x12, x19
00a320e0:  str      d24, [x12]
00a320e4:  b.ne     #0xa31fe8
00a320e8:  subs     w21, w21, #8
00a320ec:  add      x8, x8, #8
00a320f0:  add      x20, x20, #8
00a320f4:  b.ne     #0xa31f8c
00a320f8:  ldr      x8, [x13, #0x28]
00a320fc:  ldr      x9, [sp, #0x1218]
00a32100:  cmp      x8, x9
00a32104:  b.ne     #0xa3245c
00a32108:  mov      sp, x29
00a3210c:  ldp      x20, x19, [sp, #0x50]
00a32110:  ldp      x22, x21, [sp, #0x40]
00a32114:  ldp      x24, x23, [sp, #0x30]
00a32118:  ldp      x26, x25, [sp, #0x20]
00a3211c:  ldp      x28, x27, [sp, #0x10]
00a32120:  ldp      x29, x30, [sp], #0x60
00a32124:  autiasp  
00a32128:  ret      
00a3212c:  mov      x24, x22
00a32130:  cbz      w8, #0xa31e10
00a32134:  ldr      q0, [x28]
00a32138:  ldur     d1, [x26, #4]
00a3213c:  sub      x9, x23, #1
00a32140:  cmp      w21, #4
00a32144:  sub      x8, x9, x22
00a32148:  abs      v0.8h, v0.8h
00a3214c:  shrn     v16.8b, v1.8h, #1
00a32150:  shrn     v4.8b, v0.8h, #1
00a32154:  b.ne     #0xa32288
00a32158:  adrp     x10, #0x1f1000
00a3215c:  ldr      q1, [x9]
00a32160:  ldr      q2, [x9, x22]
00a32164:  ldr      q3, [x8]
00a32168:  ldr      q0, [x10, #0xe40]
00a3216c:  movi     v5.2d, #0000000000000000
00a32170:  movi     v6.2d, #0000000000000000
00a32174:  movi     v7.2d, #0000000000000000
00a32178:  add      x9, x22, x22, lsl #1
00a3217c:  tbl      v3.16b, {v3.16b}, v0.16b
00a32180:  tbl      v1.16b, {v1.16b}, v0.16b
00a32184:  tbl      v2.16b, {v2.16b}, v0.16b
00a32188:  add      x8, x8, x9
00a3218c:  usdot    v6.4s, v3.16b, v16.4b[0]
00a32190:  usdot    v7.4s, v1.16b, v16.4b[0]
00a32194:  usdot    v5.4s, v2.16b, v16.4b[0]
00a32198:  dup      v1.8b, v4.b[3]
00a3219c:  uzp1     v2.8h, v6.8h, v7.8h
00a321a0:  uzp1     v3.8h, v7.8h, v5.8h
00a321a4:  dup      v5.4s, v16.s[0]
00a321a8:  sqrshrun v6.8b, v2.8h, #6
00a321ac:  sqrshrun v7.8b, v3.8h, #6
00a321b0:  dup      v2.8b, v4.b[4]
00a321b4:  dup      v3.8b, v4.b[2]
00a321b8:  dup      v4.8b, v4.b[5]
00a321bc:  ldr      q16, [x8]
00a321c0:  add      x8, x8, x22
00a321c4:  movi     v18.2d, #0000000000000000
00a321c8:  ldr      q17, [x8]
00a321cc:  movi     v19.2d, #0000000000000000
00a321d0:  add      x8, x8, x22
00a321d4:  tbl      v16.16b, {v16.16b}, v0.16b
00a321d8:  ldr      q20, [x8]
00a321dc:  add      x8, x8, x22
00a321e0:  tbl      v17.16b, {v17.16b}, v0.16b
00a321e4:  ldr      q21, [x8]
00a321e8:  movi     v22.2d, #0000000000000000
00a321ec:  movi     v23.2d, #0000000000000000
00a321f0:  tbl      v20.16b, {v20.16b}, v0.16b
00a321f4:  add      x9, x20, x19
00a321f8:  tbl      v21.16b, {v21.16b}, v0.16b
00a321fc:  subs     w25, w25, #4
00a32200:  add      x8, x8, x22
00a32204:  usdot    v18.4s, v16.16b, v5.16b
00a32208:  usdot    v19.4s, v17.16b, v5.16b
00a3220c:  usdot    v22.4s, v20.16b, v5.16b
00a32210:  usdot    v23.4s, v21.16b, v5.16b
00a32214:  uzp1     v16.8h, v18.8h, v19.8h
00a32218:  uzp1     v17.8h, v22.8h, v23.8h
00a3221c:  sqrshrun v16.8b, v16.8h, #6
00a32220:  sqrshrun v17.8b, v17.8h, #6
00a32224:  ext      v18.8b, v7.8b, v16.8b, #4
00a32228:  ext      v19.8b, v16.8b, v17.8b, #4
00a3222c:  umull    v20.8h, v18.8b, v2.8b
00a32230:  umull    v21.8h, v19.8b, v2.8b
00a32234:  umlal    v20.8h, v7.8b, v1.8b
00a32238:  umlal    v21.8h, v16.8b, v1.8b
00a3223c:  umlsl    v20.8h, v6.8b, v3.8b
00a32240:  umlsl    v21.8h, v18.8b, v3.8b
00a32244:  umlsl    v20.8h, v16.8b, v4.8b
00a32248:  umlsl    v21.8h, v17.8b, v4.8b
00a3224c:  sqrshrun v6.8b, v20.8h, #6
00a32250:  sqrshrun v7.8b, v21.8h, #6
00a32254:  mov      s16, v6.s[1]
00a32258:  str      s6, [x20]
00a3225c:  fmov     d6, d19
00a32260:  mov      s18, v7.s[1]
00a32264:  str      s16, [x9]
00a32268:  add      x9, x9, x19
00a3226c:  str      s7, [x9]
00a32270:  fmov     d7, d17
00a32274:  add      x9, x9, x19
00a32278:  add      x20, x9, x19
00a3227c:  str      s18, [x9]
00a32280:  b.ne     #0xa321bc
00a32284:  b        #0xa320f8
00a32288:  adrp     x9, #0x23d000
00a3228c:  add      x9, x9, #0x4d0
00a32290:  dup      v0.8b, v4.b[3]
00a32294:  dup      v1.8b, v4.b[4]
00a32298:  dup      v2.8b, v4.b[2]
00a3229c:  dup      v3.8b, v4.b[5]
00a322a0:  ld1      {v4.16b, v5.16b}, [x9]
00a322a4:  dup      v6.4s, v16.s[0]
00a322a8:  add      x9, x22, x22, lsl #1
00a322ac:  add      x10, x8, x22
00a322b0:  ldr      q7, [x8]
00a322b4:  movi     v16.2d, #0000000000000000
00a322b8:  ldr      q18, [x10]
00a322bc:  ldr      q19, [x10, x22]
00a322c0:  movi     v17.2d, #0000000000000000
00a322c4:  movi     v20.2d, #0000000000000000
00a322c8:  tbl      v21.16b, {v7.16b}, v4.16b
00a322cc:  tbl      v7.16b, {v7.16b}, v5.16b
00a322d0:  movi     v22.2d, #0000000000000000
00a322d4:  tbl      v23.16b, {v18.16b}, v4.16b
00a322d8:  tbl      v18.16b, {v18.16b}, v5.16b
00a322dc:  tbl      v24.16b, {v19.16b}, v4.16b
00a322e0:  tbl      v19.16b, {v19.16b}, v5.16b
00a322e4:  add      x12, x8, x9
00a322e8:  movi     v25.2d, #0000000000000000
00a322ec:  movi     v26.2d, #0000000000000000
00a322f0:  mov      x11, x20
00a322f4:  usdot    v16.4s, v21.16b, v6.16b
00a322f8:  usdot    v17.4s, v7.16b, v6.16b
00a322fc:  mov      w10, w25
00a32300:  usdot    v20.4s, v23.16b, v6.16b
00a32304:  usdot    v22.4s, v18.16b, v6.16b
00a32308:  usdot    v25.4s, v24.16b, v6.16b
00a3230c:  usdot    v26.4s, v19.16b, v6.16b
00a32310:  uzp1     v7.8h, v16.8h, v17.8h
00a32314:  uzp1     v16.8h, v20.8h, v22.8h
00a32318:  uzp1     v17.8h, v25.8h, v26.8h
00a3231c:  sqrshrun v7.8b, v7.8h, #6
00a32320:  sqrshrun v16.8b, v16.8h, #6
00a32324:  sqrshrun v17.8b, v17.8h, #6
00a32328:  ldr      q18, [x12]
00a3232c:  add      x12, x12, x22
00a32330:  movi     v19.2d, #0000000000000000
00a32334:  movi     v20.2d, #0000000000000000
00a32338:  ldr      q22, [x12]
00a3233c:  add      x12, x12, x22
00a32340:  tbl      v21.16b, {v18.16b}, v4.16b
00a32344:  tbl      v18.16b, {v18.16b}, v5.16b
00a32348:  ldr      q25, [x12]
00a3234c:  movi     v23.2d, #0000000000000000
00a32350:  movi     v24.2d, #0000000000000000
00a32354:  tbl      v27.16b, {v22.16b}, v4.16b
00a32358:  tbl      v22.16b, {v22.16b}, v5.16b
00a3235c:  movi     v26.2d, #0000000000000000
00a32360:  movi     v28.2d, #0000000000000000
00a32364:  tbl      v29.16b, {v25.16b}, v4.16b
00a32368:  tbl      v25.16b, {v25.16b}, v5.16b
00a3236c:  add      x12, x12, x22
00a32370:  usdot    v19.4s, v21.16b, v6.16b
00a32374:  usdot    v20.4s, v18.16b, v6.16b
00a32378:  subs     w10, w10, #4
00a3237c:  usdot    v23.4s, v27.16b, v6.16b
00a32380:  usdot    v24.4s, v22.16b, v6.16b
00a32384:  ldr      q22, [x12]
00a32388:  add      x12, x12, x22
00a3238c:  usdot    v26.4s, v29.16b, v6.16b
00a32390:  usdot    v28.4s, v25.16b, v6.16b
00a32394:  uzp1     v18.8h, v19.8h, v20.8h
00a32398:  tbl      v25.16b, {v22.16b}, v4.16b
00a3239c:  tbl      v22.16b, {v22.16b}, v5.16b
00a323a0:  uzp1     v19.8h, v23.8h, v24.8h
00a323a4:  movi     v23.2d, #0000000000000000
00a323a8:  movi     v24.2d, #0000000000000000
00a323ac:  uzp1     v20.8h, v26.8h, v28.8h
00a323b0:  sqrshrun v21.8b, v18.8h, #6
00a323b4:  sqrshrun v18.8b, v19.8h, #6
00a323b8:  usdot    v23.4s, v25.16b, v6.16b
00a323bc:  usdot    v24.4s, v22.16b, v6.16b
00a323c0:  sqrshrun v19.8b, v20.8h, #6
00a323c4:  umull    v20.8h, v17.8b, v1.8b
00a323c8:  umull    v26.8h, v21.8b, v1.8b
00a323cc:  umull    v27.8h, v18.8b, v1.8b
00a323d0:  uzp1     v23.8h, v23.8h, v24.8h
00a323d4:  umull    v22.8h, v19.8b, v1.8b
00a323d8:  umlal    v20.8h, v16.8b, v0.8b
00a323dc:  umlal    v26.8h, v17.8b, v0.8b
00a323e0:  umlal    v27.8h, v21.8b, v0.8b
00a323e4:  umlal    v22.8h, v18.8b, v0.8b
00a323e8:  umlsl    v20.8h, v7.8b, v2.8b
00a323ec:  umlsl    v26.8h, v16.8b, v2.8b
00a323f0:  umlsl    v27.8h, v17.8b, v2.8b
00a323f4:  sqrshrun v17.8b, v23.8h, #6
00a323f8:  umlsl    v22.8h, v21.8b, v2.8b
00a323fc:  umlsl    v20.8h, v21.8b, v3.8b
00a32400:  umlsl    v26.8h, v18.8b, v3.8b
00a32404:  umlsl    v27.8h, v19.8b, v3.8b
00a32408:  umlsl    v22.8h, v17.8b, v3.8b
00a3240c:  sqrshrun v7.8b, v20.8h, #6
00a32410:  sqrshrun v16.8b, v26.8h, #6
00a32414:  sqrshrun v20.8b, v27.8h, #6
00a32418:  sqrshrun v21.8b, v22.8h, #6
00a3241c:  str      d7, [x11]
00a32420:  add      x11, x11, x19
00a32424:  str      d16, [x11]
00a32428:  fmov     d7, d18
00a3242c:  fmov     d16, d19
00a32430:  add      x11, x11, x19
00a32434:  str      d20, [x11]
00a32438:  add      x11, x11, x19
00a3243c:  str      d21, [x11]
00a32440:  add      x11, x11, x19
00a32444:  b.ne     #0xa32328
00a32448:  subs     w21, w21, #8
00a3244c:  add      x8, x8, #8
00a32450:  add      x20, x20, #8
00a32454:  b.ne     #0xa322ac
00a32458:  b        #0xa320f8
00a3245c:  bl       #0xd13da0

; ===== 00aa0090  FUN_00aa0090  (460 bytes) =====
00aa0090:  bti      c
00aa0094:  cmp      w6, #0x40
00aa0098:  clz      w9, w3
00aa009c:  adrp     x8, #0x251000
00aa00a0:  add      x8, x8, #0xce0
00aa00a4:  sub      w9, w9, #0x19
00aa00a8:  ldrsw    x9, [x8, w9, uxtw #2]
00aa00ac:  add      x10, x2, w6, uxtw
00aa00b0:  add      x8, x8, x9
00aa00b4:  adrp     x11, #0x251000
00aa00b8:  add      x11, x11, #0xcac
00aa00bc:  ld1r     {v31.16b}, [x10]
00aa00c0:  ld1      {v30.8h}, [x11]
00aa00c4:  mov      w7, w5
00aa00c8:  b.gt     #0xaa03a4
00aa00cc:  br       x8
00aa00d0:  bti      j
00aa00d4:  dup      v29.4h, w5
00aa00d8:  mul      v30.4h, v30.4h, v29.4h
00aa00dc:  movi     v23.16b, #0x3e
00aa00e0:  ld1      {v0.16b, v1.16b}, [x2]
00aa00e4:  add      v30.4h, v29.4h, v30.4h
00aa00e8:  movi     v22.16b, #0x40
00aa00ec:  movi     v20.16b, #1
00aa00f0:  movi     v21.16b, #2
00aa00f4:  xtn      v24.8b, v30.8h
00aa00f8:  uqshrn   v26.8b, v30.8h, #6
00aa00fc:  and      v24.8b, v24.8b, v23.8b
00aa0100:  mov      v4.8b, v31.8b
00aa0104:  uqadd    v27.8b, v26.8b, v20.8b
00aa0108:  uqadd    v28.8b, v26.8b, v21.8b
00aa010c:  sub      v25.8b, v22.8b, v24.8b
00aa0110:  tbx      v4.8b, {v0.16b, v1.16b}, v26.8b
00aa0114:  trn1     v27.2s, v27.2s, v28.2s
00aa0118:  trn1     v24.2s, v24.2s, v24.2s
00aa011c:  trn1     v25.2s, v25.2s, v25.2s
00aa0120:  mov      v5.8b, v31.8b
00aa0124:  tbx      v5.8b, {v0.16b, v1.16b}, v27.8b
00aa0128:  trn1     v4.2s, v4.2s, v5.2s
00aa012c:  umull    v16.8h, v4.8b, v25.8b
00aa0130:  umlal    v16.8h, v5.8b, v24.8b
00aa0134:  rshrn    v16.8b, v16.8h, #6
00aa0138:  st1      {v16.s}[0], [x0], x1
00aa013c:  subs     w4, w4, #2
00aa0140:  st1      {v16.s}[1], [x0], x1
00aa0144:  b.le     #0xaa0154
00aa0148:  ext      v4.8b, v5.8b, v5.8b, #4
00aa014c:  uqadd    v27.8b, v27.8b, v21.8b
00aa0150:  b        #0xaa0120
00aa0154:  ret      
00aa0158:  bti      j
00aa015c:  dup      v29.8h, w5
00aa0160:  mul      v30.8h, v30.8h, v29.8h
00aa0164:  movi     v23.16b, #0x3e
00aa0168:  ld1      {v0.16b, v1.16b, v2.16b}, [x2]
00aa016c:  add      v30.8h, v29.8h, v30.8h
00aa0170:  movi     v22.16b, #0x40
00aa0174:  movi     v20.16b, #1
00aa0178:  movi     v21.16b, #2
00aa017c:  xtn      v24.8b, v30.8h
00aa0180:  uqshrn   v26.8b, v30.8h, #6
00aa0184:  and      v24.8b, v24.8b, v23.8b
00aa0188:  mov      v4.8b, v31.8b
00aa018c:  uqadd    v27.8b, v26.8b, v20.8b
00aa0190:  uqadd    v28.8b, v26.8b, v21.8b
00aa0194:  sub      v25.8b, v22.8b, v24.8b
00aa0198:  tbx      v4.8b, {v0.16b, v1.16b, v2.16b}, v26.8b
00aa019c:  mov      v5.8b, v31.8b
00aa01a0:  mov      v6.8b, v31.8b
00aa01a4:  tbx      v5.8b, {v0.16b, v1.16b, v2.16b}, v27.8b
00aa01a8:  tbx      v6.8b, {v0.16b, v1.16b, v2.16b}, v28.8b
00aa01ac:  umull    v16.8h, v4.8b, v25.8b
00aa01b0:  umlal    v16.8h, v5.8b, v24.8b
00aa01b4:  umull    v17.8h, v5.8b, v25.8b
00aa01b8:  umlal    v17.8h, v6.8b, v24.8b
00aa01bc:  rshrn    v16.8b, v16.8h, #6
00aa01c0:  rshrn    v17.8b, v17.8h, #6
00aa01c4:  st1      {v16.8b}, [x0], x1
00aa01c8:  subs     w4, w4, #2
00aa01cc:  st1      {v17.8b}, [x0], x1
00aa01d0:  b.le     #0xaa01e4
00aa01d4:  mov      v4.8b, v6.8b
00aa01d8:  uqadd    v27.8b, v27.8b, v21.8b
00aa01dc:  uqadd    v28.8b, v28.8b, v21.8b
00aa01e0:  b        #0xaa019c
00aa01e4:  ret      
00aa01e8:  bti      j
00aa01ec:  dup      v28.8h, w5
00aa01f0:  shl      v29.8h, v28.8h, #3
00aa01f4:  mul      v30.8h, v30.8h, v28.8h
00aa01f8:  movi     v23.16b, #0x3e
00aa01fc:  ld1      {v0.16b, v1.16b, v2.16b, v3.16b}, [x2]
00aa0200:  add      v28.8h, v28.8h, v30.8h
00aa0204:  movi     v22.16b, #0x40
00aa0208:  movi     v20.16b, #1
00aa020c:  movi     v21.16b, #2
00aa0210:  add      v29.8h, v28.8h, v29.8h
00aa0214:  xtn      v24.8b, v28.8h
00aa0218:  xtn2     v24.16b, v29.8h
00aa021c:  uqshrn   v26.8b, v28.8h, #6
00aa0220:  uqshrn2  v26.16b, v29.8h, #6
00aa0224:  and      v24.16b, v24.16b, v23.16b
00aa0228:  mov      v4.16b, v31.16b
00aa022c:  uqadd    v27.16b, v26.16b, v20.16b
00aa0230:  uqadd    v28.16b, v26.16b, v21.16b
00aa0234:  sub      v25.16b, v22.16b, v24.16b
00aa0238:  tbx      v4.16b, {v0.16b, v1.16b, v2.16b, v3.16b}, v26.16b
00aa023c:  mov      v5.16b, v31.16b
00aa0240:  mov      v6.16b, v31.16b
00aa0244:  tbx      v5.16b, {v0.16b, v1.16b, v2.16b, v3.16b}, v27.16b
00aa0248:  tbx      v6.16b, {v0.16b, v1.16b, v2.16b, v3.16b}, v28.16b
00aa024c:  umull    v16.8h, v4.8b, v25.8b
00aa0250:  umlal    v16.8h, v5.8b, v24.8b
00aa0254:  umull2   v17.8h, v4.16b, v25.16b
00aa0258:  umlal2   v17.8h, v5.16b, v24.16b

; ===== 00b0a61c  FUN_00b0a61c  (14612 bytes) =====
00b0a61c:  paciasp  
00b0a620:  stp      x29, x30, [sp, #-0x60]!
00b0a624:  stp      x28, x27, [sp, #0x10]
00b0a628:  stp      x26, x25, [sp, #0x20]
00b0a62c:  stp      x24, x23, [sp, #0x30]
00b0a630:  stp      x22, x21, [sp, #0x40]
00b0a634:  stp      x20, x19, [sp, #0x50]
00b0a638:  mov      x29, sp
00b0a63c:  sub      sp, sp, #0x690
00b0a640:  stp      x6, x7, [sp, #0x58]
00b0a644:  ldr      x28, [x29, #0x78]
00b0a648:  mov      x26, x1
00b0a64c:  stp      x4, x5, [sp, #8]
00b0a650:  mov      x27, x0
00b0a654:  str      w3, [sp, #0x2c]
00b0a658:  mrs      x8, tpidr_el0
00b0a65c:  str      x8, [sp, #0x50]
00b0a660:  ldr      x8, [x8, #0x28]
00b0a664:  stur     x8, [x29, #-0x18]
00b0a668:  str      x28, [sp, #0x68]
00b0a66c:  str      w2, [sp, #0x44]
00b0a670:  cbnz     w2, #0xb0a79c
00b0a674:  cbz      x28, #0xb0a79c
00b0a678:  ldr      x8, [sp, #0x58]
00b0a67c:  ldp      x22, x23, [x8]
00b0a680:  cmp      x22, x23
00b0a684:  b.eq     #0xb0a79c
00b0a688:  mov      w24, #0x18
00b0a68c:  adrp     x25, #0xd43000
00b0a690:  add      x25, x25, #0xc8
00b0a694:  b        #0xb0a6a4
00b0a698:  add      x22, x22, #4
00b0a69c:  cmp      x22, x23
00b0a6a0:  b.eq     #0xb0a79c
00b0a6a4:  ldp      x21, x20, [x28, #0x110]
00b0a6a8:  ldr      w19, [x22]
00b0a6ac:  cmp      x21, x20
00b0a6b0:  b.eq     #0xb0a700
00b0a6b4:  add      x0, sp, #0x4b0
00b0a6b8:  mov      x1, x21
00b0a6bc:  bl       #0x890830
00b0a6c0:  ldr      w28, [sp, #0x4bc]
00b0a6c4:  add      x0, sp, #0x4b0
00b0a6c8:  bl       #0x890cb8
00b0a6cc:  cmp      w28, w19
00b0a6d0:  b.eq     #0xb0a6e4
00b0a6d4:  add      x21, x21, #0xd8
00b0a6d8:  cmp      x21, x20
00b0a6dc:  b.ne     #0xb0a6b4
00b0a6e0:  mov      x21, x20
00b0a6e4:  ldr      x28, [sp, #0x68]
00b0a6e8:  ldr      x8, [x28, #0x118]
00b0a6ec:  cmp      x21, x8
00b0a6f0:  cset     w8, ne
00b0a6f4:  cmp      w19, #0x12
00b0a6f8:  b.ls     #0xb0a70c
00b0a6fc:  b        #0xb0a698
00b0a700:  mov      w8, wzr
00b0a704:  cmp      w19, #0x12
00b0a708:  b.hi     #0xb0a698
00b0a70c:  tbnz     w8, #0, #0xb0a698
00b0a710:  umaddl   x20, w19, w24, x25
00b0a714:  movi     v0.16b, #0xaa
00b0a718:  add      x0, sp, #0x310
00b0a71c:  ldr      x1, [x20]
00b0a720:  str      q0, [sp, #0x310]
00b0a724:  str      d0, [sp, #0x320]
00b0a728:  bl       #0x5d3510
00b0a72c:  ldr      w2, [x20, #8]
00b0a730:  ldr      x3, [x20, #0x10]
00b0a734:  add      x8, sp, #0x4b0
00b0a738:  add      x1, sp, #0x310
00b0a73c:  mov      w0, w19
00b0a740:  bl       #0x89221c
00b0a744:  ldp      x19, x8, [x28, #0x118]
00b0a748:  cmp      x19, x8
00b0a74c:  b.hs     #0xb0a78c
00b0a750:  cbz      x19, #0xb0d96c
00b0a754:  add      x1, sp, #0x4b0
00b0a758:  mov      x0, x19
00b0a75c:  bl       #0x890830
00b0a760:  add      x0, x19, #0xd8
00b0a764:  str      x0, [x28, #0x118]
00b0a768:  add      x0, sp, #0x4b0
00b0a76c:  bl       #0x890cb8
00b0a770:  ldrsb    w8, [sp, #0x327]
00b0a774:  tbz      w8, #0x1f, #0xb0a698
00b0a778:  ldr      x8, [sp, #0x320]
00b0a77c:  ldr      x0, [sp, #0x310]
00b0a780:  and      x1, x8, #0x7fffffffffffffff
00b0a784:  bl       #0x546bc0
00b0a788:  b        #0xb0a698
00b0a78c:  add      x0, x28, #0x110
00b0a790:  add      x1, sp, #0x4b0
00b0a794:  bl       #0xb14350
00b0a798:  b        #0xb0a764
00b0a79c:  mov      w8, #0xaa
00b0a7a0:  movi     v0.2d, #0000000000000000
00b0a7a4:  ldr      x20, [x29, #0x90]
00b0a7a8:  strb     w8, [sp, #0x1ec]
00b0a7ac:  ldr      x8, [x29, #0x88]
00b0a7b0:  add      x24, sp, #0x4b0
00b0a7b4:  add      x28, sp, #0x1a0
00b0a7b8:  str      xzr, [sp, #0x2c0]
00b0a7bc:  str      x8, [sp, #0x38]
00b0a7c0:  ldr      x8, [x29, #0x80]
00b0a7c4:  str      xzr, [sp, #0x2b8]
00b0a7c8:  str      x8, [sp, #0x48]
00b0a7cc:  ldr      x8, [x29, #0x70]
00b0a7d0:  str      q0, [sp, #0x1c0]
00b0a7d4:  str      x8, [sp, #0x30]
00b0a7d8:  ldr      x8, [x29, #0x68]
00b0a7dc:  stp      q0, q0, [sp, #0x1a0]
00b0a7e0:  str      x8, [sp, #0x18]
00b0a7e4:  ldr      x8, [x29, #0x60]
00b0a7e8:  str      xzr, [sp, #0x2c8]
00b0a7ec:  str      xzr, [sp, #0x2a8]
00b0a7f0:  str      xzr, [sp, #0x2a0]
00b0a7f4:  str      xzr, [sp, #0x2b0]
00b0a7f8:  str      xzr, [sp, #0x290]
00b0a7fc:  str      xzr, [sp, #0x288]
00b0a800:  str      xzr, [sp, #0x298]
00b0a804:  str      xzr, [sp, #0x278]
00b0a808:  str      xzr, [sp, #0x270]
00b0a80c:  str      xzr, [sp, #0x280]
00b0a810:  str      xzr, [sp, #0x260]
00b0a814:  str      xzr, [sp, #0x258]
00b0a818:  str      xzr, [sp, #0x268]
00b0a81c:  str      xzr, [sp, #0x248]
00b0a820:  str      xzr, [sp, #0x240]
00b0a824:  str      xzr, [sp, #0x250]
00b0a828:  str      xzr, [sp, #0x230]
00b0a82c:  str      xzr, [sp, #0x228]
00b0a830:  str      xzr, [sp, #0x238]
00b0a834:  str      xzr, [sp, #0x218]
00b0a838:  str      xzr, [sp, #0x210]
00b0a83c:  str      xzr, [sp, #0x220]
00b0a840:  stp      xzr, xzr, [sp, #0x1f0]
00b0a844:  str      xzr, [sp, #0x200]
00b0a848:  stp      xzr, xzr, [sp, #0x1d0]
00b0a84c:  str      xzr, [sp, #0x1e0]
00b0a850:  str      x8, [sp, #0x20]
00b0a854:  ldr      x25, [sp, #0x60]
00b0a858:  ldr      x19, [x25]
00b0a85c:  add      x8, x19, #2
00b0a860:  cmp      x26, x8
00b0a864:  b.lo     #0xb0a894
00b0a868:  cmp      x26, x19
00b0a86c:  b.ls     #0xb0dce4
00b0a870:  ldrb     w8, [x27, x19]
00b0a874:  cmp      w8, #0x6d
00b0a878:  b.ne     #0xb0a894
00b0a87c:  add      x8, x19, #1
00b0a880:  cmp      x8, x26
00b0a884:  b.hs     #0xb0dce4
00b0a888:  ldrb     w8, [x27, x8]
00b0a88c:  cmp      w8, #0x3d
00b0a890:  b.eq     #0xb0bed8
00b0a894:  movi     v0.16b, #0xaa
00b0a898:  subs     x21, x26, x19
00b0a89c:  str      q0, [sp, #0x2f0]
00b0a8a0:  str      d0, [sp, #0x300]
00b0a8a4:  b.lo     #0xb0be80
00b0a8a8:  add      x0, x27, x19
00b0a8ac:  mov      w1, #0xa
00b0a8b0:  mov      x2, x21
00b0a8b4:  add      x22, x27, x19
00b0a8b8:  bl       #0xd140d0
00b0a8bc:  cbz      x0, #0xb0be80
00b0a8c0:  sub      x8, x0, x27
00b0a8c4:  cmn      x8, #1
00b0a8c8:  b.eq     #0xb0be80
00b0a8cc:  sub      x9, x8, x19
00b0a8d0:  cmp      x21, x9
00b0a8d4:  csel     x9, x21, x9, lo
00b0a8d8:  cbz      x9, #0xb0be80
00b0a8dc:  add      x10, x22, x9
00b0a8e0:  ldurb    w10, [x10, #-1]
00b0a8e4:  cmp      w10, #0xd
00b0a8e8:  cset     w10, eq
00b0a8ec:  sub      x21, x9, x10
00b0a8f0:  cmp      x21, #3
00b0a8f4:  b.lo     #0xb0be80
00b0a8f8:  ldrb     w9, [x22]
00b0a8fc:  sub      w10, w9, #0x7b
00b0a900:  cmn      w10, #0x1a
00b0a904:  b.lo     #0xb0be80
00b0a908:  ldrb     w10, [x22, #1]
00b0a90c:  cmp      w10, #0x3d
00b0a910:  b.ne     #0xb0be80
00b0a914:  cmp      w9, #0x73
00b0a918:  b.eq     #0xb0a928
00b0a91c:  ldrb     w9, [x22, #2]
00b0a920:  cmp      w9, #0x20
00b0a924:  b.eq     #0xb0be80
00b0a928:  add      x8, x8, #1
00b0a92c:  str      x22, [sp, #0x2f0]
00b0a930:  str      x8, [x25]
00b0a934:  mov      w8, #1
00b0a938:  str      x21, [sp, #0x2f8]
00b0a93c:  strb     w8, [sp, #0x300]
00b0a940:  ldrb     w8, [x22]
00b0a944:  cmp      w8, #0x61
00b0a948:  b.eq     #0xb0aa34
00b0a94c:  cmp      w8, #0x63
00b0a950:  b.eq     #0xb0a9c8
00b0a954:  cmp      w8, #0x62
00b0a958:  b.ne     #0xb0ab70
00b0a95c:  ldrb     w8, [x22, #1]
00b0a960:  cmp      w8, #0x3d
00b0a964:  b.ne     #0xb0ab70
00b0a968:  sub      x1, x21, #2
00b0a96c:  add      x0, x22, #2
00b0a970:  add      x3, sp, #0x2d0
00b0a974:  add      x4, sp, #0x310
00b0a978:  mov      w2, #0x3a
00b0a97c:  str      xzr, [sp, #0x318]
00b0a980:  str      xzr, [sp, #0x310]
00b0a984:  str      xzr, [sp, #0x320]
00b0a988:  str      xzr, [sp, #0x2d8]
00b0a98c:  str      xzr, [sp, #0x2d0]
00b0a990:  str      xzr, [sp, #0x2e0]
00b0a994:  bl       #0x625060
00b0a998:  tbz      w0, #0, #0xb0ac00
00b0a99c:  adrp     x0, #0xd52000
00b0a9a0:  mov      x21, x20
00b0a9a4:  ldr      x0, [x0, #0x308]
00b0a9a8:  bl       #0xd14180
00b0a9ac:  ldrsb    x20, [sp, #0x2e7]
00b0a9b0:  mov      x19, x0
00b0a9b4:  tbnz     x20, #0x3f, #0xb0ae5c
00b0a9b8:  cmp      x19, x20
00b0a9bc:  b.ne     #0xb0ae88
00b0a9c0:  add      x0, sp, #0x2d0
00b0a9c4:  b        #0xb0ae74
00b0a9c8:  ldrb     w8, [x22, #1]
00b0a9cc:  cmp      w8, #0x3d
00b0a9d0:  b.ne     #0xb0ab70
00b0a9d4:  movi     v0.16b, #0xaa
00b0a9d8:  add      x0, sp, #0x4b0
00b0a9dc:  str      q0, [sp, #0x4e0]
00b0a9e0:  str      q0, [sp, #0x4d0]
00b0a9e4:  str      q0, [sp, #0x4c0]
00b0a9e8:  str      q0, [sp, #0x4b0]
00b0a9ec:  str      d0, [sp, #0x4f0]
00b0a9f0:  bl       #0x7e8a64
00b0a9f4:  ldrb     w8, [sp, #0x300]
00b0a9f8:  tbz      w8, #0, #0xb0df1c
00b0a9fc:  ldr      x0, [sp, #0x2f0]
00b0aa00:  ldr      x1, [sp, #0x2f8]
00b0aa04:  add      x2, sp, #0x4b0
00b0aa08:  mov      x3, x20
00b0aa0c:  bl       #0xb07c58
00b0aa10:  tbz      w0, #0, #0xb0ac64
00b0aa14:  ldr      x8, [sp, #0x68]
00b0aa18:  add      x1, sp, #0x4b0
00b0aa1c:  add      x0, x8, #0x78
00b0aa20:  bl       #0x7e8d84
00b0aa24:  mov      w19, #2
00b0aa28:  ldrsb    w8, [sp, #0x4c7]
00b0aa2c:  tbz      w8, #0x1f, #0xb0b2bc
00b0aa30:  b        #0xb0ac70
00b0aa34:  ldrb     w8, [x22, #1]
00b0aa38:  cmp      w8, #0x3d
00b0aa3c:  b.ne     #0xb0ab70
00b0aa40:  sub      x23, x21, #2
00b0aa44:  mov      w8, #3
00b0aa48:  add      x0, x22, #2
00b0aa4c:  cmp      x23, #3
00b0aa50:  adrp     x1, #0x254000
00b0aa54:  add      x1, x1, #0xc43
00b0aa58:  csel     x2, x23, x8, lo
00b0aa5c:  bl       #0xd13ff0
00b0aa60:  cmp      x23, #3
00b0aa64:  b.lo     #0xb0aba8
00b0aa68:  cbnz     w0, #0xb0aba8
00b0aa6c:  cmp      x21, #5
00b0aa70:  b.eq     #0xb0aa88
00b0aa74:  ldrb     w8, [x22, #5]
00b0aa78:  cmp      w8, #0x3a
00b0aa7c:  b.eq     #0xb0aa88
00b0aa80:  cmp      w8, #0x20
00b0aa84:  b.ne     #0xb0aba8
00b0aa88:  add      x4, sp, #0x2a0
00b0aa8c:  mov      x0, x22
00b0aa90:  mov      x1, x21
00b0aa94:  adrp     x2, #0x254000
00b0aa98:  add      x2, x2, #0xc43
00b0aa9c:  mov      w3, #3
00b0aaa0:  mov      x5, x20
00b0aaa4:  bl       #0xb080f4
00b0aaa8:  tbz      w0, #0, #0xb0bed0
00b0aaac:  ldrb     w8, [sp, #0x2b7]
00b0aab0:  ldr      x2, [sp, #0x2a8]
00b0aab4:  add      x9, sp, #0x2a0
00b0aab8:  ldr      x1, [sp, #0x2a0]
00b0aabc:  ldr      x16, [sp, #0x20]
00b0aac0:  sxtb     w10, w8
00b0aac4:  cmp      w10, #0
00b0aac8:  csel     x8, x2, x8, mi
00b0aacc:  csel     x9, x1, x9, mi
00b0aad0:  cbz      x8, #0xb0ab40
00b0aad4:  sub      x11, x8, #1
00b0aad8:  mov      x12, x9
00b0aadc:  mov      w17, #0x367d
00b0aae0:  ldrb     w14, [x12]
00b0aae4:  sub      w13, w14, #0x21
00b0aae8:  cmp      w13, #0xe
00b0aaec:  b.hs     #0xb0ab00
00b0aaf0:  lsr      w13, w17, w13
00b0aaf4:  tbz      w13, #0, #0xb0ab00
00b0aaf8:  mov      w13, #1
00b0aafc:  b        #0xb0ab2c
00b0ab00:  sub      w13, w14, #0x30
00b0ab04:  cmp      w13, #0xa
00b0ab08:  mov      w13, #1
00b0ab0c:  b.lo     #0xb0ab2c
00b0ab10:  sub      w15, w14, #0x41
00b0ab14:  and      w15, w15, #0xff
00b0ab18:  cmp      w15, #0x1a
00b0ab1c:  b.lo     #0xb0ab2c
00b0ab20:  sub      w13, w14, #0x5e
00b0ab24:  cmp      w13, #0x21
00b0ab28:  cset     w13, lo
00b0ab2c:  cbz      x11, #0xb0ab3c
00b0ab30:  add      x12, x12, #1
00b0ab34:  sub      x11, x11, #1
00b0ab38:  tbnz     w13, #0, #0xb0aae0
00b0ab3c:  tbz      w13, #0, #0xb0dc24
00b0ab40:  add      x11, sp, #0x2a0
00b0ab44:  cmp      x16, x11
00b0ab48:  b.eq     #0xb0a858
00b0ab4c:  ldr      x0, [sp, #0x20]
00b0ab50:  ldrsb    w11, [x0, #0x17]
00b0ab54:  tbnz     w11, #0x1f, #0xb0aff4
00b0ab58:  tbnz     w10, #0x1f, #0xb0b05c
00b0ab5c:  ldr      q0, [sp, #0x2a0]
00b0ab60:  ldr      x8, [sp, #0x2b0]
00b0ab64:  str      q0, [x0]
00b0ab68:  str      x8, [x0, #0x10]
00b0ab6c:  b        #0xb0a858
00b0ab70:  bl       #0x44075c
00b0ab74:  tbnz     w0, #0, #0xb0a858
00b0ab78:  ldrb     w8, [sp, #0x300]
00b0ab7c:  tbz      w8, #0, #0xb0df1c
00b0ab80:  add      x4, sp, #0x2f0
00b0ab84:  adrp     x0, #0x21f000
00b0ab88:  add      x0, x0, #0x2ce
00b0ab8c:  adrp     x1, #0x1bb000
00b0ab90:  add      x1, x1, #0x894
00b0ab94:  mov      w2, #0x5048
00b0ab98:  adrp     x3, #0x1a2000
00b0ab9c:  add      x3, x3, #0xd3
00b0aba0:  bl       #0x623bb0
00b0aba4:  b        #0xb0a858
00b0aba8:  cmp      x23, #0xb
00b0abac:  mov      w8, #0xb
00b0abb0:  add      x0, x22, #2
00b0abb4:  csel     x19, x23, x8, lo
00b0abb8:  adrp     x1, #0x254000
00b0abbc:  add      x1, x1, #0xc37
00b0abc0:  mov      x2, x19
00b0abc4:  bl       #0xd13ff0
00b0abc8:  cmp      x23, #0xb
00b0abcc:  b.lo     #0xb0ac7c
00b0abd0:  cbnz     w0, #0xb0ac7c
00b0abd4:  cmp      x21, #0xd
00b0abd8:  b.eq     #0xb0abf0
00b0abdc:  ldrb     w8, [x22, #0xd]
00b0abe0:  cmp      w8, #0x3a
00b0abe4:  b.eq     #0xb0abf0
00b0abe8:  cmp      w8, #0x20
00b0abec:  b.ne     #0xb0ac7c
00b0abf0:  ldr      x8, [sp, #0x18]
00b0abf4:  mov      w9, #1
00b0abf8:  strb     w9, [x8]
00b0abfc:  b        #0xb0a858
00b0ac00:  ldrb     w8, [sp, #0x300]
00b0ac04:  tbz      w8, #0, #0xb0df1c
00b0ac08:  ldr      x19, [sp, #0x2f0]
00b0ac0c:  ldr      x21, [sp, #0x2f8]
00b0ac10:  add      x0, sp, #0x170
00b0ac14:  adrp     x1, #0x1be000
00b0ac18:  add      x1, x1, #0x32f
00b0ac1c:  bl       #0x5d3510
00b0ac20:  ldr      q0, [sp, #0x170]
00b0ac24:  ldr      x8, [sp, #0x180]
00b0ac28:  add      x3, sp, #0x4b0
00b0ac2c:  mov      x0, x19
00b0ac30:  mov      x1, x21
00b0ac34:  mov      x2, xzr
00b0ac38:  mov      x4, x20
00b0ac3c:  str      q0, [sp, #0x4b0]
00b0ac40:  str      x8, [sp, #0x4c0]
00b0ac44:  stp      xzr, xzr, [sp, #0x170]
00b0ac48:  str      xzr, [sp, #0x180]
00b0ac4c:  bl       #0xb09348
00b0ac50:  ldrsb    w8, [sp, #0x4c7]
00b0ac54:  tbnz     w8, #0x1f, #0xb0aeac
00b0ac58:  ldrsb    w8, [sp, #0x187]
00b0ac5c:  tbz      w8, #0x1f, #0xb0b2a8
00b0ac60:  b        #0xb0aec4
00b0ac64:  mov      w19, #1
00b0ac68:  ldrsb    w8, [sp, #0x4c7]
00b0ac6c:  tbz      w8, #0x1f, #0xb0b2bc
00b0ac70:  ldr      x0, [sp, #0x4b0]
00b0ac74:  ldr      x8, [sp, #0x4c0]
00b0ac78:  b        #0xb0b460
00b0ac7c:  cmp      x23, #9
00b0ac80:  mov      w8, #9
00b0ac84:  add      x0, x22, #2
00b0ac88:  csel     x25, x23, x8, lo
00b0ac8c:  adrp     x1, #0x254000
00b0ac90:  add      x1, x1, #0xd92
00b0ac94:  mov      x2, x25
00b0ac98:  bl       #0xd13ff0
00b0ac9c:  cmp      x23, #9
00b0aca0:  b.lo     #0xb0adf0
00b0aca4:  cbnz     w0, #0xb0adf0
00b0aca8:  cmp      x21, #0xb
00b0acac:  b.eq     #0xb0acc4
00b0acb0:  ldrb     w8, [x22, #0xb]
00b0acb4:  cmp      w8, #0x3a
00b0acb8:  b.eq     #0xb0acc4
00b0acbc:  cmp      w8, #0x20
00b0acc0:  b.ne     #0xb0adf0
00b0acc4:  movi     v0.16b, #0xaa
00b0acc8:  add      x8, sp, #0x4b0
00b0accc:  mov      x0, x22
00b0acd0:  mov      x1, x21
00b0acd4:  str      q0, [sp, #0x660]
00b0acd8:  str      q0, [sp, #0x650]
00b0acdc:  str      q0, [sp, #0x640]
00b0ace0:  str      q0, [sp, #0x630]
00b0ace4:  str      q0, [sp, #0x620]
00b0ace8:  str      q0, [sp, #0x610]
00b0acec:  str      q0, [sp, #0x600]
00b0acf0:  str      q0, [sp, #0x5f0]
00b0acf4:  str      q0, [sp, #0x5e0]
00b0acf8:  str      q0, [sp, #0x5d0]
00b0acfc:  str      q0, [sp, #0x5c0]
00b0ad00:  str      q0, [sp, #0x5b0]
00b0ad04:  str      q0, [sp, #0x5a0]
00b0ad08:  str      q0, [sp, #0x590]
00b0ad0c:  str      q0, [sp, #0x580]
00b0ad10:  str      q0, [sp, #0x570]
00b0ad14:  str      q0, [sp, #0x560]
00b0ad18:  str      q0, [sp, #0x550]
00b0ad1c:  str      q0, [sp, #0x540]
00b0ad20:  str      q0, [sp, #0x530]
00b0ad24:  str      q0, [sp, #0x520]
00b0ad28:  str      q0, [sp, #0x510]
00b0ad2c:  str      q0, [sp, #0x500]
00b0ad30:  str      q0, [sp, #0x4f0]
00b0ad34:  str      q0, [sp, #0x4e0]
00b0ad38:  str      q0, [sp, #0x4d0]
00b0ad3c:  str      q0, [sp, #0x4c0]
00b0ad40:  str      q0, [sp, #0x4b0]
00b0ad44:  str      d0, [sp, #0x670]
00b0ad48:  bl       #0xafdba8
00b0ad4c:  ldr      w22, [sp, #0x4b0]
00b0ad50:  cbz      w22, #0xb0b064
00b0ad54:  ldrb     w8, [sp, #0x300]
00b0ad58:  ldr      x25, [sp, #0x60]
00b0ad5c:  add      x23, sp, #0x128
00b0ad60:  tbz      w8, #0, #0xb0df1c
00b0ad64:  ldr      x19, [sp, #0x2f0]
00b0ad68:  ldr      x21, [sp, #0x2f8]
00b0ad6c:  add      x0, sp, #0x4b0
00b0ad70:  bl       #0x5ecd5c
00b0ad74:  mov      x1, x0
00b0ad78:  add      x0, sp, #0x128
00b0ad7c:  bl       #0x5d3510
00b0ad80:  ldr      q0, [x23]
00b0ad84:  ldr      x8, [sp, #0x138]
00b0ad88:  add      x3, sp, #0x310
00b0ad8c:  mov      x0, x19
00b0ad90:  mov      x1, x21
00b0ad94:  mov      x2, xzr
00b0ad98:  mov      x4, x20
00b0ad9c:  str      q0, [sp, #0x310]
00b0ada0:  str      x8, [sp, #0x320]
00b0ada4:  stp      xzr, xzr, [sp, #0x128]
00b0ada8:  str      xzr, [sp, #0x138]
00b0adac:  bl       #0xb09348
00b0adb0:  ldrsb    w8, [sp, #0x327]
00b0adb4:  tbnz     w8, #0x1f, #0xb0b140
00b0adb8:  ldrsb    w8, [sp, #0x13f]
00b0adbc:  tbnz     w8, #0x1f, #0xb0b158
00b0adc0:  ldrb     w8, [sp, #0x670]
00b0adc4:  tbz      w8, #0, #0xb0b0ec
00b0adc8:  add      x0, x24, #0x28
00b0adcc:  bl       #0xaff0f8
00b0add0:  ldrsb    w8, [sp, #0x4cf]
00b0add4:  tbz      w8, #0x1f, #0xb0b0f4
00b0add8:  ldr      x8, [sp, #0x4c8]
00b0addc:  ldr      x0, [sp, #0x4b8]
00b0ade0:  and      x1, x8, #0x7fffffffffffffff
00b0ade4:  bl       #0x546bc0
00b0ade8:  cbz      w22, #0xb0a858
00b0adec:  b        #0xb0bed0
00b0adf0:  add      x0, x22, #2
00b0adf4:  adrp     x1, #0x254000
00b0adf8:  add      x1, x1, #0xc79
00b0adfc:  mov      x2, x25
00b0ae00:  bl       #0xd13ff0
00b0ae04:  cmp      x23, #9
00b0ae08:  b.lo     #0xb0af80
00b0ae0c:  cbnz     w0, #0xb0af80
00b0ae10:  cmp      x21, #0xb
00b0ae14:  b.eq     #0xb0ae2c
00b0ae18:  ldrb     w8, [x22, #0xb]
00b0ae1c:  cmp      w8, #0x3a
00b0ae20:  b.eq     #0xb0ae2c
00b0ae24:  cmp      w8, #0x20
00b0ae28:  b.ne     #0xb0af80
00b0ae2c:  ldr      x8, [sp, #0x48]
00b0ae30:  mov      x0, x22
00b0ae34:  mov      x1, x21
00b0ae38:  adrp     x2, #0x254000
00b0ae3c:  add      x2, x2, #0xc79
00b0ae40:  mov      w3, #9
00b0ae44:  add      x4, x8, #0x18
00b0ae48:  mov      x5, x20
00b0ae4c:  bl       #0xb080f4
00b0ae50:  ldr      x25, [sp, #0x60]
00b0ae54:  tbnz     w0, #0, #0xb0a858
00b0ae58:  b        #0xb0bed0
00b0ae5c:  ldr      x8, [sp, #0x2d8]
00b0ae60:  cmp      x19, x8
00b0ae64:  b.ne     #0xb0ae88
00b0ae68:  cmn      x19, #1
00b0ae6c:  b.eq     #0xb0ddb8
00b0ae70:  ldr      x0, [sp, #0x2d0]
00b0ae74:  adrp     x1, #0xd52000
00b0ae78:  mov      x2, x19
00b0ae7c:  ldr      x1, [x1, #0x308]
00b0ae80:  bl       #0xd13ff0
00b0ae84:  cbz      w0, #0xb0af20
00b0ae88:  adrp     x0, #0x1ff000
00b0ae8c:  add      x0, x0, #0x3e3
00b0ae90:  bl       #0xd14180
00b0ae94:  mov      x2, x0
00b0ae98:  tbnz     w20, #0x1f, #0xb0aee4
00b0ae9c:  cmp      x2, x20
00b0aea0:  b.ne     #0xb0af0c
00b0aea4:  add      x0, sp, #0x2d0
00b0aea8:  b        #0xb0aefc
00b0aeac:  ldr      x8, [sp, #0x4c0]
00b0aeb0:  ldr      x0, [sp, #0x4b0]
00b0aeb4:  and      x1, x8, #0x7fffffffffffffff
00b0aeb8:  bl       #0x546bc0
00b0aebc:  ldrsb    w8, [sp, #0x187]
00b0aec0:  tbz      w8, #0x1f, #0xb0b2a8
00b0aec4:  ldr      x8, [sp, #0x180]
00b0aec8:  ldr      x0, [sp, #0x170]
00b0aecc:  and      x1, x8, #0x7fffffffffffffff
00b0aed0:  bl       #0x546bc0
00b0aed4:  mov      w19, #1
00b0aed8:  ldrsb    w8, [sp, #0x2e7]
00b0aedc:  tbz      w8, #0x1f, #0xb0b2b4
00b0aee0:  b        #0xb0b440
00b0aee4:  ldr      x8, [sp, #0x2d8]
00b0aee8:  cmp      x2, x8
00b0aeec:  b.ne     #0xb0af0c
00b0aef0:  cmn      x2, #1
00b0aef4:  b.eq     #0xb0ddb8
00b0aef8:  ldr      x0, [sp, #0x2d0]
00b0aefc:  adrp     x1, #0x1ff000
00b0af00:  add      x1, x1, #0x3e3
00b0af04:  bl       #0xd13ff0
00b0af08:  cbz      w0, #0xb0af20
00b0af0c:  mov      w19, #2
00b0af10:  mov      x20, x21
00b0af14:  ldrsb    w8, [sp, #0x2e7]
00b0af18:  tbz      w8, #0x1f, #0xb0b2b4
00b0af1c:  b        #0xb0b440
00b0af20:  ldrb     w8, [sp, #0x300]
00b0af24:  str      wzr, [sp, #0x88]
00b0af28:  tbz      w8, #0, #0xb0df1c
00b0af2c:  ldrb     w8, [sp, #0x327]
00b0af30:  ldr      x10, [sp, #0x310]
00b0af34:  add      x4, sp, #0x88
00b0af38:  ldr      x11, [sp, #0x318]
00b0af3c:  ldr      x0, [sp, #0x2f0]
00b0af40:  mov      x5, x21
00b0af44:  sxtb     w9, w8
00b0af48:  ldr      x1, [sp, #0x2f8]
00b0af4c:  mov      x20, x21
00b0af50:  cmp      w9, #0
00b0af54:  add      x9, sp, #0x310
00b0af58:  csel     x2, x10, x9, mi
00b0af5c:  csel     x3, x11, x8, mi
00b0af60:  bl       #0xb09a5c
00b0af64:  tbz      w0, #0, #0xb0b2a8
00b0af68:  ldrsb    x22, [sp, #0x2e7]
00b0af6c:  tbnz     x22, #0x3f, #0xb0b174
00b0af70:  cmp      x19, x22
00b0af74:  b.ne     #0xb0b1d8
00b0af78:  add      x0, sp, #0x2d0
00b0af7c:  b        #0xb0b18c
00b0af80:  cmp      x23, #7
00b0af84:  mov      w8, #7
00b0af88:  add      x0, x22, #2
00b0af8c:  csel     x2, x23, x8, lo
00b0af90:  adrp     x1, #0x254000
00b0af94:  add      x1, x1, #0xc83
00b0af98:  bl       #0xd13ff0
00b0af9c:  ldr      x25, [sp, #0x60]
00b0afa0:  cmp      x23, #7
00b0afa4:  b.lo     #0xb0b004
00b0afa8:  cbnz     w0, #0xb0b004
00b0afac:  cmp      x21, #9
00b0afb0:  b.eq     #0xb0afc8
00b0afb4:  ldrb     w8, [x22, #9]
00b0afb8:  cmp      w8, #0x3a
00b0afbc:  b.eq     #0xb0afc8
00b0afc0:  cmp      w8, #0x20
00b0afc4:  b.ne     #0xb0b004
00b0afc8:  ldr      x8, [sp, #0x48]
00b0afcc:  mov      x0, x22
00b0afd0:  mov      x1, x21
00b0afd4:  adrp     x2, #0x254000
00b0afd8:  add      x2, x2, #0xc83
00b0afdc:  mov      w3, #7
00b0afe0:  add      x4, x8, #0x30
00b0afe4:  mov      x5, x20
00b0afe8:  bl       #0xb080f4
00b0afec:  tbnz     w0, #0, #0xb0a858
00b0aff0:  b        #0xb0bed0
00b0aff4:  mov      x1, x9
00b0aff8:  mov      x2, x8
00b0affc:  bl       #0x547f08
00b0b000:  b        #0xb0a858
00b0b004:  add      x0, x22, #2
00b0b008:  adrp     x1, #0x254000
00b0b00c:  add      x1, x1, #0xc8b
00b0b010:  mov      x2, x19
00b0b014:  bl       #0xd13ff0
00b0b018:  cmp      x23, #0xb
00b0b01c:  b.lo     #0xb0b0fc
00b0b020:  cbnz     w0, #0xb0b0fc
00b0b024:  cmp      x21, #0xd
00b0b028:  b.eq     #0xb0b040
00b0b02c:  ldrb     w8, [x22, #0xd]
00b0b030:  cmp      w8, #0x3a
00b0b034:  b.eq     #0xb0b040
00b0b038:  cmp      w8, #0x20
00b0b03c:  b.ne     #0xb0b0fc
00b0b040:  ldr      x2, [sp, #0x48]
00b0b044:  mov      x0, x22
00b0b048:  mov      x1, x21
00b0b04c:  mov      x3, x20
00b0b050:  bl       #0xb081e0
00b0b054:  tbnz     w0, #0, #0xb0a858
00b0b058:  b        #0xb0bed0
00b0b05c:  bl       #0x547fc0
00b0b060:  b        #0xb0a858
00b0b064:  ldrb     w8, [sp, #0x670]
00b0b068:  ldr      x25, [sp, #0x60]
00b0b06c:  adrp     x19, #0x1b3000
00b0b070:  add      x19, x19, #0x348
00b0b074:  tbz      w8, #0, #0xb0df1c
00b0b078:  add      x0, x24, #0xc8
00b0b07c:  mov      x1, x19
00b0b080:  mov      x2, xzr
00b0b084:  bl       #0xb008fc
00b0b088:  ldrb     w8, [sp, #0x670]
00b0b08c:  tbz      w8, #0, #0xb0df1c
00b0b090:  add      x0, x24, #0xe0
00b0b094:  mov      x1, x19
00b0b098:  mov      x2, xzr
00b0b09c:  bl       #0xb008fc
00b0b0a0:  ldrb     w8, [sp, #0x670]
00b0b0a4:  tbz      w8, #0, #0xb0df1c
00b0b0a8:  add      x0, sp, #0x310
00b0b0ac:  add      x1, x24, #0x28
00b0b0b0:  bl       #0xafef10
00b0b0b4:  ldr      x19, [sp, #0x2c0]
00b0b0b8:  ldr      x8, [sp, #0x2c8]
00b0b0bc:  cmp      x19, x8
00b0b0c0:  b.hs     #0xb0b7f0
00b0b0c4:  cbz      x19, #0xb0d96c
00b0b0c8:  add      x1, sp, #0x310
00b0b0cc:  mov      x0, x19
00b0b0d0:  bl       #0xafef10
00b0b0d4:  add      x0, x19, #0x198
00b0b0d8:  str      x0, [sp, #0x2c0]
00b0b0dc:  add      x0, sp, #0x310
00b0b0e0:  bl       #0xaff0f8
00b0b0e4:  ldrb     w8, [sp, #0x670]
00b0b0e8:  tbnz     w8, #0, #0xb0adc8
00b0b0ec:  ldrsb    w8, [sp, #0x4cf]
00b0b0f0:  tbnz     w8, #0x1f, #0xb0add8
00b0b0f4:  cbz      w22, #0xb0a858
00b0b0f8:  b        #0xb0bed0
00b0b0fc:  mov      x0, x22
00b0b100:  mov      x1, x21
00b0b104:  adrp     x2, #0x254000
00b0b108:  add      x2, x2, #0xd81
00b0b10c:  mov      w3, #4
00b0b110:  bl       #0xb0803c
00b0b114:  ldrb     w8, [sp, #0x300]
00b0b118:  tbz      w0, #0, #0xb0b2c8
00b0b11c:  tbz      w8, #0, #0xb0df1c
00b0b120:  ldr      x0, [sp, #0x2f0]
00b0b124:  ldr      x1, [sp, #0x2f8]
00b0b128:  mov      x4, x20
00b0b12c:  ldr      w2, [sp, #0x44]
00b0b130:  ldr      x3, [sp, #0x68]
00b0b134:  bl       #0xb11668
00b0b138:  tbnz     w0, #0, #0xb0a858
00b0b13c:  b        #0xb0bed0
00b0b140:  ldr      x8, [sp, #0x320]
00b0b144:  ldr      x0, [sp, #0x310]
00b0b148:  and      x1, x8, #0x7fffffffffffffff
00b0b14c:  bl       #0x546bc0
00b0b150:  ldrsb    w8, [sp, #0x13f]
00b0b154:  tbz      w8, #0x1f, #0xb0adc0
00b0b158:  ldr      x8, [sp, #0x138]
00b0b15c:  ldr      x0, [sp, #0x128]
00b0b160:  and      x1, x8, #0x7fffffffffffffff
00b0b164:  bl       #0x546bc0
00b0b168:  ldrb     w8, [sp, #0x670]
00b0b16c:  tbz      w8, #0, #0xb0b0ec
00b0b170:  b        #0xb0adc8
00b0b174:  ldr      x8, [sp, #0x2d8]
00b0b178:  cmp      x19, x8
00b0b17c:  b.ne     #0xb0b1d8
00b0b180:  cmn      x19, #1
00b0b184:  b.eq     #0xb0ddb8
00b0b188:  ldr      x0, [sp, #0x2d0]
00b0b18c:  adrp     x1, #0xd52000
00b0b190:  mov      x2, x19
00b0b194:  ldr      x1, [x1, #0x308]
00b0b198:  bl       #0xd13ff0
00b0b19c:  ldr      w21, [sp, #0x88]
00b0b1a0:  cbnz     w0, #0xb0b1dc
00b0b1a4:  cmn      w21, #1
00b0b1a8:  b.ne     #0xb0b1dc
00b0b1ac:  bl       #0x4022fc
00b0b1b0:  tbnz     w0, #0, #0xb0b434
00b0b1b4:  adrp     x0, #0x1f4000
00b0b1b8:  add      x0, x0, #0xe98
00b0b1bc:  adrp     x1, #0x1bb000
00b0b1c0:  add      x1, x1, #0x894
00b0b1c4:  mov      w2, #0x4f52
00b0b1c8:  adrp     x3, #0x19e000
00b0b1cc:  add      x3, x3, #0xca3
00b0b1d0:  bl       #0x623bb0
00b0b1d4:  b        #0xb0b434
00b0b1d8:  ldr      w21, [sp, #0x88]
00b0b1dc:  tbnz     w21, #0x1f, #0xb0b1f4
00b0b1e0:  tbnz     w22, #0x1f, #0xb0b328
00b0b1e4:  cmp      x19, x22
00b0b1e8:  b.ne     #0xb0b384
00b0b1ec:  add      x0, sp, #0x2d0
00b0b1f0:  b        #0xb0b340
00b0b1f4:  ldrb     w8, [sp, #0x300]
00b0b1f8:  tbz      w8, #0, #0xb0df1c
00b0b1fc:  ldr      x8, [sp, #0x2d0]
00b0b200:  ldr      x9, [sp, #0x2d8]
00b0b204:  cmp      w22, #0
00b0b208:  add      x10, sp, #0x2d0
00b0b20c:  ldr      x19, [sp, #0x2f0]
00b0b210:  ldr      x21, [sp, #0x2f8]
00b0b214:  csel     x3, x8, x10, mi
00b0b218:  csel     x4, x9, x22, mi
00b0b21c:  add      x8, sp, #0x158
00b0b220:  add      x0, sp, #0x4b0
00b0b224:  adrp     x1, #0x1be000
00b0b228:  add      x1, x1, #0x36f
00b0b22c:  mov      w2, #2
00b0b230:  bl       #0x5ff514
00b0b234:  add      x0, sp, #0x158
00b0b238:  adrp     x1, #0x1b8000
00b0b23c:  add      x1, x1, #0x831
00b0b240:  mov      w2, #0x19
00b0b244:  bl       #0x547cac
00b0b248:  ldr      x8, [x0]
00b0b24c:  ldur     q0, [x0, #8]
00b0b250:  add      x3, sp, #0x4b0
00b0b254:  stp      xzr, xzr, [x0]
00b0b258:  mov      x1, x21
00b0b25c:  mov      x2, xzr
00b0b260:  str      xzr, [x0, #0x10]
00b0b264:  mov      x0, x19
00b0b268:  mov      x4, x20
00b0b26c:  str      x8, [sp, #0x4b0]
00b0b270:  stur     q0, [x24, #8]
00b0b274:  bl       #0xb09348
00b0b278:  ldrsb    w8, [sp, #0x4c7]
00b0b27c:  tbz      w8, #0x1f, #0xb0b290
00b0b280:  ldr      x8, [sp, #0x4c0]
00b0b284:  ldr      x0, [sp, #0x4b0]
00b0b288:  and      x1, x8, #0x7fffffffffffffff
00b0b28c:  bl       #0x546bc0
00b0b290:  ldrsb    w8, [sp, #0x16f]
00b0b294:  tbz      w8, #0x1f, #0xb0b2a8
00b0b298:  ldr      x8, [sp, #0x168]
00b0b29c:  ldr      x0, [sp, #0x158]
00b0b2a0:  and      x1, x8, #0x7fffffffffffffff
00b0b2a4:  bl       #0x546bc0
00b0b2a8:  mov      w19, #1
00b0b2ac:  ldrsb    w8, [sp, #0x2e7]
00b0b2b0:  tbnz     w8, #0x1f, #0xb0b440
00b0b2b4:  ldrsb    w8, [sp, #0x327]
00b0b2b8:  tbnz     w8, #0x1f, #0xb0b458
00b0b2bc:  cmp      w19, #2
00b0b2c0:  b.eq     #0xb0a858
00b0b2c4:  b        #0xb0bed0
00b0b2c8:  tbz      w8, #0, #0xb0df1c
00b0b2cc:  ldr      x0, [sp, #0x2f0]
00b0b2d0:  ldr      x1, [sp, #0x2f8]
00b0b2d4:  adrp     x2, #0x254000
00b0b2d8:  add      x2, x2, #0xc97
00b0b2dc:  mov      w3, #0xb
00b0b2e0:  bl       #0xb0803c
00b0b2e4:  tbz      w0, #0, #0xb0b3a0
00b0b2e8:  ldrb     w8, [sp, #0x300]
00b0b2ec:  str      xzr, [sp, #0x4b0]
00b0b2f0:  tbz      w8, #0, #0xb0df1c
00b0b2f4:  ldr      x0, [sp, #0x2f0]
00b0b2f8:  ldr      x1, [sp, #0x2f8]
00b0b2fc:  add      x2, sp, #0x4b0
00b0b300:  mov      x3, x20
00b0b304:  bl       #0xb083e8
00b0b308:  tbz      w0, #0, #0xb0dd0c
00b0b30c:  ldr      x8, [sp, #0x48]
00b0b310:  add      x1, sp, #0x4b0
00b0b314:  add      x0, x8, #0x50
00b0b318:  bl       #0xb0879c
00b0b31c:  add      x0, sp, #0x4b0
00b0b320:  bl       #0xb08804
00b0b324:  b        #0xb0a858
00b0b328:  ldr      x2, [sp, #0x2d8]
00b0b32c:  cmp      x19, x2
00b0b330:  b.ne     #0xb0b3ec
00b0b334:  cmn      x19, #1
00b0b338:  b.eq     #0xb0ddb8
00b0b33c:  ldr      x0, [sp, #0x2d0]
00b0b340:  adrp     x1, #0xd52000
00b0b344:  mov      x2, x19
00b0b348:  ldr      x1, [x1, #0x308]
00b0b34c:  bl       #0xd13ff0
00b0b350:  cbnz     w0, #0xb0b370
00b0b354:  mov      w8, #0xc49b
00b0b358:  mov      w9, #0x3e8
00b0b35c:  movk     w8, #0x20, lsl #16
00b0b360:  cmp      w21, w8
00b0b364:  csel     w8, w21, w8, lo
00b0b368:  mul      w21, w8, w9
00b0b36c:  str      w21, [sp, #0x88]
00b0b370:  ldr      x8, [sp, #0x68]
00b0b374:  str      w21, [x8, #0x24]
00b0b378:  tbz      w22, #0x1f, #0xb0b38c
00b0b37c:  ldr      x2, [sp, #0x2d8]
00b0b380:  b        #0xb0b3f4
00b0b384:  ldr      x8, [sp, #0x68]
00b0b388:  str      w21, [x8, #0x24]
00b0b38c:  ldr      q0, [sp, #0x2d0]
00b0b390:  ldr      x8, [sp, #0x2e0]
00b0b394:  str      q0, [sp, #0x140]
00b0b398:  str      x8, [sp, #0x150]
00b0b39c:  b        #0xb0b400
00b0b3a0:  ldrb     w8, [sp, #0x300]
00b0b3a4:  tbz      w8, #0, #0xb0df1c
00b0b3a8:  ldr      x0, [sp, #0x2f0]
00b0b3ac:  ldr      x1, [sp, #0x2f8]
00b0b3b0:  adrp     x2, #0x254000
00b0b3b4:  add      x2, x2, #0xca3
00b0b3b8:  mov      w3, #5
00b0b3bc:  bl       #0xb0803c
00b0b3c0:  tbz      w0, #0, #0xb0b474
00b0b3c4:  ldrb     w8, [sp, #0x300]
00b0b3c8:  tbz      w8, #0, #0xb0df1c
00b0b3cc:  ldr      x8, [sp, #0x48]
00b0b3d0:  ldr      x0, [sp, #0x2f0]
00b0b3d4:  mov      x3, x20
00b0b3d8:  ldr      x1, [sp, #0x2f8]
00b0b3dc:  add      x2, x8, #0x4c
00b0b3e0:  bl       #0xb08868
00b0b3e4:  tbnz     w0, #0, #0xb0a858
00b0b3e8:  b        #0xb0bed0
00b0b3ec:  ldr      x8, [sp, #0x68]
00b0b3f0:  str      w21, [x8, #0x24]
00b0b3f4:  ldr      x1, [sp, #0x2d0]
00b0b3f8:  add      x0, sp, #0x140
00b0b3fc:  bl       #0x5478d8
00b0b400:  ldr      x19, [sp, #0x68]
00b0b404:  ldrsb    w8, [x19, #0x3f]
00b0b408:  tbz      w8, #0x1f, #0xb0b41c
00b0b40c:  ldr      x8, [x19, #0x38]
00b0b410:  ldr      x0, [x19, #0x28]
00b0b414:  and      x1, x8, #0x7fffffffffffffff
00b0b418:  bl       #0x546bc0
00b0b41c:  ldr      q0, [sp, #0x140]
00b0b420:  ldr      x8, [sp, #0x150]
00b0b424:  strb     wzr, [sp, #0x157]
00b0b428:  strb     wzr, [sp, #0x140]
00b0b42c:  stur     q0, [x19, #0x28]
00b0b430:  stur     x8, [x19, #0x38]
00b0b434:  mov      w19, #2
00b0b438:  ldrsb    w8, [sp, #0x2e7]
00b0b43c:  tbz      w8, #0x1f, #0xb0b2b4
00b0b440:  ldr      x8, [sp, #0x2e0]
00b0b444:  ldr      x0, [sp, #0x2d0]
00b0b448:  and      x1, x8, #0x7fffffffffffffff
00b0b44c:  bl       #0x546bc0
00b0b450:  ldrsb    w8, [sp, #0x327]
00b0b454:  tbz      w8, #0x1f, #0xb0b2bc
00b0b458:  ldr      x0, [sp, #0x310]
00b0b45c:  ldr      x8, [sp, #0x320]
00b0b460:  and      x1, x8, #0x7fffffffffffffff
00b0b464:  bl       #0x546bc0
00b0b468:  cmp      w19, #2
00b0b46c:  b.eq     #0xb0a858
00b0b470:  b        #0xb0bed0
00b0b474:  ldp      x0, x1, [sp, #8]
00b0b478:  bl       #0xb195f0
00b0b47c:  ldr      w8, [sp, #0x44]
00b0b480:  cmp      w8, #2
00b0b484:  b.ne     #0xb0b510
00b0b488:  tbz      w0, #0, #0xb0b510
00b0b48c:  ldrb     w8, [sp, #0x300]
00b0b490:  tbz      w8, #0, #0xb0df1c
00b0b494:  ldr      x0, [sp, #0x2f0]
00b0b498:  ldr      x1, [sp, #0x2f8]
00b0b49c:  adrp     x2, #0x254000
00b0b4a0:  add      x2, x2, #0xcb1
00b0b4a4:  mov      w3, #9
00b0b4a8:  bl       #0xb0803c
00b0b4ac:  tbz      w0, #0, #0xb0b57c
00b0b4b0:  ldr      x0, [sp, #0x68]
00b0b4b4:  ldr      x8, [x0]
00b0b4b8:  ldr      x8, [x8, #0x38]
00b0b4bc:  blr      x8
00b0b4c0:  ldrb     w8, [x0, #0x128]
00b0b4c4:  cmp      w8, #1
00b0b4c8:  b.eq     #0xb0dd50
00b0b4cc:  ldrb     w8, [sp, #0x300]
00b0b4d0:  mov      w9, #-0x55555556
00b0b4d4:  str      w9, [sp, #0x4b0]
00b0b4d8:  tbz      w8, #0, #0xb0df1c
00b0b4dc:  ldr      x0, [sp, #0x2f0]
00b0b4e0:  ldr      x1, [sp, #0x2f8]
00b0b4e4:  add      x2, sp, #0x4b0
00b0b4e8:  mov      x3, x20
00b0b4ec:  bl       #0xb11970
00b0b4f0:  tbz      w0, #0, #0xb0bed0
00b0b4f4:  ldr      x0, [sp, #0x68]
00b0b4f8:  ldr      x8, [x0]
00b0b4fc:  ldr      x8, [x8, #0x38]
00b0b500:  blr      x8
00b0b504:  ldr      w8, [sp, #0x4b0]
00b0b508:  str      w8, [x0, #0x12c]
00b0b50c:  b        #0xb0a858
00b0b510:  ldp      x0, x1, [sp, #8]
00b0b514:  bl       #0xb1977c
00b0b518:  tbz      w0, #0, #0xb0b550
00b0b51c:  ldrb     w8, [sp, #0x300]
00b0b520:  tbz      w8, #0, #0xb0df1c
00b0b524:  ldr      x0, [sp, #0x2f0]
00b0b528:  ldr      x1, [sp, #0x2f8]
00b0b52c:  adrp     x2, #0x254000
00b0b530:  add      x2, x2, #0xd01
00b0b534:  mov      w3, #8
00b0b538:  bl       #0xb0803c
00b0b53c:  tbz      w0, #0, #0xb0b5e4
00b0b540:  ldr      x8, [sp, #0x68]
00b0b544:  mov      w9, #1
00b0b548:  strb     w9, [x8, #0x20]
00b0b54c:  b        #0xb0a858
00b0b550:  bl       #0x44075c
00b0b554:  tbnz     w0, #0, #0xb0a858
00b0b558:  ldrb     w8, [sp, #0x300]
00b0b55c:  tbz      w8, #0, #0xb0df1c
00b0b560:  add      x4, sp, #0x2f0
00b0b564:  adrp     x0, #0x21f000
00b0b568:  add      x0, x0, #0x2ce
00b0b56c:  adrp     x1, #0x1bb000
00b0b570:  add      x1, x1, #0x894
00b0b574:  mov      w2, #0x56f0
00b0b578:  b        #0xb0ab98
00b0b57c:  ldrb     w8, [sp, #0x300]
00b0b580:  tbz      w8, #0, #0xb0df1c
00b0b584:  ldr      x0, [sp, #0x2f0]
00b0b588:  ldr      x1, [sp, #0x2f8]
00b0b58c:  adrp     x2, #0x254000
00b0b590:  add      x2, x2, #0xcbb
00b0b594:  mov      w3, #0x10
00b0b598:  bl       #0xb0803c
00b0b59c:  tbz      w0, #0, #0xb0b618
00b0b5a0:  ldrb     w8, [sp, #0x300]
00b0b5a4:  mov      w9, #-0x55555556
00b0b5a8:  str      w9, [sp, #0x4b0]
00b0b5ac:  tbz      w8, #0, #0xb0df1c
00b0b5b0:  ldr      x0, [sp, #0x2f0]
00b0b5b4:  ldr      x1, [sp, #0x2f8]
00b0b5b8:  add      x2, sp, #0x4b0
00b0b5bc:  mov      x3, x20
00b0b5c0:  bl       #0xb11c20
00b0b5c4:  tbz      w0, #0, #0xb0bed0
00b0b5c8:  ldr      x0, [sp, #0x68]
00b0b5cc:  ldr      x8, [x0]
00b0b5d0:  ldr      x8, [x8, #0x38]
00b0b5d4:  blr      x8
00b0b5d8:  ldr      w8, [sp, #0x4b0]
00b0b5dc:  str      w8, [x0, #0x130]
00b0b5e0:  b        #0xb0a858
00b0b5e4:  ldrb     w8, [sp, #0x300]
00b0b5e8:  tbz      w8, #0, #0xb0df1c
00b0b5ec:  ldr      x0, [sp, #0x2f0]
00b0b5f0:  ldr      x1, [sp, #0x2f8]
00b0b5f4:  adrp     x2, #0x254000
00b0b5f8:  add      x2, x2, #0xd0a
00b0b5fc:  mov      w3, #0xa
00b0b600:  bl       #0xb0803c
00b0b604:  tbz      w0, #0, #0xb0b6b8
00b0b608:  ldr      x8, [sp, #0x68]
00b0b60c:  mov      w9, #1
00b0b610:  strb     w9, [x8, #0x21]
00b0b614:  b        #0xb0a858
00b0b618:  ldrb     w8, [sp, #0x300]
00b0b61c:  tbz      w8, #0, #0xb0df1c
00b0b620:  ldr      x0, [sp, #0x2f0]
00b0b624:  ldr      x1, [sp, #0x2f8]
00b0b628:  adrp     x2, #0x254000
00b0b62c:  add      x2, x2, #0xccc
00b0b630:  mov      w3, #9
00b0b634:  bl       #0xb0803c
00b0b638:  tbz      w0, #0, #0xb0b6ec
00b0b63c:  ldrb     w8, [sp, #0x300]
00b0b640:  str      xzr, [sp, #0x4b8]
00b0b644:  str      xzr, [sp, #0x4b0]
00b0b648:  str      xzr, [sp, #0x4c0]
00b0b64c:  tbz      w8, #0, #0xb0df1c
00b0b650:  ldr      x0, [sp, #0x2f0]
00b0b654:  ldr      x1, [sp, #0x2f8]
00b0b658:  add      x2, sp, #0x4b0
00b0b65c:  mov      x3, x20
00b0b660:  bl       #0xb11e1c
00b0b664:  tbz      w0, #0, #0xb0dda0
00b0b668:  ldr      x0, [sp, #0x68]
00b0b66c:  ldr      x8, [x0]
00b0b670:  ldr      x8, [x8, #0x38]
00b0b674:  blr      x8
00b0b678:  mov      x19, x0
00b0b67c:  add      x0, sp, #0xf0
00b0b680:  add      x2, sp, #0x4b0
00b0b684:  mov      x1, xzr
00b0b688:  bl       #0xb14b0c
00b0b68c:  add      x0, x19, #0x138
00b0b690:  add      x1, sp, #0xf0
00b0b694:  bl       #0xb149f4
00b0b698:  ldrb     w8, [sp, #0x108]
00b0b69c:  cmp      w8, #1
00b0b6a0:  b.ne     #0xb0b6ac
00b0b6a4:  add      x0, sp, #0xf0
00b0b6a8:  bl       #0x8824f4
00b0b6ac:  add      x0, sp, #0x4b0
00b0b6b0:  bl       #0x8824f4
00b0b6b4:  b        #0xb0a858
00b0b6b8:  ldrb     w8, [sp, #0x300]
00b0b6bc:  tbz      w8, #0, #0xb0df1c
00b0b6c0:  ldr      x0, [sp, #0x2f0]
00b0b6c4:  ldr      x1, [sp, #0x2f8]
00b0b6c8:  adrp     x2, #0x254000
00b0b6cc:  add      x2, x2, #0xd2e
00b0b6d0:  mov      w3, #0x13
00b0b6d4:  bl       #0xb0803c
00b0b6d8:  tbz      w0, #0, #0xb0b710
00b0b6dc:  ldr      x8, [sp, #0x68]
00b0b6e0:  mov      w9, #1
00b0b6e4:  strb     w9, [x8, #0x22]
00b0b6e8:  b        #0xb0a858
00b0b6ec:  ldrb     w8, [sp, #0x300]
00b0b6f0:  tbz      w8, #0, #0xb0df1c
00b0b6f4:  ldr      x0, [sp, #0x2f0]
00b0b6f8:  ldr      x1, [sp, #0x2f8]
00b0b6fc:  adrp     x2, #0x254000
00b0b700:  add      x2, x2, #0xca9
00b0b704:  mov      w3, #7
00b0b708:  bl       #0xb0803c
00b0b70c:  b        #0xb0a858
00b0b710:  ldrb     w8, [sp, #0x300]
00b0b714:  tbz      w8, #0, #0xb0df1c
00b0b718:  ldr      x0, [sp, #0x2f0]
00b0b71c:  ldr      x1, [sp, #0x2f8]
00b0b720:  adrp     x2, #0x254000
00b0b724:  add      x2, x2, #0xd42
00b0b728:  mov      w3, #0xa
00b0b72c:  mov      x23, x20
00b0b730:  bl       #0xb0803c
00b0b734:  ldrb     w8, [sp, #0x300]
00b0b738:  tbz      w0, #0, #0xb0b75c
00b0b73c:  tbz      w8, #0, #0xb0df1c
00b0b740:  ldr      x0, [sp, #0x2f0]
00b0b744:  ldr      x1, [sp, #0x2f8]
00b0b748:  add      x2, sp, #0x258
00b0b74c:  mov      x3, x23
00b0b750:  mov      x20, x23
00b0b754:  bl       #0xb120ec
00b0b758:  b        #0xb0b8f4
00b0b75c:  tbz      w8, #0, #0xb0df1c
00b0b760:  ldr      x0, [sp, #0x2f0]
00b0b764:  ldr      x1, [sp, #0x2f8]
00b0b768:  adrp     x2, #0x254000
00b0b76c:  add      x2, x2, #0xd53
00b0b770:  mov      w3, #4
00b0b774:  bl       #0xb0803c
00b0b778:  ldrb     w8, [sp, #0x300]
00b0b77c:  tbz      w0, #0, #0xb0b7a4
00b0b780:  tbz      w8, #0, #0xb0df1c
00b0b784:  ldr      x0, [sp, #0x2f0]
00b0b788:  ldr      x1, [sp, #0x2f8]
00b0b78c:  add      x2, sp, #0x270
00b0b790:  ldr      x3, [sp, #0x30]
00b0b794:  mov      x4, x23
00b0b798:  mov      x20, x23
00b0b79c:  bl       #0xb124b4
00b0b7a0:  b        #0xb0b8f4
00b0b7a4:  tbz      w8, #0, #0xb0df1c
00b0b7a8:  ldr      x0, [sp, #0x2f0]
00b0b7ac:  ldr      x1, [sp, #0x2f8]
00b0b7b0:  adrp     x2, #0x254000
00b0b7b4:  add      x2, x2, #0xd64
00b0b7b8:  mov      w3, #6
00b0b7bc:  bl       #0xb0803c
00b0b7c0:  ldrb     w8, [sp, #0x300]
00b0b7c4:  tbz      w0, #0, #0xb0b800
00b0b7c8:  tbz      w8, #0, #0xb0df1c
00b0b7cc:  ldr      x0, [sp, #0x2f0]
00b0b7d0:  ldr      x1, [sp, #0x2f8]
00b0b7d4:  mov      x5, x23
00b0b7d8:  ldr      w2, [sp, #0x44]
00b0b7dc:  ldr      x3, [sp, #0x58]
00b0b7e0:  mov      x20, x23
00b0b7e4:  ldr      x4, [sp, #0x68]
00b0b7e8:  bl       #0xb12ab8
00b0b7ec:  b        #0xb0b8f4
00b0b7f0:  add      x0, sp, #0x2b8
00b0b7f4:  add      x1, sp, #0x310
00b0b7f8:  bl       #0xb14508
00b0b7fc:  b        #0xb0b0d8
00b0b800:  tbz      w8, #0, #0xb0df1c
00b0b804:  adrp     x20, #0xd52000
00b0b808:  ldr      x21, [sp, #0x2f0]
00b0b80c:  ldr      x22, [sp, #0x2f8]
00b0b810:  ldr      x20, [x20, #0x128]
00b0b814:  mov      x0, x20
00b0b818:  bl       #0xd14180
00b0b81c:  mov      x19, x0
00b0b820:  mov      x0, x21
00b0b824:  mov      x1, x22
00b0b828:  mov      x2, x20
00b0b82c:  mov      x3, x19
00b0b830:  bl       #0xb0803c
00b0b834:  ldrb     w8, [sp, #0x300]
00b0b838:  tbz      w0, #0, #0xb0b868
00b0b83c:  tbz      w8, #0, #0xb0df1c
00b0b840:  adrp     x2, #0xd52000
00b0b844:  ldr      x0, [sp, #0x2f0]
00b0b848:  ldr      x1, [sp, #0x2f8]
00b0b84c:  ldr      x2, [x2, #0x128]
00b0b850:  add      x4, sp, #0x240
00b0b854:  mov      x3, x19
00b0b858:  mov      x5, x23
00b0b85c:  mov      x20, x23
00b0b860:  bl       #0xb080f4
00b0b864:  b        #0xb0b8f4
00b0b868:  tbz      w8, #0, #0xb0df1c
00b0b86c:  ldr      x0, [sp, #0x2f0]
00b0b870:  ldr      x1, [sp, #0x2f8]
00b0b874:  adrp     x2, #0x254000
00b0b878:  add      x2, x2, #0xd73
00b0b87c:  mov      w3, #0xd
00b0b880:  bl       #0xb0803c
00b0b884:  ldrb     w8, [sp, #0x300]
00b0b888:  tbz      w0, #0, #0xb0b8b0
00b0b88c:  tbz      w8, #0, #0xb0df1c
00b0b890:  ldr      x0, [sp, #0x2f0]
00b0b894:  ldr      x1, [sp, #0x2f8]
00b0b898:  mov      x4, x23
00b0b89c:  ldr      w2, [sp, #0x44]
00b0b8a0:  ldr      x3, [sp, #0x68]
00b0b8a4:  mov      x20, x23
00b0b8a8:  bl       #0xb13190
00b0b8ac:  b        #0xb0b8f4
00b0b8b0:  tbz      w8, #0, #0xb0df1c
00b0b8b4:  ldr      x0, [sp, #0x2f0]
00b0b8b8:  ldr      x1, [sp, #0x2f8]
00b0b8bc:  adrp     x2, #0x254000
00b0b8c0:  add      x2, x2, #0xd6b
00b0b8c4:  mov      w3, #7
00b0b8c8:  bl       #0xb0803c
00b0b8cc:  ldrb     w8, [sp, #0x300]
00b0b8d0:  tbz      w0, #0, #0xb0b900
00b0b8d4:  tbz      w8, #0, #0xb0df1c
00b0b8d8:  ldr      x0, [sp, #0x2f0]
00b0b8dc:  ldr      x1, [sp, #0x2f8]
00b0b8e0:  mov      x4, x23
00b0b8e4:  ldr      w2, [sp, #0x44]
00b0b8e8:  ldr      x3, [sp, #0x68]
00b0b8ec:  mov      x20, x23
00b0b8f0:  bl       #0xb13544
00b0b8f4:  add      x28, sp, #0x1a0
00b0b8f8:  add      x24, sp, #0x4b0
00b0b8fc:  b        #0xb0ae50
00b0b900:  tbz      w8, #0, #0xb0df1c
00b0b904:  adrp     x20, #0xd52000
00b0b908:  ldr      x21, [sp, #0x2f0]
00b0b90c:  ldr      x22, [sp, #0x2f8]
00b0b910:  ldr      x20, [x20, #0x120]
00b0b914:  mov      x0, x20
00b0b918:  bl       #0xd14180
00b0b91c:  mov      x19, x0
00b0b920:  mov      x0, x21
00b0b924:  mov      x1, x22
00b0b928:  mov      x2, x20
00b0b92c:  mov      x3, x19
00b0b930:  bl       #0xb0803c
00b0b934:  ldrb     w8, [sp, #0x300]
00b0b938:  tbz      w0, #0, #0xb0b958
00b0b93c:  tbz      w8, #0, #0xb0df1c
00b0b940:  adrp     x2, #0xd52000
00b0b944:  ldr      x0, [sp, #0x2f0]
00b0b948:  ldr      x1, [sp, #0x2f8]
00b0b94c:  ldr      x2, [x2, #0x120]
00b0b950:  add      x4, sp, #0x228
00b0b954:  b        #0xb0b854
00b0b958:  tbz      w8, #0, #0xb0df1c
00b0b95c:  ldr      x0, [sp, #0x2f0]
00b0b960:  ldr      x1, [sp, #0x2f8]
00b0b964:  adrp     x2, #0x254000
00b0b968:  add      x2, x2, #0xcdf
00b0b96c:  mov      w3, #8
00b0b970:  bl       #0xb0803c
00b0b974:  tbnz     w0, #0, #0xb0bbc4
00b0b978:  ldrb     w8, [sp, #0x300]
00b0b97c:  tbz      w8, #0, #0xb0df1c
00b0b980:  ldr      x0, [sp, #0x2f0]
00b0b984:  ldr      x1, [sp, #0x2f8]
00b0b988:  adrp     x2, #0x254000
00b0b98c:  add      x2, x2, #0xce8
00b0b990:  mov      w3, #8
00b0b994:  bl       #0xb0803c
00b0b998:  tbnz     w0, #0, #0xb0bbd4
00b0b99c:  ldrb     w8, [sp, #0x300]
00b0b9a0:  tbz      w8, #0, #0xb0df1c
00b0b9a4:  ldr      x0, [sp, #0x2f0]
00b0b9a8:  ldr      x1, [sp, #0x2f8]
00b0b9ac:  adrp     x2, #0x254000
00b0b9b0:  add      x2, x2, #0xcd6
00b0b9b4:  mov      w3, #8
00b0b9b8:  bl       #0xb0803c
00b0b9bc:  tbnz     w0, #0, #0xb0bbe4
00b0b9c0:  ldrb     w8, [sp, #0x300]
00b0b9c4:  tbz      w8, #0, #0xb0df1c
00b0b9c8:  ldr      x0, [sp, #0x2f0]
00b0b9cc:  ldr      x1, [sp, #0x2f8]
00b0b9d0:  adrp     x2, #0x254000
00b0b9d4:  add      x2, x2, #0xcf1
00b0b9d8:  mov      w3, #8
00b0b9dc:  bl       #0xb0803c
00b0b9e0:  tbnz     w0, #0, #0xb0bbf4
00b0b9e4:  ldrb     w8, [sp, #0x300]
00b0b9e8:  tbz      w8, #0, #0xb0df1c
00b0b9ec:  ldr      x0, [sp, #0x2f0]
00b0b9f0:  ldr      x1, [sp, #0x2f8]
00b0b9f4:  adrp     x2, #0x254000
00b0b9f8:  add      x2, x2, #0xbf7
00b0b9fc:  mov      w3, #0x12
00b0ba00:  bl       #0xb0803c
00b0ba04:  tbz      w0, #0, #0xb0ba34
00b0ba08:  ldp      x25, x8, [sp, #0x60]
00b0ba0c:  add      x28, sp, #0x1a0
00b0ba10:  mov      x20, x23
00b0ba14:  add      x24, sp, #0x4b0
00b0ba18:  ldr      w8, [x8, #0xc0]
00b0ba1c:  cmp      w8, #1
00b0ba20:  b.eq     #0xb0a858
00b0ba24:  ldr      x8, [sp, #0x68]
00b0ba28:  mov      w9, #2
00b0ba2c:  str      w9, [x8, #0xc0]
00b0ba30:  b        #0xb0a858
00b0ba34:  ldrb     w8, [sp, #0x300]
00b0ba38:  tbz      w8, #0, #0xb0df1c
00b0ba3c:  ldr      x0, [sp, #0x2f0]
00b0ba40:  ldr      x1, [sp, #0x2f8]
00b0ba44:  adrp     x2, #0x254000
00b0ba48:  add      x2, x2, #0xd5d
00b0ba4c:  mov      w3, #6
00b0ba50:  bl       #0xb0803c
00b0ba54:  tbnz     w0, #0, #0xb0bc0c
00b0ba58:  ldrb     w8, [sp, #0x300]
00b0ba5c:  tbz      w8, #0, #0xb0df1c
00b0ba60:  ldr      x0, [sp, #0x2f0]
00b0ba64:  ldr      x1, [sp, #0x2f8]
00b0ba68:  adrp     x2, #0x254000
00b0ba6c:  add      x2, x2, #0xd15
00b0ba70:  mov      w3, #0xd
00b0ba74:  bl       #0xb0803c
00b0ba78:  tbnz     w0, #0, #0xb0bc5c
00b0ba7c:  ldrb     w8, [sp, #0x300]
00b0ba80:  tbz      w8, #0, #0xb0df1c
00b0ba84:  ldr      x0, [sp, #0x2f0]
00b0ba88:  ldr      x1, [sp, #0x2f8]
00b0ba8c:  adrp     x2, #0x254000
00b0ba90:  add      x2, x2, #0xcfc
00b0ba94:  mov      w3, #4
00b0ba98:  bl       #0xb0803c
00b0ba9c:  ldrb     w8, [sp, #0x300]
00b0baa0:  tbz      w0, #0, #0xb0bae8
00b0baa4:  tbz      w8, #0, #0xb0df1c
00b0baa8:  ldr      x0, [sp, #0x2f0]
00b0baac:  ldr      x1, [sp, #0x2f8]
00b0bab0:  add      x2, sp, #0x210
00b0bab4:  add      x3, sp, #0x1f0
00b0bab8:  mov      x4, x23
00b0babc:  mov      x20, x23
00b0bac0:  bl       #0xb138d0
00b0bac4:  ldr      x25, [sp, #0x60]
00b0bac8:  add      x28, sp, #0x1a0
00b0bacc:  add      x24, sp, #0x4b0
00b0bad0:  tbz      w0, #0, #0xb0bed0
00b0bad4:  ldr      x9, [sp, #0x30]
00b0bad8:  ldr      w8, [x9]
00b0badc:  orr      w8, w8, #1
00b0bae0:  str      w8, [x9]
00b0bae4:  b        #0xb0a858
00b0bae8:  tbz      w8, #0, #0xb0df1c
00b0baec:  ldr      x0, [sp, #0x2f0]
00b0baf0:  ldr      x1, [sp, #0x2f8]
00b0baf4:  adrp     x2, #0x1b9000
00b0baf8:  add      x2, x2, #0x9dd
00b0bafc:  mov      w3, #3
00b0bb00:  bl       #0xb0803c
00b0bb04:  ldrb     w8, [sp, #0x300]
00b0bb08:  tbz      w0, #0, #0xb0bb38
00b0bb0c:  tbz      w8, #0, #0xb0dcf8
00b0bb10:  ldr      x8, [sp, #0x2f8]
00b0bb14:  subs     x3, x8, #6
00b0bb18:  b.hi     #0xb0bcd0
00b0bb1c:  bl       #0x417e08
00b0bb20:  ldr      x25, [sp, #0x60]
00b0bb24:  add      x28, sp, #0x1a0
00b0bb28:  mov      x20, x23
00b0bb2c:  add      x24, sp, #0x4b0
00b0bb30:  tbnz     w0, #0, #0xb0a858
00b0bb34:  b        #0xb0bd8c
00b0bb38:  tbz      w8, #0, #0xb0df1c
00b0bb3c:  ldr      x0, [sp, #0x2f0]
00b0bb40:  ldr      x1, [sp, #0x2f8]
00b0bb44:  adrp     x2, #0x19e000
00b0bb48:  add      x2, x2, #0xc99
00b0bb4c:  mov      w3, #9
00b0bb50:  bl       #0xb0803c
00b0bb54:  ldrb     w8, [sp, #0x300]
00b0bb58:  tbnz     w0, #0, #0xb0bdbc
00b0bb5c:  tbz      w8, #0, #0xb0df1c
00b0bb60:  ldr      x0, [sp, #0x2f0]
00b0bb64:  ldr      x1, [sp, #0x2f8]
00b0bb68:  adrp     x2, #0x254000
00b0bb6c:  add      x2, x2, #0xc74
00b0bb70:  mov      w3, #4
00b0bb74:  bl       #0xb0803c
00b0bb78:  ldr      x25, [sp, #0x60]
00b0bb7c:  add      x28, sp, #0x1a0
00b0bb80:  mov      x20, x23
00b0bb84:  add      x24, sp, #0x4b0
00b0bb88:  tbnz     w0, #0, #0xb0a858
00b0bb8c:  bl       #0x44075c
00b0bb90:  tbnz     w0, #0, #0xb0a858
00b0bb94:  ldrb     w8, [sp, #0x300]
00b0bb98:  tbz      w8, #0, #0xb0df1c
00b0bb9c:  add      x4, sp, #0x2f0
00b0bba0:  adrp     x0, #0x21f000
00b0bba4:  add      x0, x0, #0x2ce
00b0bba8:  adrp     x1, #0x1bb000
00b0bbac:  add      x1, x1, #0x894
00b0bbb0:  mov      w2, #0x56c8
00b0bbb4:  adrp     x3, #0x1a2000
00b0bbb8:  add      x3, x3, #0xd3
00b0bbbc:  bl       #0x623bb0
00b0bbc0:  b        #0xb0bbfc
00b0bbc4:  ldr      x8, [sp, #0x68]
00b0bbc8:  mov      w9, #1
00b0bbcc:  str      w9, [x8, #0x74]
00b0bbd0:  b        #0xb0bbfc
00b0bbd4:  ldr      x8, [sp, #0x68]
00b0bbd8:  mov      w9, #2
00b0bbdc:  str      w9, [x8, #0x74]
00b0bbe0:  b        #0xb0bbfc
00b0bbe4:  ldr      x8, [sp, #0x68]
00b0bbe8:  mov      w9, #3
00b0bbec:  str      w9, [x8, #0x74]
00b0bbf0:  b        #0xb0bbfc
00b0bbf4:  ldr      x8, [sp, #0x68]
00b0bbf8:  str      wzr, [x8, #0x74]
00b0bbfc:  add      x28, sp, #0x1a0
00b0bc00:  mov      x20, x23
00b0bc04:  add      x24, sp, #0x4b0
00b0bc08:  b        #0xb0a854
00b0bc0c:  movi     v0.16b, #0xaa
00b0bc10:  add      x0, sp, #0x4b0
00b0bc14:  str      q0, [sp, #0x4c0]
00b0bc18:  str      q0, [sp, #0x4b0]
00b0bc1c:  bl       #0x668d80
00b0bc20:  ldrb     w8, [sp, #0x300]
00b0bc24:  tbz      w8, #0, #0xb0df1c
00b0bc28:  ldr      x0, [sp, #0x2f0]
00b0bc2c:  ldr      x1, [sp, #0x2f8]
00b0bc30:  add      x2, sp, #0x4b0
00b0bc34:  mov      x3, x23
00b0bc38:  bl       #0xb08d38
00b0bc3c:  tbz      w0, #0, #0xb0ddbc
00b0bc40:  ldr      x8, [sp, #0x68]
00b0bc44:  add      x1, sp, #0x4b0
00b0bc48:  add      x0, x8, #0x40
00b0bc4c:  bl       #0xb09ba4
00b0bc50:  add      x0, sp, #0x4b0
00b0bc54:  bl       #0x668f8c
00b0bc58:  b        #0xb0bbfc
00b0bc5c:  ldrb     w8, [sp, #0x300]
00b0bc60:  str      xzr, [sp, #0x4b8]
00b0bc64:  str      xzr, [sp, #0x4b0]
00b0bc68:  str      xzr, [sp, #0x4c0]
00b0bc6c:  tbz      w8, #0, #0xb0df1c
00b0bc70:  ldr      x0, [sp, #0x2f0]
00b0bc74:  ldr      x1, [sp, #0x2f8]
00b0bc78:  add      x4, sp, #0x4b0
00b0bc7c:  adrp     x2, #0x254000
00b0bc80:  add      x2, x2, #0xd15
00b0bc84:  mov      w3, #0xd
00b0bc88:  mov      x5, x23
00b0bc8c:  bl       #0xb080f4
00b0bc90:  tbz      w0, #0, #0xb0ddc8
00b0bc94:  add      x0, sp, #0x4b0
00b0bc98:  adrp     x1, #0x254000
00b0bc9c:  add      x1, x1, #0xd23
00b0bca0:  bl       #0x548254
00b0bca4:  cbnz     w0, #0xb0bcb4
00b0bca8:  ldr      x8, [sp, #0x68]
00b0bcac:  mov      w9, #1
00b0bcb0:  strb     w9, [x8, #0x70]
00b0bcb4:  ldrsb    w8, [sp, #0x4c7]
00b0bcb8:  tbz      w8, #0x1f, #0xb0bbfc
00b0bcbc:  ldr      x8, [sp, #0x4c0]
00b0bcc0:  ldr      x0, [sp, #0x4b0]
00b0bcc4:  and      x1, x8, #0x7fffffffffffffff
00b0bcc8:  bl       #0x546bc0
00b0bccc:  b        #0xb0bbfc
00b0bcd0:  movi     v0.16b, #0xaa
00b0bcd4:  ldr      x9, [sp, #0x2f0]
00b0bcd8:  ldr      x1, [sp, #0x68]
00b0bcdc:  add      x8, sp, #0x4b0
00b0bce0:  add      x0, sp, #0x1ec
00b0bce4:  add      x2, x9, #6
00b0bce8:  str      q0, [sp, #0x520]
00b0bcec:  str      q0, [sp, #0x510]
00b0bcf0:  str      q0, [sp, #0x500]
00b0bcf4:  str      q0, [sp, #0x4f0]
00b0bcf8:  str      q0, [sp, #0x4e0]
00b0bcfc:  str      q0, [sp, #0x4d0]
00b0bd00:  str      q0, [sp, #0x4c0]
00b0bd04:  str      q0, [sp, #0x4b0]
00b0bd08:  bl       #0xb1b2dc
00b0bd0c:  ldr      w8, [sp, #0x4b0]
00b0bd10:  cbz      w8, #0xb0be54
00b0bd14:  bl       #0x417e08
00b0bd18:  tbnz     w0, #0, #0xb0be74
00b0bd1c:  adrp     x8, #0x1bb000
00b0bd20:  add      x8, x8, #0x894
00b0bd24:  adrp     x9, #0x1d5000
00b0bd28:  add      x9, x9, #0x1bc
00b0bd2c:  str      x8, [sp, #0x310]
00b0bd30:  mov      w8, #0x55a1
00b0bd34:  str      x8, [sp, #0x318]
00b0bd38:  add      x8, sp, #0x158
00b0bd3c:  str      x8, [sp, #0x320]
00b0bd40:  ldrb     w8, [sp, #0x300]
00b0bd44:  str      x9, [sp, #0x2d0]
00b0bd48:  add      x9, sp, #0x310
00b0bd4c:  str      x9, [sp, #0x2d8]
00b0bd50:  tbz      w8, #0, #0xb0df1c
00b0bd54:  add      x0, sp, #0x4b0
00b0bd58:  bl       #0x5ecd5c
00b0bd5c:  ldr      x8, [sp, #0x2d8]
00b0bd60:  ldr      x3, [sp, #0x2d0]
00b0bd64:  mov      x6, x0
00b0bd68:  add      x4, sp, #0x2f0
00b0bd6c:  adrp     x0, #0x254000
00b0bd70:  add      x0, x0, #0xd9c
00b0bd74:  ldr      x1, [x8]
00b0bd78:  ldr      w2, [x8, #8]
00b0bd7c:  adrp     x5, #0x1e0000
00b0bd80:  add      x5, x5, #0x758
00b0bd84:  bl       #0x623bb0
00b0bd88:  b        #0xb0be74
00b0bd8c:  ldrb     w8, [sp, #0x300]
00b0bd90:  tbz      w8, #0, #0xb0df1c
00b0bd94:  add      x4, sp, #0x2f0
00b0bd98:  adrp     x0, #0x21f000
00b0bd9c:  add      x0, x0, #0x2ce
00b0bda0:  adrp     x1, #0x1bb000
00b0bda4:  add      x1, x1, #0x894
00b0bda8:  mov      w2, #0x5559
00b0bdac:  adrp     x3, #0x1d2000
00b0bdb0:  add      x3, x3, #0x1e1
00b0bdb4:  bl       #0x623bb0
00b0bdb8:  b        #0xb0bbfc
00b0bdbc:  tbz      w8, #0, #0xb0dcf8
00b0bdc0:  ldr      x19, [sp, #0x2f8]
00b0bdc4:  cmp      x19, #0xc
00b0bdc8:  b.ls     #0xb0dde4
00b0bdcc:  add      x0, sp, #0x1a0
00b0bdd0:  bl       #0xb1cb8c
00b0bdd4:  tbz      w0, #0, #0xb0de24
00b0bdd8:  movi     v0.16b, #0xaa
00b0bddc:  ldrb     w8, [sp, #0x300]
00b0bde0:  str      q0, [sp, #0x500]
00b0bde4:  str      q0, [sp, #0x4f0]
00b0bde8:  str      q0, [sp, #0x4e0]
00b0bdec:  str      q0, [sp, #0x4d0]
00b0bdf0:  str      q0, [sp, #0x4c0]
00b0bdf4:  str      q0, [sp, #0x4b0]
00b0bdf8:  tbz      w8, #0, #0xb0dcf8
00b0bdfc:  ldr      x8, [sp, #0x2f8]
00b0be00:  cmp      x8, #0xb
00b0be04:  b.ls     #0xb0de70
00b0be08:  ldr      x9, [sp, #0x2f0]
00b0be0c:  sub      x2, x8, #0xc
00b0be10:  add      x8, sp, #0x4b0
00b0be14:  add      x0, sp, #0x1ec
00b0be18:  add      x1, x9, #0xc
00b0be1c:  bl       #0xb19c5c
00b0be20:  ldr      w8, [sp, #0x4b0]
00b0be24:  cbnz     w8, #0xb0de7c
00b0be28:  ldrb     w8, [sp, #0x508]
00b0be2c:  tbz      w8, #0, #0xb0df1c
00b0be30:  add      x24, sp, #0x4b0
00b0be34:  add      x0, sp, #0x1a0
00b0be38:  add      x1, x24, #0x28
00b0be3c:  bl       #0xb13fc0
00b0be40:  add      x0, sp, #0x4b0
00b0be44:  bl       #0xb14038
00b0be48:  add      x28, sp, #0x1a0
00b0be4c:  mov      x20, x23
00b0be50:  b        #0xb0a854
00b0be54:  add      x8, sp, #0x310
00b0be58:  add      x0, sp, #0x4b0
00b0be5c:  bl       #0xb13f2c
00b0be60:  add      x0, sp, #0x1d0
00b0be64:  add      x1, sp, #0x310
00b0be68:  bl       #0xb15450
00b0be6c:  add      x0, sp, #0x310
00b0be70:  bl       #0x88fb24
00b0be74:  add      x0, sp, #0x4b0
00b0be78:  bl       #0xb13f64
00b0be7c:  b        #0xb0bbfc
00b0be80:  cmp      x26, x19
00b0be84:  strb     wzr, [sp, #0x2f0]
00b0be88:  strb     wzr, [sp, #0x300]
00b0be8c:  b.ls     #0xb0bed8
00b0be90:  adrp     x1, #0x1c6000
00b0be94:  add      x1, x1, #0xee9
00b0be98:  add      x0, sp, #0x188
00b0be9c:  bl       #0x5d3510
00b0bea0:  add      x3, sp, #0x188
00b0bea4:  mov      x0, x27
00b0bea8:  mov      x1, x26
00b0beac:  mov      x2, x19
00b0beb0:  mov      x4, x20
00b0beb4:  bl       #0xb09348
00b0beb8:  ldrsb    w8, [sp, #0x19f]
00b0bebc:  tbz      w8, #0x1f, #0xb0bed0
00b0bec0:  ldr      x0, [sp, #0x188]
00b0bec4:  ldr      x8, [sp, #0x198]
00b0bec8:  and      x1, x8, #0x7fffffffffffffff
00b0becc:  bl       #0x546bc0
00b0bed0:  mov      w19, wzr
00b0bed4:  b        #0xb0d5e8
00b0bed8:  str      x20, [sp, #0x20]
00b0bedc:  ldp      x19, x20, [sp, #0x1d0]
00b0bee0:  add      x23, sp, #0x4b0
00b0bee4:  add      x24, sp, #0x310
00b0bee8:  str      xzr, [sp, #0x4c0]
00b0beec:  add      x8, x23, #8
00b0bef0:  str      xzr, [sp, #0x4b8]
00b0bef4:  str      x8, [sp, #0x4b0]
00b0bef8:  add      x8, x24, #8
00b0befc:  cmp      x19, x20
00b0bf00:  str      xzr, [sp, #0x320]
00b0bf04:  str      xzr, [sp, #0x318]
00b0bf08:  str      x8, [sp, #0x310]
00b0bf0c:  b.ne     #0xb0bf20
00b0bf10:  b        #0xb0c118
00b0bf14:  add      x19, x19, #0x50
00b0bf18:  cmp      x19, x20
00b0bf1c:  b.eq     #0xb0bf50
00b0bf20:  add      x0, sp, #0x2f0
00b0bf24:  mov      x1, x19
00b0bf28:  mov      x2, x19
00b0bf2c:  str      x24, [sp, #0x2f0]
00b0bf30:  bl       #0xb07310
00b0bf34:  tbnz     w1, #0, #0xb0bf14
00b0bf38:  add      x0, sp, #0x2f0
00b0bf3c:  mov      x1, x19
00b0bf40:  mov      x2, x19
00b0bf44:  str      x23, [sp, #0x2f0]
00b0bf48:  bl       #0xb07310
00b0bf4c:  b        #0xb0bf14
00b0bf50:  ldr      x8, [sp, #0x4c0]
00b0bf54:  cbz      x8, #0xb0c118
00b0bf58:  ldp      x19, x21, [sp, #0x1d0]
00b0bf5c:  cmp      x19, x21
00b0bf60:  b.eq     #0xb0bff4
00b0bf64:  ldr      x25, [sp, #0x4b8]
00b0bf68:  b        #0xb0bf78
00b0bf6c:  add      x19, x19, #0x50
00b0bf70:  cmp      x19, x21
00b0bf74:  b.eq     #0xb0c118
00b0bf78:  cbz      x25, #0xb0bf6c
00b0bf7c:  ldrb     w8, [x19, #0x17]
00b0bf80:  ldp      x10, x11, [x19]
00b0bf84:  mov      x26, x25
00b0bf88:  sxtb     w9, w8
00b0bf8c:  cmp      w9, #0
00b0bf90:  csel     x22, x10, x19, mi
00b0bf94:  csel     x20, x11, x8, mi
00b0bf98:  b        #0xb0bfa8
00b0bf9c:  add      x26, x26, #8
00b0bfa0:  ldr      x26, [x26]
00b0bfa4:  cbz      x26, #0xb0bf6c
00b0bfa8:  mov      x8, x26
00b0bfac:  mov      x0, x22
00b0bfb0:  ldr      x9, [x8, #0x20]!
00b0bfb4:  ldrb     w10, [x8, #0x17]
00b0bfb8:  ldr      x12, [x8, #8]
00b0bfbc:  sxtb     w11, w10
00b0bfc0:  cmp      w11, #0
00b0bfc4:  csel     x27, x12, x10, mi
00b0bfc8:  csel     x1, x9, x8, mi
00b0bfcc:  cmp      x27, x20
00b0bfd0:  csel     x2, x27, x20, lo
00b0bfd4:  bl       #0xd13ff0
00b0bfd8:  cbz      w0, #0xb0bfe4
00b0bfdc:  tbz      w0, #0x1f, #0xb0bf9c
00b0bfe0:  b        #0xb0bfa0
00b0bfe4:  cmp      x20, x27
00b0bfe8:  b.eq     #0xb0bff4
00b0bfec:  b.hs     #0xb0bf9c
00b0bff0:  b        #0xb0bfa0
00b0bff4:  cmp      x19, x21
00b0bff8:  b.eq     #0xb0c118
00b0bffc:  add      x8, x19, #0x50
00b0c000:  cmp      x8, x21
00b0c004:  b.eq     #0xb0c0bc
00b0c008:  mov      x22, x19
00b0c00c:  b        #0xb0c030
00b0c010:  mov      x0, x22
00b0c014:  mov      x1, x25
00b0c018:  bl       #0x88fbec
00b0c01c:  add      x22, x22, #0x50
00b0c020:  add      x8, x25, #0x50
00b0c024:  mov      x19, x25
00b0c028:  cmp      x8, x21
00b0c02c:  b.eq     #0xb0c0b4
00b0c030:  ldr      x26, [sp, #0x4b8]
00b0c034:  mov      x25, x8
00b0c038:  cbz      x26, #0xb0c010
00b0c03c:  ldrb     w8, [x19, #0x67]
00b0c040:  ldr      x10, [x25]
00b0c044:  ldr      x11, [x19, #0x58]
00b0c048:  sxtb     w9, w8
00b0c04c:  cmp      w9, #0
00b0c050:  csel     x19, x10, x25, mi
00b0c054:  csel     x20, x11, x8, mi
00b0c058:  b        #0xb0c068
00b0c05c:  add      x26, x26, #8
00b0c060:  ldr      x26, [x26]
00b0c064:  cbz      x26, #0xb0c010
00b0c068:  mov      x8, x26
00b0c06c:  mov      x0, x19
00b0c070:  ldr      x9, [x8, #0x20]!
00b0c074:  ldrb     w10, [x8, #0x17]
00b0c078:  ldr      x12, [x8, #8]
00b0c07c:  sxtb     w11, w10
00b0c080:  cmp      w11, #0
00b0c084:  csel     x27, x12, x10, mi
00b0c088:  csel     x1, x9, x8, mi
00b0c08c:  cmp      x27, x20
00b0c090:  csel     x2, x27, x20, lo
00b0c094:  bl       #0xd13ff0
00b0c098:  cbz      w0, #0xb0c0a4
00b0c09c:  tbz      w0, #0x1f, #0xb0c05c
00b0c0a0:  b        #0xb0c060
00b0c0a4:  cmp      x20, x27
00b0c0a8:  b.eq     #0xb0c020
00b0c0ac:  b.hs     #0xb0c05c
00b0c0b0:  b        #0xb0c060
00b0c0b4:  ldr      x21, [sp, #0x1d8]
00b0c0b8:  mov      x19, x22
00b0c0bc:  cmp      x19, x21
00b0c0c0:  b.hi     #0xb0dd18
00b0c0c4:  b.eq     #0xb0c118
00b0c0c8:  cmp      x21, x21
00b0c0cc:  b.eq     #0xb0c0f4
00b0c0d0:  mov      x22, x21
00b0c0d4:  mov      x0, x19
00b0c0d8:  mov      x1, x22
00b0c0dc:  bl       #0x88fbec
00b0c0e0:  add      x22, x22, #0x50
00b0c0e4:  add      x19, x19, #0x50
00b0c0e8:  cmp      x22, x21
00b0c0ec:  b.ne     #0xb0c0d4
00b0c0f0:  ldr      x21, [sp, #0x1d8]
00b0c0f4:  cmp      x19, x21
00b0c0f8:  b.eq     #0xb0c114
00b0c0fc:  subs     x21, x21, #0x50
00b0c100:  b.eq     #0xb0db0c
00b0c104:  mov      x0, x21
00b0c108:  bl       #0x88fb24
00b0c10c:  cmp      x21, x19
00b0c110:  b.ne     #0xb0c0fc
00b0c114:  str      x19, [sp, #0x1d8]
00b0c118:  ldr      x1, [sp, #0x318]
00b0c11c:  add      x0, sp, #0x2f0
00b0c120:  str      x24, [sp, #0x2f0]
00b0c124:  bl       #0xb16af4
00b0c128:  ldr      x1, [sp, #0x4b8]
00b0c12c:  add      x0, sp, #0x310
00b0c130:  str      x23, [sp, #0x310]
00b0c134:  bl       #0xb16af4
00b0c138:  add      x0, sp, #0x1a0
00b0c13c:  stp      xzr, xzr, [sp, #0x158]
00b0c140:  str      xzr, [sp, #0x168]
00b0c144:  stp      xzr, xzr, [sp, #0x88]
00b0c148:  str      xzr, [sp, #0x98]
00b0c14c:  bl       #0xb1cb8c
00b0c150:  tbz      w0, #0, #0xb0c184
00b0c154:  bl       #0x44075c
00b0c158:  ldr      x26, [sp, #0x68]
00b0c15c:  tbnz     w0, #0, #0xb0c898
00b0c160:  adrp     x0, #0x1f4000
00b0c164:  add      x0, x0, #0xe98
00b0c168:  adrp     x1, #0x1bb000
00b0c16c:  add      x1, x1, #0x894
00b0c170:  adrp     x3, #0x1bb000
00b0c174:  add      x3, x3, #0x8b5
00b0c178:  mov      w2, #0x5830
00b0c17c:  bl       #0x623bb0
00b0c180:  b        #0xb0c898
00b0c184:  movi     v0.16b, #0xaa
00b0c188:  add      x23, sp, #0x4b0
00b0c18c:  add      x0, sp, #0x1a0
00b0c190:  add      x8, x23, #8
00b0c194:  str      xzr, [sp, #0x4c0]
00b0c198:  str      x8, [sp, #0x4b0]
00b0c19c:  add      x8, sp, #0x310
00b0c1a0:  str      xzr, [sp, #0x4b8]
00b0c1a4:  str      d0, [sp, #0x320]
00b0c1a8:  str      q0, [sp, #0x310]
00b0c1ac:  bl       #0xb1cbb4
00b0c1b0:  movi     v0.16b, #0xaa
00b0c1b4:  add      x8, sp, #0x2f0
00b0c1b8:  add      x0, x28, #0x18
00b0c1bc:  str      d0, [sp, #0x300]
00b0c1c0:  str      q0, [sp, #0x2f0]
00b0c1c4:  bl       #0xb1cbb4
00b0c1c8:  ldr      x19, [sp, #0x310]
00b0c1cc:  ldr      x22, [sp, #0x318]
00b0c1d0:  cmp      x19, x22
00b0c1d4:  b.ne     #0xb0c1f0
00b0c1d8:  cmp      x19, x22
00b0c1dc:  b.ne     #0xb0c28c
00b0c1e0:  b        #0xb0c330
00b0c1e4:  add      x19, x19, #0x20
00b0c1e8:  cmp      x19, x22
00b0c1ec:  b.eq     #0xb0c27c
00b0c1f0:  ldr      x20, [sp, #0x2f0]
00b0c1f4:  ldr      x24, [sp, #0x2f8]
00b0c1f8:  cmp      x20, x24
00b0c1fc:  b.eq     #0xb0c1e4
00b0c200:  ldrb     w8, [x19, #0x17]
00b0c204:  ldr      x9, [x19, #8]
00b0c208:  sxtb     w25, w8
00b0c20c:  cmp      w25, #0
00b0c210:  csel     x21, x9, x8, mi
00b0c214:  b        #0xb0c224
00b0c218:  add      x20, x20, #0x20
00b0c21c:  cmp      x20, x24
00b0c220:  b.eq     #0xb0c1e4
00b0c224:  ldrb     w9, [x20, #0x17]
00b0c228:  ldr      x10, [x20, #8]
00b0c22c:  sxtb     w8, w9
00b0c230:  cmp      w8, #0
00b0c234:  csel     x9, x10, x9, mi
00b0c238:  cmp      x9, x21
00b0c23c:  b.ne     #0xb0c218
00b0c240:  ldr      x9, [x20]
00b0c244:  cmp      w8, #0
00b0c248:  ldr      x8, [x19]
00b0c24c:  mov      x2, x21
00b0c250:  csel     x0, x9, x20, mi
00b0c254:  cmp      w25, #0
00b0c258:  csel     x1, x8, x19, mi
00b0c25c:  bl       #0xd13ff0
00b0c260:  cbnz     w0, #0xb0c218
00b0c264:  add      x0, sp, #0x2d0
00b0c268:  mov      x1, x19
00b0c26c:  mov      x2, x19
00b0c270:  str      x23, [sp, #0x2d0]
00b0c274:  bl       #0xb07310
00b0c278:  b        #0xb0c1e4
00b0c27c:  ldr      x19, [sp, #0x310]
00b0c280:  ldr      x22, [sp, #0x318]
00b0c284:  cmp      x19, x22
00b0c288:  b.eq     #0xb0c330
00b0c28c:  add      x23, sp, #0x4b0
00b0c290:  b        #0xb0c2b4
00b0c294:  add      x0, sp, #0x2d0
00b0c298:  mov      x1, x19
00b0c29c:  mov      x2, x19
00b0c2a0:  str      x23, [sp, #0x2d0]
00b0c2a4:  bl       #0xb07310
00b0c2a8:  add      x19, x19, #0x20
00b0c2ac:  cmp      x19, x22
00b0c2b0:  b.eq     #0xb0c330
00b0c2b4:  ldp      x20, x24, [sp, #0x1d0]
00b0c2b8:  cmp      x20, x24
00b0c2bc:  b.eq     #0xb0c294
00b0c2c0:  ldrb     w8, [x19, #0x17]
00b0c2c4:  ldr      x9, [x19, #8]
00b0c2c8:  sxtb     w25, w8
00b0c2cc:  cmp      w25, #0
00b0c2d0:  csel     x21, x9, x8, mi
00b0c2d4:  b        #0xb0c2e4
00b0c2d8:  add      x20, x20, #0x50
00b0c2dc:  cmp      x20, x24
00b0c2e0:  b.eq     #0xb0c294
00b0c2e4:  ldrb     w9, [x20, #0x17]
00b0c2e8:  ldr      x10, [x20, #8]
00b0c2ec:  sxtb     w8, w9
00b0c2f0:  cmp      w8, #0
00b0c2f4:  csel     x9, x10, x9, mi
00b0c2f8:  cmp      x21, x9
00b0c2fc:  b.ne     #0xb0c2d8
00b0c300:  ldr      x9, [x19]
00b0c304:  cmp      w25, #0
00b0c308:  ldr      x10, [x20]
00b0c30c:  mov      x2, x21
00b0c310:  csel     x0, x9, x19, mi
00b0c314:  cmp      w8, #0
00b0c318:  csel     x1, x10, x20, mi
00b0c31c:  bl       #0xd13ff0
00b0c320:  ldr      w8, [x20, #0x18]
00b0c324:  orr      w8, w0, w8
00b0c328:  cbnz     w8, #0xb0c2d8
00b0c32c:  b        #0xb0c2a8
00b0c330:  ldr      x19, [sp, #0x2f0]
00b0c334:  ldr      x22, [sp, #0x2f8]
00b0c338:  cmp      x19, x22
00b0c33c:  b.eq     #0xb0c3e8
00b0c340:  add      x23, sp, #0x4b0
00b0c344:  b        #0xb0c368
00b0c348:  add      x0, sp, #0x2d0
00b0c34c:  mov      x1, x19
00b0c350:  mov      x2, x19
00b0c354:  str      x23, [sp, #0x2d0]
00b0c358:  bl       #0xb07310
00b0c35c:  add      x19, x19, #0x20
00b0c360:  cmp      x19, x22
00b0c364:  b.eq     #0xb0c3e8
00b0c368:  ldp      x20, x24, [sp, #0x1d0]
00b0c36c:  cmp      x20, x24
00b0c370:  b.eq     #0xb0c348
00b0c374:  ldrb     w8, [x19, #0x17]
00b0c378:  ldr      x9, [x19, #8]
00b0c37c:  sxtb     w25, w8
00b0c380:  cmp      w25, #0
00b0c384:  csel     x21, x9, x8, mi
00b0c388:  b        #0xb0c398
00b0c38c:  add      x20, x20, #0x50
00b0c390:  cmp      x20, x24
00b0c394:  b.eq     #0xb0c348
00b0c398:  ldrb     w9, [x20, #0x17]
00b0c39c:  ldr      x10, [x20, #8]
00b0c3a0:  sxtb     w8, w9
00b0c3a4:  cmp      w8, #0
00b0c3a8:  csel     x9, x10, x9, mi
00b0c3ac:  cmp      x21, x9
00b0c3b0:  b.ne     #0xb0c38c
00b0c3b4:  ldr      x9, [x19]
00b0c3b8:  cmp      w25, #0
00b0c3bc:  ldr      x10, [x20]
00b0c3c0:  mov      x2, x21
00b0c3c4:  csel     x0, x9, x19, mi
00b0c3c8:  cmp      w8, #0
00b0c3cc:  csel     x1, x10, x20, mi
00b0c3d0:  bl       #0xd13ff0
00b0c3d4:  ldr      w8, [x20, #0x18]
00b0c3d8:  cmp      w0, #0
00b0c3dc:  ccmp     w8, #1, #0, eq
00b0c3e0:  b.ne     #0xb0c38c
00b0c3e4:  b        #0xb0c35c
00b0c3e8:  add      x8, sp, #0x2d0
00b0c3ec:  add      x0, sp, #0x4b0
00b0c3f0:  add      x1, sp, #0x1a0
00b0c3f4:  bl       #0xb15ca4
00b0c3f8:  ldr      x1, [sp, #0x1a0]
00b0c3fc:  cbz      x1, #0xb0c418
00b0c400:  add      x0, sp, #0x1a0
00b0c404:  bl       #0xb0e588
00b0c408:  ldr      x0, [sp, #0x1a0]
00b0c40c:  ldr      x8, [sp, #0x1b0]
00b0c410:  sub      x1, x8, x0
00b0c414:  bl       #0x546bc0
00b0c418:  ldr      x8, [sp, #0x2e0]
00b0c41c:  ldr      q0, [sp, #0x2d0]
00b0c420:  add      x0, sp, #0x4b0
00b0c424:  add      x1, x28, #0x18
00b0c428:  str      x8, [sp, #0x1b0]
00b0c42c:  add      x8, sp, #0x2d0
00b0c430:  str      q0, [sp, #0x1a0]
00b0c434:  bl       #0xb15ca4
00b0c438:  ldr      x1, [sp, #0x1b8]
00b0c43c:  add      x20, sp, #0x128
00b0c440:  cbz      x1, #0xb0c45c
00b0c444:  add      x0, x28, #0x18
00b0c448:  bl       #0xb0e588
00b0c44c:  ldr      x0, [sp, #0x1b8]
00b0c450:  ldr      x8, [sp, #0x1c8]
00b0c454:  sub      x1, x8, x0
00b0c458:  bl       #0x546bc0
00b0c45c:  ldr      q0, [sp, #0x2d0]
00b0c460:  ldr      x8, [sp, #0x2e0]
00b0c464:  ldr      x19, [sp, #0x2f0]
00b0c468:  stur     q0, [x20, #0x90]
00b0c46c:  str      x8, [sp, #0x1c8]
00b0c470:  cbz      x19, #0xb0c4cc
00b0c474:  ldr      x8, [sp, #0x2f8]
00b0c478:  mov      x0, x19
00b0c47c:  cmp      x19, x8
00b0c480:  b.eq     #0xb0c4bc
00b0c484:  sub      x20, x8, #0x20
00b0c488:  b        #0xb0c498
00b0c48c:  cmp      x20, x19
00b0c490:  sub      x20, x20, #0x20
00b0c494:  b.eq     #0xb0c4b8
00b0c498:  cbz      x20, #0xb0db0c
00b0c49c:  ldrsb    w8, [x20, #0x17]
00b0c4a0:  tbz      w8, #0x1f, #0xb0c48c
00b0c4a4:  ldr      x8, [x20, #0x10]
00b0c4a8:  ldr      x0, [x20]
00b0c4ac:  and      x1, x8, #0x7fffffffffffffff
00b0c4b0:  bl       #0x546bc0
00b0c4b4:  b        #0xb0c48c
00b0c4b8:  ldr      x0, [sp, #0x2f0]
00b0c4bc:  ldr      x8, [sp, #0x300]
00b0c4c0:  str      x19, [sp, #0x2f8]
00b0c4c4:  sub      x1, x8, x0
00b0c4c8:  bl       #0x546bc0
00b0c4cc:  ldr      x19, [sp, #0x310]
00b0c4d0:  cbz      x19, #0xb0c52c
00b0c4d4:  ldr      x8, [sp, #0x318]
00b0c4d8:  mov      x0, x19
00b0c4dc:  cmp      x19, x8
00b0c4e0:  b.eq     #0xb0c51c
00b0c4e4:  sub      x20, x8, #0x20
00b0c4e8:  b        #0xb0c4f8
00b0c4ec:  cmp      x20, x19
00b0c4f0:  sub      x20, x20, #0x20
00b0c4f4:  b.eq     #0xb0c518
00b0c4f8:  cbz      x20, #0xb0db0c
00b0c4fc:  ldrsb    w8, [x20, #0x17]
00b0c500:  tbz      w8, #0x1f, #0xb0c4ec
00b0c504:  ldr      x8, [x20, #0x10]
00b0c508:  ldr      x0, [x20]
00b0c50c:  and      x1, x8, #0x7fffffffffffffff
00b0c510:  bl       #0x546bc0
00b0c514:  b        #0xb0c4ec
00b0c518:  ldr      x0, [sp, #0x310]
00b0c51c:  ldr      x8, [sp, #0x320]
00b0c520:  str      x19, [sp, #0x318]
00b0c524:  sub      x1, x8, x0
00b0c528:  bl       #0x546bc0
00b0c52c:  ldr      x1, [sp, #0x4b8]
00b0c530:  add      x20, sp, #0x4b0
00b0c534:  add      x0, sp, #0x310
00b0c538:  str      x20, [sp, #0x310]
00b0c53c:  bl       #0xb16af4
00b0c540:  ldp      x19, x23, [sp, #0x1d0]
00b0c544:  add      x22, x20, #8
00b0c548:  str      xzr, [sp, #0x4c0]
00b0c54c:  str      xzr, [sp, #0x4b8]
00b0c550:  cmp      x19, x23
00b0c554:  str      x22, [sp, #0x4b0]
00b0c558:  b.eq     #0xb0c59c
00b0c55c:  adrp     x21, #0x1f9000
00b0c560:  add      x21, x21, #0x4c3
00b0c564:  add      x0, sp, #0x310
00b0c568:  add      x3, sp, #0x2f0
00b0c56c:  add      x4, sp, #0x2d0
00b0c570:  mov      x1, x19
00b0c574:  mov      x2, x21
00b0c578:  str      x19, [sp, #0x2f0]
00b0c57c:  str      x20, [sp, #0x310]
00b0c580:  bl       #0xb160c0
00b0c584:  add      x0, x0, #0x38
00b0c588:  mov      x1, x19
00b0c58c:  bl       #0x88fbec
00b0c590:  add      x19, x19, #0x50
00b0c594:  cmp      x19, x23
00b0c598:  b.ne     #0xb0c564
00b0c59c:  add      x8, sp, #0x310
00b0c5a0:  add      x0, sp, #0x1a0
00b0c5a4:  bl       #0xb1cbb4
00b0c5a8:  ldr      x21, [sp, #0x310]
00b0c5ac:  ldr      x23, [sp, #0x318]
00b0c5b0:  cmp      x21, x23
00b0c5b4:  b.eq     #0xb0c688
00b0c5b8:  ldr      x8, [sp, #0x4b8]
00b0c5bc:  mov      x24, x22
00b0c5c0:  cbz      x8, #0xb0c640
00b0c5c4:  ldrb     w9, [x21, #0x17]
00b0c5c8:  ldp      x11, x12, [x21]
00b0c5cc:  mov      x24, x8
00b0c5d0:  sxtb     w10, w9
00b0c5d4:  cmp      w10, #0
00b0c5d8:  csel     x19, x11, x21, mi
00b0c5dc:  csel     x20, x12, x9, mi
00b0c5e0:  b        #0xb0c5ec
00b0c5e4:  ldr      x24, [x24, #8]
00b0c5e8:  cbz      x24, #0xb0c63c
00b0c5ec:  mov      x8, x24
00b0c5f0:  mov      x0, x19
00b0c5f4:  ldr      x9, [x8, #0x20]!
00b0c5f8:  ldrb     w10, [x8, #0x17]
00b0c5fc:  ldr      x12, [x8, #8]
00b0c600:  sxtb     w11, w10
00b0c604:  cmp      w11, #0
00b0c608:  csel     x25, x12, x10, mi
00b0c60c:  csel     x1, x9, x8, mi
00b0c610:  cmp      x25, x20
00b0c614:  csel     x2, x25, x20, lo
00b0c618:  bl       #0xd13ff0
00b0c61c:  cbz      w0, #0xb0c628
00b0c620:  tbz      w0, #0x1f, #0xb0c5e4
00b0c624:  b        #0xb0c634
00b0c628:  cmp      x20, x25
00b0c62c:  b.eq     #0xb0c640
00b0c630:  b.hs     #0xb0c5e4
00b0c634:  ldr      x24, [x24]
00b0c638:  cbnz     x24, #0xb0c5ec
00b0c63c:  mov      x24, x22
00b0c640:  ldp      x19, x8, [sp, #0x160]
00b0c644:  cmp      x19, x8
00b0c648:  b.hs     #0xb0c674
00b0c64c:  cbz      x19, #0xb0d96c
00b0c650:  add      x1, x24, #0x38
00b0c654:  mov      x0, x19
00b0c658:  bl       #0x88f9d8
00b0c65c:  add      x0, x19, #0x50
00b0c660:  add      x21, x21, #0x20
00b0c664:  str      x0, [sp, #0x160]
00b0c668:  cmp      x21, x23
00b0c66c:  b.ne     #0xb0c5b8
00b0c670:  b        #0xb0c684
00b0c674:  add      x0, sp, #0x158
00b0c678:  add      x1, x24, #0x38
00b0c67c:  bl       #0xb16234
00b0c680:  b        #0xb0c660
00b0c684:  ldr      x21, [sp, #0x310]
00b0c688:  cbz      x21, #0xb0c6e4
00b0c68c:  ldr      x8, [sp, #0x318]
00b0c690:  mov      x0, x21
00b0c694:  cmp      x21, x8
00b0c698:  b.eq     #0xb0c6d4
00b0c69c:  sub      x19, x8, #0x20
00b0c6a0:  b        #0xb0c6b0
00b0c6a4:  cmp      x19, x21
00b0c6a8:  sub      x19, x19, #0x20
00b0c6ac:  b.eq     #0xb0c6d0
00b0c6b0:  cbz      x19, #0xb0db0c
00b0c6b4:  ldrsb    w8, [x19, #0x17]
00b0c6b8:  tbz      w8, #0x1f, #0xb0c6a4
00b0c6bc:  ldr      x8, [x19, #0x10]
00b0c6c0:  ldr      x0, [x19]
00b0c6c4:  and      x1, x8, #0x7fffffffffffffff
00b0c6c8:  bl       #0x546bc0
00b0c6cc:  b        #0xb0c6a4
00b0c6d0:  ldr      x0, [sp, #0x310]
00b0c6d4:  ldr      x8, [sp, #0x320]
00b0c6d8:  str      x21, [sp, #0x318]
00b0c6dc:  sub      x1, x8, x0
00b0c6e0:  bl       #0x546bc0
00b0c6e4:  add      x8, sp, #0x310
00b0c6e8:  add      x0, x28, #0x18
00b0c6ec:  bl       #0xb1cbb4
00b0c6f0:  ldr      x21, [sp, #0x310]
00b0c6f4:  ldr      x23, [sp, #0x318]
00b0c6f8:  cmp      x21, x23
00b0c6fc:  b.eq     #0xb0c7dc
00b0c700:  ldr      x26, [sp, #0x68]
00b0c704:  ldr      x8, [sp, #0x4b8]
00b0c708:  mov      x24, x22
00b0c70c:  cbz      x8, #0xb0c78c
00b0c710:  ldrb     w9, [x21, #0x17]
00b0c714:  ldp      x11, x12, [x21]
00b0c718:  mov      x24, x8
00b0c71c:  sxtb     w10, w9
00b0c720:  cmp      w10, #0
00b0c724:  csel     x19, x11, x21, mi
00b0c728:  csel     x20, x12, x9, mi
00b0c72c:  b        #0xb0c738
00b0c730:  ldr      x24, [x24, #8]
00b0c734:  cbz      x24, #0xb0c788
00b0c738:  mov      x8, x24
00b0c73c:  mov      x0, x19
00b0c740:  ldr      x9, [x8, #0x20]!
00b0c744:  ldrb     w10, [x8, #0x17]
00b0c748:  ldr      x12, [x8, #8]
00b0c74c:  sxtb     w11, w10
00b0c750:  cmp      w11, #0
00b0c754:  csel     x25, x12, x10, mi
00b0c758:  csel     x1, x9, x8, mi
00b0c75c:  cmp      x25, x20
00b0c760:  csel     x2, x25, x20, lo
00b0c764:  bl       #0xd13ff0
00b0c768:  cbz      w0, #0xb0c774
00b0c76c:  tbz      w0, #0x1f, #0xb0c730
00b0c770:  b        #0xb0c780
00b0c774:  cmp      x20, x25
00b0c778:  b.eq     #0xb0c78c
00b0c77c:  b.hs     #0xb0c730
00b0c780:  ldr      x24, [x24]
00b0c784:  cbnz     x24, #0xb0c738
00b0c788:  mov      x24, x22
00b0c78c:  ldp      x19, x8, [sp, #0x90]
00b0c790:  cmp      x19, x8
00b0c794:  b.hs     #0xb0c7c0
00b0c798:  cbz      x19, #0xb0d96c
00b0c79c:  add      x1, x24, #0x38
00b0c7a0:  mov      x0, x19
00b0c7a4:  bl       #0x88f9d8
00b0c7a8:  add      x0, x19, #0x50
00b0c7ac:  add      x21, x21, #0x20
00b0c7b0:  str      x0, [sp, #0x90]
00b0c7b4:  cmp      x21, x23
00b0c7b8:  b.ne     #0xb0c704
00b0c7bc:  b        #0xb0c7d0
00b0c7c0:  add      x0, sp, #0x88
00b0c7c4:  add      x1, x24, #0x38
00b0c7c8:  bl       #0xb16234
00b0c7cc:  b        #0xb0c7ac
00b0c7d0:  ldr      x21, [sp, #0x310]
00b0c7d4:  cbnz     x21, #0xb0c7e4
00b0c7d8:  b        #0xb0c83c
00b0c7dc:  ldr      x26, [sp, #0x68]
00b0c7e0:  cbz      x21, #0xb0c83c
00b0c7e4:  ldr      x8, [sp, #0x318]
00b0c7e8:  mov      x0, x21
00b0c7ec:  cmp      x21, x8
00b0c7f0:  b.eq     #0xb0c82c
00b0c7f4:  sub      x19, x8, #0x20
00b0c7f8:  b        #0xb0c808
00b0c7fc:  cmp      x19, x21
00b0c800:  sub      x19, x19, #0x20
00b0c804:  b.eq     #0xb0c828
00b0c808:  cbz      x19, #0xb0db0c
00b0c80c:  ldrsb    w8, [x19, #0x17]
00b0c810:  tbz      w8, #0x1f, #0xb0c7fc
00b0c814:  ldr      x8, [x19, #0x10]
00b0c818:  ldr      x0, [x19]
00b0c81c:  and      x1, x8, #0x7fffffffffffffff
00b0c820:  bl       #0x546bc0
00b0c824:  b        #0xb0c7fc
00b0c828:  ldr      x0, [sp, #0x310]
00b0c82c:  ldr      x8, [sp, #0x320]
00b0c830:  str      x21, [sp, #0x318]
00b0c834:  sub      x1, x8, x0
00b0c838:  bl       #0x546bc0
00b0c83c:  add      x8, x26, #0xc8
00b0c840:  add      x9, sp, #0x1a0
00b0c844:  cmp      x8, x9
00b0c848:  b.eq     #0xb0c884
00b0c84c:  ldp      x1, x2, [sp, #0x1a0]
00b0c850:  mov      x19, #-0x5555555555555556
00b0c854:  movk     x19, #0xaaab
00b0c858:  add      x0, x26, #0xc8
00b0c85c:  sub      x8, x2, x1
00b0c860:  asr      x8, x8, #3
00b0c864:  mul      x3, x8, x19
00b0c868:  bl       #0xb15650
00b0c86c:  ldp      x1, x2, [sp, #0x1b8]
00b0c870:  add      x0, x26, #0xe0
00b0c874:  sub      x8, x2, x1
00b0c878:  asr      x8, x8, #3
00b0c87c:  mul      x3, x8, x19
00b0c880:  bl       #0xb15650
00b0c884:  ldr      x1, [sp, #0x4b8]
00b0c888:  add      x8, sp, #0x4b0
00b0c88c:  add      x0, sp, #0x310
00b0c890:  str      x8, [sp, #0x310]
00b0c894:  bl       #0xb163c8
00b0c898:  add      x8, x26, #0xf8
00b0c89c:  add      x9, sp, #0x88
00b0c8a0:  cmp      x8, x9
00b0c8a4:  b.eq     #0xb0c8c8
00b0c8a8:  ldp      x1, x2, [sp, #0x88]
00b0c8ac:  mov      x9, #-0x3333333333333334
00b0c8b0:  movk     x9, #0xcccd
00b0c8b4:  add      x0, x26, #0xf8
00b0c8b8:  sub      x8, x2, x1
00b0c8bc:  asr      x8, x8, #4
00b0c8c0:  mul      x3, x8, x9
00b0c8c4:  bl       #0x88ec84
00b0c8c8:  ldr      x28, [sp, #0x270]
00b0c8cc:  ldr      x23, [sp, #0x278]
00b0c8d0:  cmp      x28, x23
00b0c8d4:  b.eq     #0xb0ce7c
00b0c8d8:  ldrb     w8, [sp, #0x207]
00b0c8dc:  ldp      x11, x10, [sp, #0x1f0]
00b0c8e0:  ldr      x12, [sp, #0x30]
00b0c8e4:  add      x25, sp, #0x2f0
00b0c8e8:  sxtb     w9, w8
00b0c8ec:  ldr      w22, [x12]
00b0c8f0:  cmp      w9, #0
00b0c8f4:  add      x9, sp, #0x1f0
00b0c8f8:  csel     x21, x10, x8, mi
00b0c8fc:  mov      w10, #0x19
00b0c900:  csel     x27, x11, x9, mi
00b0c904:  and      x8, x21, #0x7ffffffffffffff8
00b0c908:  add      x8, x8, #8
00b0c90c:  cmp      x8, #0x18
00b0c910:  csel     x8, x10, x8, eq
00b0c914:  str      x8, [sp, #0x60]
00b0c918:  orr      x8, x8, #0x8000000000000000
00b0c91c:  str      x8, [sp, #0x58]
00b0c920:  b        #0xb0c944
00b0c924:  ldr      x0, [sp, #0x310]
00b0c928:  ldr      x8, [sp, #0x320]
00b0c92c:  str      x19, [sp, #0x318]
00b0c930:  sub      x1, x8, x0
00b0c934:  bl       #0x546bc0
00b0c938:  add      x28, x28, #0x50
00b0c93c:  cmp      x28, x23
00b0c940:  b.eq     #0xb0ce08
00b0c944:  ldrsb    x8, [x28, #0x1f]
00b0c948:  tbnz     x8, #0x3f, #0xb0c954
00b0c94c:  cbnz     x8, #0xb0c988
00b0c950:  b        #0xb0c95c
00b0c954:  ldr      x8, [x28, #0x10]
00b0c958:  cbnz     x8, #0xb0c988
00b0c95c:  bl       #0x4022fc
00b0c960:  tbnz     w0, #0, #0xb0c988
00b0c964:  ldr      w4, [x28]
00b0c968:  adrp     x0, #0x1f6000
00b0c96c:  add      x0, x0, #0x220
00b0c970:  adrp     x1, #0x1bb000
00b0c974:  add      x1, x1, #0x894
00b0c978:  mov      w2, #0x107a
00b0c97c:  adrp     x3, #0x1eb000
00b0c980:  add      x3, x3, #0xcb0
00b0c984:  bl       #0x623bb0
00b0c988:  str      xzr, [sp, #0x318]
00b0c98c:  str      xzr, [sp, #0x310]
00b0c990:  str      xzr, [sp, #0x320]
00b0c994:  str      xzr, [sp, #0x2f8]
00b0c998:  str      xzr, [sp, #0x2f0]
00b0c99c:  str      xzr, [sp, #0x300]
00b0c9a0:  tbnz     w22, #0, #0xb0c9ec
00b0c9a4:  tbnz     w22, #1, #0xb0ca34
00b0c9a8:  cbnz     w22, #0xb0cae8
00b0c9ac:  add      x0, sp, #0x4b0
00b0c9b0:  adrp     x1, #0x254000
00b0c9b4:  add      x1, x1, #0xda2
00b0c9b8:  bl       #0x5d3510
00b0c9bc:  ldr      x8, [sp, #0x318]
00b0c9c0:  ldr      x9, [sp, #0x320]
00b0c9c4:  cmp      x8, x9
00b0c9c8:  b.hs     #0xb0cddc
00b0c9cc:  cbz      x8, #0xb0d96c
00b0c9d0:  ldr      x9, [sp, #0x4c0]
00b0c9d4:  ldr      q0, [sp, #0x4b0]
00b0c9d8:  str      x9, [x8, #0x10]
00b0c9dc:  add      x9, x8, #0x18
00b0c9e0:  str      q0, [x8]
00b0c9e4:  str      x9, [sp, #0x318]
00b0c9e8:  b        #0xb0cae0
00b0c9ec:  ldr      x1, [sp, #0x210]
00b0c9f0:  ldr      x2, [sp, #0x218]
00b0c9f4:  mov      x9, #-0x5555555555555556
00b0c9f8:  movk     x9, #0xaaab
00b0c9fc:  add      x0, sp, #0x310
00b0ca00:  sub      x8, x2, x1
00b0ca04:  asr      x8, x8, #3
00b0ca08:  mul      x3, x8, x9
00b0ca0c:  bl       #0x7eeac8
00b0ca10:  mov      x8, #-0xa
00b0ca14:  movk     x8, #0x7fff, lsl #48
00b0ca18:  cmp      x21, x8
00b0ca1c:  b.hi     #0xb0ddac
00b0ca20:  cmp      x21, #0x16
00b0ca24:  b.hi     #0xb0ca6c
00b0ca28:  strb     w21, [sp, #0x4c7]
00b0ca2c:  add      x19, sp, #0x4b0
00b0ca30:  b        #0xb0ca88
00b0ca34:  add      x0, sp, #0x310
00b0ca38:  add      x1, x28, #0x20
00b0ca3c:  bl       #0x9d56fc
00b0ca40:  add      x8, x28, #0x38
00b0ca44:  str      x0, [sp, #0x318]
00b0ca48:  cmp      x25, x8
00b0ca4c:  b.eq     #0xb0cae0
00b0ca50:  ldrsb    w10, [sp, #0x307]
00b0ca54:  ldrb     w9, [x28, #0x4f]
00b0ca58:  tbnz     w10, #0x1f, #0xb0cd8c
00b0ca5c:  tbnz     w9, #7, #0xb0cdac
00b0ca60:  ldr      q0, [x8]
00b0ca64:  ldr      x8, [x8, #0x10]
00b0ca68:  b        #0xb0cad8
00b0ca6c:  ldr      x0, [sp, #0x60]
00b0ca70:  bl       #0xd13d90
00b0ca74:  ldr      x8, [sp, #0x58]
00b0ca78:  mov      x19, x0
00b0ca7c:  str      x21, [sp, #0x4b8]
00b0ca80:  str      x0, [sp, #0x4b0]
00b0ca84:  str      x8, [sp, #0x4c0]
00b0ca88:  add      x8, x19, x21
00b0ca8c:  cmp      x8, x19
00b0ca90:  b.lo     #0xb0dcd0
00b0ca94:  cmp      x19, x27
00b0ca98:  b.hi     #0xb0caa4
00b0ca9c:  cmp      x8, x27
00b0caa0:  b.hi     #0xb0dcbc
00b0caa4:  mov      x0, x19
00b0caa8:  mov      x1, x27
00b0caac:  mov      x2, x21
00b0cab0:  bl       #0xd13de0
00b0cab4:  ldrsb    w8, [sp, #0x307]
00b0cab8:  strb     wzr, [x19, x21]
00b0cabc:  tbz      w8, #0x1f, #0xb0cad0
00b0cac0:  ldr      x8, [sp, #0x300]
00b0cac4:  ldr      x0, [sp, #0x2f0]
00b0cac8:  and      x1, x8, #0x7fffffffffffffff
00b0cacc:  bl       #0x546bc0
00b0cad0:  ldr      q0, [sp, #0x4b0]
00b0cad4:  ldr      x8, [sp, #0x4c0]
00b0cad8:  str      q0, [sp, #0x2f0]
00b0cadc:  str      x8, [sp, #0x300]
00b0cae0:  ldrsb    w8, [sp, #0x307]
00b0cae4:  tbnz     w8, #0x1f, #0xb0cafc
00b0cae8:  ldr      q0, [sp, #0x2f0]
00b0caec:  ldr      x8, [sp, #0x300]
00b0caf0:  str      q0, [sp, #0x2d0]
00b0caf4:  str      x8, [sp, #0x2e0]
00b0caf8:  b        #0xb0cb0c
00b0cafc:  ldr      x1, [sp, #0x2f0]
00b0cb00:  ldr      x2, [sp, #0x2f8]
00b0cb04:  add      x0, sp, #0x2d0
00b0cb08:  bl       #0x5478d8
00b0cb0c:  ldr      x8, [sp, #0x2e0]
00b0cb10:  ldr      x19, [sp, #0x288]
00b0cb14:  ldr      x20, [sp, #0x290]
00b0cb18:  ldr      q0, [sp, #0x2d0]
00b0cb1c:  str      xzr, [sp, #0x2d8]
00b0cb20:  lsr      x24, x8, #0x38
00b0cb24:  cmp      x19, x20
00b0cb28:  str      x8, [sp, #0x4c0]
00b0cb2c:  str      q0, [sp, #0x4b0]
00b0cb30:  str      xzr, [sp, #0x2d0]
00b0cb34:  str      xzr, [sp, #0x2e0]
00b0cb38:  b.eq     #0xb0cbac
00b0cb3c:  sxtb     w8, w24
00b0cb40:  ldr      x9, [sp, #0x4b8]
00b0cb44:  ldr      x10, [sp, #0x4b0]
00b0cb48:  cmp      w8, #0
00b0cb4c:  add      x8, sp, #0x4b0
00b0cb50:  csel     x25, x9, x24, mi
00b0cb54:  csel     x26, x10, x8, mi
00b0cb58:  b        #0xb0cb68
00b0cb5c:  add      x19, x19, #0x90
00b0cb60:  cmp      x19, x20
00b0cb64:  b.eq     #0xb0cba4
00b0cb68:  ldrb     w9, [x19, #0x17]
00b0cb6c:  ldr      x10, [x19, #8]
00b0cb70:  sxtb     w8, w9
00b0cb74:  cmp      w8, #0
00b0cb78:  csel     x9, x10, x9, mi
00b0cb7c:  cmp      x9, x25
00b0cb80:  b.ne     #0xb0cb5c
00b0cb84:  ldr      x9, [x19]
00b0cb88:  cmp      w8, #0
00b0cb8c:  mov      x1, x26
00b0cb90:  mov      x2, x25
00b0cb94:  csel     x0, x9, x19, mi
00b0cb98:  bl       #0xd13ff0
00b0cb9c:  cbnz     w0, #0xb0cb5c
00b0cba0:  b        #0xb0cba8
00b0cba4:  mov      x19, x20
00b0cba8:  add      x25, sp, #0x2f0
00b0cbac:  tbz      w24, #7, #0xb0cbd8
00b0cbb0:  ldr      x8, [sp, #0x4c0]
00b0cbb4:  ldr      x0, [sp, #0x4b0]
00b0cbb8:  and      x1, x8, #0x7fffffffffffffff
00b0cbbc:  bl       #0x546bc0
00b0cbc0:  ldrsb    w8, [sp, #0x2e7]
00b0cbc4:  tbz      w8, #0x1f, #0xb0cbd8
00b0cbc8:  ldr      x8, [sp, #0x2e0]
00b0cbcc:  ldr      x0, [sp, #0x2d0]
00b0cbd0:  and      x1, x8, #0x7fffffffffffffff
00b0cbd4:  bl       #0x546bc0
00b0cbd8:  ldr      x8, [sp, #0x290]
00b0cbdc:  cmp      x19, x8
00b0cbe0:  b.ne     #0xb0cc24
00b0cbe4:  add      x0, sp, #0x4b0
00b0cbe8:  bl       #0x88d2b8
00b0cbec:  ldr      x19, [sp, #0x290]
00b0cbf0:  ldr      x8, [sp, #0x298]
00b0cbf4:  cmp      x19, x8
00b0cbf8:  b.hs     #0xb0cdcc
00b0cbfc:  cbz      x19, #0xb0d96c
00b0cc00:  add      x1, sp, #0x4b0
00b0cc04:  mov      x0, x19
00b0cc08:  bl       #0x88d4a0
00b0cc0c:  add      x0, x19, #0x90
00b0cc10:  str      x0, [sp, #0x290]
00b0cc14:  add      x0, sp, #0x4b0
00b0cc18:  bl       #0x88d578
00b0cc1c:  ldr      x8, [sp, #0x290]
00b0cc20:  sub      x19, x8, #0x90
00b0cc24:  ldr      w8, [x28]
00b0cc28:  str      w8, [sp, #0x4b0]
00b0cc2c:  ldp      x0, x9, [x19, #0x20]
00b0cc30:  cmp      x0, x9
00b0cc34:  b.hs     #0xb0cdbc
00b0cc38:  cbz      x0, #0xb0d96c
00b0cc3c:  str      w8, [x0], #4
00b0cc40:  add      x8, x28, #8
00b0cc44:  add      x9, x19, #0x48
00b0cc48:  str      x0, [x19, #0x20]
00b0cc4c:  cmp      x9, x8
00b0cc50:  b.eq     #0xb0cca4
00b0cc54:  ldrsb    w11, [x19, #0x5f]
00b0cc58:  ldrb     w10, [x28, #0x1f]
00b0cc5c:  tbnz     w11, #0x1f, #0xb0cc78
00b0cc60:  tbnz     w10, #7, #0xb0cc98
00b0cc64:  ldr      x10, [x8, #0x10]
00b0cc68:  ldr      q0, [x8]
00b0cc6c:  str      x10, [x9, #0x10]
00b0cc70:  str      q0, [x9]
00b0cc74:  b        #0xb0cca4
00b0cc78:  sxtb     w9, w10
00b0cc7c:  ldp      x11, x12, [x28, #8]
00b0cc80:  add      x0, x19, #0x48
00b0cc84:  cmp      w9, #0
00b0cc88:  csel     x1, x11, x8, mi
00b0cc8c:  csel     x2, x12, x10, mi
00b0cc90:  bl       #0x547f08
00b0cc94:  b        #0xb0cca4
00b0cc98:  ldp      x1, x2, [x28, #8]
00b0cc9c:  add      x0, x19, #0x48
00b0cca0:  bl       #0x547fc0
00b0cca4:  add      x1, sp, #0x310
00b0cca8:  mov      x0, x19
00b0ccac:  bl       #0x88e6e8
00b0ccb0:  cmp      x19, x25
00b0ccb4:  b.eq     #0xb0cd1c
00b0ccb8:  ldrsb    w9, [x19, #0x17]
00b0ccbc:  ldrb     w8, [sp, #0x307]
00b0ccc0:  tbnz     w9, #0x1f, #0xb0ccfc
00b0ccc4:  tbnz     w8, #7, #0xb0cd70
00b0ccc8:  ldr      x8, [sp, #0x300]
00b0cccc:  ldr      q0, [sp, #0x2f0]
00b0ccd0:  str      x8, [x19, #0x10]
00b0ccd4:  str      q0, [x19]
00b0ccd8:  ldrsb    w8, [sp, #0x307]
00b0ccdc:  tbz      w8, #0x1f, #0xb0cd24
00b0cce0:  ldr      x8, [sp, #0x300]
00b0cce4:  ldr      x0, [sp, #0x2f0]
00b0cce8:  and      x1, x8, #0x7fffffffffffffff
00b0ccec:  bl       #0x546bc0
00b0ccf0:  ldr      x19, [sp, #0x310]
00b0ccf4:  cbnz     x19, #0xb0cd2c
00b0ccf8:  b        #0xb0c938
00b0ccfc:  sxtb     w9, w8
00b0cd00:  ldr      x10, [sp, #0x2f0]
00b0cd04:  ldr      x11, [sp, #0x2f8]
00b0cd08:  mov      x0, x19
00b0cd0c:  cmp      w9, #0
00b0cd10:  csel     x1, x10, x25, mi
00b0cd14:  csel     x2, x11, x8, mi
00b0cd18:  bl       #0x547f08
00b0cd1c:  ldrsb    w8, [sp, #0x307]
00b0cd20:  tbnz     w8, #0x1f, #0xb0cce0
00b0cd24:  ldr      x19, [sp, #0x310]
00b0cd28:  cbz      x19, #0xb0c938
00b0cd2c:  ldr      x8, [sp, #0x318]
00b0cd30:  mov      x0, x19
00b0cd34:  cmp      x19, x8
00b0cd38:  b.ne     #0xb0cd4c
00b0cd3c:  b        #0xb0c928
00b0cd40:  cmp      x20, x19
00b0cd44:  mov      x8, x20
00b0cd48:  b.eq     #0xb0c924
00b0cd4c:  subs     x20, x8, #0x18
00b0cd50:  b.eq     #0xb0db0c
00b0cd54:  ldursb   w9, [x8, #-1]
00b0cd58:  tbz      w9, #0x1f, #0xb0cd40
00b0cd5c:  ldur     x0, [x8, #-0x18]
00b0cd60:  ldur     x8, [x8, #-8]
00b0cd64:  and      x1, x8, #0x7fffffffffffffff
00b0cd68:  bl       #0x546bc0
00b0cd6c:  b        #0xb0cd40
00b0cd70:  ldr      x1, [sp, #0x2f0]
00b0cd74:  ldr      x2, [sp, #0x2f8]
00b0cd78:  mov      x0, x19
00b0cd7c:  bl       #0x547fc0
00b0cd80:  ldrsb    w8, [sp, #0x307]
00b0cd84:  tbz      w8, #0x1f, #0xb0cd24
00b0cd88:  b        #0xb0cce0
00b0cd8c:  sxtb     w10, w9
00b0cd90:  ldp      x11, x12, [x28, #0x38]
00b0cd94:  add      x0, sp, #0x2f0
00b0cd98:  cmp      w10, #0
00b0cd9c:  csel     x1, x11, x8, mi
00b0cda0:  csel     x2, x12, x9, mi
00b0cda4:  bl       #0x547f08
00b0cda8:  b        #0xb0cae0
00b0cdac:  ldp      x1, x2, [x28, #0x38]
00b0cdb0:  add      x0, sp, #0x2f0
00b0cdb4:  bl       #0x547fc0
00b0cdb8:  b        #0xb0cae0
00b0cdbc:  add      x0, x19, #0x18
00b0cdc0:  add      x1, sp, #0x4b0
00b0cdc4:  bl       #0x852528
00b0cdc8:  b        #0xb0cc40
00b0cdcc:  add      x0, sp, #0x288
00b0cdd0:  add      x1, sp, #0x4b0
00b0cdd4:  bl       #0xb16464
00b0cdd8:  b        #0xb0cc10
00b0cddc:  add      x0, sp, #0x310
00b0cde0:  add      x1, sp, #0x4b0
00b0cde4:  bl       #0xad3390
00b0cde8:  ldrsb    w8, [sp, #0x4c7]
00b0cdec:  str      x0, [sp, #0x318]
00b0cdf0:  tbz      w8, #0x1f, #0xb0cae0
00b0cdf4:  ldr      x8, [sp, #0x4c0]
00b0cdf8:  ldr      x0, [sp, #0x4b0]
00b0cdfc:  and      x1, x8, #0x7fffffffffffffff
00b0ce00:  bl       #0x546bc0
00b0ce04:  b        #0xb0cae0
00b0ce08:  ldr      x19, [sp, #0x288]
00b0ce0c:  ldr      x21, [sp, #0x290]
00b0ce10:  add      x28, sp, #0x1a0
00b0ce14:  cmp      x19, x21
00b0ce18:  b.ne     #0xb0ce3c
00b0ce1c:  b        #0xb0d060
00b0ce20:  ldr      x8, [sp, #0x4c0]
00b0ce24:  ldr      q0, [sp, #0x4b0]
00b0ce28:  str      x8, [x19, #0x10]
00b0ce2c:  str      q0, [x19]
00b0ce30:  add      x19, x19, #0x90
00b0ce34:  cmp      x19, x21
00b0ce38:  b.eq     #0xb0d060
00b0ce3c:  ldrsb    x8, [x19, #0x17]
00b0ce40:  tbnz     x8, #0x3f, #0xb0ce4c
00b0ce44:  cbnz     x8, #0xb0ce30
00b0ce48:  b        #0xb0ce54
00b0ce4c:  ldr      x8, [x19, #8]
00b0ce50:  cbnz     x8, #0xb0ce30
00b0ce54:  add      x8, sp, #0x4b0
00b0ce58:  mov      w0, #8
00b0ce5c:  bl       #0x835a20
00b0ce60:  ldrsb    w8, [x19, #0x17]
00b0ce64:  tbz      w8, #0x1f, #0xb0ce20
00b0ce68:  ldr      x8, [x19, #0x10]
00b0ce6c:  ldr      x0, [x19]
00b0ce70:  and      x1, x8, #0x7fffffffffffffff
00b0ce74:  bl       #0x546bc0
00b0ce78:  b        #0xb0ce20
00b0ce7c:  ldr      w8, [sp, #0x44]
00b0ce80:  add      x28, sp, #0x1a0
00b0ce84:  cmp      w8, #2
00b0ce88:  b.eq     #0xb0d060
00b0ce8c:  ldr      x8, [sp, #0x30]
00b0ce90:  ldrb     w8, [x8]
00b0ce94:  tbz      w8, #0, #0xb0d060
00b0ce98:  ldrb     w8, [sp, #0x207]
00b0ce9c:  ldr      x9, [sp, #0x1f8]
00b0cea0:  sxtb     w10, w8
00b0cea4:  cmp      w10, #0
00b0cea8:  csel     x11, x9, x8, mi
00b0ceac:  cbnz     x11, #0xb0cef0
00b0ceb0:  add      x8, sp, #0x4b0
00b0ceb4:  mov      w0, #8
00b0ceb8:  bl       #0x835a20
00b0cebc:  ldrsb    w8, [sp, #0x207]
00b0cec0:  tbz      w8, #0x1f, #0xb0ced4
00b0cec4:  ldr      x8, [sp, #0x200]
00b0cec8:  ldr      x0, [sp, #0x1f0]
00b0cecc:  and      x1, x8, #0x7fffffffffffffff
00b0ced0:  bl       #0x546bc0
00b0ced4:  ldr      x8, [sp, #0x4c0]
00b0ced8:  ldr      q0, [sp, #0x4b0]
00b0cedc:  str      x8, [sp, #0x200]
00b0cee0:  lsr      x8, x8, #0x38
00b0cee4:  str      q0, [sp, #0x1f0]
00b0cee8:  ldr      x9, [sp, #0x1f8]
00b0ceec:  mov      w10, w8
00b0cef0:  movi     v0.16b, #0xaa
00b0cef4:  sxtb     w10, w10
00b0cef8:  ldr      x11, [sp, #0x1f0]
00b0cefc:  add      x0, sp, #0x4b0
00b0cf00:  cmp      w10, #0
00b0cf04:  add      x10, sp, #0x1f0
00b0cf08:  csel     x21, x11, x10, mi
00b0cf0c:  csel     x19, x9, x8, mi
00b0cf10:  str      q0, [sp, #0x530]
00b0cf14:  str      q0, [sp, #0x520]
00b0cf18:  str      q0, [sp, #0x510]
00b0cf1c:  str      q0, [sp, #0x500]
00b0cf20:  str      q0, [sp, #0x4f0]
00b0cf24:  str      q0, [sp, #0x4e0]
00b0cf28:  str      q0, [sp, #0x4d0]
00b0cf2c:  str      q0, [sp, #0x4c0]
00b0cf30:  str      q0, [sp, #0x4b0]
00b0cf34:  bl       #0x88d2b8
00b0cf38:  cbz      x19, #0xb0cf94
00b0cf3c:  add      x0, sp, #0x4b0
00b0cf40:  add      x1, sp, #0x210
00b0cf44:  bl       #0x88e6e8
00b0cf48:  mov      x8, #-0xa
00b0cf4c:  movk     x8, #0x7fff, lsl #48
00b0cf50:  cmp      x19, x8
00b0cf54:  b.hi     #0xb0ddac
00b0cf58:  cmp      x19, #0x16
00b0cf5c:  b.ls     #0xb0cfac
00b0cf60:  and      x8, x19, #0x7ffffffffffffff8
00b0cf64:  mov      w9, #0x19
00b0cf68:  add      x8, x8, #8
00b0cf6c:  cmp      x8, #0x18
00b0cf70:  csel     x25, x9, x8, eq
00b0cf74:  mov      x0, x25
00b0cf78:  bl       #0xd13d90
00b0cf7c:  mov      x22, x0
00b0cf80:  orr      x8, x25, #0x8000000000000000
00b0cf84:  str      x0, [sp, #0x310]
00b0cf88:  str      x19, [sp, #0x318]
00b0cf8c:  str      x8, [sp, #0x320]
00b0cf90:  b        #0xb0cfb4
00b0cf94:  ldp      x8, x9, [sp, #0x158]
00b0cf98:  cmp      x8, x9
00b0cf9c:  b.eq     #0xb0dbf8
00b0cfa0:  add      x0, sp, #0x4b0
00b0cfa4:  add      x1, sp, #0x210
00b0cfa8:  bl       #0x88e6e8
00b0cfac:  strb     w19, [sp, #0x327]
00b0cfb0:  add      x22, sp, #0x310
00b0cfb4:  add      x8, x22, x19
00b0cfb8:  cmp      x8, x22
00b0cfbc:  b.lo     #0xb0dcd0
00b0cfc0:  cmp      x22, x21
00b0cfc4:  b.hi     #0xb0cfd0
00b0cfc8:  cmp      x8, x21
00b0cfcc:  b.hi     #0xb0dcbc
00b0cfd0:  mov      x0, x22
00b0cfd4:  mov      x1, x21
00b0cfd8:  mov      x2, x19
00b0cfdc:  bl       #0xd13de0
00b0cfe0:  ldrsb    w8, [sp, #0x4c7]
00b0cfe4:  strb     wzr, [x22, x19]
00b0cfe8:  tbz      w8, #0x1f, #0xb0cffc
00b0cfec:  ldr      x8, [sp, #0x4c0]
00b0cff0:  ldr      x0, [sp, #0x4b0]
00b0cff4:  and      x1, x8, #0x7fffffffffffffff
00b0cff8:  bl       #0x546bc0
00b0cffc:  ldp      x1, x2, [sp, #0x158]
00b0d000:  mov      x9, #-0x3333333333333334
00b0d004:  movk     x9, #0xcccd
00b0d008:  ldr      q0, [sp, #0x310]
00b0d00c:  sub      x8, x2, x1
00b0d010:  str      q0, [sp, #0x4b0]
00b0d014:  asr      x8, x8, #4
00b0d018:  mul      x3, x8, x9
00b0d01c:  ldr      x8, [sp, #0x320]
00b0d020:  str      x8, [sp, #0x4c0]
00b0d024:  add      x8, sp, #0x4b0
00b0d028:  add      x0, x8, #0x78
00b0d02c:  bl       #0x88ec84
00b0d030:  ldr      x19, [sp, #0x290]
00b0d034:  ldr      x8, [sp, #0x298]
00b0d038:  cmp      x19, x8
00b0d03c:  b.hs     #0xb0dd40
00b0d040:  cbz      x19, #0xb0d96c
00b0d044:  add      x1, sp, #0x4b0
00b0d048:  mov      x0, x19
00b0d04c:  bl       #0x88d2d8
00b0d050:  add      x0, x19, #0x90
00b0d054:  str      x0, [sp, #0x290]
00b0d058:  add      x0, sp, #0x4b0
00b0d05c:  bl       #0x88d578
00b0d060:  ldr      x19, [sp, #0x258]
00b0d064:  ldr      x23, [sp, #0x260]
00b0d068:  b        #0xb0d070
00b0d06c:  add      x19, x19, #0x30
00b0d070:  cmp      x19, x23
00b0d074:  b.eq     #0xb0d0fc
00b0d078:  ldp      x8, x9, [x19, #0x18]
00b0d07c:  cmp      x8, x9
00b0d080:  b.eq     #0xb0d06c
00b0d084:  ldr      x24, [sp, #0x288]
00b0d088:  ldr      x25, [sp, #0x290]
00b0d08c:  cmp      x24, x25
00b0d090:  b.eq     #0xb0d06c
00b0d094:  ldr      w21, [x8]
00b0d098:  b        #0xb0d0b8
00b0d09c:  add      x0, x24, #0x30
00b0d0a0:  mov      x1, x19
00b0d0a4:  bl       #0x88eedc
00b0d0a8:  str      x0, [x24, #0x38]
00b0d0ac:  add      x24, x24, #0x90
00b0d0b0:  cmp      x24, x25
00b0d0b4:  b.eq     #0xb0d06c
00b0d0b8:  ldp      x0, x20, [x24, #0x18]
00b0d0bc:  mov      w1, w21
00b0d0c0:  sub      x8, x20, x0
00b0d0c4:  asr      x2, x8, #2
00b0d0c8:  bl       #0xd14630
00b0d0cc:  cmp      x0, #0
00b0d0d0:  ccmp     x0, x20, #4, ne
00b0d0d4:  b.eq     #0xb0d0ac
00b0d0d8:  ldp      x22, x8, [x24, #0x38]
00b0d0dc:  cmp      x22, x8
00b0d0e0:  b.hs     #0xb0d09c
00b0d0e4:  cbz      x22, #0xb0d96c
00b0d0e8:  mov      x0, x22
00b0d0ec:  mov      x1, x19
00b0d0f0:  bl       #0x88cec4
00b0d0f4:  add      x0, x22, #0x30
00b0d0f8:  b        #0xb0d0a8
00b0d0fc:  ldr      x19, [sp, #0x288]
00b0d100:  ldr      x20, [sp, #0x290]
00b0d104:  ldr      x8, [sp, #0x68]
00b0d108:  cmp      x19, x20
00b0d10c:  b.eq     #0xb0d164
00b0d110:  ldr      x21, [x8, #0x60]
00b0d114:  ldr      x8, [x8, #0x68]
00b0d118:  cmp      x21, x8
00b0d11c:  b.hs     #0xb0d14c
00b0d120:  cbz      x21, #0xb0d96c
00b0d124:  mov      x0, x21
00b0d128:  mov      x1, x19
00b0d12c:  bl       #0x88d2d8
00b0d130:  add      x21, x21, #0x90
00b0d134:  add      x19, x19, #0x90
00b0d138:  ldr      x8, [sp, #0x68]
00b0d13c:  cmp      x19, x20
00b0d140:  str      x21, [x8, #0x60]
00b0d144:  b.ne     #0xb0d114
00b0d148:  b        #0xb0d164
00b0d14c:  ldr      x8, [sp, #0x68]
00b0d150:  mov      x1, x19
00b0d154:  add      x0, x8, #0x58
00b0d158:  bl       #0xb16610
00b0d15c:  mov      x21, x0
00b0d160:  b        #0xb0d134
00b0d164:  ldp      x19, x26, [x8, #0x110]
00b0d168:  subs     x22, x26, x19
00b0d16c:  b.eq     #0xb0d284
00b0d170:  mov      x9, #0xda13
00b0d174:  asr      x8, x22, #3
00b0d178:  movk     x9, #0x684b, lsl #16
00b0d17c:  movk     x9, #0xa12f, lsl #32
00b0d180:  movk     x9, #0x84bd, lsl #48
00b0d184:  mul      x8, x8, x9
00b0d188:  mov      x9, #0xf685
00b0d18c:  movk     x9, #0xda12, lsl #16
00b0d190:  movk     x9, #0x684b, lsl #32
00b0d194:  movk     x9, #0x12f, lsl #48
00b0d198:  cmp      x8, x9
00b0d19c:  b.hs     #0xb0ddb4
00b0d1a0:  mov      x0, x22
00b0d1a4:  bl       #0xd13d90
00b0d1a8:  mov      w8, #0xd8
00b0d1ac:  mov      x21, x0
00b0d1b0:  mov      x28, xzr
00b0d1b4:  add      x23, x0, x22
00b0d1b8:  sub      x25, x8, x0
00b0d1bc:  mov      w8, #1
00b0d1c0:  mov      x27, #-1
00b0d1c4:  adds     x0, x21, x28
00b0d1c8:  b.eq     #0xb0d96c
00b0d1cc:  mov      x1, x19
00b0d1d0:  mov      w24, w8
00b0d1d4:  bl       #0x890830
00b0d1d8:  add      x19, x19, #0xd8
00b0d1dc:  add      w8, w24, #1
00b0d1e0:  sub      x25, x25, #0xd8
00b0d1e4:  cmp      x19, x26
00b0d1e8:  add      x27, x27, #1
00b0d1ec:  add      x28, x28, #0xd8
00b0d1f0:  b.ne     #0xb0d1c4
00b0d1f4:  movi     v0.16b, #0xaa
00b0d1f8:  add      x26, x21, x28
00b0d1fc:  str      q0, [sp, #0x580]
00b0d200:  str      q0, [sp, #0x570]
00b0d204:  str      q0, [sp, #0x560]
00b0d208:  str      q0, [sp, #0x550]
00b0d20c:  str      q0, [sp, #0x540]
00b0d210:  str      q0, [sp, #0x530]
00b0d214:  str      q0, [sp, #0x520]
00b0d218:  str      q0, [sp, #0x510]
00b0d21c:  str      q0, [sp, #0x500]
00b0d220:  str      q0, [sp, #0x4f0]
00b0d224:  str      q0, [sp, #0x4e0]
00b0d228:  str      q0, [sp, #0x4d0]
00b0d22c:  str      q0, [sp, #0x4c0]
00b0d230:  str      q0, [sp, #0x4b0]
00b0d234:  cbz      x28, #0xb0d278
00b0d238:  mvn      w8, w27
00b0d23c:  sub      x19, x26, #0xd8
00b0d240:  mov      x22, x21
00b0d244:  tst      x8, #3
00b0d248:  b.eq     #0xb0d26c
00b0d24c:  and      x8, x24, #3
00b0d250:  mov      x22, x21
00b0d254:  ldr      w9, [x22, #0xc]
00b0d258:  cmn      w9, #1
00b0d25c:  b.eq     #0xb0d980
00b0d260:  subs     x8, x8, #1
00b0d264:  add      x22, x22, #0xd8
00b0d268:  b.ne     #0xb0d254
00b0d26c:  and      x8, x27, #0x1fffffffffffffff
00b0d270:  cmp      x8, #3
00b0d274:  b.hs     #0xb0d920
00b0d278:  mov      x22, x26
00b0d27c:  add      x28, sp, #0x1a0
00b0d280:  b        #0xb0d28c
00b0d284:  mov      x23, xzr
00b0d288:  mov      x21, xzr
00b0d28c:  ldr      x24, [sp, #0x38]
00b0d290:  ldr      x26, [sp, #0x48]
00b0d294:  cbz      x21, #0xb0d2d4
00b0d298:  cmp      x21, x22
00b0d29c:  b.eq     #0xb0d2c8
00b0d2a0:  sub      x19, x22, #0xd8
00b0d2a4:  cbz      x19, #0xb0db0c
00b0d2a8:  mov      x20, x19
00b0d2ac:  mov      x0, x19
00b0d2b0:  ldr      x8, [x20], #0xffffffffffffff28
00b0d2b4:  ldr      x8, [x8]
00b0d2b8:  blr      x8
00b0d2bc:  cmp      x19, x21
00b0d2c0:  mov      x19, x20
00b0d2c4:  b.ne     #0xb0d2a4
00b0d2c8:  sub      x1, x23, x21
00b0d2cc:  mov      x0, x21
00b0d2d0:  bl       #0x546bc0
00b0d2d4:  ldr      x8, [sp, #0x68]
00b0d2d8:  ldr      w23, [sp, #0x2c]
00b0d2dc:  ldp      x19, x20, [x8, #0x110]
00b0d2e0:  cmp      x19, x20
00b0d2e4:  b.eq     #0xb0d31c
00b0d2e8:  add      x0, sp, #0x4b0
00b0d2ec:  mov      x1, x19
00b0d2f0:  bl       #0x890830
00b0d2f4:  ldrb     w8, [sp, #0x4d7]
00b0d2f8:  ldr      x9, [sp, #0x4c8]
00b0d2fc:  add      x0, sp, #0x4b0
00b0d300:  tst      w8, #0x80
00b0d304:  csel     x21, x9, x8, ne
00b0d308:  bl       #0x890cb8
00b0d30c:  cbz      x21, #0xb0d4e4
00b0d310:  add      x19, x19, #0xd8
00b0d314:  cmp      x19, x20
00b0d318:  b.ne     #0xb0d2e8
00b0d31c:  ldr      w8, [sp, #0x44]
00b0d320:  cbnz     w8, #0xb0d3d0
00b0d324:  adrp     x1, #0xd52000
00b0d328:  add      x0, sp, #0x4b0
00b0d32c:  ldr      x1, [x1, #0x128]
00b0d330:  bl       #0x5d3510
00b0d334:  ldrb     w8, [sp, #0x257]
00b0d338:  ldr      x10, [sp, #0x240]
00b0d33c:  add      x0, sp, #0x4b0
00b0d340:  ldr      x11, [sp, #0x248]
00b0d344:  ldr      x19, [sp, #0x68]
00b0d348:  sxtb     w9, w8
00b0d34c:  mov      x3, x19
00b0d350:  cmp      w9, #0
00b0d354:  add      x9, sp, #0x240
00b0d358:  csel     x1, x10, x9, mi
00b0d35c:  csel     x2, x11, x8, mi
00b0d360:  bl       #0xb14088
00b0d364:  ldrsb    w8, [sp, #0x4c7]
00b0d368:  tbz      w8, #0x1f, #0xb0d37c
00b0d36c:  ldr      x8, [sp, #0x4c0]
00b0d370:  ldr      x0, [sp, #0x4b0]
00b0d374:  and      x1, x8, #0x7fffffffffffffff
00b0d378:  bl       #0x546bc0
00b0d37c:  adrp     x1, #0xd52000
00b0d380:  add      x0, sp, #0x4b0
00b0d384:  ldr      x1, [x1, #0x120]
00b0d388:  bl       #0x5d3510
00b0d38c:  ldrb     w8, [sp, #0x23f]
00b0d390:  ldr      x10, [sp, #0x228]
00b0d394:  add      x0, sp, #0x4b0
00b0d398:  ldr      x11, [sp, #0x230]
00b0d39c:  mov      x3, x19
00b0d3a0:  sxtb     w9, w8
00b0d3a4:  cmp      w9, #0
00b0d3a8:  add      x9, sp, #0x228
00b0d3ac:  csel     x1, x10, x9, mi
00b0d3b0:  csel     x2, x11, x8, mi
00b0d3b4:  bl       #0xb14088
00b0d3b8:  ldrsb    w8, [sp, #0x4c7]
00b0d3bc:  tbz      w8, #0x1f, #0xb0d3d0
00b0d3c0:  ldr      x8, [sp, #0x4c0]
00b0d3c4:  ldr      x0, [sp, #0x4b0]
00b0d3c8:  and      x1, x8, #0x7fffffffffffffff
00b0d3cc:  bl       #0x546bc0
00b0d3d0:  ldr      x19, [sp, #0x2b8]
00b0d3d4:  ldr      x21, [sp, #0x2c0]
00b0d3d8:  cmp      x19, x21
00b0d3dc:  b.eq     #0xb0d4cc
00b0d3e0:  add      x22, sp, #0x2a0
00b0d3e4:  b        #0xb0d400
00b0d3e8:  mov      x0, x20
00b0d3ec:  mov      w1, #0x1b8
00b0d3f0:  bl       #0x546bc0
00b0d3f4:  add      x19, x19, #0x198
00b0d3f8:  cmp      x19, x21
00b0d3fc:  b.eq     #0xb0d4cc
00b0d400:  ldrsb    x2, [x26, #0x2f]
00b0d404:  tbnz     x2, #0x3f, #0xb0d410
00b0d408:  add      x1, x26, #0x18
00b0d40c:  b        #0xb0d414
00b0d410:  ldp      x1, x2, [x26, #0x18]
00b0d414:  add      x0, x19, #0xa0
00b0d418:  bl       #0xb008fc
00b0d41c:  ldrsb    x2, [x26, #0x47]
00b0d420:  tbnz     x2, #0x3f, #0xb0d42c
00b0d424:  add      x1, x26, #0x30
00b0d428:  b        #0xb0d430
00b0d42c:  ldp      x1, x2, [x26, #0x30]
00b0d430:  add      x0, x19, #0xb8
00b0d434:  bl       #0xb008fc
00b0d438:  mov      w0, #0x1b8
00b0d43c:  bl       #0xd13d90
00b0d440:  ldrb     w8, [sp, #0x2b7]
00b0d444:  ldr      x10, [sp, #0x2a0]
00b0d448:  mov      w3, w23
00b0d44c:  ldr      x11, [sp, #0x2a8]
00b0d450:  mov      x4, x19
00b0d454:  mov      x20, x0
00b0d458:  sxtb     w9, w8
00b0d45c:  cmp      w9, #0
00b0d460:  csel     x1, x10, x22, mi
00b0d464:  csel     x2, x11, x8, mi
00b0d468:  bl       #0xafd3f8
00b0d46c:  ldp      x0, x8, [x24, #8]
00b0d470:  str      x20, [sp, #0x4b0]
00b0d474:  cmp      x0, x8
00b0d478:  b.hs     #0xb0d4bc
00b0d47c:  cbz      x0, #0xb0d96c
00b0d480:  str      xzr, [sp, #0x4b0]
00b0d484:  str      x20, [x0], #8
00b0d488:  ldr      x20, [sp, #0x4b0]
00b0d48c:  str      x0, [x24, #8]
00b0d490:  str      xzr, [sp, #0x4b0]
00b0d494:  cbz      x20, #0xb0d3f4
00b0d498:  add      x0, x20, #0x20
00b0d49c:  bl       #0xaff0f8
00b0d4a0:  ldrsb    w8, [x20, #0x17]
00b0d4a4:  tbz      w8, #0x1f, #0xb0d3e8
00b0d4a8:  ldr      x8, [x20, #0x10]
00b0d4ac:  ldr      x0, [x20]
00b0d4b0:  and      x1, x8, #0x7fffffffffffffff
00b0d4b4:  bl       #0x546bc0
00b0d4b8:  b        #0xb0d3e8
00b0d4bc:  add      x1, sp, #0x4b0
00b0d4c0:  mov      x0, x24
00b0d4c4:  bl       #0xafadd4
00b0d4c8:  b        #0xb0d488
00b0d4cc:  mov      w19, #1
00b0d4d0:  ldr      x21, [sp, #0x88]
00b0d4d4:  cbnz     x21, #0xb0d568
00b0d4d8:  ldr      x21, [sp, #0x158]
00b0d4dc:  cbnz     x21, #0xb0d5ac
00b0d4e0:  b        #0xb0d5e8
00b0d4e4:  adrp     x1, #0x1be000
00b0d4e8:  add      x1, x1, #0x390
00b0d4ec:  add      x0, sp, #0x70
00b0d4f0:  bl       #0x5d3510
00b0d4f4:  ldr      x8, [sp, #0x70]
00b0d4f8:  ldur     q0, [sp, #0x78]
00b0d4fc:  adrp     x0, #0x1b3000
00b0d500:  add      x0, x0, #0x348
00b0d504:  ldr      x4, [sp, #0x20]
00b0d508:  add      x3, sp, #0x4b0
00b0d50c:  str      x8, [sp, #0x4b0]
00b0d510:  add      x8, sp, #0x4b0
00b0d514:  mov      x1, xzr
00b0d518:  mov      x2, xzr
00b0d51c:  stp      xzr, xzr, [sp, #0x78]
00b0d520:  str      xzr, [sp, #0x70]
00b0d524:  stur     q0, [x8, #8]
00b0d528:  bl       #0xb09348
00b0d52c:  ldrsb    w8, [sp, #0x4c7]
00b0d530:  tbz      w8, #0x1f, #0xb0d544
00b0d534:  ldr      x8, [sp, #0x4c0]
00b0d538:  ldr      x0, [sp, #0x4b0]
00b0d53c:  and      x1, x8, #0x7fffffffffffffff
00b0d540:  bl       #0x546bc0
00b0d544:  ldrsb    w8, [sp, #0x87]
00b0d548:  tbz      w8, #0x1f, #0xb0d55c
00b0d54c:  ldr      x8, [sp, #0x80]
00b0d550:  ldr      x0, [sp, #0x70]
00b0d554:  and      x1, x8, #0x7fffffffffffffff
00b0d558:  bl       #0x546bc0
00b0d55c:  mov      w19, wzr
00b0d560:  ldr      x21, [sp, #0x88]
00b0d564:  cbz      x21, #0xb0d4d8
00b0d568:  ldr      x20, [sp, #0x90]
00b0d56c:  mov      x0, x21
00b0d570:  cmp      x21, x20
00b0d574:  b.eq     #0xb0d594
00b0d578:  subs     x20, x20, #0x50
00b0d57c:  b.eq     #0xb0db0c
00b0d580:  mov      x0, x20
00b0d584:  bl       #0x88fb24
00b0d588:  cmp      x20, x21
00b0d58c:  b.ne     #0xb0d578
00b0d590:  ldr      x0, [sp, #0x88]
00b0d594:  ldr      x8, [sp, #0x98]
00b0d598:  str      x21, [sp, #0x90]
00b0d59c:  sub      x1, x8, x0
00b0d5a0:  bl       #0x546bc0
00b0d5a4:  ldr      x21, [sp, #0x158]
00b0d5a8:  cbz      x21, #0xb0d5e8
00b0d5ac:  ldr      x20, [sp, #0x160]
00b0d5b0:  mov      x0, x21
00b0d5b4:  cmp      x21, x20
00b0d5b8:  b.eq     #0xb0d5d8
00b0d5bc:  subs     x20, x20, #0x50
00b0d5c0:  b.eq     #0xb0db0c
00b0d5c4:  mov      x0, x20
00b0d5c8:  bl       #0x88fb24
00b0d5cc:  cmp      x20, x21
00b0d5d0:  b.ne     #0xb0d5bc
00b0d5d4:  ldr      x0, [sp, #0x158]
00b0d5d8:  ldr      x8, [sp, #0x168]
00b0d5dc:  str      x21, [sp, #0x160]
00b0d5e0:  sub      x1, x8, x0
00b0d5e4:  bl       #0x546bc0
00b0d5e8:  ldr      x1, [sp, #0x1b8]
00b0d5ec:  cbz      x1, #0xb0d608
00b0d5f0:  add      x0, x28, #0x18
00b0d5f4:  bl       #0xb0e588
00b0d5f8:  ldr      x0, [sp, #0x1b8]
00b0d5fc:  ldr      x8, [sp, #0x1c8]
00b0d600:  sub      x1, x8, x0
00b0d604:  bl       #0x546bc0
00b0d608:  ldr      x1, [sp, #0x1a0]
00b0d60c:  cbz      x1, #0xb0d628
00b0d610:  add      x0, sp, #0x1a0
00b0d614:  bl       #0xb0e588
00b0d618:  ldr      x0, [sp, #0x1a0]
00b0d61c:  ldr      x8, [sp, #0x1b0]
00b0d620:  sub      x1, x8, x0
00b0d624:  bl       #0x546bc0
00b0d628:  ldr      x21, [sp, #0x1d0]
00b0d62c:  cbz      x21, #0xb0d66c
00b0d630:  ldr      x20, [sp, #0x1d8]
00b0d634:  mov      x0, x21
00b0d638:  cmp      x21, x20
00b0d63c:  b.eq     #0xb0d65c
00b0d640:  subs     x20, x20, #0x50
00b0d644:  b.eq     #0xb0db0c
00b0d648:  mov      x0, x20
00b0d64c:  bl       #0x88fb24
00b0d650:  cmp      x20, x21
00b0d654:  b.ne     #0xb0d640
00b0d658:  ldr      x0, [sp, #0x1d0]
00b0d65c:  ldr      x8, [sp, #0x1e0]
00b0d660:  str      x21, [sp, #0x1d8]
00b0d664:  sub      x1, x8, x0
00b0d668:  bl       #0x546bc0
00b0d66c:  ldrsb    w8, [sp, #0x207]
00b0d670:  tbnz     w8, #0x1f, #0xb0d7d0
00b0d674:  ldr      x20, [sp, #0x210]
00b0d678:  cbz      x20, #0xb0d7e8
00b0d67c:  ldr      x8, [sp, #0x218]
00b0d680:  mov      x0, x20
00b0d684:  cmp      x20, x8
00b0d688:  b.ne     #0xb0d69c
00b0d68c:  b        #0xb0d6c4
00b0d690:  cmp      x21, x20
00b0d694:  mov      x8, x21
00b0d698:  b.eq     #0xb0d6c0
00b0d69c:  subs     x21, x8, #0x18
00b0d6a0:  b.eq     #0xb0db0c
00b0d6a4:  ldursb   w9, [x8, #-1]
00b0d6a8:  tbz      w9, #0x1f, #0xb0d690
00b0d6ac:  ldur     x0, [x8, #-0x18]
00b0d6b0:  ldur     x8, [x8, #-8]
00b0d6b4:  and      x1, x8, #0x7fffffffffffffff
00b0d6b8:  bl       #0x546bc0
00b0d6bc:  b        #0xb0d690
00b0d6c0:  ldr      x0, [sp, #0x210]
00b0d6c4:  ldr      x8, [sp, #0x220]
00b0d6c8:  str      x20, [sp, #0x218]
00b0d6cc:  sub      x1, x8, x0
00b0d6d0:  bl       #0x546bc0
00b0d6d4:  ldrsb    w8, [sp, #0x23f]
00b0d6d8:  tbz      w8, #0x1f, #0xb0d7f0
00b0d6dc:  ldr      x8, [sp, #0x238]
00b0d6e0:  ldr      x0, [sp, #0x228]
00b0d6e4:  and      x1, x8, #0x7fffffffffffffff
00b0d6e8:  bl       #0x546bc0
00b0d6ec:  ldrsb    w8, [sp, #0x257]
00b0d6f0:  tbz      w8, #0x1f, #0xb0d7f8
00b0d6f4:  ldr      x8, [sp, #0x250]
00b0d6f8:  ldr      x0, [sp, #0x240]
00b0d6fc:  and      x1, x8, #0x7fffffffffffffff
00b0d700:  bl       #0x546bc0
00b0d704:  ldr      x21, [sp, #0x258]
00b0d708:  cbnz     x21, #0xb0d800
00b0d70c:  ldr      x20, [sp, #0x270]
00b0d710:  cbz      x20, #0xb0d844
00b0d714:  ldr      x8, [sp, #0x278]
00b0d718:  mov      x0, x20
00b0d71c:  cmp      x20, x8
00b0d720:  b.eq     #0xb0d7a4
00b0d724:  sub      x21, x8, #0x20
00b0d728:  b        #0xb0d750
00b0d72c:  ldr      x8, [x21]
00b0d730:  ldur     x0, [x21, #-0x10]
00b0d734:  and      x1, x8, #0x7fffffffffffffff
00b0d738:  bl       #0x546bc0
00b0d73c:  ldursb   w8, [x21, #-0x11]
00b0d740:  tbnz     w8, #0x1f, #0xb0d78c
00b0d744:  cmp      x22, x20
00b0d748:  sub      x21, x21, #0x50
00b0d74c:  b.eq     #0xb0d7a0
00b0d750:  subs     x22, x21, #0x30
00b0d754:  b.eq     #0xb0db0c
00b0d758:  ldrsb    w8, [x21, #0x1f]
00b0d75c:  tbnz     w8, #0x1f, #0xb0d76c
00b0d760:  ldrsb    w8, [x21, #7]
00b0d764:  tbz      w8, #0x1f, #0xb0d784
00b0d768:  b        #0xb0d72c
00b0d76c:  ldr      x8, [x21, #0x18]
00b0d770:  ldr      x0, [x21, #8]
00b0d774:  and      x1, x8, #0x7fffffffffffffff
00b0d778:  bl       #0x546bc0
00b0d77c:  ldrsb    w8, [x21, #7]
00b0d780:  tbnz     w8, #0x1f, #0xb0d72c
00b0d784:  ldursb   w8, [x21, #-0x11]
00b0d788:  tbz      w8, #0x1f, #0xb0d744
00b0d78c:  ldur     x8, [x21, #-0x18]
00b0d790:  ldur     x0, [x21, #-0x28]
00b0d794:  and      x1, x8, #0x7fffffffffffffff
00b0d798:  bl       #0x546bc0
00b0d79c:  b        #0xb0d744
00b0d7a0:  ldr      x0, [sp, #0x270]
00b0d7a4:  ldr      x8, [sp, #0x280]
00b0d7a8:  str      x20, [sp, #0x278]
00b0d7ac:  sub      x1, x8, x0
00b0d7b0:  bl       #0x546bc0
00b0d7b4:  ldr      x21, [sp, #0x288]
00b0d7b8:  cbnz     x21, #0xb0d84c
00b0d7bc:  ldrsb    w8, [sp, #0x2b7]
00b0d7c0:  tbnz     w8, #0x1f, #0xb0d890
00b0d7c4:  ldr      x21, [sp, #0x2b8]
00b0d7c8:  cbnz     x21, #0xb0d8a8
00b0d7cc:  b        #0xb0d8e4
00b0d7d0:  ldr      x8, [sp, #0x200]
00b0d7d4:  ldr      x0, [sp, #0x1f0]
00b0d7d8:  and      x1, x8, #0x7fffffffffffffff
00b0d7dc:  bl       #0x546bc0
00b0d7e0:  ldr      x20, [sp, #0x210]
00b0d7e4:  cbnz     x20, #0xb0d67c
00b0d7e8:  ldrsb    w8, [sp, #0x23f]
00b0d7ec:  tbnz     w8, #0x1f, #0xb0d6dc
00b0d7f0:  ldrsb    w8, [sp, #0x257]
00b0d7f4:  tbnz     w8, #0x1f, #0xb0d6f4
00b0d7f8:  ldr      x21, [sp, #0x258]
00b0d7fc:  cbz      x21, #0xb0d70c
00b0d800:  ldr      x20, [sp, #0x260]
00b0d804:  mov      x0, x21
00b0d808:  cmp      x21, x20
00b0d80c:  b.eq     #0xb0d82c
00b0d810:  subs     x20, x20, #0x30
00b0d814:  b.eq     #0xb0db0c
00b0d818:  mov      x0, x20
00b0d81c:  bl       #0x88cfa4
00b0d820:  cmp      x20, x21
00b0d824:  b.ne     #0xb0d810
00b0d828:  ldr      x0, [sp, #0x258]
00b0d82c:  ldr      x8, [sp, #0x268]
00b0d830:  str      x21, [sp, #0x260]
00b0d834:  sub      x1, x8, x0
00b0d838:  bl       #0x546bc0
00b0d83c:  ldr      x20, [sp, #0x270]
00b0d840:  cbnz     x20, #0xb0d714
00b0d844:  ldr      x21, [sp, #0x288]
00b0d848:  cbz      x21, #0xb0d7bc
00b0d84c:  ldr      x20, [sp, #0x290]
00b0d850:  mov      x0, x21
00b0d854:  cmp      x21, x20
00b0d858:  b.eq     #0xb0d878
00b0d85c:  subs     x20, x20, #0x90
00b0d860:  b.eq     #0xb0db0c
00b0d864:  mov      x0, x20
00b0d868:  bl       #0x88d578
00b0d86c:  cmp      x20, x21
00b0d870:  b.ne     #0xb0d85c
00b0d874:  ldr      x0, [sp, #0x288]
00b0d878:  ldr      x8, [sp, #0x298]
00b0d87c:  str      x21, [sp, #0x290]
00b0d880:  sub      x1, x8, x0
00b0d884:  bl       #0x546bc0
00b0d888:  ldrsb    w8, [sp, #0x2b7]
00b0d88c:  tbz      w8, #0x1f, #0xb0d7c4
00b0d890:  ldr      x8, [sp, #0x2b0]
00b0d894:  ldr      x0, [sp, #0x2a0]
00b0d898:  and      x1, x8, #0x7fffffffffffffff
00b0d89c:  bl       #0x546bc0
00b0d8a0:  ldr      x21, [sp, #0x2b8]
00b0d8a4:  cbz      x21, #0xb0d8e4
00b0d8a8:  ldr      x20, [sp, #0x2c0]
00b0d8ac:  mov      x0, x21
00b0d8b0:  cmp      x21, x20
00b0d8b4:  b.eq     #0xb0d8d4
00b0d8b8:  subs     x20, x20, #0x198
00b0d8bc:  b.eq     #0xb0db0c
00b0d8c0:  mov      x0, x20
00b0d8c4:  bl       #0xaff0f8
00b0d8c8:  cmp      x20, x21
00b0d8cc:  b.ne     #0xb0d8b8
00b0d8d0:  ldr      x0, [sp, #0x2b8]
00b0d8d4:  ldr      x8, [sp, #0x2c8]
00b0d8d8:  str      x21, [sp, #0x2c0]
00b0d8dc:  sub      x1, x8, x0
00b0d8e0:  bl       #0x546bc0
00b0d8e4:  ldr      x8, [sp, #0x50]
00b0d8e8:  ldr      x8, [x8, #0x28]
00b0d8ec:  ldur     x9, [x29, #-0x18]
00b0d8f0:  cmp      x8, x9
00b0d8f4:  b.ne     #0xb0ddb0
00b0d8f8:  mov      w0, w19
00b0d8fc:  add      sp, sp, #0x690
00b0d900:  ldp      x20, x19, [sp, #0x50]
00b0d904:  ldp      x22, x21, [sp, #0x40]
00b0d908:  ldp      x24, x23, [sp, #0x30]
00b0d90c:  ldp      x26, x25, [sp, #0x20]
00b0d910:  ldp      x28, x27, [sp, #0x10]
00b0d914:  ldp      x29, x30, [sp], #0x60
00b0d918:  autiasp  
00b0d91c:  ret      
00b0d920:  add      x28, sp, #0x1a0
00b0d924:  ldr      w8, [x22, #0xc]
00b0d928:  cmn      w8, #1
00b0d92c:  b.eq     #0xb0d99c
00b0d930:  ldr      w8, [x22, #0xe4]
00b0d934:  cmn      w8, #1
00b0d938:  b.eq     #0xb0d988
00b0d93c:  ldr      w8, [x22, #0x1bc]
00b0d940:  cmn      w8, #1
00b0d944:  b.eq     #0xb0d990
00b0d948:  ldr      w8, [x22, #0x294]
00b0d94c:  cmn      w8, #1
00b0d950:  b.eq     #0xb0d998
00b0d954:  add      x8, x22, #0x288
00b0d958:  add      x22, x22, #0x360
00b0d95c:  cmp      x19, x8
00b0d960:  b.ne     #0xb0d924
00b0d964:  mov      x22, x26
00b0d968:  b        #0xb0d28c
00b0d96c:  adrp     x0, #0x1ae000
00b0d970:  add      x0, x0, #0xdf
00b0d974:  adrp     x1, #0x1e1000
00b0d978:  add      x1, x1, #0xef0
00b0d97c:  bl       #0xd13df0
00b0d980:  add      x28, sp, #0x1a0
00b0d984:  b        #0xb0d99c
00b0d988:  add      x22, x22, #0xd8
00b0d98c:  b        #0xb0d99c
00b0d990:  add      x22, x22, #0x1b0
00b0d994:  b        #0xb0d99c
00b0d998:  add      x22, x22, #0x288
00b0d99c:  movi     v0.16b, #0xaa
00b0d9a0:  add      x0, sp, #0x310
00b0d9a4:  mov      x1, x22
00b0d9a8:  stp      q0, q0, [sp, #0x320]
00b0d9ac:  stp      q0, q0, [sp, #0x340]
00b0d9b0:  stp      q0, q0, [sp, #0x360]
00b0d9b4:  stp      q0, q0, [sp, #0x380]
00b0d9b8:  stp      q0, q0, [sp, #0x3a0]
00b0d9bc:  stp      q0, q0, [sp, #0x3c0]
00b0d9c0:  str      q0, [sp, #0x310]
00b0d9c4:  str      d0, [sp, #0x3e0]
00b0d9c8:  bl       #0x890830
00b0d9cc:  cmp      x26, x22
00b0d9d0:  b.eq     #0xb0dd2c
00b0d9d4:  ldr      x24, [sp, #0x38]
00b0d9d8:  ldr      x26, [sp, #0x48]
00b0d9dc:  cmp      x19, x22
00b0d9e0:  b.eq     #0xb0da0c
00b0d9e4:  add      x8, x22, x25
00b0d9e8:  neg      x20, x8
00b0d9ec:  add      x25, x22, #0xd8
00b0d9f0:  mov      x0, x22
00b0d9f4:  mov      x1, x25
00b0d9f8:  bl       #0x890f48
00b0d9fc:  subs     x20, x20, #0xd8
00b0da00:  mov      x22, x25
00b0da04:  b.ne     #0xb0d9ec
00b0da08:  mov      x22, x19
00b0da0c:  cbz      x19, #0xb0db0c
00b0da10:  mov      x20, x19
00b0da14:  mov      x0, x19
00b0da18:  ldr      x8, [x20], #0xffffffffffffff28
00b0da1c:  ldr      x8, [x8]
00b0da20:  blr      x8
00b0da24:  cmp      x19, x22
00b0da28:  mov      x19, x20
00b0da2c:  b.ne     #0xb0da0c
00b0da30:  add      x0, sp, #0x4b0
00b0da34:  add      x1, sp, #0x310
00b0da38:  bl       #0x890aa0
00b0da3c:  mov      w8, #1
00b0da40:  add      x0, sp, #0x310
00b0da44:  strb     w8, [sp, #0x588]
00b0da48:  bl       #0x890cb8
00b0da4c:  ldrb     w8, [sp, #0x588]
00b0da50:  cmp      w8, #1
00b0da54:  b.ne     #0xb0d294
00b0da58:  cmp      x21, x22
00b0da5c:  b.eq     #0xb0daa8
00b0da60:  mov      x19, x21
00b0da64:  ldrb     w8, [sp, #0x588]
00b0da68:  tbz      w8, #0, #0xb0dcf8
00b0da6c:  ldr      x25, [sp, #0x570]
00b0da70:  ldr      x20, [sp, #0x578]
00b0da74:  cmp      x25, x20
00b0da78:  b.eq     #0xb0da94
00b0da7c:  mov      x0, x19
00b0da80:  mov      x1, x25
00b0da84:  bl       #0x8918f8
00b0da88:  add      x25, x25, #0x30
00b0da8c:  cmp      x25, x20
00b0da90:  b.ne     #0xb0da7c
00b0da94:  add      x19, x19, #0xd8
00b0da98:  cmp      x19, x22
00b0da9c:  b.ne     #0xb0da64
00b0daa0:  ldrb     w8, [sp, #0x588]
00b0daa4:  tbz      w8, #0, #0xb0dcf8
00b0daa8:  adrp     x1, #0x1eb000
00b0daac:  add      x1, x1, #0xcd2
00b0dab0:  add      x0, sp, #0x2f0
00b0dab4:  bl       #0x5d3510
00b0dab8:  add      x8, sp, #0x310
00b0dabc:  adrp     x9, #0x198000
00b0dac0:  add      x9, x9, #0x9de
00b0dac4:  mov      w10, #3
00b0dac8:  cmp      x8, x9
00b0dacc:  strb     w10, [sp, #0x327]
00b0dad0:  b.hi     #0xb0dae0
00b0dad4:  orr      x10, x8, #3
00b0dad8:  cmp      x10, x9
00b0dadc:  b.hi     #0xb0dcbc
00b0dae0:  ldrsb    w9, [sp, #0x307]
00b0dae4:  mov      w10, #0x6361
00b0dae8:  add      x19, sp, #0x4b0
00b0daec:  movk     w10, #0x6b, lsl #16
00b0daf0:  str      w10, [sp, #0x310]
00b0daf4:  tbnz     w9, #0x1f, #0xb0db20
00b0daf8:  ldr      q0, [sp, #0x2f0]
00b0dafc:  ldr      x9, [sp, #0x300]
00b0db00:  stur     q0, [x8, #0x18]
00b0db04:  stur     x9, [x8, #0x28]
00b0db08:  b        #0xb0db30
00b0db0c:  adrp     x0, #0x1ae000
00b0db10:  add      x0, x0, #0xdf
00b0db14:  adrp     x1, #0x1ae000
00b0db18:  add      x1, x1, #0x16e
00b0db1c:  bl       #0xd13df0
00b0db20:  ldr      x1, [sp, #0x2f0]
00b0db24:  ldr      x2, [sp, #0x2f8]
00b0db28:  add      x0, x8, #0x18
00b0db2c:  bl       #0x5478d8
00b0db30:  add      x0, x19, #0xc0
00b0db34:  add      x1, sp, #0x310
00b0db38:  bl       #0x890188
00b0db3c:  ldrsb    w8, [sp, #0x33f]
00b0db40:  mov      w19, w0
00b0db44:  tbnz     w8, #0x1f, #0xb0dbb0
00b0db48:  ldrsb    w8, [sp, #0x327]
00b0db4c:  tbnz     w8, #0x1f, #0xb0dbc8
00b0db50:  ldrsb    w8, [sp, #0x307]
00b0db54:  tbnz     w8, #0x1f, #0xb0dbe0
00b0db58:  tbz      w19, #0, #0xb0db68
00b0db5c:  ldr      x9, [sp, #0x68]
00b0db60:  mov      w8, #1
00b0db64:  strb     w8, [x9, #0x23]
00b0db68:  mov      x9, #0xda13
00b0db6c:  sub      x8, x22, x21
00b0db70:  mov      x1, x21
00b0db74:  movk     x9, #0x684b, lsl #16
00b0db78:  asr      x8, x8, #3
00b0db7c:  mov      x2, x22
00b0db80:  movk     x9, #0xa12f, lsl #32
00b0db84:  movk     x9, #0x84bd, lsl #48
00b0db88:  mul      x3, x8, x9
00b0db8c:  ldr      x8, [sp, #0x68]
00b0db90:  add      x0, x8, #0x110
00b0db94:  bl       #0x88fd38
00b0db98:  ldrb     w8, [sp, #0x588]
00b0db9c:  cmp      w8, #1
00b0dba0:  b.ne     #0xb0d294
00b0dba4:  add      x0, sp, #0x4b0
00b0dba8:  bl       #0x890cb8
00b0dbac:  b        #0xb0d294
00b0dbb0:  ldr      x8, [sp, #0x338]
00b0dbb4:  ldr      x0, [sp, #0x328]
00b0dbb8:  and      x1, x8, #0x7fffffffffffffff
00b0dbbc:  bl       #0x546bc0
00b0dbc0:  ldrsb    w8, [sp, #0x327]
00b0dbc4:  tbz      w8, #0x1f, #0xb0db50
00b0dbc8:  ldr      x8, [sp, #0x320]
00b0dbcc:  ldr      x0, [sp, #0x310]
00b0dbd0:  and      x1, x8, #0x7fffffffffffffff
00b0dbd4:  bl       #0x546bc0
00b0dbd8:  ldrsb    w8, [sp, #0x307]
00b0dbdc:  tbz      w8, #0x1f, #0xb0db58
00b0dbe0:  ldr      x8, [sp, #0x300]
00b0dbe4:  ldr      x0, [sp, #0x2f0]
00b0dbe8:  and      x1, x8, #0x7fffffffffffffff
00b0dbec:  bl       #0x546bc0
00b0dbf0:  tbnz     w19, #0, #0xb0db5c
00b0dbf4:  b        #0xb0db68
00b0dbf8:  bl       #0x417e08
00b0dbfc:  tbnz     w0, #0, #0xb0d058
00b0dc00:  adrp     x0, #0x1f4000
00b0dc04:  add      x0, x0, #0xe98
00b0dc08:  adrp     x1, #0x1bb000
00b0dc0c:  add      x1, x1, #0x894
00b0dc10:  adrp     x3, #0x1cf000
00b0dc14:  add      x3, x3, #0x603
00b0dc18:  mov      w2, #0xfc1
00b0dc1c:  bl       #0x623bb0
00b0dc20:  b        #0xb0d058
00b0dc24:  adrp     x1, #0x1c9000
00b0dc28:  add      x1, x1, #0xcd5
00b0dc2c:  add      x0, sp, #0x310
00b0dc30:  mov      w2, #0x28
00b0dc34:  str      xzr, [sp, #0x318]
00b0dc38:  str      xzr, [sp, #0x310]
00b0dc3c:  str      xzr, [sp, #0x320]
00b0dc40:  bl       #0x547cac
00b0dc44:  adrp     x1, #0x254000
00b0dc48:  add      x1, x1, #0xc43
00b0dc4c:  add      x0, sp, #0x310
00b0dc50:  mov      w2, #3
00b0dc54:  bl       #0x547cac
00b0dc58:  add      x9, sp, #0x219
00b0dc5c:  ldr      x8, [sp, #0x310]
00b0dc60:  add      x3, sp, #0x4b0
00b0dc64:  ldur     q0, [x9, #0xff]
00b0dc68:  mov      x0, x22
00b0dc6c:  mov      x1, x21
00b0dc70:  mov      x2, xzr
00b0dc74:  mov      x4, x20
00b0dc78:  str      xzr, [sp, #0x310]
00b0dc7c:  str      xzr, [sp, #0x318]
00b0dc80:  str      xzr, [sp, #0x320]
00b0dc84:  str      x8, [sp, #0x4b0]
00b0dc88:  stur     q0, [x24, #8]
00b0dc8c:  bl       #0xb09348
00b0dc90:  ldrsb    w8, [sp, #0x4c7]
00b0dc94:  tbz      w8, #0x1f, #0xb0dca8
00b0dc98:  ldr      x8, [sp, #0x4c0]
00b0dc9c:  ldr      x0, [sp, #0x4b0]
00b0dca0:  and      x1, x8, #0x7fffffffffffffff
00b0dca4:  bl       #0x546bc0
00b0dca8:  ldrsb    w8, [sp, #0x327]
00b0dcac:  tbz      w8, #0x1f, #0xb0bed0
00b0dcb0:  ldr      x0, [sp, #0x310]
00b0dcb4:  ldr      x8, [sp, #0x320]
00b0dcb8:  b        #0xb0bec8
00b0dcbc:  adrp     x0, #0x1ae000
00b0dcc0:  add      x0, x0, #0xdf
00b0dcc4:  adrp     x1, #0x1ca000
00b0dcc8:  add      x1, x1, #0xbb7
00b0dccc:  bl       #0xd13df0
00b0dcd0:  adrp     x0, #0x1ae000
00b0dcd4:  add      x0, x0, #0xdf
00b0dcd8:  adrp     x1, #0x1ae000
00b0dcdc:  add      x1, x1, #0x203
00b0dce0:  bl       #0xd13df0
00b0dce4:  adrp     x0, #0x1ae000
00b0dce8:  add      x0, x0, #0xdf
00b0dcec:  adrp     x1, #0x1c2000
00b0dcf0:  add      x1, x1, #0x67a
00b0dcf4:  bl       #0xd13df0
00b0dcf8:  adrp     x0, #0x1ae000
00b0dcfc:  add      x0, x0, #0xdf
00b0dd00:  adrp     x1, #0x1bc000
00b0dd04:  add      x1, x1, #0xa29
00b0dd08:  bl       #0xd13df0
00b0dd0c:  add      x0, sp, #0x4b0
00b0dd10:  bl       #0xb08804
00b0dd14:  b        #0xb0bed0
00b0dd18:  adrp     x0, #0x1ae000
00b0dd1c:  add      x0, x0, #0xdf
00b0dd20:  adrp     x1, #0x1d0000
00b0dd24:  add      x1, x1, #0x941
00b0dd28:  bl       #0xd13df0
00b0dd2c:  adrp     x0, #0x1ae000
00b0dd30:  add      x0, x0, #0xdf
00b0dd34:  adrp     x1, #0x1a3000
00b0dd38:  add      x1, x1, #0x62d
00b0dd3c:  bl       #0xd13df0
00b0dd40:  add      x0, sp, #0x288
00b0dd44:  add      x1, sp, #0x4b0
00b0dd48:  bl       #0xb16610
00b0dd4c:  b        #0xb0d054
00b0dd50:  ldrb     w8, [sp, #0x300]
00b0dd54:  tbz      w8, #0, #0xb0df1c
00b0dd58:  mov      x21, x20
00b0dd5c:  ldr      x19, [sp, #0x2f0]
00b0dd60:  ldr      x20, [sp, #0x2f8]
00b0dd64:  adrp     x1, #0x1cc000
00b0dd68:  add      x1, x1, #0xa02
00b0dd6c:  add      x0, sp, #0x110
00b0dd70:  bl       #0x5d3510
00b0dd74:  add      x2, sp, #0x110
00b0dd78:  mov      x0, x19
00b0dd7c:  mov      x1, x20
00b0dd80:  mov      x3, x21
00b0dd84:  bl       #0xb08388
00b0dd88:  ldrsb    w8, [sp, #0x127]
00b0dd8c:  add      x28, sp, #0x1a0
00b0dd90:  tbz      w8, #0x1f, #0xb0bed0
00b0dd94:  ldr      x0, [sp, #0x110]
00b0dd98:  ldr      x8, [sp, #0x120]
00b0dd9c:  b        #0xb0bec8
00b0dda0:  add      x0, sp, #0x4b0
00b0dda4:  bl       #0x8824f4
00b0dda8:  b        #0xb0bed0
00b0ddac:  bl       #0x5d45ec
00b0ddb0:  bl       #0xd13da0
00b0ddb4:  bl       #0x88fd20
00b0ddb8:  bl       #0x5f5590
00b0ddbc:  add      x0, sp, #0x4b0
00b0ddc0:  bl       #0x668f8c
00b0ddc4:  b        #0xb0df14
00b0ddc8:  ldrsb    w8, [sp, #0x4c7]
00b0ddcc:  tbz      w8, #0x1f, #0xb0df14
00b0ddd0:  ldr      x8, [sp, #0x4c0]
00b0ddd4:  ldr      x0, [sp, #0x4b0]
00b0ddd8:  and      x1, x8, #0x7fffffffffffffff
00b0dddc:  bl       #0x546bc0
00b0dde0:  b        #0xb0df14
00b0dde4:  ldr      x20, [sp, #0x2f0]
00b0dde8:  adrp     x1, #0x1be000
00b0ddec:  add      x1, x1, #0x372
00b0ddf0:  add      x0, sp, #0xd8
00b0ddf4:  bl       #0x5d3510
00b0ddf8:  add      x2, sp, #0xd8
00b0ddfc:  mov      x0, x20
00b0de00:  mov      x1, x19
00b0de04:  mov      x3, x23
00b0de08:  bl       #0xb08388
00b0de0c:  ldrsb    w8, [sp, #0xef]
00b0de10:  add      x28, sp, #0x1a0
00b0de14:  tbz      w8, #0x1f, #0xb0bed0
00b0de18:  ldr      x0, [sp, #0xd8]
00b0de1c:  ldr      x8, [sp, #0xe8]
00b0de20:  b        #0xb0bec8
00b0de24:  ldrb     w8, [sp, #0x300]
00b0de28:  tbz      w8, #0, #0xb0df1c
00b0de2c:  ldr      x19, [sp, #0x2f0]
00b0de30:  ldr      x20, [sp, #0x2f8]
00b0de34:  adrp     x1, #0x1c1000
00b0de38:  add      x1, x1, #0x1e
00b0de3c:  add      x0, sp, #0xc0
00b0de40:  bl       #0x5d3510
00b0de44:  add      x2, sp, #0xc0
00b0de48:  mov      x0, x19
00b0de4c:  mov      x1, x20
00b0de50:  mov      x3, x23
00b0de54:  bl       #0xb08388
00b0de58:  ldrsb    w8, [sp, #0xd7]
00b0de5c:  add      x28, sp, #0x1a0
00b0de60:  tbz      w8, #0x1f, #0xb0bed0
00b0de64:  ldr      x0, [sp, #0xc0]
00b0de68:  ldr      x8, [sp, #0xd0]
00b0de6c:  b        #0xb0bec8
00b0de70:  adrp     x0, #0x1c8000
00b0de74:  add      x0, x0, #0x122
00b0de78:  bl       #0x5f55a8
00b0de7c:  ldrb     w8, [sp, #0x300]
00b0de80:  tbz      w8, #0, #0xb0df1c
00b0de84:  ldr      x19, [sp, #0x2f0]
00b0de88:  ldr      x20, [sp, #0x2f8]
00b0de8c:  adrp     x1, #0x1f0000
00b0de90:  add      x1, x1, #0xff5
00b0de94:  add      x0, sp, #0x310
00b0de98:  bl       #0x5d3510
00b0de9c:  add      x0, sp, #0x4b0
00b0dea0:  bl       #0x5ecd5c
00b0dea4:  mov      x1, x0
00b0dea8:  add      x0, sp, #0x310
00b0deac:  bl       #0x54830c
00b0deb0:  ldr      q0, [x0]
00b0deb4:  ldr      x8, [x0, #0x10]
00b0deb8:  add      x2, sp, #0xa0
00b0debc:  stp      xzr, xzr, [x0]
00b0dec0:  mov      x1, x20
00b0dec4:  mov      x3, x23
00b0dec8:  str      xzr, [x0, #0x10]
00b0decc:  mov      x0, x19
00b0ded0:  str      q0, [sp, #0xa0]
00b0ded4:  str      x8, [sp, #0xb0]
00b0ded8:  bl       #0xb08388
00b0dedc:  ldrsb    w8, [sp, #0xb7]
00b0dee0:  tbz      w8, #0x1f, #0xb0def4
00b0dee4:  ldr      x8, [sp, #0xb0]
00b0dee8:  ldr      x0, [sp, #0xa0]
00b0deec:  and      x1, x8, #0x7fffffffffffffff
00b0def0:  bl       #0x546bc0
00b0def4:  ldrsb    w8, [sp, #0x327]
00b0def8:  tbz      w8, #0x1f, #0xb0df0c
00b0defc:  ldr      x8, [sp, #0x320]
00b0df00:  ldr      x0, [sp, #0x310]
00b0df04:  and      x1, x8, #0x7fffffffffffffff
00b0df08:  bl       #0x546bc0
00b0df0c:  add      x0, sp, #0x4b0
00b0df10:  bl       #0xb14038
00b0df14:  add      x28, sp, #0x1a0
00b0df18:  b        #0xb0bed0
00b0df1c:  adrp     x0, #0x1ae000
00b0df20:  add      x0, x0, #0xdf
00b0df24:  adrp     x1, #0x1c5000
00b0df28:  add      x1, x1, #0x34f
00b0df2c:  bl       #0xd13df0

