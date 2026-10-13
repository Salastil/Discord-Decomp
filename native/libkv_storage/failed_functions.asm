; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 001cd0fc  discord::api::detail::materialize_operating_queries  (9024 bytes) =====
001cd0fc:  stp      x29, x30, [sp, #-0x60]!
001cd100:  stp      x28, x27, [sp, #0x10]
001cd104:  stp      x26, x25, [sp, #0x20]
001cd108:  stp      x24, x23, [sp, #0x30]
001cd10c:  stp      x22, x21, [sp, #0x40]
001cd110:  stp      x20, x19, [sp, #0x50]
001cd114:  mov      x29, sp
001cd118:  sub      sp, sp, #0x7e0
001cd11c:  mov      x19, x8
001cd120:  adrp     x8, #0x177000
001cd124:  add      x23, sp, #0x470
001cd128:  ldr      d0, [x8, #0xfe0]
001cd12c:  mov      w8, #0x1e
001cd130:  stp      xzr, xzr, [x19]
001cd134:  strb     w8, [sp, #0x498]
001cd138:  adrp     x8, #0x172000
001cd13c:  add      x8, x8, #0x974
001cd140:  ldr      x9, [x8]
001cd144:  ldur     x8, [x8, #7]
001cd148:  str      xzr, [x19, #0x10]
001cd14c:  str      d0, [sp, #0x488]
001cd150:  str      wzr, [sp, #0x490]
001cd154:  stur     x9, [x23, #0x29]
001cd158:  str      x8, [sp, #0x4a0]
001cd15c:  str      xzr, [sp, #0x4a8]
001cd160:  add      x1, sp, #0x488
001cd164:  mov      x0, x19
001cd168:  bl       #0x3000f0
001cd16c:  ldrb     w8, [sp, #0x498]
001cd170:  str      x0, [x19, #8]
001cd174:  tbz      w8, #0, #0x1cd180
001cd178:  ldr      x0, [sp, #0x4a8]
001cd17c:  bl       #0x2ff070
001cd180:  mov      w10, #0x6f63
001cd184:  adrp     x8, #0x177000
001cd188:  mov      w9, #0xc
001cd18c:  movk     w10, #0x6d6d, lsl #16
001cd190:  ldr      d0, [x8, #0xfb8]
001cd194:  strb     w9, [sp, #0x498]
001cd198:  stur     w10, [x23, #0x29]
001cd19c:  ldp      x8, x10, [x19, #8]
001cd1a0:  mov      w9, #0x7469
001cd1a4:  str      wzr, [sp, #0x490]
001cd1a8:  str      d0, [sp, #0x488]
001cd1ac:  cmp      x8, x10
001cd1b0:  sturh    w9, [x23, #0x2d]
001cd1b4:  stur     xzr, [x23, #0x37]
001cd1b8:  stur     xzr, [x23, #0x2f]
001cd1bc:  strb     wzr, [sp, #0x4af]
001cd1c0:  b.hs     #0x1cd1f4
001cd1c4:  ldr      w9, [sp, #0x490]
001cd1c8:  ldr      x10, [sp, #0x488]
001cd1cc:  str      w9, [x8, #8]
001cd1d0:  add      x9, sp, #0x488
001cd1d4:  str      x10, [x8]
001cd1d8:  ldur     x10, [x9, #0x20]
001cd1dc:  ldur     q0, [x9, #0x10]
001cd1e0:  add      x9, x8, #0x28
001cd1e4:  str      x10, [x8, #0x20]
001cd1e8:  str      q0, [x8, #0x10]
001cd1ec:  str      x9, [x19, #8]
001cd1f0:  b        #0x1cd214
001cd1f4:  add      x1, sp, #0x488
001cd1f8:  mov      x0, x19
001cd1fc:  bl       #0x3000f0
001cd200:  ldrb     w8, [sp, #0x498]
001cd204:  str      x0, [x19, #8]
001cd208:  tbz      w8, #0, #0x1cd214
001cd20c:  ldr      x0, [sp, #0x4a8]
001cd210:  bl       #0x2ff070
001cd214:  adrp     x8, #0x177000
001cd218:  mov      w9, #0x10
001cd21c:  mov      x10, #0x6f72
001cd220:  ldr      d0, [x8, #0xed8]
001cd224:  strb     w9, [sp, #0x498]
001cd228:  movk     x10, #0x6c6c, lsl #16
001cd22c:  ldp      x8, x9, [x19, #8]
001cd230:  movk     x10, #0x6162, lsl #32
001cd234:  movk     x10, #0x6b63, lsl #48
001cd238:  str      wzr, [sp, #0x490]
001cd23c:  stur     x10, [x23, #0x29]
001cd240:  cmp      x8, x9
001cd244:  str      d0, [sp, #0x488]
001cd248:  strb     wzr, [sp, #0x4a1]
001cd24c:  str      xzr, [sp, #0x4a8]
001cd250:  b.hs     #0x1cd284
001cd254:  ldr      w9, [sp, #0x490]
001cd258:  ldr      x10, [sp, #0x488]
001cd25c:  str      w9, [x8, #8]
001cd260:  add      x9, sp, #0x488
001cd264:  str      x10, [x8]
001cd268:  ldur     x10, [x9, #0x20]
001cd26c:  ldur     q0, [x9, #0x10]
001cd270:  add      x9, x8, #0x28
001cd274:  str      x10, [x8, #0x20]
001cd278:  str      q0, [x8, #0x10]
001cd27c:  str      x9, [x19, #8]
001cd280:  b        #0x1cd2a4
001cd284:  add      x1, sp, #0x488
001cd288:  mov      x0, x19
001cd28c:  bl       #0x3000f0
001cd290:  ldrb     w8, [sp, #0x498]
001cd294:  str      x0, [x19, #8]
001cd298:  tbz      w8, #0, #0x1cd2a4
001cd29c:  ldr      x0, [sp, #0x4a8]
001cd2a0:  bl       #0x2ff070
001cd2a4:  adrp     x8, #0x177000
001cd2a8:  mov      w9, #0x1e
001cd2ac:  adrp     x10, #0x16d000
001cd2b0:  add      x10, x10, #0xba1
001cd2b4:  ldr      d0, [x8, #0xeb8]
001cd2b8:  strb     w9, [sp, #0x498]
001cd2bc:  ldp      x8, x9, [x19, #8]
001cd2c0:  ldr      x11, [x10]
001cd2c4:  ldur     x10, [x10, #7]
001cd2c8:  str      wzr, [sp, #0x490]
001cd2cc:  str      d0, [sp, #0x488]
001cd2d0:  cmp      x8, x9
001cd2d4:  stur     x11, [x23, #0x29]
001cd2d8:  str      x10, [sp, #0x4a0]
001cd2dc:  str      xzr, [sp, #0x4a8]
001cd2e0:  b.hs     #0x1cd314
001cd2e4:  ldr      w9, [sp, #0x490]
001cd2e8:  ldr      x10, [sp, #0x488]
001cd2ec:  str      w9, [x8, #8]
001cd2f0:  add      x9, sp, #0x488
001cd2f4:  str      x10, [x8]
001cd2f8:  ldur     x10, [x9, #0x20]
001cd2fc:  ldur     q0, [x9, #0x10]
001cd300:  add      x9, x8, #0x28
001cd304:  str      x10, [x8, #0x20]
001cd308:  str      q0, [x8, #0x10]
001cd30c:  str      x9, [x19, #8]
001cd310:  b        #0x1cd334
001cd314:  add      x1, sp, #0x488
001cd318:  mov      x0, x19
001cd31c:  bl       #0x3000f0
001cd320:  ldrb     w8, [sp, #0x498]
001cd324:  str      x0, [x19, #8]
001cd328:  tbz      w8, #0, #0x1cd334
001cd32c:  ldr      x0, [sp, #0x4a8]
001cd330:  bl       #0x2ff070
001cd334:  mov      w0, #0x20
001cd338:  bl       #0x2ff050
001cd33c:  adrp     x8, #0x173000
001cd340:  add      x8, x8, #0x1b1
001cd344:  mov      w10, #0x1f
001cd348:  ldr      q0, [x8]
001cd34c:  ldur     q1, [x8, #0xf]
001cd350:  adrp     x8, #0x178000
001cd354:  strb     wzr, [x0, #0x1f]
001cd358:  str      q0, [x0]
001cd35c:  ldr      d0, [x8, #0x90]
001cd360:  mov      w8, #0x21
001cd364:  strb     w8, [sp, #0x498]
001cd368:  ldp      x8, x9, [x19, #8]
001cd36c:  stur     q1, [x0, #0xf]
001cd370:  str      d0, [sp, #0x488]
001cd374:  cmp      x8, x9
001cd378:  str      wzr, [sp, #0x490]
001cd37c:  strb     wzr, [sp, #0x49f]
001cd380:  sturh    wzr, [x23, #0x2d]
001cd384:  stur     wzr, [x23, #0x29]
001cd388:  str      x10, [sp, #0x4a0]
001cd38c:  str      x0, [sp, #0x4a8]
001cd390:  b.hs     #0x1cd3c4
001cd394:  ldr      w9, [sp, #0x490]
001cd398:  ldr      x10, [sp, #0x488]
001cd39c:  str      w9, [x8, #8]
001cd3a0:  add      x9, sp, #0x488
001cd3a4:  str      x10, [x8]
001cd3a8:  ldur     x10, [x9, #0x20]
001cd3ac:  ldur     q0, [x9, #0x10]
001cd3b0:  add      x9, x8, #0x28
001cd3b4:  str      x10, [x8, #0x20]
001cd3b8:  str      q0, [x8, #0x10]
001cd3bc:  str      x9, [x19, #8]
001cd3c0:  b        #0x1cd3e4
001cd3c4:  add      x1, sp, #0x488
001cd3c8:  mov      x0, x19
001cd3cc:  bl       #0x3000f0
001cd3d0:  ldrb     w8, [sp, #0x498]
001cd3d4:  str      x0, [x19, #8]
001cd3d8:  tbz      w8, #0, #0x1cd3e4
001cd3dc:  ldr      x0, [sp, #0x4a8]
001cd3e0:  bl       #0x2ff070
001cd3e4:  mov      w10, #0x6176
001cd3e8:  adrp     x8, #0x177000
001cd3ec:  mov      w9, #0xc
001cd3f0:  movk     w10, #0x7563, lsl #16
001cd3f4:  ldr      d0, [x8, #0xe88]
001cd3f8:  strb     w9, [sp, #0x498]
001cd3fc:  stur     w10, [x23, #0x29]
001cd400:  ldp      x8, x10, [x19, #8]
001cd404:  mov      w9, #0x6d75
001cd408:  str      wzr, [sp, #0x490]
001cd40c:  str      d0, [sp, #0x488]
001cd410:  cmp      x8, x10
001cd414:  sturh    w9, [x23, #0x2d]
001cd418:  stur     xzr, [x23, #0x37]
001cd41c:  stur     xzr, [x23, #0x2f]
001cd420:  strb     wzr, [sp, #0x4af]
001cd424:  b.hs     #0x1cd458
001cd428:  ldr      w9, [sp, #0x490]
001cd42c:  ldr      x10, [sp, #0x488]
001cd430:  str      w9, [x8, #8]
001cd434:  add      x9, sp, #0x488
001cd438:  str      x10, [x8]
001cd43c:  ldur     x10, [x9, #0x20]
001cd440:  ldur     q0, [x9, #0x10]
001cd444:  add      x9, x8, #0x28
001cd448:  str      x10, [x8, #0x20]
001cd44c:  str      q0, [x8, #0x10]
001cd450:  str      x9, [x19, #8]
001cd454:  b        #0x1cd478
001cd458:  add      x1, sp, #0x488
001cd45c:  mov      x0, x19
001cd460:  bl       #0x3000f0
001cd464:  ldrb     w8, [sp, #0x498]
001cd468:  str      x0, [x19, #8]
001cd46c:  tbz      w8, #0, #0x1cd478
001cd470:  ldr      x0, [sp, #0x4a8]
001cd474:  bl       #0x2ff070
001cd478:  mov      w0, #0x20
001cd47c:  bl       #0x2ff050
001cd480:  adrp     x8, #0x170000
001cd484:  add      x8, x8, #0xecd
001cd488:  mov      w10, #0x19
001cd48c:  ldr      q0, [x8]
001cd490:  ldur     q1, [x8, #9]
001cd494:  adrp     x8, #0x177000
001cd498:  strb     wzr, [x0, #0x19]
001cd49c:  str      q0, [x0]
001cd4a0:  ldr      d0, [x8, #0xf18]
001cd4a4:  mov      w8, #0x21
001cd4a8:  strb     w8, [sp, #0x498]
001cd4ac:  ldp      x8, x9, [x19, #8]
001cd4b0:  stur     q1, [x0, #9]
001cd4b4:  str      d0, [sp, #0x488]
001cd4b8:  cmp      x8, x9
001cd4bc:  str      wzr, [sp, #0x490]
001cd4c0:  strb     wzr, [sp, #0x49f]
001cd4c4:  sturh    wzr, [x23, #0x2d]
001cd4c8:  stur     wzr, [x23, #0x29]
001cd4cc:  str      x10, [sp, #0x4a0]
001cd4d0:  str      x0, [sp, #0x4a8]
001cd4d4:  b.hs     #0x1cd508
001cd4d8:  ldr      w9, [sp, #0x490]
001cd4dc:  ldr      x10, [sp, #0x488]
001cd4e0:  str      w9, [x8, #8]
001cd4e4:  add      x9, sp, #0x488
001cd4e8:  str      x10, [x8]
001cd4ec:  ldur     x10, [x9, #0x20]
001cd4f0:  ldur     q0, [x9, #0x10]
001cd4f4:  add      x9, x8, #0x28
001cd4f8:  str      x10, [x8, #0x20]
001cd4fc:  str      q0, [x8, #0x10]
001cd500:  str      x9, [x19, #8]
001cd504:  b        #0x1cd528
001cd508:  add      x1, sp, #0x488
001cd50c:  mov      x0, x19
001cd510:  bl       #0x3000f0
001cd514:  ldrb     w8, [sp, #0x498]
001cd518:  str      x0, [x19, #8]
001cd51c:  tbz      w8, #0, #0x1cd528
001cd520:  ldr      x0, [sp, #0x4a8]
001cd524:  bl       #0x2ff070
001cd528:  mov      w0, #0xe0
001cd52c:  bl       #0x2ff050
001cd530:  adrp     x9, #0x174000
001cd534:  add      x9, x9, #0xdb1
001cd538:  mov      w8, #0x20202020
001cd53c:  ldp      q0, q1, [x9, #0xa0]
001cd540:  ldr      q2, [x9, #0xc0]
001cd544:  str      w8, [x0, #0xd0]
001cd548:  adrp     x8, #0x178000
001cd54c:  mov      w10, #0xd4
001cd550:  str      q2, [x0, #0xc0]
001cd554:  stp      q0, q1, [x0, #0xa0]
001cd558:  ldp      q0, q1, [x9, #0x60]
001cd55c:  strb     wzr, [x0, #0xd4]
001cd560:  str      wzr, [sp, #0x490]
001cd564:  stp      q0, q1, [x0, #0x60]
001cd568:  ldp      q0, q2, [x9, #0x80]
001cd56c:  strb     wzr, [sp, #0x49f]
001cd570:  sturh    wzr, [x23, #0x2d]
001cd574:  stp      q0, q2, [x0, #0x80]
001cd578:  ldp      q1, q0, [x9, #0x20]
001cd57c:  stur     wzr, [x23, #0x29]
001cd580:  str      x10, [sp, #0x4a0]
001cd584:  stp      q1, q0, [x0, #0x20]
001cd588:  ldp      q0, q2, [x9, #0x40]
001cd58c:  str      x0, [sp, #0x4a8]
001cd590:  stp      q0, q2, [x0, #0x40]
001cd594:  ldp      q0, q1, [x9]
001cd598:  stp      q0, q1, [x0]
001cd59c:  ldr      d0, [x8, #0x58]
001cd5a0:  mov      w8, #0xe1
001cd5a4:  strb     w8, [sp, #0x498]
001cd5a8:  ldp      x8, x9, [x19, #8]
001cd5ac:  str      d0, [sp, #0x488]
001cd5b0:  cmp      x8, x9
001cd5b4:  b.hs     #0x1cd5e8
001cd5b8:  ldr      w9, [sp, #0x490]
001cd5bc:  ldr      x10, [sp, #0x488]
001cd5c0:  str      w9, [x8, #8]
001cd5c4:  add      x9, sp, #0x488
001cd5c8:  str      x10, [x8]
001cd5cc:  ldur     x10, [x9, #0x20]
001cd5d0:  ldur     q0, [x9, #0x10]
001cd5d4:  add      x9, x8, #0x28
001cd5d8:  str      x10, [x8, #0x20]
001cd5dc:  str      q0, [x8, #0x10]
001cd5e0:  str      x9, [x19, #8]
001cd5e4:  b        #0x1cd608
001cd5e8:  add      x1, sp, #0x488
001cd5ec:  mov      x0, x19
001cd5f0:  bl       #0x3000f0
001cd5f4:  ldrb     w8, [sp, #0x498]
001cd5f8:  str      x0, [x19, #8]
001cd5fc:  tbz      w8, #0, #0x1cd608
001cd600:  ldr      x0, [sp, #0x4a8]
001cd604:  bl       #0x2ff070
001cd608:  mov      w0, #0x30
001cd60c:  bl       #0x2ff050
001cd610:  adrp     x8, #0x16f000
001cd614:  add      x8, x8, #0x2f3
001cd618:  mov      w10, #0x2f
001cd61c:  ldp      q0, q1, [x8]
001cd620:  ldur     q2, [x8, #0x1f]
001cd624:  adrp     x8, #0x177000
001cd628:  strb     wzr, [x0, #0x2f]
001cd62c:  str      wzr, [sp, #0x490]
001cd630:  stp      q0, q1, [x0]
001cd634:  ldr      d0, [x8, #0xef8]
001cd638:  mov      w8, #0x31
001cd63c:  strb     w8, [sp, #0x498]
001cd640:  ldp      x8, x9, [x19, #8]
001cd644:  stur     q2, [x0, #0x1f]
001cd648:  str      d0, [sp, #0x488]
001cd64c:  cmp      x8, x9
001cd650:  strb     wzr, [sp, #0x49f]
001cd654:  sturh    wzr, [x23, #0x2d]
001cd658:  stur     wzr, [x23, #0x29]
001cd65c:  str      x10, [sp, #0x4a0]
001cd660:  str      x0, [sp, #0x4a8]
001cd664:  b.hs     #0x1cd698
001cd668:  ldr      w9, [sp, #0x490]
001cd66c:  ldr      x10, [sp, #0x488]
001cd670:  str      w9, [x8, #8]
001cd674:  add      x9, sp, #0x488
001cd678:  str      x10, [x8]
001cd67c:  ldur     x10, [x9, #0x20]
001cd680:  ldur     q0, [x9, #0x10]
001cd684:  add      x9, x8, #0x28
001cd688:  str      x10, [x8, #0x20]
001cd68c:  str      q0, [x8, #0x10]
001cd690:  str      x9, [x19, #8]
001cd694:  b        #0x1cd6b8
001cd698:  add      x1, sp, #0x488
001cd69c:  mov      x0, x19
001cd6a0:  bl       #0x3000f0
001cd6a4:  ldrb     w8, [sp, #0x498]
001cd6a8:  str      x0, [x19, #8]
001cd6ac:  tbz      w8, #0, #0x1cd6b8
001cd6b0:  ldr      x0, [sp, #0x4a8]
001cd6b4:  bl       #0x2ff070
001cd6b8:  mov      w0, #0x20
001cd6bc:  bl       #0x2ff050
001cd6c0:  adrp     x8, #0x175000
001cd6c4:  add      x8, x8, #0xf36
001cd6c8:  mov      w10, #0x1b
001cd6cc:  ldr      q0, [x8]
001cd6d0:  ldur     q1, [x8, #0xb]
001cd6d4:  adrp     x8, #0x177000
001cd6d8:  strb     wzr, [x0, #0x1b]
001cd6dc:  str      q0, [x0]
001cd6e0:  ldr      d0, [x8, #0xf90]
001cd6e4:  mov      w8, #0x21
001cd6e8:  strb     w8, [sp, #0x498]
001cd6ec:  ldp      x8, x9, [x19, #8]
001cd6f0:  stur     q1, [x0, #0xb]
001cd6f4:  str      d0, [sp, #0x488]
001cd6f8:  cmp      x8, x9
001cd6fc:  str      wzr, [sp, #0x490]
001cd700:  strb     wzr, [sp, #0x49f]
001cd704:  sturh    wzr, [x23, #0x2d]
001cd708:  stur     wzr, [x23, #0x29]
001cd70c:  str      x10, [sp, #0x4a0]
001cd710:  str      x0, [sp, #0x4a8]
001cd714:  b.hs     #0x1cd748
001cd718:  ldr      w9, [sp, #0x490]
001cd71c:  ldr      x10, [sp, #0x488]
001cd720:  str      w9, [x8, #8]
001cd724:  add      x9, sp, #0x488
001cd728:  str      x10, [x8]
001cd72c:  ldur     x10, [x9, #0x20]
001cd730:  ldur     q0, [x9, #0x10]
001cd734:  add      x9, x8, #0x28
001cd738:  str      x10, [x8, #0x20]
001cd73c:  str      q0, [x8, #0x10]
001cd740:  str      x9, [x19, #8]
001cd744:  b        #0x1cd768
001cd748:  add      x1, sp, #0x488
001cd74c:  mov      x0, x19
001cd750:  bl       #0x3000f0
001cd754:  ldrb     w8, [sp, #0x498]
001cd758:  str      x0, [x19, #8]
001cd75c:  tbz      w8, #0, #0x1cd768
001cd760:  ldr      x0, [sp, #0x4a8]
001cd764:  bl       #0x2ff070
001cd768:  mov      w0, #0x40
001cd76c:  bl       #0x2ff050
001cd770:  adrp     x8, #0x171000
001cd774:  add      x8, x8, #0x9e2
001cd778:  mov      w10, #0x3d
001cd77c:  ldp      q0, q1, [x8]
001cd780:  ldr      q2, [x8, #0x20]
001cd784:  strb     wzr, [x0, #0x3d]
001cd788:  str      q2, [x0, #0x20]
001cd78c:  stp      q0, q1, [x0]
001cd790:  ldur     q0, [x8, #0x2d]
001cd794:  adrp     x8, #0x178000
001cd798:  str      wzr, [sp, #0x490]
001cd79c:  stur     q0, [x0, #0x2d]
001cd7a0:  ldr      d0, [x8, #0x28]
001cd7a4:  mov      w8, #0x41
001cd7a8:  strb     w8, [sp, #0x498]
001cd7ac:  ldp      x8, x9, [x19, #8]
001cd7b0:  str      d0, [sp, #0x488]
001cd7b4:  strb     wzr, [sp, #0x49f]
001cd7b8:  cmp      x8, x9
001cd7bc:  sturh    wzr, [x23, #0x2d]
001cd7c0:  stur     wzr, [x23, #0x29]
001cd7c4:  str      x10, [sp, #0x4a0]
001cd7c8:  str      x0, [sp, #0x4a8]
001cd7cc:  b.hs     #0x1cd800
001cd7d0:  ldr      w9, [sp, #0x490]
001cd7d4:  ldr      x10, [sp, #0x488]
001cd7d8:  str      w9, [x8, #8]
001cd7dc:  add      x9, sp, #0x488
001cd7e0:  str      x10, [x8]
001cd7e4:  ldur     x10, [x9, #0x20]
001cd7e8:  ldur     q0, [x9, #0x10]
001cd7ec:  add      x9, x8, #0x28
001cd7f0:  str      x10, [x8, #0x20]
001cd7f4:  str      q0, [x8, #0x10]
001cd7f8:  str      x9, [x19, #8]
001cd7fc:  b        #0x1cd820
001cd800:  add      x1, sp, #0x488
001cd804:  mov      x0, x19
001cd808:  bl       #0x3000f0
001cd80c:  ldrb     w8, [sp, #0x498]
001cd810:  str      x0, [x19, #8]
001cd814:  tbz      w8, #0, #0x1cd820
001cd818:  ldr      x0, [sp, #0x4a8]
001cd81c:  bl       #0x2ff070
001cd820:  mov      w0, #0x30
001cd824:  bl       #0x2ff050
001cd828:  adrp     x8, #0x177000
001cd82c:  add      x8, x8, #0x21c
001cd830:  mov      w9, #0x79
001cd834:  ldp      q0, q1, [x8]
001cd838:  adrp     x8, #0x178000
001cd83c:  strh     w9, [x0, #0x20]
001cd840:  mov      w10, #0x21
001cd844:  str      wzr, [sp, #0x490]
001cd848:  stp      q0, q1, [x0]
001cd84c:  ldr      d0, [x8, #0x88]
001cd850:  mov      w8, #0x31
001cd854:  strb     w8, [sp, #0x498]
001cd858:  ldp      x8, x9, [x19, #8]
001cd85c:  str      d0, [sp, #0x488]
001cd860:  strb     wzr, [sp, #0x49f]
001cd864:  cmp      x8, x9
001cd868:  sturh    wzr, [x23, #0x2d]
001cd86c:  stur     wzr, [x23, #0x29]
001cd870:  str      x10, [sp, #0x4a0]
001cd874:  str      x0, [sp, #0x4a8]
001cd878:  b.hs     #0x1cd8ac
001cd87c:  ldr      w9, [sp, #0x490]
001cd880:  ldr      x10, [sp, #0x488]
001cd884:  str      w9, [x8, #8]
001cd888:  add      x9, sp, #0x488
001cd88c:  str      x10, [x8]
001cd890:  ldur     x10, [x9, #0x20]
001cd894:  ldur     q0, [x9, #0x10]
001cd898:  add      x9, x8, #0x28
001cd89c:  str      x10, [x8, #0x20]
001cd8a0:  str      q0, [x8, #0x10]
001cd8a4:  str      x9, [x19, #8]
001cd8a8:  b        #0x1cd8cc
001cd8ac:  add      x1, sp, #0x488
001cd8b0:  mov      x0, x19
001cd8b4:  bl       #0x3000f0
001cd8b8:  ldrb     w8, [sp, #0x498]
001cd8bc:  str      x0, [x19, #8]
001cd8c0:  tbz      w8, #0, #0x1cd8cc
001cd8c4:  ldr      x0, [sp, #0x4a8]
001cd8c8:  bl       #0x2ff070
001cd8cc:  mov      w0, #0x40
001cd8d0:  bl       #0x2ff050
001cd8d4:  adrp     x8, #0x173000
001cd8d8:  add      x8, x8, #0xc03
001cd8dc:  mov      x27, #0x665b
001cd8e0:  ldp      q0, q1, [x8]
001cd8e4:  adrp     x9, #0x177000
001cd8e8:  movk     x27, #0x6c69, lsl #16
001cd8ec:  ldr      q2, [x9, #0x880]
001cd8f0:  ldr      x25, [x8, #0x30]
001cd8f4:  movk     x27, #0x6574, lsl #32
001cd8f8:  add      x26, sp, #0x678
001cd8fc:  stur     x0, [x29, #-0x70]
001cd900:  stp      q1, q0, [sp, #0x30]
001cd904:  movk     x27, #0x5d72, lsl #48
001cd908:  stp      q0, q1, [x0]
001cd90c:  ldr      q0, [x8, #0x20]
001cd910:  mov      w8, #0x10
001cd914:  stur     q2, [x29, #-0x80]
001cd918:  stp      q0, q2, [sp, #0x10]
001cd91c:  str      q0, [x0, #0x20]
001cd920:  str      x25, [x0, #0x30]
001cd924:  strb     wzr, [x0, #0x38]
001cd928:  sturb    w8, [x29, #-0xe8]
001cd92c:  stur     x27, [x26, #0x81]
001cd930:  sturb    wzr, [x29, #-0xdf]
001cd934:  sub      x8, x29, #0xd0
001cd938:  sub      x0, x29, #0xe8
001cd93c:  bl       #0x1cfb7c
001cd940:  adrp     x8, #0x30d000
001cd944:  ldr      x8, [x8, #0x600]
001cd948:  ldr      q0, [x8]
001cd94c:  stur     q0, [x29, #-0x90]
001cd950:  sub      x2, x29, #0x80
001cd954:  sub      x3, x29, #0xd0
001cd958:  mov      x0, x19
001cd95c:  mov      w1, #0xd
001cd960:  bl       #0x300140
001cd964:  ldur     x20, [x29, #-0xa0]
001cd968:  cbz      x20, #0x1cd994
001cd96c:  add      x1, x20, #8
001cd970:  mov      x0, #-1
001cd974:  bl       #0x222ae0
001cd978:  cbnz     x0, #0x1cd994
001cd97c:  ldr      x8, [x20]
001cd980:  mov      x0, x20
001cd984:  ldr      x8, [x8, #0x10]
001cd988:  blr      x8
001cd98c:  mov      x0, x20
001cd990:  bl       #0x2ff0c0
001cd994:  sub      x0, x29, #0xd0
001cd998:  bl       #0x3000b0
001cd99c:  ldurb    w8, [x29, #-0xe8]
001cd9a0:  tbz      w8, #0, #0x1cd9ac
001cd9a4:  ldur     x0, [x29, #-0xd8]
001cd9a8:  bl       #0x2ff070
001cd9ac:  ldurb    w8, [x29, #-0x80]
001cd9b0:  tbz      w8, #0, #0x1cd9bc
001cd9b4:  ldur     x0, [x29, #-0x70]
001cd9b8:  bl       #0x2ff070
001cd9bc:  mov      w0, #0x50
001cd9c0:  bl       #0x2ff050
001cd9c4:  adrp     x8, #0x170000
001cd9c8:  add      x8, x8, #0x4ee
001cd9cc:  mov      x21, x0
001cd9d0:  ldp      q0, q1, [x8, #0x20]
001cd9d4:  ldur     q2, [x8, #0x3c]
001cd9d8:  strb     wzr, [x0, #0x4c]
001cd9dc:  stur     x27, [x26, #0x69]
001cd9e0:  stp      q1, q0, [sp, #0x80]
001cd9e4:  stp      q0, q1, [x0, #0x20]
001cd9e8:  ldp      q1, q0, [x8]
001cd9ec:  mov      w8, #0x10
001cd9f0:  stur     q2, [x0, #0x3c]
001cd9f4:  sturb    w8, [x29, #-0x100]
001cd9f8:  stp      q0, q2, [sp, #0x60]
001cd9fc:  stp      q1, q0, [x0]
001cda00:  str      q1, [sp, #0x50]
001cda04:  sturb    wzr, [x29, #-0xf7]
001cda08:  add      x8, sp, #0x488
001cda0c:  sub      x0, x29, #0x100
001cda10:  add      x20, sp, #0x488
001cda14:  bl       #0x1cfb7c
001cda18:  mov      w8, #0x14
001cda1c:  mov      w9, #0x5d67
001cda20:  add      x22, x20, #0x50
001cda24:  strb     w8, [sp, #0x6c8]
001cda28:  adrp     x8, #0x30d000
001cda2c:  ldr      x8, [x8, #0x600]
001cda30:  sturh    w9, [x26, #0x59]
001cda34:  strb     wzr, [sp, #0x6d3]
001cda38:  ldr      q0, [x8]
001cda3c:  adrp     x8, #0x175000
001cda40:  add      x8, x8, #0xf52
001cda44:  ldr      x24, [x8]
001cda48:  stur     q0, [x23, #0x58]
001cda4c:  stur     x24, [x26, #0x51]
001cda50:  add      x0, sp, #0x6c8
001cda54:  mov      x8, x22
001cda58:  bl       #0x1cfb7c
001cda5c:  adrp     x8, #0x307000
001cda60:  add      x8, x8, #0x310
001cda64:  add      x9, sp, #0x690
001cda68:  ldp      q0, q1, [x8]
001cda6c:  ldr      q2, [x8, #0x20]
001cda70:  ldr      x8, [x8, #0x30]
001cda74:  str      x9, [sp, #0x518]
001cda78:  adrp     x9, #0x177000
001cda7c:  str      q2, [sp, #0x6b0]
001cda80:  str      x8, [sp, #0x6c0]
001cda84:  mov      w8, #7
001cda88:  str      x8, [sp, #0x520]
001cda8c:  mov      w8, #2
001cda90:  str      w8, [sp, #0x400]
001cda94:  adrp     x8, #0x177000
001cda98:  add      x8, x8, #0x20a
001cda9c:  str      x8, [sp, #0x408]
001cdaa0:  mov      w8, #3
001cdaa4:  str      w8, [sp, #0x410]
001cdaa8:  adrp     x8, #0x175000
001cdaac:  add      x8, x8, #0x257
001cdab0:  str      q0, [sp, #0x690]
001cdab4:  ldr      q0, [x9, #0x9c0]
001cdab8:  str      x8, [sp, #0x418]
001cdabc:  mov      w8, #4
001cdac0:  str      w8, [sp, #0x420]
001cdac4:  adrp     x8, #0x175000
001cdac8:  add      x8, x8, #0x5c2
001cdacc:  str      q1, [sp, #0x6a0]
001cdad0:  str      x8, [sp, #0x428]
001cdad4:  str      q0, [sp]
001cdad8:  str      q0, [sp, #0xa0]
001cdadc:  str      x21, [sp, #0xb0]
001cdae0:  add      x1, sp, #0x400
001cdae4:  add      x4, sp, #0xa0
001cdae8:  add      x5, sp, #0x488
001cdaec:  mov      x0, x19
001cdaf0:  mov      w2, #3
001cdaf4:  mov      w3, #0xe
001cdaf8:  mov      w6, #2
001cdafc:  add      x28, sp, #0x488
001cdb00:  bl       #0x300100
001cdb04:  mov      x0, x21
001cdb08:  bl       #0x2ff070
001cdb0c:  ldr      x20, [sp, #0x508]
001cdb10:  cbz      x20, #0x1cdb3c
001cdb14:  add      x1, x20, #8
001cdb18:  mov      x0, #-1
001cdb1c:  bl       #0x222ae0
001cdb20:  cbnz     x0, #0x1cdb3c
001cdb24:  ldr      x8, [x20]
001cdb28:  mov      x0, x20
001cdb2c:  ldr      x8, [x8, #0x10]
001cdb30:  blr      x8
001cdb34:  mov      x0, x20
001cdb38:  bl       #0x2ff0c0
001cdb3c:  add      x0, x28, #0x50
001cdb40:  bl       #0x3000b0
001cdb44:  ldr      x20, [sp, #0x4b8]
001cdb48:  cbz      x20, #0x1cdb74
001cdb4c:  add      x1, x20, #8
001cdb50:  mov      x0, #-1
001cdb54:  bl       #0x222ae0
001cdb58:  cbnz     x0, #0x1cdb74
001cdb5c:  ldr      x8, [x20]
001cdb60:  mov      x0, x20
001cdb64:  ldr      x8, [x8, #0x10]
001cdb68:  blr      x8
001cdb6c:  mov      x0, x20
001cdb70:  bl       #0x2ff0c0
001cdb74:  add      x0, sp, #0x488
001cdb78:  bl       #0x3000b0
001cdb7c:  ldrb     w8, [sp, #0x6c8]
001cdb80:  adrp     x28, #0x177000
001cdb84:  add      x28, x28, #0x20a
001cdb88:  tbz      w8, #0, #0x1cdb94
001cdb8c:  ldr      x0, [sp, #0x6d8]
001cdb90:  bl       #0x2ff070
001cdb94:  ldurb    w8, [x29, #-0x100]
001cdb98:  tbz      w8, #0, #0x1cdba4
001cdb9c:  ldur     x0, [x29, #-0xf0]
001cdba0:  bl       #0x2ff070
001cdba4:  mov      w0, #0x50
001cdba8:  bl       #0x2ff050
001cdbac:  ldp      q0, q1, [sp, #0x80]
001cdbb0:  mov      x21, x0
001cdbb4:  mov      w8, #0x10
001cdbb8:  strb     wzr, [x0, #0x4c]
001cdbbc:  strb     w8, [sp, #0x678]
001cdbc0:  stp      q1, q0, [x0, #0x20]
001cdbc4:  ldp      q2, q1, [sp, #0x60]
001cdbc8:  ldr      q0, [sp, #0x50]
001cdbcc:  stur     x27, [x26, #1]
001cdbd0:  strb     wzr, [sp, #0x681]
001cdbd4:  stur     q1, [x0, #0x3c]
001cdbd8:  stp      q0, q2, [x0]
001cdbdc:  add      x8, sp, #0x488
001cdbe0:  add      x0, sp, #0x678
001cdbe4:  add      x20, sp, #0x488
001cdbe8:  bl       #0x1cfb7c
001cdbec:  adrp     x9, #0x30d000
001cdbf0:  add      x26, sp, #0x578
001cdbf4:  mov      w8, #0x14
001cdbf8:  ldr      x9, [x9, #0x600]
001cdbfc:  add      x22, x20, #0x50
001cdc00:  strb     w8, [sp, #0x660]
001cdc04:  stur     x24, [x26, #0xe9]
001cdc08:  ldr      q0, [x9]
001cdc0c:  mov      w9, #0x5d67
001cdc10:  strb     wzr, [sp, #0x66b]
001cdc14:  sturh    w9, [x26, #0xf1]
001cdc18:  stur     q0, [x23, #0x58]
001cdc1c:  add      x0, sp, #0x660
001cdc20:  mov      x8, x22
001cdc24:  bl       #0x1cfb7c
001cdc28:  adrp     x8, #0x307000
001cdc2c:  add      x8, x8, #0x348
001cdc30:  add      x9, sp, #0x690
001cdc34:  ldp      q0, q1, [x8]
001cdc38:  ldr      q2, [x8, #0x20]
001cdc3c:  ldr      x8, [x8, #0x30]
001cdc40:  str      x9, [sp, #0x518]
001cdc44:  str      q2, [sp, #0x6b0]
001cdc48:  str      x8, [sp, #0x6c0]
001cdc4c:  mov      w8, #7
001cdc50:  str      x8, [sp, #0x520]
001cdc54:  mov      w8, #2
001cdc58:  str      w8, [sp, #0x400]
001cdc5c:  mov      w8, #3
001cdc60:  str      w8, [sp, #0x410]
001cdc64:  adrp     x8, #0x175000
001cdc68:  add      x8, x8, #0x257
001cdc6c:  str      q0, [sp, #0x690]
001cdc70:  ldr      q0, [sp]
001cdc74:  str      x8, [sp, #0x418]
001cdc78:  mov      w8, #4
001cdc7c:  str      w8, [sp, #0x420]
001cdc80:  adrp     x8, #0x175000
001cdc84:  add      x8, x8, #0x5c2
001cdc88:  str      q1, [sp, #0x6a0]
001cdc8c:  str      x28, [sp, #0x408]
001cdc90:  str      x8, [sp, #0x428]
001cdc94:  str      q0, [sp, #0xa0]
001cdc98:  str      x21, [sp, #0xb0]
001cdc9c:  add      x1, sp, #0x400
001cdca0:  add      x4, sp, #0xa0
001cdca4:  add      x5, sp, #0x488
001cdca8:  mov      x0, x19
001cdcac:  mov      w2, #3
001cdcb0:  mov      w3, #0xf
001cdcb4:  mov      w6, #2
001cdcb8:  add      x28, sp, #0x488
001cdcbc:  bl       #0x300100
001cdcc0:  mov      x0, x21
001cdcc4:  bl       #0x2ff070
001cdcc8:  ldr      x20, [sp, #0x508]
001cdccc:  cbz      x20, #0x1cdcf8
001cdcd0:  add      x1, x20, #8
001cdcd4:  mov      x0, #-1
001cdcd8:  bl       #0x222ae0
001cdcdc:  cbnz     x0, #0x1cdcf8
001cdce0:  ldr      x8, [x20]
001cdce4:  mov      x0, x20
001cdce8:  ldr      x8, [x8, #0x10]
001cdcec:  blr      x8
001cdcf0:  mov      x0, x20
001cdcf4:  bl       #0x2ff0c0
001cdcf8:  add      x0, x28, #0x50
001cdcfc:  bl       #0x3000b0
001cdd00:  ldr      x20, [sp, #0x4b8]
001cdd04:  cbz      x20, #0x1cdd30
001cdd08:  add      x1, x20, #8
001cdd0c:  mov      x0, #-1
001cdd10:  bl       #0x222ae0
001cdd14:  cbnz     x0, #0x1cdd30
001cdd18:  ldr      x8, [x20]
001cdd1c:  mov      x0, x20
001cdd20:  ldr      x8, [x8, #0x10]
001cdd24:  blr      x8
001cdd28:  mov      x0, x20
001cdd2c:  bl       #0x2ff0c0
001cdd30:  add      x0, sp, #0x488
001cdd34:  bl       #0x3000b0
001cdd38:  ldrb     w8, [sp, #0x660]
001cdd3c:  adrp     x28, #0x177000
001cdd40:  add      x28, x28, #0x20a
001cdd44:  tbz      w8, #0, #0x1cdd50
001cdd48:  ldr      x0, [sp, #0x670]
001cdd4c:  bl       #0x2ff070
001cdd50:  ldrb     w8, [sp, #0x678]
001cdd54:  tbz      w8, #0, #0x1cdd60
001cdd58:  ldr      x0, [sp, #0x688]
001cdd5c:  bl       #0x2ff070
001cdd60:  mov      w0, #0x40
001cdd64:  bl       #0x2ff050
001cdd68:  ldr      q0, [sp, #0x20]
001cdd6c:  mov      w8, #0x10
001cdd70:  str      x0, [sp, #0x650]
001cdd74:  str      x25, [x0, #0x30]
001cdd78:  str      q0, [sp, #0x640]
001cdd7c:  ldp      q0, q1, [sp, #0x30]
001cdd80:  strb     wzr, [x0, #0x38]
001cdd84:  strb     w8, [sp, #0x5d8]
001cdd88:  stp      q1, q0, [x0]
001cdd8c:  ldr      q0, [sp, #0x10]
001cdd90:  stur     x27, [x26, #0x61]
001cdd94:  str      q0, [x0, #0x20]
001cdd98:  strb     wzr, [sp, #0x5e1]
001cdd9c:  add      x8, sp, #0x5f0
001cdda0:  add      x0, sp, #0x5d8
001cdda4:  bl       #0x1cfb7c
001cdda8:  adrp     x8, #0x30d000
001cddac:  ldr      x8, [x8, #0x608]
001cddb0:  ldr      q0, [x8]
001cddb4:  str      q0, [sp, #0x630]
001cddb8:  add      x2, sp, #0x640
001cddbc:  add      x3, sp, #0x5f0
001cddc0:  mov      x0, x19
001cddc4:  mov      w1, #0x10
001cddc8:  bl       #0x300140
001cddcc:  ldr      x20, [sp, #0x620]
001cddd0:  cbz      x20, #0x1cddfc
001cddd4:  add      x1, x20, #8
001cddd8:  mov      x0, #-1
001cdddc:  bl       #0x222ae0
001cdde0:  cbnz     x0, #0x1cddfc
001cdde4:  ldr      x8, [x20]
001cdde8:  mov      x0, x20
001cddec:  ldr      x8, [x8, #0x10]
001cddf0:  blr      x8
001cddf4:  mov      x0, x20
001cddf8:  bl       #0x2ff0c0
001cddfc:  add      x0, sp, #0x5f0
001cde00:  bl       #0x3000b0
001cde04:  ldrb     w8, [sp, #0x5d8]
001cde08:  tbz      w8, #0, #0x1cde14
001cde0c:  ldr      x0, [sp, #0x5e8]
001cde10:  bl       #0x2ff070
001cde14:  ldrb     w8, [sp, #0x640]
001cde18:  tbz      w8, #0, #0x1cde24
001cde1c:  ldr      x0, [sp, #0x650]
001cde20:  bl       #0x2ff070
001cde24:  mov      w0, #0x50
001cde28:  bl       #0x2ff050
001cde2c:  adrp     x9, #0x170000
001cde30:  add      x9, x9, #0xf9
001cde34:  mov      w8, #0x6d69
001cde38:  ldp      q0, q1, [x9]
001cde3c:  movk     w8, #0x7469, lsl #16
001cde40:  mov      x21, x0
001cde44:  stur     w8, [x0, #0x3f]
001cde48:  mov      w8, #0x10
001cde4c:  strb     wzr, [x0, #0x43]
001cde50:  stp      q1, q0, [sp, #0x70]
001cde54:  stp      q0, q1, [x0]
001cde58:  ldp      q2, q0, [x9, #0x20]
001cde5c:  strb     w8, [sp, #0x5c0]
001cde60:  stur     x27, [x26, #0x49]
001cde64:  stp      q0, q2, [sp, #0x50]
001cde68:  stp      q2, q0, [x0, #0x20]
001cde6c:  strb     wzr, [sp, #0x5c9]
001cde70:  add      x8, sp, #0x488
001cde74:  add      x0, sp, #0x5c0
001cde78:  add      x20, sp, #0x488
001cde7c:  bl       #0x1cfb7c
001cde80:  adrp     x9, #0x30d000
001cde84:  mov      w8, #0x14
001cde88:  add      x22, x20, #0x50
001cde8c:  ldr      x9, [x9, #0x608]
001cde90:  strb     w8, [sp, #0x5a8]
001cde94:  stur     x24, [x26, #0x31]
001cde98:  ldr      q0, [x9]
001cde9c:  mov      w9, #0x5d67
001cdea0:  strb     wzr, [sp, #0x5b3]
001cdea4:  sturh    w9, [x26, #0x39]
001cdea8:  stur     q0, [x23, #0x58]
001cdeac:  add      x0, sp, #0x5a8
001cdeb0:  mov      x8, x22
001cdeb4:  bl       #0x1cfb7c
001cdeb8:  adrp     x8, #0x307000
001cdebc:  add      x8, x8, #0x380
001cdec0:  add      x9, sp, #0x690
001cdec4:  ldp      q0, q1, [x8]
001cdec8:  ldr      q2, [x8, #0x20]
001cdecc:  ldr      x8, [x8, #0x30]
001cded0:  str      x9, [sp, #0x518]
001cded4:  adrp     x9, #0x175000
001cded8:  add      x9, x9, #0x257
001cdedc:  str      q2, [sp, #0x6b0]
001cdee0:  str      x8, [sp, #0x6c0]
001cdee4:  mov      w8, #7
001cdee8:  str      x8, [sp, #0x520]
001cdeec:  mov      w8, #2
001cdef0:  str      w8, [sp, #0x400]
001cdef4:  mov      w8, #3
001cdef8:  str      w8, [sp, #0x410]
001cdefc:  mov      w8, #4
001cdf00:  str      w8, [sp, #0x420]
001cdf04:  adrp     x8, #0x177000
001cdf08:  str      q0, [sp, #0x690]
001cdf0c:  ldr      q0, [x8, #0x680]
001cdf10:  adrp     x8, #0x175000
001cdf14:  add      x8, x8, #0x5c2
001cdf18:  str      q1, [sp, #0x6a0]
001cdf1c:  str      x28, [sp, #0x408]
001cdf20:  str      x9, [sp, #0x418]
001cdf24:  str      x8, [sp, #0x428]
001cdf28:  stp      q0, q0, [sp, #0x90]
001cdf2c:  str      x21, [sp, #0xb0]
001cdf30:  add      x1, sp, #0x400
001cdf34:  add      x4, sp, #0xa0
001cdf38:  add      x5, sp, #0x488
001cdf3c:  mov      x0, x19
001cdf40:  mov      w2, #3
001cdf44:  mov      w3, #0x11
001cdf48:  mov      w6, #2
001cdf4c:  add      x25, sp, #0x488
001cdf50:  bl       #0x300100
001cdf54:  mov      x0, x21
001cdf58:  bl       #0x2ff070
001cdf5c:  ldr      x20, [sp, #0x508]
001cdf60:  cbz      x20, #0x1cdf8c
001cdf64:  add      x1, x20, #8
001cdf68:  mov      x0, #-1
001cdf6c:  bl       #0x222ae0
001cdf70:  cbnz     x0, #0x1cdf8c
001cdf74:  ldr      x8, [x20]
001cdf78:  mov      x0, x20
001cdf7c:  ldr      x8, [x8, #0x10]
001cdf80:  blr      x8
001cdf84:  mov      x0, x20
001cdf88:  bl       #0x2ff0c0
001cdf8c:  add      x0, x25, #0x50
001cdf90:  bl       #0x3000b0
001cdf94:  ldr      x20, [sp, #0x4b8]
001cdf98:  cbz      x20, #0x1cdfc4
001cdf9c:  add      x1, x20, #8
001cdfa0:  mov      x0, #-1
001cdfa4:  bl       #0x222ae0
001cdfa8:  cbnz     x0, #0x1cdfc4
001cdfac:  ldr      x8, [x20]
001cdfb0:  mov      x0, x20
001cdfb4:  ldr      x8, [x8, #0x10]
001cdfb8:  blr      x8
001cdfbc:  mov      x0, x20
001cdfc0:  bl       #0x2ff0c0
001cdfc4:  add      x0, sp, #0x488
001cdfc8:  bl       #0x3000b0
001cdfcc:  ldrb     w8, [sp, #0x5a8]
001cdfd0:  tbz      w8, #0, #0x1cdfdc
001cdfd4:  ldr      x0, [sp, #0x5b8]
001cdfd8:  bl       #0x2ff070
001cdfdc:  ldrb     w8, [sp, #0x5c0]
001cdfe0:  tbz      w8, #0, #0x1cdfec
001cdfe4:  ldr      x0, [sp, #0x5d0]
001cdfe8:  bl       #0x2ff070
001cdfec:  mov      w0, #0x50
001cdff0:  bl       #0x2ff050
001cdff4:  ldp      q0, q1, [sp, #0x70]
001cdff8:  mov      w8, #0x6d69
001cdffc:  movk     w8, #0x7469, lsl #16
001ce000:  mov      x21, x0
001ce004:  strb     wzr, [x0, #0x43]
001ce008:  stur     w8, [x0, #0x3f]
001ce00c:  mov      w8, #0x10
001ce010:  stp      q1, q0, [x0]
001ce014:  ldp      q0, q1, [sp, #0x50]
001ce018:  strb     w8, [sp, #0x590]
001ce01c:  stur     x27, [x26, #0x19]
001ce020:  stp      q1, q0, [x0, #0x20]
001ce024:  strb     wzr, [sp, #0x599]
001ce028:  add      x8, sp, #0x488
001ce02c:  add      x0, sp, #0x590
001ce030:  add      x20, sp, #0x488
001ce034:  bl       #0x1cfb7c
001ce038:  adrp     x9, #0x30d000
001ce03c:  mov      w8, #0x14
001ce040:  add      x22, x20, #0x50
001ce044:  ldr      x9, [x9, #0x608]
001ce048:  strb     w8, [sp, #0x578]
001ce04c:  stur     x24, [x26, #1]
001ce050:  ldr      q0, [x9]
001ce054:  mov      w9, #0x5d67
001ce058:  strb     wzr, [sp, #0x583]
001ce05c:  sturh    w9, [x26, #9]
001ce060:  stur     q0, [x23, #0x58]
001ce064:  add      x0, sp, #0x578
001ce068:  mov      x8, x22
001ce06c:  bl       #0x1cfb7c
001ce070:  adrp     x8, #0x307000
001ce074:  add      x8, x8, #0x3b8
001ce078:  add      x9, sp, #0x690
001ce07c:  ldp      q0, q1, [x8]
001ce080:  ldr      q2, [x8, #0x20]
001ce084:  ldr      x8, [x8, #0x30]
001ce088:  str      x9, [sp, #0x518]
001ce08c:  str      q2, [sp, #0x6b0]
001ce090:  str      x8, [sp, #0x6c0]
001ce094:  mov      w8, #7
001ce098:  str      x8, [sp, #0x520]
001ce09c:  mov      w8, #2
001ce0a0:  str      w8, [sp, #0x400]
001ce0a4:  mov      w8, #3
001ce0a8:  str      w8, [sp, #0x410]
001ce0ac:  adrp     x8, #0x175000
001ce0b0:  add      x8, x8, #0x257
001ce0b4:  str      q0, [sp, #0x690]
001ce0b8:  ldr      q0, [sp, #0x90]
001ce0bc:  str      x8, [sp, #0x418]
001ce0c0:  mov      w8, #4
001ce0c4:  str      w8, [sp, #0x420]
001ce0c8:  adrp     x8, #0x175000
001ce0cc:  add      x8, x8, #0x5c2
001ce0d0:  str      q1, [sp, #0x6a0]
001ce0d4:  str      x28, [sp, #0x408]
001ce0d8:  str      x8, [sp, #0x428]
001ce0dc:  str      q0, [sp, #0xa0]
001ce0e0:  str      x21, [sp, #0xb0]
001ce0e4:  add      x1, sp, #0x400
001ce0e8:  add      x4, sp, #0xa0
001ce0ec:  add      x5, sp, #0x488
001ce0f0:  mov      x0, x19
001ce0f4:  mov      w2, #3
001ce0f8:  mov      w3, #0x12
001ce0fc:  mov      w6, #2
001ce100:  add      x24, sp, #0x488
001ce104:  bl       #0x300100
001ce108:  mov      x0, x21
001ce10c:  bl       #0x2ff070
001ce110:  ldr      x20, [sp, #0x508]
001ce114:  cbz      x20, #0x1ce140
001ce118:  add      x1, x20, #8
001ce11c:  mov      x0, #-1
001ce120:  bl       #0x222ae0
001ce124:  cbnz     x0, #0x1ce140
001ce128:  ldr      x8, [x20]
001ce12c:  mov      x0, x20
001ce130:  ldr      x8, [x8, #0x10]
001ce134:  blr      x8
001ce138:  mov      x0, x20
001ce13c:  bl       #0x2ff0c0
001ce140:  add      x0, x24, #0x50
001ce144:  bl       #0x3000b0
001ce148:  ldr      x20, [sp, #0x4b8]
001ce14c:  cbz      x20, #0x1ce178
001ce150:  add      x1, x20, #8
001ce154:  mov      x0, #-1
001ce158:  bl       #0x222ae0
001ce15c:  cbnz     x0, #0x1ce178
001ce160:  ldr      x8, [x20]
001ce164:  mov      x0, x20
001ce168:  ldr      x8, [x8, #0x10]
001ce16c:  blr      x8
001ce170:  mov      x0, x20
001ce174:  bl       #0x2ff0c0
001ce178:  add      x0, sp, #0x488
001ce17c:  bl       #0x3000b0
001ce180:  ldrb     w8, [sp, #0x578]
001ce184:  tbz      w8, #0, #0x1ce190
001ce188:  ldr      x0, [sp, #0x588]
001ce18c:  bl       #0x2ff070
001ce190:  ldrb     w8, [sp, #0x590]
001ce194:  tbz      w8, #0, #0x1ce1a0
001ce198:  ldr      x0, [sp, #0x5a0]
001ce19c:  bl       #0x2ff070
001ce1a0:  mov      w0, #0x60
001ce1a4:  bl       #0x2ff050
001ce1a8:  adrp     x8, #0x176000
001ce1ac:  add      x8, x8, #0x3d2
001ce1b0:  mov      x21, x0
001ce1b4:  ldp      q0, q1, [x8, #0x20]
001ce1b8:  ldr      q2, [x8, #0x40]
001ce1bc:  ldur     x9, [x8, #0x4f]
001ce1c0:  strb     wzr, [x0, #0x57]
001ce1c4:  str      q2, [x0, #0x40]
001ce1c8:  stp      q0, q1, [x0, #0x20]
001ce1cc:  ldp      q0, q1, [x8]
001ce1d0:  stur     x9, [x0, #0x4f]
001ce1d4:  mov      w8, #0x18
001ce1d8:  adrp     x9, #0x171000
001ce1dc:  add      x9, x9, #0xe25
001ce1e0:  strb     w8, [sp, #0x470]
001ce1e4:  mov      w8, #0x6f69
001ce1e8:  ldr      x25, [x9]
001ce1ec:  movk     w8, #0x5d6e, lsl #16
001ce1f0:  stp      q0, q1, [x0]
001ce1f4:  stur     w8, [x23, #9]
001ce1f8:  stur     x25, [x23, #1]
001ce1fc:  strb     wzr, [sp, #0x47d]
001ce200:  add      x8, sp, #0x488
001ce204:  add      x0, sp, #0x470
001ce208:  add      x20, sp, #0x488
001ce20c:  bl       #0x1cfb7c
001ce210:  adrp     x8, #0x307000
001ce214:  add      x8, x8, #0x428
001ce218:  mov      w9, #7
001ce21c:  ldp      q0, q1, [x8]
001ce220:  ldr      q2, [x8, #0x20]
001ce224:  ldr      x24, [x8, #0x30]
001ce228:  add      x8, sp, #0x690
001ce22c:  add      x26, sp, #0x370
001ce230:  str      x8, [sp, #0x4c8]
001ce234:  mov      w8, #0x10
001ce238:  add      x22, x20, #0x50
001ce23c:  stp      q1, q0, [sp, #0x70]
001ce240:  str      q0, [sp, #0x690]
001ce244:  str      q1, [sp, #0x6a0]
001ce248:  str      q2, [sp, #0x60]
001ce24c:  str      q2, [sp, #0x6b0]
001ce250:  str      x24, [sp, #0x6c0]
001ce254:  str      x9, [sp, #0x4d0]
001ce258:  strb     w8, [sp, #0x458]
001ce25c:  stur     x27, [x26, #0xe9]
001ce260:  strb     wzr, [sp, #0x461]
001ce264:  add      x0, sp, #0x458
001ce268:  mov      x8, x22
001ce26c:  bl       #0x1cfb7c
001ce270:  mov      w8, #0x14
001ce274:  mov      w9, #0x5d67
001ce278:  strb     w8, [sp, #0x440]
001ce27c:  adrp     x8, #0x30d000
001ce280:  ldr      x8, [x8, #0x600]
001ce284:  sturh    w9, [x26, #0xd9]
001ce288:  add      x9, sp, #0x488
001ce28c:  add      x22, x9, #0xa0
001ce290:  strb     wzr, [sp, #0x44b]
001ce294:  ldr      q0, [x8]
001ce298:  adrp     x8, #0x16e000
001ce29c:  add      x8, x8, #0x167
001ce2a0:  ldr      x8, [x8]
001ce2a4:  stur     q0, [x23, #0xa8]
001ce2a8:  stur     x8, [x26, #0xd1]
001ce2ac:  add      x0, sp, #0x440
001ce2b0:  mov      x8, x22
001ce2b4:  bl       #0x1cfb7c
001ce2b8:  adrp     x8, #0x307000
001ce2bc:  add      x8, x8, #0x3f0
001ce2c0:  add      x9, sp, #0x400
001ce2c4:  ldp      q0, q1, [x8]
001ce2c8:  ldr      q2, [x8, #0x20]
001ce2cc:  ldr      x8, [x8, #0x30]
001ce2d0:  str      x9, [sp, #0x568]
001ce2d4:  adrp     x9, #0x175000
001ce2d8:  add      x9, x9, #0x257
001ce2dc:  str      q2, [sp, #0x420]
001ce2e0:  str      x8, [sp, #0x430]
001ce2e4:  mov      w8, #7
001ce2e8:  str      x8, [sp, #0x570]
001ce2ec:  mov      w8, #2
001ce2f0:  str      w8, [sp, #0xa0]
001ce2f4:  mov      w8, #3
001ce2f8:  str      w8, [sp, #0xb0]
001ce2fc:  mov      w8, #4
001ce300:  str      w8, [sp, #0xc0]
001ce304:  adrp     x8, #0x177000
001ce308:  str      q0, [sp, #0x400]
001ce30c:  ldr      q0, [x8, #0x6d0]
001ce310:  adrp     x8, #0x175000
001ce314:  add      x8, x8, #0x5c2
001ce318:  str      q1, [sp, #0x410]
001ce31c:  str      x28, [sp, #0xa8]
001ce320:  str      x9, [sp, #0xb8]
001ce324:  str      x8, [sp, #0xc8]
001ce328:  stur     q0, [x29, #-0x40]
001ce32c:  stur     x21, [x29, #-0x30]
001ce330:  add      x1, sp, #0xa0
001ce334:  sub      x4, x29, #0x40
001ce338:  add      x5, sp, #0x488
001ce33c:  mov      x0, x19
001ce340:  mov      w2, #3
001ce344:  mov      w3, #0x13
001ce348:  mov      w6, #3
001ce34c:  add      x28, sp, #0x488
001ce350:  bl       #0x300100
001ce354:  mov      x0, x21
001ce358:  bl       #0x2ff070
001ce35c:  ldr      x20, [sp, #0x558]
001ce360:  cbz      x20, #0x1ce38c
001ce364:  add      x1, x20, #8
001ce368:  mov      x0, #-1
001ce36c:  bl       #0x222ae0
001ce370:  cbnz     x0, #0x1ce38c
001ce374:  ldr      x8, [x20]
001ce378:  mov      x0, x20
001ce37c:  ldr      x8, [x8, #0x10]
001ce380:  blr      x8
001ce384:  mov      x0, x20
001ce388:  bl       #0x2ff0c0
001ce38c:  add      x0, x28, #0xa0
001ce390:  bl       #0x3000b0
001ce394:  ldr      x20, [sp, #0x508]
001ce398:  add      x21, sp, #0x488
001ce39c:  cbz      x20, #0x1ce3c8
001ce3a0:  add      x1, x20, #8
001ce3a4:  mov      x0, #-1
001ce3a8:  bl       #0x222ae0
001ce3ac:  cbnz     x0, #0x1ce3c8
001ce3b0:  ldr      x8, [x20]
001ce3b4:  mov      x0, x20
001ce3b8:  ldr      x8, [x8, #0x10]
001ce3bc:  blr      x8
001ce3c0:  mov      x0, x20
001ce3c4:  bl       #0x2ff0c0
001ce3c8:  add      x0, x21, #0x50
001ce3cc:  bl       #0x3000b0
001ce3d0:  ldr      x20, [sp, #0x4b8]
001ce3d4:  adrp     x28, #0x177000
001ce3d8:  add      x28, x28, #0x20a
001ce3dc:  cbz      x20, #0x1ce408
001ce3e0:  add      x1, x20, #8
001ce3e4:  mov      x0, #-1
001ce3e8:  bl       #0x222ae0
001ce3ec:  cbnz     x0, #0x1ce408
001ce3f0:  ldr      x8, [x20]
001ce3f4:  mov      x0, x20
001ce3f8:  ldr      x8, [x8, #0x10]
001ce3fc:  blr      x8
001ce400:  mov      x0, x20
001ce404:  bl       #0x2ff0c0
001ce408:  add      x0, sp, #0x488
001ce40c:  bl       #0x3000b0
001ce410:  ldrb     w8, [sp, #0x440]
001ce414:  tbnz     w8, #0, #0x1cf104
001ce418:  ldrb     w8, [sp, #0x458]
001ce41c:  tbnz     w8, #0, #0x1cf114
001ce420:  ldrb     w8, [sp, #0x470]
001ce424:  tbz      w8, #0, #0x1ce430
001ce428:  ldr      x0, [sp, #0x480]
001ce42c:  bl       #0x2ff070
001ce430:  mov      w0, #0x40
001ce434:  bl       #0x2ff050
001ce438:  adrp     x8, #0x170000
001ce43c:  add      x8, x8, #0xaaa
001ce440:  mov      x21, x0
001ce444:  ldp      q0, q1, [x8]
001ce448:  ldr      q2, [x8, #0x20]
001ce44c:  strb     wzr, [x0, #0x39]
001ce450:  str      q2, [x0, #0x20]
001ce454:  stp      q0, q1, [x0]
001ce458:  ldur     q0, [x8, #0x29]
001ce45c:  mov      w8, #0x18
001ce460:  strb     w8, [sp, #0x3e8]
001ce464:  mov      w8, #0x6f69
001ce468:  movk     w8, #0x5d6e, lsl #16
001ce46c:  stur     q0, [x0, #0x29]
001ce470:  stur     w8, [x26, #0x81]
001ce474:  stur     x25, [x26, #0x79]
001ce478:  strb     wzr, [sp, #0x3f5]
001ce47c:  add      x8, sp, #0x488
001ce480:  add      x0, sp, #0x3e8
001ce484:  add      x20, sp, #0x488
001ce488:  bl       #0x1cfb7c
001ce48c:  ldp      q0, q1, [sp, #0x70]
001ce490:  add      x8, sp, #0x690
001ce494:  mov      w9, #7
001ce498:  str      x8, [sp, #0x4c8]
001ce49c:  mov      w8, #0x10
001ce4a0:  add      x22, x20, #0x50
001ce4a4:  str      x24, [sp, #0x6c0]
001ce4a8:  str      q0, [sp, #0x6a0]
001ce4ac:  ldr      q0, [sp, #0x60]
001ce4b0:  str      q1, [sp, #0x690]
001ce4b4:  str      q0, [sp, #0x6b0]
001ce4b8:  str      x9, [sp, #0x4d0]
001ce4bc:  strb     w8, [sp, #0x3d0]
001ce4c0:  stur     x27, [x26, #0x61]
001ce4c4:  strb     wzr, [sp, #0x3d9]
001ce4c8:  add      x0, sp, #0x3d0
001ce4cc:  mov      x8, x22
001ce4d0:  bl       #0x1cfb7c
001ce4d4:  adrp     x8, #0x30d000
001ce4d8:  adrp     x9, #0x175000
001ce4dc:  add      x9, x9, #0x257
001ce4e0:  ldr      x8, [x8, #0x600]
001ce4e4:  str      x28, [sp, #0x408]
001ce4e8:  str      x9, [sp, #0x418]
001ce4ec:  ldr      q0, [x8]
001ce4f0:  mov      w8, #2
001ce4f4:  str      x21, [sp, #0xb0]
001ce4f8:  str      w8, [sp, #0x400]
001ce4fc:  mov      w8, #3
001ce500:  str      w8, [sp, #0x410]
001ce504:  mov      w8, #4
001ce508:  str      w8, [sp, #0x420]
001ce50c:  adrp     x8, #0x177000
001ce510:  stur     q0, [x23, #0xa8]
001ce514:  ldr      q0, [x8, #0x710]
001ce518:  adrp     x8, #0x175000
001ce51c:  add      x8, x8, #0x5c2
001ce520:  str      x8, [sp, #0x428]
001ce524:  str      q0, [sp, #0xa0]
001ce528:  add      x1, sp, #0x400
001ce52c:  add      x4, sp, #0xa0
001ce530:  add      x5, sp, #0x488
001ce534:  mov      x0, x19
001ce538:  mov      w2, #3
001ce53c:  mov      w3, #0x14
001ce540:  mov      w6, #2
001ce544:  add      x24, sp, #0x488
001ce548:  bl       #0x300100
001ce54c:  mov      x0, x21
001ce550:  bl       #0x2ff070
001ce554:  ldr      x20, [sp, #0x508]
001ce558:  cbz      x20, #0x1ce584
001ce55c:  add      x1, x20, #8
001ce560:  mov      x0, #-1
001ce564:  bl       #0x222ae0
001ce568:  cbnz     x0, #0x1ce584
001ce56c:  ldr      x8, [x20]
001ce570:  mov      x0, x20
001ce574:  ldr      x8, [x8, #0x10]
001ce578:  blr      x8
001ce57c:  mov      x0, x20
001ce580:  bl       #0x2ff0c0
001ce584:  add      x0, x24, #0x50
001ce588:  bl       #0x3000b0
001ce58c:  ldr      x20, [sp, #0x4b8]
001ce590:  cbz      x20, #0x1ce5bc
001ce594:  add      x1, x20, #8
001ce598:  mov      x0, #-1
001ce59c:  bl       #0x222ae0
001ce5a0:  cbnz     x0, #0x1ce5bc
001ce5a4:  ldr      x8, [x20]
001ce5a8:  mov      x0, x20
001ce5ac:  ldr      x8, [x8, #0x10]
001ce5b0:  blr      x8
001ce5b4:  mov      x0, x20
001ce5b8:  bl       #0x2ff0c0
001ce5bc:  add      x0, sp, #0x488
001ce5c0:  bl       #0x3000b0
001ce5c4:  ldrb     w8, [sp, #0x3d0]
001ce5c8:  tbz      w8, #0, #0x1ce5d4
001ce5cc:  ldr      x0, [sp, #0x3e0]
001ce5d0:  bl       #0x2ff070
001ce5d4:  ldrb     w8, [sp, #0x3e8]
001ce5d8:  tbz      w8, #0, #0x1ce5e4
001ce5dc:  ldr      x0, [sp, #0x3f8]
001ce5e0:  bl       #0x2ff070
001ce5e4:  mov      w0, #0x40
001ce5e8:  bl       #0x2ff050
001ce5ec:  adrp     x8, #0x176000
001ce5f0:  add      x8, x8, #0xd15
001ce5f4:  mov      x21, x0
001ce5f8:  ldp      q0, q1, [x8]
001ce5fc:  ldr      q2, [x8, #0x20]
001ce600:  strb     wzr, [x0, #0x3c]
001ce604:  str      q2, [x0, #0x20]
001ce608:  stp      q0, q1, [x0]
001ce60c:  ldur     q0, [x8, #0x2c]
001ce610:  mov      w8, #0x18
001ce614:  strb     w8, [sp, #0x3b8]
001ce618:  mov      w8, #0x6f69
001ce61c:  movk     w8, #0x5d6e, lsl #16
001ce620:  stur     q0, [x0, #0x2c]
001ce624:  stur     w8, [x26, #0x51]
001ce628:  stur     x25, [x26, #0x49]
001ce62c:  strb     wzr, [sp, #0x3c5]
001ce630:  add      x8, sp, #0x488
001ce634:  add      x0, sp, #0x3b8
001ce638:  add      x20, sp, #0x488
001ce63c:  bl       #0x1cfb7c
001ce640:  adrp     x8, #0x307000
001ce644:  add      x8, x8, #0x4d0
001ce648:  mov      w9, #7
001ce64c:  ldp      q1, q2, [x8]
001ce650:  ldr      q0, [x8, #0x20]
001ce654:  ldr      x24, [x8, #0x30]
001ce658:  add      x8, sp, #0x690
001ce65c:  add      x22, x20, #0x50
001ce660:  str      x8, [sp, #0x4c8]
001ce664:  mov      w8, #0x10
001ce668:  stp      q2, q1, [sp, #0x60]
001ce66c:  str      q1, [sp, #0x690]
001ce670:  str      q2, [sp, #0x6a0]
001ce674:  str      q0, [sp, #0x80]
001ce678:  str      q0, [sp, #0x6b0]
001ce67c:  str      x24, [sp, #0x6c0]
001ce680:  str      x9, [sp, #0x4d0]
001ce684:  strb     w8, [sp, #0x3a0]
001ce688:  stur     x27, [x26, #0x31]
001ce68c:  strb     wzr, [sp, #0x3a9]
001ce690:  add      x0, sp, #0x3a0
001ce694:  mov      x8, x22
001ce698:  bl       #0x1cfb7c
001ce69c:  adrp     x8, #0x30d000
001ce6a0:  adrp     x9, #0x175000
001ce6a4:  add      x9, x9, #0x257
001ce6a8:  ldr      x8, [x8, #0x600]
001ce6ac:  str      x28, [sp, #0x408]
001ce6b0:  str      x9, [sp, #0x418]
001ce6b4:  ldr      q0, [x8]
001ce6b8:  mov      w8, #2
001ce6bc:  str      x21, [sp, #0xb0]
001ce6c0:  str      w8, [sp, #0x400]
001ce6c4:  mov      w8, #3
001ce6c8:  str      w8, [sp, #0x410]
001ce6cc:  mov      w8, #4
001ce6d0:  str      w8, [sp, #0x420]
001ce6d4:  adrp     x8, #0x177000
001ce6d8:  stur     q0, [x23, #0xa8]
001ce6dc:  ldr      q0, [x8, #0x8f0]
001ce6e0:  adrp     x8, #0x175000
001ce6e4:  add      x8, x8, #0x5c2
001ce6e8:  str      x8, [sp, #0x428]
001ce6ec:  str      q0, [sp, #0xa0]
001ce6f0:  add      x1, sp, #0x400
001ce6f4:  add      x4, sp, #0xa0
001ce6f8:  add      x5, sp, #0x488
001ce6fc:  mov      x0, x19
001ce700:  mov      w2, #3
001ce704:  mov      w3, #0x15
001ce708:  mov      w6, #2
001ce70c:  add      x28, sp, #0x488
001ce710:  bl       #0x300100
001ce714:  mov      x0, x21
001ce718:  bl       #0x2ff070
001ce71c:  ldr      x20, [sp, #0x508]
001ce720:  cbz      x20, #0x1ce74c
001ce724:  add      x1, x20, #8
001ce728:  mov      x0, #-1
001ce72c:  bl       #0x222ae0
001ce730:  cbnz     x0, #0x1ce74c
001ce734:  ldr      x8, [x20]
001ce738:  mov      x0, x20
001ce73c:  ldr      x8, [x8, #0x10]
001ce740:  blr      x8
001ce744:  mov      x0, x20
001ce748:  bl       #0x2ff0c0
001ce74c:  add      x0, x28, #0x50
001ce750:  bl       #0x3000b0
001ce754:  ldr      x20, [sp, #0x4b8]
001ce758:  cbz      x20, #0x1ce784
001ce75c:  add      x1, x20, #8
001ce760:  mov      x0, #-1
001ce764:  bl       #0x222ae0
001ce768:  cbnz     x0, #0x1ce784
001ce76c:  ldr      x8, [x20]
001ce770:  mov      x0, x20
001ce774:  ldr      x8, [x8, #0x10]
001ce778:  blr      x8
001ce77c:  mov      x0, x20
001ce780:  bl       #0x2ff0c0
001ce784:  add      x0, sp, #0x488
001ce788:  bl       #0x3000b0
001ce78c:  ldrb     w8, [sp, #0x3a0]
001ce790:  adrp     x28, #0x177000
001ce794:  add      x28, x28, #0x20a
001ce798:  tbz      w8, #0, #0x1ce7a4
001ce79c:  ldr      x0, [sp, #0x3b0]
001ce7a0:  bl       #0x2ff070
001ce7a4:  ldrb     w8, [sp, #0x3b8]
001ce7a8:  tbz      w8, #0, #0x1ce7b4
001ce7ac:  ldr      x0, [sp, #0x3c8]
001ce7b0:  bl       #0x2ff070
001ce7b4:  mov      w0, #0x40
001ce7b8:  bl       #0x2ff050
001ce7bc:  adrp     x8, #0x16e000
001ce7c0:  add      x8, x8, #0x172
001ce7c4:  mov      x21, x0
001ce7c8:  ldp      q0, q1, [x8]
001ce7cc:  ldr      q2, [x8, #0x20]
001ce7d0:  strb     wzr, [x0, #0x3b]
001ce7d4:  str      q2, [x0, #0x20]
001ce7d8:  stp      q0, q1, [x0]
001ce7dc:  ldur     q0, [x8, #0x2b]
001ce7e0:  mov      w8, #0x18
001ce7e4:  strb     w8, [sp, #0x388]
001ce7e8:  mov      w8, #0x6f69
001ce7ec:  movk     w8, #0x5d6e, lsl #16
001ce7f0:  stur     q0, [x0, #0x2b]
001ce7f4:  stur     w8, [x26, #0x21]
001ce7f8:  stur     x25, [x26, #0x19]
001ce7fc:  strb     wzr, [sp, #0x395]
001ce800:  add      x8, sp, #0x488
001ce804:  add      x0, sp, #0x388
001ce808:  add      x20, sp, #0x488
001ce80c:  bl       #0x1cfb7c
001ce810:  adrp     x8, #0x307000
001ce814:  add      x8, x8, #0x460
001ce818:  add      x9, sp, #0x690
001ce81c:  ldp      q0, q1, [x8]
001ce820:  ldr      q2, [x8, #0x20]
001ce824:  ldr      x8, [x8, #0x30]
001ce828:  add      x22, x20, #0x50
001ce82c:  str      x9, [sp, #0x4c8]
001ce830:  str      q2, [sp, #0x6b0]
001ce834:  str      x8, [sp, #0x6c0]
001ce838:  mov      w8, #7
001ce83c:  str      x8, [sp, #0x4d0]
001ce840:  mov      w8, #0x10
001ce844:  str      q0, [sp, #0x690]
001ce848:  str      q1, [sp, #0x6a0]
001ce84c:  strb     w8, [sp, #0x370]
001ce850:  stur     x27, [x26, #1]
001ce854:  strb     wzr, [sp, #0x379]
001ce858:  add      x0, sp, #0x370
001ce85c:  mov      x8, x22
001ce860:  bl       #0x1cfb7c
001ce864:  adrp     x8, #0x307000
001ce868:  add      x8, x8, #0x498
001ce86c:  add      x9, sp, #0x400
001ce870:  ldp      q0, q1, [x8]
001ce874:  ldr      q2, [x8, #0x20]
001ce878:  ldr      x8, [x8, #0x30]
001ce87c:  str      x9, [sp, #0x518]
001ce880:  adrp     x9, #0x175000
001ce884:  add      x9, x9, #0x257
001ce888:  str      q2, [sp, #0x420]
001ce88c:  str      x8, [sp, #0x430]
001ce890:  mov      w8, #7
001ce894:  str      x8, [sp, #0x520]
001ce898:  mov      w8, #2
001ce89c:  str      w8, [sp, #0xa0]
001ce8a0:  mov      w8, #3
001ce8a4:  str      w8, [sp, #0xb0]
001ce8a8:  mov      w8, #4
001ce8ac:  str      w8, [sp, #0xc0]
001ce8b0:  adrp     x8, #0x177000
001ce8b4:  str      q0, [sp, #0x400]
001ce8b8:  ldr      q0, [x8, #0x9a0]
001ce8bc:  adrp     x8, #0x175000
001ce8c0:  add      x8, x8, #0x5c2
001ce8c4:  str      q1, [sp, #0x410]
001ce8c8:  str      x28, [sp, #0xa8]
001ce8cc:  str      x9, [sp, #0xb8]
001ce8d0:  str      x8, [sp, #0xc8]
001ce8d4:  stur     q0, [x29, #-0x40]
001ce8d8:  stur     x21, [x29, #-0x30]
001ce8dc:  add      x1, sp, #0xa0
001ce8e0:  sub      x4, x29, #0x40
001ce8e4:  add      x5, sp, #0x488
001ce8e8:  mov      x0, x19
001ce8ec:  mov      w2, #3
001ce8f0:  mov      w3, #0x16
001ce8f4:  mov      w6, #2
001ce8f8:  add      x25, sp, #0x488
001ce8fc:  bl       #0x300100
001ce900:  mov      x0, x21
001ce904:  bl       #0x2ff070
001ce908:  ldr      x20, [sp, #0x508]
001ce90c:  cbz      x20, #0x1ce938
001ce910:  add      x1, x20, #8
001ce914:  mov      x0, #-1
001ce918:  bl       #0x222ae0
001ce91c:  cbnz     x0, #0x1ce938
001ce920:  ldr      x8, [x20]
001ce924:  mov      x0, x20
001ce928:  ldr      x8, [x8, #0x10]
001ce92c:  blr      x8
001ce930:  mov      x0, x20
001ce934:  bl       #0x2ff0c0
001ce938:  add      x0, x25, #0x50
001ce93c:  bl       #0x3000b0
001ce940:  ldr      x20, [sp, #0x4b8]
001ce944:  cbz      x20, #0x1ce970
001ce948:  add      x1, x20, #8
001ce94c:  mov      x0, #-1
001ce950:  bl       #0x222ae0
001ce954:  cbnz     x0, #0x1ce970
001ce958:  ldr      x8, [x20]
001ce95c:  mov      x0, x20
001ce960:  ldr      x8, [x8, #0x10]
001ce964:  blr      x8
001ce968:  mov      x0, x20
001ce96c:  bl       #0x2ff0c0
001ce970:  add      x0, sp, #0x488
001ce974:  bl       #0x3000b0
001ce978:  ldrb     w8, [sp, #0x370]
001ce97c:  tbz      w8, #0, #0x1ce988
001ce980:  ldr      x0, [sp, #0x380]
001ce984:  bl       #0x2ff070
001ce988:  ldrb     w8, [sp, #0x388]
001ce98c:  tbz      w8, #0, #0x1ce998
001ce990:  ldr      x0, [sp, #0x398]
001ce994:  bl       #0x2ff070
001ce998:  mov      w0, #0xb0
001ce99c:  bl       #0x2ff050
001ce9a0:  adrp     x8, #0x177000
001ce9a4:  mov      x21, x0
001ce9a8:  mov      w9, #0x2020
001ce9ac:  ldr      q0, [x8, #0x720]
001ce9b0:  adrp     x8, #0x16f000
001ce9b4:  add      x8, x8, #0xbc5
001ce9b8:  ldp      q1, q2, [x8, #0x60]
001ce9bc:  str      x0, [sp, #0x360]
001ce9c0:  str      q0, [sp, #0x350]
001ce9c4:  strh     w9, [x0, #0xa0]
001ce9c8:  stp      q1, q2, [x0, #0x60]
001ce9cc:  ldp      q0, q1, [x8, #0x80]
001ce9d0:  strb     wzr, [x0, #0xa2]
001ce9d4:  stp      q0, q1, [x0, #0x80]
001ce9d8:  ldp      q2, q0, [x8, #0x20]
001ce9dc:  stp      q2, q0, [x0, #0x20]
001ce9e0:  ldp      q1, q0, [x8, #0x40]
001ce9e4:  stp      q1, q0, [x0, #0x40]
001ce9e8:  ldp      q2, q0, [x8]
001ce9ec:  stp      q2, q0, [x0]
001ce9f0:  add      x2, sp, #0x350
001ce9f4:  mov      x0, x19
001ce9f8:  mov      w1, #0x17
001ce9fc:  bl       #0x300150
001cea00:  mov      x0, x21
001cea04:  bl       #0x2ff070
001cea08:  mov      w0, #0xb0
001cea0c:  bl       #0x2ff050
001cea10:  adrp     x8, #0x177000
001cea14:  mov      x21, x0
001cea18:  mov      w9, #0x20
001cea1c:  ldr      q0, [x8, #0xa40]
001cea20:  adrp     x8, #0x16f000
001cea24:  add      x8, x8, #0x7dd
001cea28:  ldp      q1, q2, [x8, #0x60]
001cea2c:  str      x0, [sp, #0x340]
001cea30:  str      q0, [sp, #0x330]
001cea34:  strb     w9, [x0, #0xa0]
001cea38:  stp      q1, q2, [x0, #0x60]
001cea3c:  ldp      q0, q1, [x8, #0x80]
001cea40:  strb     wzr, [x0, #0xa1]
001cea44:  stp      q0, q1, [x0, #0x80]
001cea48:  ldp      q2, q0, [x8, #0x20]
001cea4c:  stp      q2, q0, [x0, #0x20]
001cea50:  ldp      q1, q0, [x8, #0x40]
001cea54:  stp      q1, q0, [x0, #0x40]
001cea58:  ldp      q2, q0, [x8]
001cea5c:  stp      q2, q0, [x0]
001cea60:  add      x2, sp, #0x330
001cea64:  mov      x0, x19
001cea68:  mov      w1, #0x18
001cea6c:  bl       #0x300150
001cea70:  mov      x0, x21
001cea74:  bl       #0x2ff070
001cea78:  mov      w0, #0x30
001cea7c:  bl       #0x2ff050
001cea80:  adrp     x8, #0x173000
001cea84:  add      x8, x8, #0x641
001cea88:  adrp     x9, #0x177000
001cea8c:  ldp      q0, q1, [x8]
001cea90:  ldr      q2, [x9, #0x7f0]
001cea94:  ldur     x21, [x8, #0x1e]
001cea98:  mov      w8, #0x10
001cea9c:  add      x22, sp, #0x228
001ceaa0:  str      x0, [sp, #0x320]
001ceaa4:  stp      q1, q0, [sp, #0x40]
001ceaa8:  stp      q0, q1, [x0]
001ceaac:  str      q2, [sp, #0x30]
001ceab0:  str      q2, [sp, #0x310]
001ceab4:  stur     x21, [x0, #0x1e]
001ceab8:  strb     wzr, [x0, #0x26]
001ceabc:  strb     w8, [sp, #0x2a8]
001ceac0:  stur     x27, [x22, #0x81]
001ceac4:  strb     wzr, [sp, #0x2b1]
001ceac8:  add      x8, sp, #0x2c0
001ceacc:  add      x0, sp, #0x2a8
001cead0:  bl       #0x1cfb7c
001cead4:  adrp     x8, #0x30d000
001cead8:  ldr      x8, [x8, #0x600]
001ceadc:  ldr      q0, [x8]
001ceae0:  str      q0, [sp, #0x300]
001ceae4:  add      x2, sp, #0x310
001ceae8:  add      x3, sp, #0x2c0
001ceaec:  mov      x0, x19
001ceaf0:  mov      w1, #0x19
001ceaf4:  bl       #0x300140
001ceaf8:  ldr      x20, [sp, #0x2f0]
001ceafc:  cbz      x20, #0x1ceb28
001ceb00:  add      x1, x20, #8
001ceb04:  mov      x0, #-1
001ceb08:  bl       #0x222ae0
001ceb0c:  cbnz     x0, #0x1ceb28
001ceb10:  ldr      x8, [x20]
001ceb14:  mov      x0, x20
001ceb18:  ldr      x8, [x8, #0x10]
001ceb1c:  blr      x8
001ceb20:  mov      x0, x20
001ceb24:  bl       #0x2ff0c0
001ceb28:  add      x0, sp, #0x2c0
001ceb2c:  bl       #0x3000b0
001ceb30:  ldrb     w8, [sp, #0x2a8]
001ceb34:  tbz      w8, #0, #0x1ceb40
001ceb38:  ldr      x0, [sp, #0x2b8]
001ceb3c:  bl       #0x2ff070
001ceb40:  ldrb     w8, [sp, #0x310]
001ceb44:  tbz      w8, #0, #0x1ceb50
001ceb48:  ldr      x0, [sp, #0x320]
001ceb4c:  bl       #0x2ff070
001ceb50:  mov      w0, #0x30
001ceb54:  bl       #0x2ff050
001ceb58:  ldr      q0, [sp, #0x30]
001ceb5c:  mov      w8, #0x10
001ceb60:  str      x0, [sp, #0x2a0]
001ceb64:  strb     wzr, [x0, #0x26]
001ceb68:  str      q0, [sp, #0x290]
001ceb6c:  ldp      q0, q1, [sp, #0x40]
001ceb70:  strb     w8, [sp, #0x228]
001ceb74:  stur     x27, [x22, #1]
001ceb78:  stp      q1, q0, [x0]
001ceb7c:  stur     x21, [x0, #0x1e]
001ceb80:  strb     wzr, [sp, #0x231]
001ceb84:  add      x8, sp, #0x240
001ceb88:  add      x0, sp, #0x228
001ceb8c:  bl       #0x1cfb7c
001ceb90:  adrp     x8, #0x30d000
001ceb94:  ldr      x8, [x8, #0x608]
001ceb98:  ldr      q0, [x8]
001ceb9c:  str      q0, [sp, #0x280]
001ceba0:  add      x2, sp, #0x290
001ceba4:  add      x3, sp, #0x240
001ceba8:  mov      x0, x19
001cebac:  mov      w1, #0x1a
001cebb0:  bl       #0x300140
001cebb4:  ldr      x20, [sp, #0x270]
001cebb8:  cbz      x20, #0x1cebe4
001cebbc:  add      x1, x20, #8
001cebc0:  mov      x0, #-1
001cebc4:  bl       #0x222ae0
001cebc8:  cbnz     x0, #0x1cebe4
001cebcc:  ldr      x8, [x20]
001cebd0:  mov      x0, x20
001cebd4:  ldr      x8, [x8, #0x10]
001cebd8:  blr      x8
001cebdc:  mov      x0, x20
001cebe0:  bl       #0x2ff0c0
001cebe4:  add      x0, sp, #0x240
001cebe8:  bl       #0x3000b0
001cebec:  ldrb     w8, [sp, #0x228]
001cebf0:  tbz      w8, #0, #0x1cebfc
001cebf4:  ldr      x0, [sp, #0x238]
001cebf8:  bl       #0x2ff070
001cebfc:  ldrb     w8, [sp, #0x290]
001cec00:  tbz      w8, #0, #0x1cec0c
001cec04:  ldr      x0, [sp, #0x2a0]
001cec08:  bl       #0x2ff070
001cec0c:  mov      w0, #0x50
001cec10:  bl       #0x2ff050
001cec14:  ldr      q0, [sp, #0x90]
001cec18:  adrp     x9, #0x16f000
001cec1c:  add      x9, x9, #0xc68
001cec20:  mov      w8, #0x6974
001cec24:  add      x21, sp, #0x128
001cec28:  str      x0, [sp, #0x220]
001cec2c:  str      q0, [sp, #0x210]
001cec30:  ldp      q0, q1, [x9]
001cec34:  movk     w8, #0x6e6f, lsl #16
001cec38:  strb     wzr, [x0, #0x43]
001cec3c:  stur     w8, [x0, #0x3f]
001cec40:  mov      w8, #0x10
001cec44:  stp      q0, q1, [x0]
001cec48:  ldp      q2, q0, [x9, #0x20]
001cec4c:  strb     w8, [sp, #0x1a8]
001cec50:  stur     x27, [x21, #0x81]
001cec54:  stp      q2, q0, [x0, #0x20]
001cec58:  strb     wzr, [sp, #0x1b1]
001cec5c:  add      x8, sp, #0x1c0
001cec60:  add      x0, sp, #0x1a8
001cec64:  bl       #0x1cfb7c
001cec68:  adrp     x8, #0x30d000
001cec6c:  ldr      x8, [x8, #0x600]
001cec70:  ldr      q0, [x8]
001cec74:  str      q0, [sp, #0x200]
001cec78:  add      x2, sp, #0x210
001cec7c:  add      x3, sp, #0x1c0
001cec80:  mov      x0, x19
001cec84:  mov      w1, #0x1b
001cec88:  bl       #0x300140
001cec8c:  ldr      x20, [sp, #0x1f0]
001cec90:  cbz      x20, #0x1cecbc
001cec94:  add      x1, x20, #8
001cec98:  mov      x0, #-1
001cec9c:  bl       #0x222ae0
001ceca0:  cbnz     x0, #0x1cecbc
001ceca4:  ldr      x8, [x20]
001ceca8:  mov      x0, x20
001cecac:  ldr      x8, [x8, #0x10]
001cecb0:  blr      x8
001cecb4:  mov      x0, x20
001cecb8:  bl       #0x2ff0c0
001cecbc:  add      x0, sp, #0x1c0
001cecc0:  bl       #0x3000b0
001cecc4:  ldrb     w8, [sp, #0x1a8]
001cecc8:  tbz      w8, #0, #0x1cecd4
001ceccc:  ldr      x0, [sp, #0x1b8]
001cecd0:  bl       #0x2ff070
001cecd4:  ldrb     w8, [sp, #0x210]
001cecd8:  tbz      w8, #0, #0x1cece4
001cecdc:  ldr      x0, [sp, #0x220]
001cece0:  bl       #0x2ff070
001cece4:  mov      w0, #0x50
001cece8:  bl       #0x2ff050
001cecec:  adrp     x8, #0x177000
001cecf0:  mov      w9, #0x6974
001cecf4:  str      x0, [sp, #0x1a0]
001cecf8:  ldr      q0, [x8, #0x7b0]
001cecfc:  adrp     x8, #0x170000
001ced00:  add      x8, x8, #0x15e
001ced04:  ldp      q1, q2, [x8]
001ced08:  movk     w9, #0x6e6f, lsl #16
001ced0c:  str      q0, [sp, #0x190]
001ced10:  str      w9, [x0, #0x40]
001ced14:  stp      q1, q2, [x0]
001ced18:  ldp      q0, q1, [x8, #0x20]
001ced1c:  mov      w8, #0x10
001ced20:  strb     wzr, [x0, #0x44]
001ced24:  strb     w8, [sp, #0x128]
001ced28:  stp      q0, q1, [x0, #0x20]
001ced2c:  stur     x27, [x21, #1]
001ced30:  strb     wzr, [sp, #0x131]
001ced34:  add      x8, sp, #0x140
001ced38:  add      x0, sp, #0x128
001ced3c:  bl       #0x1cfb7c
001ced40:  adrp     x8, #0x30d000
001ced44:  ldr      x8, [x8, #0x600]
001ced48:  ldr      q0, [x8]
001ced4c:  str      q0, [sp, #0x180]
001ced50:  add      x2, sp, #0x190
001ced54:  add      x3, sp, #0x140
001ced58:  mov      x0, x19
001ced5c:  mov      w1, #0x1c
001ced60:  bl       #0x300140
001ced64:  ldr      x20, [sp, #0x170]
001ced68:  cbz      x20, #0x1ced94
001ced6c:  add      x1, x20, #8
001ced70:  mov      x0, #-1
001ced74:  bl       #0x222ae0
001ced78:  cbnz     x0, #0x1ced94
001ced7c:  ldr      x8, [x20]
001ced80:  mov      x0, x20
001ced84:  ldr      x8, [x8, #0x10]
001ced88:  blr      x8
001ced8c:  mov      x0, x20
001ced90:  bl       #0x2ff0c0
001ced94:  add      x0, sp, #0x140
001ced98:  bl       #0x3000b0
001ced9c:  ldrb     w8, [sp, #0x128]
001ceda0:  tbz      w8, #0, #0x1cedac
001ceda4:  ldr      x0, [sp, #0x138]
001ceda8:  bl       #0x2ff070
001cedac:  ldrb     w8, [sp, #0x190]
001cedb0:  tbz      w8, #0, #0x1cedbc
001cedb4:  ldr      x0, [sp, #0x1a0]
001cedb8:  bl       #0x2ff070
001cedbc:  mov      w0, #0x100
001cedc0:  bl       #0x2ff050
001cedc4:  adrp     x8, #0x173000
001cedc8:  add      x8, x8, #0x668
001cedcc:  mov      x21, x0
001cedd0:  ldp      q0, q1, [x8, #0xc0]
001cedd4:  ldr      q2, [x8, #0xe0]
001cedd8:  add      x9, sp, #0x12
001ceddc:  strb     wzr, [x0, #0xf0]
001cede0:  str      q2, [x0, #0xe0]
001cede4:  stp      q0, q1, [x0, #0xc0]
001cede8:  ldp      q0, q1, [x8, #0x80]
001cedec:  strb     wzr, [sp, #0x115]
001cedf0:  stp      q0, q1, [x0, #0x80]
001cedf4:  ldp      q0, q2, [x8, #0xa0]
001cedf8:  stp      q0, q2, [x0, #0xa0]
001cedfc:  ldp      q1, q0, [x8, #0x40]
001cee00:  stp      q1, q0, [x0, #0x40]
001cee04:  ldp      q0, q2, [x8, #0x60]
001cee08:  stp      q0, q2, [x0, #0x60]
001cee0c:  ldp      q1, q0, [x8]
001cee10:  stp      q1, q0, [x0]
001cee14:  ldp      q0, q2, [x8, #0x20]
001cee18:  mov      w8, #8
001cee1c:  strb     w8, [sp, #0x110]
001cee20:  mov      w8, #0x695b
001cee24:  movk     w8, #0x5d64, lsl #16
001cee28:  stp      q0, q2, [x0, #0x20]
001cee2c:  stur     w8, [x9, #0xff]
001cee30:  add      x8, sp, #0x488
001cee34:  add      x0, sp, #0x110
001cee38:  add      x20, sp, #0x488
001cee3c:  bl       #0x1cfb7c
001cee40:  add      x8, sp, #0x690
001cee44:  ldp      q0, q1, [sp, #0x60]
001cee48:  str      x8, [sp, #0x4c8]
001cee4c:  mov      w8, #0x16
001cee50:  mov      w9, #7
001cee54:  strb     w8, [sp, #0xf8]
001cee58:  mov      w8, #0x6574
001cee5c:  add      x22, x20, #0x50
001cee60:  movk     w8, #0x5d72, lsl #16
001cee64:  str      q0, [sp, #0x6a0]
001cee68:  ldr      q0, [sp, #0x80]
001cee6c:  str      w8, [sp, #0x100]
001cee70:  adrp     x8, #0x170000
001cee74:  add      x8, x8, #0xefb
001cee78:  ldr      x8, [x8]
001cee7c:  str      q1, [sp, #0x690]
001cee80:  str      x24, [sp, #0x6c0]
001cee84:  str      x9, [sp, #0x4d0]
001cee88:  str      q0, [sp, #0x6b0]
001cee8c:  stur     x8, [sp, #0xf9]
001cee90:  strb     wzr, [sp, #0x104]
001cee94:  add      x0, sp, #0xf8
001cee98:  mov      x8, x22
001cee9c:  bl       #0x1cfb7c
001ceea0:  adrp     x8, #0x307000
001ceea4:  add      x8, x8, #0x508
001ceea8:  add      x9, sp, #0x400
001ceeac:  ldp      q0, q1, [x8]
001ceeb0:  ldr      q2, [x8, #0x20]
001ceeb4:  ldr      x8, [x8, #0x30]
001ceeb8:  str      x9, [sp, #0x518]
001ceebc:  mov      w9, #0x22
001ceec0:  strb     w9, [sp, #0xe0]
001ceec4:  adrp     x9, #0x175000
001ceec8:  add      x9, x9, #0x5cf
001ceecc:  str      q0, [sp, #0x400]
001ceed0:  ldr      q0, [x9]
001ceed4:  add      x9, sp, #0x488
001ceed8:  str      x8, [sp, #0x430]
001ceedc:  mov      w8, #7
001ceee0:  add      x22, x9, #0xa0
001ceee4:  str      x8, [sp, #0x520]
001ceee8:  mov      w8, #0x5d
001ceeec:  str      q1, [sp, #0x410]
001ceef0:  str      q2, [sp, #0x420]
001ceef4:  sturh    w8, [sp, #0xf1]
001ceef8:  stur     q0, [sp, #0xe1]
001ceefc:  add      x0, sp, #0xe0
001cef00:  mov      x8, x22
001cef04:  bl       #0x1cfb7c
001cef08:  adrp     x8, #0x307000
001cef0c:  add      x8, x8, #0x540
001cef10:  add      x9, sp, #0xa0
001cef14:  ldp      q0, q1, [x8]
001cef18:  ldr      q2, [x8, #0x20]
001cef1c:  ldr      x8, [x8, #0x30]
001cef20:  str      x9, [sp, #0x568]
001cef24:  adrp     x9, #0x177000
001cef28:  str      q2, [sp, #0xc0]
001cef2c:  str      x8, [sp, #0xd0]
001cef30:  mov      w8, #7
001cef34:  str      x8, [sp, #0x570]
001cef38:  mov      w8, #2
001cef3c:  stur     w8, [x29, #-0x40]
001cef40:  mov      w8, #3
001cef44:  stur     w8, [x29, #-0x30]
001cef48:  adrp     x8, #0x175000
001cef4c:  add      x8, x8, #0x257
001cef50:  stp      q0, q1, [sp, #0xa0]
001cef54:  ldr      q0, [x9, #0x5b0]
001cef58:  stur     x8, [x29, #-0x28]
001cef5c:  mov      w8, #4
001cef60:  stur     w8, [x29, #-0x20]
001cef64:  adrp     x8, #0x175000
001cef68:  add      x8, x8, #0x5c2
001cef6c:  stur     x28, [x29, #-0x38]
001cef70:  stur     x8, [x29, #-0x18]
001cef74:  stur     q0, [x29, #-0x60]
001cef78:  stur     x21, [x29, #-0x50]
001cef7c:  sub      x1, x29, #0x40
001cef80:  sub      x4, x29, #0x60
001cef84:  add      x5, sp, #0x488
001cef88:  mov      x0, x19
001cef8c:  mov      w2, #3
001cef90:  mov      w3, #0x1d
001cef94:  mov      w6, #3
001cef98:  add      x24, sp, #0x488
001cef9c:  bl       #0x300100
001cefa0:  mov      x0, x21
001cefa4:  bl       #0x2ff070
001cefa8:  ldr      x20, [sp, #0x558]
001cefac:  cbz      x20, #0x1cefd8
001cefb0:  add      x1, x20, #8
001cefb4:  mov      x0, #-1
001cefb8:  bl       #0x222ae0
001cefbc:  cbnz     x0, #0x1cefd8
001cefc0:  ldr      x8, [x20]
001cefc4:  mov      x0, x20
001cefc8:  ldr      x8, [x8, #0x10]
001cefcc:  blr      x8
001cefd0:  mov      x0, x20
001cefd4:  bl       #0x2ff0c0
001cefd8:  add      x0, x24, #0xa0
001cefdc:  bl       #0x3000b0
001cefe0:  ldr      x20, [sp, #0x508]
001cefe4:  add      x21, sp, #0x488
001cefe8:  cbz      x20, #0x1cf014
001cefec:  add      x1, x20, #8
001ceff0:  mov      x0, #-1
001ceff4:  bl       #0x222ae0
001ceff8:  cbnz     x0, #0x1cf014
001ceffc:  ldr      x8, [x20]
001cf000:  mov      x0, x20
001cf004:  ldr      x8, [x8, #0x10]
001cf008:  blr      x8
001cf00c:  mov      x0, x20
001cf010:  bl       #0x2ff0c0
001cf014:  add      x0, x21, #0x50
001cf018:  bl       #0x3000b0
001cf01c:  ldr      x20, [sp, #0x4b8]
001cf020:  cbz      x20, #0x1cf04c
001cf024:  add      x1, x20, #8
001cf028:  mov      x0, #-1
001cf02c:  bl       #0x222ae0
001cf030:  cbnz     x0, #0x1cf04c
001cf034:  ldr      x8, [x20]
001cf038:  mov      x0, x20
001cf03c:  ldr      x8, [x8, #0x10]
001cf040:  blr      x8
001cf044:  mov      x0, x20
001cf048:  bl       #0x2ff0c0
001cf04c:  add      x0, sp, #0x488
001cf050:  bl       #0x3000b0
001cf054:  ldrb     w8, [sp, #0xe0]
001cf058:  tbnz     w8, #0, #0x1cf128
001cf05c:  ldrb     w8, [sp, #0xf8]
001cf060:  tbnz     w8, #0, #0x1cf138
001cf064:  ldrb     w8, [sp, #0x110]
001cf068:  tbz      w8, #0, #0x1cf074
001cf06c:  ldr      x0, [sp, #0x120]
001cf070:  bl       #0x2ff070
001cf074:  mov      w0, #0x1f0
001cf078:  bl       #0x2ff050
001cf07c:  adrp     x1, #0x170000
001cf080:  add      x1, x1, #0xf07
001cf084:  mov      w2, #0x1e2
001cf088:  mov      x20, x0
001cf08c:  mov      w21, #0x1e2
001cf090:  bl       #0x2ff1b0
001cf094:  adrp     x8, #0x178000
001cf098:  mov      w9, #0xf1
001cf09c:  strb     wzr, [x20, #0x1e2]
001cf0a0:  ldr      d0, [x8, #0x18]
001cf0a4:  mov      w8, #1
001cf0a8:  strb     w9, [sp, #0x498]
001cf0ac:  stur     w8, [x23, #0x29]
001cf0b0:  ldp      x8, x9, [x19, #8]
001cf0b4:  str      wzr, [sp, #0x490]
001cf0b8:  str      d0, [sp, #0x488]
001cf0bc:  cmp      x8, x9
001cf0c0:  strb     wzr, [sp, #0x49f]
001cf0c4:  sturh    wzr, [x23, #0x2d]
001cf0c8:  str      x21, [sp, #0x4a0]
001cf0cc:  str      x20, [sp, #0x4a8]
001cf0d0:  b.hs     #0x1cf14c
001cf0d4:  ldr      w9, [sp, #0x490]
001cf0d8:  ldr      x10, [sp, #0x488]
001cf0dc:  str      w9, [x8, #8]
001cf0e0:  add      x9, sp, #0x488
001cf0e4:  str      x10, [x8]
001cf0e8:  ldur     x10, [x9, #0x20]
001cf0ec:  ldur     q0, [x9, #0x10]
001cf0f0:  add      x9, x8, #0x28
001cf0f4:  str      x10, [x8, #0x20]
001cf0f8:  str      q0, [x8, #0x10]
001cf0fc:  str      x9, [x19, #8]
001cf100:  b        #0x1cf16c
001cf104:  ldr      x0, [sp, #0x450]
001cf108:  bl       #0x2ff070
001cf10c:  ldrb     w8, [sp, #0x458]
001cf110:  tbz      w8, #0, #0x1ce420
001cf114:  ldr      x0, [sp, #0x468]
001cf118:  bl       #0x2ff070
001cf11c:  ldrb     w8, [sp, #0x470]
001cf120:  tbnz     w8, #0, #0x1ce428
001cf124:  b        #0x1ce430
001cf128:  ldr      x0, [sp, #0xf0]
001cf12c:  bl       #0x2ff070
001cf130:  ldrb     w8, [sp, #0xf8]
001cf134:  tbz      w8, #0, #0x1cf064
001cf138:  ldr      x0, [sp, #0x108]
001cf13c:  bl       #0x2ff070
001cf140:  ldrb     w8, [sp, #0x110]
001cf144:  tbnz     w8, #0, #0x1cf06c
001cf148:  b        #0x1cf074
001cf14c:  add      x1, sp, #0x488
001cf150:  mov      x0, x19
001cf154:  bl       #0x3000f0
001cf158:  ldrb     w8, [sp, #0x498]
001cf15c:  str      x0, [x19, #8]
001cf160:  tbz      w8, #0, #0x1cf16c
001cf164:  ldr      x0, [sp, #0x4a8]
001cf168:  bl       #0x2ff070
001cf16c:  mov      w0, #0x140
001cf170:  bl       #0x2ff050
001cf174:  adrp     x1, #0x173000
001cf178:  add      x1, x1, #0xcc9
001cf17c:  mov      w2, #0x134
001cf180:  mov      x20, x0
001cf184:  mov      w21, #0x134
001cf188:  bl       #0x2ff1b0
001cf18c:  adrp     x8, #0x177000
001cf190:  mov      w9, #0x41
001cf194:  strb     wzr, [x20, #0x134]
001cf198:  ldr      d0, [x8, #0xec0]
001cf19c:  mov      w8, #1
001cf1a0:  strb     w9, [sp, #0x498]
001cf1a4:  stur     w8, [x23, #0x29]
001cf1a8:  ldp      x8, x9, [x19, #8]
001cf1ac:  str      wzr, [sp, #0x490]
001cf1b0:  str      d0, [sp, #0x488]
001cf1b4:  cmp      x8, x9
001cf1b8:  strb     wzr, [sp, #0x49f]
001cf1bc:  sturh    wzr, [x23, #0x2d]
001cf1c0:  str      x21, [sp, #0x4a0]
001cf1c4:  str      x20, [sp, #0x4a8]
001cf1c8:  b.hs     #0x1cf1fc
001cf1cc:  ldr      w9, [sp, #0x490]
001cf1d0:  ldr      x10, [sp, #0x488]
001cf1d4:  str      w9, [x8, #8]
001cf1d8:  add      x9, sp, #0x488
001cf1dc:  str      x10, [x8]
001cf1e0:  ldur     x10, [x9, #0x20]
001cf1e4:  ldur     q0, [x9, #0x10]
001cf1e8:  add      x9, x8, #0x28
001cf1ec:  str      x10, [x8, #0x20]
001cf1f0:  str      q0, [x8, #0x10]
001cf1f4:  str      x9, [x19, #8]
001cf1f8:  b        #0x1cf21c
001cf1fc:  add      x1, sp, #0x488
001cf200:  mov      x0, x19
001cf204:  bl       #0x3000f0
001cf208:  ldrb     w8, [sp, #0x498]
001cf20c:  str      x0, [x19, #8]
001cf210:  tbz      w8, #0, #0x1cf21c
001cf214:  ldr      x0, [sp, #0x4a8]
001cf218:  bl       #0x2ff070
001cf21c:  mov      w0, #0x2f0
001cf220:  bl       #0x2ff050
001cf224:  adrp     x1, #0x173000
001cf228:  add      x1, x1, #0xdfe
001cf22c:  mov      w2, #0x2e8
001cf230:  mov      x20, x0
001cf234:  mov      w21, #0x2e8
001cf238:  bl       #0x2ff1b0
001cf23c:  adrp     x8, #0x177000
001cf240:  mov      w9, #0xf1
001cf244:  strb     wzr, [x20, #0x2e8]
001cf248:  ldr      d0, [x8, #0xe90]
001cf24c:  mov      w8, #2
001cf250:  strb     w9, [sp, #0x498]
001cf254:  stur     w8, [x23, #0x29]
001cf258:  ldp      x8, x9, [x19, #8]
001cf25c:  str      wzr, [sp, #0x490]
001cf260:  str      d0, [sp, #0x488]
001cf264:  cmp      x8, x9
001cf268:  strb     wzr, [sp, #0x49f]
001cf26c:  sturh    wzr, [x23, #0x2d]
001cf270:  str      x21, [sp, #0x4a0]
001cf274:  str      x20, [sp, #0x4a8]
001cf278:  b.hs     #0x1cf2ac
001cf27c:  ldr      w9, [sp, #0x490]
001cf280:  ldr      x10, [sp, #0x488]
001cf284:  str      w9, [x8, #8]
001cf288:  add      x9, sp, #0x488
001cf28c:  str      x10, [x8]
001cf290:  ldur     x10, [x9, #0x20]
001cf294:  ldur     q0, [x9, #0x10]
001cf298:  add      x9, x8, #0x28
001cf29c:  str      x10, [x8, #0x20]
001cf2a0:  str      q0, [x8, #0x10]
001cf2a4:  str      x9, [x19, #8]
001cf2a8:  b        #0x1cf2cc
001cf2ac:  add      x1, sp, #0x488
001cf2b0:  mov      x0, x19
001cf2b4:  bl       #0x3000f0
001cf2b8:  ldrb     w8, [sp, #0x498]
001cf2bc:  str      x0, [x19, #8]
001cf2c0:  tbz      w8, #0, #0x1cf2cc
001cf2c4:  ldr      x0, [sp, #0x4a8]
001cf2c8:  bl       #0x2ff070
001cf2cc:  mov      w0, #0x2e0
001cf2d0:  bl       #0x2ff050
001cf2d4:  adrp     x1, #0x174000
001cf2d8:  add      x1, x1, #0xe7
001cf2dc:  mov      w2, #0x2da
001cf2e0:  mov      x20, x0
001cf2e4:  mov      w21, #0x2da
001cf2e8:  bl       #0x2ff1b0
001cf2ec:  adrp     x8, #0x177000
001cf2f0:  mov      w9, #0xe1
001cf2f4:  strb     wzr, [x20, #0x2da]
001cf2f8:  ldr      d0, [x8, #0xff0]
001cf2fc:  mov      w8, #2
001cf300:  strb     w9, [sp, #0x498]
001cf304:  stur     w8, [x23, #0x29]
001cf308:  ldp      x8, x9, [x19, #8]
001cf30c:  str      wzr, [sp, #0x490]
001cf310:  str      d0, [sp, #0x488]
001cf314:  cmp      x8, x9
001cf318:  strb     wzr, [sp, #0x49f]
001cf31c:  sturh    wzr, [x23, #0x2d]
001cf320:  str      x21, [sp, #0x4a0]
001cf324:  str      x20, [sp, #0x4a8]
001cf328:  b.hs     #0x1cf35c
001cf32c:  ldr      w9, [sp, #0x490]
001cf330:  ldr      x10, [sp, #0x488]
001cf334:  str      w9, [x8, #8]
001cf338:  add      x9, sp, #0x488
001cf33c:  str      x10, [x8]
001cf340:  ldur     x10, [x9, #0x20]
001cf344:  ldur     q0, [x9, #0x10]
001cf348:  add      x9, x8, #0x28
001cf34c:  str      x10, [x8, #0x20]
001cf350:  str      q0, [x8, #0x10]
001cf354:  str      x9, [x19, #8]
001cf358:  b        #0x1cf37c
001cf35c:  add      x1, sp, #0x488
001cf360:  mov      x0, x19
001cf364:  bl       #0x3000f0
001cf368:  ldrb     w8, [sp, #0x498]
001cf36c:  str      x0, [x19, #8]
001cf370:  tbz      w8, #0, #0x1cf37c
001cf374:  ldr      x0, [sp, #0x4a8]
001cf378:  bl       #0x2ff070
001cf37c:  mov      w0, #0x270
001cf380:  bl       #0x2ff050
001cf384:  adrp     x1, #0x172000
001cf388:  add      x1, x1, #0x397
001cf38c:  mov      w2, #0x264
001cf390:  mov      x20, x0
001cf394:  bl       #0x2ff1b0
001cf398:  adrp     x8, #0x178000
001cf39c:  adrp     x10, #0x177000
001cf3a0:  mov      w9, #3
001cf3a4:  ldr      d0, [x8, #0x60]
001cf3a8:  ldp      x8, x11, [x19, #8]
001cf3ac:  ldr      q1, [x10, #0x900]
001cf3b0:  strb     wzr, [x20, #0x264]
001cf3b4:  str      w9, [sp, #0x490]
001cf3b8:  cmp      x8, x11
001cf3bc:  str      d0, [sp, #0x488]
001cf3c0:  stur     q1, [x23, #0x28]
001cf3c4:  str      x20, [sp, #0x4a8]
001cf3c8:  b.hs     #0x1cf3fc
001cf3cc:  ldr      w9, [sp, #0x490]
001cf3d0:  ldr      x10, [sp, #0x488]
001cf3d4:  str      w9, [x8, #8]
001cf3d8:  add      x9, sp, #0x488
001cf3dc:  str      x10, [x8]
001cf3e0:  ldur     x10, [x9, #0x20]
001cf3e4:  ldur     q0, [x9, #0x10]
001cf3e8:  add      x9, x8, #0x28
001cf3ec:  str      x10, [x8, #0x20]
001cf3f0:  str      q0, [x8, #0x10]
001cf3f4:  str      x9, [x19, #8]
001cf3f8:  b        #0x1cf41c
001cf3fc:  add      x1, sp, #0x488
001cf400:  mov      x0, x19
001cf404:  bl       #0x3000f0
001cf408:  ldrb     w8, [sp, #0x498]
001cf40c:  str      x0, [x19, #8]
001cf410:  tbz      w8, #0, #0x1cf41c
001cf414:  ldr      x0, [sp, #0x4a8]
001cf418:  bl       #0x2ff070
001cf41c:  add      sp, sp, #0x7e0
001cf420:  ldp      x20, x19, [sp, #0x50]
001cf424:  ldp      x22, x21, [sp, #0x40]
001cf428:  ldp      x24, x23, [sp, #0x30]
001cf42c:  ldp      x26, x25, [sp, #0x20]
001cf430:  ldp      x28, x27, [sp, #0x10]
001cf434:  ldp      x29, x30, [sp], #0x60
001cf438:  ret      

