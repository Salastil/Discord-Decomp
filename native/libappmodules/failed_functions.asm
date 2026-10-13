; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 006ca350  FUN_006ca350  (1152 bytes) =====
006ca350:  stp      x29, x30, [sp, #-0x30]!
006ca354:  str      x28, [sp, #0x10]
006ca358:  stp      x20, x19, [sp, #0x20]
006ca35c:  mov      x29, sp
006ca360:  sub      sp, sp, #0x490
006ca364:  cmp      x1, #2
006ca368:  str      xzr, [sp]
006ca36c:  b.lo     #0x6ca7b8
006ca370:  lsr      x8, x1, #1
006ca374:  mov      x20, x1
006ca378:  mov      x19, x0
006ca37c:  cmp      x1, #8
006ca380:  add      x9, x8, x8, lsl #1
006ca384:  b.lo     #0x6ca53c
006ca388:  ldr      x11, [x19, #0x18]
006ca38c:  ldr      x12, [x19]
006ca390:  mov      w10, #0x18
006ca394:  ldr      x13, [x19, #0x48]
006ca398:  ldr      x14, [x19, #0x30]
006ca39c:  cmp      x11, x12
006ca3a0:  mov      w11, #0x30
006ca3a4:  mov      w12, #0x48
006ca3a8:  cset     w15, hs
006ca3ac:  cset     w16, lo
006ca3b0:  cmp      x13, x14
006ca3b4:  umaddl   x14, w15, w10, x19
006ca3b8:  csel     x13, x11, x12, lo
006ca3bc:  umaddl   x15, w16, w10, x19
006ca3c0:  csel     x16, x12, x11, lo
006ca3c4:  add      x17, x19, x13
006ca3c8:  add      x16, x19, x16
006ca3cc:  ldr      x0, [x17]
006ca3d0:  ldr      x1, [x14]
006ca3d4:  ldr      x13, [x16]
006ca3d8:  ldr      x2, [x15]
006ca3dc:  cmp      x0, x1
006ca3e0:  csel     x3, x16, x14, lo
006ca3e4:  cmp      x13, x2
006ca3e8:  lsl      x13, x9, #3
006ca3ec:  csel     x2, x16, x15, lo
006ca3f0:  csel     x15, x15, x3, lo
006ca3f4:  csel     x16, x14, x16, lo
006ca3f8:  cmp      x0, x1
006ca3fc:  add      x0, x19, x13
006ca400:  ldr      x1, [x15]
006ca404:  csel     x16, x17, x16, lo
006ca408:  ldr      x4, [x0, #0x18]
006ca40c:  ldr      x5, [x0]
006ca410:  ldr      x3, [x16]
006ca414:  csel     x17, x14, x17, lo
006ca418:  ldr      q0, [x2]
006ca41c:  cmp      x3, x1
006ca420:  ldr      x1, [x0, #0x48]
006ca424:  str      q0, [sp]
006ca428:  csel     x3, x16, x15, lo
006ca42c:  csel     x14, x15, x16, lo
006ca430:  ldr      x15, [x0, #0x30]
006ca434:  cmp      x4, x5
006ca438:  ldr      q0, [x17]
006ca43c:  ldr      x17, [x17, #0x10]
006ca440:  cset     w16, hs
006ca444:  cset     w4, lo
006ca448:  cmp      x1, x15
006ca44c:  umaddl   x15, w16, w10, x0
006ca450:  csel     x1, x11, x12, lo
006ca454:  ldr      x16, [x2, #0x10]
006ca458:  umaddl   x10, w4, w10, x0
006ca45c:  add      x1, x0, x1
006ca460:  csel     x11, x12, x11, lo
006ca464:  ldr      x12, [x1]
006ca468:  add      x11, x0, x11
006ca46c:  str      x16, [sp, #0x10]
006ca470:  ldr      x2, [x15]
006ca474:  ldr      x16, [x11]
006ca478:  stur     q0, [sp, #0x48]
006ca47c:  ldr      x0, [x10]
006ca480:  str      x17, [sp, #0x58]
006ca484:  ldr      x17, [x3, #0x10]
006ca488:  cmp      x12, x2
006ca48c:  ldr      q0, [x3]
006ca490:  csel     x4, x11, x15, lo
006ca494:  cmp      x16, x0
006ca498:  str      x17, [sp, #0x28]
006ca49c:  csel     x0, x11, x10, lo
006ca4a0:  csel     x10, x10, x4, lo
006ca4a4:  csel     x11, x15, x11, lo
006ca4a8:  cmp      x12, x2
006ca4ac:  stur     q0, [sp, #0x18]
006ca4b0:  ldr      q0, [x14]
006ca4b4:  csel     x11, x1, x11, lo
006ca4b8:  ldr      x12, [x10]
006ca4bc:  ldr      x14, [x14, #0x10]
006ca4c0:  ldr      x17, [x11]
006ca4c4:  mov      x16, sp
006ca4c8:  str      q0, [sp, #0x30]
006ca4cc:  csel     x15, x15, x1, lo
006ca4d0:  ldr      q0, [x0]
006ca4d4:  add      x13, x16, x13
006ca4d8:  cmp      x17, x12
006ca4dc:  str      x14, [sp, #0x40]
006ca4e0:  ldr      x12, [x0, #0x10]
006ca4e4:  csel     x14, x11, x10, lo
006ca4e8:  str      q0, [x13]
006ca4ec:  csel     x10, x10, x11, lo
006ca4f0:  ldr      q0, [x14]
006ca4f4:  ldr      x16, [x15, #0x10]
006ca4f8:  ldr      x11, [x14, #0x10]
006ca4fc:  str      x12, [x13, #0x10]
006ca500:  stur     q0, [x13, #0x18]
006ca504:  ldr      q0, [x10]
006ca508:  ldr      x10, [x10, #0x10]
006ca50c:  str      x16, [x13, #0x58]
006ca510:  str      q0, [x13, #0x30]
006ca514:  ldr      q0, [x15]
006ca518:  str      x11, [x13, #0x28]
006ca51c:  mov      w11, #4
006ca520:  str      x10, [x13, #0x40]
006ca524:  stur     q0, [x13, #0x48]
006ca528:  add      x13, x11, x11, lsl #1
006ca52c:  cmp      x11, x8
006ca530:  sub      x12, x20, x8
006ca534:  b.lo     #0x6ca580
006ca538:  b        #0x6ca624
006ca53c:  lsl      x10, x9, #3
006ca540:  ldr      x11, [x19, #0x10]
006ca544:  ldr      q0, [x19]
006ca548:  mov      x13, sp
006ca54c:  add      x12, x19, x10
006ca550:  str      x11, [sp, #0x10]
006ca554:  add      x10, x13, x10
006ca558:  ldr      x11, [x12, #0x10]
006ca55c:  str      q0, [sp]
006ca560:  ldr      q0, [x12]
006ca564:  str      x11, [x10, #0x10]
006ca568:  mov      w11, #1
006ca56c:  str      q0, [x10]
006ca570:  add      x13, x11, x11, lsl #1
006ca574:  cmp      x11, x8
006ca578:  sub      x12, x20, x8
006ca57c:  b.hs     #0x6ca624
006ca580:  lsl      x10, x13, #3
006ca584:  mov      x14, sp
006ca588:  mov      x15, x11
006ca58c:  b        #0x6ca5b0
006ca590:  add      x17, x14, x1
006ca594:  ldur     q0, [x29, #-0x10]
006ca598:  str      x16, [x17]
006ca59c:  stur     q0, [x17, #8]
006ca5a0:  add      x15, x15, #1
006ca5a4:  add      x10, x10, #0x18
006ca5a8:  cmp      x15, x8
006ca5ac:  b.eq     #0x6ca624
006ca5b0:  add      x16, x15, x15, lsl #1
006ca5b4:  lsl      x16, x16, #3
006ca5b8:  add      x17, x19, x16
006ca5bc:  add      x0, x14, x16
006ca5c0:  ldr      q0, [x17]
006ca5c4:  ldur     x1, [x0, #-0x18]
006ca5c8:  ldr      x2, [x17, #0x10]
006ca5cc:  str      q0, [x0]
006ca5d0:  ldr      x16, [x0]
006ca5d4:  str      x2, [x0, #0x10]
006ca5d8:  cmp      x16, x1
006ca5dc:  b.hs     #0x6ca5a0
006ca5e0:  ldur     q0, [x17, #8]
006ca5e4:  mov      x0, x10
006ca5e8:  stur     q0, [x29, #-0x10]
006ca5ec:  mov      x17, sp
006ca5f0:  subs     x1, x0, #0x18
006ca5f4:  add      x2, x17, x0
006ca5f8:  ldur     q0, [x2, #-0x18]
006ca5fc:  ldur     x3, [x2, #-8]
006ca600:  str      q0, [x2]
006ca604:  str      x3, [x2, #0x10]
006ca608:  b.eq     #0x6ca594
006ca60c:  add      x17, x14, x0
006ca610:  mov      x0, x1
006ca614:  ldur     x17, [x17, #-0x30]
006ca618:  cmp      x16, x17
006ca61c:  b.lo     #0x6ca5ec
006ca620:  b        #0x6ca590
006ca624:  lsl      x14, x9, #3
006ca628:  mov      x10, sp
006ca62c:  cmp      x11, x12
006ca630:  add      x9, x10, x14
006ca634:  b.hs     #0x6ca6e8
006ca638:  lsl      x13, x13, #3
006ca63c:  add      x14, x19, x14
006ca640:  mov      w15, #0x18
006ca644:  mov      x16, x9
006ca648:  b        #0x6ca670
006ca64c:  mov      x0, x9
006ca650:  ldur     q0, [x29, #-0x10]
006ca654:  str      x17, [x0]
006ca658:  stur     q0, [x0, #8]
006ca65c:  add      x11, x11, #1
006ca660:  add      x16, x16, #0x18
006ca664:  sub      x15, x15, #0x18
006ca668:  cmp      x11, x12
006ca66c:  b.eq     #0x6ca6e8
006ca670:  add      x17, x11, x11, lsl #1
006ca674:  lsl      x17, x17, #3
006ca678:  add      x0, x14, x17
006ca67c:  add      x1, x9, x17
006ca680:  ldr      q0, [x0]
006ca684:  ldur     x2, [x1, #-0x18]
006ca688:  ldr      x3, [x0, #0x10]
006ca68c:  str      q0, [x1]
006ca690:  ldr      x17, [x1]
006ca694:  str      x3, [x1, #0x10]
006ca698:  cmp      x17, x2
006ca69c:  b.hs     #0x6ca65c
006ca6a0:  ldur     q0, [x0, #8]
006ca6a4:  mov      x1, x15
006ca6a8:  mov      x0, x16
006ca6ac:  stur     q0, [x29, #-0x10]
006ca6b0:  add      x2, x0, x13
006ca6b4:  cmp      x13, x1
006ca6b8:  ldur     q0, [x2, #-0x18]
006ca6bc:  ldur     x3, [x2, #-8]
006ca6c0:  str      q0, [x2]
006ca6c4:  str      x3, [x2, #0x10]
006ca6c8:  b.eq     #0x6ca64c
006ca6cc:  ldur     x2, [x2, #-0x30]
006ca6d0:  sub      x0, x0, #0x18
006ca6d4:  add      x1, x1, #0x18
006ca6d8:  cmp      x17, x2
006ca6dc:  b.lo     #0x6ca6b0
006ca6e0:  add      x0, x0, x13
006ca6e4:  b        #0x6ca650
006ca6e8:  mov      w13, #0x18
006ca6ec:  mov      x11, #-0x18
006ca6f0:  sub      x15, x9, #0x18
006ca6f4:  madd     x14, x20, x13, x11
006ca6f8:  mov      x12, x19
006ca6fc:  add      x11, x10, x14
006ca700:  ldr      x16, [x9]
006ca704:  ldr      x17, [x10]
006ca708:  sub      x8, x8, #1
006ca70c:  ldr      x0, [x11]
006ca710:  ldr      x1, [x15]
006ca714:  cmp      x16, x17
006ca718:  csel     x16, x9, x10, lo
006ca71c:  csel     x17, x13, xzr, lo
006ca720:  csel     x2, xzr, x13, lo
006ca724:  cmp      x0, x1
006ca728:  ldr      q0, [x16]
006ca72c:  add      x9, x9, x17
006ca730:  csetm    x0, hs
006ca734:  csel     x1, x15, x11, lo
006ca738:  add      x10, x10, x2
006ca73c:  madd     x11, x0, x13, x11
006ca740:  ldr      x0, [x16, #0x10]
006ca744:  csetm    x16, lo
006ca748:  ldr      x17, [x1, #0x10]
006ca74c:  madd     x15, x16, x13, x15
006ca750:  str      x0, [x12, #0x10]
006ca754:  add      x16, x19, x14
006ca758:  str      q0, [x12], #0x18
006ca75c:  ldr      q0, [x1]
006ca760:  sub      x14, x14, #0x18
006ca764:  str      x17, [x16, #0x10]
006ca768:  str      q0, [x16]
006ca76c:  cbnz     x8, #0x6ca700
006ca770:  add      x8, x15, #0x18
006ca774:  tbz      w20, #0, #0x6ca7a4
006ca778:  cmp      x10, x8
006ca77c:  mov      w14, #0x18
006ca780:  csel     x13, x10, x9, lo
006ca784:  csel     x15, x14, xzr, lo
006ca788:  csel     x14, xzr, x14, lo
006ca78c:  ldr      q0, [x13]
006ca790:  ldr      x13, [x13, #0x10]
006ca794:  add      x10, x10, x15
006ca798:  add      x9, x9, x14
006ca79c:  str      q0, [x12]
006ca7a0:  str      x13, [x12, #0x10]
006ca7a4:  cmp      x10, x8
006ca7a8:  b.ne     #0x6ca7cc
006ca7ac:  add      x8, x11, #0x18
006ca7b0:  cmp      x9, x8
006ca7b4:  b.ne     #0x6ca7cc
006ca7b8:  add      sp, sp, #0x490
006ca7bc:  ldp      x20, x19, [sp, #0x20]
006ca7c0:  ldr      x28, [sp, #0x10]
006ca7c4:  ldp      x29, x30, [sp], #0x30
006ca7c8:  ret      
006ca7cc:  bl       #0x8cf650

; ===== 0070c920  FUN_0070c920  (1880 bytes) =====
0070c920:  sub      sp, sp, #0x170
0070c924:  stp      x29, x30, [sp, #0x110]
0070c928:  stp      x28, x27, [sp, #0x120]
0070c92c:  stp      x26, x25, [sp, #0x130]
0070c930:  stp      x24, x23, [sp, #0x140]
0070c934:  stp      x22, x21, [sp, #0x150]
0070c938:  stp      x20, x19, [sp, #0x160]
0070c93c:  add      x29, sp, #0x110
0070c940:  mov      x19, x2
0070c944:  mov      x22, x1
0070c948:  cmp      x1, x3
0070c94c:  mov      x23, x0
0070c950:  b.hs     #0x70c9f8
0070c954:  sub      x10, x22, #1
0070c958:  ldrb     w8, [x23]
0070c95c:  mov      x21, x3
0070c960:  ldrb     w9, [x23, x10]
0070c964:  sub      x26, x22, #1
0070c968:  cmp      w9, w8
0070c96c:  b.ne     #0x70ca18
0070c970:  sub      x26, x22, #2
0070c974:  ldrb     w9, [x23, x26]
0070c978:  cmp      w9, w8
0070c97c:  b.ne     #0x70ca18
0070c980:  sub      x26, x22, #3
0070c984:  ldrb     w9, [x23, x26]
0070c988:  cmp      w9, w8
0070c98c:  b.ne     #0x70ca18
0070c990:  sub      x26, x22, #4
0070c994:  ldrb     w9, [x23, x26]
0070c998:  cmp      w9, w8
0070c99c:  b.ne     #0x70ca18
0070c9a0:  sub      x8, x29, #0x70
0070c9a4:  mov      x0, x19
0070c9a8:  mov      x1, x21
0070c9ac:  mov      x2, x23
0070c9b0:  mov      x3, x22
0070c9b4:  bl       #0x8d02a0
0070c9b8:  ldur     w8, [x29, #-0x70]
0070c9bc:  tbz      w8, #0, #0x70cd64
0070c9c0:  ldp      x14, x1, [x29, #-0x18]
0070c9c4:  ldur     x11, [x29, #-0x38]
0070c9c8:  ldp      x8, x9, [x29, #-0x28]
0070c9cc:  cmn      x11, #1
0070c9d0:  sub      x10, x1, #1
0070c9d4:  b.eq     #0x70ce34
0070c9d8:  ldur     x17, [x29, #-0x48]
0070c9dc:  add      x2, x17, x10
0070c9e0:  cmp      x2, x9
0070c9e4:  b.hs     #0x70ce74
0070c9e8:  ldur     x12, [x29, #-0x68]
0070c9ec:  ldp      x15, x13, [x29, #-0x58]
0070c9f0:  neg      x16, x12
0070c9f4:  b        #0x70cdb0
0070c9f8:  b.ne     #0x70ce74
0070c9fc:  mov      x0, x23
0070ca00:  mov      x1, x19
0070ca04:  mov      x2, x22
0070ca08:  bl       #0x8ccfe0
0070ca0c:  cmp      w0, #0
0070ca10:  cset     w20, eq
0070ca14:  b        #0x70ce78
0070ca18:  add      x11, x22, #0xf
0070ca1c:  cmp      x21, x11
0070ca20:  b.hs     #0x70ca58
0070ca24:  sub      x21, x21, #1
0070ca28:  mov      x0, x19
0070ca2c:  mov      x1, x23
0070ca30:  mov      x2, x22
0070ca34:  bl       #0x8ccfe0
0070ca38:  cmp      w0, #0
0070ca3c:  cset     w20, eq
0070ca40:  cbz      w0, #0x70ce78
0070ca44:  cmp      x22, x21
0070ca48:  sub      x21, x21, #1
0070ca4c:  add      x19, x19, #1
0070ca50:  b.ls     #0x70ca28
0070ca54:  b        #0x70ce78
0070ca58:  dup      v2.16b, w8
0070ca5c:  dup      v3.16b, w9
0070ca60:  add      x8, x23, #1
0070ca64:  add      x9, x22, #0x3f
0070ca68:  stp      x8, x10, [x29, #-0x60]
0070ca6c:  sub      x8, x22, #1
0070ca70:  cmp      x9, x21
0070ca74:  adrp     x9, #0x372000
0070ca78:  stp      x19, x21, [x29, #-0x70]
0070ca7c:  str      x8, [sp, #0x28]
0070ca80:  stur     q2, [x29, #-0x80]
0070ca84:  str      q3, [sp, #0x80]
0070ca88:  b.hs     #0x70cc54
0070ca8c:  add      x8, x26, x19
0070ca90:  ldr      q4, [x9, #0xe20]
0070ca94:  mov      x23, xzr
0070ca98:  add      x27, x22, #0x7f
0070ca9c:  add      x28, x8, #0x20
0070caa0:  add      x25, x19, #0x30
0070caa4:  str      q4, [sp, #0x50]
0070caa8:  add      x8, x25, x23
0070caac:  add      x9, x28, x23
0070cab0:  ldp      q0, q18, [x9, #-0x20]
0070cab4:  ldp      q1, q17, [x8, #-0x30]
0070cab8:  ldp      q7, q5, [x8, #-0x10]
0070cabc:  cmeq     v0.16b, v0.16b, v3.16b
0070cac0:  ldp      q16, q6, [x9]
0070cac4:  cmeq     v1.16b, v1.16b, v2.16b
0070cac8:  and      v0.16b, v1.16b, v0.16b
0070cacc:  umaxv    b1, v0.16b
0070cad0:  fmov     w8, s1
0070cad4:  tbnz     w8, #0, #0x70cb70
0070cad8:  mov      w20, wzr
0070cadc:  cmeq     v0.16b, v17.16b, v2.16b
0070cae0:  cmeq     v1.16b, v18.16b, v3.16b
0070cae4:  and      v0.16b, v0.16b, v1.16b
0070cae8:  and      v0.16b, v0.16b, v4.16b
0070caec:  ext      v1.16b, v0.16b, v0.16b, #8
0070caf0:  zip1     v0.16b, v0.16b, v1.16b
0070caf4:  addv     h0, v0.8h
0070caf8:  fmov     w2, s0
0070cafc:  tst      w2, #0xffff
0070cb00:  b.ne     #0x70cbc0
0070cb04:  cmeq     v0.16b, v7.16b, v2.16b
0070cb08:  cmeq     v1.16b, v16.16b, v3.16b
0070cb0c:  and      v0.16b, v0.16b, v1.16b
0070cb10:  and      v0.16b, v0.16b, v4.16b
0070cb14:  ext      v1.16b, v0.16b, v0.16b, #8
0070cb18:  zip1     v0.16b, v0.16b, v1.16b
0070cb1c:  addv     h0, v0.8h
0070cb20:  fmov     w2, s0
0070cb24:  tst      w2, #0xffff
0070cb28:  b.ne     #0x70cbf4
0070cb2c:  cmeq     v0.16b, v5.16b, v2.16b
0070cb30:  cmeq     v1.16b, v6.16b, v3.16b
0070cb34:  and      v0.16b, v0.16b, v1.16b
0070cb38:  and      v0.16b, v0.16b, v4.16b
0070cb3c:  ext      v1.16b, v0.16b, v0.16b, #8
0070cb40:  zip1     v0.16b, v0.16b, v1.16b
0070cb44:  addv     h0, v0.8h
0070cb48:  fmov     w2, s0
0070cb4c:  tst      w2, #0xffff
0070cb50:  b.ne     #0x70cc20
0070cb54:  add      x8, x27, x23
0070cb58:  add      x24, x23, #0x40
0070cb5c:  cmp      x8, x21
0070cb60:  b.hs     #0x70cc5c
0070cb64:  mov      x23, x24
0070cb68:  tbz      w20, #0, #0x70caa8
0070cb6c:  b        #0x70cc5c
0070cb70:  and      v0.16b, v0.16b, v4.16b
0070cb74:  sub      x0, x29, #0x70
0070cb78:  mov      x1, x23
0070cb7c:  mov      w3, wzr
0070cb80:  stp      q18, q17, [sp]
0070cb84:  stp      q16, q7, [sp, #0x30]
0070cb88:  ext      v1.16b, v0.16b, v0.16b, #8
0070cb8c:  stp      q6, q5, [sp, #0x60]
0070cb90:  zip1     v0.16b, v0.16b, v1.16b
0070cb94:  addv     h0, v0.8h
0070cb98:  fmov     w2, s0
0070cb9c:  bl       #0x6d1128
0070cba0:  ldp      q18, q17, [sp]
0070cba4:  mov      w20, w0
0070cba8:  ldp      q16, q7, [sp, #0x30]
0070cbac:  ldr      q4, [sp, #0x50]
0070cbb0:  ldp      q6, q5, [sp, #0x60]
0070cbb4:  ldr      q3, [sp, #0x80]
0070cbb8:  ldur     q2, [x29, #-0x80]
0070cbbc:  b        #0x70cadc
0070cbc0:  sub      x0, x29, #0x70
0070cbc4:  add      x1, x23, #0x10
0070cbc8:  mov      w3, w20
0070cbcc:  stp      q16, q7, [sp, #0x30]
0070cbd0:  stp      q6, q5, [sp, #0x60]
0070cbd4:  bl       #0x6d1128
0070cbd8:  ldp      q16, q7, [sp, #0x30]
0070cbdc:  orr      w20, w20, w0
0070cbe0:  ldp      q6, q5, [sp, #0x60]
0070cbe4:  ldr      q4, [sp, #0x50]
0070cbe8:  ldr      q3, [sp, #0x80]
0070cbec:  ldur     q2, [x29, #-0x80]
0070cbf0:  b        #0x70cb04
0070cbf4:  sub      x0, x29, #0x70
0070cbf8:  add      x1, x23, #0x20
0070cbfc:  mov      w3, w20
0070cc00:  stp      q6, q5, [sp, #0x60]
0070cc04:  bl       #0x6d1128
0070cc08:  ldp      q6, q5, [sp, #0x60]
0070cc0c:  orr      w20, w20, w0
0070cc10:  ldr      q4, [sp, #0x50]
0070cc14:  ldr      q3, [sp, #0x80]
0070cc18:  ldur     q2, [x29, #-0x80]
0070cc1c:  b        #0x70cb2c
0070cc20:  sub      x0, x29, #0x70
0070cc24:  add      x1, x23, #0x30
0070cc28:  mov      w3, w20
0070cc2c:  bl       #0x6d1128
0070cc30:  ldr      q4, [sp, #0x50]
0070cc34:  ldr      q3, [sp, #0x80]
0070cc38:  orr      w20, w20, w0
0070cc3c:  ldur     q2, [x29, #-0x80]
0070cc40:  add      x8, x27, x23
0070cc44:  add      x24, x23, #0x40
0070cc48:  cmp      x8, x21
0070cc4c:  b.lo     #0x70cb64
0070cc50:  b        #0x70cc5c
0070cc54:  mov      x24, xzr
0070cc58:  mov      w20, wzr
0070cc5c:  tbnz     w20, #0, #0x70cd04
0070cc60:  add      x8, x22, #0xf
0070cc64:  adrp     x25, #0x372000
0070cc68:  add      x8, x24, x8
0070cc6c:  cmp      x8, x21
0070cc70:  b.hs     #0x70cd08
0070cc74:  add      x8, x24, x22
0070cc78:  ldr      q0, [x25, #0xe20]
0070cc7c:  add      x23, x19, x26
0070cc80:  add      x22, x8, #0x1f
0070cc84:  str      q0, [sp, #0x70]
0070cc88:  ldr      q0, [x19, x24]
0070cc8c:  ldr      q1, [x23, x24]
0070cc90:  cmeq     v0.16b, v0.16b, v2.16b
0070cc94:  cmeq     v1.16b, v1.16b, v3.16b
0070cc98:  and      v0.16b, v0.16b, v1.16b
0070cc9c:  umaxv    b1, v0.16b
0070cca0:  fmov     w8, s1
0070cca4:  tbnz     w8, #0, #0x70ccc4
0070cca8:  mov      w20, wzr
0070ccac:  cmp      x22, x21
0070ccb0:  b.hs     #0x70cd08
0070ccb4:  add      x24, x24, #0x10
0070ccb8:  add      x22, x22, #0x10
0070ccbc:  tbz      w20, #0, #0x70cc88
0070ccc0:  b        #0x70cd08
0070ccc4:  ldr      q1, [sp, #0x70]
0070ccc8:  sub      x0, x29, #0x70
0070cccc:  mov      x1, x24
0070ccd0:  mov      w3, wzr
0070ccd4:  and      v0.16b, v0.16b, v1.16b
0070ccd8:  ext      v1.16b, v0.16b, v0.16b, #8
0070ccdc:  zip1     v0.16b, v0.16b, v1.16b
0070cce0:  addv     h0, v0.8h
0070cce4:  fmov     w2, s0
0070cce8:  bl       #0x6d1128
0070ccec:  ldr      q3, [sp, #0x80]
0070ccf0:  ldur     q2, [x29, #-0x80]
0070ccf4:  mov      w20, w0
0070ccf8:  cmp      x22, x21
0070ccfc:  b.lo     #0x70ccb4
0070cd00:  b        #0x70cd08
0070cd04:  adrp     x25, #0x372000
0070cd08:  ldr      x8, [sp, #0x28]
0070cd0c:  sub      x8, x21, x8
0070cd10:  sub      x1, x8, #0x10
0070cd14:  add      x8, x19, x1
0070cd18:  ldr      q0, [x8]
0070cd1c:  ldr      q1, [x8, x26]
0070cd20:  cmeq     v0.16b, v0.16b, v2.16b
0070cd24:  cmeq     v1.16b, v1.16b, v3.16b
0070cd28:  and      v0.16b, v0.16b, v1.16b
0070cd2c:  umaxv    b1, v0.16b
0070cd30:  fmov     w8, s1
0070cd34:  tbz      w8, #0, #0x70ce78
0070cd38:  ldr      q1, [x25, #0xe20]
0070cd3c:  sub      x0, x29, #0x70
0070cd40:  mov      w3, w20
0070cd44:  and      v0.16b, v0.16b, v1.16b
0070cd48:  ext      v1.16b, v0.16b, v0.16b, #8
0070cd4c:  zip1     v0.16b, v0.16b, v1.16b
0070cd50:  addv     h0, v0.8h
0070cd54:  fmov     w2, s0
0070cd58:  bl       #0x6d1128
0070cd5c:  orr      w20, w20, w0
0070cd60:  b        #0x70ce78
0070cd64:  ldurb    w8, [x29, #-0x56]
0070cd68:  tbnz     w8, #0, #0x70ce74
0070cd6c:  ldp      x0, x1, [x29, #-0x28]
0070cd70:  ldur     x2, [x29, #-0x68]
0070cd74:  ldurb    w20, [x29, #-0x58]
0070cd78:  cbz      x2, #0x70cf24
0070cd7c:  cmp      x2, x1
0070cd80:  b.hs     #0x70cf20
0070cd84:  ldrsb    w8, [x0, x2]
0070cd88:  cmn      w8, #0x40
0070cd8c:  b.ge     #0x70cf24
0070cd90:  b        #0x70d03c
0070cd94:  mov      x11, xzr
0070cd98:  add      x0, x17, x1
0070cd9c:  add      x2, x0, x10
0070cda0:  mov      w20, wzr
0070cda4:  mov      x17, x0
0070cda8:  cmp      x2, x9
0070cdac:  b.hs     #0x70ce78
0070cdb0:  ldrb     w0, [x8, x2]
0070cdb4:  lsr      x0, x13, x0
0070cdb8:  tbz      w0, #0, #0x70cd94
0070cdbc:  cmp      x11, x12
0070cdc0:  add      x0, x16, x17
0070cdc4:  add      x2, x8, x17
0070cdc8:  csel     x3, x11, x12, hi
0070cdcc:  add      x0, x0, x3
0070cdd0:  cmp      x3, x1
0070cdd4:  b.hs     #0x70cdf8
0070cdd8:  ldrb     w4, [x14, x3]
0070cddc:  ldrb     w5, [x2, x3]
0070cde0:  add      x3, x3, #1
0070cde4:  add      x0, x0, #1
0070cde8:  cmp      w4, w5
0070cdec:  b.eq     #0x70cdd0
0070cdf0:  mov      x11, xzr
0070cdf4:  b        #0x70cd9c
0070cdf8:  add      x2, x8, x17
0070cdfc:  sub      x0, x12, #1
0070ce00:  add      x3, x0, #1
0070ce04:  cmp      x11, x3
0070ce08:  b.hs     #0x70d060
0070ce0c:  cmp      x0, x1
0070ce10:  b.hs     #0x70cfd4
0070ce14:  ldrb     w3, [x14, x0]
0070ce18:  ldrb     w4, [x2, x0]
0070ce1c:  sub      x0, x0, #1
0070ce20:  cmp      w3, w4
0070ce24:  b.eq     #0x70ce00
0070ce28:  add      x0, x17, x15
0070ce2c:  sub      x11, x1, x15
0070ce30:  b        #0x70cd9c
0070ce34:  ldur     x11, [x29, #-0x48]
0070ce38:  add      x2, x11, x10
0070ce3c:  cmp      x2, x9
0070ce40:  b.hs     #0x70ce74
0070ce44:  ldur     x12, [x29, #-0x68]
0070ce48:  ldur     x13, [x29, #-0x50]
0070ce4c:  cmp      x12, x1
0070ce50:  sub      x0, x12, #1
0070ce54:  csel     x17, x12, x1, hi
0070ce58:  cmp      x0, x1
0070ce5c:  b.hs     #0x70cf78
0070ce60:  ldur     x15, [x29, #-0x58]
0070ce64:  add      x16, x14, x12
0070ce68:  sub      x17, x17, x12
0070ce6c:  sub      x14, x14, #1
0070ce70:  b        #0x70ceb0
0070ce74:  mov      w20, wzr
0070ce78:  and      w0, w20, #1
0070ce7c:  ldp      x20, x19, [sp, #0x160]
0070ce80:  ldp      x22, x21, [sp, #0x150]
0070ce84:  ldp      x24, x23, [sp, #0x140]
0070ce88:  ldp      x26, x25, [sp, #0x130]
0070ce8c:  ldp      x28, x27, [sp, #0x120]
0070ce90:  ldp      x29, x30, [sp, #0x110]
0070ce94:  add      sp, sp, #0x170
0070ce98:  ret      
0070ce9c:  add      x11, x11, x1
0070cea0:  add      x2, x11, x10
0070cea4:  mov      w20, wzr
0070cea8:  cmp      x2, x9
0070ceac:  b.hs     #0x70ce78
0070ceb0:  ldrb     w2, [x8, x2]
0070ceb4:  lsr      x2, x13, x2
0070ceb8:  tbz      w2, #0, #0x70ce9c
0070cebc:  neg      x2, x11
0070cec0:  add      x3, x12, x11
0070cec4:  mov      x4, x17
0070cec8:  mov      x5, x16
0070cecc:  cbz      x4, #0x70cef4
0070ced0:  ldrb     w6, [x5], #1
0070ced4:  ldrb     w7, [x8, x3]
0070ced8:  sub      x2, x2, #1
0070cedc:  add      x3, x3, #1
0070cee0:  sub      x4, x4, #1
0070cee4:  cmp      w6, w7
0070cee8:  b.eq     #0x70cecc
0070ceec:  neg      x11, x2
0070cef0:  b        #0x70cea0
0070cef4:  add      x2, x0, x11
0070cef8:  mov      x3, x12
0070cefc:  cbz      x3, #0x70d060
0070cf00:  ldrb     w4, [x14, x3]
0070cf04:  ldrb     w5, [x8, x2]
0070cf08:  sub      x3, x3, #1
0070cf0c:  sub      x2, x2, #1
0070cf10:  cmp      w4, w5
0070cf14:  b.eq     #0x70cefc
0070cf18:  add      x11, x11, x15
0070cf1c:  b        #0x70cea0
0070cf20:  b.ne     #0x70d03c
0070cf24:  cmp      x2, x1
0070cf28:  b.eq     #0x70ce78
0070cf2c:  add      x9, x0, x2
0070cf30:  ldrsb    w10, [x9]
0070cf34:  and      w8, w10, #0xff
0070cf38:  tbz      w10, #0x1f, #0x70cff0
0070cf3c:  ldrb     w10, [x9, #1]
0070cf40:  cmp      w8, #0xe0
0070cf44:  and      w10, w10, #0x3f
0070cf48:  b.lo     #0x70cfe0
0070cf4c:  ldrb     w11, [x9, #2]
0070cf50:  cmp      w8, #0xf0
0070cf54:  and      w11, w11, #0x3f
0070cf58:  orr      w11, w11, w10, lsl #6
0070cf5c:  and      w10, w8, #0x1f
0070cf60:  b.lo     #0x70cfec
0070cf64:  ldrb     w8, [x9, #3]
0070cf68:  and      w8, w8, #0x3f
0070cf6c:  orr      w8, w8, w11, lsl #6
0070cf70:  bfi      w8, w10, #0x12, #3
0070cf74:  b        #0x70cff0
0070cf78:  add      x14, x14, x12
0070cf7c:  add      x15, x8, x12
0070cf80:  ldrb     w16, [x8, x2]
0070cf84:  lsr      x16, x13, x16
0070cf88:  tbz      w16, #0, #0x70cfb8
0070cf8c:  mov      x16, x17
0070cf90:  mov      x2, x14
0070cf94:  cmp      x12, x16
0070cf98:  b.eq     #0x70cfd0
0070cf9c:  ldrb     w3, [x2], #1
0070cfa0:  ldrb     w4, [x15, x11]
0070cfa4:  add      x11, x11, #1
0070cfa8:  sub      x16, x16, #1
0070cfac:  cmp      w3, w4
0070cfb0:  b.eq     #0x70cf94
0070cfb4:  b        #0x70cfbc
0070cfb8:  add      x11, x11, x1
0070cfbc:  add      x2, x11, x10
0070cfc0:  mov      w20, wzr
0070cfc4:  cmp      x2, x9
0070cfc8:  b.lo     #0x70cf80
0070cfcc:  b        #0x70ce78
0070cfd0:  cbz      x12, #0x70d060
0070cfd4:  adrp     x2, #0x976000
0070cfd8:  add      x2, x2, #0xdb0
0070cfdc:  bl       #0x8cec90
0070cfe0:  bfi      w10, w8, #6, #5
0070cfe4:  mov      w8, w10
0070cfe8:  b        #0x70cff0
0070cfec:  orr      w8, w11, w10, lsl #12
0070cff0:  tbnz     w20, #0, #0x70d060
0070cff4:  cmp      w8, #0x80
0070cff8:  b.hs     #0x70d004
0070cffc:  mov      w8, #1
0070d000:  b        #0x70d020
0070d004:  cmp      w8, #0x800
0070d008:  b.hs     #0x70d014
0070d00c:  mov      w8, #2
0070d010:  b        #0x70d020
0070d014:  cmp      w8, #0x10, lsl #12
0070d018:  mov      w8, #3
0070d01c:  cinc     x8, x8, hs
0070d020:  adds     x2, x8, x2
0070d024:  b.eq     #0x70d050
0070d028:  cmp      x2, x1
0070d02c:  b.hs     #0x70d04c
0070d030:  ldrsb    w8, [x0, x2]
0070d034:  cmn      w8, #0x40
0070d038:  b.ge     #0x70d050
0070d03c:  adrp     x4, #0x978000
0070d040:  add      x4, x4, #0xed8
0070d044:  mov      x3, x1
0070d048:  bl       #0x8ceff0
0070d04c:  b.ne     #0x70d03c
0070d050:  cmp      x2, x1
0070d054:  b.eq     #0x70d060
0070d058:  ldrsb    w8, [x0, x2]
0070d05c:  tbnz     w8, #0x1f, #0x70d068
0070d060:  mov      w20, #1
0070d064:  b        #0x70ce78
0070d068:  and      w8, w8, #0xff
0070d06c:  mov      w20, #1
0070d070:  cmp      w8, #0xe0
0070d074:  b        #0x70ce78

; ===== 00820994  FUN_00820994  (43288 bytes) =====
00820994:  stp      x29, x30, [sp, #-0x60]!
00820998:  stp      x28, x27, [sp, #0x10]
0082099c:  stp      x26, x25, [sp, #0x20]
008209a0:  stp      x24, x23, [sp, #0x30]
008209a4:  stp      x22, x21, [sp, #0x40]
008209a8:  stp      x20, x19, [sp, #0x50]
008209ac:  mov      x29, sp
008209b0:  sub      sp, sp, #0x260
008209b4:  mrs      x8, tpidr_el0
008209b8:  mov      x19, x2
008209bc:  str      x8, [sp, #0x68]
008209c0:  ldr      x8, [x8, #0x28]
008209c4:  stur     x8, [x29, #-0x18]
008209c8:  ldr      w8, [x1, #0x30]
008209cc:  str      x0, [sp, #0x70]
008209d0:  cmp      w8, #1
008209d4:  b.eq     #0x8209f0
008209d8:  cbnz     w8, #0x82aff0
008209dc:  add      x8, sp, #0x80
008209e0:  mov      x0, x1
008209e4:  mov      x1, xzr
008209e8:  bl       #0x8118bc
008209ec:  b        #0x820a00
008209f0:  ldr      x0, [x1], #8
008209f4:  add      x8, sp, #0x80
008209f8:  mov      x2, xzr
008209fc:  bl       #0x811aa8
00820a00:  adrp     x9, #0x369000
00820a04:  add      x9, x9, #0x3d4
00820a08:  mov      w8, #0x14
00820a0c:  ldr      x9, [x9]
00820a10:  mov      w10, #0x7265
00820a14:  strb     w8, [sp, #0xa8]
00820a18:  sturh    w10, [sp, #0xb1]
00820a1c:  stur     x9, [sp, #0xa9]
00820a20:  strb     wzr, [sp, #0xb3]
00820a24:  add      x0, sp, #0x80
00820a28:  add      x1, sp, #0xa8
00820a2c:  bl       #0x817c7c
00820a30:  ldrb     w8, [sp, #0xa8]
00820a34:  mov      x21, x0
00820a38:  tbz      w8, #0, #0x820a44
00820a3c:  ldr      x0, [sp, #0xb8]
00820a40:  bl       #0x8ccfd0
00820a44:  sub      x27, x29, #0xb0
00820a48:  cbz      x21, #0x821f20
00820a4c:  strb     wzr, [sp, #0x10c]
00820a50:  strb     wzr, [sp, #0x110]
00820a54:  strb     wzr, [sp, #0x114]
00820a58:  strb     wzr, [sp, #0x130]
00820a5c:  strb     wzr, [sp, #0x148]
00820a60:  strb     wzr, [sp, #0x178]
00820a64:  strb     wzr, [sp, #0x180]
00820a68:  strb     wzr, [sp, #0x198]
00820a6c:  strb     wzr, [sp, #0x108]
00820a70:  stp      xzr, xzr, [sp, #0x118]
00820a74:  str      wzr, [sp, #0x128]
00820a78:  stp      xzr, xzr, [sp, #0x150]
00820a7c:  strb     wzr, [sp, #0x160]
00820a80:  stp      xzr, xzr, [sp, #0xf8]
00820a84:  ldr      w8, [x21, #0x58]
00820a88:  strb     wzr, [sp, #0xc0]
00820a8c:  strb     wzr, [sp, #0xc4]
00820a90:  cmp      w8, #1
00820a94:  strb     wzr, [sp, #0xe8]
00820a98:  strb     wzr, [sp, #0xf0]
00820a9c:  strb     wzr, [sp, #0xf4]
00820aa0:  stp      xzr, xzr, [sp, #0xa8]
00820aa4:  stur     xzr, [sp, #0xb5]
00820aa8:  str      xzr, [sp, #0xc8]
00820aac:  strb     wzr, [sp, #0xd0]
00820ab0:  b.eq     #0x820acc
00820ab4:  cbnz     w8, #0x82b008
00820ab8:  sub      x8, x29, #0x90
00820abc:  add      x0, x21, #0x28
00820ac0:  mov      x1, xzr
00820ac4:  bl       #0x8118bc
00820ac8:  b        #0x820ae0
00820acc:  ldr      x0, [x21, #0x28]
00820ad0:  sub      x8, x29, #0x90
00820ad4:  add      x1, x21, #0x30
00820ad8:  mov      x2, xzr
00820adc:  bl       #0x811aa8
00820ae0:  adrp     x10, #0x370000
00820ae4:  add      x10, x10, #0xad5
00820ae8:  mov      w9, #0x6964
00820aec:  ldr      x10, [x10]
00820af0:  mov      w8, #0x18
00820af4:  movk     w9, #0x7375, lsl #16
00820af8:  sturb    w8, [x29, #-0x30]
00820afc:  stur     w9, [x27, #0x89]
00820b00:  stur     x10, [x27, #0x81]
00820b04:  sturb    wzr, [x29, #-0x23]
00820b08:  sub      x0, x29, #0x90
00820b0c:  sub      x1, x29, #0x30
00820b10:  bl       #0x817c7c
00820b14:  ldurb    w8, [x29, #-0x30]
00820b18:  mov      x21, x0
00820b1c:  tbz      w8, #0, #0x820b28
00820b20:  ldur     x0, [x29, #-0x20]
00820b24:  bl       #0x8ccfd0
00820b28:  cbz      x21, #0x820b38
00820b2c:  add      x0, x21, #0x28
00820b30:  bl       #0x809024
00820b34:  str      s0, [sp, #0xa8]
00820b38:  adrp     x10, #0x36e000
00820b3c:  add      x10, x10, #0x6cb
00820b40:  mov      w9, #0x6964
00820b44:  ldr      q0, [x10]
00820b48:  mov      w8, #0x26
00820b4c:  movk     w9, #0x7375, lsl #16
00820b50:  sturb    w8, [x29, #-0x30]
00820b54:  stur     w9, [x29, #-0x20]
00820b58:  stur     q0, [x27, #0x81]
00820b5c:  sturb    wzr, [x29, #-0x1c]
00820b60:  sub      x0, x29, #0x90
00820b64:  sub      x1, x29, #0x30
00820b68:  bl       #0x817c7c
00820b6c:  ldurb    w8, [x29, #-0x30]
00820b70:  mov      x21, x0
00820b74:  tbz      w8, #0, #0x820b80
00820b78:  ldur     x0, [x29, #-0x20]
00820b7c:  bl       #0x8ccfd0
00820b80:  cbz      x21, #0x820b90
00820b84:  add      x0, x21, #0x28
00820b88:  bl       #0x809024
00820b8c:  str      s0, [sp, #0xac]
00820b90:  adrp     x10, #0x36a000
00820b94:  add      x10, x10, #0xe62
00820b98:  mov      w9, #0x6964
00820b9c:  ldr      q0, [x10]
00820ba0:  mov      w8, #0x28
00820ba4:  movk     w9, #0x7375, lsl #16
00820ba8:  sturb    w8, [x29, #-0x30]
00820bac:  stur     w9, [x27, #0x91]
00820bb0:  stur     q0, [x27, #0x81]
00820bb4:  sturb    wzr, [x29, #-0x1b]
00820bb8:  sub      x0, x29, #0x90
00820bbc:  sub      x1, x29, #0x30
00820bc0:  bl       #0x817c7c
00820bc4:  ldurb    w8, [x29, #-0x30]
00820bc8:  mov      x21, x0
00820bcc:  tbz      w8, #0, #0x820bd8
00820bd0:  ldur     x0, [x29, #-0x20]
00820bd4:  bl       #0x8ccfd0
00820bd8:  cbz      x21, #0x820be8
00820bdc:  add      x0, x21, #0x28
00820be0:  bl       #0x809024
00820be4:  str      s0, [sp, #0xb0]
00820be8:  adrp     x9, #0x36e000
00820bec:  add      x9, x9, #0x42
00820bf0:  mov      w8, #0x2c
00820bf4:  ldr      q0, [x9]
00820bf8:  ldur     x9, [x9, #0xe]
00820bfc:  sturb    w8, [x29, #-0x30]
00820c00:  sturb    wzr, [x29, #-0x19]
00820c04:  stur     q0, [x27, #0x81]
00820c08:  stur     x9, [x27, #0x8f]
00820c0c:  sub      x0, x29, #0x90
00820c10:  sub      x1, x29, #0x30
00820c14:  bl       #0x817c7c
00820c18:  ldurb    w8, [x29, #-0x30]
00820c1c:  mov      x21, x0
00820c20:  tbz      w8, #0, #0x820c2c
00820c24:  ldur     x0, [x29, #-0x20]
00820c28:  bl       #0x8ccfd0
00820c2c:  cbz      x21, #0x820c3c
00820c30:  add      x0, x21, #0x28
00820c34:  bl       #0x809024
00820c38:  str      s0, [sp, #0xb4]
00820c3c:  mov      w0, #0x20
00820c40:  bl       #0x8ccfa0
00820c44:  adrp     x8, #0x372000
00820c48:  stur     x0, [x29, #-0x20]
00820c4c:  ldr      q0, [x8, #0xd20]
00820c50:  adrp     x8, #0x36c000
00820c54:  add      x8, x8, #0x45
00820c58:  ldr      q1, [x8]
00820c5c:  ldur     x8, [x8, #0xf]
00820c60:  strb     wzr, [x0, #0x17]
00820c64:  stur     q0, [x29, #-0x30]
00820c68:  str      q1, [x0]
00820c6c:  stur     x8, [x0, #0xf]
00820c70:  sub      x0, x29, #0x90
00820c74:  sub      x1, x29, #0x30
00820c78:  bl       #0x817c7c
00820c7c:  ldurb    w8, [x29, #-0x30]
00820c80:  mov      x21, x0
00820c84:  tbz      w8, #0, #0x820c90
00820c88:  ldur     x0, [x29, #-0x20]
00820c8c:  bl       #0x8ccfd0
00820c90:  cbz      x21, #0x820ca0
00820c94:  add      x0, x21, #0x28
00820c98:  bl       #0x809024
00820c9c:  str      s0, [sp, #0xb8]
00820ca0:  mov      w8, #0xe
00820ca4:  mov      w9, #0x6964
00820ca8:  sturb    wzr, [x29, #-0x28]
00820cac:  sturb    w8, [x29, #-0x30]
00820cb0:  mov      w8, #0x6469
00820cb4:  movk     w9, #0x6976, lsl #16
00820cb8:  movk     w8, #0x7265, lsl #16
00820cbc:  stur     w9, [x27, #0x81]
00820cc0:  stur     w8, [x29, #-0x2c]
00820cc4:  sub      x0, x29, #0x90
00820cc8:  sub      x1, x29, #0x30
00820ccc:  bl       #0x817c7c
00820cd0:  ldurb    w8, [x29, #-0x30]
00820cd4:  mov      x21, x0
00820cd8:  tbz      w8, #0, #0x820ce4
00820cdc:  ldur     x0, [x29, #-0x20]
00820ce0:  bl       #0x8ccfd0
00820ce4:  cbz      x21, #0x820d24
00820ce8:  ldr      w8, [x21, #0x58]
00820cec:  cmp      w8, #1
00820cf0:  b.eq     #0x820d14
00820cf4:  cbnz     w8, #0x82b0c8
00820cf8:  ldr      w1, [x21, #0x28]
00820cfc:  cmp      w1, #2
00820d00:  b.ne     #0x82b0e0
00820d04:  ldrb     w8, [x21, #0x30]
00820d08:  cmp      w8, #0
00820d0c:  cset     w0, ne
00820d10:  b        #0x820d1c
00820d14:  add      x0, x21, #0x30
00820d18:  bl       #0x8cdb20
00820d1c:  and      w8, w0, #1
00820d20:  strb     w8, [sp, #0xbc]
00820d24:  adrp     x10, #0x36f000
00820d28:  add      x10, x10, #0x93e
00820d2c:  mov      w9, #0x6c6f
00820d30:  ldr      x10, [x10]
00820d34:  mov      w8, #0x18
00820d38:  movk     w9, #0x726f, lsl #16
00820d3c:  sturb    w8, [x29, #-0x30]
00820d40:  stur     w9, [x27, #0x89]
00820d44:  stur     x10, [x27, #0x81]
00820d48:  sturb    wzr, [x29, #-0x23]
00820d4c:  sub      x0, x29, #0x90
00820d50:  sub      x1, x29, #0x30
00820d54:  bl       #0x817c7c
00820d58:  ldurb    w8, [x29, #-0x30]
00820d5c:  mov      x21, x0
00820d60:  tbz      w8, #0, #0x820d6c
00820d64:  ldur     x0, [x29, #-0x20]
00820d68:  bl       #0x8ccfd0
00820d6c:  cbz      x21, #0x820da4
00820d70:  ldr      x8, [sp, #0x70]
00820d74:  stur     wzr, [x29, #-0x30]
00820d78:  ldr      x0, [x8, #8]
00820d7c:  ldr      w1, [x8]
00820d80:  adrp     x4, #0x99e000
00820d84:  add      x2, x21, #0x28
00820d88:  sub      x3, x29, #0x30
00820d8c:  ldr      x4, [x4, #0x140]
00820d90:  bl       #0x807f90
00820d94:  ldur     w8, [x29, #-0x30]
00820d98:  mov      w9, #1
00820d9c:  strb     w9, [sp, #0xc4]
00820da0:  str      w8, [sp, #0xc0]
00820da4:  adrp     x10, #0x367000
00820da8:  add      x10, x10, #0xa0f
00820dac:  mov      w8, #0x24
00820db0:  ldr      q0, [x10]
00820db4:  mov      w9, #0x7466
00820db8:  sturb    w8, [x29, #-0x30]
00820dbc:  sturh    w9, [x27, #0x91]
00820dc0:  stur     q0, [x27, #0x81]
00820dc4:  sturb    wzr, [x29, #-0x1d]
00820dc8:  sub      x0, x29, #0x90
00820dcc:  sub      x1, x29, #0x30
00820dd0:  bl       #0x817c7c
00820dd4:  ldurb    w8, [x29, #-0x30]
00820dd8:  mov      x21, x0
00820ddc:  tbz      w8, #0, #0x820de8
00820de0:  ldur     x0, [x29, #-0x20]
00820de4:  bl       #0x8ccfd0
00820de8:  cbz      x21, #0x820df8
00820dec:  add      x0, x21, #0x28
00820df0:  bl       #0x809024
00820df4:  str      s0, [sp, #0xc8]
00820df8:  adrp     x10, #0x36a000
00820dfc:  add      x10, x10, #0x836
00820e00:  mov      w9, #0x6769
00820e04:  ldr      q0, [x10]
00820e08:  mov      w8, #0x26
00820e0c:  movk     w9, #0x7468, lsl #16
00820e10:  sturb    w8, [x29, #-0x30]
00820e14:  stur     w9, [x29, #-0x20]
00820e18:  stur     q0, [x27, #0x81]
00820e1c:  sturb    wzr, [x29, #-0x1c]
00820e20:  sub      x0, x29, #0x90
00820e24:  sub      x1, x29, #0x30
00820e28:  bl       #0x817c7c
00820e2c:  ldurb    w8, [x29, #-0x30]
00820e30:  mov      x21, x0
00820e34:  tbz      w8, #0, #0x820e40
00820e38:  ldur     x0, [x29, #-0x20]
00820e3c:  bl       #0x8ccfd0
00820e40:  cbz      x21, #0x820e50
00820e44:  add      x0, x21, #0x28
00820e48:  bl       #0x809024
00820e4c:  str      s0, [sp, #0xcc]
00820e50:  adrp     x9, #0x36c000
00820e54:  add      x9, x9, #0x4b4
00820e58:  mov      w8, #0x20
00820e5c:  ldr      q0, [x9]
00820e60:  sturb    w8, [x29, #-0x30]
00820e64:  sturb    wzr, [x29, #-0x1f]
00820e68:  stur     q0, [x27, #0x81]
00820e6c:  sub      x0, x29, #0x90
00820e70:  sub      x1, x29, #0x30
00820e74:  bl       #0x817c7c
00820e78:  ldurb    w8, [x29, #-0x30]
00820e7c:  mov      x21, x0
00820e80:  tbz      w8, #0, #0x820e8c
00820e84:  ldur     x0, [x29, #-0x20]
00820e88:  bl       #0x8ccfd0
00820e8c:  cbz      x21, #0x820f08
00820e90:  sub      x8, x29, #0x30
00820e94:  add      x0, x21, #0x28
00820e98:  bl       #0x807a6c
00820e9c:  ldp      x10, x20, [x29, #-0x28]
00820ea0:  ldur     x8, [x27, #0x82]
00820ea4:  ldurb    w21, [x29, #-0x30]
00820ea8:  ldrb     w9, [sp, #0xe8]
00820eac:  ldurb    w22, [x29, #-0x2f]
00820eb0:  stur     x8, [x29, #-0x40]
00820eb4:  stur     x10, [x27, #0x76]
00820eb8:  cbz      w9, #0x820ee8
00820ebc:  ldrb     w8, [sp, #0xd0]
00820ec0:  tbz      w8, #0, #0x820ecc
00820ec4:  ldr      x0, [sp, #0xe0]
00820ec8:  bl       #0x8ccfd0
00820ecc:  ldur     x8, [x29, #-0x40]
00820ed0:  ldur     x9, [x27, #0x76]
00820ed4:  strb     w21, [sp, #0xd0]
00820ed8:  strb     w22, [sp, #0xd1]
00820edc:  stur     x8, [sp, #0xd2]
00820ee0:  stp      x9, x20, [sp, #0xd8]
00820ee4:  b        #0x820f08
00820ee8:  ldur     x8, [x29, #-0x40]
00820eec:  ldur     x9, [x27, #0x76]
00820ef0:  strb     w21, [sp, #0xd0]
00820ef4:  strb     w22, [sp, #0xd1]
00820ef8:  stur     x8, [sp, #0xd2]
00820efc:  mov      w8, #1
00820f00:  stp      x9, x20, [sp, #0xd8]
00820f04:  strb     w8, [sp, #0xe8]
00820f08:  adrp     x9, #0x36a000
00820f0c:  add      x9, x9, #0x84a
00820f10:  mov      w8, #0x2a
00820f14:  ldr      q0, [x9]
00820f18:  ldur     x9, [x9, #0xd]
00820f1c:  sturb    w8, [x29, #-0x30]
00820f20:  sturb    wzr, [x29, #-0x1a]
00820f24:  stur     q0, [x27, #0x81]
00820f28:  stur     x9, [x27, #0x8e]
00820f2c:  sub      x0, x29, #0x90
00820f30:  sub      x1, x29, #0x30
00820f34:  bl       #0x817c7c
00820f38:  ldurb    w8, [x29, #-0x30]
00820f3c:  mov      x21, x0
00820f40:  tbz      w8, #0, #0x820f4c
00820f44:  ldur     x0, [x29, #-0x20]
00820f48:  bl       #0x8ccfd0
00820f4c:  cbz      x21, #0x820f84
00820f50:  ldr      x8, [sp, #0x70]
00820f54:  stur     wzr, [x29, #-0x30]
00820f58:  ldr      x0, [x8, #8]
00820f5c:  ldr      w1, [x8]
00820f60:  adrp     x4, #0x99e000
00820f64:  add      x2, x21, #0x28
00820f68:  sub      x3, x29, #0x30
00820f6c:  ldr      x4, [x4, #0x140]
00820f70:  bl       #0x807f90
00820f74:  ldur     w8, [x29, #-0x30]
00820f78:  mov      w9, #1
00820f7c:  strb     w9, [sp, #0xf4]
00820f80:  str      w8, [sp, #0xf0]
00820f84:  adrp     x9, #0x36d000
00820f88:  add      x9, x9, #0x9e1
00820f8c:  mov      w8, #0x2a
00820f90:  ldr      q0, [x9]
00820f94:  ldur     x9, [x9, #0xd]
00820f98:  sturb    w8, [x29, #-0x30]
00820f9c:  sturb    wzr, [x29, #-0x1a]
00820fa0:  stur     q0, [x27, #0x81]
00820fa4:  stur     x9, [x27, #0x8e]
00820fa8:  sub      x0, x29, #0x90
00820fac:  sub      x1, x29, #0x30
00820fb0:  bl       #0x817c7c
00820fb4:  ldurb    w8, [x29, #-0x30]
00820fb8:  mov      x21, x0
00820fbc:  tbz      w8, #0, #0x820fc8
00820fc0:  ldur     x0, [x29, #-0x20]
00820fc4:  bl       #0x8ccfd0
00820fc8:  cbz      x21, #0x820fd8
00820fcc:  add      x0, x21, #0x28
00820fd0:  bl       #0x8161a0
00820fd4:  str      w0, [sp, #0xf8]
00820fd8:  adrp     x10, #0x36a000
00820fdc:  add      x10, x10, #0xe77
00820fe0:  mov      w9, #0x4765
00820fe4:  ldr      q0, [x10]
00820fe8:  mov      w8, #0x26
00820fec:  movk     w9, #0x7061, lsl #16
00820ff0:  sturb    w8, [x29, #-0x30]
00820ff4:  stur     w9, [x29, #-0x20]
00820ff8:  stur     q0, [x27, #0x81]
00820ffc:  sturb    wzr, [x29, #-0x1c]
00821000:  sub      x0, x29, #0x90
00821004:  sub      x1, x29, #0x30
00821008:  bl       #0x817c7c
0082100c:  ldurb    w8, [x29, #-0x30]
00821010:  mov      x21, x0
00821014:  tbz      w8, #0, #0x821020
00821018:  ldur     x0, [x29, #-0x20]
0082101c:  bl       #0x8ccfd0
00821020:  cbz      x21, #0x821030
00821024:  add      x0, x21, #0x28
00821028:  bl       #0x809024
0082102c:  str      s0, [sp, #0xfc]
00821030:  mov      w0, #0x30
00821034:  bl       #0x8ccfa0
00821038:  adrp     x8, #0x373000
0082103c:  stur     x0, [x29, #-0x20]
00821040:  ldr      q2, [x8, #0x40]
00821044:  mov      w8, #0x6c
00821048:  strh     w8, [x0, #0x20]
0082104c:  adrp     x8, #0x369000
00821050:  add      x8, x8, #0x87b
00821054:  ldp      q0, q1, [x8]
00821058:  str      q2, [sp, #0x50]
0082105c:  stur     q2, [x29, #-0x30]
00821060:  stp      q0, q1, [x0]
00821064:  sub      x0, x29, #0x90
00821068:  sub      x1, x29, #0x30
0082106c:  bl       #0x817c7c
00821070:  ldurb    w8, [x29, #-0x30]
00821074:  mov      x21, x0
00821078:  tbz      w8, #0, #0x821084
0082107c:  ldur     x0, [x29, #-0x20]
00821080:  bl       #0x8ccfd0
00821084:  cbz      x21, #0x821094
00821088:  add      x0, x21, #0x28
0082108c:  bl       #0x809024
00821090:  str      s0, [sp, #0x100]
00821094:  mov      w0, #0x20
00821098:  bl       #0x8ccfa0
0082109c:  adrp     x8, #0x372000
008210a0:  stur     x0, [x29, #-0x20]
008210a4:  ldr      q0, [x8, #0x250]
008210a8:  adrp     x8, #0x36a000
008210ac:  add      x8, x8, #0x258
008210b0:  ldr      q1, [x8]
008210b4:  ldur     q2, [x8, #0xf]
008210b8:  strb     wzr, [x0, #0x1f]
008210bc:  stur     q0, [x29, #-0x30]
008210c0:  str      q1, [x0]
008210c4:  stur     q2, [x0, #0xf]
008210c8:  sub      x0, x29, #0x90
008210cc:  sub      x1, x29, #0x30
008210d0:  bl       #0x817c7c
008210d4:  ldurb    w8, [x29, #-0x30]
008210d8:  mov      x21, x0
008210dc:  tbz      w8, #0, #0x8210e8
008210e0:  ldur     x0, [x29, #-0x20]
008210e4:  bl       #0x8ccfd0
008210e8:  cbz      x21, #0x8210f8
008210ec:  add      x0, x21, #0x28
008210f0:  bl       #0x809024
008210f4:  str      s0, [sp, #0x104]
008210f8:  mov      w0, #0x20
008210fc:  bl       #0x8ccfa0
00821100:  adrp     x8, #0x371000
00821104:  stur     x0, [x29, #-0x20]
00821108:  ldr      q0, [x8, #0x7a0]
0082110c:  adrp     x8, #0x370000
00821110:  add      x8, x8, #0x665
00821114:  ldr      q1, [x8]
00821118:  ldur     q2, [x8, #0xe]
0082111c:  strb     wzr, [x0, #0x1e]
00821120:  stur     q0, [x29, #-0x30]
00821124:  str      q1, [x0]
00821128:  stur     q2, [x0, #0xe]
0082112c:  sub      x0, x29, #0x90
00821130:  sub      x1, x29, #0x30
00821134:  bl       #0x817c7c
00821138:  ldurb    w8, [x29, #-0x30]
0082113c:  mov      x21, x0
00821140:  tbz      w8, #0, #0x82114c
00821144:  ldur     x0, [x29, #-0x20]
00821148:  bl       #0x8ccfd0
0082114c:  cbz      x21, #0x821184
00821150:  ldr      x8, [sp, #0x70]
00821154:  stur     wzr, [x29, #-0x30]
00821158:  ldr      x0, [x8, #8]
0082115c:  ldr      w1, [x8]
00821160:  adrp     x4, #0x99e000
00821164:  add      x2, x21, #0x28
00821168:  sub      x3, x29, #0x30
0082116c:  ldr      x4, [x4, #0x140]
00821170:  bl       #0x807f90
00821174:  ldur     w8, [x29, #-0x30]
00821178:  mov      w9, #1
0082117c:  strb     w9, [sp, #0x10c]
00821180:  str      w8, [sp, #0x108]
00821184:  adrp     x10, #0x368000
00821188:  add      x10, x10, #0xd84
0082118c:  mov      w9, #0x6c6f
00821190:  ldr      q0, [x10]
00821194:  mov      w8, #0x28
00821198:  movk     w9, #0x726f, lsl #16
0082119c:  sturb    w8, [x29, #-0x30]
008211a0:  stur     w9, [x27, #0x91]
008211a4:  stur     q0, [x27, #0x81]
008211a8:  sturb    wzr, [x29, #-0x1b]
008211ac:  sub      x0, x29, #0x90
008211b0:  sub      x1, x29, #0x30
008211b4:  bl       #0x817c7c
008211b8:  ldurb    w8, [x29, #-0x30]
008211bc:  mov      x21, x0
008211c0:  tbz      w8, #0, #0x8211cc
008211c4:  ldur     x0, [x29, #-0x20]
008211c8:  bl       #0x8ccfd0
008211cc:  cbz      x21, #0x821204
008211d0:  ldr      x8, [sp, #0x70]
008211d4:  stur     wzr, [x29, #-0x30]
008211d8:  ldr      x0, [x8, #8]
008211dc:  ldr      w1, [x8]
008211e0:  adrp     x4, #0x99e000
008211e4:  add      x2, x21, #0x28
008211e8:  sub      x3, x29, #0x30
008211ec:  ldr      x4, [x4, #0x140]
008211f0:  bl       #0x807f90
008211f4:  ldur     w8, [x29, #-0x30]
008211f8:  mov      w9, #1
008211fc:  strb     w9, [sp, #0x114]
00821200:  str      w8, [sp, #0x110]
00821204:  mov      w0, #0x20
00821208:  bl       #0x8ccfa0
0082120c:  adrp     x8, #0x371000
00821210:  stur     x0, [x29, #-0x20]
00821214:  ldr      q0, [x8, #0xb20]
00821218:  adrp     x8, #0x369000
0082121c:  add      x8, x8, #0x3df
00821220:  ldr      q1, [x8]
00821224:  ldur     q2, [x8, #0xb]
00821228:  strb     wzr, [x0, #0x1b]
0082122c:  stur     q0, [x29, #-0x30]
00821230:  str      q1, [x0]
00821234:  stur     q2, [x0, #0xb]
00821238:  sub      x0, x29, #0x90
0082123c:  sub      x1, x29, #0x30
00821240:  bl       #0x817c7c
00821244:  ldurb    w8, [x29, #-0x30]
00821248:  mov      x21, x0
0082124c:  tbz      w8, #0, #0x821258
00821250:  ldur     x0, [x29, #-0x20]
00821254:  bl       #0x8ccfd0
00821258:  cbz      x21, #0x821268
0082125c:  add      x0, x21, #0x28
00821260:  bl       #0x809024
00821264:  str      s0, [sp, #0x118]
00821268:  mov      w0, #0x30
0082126c:  bl       #0x8ccfa0
00821270:  adrp     x8, #0x371000
00821274:  stur     x0, [x29, #-0x20]
00821278:  ldr      q0, [x8, #0x9d0]
0082127c:  adrp     x8, #0x370000
00821280:  add      x8, x8, #0xae2
00821284:  ldp      q1, q2, [x8]
00821288:  ldur     x8, [x8, #0x1d]
0082128c:  stur     q0, [x29, #-0x30]
00821290:  strb     wzr, [x0, #0x25]
00821294:  stp      q1, q2, [x0]
00821298:  stur     x8, [x0, #0x1d]
0082129c:  sub      x0, x29, #0x90
008212a0:  sub      x1, x29, #0x30
008212a4:  bl       #0x817c7c
008212a8:  ldurb    w8, [x29, #-0x30]
008212ac:  mov      x21, x0
008212b0:  tbz      w8, #0, #0x8212bc
008212b4:  ldur     x0, [x29, #-0x20]
008212b8:  bl       #0x8ccfd0
008212bc:  cbz      x21, #0x8212cc
008212c0:  add      x0, x21, #0x28
008212c4:  bl       #0x809024
008212c8:  str      s0, [sp, #0x11c]
008212cc:  mov      w0, #0x20
008212d0:  bl       #0x8ccfa0
008212d4:  adrp     x8, #0x371000
008212d8:  stur     x0, [x29, #-0x20]
008212dc:  ldr      q1, [x8, #0x460]
008212e0:  adrp     x8, #0x36f000
008212e4:  add      x8, x8, #0x94b
008212e8:  ldr      q0, [x8]
008212ec:  ldr      x8, [x8, #0x10]
008212f0:  strb     wzr, [x0, #0x18]
008212f4:  str      q1, [sp, #0x40]
008212f8:  stur     q1, [x29, #-0x30]
008212fc:  str      q0, [x0]
00821300:  str      x8, [x0, #0x10]
00821304:  sub      x0, x29, #0x90
00821308:  sub      x1, x29, #0x30
0082130c:  bl       #0x817c7c
00821310:  ldurb    w8, [x29, #-0x30]
00821314:  mov      x21, x0
00821318:  tbz      w8, #0, #0x821324
0082131c:  ldur     x0, [x29, #-0x20]
00821320:  bl       #0x8ccfd0
00821324:  cbz      x21, #0x821334
00821328:  add      x0, x21, #0x28
0082132c:  bl       #0x809024
00821330:  str      s0, [sp, #0x120]
00821334:  mov      w0, #0x30
00821338:  bl       #0x8ccfa0
0082133c:  ldr      q0, [sp, #0x50]
00821340:  adrp     x9, #0x36c000
00821344:  add      x9, x9, #0x4c5
00821348:  mov      w8, #0x65
0082134c:  stur     x0, [x29, #-0x20]
00821350:  stur     q0, [x29, #-0x30]
00821354:  ldp      q0, q1, [x9]
00821358:  strh     w8, [x0, #0x20]
0082135c:  stp      q0, q1, [x0]
00821360:  sub      x0, x29, #0x90
00821364:  sub      x1, x29, #0x30
00821368:  bl       #0x817c7c
0082136c:  ldurb    w8, [x29, #-0x30]
00821370:  mov      x21, x0
00821374:  tbz      w8, #0, #0x821380
00821378:  ldur     x0, [x29, #-0x20]
0082137c:  bl       #0x8ccfd0
00821380:  cbz      x21, #0x821390
00821384:  add      x0, x21, #0x28
00821388:  bl       #0x809024
0082138c:  str      s0, [sp, #0x124]
00821390:  adrp     x9, #0x365000
00821394:  add      x9, x9, #0xd68
00821398:  mov      w8, #0x2c
0082139c:  ldr      q0, [x9]
008213a0:  ldur     x9, [x9, #0xe]
008213a4:  sturb    w8, [x29, #-0x30]
008213a8:  sturb    wzr, [x29, #-0x19]
008213ac:  stur     q0, [x27, #0x81]
008213b0:  stur     x9, [x27, #0x8f]
008213b4:  sub      x0, x29, #0x90
008213b8:  sub      x1, x29, #0x30
008213bc:  bl       #0x817c7c
008213c0:  ldurb    w8, [x29, #-0x30]
008213c4:  mov      x21, x0
008213c8:  tbz      w8, #0, #0x8213d4
008213cc:  ldur     x0, [x29, #-0x20]
008213d0:  bl       #0x8ccfd0
008213d4:  cbz      x21, #0x8213e4
008213d8:  add      x0, x21, #0x28
008213dc:  bl       #0x809024
008213e0:  str      s0, [sp, #0x128]
008213e4:  adrp     x10, #0x36c000
008213e8:  add      x10, x10, #0x4e7
008213ec:  mov      w9, #0x6168
008213f0:  ldr      q0, [x10]
008213f4:  mov      w8, #0x28
008213f8:  movk     w9, #0x6570, lsl #16
008213fc:  sturb    w8, [x29, #-0x30]
00821400:  stur     w9, [x27, #0x91]
00821404:  stur     q0, [x27, #0x81]
00821408:  sturb    wzr, [x29, #-0x1b]
0082140c:  sub      x0, x29, #0x90
00821410:  sub      x1, x29, #0x30
00821414:  bl       #0x817c7c
00821418:  ldurb    w8, [x29, #-0x30]
0082141c:  mov      x21, x0
00821420:  tbz      w8, #0, #0x82142c
00821424:  ldur     x0, [x29, #-0x20]
00821428:  bl       #0x8ccfd0
0082142c:  cbz      x21, #0x8214b0
00821430:  sub      x8, x29, #0x30
00821434:  add      x0, x21, #0x28
00821438:  bl       #0x807a6c
0082143c:  ldp      x10, x20, [x29, #-0x28]
00821440:  ldur     x8, [x27, #0x82]
00821444:  ldurb    w21, [x29, #-0x30]
00821448:  ldrb     w9, [sp, #0x148]
0082144c:  ldurb    w22, [x29, #-0x2f]
00821450:  stur     x8, [x29, #-0x40]
00821454:  stur     x10, [x27, #0x76]
00821458:  cbz      w9, #0x82148c
0082145c:  ldrb     w8, [sp, #0x130]
00821460:  tbz      w8, #0, #0x82146c
00821464:  ldr      x0, [sp, #0x140]
00821468:  bl       #0x8ccfd0
0082146c:  ldur     x8, [x29, #-0x40]
00821470:  ldur     x9, [x27, #0x76]
00821474:  add      x10, sp, #0xa8
00821478:  strb     w21, [sp, #0x130]
0082147c:  strb     w22, [sp, #0x131]
00821480:  stur     x8, [x10, #0x8a]
00821484:  stp      x9, x20, [sp, #0x138]
00821488:  b        #0x8214b0
0082148c:  ldur     x8, [x29, #-0x40]
00821490:  ldur     x9, [x27, #0x76]
00821494:  add      x10, sp, #0xa8
00821498:  strb     w21, [sp, #0x130]
0082149c:  stur     x8, [x10, #0x8a]
008214a0:  mov      w8, #1
008214a4:  strb     w22, [sp, #0x131]
008214a8:  stp      x9, x20, [sp, #0x138]
008214ac:  strb     w8, [sp, #0x148]
008214b0:  mov      w0, #0x20
008214b4:  bl       #0x8ccfa0
008214b8:  adrp     x8, #0x36b000
008214bc:  add      x8, x8, #0x944
008214c0:  ldr      q1, [sp, #0x40]
008214c4:  ldr      q0, [x8]
008214c8:  ldr      x8, [x8, #0x10]
008214cc:  stur     x0, [x29, #-0x20]
008214d0:  stur     q1, [x29, #-0x30]
008214d4:  str      q0, [x0]
008214d8:  str      x8, [x0, #0x10]
008214dc:  strb     wzr, [x0, #0x18]
008214e0:  sub      x0, x29, #0x90
008214e4:  sub      x1, x29, #0x30
008214e8:  bl       #0x817c7c
008214ec:  ldurb    w8, [x29, #-0x30]
008214f0:  mov      x21, x0
008214f4:  tbz      w8, #0, #0x821500
008214f8:  ldur     x0, [x29, #-0x20]
008214fc:  bl       #0x8ccfd0
00821500:  cbz      x21, #0x821510
00821504:  add      x0, x21, #0x28
00821508:  bl       #0x809024
0082150c:  str      s0, [sp, #0x150]
00821510:  adrp     x10, #0x369000
00821514:  add      x10, x10, #0x89d
00821518:  mov      w8, #0x1e
0082151c:  ldr      x9, [x10]
00821520:  ldur     x10, [x10, #7]
00821524:  sturb    w8, [x29, #-0x30]
00821528:  sturb    wzr, [x29, #-0x20]
0082152c:  stur     x9, [x27, #0x81]
00821530:  stur     x10, [x29, #-0x28]
00821534:  sub      x0, x29, #0x90
00821538:  sub      x1, x29, #0x30
0082153c:  bl       #0x817c7c
00821540:  ldurb    w8, [x29, #-0x30]
00821544:  mov      x21, x0
00821548:  tbz      w8, #0, #0x821554
0082154c:  ldur     x0, [x29, #-0x20]
00821550:  bl       #0x8ccfd0
00821554:  cbz      x21, #0x821564
00821558:  add      x0, x21, #0x28
0082155c:  bl       #0x8161a0
00821560:  str      w0, [sp, #0x154]
00821564:  mov      w8, #0xa
00821568:  mov      w9, #0x6977
0082156c:  movk     w9, #0x7464, lsl #16
00821570:  sturb    w8, [x29, #-0x30]
00821574:  mov      w8, #0x68
00821578:  stur     w9, [x27, #0x81]
0082157c:  sturh    w8, [x27, #0x85]
00821580:  sub      x0, x29, #0x90
00821584:  sub      x1, x29, #0x30
00821588:  bl       #0x817c7c
0082158c:  ldurb    w8, [x29, #-0x30]
00821590:  mov      x21, x0
00821594:  tbz      w8, #0, #0x8215a0
00821598:  ldur     x0, [x29, #-0x20]
0082159c:  bl       #0x8ccfd0
008215a0:  cbz      x21, #0x8215b0
008215a4:  add      x0, x21, #0x28
008215a8:  bl       #0x809024
008215ac:  str      s0, [sp, #0x158]
008215b0:  mov      w8, #0xc
008215b4:  mov      w9, #0x6568
008215b8:  sturb    wzr, [x29, #-0x29]
008215bc:  movk     w9, #0x6769, lsl #16
008215c0:  sturb    w8, [x29, #-0x30]
008215c4:  mov      w8, #0x7468
008215c8:  stur     w9, [x27, #0x81]
008215cc:  sturh    w8, [x27, #0x85]
008215d0:  sub      x0, x29, #0x90
008215d4:  sub      x1, x29, #0x30
008215d8:  bl       #0x817c7c
008215dc:  ldurb    w8, [x29, #-0x30]
008215e0:  mov      x21, x0
008215e4:  tbz      w8, #0, #0x8215f0
008215e8:  ldur     x0, [x29, #-0x20]
008215ec:  bl       #0x8ccfd0
008215f0:  cbz      x21, #0x821600
008215f4:  add      x0, x21, #0x28
008215f8:  bl       #0x809024
008215fc:  str      s0, [sp, #0x15c]
00821600:  adrp     x10, #0x36e000
00821604:  add      x10, x10, #0x59
00821608:  mov      w8, #0x22
0082160c:  ldr      q0, [x10]
00821610:  mov      w9, #0x74
00821614:  sturb    w8, [x29, #-0x30]
00821618:  sturh    w9, [x27, #0x91]
0082161c:  stur     q0, [x27, #0x81]
00821620:  sub      x0, x29, #0x90
00821624:  sub      x1, x29, #0x30
00821628:  bl       #0x817c7c
0082162c:  ldurb    w8, [x29, #-0x30]
00821630:  mov      x21, x0
00821634:  tbz      w8, #0, #0x821640
00821638:  ldur     x0, [x29, #-0x20]
0082163c:  bl       #0x8ccfd0
00821640:  cbz      x21, #0x8216c4
00821644:  sub      x8, x29, #0x30
00821648:  add      x0, x21, #0x28
0082164c:  bl       #0x807a6c
00821650:  ldp      x10, x20, [x29, #-0x28]
00821654:  ldur     x8, [x27, #0x82]
00821658:  ldurb    w21, [x29, #-0x30]
0082165c:  ldrb     w9, [sp, #0x178]
00821660:  ldurb    w22, [x29, #-0x2f]
00821664:  stur     x8, [x29, #-0x40]
00821668:  stur     x10, [x27, #0x76]
0082166c:  cbz      w9, #0x8216a0
00821670:  ldrb     w8, [sp, #0x160]
00821674:  tbz      w8, #0, #0x821680
00821678:  ldr      x0, [sp, #0x170]
0082167c:  bl       #0x8ccfd0
00821680:  ldur     x8, [x29, #-0x40]
00821684:  ldur     x9, [x27, #0x76]
00821688:  add      x10, sp, #0xa8
0082168c:  strb     w21, [sp, #0x160]
00821690:  strb     w22, [sp, #0x161]
00821694:  stur     x8, [x10, #0xba]
00821698:  stp      x9, x20, [sp, #0x168]
0082169c:  b        #0x8216c4
008216a0:  ldur     x8, [x29, #-0x40]
008216a4:  ldur     x9, [x27, #0x76]
008216a8:  add      x10, sp, #0xa8
008216ac:  strb     w21, [sp, #0x160]
008216b0:  stur     x8, [x10, #0xba]
008216b4:  mov      w8, #1
008216b8:  strb     w22, [sp, #0x161]
008216bc:  stp      x9, x20, [sp, #0x168]
008216c0:  strb     w8, [sp, #0x178]
008216c4:  adrp     x10, #0x365000
008216c8:  add      x10, x10, #0x32
008216cc:  mov      w9, #0x656d
008216d0:  ldr      q0, [x10]
008216d4:  mov      w8, #0x26
008216d8:  movk     w9, #0x746e, lsl #16
008216dc:  sturb    w8, [x29, #-0x30]
008216e0:  stur     w9, [x29, #-0x20]
008216e4:  stur     q0, [x27, #0x81]
008216e8:  sturb    wzr, [x29, #-0x1c]
008216ec:  sub      x0, x29, #0x90
008216f0:  sub      x1, x29, #0x30
008216f4:  bl       #0x817c7c
008216f8:  ldurb    w8, [x29, #-0x30]
008216fc:  mov      x21, x0
00821700:  tbz      w8, #0, #0x82170c
00821704:  ldur     x0, [x29, #-0x20]
00821708:  bl       #0x8ccfd0
0082170c:  cbz      x21, #0x821768
00821710:  sub      x8, x29, #0x30
00821714:  add      x0, x21, #0x28
00821718:  bl       #0x807a6c
0082171c:  ldp      x10, x20, [x29, #-0x28]
00821720:  ldur     x8, [x27, #0x82]
00821724:  ldurb    w21, [x29, #-0x30]
00821728:  ldrb     w9, [sp, #0x198]
0082172c:  ldurb    w22, [x29, #-0x2f]
00821730:  stur     x8, [x29, #-0x40]
00821734:  stur     x10, [x27, #0x76]
00821738:  cbz      w9, #0x8217c8
0082173c:  ldrb     w8, [sp, #0x180]
00821740:  tbz      w8, #0, #0x82174c
00821744:  ldr      x0, [sp, #0x190]
00821748:  bl       #0x8ccfd0
0082174c:  ldur     x8, [x29, #-0x40]
00821750:  ldur     x9, [x27, #0x76]
00821754:  add      x10, sp, #0xa8
00821758:  strb     w21, [sp, #0x180]
0082175c:  strb     w22, [sp, #0x181]
00821760:  stur     x8, [x10, #0xda]
00821764:  stp      x9, x20, [sp, #0x188]
00821768:  ldur     x21, [x29, #-0x80]
0082176c:  cbz      x21, #0x8217f4
00821770:  mov      w20, #-1
00821774:  b        #0x821788
00821778:  mov      x0, x21
0082177c:  bl       #0x8ccfd0
00821780:  mov      x21, x22
00821784:  cbz      x22, #0x8217f4
00821788:  ldr      w8, [x21, #0x58]
0082178c:  ldr      x22, [x21]
00821790:  cmn      w8, #1
00821794:  b.eq     #0x8217b0
00821798:  adrp     x9, #0x98c000
0082179c:  add      x9, x9, #0x980
008217a0:  ldr      x8, [x9, x8, lsl #3]
008217a4:  sub      x0, x29, #0x30
008217a8:  add      x1, x21, #0x28
008217ac:  blr      x8
008217b0:  ldrb     w8, [x21, #0x10]
008217b4:  str      w20, [x21, #0x58]
008217b8:  tbz      w8, #0, #0x821778
008217bc:  ldr      x0, [x21, #0x20]
008217c0:  bl       #0x8ccfd0
008217c4:  b        #0x821778
008217c8:  ldur     x8, [x29, #-0x40]
008217cc:  ldur     x9, [x27, #0x76]
008217d0:  add      x10, sp, #0xa8
008217d4:  strb     w21, [sp, #0x180]
008217d8:  stur     x8, [x10, #0xda]
008217dc:  mov      w8, #1
008217e0:  strb     w22, [sp, #0x181]
008217e4:  stp      x9, x20, [sp, #0x188]
008217e8:  strb     w8, [sp, #0x198]
008217ec:  ldur     x21, [x29, #-0x80]
008217f0:  cbnz     x21, #0x821770
008217f4:  ldur     x0, [x29, #-0x90]
008217f8:  stur     xzr, [x29, #-0x90]
008217fc:  cbz      x0, #0x821804
00821800:  bl       #0x8ccfd0
00821804:  ldrb     w22, [sp, #0xe8]
00821808:  add      x8, sp, #0xa8
0082180c:  cbz      w22, #0x82183c
00821810:  ldur     x9, [sp, #0xd2]
00821814:  ldrb     w26, [sp, #0xd0]
00821818:  ldrb     w1, [sp, #0xd1]
0082181c:  stur     x9, [x29, #-0x40]
00821820:  ldp      x10, x9, [sp, #0xd8]
00821824:  stp      xzr, xzr, [sp, #0xd0]
00821828:  str      xzr, [sp, #0xe0]
0082182c:  str      x9, [sp, #0x40]
00821830:  mov      w9, #1
00821834:  stur     x10, [x27, #0x76]
00821838:  b        #0x821844
0082183c:  mov      w26, wzr
00821840:  mov      w9, wzr
00821844:  ldur     q0, [x8, #0x48]
00821848:  ldur     q1, [x8, #0x58]
0082184c:  ldur     q2, [x8, #0x68]
00821850:  ldrb     w20, [sp, #0x148]
00821854:  stur     q0, [x27, #0x27]
00821858:  ldur     q0, [x8, #0x74]
0082185c:  stur     q1, [x27, #0x37]
00821860:  stur     q2, [x27, #0x47]
00821864:  stur     q0, [x27, #0x53]
00821868:  cbz      w20, #0x8218a0
0082186c:  add      x10, sp, #0xa8
00821870:  ldrb     w16, [sp, #0x131]
00821874:  mov      w2, #1
00821878:  ldur     x10, [x10, #0x8a]
0082187c:  stur     x10, [x29, #-0xa0]
00821880:  ldp      x11, x10, [sp, #0x138]
00821884:  str      x10, [sp, #0x18]
00821888:  ldrb     w10, [sp, #0x130]
0082188c:  stur     x11, [x27, #0x16]
00821890:  str      w10, [sp, #0x50]
00821894:  stp      xzr, xzr, [x8, #0x90]
00821898:  stur     xzr, [x8, #0x88]
0082189c:  b        #0x8218a8
008218a0:  str      wzr, [sp, #0x50]
008218a4:  mov      w2, wzr
008218a8:  ldur     q0, [x8, #0xa8]
008218ac:  ldrb     w10, [sp, #0x178]
008218b0:  stur     q0, [x27, #0x87]
008218b4:  str      w10, [sp, #0x30]
008218b8:  cbz      w10, #0x8218ec
008218bc:  add      x10, sp, #0xa8
008218c0:  ldrb     w13, [sp, #0x160]
008218c4:  ldrb     w15, [sp, #0x161]
008218c8:  ldur     x10, [x10, #0xba]
008218cc:  mov      w17, #1
008218d0:  stur     x10, [x29, #-0xb0]
008218d4:  ldp      x11, x10, [sp, #0x168]
008218d8:  stp      xzr, xzr, [sp, #0x160]
008218dc:  str      xzr, [sp, #0x170]
008218e0:  str      x10, [sp, #0x38]
008218e4:  stur     x11, [x27, #6]
008218e8:  b        #0x8218f4
008218ec:  mov      w13, wzr
008218f0:  mov      w17, wzr
008218f4:  ldrb     w14, [sp, #0x198]
008218f8:  stp      w22, w20, [sp, #0x24]
008218fc:  cbz      w14, #0x821930
00821900:  add      x12, sp, #0xa8
00821904:  ldp      x11, x0, [sp, #0x188]
00821908:  ldur     x10, [x12, #0xda]
0082190c:  mov      w20, #1
00821910:  stur     x10, [x29, #-0xc0]
00821914:  ldrb     w10, [sp, #0x181]
00821918:  stur     x11, [x12, #0xfe]
0082191c:  ldrb     w12, [sp, #0x180]
00821920:  str      w10, [sp, #8]
00821924:  stp      xzr, xzr, [x8, #0xe0]
00821928:  stur     xzr, [x8, #0xd8]
0082192c:  b        #0x821938
00821930:  mov      w12, wzr
00821934:  mov      w20, wzr
00821938:  ldur     q0, [sp, #0xa8]
0082193c:  ldur     q1, [sp, #0xb8]
00821940:  ldrb     w10, [x19, #0xf8]
00821944:  ldr      x11, [sp, #0xc8]
00821948:  stp      q0, q1, [x19]
0082194c:  str      x11, [x19, #0x20]
00821950:  cbz      w10, #0x8219e4
00821954:  ldrb     w8, [x19, #0x40]
00821958:  sub      x28, x29, #0x90
0082195c:  str      x0, [sp, #0x10]
00821960:  str      w12, [sp, #0xc]
00821964:  cmp      w8, w9
00821968:  b.ne     #0x821b2c
0082196c:  cbz      w8, #0x821bbc
00821970:  ldrb     w8, [x19, #0x28]
00821974:  tbz      w8, #0, #0x8219c0
00821978:  ldr      x0, [x19, #0x38]
0082197c:  mov      w21, w13
00821980:  mov      w25, w14
00821984:  stp      w1, w20, [sp]
00821988:  mov      w20, w15
0082198c:  mov      w24, w16
00821990:  mov      w23, w17
00821994:  mov      w22, w2
00821998:  bl       #0x8ccfd0
0082199c:  mov      w15, w20
008219a0:  ldr      w12, [sp, #0xc]
008219a4:  ldr      x0, [sp, #0x10]
008219a8:  ldp      w1, w20, [sp]
008219ac:  mov      w2, w22
008219b0:  mov      w17, w23
008219b4:  mov      w16, w24
008219b8:  mov      w14, w25
008219bc:  mov      w13, w21
008219c0:  ldur     x8, [x29, #-0x40]
008219c4:  ldur     x9, [x27, #0x76]
008219c8:  strb     w26, [x19, #0x28]
008219cc:  strb     w1, [x19, #0x29]
008219d0:  mov      w26, wzr
008219d4:  stur     x8, [x19, #0x2a]
008219d8:  ldr      x8, [sp, #0x40]
008219dc:  stp      x9, x8, [x19, #0x30]
008219e0:  b        #0x821bbc
008219e4:  ldr      w22, [sp, #0x24]
008219e8:  strb     wzr, [x19, #0x28]
008219ec:  strb     wzr, [x19, #0x40]
008219f0:  cbz      w22, #0x821a28
008219f4:  ldur     x9, [x29, #-0x40]
008219f8:  ldur     x10, [x27, #0x76]
008219fc:  strb     w26, [x19, #0x28]
00821a00:  mov      w26, wzr
00821a04:  strb     w1, [x19, #0x29]
00821a08:  stur     x9, [x19, #0x2a]
00821a0c:  ldr      x9, [sp, #0x40]
00821a10:  stur     xzr, [x29, #-0x40]
00821a14:  stp      x10, x9, [x19, #0x30]
00821a18:  mov      w9, #1
00821a1c:  stur     xzr, [x27, #0x76]
00821a20:  strb     w9, [x19, #0x40]
00821a24:  str      xzr, [sp, #0x40]
00821a28:  ldur     q0, [x8, #0x48]
00821a2c:  ldr      w20, [sp, #0x28]
00821a30:  ldr      x28, [sp, #0x18]
00821a34:  ldr      w21, [sp, #0x30]
00821a38:  ldur     q1, [x8, #0x58]
00821a3c:  ldur     q2, [x8, #0x68]
00821a40:  stur     q0, [x19, #0x48]
00821a44:  ldur     q0, [x8, #0x74]
00821a48:  ldr      w25, [sp, #0x50]
00821a4c:  stur     q1, [x19, #0x58]
00821a50:  stur     q2, [x19, #0x68]
00821a54:  stur     q0, [x19, #0x74]
00821a58:  strb     wzr, [x19, #0x88]
00821a5c:  strb     wzr, [x19, #0xa0]
00821a60:  cbz      w20, #0x821a94
00821a64:  ldur     x9, [x29, #-0xa0]
00821a68:  ldur     x10, [x27, #0x16]
00821a6c:  strb     w25, [x19, #0x88]
00821a70:  mov      w25, wzr
00821a74:  strb     w16, [x19, #0x89]
00821a78:  stur     x9, [x19, #0x8a]
00821a7c:  mov      w9, #1
00821a80:  stp      x10, x28, [x19, #0x90]
00821a84:  mov      x28, xzr
00821a88:  stur     xzr, [x29, #-0xa0]
00821a8c:  stur     xzr, [x27, #0x16]
00821a90:  strb     w9, [x19, #0xa0]
00821a94:  ldur     q0, [x8, #0xa8]
00821a98:  strb     wzr, [x19, #0xb8]
00821a9c:  strb     wzr, [x19, #0xd0]
00821aa0:  stur     q0, [x19, #0xa8]
00821aa4:  cbz      w21, #0x821adc
00821aa8:  ldur     x8, [x29, #-0xb0]
00821aac:  ldur     x9, [x27, #6]
00821ab0:  strb     w13, [x19, #0xb8]
00821ab4:  mov      w13, wzr
00821ab8:  strb     w15, [x19, #0xb9]
00821abc:  stur     x8, [x19, #0xba]
00821ac0:  ldr      x8, [sp, #0x38]
00821ac4:  stur     xzr, [x29, #-0xb0]
00821ac8:  stp      x9, x8, [x19, #0xc0]
00821acc:  mov      w8, #1
00821ad0:  stur     xzr, [x27, #6]
00821ad4:  strb     w8, [x19, #0xd0]
00821ad8:  str      xzr, [sp, #0x38]
00821adc:  strb     wzr, [x19, #0xd8]
00821ae0:  strb     wzr, [x19, #0xf0]
00821ae4:  cbz      w14, #0x821b20
00821ae8:  ldr      w9, [sp, #8]
00821aec:  add      x10, sp, #0xa8
00821af0:  ldur     x8, [x29, #-0xc0]
00821af4:  strb     w12, [x19, #0xd8]
00821af8:  mov      w12, wzr
00821afc:  strb     w9, [x19, #0xd9]
00821b00:  ldur     x9, [x10, #0xfe]
00821b04:  stur     x8, [x19, #0xda]
00821b08:  mov      w8, #1
00821b0c:  stp      x9, x0, [x19, #0xe0]
00821b10:  mov      x0, xzr
00821b14:  stur     xzr, [x29, #-0xc0]
00821b18:  stur     xzr, [x10, #0xfe]
00821b1c:  strb     w8, [x19, #0xf0]
00821b20:  mov      w8, #1
00821b24:  strb     w8, [x19, #0xf8]
00821b28:  b        #0x821e7c
00821b2c:  cbz      w8, #0x821b88
00821b30:  ldrb     w8, [x19, #0x28]
00821b34:  tbz      w8, #0, #0x821b80
00821b38:  ldr      x0, [x19, #0x38]
00821b3c:  mov      w21, w13
00821b40:  mov      w25, w14
00821b44:  str      w20, [sp, #4]
00821b48:  mov      w20, w15
00821b4c:  mov      w24, w16
00821b50:  mov      w23, w17
00821b54:  mov      w22, w2
00821b58:  bl       #0x8ccfd0
00821b5c:  mov      w15, w20
00821b60:  ldr      w20, [sp, #4]
00821b64:  ldr      w12, [sp, #0xc]
00821b68:  ldr      x0, [sp, #0x10]
00821b6c:  mov      w2, w22
00821b70:  mov      w17, w23
00821b74:  mov      w16, w24
00821b78:  mov      w14, w25
00821b7c:  mov      w13, w21
00821b80:  strb     wzr, [x19, #0x40]
00821b84:  b        #0x821bbc
00821b88:  ldur     x8, [x29, #-0x40]
00821b8c:  ldur     x9, [x27, #0x76]
00821b90:  strb     w26, [x19, #0x28]
00821b94:  mov      w26, wzr
00821b98:  strb     w1, [x19, #0x29]
00821b9c:  stur     x8, [x19, #0x2a]
00821ba0:  ldr      x8, [sp, #0x40]
00821ba4:  stur     xzr, [x29, #-0x40]
00821ba8:  stp      x9, x8, [x19, #0x30]
00821bac:  mov      w8, #1
00821bb0:  stur     xzr, [x27, #0x76]
00821bb4:  strb     w8, [x19, #0x40]
00821bb8:  str      xzr, [sp, #0x40]
00821bbc:  ldur     q0, [x28, #7]
00821bc0:  ldrb     w8, [x19, #0xa0]
00821bc4:  sub      x23, x29, #0x30
00821bc8:  ldur     q1, [x28, #0x17]
00821bcc:  ldur     q2, [x28, #0x27]
00821bd0:  stur     q0, [x19, #0x48]
00821bd4:  ldur     q0, [x28, #0x33]
00821bd8:  cmp      w8, w2
00821bdc:  stur     q1, [x19, #0x58]
00821be0:  stur     q2, [x19, #0x68]
00821be4:  stur     q0, [x19, #0x74]
00821be8:  b.ne     #0x821c6c
00821bec:  ldr      x28, [sp, #0x18]
00821bf0:  cbz      w8, #0x821cf0
00821bf4:  ldrb     w8, [x19, #0x88]
00821bf8:  tbz      w8, #0, #0x821c48
00821bfc:  ldr      x0, [x19, #0x98]
00821c00:  mov      x21, x28
00821c04:  mov      w24, w13
00821c08:  mov      w25, w14
00821c0c:  mov      w28, w15
00821c10:  mov      w22, w20
00821c14:  mov      w20, w16
00821c18:  mov      w23, w17
00821c1c:  bl       #0x8ccfd0
00821c20:  ldr      w12, [sp, #0xc]
00821c24:  ldr      x0, [sp, #0x10]
00821c28:  mov      w17, w23
00821c2c:  sub      x23, x29, #0x30
00821c30:  mov      w16, w20
00821c34:  mov      w20, w22
00821c38:  mov      w15, w28
00821c3c:  mov      w14, w25
00821c40:  mov      w13, w24
00821c44:  mov      x28, x21
00821c48:  ldr      w8, [sp, #0x50]
00821c4c:  ldur     x9, [x27, #0x16]
00821c50:  strb     w16, [x19, #0x89]
00821c54:  str      wzr, [sp, #0x50]
00821c58:  strb     w8, [x19, #0x88]
00821c5c:  ldur     x8, [x29, #-0xa0]
00821c60:  stur     x8, [x19, #0x8a]
00821c64:  stp      x9, x28, [x19, #0x90]
00821c68:  b        #0x821cf0
00821c6c:  ldr      x28, [sp, #0x18]
00821c70:  cbz      w8, #0x821cbc
00821c74:  ldrb     w8, [x19, #0x88]
00821c78:  tbz      w8, #0, #0x821cb4
00821c7c:  ldr      x0, [x19, #0x98]
00821c80:  mov      x21, x28
00821c84:  mov      w24, w13
00821c88:  mov      w25, w14
00821c8c:  mov      w28, w15
00821c90:  mov      w22, w17
00821c94:  bl       #0x8ccfd0
00821c98:  ldr      w12, [sp, #0xc]
00821c9c:  ldr      x0, [sp, #0x10]
00821ca0:  mov      w17, w22
00821ca4:  mov      w15, w28
00821ca8:  mov      w14, w25
00821cac:  mov      w13, w24
00821cb0:  mov      x28, x21
00821cb4:  strb     wzr, [x19, #0xa0]
00821cb8:  b        #0x821cf0
00821cbc:  ldr      w8, [sp, #0x50]
00821cc0:  ldur     x9, [x27, #0x16]
00821cc4:  strb     w16, [x19, #0x89]
00821cc8:  str      wzr, [sp, #0x50]
00821ccc:  strb     w8, [x19, #0x88]
00821cd0:  ldur     x8, [x29, #-0xa0]
00821cd4:  stur     xzr, [x29, #-0xa0]
00821cd8:  stur     x8, [x19, #0x8a]
00821cdc:  mov      w8, #1
00821ce0:  stp      x9, x28, [x19, #0x90]
00821ce4:  mov      x28, xzr
00821ce8:  stur     xzr, [x27, #0x16]
00821cec:  strb     w8, [x19, #0xa0]
00821cf0:  ldrb     w8, [x19, #0xd0]
00821cf4:  ldur     q0, [x23, #7]
00821cf8:  cmp      w8, w17
00821cfc:  stur     q0, [x19, #0xa8]
00821d00:  b.ne     #0x821d74
00821d04:  ldr      w21, [sp, #0x30]
00821d08:  cbz      w8, #0x821de8
00821d0c:  ldrb     w8, [x19, #0xb8]
00821d10:  ldr      w25, [sp, #0x50]
00821d14:  tbz      w8, #0, #0x821d50
00821d18:  ldr      x0, [x19, #0xc8]
00821d1c:  mov      w23, w13
00821d20:  mov      w22, w20
00821d24:  mov      x20, x28
00821d28:  mov      w24, w14
00821d2c:  mov      w28, w15
00821d30:  bl       #0x8ccfd0
00821d34:  ldr      w12, [sp, #0xc]
00821d38:  ldr      x0, [sp, #0x10]
00821d3c:  mov      w15, w28
00821d40:  mov      w14, w24
00821d44:  mov      x28, x20
00821d48:  mov      w20, w22
00821d4c:  mov      w13, w23
00821d50:  ldur     x8, [x29, #-0xb0]
00821d54:  ldur     x9, [x27, #6]
00821d58:  strb     w13, [x19, #0xb8]
00821d5c:  strb     w15, [x19, #0xb9]
00821d60:  mov      w13, wzr
00821d64:  stur     x8, [x19, #0xba]
00821d68:  ldr      x8, [sp, #0x38]
00821d6c:  stp      x9, x8, [x19, #0xc0]
00821d70:  b        #0x821dec
00821d74:  ldr      w21, [sp, #0x30]
00821d78:  cbz      w8, #0x821db4
00821d7c:  ldrb     w8, [x19, #0xb8]
00821d80:  ldr      w25, [sp, #0x50]
00821d84:  tbz      w8, #0, #0x821dac
00821d88:  ldr      x0, [x19, #0xc8]
00821d8c:  mov      w23, w13
00821d90:  mov      w22, w20
00821d94:  mov      w24, w14
00821d98:  bl       #0x8ccfd0
00821d9c:  ldr      w12, [sp, #0xc]
00821da0:  ldr      x0, [sp, #0x10]
00821da4:  mov      w14, w24
00821da8:  mov      w13, w23
00821dac:  strb     wzr, [x19, #0xd0]
00821db0:  b        #0x821dec
00821db4:  ldur     x8, [x29, #-0xb0]
00821db8:  ldur     x9, [x27, #6]
00821dbc:  strb     w13, [x19, #0xb8]
00821dc0:  mov      w13, wzr
00821dc4:  strb     w15, [x19, #0xb9]
00821dc8:  stur     x8, [x19, #0xba]
00821dcc:  ldr      x8, [sp, #0x38]
00821dd0:  stur     xzr, [x29, #-0xb0]
00821dd4:  stp      x9, x8, [x19, #0xc0]
00821dd8:  mov      w8, #1
00821ddc:  stur     xzr, [x27, #6]
00821de0:  strb     w8, [x19, #0xd0]
00821de4:  str      xzr, [sp, #0x38]
00821de8:  ldr      w25, [sp, #0x50]
00821dec:  ldrb     w8, [x19, #0xf0]
00821df0:  cmp      w8, w20
00821df4:  b.ne     #0x821e48
00821df8:  ldp      w22, w20, [sp, #0x24]
00821dfc:  cbz      w8, #0x821e7c
00821e00:  ldrb     w8, [x19, #0xd8]
00821e04:  tbz      w8, #0, #0x821e20
00821e08:  ldr      x0, [x19, #0xe8]
00821e0c:  mov      w23, w13
00821e10:  bl       #0x8ccfd0
00821e14:  ldr      w12, [sp, #0xc]
00821e18:  ldr      x0, [sp, #0x10]
00821e1c:  mov      w13, w23
00821e20:  ldr      w9, [sp, #8]
00821e24:  ldur     x8, [x29, #-0xc0]
00821e28:  strb     w12, [x19, #0xd8]
00821e2c:  strb     w9, [x19, #0xd9]
00821e30:  add      x9, sp, #0xa8
00821e34:  ldur     x9, [x9, #0xfe]
00821e38:  stur     x8, [x19, #0xda]
00821e3c:  stp      x9, x0, [x19, #0xe0]
00821e40:  cbnz     w21, #0x821e94
00821e44:  b        #0x821ea0
00821e48:  ldp      w22, w20, [sp, #0x24]
00821e4c:  cbz      w8, #0x8230c8
00821e50:  ldrb     w8, [x19, #0xd8]
00821e54:  tbz      w8, #0, #0x821e78
00821e58:  ldr      x0, [x19, #0xe8]
00821e5c:  mov      w23, w13
00821e60:  mov      w24, w14
00821e64:  bl       #0x8ccfd0
00821e68:  ldr      w12, [sp, #0xc]
00821e6c:  ldr      x0, [sp, #0x10]
00821e70:  mov      w14, w24
00821e74:  mov      w13, w23
00821e78:  strb     wzr, [x19, #0xf0]
00821e7c:  cbz      w14, #0x821e90
00821e80:  tbz      w12, #0, #0x821e90
00821e84:  mov      w23, w13
00821e88:  bl       #0x8ccfd0
00821e8c:  mov      w13, w23
00821e90:  cbz      w21, #0x821ea0
00821e94:  tbz      w13, #0, #0x821ea0
00821e98:  ldr      x0, [sp, #0x38]
00821e9c:  bl       #0x8ccfd0
00821ea0:  cbz      w20, #0x821eb0
00821ea4:  tbz      w25, #0, #0x821eb0
00821ea8:  mov      x0, x28
00821eac:  bl       #0x8ccfd0
00821eb0:  cbz      w22, #0x821ec0
00821eb4:  tbz      w26, #0, #0x821ec0
00821eb8:  ldr      x0, [sp, #0x40]
00821ebc:  bl       #0x8ccfd0
00821ec0:  ldrb     w8, [sp, #0x198]
00821ec4:  cbz      w8, #0x821ed8
00821ec8:  ldrb     w8, [sp, #0x180]
00821ecc:  tbz      w8, #0, #0x821ed8
00821ed0:  ldr      x0, [sp, #0x190]
00821ed4:  bl       #0x8ccfd0
00821ed8:  ldrb     w8, [sp, #0x178]
00821edc:  cbz      w8, #0x821ef0
00821ee0:  ldrb     w8, [sp, #0x160]
00821ee4:  tbz      w8, #0, #0x821ef0
00821ee8:  ldr      x0, [sp, #0x170]
00821eec:  bl       #0x8ccfd0
00821ef0:  ldrb     w8, [sp, #0x148]
00821ef4:  cbz      w8, #0x821f08
00821ef8:  ldrb     w8, [sp, #0x130]
00821efc:  tbz      w8, #0, #0x821f08
00821f00:  ldr      x0, [sp, #0x140]
00821f04:  bl       #0x8ccfd0
00821f08:  ldrb     w8, [sp, #0xe8]
00821f0c:  cbz      w8, #0x821f20
00821f10:  ldrb     w8, [sp, #0xd0]
00821f14:  tbz      w8, #0, #0x821f20
00821f18:  ldr      x0, [sp, #0xe0]
00821f1c:  bl       #0x8ccfd0
00821f20:  adrp     x9, #0x36d000
00821f24:  add      x9, x9, #0x9d6
00821f28:  mov      w8, #0x14
00821f2c:  ldr      x9, [x9]
00821f30:  mov      w10, #0x7265
00821f34:  strb     w8, [sp, #0xa8]
00821f38:  sturh    w10, [sp, #0xb1]
00821f3c:  stur     x9, [sp, #0xa9]
00821f40:  strb     wzr, [sp, #0xb3]
00821f44:  add      x0, sp, #0x80
00821f48:  add      x1, sp, #0xa8
00821f4c:  bl       #0x817c7c
00821f50:  ldrb     w8, [sp, #0xa8]
00821f54:  mov      x21, x0
00821f58:  tbz      w8, #0, #0x821f64
00821f5c:  ldr      x0, [sp, #0xb8]
00821f60:  bl       #0x8ccfd0
00821f64:  cbz      x21, #0x8234f8
00821f68:  strb     wzr, [sp, #0x10c]
00821f6c:  strb     wzr, [sp, #0x110]
00821f70:  strb     wzr, [sp, #0x114]
00821f74:  strb     wzr, [sp, #0x130]
00821f78:  strb     wzr, [sp, #0x148]
00821f7c:  strb     wzr, [sp, #0x178]
00821f80:  strb     wzr, [sp, #0x180]
00821f84:  strb     wzr, [sp, #0x198]
00821f88:  strb     wzr, [sp, #0x108]
00821f8c:  stp      xzr, xzr, [sp, #0x118]
00821f90:  str      wzr, [sp, #0x128]
00821f94:  stp      xzr, xzr, [sp, #0x150]
00821f98:  strb     wzr, [sp, #0x160]
00821f9c:  stp      xzr, xzr, [sp, #0xf8]
00821fa0:  ldr      w8, [x21, #0x58]
00821fa4:  strb     wzr, [sp, #0xc0]
00821fa8:  strb     wzr, [sp, #0xc4]
00821fac:  cmp      w8, #1
00821fb0:  strb     wzr, [sp, #0xe8]
00821fb4:  strb     wzr, [sp, #0xf0]
00821fb8:  strb     wzr, [sp, #0xf4]
00821fbc:  stp      xzr, xzr, [sp, #0xa8]
00821fc0:  stur     xzr, [sp, #0xb5]
00821fc4:  str      xzr, [sp, #0xc8]
00821fc8:  strb     wzr, [sp, #0xd0]
00821fcc:  b.eq     #0x821fe8
00821fd0:  cbnz     w8, #0x82b020
00821fd4:  sub      x8, x29, #0x90
00821fd8:  add      x0, x21, #0x28
00821fdc:  mov      x1, xzr
00821fe0:  bl       #0x8118bc
00821fe4:  b        #0x821ffc
00821fe8:  ldr      x0, [x21, #0x28]
00821fec:  sub      x8, x29, #0x90
00821ff0:  add      x1, x21, #0x30
00821ff4:  mov      x2, xzr
00821ff8:  bl       #0x811aa8
00821ffc:  adrp     x10, #0x370000
00822000:  add      x10, x10, #0xad5
00822004:  mov      w9, #0x6964
00822008:  ldr      x10, [x10]
0082200c:  mov      w8, #0x18
00822010:  movk     w9, #0x7375, lsl #16
00822014:  sturb    w8, [x29, #-0x30]
00822018:  stur     w9, [x27, #0x89]
0082201c:  stur     x10, [x27, #0x81]
00822020:  sturb    wzr, [x29, #-0x23]
00822024:  sub      x0, x29, #0x90
00822028:  sub      x1, x29, #0x30
0082202c:  bl       #0x817c7c
00822030:  ldurb    w8, [x29, #-0x30]
00822034:  mov      x21, x0
00822038:  tbz      w8, #0, #0x822044
0082203c:  ldur     x0, [x29, #-0x20]
00822040:  bl       #0x8ccfd0
00822044:  cbz      x21, #0x822054
00822048:  add      x0, x21, #0x28
0082204c:  bl       #0x809024
00822050:  str      s0, [sp, #0xa8]
00822054:  adrp     x10, #0x36e000
00822058:  add      x10, x10, #0x6cb
0082205c:  mov      w9, #0x6964
00822060:  ldr      q0, [x10]
00822064:  mov      w8, #0x26
00822068:  movk     w9, #0x7375, lsl #16
0082206c:  sturb    w8, [x29, #-0x30]
00822070:  stur     w9, [x29, #-0x20]
00822074:  stur     q0, [x27, #0x81]
00822078:  sturb    wzr, [x29, #-0x1c]
0082207c:  sub      x0, x29, #0x90
00822080:  sub      x1, x29, #0x30
00822084:  bl       #0x817c7c
00822088:  ldurb    w8, [x29, #-0x30]
0082208c:  mov      x21, x0
00822090:  tbz      w8, #0, #0x82209c
00822094:  ldur     x0, [x29, #-0x20]
00822098:  bl       #0x8ccfd0
0082209c:  cbz      x21, #0x8220ac
008220a0:  add      x0, x21, #0x28
008220a4:  bl       #0x809024
008220a8:  str      s0, [sp, #0xac]
008220ac:  adrp     x10, #0x36a000
008220b0:  add      x10, x10, #0xe62
008220b4:  mov      w9, #0x6964
008220b8:  ldr      q0, [x10]
008220bc:  mov      w8, #0x28
008220c0:  movk     w9, #0x7375, lsl #16
008220c4:  sturb    w8, [x29, #-0x30]
008220c8:  stur     w9, [x27, #0x91]
008220cc:  stur     q0, [x27, #0x81]
008220d0:  sturb    wzr, [x29, #-0x1b]
008220d4:  sub      x0, x29, #0x90
008220d8:  sub      x1, x29, #0x30
008220dc:  bl       #0x817c7c
008220e0:  ldurb    w8, [x29, #-0x30]
008220e4:  mov      x21, x0
008220e8:  tbz      w8, #0, #0x8220f4
008220ec:  ldur     x0, [x29, #-0x20]
008220f0:  bl       #0x8ccfd0
008220f4:  cbz      x21, #0x822104
008220f8:  add      x0, x21, #0x28
008220fc:  bl       #0x809024
00822100:  str      s0, [sp, #0xb0]
00822104:  adrp     x9, #0x36e000
00822108:  add      x9, x9, #0x42
0082210c:  mov      w8, #0x2c
00822110:  ldr      q0, [x9]
00822114:  ldur     x9, [x9, #0xe]
00822118:  sturb    w8, [x29, #-0x30]
0082211c:  sturb    wzr, [x29, #-0x19]
00822120:  stur     q0, [x27, #0x81]
00822124:  stur     x9, [x27, #0x8f]
00822128:  sub      x0, x29, #0x90
0082212c:  sub      x1, x29, #0x30
00822130:  bl       #0x817c7c
00822134:  ldurb    w8, [x29, #-0x30]
00822138:  mov      x21, x0
0082213c:  tbz      w8, #0, #0x822148
00822140:  ldur     x0, [x29, #-0x20]
00822144:  bl       #0x8ccfd0
00822148:  cbz      x21, #0x822158
0082214c:  add      x0, x21, #0x28
00822150:  bl       #0x809024
00822154:  str      s0, [sp, #0xb4]
00822158:  mov      w0, #0x20
0082215c:  bl       #0x8ccfa0
00822160:  adrp     x8, #0x372000
00822164:  stur     x0, [x29, #-0x20]
00822168:  ldr      q0, [x8, #0xd20]
0082216c:  adrp     x8, #0x36c000
00822170:  add      x8, x8, #0x45
00822174:  ldr      q1, [x8]
00822178:  ldur     x8, [x8, #0xf]
0082217c:  strb     wzr, [x0, #0x17]
00822180:  stur     q0, [x29, #-0x30]
00822184:  str      q1, [x0]
00822188:  stur     x8, [x0, #0xf]
0082218c:  sub      x0, x29, #0x90
00822190:  sub      x1, x29, #0x30
00822194:  bl       #0x817c7c
00822198:  ldurb    w8, [x29, #-0x30]
0082219c:  mov      x21, x0
008221a0:  tbz      w8, #0, #0x8221ac
008221a4:  ldur     x0, [x29, #-0x20]
008221a8:  bl       #0x8ccfd0
008221ac:  cbz      x21, #0x8221bc
008221b0:  add      x0, x21, #0x28
008221b4:  bl       #0x809024
008221b8:  str      s0, [sp, #0xb8]
008221bc:  mov      w8, #0xe
008221c0:  mov      w9, #0x6964
008221c4:  sturb    wzr, [x29, #-0x28]
008221c8:  sturb    w8, [x29, #-0x30]
008221cc:  mov      w8, #0x6469
008221d0:  movk     w9, #0x6976, lsl #16
008221d4:  movk     w8, #0x7265, lsl #16
008221d8:  stur     w9, [x27, #0x81]
008221dc:  stur     w8, [x29, #-0x2c]
008221e0:  sub      x0, x29, #0x90
008221e4:  sub      x1, x29, #0x30
008221e8:  bl       #0x817c7c
008221ec:  ldurb    w8, [x29, #-0x30]
008221f0:  mov      x21, x0
008221f4:  tbz      w8, #0, #0x822200
008221f8:  ldur     x0, [x29, #-0x20]
008221fc:  bl       #0x8ccfd0
00822200:  cbz      x21, #0x822240
00822204:  ldr      w8, [x21, #0x58]
00822208:  cmp      w8, #1
0082220c:  b.eq     #0x822230
00822210:  cbnz     w8, #0x82b104
00822214:  ldr      w1, [x21, #0x28]
00822218:  cmp      w1, #2
0082221c:  b.ne     #0x82b11c
00822220:  ldrb     w8, [x21, #0x30]
00822224:  cmp      w8, #0
00822228:  cset     w0, ne
0082222c:  b        #0x822238
00822230:  add      x0, x21, #0x30
00822234:  bl       #0x8cdb20
00822238:  and      w8, w0, #1
0082223c:  strb     w8, [sp, #0xbc]
00822240:  adrp     x10, #0x36f000
00822244:  add      x10, x10, #0x93e
00822248:  mov      w9, #0x6c6f
0082224c:  ldr      x10, [x10]
00822250:  mov      w8, #0x18
00822254:  movk     w9, #0x726f, lsl #16
00822258:  sturb    w8, [x29, #-0x30]
0082225c:  stur     w9, [x27, #0x89]
00822260:  stur     x10, [x27, #0x81]
00822264:  sturb    wzr, [x29, #-0x23]
00822268:  sub      x0, x29, #0x90
0082226c:  sub      x1, x29, #0x30
00822270:  bl       #0x817c7c
00822274:  ldurb    w8, [x29, #-0x30]
00822278:  mov      x21, x0
0082227c:  tbz      w8, #0, #0x822288
00822280:  ldur     x0, [x29, #-0x20]
00822284:  bl       #0x8ccfd0
00822288:  cbz      x21, #0x8222c0
0082228c:  ldr      x8, [sp, #0x70]
00822290:  stur     wzr, [x29, #-0x30]
00822294:  ldr      x0, [x8, #8]
00822298:  ldr      w1, [x8]
0082229c:  adrp     x4, #0x99e000
008222a0:  add      x2, x21, #0x28
008222a4:  sub      x3, x29, #0x30
008222a8:  ldr      x4, [x4, #0x140]
008222ac:  bl       #0x807f90
008222b0:  ldur     w8, [x29, #-0x30]
008222b4:  mov      w9, #1
008222b8:  strb     w9, [sp, #0xc4]
008222bc:  str      w8, [sp, #0xc0]
008222c0:  adrp     x10, #0x367000
008222c4:  add      x10, x10, #0xa0f
008222c8:  mov      w8, #0x24
008222cc:  ldr      q0, [x10]
008222d0:  mov      w9, #0x7466
008222d4:  sturb    w8, [x29, #-0x30]
008222d8:  sturh    w9, [x27, #0x91]
008222dc:  stur     q0, [x27, #0x81]
008222e0:  sturb    wzr, [x29, #-0x1d]
008222e4:  sub      x0, x29, #0x90
008222e8:  sub      x1, x29, #0x30
008222ec:  bl       #0x817c7c
008222f0:  ldurb    w8, [x29, #-0x30]
008222f4:  mov      x21, x0
008222f8:  tbz      w8, #0, #0x822304
008222fc:  ldur     x0, [x29, #-0x20]
00822300:  bl       #0x8ccfd0
00822304:  cbz      x21, #0x822314
00822308:  add      x0, x21, #0x28
0082230c:  bl       #0x809024
00822310:  str      s0, [sp, #0xc8]
00822314:  adrp     x10, #0x36a000
00822318:  add      x10, x10, #0x836
0082231c:  mov      w9, #0x6769
00822320:  ldr      q0, [x10]
00822324:  mov      w8, #0x26
00822328:  movk     w9, #0x7468, lsl #16
0082232c:  sturb    w8, [x29, #-0x30]
00822330:  stur     w9, [x29, #-0x20]
00822334:  stur     q0, [x27, #0x81]
00822338:  sturb    wzr, [x29, #-0x1c]
0082233c:  sub      x0, x29, #0x90
00822340:  sub      x1, x29, #0x30
00822344:  bl       #0x817c7c
00822348:  ldurb    w8, [x29, #-0x30]
0082234c:  mov      x21, x0
00822350:  tbz      w8, #0, #0x82235c
00822354:  ldur     x0, [x29, #-0x20]
00822358:  bl       #0x8ccfd0
0082235c:  cbz      x21, #0x82236c
00822360:  add      x0, x21, #0x28
00822364:  bl       #0x809024
00822368:  str      s0, [sp, #0xcc]
0082236c:  adrp     x9, #0x36c000
00822370:  add      x9, x9, #0x4b4
00822374:  mov      w8, #0x20
00822378:  ldr      q0, [x9]
0082237c:  sturb    w8, [x29, #-0x30]
00822380:  sturb    wzr, [x29, #-0x1f]
00822384:  stur     q0, [x27, #0x81]
00822388:  sub      x0, x29, #0x90
0082238c:  sub      x1, x29, #0x30
00822390:  bl       #0x817c7c
00822394:  ldurb    w8, [x29, #-0x30]
00822398:  mov      x21, x0
0082239c:  tbz      w8, #0, #0x8223a8
008223a0:  ldur     x0, [x29, #-0x20]
008223a4:  bl       #0x8ccfd0
008223a8:  cbz      x21, #0x822424
008223ac:  sub      x8, x29, #0x30
008223b0:  add      x0, x21, #0x28
008223b4:  bl       #0x807a6c
008223b8:  ldp      x10, x20, [x29, #-0x28]
008223bc:  ldur     x8, [x27, #0x82]
008223c0:  ldurb    w21, [x29, #-0x30]
008223c4:  ldrb     w9, [sp, #0xe8]
008223c8:  ldurb    w22, [x29, #-0x2f]
008223cc:  stur     x8, [x29, #-0x40]
008223d0:  stur     x10, [x27, #0x76]
008223d4:  cbz      w9, #0x822404
008223d8:  ldrb     w8, [sp, #0xd0]
008223dc:  tbz      w8, #0, #0x8223e8
008223e0:  ldr      x0, [sp, #0xe0]
008223e4:  bl       #0x8ccfd0
008223e8:  ldur     x8, [x29, #-0x40]
008223ec:  ldur     x9, [x27, #0x76]
008223f0:  strb     w21, [sp, #0xd0]
008223f4:  strb     w22, [sp, #0xd1]
008223f8:  stur     x8, [sp, #0xd2]
008223fc:  stp      x9, x20, [sp, #0xd8]
00822400:  b        #0x822424
00822404:  ldur     x8, [x29, #-0x40]
00822408:  ldur     x9, [x27, #0x76]
0082240c:  strb     w21, [sp, #0xd0]
00822410:  strb     w22, [sp, #0xd1]
00822414:  stur     x8, [sp, #0xd2]
00822418:  mov      w8, #1
0082241c:  stp      x9, x20, [sp, #0xd8]
00822420:  strb     w8, [sp, #0xe8]
00822424:  adrp     x9, #0x36a000
00822428:  add      x9, x9, #0x84a
0082242c:  mov      w8, #0x2a
00822430:  ldr      q0, [x9]
00822434:  ldur     x9, [x9, #0xd]
00822438:  sturb    w8, [x29, #-0x30]
0082243c:  sturb    wzr, [x29, #-0x1a]
00822440:  stur     q0, [x27, #0x81]
00822444:  stur     x9, [x27, #0x8e]
00822448:  sub      x0, x29, #0x90
0082244c:  sub      x1, x29, #0x30
00822450:  bl       #0x817c7c
00822454:  ldurb    w8, [x29, #-0x30]
00822458:  mov      x21, x0
0082245c:  tbz      w8, #0, #0x822468
00822460:  ldur     x0, [x29, #-0x20]
00822464:  bl       #0x8ccfd0
00822468:  cbz      x21, #0x8224a0
0082246c:  ldr      x8, [sp, #0x70]
00822470:  stur     wzr, [x29, #-0x30]
00822474:  ldr      x0, [x8, #8]
00822478:  ldr      w1, [x8]
0082247c:  adrp     x4, #0x99e000
00822480:  add      x2, x21, #0x28
00822484:  sub      x3, x29, #0x30
00822488:  ldr      x4, [x4, #0x140]
0082248c:  bl       #0x807f90
00822490:  ldur     w8, [x29, #-0x30]
00822494:  mov      w9, #1
00822498:  strb     w9, [sp, #0xf4]
0082249c:  str      w8, [sp, #0xf0]
008224a0:  adrp     x9, #0x36d000
008224a4:  add      x9, x9, #0x9e1
008224a8:  mov      w8, #0x2a
008224ac:  ldr      q0, [x9]
008224b0:  ldur     x9, [x9, #0xd]
008224b4:  sturb    w8, [x29, #-0x30]
008224b8:  sturb    wzr, [x29, #-0x1a]
008224bc:  stur     q0, [x27, #0x81]
008224c0:  stur     x9, [x27, #0x8e]
008224c4:  sub      x0, x29, #0x90
008224c8:  sub      x1, x29, #0x30
008224cc:  bl       #0x817c7c
008224d0:  ldurb    w8, [x29, #-0x30]
008224d4:  mov      x21, x0
008224d8:  tbz      w8, #0, #0x8224e4
008224dc:  ldur     x0, [x29, #-0x20]
008224e0:  bl       #0x8ccfd0
008224e4:  cbz      x21, #0x8224f4
008224e8:  add      x0, x21, #0x28
008224ec:  bl       #0x8161a0
008224f0:  str      w0, [sp, #0xf8]
008224f4:  adrp     x10, #0x36a000
008224f8:  add      x10, x10, #0xe77
008224fc:  mov      w9, #0x4765
00822500:  ldr      q0, [x10]
00822504:  mov      w8, #0x26
00822508:  movk     w9, #0x7061, lsl #16
0082250c:  sturb    w8, [x29, #-0x30]
00822510:  stur     w9, [x29, #-0x20]
00822514:  stur     q0, [x27, #0x81]
00822518:  sturb    wzr, [x29, #-0x1c]
0082251c:  sub      x0, x29, #0x90
00822520:  sub      x1, x29, #0x30
00822524:  bl       #0x817c7c
00822528:  ldurb    w8, [x29, #-0x30]
0082252c:  mov      x21, x0
00822530:  tbz      w8, #0, #0x82253c
00822534:  ldur     x0, [x29, #-0x20]
00822538:  bl       #0x8ccfd0
0082253c:  cbz      x21, #0x82254c
00822540:  add      x0, x21, #0x28
00822544:  bl       #0x809024
00822548:  str      s0, [sp, #0xfc]
0082254c:  mov      w0, #0x30
00822550:  bl       #0x8ccfa0
00822554:  adrp     x8, #0x373000
00822558:  stur     x0, [x29, #-0x20]
0082255c:  ldr      q2, [x8, #0x40]
00822560:  mov      w8, #0x6c
00822564:  strh     w8, [x0, #0x20]
00822568:  adrp     x8, #0x369000
0082256c:  add      x8, x8, #0x87b
00822570:  ldp      q0, q1, [x8]
00822574:  str      q2, [sp, #0x50]
00822578:  stur     q2, [x29, #-0x30]
0082257c:  stp      q0, q1, [x0]
00822580:  sub      x0, x29, #0x90
00822584:  sub      x1, x29, #0x30
00822588:  bl       #0x817c7c
0082258c:  ldurb    w8, [x29, #-0x30]
00822590:  mov      x21, x0
00822594:  tbz      w8, #0, #0x8225a0
00822598:  ldur     x0, [x29, #-0x20]
0082259c:  bl       #0x8ccfd0
008225a0:  cbz      x21, #0x8225b0
008225a4:  add      x0, x21, #0x28
008225a8:  bl       #0x809024
008225ac:  str      s0, [sp, #0x100]
008225b0:  mov      w0, #0x20
008225b4:  bl       #0x8ccfa0
008225b8:  adrp     x8, #0x372000
008225bc:  stur     x0, [x29, #-0x20]
008225c0:  ldr      q0, [x8, #0x250]
008225c4:  adrp     x8, #0x36a000
008225c8:  add      x8, x8, #0x258
008225cc:  ldr      q1, [x8]
008225d0:  ldur     q2, [x8, #0xf]
008225d4:  strb     wzr, [x0, #0x1f]
008225d8:  stur     q0, [x29, #-0x30]
008225dc:  str      q1, [x0]
008225e0:  stur     q2, [x0, #0xf]
008225e4:  sub      x0, x29, #0x90
008225e8:  sub      x1, x29, #0x30
008225ec:  bl       #0x817c7c
008225f0:  ldurb    w8, [x29, #-0x30]
008225f4:  mov      x21, x0
008225f8:  tbz      w8, #0, #0x822604
008225fc:  ldur     x0, [x29, #-0x20]
00822600:  bl       #0x8ccfd0
00822604:  cbz      x21, #0x822614
00822608:  add      x0, x21, #0x28
0082260c:  bl       #0x809024
00822610:  str      s0, [sp, #0x104]
00822614:  mov      w0, #0x20
00822618:  bl       #0x8ccfa0
0082261c:  adrp     x8, #0x371000
00822620:  stur     x0, [x29, #-0x20]
00822624:  ldr      q0, [x8, #0x7a0]
00822628:  adrp     x8, #0x370000
0082262c:  add      x8, x8, #0x665
00822630:  ldr      q1, [x8]
00822634:  ldur     q2, [x8, #0xe]
00822638:  strb     wzr, [x0, #0x1e]
0082263c:  stur     q0, [x29, #-0x30]
00822640:  str      q1, [x0]
00822644:  stur     q2, [x0, #0xe]
00822648:  sub      x0, x29, #0x90
0082264c:  sub      x1, x29, #0x30
00822650:  bl       #0x817c7c
00822654:  ldurb    w8, [x29, #-0x30]
00822658:  mov      x21, x0
0082265c:  tbz      w8, #0, #0x822668
00822660:  ldur     x0, [x29, #-0x20]
00822664:  bl       #0x8ccfd0
00822668:  cbz      x21, #0x8226a0
0082266c:  ldr      x8, [sp, #0x70]
00822670:  stur     wzr, [x29, #-0x30]
00822674:  ldr      x0, [x8, #8]
00822678:  ldr      w1, [x8]
0082267c:  adrp     x4, #0x99e000
00822680:  add      x2, x21, #0x28
00822684:  sub      x3, x29, #0x30
00822688:  ldr      x4, [x4, #0x140]
0082268c:  bl       #0x807f90
00822690:  ldur     w8, [x29, #-0x30]
00822694:  mov      w9, #1
00822698:  strb     w9, [sp, #0x10c]
0082269c:  str      w8, [sp, #0x108]
008226a0:  adrp     x10, #0x368000
008226a4:  add      x10, x10, #0xd84
008226a8:  mov      w9, #0x6c6f
008226ac:  ldr      q0, [x10]
008226b0:  mov      w8, #0x28
008226b4:  movk     w9, #0x726f, lsl #16
008226b8:  sturb    w8, [x29, #-0x30]
008226bc:  stur     w9, [x27, #0x91]
008226c0:  stur     q0, [x27, #0x81]
008226c4:  sturb    wzr, [x29, #-0x1b]
008226c8:  sub      x0, x29, #0x90
008226cc:  sub      x1, x29, #0x30
008226d0:  bl       #0x817c7c
008226d4:  ldurb    w8, [x29, #-0x30]
008226d8:  mov      x21, x0
008226dc:  tbz      w8, #0, #0x8226e8
008226e0:  ldur     x0, [x29, #-0x20]
008226e4:  bl       #0x8ccfd0
008226e8:  cbz      x21, #0x822720
008226ec:  ldr      x8, [sp, #0x70]
008226f0:  stur     wzr, [x29, #-0x30]
008226f4:  ldr      x0, [x8, #8]
008226f8:  ldr      w1, [x8]
008226fc:  adrp     x4, #0x99e000
00822700:  add      x2, x21, #0x28
00822704:  sub      x3, x29, #0x30
00822708:  ldr      x4, [x4, #0x140]
0082270c:  bl       #0x807f90
00822710:  ldur     w8, [x29, #-0x30]
00822714:  mov      w9, #1
00822718:  strb     w9, [sp, #0x114]
0082271c:  str      w8, [sp, #0x110]
00822720:  mov      w0, #0x20
00822724:  bl       #0x8ccfa0
00822728:  adrp     x8, #0x371000
0082272c:  stur     x0, [x29, #-0x20]
00822730:  ldr      q0, [x8, #0xb20]
00822734:  adrp     x8, #0x369000
00822738:  add      x8, x8, #0x3df
0082273c:  ldr      q1, [x8]
00822740:  ldur     q2, [x8, #0xb]
00822744:  strb     wzr, [x0, #0x1b]
00822748:  stur     q0, [x29, #-0x30]
0082274c:  str      q1, [x0]
00822750:  stur     q2, [x0, #0xb]
00822754:  sub      x0, x29, #0x90
00822758:  sub      x1, x29, #0x30
0082275c:  bl       #0x817c7c
00822760:  ldurb    w8, [x29, #-0x30]
00822764:  mov      x21, x0
00822768:  tbz      w8, #0, #0x822774
0082276c:  ldur     x0, [x29, #-0x20]
00822770:  bl       #0x8ccfd0
00822774:  cbz      x21, #0x822784
00822778:  add      x0, x21, #0x28
0082277c:  bl       #0x809024
00822780:  str      s0, [sp, #0x118]
00822784:  mov      w0, #0x30
00822788:  bl       #0x8ccfa0
0082278c:  adrp     x8, #0x371000
00822790:  stur     x0, [x29, #-0x20]
00822794:  ldr      q0, [x8, #0x9d0]
00822798:  adrp     x8, #0x370000
0082279c:  add      x8, x8, #0xae2
008227a0:  ldp      q1, q2, [x8]
008227a4:  ldur     x8, [x8, #0x1d]
008227a8:  stur     q0, [x29, #-0x30]
008227ac:  strb     wzr, [x0, #0x25]
008227b0:  stp      q1, q2, [x0]
008227b4:  stur     x8, [x0, #0x1d]
008227b8:  sub      x0, x29, #0x90
008227bc:  sub      x1, x29, #0x30
008227c0:  bl       #0x817c7c
008227c4:  ldurb    w8, [x29, #-0x30]
008227c8:  mov      x21, x0
008227cc:  tbz      w8, #0, #0x8227d8
008227d0:  ldur     x0, [x29, #-0x20]
008227d4:  bl       #0x8ccfd0
008227d8:  cbz      x21, #0x8227e8
008227dc:  add      x0, x21, #0x28
008227e0:  bl       #0x809024
008227e4:  str      s0, [sp, #0x11c]
008227e8:  mov      w0, #0x20
008227ec:  bl       #0x8ccfa0
008227f0:  adrp     x8, #0x371000
008227f4:  stur     x0, [x29, #-0x20]
008227f8:  ldr      q1, [x8, #0x460]
008227fc:  adrp     x8, #0x36f000
00822800:  add      x8, x8, #0x94b
00822804:  ldr      q0, [x8]
00822808:  ldr      x8, [x8, #0x10]
0082280c:  strb     wzr, [x0, #0x18]
00822810:  str      q1, [sp, #0x40]
00822814:  stur     q1, [x29, #-0x30]
00822818:  str      q0, [x0]
0082281c:  str      x8, [x0, #0x10]
00822820:  sub      x0, x29, #0x90
00822824:  sub      x1, x29, #0x30
00822828:  bl       #0x817c7c
0082282c:  ldurb    w8, [x29, #-0x30]
00822830:  mov      x21, x0
00822834:  tbz      w8, #0, #0x822840
00822838:  ldur     x0, [x29, #-0x20]
0082283c:  bl       #0x8ccfd0
00822840:  cbz      x21, #0x822850
00822844:  add      x0, x21, #0x28
00822848:  bl       #0x809024
0082284c:  str      s0, [sp, #0x120]
00822850:  mov      w0, #0x30
00822854:  bl       #0x8ccfa0
00822858:  ldr      q0, [sp, #0x50]
0082285c:  adrp     x9, #0x36c000
00822860:  add      x9, x9, #0x4c5
00822864:  mov      w8, #0x65
00822868:  stur     x0, [x29, #-0x20]
0082286c:  stur     q0, [x29, #-0x30]
00822870:  ldp      q0, q1, [x9]
00822874:  strh     w8, [x0, #0x20]
00822878:  stp      q0, q1, [x0]
0082287c:  sub      x0, x29, #0x90
00822880:  sub      x1, x29, #0x30
00822884:  bl       #0x817c7c
00822888:  ldurb    w8, [x29, #-0x30]
0082288c:  mov      x21, x0
00822890:  tbz      w8, #0, #0x82289c
00822894:  ldur     x0, [x29, #-0x20]
00822898:  bl       #0x8ccfd0
0082289c:  cbz      x21, #0x8228ac
008228a0:  add      x0, x21, #0x28
008228a4:  bl       #0x809024
008228a8:  str      s0, [sp, #0x124]
008228ac:  adrp     x9, #0x365000
008228b0:  add      x9, x9, #0xd68
008228b4:  mov      w8, #0x2c
008228b8:  ldr      q0, [x9]
008228bc:  ldur     x9, [x9, #0xe]
008228c0:  sturb    w8, [x29, #-0x30]
008228c4:  sturb    wzr, [x29, #-0x19]
008228c8:  stur     q0, [x27, #0x81]
008228cc:  stur     x9, [x27, #0x8f]
008228d0:  sub      x0, x29, #0x90
008228d4:  sub      x1, x29, #0x30
008228d8:  bl       #0x817c7c
008228dc:  ldurb    w8, [x29, #-0x30]
008228e0:  mov      x21, x0
008228e4:  tbz      w8, #0, #0x8228f0
008228e8:  ldur     x0, [x29, #-0x20]
008228ec:  bl       #0x8ccfd0
008228f0:  cbz      x21, #0x822900
008228f4:  add      x0, x21, #0x28
008228f8:  bl       #0x809024
008228fc:  str      s0, [sp, #0x128]
00822900:  adrp     x10, #0x36c000
00822904:  add      x10, x10, #0x4e7
00822908:  mov      w9, #0x6168
0082290c:  ldr      q0, [x10]
00822910:  mov      w8, #0x28
00822914:  movk     w9, #0x6570, lsl #16
00822918:  sturb    w8, [x29, #-0x30]
0082291c:  stur     w9, [x27, #0x91]
00822920:  stur     q0, [x27, #0x81]
00822924:  sturb    wzr, [x29, #-0x1b]
00822928:  sub      x0, x29, #0x90
0082292c:  sub      x1, x29, #0x30
00822930:  bl       #0x817c7c
00822934:  ldurb    w8, [x29, #-0x30]
00822938:  mov      x21, x0
0082293c:  tbz      w8, #0, #0x822948
00822940:  ldur     x0, [x29, #-0x20]
00822944:  bl       #0x8ccfd0
00822948:  cbz      x21, #0x8229cc
0082294c:  sub      x8, x29, #0x30
00822950:  add      x0, x21, #0x28
00822954:  bl       #0x807a6c
00822958:  ldp      x10, x20, [x29, #-0x28]
0082295c:  ldur     x8, [x27, #0x82]
00822960:  ldurb    w21, [x29, #-0x30]
00822964:  ldrb     w9, [sp, #0x148]
00822968:  ldurb    w22, [x29, #-0x2f]
0082296c:  stur     x8, [x29, #-0x40]
00822970:  stur     x10, [x27, #0x76]
00822974:  cbz      w9, #0x8229a8
00822978:  ldrb     w8, [sp, #0x130]
0082297c:  tbz      w8, #0, #0x822988
00822980:  ldr      x0, [sp, #0x140]
00822984:  bl       #0x8ccfd0
00822988:  ldur     x8, [x29, #-0x40]
0082298c:  ldur     x9, [x27, #0x76]
00822990:  add      x10, sp, #0xa8
00822994:  strb     w21, [sp, #0x130]
00822998:  strb     w22, [sp, #0x131]
0082299c:  stur     x8, [x10, #0x8a]
008229a0:  stp      x9, x20, [sp, #0x138]
008229a4:  b        #0x8229cc
008229a8:  ldur     x8, [x29, #-0x40]
008229ac:  ldur     x9, [x27, #0x76]
008229b0:  add      x10, sp, #0xa8
008229b4:  strb     w21, [sp, #0x130]
008229b8:  stur     x8, [x10, #0x8a]
008229bc:  mov      w8, #1
008229c0:  strb     w22, [sp, #0x131]
008229c4:  stp      x9, x20, [sp, #0x138]
008229c8:  strb     w8, [sp, #0x148]
008229cc:  mov      w0, #0x20
008229d0:  bl       #0x8ccfa0
008229d4:  adrp     x8, #0x36b000
008229d8:  add      x8, x8, #0x944
008229dc:  ldr      q1, [sp, #0x40]
008229e0:  ldr      q0, [x8]
008229e4:  ldr      x8, [x8, #0x10]
008229e8:  stur     x0, [x29, #-0x20]
008229ec:  stur     q1, [x29, #-0x30]
008229f0:  str      q0, [x0]
008229f4:  str      x8, [x0, #0x10]
008229f8:  strb     wzr, [x0, #0x18]
008229fc:  sub      x0, x29, #0x90
00822a00:  sub      x1, x29, #0x30
00822a04:  bl       #0x817c7c
00822a08:  ldurb    w8, [x29, #-0x30]
00822a0c:  mov      x21, x0
00822a10:  tbz      w8, #0, #0x822a1c
00822a14:  ldur     x0, [x29, #-0x20]
00822a18:  bl       #0x8ccfd0
00822a1c:  cbz      x21, #0x822a2c
00822a20:  add      x0, x21, #0x28
00822a24:  bl       #0x809024
00822a28:  str      s0, [sp, #0x150]
00822a2c:  adrp     x10, #0x369000
00822a30:  add      x10, x10, #0x89d
00822a34:  mov      w8, #0x1e
00822a38:  ldr      x9, [x10]
00822a3c:  ldur     x10, [x10, #7]
00822a40:  sturb    w8, [x29, #-0x30]
00822a44:  sturb    wzr, [x29, #-0x20]
00822a48:  stur     x9, [x27, #0x81]
00822a4c:  stur     x10, [x29, #-0x28]
00822a50:  sub      x0, x29, #0x90
00822a54:  sub      x1, x29, #0x30
00822a58:  bl       #0x817c7c
00822a5c:  ldurb    w8, [x29, #-0x30]
00822a60:  mov      x21, x0
00822a64:  tbz      w8, #0, #0x822a70
00822a68:  ldur     x0, [x29, #-0x20]
00822a6c:  bl       #0x8ccfd0
00822a70:  cbz      x21, #0x822a80
00822a74:  add      x0, x21, #0x28
00822a78:  bl       #0x8161a0
00822a7c:  str      w0, [sp, #0x154]
00822a80:  mov      w8, #0xa
00822a84:  mov      w9, #0x6977
00822a88:  movk     w9, #0x7464, lsl #16
00822a8c:  sturb    w8, [x29, #-0x30]
00822a90:  mov      w8, #0x68
00822a94:  stur     w9, [x27, #0x81]
00822a98:  sturh    w8, [x27, #0x85]
00822a9c:  sub      x0, x29, #0x90
00822aa0:  sub      x1, x29, #0x30
00822aa4:  bl       #0x817c7c
00822aa8:  ldurb    w8, [x29, #-0x30]
00822aac:  mov      x21, x0
00822ab0:  tbz      w8, #0, #0x822abc
00822ab4:  ldur     x0, [x29, #-0x20]
00822ab8:  bl       #0x8ccfd0
00822abc:  cbz      x21, #0x822acc
00822ac0:  add      x0, x21, #0x28
00822ac4:  bl       #0x809024
00822ac8:  str      s0, [sp, #0x158]
00822acc:  mov      w8, #0xc
00822ad0:  mov      w9, #0x6568
00822ad4:  sturb    wzr, [x29, #-0x29]
00822ad8:  movk     w9, #0x6769, lsl #16
00822adc:  sturb    w8, [x29, #-0x30]
00822ae0:  mov      w8, #0x7468
00822ae4:  stur     w9, [x27, #0x81]
00822ae8:  sturh    w8, [x27, #0x85]
00822aec:  sub      x0, x29, #0x90
00822af0:  sub      x1, x29, #0x30
00822af4:  bl       #0x817c7c
00822af8:  ldurb    w8, [x29, #-0x30]
00822afc:  mov      x21, x0
00822b00:  tbz      w8, #0, #0x822b0c
00822b04:  ldur     x0, [x29, #-0x20]
00822b08:  bl       #0x8ccfd0
00822b0c:  cbz      x21, #0x822b1c
00822b10:  add      x0, x21, #0x28
00822b14:  bl       #0x809024
00822b18:  str      s0, [sp, #0x15c]
00822b1c:  adrp     x10, #0x36e000
00822b20:  add      x10, x10, #0x59
00822b24:  mov      w8, #0x22
00822b28:  ldr      q0, [x10]
00822b2c:  mov      w9, #0x74
00822b30:  sturb    w8, [x29, #-0x30]
00822b34:  sturh    w9, [x27, #0x91]
00822b38:  stur     q0, [x27, #0x81]
00822b3c:  sub      x0, x29, #0x90
00822b40:  sub      x1, x29, #0x30
00822b44:  bl       #0x817c7c
00822b48:  ldurb    w8, [x29, #-0x30]
00822b4c:  mov      x21, x0
00822b50:  tbz      w8, #0, #0x822b5c
00822b54:  ldur     x0, [x29, #-0x20]
00822b58:  bl       #0x8ccfd0
00822b5c:  cbz      x21, #0x822be0
00822b60:  sub      x8, x29, #0x30
00822b64:  add      x0, x21, #0x28
00822b68:  bl       #0x807a6c
00822b6c:  ldp      x10, x20, [x29, #-0x28]
00822b70:  ldur     x8, [x27, #0x82]
00822b74:  ldurb    w21, [x29, #-0x30]
00822b78:  ldrb     w9, [sp, #0x178]
00822b7c:  ldurb    w22, [x29, #-0x2f]
00822b80:  stur     x8, [x29, #-0x40]
00822b84:  stur     x10, [x27, #0x76]
00822b88:  cbz      w9, #0x822bbc
00822b8c:  ldrb     w8, [sp, #0x160]
00822b90:  tbz      w8, #0, #0x822b9c
00822b94:  ldr      x0, [sp, #0x170]
00822b98:  bl       #0x8ccfd0
00822b9c:  ldur     x8, [x29, #-0x40]
00822ba0:  ldur     x9, [x27, #0x76]
00822ba4:  add      x10, sp, #0xa8
00822ba8:  strb     w21, [sp, #0x160]
00822bac:  strb     w22, [sp, #0x161]
00822bb0:  stur     x8, [x10, #0xba]
00822bb4:  stp      x9, x20, [sp, #0x168]
00822bb8:  b        #0x822be0
00822bbc:  ldur     x8, [x29, #-0x40]
00822bc0:  ldur     x9, [x27, #0x76]
00822bc4:  add      x10, sp, #0xa8
00822bc8:  strb     w21, [sp, #0x160]
00822bcc:  stur     x8, [x10, #0xba]
00822bd0:  mov      w8, #1
00822bd4:  strb     w22, [sp, #0x161]
00822bd8:  stp      x9, x20, [sp, #0x168]
00822bdc:  strb     w8, [sp, #0x178]
00822be0:  adrp     x10, #0x365000
00822be4:  add      x10, x10, #0x32
00822be8:  mov      w9, #0x656d
00822bec:  ldr      q0, [x10]
00822bf0:  mov      w8, #0x26
00822bf4:  movk     w9, #0x746e, lsl #16
00822bf8:  sturb    w8, [x29, #-0x30]
00822bfc:  stur     w9, [x29, #-0x20]
00822c00:  stur     q0, [x27, #0x81]
00822c04:  sturb    wzr, [x29, #-0x1c]
00822c08:  sub      x0, x29, #0x90
00822c0c:  sub      x1, x29, #0x30
00822c10:  bl       #0x817c7c
00822c14:  ldurb    w8, [x29, #-0x30]
00822c18:  mov      x21, x0
00822c1c:  tbz      w8, #0, #0x822c28
00822c20:  ldur     x0, [x29, #-0x20]
00822c24:  bl       #0x8ccfd0
00822c28:  cbz      x21, #0x822c84
00822c2c:  sub      x8, x29, #0x30
00822c30:  add      x0, x21, #0x28
00822c34:  bl       #0x807a6c
00822c38:  ldp      x10, x20, [x29, #-0x28]
00822c3c:  ldur     x8, [x27, #0x82]
00822c40:  ldurb    w21, [x29, #-0x30]
00822c44:  ldrb     w9, [sp, #0x198]
00822c48:  ldurb    w22, [x29, #-0x2f]
00822c4c:  stur     x8, [x29, #-0x40]
00822c50:  stur     x10, [x27, #0x76]
00822c54:  cbz      w9, #0x822ce4
00822c58:  ldrb     w8, [sp, #0x180]
00822c5c:  tbz      w8, #0, #0x822c68
00822c60:  ldr      x0, [sp, #0x190]
00822c64:  bl       #0x8ccfd0
00822c68:  ldur     x8, [x29, #-0x40]
00822c6c:  ldur     x9, [x27, #0x76]
00822c70:  add      x10, sp, #0xa8
00822c74:  strb     w21, [sp, #0x180]
00822c78:  strb     w22, [sp, #0x181]
00822c7c:  stur     x8, [x10, #0xda]
00822c80:  stp      x9, x20, [sp, #0x188]
00822c84:  ldur     x21, [x29, #-0x80]
00822c88:  cbz      x21, #0x822d10
00822c8c:  mov      w20, #-1
00822c90:  b        #0x822ca4
00822c94:  mov      x0, x21
00822c98:  bl       #0x8ccfd0
00822c9c:  mov      x21, x22
00822ca0:  cbz      x22, #0x822d10
00822ca4:  ldr      w8, [x21, #0x58]
00822ca8:  ldr      x22, [x21]
00822cac:  cmn      w8, #1
00822cb0:  b.eq     #0x822ccc
00822cb4:  adrp     x9, #0x98c000
00822cb8:  add      x9, x9, #0x980
00822cbc:  ldr      x8, [x9, x8, lsl #3]
00822cc0:  sub      x0, x29, #0x30
00822cc4:  add      x1, x21, #0x28
00822cc8:  blr      x8
00822ccc:  ldrb     w8, [x21, #0x10]
00822cd0:  str      w20, [x21, #0x58]
00822cd4:  tbz      w8, #0, #0x822c94
00822cd8:  ldr      x0, [x21, #0x20]
00822cdc:  bl       #0x8ccfd0
00822ce0:  b        #0x822c94
00822ce4:  ldur     x8, [x29, #-0x40]
00822ce8:  ldur     x9, [x27, #0x76]
00822cec:  add      x10, sp, #0xa8
00822cf0:  strb     w21, [sp, #0x180]
00822cf4:  stur     x8, [x10, #0xda]
00822cf8:  mov      w8, #1
00822cfc:  strb     w22, [sp, #0x181]
00822d00:  stp      x9, x20, [sp, #0x188]
00822d04:  strb     w8, [sp, #0x198]
00822d08:  ldur     x21, [x29, #-0x80]
00822d0c:  cbnz     x21, #0x822c8c
00822d10:  ldur     x0, [x29, #-0x90]
00822d14:  stur     xzr, [x29, #-0x90]
00822d18:  cbz      x0, #0x822d20
00822d1c:  bl       #0x8ccfd0
00822d20:  ldrb     w20, [sp, #0xe8]
00822d24:  add      x8, sp, #0xa8
00822d28:  cbz      w20, #0x822d58
00822d2c:  ldur     x9, [sp, #0xd2]
00822d30:  ldrb     w21, [sp, #0xd0]
00822d34:  ldrb     w28, [sp, #0xd1]
00822d38:  stur     x9, [x29, #-0x40]
00822d3c:  ldp      x10, x9, [sp, #0xd8]
00822d40:  stp      xzr, xzr, [sp, #0xd0]
00822d44:  str      xzr, [sp, #0xe0]
00822d48:  str      x9, [sp, #0x40]
00822d4c:  mov      w9, #1
00822d50:  stur     x10, [x27, #0x76]
00822d54:  b        #0x822d60
00822d58:  mov      w21, wzr
00822d5c:  mov      w9, wzr
00822d60:  ldur     q0, [x8, #0x48]
00822d64:  ldur     q1, [x8, #0x58]
00822d68:  ldur     q2, [x8, #0x68]
00822d6c:  ldrb     w22, [sp, #0x148]
00822d70:  stur     q0, [x27, #0x27]
00822d74:  ldur     q0, [x8, #0x74]
00822d78:  stur     q1, [x27, #0x37]
00822d7c:  stur     q2, [x27, #0x47]
00822d80:  stur     q0, [x27, #0x53]
00822d84:  cbz      w22, #0x822db8
00822d88:  add      x10, sp, #0xa8
00822d8c:  ldrb     w24, [sp, #0x130]
00822d90:  ldrb     w15, [sp, #0x131]
00822d94:  ldur     x10, [x10, #0x8a]
00822d98:  mov      w1, #1
00822d9c:  stur     x10, [x29, #-0xa0]
00822da0:  ldp      x11, x10, [sp, #0x138]
00822da4:  stp      xzr, xzr, [x8, #0x90]
00822da8:  stur     xzr, [x8, #0x88]
00822dac:  str      x10, [sp, #0x50]
00822db0:  stur     x11, [x27, #0x16]
00822db4:  b        #0x822dc0
00822db8:  mov      w24, wzr
00822dbc:  mov      w1, wzr
00822dc0:  ldur     q0, [x8, #0xa8]
00822dc4:  ldrb     w13, [sp, #0x178]
00822dc8:  stur     q0, [x27, #0x87]
00822dcc:  cbz      w13, #0x822e04
00822dd0:  add      x10, sp, #0xa8
00822dd4:  ldrb     w26, [sp, #0x160]
00822dd8:  mov      w16, #1
00822ddc:  ldur     x10, [x10, #0xba]
00822de0:  stur     x10, [x29, #-0xb0]
00822de4:  ldp      x11, x10, [sp, #0x168]
00822de8:  str      xzr, [sp, #0x170]
00822dec:  str      x10, [sp, #0x38]
00822df0:  ldrb     w10, [sp, #0x161]
00822df4:  stur     x11, [x27, #6]
00822df8:  str      w10, [sp, #0xc]
00822dfc:  stp      xzr, xzr, [sp, #0x160]
00822e00:  b        #0x822e0c
00822e04:  mov      w26, wzr
00822e08:  mov      w16, wzr
00822e0c:  ldrb     w14, [sp, #0x198]
00822e10:  str      w22, [sp, #0x30]
00822e14:  cbz      w14, #0x822e48
00822e18:  add      x12, sp, #0xa8
00822e1c:  ldp      x11, x0, [sp, #0x188]
00822e20:  ldur     x10, [x12, #0xda]
00822e24:  mov      w25, #1
00822e28:  stur     x10, [x29, #-0xc0]
00822e2c:  ldrb     w10, [sp, #0x181]
00822e30:  stur     x11, [x12, #0xfe]
00822e34:  ldrb     w12, [sp, #0x180]
00822e38:  str      w10, [sp, #0x10]
00822e3c:  stp      xzr, xzr, [x8, #0xe0]
00822e40:  stur     xzr, [x8, #0xd8]
00822e44:  b        #0x822e50
00822e48:  mov      w12, wzr
00822e4c:  mov      w25, wzr
00822e50:  ldur     q0, [sp, #0xa8]
00822e54:  ldur     q1, [sp, #0xb8]
00822e58:  ldrb     w10, [x19, #0x1f8]
00822e5c:  ldr      x11, [sp, #0xc8]
00822e60:  stp      q0, q1, [x19, #0x100]
00822e64:  str      x11, [x19, #0x120]
00822e68:  cbz      w10, #0x822f08
00822e6c:  ldrb     w8, [x19, #0x140]
00822e70:  str      w20, [sp, #0x18]
00822e74:  sub      x20, x29, #0x90
00822e78:  str      x0, [sp, #0x28]
00822e7c:  cmp      w8, w9
00822e80:  str      w12, [sp, #0x24]
00822e84:  b.ne     #0x82306c
00822e88:  cbz      w8, #0x82313c
00822e8c:  ldrb     w8, [x19, #0x128]
00822e90:  tbz      w8, #0, #0x822edc
00822e94:  ldr      x0, [x19, #0x138]
00822e98:  stp      w26, w25, [sp, #4]
00822e9c:  mov      w25, w24
00822ea0:  mov      w24, w13
00822ea4:  mov      w23, w14
00822ea8:  mov      w26, w15
00822eac:  mov      w22, w16
00822eb0:  str      w1, [sp]
00822eb4:  bl       #0x8ccfd0
00822eb8:  mov      w15, w26
00822ebc:  ldr      w12, [sp, #0x24]
00822ec0:  ldr      x0, [sp, #0x28]
00822ec4:  ldp      w1, w26, [sp]
00822ec8:  mov      w13, w24
00822ecc:  mov      w24, w25
00822ed0:  ldr      w25, [sp, #8]
00822ed4:  mov      w16, w22
00822ed8:  mov      w14, w23
00822edc:  ldur     x8, [x27, #0x76]
00822ee0:  ldur     x9, [x29, #-0x40]
00822ee4:  add      x10, x19, #0x12a
00822ee8:  strb     w21, [x19, #0x128]
00822eec:  mov      w21, wzr
00822ef0:  str      x8, [x19, #0x130]
00822ef4:  ldr      x8, [sp, #0x40]
00822ef8:  strb     w28, [x19, #0x129]
00822efc:  str      x9, [x10]
00822f00:  str      x8, [x19, #0x138]
00822f04:  b        #0x82313c
00822f08:  strb     wzr, [x19, #0x128]
00822f0c:  strb     wzr, [x19, #0x140]
00822f10:  cbz      w20, #0x822f50
00822f14:  ldur     x9, [x27, #0x76]
00822f18:  ldur     x10, [x29, #-0x40]
00822f1c:  add      x11, x19, #0x12a
00822f20:  strb     w21, [x19, #0x128]
00822f24:  mov      w21, wzr
00822f28:  str      x9, [x19, #0x130]
00822f2c:  ldr      x9, [sp, #0x40]
00822f30:  strb     w28, [x19, #0x129]
00822f34:  str      x9, [x19, #0x138]
00822f38:  mov      w9, #1
00822f3c:  str      x10, [x11]
00822f40:  stur     xzr, [x29, #-0x40]
00822f44:  stur     xzr, [x27, #0x76]
00822f48:  strb     w9, [x19, #0x140]
00822f4c:  str      xzr, [sp, #0x40]
00822f50:  ldur     q0, [x8, #0x48]
00822f54:  add      x9, x19, #0x100
00822f58:  ldr      w22, [sp, #0x30]
00822f5c:  ldur     q1, [x8, #0x58]
00822f60:  ldur     q2, [x8, #0x68]
00822f64:  strb     wzr, [x19, #0x188]
00822f68:  stur     q0, [x9, #0x48]
00822f6c:  ldur     q0, [x8, #0x74]
00822f70:  stur     q1, [x9, #0x58]
00822f74:  stur     q2, [x9, #0x68]
00822f78:  stur     q0, [x9, #0x74]
00822f7c:  strb     wzr, [x19, #0x1a0]
00822f80:  cbz      w22, #0x822fc0
00822f84:  ldur     x9, [x27, #0x16]
00822f88:  ldur     x10, [x29, #-0xa0]
00822f8c:  add      x11, x19, #0x18a
00822f90:  strb     w24, [x19, #0x188]
00822f94:  mov      w24, wzr
00822f98:  str      x9, [x19, #0x190]
00822f9c:  ldr      x9, [sp, #0x50]
00822fa0:  strb     w15, [x19, #0x189]
00822fa4:  str      x9, [x19, #0x198]
00822fa8:  mov      w9, #1
00822fac:  str      x10, [x11]
00822fb0:  stur     xzr, [x29, #-0xa0]
00822fb4:  stur     xzr, [x27, #0x16]
00822fb8:  strb     w9, [x19, #0x1a0]
00822fbc:  str      xzr, [sp, #0x50]
00822fc0:  ldur     q0, [x8, #0xa8]
00822fc4:  add      x8, x19, #0x1a8
00822fc8:  strb     wzr, [x19, #0x1b8]
00822fcc:  strb     wzr, [x19, #0x1d0]
00822fd0:  str      q0, [x8]
00822fd4:  cbz      w13, #0x823018
00822fd8:  ldur     x8, [x27, #6]
00822fdc:  ldr      w9, [sp, #0xc]
00822fe0:  add      x10, x19, #0x1ba
00822fe4:  strb     w26, [x19, #0x1b8]
00822fe8:  mov      w26, wzr
00822fec:  str      x8, [x19, #0x1c0]
00822ff0:  ldr      x8, [sp, #0x38]
00822ff4:  strb     w9, [x19, #0x1b9]
00822ff8:  ldur     x9, [x29, #-0xb0]
00822ffc:  str      x8, [x19, #0x1c8]
00823000:  mov      w8, #1
00823004:  str      x9, [x10]
00823008:  stur     xzr, [x29, #-0xb0]
0082300c:  stur     xzr, [x27, #6]
00823010:  strb     w8, [x19, #0x1d0]
00823014:  str      xzr, [sp, #0x38]
00823018:  strb     wzr, [x19, #0x1d8]
0082301c:  strb     wzr, [x19, #0x1f0]
00823020:  cbz      w14, #0x823060
00823024:  add      x11, sp, #0xa8
00823028:  ldr      w9, [sp, #0x10]
0082302c:  strb     w12, [x19, #0x1d8]
00823030:  ldur     x8, [x11, #0xfe]
00823034:  add      x10, x19, #0x1da
00823038:  mov      w12, wzr
0082303c:  strb     w9, [x19, #0x1d9]
00823040:  ldur     x9, [x29, #-0xc0]
00823044:  stp      x8, x0, [x19, #0x1e0]
00823048:  mov      w8, #1
0082304c:  mov      x0, xzr
00823050:  str      x9, [x10]
00823054:  stur     xzr, [x29, #-0xc0]
00823058:  stur     xzr, [x11, #0xfe]
0082305c:  strb     w8, [x19, #0x1f0]
00823060:  mov      w8, #1
00823064:  strb     w8, [x19, #0x1f8]
00823068:  b        #0x823440
0082306c:  cbz      w8, #0x823100
00823070:  ldrb     w8, [x19, #0x128]
00823074:  tbz      w8, #0, #0x8230c0
00823078:  ldr      x0, [x19, #0x138]
0082307c:  stp      w26, w25, [sp, #4]
00823080:  mov      w25, w24
00823084:  mov      w24, w13
00823088:  mov      w23, w14
0082308c:  mov      w26, w15
00823090:  mov      w22, w16
00823094:  mov      w28, w1
00823098:  bl       #0x8ccfd0
0082309c:  mov      w15, w26
008230a0:  mov      w13, w24
008230a4:  mov      w24, w25
008230a8:  ldp      w26, w25, [sp, #4]
008230ac:  ldr      w12, [sp, #0x24]
008230b0:  ldr      x0, [sp, #0x28]
008230b4:  mov      w1, w28
008230b8:  mov      w16, w22
008230bc:  mov      w14, w23
008230c0:  strb     wzr, [x19, #0x140]
008230c4:  b        #0x82313c
008230c8:  ldr      w9, [sp, #8]
008230cc:  ldur     x8, [x29, #-0xc0]
008230d0:  add      x10, sp, #0xa8
008230d4:  strb     w12, [x19, #0xd8]
008230d8:  strb     w9, [x19, #0xd9]
008230dc:  ldur     x9, [x10, #0xfe]
008230e0:  stur     x8, [x19, #0xda]
008230e4:  mov      w8, #1
008230e8:  stp      x9, x0, [x19, #0xe0]
008230ec:  stur     xzr, [x29, #-0xc0]
008230f0:  stur     xzr, [x10, #0xfe]
008230f4:  strb     w8, [x19, #0xf0]
008230f8:  cbnz     w21, #0x821e94
008230fc:  b        #0x821ea0
00823100:  ldur     x8, [x27, #0x76]
00823104:  ldur     x9, [x29, #-0x40]
00823108:  add      x10, x19, #0x12a
0082310c:  strb     w21, [x19, #0x128]
00823110:  mov      w21, wzr
00823114:  str      x8, [x19, #0x130]
00823118:  ldr      x8, [sp, #0x40]
0082311c:  strb     w28, [x19, #0x129]
00823120:  str      x8, [x19, #0x138]
00823124:  mov      w8, #1
00823128:  str      x9, [x10]
0082312c:  stur     xzr, [x29, #-0x40]
00823130:  stur     xzr, [x27, #0x76]
00823134:  strb     w8, [x19, #0x140]
00823138:  str      xzr, [sp, #0x40]
0082313c:  ldur     q0, [x20, #7]
00823140:  add      x9, x19, #0x100
00823144:  ldrb     w8, [x19, #0x1a0]
00823148:  ldur     q1, [x20, #0x17]
0082314c:  ldur     q2, [x20, #0x27]
00823150:  sub      x28, x29, #0x30
00823154:  stur     q0, [x9, #0x48]
00823158:  ldur     q0, [x20, #0x33]
0082315c:  cmp      w8, w1
00823160:  stur     q1, [x9, #0x58]
00823164:  stur     q2, [x9, #0x68]
00823168:  stur     q0, [x9, #0x74]
0082316c:  b.ne     #0x8231f4
00823170:  cbz      w8, #0x823284
00823174:  ldrb     w8, [x19, #0x188]
00823178:  tbz      w8, #0, #0x8231c8
0082317c:  ldr      x0, [x19, #0x198]
00823180:  mov      w23, w26
00823184:  mov      w26, w25
00823188:  mov      w25, w24
0082318c:  mov      w24, w13
00823190:  mov      w20, w14
00823194:  mov      w22, w15
00823198:  mov      w28, w16
0082319c:  bl       #0x8ccfd0
008231a0:  ldr      w12, [sp, #0x24]
008231a4:  ldr      x0, [sp, #0x28]
008231a8:  mov      w16, w28
008231ac:  sub      x28, x29, #0x30
008231b0:  mov      w15, w22
008231b4:  mov      w14, w20
008231b8:  mov      w13, w24
008231bc:  mov      w24, w25
008231c0:  mov      w25, w26
008231c4:  mov      w26, w23
008231c8:  ldur     x8, [x27, #0x16]
008231cc:  ldur     x9, [x29, #-0xa0]
008231d0:  add      x10, x19, #0x18a
008231d4:  strb     w24, [x19, #0x188]
008231d8:  mov      w24, wzr
008231dc:  str      x8, [x19, #0x190]
008231e0:  ldr      x8, [sp, #0x50]
008231e4:  strb     w15, [x19, #0x189]
008231e8:  str      x9, [x10]
008231ec:  str      x8, [x19, #0x198]
008231f0:  b        #0x823284
008231f4:  cbz      w8, #0x823248
008231f8:  ldrb     w8, [x19, #0x188]
008231fc:  tbz      w8, #0, #0x823240
00823200:  ldr      x0, [x19, #0x198]
00823204:  mov      w23, w26
00823208:  mov      w22, w25
0082320c:  mov      w25, w24
00823210:  mov      w24, w13
00823214:  mov      w20, w14
00823218:  mov      w26, w16
0082321c:  bl       #0x8ccfd0
00823220:  ldr      w12, [sp, #0x24]
00823224:  ldr      x0, [sp, #0x28]
00823228:  mov      w16, w26
0082322c:  mov      w14, w20
00823230:  mov      w13, w24
00823234:  mov      w24, w25
00823238:  mov      w25, w22
0082323c:  mov      w26, w23
00823240:  strb     wzr, [x19, #0x1a0]
00823244:  b        #0x823284
00823248:  ldur     x8, [x27, #0x16]
0082324c:  ldur     x9, [x29, #-0xa0]
00823250:  add      x10, x19, #0x18a
00823254:  strb     w24, [x19, #0x188]
00823258:  mov      w24, wzr
0082325c:  str      x8, [x19, #0x190]
00823260:  ldr      x8, [sp, #0x50]
00823264:  strb     w15, [x19, #0x189]
00823268:  str      x8, [x19, #0x198]
0082326c:  mov      w8, #1
00823270:  str      x9, [x10]
00823274:  stur     xzr, [x29, #-0xa0]
00823278:  stur     xzr, [x27, #0x16]
0082327c:  strb     w8, [x19, #0x1a0]
00823280:  str      xzr, [sp, #0x50]
00823284:  ldrb     w8, [x19, #0x1d0]
00823288:  ldur     q0, [x28, #7]
0082328c:  add      x9, x19, #0x1a8
00823290:  cmp      w8, w16
00823294:  str      q0, [x9]
00823298:  b.ne     #0x823314
0082329c:  ldr      w20, [sp, #0x18]
008232a0:  cbz      w8, #0x823398
008232a4:  ldrb     w8, [x19, #0x1b8]
008232a8:  ldr      w22, [sp, #0x30]
008232ac:  tbz      w8, #0, #0x8232e4
008232b0:  ldr      x0, [x19, #0x1c8]
008232b4:  str      w21, [sp, #8]
008232b8:  mov      w21, w25
008232bc:  mov      w28, w24
008232c0:  mov      w24, w13
008232c4:  mov      w23, w14
008232c8:  bl       #0x8ccfd0
008232cc:  ldr      w12, [sp, #0x24]
008232d0:  ldr      x0, [sp, #0x28]
008232d4:  mov      w14, w23
008232d8:  ldr      w21, [sp, #8]
008232dc:  mov      w13, w24
008232e0:  mov      w24, w28
008232e4:  ldur     x8, [x27, #6]
008232e8:  ldr      w9, [sp, #0xc]
008232ec:  add      x10, x19, #0x1ba
008232f0:  strb     w26, [x19, #0x1b8]
008232f4:  mov      w26, wzr
008232f8:  strb     w9, [x19, #0x1b9]
008232fc:  ldur     x9, [x29, #-0xb0]
00823300:  str      x8, [x19, #0x1c0]
00823304:  ldr      x8, [sp, #0x38]
00823308:  str      x9, [x10]
0082330c:  str      x8, [x19, #0x1c8]
00823310:  b        #0x82339c
00823314:  ldr      w20, [sp, #0x18]
00823318:  cbz      w8, #0x823358
0082331c:  ldrb     w8, [x19, #0x1b8]
00823320:  ldr      w22, [sp, #0x30]
00823324:  tbz      w8, #0, #0x823350
00823328:  ldr      x0, [x19, #0x1c8]
0082332c:  mov      w28, w24
00823330:  mov      w24, w13
00823334:  mov      w23, w14
00823338:  bl       #0x8ccfd0
0082333c:  ldr      w12, [sp, #0x24]
00823340:  ldr      x0, [sp, #0x28]
00823344:  mov      w14, w23
00823348:  mov      w13, w24
0082334c:  mov      w24, w28
00823350:  strb     wzr, [x19, #0x1d0]
00823354:  b        #0x82339c
00823358:  ldur     x8, [x27, #6]
0082335c:  ldr      w9, [sp, #0xc]
00823360:  add      x10, x19, #0x1ba
00823364:  strb     w26, [x19, #0x1b8]
00823368:  mov      w26, wzr
0082336c:  str      x8, [x19, #0x1c0]
00823370:  ldr      x8, [sp, #0x38]
00823374:  strb     w9, [x19, #0x1b9]
00823378:  ldur     x9, [x29, #-0xb0]
0082337c:  str      x8, [x19, #0x1c8]
00823380:  mov      w8, #1
00823384:  str      x9, [x10]
00823388:  stur     xzr, [x29, #-0xb0]
0082338c:  stur     xzr, [x27, #6]
00823390:  strb     w8, [x19, #0x1d0]
00823394:  str      xzr, [sp, #0x38]
00823398:  ldr      w22, [sp, #0x30]
0082339c:  ldrb     w8, [x19, #0x1f0]
008233a0:  cmp      w8, w25
008233a4:  b.ne     #0x823404
008233a8:  cbz      w8, #0x823440
008233ac:  ldrb     w8, [x19, #0x1d8]
008233b0:  tbz      w8, #0, #0x8233d8
008233b4:  ldr      x0, [x19, #0x1e8]
008233b8:  mov      w23, w26
008233bc:  mov      w25, w24
008233c0:  mov      w24, w13
008233c4:  bl       #0x8ccfd0
008233c8:  ldr      w12, [sp, #0x24]
008233cc:  ldr      x0, [sp, #0x28]
008233d0:  mov      w13, w24
008233d4:  mov      w24, w25
008233d8:  ldr      w9, [sp, #0x10]
008233dc:  add      x8, sp, #0xa8
008233e0:  add      x10, x19, #0x1da
008233e4:  ldur     x8, [x8, #0xfe]
008233e8:  strb     w12, [x19, #0x1d8]
008233ec:  strb     w9, [x19, #0x1d9]
008233f0:  ldur     x9, [x29, #-0xc0]
008233f4:  stp      x8, x0, [x19, #0x1e0]
008233f8:  str      x9, [x10]
008233fc:  cbnz     w13, #0x82346c
00823400:  b        #0x823478
00823404:  cbz      w8, #0x8246b0
00823408:  ldrb     w8, [x19, #0x1d8]
0082340c:  tbz      w8, #0, #0x82343c
00823410:  ldr      x0, [x19, #0x1e8]
00823414:  mov      w23, w26
00823418:  mov      w25, w24
0082341c:  mov      w24, w13
00823420:  mov      w28, w14
00823424:  bl       #0x8ccfd0
00823428:  ldr      w12, [sp, #0x24]
0082342c:  ldr      x0, [sp, #0x28]
00823430:  mov      w14, w28
00823434:  mov      w13, w24
00823438:  mov      w24, w25
0082343c:  strb     wzr, [x19, #0x1f0]
00823440:  cbz      w14, #0x823468
00823444:  tbz      w12, #0, #0x823468
00823448:  mov      w27, w20
0082344c:  mov      w23, w26
00823450:  mov      w25, w24
00823454:  mov      w24, w13
00823458:  bl       #0x8ccfd0
0082345c:  mov      w13, w24
00823460:  mov      w24, w25
00823464:  sub      x27, x29, #0xb0
00823468:  cbz      w13, #0x823478
0082346c:  tbz      w26, #0, #0x823478
00823470:  ldr      x0, [sp, #0x38]
00823474:  bl       #0x8ccfd0
00823478:  cbz      w22, #0x823488
0082347c:  tbz      w24, #0, #0x823488
00823480:  ldr      x0, [sp, #0x50]
00823484:  bl       #0x8ccfd0
00823488:  cbz      w20, #0x823498
0082348c:  tbz      w21, #0, #0x823498
00823490:  ldr      x0, [sp, #0x40]
00823494:  bl       #0x8ccfd0
00823498:  ldrb     w8, [sp, #0x198]
0082349c:  cbz      w8, #0x8234b0
008234a0:  ldrb     w8, [sp, #0x180]
008234a4:  tbz      w8, #0, #0x8234b0
008234a8:  ldr      x0, [sp, #0x190]
008234ac:  bl       #0x8ccfd0
008234b0:  ldrb     w8, [sp, #0x178]
008234b4:  cbz      w8, #0x8234c8
008234b8:  ldrb     w8, [sp, #0x160]
008234bc:  tbz      w8, #0, #0x8234c8
008234c0:  ldr      x0, [sp, #0x170]
008234c4:  bl       #0x8ccfd0
008234c8:  ldrb     w8, [sp, #0x148]
008234cc:  cbz      w8, #0x8234e0
008234d0:  ldrb     w8, [sp, #0x130]
008234d4:  tbz      w8, #0, #0x8234e0
008234d8:  ldr      x0, [sp, #0x140]
008234dc:  bl       #0x8ccfd0
008234e0:  ldrb     w8, [sp, #0xe8]
008234e4:  cbz      w8, #0x8234f8
008234e8:  ldrb     w8, [sp, #0xd0]
008234ec:  tbz      w8, #0, #0x8234f8
008234f0:  ldr      x0, [sp, #0xe0]
008234f4:  bl       #0x8ccfd0
008234f8:  adrp     x9, #0x36f000
008234fc:  add      x9, x9, #0x922
00823500:  mov      w8, #0x1a
00823504:  ldr      x10, [x9]
00823508:  ldur     x9, [x9, #5]
0082350c:  strb     w8, [sp, #0xa8]
00823510:  strb     wzr, [sp, #0xb6]
00823514:  stur     x10, [sp, #0xa9]
00823518:  stur     x9, [sp, #0xae]
0082351c:  add      x0, sp, #0x80
00823520:  add      x1, sp, #0xa8
00823524:  bl       #0x817c7c
00823528:  ldrb     w8, [sp, #0xa8]
0082352c:  mov      x21, x0
00823530:  tbz      w8, #0, #0x82353c
00823534:  ldr      x0, [sp, #0xb8]
00823538:  bl       #0x8ccfd0
0082353c:  cbz      x21, #0x824aac
00823540:  strb     wzr, [sp, #0x10c]
00823544:  strb     wzr, [sp, #0x110]
00823548:  strb     wzr, [sp, #0x114]
0082354c:  strb     wzr, [sp, #0x130]
00823550:  strb     wzr, [sp, #0x148]
00823554:  strb     wzr, [sp, #0x178]
00823558:  strb     wzr, [sp, #0x180]
0082355c:  strb     wzr, [sp, #0x198]
00823560:  strb     wzr, [sp, #0x108]
00823564:  stp      xzr, xzr, [sp, #0x118]
00823568:  str      wzr, [sp, #0x128]
0082356c:  stp      xzr, xzr, [sp, #0x150]
00823570:  strb     wzr, [sp, #0x160]
00823574:  stp      xzr, xzr, [sp, #0xf8]
00823578:  ldr      w8, [x21, #0x58]
0082357c:  strb     wzr, [sp, #0xc0]
00823580:  strb     wzr, [sp, #0xc4]
00823584:  cmp      w8, #1
00823588:  strb     wzr, [sp, #0xe8]
0082358c:  strb     wzr, [sp, #0xf0]
00823590:  strb     wzr, [sp, #0xf4]
00823594:  stp      xzr, xzr, [sp, #0xa8]
00823598:  stur     xzr, [sp, #0xb5]
0082359c:  str      xzr, [sp, #0xc8]
008235a0:  strb     wzr, [sp, #0xd0]
008235a4:  b.eq     #0x8235c0
008235a8:  cbnz     w8, #0x82b038
008235ac:  sub      x8, x29, #0x90
008235b0:  add      x0, x21, #0x28
008235b4:  mov      x1, xzr
008235b8:  bl       #0x8118bc
008235bc:  b        #0x8235d4
008235c0:  ldr      x0, [x21, #0x28]
008235c4:  sub      x8, x29, #0x90
008235c8:  add      x1, x21, #0x30
008235cc:  mov      x2, xzr
008235d0:  bl       #0x811aa8
008235d4:  adrp     x10, #0x370000
008235d8:  add      x10, x10, #0xad5
008235dc:  mov      w9, #0x6964
008235e0:  ldr      x10, [x10]
008235e4:  mov      w8, #0x18
008235e8:  movk     w9, #0x7375, lsl #16
008235ec:  sturb    w8, [x29, #-0x30]
008235f0:  stur     w9, [x27, #0x89]
008235f4:  stur     x10, [x27, #0x81]
008235f8:  sturb    wzr, [x29, #-0x23]
008235fc:  sub      x0, x29, #0x90
00823600:  sub      x1, x29, #0x30
00823604:  bl       #0x817c7c
00823608:  ldurb    w8, [x29, #-0x30]
0082360c:  mov      x21, x0
00823610:  tbz      w8, #0, #0x82361c
00823614:  ldur     x0, [x29, #-0x20]
00823618:  bl       #0x8ccfd0
0082361c:  cbz      x21, #0x82362c
00823620:  add      x0, x21, #0x28
00823624:  bl       #0x809024
00823628:  str      s0, [sp, #0xa8]
0082362c:  adrp     x10, #0x36e000
00823630:  add      x10, x10, #0x6cb
00823634:  mov      w9, #0x6964
00823638:  ldr      q0, [x10]
0082363c:  mov      w8, #0x26
00823640:  movk     w9, #0x7375, lsl #16
00823644:  sturb    w8, [x29, #-0x30]
00823648:  stur     w9, [x29, #-0x20]
0082364c:  stur     q0, [x27, #0x81]
00823650:  sturb    wzr, [x29, #-0x1c]
00823654:  sub      x0, x29, #0x90
00823658:  sub      x1, x29, #0x30
0082365c:  bl       #0x817c7c
00823660:  ldurb    w8, [x29, #-0x30]
00823664:  mov      x21, x0
00823668:  tbz      w8, #0, #0x823674
0082366c:  ldur     x0, [x29, #-0x20]
00823670:  bl       #0x8ccfd0
00823674:  cbz      x21, #0x823684
00823678:  add      x0, x21, #0x28
0082367c:  bl       #0x809024
00823680:  str      s0, [sp, #0xac]
00823684:  adrp     x10, #0x36a000
00823688:  add      x10, x10, #0xe62
0082368c:  mov      w9, #0x6964
00823690:  ldr      q0, [x10]
00823694:  mov      w8, #0x28
00823698:  movk     w9, #0x7375, lsl #16
0082369c:  sturb    w8, [x29, #-0x30]
008236a0:  stur     w9, [x27, #0x91]
008236a4:  stur     q0, [x27, #0x81]
008236a8:  sturb    wzr, [x29, #-0x1b]
008236ac:  sub      x0, x29, #0x90
008236b0:  sub      x1, x29, #0x30
008236b4:  bl       #0x817c7c
008236b8:  ldurb    w8, [x29, #-0x30]
008236bc:  mov      x21, x0
008236c0:  tbz      w8, #0, #0x8236cc
008236c4:  ldur     x0, [x29, #-0x20]
008236c8:  bl       #0x8ccfd0
008236cc:  cbz      x21, #0x8236dc
008236d0:  add      x0, x21, #0x28
008236d4:  bl       #0x809024
008236d8:  str      s0, [sp, #0xb0]
008236dc:  adrp     x9, #0x36e000
008236e0:  add      x9, x9, #0x42
008236e4:  mov      w8, #0x2c
008236e8:  ldr      q0, [x9]
008236ec:  ldur     x9, [x9, #0xe]
008236f0:  sturb    w8, [x29, #-0x30]
008236f4:  sturb    wzr, [x29, #-0x19]
008236f8:  stur     q0, [x27, #0x81]
008236fc:  stur     x9, [x27, #0x8f]
00823700:  sub      x0, x29, #0x90
00823704:  sub      x1, x29, #0x30
00823708:  bl       #0x817c7c
0082370c:  ldurb    w8, [x29, #-0x30]
00823710:  mov      x21, x0
00823714:  tbz      w8, #0, #0x823720
00823718:  ldur     x0, [x29, #-0x20]
0082371c:  bl       #0x8ccfd0
00823720:  cbz      x21, #0x823730
00823724:  add      x0, x21, #0x28
00823728:  bl       #0x809024
0082372c:  str      s0, [sp, #0xb4]
00823730:  mov      w0, #0x20
00823734:  bl       #0x8ccfa0
00823738:  adrp     x8, #0x372000
0082373c:  stur     x0, [x29, #-0x20]
00823740:  ldr      q0, [x8, #0xd20]
00823744:  adrp     x8, #0x36c000
00823748:  add      x8, x8, #0x45
0082374c:  ldr      q1, [x8]
00823750:  ldur     x8, [x8, #0xf]
00823754:  strb     wzr, [x0, #0x17]
00823758:  stur     q0, [x29, #-0x30]
0082375c:  str      q1, [x0]
00823760:  stur     x8, [x0, #0xf]
00823764:  sub      x0, x29, #0x90
00823768:  sub      x1, x29, #0x30
0082376c:  bl       #0x817c7c
00823770:  ldurb    w8, [x29, #-0x30]
00823774:  mov      x21, x0
00823778:  tbz      w8, #0, #0x823784
0082377c:  ldur     x0, [x29, #-0x20]
00823780:  bl       #0x8ccfd0
00823784:  cbz      x21, #0x823794
00823788:  add      x0, x21, #0x28
0082378c:  bl       #0x809024
00823790:  str      s0, [sp, #0xb8]
00823794:  mov      w8, #0xe
00823798:  mov      w9, #0x6964
0082379c:  sturb    wzr, [x29, #-0x28]
008237a0:  sturb    w8, [x29, #-0x30]
008237a4:  mov      w8, #0x6469
008237a8:  movk     w9, #0x6976, lsl #16
008237ac:  movk     w8, #0x7265, lsl #16
008237b0:  stur     w9, [x27, #0x81]
008237b4:  stur     w8, [x29, #-0x2c]
008237b8:  sub      x0, x29, #0x90
008237bc:  sub      x1, x29, #0x30
008237c0:  bl       #0x817c7c
008237c4:  ldurb    w8, [x29, #-0x30]
008237c8:  mov      x21, x0
008237cc:  tbz      w8, #0, #0x8237d8
008237d0:  ldur     x0, [x29, #-0x20]
008237d4:  bl       #0x8ccfd0
008237d8:  cbz      x21, #0x823818
008237dc:  ldr      w8, [x21, #0x58]
008237e0:  cmp      w8, #1
008237e4:  b.eq     #0x823808
008237e8:  cbnz     w8, #0x82b140
008237ec:  ldr      w1, [x21, #0x28]
008237f0:  cmp      w1, #2
008237f4:  b.ne     #0x82b158
008237f8:  ldrb     w8, [x21, #0x30]
008237fc:  cmp      w8, #0
00823800:  cset     w0, ne
00823804:  b        #0x823810
00823808:  add      x0, x21, #0x30
0082380c:  bl       #0x8cdb20
00823810:  and      w8, w0, #1
00823814:  strb     w8, [sp, #0xbc]
00823818:  adrp     x10, #0x36f000
0082381c:  add      x10, x10, #0x93e
00823820:  mov      w9, #0x6c6f
00823824:  ldr      x10, [x10]
00823828:  mov      w8, #0x18
0082382c:  movk     w9, #0x726f, lsl #16
00823830:  sturb    w8, [x29, #-0x30]
00823834:  stur     w9, [x27, #0x89]
00823838:  stur     x10, [x27, #0x81]
0082383c:  sturb    wzr, [x29, #-0x23]
00823840:  sub      x0, x29, #0x90
00823844:  sub      x1, x29, #0x30
00823848:  bl       #0x817c7c
0082384c:  ldurb    w8, [x29, #-0x30]
00823850:  mov      x21, x0
00823854:  tbz      w8, #0, #0x823860
00823858:  ldur     x0, [x29, #-0x20]
0082385c:  bl       #0x8ccfd0
00823860:  cbz      x21, #0x823898
00823864:  ldr      x8, [sp, #0x70]
00823868:  stur     wzr, [x29, #-0x30]
0082386c:  ldr      x0, [x8, #8]
00823870:  ldr      w1, [x8]
00823874:  adrp     x4, #0x99e000
00823878:  add      x2, x21, #0x28
0082387c:  sub      x3, x29, #0x30
00823880:  ldr      x4, [x4, #0x140]
00823884:  bl       #0x807f90
00823888:  ldur     w8, [x29, #-0x30]
0082388c:  mov      w9, #1
00823890:  strb     w9, [sp, #0xc4]
00823894:  str      w8, [sp, #0xc0]
00823898:  adrp     x10, #0x367000
0082389c:  add      x10, x10, #0xa0f
008238a0:  mov      w8, #0x24
008238a4:  ldr      q0, [x10]
008238a8:  mov      w9, #0x7466
008238ac:  sturb    w8, [x29, #-0x30]
008238b0:  sturh    w9, [x27, #0x91]
008238b4:  stur     q0, [x27, #0x81]
008238b8:  sturb    wzr, [x29, #-0x1d]
008238bc:  sub      x0, x29, #0x90
008238c0:  sub      x1, x29, #0x30
008238c4:  bl       #0x817c7c
008238c8:  ldurb    w8, [x29, #-0x30]
008238cc:  mov      x21, x0
008238d0:  tbz      w8, #0, #0x8238dc
008238d4:  ldur     x0, [x29, #-0x20]
008238d8:  bl       #0x8ccfd0
008238dc:  cbz      x21, #0x8238ec
008238e0:  add      x0, x21, #0x28
008238e4:  bl       #0x809024
008238e8:  str      s0, [sp, #0xc8]
008238ec:  adrp     x10, #0x36a000
008238f0:  add      x10, x10, #0x836
008238f4:  mov      w9, #0x6769
008238f8:  ldr      q0, [x10]
008238fc:  mov      w8, #0x26
00823900:  movk     w9, #0x7468, lsl #16
00823904:  sturb    w8, [x29, #-0x30]
00823908:  stur     w9, [x29, #-0x20]
0082390c:  stur     q0, [x27, #0x81]
00823910:  sturb    wzr, [x29, #-0x1c]
00823914:  sub      x0, x29, #0x90
00823918:  sub      x1, x29, #0x30
0082391c:  bl       #0x817c7c
00823920:  ldurb    w8, [x29, #-0x30]
00823924:  mov      x21, x0
00823928:  tbz      w8, #0, #0x823934
0082392c:  ldur     x0, [x29, #-0x20]
00823930:  bl       #0x8ccfd0
00823934:  cbz      x21, #0x823944
00823938:  add      x0, x21, #0x28
0082393c:  bl       #0x809024
00823940:  str      s0, [sp, #0xcc]
00823944:  adrp     x9, #0x36c000
00823948:  add      x9, x9, #0x4b4
0082394c:  mov      w8, #0x20
00823950:  ldr      q0, [x9]
00823954:  sturb    w8, [x29, #-0x30]
00823958:  sturb    wzr, [x29, #-0x1f]
0082395c:  stur     q0, [x27, #0x81]
00823960:  sub      x0, x29, #0x90
00823964:  sub      x1, x29, #0x30
00823968:  bl       #0x817c7c
0082396c:  ldurb    w8, [x29, #-0x30]
00823970:  mov      x21, x0
00823974:  tbz      w8, #0, #0x823980
00823978:  ldur     x0, [x29, #-0x20]
0082397c:  bl       #0x8ccfd0
00823980:  cbz      x21, #0x8239fc
00823984:  sub      x8, x29, #0x30
00823988:  add      x0, x21, #0x28
0082398c:  bl       #0x807a6c
00823990:  ldp      x10, x20, [x29, #-0x28]
00823994:  ldur     x8, [x27, #0x82]
00823998:  ldurb    w21, [x29, #-0x30]
0082399c:  ldrb     w9, [sp, #0xe8]
008239a0:  ldurb    w22, [x29, #-0x2f]
008239a4:  stur     x8, [x29, #-0x40]
008239a8:  stur     x10, [x27, #0x76]
008239ac:  cbz      w9, #0x8239dc
008239b0:  ldrb     w8, [sp, #0xd0]
008239b4:  tbz      w8, #0, #0x8239c0
008239b8:  ldr      x0, [sp, #0xe0]
008239bc:  bl       #0x8ccfd0
008239c0:  ldur     x8, [x29, #-0x40]
008239c4:  ldur     x9, [x27, #0x76]
008239c8:  strb     w21, [sp, #0xd0]
008239cc:  strb     w22, [sp, #0xd1]
008239d0:  stur     x8, [sp, #0xd2]
008239d4:  stp      x9, x20, [sp, #0xd8]
008239d8:  b        #0x8239fc
008239dc:  ldur     x8, [x29, #-0x40]
008239e0:  ldur     x9, [x27, #0x76]
008239e4:  strb     w21, [sp, #0xd0]
008239e8:  strb     w22, [sp, #0xd1]
008239ec:  stur     x8, [sp, #0xd2]
008239f0:  mov      w8, #1
008239f4:  stp      x9, x20, [sp, #0xd8]
008239f8:  strb     w8, [sp, #0xe8]
008239fc:  adrp     x9, #0x36a000
00823a00:  add      x9, x9, #0x84a
00823a04:  mov      w8, #0x2a
00823a08:  ldr      q0, [x9]
00823a0c:  ldur     x9, [x9, #0xd]
00823a10:  sturb    w8, [x29, #-0x30]
00823a14:  sturb    wzr, [x29, #-0x1a]
00823a18:  stur     q0, [x27, #0x81]
00823a1c:  stur     x9, [x27, #0x8e]
00823a20:  sub      x0, x29, #0x90
00823a24:  sub      x1, x29, #0x30
00823a28:  bl       #0x817c7c
00823a2c:  ldurb    w8, [x29, #-0x30]
00823a30:  mov      x21, x0
00823a34:  tbz      w8, #0, #0x823a40
00823a38:  ldur     x0, [x29, #-0x20]
00823a3c:  bl       #0x8ccfd0
00823a40:  cbz      x21, #0x823a78
00823a44:  ldr      x8, [sp, #0x70]
00823a48:  stur     wzr, [x29, #-0x30]
00823a4c:  ldr      x0, [x8, #8]
00823a50:  ldr      w1, [x8]
00823a54:  adrp     x4, #0x99e000
00823a58:  add      x2, x21, #0x28
00823a5c:  sub      x3, x29, #0x30
00823a60:  ldr      x4, [x4, #0x140]
00823a64:  bl       #0x807f90
00823a68:  ldur     w8, [x29, #-0x30]
00823a6c:  mov      w9, #1
00823a70:  strb     w9, [sp, #0xf4]
00823a74:  str      w8, [sp, #0xf0]
00823a78:  adrp     x9, #0x36d000
00823a7c:  add      x9, x9, #0x9e1
00823a80:  mov      w8, #0x2a
00823a84:  ldr      q0, [x9]
00823a88:  ldur     x9, [x9, #0xd]
00823a8c:  sturb    w8, [x29, #-0x30]
00823a90:  sturb    wzr, [x29, #-0x1a]
00823a94:  stur     q0, [x27, #0x81]
00823a98:  stur     x9, [x27, #0x8e]
00823a9c:  sub      x0, x29, #0x90
00823aa0:  sub      x1, x29, #0x30
00823aa4:  bl       #0x817c7c
00823aa8:  ldurb    w8, [x29, #-0x30]
00823aac:  mov      x21, x0
00823ab0:  tbz      w8, #0, #0x823abc
00823ab4:  ldur     x0, [x29, #-0x20]
00823ab8:  bl       #0x8ccfd0
00823abc:  cbz      x21, #0x823acc
00823ac0:  add      x0, x21, #0x28
00823ac4:  bl       #0x8161a0
00823ac8:  str      w0, [sp, #0xf8]
00823acc:  adrp     x10, #0x36a000
00823ad0:  add      x10, x10, #0xe77
00823ad4:  mov      w9, #0x4765
00823ad8:  ldr      q0, [x10]
00823adc:  mov      w8, #0x26
00823ae0:  movk     w9, #0x7061, lsl #16
00823ae4:  sturb    w8, [x29, #-0x30]
00823ae8:  stur     w9, [x29, #-0x20]
00823aec:  stur     q0, [x27, #0x81]
00823af0:  sturb    wzr, [x29, #-0x1c]
00823af4:  sub      x0, x29, #0x90
00823af8:  sub      x1, x29, #0x30
00823afc:  bl       #0x817c7c
00823b00:  ldurb    w8, [x29, #-0x30]
00823b04:  mov      x21, x0
00823b08:  tbz      w8, #0, #0x823b14
00823b0c:  ldur     x0, [x29, #-0x20]
00823b10:  bl       #0x8ccfd0
00823b14:  cbz      x21, #0x823b24
00823b18:  add      x0, x21, #0x28
00823b1c:  bl       #0x809024
00823b20:  str      s0, [sp, #0xfc]
00823b24:  mov      w0, #0x30
00823b28:  bl       #0x8ccfa0
00823b2c:  adrp     x8, #0x373000
00823b30:  stur     x0, [x29, #-0x20]
00823b34:  ldr      q2, [x8, #0x40]
00823b38:  mov      w8, #0x6c
00823b3c:  strh     w8, [x0, #0x20]
00823b40:  adrp     x8, #0x369000
00823b44:  add      x8, x8, #0x87b
00823b48:  ldp      q0, q1, [x8]
00823b4c:  str      q2, [sp, #0x50]
00823b50:  stur     q2, [x29, #-0x30]
00823b54:  stp      q0, q1, [x0]
00823b58:  sub      x0, x29, #0x90
00823b5c:  sub      x1, x29, #0x30
00823b60:  bl       #0x817c7c
00823b64:  ldurb    w8, [x29, #-0x30]
00823b68:  mov      x21, x0
00823b6c:  tbz      w8, #0, #0x823b78
00823b70:  ldur     x0, [x29, #-0x20]
00823b74:  bl       #0x8ccfd0
00823b78:  cbz      x21, #0x823b88
00823b7c:  add      x0, x21, #0x28
00823b80:  bl       #0x809024
00823b84:  str      s0, [sp, #0x100]
00823b88:  mov      w0, #0x20
00823b8c:  bl       #0x8ccfa0
00823b90:  adrp     x8, #0x372000
00823b94:  stur     x0, [x29, #-0x20]
00823b98:  ldr      q0, [x8, #0x250]
00823b9c:  adrp     x8, #0x36a000
00823ba0:  add      x8, x8, #0x258
00823ba4:  ldr      q1, [x8]
00823ba8:  ldur     q2, [x8, #0xf]
00823bac:  strb     wzr, [x0, #0x1f]
00823bb0:  stur     q0, [x29, #-0x30]
00823bb4:  str      q1, [x0]
00823bb8:  stur     q2, [x0, #0xf]
00823bbc:  sub      x0, x29, #0x90
00823bc0:  sub      x1, x29, #0x30
00823bc4:  bl       #0x817c7c
00823bc8:  ldurb    w8, [x29, #-0x30]
00823bcc:  mov      x21, x0
00823bd0:  tbz      w8, #0, #0x823bdc
00823bd4:  ldur     x0, [x29, #-0x20]
00823bd8:  bl       #0x8ccfd0
00823bdc:  cbz      x21, #0x823bec
00823be0:  add      x0, x21, #0x28
00823be4:  bl       #0x809024
00823be8:  str      s0, [sp, #0x104]
00823bec:  mov      w0, #0x20
00823bf0:  bl       #0x8ccfa0
00823bf4:  adrp     x8, #0x371000
00823bf8:  stur     x0, [x29, #-0x20]
00823bfc:  ldr      q0, [x8, #0x7a0]
00823c00:  adrp     x8, #0x370000
00823c04:  add      x8, x8, #0x665
00823c08:  ldr      q1, [x8]
00823c0c:  ldur     q2, [x8, #0xe]
00823c10:  strb     wzr, [x0, #0x1e]
00823c14:  stur     q0, [x29, #-0x30]
00823c18:  str      q1, [x0]
00823c1c:  stur     q2, [x0, #0xe]
00823c20:  sub      x0, x29, #0x90
00823c24:  sub      x1, x29, #0x30
00823c28:  bl       #0x817c7c
00823c2c:  ldurb    w8, [x29, #-0x30]
00823c30:  mov      x21, x0
00823c34:  tbz      w8, #0, #0x823c40
00823c38:  ldur     x0, [x29, #-0x20]
00823c3c:  bl       #0x8ccfd0
00823c40:  cbz      x21, #0x823c78
00823c44:  ldr      x8, [sp, #0x70]
00823c48:  stur     wzr, [x29, #-0x30]
00823c4c:  ldr      x0, [x8, #8]
00823c50:  ldr      w1, [x8]
00823c54:  adrp     x4, #0x99e000
00823c58:  add      x2, x21, #0x28
00823c5c:  sub      x3, x29, #0x30
00823c60:  ldr      x4, [x4, #0x140]
00823c64:  bl       #0x807f90
00823c68:  ldur     w8, [x29, #-0x30]
00823c6c:  mov      w9, #1
00823c70:  strb     w9, [sp, #0x10c]
00823c74:  str      w8, [sp, #0x108]
00823c78:  adrp     x10, #0x368000
00823c7c:  add      x10, x10, #0xd84
00823c80:  mov      w9, #0x6c6f
00823c84:  ldr      q0, [x10]
00823c88:  mov      w8, #0x28
00823c8c:  movk     w9, #0x726f, lsl #16
00823c90:  sturb    w8, [x29, #-0x30]
00823c94:  stur     w9, [x27, #0x91]
00823c98:  stur     q0, [x27, #0x81]
00823c9c:  sturb    wzr, [x29, #-0x1b]
00823ca0:  sub      x0, x29, #0x90
00823ca4:  sub      x1, x29, #0x30
00823ca8:  bl       #0x817c7c
00823cac:  ldurb    w8, [x29, #-0x30]
00823cb0:  mov      x21, x0
00823cb4:  tbz      w8, #0, #0x823cc0
00823cb8:  ldur     x0, [x29, #-0x20]
00823cbc:  bl       #0x8ccfd0
00823cc0:  cbz      x21, #0x823cf8
00823cc4:  ldr      x8, [sp, #0x70]
00823cc8:  stur     wzr, [x29, #-0x30]
00823ccc:  ldr      x0, [x8, #8]
00823cd0:  ldr      w1, [x8]
00823cd4:  adrp     x4, #0x99e000
00823cd8:  add      x2, x21, #0x28
00823cdc:  sub      x3, x29, #0x30
00823ce0:  ldr      x4, [x4, #0x140]
00823ce4:  bl       #0x807f90
00823ce8:  ldur     w8, [x29, #-0x30]
00823cec:  mov      w9, #1
00823cf0:  strb     w9, [sp, #0x114]
00823cf4:  str      w8, [sp, #0x110]
00823cf8:  mov      w0, #0x20
00823cfc:  bl       #0x8ccfa0
00823d00:  adrp     x8, #0x371000
00823d04:  stur     x0, [x29, #-0x20]
00823d08:  ldr      q0, [x8, #0xb20]
00823d0c:  adrp     x8, #0x369000
00823d10:  add      x8, x8, #0x3df
00823d14:  ldr      q1, [x8]
00823d18:  ldur     q2, [x8, #0xb]
00823d1c:  strb     wzr, [x0, #0x1b]
00823d20:  stur     q0, [x29, #-0x30]
00823d24:  str      q1, [x0]
00823d28:  stur     q2, [x0, #0xb]
00823d2c:  sub      x0, x29, #0x90
00823d30:  sub      x1, x29, #0x30
00823d34:  bl       #0x817c7c
00823d38:  ldurb    w8, [x29, #-0x30]
00823d3c:  mov      x21, x0
00823d40:  tbz      w8, #0, #0x823d4c
00823d44:  ldur     x0, [x29, #-0x20]
00823d48:  bl       #0x8ccfd0
00823d4c:  cbz      x21, #0x823d5c
00823d50:  add      x0, x21, #0x28
00823d54:  bl       #0x809024
00823d58:  str      s0, [sp, #0x118]
00823d5c:  mov      w0, #0x30
00823d60:  bl       #0x8ccfa0
00823d64:  adrp     x8, #0x371000
00823d68:  stur     x0, [x29, #-0x20]
00823d6c:  ldr      q0, [x8, #0x9d0]
00823d70:  adrp     x8, #0x370000
00823d74:  add      x8, x8, #0xae2
00823d78:  ldp      q1, q2, [x8]
00823d7c:  ldur     x8, [x8, #0x1d]
00823d80:  stur     q0, [x29, #-0x30]
00823d84:  strb     wzr, [x0, #0x25]
00823d88:  stp      q1, q2, [x0]
00823d8c:  stur     x8, [x0, #0x1d]
00823d90:  sub      x0, x29, #0x90
00823d94:  sub      x1, x29, #0x30
00823d98:  bl       #0x817c7c
00823d9c:  ldurb    w8, [x29, #-0x30]
00823da0:  mov      x21, x0
00823da4:  tbz      w8, #0, #0x823db0
00823da8:  ldur     x0, [x29, #-0x20]
00823dac:  bl       #0x8ccfd0
00823db0:  cbz      x21, #0x823dc0
00823db4:  add      x0, x21, #0x28
00823db8:  bl       #0x809024
00823dbc:  str      s0, [sp, #0x11c]
00823dc0:  mov      w0, #0x20
00823dc4:  bl       #0x8ccfa0
00823dc8:  adrp     x8, #0x371000
00823dcc:  stur     x0, [x29, #-0x20]
00823dd0:  ldr      q1, [x8, #0x460]
00823dd4:  adrp     x8, #0x36f000
00823dd8:  add      x8, x8, #0x94b
00823ddc:  ldr      q0, [x8]
00823de0:  ldr      x8, [x8, #0x10]
00823de4:  strb     wzr, [x0, #0x18]
00823de8:  str      q1, [sp, #0x40]
00823dec:  stur     q1, [x29, #-0x30]
00823df0:  str      q0, [x0]
00823df4:  str      x8, [x0, #0x10]
00823df8:  sub      x0, x29, #0x90
00823dfc:  sub      x1, x29, #0x30
00823e00:  bl       #0x817c7c
00823e04:  ldurb    w8, [x29, #-0x30]
00823e08:  mov      x21, x0
00823e0c:  tbz      w8, #0, #0x823e18
00823e10:  ldur     x0, [x29, #-0x20]
00823e14:  bl       #0x8ccfd0
00823e18:  cbz      x21, #0x823e28
00823e1c:  add      x0, x21, #0x28
00823e20:  bl       #0x809024
00823e24:  str      s0, [sp, #0x120]
00823e28:  mov      w0, #0x30
00823e2c:  bl       #0x8ccfa0
00823e30:  ldr      q0, [sp, #0x50]
00823e34:  adrp     x9, #0x36c000
00823e38:  add      x9, x9, #0x4c5
00823e3c:  mov      w8, #0x65
00823e40:  stur     x0, [x29, #-0x20]
00823e44:  stur     q0, [x29, #-0x30]
00823e48:  ldp      q0, q1, [x9]
00823e4c:  strh     w8, [x0, #0x20]
00823e50:  stp      q0, q1, [x0]
00823e54:  sub      x0, x29, #0x90
00823e58:  sub      x1, x29, #0x30
00823e5c:  bl       #0x817c7c
00823e60:  ldurb    w8, [x29, #-0x30]
00823e64:  mov      x21, x0
00823e68:  tbz      w8, #0, #0x823e74
00823e6c:  ldur     x0, [x29, #-0x20]
00823e70:  bl       #0x8ccfd0
00823e74:  cbz      x21, #0x823e84
00823e78:  add      x0, x21, #0x28
00823e7c:  bl       #0x809024
00823e80:  str      s0, [sp, #0x124]
00823e84:  adrp     x9, #0x365000
00823e88:  add      x9, x9, #0xd68
00823e8c:  mov      w8, #0x2c
00823e90:  ldr      q0, [x9]
00823e94:  ldur     x9, [x9, #0xe]
00823e98:  sturb    w8, [x29, #-0x30]
00823e9c:  sturb    wzr, [x29, #-0x19]
00823ea0:  stur     q0, [x27, #0x81]
00823ea4:  stur     x9, [x27, #0x8f]
00823ea8:  sub      x0, x29, #0x90
00823eac:  sub      x1, x29, #0x30
00823eb0:  bl       #0x817c7c
00823eb4:  ldurb    w8, [x29, #-0x30]
00823eb8:  mov      x21, x0
00823ebc:  tbz      w8, #0, #0x823ec8
00823ec0:  ldur     x0, [x29, #-0x20]
00823ec4:  bl       #0x8ccfd0
00823ec8:  cbz      x21, #0x823ed8
00823ecc:  add      x0, x21, #0x28
00823ed0:  bl       #0x809024
00823ed4:  str      s0, [sp, #0x128]
00823ed8:  adrp     x10, #0x36c000
00823edc:  add      x10, x10, #0x4e7
00823ee0:  mov      w9, #0x6168
00823ee4:  ldr      q0, [x10]
00823ee8:  mov      w8, #0x28
00823eec:  movk     w9, #0x6570, lsl #16
00823ef0:  sturb    w8, [x29, #-0x30]
00823ef4:  stur     w9, [x27, #0x91]
00823ef8:  stur     q0, [x27, #0x81]
00823efc:  sturb    wzr, [x29, #-0x1b]
00823f00:  sub      x0, x29, #0x90
00823f04:  sub      x1, x29, #0x30
00823f08:  bl       #0x817c7c
00823f0c:  ldurb    w8, [x29, #-0x30]
00823f10:  mov      x21, x0
00823f14:  tbz      w8, #0, #0x823f20
00823f18:  ldur     x0, [x29, #-0x20]
00823f1c:  bl       #0x8ccfd0
00823f20:  cbz      x21, #0x823fa4
00823f24:  sub      x8, x29, #0x30
00823f28:  add      x0, x21, #0x28
00823f2c:  bl       #0x807a6c
00823f30:  ldp      x10, x20, [x29, #-0x28]
00823f34:  ldur     x8, [x27, #0x82]
00823f38:  ldurb    w21, [x29, #-0x30]
00823f3c:  ldrb     w9, [sp, #0x148]
00823f40:  ldurb    w22, [x29, #-0x2f]
00823f44:  stur     x8, [x29, #-0x40]
00823f48:  stur     x10, [x27, #0x76]
00823f4c:  cbz      w9, #0x823f80
00823f50:  ldrb     w8, [sp, #0x130]
00823f54:  tbz      w8, #0, #0x823f60
00823f58:  ldr      x0, [sp, #0x140]
00823f5c:  bl       #0x8ccfd0
00823f60:  ldur     x8, [x29, #-0x40]
00823f64:  ldur     x9, [x27, #0x76]
00823f68:  add      x10, sp, #0xa8
00823f6c:  strb     w21, [sp, #0x130]
00823f70:  strb     w22, [sp, #0x131]
00823f74:  stur     x8, [x10, #0x8a]
00823f78:  stp      x9, x20, [sp, #0x138]
00823f7c:  b        #0x823fa4
00823f80:  ldur     x8, [x29, #-0x40]
00823f84:  ldur     x9, [x27, #0x76]
00823f88:  add      x10, sp, #0xa8
00823f8c:  strb     w21, [sp, #0x130]
00823f90:  stur     x8, [x10, #0x8a]
00823f94:  mov      w8, #1
00823f98:  strb     w22, [sp, #0x131]
00823f9c:  stp      x9, x20, [sp, #0x138]
00823fa0:  strb     w8, [sp, #0x148]
00823fa4:  mov      w0, #0x20
00823fa8:  bl       #0x8ccfa0
00823fac:  adrp     x8, #0x36b000
00823fb0:  add      x8, x8, #0x944
00823fb4:  ldr      q1, [sp, #0x40]
00823fb8:  ldr      q0, [x8]
00823fbc:  ldr      x8, [x8, #0x10]
00823fc0:  stur     x0, [x29, #-0x20]
00823fc4:  stur     q1, [x29, #-0x30]
00823fc8:  str      q0, [x0]
00823fcc:  str      x8, [x0, #0x10]
00823fd0:  strb     wzr, [x0, #0x18]
00823fd4:  sub      x0, x29, #0x90
00823fd8:  sub      x1, x29, #0x30
00823fdc:  bl       #0x817c7c
00823fe0:  ldurb    w8, [x29, #-0x30]
00823fe4:  mov      x21, x0
00823fe8:  tbz      w8, #0, #0x823ff4
00823fec:  ldur     x0, [x29, #-0x20]
00823ff0:  bl       #0x8ccfd0
00823ff4:  cbz      x21, #0x824004
00823ff8:  add      x0, x21, #0x28
00823ffc:  bl       #0x809024
00824000:  str      s0, [sp, #0x150]
00824004:  adrp     x10, #0x369000
00824008:  add      x10, x10, #0x89d
0082400c:  mov      w8, #0x1e
00824010:  ldr      x9, [x10]
00824014:  ldur     x10, [x10, #7]
00824018:  sturb    w8, [x29, #-0x30]
0082401c:  sturb    wzr, [x29, #-0x20]
00824020:  stur     x9, [x27, #0x81]
00824024:  stur     x10, [x29, #-0x28]
00824028:  sub      x0, x29, #0x90
0082402c:  sub      x1, x29, #0x30
00824030:  bl       #0x817c7c
00824034:  ldurb    w8, [x29, #-0x30]
00824038:  mov      x21, x0
0082403c:  tbz      w8, #0, #0x824048
00824040:  ldur     x0, [x29, #-0x20]
00824044:  bl       #0x8ccfd0
00824048:  cbz      x21, #0x824058
0082404c:  add      x0, x21, #0x28
00824050:  bl       #0x8161a0
00824054:  str      w0, [sp, #0x154]
00824058:  mov      w8, #0xa
0082405c:  mov      w9, #0x6977
00824060:  movk     w9, #0x7464, lsl #16
00824064:  sturb    w8, [x29, #-0x30]
00824068:  mov      w8, #0x68
0082406c:  stur     w9, [x27, #0x81]
00824070:  sturh    w8, [x27, #0x85]
00824074:  sub      x0, x29, #0x90
00824078:  sub      x1, x29, #0x30
0082407c:  bl       #0x817c7c
00824080:  ldurb    w8, [x29, #-0x30]
00824084:  mov      x21, x0
00824088:  tbz      w8, #0, #0x824094
0082408c:  ldur     x0, [x29, #-0x20]
00824090:  bl       #0x8ccfd0
00824094:  cbz      x21, #0x8240a4
00824098:  add      x0, x21, #0x28
0082409c:  bl       #0x809024
008240a0:  str      s0, [sp, #0x158]
008240a4:  mov      w8, #0xc
008240a8:  mov      w9, #0x6568
008240ac:  sturb    wzr, [x29, #-0x29]
008240b0:  movk     w9, #0x6769, lsl #16
008240b4:  sturb    w8, [x29, #-0x30]
008240b8:  mov      w8, #0x7468
008240bc:  stur     w9, [x27, #0x81]
008240c0:  sturh    w8, [x27, #0x85]
008240c4:  sub      x0, x29, #0x90
008240c8:  sub      x1, x29, #0x30
008240cc:  bl       #0x817c7c
008240d0:  ldurb    w8, [x29, #-0x30]
008240d4:  mov      x21, x0
008240d8:  tbz      w8, #0, #0x8240e4
008240dc:  ldur     x0, [x29, #-0x20]
008240e0:  bl       #0x8ccfd0
008240e4:  cbz      x21, #0x8240f4
008240e8:  add      x0, x21, #0x28
008240ec:  bl       #0x809024
008240f0:  str      s0, [sp, #0x15c]
008240f4:  adrp     x10, #0x36e000
008240f8:  add      x10, x10, #0x59
008240fc:  mov      w8, #0x22
00824100:  ldr      q0, [x10]
00824104:  mov      w9, #0x74
00824108:  sturb    w8, [x29, #-0x30]
0082410c:  sturh    w9, [x27, #0x91]
00824110:  stur     q0, [x27, #0x81]
00824114:  sub      x0, x29, #0x90
00824118:  sub      x1, x29, #0x30
0082411c:  bl       #0x817c7c
00824120:  ldurb    w8, [x29, #-0x30]
00824124:  mov      x21, x0
00824128:  tbz      w8, #0, #0x824134
0082412c:  ldur     x0, [x29, #-0x20]
00824130:  bl       #0x8ccfd0
00824134:  cbz      x21, #0x8241b8
00824138:  sub      x8, x29, #0x30
0082413c:  add      x0, x21, #0x28
00824140:  bl       #0x807a6c
00824144:  ldp      x10, x20, [x29, #-0x28]
00824148:  ldur     x8, [x27, #0x82]
0082414c:  ldurb    w21, [x29, #-0x30]
00824150:  ldrb     w9, [sp, #0x178]
00824154:  ldurb    w22, [x29, #-0x2f]
00824158:  stur     x8, [x29, #-0x40]
0082415c:  stur     x10, [x27, #0x76]
00824160:  cbz      w9, #0x824194
00824164:  ldrb     w8, [sp, #0x160]
00824168:  tbz      w8, #0, #0x824174
0082416c:  ldr      x0, [sp, #0x170]
00824170:  bl       #0x8ccfd0
00824174:  ldur     x8, [x29, #-0x40]
00824178:  ldur     x9, [x27, #0x76]
0082417c:  add      x10, sp, #0xa8
00824180:  strb     w21, [sp, #0x160]
00824184:  strb     w22, [sp, #0x161]
00824188:  stur     x8, [x10, #0xba]
0082418c:  stp      x9, x20, [sp, #0x168]
00824190:  b        #0x8241b8
00824194:  ldur     x8, [x29, #-0x40]
00824198:  ldur     x9, [x27, #0x76]
0082419c:  add      x10, sp, #0xa8
008241a0:  strb     w21, [sp, #0x160]
008241a4:  stur     x8, [x10, #0xba]
008241a8:  mov      w8, #1
008241ac:  strb     w22, [sp, #0x161]
008241b0:  stp      x9, x20, [sp, #0x168]
008241b4:  strb     w8, [sp, #0x178]
008241b8:  adrp     x10, #0x365000
008241bc:  add      x10, x10, #0x32
008241c0:  mov      w9, #0x656d
008241c4:  ldr      q0, [x10]
008241c8:  mov      w8, #0x26
008241cc:  movk     w9, #0x746e, lsl #16
008241d0:  sturb    w8, [x29, #-0x30]
008241d4:  stur     w9, [x29, #-0x20]
008241d8:  stur     q0, [x27, #0x81]
008241dc:  sturb    wzr, [x29, #-0x1c]
008241e0:  sub      x0, x29, #0x90
008241e4:  sub      x1, x29, #0x30
008241e8:  bl       #0x817c7c
008241ec:  ldurb    w8, [x29, #-0x30]
008241f0:  mov      x21, x0
008241f4:  tbz      w8, #0, #0x824200
008241f8:  ldur     x0, [x29, #-0x20]
008241fc:  bl       #0x8ccfd0
00824200:  cbz      x21, #0x82425c
00824204:  sub      x8, x29, #0x30
00824208:  add      x0, x21, #0x28
0082420c:  bl       #0x807a6c
00824210:  ldp      x10, x20, [x29, #-0x28]
00824214:  ldur     x8, [x27, #0x82]
00824218:  ldurb    w21, [x29, #-0x30]
0082421c:  ldrb     w9, [sp, #0x198]
00824220:  ldurb    w22, [x29, #-0x2f]
00824224:  stur     x8, [x29, #-0x40]
00824228:  stur     x10, [x27, #0x76]
0082422c:  cbz      w9, #0x8242bc
00824230:  ldrb     w8, [sp, #0x180]
00824234:  tbz      w8, #0, #0x824240
00824238:  ldr      x0, [sp, #0x190]
0082423c:  bl       #0x8ccfd0
00824240:  ldur     x8, [x29, #-0x40]
00824244:  ldur     x9, [x27, #0x76]
00824248:  add      x10, sp, #0xa8
0082424c:  strb     w21, [sp, #0x180]
00824250:  strb     w22, [sp, #0x181]
00824254:  stur     x8, [x10, #0xda]
00824258:  stp      x9, x20, [sp, #0x188]
0082425c:  ldur     x21, [x29, #-0x80]
00824260:  cbz      x21, #0x8242e8
00824264:  mov      w20, #-1
00824268:  b        #0x82427c
0082426c:  mov      x0, x21
00824270:  bl       #0x8ccfd0
00824274:  mov      x21, x22
00824278:  cbz      x22, #0x8242e8
0082427c:  ldr      w8, [x21, #0x58]
00824280:  ldr      x22, [x21]
00824284:  cmn      w8, #1
00824288:  b.eq     #0x8242a4
0082428c:  adrp     x9, #0x98c000
00824290:  add      x9, x9, #0x980
00824294:  ldr      x8, [x9, x8, lsl #3]
00824298:  sub      x0, x29, #0x30
0082429c:  add      x1, x21, #0x28
008242a0:  blr      x8
008242a4:  ldrb     w8, [x21, #0x10]
008242a8:  str      w20, [x21, #0x58]
008242ac:  tbz      w8, #0, #0x82426c
008242b0:  ldr      x0, [x21, #0x20]
008242b4:  bl       #0x8ccfd0
008242b8:  b        #0x82426c
008242bc:  ldur     x8, [x29, #-0x40]
008242c0:  ldur     x9, [x27, #0x76]
008242c4:  add      x10, sp, #0xa8
008242c8:  strb     w21, [sp, #0x180]
008242cc:  stur     x8, [x10, #0xda]
008242d0:  mov      w8, #1
008242d4:  strb     w22, [sp, #0x181]
008242d8:  stp      x9, x20, [sp, #0x188]
008242dc:  strb     w8, [sp, #0x198]
008242e0:  ldur     x21, [x29, #-0x80]
008242e4:  cbnz     x21, #0x824264
008242e8:  ldur     x0, [x29, #-0x90]
008242ec:  stur     xzr, [x29, #-0x90]
008242f0:  cbz      x0, #0x8242f8
008242f4:  bl       #0x8ccfd0
008242f8:  ldrb     w22, [sp, #0xe8]
008242fc:  add      x8, sp, #0xa8
00824300:  cbz      w22, #0x824330
00824304:  ldur     x9, [sp, #0xd2]
00824308:  ldrb     w20, [sp, #0xd0]
0082430c:  ldrb     w3, [sp, #0xd1]
00824310:  stur     x9, [x29, #-0x40]
00824314:  ldp      x10, x9, [sp, #0xd8]
00824318:  stp      xzr, xzr, [sp, #0xd0]
0082431c:  str      xzr, [sp, #0xe0]
00824320:  str      x9, [sp, #0x38]
00824324:  mov      w9, #1
00824328:  stur     x10, [x27, #0x76]
0082432c:  b        #0x824338
00824330:  mov      w20, wzr
00824334:  mov      w9, wzr
00824338:  ldur     q0, [x8, #0x48]
0082433c:  ldur     q1, [x8, #0x58]
00824340:  ldur     q2, [x8, #0x68]
00824344:  ldrb     w21, [sp, #0x148]
00824348:  stur     q0, [x27, #0x27]
0082434c:  ldur     q0, [x8, #0x74]
00824350:  stur     q1, [x27, #0x37]
00824354:  stur     q2, [x27, #0x47]
00824358:  stur     q0, [x27, #0x53]
0082435c:  cbz      w21, #0x824394
00824360:  add      x10, sp, #0xa8
00824364:  ldrb     w17, [sp, #0x131]
00824368:  mov      w4, #1
0082436c:  ldur     x10, [x10, #0x8a]
00824370:  stur     x10, [x29, #-0xa0]
00824374:  ldp      x11, x10, [sp, #0x138]
00824378:  str      x10, [sp, #0x40]
0082437c:  ldrb     w10, [sp, #0x130]
00824380:  stur     x11, [x27, #0x16]
00824384:  str      w10, [sp, #0x50]
00824388:  stp      xzr, xzr, [x8, #0x90]
0082438c:  stur     xzr, [x8, #0x88]
00824390:  b        #0x82439c
00824394:  str      wzr, [sp, #0x50]
00824398:  mov      w4, wzr
0082439c:  ldur     q0, [x8, #0xa8]
008243a0:  ldrb     w10, [sp, #0x178]
008243a4:  stur     q0, [x27, #0x87]
008243a8:  str      w10, [sp, #0x30]
008243ac:  cbz      w10, #0x8243e0
008243b0:  add      x10, sp, #0xa8
008243b4:  ldrb     w14, [sp, #0x160]
008243b8:  ldrb     w16, [sp, #0x161]
008243bc:  ldur     x10, [x10, #0xba]
008243c0:  mov      w2, #1
008243c4:  stur     x10, [x29, #-0xb0]
008243c8:  ldp      x11, x10, [sp, #0x168]
008243cc:  stp      xzr, xzr, [sp, #0x160]
008243d0:  str      xzr, [sp, #0x170]
008243d4:  str      x10, [sp, #0x18]
008243d8:  stur     x11, [x27, #6]
008243dc:  b        #0x8243e8
008243e0:  mov      w14, wzr
008243e4:  mov      w2, wzr
008243e8:  ldrb     w15, [sp, #0x198]
008243ec:  add      x10, x19, #0x200
008243f0:  stp      w22, w21, [sp, #0x24]
008243f4:  cbz      w15, #0x824428
008243f8:  add      x13, sp, #0xa8
008243fc:  ldp      x12, x0, [sp, #0x188]
00824400:  ldur     x11, [x13, #0xda]
00824404:  mov      w1, #1
00824408:  stur     x11, [x29, #-0xc0]
0082440c:  ldrb     w11, [sp, #0x181]
00824410:  stur     x12, [x13, #0xfe]
00824414:  ldrb     w13, [sp, #0x180]
00824418:  str      w11, [sp, #8]
0082441c:  stp      xzr, xzr, [x8, #0xe0]
00824420:  stur     xzr, [x8, #0xd8]
00824424:  b        #0x824430
00824428:  mov      w13, wzr
0082442c:  mov      w1, wzr
00824430:  ldur     q0, [sp, #0xa8]
00824434:  ldur     q1, [sp, #0xb8]
00824438:  ldrb     w11, [x19, #0x2f8]
0082443c:  ldr      x12, [sp, #0xc8]
00824440:  stp      q0, q1, [x10]
00824444:  str      x12, [x10, #0x20]
00824448:  cbz      w11, #0x8244e4
0082444c:  ldrb     w8, [x19, #0x240]
00824450:  sub      x28, x29, #0x90
00824454:  str      x0, [sp, #0x10]
00824458:  str      w13, [sp, #0xc]
0082445c:  cmp      w8, w9
00824460:  b.ne     #0x824654
00824464:  cbz      w8, #0x824728
00824468:  ldrb     w8, [x19, #0x228]
0082446c:  tbz      w8, #0, #0x8244b8
00824470:  ldr      x0, [x19, #0x238]
00824474:  mov      w25, w14
00824478:  mov      w23, w15
0082447c:  mov      w26, w16
00824480:  stp      w4, w17, [sp]
00824484:  mov      w24, w1
00824488:  mov      w22, w2
0082448c:  mov      w21, w3
00824490:  bl       #0x8ccfd0
00824494:  ldp      w4, w17, [sp]
00824498:  ldr      w13, [sp, #0xc]
0082449c:  ldr      x0, [sp, #0x10]
008244a0:  mov      w3, w21
008244a4:  mov      w2, w22
008244a8:  mov      w1, w24
008244ac:  mov      w16, w26
008244b0:  mov      w15, w23
008244b4:  mov      w14, w25
008244b8:  ldur     x8, [x27, #0x76]
008244bc:  ldur     x9, [x29, #-0x40]
008244c0:  add      x10, x19, #0x22a
008244c4:  strb     w20, [x19, #0x228]
008244c8:  mov      w20, wzr
008244cc:  str      x8, [x19, #0x230]
008244d0:  ldr      x8, [sp, #0x38]
008244d4:  strb     w3, [x19, #0x229]
008244d8:  str      x9, [x10]
008244dc:  str      x8, [x19, #0x238]
008244e0:  b        #0x824728
008244e4:  ldr      w22, [sp, #0x24]
008244e8:  strb     wzr, [x19, #0x228]
008244ec:  strb     wzr, [x19, #0x240]
008244f0:  cbz      w22, #0x824530
008244f4:  ldur     x9, [x27, #0x76]
008244f8:  ldur     x10, [x29, #-0x40]
008244fc:  add      x11, x19, #0x22a
00824500:  strb     w20, [x19, #0x228]
00824504:  mov      w20, wzr
00824508:  str      x9, [x19, #0x230]
0082450c:  ldr      x9, [sp, #0x38]
00824510:  strb     w3, [x19, #0x229]
00824514:  str      x9, [x19, #0x238]
00824518:  mov      w9, #1
0082451c:  str      x10, [x11]
00824520:  stur     xzr, [x29, #-0x40]
00824524:  stur     xzr, [x27, #0x76]
00824528:  strb     w9, [x19, #0x240]
0082452c:  str      xzr, [sp, #0x38]
00824530:  ldur     q0, [x8, #0x48]
00824534:  add      x9, x19, #0x200
00824538:  ldr      w21, [sp, #0x28]
0082453c:  ldr      w24, [sp, #0x30]
00824540:  ldr      x25, [sp, #0x18]
00824544:  ldur     q1, [x8, #0x58]
00824548:  ldur     q2, [x8, #0x68]
0082454c:  stur     q0, [x9, #0x48]
00824550:  ldur     q0, [x8, #0x74]
00824554:  stur     q1, [x9, #0x58]
00824558:  stur     q2, [x9, #0x68]
0082455c:  stur     q0, [x9, #0x74]
00824560:  strb     wzr, [x19, #0x288]
00824564:  strb     wzr, [x19, #0x2a0]
00824568:  cbz      w21, #0x8245ac
0082456c:  ldr      w9, [sp, #0x50]
00824570:  ldur     x10, [x29, #-0xa0]
00824574:  add      x11, x19, #0x28a
00824578:  strb     w17, [x19, #0x289]
0082457c:  strb     w9, [x19, #0x288]
00824580:  ldur     x9, [x27, #0x16]
00824584:  stur     xzr, [x29, #-0xa0]
00824588:  str      x9, [x19, #0x290]
0082458c:  ldr      x9, [sp, #0x40]
00824590:  str      x10, [x11]
00824594:  str      x9, [x19, #0x298]
00824598:  mov      w9, #1
0082459c:  stur     xzr, [x27, #0x16]
008245a0:  strb     w9, [x19, #0x2a0]
008245a4:  str      wzr, [sp, #0x50]
008245a8:  str      xzr, [sp, #0x40]
008245ac:  ldur     q0, [x8, #0xa8]
008245b0:  add      x8, x19, #0x2a8
008245b4:  strb     wzr, [x19, #0x2b8]
008245b8:  strb     wzr, [x19, #0x2d0]
008245bc:  str      q0, [x8]
008245c0:  cbz      w24, #0x8245fc
008245c4:  ldur     x8, [x27, #6]
008245c8:  ldur     x9, [x29, #-0xb0]
008245cc:  add      x10, x19, #0x2ba
008245d0:  strb     w14, [x19, #0x2b8]
008245d4:  mov      w14, wzr
008245d8:  str      x8, [x19, #0x2c0]
008245dc:  mov      w8, #1
008245e0:  str      x25, [x19, #0x2c8]
008245e4:  mov      x25, xzr
008245e8:  strb     w16, [x19, #0x2b9]
008245ec:  str      x9, [x10]
008245f0:  stur     xzr, [x29, #-0xb0]
008245f4:  stur     xzr, [x27, #6]
008245f8:  strb     w8, [x19, #0x2d0]
008245fc:  strb     wzr, [x19, #0x2d8]
00824600:  strb     wzr, [x19, #0x2f0]
00824604:  cbz      w15, #0x824648
00824608:  add      x11, sp, #0xa8
0082460c:  ldr      w9, [sp, #8]
00824610:  strb     w13, [x19, #0x2d8]
00824614:  ldur     x8, [x11, #0xfe]
00824618:  add      x10, x19, #0x2da
0082461c:  str      x0, [x19, #0x2e8]
00824620:  strb     w9, [x19, #0x2d9]
00824624:  ldur     x9, [x29, #-0xc0]
00824628:  mov      w13, wzr
0082462c:  str      x8, [x19, #0x2e0]
00824630:  mov      w8, #1
00824634:  mov      x0, xzr
00824638:  str      x9, [x10]
0082463c:  stur     xzr, [x29, #-0xc0]
00824640:  stur     xzr, [x11, #0xfe]
00824644:  strb     w8, [x19, #0x2f0]
00824648:  mov      w8, #1
0082464c:  strb     w8, [x19, #0x2f8]
00824650:  b        #0x824a04
00824654:  cbz      w8, #0x8246ec
00824658:  ldrb     w8, [x19, #0x228]
0082465c:  tbz      w8, #0, #0x8246a8
00824660:  ldr      x0, [x19, #0x238]
00824664:  mov      w25, w14
00824668:  mov      w23, w15
0082466c:  mov      w26, w16
00824670:  mov      w24, w17
00824674:  mov      w21, w1
00824678:  str      w2, [sp, #4]
0082467c:  mov      w22, w4
00824680:  bl       #0x8ccfd0
00824684:  ldr      w2, [sp, #4]
00824688:  ldr      w13, [sp, #0xc]
0082468c:  mov      w4, w22
00824690:  ldr      x0, [sp, #0x10]
00824694:  mov      w1, w21
00824698:  mov      w17, w24
0082469c:  mov      w16, w26
008246a0:  mov      w15, w23
008246a4:  mov      w14, w25
008246a8:  strb     wzr, [x19, #0x240]
008246ac:  b        #0x824728
008246b0:  add      x11, sp, #0xa8
008246b4:  ldr      w9, [sp, #0x10]
008246b8:  add      x10, x19, #0x1da
008246bc:  ldur     x8, [x11, #0xfe]
008246c0:  strb     w12, [x19, #0x1d8]
008246c4:  strb     w9, [x19, #0x1d9]
008246c8:  ldur     x9, [x29, #-0xc0]
008246cc:  stp      x8, x0, [x19, #0x1e0]
008246d0:  mov      w8, #1
008246d4:  str      x9, [x10]
008246d8:  stur     xzr, [x29, #-0xc0]
008246dc:  stur     xzr, [x11, #0xfe]
008246e0:  strb     w8, [x19, #0x1f0]
008246e4:  cbnz     w13, #0x82346c
008246e8:  b        #0x823478
008246ec:  ldur     x8, [x27, #0x76]
008246f0:  ldur     x9, [x29, #-0x40]
008246f4:  add      x10, x19, #0x22a
008246f8:  strb     w20, [x19, #0x228]
008246fc:  mov      w20, wzr
00824700:  str      x8, [x19, #0x230]
00824704:  ldr      x8, [sp, #0x38]
00824708:  strb     w3, [x19, #0x229]
0082470c:  str      x8, [x19, #0x238]
00824710:  mov      w8, #1
00824714:  str      x9, [x10]
00824718:  stur     xzr, [x29, #-0x40]
0082471c:  stur     xzr, [x27, #0x76]
00824720:  strb     w8, [x19, #0x240]
00824724:  str      xzr, [sp, #0x38]
00824728:  ldur     q0, [x28, #7]
0082472c:  add      x9, x19, #0x200
00824730:  ldrb     w8, [x19, #0x2a0]
00824734:  ldur     q1, [x28, #0x17]
00824738:  ldur     q2, [x28, #0x27]
0082473c:  sub      x24, x29, #0x30
00824740:  stur     q0, [x9, #0x48]
00824744:  ldur     q0, [x28, #0x33]
00824748:  cmp      w8, w4
0082474c:  stur     q1, [x9, #0x58]
00824750:  stur     q2, [x9, #0x68]
00824754:  stur     q0, [x9, #0x74]
00824758:  b.ne     #0x8247d8
0082475c:  cbz      w8, #0x824864
00824760:  ldrb     w8, [x19, #0x288]
00824764:  tbz      w8, #0, #0x8247a8
00824768:  ldr      x0, [x19, #0x298]
0082476c:  mov      w25, w14
00824770:  mov      w23, w15
00824774:  mov      w26, w16
00824778:  mov      w28, w17
0082477c:  mov      w21, w1
00824780:  mov      w22, w2
00824784:  bl       #0x8ccfd0
00824788:  ldr      w13, [sp, #0xc]
0082478c:  ldr      x0, [sp, #0x10]
00824790:  mov      w2, w22
00824794:  mov      w1, w21
00824798:  mov      w17, w28
0082479c:  mov      w16, w26
008247a0:  mov      w15, w23
008247a4:  mov      w14, w25
008247a8:  ldr      w8, [sp, #0x50]
008247ac:  ldur     x9, [x29, #-0xa0]
008247b0:  add      x10, x19, #0x28a
008247b4:  strb     w17, [x19, #0x289]
008247b8:  strb     w8, [x19, #0x288]
008247bc:  ldur     x8, [x27, #0x16]
008247c0:  str      wzr, [sp, #0x50]
008247c4:  str      x8, [x19, #0x290]
008247c8:  ldr      x8, [sp, #0x40]
008247cc:  str      x9, [x10]
008247d0:  str      x8, [x19, #0x298]
008247d4:  b        #0x824864
008247d8:  cbz      w8, #0x824824
008247dc:  ldrb     w8, [x19, #0x288]
008247e0:  tbz      w8, #0, #0x82481c
008247e4:  ldr      x0, [x19, #0x298]
008247e8:  mov      w25, w14
008247ec:  mov      w23, w15
008247f0:  mov      w26, w16
008247f4:  mov      w28, w1
008247f8:  mov      w21, w2
008247fc:  bl       #0x8ccfd0
00824800:  ldr      w13, [sp, #0xc]
00824804:  ldr      x0, [sp, #0x10]
00824808:  mov      w2, w21
0082480c:  mov      w1, w28
00824810:  mov      w16, w26
00824814:  mov      w15, w23
00824818:  mov      w14, w25
0082481c:  strb     wzr, [x19, #0x2a0]
00824820:  b        #0x824864
00824824:  ldr      w8, [sp, #0x50]
00824828:  ldur     x9, [x29, #-0xa0]
0082482c:  add      x10, x19, #0x28a
00824830:  strb     w17, [x19, #0x289]
00824834:  strb     w8, [x19, #0x288]
00824838:  ldur     x8, [x27, #0x16]
0082483c:  stur     xzr, [x29, #-0xa0]
00824840:  str      x8, [x19, #0x290]
00824844:  ldr      x8, [sp, #0x40]
00824848:  str      x9, [x10]
0082484c:  str      x8, [x19, #0x298]
00824850:  mov      w8, #1
00824854:  stur     xzr, [x27, #0x16]
00824858:  strb     w8, [x19, #0x2a0]
0082485c:  str      wzr, [sp, #0x50]
00824860:  str      xzr, [sp, #0x40]
00824864:  ldrb     w8, [x19, #0x2d0]
00824868:  ldur     q0, [x24, #7]
0082486c:  add      x9, x19, #0x2a8
00824870:  cmp      w8, w2
00824874:  str      q0, [x9]
00824878:  b.ne     #0x8248f0
0082487c:  ldr      w24, [sp, #0x30]
00824880:  ldr      x25, [sp, #0x18]
00824884:  cbz      w8, #0x82496c
00824888:  ldrb     w8, [x19, #0x2b8]
0082488c:  tbz      w8, #0, #0x8248c8
00824890:  ldr      x0, [x19, #0x2c8]
00824894:  mov      w23, w14
00824898:  mov      w26, w15
0082489c:  mov      w28, w16
008248a0:  mov      w21, w24
008248a4:  mov      w24, w1
008248a8:  bl       #0x8ccfd0
008248ac:  ldr      w13, [sp, #0xc]
008248b0:  ldr      x0, [sp, #0x10]
008248b4:  mov      w1, w24
008248b8:  mov      w24, w21
008248bc:  mov      w16, w28
008248c0:  mov      w15, w26
008248c4:  mov      w14, w23
008248c8:  ldur     x8, [x27, #6]
008248cc:  ldur     x9, [x29, #-0xb0]
008248d0:  add      x10, x19, #0x2ba
008248d4:  strb     w14, [x19, #0x2b8]
008248d8:  mov      w14, wzr
008248dc:  strb     w16, [x19, #0x2b9]
008248e0:  str      x8, [x19, #0x2c0]
008248e4:  str      x9, [x10]
008248e8:  str      x25, [x19, #0x2c8]
008248ec:  b        #0x82496c
008248f0:  ldr      w24, [sp, #0x30]
008248f4:  ldr      x25, [sp, #0x18]
008248f8:  cbz      w8, #0x824934
008248fc:  ldrb     w8, [x19, #0x2b8]
00824900:  tbz      w8, #0, #0x82492c
00824904:  ldr      x0, [x19, #0x2c8]
00824908:  mov      w23, w14
0082490c:  mov      w26, w15
00824910:  mov      w21, w1
00824914:  bl       #0x8ccfd0
00824918:  ldr      w13, [sp, #0xc]
0082491c:  ldr      x0, [sp, #0x10]
00824920:  mov      w1, w21
00824924:  mov      w15, w26
00824928:  mov      w14, w23
0082492c:  strb     wzr, [x19, #0x2d0]
00824930:  b        #0x82496c
00824934:  ldur     x8, [x27, #6]
00824938:  ldur     x9, [x29, #-0xb0]
0082493c:  add      x10, x19, #0x2ba
00824940:  strb     w14, [x19, #0x2b8]
00824944:  mov      w14, wzr
00824948:  str      x8, [x19, #0x2c0]
0082494c:  mov      w8, #1
00824950:  str      x25, [x19, #0x2c8]
00824954:  mov      x25, xzr
00824958:  strb     w16, [x19, #0x2b9]
0082495c:  str      x9, [x10]
00824960:  stur     xzr, [x29, #-0xb0]
00824964:  stur     xzr, [x27, #6]
00824968:  strb     w8, [x19, #0x2d0]
0082496c:  ldrb     w8, [x19, #0x2f0]
00824970:  cmp      w8, w1
00824974:  b.ne     #0x8249d0
00824978:  ldp      w22, w21, [sp, #0x24]
0082497c:  cbz      w8, #0x824a04
00824980:  ldrb     w8, [x19, #0x2d8]
00824984:  tbz      w8, #0, #0x8249a0
00824988:  ldr      x0, [x19, #0x2e8]
0082498c:  mov      w23, w14
00824990:  bl       #0x8ccfd0
00824994:  ldr      w13, [sp, #0xc]
00824998:  ldr      x0, [sp, #0x10]
0082499c:  mov      w14, w23
008249a0:  ldr      w9, [sp, #8]
008249a4:  add      x8, sp, #0xa8
008249a8:  add      x10, x19, #0x2da
008249ac:  ldur     x8, [x8, #0xfe]
008249b0:  strb     w13, [x19, #0x2d8]
008249b4:  strb     w9, [x19, #0x2d9]
008249b8:  ldur     x9, [x29, #-0xc0]
008249bc:  str      x8, [x19, #0x2e0]
008249c0:  str      x9, [x10]
008249c4:  str      x0, [x19, #0x2e8]
008249c8:  cbnz     w24, #0x824a1c
008249cc:  b        #0x824a28
008249d0:  ldp      w22, w21, [sp, #0x24]
008249d4:  cbz      w8, #0x825c64
008249d8:  ldrb     w8, [x19, #0x2d8]
008249dc:  tbz      w8, #0, #0x824a00
008249e0:  ldr      x0, [x19, #0x2e8]
008249e4:  mov      w23, w14
008249e8:  mov      w26, w15
008249ec:  bl       #0x8ccfd0
008249f0:  ldr      w13, [sp, #0xc]
008249f4:  ldr      x0, [sp, #0x10]
008249f8:  mov      w15, w26
008249fc:  mov      w14, w23
00824a00:  strb     wzr, [x19, #0x2f0]
00824a04:  cbz      w15, #0x824a18
00824a08:  tbz      w13, #0, #0x824a18
00824a0c:  mov      w23, w14
00824a10:  bl       #0x8ccfd0
00824a14:  mov      w14, w23
00824a18:  cbz      w24, #0x824a28
00824a1c:  tbz      w14, #0, #0x824a28
00824a20:  mov      x0, x25
00824a24:  bl       #0x8ccfd0
00824a28:  cbz      w21, #0x824a3c
00824a2c:  ldr      w8, [sp, #0x50]
00824a30:  tbz      w8, #0, #0x824a3c
00824a34:  ldr      x0, [sp, #0x40]
00824a38:  bl       #0x8ccfd0
00824a3c:  cbz      w22, #0x824a4c
00824a40:  tbz      w20, #0, #0x824a4c
00824a44:  ldr      x0, [sp, #0x38]
00824a48:  bl       #0x8ccfd0
00824a4c:  ldrb     w8, [sp, #0x198]
00824a50:  cbz      w8, #0x824a64
00824a54:  ldrb     w8, [sp, #0x180]
00824a58:  tbz      w8, #0, #0x824a64
00824a5c:  ldr      x0, [sp, #0x190]
00824a60:  bl       #0x8ccfd0
00824a64:  ldrb     w8, [sp, #0x178]
00824a68:  cbz      w8, #0x824a7c
00824a6c:  ldrb     w8, [sp, #0x160]
00824a70:  tbz      w8, #0, #0x824a7c
00824a74:  ldr      x0, [sp, #0x170]
00824a78:  bl       #0x8ccfd0
00824a7c:  ldrb     w8, [sp, #0x148]
00824a80:  cbz      w8, #0x824a94
00824a84:  ldrb     w8, [sp, #0x130]
00824a88:  tbz      w8, #0, #0x824a94
00824a8c:  ldr      x0, [sp, #0x140]
00824a90:  bl       #0x8ccfd0
00824a94:  ldrb     w8, [sp, #0xe8]
00824a98:  cbz      w8, #0x824aac
00824a9c:  ldrb     w8, [sp, #0xd0]
00824aa0:  tbz      w8, #0, #0x824aac
00824aa4:  ldr      x0, [sp, #0xe0]
00824aa8:  bl       #0x8ccfd0
00824aac:  adrp     x9, #0x36f000
00824ab0:  add      x9, x9, #0x930
00824ab4:  mov      w8, #0x1a
00824ab8:  ldr      x10, [x9]
00824abc:  ldur     x9, [x9, #5]
00824ac0:  strb     w8, [sp, #0xa8]
00824ac4:  strb     wzr, [sp, #0xb6]
00824ac8:  stur     x10, [sp, #0xa9]
00824acc:  stur     x9, [sp, #0xae]
00824ad0:  add      x0, sp, #0x80
00824ad4:  add      x1, sp, #0xa8
00824ad8:  bl       #0x817c7c
00824adc:  ldrb     w8, [sp, #0xa8]
00824ae0:  mov      x21, x0
00824ae4:  tbz      w8, #0, #0x824af0
00824ae8:  ldr      x0, [sp, #0xb8]
00824aec:  bl       #0x8ccfd0
00824af0:  cbz      x21, #0x826064
00824af4:  strb     wzr, [sp, #0x10c]
00824af8:  strb     wzr, [sp, #0x110]
00824afc:  strb     wzr, [sp, #0x114]
00824b00:  strb     wzr, [sp, #0x130]
00824b04:  strb     wzr, [sp, #0x148]
00824b08:  strb     wzr, [sp, #0x178]
00824b0c:  strb     wzr, [sp, #0x180]
00824b10:  strb     wzr, [sp, #0x198]
00824b14:  strb     wzr, [sp, #0x108]
00824b18:  stp      xzr, xzr, [sp, #0x118]
00824b1c:  str      wzr, [sp, #0x128]
00824b20:  stp      xzr, xzr, [sp, #0x150]
00824b24:  strb     wzr, [sp, #0x160]
00824b28:  stp      xzr, xzr, [sp, #0xf8]
00824b2c:  ldr      w8, [x21, #0x58]
00824b30:  strb     wzr, [sp, #0xc0]
00824b34:  strb     wzr, [sp, #0xc4]
00824b38:  cmp      w8, #1
00824b3c:  strb     wzr, [sp, #0xe8]
00824b40:  strb     wzr, [sp, #0xf0]
00824b44:  strb     wzr, [sp, #0xf4]
00824b48:  stp      xzr, xzr, [sp, #0xa8]
00824b4c:  stur     xzr, [sp, #0xb5]
00824b50:  str      xzr, [sp, #0xc8]
00824b54:  strb     wzr, [sp, #0xd0]
00824b58:  b.eq     #0x824b74
00824b5c:  cbnz     w8, #0x82b050
00824b60:  sub      x8, x29, #0x90
00824b64:  add      x0, x21, #0x28
00824b68:  mov      x1, xzr
00824b6c:  bl       #0x8118bc
00824b70:  b        #0x824b88
00824b74:  ldr      x0, [x21, #0x28]
00824b78:  sub      x8, x29, #0x90
00824b7c:  add      x1, x21, #0x30
00824b80:  mov      x2, xzr
00824b84:  bl       #0x811aa8
00824b88:  adrp     x10, #0x370000
00824b8c:  add      x10, x10, #0xad5
00824b90:  mov      w9, #0x6964
00824b94:  ldr      x10, [x10]
00824b98:  mov      w8, #0x18
00824b9c:  movk     w9, #0x7375, lsl #16
00824ba0:  sturb    w8, [x29, #-0x30]
00824ba4:  stur     w9, [x27, #0x89]
00824ba8:  stur     x10, [x27, #0x81]
00824bac:  sturb    wzr, [x29, #-0x23]
00824bb0:  sub      x0, x29, #0x90
00824bb4:  sub      x1, x29, #0x30
00824bb8:  bl       #0x817c7c
00824bbc:  ldurb    w8, [x29, #-0x30]
00824bc0:  mov      x21, x0
00824bc4:  tbz      w8, #0, #0x824bd0
00824bc8:  ldur     x0, [x29, #-0x20]
00824bcc:  bl       #0x8ccfd0
00824bd0:  cbz      x21, #0x824be0
00824bd4:  add      x0, x21, #0x28
00824bd8:  bl       #0x809024
00824bdc:  str      s0, [sp, #0xa8]
00824be0:  adrp     x10, #0x36e000
00824be4:  add      x10, x10, #0x6cb
00824be8:  mov      w9, #0x6964
00824bec:  ldr      q0, [x10]
00824bf0:  mov      w8, #0x26
00824bf4:  movk     w9, #0x7375, lsl #16
00824bf8:  sturb    w8, [x29, #-0x30]
00824bfc:  stur     w9, [x29, #-0x20]
00824c00:  stur     q0, [x27, #0x81]
00824c04:  sturb    wzr, [x29, #-0x1c]
00824c08:  sub      x0, x29, #0x90
00824c0c:  sub      x1, x29, #0x30
00824c10:  bl       #0x817c7c
00824c14:  ldurb    w8, [x29, #-0x30]
00824c18:  mov      x21, x0
00824c1c:  tbz      w8, #0, #0x824c28
00824c20:  ldur     x0, [x29, #-0x20]
00824c24:  bl       #0x8ccfd0
00824c28:  cbz      x21, #0x824c38
00824c2c:  add      x0, x21, #0x28
00824c30:  bl       #0x809024
00824c34:  str      s0, [sp, #0xac]
00824c38:  adrp     x10, #0x36a000
00824c3c:  add      x10, x10, #0xe62
00824c40:  mov      w9, #0x6964
00824c44:  ldr      q0, [x10]
00824c48:  mov      w8, #0x28
00824c4c:  movk     w9, #0x7375, lsl #16
00824c50:  sturb    w8, [x29, #-0x30]
00824c54:  stur     w9, [x27, #0x91]
00824c58:  stur     q0, [x27, #0x81]
00824c5c:  sturb    wzr, [x29, #-0x1b]
00824c60:  sub      x0, x29, #0x90
00824c64:  sub      x1, x29, #0x30
00824c68:  bl       #0x817c7c
00824c6c:  ldurb    w8, [x29, #-0x30]
00824c70:  mov      x21, x0
00824c74:  tbz      w8, #0, #0x824c80
00824c78:  ldur     x0, [x29, #-0x20]
00824c7c:  bl       #0x8ccfd0
00824c80:  cbz      x21, #0x824c90
00824c84:  add      x0, x21, #0x28
00824c88:  bl       #0x809024
00824c8c:  str      s0, [sp, #0xb0]
00824c90:  adrp     x9, #0x36e000
00824c94:  add      x9, x9, #0x42
00824c98:  mov      w8, #0x2c
00824c9c:  ldr      q0, [x9]
00824ca0:  ldur     x9, [x9, #0xe]
00824ca4:  sturb    w8, [x29, #-0x30]
00824ca8:  sturb    wzr, [x29, #-0x19]
00824cac:  stur     q0, [x27, #0x81]
00824cb0:  stur     x9, [x27, #0x8f]
00824cb4:  sub      x0, x29, #0x90
00824cb8:  sub      x1, x29, #0x30
00824cbc:  bl       #0x817c7c
00824cc0:  ldurb    w8, [x29, #-0x30]
00824cc4:  mov      x21, x0
00824cc8:  tbz      w8, #0, #0x824cd4
00824ccc:  ldur     x0, [x29, #-0x20]
00824cd0:  bl       #0x8ccfd0
00824cd4:  cbz      x21, #0x824ce4
00824cd8:  add      x0, x21, #0x28
00824cdc:  bl       #0x809024
00824ce0:  str      s0, [sp, #0xb4]
00824ce4:  mov      w0, #0x20
00824ce8:  bl       #0x8ccfa0
00824cec:  adrp     x8, #0x372000
00824cf0:  stur     x0, [x29, #-0x20]
00824cf4:  ldr      q0, [x8, #0xd20]
00824cf8:  adrp     x8, #0x36c000
00824cfc:  add      x8, x8, #0x45
00824d00:  ldr      q1, [x8]
00824d04:  ldur     x8, [x8, #0xf]
00824d08:  strb     wzr, [x0, #0x17]
00824d0c:  stur     q0, [x29, #-0x30]
00824d10:  str      q1, [x0]
00824d14:  stur     x8, [x0, #0xf]
00824d18:  sub      x0, x29, #0x90
00824d1c:  sub      x1, x29, #0x30
00824d20:  bl       #0x817c7c
00824d24:  ldurb    w8, [x29, #-0x30]
00824d28:  mov      x21, x0
00824d2c:  tbz      w8, #0, #0x824d38
00824d30:  ldur     x0, [x29, #-0x20]
00824d34:  bl       #0x8ccfd0
00824d38:  cbz      x21, #0x824d48
00824d3c:  add      x0, x21, #0x28
00824d40:  bl       #0x809024
00824d44:  str      s0, [sp, #0xb8]
00824d48:  mov      w8, #0xe
00824d4c:  mov      w9, #0x6964
00824d50:  sturb    wzr, [x29, #-0x28]
00824d54:  sturb    w8, [x29, #-0x30]
00824d58:  mov      w8, #0x6469
00824d5c:  movk     w9, #0x6976, lsl #16
00824d60:  movk     w8, #0x7265, lsl #16
00824d64:  stur     w9, [x27, #0x81]
00824d68:  stur     w8, [x29, #-0x2c]
00824d6c:  sub      x0, x29, #0x90
00824d70:  sub      x1, x29, #0x30
00824d74:  bl       #0x817c7c
00824d78:  ldurb    w8, [x29, #-0x30]
00824d7c:  mov      x21, x0
00824d80:  tbz      w8, #0, #0x824d8c
00824d84:  ldur     x0, [x29, #-0x20]
00824d88:  bl       #0x8ccfd0
00824d8c:  cbz      x21, #0x824dcc
00824d90:  ldr      w8, [x21, #0x58]
00824d94:  cmp      w8, #1
00824d98:  b.eq     #0x824dbc
00824d9c:  cbnz     w8, #0x82b17c
00824da0:  ldr      w1, [x21, #0x28]
00824da4:  cmp      w1, #2
00824da8:  b.ne     #0x82b194
00824dac:  ldrb     w8, [x21, #0x30]
00824db0:  cmp      w8, #0
00824db4:  cset     w0, ne
00824db8:  b        #0x824dc4
00824dbc:  add      x0, x21, #0x30
00824dc0:  bl       #0x8cdb20
00824dc4:  and      w8, w0, #1
00824dc8:  strb     w8, [sp, #0xbc]
00824dcc:  adrp     x10, #0x36f000
00824dd0:  add      x10, x10, #0x93e
00824dd4:  mov      w9, #0x6c6f
00824dd8:  ldr      x10, [x10]
00824ddc:  mov      w8, #0x18
00824de0:  movk     w9, #0x726f, lsl #16
00824de4:  sturb    w8, [x29, #-0x30]
00824de8:  stur     w9, [x27, #0x89]
00824dec:  stur     x10, [x27, #0x81]
00824df0:  sturb    wzr, [x29, #-0x23]
00824df4:  sub      x0, x29, #0x90
00824df8:  sub      x1, x29, #0x30
00824dfc:  bl       #0x817c7c
00824e00:  ldurb    w8, [x29, #-0x30]
00824e04:  mov      x21, x0
00824e08:  tbz      w8, #0, #0x824e14
00824e0c:  ldur     x0, [x29, #-0x20]
00824e10:  bl       #0x8ccfd0
00824e14:  cbz      x21, #0x824e4c
00824e18:  ldr      x8, [sp, #0x70]
00824e1c:  stur     wzr, [x29, #-0x30]
00824e20:  ldr      x0, [x8, #8]
00824e24:  ldr      w1, [x8]
00824e28:  adrp     x4, #0x99e000
00824e2c:  add      x2, x21, #0x28
00824e30:  sub      x3, x29, #0x30
00824e34:  ldr      x4, [x4, #0x140]
00824e38:  bl       #0x807f90
00824e3c:  ldur     w8, [x29, #-0x30]
00824e40:  mov      w9, #1
00824e44:  strb     w9, [sp, #0xc4]
00824e48:  str      w8, [sp, #0xc0]
00824e4c:  adrp     x10, #0x367000
00824e50:  add      x10, x10, #0xa0f
00824e54:  mov      w8, #0x24
00824e58:  ldr      q0, [x10]
00824e5c:  mov      w9, #0x7466
00824e60:  sturb    w8, [x29, #-0x30]
00824e64:  sturh    w9, [x27, #0x91]
00824e68:  stur     q0, [x27, #0x81]
00824e6c:  sturb    wzr, [x29, #-0x1d]
00824e70:  sub      x0, x29, #0x90
00824e74:  sub      x1, x29, #0x30
00824e78:  bl       #0x817c7c
00824e7c:  ldurb    w8, [x29, #-0x30]
00824e80:  mov      x21, x0
00824e84:  tbz      w8, #0, #0x824e90
00824e88:  ldur     x0, [x29, #-0x20]
00824e8c:  bl       #0x8ccfd0
00824e90:  cbz      x21, #0x824ea0
00824e94:  add      x0, x21, #0x28
00824e98:  bl       #0x809024
00824e9c:  str      s0, [sp, #0xc8]
00824ea0:  adrp     x10, #0x36a000
00824ea4:  add      x10, x10, #0x836
00824ea8:  mov      w9, #0x6769
00824eac:  ldr      q0, [x10]
00824eb0:  mov      w8, #0x26
00824eb4:  movk     w9, #0x7468, lsl #16
00824eb8:  sturb    w8, [x29, #-0x30]
00824ebc:  stur     w9, [x29, #-0x20]
00824ec0:  stur     q0, [x27, #0x81]
00824ec4:  sturb    wzr, [x29, #-0x1c]
00824ec8:  sub      x0, x29, #0x90
00824ecc:  sub      x1, x29, #0x30
00824ed0:  bl       #0x817c7c
00824ed4:  ldurb    w8, [x29, #-0x30]
00824ed8:  mov      x21, x0
00824edc:  tbz      w8, #0, #0x824ee8
00824ee0:  ldur     x0, [x29, #-0x20]
00824ee4:  bl       #0x8ccfd0
00824ee8:  cbz      x21, #0x824ef8
00824eec:  add      x0, x21, #0x28
00824ef0:  bl       #0x809024
00824ef4:  str      s0, [sp, #0xcc]
00824ef8:  adrp     x9, #0x36c000
00824efc:  add      x9, x9, #0x4b4
00824f00:  mov      w8, #0x20
00824f04:  ldr      q0, [x9]
00824f08:  sturb    w8, [x29, #-0x30]
00824f0c:  sturb    wzr, [x29, #-0x1f]
00824f10:  stur     q0, [x27, #0x81]
00824f14:  sub      x0, x29, #0x90
00824f18:  sub      x1, x29, #0x30
00824f1c:  bl       #0x817c7c
00824f20:  ldurb    w8, [x29, #-0x30]
00824f24:  mov      x21, x0
00824f28:  tbz      w8, #0, #0x824f34
00824f2c:  ldur     x0, [x29, #-0x20]
00824f30:  bl       #0x8ccfd0
00824f34:  cbz      x21, #0x824fb0
00824f38:  sub      x8, x29, #0x30
00824f3c:  add      x0, x21, #0x28
00824f40:  bl       #0x807a6c
00824f44:  ldp      x10, x20, [x29, #-0x28]
00824f48:  ldur     x8, [x27, #0x82]
00824f4c:  ldurb    w21, [x29, #-0x30]
00824f50:  ldrb     w9, [sp, #0xe8]
00824f54:  ldurb    w22, [x29, #-0x2f]
00824f58:  stur     x8, [x29, #-0x40]
00824f5c:  stur     x10, [x27, #0x76]
00824f60:  cbz      w9, #0x824f90
00824f64:  ldrb     w8, [sp, #0xd0]
00824f68:  tbz      w8, #0, #0x824f74
00824f6c:  ldr      x0, [sp, #0xe0]
00824f70:  bl       #0x8ccfd0
00824f74:  ldur     x8, [x29, #-0x40]
00824f78:  ldur     x9, [x27, #0x76]
00824f7c:  strb     w21, [sp, #0xd0]
00824f80:  strb     w22, [sp, #0xd1]
00824f84:  stur     x8, [sp, #0xd2]
00824f88:  stp      x9, x20, [sp, #0xd8]
00824f8c:  b        #0x824fb0
00824f90:  ldur     x8, [x29, #-0x40]
00824f94:  ldur     x9, [x27, #0x76]
00824f98:  strb     w21, [sp, #0xd0]
00824f9c:  strb     w22, [sp, #0xd1]
00824fa0:  stur     x8, [sp, #0xd2]
00824fa4:  mov      w8, #1
00824fa8:  stp      x9, x20, [sp, #0xd8]
00824fac:  strb     w8, [sp, #0xe8]
00824fb0:  adrp     x9, #0x36a000
00824fb4:  add      x9, x9, #0x84a
00824fb8:  mov      w8, #0x2a
00824fbc:  ldr      q0, [x9]
00824fc0:  ldur     x9, [x9, #0xd]
00824fc4:  sturb    w8, [x29, #-0x30]
00824fc8:  sturb    wzr, [x29, #-0x1a]
00824fcc:  stur     q0, [x27, #0x81]
00824fd0:  stur     x9, [x27, #0x8e]
00824fd4:  sub      x0, x29, #0x90
00824fd8:  sub      x1, x29, #0x30
00824fdc:  bl       #0x817c7c
00824fe0:  ldurb    w8, [x29, #-0x30]
00824fe4:  mov      x21, x0
00824fe8:  tbz      w8, #0, #0x824ff4
00824fec:  ldur     x0, [x29, #-0x20]
00824ff0:  bl       #0x8ccfd0
00824ff4:  cbz      x21, #0x82502c
00824ff8:  ldr      x8, [sp, #0x70]
00824ffc:  stur     wzr, [x29, #-0x30]
00825000:  ldr      x0, [x8, #8]
00825004:  ldr      w1, [x8]
00825008:  adrp     x4, #0x99e000
0082500c:  add      x2, x21, #0x28
00825010:  sub      x3, x29, #0x30
00825014:  ldr      x4, [x4, #0x140]
00825018:  bl       #0x807f90
0082501c:  ldur     w8, [x29, #-0x30]
00825020:  mov      w9, #1
00825024:  strb     w9, [sp, #0xf4]
00825028:  str      w8, [sp, #0xf0]
0082502c:  adrp     x9, #0x36d000
00825030:  add      x9, x9, #0x9e1
00825034:  mov      w8, #0x2a
00825038:  ldr      q0, [x9]
0082503c:  ldur     x9, [x9, #0xd]
00825040:  sturb    w8, [x29, #-0x30]
00825044:  sturb    wzr, [x29, #-0x1a]
00825048:  stur     q0, [x27, #0x81]
0082504c:  stur     x9, [x27, #0x8e]
00825050:  sub      x0, x29, #0x90
00825054:  sub      x1, x29, #0x30
00825058:  bl       #0x817c7c
0082505c:  ldurb    w8, [x29, #-0x30]
00825060:  mov      x21, x0
00825064:  tbz      w8, #0, #0x825070
00825068:  ldur     x0, [x29, #-0x20]
0082506c:  bl       #0x8ccfd0
00825070:  cbz      x21, #0x825080
00825074:  add      x0, x21, #0x28
00825078:  bl       #0x8161a0
0082507c:  str      w0, [sp, #0xf8]
00825080:  adrp     x10, #0x36a000
00825084:  add      x10, x10, #0xe77
00825088:  mov      w9, #0x4765
0082508c:  ldr      q0, [x10]
00825090:  mov      w8, #0x26
00825094:  movk     w9, #0x7061, lsl #16
00825098:  sturb    w8, [x29, #-0x30]
0082509c:  stur     w9, [x29, #-0x20]
008250a0:  stur     q0, [x27, #0x81]
008250a4:  sturb    wzr, [x29, #-0x1c]
008250a8:  sub      x0, x29, #0x90
008250ac:  sub      x1, x29, #0x30
008250b0:  bl       #0x817c7c
008250b4:  ldurb    w8, [x29, #-0x30]
008250b8:  mov      x21, x0
008250bc:  tbz      w8, #0, #0x8250c8
008250c0:  ldur     x0, [x29, #-0x20]
008250c4:  bl       #0x8ccfd0
008250c8:  cbz      x21, #0x8250d8
008250cc:  add      x0, x21, #0x28
008250d0:  bl       #0x809024
008250d4:  str      s0, [sp, #0xfc]
008250d8:  mov      w0, #0x30
008250dc:  bl       #0x8ccfa0
008250e0:  adrp     x8, #0x373000
008250e4:  stur     x0, [x29, #-0x20]
008250e8:  ldr      q2, [x8, #0x40]
008250ec:  mov      w8, #0x6c
008250f0:  strh     w8, [x0, #0x20]
008250f4:  adrp     x8, #0x369000
008250f8:  add      x8, x8, #0x87b
008250fc:  ldp      q0, q1, [x8]
00825100:  str      q2, [sp, #0x50]
00825104:  stur     q2, [x29, #-0x30]
00825108:  stp      q0, q1, [x0]
0082510c:  sub      x0, x29, #0x90
00825110:  sub      x1, x29, #0x30
00825114:  bl       #0x817c7c
00825118:  ldurb    w8, [x29, #-0x30]
0082511c:  mov      x21, x0
00825120:  tbz      w8, #0, #0x82512c
00825124:  ldur     x0, [x29, #-0x20]
00825128:  bl       #0x8ccfd0
0082512c:  cbz      x21, #0x82513c
00825130:  add      x0, x21, #0x28
00825134:  bl       #0x809024
00825138:  str      s0, [sp, #0x100]
0082513c:  mov      w0, #0x20
00825140:  bl       #0x8ccfa0
00825144:  adrp     x8, #0x372000
00825148:  stur     x0, [x29, #-0x20]
0082514c:  ldr      q0, [x8, #0x250]
00825150:  adrp     x8, #0x36a000
00825154:  add      x8, x8, #0x258
00825158:  ldr      q1, [x8]
0082515c:  ldur     q2, [x8, #0xf]
00825160:  strb     wzr, [x0, #0x1f]
00825164:  stur     q0, [x29, #-0x30]
00825168:  str      q1, [x0]
0082516c:  stur     q2, [x0, #0xf]
00825170:  sub      x0, x29, #0x90
00825174:  sub      x1, x29, #0x30
00825178:  bl       #0x817c7c
0082517c:  ldurb    w8, [x29, #-0x30]
00825180:  mov      x21, x0
00825184:  tbz      w8, #0, #0x825190
00825188:  ldur     x0, [x29, #-0x20]
0082518c:  bl       #0x8ccfd0
00825190:  cbz      x21, #0x8251a0
00825194:  add      x0, x21, #0x28
00825198:  bl       #0x809024
0082519c:  str      s0, [sp, #0x104]
008251a0:  mov      w0, #0x20
008251a4:  bl       #0x8ccfa0
008251a8:  adrp     x8, #0x371000
008251ac:  stur     x0, [x29, #-0x20]
008251b0:  ldr      q0, [x8, #0x7a0]
008251b4:  adrp     x8, #0x370000
008251b8:  add      x8, x8, #0x665
008251bc:  ldr      q1, [x8]
008251c0:  ldur     q2, [x8, #0xe]
008251c4:  strb     wzr, [x0, #0x1e]
008251c8:  stur     q0, [x29, #-0x30]
008251cc:  str      q1, [x0]
008251d0:  stur     q2, [x0, #0xe]
008251d4:  sub      x0, x29, #0x90
008251d8:  sub      x1, x29, #0x30
008251dc:  bl       #0x817c7c
008251e0:  ldurb    w8, [x29, #-0x30]
008251e4:  mov      x21, x0
008251e8:  tbz      w8, #0, #0x8251f4
008251ec:  ldur     x0, [x29, #-0x20]
008251f0:  bl       #0x8ccfd0
008251f4:  cbz      x21, #0x82522c
008251f8:  ldr      x8, [sp, #0x70]
008251fc:  stur     wzr, [x29, #-0x30]
00825200:  ldr      x0, [x8, #8]
00825204:  ldr      w1, [x8]
00825208:  adrp     x4, #0x99e000
0082520c:  add      x2, x21, #0x28
00825210:  sub      x3, x29, #0x30
00825214:  ldr      x4, [x4, #0x140]
00825218:  bl       #0x807f90
0082521c:  ldur     w8, [x29, #-0x30]
00825220:  mov      w9, #1
00825224:  strb     w9, [sp, #0x10c]
00825228:  str      w8, [sp, #0x108]
0082522c:  adrp     x10, #0x368000
00825230:  add      x10, x10, #0xd84
00825234:  mov      w9, #0x6c6f
00825238:  ldr      q0, [x10]
0082523c:  mov      w8, #0x28
00825240:  movk     w9, #0x726f, lsl #16
00825244:  sturb    w8, [x29, #-0x30]
00825248:  stur     w9, [x27, #0x91]
0082524c:  stur     q0, [x27, #0x81]
00825250:  sturb    wzr, [x29, #-0x1b]
00825254:  sub      x0, x29, #0x90
00825258:  sub      x1, x29, #0x30
0082525c:  bl       #0x817c7c
00825260:  ldurb    w8, [x29, #-0x30]
00825264:  mov      x21, x0
00825268:  tbz      w8, #0, #0x825274
0082526c:  ldur     x0, [x29, #-0x20]
00825270:  bl       #0x8ccfd0
00825274:  cbz      x21, #0x8252ac
00825278:  ldr      x8, [sp, #0x70]
0082527c:  stur     wzr, [x29, #-0x30]
00825280:  ldr      x0, [x8, #8]
00825284:  ldr      w1, [x8]
00825288:  adrp     x4, #0x99e000
0082528c:  add      x2, x21, #0x28
00825290:  sub      x3, x29, #0x30
00825294:  ldr      x4, [x4, #0x140]
00825298:  bl       #0x807f90
0082529c:  ldur     w8, [x29, #-0x30]
008252a0:  mov      w9, #1
008252a4:  strb     w9, [sp, #0x114]
008252a8:  str      w8, [sp, #0x110]
008252ac:  mov      w0, #0x20
008252b0:  bl       #0x8ccfa0
008252b4:  adrp     x8, #0x371000
008252b8:  stur     x0, [x29, #-0x20]
008252bc:  ldr      q0, [x8, #0xb20]
008252c0:  adrp     x8, #0x369000
008252c4:  add      x8, x8, #0x3df
008252c8:  ldr      q1, [x8]
008252cc:  ldur     q2, [x8, #0xb]
008252d0:  strb     wzr, [x0, #0x1b]
008252d4:  stur     q0, [x29, #-0x30]
008252d8:  str      q1, [x0]
008252dc:  stur     q2, [x0, #0xb]
008252e0:  sub      x0, x29, #0x90
008252e4:  sub      x1, x29, #0x30
008252e8:  bl       #0x817c7c
008252ec:  ldurb    w8, [x29, #-0x30]
008252f0:  mov      x21, x0
008252f4:  tbz      w8, #0, #0x825300
008252f8:  ldur     x0, [x29, #-0x20]
008252fc:  bl       #0x8ccfd0
00825300:  cbz      x21, #0x825310
00825304:  add      x0, x21, #0x28
00825308:  bl       #0x809024
0082530c:  str      s0, [sp, #0x118]
00825310:  mov      w0, #0x30
00825314:  bl       #0x8ccfa0
00825318:  adrp     x8, #0x371000
0082531c:  stur     x0, [x29, #-0x20]
00825320:  ldr      q0, [x8, #0x9d0]
00825324:  adrp     x8, #0x370000
00825328:  add      x8, x8, #0xae2
0082532c:  ldp      q1, q2, [x8]
00825330:  ldur     x8, [x8, #0x1d]
00825334:  stur     q0, [x29, #-0x30]
00825338:  strb     wzr, [x0, #0x25]
0082533c:  stp      q1, q2, [x0]
00825340:  stur     x8, [x0, #0x1d]
00825344:  sub      x0, x29, #0x90
00825348:  sub      x1, x29, #0x30
0082534c:  bl       #0x817c7c
00825350:  ldurb    w8, [x29, #-0x30]
00825354:  mov      x21, x0
00825358:  tbz      w8, #0, #0x825364
0082535c:  ldur     x0, [x29, #-0x20]
00825360:  bl       #0x8ccfd0
00825364:  cbz      x21, #0x825374
00825368:  add      x0, x21, #0x28
0082536c:  bl       #0x809024
00825370:  str      s0, [sp, #0x11c]
00825374:  mov      w0, #0x20
00825378:  bl       #0x8ccfa0
0082537c:  adrp     x8, #0x371000
00825380:  stur     x0, [x29, #-0x20]
00825384:  ldr      q1, [x8, #0x460]
00825388:  adrp     x8, #0x36f000
0082538c:  add      x8, x8, #0x94b
00825390:  ldr      q0, [x8]
00825394:  ldr      x8, [x8, #0x10]
00825398:  strb     wzr, [x0, #0x18]
0082539c:  str      q1, [sp, #0x40]
008253a0:  stur     q1, [x29, #-0x30]
008253a4:  str      q0, [x0]
008253a8:  str      x8, [x0, #0x10]
008253ac:  sub      x0, x29, #0x90
008253b0:  sub      x1, x29, #0x30
008253b4:  bl       #0x817c7c
008253b8:  ldurb    w8, [x29, #-0x30]
008253bc:  mov      x21, x0
008253c0:  tbz      w8, #0, #0x8253cc
008253c4:  ldur     x0, [x29, #-0x20]
008253c8:  bl       #0x8ccfd0
008253cc:  cbz      x21, #0x8253dc
008253d0:  add      x0, x21, #0x28
008253d4:  bl       #0x809024
008253d8:  str      s0, [sp, #0x120]
008253dc:  mov      w0, #0x30
008253e0:  bl       #0x8ccfa0
008253e4:  ldr      q0, [sp, #0x50]
008253e8:  adrp     x9, #0x36c000
008253ec:  add      x9, x9, #0x4c5
008253f0:  mov      w8, #0x65
008253f4:  stur     x0, [x29, #-0x20]
008253f8:  stur     q0, [x29, #-0x30]
008253fc:  ldp      q0, q1, [x9]
00825400:  strh     w8, [x0, #0x20]
00825404:  stp      q0, q1, [x0]
00825408:  sub      x0, x29, #0x90
0082540c:  sub      x1, x29, #0x30
00825410:  bl       #0x817c7c
00825414:  ldurb    w8, [x29, #-0x30]
00825418:  mov      x21, x0
0082541c:  tbz      w8, #0, #0x825428
00825420:  ldur     x0, [x29, #-0x20]
00825424:  bl       #0x8ccfd0
00825428:  cbz      x21, #0x825438
0082542c:  add      x0, x21, #0x28
00825430:  bl       #0x809024
00825434:  str      s0, [sp, #0x124]
00825438:  adrp     x9, #0x365000
0082543c:  add      x9, x9, #0xd68
00825440:  mov      w8, #0x2c
00825444:  ldr      q0, [x9]
00825448:  ldur     x9, [x9, #0xe]
0082544c:  sturb    w8, [x29, #-0x30]
00825450:  sturb    wzr, [x29, #-0x19]
00825454:  stur     q0, [x27, #0x81]
00825458:  stur     x9, [x27, #0x8f]
0082545c:  sub      x0, x29, #0x90
00825460:  sub      x1, x29, #0x30
00825464:  bl       #0x817c7c
00825468:  ldurb    w8, [x29, #-0x30]
0082546c:  mov      x21, x0
00825470:  tbz      w8, #0, #0x82547c
00825474:  ldur     x0, [x29, #-0x20]
00825478:  bl       #0x8ccfd0
0082547c:  cbz      x21, #0x82548c
00825480:  add      x0, x21, #0x28
00825484:  bl       #0x809024
00825488:  str      s0, [sp, #0x128]
0082548c:  adrp     x10, #0x36c000
00825490:  add      x10, x10, #0x4e7
00825494:  mov      w9, #0x6168
00825498:  ldr      q0, [x10]
0082549c:  mov      w8, #0x28
008254a0:  movk     w9, #0x6570, lsl #16
008254a4:  sturb    w8, [x29, #-0x30]
008254a8:  stur     w9, [x27, #0x91]
008254ac:  stur     q0, [x27, #0x81]
008254b0:  sturb    wzr, [x29, #-0x1b]
008254b4:  sub      x0, x29, #0x90
008254b8:  sub      x1, x29, #0x30
008254bc:  bl       #0x817c7c
008254c0:  ldurb    w8, [x29, #-0x30]
008254c4:  mov      x21, x0
008254c8:  tbz      w8, #0, #0x8254d4
008254cc:  ldur     x0, [x29, #-0x20]
008254d0:  bl       #0x8ccfd0
008254d4:  cbz      x21, #0x825558
008254d8:  sub      x8, x29, #0x30
008254dc:  add      x0, x21, #0x28
008254e0:  bl       #0x807a6c
008254e4:  ldp      x10, x20, [x29, #-0x28]
008254e8:  ldur     x8, [x27, #0x82]
008254ec:  ldurb    w21, [x29, #-0x30]
008254f0:  ldrb     w9, [sp, #0x148]
008254f4:  ldurb    w22, [x29, #-0x2f]
008254f8:  stur     x8, [x29, #-0x40]
008254fc:  stur     x10, [x27, #0x76]
00825500:  cbz      w9, #0x825534
00825504:  ldrb     w8, [sp, #0x130]
00825508:  tbz      w8, #0, #0x825514
0082550c:  ldr      x0, [sp, #0x140]
00825510:  bl       #0x8ccfd0
00825514:  ldur     x8, [x29, #-0x40]
00825518:  ldur     x9, [x27, #0x76]
0082551c:  add      x10, sp, #0xa8
00825520:  strb     w21, [sp, #0x130]
00825524:  strb     w22, [sp, #0x131]
00825528:  stur     x8, [x10, #0x8a]
0082552c:  stp      x9, x20, [sp, #0x138]
00825530:  b        #0x825558
00825534:  ldur     x8, [x29, #-0x40]
00825538:  ldur     x9, [x27, #0x76]
0082553c:  add      x10, sp, #0xa8
00825540:  strb     w21, [sp, #0x130]
00825544:  stur     x8, [x10, #0x8a]
00825548:  mov      w8, #1
0082554c:  strb     w22, [sp, #0x131]
00825550:  stp      x9, x20, [sp, #0x138]
00825554:  strb     w8, [sp, #0x148]
00825558:  mov      w0, #0x20
0082555c:  bl       #0x8ccfa0
00825560:  adrp     x8, #0x36b000
00825564:  add      x8, x8, #0x944
00825568:  ldr      q1, [sp, #0x40]
0082556c:  ldr      q0, [x8]
00825570:  ldr      x8, [x8, #0x10]
00825574:  stur     x0, [x29, #-0x20]
00825578:  stur     q1, [x29, #-0x30]
0082557c:  str      q0, [x0]
00825580:  str      x8, [x0, #0x10]
00825584:  strb     wzr, [x0, #0x18]
00825588:  sub      x0, x29, #0x90
0082558c:  sub      x1, x29, #0x30
00825590:  bl       #0x817c7c
00825594:  ldurb    w8, [x29, #-0x30]
00825598:  mov      x21, x0
0082559c:  tbz      w8, #0, #0x8255a8
008255a0:  ldur     x0, [x29, #-0x20]
008255a4:  bl       #0x8ccfd0
008255a8:  cbz      x21, #0x8255b8
008255ac:  add      x0, x21, #0x28
008255b0:  bl       #0x809024
008255b4:  str      s0, [sp, #0x150]
008255b8:  adrp     x10, #0x369000
008255bc:  add      x10, x10, #0x89d
008255c0:  mov      w8, #0x1e
008255c4:  ldr      x9, [x10]
008255c8:  ldur     x10, [x10, #7]
008255cc:  sturb    w8, [x29, #-0x30]
008255d0:  sturb    wzr, [x29, #-0x20]
008255d4:  stur     x9, [x27, #0x81]
008255d8:  stur     x10, [x29, #-0x28]
008255dc:  sub      x0, x29, #0x90
008255e0:  sub      x1, x29, #0x30
008255e4:  bl       #0x817c7c
008255e8:  ldurb    w8, [x29, #-0x30]
008255ec:  mov      x21, x0
008255f0:  tbz      w8, #0, #0x8255fc
008255f4:  ldur     x0, [x29, #-0x20]
008255f8:  bl       #0x8ccfd0
008255fc:  cbz      x21, #0x82560c
00825600:  add      x0, x21, #0x28
00825604:  bl       #0x8161a0
00825608:  str      w0, [sp, #0x154]
0082560c:  mov      w8, #0xa
00825610:  mov      w9, #0x6977
00825614:  movk     w9, #0x7464, lsl #16
00825618:  sturb    w8, [x29, #-0x30]
0082561c:  mov      w8, #0x68
00825620:  stur     w9, [x27, #0x81]
00825624:  sturh    w8, [x27, #0x85]
00825628:  sub      x0, x29, #0x90
0082562c:  sub      x1, x29, #0x30
00825630:  bl       #0x817c7c
00825634:  ldurb    w8, [x29, #-0x30]
00825638:  mov      x21, x0
0082563c:  tbz      w8, #0, #0x825648
00825640:  ldur     x0, [x29, #-0x20]
00825644:  bl       #0x8ccfd0
00825648:  cbz      x21, #0x825658
0082564c:  add      x0, x21, #0x28
00825650:  bl       #0x809024
00825654:  str      s0, [sp, #0x158]
00825658:  mov      w8, #0xc
0082565c:  mov      w9, #0x6568
00825660:  sturb    wzr, [x29, #-0x29]
00825664:  movk     w9, #0x6769, lsl #16
00825668:  sturb    w8, [x29, #-0x30]
0082566c:  mov      w8, #0x7468
00825670:  stur     w9, [x27, #0x81]
00825674:  sturh    w8, [x27, #0x85]
00825678:  sub      x0, x29, #0x90
0082567c:  sub      x1, x29, #0x30
00825680:  bl       #0x817c7c
00825684:  ldurb    w8, [x29, #-0x30]
00825688:  mov      x21, x0
0082568c:  tbz      w8, #0, #0x825698
00825690:  ldur     x0, [x29, #-0x20]
00825694:  bl       #0x8ccfd0
00825698:  cbz      x21, #0x8256a8
0082569c:  add      x0, x21, #0x28
008256a0:  bl       #0x809024
008256a4:  str      s0, [sp, #0x15c]
008256a8:  adrp     x10, #0x36e000
008256ac:  add      x10, x10, #0x59
008256b0:  mov      w8, #0x22
008256b4:  ldr      q0, [x10]
008256b8:  mov      w9, #0x74
008256bc:  sturb    w8, [x29, #-0x30]
008256c0:  sturh    w9, [x27, #0x91]
008256c4:  stur     q0, [x27, #0x81]
008256c8:  sub      x0, x29, #0x90
008256cc:  sub      x1, x29, #0x30
008256d0:  bl       #0x817c7c
008256d4:  ldurb    w8, [x29, #-0x30]
008256d8:  mov      x21, x0
008256dc:  tbz      w8, #0, #0x8256e8
008256e0:  ldur     x0, [x29, #-0x20]
008256e4:  bl       #0x8ccfd0
008256e8:  cbz      x21, #0x82576c
008256ec:  sub      x8, x29, #0x30
008256f0:  add      x0, x21, #0x28
008256f4:  bl       #0x807a6c
008256f8:  ldp      x10, x20, [x29, #-0x28]
008256fc:  ldur     x8, [x27, #0x82]
00825700:  ldurb    w21, [x29, #-0x30]
00825704:  ldrb     w9, [sp, #0x178]
00825708:  ldurb    w22, [x29, #-0x2f]
0082570c:  stur     x8, [x29, #-0x40]
00825710:  stur     x10, [x27, #0x76]
00825714:  cbz      w9, #0x825748
00825718:  ldrb     w8, [sp, #0x160]
0082571c:  tbz      w8, #0, #0x825728
00825720:  ldr      x0, [sp, #0x170]
00825724:  bl       #0x8ccfd0
00825728:  ldur     x8, [x29, #-0x40]
0082572c:  ldur     x9, [x27, #0x76]
00825730:  add      x10, sp, #0xa8
00825734:  strb     w21, [sp, #0x160]
00825738:  strb     w22, [sp, #0x161]
0082573c:  stur     x8, [x10, #0xba]
00825740:  stp      x9, x20, [sp, #0x168]
00825744:  b        #0x82576c
00825748:  ldur     x8, [x29, #-0x40]
0082574c:  ldur     x9, [x27, #0x76]
00825750:  add      x10, sp, #0xa8
00825754:  strb     w21, [sp, #0x160]
00825758:  stur     x8, [x10, #0xba]
0082575c:  mov      w8, #1
00825760:  strb     w22, [sp, #0x161]
00825764:  stp      x9, x20, [sp, #0x168]
00825768:  strb     w8, [sp, #0x178]
0082576c:  adrp     x10, #0x365000
00825770:  add      x10, x10, #0x32
00825774:  mov      w9, #0x656d
00825778:  ldr      q0, [x10]
0082577c:  mov      w8, #0x26
00825780:  movk     w9, #0x746e, lsl #16
00825784:  sturb    w8, [x29, #-0x30]
00825788:  stur     w9, [x29, #-0x20]
0082578c:  stur     q0, [x27, #0x81]
00825790:  sturb    wzr, [x29, #-0x1c]
00825794:  sub      x0, x29, #0x90
00825798:  sub      x1, x29, #0x30
0082579c:  bl       #0x817c7c
008257a0:  ldurb    w8, [x29, #-0x30]
008257a4:  mov      x21, x0
008257a8:  tbz      w8, #0, #0x8257b4
008257ac:  ldur     x0, [x29, #-0x20]
008257b0:  bl       #0x8ccfd0
008257b4:  cbz      x21, #0x825810
008257b8:  sub      x8, x29, #0x30
008257bc:  add      x0, x21, #0x28
008257c0:  bl       #0x807a6c
008257c4:  ldp      x10, x20, [x29, #-0x28]
008257c8:  ldur     x8, [x27, #0x82]
008257cc:  ldurb    w21, [x29, #-0x30]
008257d0:  ldrb     w9, [sp, #0x198]
008257d4:  ldurb    w22, [x29, #-0x2f]
008257d8:  stur     x8, [x29, #-0x40]
008257dc:  stur     x10, [x27, #0x76]
008257e0:  cbz      w9, #0x825870
008257e4:  ldrb     w8, [sp, #0x180]
008257e8:  tbz      w8, #0, #0x8257f4
008257ec:  ldr      x0, [sp, #0x190]
008257f0:  bl       #0x8ccfd0
008257f4:  ldur     x8, [x29, #-0x40]
008257f8:  ldur     x9, [x27, #0x76]
008257fc:  add      x10, sp, #0xa8
00825800:  strb     w21, [sp, #0x180]
00825804:  strb     w22, [sp, #0x181]
00825808:  stur     x8, [x10, #0xda]
0082580c:  stp      x9, x20, [sp, #0x188]
00825810:  ldur     x21, [x29, #-0x80]
00825814:  cbz      x21, #0x82589c
00825818:  mov      w20, #-1
0082581c:  b        #0x825830
00825820:  mov      x0, x21
00825824:  bl       #0x8ccfd0
00825828:  mov      x21, x22
0082582c:  cbz      x22, #0x82589c
00825830:  ldr      w8, [x21, #0x58]
00825834:  ldr      x22, [x21]
00825838:  cmn      w8, #1
0082583c:  b.eq     #0x825858
00825840:  adrp     x9, #0x98c000
00825844:  add      x9, x9, #0x980
00825848:  ldr      x8, [x9, x8, lsl #3]
0082584c:  sub      x0, x29, #0x30
00825850:  add      x1, x21, #0x28
00825854:  blr      x8
00825858:  ldrb     w8, [x21, #0x10]
0082585c:  str      w20, [x21, #0x58]
00825860:  tbz      w8, #0, #0x825820
00825864:  ldr      x0, [x21, #0x20]
00825868:  bl       #0x8ccfd0
0082586c:  b        #0x825820
00825870:  ldur     x8, [x29, #-0x40]
00825874:  ldur     x9, [x27, #0x76]
00825878:  add      x10, sp, #0xa8
0082587c:  strb     w21, [sp, #0x180]
00825880:  stur     x8, [x10, #0xda]
00825884:  mov      w8, #1
00825888:  strb     w22, [sp, #0x181]
0082588c:  stp      x9, x20, [sp, #0x188]
00825890:  strb     w8, [sp, #0x198]
00825894:  ldur     x21, [x29, #-0x80]
00825898:  cbnz     x21, #0x825818
0082589c:  ldur     x0, [x29, #-0x90]
008258a0:  stur     xzr, [x29, #-0x90]
008258a4:  cbz      x0, #0x8258ac
008258a8:  bl       #0x8ccfd0
008258ac:  ldrb     w22, [sp, #0xe8]
008258b0:  add      x8, sp, #0xa8
008258b4:  cbz      w22, #0x8258e4
008258b8:  ldur     x9, [sp, #0xd2]
008258bc:  ldrb     w20, [sp, #0xd0]
008258c0:  ldrb     w3, [sp, #0xd1]
008258c4:  stur     x9, [x29, #-0x40]
008258c8:  ldp      x10, x9, [sp, #0xd8]
008258cc:  stp      xzr, xzr, [sp, #0xd0]
008258d0:  str      xzr, [sp, #0xe0]
008258d4:  str      x9, [sp, #0x38]
008258d8:  mov      w9, #1
008258dc:  stur     x10, [x27, #0x76]
008258e0:  b        #0x8258ec
008258e4:  mov      w20, wzr
008258e8:  mov      w9, wzr
008258ec:  ldur     q0, [x8, #0x48]
008258f0:  ldur     q1, [x8, #0x58]
008258f4:  ldur     q2, [x8, #0x68]
008258f8:  ldrb     w21, [sp, #0x148]
008258fc:  stur     q0, [x27, #0x27]
00825900:  ldur     q0, [x8, #0x74]
00825904:  stur     q1, [x27, #0x37]
00825908:  stur     q2, [x27, #0x47]
0082590c:  stur     q0, [x27, #0x53]
00825910:  cbz      w21, #0x825948
00825914:  add      x10, sp, #0xa8
00825918:  ldrb     w17, [sp, #0x131]
0082591c:  mov      w4, #1
00825920:  ldur     x10, [x10, #0x8a]
00825924:  stur     x10, [x29, #-0xa0]
00825928:  ldp      x11, x10, [sp, #0x138]
0082592c:  str      x10, [sp, #0x40]
00825930:  ldrb     w10, [sp, #0x130]
00825934:  stur     x11, [x27, #0x16]
00825938:  str      w10, [sp, #0x50]
0082593c:  stp      xzr, xzr, [x8, #0x90]
00825940:  stur     xzr, [x8, #0x88]
00825944:  b        #0x825950
00825948:  str      wzr, [sp, #0x50]
0082594c:  mov      w4, wzr
00825950:  ldur     q0, [x8, #0xa8]
00825954:  ldrb     w10, [sp, #0x178]
00825958:  stur     q0, [x27, #0x87]
0082595c:  str      w10, [sp, #0x30]
00825960:  cbz      w10, #0x825994
00825964:  add      x10, sp, #0xa8
00825968:  ldrb     w14, [sp, #0x160]
0082596c:  ldrb     w16, [sp, #0x161]
00825970:  ldur     x10, [x10, #0xba]
00825974:  mov      w2, #1
00825978:  stur     x10, [x29, #-0xb0]
0082597c:  ldp      x11, x10, [sp, #0x168]
00825980:  stp      xzr, xzr, [sp, #0x160]
00825984:  str      xzr, [sp, #0x170]
00825988:  str      x10, [sp, #0x18]
0082598c:  stur     x11, [x27, #6]
00825990:  b        #0x82599c
00825994:  mov      w14, wzr
00825998:  mov      w2, wzr
0082599c:  ldrb     w15, [sp, #0x198]
008259a0:  add      x10, x19, #0x300
008259a4:  stp      w22, w21, [sp, #0x24]
008259a8:  cbz      w15, #0x8259dc
008259ac:  add      x13, sp, #0xa8
008259b0:  ldp      x12, x0, [sp, #0x188]
008259b4:  ldur     x11, [x13, #0xda]
008259b8:  mov      w1, #1
008259bc:  stur     x11, [x29, #-0xc0]
008259c0:  ldrb     w11, [sp, #0x181]
008259c4:  stur     x12, [x13, #0xfe]
008259c8:  ldrb     w13, [sp, #0x180]
008259cc:  str      w11, [sp, #8]
008259d0:  stp      xzr, xzr, [x8, #0xe0]
008259d4:  stur     xzr, [x8, #0xd8]
008259d8:  b        #0x8259e4
008259dc:  mov      w13, wzr
008259e0:  mov      w1, wzr
008259e4:  ldur     q0, [sp, #0xa8]
008259e8:  ldur     q1, [sp, #0xb8]
008259ec:  ldrb     w11, [x19, #0x3f8]
008259f0:  ldr      x12, [sp, #0xc8]
008259f4:  stp      q0, q1, [x10]
008259f8:  str      x12, [x10, #0x20]
008259fc:  cbz      w11, #0x825a98
00825a00:  ldrb     w8, [x19, #0x340]
00825a04:  sub      x28, x29, #0x90
00825a08:  str      x0, [sp, #0x10]
00825a0c:  str      w13, [sp, #0xc]
00825a10:  cmp      w8, w9
00825a14:  b.ne     #0x825c08
00825a18:  cbz      w8, #0x825ce0
00825a1c:  ldrb     w8, [x19, #0x328]
00825a20:  tbz      w8, #0, #0x825a6c
00825a24:  ldr      x0, [x19, #0x338]
00825a28:  mov      w25, w14
00825a2c:  mov      w23, w15
00825a30:  mov      w26, w16
00825a34:  stp      w4, w17, [sp]
00825a38:  mov      w24, w1
00825a3c:  mov      w22, w2
00825a40:  mov      w21, w3
00825a44:  bl       #0x8ccfd0
00825a48:  ldp      w4, w17, [sp]
00825a4c:  ldr      w13, [sp, #0xc]
00825a50:  ldr      x0, [sp, #0x10]
00825a54:  mov      w3, w21
00825a58:  mov      w2, w22
00825a5c:  mov      w1, w24
00825a60:  mov      w16, w26
00825a64:  mov      w15, w23
00825a68:  mov      w14, w25
00825a6c:  ldur     x8, [x27, #0x76]
00825a70:  ldur     x9, [x29, #-0x40]
00825a74:  add      x10, x19, #0x32a
00825a78:  strb     w20, [x19, #0x328]
00825a7c:  mov      w20, wzr
00825a80:  str      x8, [x19, #0x330]
00825a84:  ldr      x8, [sp, #0x38]
00825a88:  strb     w3, [x19, #0x329]
00825a8c:  str      x9, [x10]
00825a90:  str      x8, [x19, #0x338]
00825a94:  b        #0x825ce0
00825a98:  ldr      w22, [sp, #0x24]
00825a9c:  strb     wzr, [x19, #0x328]
00825aa0:  strb     wzr, [x19, #0x340]
00825aa4:  cbz      w22, #0x825ae4
00825aa8:  ldur     x9, [x27, #0x76]
00825aac:  ldur     x10, [x29, #-0x40]
00825ab0:  add      x11, x19, #0x32a
00825ab4:  strb     w20, [x19, #0x328]
00825ab8:  mov      w20, wzr
00825abc:  str      x9, [x19, #0x330]
00825ac0:  ldr      x9, [sp, #0x38]
00825ac4:  strb     w3, [x19, #0x329]
00825ac8:  str      x9, [x19, #0x338]
00825acc:  mov      w9, #1
00825ad0:  str      x10, [x11]
00825ad4:  stur     xzr, [x29, #-0x40]
00825ad8:  stur     xzr, [x27, #0x76]
00825adc:  strb     w9, [x19, #0x340]
00825ae0:  str      xzr, [sp, #0x38]
00825ae4:  ldur     q0, [x8, #0x48]
00825ae8:  add      x9, x19, #0x300
00825aec:  ldr      w21, [sp, #0x28]
00825af0:  ldr      w24, [sp, #0x30]
00825af4:  ldr      x25, [sp, #0x18]
00825af8:  ldur     q1, [x8, #0x58]
00825afc:  ldur     q2, [x8, #0x68]
00825b00:  stur     q0, [x9, #0x48]
00825b04:  ldur     q0, [x8, #0x74]
00825b08:  stur     q1, [x9, #0x58]
00825b0c:  stur     q2, [x9, #0x68]
00825b10:  stur     q0, [x9, #0x74]
00825b14:  strb     wzr, [x19, #0x388]
00825b18:  strb     wzr, [x19, #0x3a0]
00825b1c:  cbz      w21, #0x825b60
00825b20:  ldr      w9, [sp, #0x50]
00825b24:  ldur     x10, [x29, #-0xa0]
00825b28:  add      x11, x19, #0x38a
00825b2c:  strb     w17, [x19, #0x389]
00825b30:  strb     w9, [x19, #0x388]
00825b34:  ldur     x9, [x27, #0x16]
00825b38:  stur     xzr, [x29, #-0xa0]
00825b3c:  str      x9, [x19, #0x390]
00825b40:  ldr      x9, [sp, #0x40]
00825b44:  str      x10, [x11]
00825b48:  str      x9, [x19, #0x398]
00825b4c:  mov      w9, #1
00825b50:  stur     xzr, [x27, #0x16]
00825b54:  strb     w9, [x19, #0x3a0]
00825b58:  str      wzr, [sp, #0x50]
00825b5c:  str      xzr, [sp, #0x40]
00825b60:  ldur     q0, [x8, #0xa8]
00825b64:  add      x8, x19, #0x3a8
00825b68:  strb     wzr, [x19, #0x3b8]
00825b6c:  strb     wzr, [x19, #0x3d0]
00825b70:  str      q0, [x8]
00825b74:  cbz      w24, #0x825bb0
00825b78:  ldur     x8, [x27, #6]
00825b7c:  ldur     x9, [x29, #-0xb0]
00825b80:  add      x10, x19, #0x3ba
00825b84:  strb     w14, [x19, #0x3b8]
00825b88:  mov      w14, wzr
00825b8c:  str      x8, [x19, #0x3c0]
00825b90:  mov      w8, #1
00825b94:  str      x25, [x19, #0x3c8]
00825b98:  mov      x25, xzr
00825b9c:  strb     w16, [x19, #0x3b9]
00825ba0:  str      x9, [x10]
00825ba4:  stur     xzr, [x29, #-0xb0]
00825ba8:  stur     xzr, [x27, #6]
00825bac:  strb     w8, [x19, #0x3d0]
00825bb0:  strb     wzr, [x19, #0x3d8]
00825bb4:  strb     wzr, [x19, #0x3f0]
00825bb8:  cbz      w15, #0x825bfc
00825bbc:  add      x11, sp, #0xa8
00825bc0:  ldr      w9, [sp, #8]
00825bc4:  strb     w13, [x19, #0x3d8]
00825bc8:  ldur     x8, [x11, #0xfe]
00825bcc:  add      x10, x19, #0x3da
00825bd0:  str      x0, [x19, #0x3e8]
00825bd4:  strb     w9, [x19, #0x3d9]
00825bd8:  ldur     x9, [x29, #-0xc0]
00825bdc:  mov      w13, wzr
00825be0:  str      x8, [x19, #0x3e0]
00825be4:  mov      w8, #1
00825be8:  mov      x0, xzr
00825bec:  str      x9, [x10]
00825bf0:  stur     xzr, [x29, #-0xc0]
00825bf4:  stur     xzr, [x11, #0xfe]
00825bf8:  strb     w8, [x19, #0x3f0]
00825bfc:  mov      w8, #1
00825c00:  strb     w8, [x19, #0x3f8]
00825c04:  b        #0x825fbc
00825c08:  cbz      w8, #0x825ca4
00825c0c:  ldrb     w8, [x19, #0x328]
00825c10:  tbz      w8, #0, #0x825c5c
00825c14:  ldr      x0, [x19, #0x338]
00825c18:  mov      w25, w14
00825c1c:  mov      w23, w15
00825c20:  mov      w26, w16
00825c24:  mov      w24, w17
00825c28:  mov      w21, w1
00825c2c:  str      w2, [sp, #4]
00825c30:  mov      w22, w4
00825c34:  bl       #0x8ccfd0
00825c38:  ldr      w2, [sp, #4]
00825c3c:  ldr      w13, [sp, #0xc]
00825c40:  mov      w4, w22
00825c44:  ldr      x0, [sp, #0x10]
00825c48:  mov      w1, w21
00825c4c:  mov      w17, w24
00825c50:  mov      w16, w26
00825c54:  mov      w15, w23
00825c58:  mov      w14, w25
00825c5c:  strb     wzr, [x19, #0x340]
00825c60:  b        #0x825ce0
00825c64:  add      x11, sp, #0xa8
00825c68:  ldr      w9, [sp, #8]
00825c6c:  add      x10, x19, #0x2da
00825c70:  ldur     x8, [x11, #0xfe]
00825c74:  strb     w13, [x19, #0x2d8]
00825c78:  strb     w9, [x19, #0x2d9]
00825c7c:  ldur     x9, [x29, #-0xc0]
00825c80:  str      x8, [x19, #0x2e0]
00825c84:  mov      w8, #1
00825c88:  str      x9, [x10]
00825c8c:  str      x0, [x19, #0x2e8]
00825c90:  stur     xzr, [x29, #-0xc0]
00825c94:  stur     xzr, [x11, #0xfe]
00825c98:  strb     w8, [x19, #0x2f0]
00825c9c:  cbnz     w24, #0x824a1c
00825ca0:  b        #0x824a28
00825ca4:  ldur     x8, [x27, #0x76]
00825ca8:  ldur     x9, [x29, #-0x40]
00825cac:  add      x10, x19, #0x32a
00825cb0:  strb     w20, [x19, #0x328]
00825cb4:  mov      w20, wzr
00825cb8:  str      x8, [x19, #0x330]
00825cbc:  ldr      x8, [sp, #0x38]
00825cc0:  strb     w3, [x19, #0x329]
00825cc4:  str      x8, [x19, #0x338]
00825cc8:  mov      w8, #1
00825ccc:  str      x9, [x10]
00825cd0:  stur     xzr, [x29, #-0x40]
00825cd4:  stur     xzr, [x27, #0x76]
00825cd8:  strb     w8, [x19, #0x340]
00825cdc:  str      xzr, [sp, #0x38]
00825ce0:  ldur     q0, [x28, #7]
00825ce4:  add      x9, x19, #0x300
00825ce8:  ldrb     w8, [x19, #0x3a0]
00825cec:  ldur     q1, [x28, #0x17]
00825cf0:  ldur     q2, [x28, #0x27]
00825cf4:  sub      x24, x29, #0x30
00825cf8:  stur     q0, [x9, #0x48]
00825cfc:  ldur     q0, [x28, #0x33]
00825d00:  cmp      w8, w4
00825d04:  stur     q1, [x9, #0x58]
00825d08:  stur     q2, [x9, #0x68]
00825d0c:  stur     q0, [x9, #0x74]
00825d10:  b.ne     #0x825d90
00825d14:  cbz      w8, #0x825e1c
00825d18:  ldrb     w8, [x19, #0x388]
00825d1c:  tbz      w8, #0, #0x825d60
00825d20:  ldr      x0, [x19, #0x398]
00825d24:  mov      w25, w14
00825d28:  mov      w23, w15
00825d2c:  mov      w26, w16
00825d30:  mov      w28, w17
00825d34:  mov      w21, w1
00825d38:  mov      w22, w2
00825d3c:  bl       #0x8ccfd0
00825d40:  ldr      w13, [sp, #0xc]
00825d44:  ldr      x0, [sp, #0x10]
00825d48:  mov      w2, w22
00825d4c:  mov      w1, w21
00825d50:  mov      w17, w28
00825d54:  mov      w16, w26
00825d58:  mov      w15, w23
00825d5c:  mov      w14, w25
00825d60:  ldr      w8, [sp, #0x50]
00825d64:  ldur     x9, [x29, #-0xa0]
00825d68:  add      x10, x19, #0x38a
00825d6c:  strb     w17, [x19, #0x389]
00825d70:  strb     w8, [x19, #0x388]
00825d74:  ldur     x8, [x27, #0x16]
00825d78:  str      wzr, [sp, #0x50]
00825d7c:  str      x8, [x19, #0x390]
00825d80:  ldr      x8, [sp, #0x40]
00825d84:  str      x9, [x10]
00825d88:  str      x8, [x19, #0x398]
00825d8c:  b        #0x825e1c
00825d90:  cbz      w8, #0x825ddc
00825d94:  ldrb     w8, [x19, #0x388]
00825d98:  tbz      w8, #0, #0x825dd4
00825d9c:  ldr      x0, [x19, #0x398]
00825da0:  mov      w25, w14
00825da4:  mov      w23, w15
00825da8:  mov      w26, w16
00825dac:  mov      w28, w1
00825db0:  mov      w21, w2
00825db4:  bl       #0x8ccfd0
00825db8:  ldr      w13, [sp, #0xc]
00825dbc:  ldr      x0, [sp, #0x10]
00825dc0:  mov      w2, w21
00825dc4:  mov      w1, w28
00825dc8:  mov      w16, w26
00825dcc:  mov      w15, w23
00825dd0:  mov      w14, w25
00825dd4:  strb     wzr, [x19, #0x3a0]
00825dd8:  b        #0x825e1c
00825ddc:  ldr      w8, [sp, #0x50]
00825de0:  ldur     x9, [x29, #-0xa0]
00825de4:  add      x10, x19, #0x38a
00825de8:  strb     w17, [x19, #0x389]
00825dec:  strb     w8, [x19, #0x388]
00825df0:  ldur     x8, [x27, #0x16]
00825df4:  stur     xzr, [x29, #-0xa0]
00825df8:  str      x8, [x19, #0x390]
00825dfc:  ldr      x8, [sp, #0x40]
00825e00:  str      x9, [x10]
00825e04:  str      x8, [x19, #0x398]
00825e08:  mov      w8, #1
00825e0c:  stur     xzr, [x27, #0x16]
00825e10:  strb     w8, [x19, #0x3a0]
00825e14:  str      wzr, [sp, #0x50]
00825e18:  str      xzr, [sp, #0x40]
00825e1c:  ldrb     w8, [x19, #0x3d0]
00825e20:  ldur     q0, [x24, #7]
00825e24:  add      x9, x19, #0x3a8
00825e28:  cmp      w8, w2
00825e2c:  str      q0, [x9]
00825e30:  b.ne     #0x825ea8
00825e34:  ldr      w24, [sp, #0x30]
00825e38:  ldr      x25, [sp, #0x18]
00825e3c:  cbz      w8, #0x825f24
00825e40:  ldrb     w8, [x19, #0x3b8]
00825e44:  tbz      w8, #0, #0x825e80
00825e48:  ldr      x0, [x19, #0x3c8]
00825e4c:  mov      w23, w14
00825e50:  mov      w26, w15
00825e54:  mov      w28, w16
00825e58:  mov      w21, w24
00825e5c:  mov      w24, w1
00825e60:  bl       #0x8ccfd0
00825e64:  ldr      w13, [sp, #0xc]
00825e68:  ldr      x0, [sp, #0x10]
00825e6c:  mov      w1, w24
00825e70:  mov      w24, w21
00825e74:  mov      w16, w28
00825e78:  mov      w15, w26
00825e7c:  mov      w14, w23
00825e80:  ldur     x8, [x27, #6]
00825e84:  ldur     x9, [x29, #-0xb0]
00825e88:  add      x10, x19, #0x3ba
00825e8c:  strb     w14, [x19, #0x3b8]
00825e90:  mov      w14, wzr
00825e94:  strb     w16, [x19, #0x3b9]
00825e98:  str      x8, [x19, #0x3c0]
00825e9c:  str      x9, [x10]
00825ea0:  str      x25, [x19, #0x3c8]
00825ea4:  b        #0x825f24
00825ea8:  ldr      w24, [sp, #0x30]
00825eac:  ldr      x25, [sp, #0x18]
00825eb0:  cbz      w8, #0x825eec
00825eb4:  ldrb     w8, [x19, #0x3b8]
00825eb8:  tbz      w8, #0, #0x825ee4
00825ebc:  ldr      x0, [x19, #0x3c8]
00825ec0:  mov      w23, w14
00825ec4:  mov      w26, w15
00825ec8:  mov      w21, w1
00825ecc:  bl       #0x8ccfd0
00825ed0:  ldr      w13, [sp, #0xc]
00825ed4:  ldr      x0, [sp, #0x10]
00825ed8:  mov      w1, w21
00825edc:  mov      w15, w26
00825ee0:  mov      w14, w23
00825ee4:  strb     wzr, [x19, #0x3d0]
00825ee8:  b        #0x825f24
00825eec:  ldur     x8, [x27, #6]
00825ef0:  ldur     x9, [x29, #-0xb0]
00825ef4:  add      x10, x19, #0x3ba
00825ef8:  strb     w14, [x19, #0x3b8]
00825efc:  mov      w14, wzr
00825f00:  str      x8, [x19, #0x3c0]
00825f04:  mov      w8, #1
00825f08:  str      x25, [x19, #0x3c8]
00825f0c:  mov      x25, xzr
00825f10:  strb     w16, [x19, #0x3b9]
00825f14:  str      x9, [x10]
00825f18:  stur     xzr, [x29, #-0xb0]
00825f1c:  stur     xzr, [x27, #6]
00825f20:  strb     w8, [x19, #0x3d0]
00825f24:  ldrb     w8, [x19, #0x3f0]
00825f28:  cmp      w8, w1
00825f2c:  b.ne     #0x825f88
00825f30:  ldp      w22, w21, [sp, #0x24]
00825f34:  cbz      w8, #0x825fbc
00825f38:  ldrb     w8, [x19, #0x3d8]
00825f3c:  tbz      w8, #0, #0x825f58
00825f40:  ldr      x0, [x19, #0x3e8]
00825f44:  mov      w23, w14
00825f48:  bl       #0x8ccfd0
00825f4c:  ldr      w13, [sp, #0xc]
00825f50:  ldr      x0, [sp, #0x10]
00825f54:  mov      w14, w23
00825f58:  ldr      w9, [sp, #8]
00825f5c:  add      x8, sp, #0xa8
00825f60:  add      x10, x19, #0x3da
00825f64:  ldur     x8, [x8, #0xfe]
00825f68:  strb     w13, [x19, #0x3d8]
00825f6c:  strb     w9, [x19, #0x3d9]
00825f70:  ldur     x9, [x29, #-0xc0]
00825f74:  str      x8, [x19, #0x3e0]
00825f78:  str      x9, [x10]
00825f7c:  str      x0, [x19, #0x3e8]
00825f80:  cbnz     w24, #0x825fd4
00825f84:  b        #0x825fe0
00825f88:  ldp      w22, w21, [sp, #0x24]
00825f8c:  cbz      w8, #0x82721c
00825f90:  ldrb     w8, [x19, #0x3d8]
00825f94:  tbz      w8, #0, #0x825fb8
00825f98:  ldr      x0, [x19, #0x3e8]
00825f9c:  mov      w23, w14
00825fa0:  mov      w26, w15
00825fa4:  bl       #0x8ccfd0
00825fa8:  ldr      w13, [sp, #0xc]
00825fac:  ldr      x0, [sp, #0x10]
00825fb0:  mov      w15, w26
00825fb4:  mov      w14, w23
00825fb8:  strb     wzr, [x19, #0x3f0]
00825fbc:  cbz      w15, #0x825fd0
00825fc0:  tbz      w13, #0, #0x825fd0
00825fc4:  mov      w23, w14
00825fc8:  bl       #0x8ccfd0
00825fcc:  mov      w14, w23
00825fd0:  cbz      w24, #0x825fe0
00825fd4:  tbz      w14, #0, #0x825fe0
00825fd8:  mov      x0, x25
00825fdc:  bl       #0x8ccfd0
00825fe0:  cbz      w21, #0x825ff4
00825fe4:  ldr      w8, [sp, #0x50]
00825fe8:  tbz      w8, #0, #0x825ff4
00825fec:  ldr      x0, [sp, #0x40]
00825ff0:  bl       #0x8ccfd0
00825ff4:  cbz      w22, #0x826004
00825ff8:  tbz      w20, #0, #0x826004
00825ffc:  ldr      x0, [sp, #0x38]
00826000:  bl       #0x8ccfd0
00826004:  ldrb     w8, [sp, #0x198]
00826008:  cbz      w8, #0x82601c
0082600c:  ldrb     w8, [sp, #0x180]
00826010:  tbz      w8, #0, #0x82601c
00826014:  ldr      x0, [sp, #0x190]
00826018:  bl       #0x8ccfd0
0082601c:  ldrb     w8, [sp, #0x178]
00826020:  cbz      w8, #0x826034
00826024:  ldrb     w8, [sp, #0x160]
00826028:  tbz      w8, #0, #0x826034
0082602c:  ldr      x0, [sp, #0x170]
00826030:  bl       #0x8ccfd0
00826034:  ldrb     w8, [sp, #0x148]
00826038:  cbz      w8, #0x82604c
0082603c:  ldrb     w8, [sp, #0x130]
00826040:  tbz      w8, #0, #0x82604c
00826044:  ldr      x0, [sp, #0x140]
00826048:  bl       #0x8ccfd0
0082604c:  ldrb     w8, [sp, #0xe8]
00826050:  cbz      w8, #0x826064
00826054:  ldrb     w8, [sp, #0xd0]
00826058:  tbz      w8, #0, #0x826064
0082605c:  ldr      x0, [sp, #0xe0]
00826060:  bl       #0x8ccfd0
00826064:  adrp     x9, #0x36c000
00826068:  add      x9, x9, #0x32
0082606c:  mov      w8, #0x24
00826070:  ldr      q0, [x9]
00826074:  mov      w10, #0x746e
00826078:  strb     w8, [sp, #0xa8]
0082607c:  sturh    w10, [sp, #0xb9]
00826080:  stur     q0, [sp, #0xa9]
00826084:  strb     wzr, [sp, #0xbb]
00826088:  add      x0, sp, #0x80
0082608c:  add      x1, sp, #0xa8
00826090:  bl       #0x817c7c
00826094:  ldrb     w8, [sp, #0xa8]
00826098:  mov      x21, x0
0082609c:  tbz      w8, #0, #0x8260a8
008260a0:  ldr      x0, [sp, #0xb8]
008260a4:  bl       #0x8ccfd0
008260a8:  cbz      x21, #0x82761c
008260ac:  strb     wzr, [sp, #0x10c]
008260b0:  strb     wzr, [sp, #0x110]
008260b4:  strb     wzr, [sp, #0x114]
008260b8:  strb     wzr, [sp, #0x130]
008260bc:  strb     wzr, [sp, #0x148]
008260c0:  strb     wzr, [sp, #0x178]
008260c4:  strb     wzr, [sp, #0x180]
008260c8:  strb     wzr, [sp, #0x198]
008260cc:  strb     wzr, [sp, #0x108]
008260d0:  stp      xzr, xzr, [sp, #0x118]
008260d4:  str      wzr, [sp, #0x128]
008260d8:  stp      xzr, xzr, [sp, #0x150]
008260dc:  strb     wzr, [sp, #0x160]
008260e0:  stp      xzr, xzr, [sp, #0xf8]
008260e4:  ldr      w8, [x21, #0x58]
008260e8:  strb     wzr, [sp, #0xc0]
008260ec:  strb     wzr, [sp, #0xc4]
008260f0:  cmp      w8, #1
008260f4:  strb     wzr, [sp, #0xe8]
008260f8:  strb     wzr, [sp, #0xf0]
008260fc:  strb     wzr, [sp, #0xf4]
00826100:  stp      xzr, xzr, [sp, #0xa8]
00826104:  stur     xzr, [sp, #0xb5]
00826108:  str      xzr, [sp, #0xc8]
0082610c:  strb     wzr, [sp, #0xd0]
00826110:  b.eq     #0x82612c
00826114:  cbnz     w8, #0x82b068
00826118:  sub      x8, x29, #0x90
0082611c:  add      x0, x21, #0x28
00826120:  mov      x1, xzr
00826124:  bl       #0x8118bc
00826128:  b        #0x826140
0082612c:  ldr      x0, [x21, #0x28]
00826130:  sub      x8, x29, #0x90
00826134:  add      x1, x21, #0x30
00826138:  mov      x2, xzr
0082613c:  bl       #0x811aa8
00826140:  adrp     x10, #0x370000
00826144:  add      x10, x10, #0xad5
00826148:  mov      w9, #0x6964
0082614c:  ldr      x10, [x10]
00826150:  mov      w8, #0x18
00826154:  movk     w9, #0x7375, lsl #16
00826158:  sturb    w8, [x29, #-0x30]
0082615c:  stur     w9, [x27, #0x89]
00826160:  stur     x10, [x27, #0x81]
00826164:  sturb    wzr, [x29, #-0x23]
00826168:  sub      x0, x29, #0x90
0082616c:  sub      x1, x29, #0x30
00826170:  bl       #0x817c7c
00826174:  ldurb    w8, [x29, #-0x30]
00826178:  mov      x21, x0
0082617c:  tbz      w8, #0, #0x826188
00826180:  ldur     x0, [x29, #-0x20]
00826184:  bl       #0x8ccfd0
00826188:  cbz      x21, #0x826198
0082618c:  add      x0, x21, #0x28
00826190:  bl       #0x809024
00826194:  str      s0, [sp, #0xa8]
00826198:  adrp     x10, #0x36e000
0082619c:  add      x10, x10, #0x6cb
008261a0:  mov      w9, #0x6964
008261a4:  ldr      q0, [x10]
008261a8:  mov      w8, #0x26
008261ac:  movk     w9, #0x7375, lsl #16
008261b0:  sturb    w8, [x29, #-0x30]
008261b4:  stur     w9, [x29, #-0x20]
008261b8:  stur     q0, [x27, #0x81]
008261bc:  sturb    wzr, [x29, #-0x1c]
008261c0:  sub      x0, x29, #0x90
008261c4:  sub      x1, x29, #0x30
008261c8:  bl       #0x817c7c
008261cc:  ldurb    w8, [x29, #-0x30]
008261d0:  mov      x21, x0
008261d4:  tbz      w8, #0, #0x8261e0
008261d8:  ldur     x0, [x29, #-0x20]
008261dc:  bl       #0x8ccfd0
008261e0:  cbz      x21, #0x8261f0
008261e4:  add      x0, x21, #0x28
008261e8:  bl       #0x809024
008261ec:  str      s0, [sp, #0xac]
008261f0:  adrp     x10, #0x36a000
008261f4:  add      x10, x10, #0xe62
008261f8:  mov      w9, #0x6964
008261fc:  ldr      q0, [x10]
00826200:  mov      w8, #0x28
00826204:  movk     w9, #0x7375, lsl #16
00826208:  sturb    w8, [x29, #-0x30]
0082620c:  stur     w9, [x27, #0x91]
00826210:  stur     q0, [x27, #0x81]
00826214:  sturb    wzr, [x29, #-0x1b]
00826218:  sub      x0, x29, #0x90
0082621c:  sub      x1, x29, #0x30
00826220:  bl       #0x817c7c
00826224:  ldurb    w8, [x29, #-0x30]
00826228:  mov      x21, x0
0082622c:  tbz      w8, #0, #0x826238
00826230:  ldur     x0, [x29, #-0x20]
00826234:  bl       #0x8ccfd0
00826238:  cbz      x21, #0x826248
0082623c:  add      x0, x21, #0x28
00826240:  bl       #0x809024
00826244:  str      s0, [sp, #0xb0]
00826248:  adrp     x9, #0x36e000
0082624c:  add      x9, x9, #0x42
00826250:  mov      w8, #0x2c
00826254:  ldr      q0, [x9]
00826258:  ldur     x9, [x9, #0xe]
0082625c:  sturb    w8, [x29, #-0x30]
00826260:  sturb    wzr, [x29, #-0x19]
00826264:  stur     q0, [x27, #0x81]
00826268:  stur     x9, [x27, #0x8f]
0082626c:  sub      x0, x29, #0x90
00826270:  sub      x1, x29, #0x30
00826274:  bl       #0x817c7c
00826278:  ldurb    w8, [x29, #-0x30]
0082627c:  mov      x21, x0
00826280:  tbz      w8, #0, #0x82628c
00826284:  ldur     x0, [x29, #-0x20]
00826288:  bl       #0x8ccfd0
0082628c:  cbz      x21, #0x82629c
00826290:  add      x0, x21, #0x28
00826294:  bl       #0x809024
00826298:  str      s0, [sp, #0xb4]
0082629c:  mov      w0, #0x20
008262a0:  bl       #0x8ccfa0
008262a4:  adrp     x8, #0x372000
008262a8:  stur     x0, [x29, #-0x20]
008262ac:  ldr      q0, [x8, #0xd20]
008262b0:  adrp     x8, #0x36c000
008262b4:  add      x8, x8, #0x45
008262b8:  ldr      q1, [x8]
008262bc:  ldur     x8, [x8, #0xf]
008262c0:  strb     wzr, [x0, #0x17]
008262c4:  stur     q0, [x29, #-0x30]
008262c8:  str      q1, [x0]
008262cc:  stur     x8, [x0, #0xf]
008262d0:  sub      x0, x29, #0x90
008262d4:  sub      x1, x29, #0x30
008262d8:  bl       #0x817c7c
008262dc:  ldurb    w8, [x29, #-0x30]
008262e0:  mov      x21, x0
008262e4:  tbz      w8, #0, #0x8262f0
008262e8:  ldur     x0, [x29, #-0x20]
008262ec:  bl       #0x8ccfd0
008262f0:  cbz      x21, #0x826300
008262f4:  add      x0, x21, #0x28
008262f8:  bl       #0x809024
008262fc:  str      s0, [sp, #0xb8]
00826300:  mov      w8, #0xe
00826304:  mov      w9, #0x6964
00826308:  sturb    wzr, [x29, #-0x28]
0082630c:  sturb    w8, [x29, #-0x30]
00826310:  mov      w8, #0x6469
00826314:  movk     w9, #0x6976, lsl #16
00826318:  movk     w8, #0x7265, lsl #16
0082631c:  stur     w9, [x27, #0x81]
00826320:  stur     w8, [x29, #-0x2c]
00826324:  sub      x0, x29, #0x90
00826328:  sub      x1, x29, #0x30
0082632c:  bl       #0x817c7c
00826330:  ldurb    w8, [x29, #-0x30]
00826334:  mov      x21, x0
00826338:  tbz      w8, #0, #0x826344
0082633c:  ldur     x0, [x29, #-0x20]
00826340:  bl       #0x8ccfd0
00826344:  cbz      x21, #0x826384
00826348:  ldr      w8, [x21, #0x58]
0082634c:  cmp      w8, #1
00826350:  b.eq     #0x826374
00826354:  cbnz     w8, #0x82b1b8
00826358:  ldr      w1, [x21, #0x28]
0082635c:  cmp      w1, #2
00826360:  b.ne     #0x82b1d0
00826364:  ldrb     w8, [x21, #0x30]
00826368:  cmp      w8, #0
0082636c:  cset     w0, ne
00826370:  b        #0x82637c
00826374:  add      x0, x21, #0x30
00826378:  bl       #0x8cdb20
0082637c:  and      w8, w0, #1
00826380:  strb     w8, [sp, #0xbc]
00826384:  adrp     x10, #0x36f000
00826388:  add      x10, x10, #0x93e
0082638c:  mov      w9, #0x6c6f
00826390:  ldr      x10, [x10]
00826394:  mov      w8, #0x18
00826398:  movk     w9, #0x726f, lsl #16
0082639c:  sturb    w8, [x29, #-0x30]
008263a0:  stur     w9, [x27, #0x89]
008263a4:  stur     x10, [x27, #0x81]
008263a8:  sturb    wzr, [x29, #-0x23]
008263ac:  sub      x0, x29, #0x90
008263b0:  sub      x1, x29, #0x30
008263b4:  bl       #0x817c7c
008263b8:  ldurb    w8, [x29, #-0x30]
008263bc:  mov      x21, x0
008263c0:  tbz      w8, #0, #0x8263cc
008263c4:  ldur     x0, [x29, #-0x20]
008263c8:  bl       #0x8ccfd0
008263cc:  cbz      x21, #0x826404
008263d0:  ldr      x8, [sp, #0x70]
008263d4:  stur     wzr, [x29, #-0x30]
008263d8:  ldr      x0, [x8, #8]
008263dc:  ldr      w1, [x8]
008263e0:  adrp     x4, #0x99e000
008263e4:  add      x2, x21, #0x28
008263e8:  sub      x3, x29, #0x30
008263ec:  ldr      x4, [x4, #0x140]
008263f0:  bl       #0x807f90
008263f4:  ldur     w8, [x29, #-0x30]
008263f8:  mov      w9, #1
008263fc:  strb     w9, [sp, #0xc4]
00826400:  str      w8, [sp, #0xc0]
00826404:  adrp     x10, #0x367000
00826408:  add      x10, x10, #0xa0f
0082640c:  mov      w8, #0x24
00826410:  ldr      q0, [x10]
00826414:  mov      w9, #0x7466
00826418:  sturb    w8, [x29, #-0x30]
0082641c:  sturh    w9, [x27, #0x91]
00826420:  stur     q0, [x27, #0x81]
00826424:  sturb    wzr, [x29, #-0x1d]
00826428:  sub      x0, x29, #0x90
0082642c:  sub      x1, x29, #0x30
00826430:  bl       #0x817c7c
00826434:  ldurb    w8, [x29, #-0x30]
00826438:  mov      x21, x0
0082643c:  tbz      w8, #0, #0x826448
00826440:  ldur     x0, [x29, #-0x20]
00826444:  bl       #0x8ccfd0
00826448:  cbz      x21, #0x826458
0082644c:  add      x0, x21, #0x28
00826450:  bl       #0x809024
00826454:  str      s0, [sp, #0xc8]
00826458:  adrp     x10, #0x36a000
0082645c:  add      x10, x10, #0x836
00826460:  mov      w9, #0x6769
00826464:  ldr      q0, [x10]
00826468:  mov      w8, #0x26
0082646c:  movk     w9, #0x7468, lsl #16
00826470:  sturb    w8, [x29, #-0x30]
00826474:  stur     w9, [x29, #-0x20]
00826478:  stur     q0, [x27, #0x81]
0082647c:  sturb    wzr, [x29, #-0x1c]
00826480:  sub      x0, x29, #0x90
00826484:  sub      x1, x29, #0x30
00826488:  bl       #0x817c7c
0082648c:  ldurb    w8, [x29, #-0x30]
00826490:  mov      x21, x0
00826494:  tbz      w8, #0, #0x8264a0
00826498:  ldur     x0, [x29, #-0x20]
0082649c:  bl       #0x8ccfd0
008264a0:  cbz      x21, #0x8264b0
008264a4:  add      x0, x21, #0x28
008264a8:  bl       #0x809024
008264ac:  str      s0, [sp, #0xcc]
008264b0:  adrp     x9, #0x36c000
008264b4:  add      x9, x9, #0x4b4
008264b8:  mov      w8, #0x20
008264bc:  ldr      q0, [x9]
008264c0:  sturb    w8, [x29, #-0x30]
008264c4:  sturb    wzr, [x29, #-0x1f]
008264c8:  stur     q0, [x27, #0x81]
008264cc:  sub      x0, x29, #0x90
008264d0:  sub      x1, x29, #0x30
008264d4:  bl       #0x817c7c
008264d8:  ldurb    w8, [x29, #-0x30]
008264dc:  mov      x21, x0
008264e0:  tbz      w8, #0, #0x8264ec
008264e4:  ldur     x0, [x29, #-0x20]
008264e8:  bl       #0x8ccfd0
008264ec:  cbz      x21, #0x826568
008264f0:  sub      x8, x29, #0x30
008264f4:  add      x0, x21, #0x28
008264f8:  bl       #0x807a6c
008264fc:  ldp      x10, x20, [x29, #-0x28]
00826500:  ldur     x8, [x27, #0x82]
00826504:  ldurb    w21, [x29, #-0x30]
00826508:  ldrb     w9, [sp, #0xe8]
0082650c:  ldurb    w22, [x29, #-0x2f]
00826510:  stur     x8, [x29, #-0x40]
00826514:  stur     x10, [x27, #0x76]
00826518:  cbz      w9, #0x826548
0082651c:  ldrb     w8, [sp, #0xd0]
00826520:  tbz      w8, #0, #0x82652c
00826524:  ldr      x0, [sp, #0xe0]
00826528:  bl       #0x8ccfd0
0082652c:  ldur     x8, [x29, #-0x40]
00826530:  ldur     x9, [x27, #0x76]
00826534:  strb     w21, [sp, #0xd0]
00826538:  strb     w22, [sp, #0xd1]
0082653c:  stur     x8, [sp, #0xd2]
00826540:  stp      x9, x20, [sp, #0xd8]
00826544:  b        #0x826568
00826548:  ldur     x8, [x29, #-0x40]
0082654c:  ldur     x9, [x27, #0x76]
00826550:  strb     w21, [sp, #0xd0]
00826554:  strb     w22, [sp, #0xd1]
00826558:  stur     x8, [sp, #0xd2]
0082655c:  mov      w8, #1
00826560:  stp      x9, x20, [sp, #0xd8]
00826564:  strb     w8, [sp, #0xe8]
00826568:  adrp     x9, #0x36a000
0082656c:  add      x9, x9, #0x84a
00826570:  mov      w8, #0x2a
00826574:  ldr      q0, [x9]
00826578:  ldur     x9, [x9, #0xd]
0082657c:  sturb    w8, [x29, #-0x30]
00826580:  sturb    wzr, [x29, #-0x1a]
00826584:  stur     q0, [x27, #0x81]
00826588:  stur     x9, [x27, #0x8e]
0082658c:  sub      x0, x29, #0x90
00826590:  sub      x1, x29, #0x30
00826594:  bl       #0x817c7c
00826598:  ldurb    w8, [x29, #-0x30]
0082659c:  mov      x21, x0
008265a0:  tbz      w8, #0, #0x8265ac
008265a4:  ldur     x0, [x29, #-0x20]
008265a8:  bl       #0x8ccfd0
008265ac:  cbz      x21, #0x8265e4
008265b0:  ldr      x8, [sp, #0x70]
008265b4:  stur     wzr, [x29, #-0x30]
008265b8:  ldr      x0, [x8, #8]
008265bc:  ldr      w1, [x8]
008265c0:  adrp     x4, #0x99e000
008265c4:  add      x2, x21, #0x28
008265c8:  sub      x3, x29, #0x30
008265cc:  ldr      x4, [x4, #0x140]
008265d0:  bl       #0x807f90
008265d4:  ldur     w8, [x29, #-0x30]
008265d8:  mov      w9, #1
008265dc:  strb     w9, [sp, #0xf4]
008265e0:  str      w8, [sp, #0xf0]
008265e4:  adrp     x9, #0x36d000
008265e8:  add      x9, x9, #0x9e1
008265ec:  mov      w8, #0x2a
008265f0:  ldr      q0, [x9]
008265f4:  ldur     x9, [x9, #0xd]
008265f8:  sturb    w8, [x29, #-0x30]
008265fc:  sturb    wzr, [x29, #-0x1a]
00826600:  stur     q0, [x27, #0x81]
00826604:  stur     x9, [x27, #0x8e]
00826608:  sub      x0, x29, #0x90
0082660c:  sub      x1, x29, #0x30
00826610:  bl       #0x817c7c
00826614:  ldurb    w8, [x29, #-0x30]
00826618:  mov      x21, x0
0082661c:  tbz      w8, #0, #0x826628
00826620:  ldur     x0, [x29, #-0x20]
00826624:  bl       #0x8ccfd0
00826628:  cbz      x21, #0x826638
0082662c:  add      x0, x21, #0x28
00826630:  bl       #0x8161a0
00826634:  str      w0, [sp, #0xf8]
00826638:  adrp     x10, #0x36a000
0082663c:  add      x10, x10, #0xe77
00826640:  mov      w9, #0x4765
00826644:  ldr      q0, [x10]
00826648:  mov      w8, #0x26
0082664c:  movk     w9, #0x7061, lsl #16
00826650:  sturb    w8, [x29, #-0x30]
00826654:  stur     w9, [x29, #-0x20]
00826658:  stur     q0, [x27, #0x81]
0082665c:  sturb    wzr, [x29, #-0x1c]
00826660:  sub      x0, x29, #0x90
00826664:  sub      x1, x29, #0x30
00826668:  bl       #0x817c7c
0082666c:  ldurb    w8, [x29, #-0x30]
00826670:  mov      x21, x0
00826674:  tbz      w8, #0, #0x826680
00826678:  ldur     x0, [x29, #-0x20]
0082667c:  bl       #0x8ccfd0
00826680:  cbz      x21, #0x826690
00826684:  add      x0, x21, #0x28
00826688:  bl       #0x809024
0082668c:  str      s0, [sp, #0xfc]
00826690:  mov      w0, #0x30
00826694:  bl       #0x8ccfa0
00826698:  adrp     x8, #0x373000
0082669c:  stur     x0, [x29, #-0x20]
008266a0:  ldr      q2, [x8, #0x40]
008266a4:  mov      w8, #0x6c
008266a8:  strh     w8, [x0, #0x20]
008266ac:  adrp     x8, #0x369000
008266b0:  add      x8, x8, #0x87b
008266b4:  ldp      q0, q1, [x8]
008266b8:  str      q2, [sp, #0x50]
008266bc:  stur     q2, [x29, #-0x30]
008266c0:  stp      q0, q1, [x0]
008266c4:  sub      x0, x29, #0x90
008266c8:  sub      x1, x29, #0x30
008266cc:  bl       #0x817c7c
008266d0:  ldurb    w8, [x29, #-0x30]
008266d4:  mov      x21, x0
008266d8:  tbz      w8, #0, #0x8266e4
008266dc:  ldur     x0, [x29, #-0x20]
008266e0:  bl       #0x8ccfd0
008266e4:  cbz      x21, #0x8266f4
008266e8:  add      x0, x21, #0x28
008266ec:  bl       #0x809024
008266f0:  str      s0, [sp, #0x100]
008266f4:  mov      w0, #0x20
008266f8:  bl       #0x8ccfa0
008266fc:  adrp     x8, #0x372000
00826700:  stur     x0, [x29, #-0x20]
00826704:  ldr      q0, [x8, #0x250]
00826708:  adrp     x8, #0x36a000
0082670c:  add      x8, x8, #0x258
00826710:  ldr      q1, [x8]
00826714:  ldur     q2, [x8, #0xf]
00826718:  strb     wzr, [x0, #0x1f]
0082671c:  stur     q0, [x29, #-0x30]
00826720:  str      q1, [x0]
00826724:  stur     q2, [x0, #0xf]
00826728:  sub      x0, x29, #0x90
0082672c:  sub      x1, x29, #0x30
00826730:  bl       #0x817c7c
00826734:  ldurb    w8, [x29, #-0x30]
00826738:  mov      x21, x0
0082673c:  tbz      w8, #0, #0x826748
00826740:  ldur     x0, [x29, #-0x20]
00826744:  bl       #0x8ccfd0
00826748:  cbz      x21, #0x826758
0082674c:  add      x0, x21, #0x28
00826750:  bl       #0x809024
00826754:  str      s0, [sp, #0x104]
00826758:  mov      w0, #0x20
0082675c:  bl       #0x8ccfa0
00826760:  adrp     x8, #0x371000
00826764:  stur     x0, [x29, #-0x20]
00826768:  ldr      q0, [x8, #0x7a0]
0082676c:  adrp     x8, #0x370000
00826770:  add      x8, x8, #0x665
00826774:  ldr      q1, [x8]
00826778:  ldur     q2, [x8, #0xe]
0082677c:  strb     wzr, [x0, #0x1e]
00826780:  stur     q0, [x29, #-0x30]
00826784:  str      q1, [x0]
00826788:  stur     q2, [x0, #0xe]
0082678c:  sub      x0, x29, #0x90
00826790:  sub      x1, x29, #0x30
00826794:  bl       #0x817c7c
00826798:  ldurb    w8, [x29, #-0x30]
0082679c:  mov      x21, x0
008267a0:  tbz      w8, #0, #0x8267ac
008267a4:  ldur     x0, [x29, #-0x20]
008267a8:  bl       #0x8ccfd0
008267ac:  cbz      x21, #0x8267e4
008267b0:  ldr      x8, [sp, #0x70]
008267b4:  stur     wzr, [x29, #-0x30]
008267b8:  ldr      x0, [x8, #8]
008267bc:  ldr      w1, [x8]
008267c0:  adrp     x4, #0x99e000
008267c4:  add      x2, x21, #0x28
008267c8:  sub      x3, x29, #0x30
008267cc:  ldr      x4, [x4, #0x140]
008267d0:  bl       #0x807f90
008267d4:  ldur     w8, [x29, #-0x30]
008267d8:  mov      w9, #1
008267dc:  strb     w9, [sp, #0x10c]
008267e0:  str      w8, [sp, #0x108]
008267e4:  adrp     x10, #0x368000
008267e8:  add      x10, x10, #0xd84
008267ec:  mov      w9, #0x6c6f
008267f0:  ldr      q0, [x10]
008267f4:  mov      w8, #0x28
008267f8:  movk     w9, #0x726f, lsl #16
008267fc:  sturb    w8, [x29, #-0x30]
00826800:  stur     w9, [x27, #0x91]
00826804:  stur     q0, [x27, #0x81]
00826808:  sturb    wzr, [x29, #-0x1b]
0082680c:  sub      x0, x29, #0x90
00826810:  sub      x1, x29, #0x30
00826814:  bl       #0x817c7c
00826818:  ldurb    w8, [x29, #-0x30]
0082681c:  mov      x21, x0
00826820:  tbz      w8, #0, #0x82682c
00826824:  ldur     x0, [x29, #-0x20]
00826828:  bl       #0x8ccfd0
0082682c:  cbz      x21, #0x826864
00826830:  ldr      x8, [sp, #0x70]
00826834:  stur     wzr, [x29, #-0x30]
00826838:  ldr      x0, [x8, #8]
0082683c:  ldr      w1, [x8]
00826840:  adrp     x4, #0x99e000
00826844:  add      x2, x21, #0x28
00826848:  sub      x3, x29, #0x30
0082684c:  ldr      x4, [x4, #0x140]
00826850:  bl       #0x807f90
00826854:  ldur     w8, [x29, #-0x30]
00826858:  mov      w9, #1
0082685c:  strb     w9, [sp, #0x114]
00826860:  str      w8, [sp, #0x110]
00826864:  mov      w0, #0x20
00826868:  bl       #0x8ccfa0
0082686c:  adrp     x8, #0x371000
00826870:  stur     x0, [x29, #-0x20]
00826874:  ldr      q0, [x8, #0xb20]
00826878:  adrp     x8, #0x369000
0082687c:  add      x8, x8, #0x3df
00826880:  ldr      q1, [x8]
00826884:  ldur     q2, [x8, #0xb]
00826888:  strb     wzr, [x0, #0x1b]
0082688c:  stur     q0, [x29, #-0x30]
00826890:  str      q1, [x0]
00826894:  stur     q2, [x0, #0xb]
00826898:  sub      x0, x29, #0x90
0082689c:  sub      x1, x29, #0x30
008268a0:  bl       #0x817c7c
008268a4:  ldurb    w8, [x29, #-0x30]
008268a8:  mov      x21, x0
008268ac:  tbz      w8, #0, #0x8268b8
008268b0:  ldur     x0, [x29, #-0x20]
008268b4:  bl       #0x8ccfd0
008268b8:  cbz      x21, #0x8268c8
008268bc:  add      x0, x21, #0x28
008268c0:  bl       #0x809024
008268c4:  str      s0, [sp, #0x118]
008268c8:  mov      w0, #0x30
008268cc:  bl       #0x8ccfa0
008268d0:  adrp     x8, #0x371000
008268d4:  stur     x0, [x29, #-0x20]
008268d8:  ldr      q0, [x8, #0x9d0]
008268dc:  adrp     x8, #0x370000
008268e0:  add      x8, x8, #0xae2
008268e4:  ldp      q1, q2, [x8]
008268e8:  ldur     x8, [x8, #0x1d]
008268ec:  stur     q0, [x29, #-0x30]
008268f0:  strb     wzr, [x0, #0x25]
008268f4:  stp      q1, q2, [x0]
008268f8:  stur     x8, [x0, #0x1d]
008268fc:  sub      x0, x29, #0x90
00826900:  sub      x1, x29, #0x30
00826904:  bl       #0x817c7c
00826908:  ldurb    w8, [x29, #-0x30]
0082690c:  mov      x21, x0
00826910:  tbz      w8, #0, #0x82691c
00826914:  ldur     x0, [x29, #-0x20]
00826918:  bl       #0x8ccfd0
0082691c:  cbz      x21, #0x82692c
00826920:  add      x0, x21, #0x28
00826924:  bl       #0x809024
00826928:  str      s0, [sp, #0x11c]
0082692c:  mov      w0, #0x20
00826930:  bl       #0x8ccfa0
00826934:  adrp     x8, #0x371000
00826938:  stur     x0, [x29, #-0x20]
0082693c:  ldr      q1, [x8, #0x460]
00826940:  adrp     x8, #0x36f000
00826944:  add      x8, x8, #0x94b
00826948:  ldr      q0, [x8]
0082694c:  ldr      x8, [x8, #0x10]
00826950:  strb     wzr, [x0, #0x18]
00826954:  str      q1, [sp, #0x40]
00826958:  stur     q1, [x29, #-0x30]
0082695c:  str      q0, [x0]
00826960:  str      x8, [x0, #0x10]
00826964:  sub      x0, x29, #0x90
00826968:  sub      x1, x29, #0x30
0082696c:  bl       #0x817c7c
00826970:  ldurb    w8, [x29, #-0x30]
00826974:  mov      x21, x0
00826978:  tbz      w8, #0, #0x826984
0082697c:  ldur     x0, [x29, #-0x20]
00826980:  bl       #0x8ccfd0
00826984:  cbz      x21, #0x826994
00826988:  add      x0, x21, #0x28
0082698c:  bl       #0x809024
00826990:  str      s0, [sp, #0x120]
00826994:  mov      w0, #0x30
00826998:  bl       #0x8ccfa0
0082699c:  ldr      q0, [sp, #0x50]
008269a0:  adrp     x9, #0x36c000
008269a4:  add      x9, x9, #0x4c5
008269a8:  mov      w8, #0x65
008269ac:  stur     x0, [x29, #-0x20]
008269b0:  stur     q0, [x29, #-0x30]
008269b4:  ldp      q0, q1, [x9]
008269b8:  strh     w8, [x0, #0x20]
008269bc:  stp      q0, q1, [x0]
008269c0:  sub      x0, x29, #0x90
008269c4:  sub      x1, x29, #0x30
008269c8:  bl       #0x817c7c
008269cc:  ldurb    w8, [x29, #-0x30]
008269d0:  mov      x21, x0
008269d4:  tbz      w8, #0, #0x8269e0
008269d8:  ldur     x0, [x29, #-0x20]
008269dc:  bl       #0x8ccfd0
008269e0:  cbz      x21, #0x8269f0
008269e4:  add      x0, x21, #0x28
008269e8:  bl       #0x809024
008269ec:  str      s0, [sp, #0x124]
008269f0:  adrp     x9, #0x365000
008269f4:  add      x9, x9, #0xd68
008269f8:  mov      w8, #0x2c
008269fc:  ldr      q0, [x9]
00826a00:  ldur     x9, [x9, #0xe]
00826a04:  sturb    w8, [x29, #-0x30]
00826a08:  sturb    wzr, [x29, #-0x19]
00826a0c:  stur     q0, [x27, #0x81]
00826a10:  stur     x9, [x27, #0x8f]
00826a14:  sub      x0, x29, #0x90
00826a18:  sub      x1, x29, #0x30
00826a1c:  bl       #0x817c7c
00826a20:  ldurb    w8, [x29, #-0x30]
00826a24:  mov      x21, x0
00826a28:  tbz      w8, #0, #0x826a34
00826a2c:  ldur     x0, [x29, #-0x20]
00826a30:  bl       #0x8ccfd0
00826a34:  cbz      x21, #0x826a44
00826a38:  add      x0, x21, #0x28
00826a3c:  bl       #0x809024
00826a40:  str      s0, [sp, #0x128]
00826a44:  adrp     x10, #0x36c000
00826a48:  add      x10, x10, #0x4e7
00826a4c:  mov      w9, #0x6168
00826a50:  ldr      q0, [x10]
00826a54:  mov      w8, #0x28
00826a58:  movk     w9, #0x6570, lsl #16
00826a5c:  sturb    w8, [x29, #-0x30]
00826a60:  stur     w9, [x27, #0x91]
00826a64:  stur     q0, [x27, #0x81]
00826a68:  sturb    wzr, [x29, #-0x1b]
00826a6c:  sub      x0, x29, #0x90
00826a70:  sub      x1, x29, #0x30
00826a74:  bl       #0x817c7c
00826a78:  ldurb    w8, [x29, #-0x30]
00826a7c:  mov      x21, x0
00826a80:  tbz      w8, #0, #0x826a8c
00826a84:  ldur     x0, [x29, #-0x20]
00826a88:  bl       #0x8ccfd0
00826a8c:  cbz      x21, #0x826b10
00826a90:  sub      x8, x29, #0x30
00826a94:  add      x0, x21, #0x28
00826a98:  bl       #0x807a6c
00826a9c:  ldp      x10, x20, [x29, #-0x28]
00826aa0:  ldur     x8, [x27, #0x82]
00826aa4:  ldurb    w21, [x29, #-0x30]
00826aa8:  ldrb     w9, [sp, #0x148]
00826aac:  ldurb    w22, [x29, #-0x2f]
00826ab0:  stur     x8, [x29, #-0x40]
00826ab4:  stur     x10, [x27, #0x76]
00826ab8:  cbz      w9, #0x826aec
00826abc:  ldrb     w8, [sp, #0x130]
00826ac0:  tbz      w8, #0, #0x826acc
00826ac4:  ldr      x0, [sp, #0x140]
00826ac8:  bl       #0x8ccfd0
00826acc:  ldur     x8, [x29, #-0x40]
00826ad0:  ldur     x9, [x27, #0x76]
00826ad4:  add      x10, sp, #0xa8
00826ad8:  strb     w21, [sp, #0x130]
00826adc:  strb     w22, [sp, #0x131]
00826ae0:  stur     x8, [x10, #0x8a]
00826ae4:  stp      x9, x20, [sp, #0x138]
00826ae8:  b        #0x826b10
00826aec:  ldur     x8, [x29, #-0x40]
00826af0:  ldur     x9, [x27, #0x76]
00826af4:  add      x10, sp, #0xa8
00826af8:  strb     w21, [sp, #0x130]
00826afc:  stur     x8, [x10, #0x8a]
00826b00:  mov      w8, #1
00826b04:  strb     w22, [sp, #0x131]
00826b08:  stp      x9, x20, [sp, #0x138]
00826b0c:  strb     w8, [sp, #0x148]
00826b10:  mov      w0, #0x20
00826b14:  bl       #0x8ccfa0
00826b18:  adrp     x8, #0x36b000
00826b1c:  add      x8, x8, #0x944
00826b20:  ldr      q1, [sp, #0x40]
00826b24:  ldr      q0, [x8]
00826b28:  ldr      x8, [x8, #0x10]
00826b2c:  stur     x0, [x29, #-0x20]
00826b30:  stur     q1, [x29, #-0x30]
00826b34:  str      q0, [x0]
00826b38:  str      x8, [x0, #0x10]
00826b3c:  strb     wzr, [x0, #0x18]
00826b40:  sub      x0, x29, #0x90
00826b44:  sub      x1, x29, #0x30
00826b48:  bl       #0x817c7c
00826b4c:  ldurb    w8, [x29, #-0x30]
00826b50:  mov      x21, x0
00826b54:  tbz      w8, #0, #0x826b60
00826b58:  ldur     x0, [x29, #-0x20]
00826b5c:  bl       #0x8ccfd0
00826b60:  cbz      x21, #0x826b70
00826b64:  add      x0, x21, #0x28
00826b68:  bl       #0x809024
00826b6c:  str      s0, [sp, #0x150]
00826b70:  adrp     x10, #0x369000
00826b74:  add      x10, x10, #0x89d
00826b78:  mov      w8, #0x1e
00826b7c:  ldr      x9, [x10]
00826b80:  ldur     x10, [x10, #7]
00826b84:  sturb    w8, [x29, #-0x30]
00826b88:  sturb    wzr, [x29, #-0x20]
00826b8c:  stur     x9, [x27, #0x81]
00826b90:  stur     x10, [x29, #-0x28]
00826b94:  sub      x0, x29, #0x90
00826b98:  sub      x1, x29, #0x30
00826b9c:  bl       #0x817c7c
00826ba0:  ldurb    w8, [x29, #-0x30]
00826ba4:  mov      x21, x0
00826ba8:  tbz      w8, #0, #0x826bb4
00826bac:  ldur     x0, [x29, #-0x20]
00826bb0:  bl       #0x8ccfd0
00826bb4:  cbz      x21, #0x826bc4
00826bb8:  add      x0, x21, #0x28
00826bbc:  bl       #0x8161a0
00826bc0:  str      w0, [sp, #0x154]
00826bc4:  mov      w8, #0xa
00826bc8:  mov      w9, #0x6977
00826bcc:  movk     w9, #0x7464, lsl #16
00826bd0:  sturb    w8, [x29, #-0x30]
00826bd4:  mov      w8, #0x68
00826bd8:  stur     w9, [x27, #0x81]
00826bdc:  sturh    w8, [x27, #0x85]
00826be0:  sub      x0, x29, #0x90
00826be4:  sub      x1, x29, #0x30
00826be8:  bl       #0x817c7c
00826bec:  ldurb    w8, [x29, #-0x30]
00826bf0:  mov      x21, x0
00826bf4:  tbz      w8, #0, #0x826c00
00826bf8:  ldur     x0, [x29, #-0x20]
00826bfc:  bl       #0x8ccfd0
00826c00:  cbz      x21, #0x826c10
00826c04:  add      x0, x21, #0x28
00826c08:  bl       #0x809024
00826c0c:  str      s0, [sp, #0x158]
00826c10:  mov      w8, #0xc
00826c14:  mov      w9, #0x6568
00826c18:  sturb    wzr, [x29, #-0x29]
00826c1c:  movk     w9, #0x6769, lsl #16
00826c20:  sturb    w8, [x29, #-0x30]
00826c24:  mov      w8, #0x7468
00826c28:  stur     w9, [x27, #0x81]
00826c2c:  sturh    w8, [x27, #0x85]
00826c30:  sub      x0, x29, #0x90
00826c34:  sub      x1, x29, #0x30
00826c38:  bl       #0x817c7c
00826c3c:  ldurb    w8, [x29, #-0x30]
00826c40:  mov      x21, x0
00826c44:  tbz      w8, #0, #0x826c50
00826c48:  ldur     x0, [x29, #-0x20]
00826c4c:  bl       #0x8ccfd0
00826c50:  cbz      x21, #0x826c60
00826c54:  add      x0, x21, #0x28
00826c58:  bl       #0x809024
00826c5c:  str      s0, [sp, #0x15c]
00826c60:  adrp     x10, #0x36e000
00826c64:  add      x10, x10, #0x59
00826c68:  mov      w8, #0x22
00826c6c:  ldr      q0, [x10]
00826c70:  mov      w9, #0x74
00826c74:  sturb    w8, [x29, #-0x30]
00826c78:  sturh    w9, [x27, #0x91]
00826c7c:  stur     q0, [x27, #0x81]
00826c80:  sub      x0, x29, #0x90
00826c84:  sub      x1, x29, #0x30
00826c88:  bl       #0x817c7c
00826c8c:  ldurb    w8, [x29, #-0x30]
00826c90:  mov      x21, x0
00826c94:  tbz      w8, #0, #0x826ca0
00826c98:  ldur     x0, [x29, #-0x20]
00826c9c:  bl       #0x8ccfd0
00826ca0:  cbz      x21, #0x826d24
00826ca4:  sub      x8, x29, #0x30
00826ca8:  add      x0, x21, #0x28
00826cac:  bl       #0x807a6c
00826cb0:  ldp      x10, x20, [x29, #-0x28]
00826cb4:  ldur     x8, [x27, #0x82]
00826cb8:  ldurb    w21, [x29, #-0x30]
00826cbc:  ldrb     w9, [sp, #0x178]
00826cc0:  ldurb    w22, [x29, #-0x2f]
00826cc4:  stur     x8, [x29, #-0x40]
00826cc8:  stur     x10, [x27, #0x76]
00826ccc:  cbz      w9, #0x826d00
00826cd0:  ldrb     w8, [sp, #0x160]
00826cd4:  tbz      w8, #0, #0x826ce0
00826cd8:  ldr      x0, [sp, #0x170]
00826cdc:  bl       #0x8ccfd0
00826ce0:  ldur     x8, [x29, #-0x40]
00826ce4:  ldur     x9, [x27, #0x76]
00826ce8:  add      x10, sp, #0xa8
00826cec:  strb     w21, [sp, #0x160]
00826cf0:  strb     w22, [sp, #0x161]
00826cf4:  stur     x8, [x10, #0xba]
00826cf8:  stp      x9, x20, [sp, #0x168]
00826cfc:  b        #0x826d24
00826d00:  ldur     x8, [x29, #-0x40]
00826d04:  ldur     x9, [x27, #0x76]
00826d08:  add      x10, sp, #0xa8
00826d0c:  strb     w21, [sp, #0x160]
00826d10:  stur     x8, [x10, #0xba]
00826d14:  mov      w8, #1
00826d18:  strb     w22, [sp, #0x161]
00826d1c:  stp      x9, x20, [sp, #0x168]
00826d20:  strb     w8, [sp, #0x178]
00826d24:  adrp     x10, #0x365000
00826d28:  add      x10, x10, #0x32
00826d2c:  mov      w9, #0x656d
00826d30:  ldr      q0, [x10]
00826d34:  mov      w8, #0x26
00826d38:  movk     w9, #0x746e, lsl #16
00826d3c:  sturb    w8, [x29, #-0x30]
00826d40:  stur     w9, [x29, #-0x20]
00826d44:  stur     q0, [x27, #0x81]
00826d48:  sturb    wzr, [x29, #-0x1c]
00826d4c:  sub      x0, x29, #0x90
00826d50:  sub      x1, x29, #0x30
00826d54:  bl       #0x817c7c
00826d58:  ldurb    w8, [x29, #-0x30]
00826d5c:  mov      x21, x0
00826d60:  tbz      w8, #0, #0x826d6c
00826d64:  ldur     x0, [x29, #-0x20]
00826d68:  bl       #0x8ccfd0
00826d6c:  cbz      x21, #0x826dc8
00826d70:  sub      x8, x29, #0x30
00826d74:  add      x0, x21, #0x28
00826d78:  bl       #0x807a6c
00826d7c:  ldp      x10, x20, [x29, #-0x28]
00826d80:  ldur     x8, [x27, #0x82]
00826d84:  ldurb    w21, [x29, #-0x30]
00826d88:  ldrb     w9, [sp, #0x198]
00826d8c:  ldurb    w22, [x29, #-0x2f]
00826d90:  stur     x8, [x29, #-0x40]
00826d94:  stur     x10, [x27, #0x76]
00826d98:  cbz      w9, #0x826e28
00826d9c:  ldrb     w8, [sp, #0x180]
00826da0:  tbz      w8, #0, #0x826dac
00826da4:  ldr      x0, [sp, #0x190]
00826da8:  bl       #0x8ccfd0
00826dac:  ldur     x8, [x29, #-0x40]
00826db0:  ldur     x9, [x27, #0x76]
00826db4:  add      x10, sp, #0xa8
00826db8:  strb     w21, [sp, #0x180]
00826dbc:  strb     w22, [sp, #0x181]
00826dc0:  stur     x8, [x10, #0xda]
00826dc4:  stp      x9, x20, [sp, #0x188]
00826dc8:  ldur     x21, [x29, #-0x80]
00826dcc:  cbz      x21, #0x826e54
00826dd0:  mov      w20, #-1
00826dd4:  b        #0x826de8
00826dd8:  mov      x0, x21
00826ddc:  bl       #0x8ccfd0
00826de0:  mov      x21, x22
00826de4:  cbz      x22, #0x826e54
00826de8:  ldr      w8, [x21, #0x58]
00826dec:  ldr      x22, [x21]
00826df0:  cmn      w8, #1
00826df4:  b.eq     #0x826e10
00826df8:  adrp     x9, #0x98c000
00826dfc:  add      x9, x9, #0x980
00826e00:  ldr      x8, [x9, x8, lsl #3]
00826e04:  sub      x0, x29, #0x30
00826e08:  add      x1, x21, #0x28
00826e0c:  blr      x8
00826e10:  ldrb     w8, [x21, #0x10]
00826e14:  str      w20, [x21, #0x58]
00826e18:  tbz      w8, #0, #0x826dd8
00826e1c:  ldr      x0, [x21, #0x20]
00826e20:  bl       #0x8ccfd0
00826e24:  b        #0x826dd8
00826e28:  ldur     x8, [x29, #-0x40]
00826e2c:  ldur     x9, [x27, #0x76]
00826e30:  add      x10, sp, #0xa8
00826e34:  strb     w21, [sp, #0x180]
00826e38:  stur     x8, [x10, #0xda]
00826e3c:  mov      w8, #1
00826e40:  strb     w22, [sp, #0x181]
00826e44:  stp      x9, x20, [sp, #0x188]
00826e48:  strb     w8, [sp, #0x198]
00826e4c:  ldur     x21, [x29, #-0x80]
00826e50:  cbnz     x21, #0x826dd0
00826e54:  ldur     x0, [x29, #-0x90]
00826e58:  stur     xzr, [x29, #-0x90]
00826e5c:  cbz      x0, #0x826e64
00826e60:  bl       #0x8ccfd0
00826e64:  ldrb     w22, [sp, #0xe8]
00826e68:  add      x8, sp, #0xa8
00826e6c:  cbz      w22, #0x826e9c
00826e70:  ldur     x9, [sp, #0xd2]
00826e74:  ldrb     w20, [sp, #0xd0]
00826e78:  ldrb     w3, [sp, #0xd1]
00826e7c:  stur     x9, [x29, #-0x40]
00826e80:  ldp      x10, x9, [sp, #0xd8]
00826e84:  stp      xzr, xzr, [sp, #0xd0]
00826e88:  str      xzr, [sp, #0xe0]
00826e8c:  str      x9, [sp, #0x38]
00826e90:  mov      w9, #1
00826e94:  stur     x10, [x27, #0x76]
00826e98:  b        #0x826ea4
00826e9c:  mov      w20, wzr
00826ea0:  mov      w9, wzr
00826ea4:  ldur     q0, [x8, #0x48]
00826ea8:  ldur     q1, [x8, #0x58]
00826eac:  ldur     q2, [x8, #0x68]
00826eb0:  ldrb     w21, [sp, #0x148]
00826eb4:  stur     q0, [x27, #0x27]
00826eb8:  ldur     q0, [x8, #0x74]
00826ebc:  stur     q1, [x27, #0x37]
00826ec0:  stur     q2, [x27, #0x47]
00826ec4:  stur     q0, [x27, #0x53]
00826ec8:  cbz      w21, #0x826f00
00826ecc:  add      x10, sp, #0xa8
00826ed0:  ldrb     w17, [sp, #0x131]
00826ed4:  mov      w4, #1
00826ed8:  ldur     x10, [x10, #0x8a]
00826edc:  stur     x10, [x29, #-0xa0]
00826ee0:  ldp      x11, x10, [sp, #0x138]
00826ee4:  str      x10, [sp, #0x40]
00826ee8:  ldrb     w10, [sp, #0x130]
00826eec:  stur     x11, [x27, #0x16]
00826ef0:  str      w10, [sp, #0x50]
00826ef4:  stp      xzr, xzr, [x8, #0x90]
00826ef8:  stur     xzr, [x8, #0x88]
00826efc:  b        #0x826f08
00826f00:  str      wzr, [sp, #0x50]
00826f04:  mov      w4, wzr
00826f08:  ldur     q0, [x8, #0xa8]
00826f0c:  ldrb     w10, [sp, #0x178]
00826f10:  stur     q0, [x27, #0x87]
00826f14:  str      w10, [sp, #0x30]
00826f18:  cbz      w10, #0x826f4c
00826f1c:  add      x10, sp, #0xa8
00826f20:  ldrb     w14, [sp, #0x160]
00826f24:  ldrb     w16, [sp, #0x161]
00826f28:  ldur     x10, [x10, #0xba]
00826f2c:  mov      w2, #1
00826f30:  stur     x10, [x29, #-0xb0]
00826f34:  ldp      x11, x10, [sp, #0x168]
00826f38:  stp      xzr, xzr, [sp, #0x160]
00826f3c:  str      xzr, [sp, #0x170]
00826f40:  str      x10, [sp, #0x18]
00826f44:  stur     x11, [x27, #6]
00826f48:  b        #0x826f54
00826f4c:  mov      w14, wzr
00826f50:  mov      w2, wzr
00826f54:  ldrb     w15, [sp, #0x198]
00826f58:  add      x10, x19, #0x400
00826f5c:  stp      w22, w21, [sp, #0x24]
00826f60:  cbz      w15, #0x826f94
00826f64:  add      x13, sp, #0xa8
00826f68:  ldp      x12, x0, [sp, #0x188]
00826f6c:  ldur     x11, [x13, #0xda]
00826f70:  mov      w1, #1
00826f74:  stur     x11, [x29, #-0xc0]
00826f78:  ldrb     w11, [sp, #0x181]
00826f7c:  stur     x12, [x13, #0xfe]
00826f80:  ldrb     w13, [sp, #0x180]
00826f84:  str      w11, [sp, #8]
00826f88:  stp      xzr, xzr, [x8, #0xe0]
00826f8c:  stur     xzr, [x8, #0xd8]
00826f90:  b        #0x826f9c
00826f94:  mov      w13, wzr
00826f98:  mov      w1, wzr
00826f9c:  ldur     q0, [sp, #0xa8]
00826fa0:  ldur     q1, [sp, #0xb8]
00826fa4:  ldrb     w11, [x19, #0x4f8]
00826fa8:  ldr      x12, [sp, #0xc8]
00826fac:  stp      q0, q1, [x10]
00826fb0:  str      x12, [x10, #0x20]
00826fb4:  cbz      w11, #0x827050
00826fb8:  ldrb     w8, [x19, #0x440]
00826fbc:  sub      x28, x29, #0x90
00826fc0:  str      x0, [sp, #0x10]
00826fc4:  str      w13, [sp, #0xc]
00826fc8:  cmp      w8, w9
00826fcc:  b.ne     #0x8271c0
00826fd0:  cbz      w8, #0x827298
00826fd4:  ldrb     w8, [x19, #0x428]
00826fd8:  tbz      w8, #0, #0x827024
00826fdc:  ldr      x0, [x19, #0x438]
00826fe0:  mov      w25, w14
00826fe4:  mov      w23, w15
00826fe8:  mov      w26, w16
00826fec:  stp      w4, w17, [sp]
00826ff0:  mov      w24, w1
00826ff4:  mov      w22, w2
00826ff8:  mov      w21, w3
00826ffc:  bl       #0x8ccfd0
00827000:  ldp      w4, w17, [sp]
00827004:  ldr      w13, [sp, #0xc]
00827008:  ldr      x0, [sp, #0x10]
0082700c:  mov      w3, w21
00827010:  mov      w2, w22
00827014:  mov      w1, w24
00827018:  mov      w16, w26
0082701c:  mov      w15, w23
00827020:  mov      w14, w25
00827024:  ldur     x8, [x27, #0x76]
00827028:  ldur     x9, [x29, #-0x40]
0082702c:  add      x10, x19, #0x42a
00827030:  strb     w20, [x19, #0x428]
00827034:  mov      w20, wzr
00827038:  str      x8, [x19, #0x430]
0082703c:  ldr      x8, [sp, #0x38]
00827040:  strb     w3, [x19, #0x429]
00827044:  str      x9, [x10]
00827048:  str      x8, [x19, #0x438]
0082704c:  b        #0x827298
00827050:  ldr      w22, [sp, #0x24]
00827054:  strb     wzr, [x19, #0x428]
00827058:  strb     wzr, [x19, #0x440]
0082705c:  cbz      w22, #0x82709c
00827060:  ldur     x9, [x27, #0x76]
00827064:  ldur     x10, [x29, #-0x40]
00827068:  add      x11, x19, #0x42a
0082706c:  strb     w20, [x19, #0x428]
00827070:  mov      w20, wzr
00827074:  str      x9, [x19, #0x430]
00827078:  ldr      x9, [sp, #0x38]
0082707c:  strb     w3, [x19, #0x429]
00827080:  str      x9, [x19, #0x438]
00827084:  mov      w9, #1
00827088:  str      x10, [x11]
0082708c:  stur     xzr, [x29, #-0x40]
00827090:  stur     xzr, [x27, #0x76]
00827094:  strb     w9, [x19, #0x440]
00827098:  str      xzr, [sp, #0x38]
0082709c:  ldur     q0, [x8, #0x48]
008270a0:  add      x9, x19, #0x400
008270a4:  ldr      w21, [sp, #0x28]
008270a8:  ldr      w24, [sp, #0x30]
008270ac:  ldr      x25, [sp, #0x18]
008270b0:  ldur     q1, [x8, #0x58]
008270b4:  ldur     q2, [x8, #0x68]
008270b8:  stur     q0, [x9, #0x48]
008270bc:  ldur     q0, [x8, #0x74]
008270c0:  stur     q1, [x9, #0x58]
008270c4:  stur     q2, [x9, #0x68]
008270c8:  stur     q0, [x9, #0x74]
008270cc:  strb     wzr, [x19, #0x488]
008270d0:  strb     wzr, [x19, #0x4a0]
008270d4:  cbz      w21, #0x827118
008270d8:  ldr      w9, [sp, #0x50]
008270dc:  ldur     x10, [x29, #-0xa0]
008270e0:  add      x11, x19, #0x48a
008270e4:  strb     w17, [x19, #0x489]
008270e8:  strb     w9, [x19, #0x488]
008270ec:  ldur     x9, [x27, #0x16]
008270f0:  stur     xzr, [x29, #-0xa0]
008270f4:  str      x9, [x19, #0x490]
008270f8:  ldr      x9, [sp, #0x40]
008270fc:  str      x10, [x11]
00827100:  str      x9, [x19, #0x498]
00827104:  mov      w9, #1
00827108:  stur     xzr, [x27, #0x16]
0082710c:  strb     w9, [x19, #0x4a0]
00827110:  str      wzr, [sp, #0x50]
00827114:  str      xzr, [sp, #0x40]
00827118:  ldur     q0, [x8, #0xa8]
0082711c:  add      x8, x19, #0x4a8
00827120:  strb     wzr, [x19, #0x4b8]
00827124:  strb     wzr, [x19, #0x4d0]
00827128:  str      q0, [x8]
0082712c:  cbz      w24, #0x827168
00827130:  ldur     x8, [x27, #6]
00827134:  ldur     x9, [x29, #-0xb0]
00827138:  add      x10, x19, #0x4ba
0082713c:  strb     w14, [x19, #0x4b8]
00827140:  mov      w14, wzr
00827144:  str      x8, [x19, #0x4c0]
00827148:  mov      w8, #1
0082714c:  str      x25, [x19, #0x4c8]
00827150:  mov      x25, xzr
00827154:  strb     w16, [x19, #0x4b9]
00827158:  str      x9, [x10]
0082715c:  stur     xzr, [x29, #-0xb0]
00827160:  stur     xzr, [x27, #6]
00827164:  strb     w8, [x19, #0x4d0]
00827168:  strb     wzr, [x19, #0x4d8]
0082716c:  strb     wzr, [x19, #0x4f0]
00827170:  cbz      w15, #0x8271b4
00827174:  add      x11, sp, #0xa8
00827178:  ldr      w9, [sp, #8]
0082717c:  strb     w13, [x19, #0x4d8]
00827180:  ldur     x8, [x11, #0xfe]
00827184:  add      x10, x19, #0x4da
00827188:  str      x0, [x19, #0x4e8]
0082718c:  strb     w9, [x19, #0x4d9]
00827190:  ldur     x9, [x29, #-0xc0]
00827194:  mov      w13, wzr
00827198:  str      x8, [x19, #0x4e0]
0082719c:  mov      w8, #1
008271a0:  mov      x0, xzr
008271a4:  str      x9, [x10]
008271a8:  stur     xzr, [x29, #-0xc0]
008271ac:  stur     xzr, [x11, #0xfe]
008271b0:  strb     w8, [x19, #0x4f0]
008271b4:  mov      w8, #1
008271b8:  strb     w8, [x19, #0x4f8]
008271bc:  b        #0x827574
008271c0:  cbz      w8, #0x82725c
008271c4:  ldrb     w8, [x19, #0x428]
008271c8:  tbz      w8, #0, #0x827214
008271cc:  ldr      x0, [x19, #0x438]
008271d0:  mov      w25, w14
008271d4:  mov      w23, w15
008271d8:  mov      w26, w16
008271dc:  mov      w24, w17
008271e0:  mov      w21, w1
008271e4:  str      w2, [sp, #4]
008271e8:  mov      w22, w4
008271ec:  bl       #0x8ccfd0
008271f0:  ldr      w2, [sp, #4]
008271f4:  ldr      w13, [sp, #0xc]
008271f8:  mov      w4, w22
008271fc:  ldr      x0, [sp, #0x10]
00827200:  mov      w1, w21
00827204:  mov      w17, w24
00827208:  mov      w16, w26
0082720c:  mov      w15, w23
00827210:  mov      w14, w25
00827214:  strb     wzr, [x19, #0x440]
00827218:  b        #0x827298
0082721c:  add      x11, sp, #0xa8
00827220:  ldr      w9, [sp, #8]
00827224:  add      x10, x19, #0x3da
00827228:  ldur     x8, [x11, #0xfe]
0082722c:  strb     w13, [x19, #0x3d8]
00827230:  strb     w9, [x19, #0x3d9]
00827234:  ldur     x9, [x29, #-0xc0]
00827238:  str      x8, [x19, #0x3e0]
0082723c:  mov      w8, #1
00827240:  str      x9, [x10]
00827244:  str      x0, [x19, #0x3e8]
00827248:  stur     xzr, [x29, #-0xc0]
0082724c:  stur     xzr, [x11, #0xfe]
00827250:  strb     w8, [x19, #0x3f0]
00827254:  cbnz     w24, #0x825fd4
00827258:  b        #0x825fe0
0082725c:  ldur     x8, [x27, #0x76]
00827260:  ldur     x9, [x29, #-0x40]
00827264:  add      x10, x19, #0x42a
00827268:  strb     w20, [x19, #0x428]
0082726c:  mov      w20, wzr
00827270:  str      x8, [x19, #0x430]
00827274:  ldr      x8, [sp, #0x38]
00827278:  strb     w3, [x19, #0x429]
0082727c:  str      x8, [x19, #0x438]
00827280:  mov      w8, #1
00827284:  str      x9, [x10]
00827288:  stur     xzr, [x29, #-0x40]
0082728c:  stur     xzr, [x27, #0x76]
00827290:  strb     w8, [x19, #0x440]
00827294:  str      xzr, [sp, #0x38]
00827298:  ldur     q0, [x28, #7]
0082729c:  add      x9, x19, #0x400
008272a0:  ldrb     w8, [x19, #0x4a0]
008272a4:  ldur     q1, [x28, #0x17]
008272a8:  ldur     q2, [x28, #0x27]
008272ac:  sub      x24, x29, #0x30
008272b0:  stur     q0, [x9, #0x48]
008272b4:  ldur     q0, [x28, #0x33]
008272b8:  cmp      w8, w4
008272bc:  stur     q1, [x9, #0x58]
008272c0:  stur     q2, [x9, #0x68]
008272c4:  stur     q0, [x9, #0x74]
008272c8:  b.ne     #0x827348
008272cc:  cbz      w8, #0x8273d4
008272d0:  ldrb     w8, [x19, #0x488]
008272d4:  tbz      w8, #0, #0x827318
008272d8:  ldr      x0, [x19, #0x498]
008272dc:  mov      w25, w14
008272e0:  mov      w23, w15
008272e4:  mov      w26, w16
008272e8:  mov      w28, w17
008272ec:  mov      w21, w1
008272f0:  mov      w22, w2
008272f4:  bl       #0x8ccfd0
008272f8:  ldr      w13, [sp, #0xc]
008272fc:  ldr      x0, [sp, #0x10]
00827300:  mov      w2, w22
00827304:  mov      w1, w21
00827308:  mov      w17, w28
0082730c:  mov      w16, w26
00827310:  mov      w15, w23
00827314:  mov      w14, w25
00827318:  ldr      w8, [sp, #0x50]
0082731c:  ldur     x9, [x29, #-0xa0]
00827320:  add      x10, x19, #0x48a
00827324:  strb     w17, [x19, #0x489]
00827328:  strb     w8, [x19, #0x488]
0082732c:  ldur     x8, [x27, #0x16]
00827330:  str      wzr, [sp, #0x50]
00827334:  str      x8, [x19, #0x490]
00827338:  ldr      x8, [sp, #0x40]
0082733c:  str      x9, [x10]
00827340:  str      x8, [x19, #0x498]
00827344:  b        #0x8273d4
00827348:  cbz      w8, #0x827394
0082734c:  ldrb     w8, [x19, #0x488]
00827350:  tbz      w8, #0, #0x82738c
00827354:  ldr      x0, [x19, #0x498]
00827358:  mov      w25, w14
0082735c:  mov      w23, w15
00827360:  mov      w26, w16
00827364:  mov      w28, w1
00827368:  mov      w21, w2
0082736c:  bl       #0x8ccfd0
00827370:  ldr      w13, [sp, #0xc]
00827374:  ldr      x0, [sp, #0x10]
00827378:  mov      w2, w21
0082737c:  mov      w1, w28
00827380:  mov      w16, w26
00827384:  mov      w15, w23
00827388:  mov      w14, w25
0082738c:  strb     wzr, [x19, #0x4a0]
00827390:  b        #0x8273d4
00827394:  ldr      w8, [sp, #0x50]
00827398:  ldur     x9, [x29, #-0xa0]
0082739c:  add      x10, x19, #0x48a
008273a0:  strb     w17, [x19, #0x489]
008273a4:  strb     w8, [x19, #0x488]
008273a8:  ldur     x8, [x27, #0x16]
008273ac:  stur     xzr, [x29, #-0xa0]
008273b0:  str      x8, [x19, #0x490]
008273b4:  ldr      x8, [sp, #0x40]
008273b8:  str      x9, [x10]
008273bc:  str      x8, [x19, #0x498]
008273c0:  mov      w8, #1
008273c4:  stur     xzr, [x27, #0x16]
008273c8:  strb     w8, [x19, #0x4a0]
008273cc:  str      wzr, [sp, #0x50]
008273d0:  str      xzr, [sp, #0x40]
008273d4:  ldrb     w8, [x19, #0x4d0]
008273d8:  ldur     q0, [x24, #7]
008273dc:  add      x9, x19, #0x4a8
008273e0:  cmp      w8, w2
008273e4:  str      q0, [x9]
008273e8:  b.ne     #0x827460
008273ec:  ldr      w24, [sp, #0x30]
008273f0:  ldr      x25, [sp, #0x18]
008273f4:  cbz      w8, #0x8274dc
008273f8:  ldrb     w8, [x19, #0x4b8]
008273fc:  tbz      w8, #0, #0x827438
00827400:  ldr      x0, [x19, #0x4c8]
00827404:  mov      w23, w14
00827408:  mov      w26, w15
0082740c:  mov      w28, w16
00827410:  mov      w21, w24
00827414:  mov      w24, w1
00827418:  bl       #0x8ccfd0
0082741c:  ldr      w13, [sp, #0xc]
00827420:  ldr      x0, [sp, #0x10]
00827424:  mov      w1, w24
00827428:  mov      w24, w21
0082742c:  mov      w16, w28
00827430:  mov      w15, w26
00827434:  mov      w14, w23
00827438:  ldur     x8, [x27, #6]
0082743c:  ldur     x9, [x29, #-0xb0]
00827440:  add      x10, x19, #0x4ba
00827444:  strb     w14, [x19, #0x4b8]
00827448:  mov      w14, wzr
0082744c:  strb     w16, [x19, #0x4b9]
00827450:  str      x8, [x19, #0x4c0]
00827454:  str      x9, [x10]
00827458:  str      x25, [x19, #0x4c8]
0082745c:  b        #0x8274dc
00827460:  ldr      w24, [sp, #0x30]
00827464:  ldr      x25, [sp, #0x18]
00827468:  cbz      w8, #0x8274a4
0082746c:  ldrb     w8, [x19, #0x4b8]
00827470:  tbz      w8, #0, #0x82749c
00827474:  ldr      x0, [x19, #0x4c8]
00827478:  mov      w23, w14
0082747c:  mov      w26, w15
00827480:  mov      w21, w1
00827484:  bl       #0x8ccfd0
00827488:  ldr      w13, [sp, #0xc]
0082748c:  ldr      x0, [sp, #0x10]
00827490:  mov      w1, w21
00827494:  mov      w15, w26
00827498:  mov      w14, w23
0082749c:  strb     wzr, [x19, #0x4d0]
008274a0:  b        #0x8274dc
008274a4:  ldur     x8, [x27, #6]
008274a8:  ldur     x9, [x29, #-0xb0]
008274ac:  add      x10, x19, #0x4ba
008274b0:  strb     w14, [x19, #0x4b8]
008274b4:  mov      w14, wzr
008274b8:  str      x8, [x19, #0x4c0]
008274bc:  mov      w8, #1
008274c0:  str      x25, [x19, #0x4c8]
008274c4:  mov      x25, xzr
008274c8:  strb     w16, [x19, #0x4b9]
008274cc:  str      x9, [x10]
008274d0:  stur     xzr, [x29, #-0xb0]
008274d4:  stur     xzr, [x27, #6]
008274d8:  strb     w8, [x19, #0x4d0]
008274dc:  ldrb     w8, [x19, #0x4f0]
008274e0:  cmp      w8, w1
008274e4:  b.ne     #0x827540
008274e8:  ldp      w22, w21, [sp, #0x24]
008274ec:  cbz      w8, #0x827574
008274f0:  ldrb     w8, [x19, #0x4d8]
008274f4:  tbz      w8, #0, #0x827510
008274f8:  ldr      x0, [x19, #0x4e8]
008274fc:  mov      w23, w14
00827500:  bl       #0x8ccfd0
00827504:  ldr      w13, [sp, #0xc]
00827508:  ldr      x0, [sp, #0x10]
0082750c:  mov      w14, w23
00827510:  ldr      w9, [sp, #8]
00827514:  add      x8, sp, #0xa8
00827518:  add      x10, x19, #0x4da
0082751c:  ldur     x8, [x8, #0xfe]
00827520:  strb     w13, [x19, #0x4d8]
00827524:  strb     w9, [x19, #0x4d9]
00827528:  ldur     x9, [x29, #-0xc0]
0082752c:  str      x8, [x19, #0x4e0]
00827530:  str      x9, [x10]
00827534:  str      x0, [x19, #0x4e8]
00827538:  cbnz     w24, #0x82758c
0082753c:  b        #0x827598
00827540:  ldp      w22, w21, [sp, #0x24]
00827544:  cbz      w8, #0x8287d0
00827548:  ldrb     w8, [x19, #0x4d8]
0082754c:  tbz      w8, #0, #0x827570
00827550:  ldr      x0, [x19, #0x4e8]
00827554:  mov      w23, w14
00827558:  mov      w26, w15
0082755c:  bl       #0x8ccfd0
00827560:  ldr      w13, [sp, #0xc]
00827564:  ldr      x0, [sp, #0x10]
00827568:  mov      w15, w26
0082756c:  mov      w14, w23
00827570:  strb     wzr, [x19, #0x4f0]
00827574:  cbz      w15, #0x827588
00827578:  tbz      w13, #0, #0x827588
0082757c:  mov      w23, w14
00827580:  bl       #0x8ccfd0
00827584:  mov      w14, w23
00827588:  cbz      w24, #0x827598
0082758c:  tbz      w14, #0, #0x827598
00827590:  mov      x0, x25
00827594:  bl       #0x8ccfd0
00827598:  cbz      w21, #0x8275ac
0082759c:  ldr      w8, [sp, #0x50]
008275a0:  tbz      w8, #0, #0x8275ac
008275a4:  ldr      x0, [sp, #0x40]
008275a8:  bl       #0x8ccfd0
008275ac:  cbz      w22, #0x8275bc
008275b0:  tbz      w20, #0, #0x8275bc
008275b4:  ldr      x0, [sp, #0x38]
008275b8:  bl       #0x8ccfd0
008275bc:  ldrb     w8, [sp, #0x198]
008275c0:  cbz      w8, #0x8275d4
008275c4:  ldrb     w8, [sp, #0x180]
008275c8:  tbz      w8, #0, #0x8275d4
008275cc:  ldr      x0, [sp, #0x190]
008275d0:  bl       #0x8ccfd0
008275d4:  ldrb     w8, [sp, #0x178]
008275d8:  cbz      w8, #0x8275ec
008275dc:  ldrb     w8, [sp, #0x160]
008275e0:  tbz      w8, #0, #0x8275ec
008275e4:  ldr      x0, [sp, #0x170]
008275e8:  bl       #0x8ccfd0
008275ec:  ldrb     w8, [sp, #0x148]
008275f0:  cbz      w8, #0x827604
008275f4:  ldrb     w8, [sp, #0x130]
008275f8:  tbz      w8, #0, #0x827604
008275fc:  ldr      x0, [sp, #0x140]
00827600:  bl       #0x8ccfd0
00827604:  ldrb     w8, [sp, #0xe8]
00827608:  cbz      w8, #0x82761c
0082760c:  ldrb     w8, [sp, #0xd0]
00827610:  tbz      w8, #0, #0x82761c
00827614:  ldr      x0, [sp, #0xe0]
00827618:  bl       #0x8ccfd0
0082761c:  adrp     x9, #0x365000
00827620:  add      x9, x9, #0x20
00827624:  mov      w8, #0x22
00827628:  ldr      q0, [x9]
0082762c:  mov      w10, #0x72
00827630:  strb     w8, [sp, #0xa8]
00827634:  sturh    w10, [sp, #0xb9]
00827638:  stur     q0, [sp, #0xa9]
0082763c:  add      x0, sp, #0x80
00827640:  add      x1, sp, #0xa8
00827644:  bl       #0x817c7c
00827648:  ldrb     w8, [sp, #0xa8]
0082764c:  mov      x21, x0
00827650:  tbz      w8, #0, #0x82765c
00827654:  ldr      x0, [sp, #0xb8]
00827658:  bl       #0x8ccfd0
0082765c:  cbz      x21, #0x828bd0
00827660:  strb     wzr, [sp, #0x10c]
00827664:  strb     wzr, [sp, #0x110]
00827668:  strb     wzr, [sp, #0x114]
0082766c:  strb     wzr, [sp, #0x130]
00827670:  strb     wzr, [sp, #0x148]
00827674:  strb     wzr, [sp, #0x178]
00827678:  strb     wzr, [sp, #0x180]
0082767c:  strb     wzr, [sp, #0x198]
00827680:  strb     wzr, [sp, #0x108]
00827684:  stp      xzr, xzr, [sp, #0x118]
00827688:  str      wzr, [sp, #0x128]
0082768c:  stp      xzr, xzr, [sp, #0x150]
00827690:  strb     wzr, [sp, #0x160]
00827694:  stp      xzr, xzr, [sp, #0xf8]
00827698:  ldr      w8, [x21, #0x58]
0082769c:  strb     wzr, [sp, #0xc0]
008276a0:  strb     wzr, [sp, #0xc4]
008276a4:  cmp      w8, #1
008276a8:  strb     wzr, [sp, #0xe8]
008276ac:  strb     wzr, [sp, #0xf0]
008276b0:  strb     wzr, [sp, #0xf4]
008276b4:  stp      xzr, xzr, [sp, #0xa8]
008276b8:  stur     xzr, [sp, #0xb5]
008276bc:  str      xzr, [sp, #0xc8]
008276c0:  strb     wzr, [sp, #0xd0]
008276c4:  b.eq     #0x8276e0
008276c8:  cbnz     w8, #0x82b080
008276cc:  sub      x8, x29, #0x90
008276d0:  add      x0, x21, #0x28
008276d4:  mov      x1, xzr
008276d8:  bl       #0x8118bc
008276dc:  b        #0x8276f4
008276e0:  ldr      x0, [x21, #0x28]
008276e4:  sub      x8, x29, #0x90
008276e8:  add      x1, x21, #0x30
008276ec:  mov      x2, xzr
008276f0:  bl       #0x811aa8
008276f4:  adrp     x10, #0x370000
008276f8:  add      x10, x10, #0xad5
008276fc:  mov      w9, #0x6964
00827700:  ldr      x10, [x10]
00827704:  mov      w8, #0x18
00827708:  movk     w9, #0x7375, lsl #16
0082770c:  sturb    w8, [x29, #-0x30]
00827710:  stur     w9, [x27, #0x89]
00827714:  stur     x10, [x27, #0x81]
00827718:  sturb    wzr, [x29, #-0x23]
0082771c:  sub      x0, x29, #0x90
00827720:  sub      x1, x29, #0x30
00827724:  bl       #0x817c7c
00827728:  ldurb    w8, [x29, #-0x30]
0082772c:  mov      x21, x0
00827730:  tbz      w8, #0, #0x82773c
00827734:  ldur     x0, [x29, #-0x20]
00827738:  bl       #0x8ccfd0
0082773c:  cbz      x21, #0x82774c
00827740:  add      x0, x21, #0x28
00827744:  bl       #0x809024
00827748:  str      s0, [sp, #0xa8]
0082774c:  adrp     x10, #0x36e000
00827750:  add      x10, x10, #0x6cb
00827754:  mov      w9, #0x6964
00827758:  ldr      q0, [x10]
0082775c:  mov      w8, #0x26
00827760:  movk     w9, #0x7375, lsl #16
00827764:  sturb    w8, [x29, #-0x30]
00827768:  stur     w9, [x29, #-0x20]
0082776c:  stur     q0, [x27, #0x81]
00827770:  sturb    wzr, [x29, #-0x1c]
00827774:  sub      x0, x29, #0x90
00827778:  sub      x1, x29, #0x30
0082777c:  bl       #0x817c7c
00827780:  ldurb    w8, [x29, #-0x30]
00827784:  mov      x21, x0
00827788:  tbz      w8, #0, #0x827794
0082778c:  ldur     x0, [x29, #-0x20]
00827790:  bl       #0x8ccfd0
00827794:  cbz      x21, #0x8277a4
00827798:  add      x0, x21, #0x28
0082779c:  bl       #0x809024
008277a0:  str      s0, [sp, #0xac]
008277a4:  adrp     x10, #0x36a000
008277a8:  add      x10, x10, #0xe62
008277ac:  mov      w9, #0x6964
008277b0:  ldr      q0, [x10]
008277b4:  mov      w8, #0x28
008277b8:  movk     w9, #0x7375, lsl #16
008277bc:  sturb    w8, [x29, #-0x30]
008277c0:  stur     w9, [x27, #0x91]
008277c4:  stur     q0, [x27, #0x81]
008277c8:  sturb    wzr, [x29, #-0x1b]
008277cc:  sub      x0, x29, #0x90
008277d0:  sub      x1, x29, #0x30
008277d4:  bl       #0x817c7c
008277d8:  ldurb    w8, [x29, #-0x30]
008277dc:  mov      x21, x0
008277e0:  tbz      w8, #0, #0x8277ec
008277e4:  ldur     x0, [x29, #-0x20]
008277e8:  bl       #0x8ccfd0
008277ec:  cbz      x21, #0x8277fc
008277f0:  add      x0, x21, #0x28
008277f4:  bl       #0x809024
008277f8:  str      s0, [sp, #0xb0]
008277fc:  adrp     x9, #0x36e000
00827800:  add      x9, x9, #0x42
00827804:  mov      w8, #0x2c
00827808:  ldr      q0, [x9]
0082780c:  ldur     x9, [x9, #0xe]
00827810:  sturb    w8, [x29, #-0x30]
00827814:  sturb    wzr, [x29, #-0x19]
00827818:  stur     q0, [x27, #0x81]
0082781c:  stur     x9, [x27, #0x8f]
00827820:  sub      x0, x29, #0x90
00827824:  sub      x1, x29, #0x30
00827828:  bl       #0x817c7c
0082782c:  ldurb    w8, [x29, #-0x30]
00827830:  mov      x21, x0
00827834:  tbz      w8, #0, #0x827840
00827838:  ldur     x0, [x29, #-0x20]
0082783c:  bl       #0x8ccfd0
00827840:  cbz      x21, #0x827850
00827844:  add      x0, x21, #0x28
00827848:  bl       #0x809024
0082784c:  str      s0, [sp, #0xb4]
00827850:  mov      w0, #0x20
00827854:  bl       #0x8ccfa0
00827858:  adrp     x8, #0x372000
0082785c:  stur     x0, [x29, #-0x20]
00827860:  ldr      q0, [x8, #0xd20]
00827864:  adrp     x8, #0x36c000
00827868:  add      x8, x8, #0x45
0082786c:  ldr      q1, [x8]
00827870:  ldur     x8, [x8, #0xf]
00827874:  strb     wzr, [x0, #0x17]
00827878:  stur     q0, [x29, #-0x30]
0082787c:  str      q1, [x0]
00827880:  stur     x8, [x0, #0xf]
00827884:  sub      x0, x29, #0x90
00827888:  sub      x1, x29, #0x30
0082788c:  bl       #0x817c7c
00827890:  ldurb    w8, [x29, #-0x30]
00827894:  mov      x21, x0
00827898:  tbz      w8, #0, #0x8278a4
0082789c:  ldur     x0, [x29, #-0x20]
008278a0:  bl       #0x8ccfd0
008278a4:  cbz      x21, #0x8278b4
008278a8:  add      x0, x21, #0x28
008278ac:  bl       #0x809024
008278b0:  str      s0, [sp, #0xb8]
008278b4:  mov      w8, #0xe
008278b8:  mov      w9, #0x6964
008278bc:  sturb    wzr, [x29, #-0x28]
008278c0:  sturb    w8, [x29, #-0x30]
008278c4:  mov      w8, #0x6469
008278c8:  movk     w9, #0x6976, lsl #16
008278cc:  movk     w8, #0x7265, lsl #16
008278d0:  stur     w9, [x27, #0x81]
008278d4:  stur     w8, [x29, #-0x2c]
008278d8:  sub      x0, x29, #0x90
008278dc:  sub      x1, x29, #0x30
008278e0:  bl       #0x817c7c
008278e4:  ldurb    w8, [x29, #-0x30]
008278e8:  mov      x21, x0
008278ec:  tbz      w8, #0, #0x8278f8
008278f0:  ldur     x0, [x29, #-0x20]
008278f4:  bl       #0x8ccfd0
008278f8:  cbz      x21, #0x827938
008278fc:  ldr      w8, [x21, #0x58]
00827900:  cmp      w8, #1
00827904:  b.eq     #0x827928
00827908:  cbnz     w8, #0x82b1f4
0082790c:  ldr      w1, [x21, #0x28]
00827910:  cmp      w1, #2
00827914:  b.ne     #0x82b20c
00827918:  ldrb     w8, [x21, #0x30]
0082791c:  cmp      w8, #0
00827920:  cset     w0, ne
00827924:  b        #0x827930
00827928:  add      x0, x21, #0x30
0082792c:  bl       #0x8cdb20
00827930:  and      w8, w0, #1
00827934:  strb     w8, [sp, #0xbc]
00827938:  adrp     x10, #0x36f000
0082793c:  add      x10, x10, #0x93e
00827940:  mov      w9, #0x6c6f
00827944:  ldr      x10, [x10]
00827948:  mov      w8, #0x18
0082794c:  movk     w9, #0x726f, lsl #16
00827950:  sturb    w8, [x29, #-0x30]
00827954:  stur     w9, [x27, #0x89]
00827958:  stur     x10, [x27, #0x81]
0082795c:  sturb    wzr, [x29, #-0x23]
00827960:  sub      x0, x29, #0x90
00827964:  sub      x1, x29, #0x30
00827968:  bl       #0x817c7c
0082796c:  ldurb    w8, [x29, #-0x30]
00827970:  mov      x21, x0
00827974:  tbz      w8, #0, #0x827980
00827978:  ldur     x0, [x29, #-0x20]
0082797c:  bl       #0x8ccfd0
00827980:  cbz      x21, #0x8279b8
00827984:  ldr      x8, [sp, #0x70]
00827988:  stur     wzr, [x29, #-0x30]
0082798c:  ldr      x0, [x8, #8]
00827990:  ldr      w1, [x8]
00827994:  adrp     x4, #0x99e000
00827998:  add      x2, x21, #0x28
0082799c:  sub      x3, x29, #0x30
008279a0:  ldr      x4, [x4, #0x140]
008279a4:  bl       #0x807f90
008279a8:  ldur     w8, [x29, #-0x30]
008279ac:  mov      w9, #1
008279b0:  strb     w9, [sp, #0xc4]
008279b4:  str      w8, [sp, #0xc0]
008279b8:  adrp     x10, #0x367000
008279bc:  add      x10, x10, #0xa0f
008279c0:  mov      w8, #0x24
008279c4:  ldr      q0, [x10]
008279c8:  mov      w9, #0x7466
008279cc:  sturb    w8, [x29, #-0x30]
008279d0:  sturh    w9, [x27, #0x91]
008279d4:  stur     q0, [x27, #0x81]
008279d8:  sturb    wzr, [x29, #-0x1d]
008279dc:  sub      x0, x29, #0x90
008279e0:  sub      x1, x29, #0x30
008279e4:  bl       #0x817c7c
008279e8:  ldurb    w8, [x29, #-0x30]
008279ec:  mov      x21, x0
008279f0:  tbz      w8, #0, #0x8279fc
008279f4:  ldur     x0, [x29, #-0x20]
008279f8:  bl       #0x8ccfd0
008279fc:  cbz      x21, #0x827a0c
00827a00:  add      x0, x21, #0x28
00827a04:  bl       #0x809024
00827a08:  str      s0, [sp, #0xc8]
00827a0c:  adrp     x10, #0x36a000
00827a10:  add      x10, x10, #0x836
00827a14:  mov      w9, #0x6769
00827a18:  ldr      q0, [x10]
00827a1c:  mov      w8, #0x26
00827a20:  movk     w9, #0x7468, lsl #16
00827a24:  sturb    w8, [x29, #-0x30]
00827a28:  stur     w9, [x29, #-0x20]
00827a2c:  stur     q0, [x27, #0x81]
00827a30:  sturb    wzr, [x29, #-0x1c]
00827a34:  sub      x0, x29, #0x90
00827a38:  sub      x1, x29, #0x30
00827a3c:  bl       #0x817c7c
00827a40:  ldurb    w8, [x29, #-0x30]
00827a44:  mov      x21, x0
00827a48:  tbz      w8, #0, #0x827a54
00827a4c:  ldur     x0, [x29, #-0x20]
00827a50:  bl       #0x8ccfd0
00827a54:  cbz      x21, #0x827a64
00827a58:  add      x0, x21, #0x28
00827a5c:  bl       #0x809024
00827a60:  str      s0, [sp, #0xcc]
00827a64:  adrp     x9, #0x36c000
00827a68:  add      x9, x9, #0x4b4
00827a6c:  mov      w8, #0x20
00827a70:  ldr      q0, [x9]
00827a74:  sturb    w8, [x29, #-0x30]
00827a78:  sturb    wzr, [x29, #-0x1f]
00827a7c:  stur     q0, [x27, #0x81]
00827a80:  sub      x0, x29, #0x90
00827a84:  sub      x1, x29, #0x30
00827a88:  bl       #0x817c7c
00827a8c:  ldurb    w8, [x29, #-0x30]
00827a90:  mov      x21, x0
00827a94:  tbz      w8, #0, #0x827aa0
00827a98:  ldur     x0, [x29, #-0x20]
00827a9c:  bl       #0x8ccfd0
00827aa0:  cbz      x21, #0x827b1c
00827aa4:  sub      x8, x29, #0x30
00827aa8:  add      x0, x21, #0x28
00827aac:  bl       #0x807a6c
00827ab0:  ldp      x10, x20, [x29, #-0x28]
00827ab4:  ldur     x8, [x27, #0x82]
00827ab8:  ldurb    w21, [x29, #-0x30]
00827abc:  ldrb     w9, [sp, #0xe8]
00827ac0:  ldurb    w22, [x29, #-0x2f]
00827ac4:  stur     x8, [x29, #-0x40]
00827ac8:  stur     x10, [x27, #0x76]
00827acc:  cbz      w9, #0x827afc
00827ad0:  ldrb     w8, [sp, #0xd0]
00827ad4:  tbz      w8, #0, #0x827ae0
00827ad8:  ldr      x0, [sp, #0xe0]
00827adc:  bl       #0x8ccfd0
00827ae0:  ldur     x8, [x29, #-0x40]
00827ae4:  ldur     x9, [x27, #0x76]
00827ae8:  strb     w21, [sp, #0xd0]
00827aec:  strb     w22, [sp, #0xd1]
00827af0:  stur     x8, [sp, #0xd2]
00827af4:  stp      x9, x20, [sp, #0xd8]
00827af8:  b        #0x827b1c
00827afc:  ldur     x8, [x29, #-0x40]
00827b00:  ldur     x9, [x27, #0x76]
00827b04:  strb     w21, [sp, #0xd0]
00827b08:  strb     w22, [sp, #0xd1]
00827b0c:  stur     x8, [sp, #0xd2]
00827b10:  mov      w8, #1
00827b14:  stp      x9, x20, [sp, #0xd8]
00827b18:  strb     w8, [sp, #0xe8]
00827b1c:  adrp     x9, #0x36a000
00827b20:  add      x9, x9, #0x84a
00827b24:  mov      w8, #0x2a
00827b28:  ldr      q0, [x9]
00827b2c:  ldur     x9, [x9, #0xd]
00827b30:  sturb    w8, [x29, #-0x30]
00827b34:  sturb    wzr, [x29, #-0x1a]
00827b38:  stur     q0, [x27, #0x81]
00827b3c:  stur     x9, [x27, #0x8e]
00827b40:  sub      x0, x29, #0x90
00827b44:  sub      x1, x29, #0x30
00827b48:  bl       #0x817c7c
00827b4c:  ldurb    w8, [x29, #-0x30]
00827b50:  mov      x21, x0
00827b54:  tbz      w8, #0, #0x827b60
00827b58:  ldur     x0, [x29, #-0x20]
00827b5c:  bl       #0x8ccfd0
00827b60:  cbz      x21, #0x827b98
00827b64:  ldr      x8, [sp, #0x70]
00827b68:  stur     wzr, [x29, #-0x30]
00827b6c:  ldr      x0, [x8, #8]
00827b70:  ldr      w1, [x8]
00827b74:  adrp     x4, #0x99e000
00827b78:  add      x2, x21, #0x28
00827b7c:  sub      x3, x29, #0x30
00827b80:  ldr      x4, [x4, #0x140]
00827b84:  bl       #0x807f90
00827b88:  ldur     w8, [x29, #-0x30]
00827b8c:  mov      w9, #1
00827b90:  strb     w9, [sp, #0xf4]
00827b94:  str      w8, [sp, #0xf0]
00827b98:  adrp     x9, #0x36d000
00827b9c:  add      x9, x9, #0x9e1
00827ba0:  mov      w8, #0x2a
00827ba4:  ldr      q0, [x9]
00827ba8:  ldur     x9, [x9, #0xd]
00827bac:  sturb    w8, [x29, #-0x30]
00827bb0:  sturb    wzr, [x29, #-0x1a]
00827bb4:  stur     q0, [x27, #0x81]
00827bb8:  stur     x9, [x27, #0x8e]
00827bbc:  sub      x0, x29, #0x90
00827bc0:  sub      x1, x29, #0x30
00827bc4:  bl       #0x817c7c
00827bc8:  ldurb    w8, [x29, #-0x30]
00827bcc:  mov      x21, x0
00827bd0:  tbz      w8, #0, #0x827bdc
00827bd4:  ldur     x0, [x29, #-0x20]
00827bd8:  bl       #0x8ccfd0
00827bdc:  cbz      x21, #0x827bec
00827be0:  add      x0, x21, #0x28
00827be4:  bl       #0x8161a0
00827be8:  str      w0, [sp, #0xf8]
00827bec:  adrp     x10, #0x36a000
00827bf0:  add      x10, x10, #0xe77
00827bf4:  mov      w9, #0x4765
00827bf8:  ldr      q0, [x10]
00827bfc:  mov      w8, #0x26
00827c00:  movk     w9, #0x7061, lsl #16
00827c04:  sturb    w8, [x29, #-0x30]
00827c08:  stur     w9, [x29, #-0x20]
00827c0c:  stur     q0, [x27, #0x81]
00827c10:  sturb    wzr, [x29, #-0x1c]
00827c14:  sub      x0, x29, #0x90
00827c18:  sub      x1, x29, #0x30
00827c1c:  bl       #0x817c7c
00827c20:  ldurb    w8, [x29, #-0x30]
00827c24:  mov      x21, x0
00827c28:  tbz      w8, #0, #0x827c34
00827c2c:  ldur     x0, [x29, #-0x20]
00827c30:  bl       #0x8ccfd0
00827c34:  cbz      x21, #0x827c44
00827c38:  add      x0, x21, #0x28
00827c3c:  bl       #0x809024
00827c40:  str      s0, [sp, #0xfc]
00827c44:  mov      w0, #0x30
00827c48:  bl       #0x8ccfa0
00827c4c:  adrp     x8, #0x373000
00827c50:  stur     x0, [x29, #-0x20]
00827c54:  ldr      q2, [x8, #0x40]
00827c58:  mov      w8, #0x6c
00827c5c:  strh     w8, [x0, #0x20]
00827c60:  adrp     x8, #0x369000
00827c64:  add      x8, x8, #0x87b
00827c68:  ldp      q0, q1, [x8]
00827c6c:  str      q2, [sp, #0x50]
00827c70:  stur     q2, [x29, #-0x30]
00827c74:  stp      q0, q1, [x0]
00827c78:  sub      x0, x29, #0x90
00827c7c:  sub      x1, x29, #0x30
00827c80:  bl       #0x817c7c
00827c84:  ldurb    w8, [x29, #-0x30]
00827c88:  mov      x21, x0
00827c8c:  tbz      w8, #0, #0x827c98
00827c90:  ldur     x0, [x29, #-0x20]
00827c94:  bl       #0x8ccfd0
00827c98:  cbz      x21, #0x827ca8
00827c9c:  add      x0, x21, #0x28
00827ca0:  bl       #0x809024
00827ca4:  str      s0, [sp, #0x100]
00827ca8:  mov      w0, #0x20
00827cac:  bl       #0x8ccfa0
00827cb0:  adrp     x8, #0x372000
00827cb4:  stur     x0, [x29, #-0x20]
00827cb8:  ldr      q0, [x8, #0x250]
00827cbc:  adrp     x8, #0x36a000
00827cc0:  add      x8, x8, #0x258
00827cc4:  ldr      q1, [x8]
00827cc8:  ldur     q2, [x8, #0xf]
00827ccc:  strb     wzr, [x0, #0x1f]
00827cd0:  stur     q0, [x29, #-0x30]
00827cd4:  str      q1, [x0]
00827cd8:  stur     q2, [x0, #0xf]
00827cdc:  sub      x0, x29, #0x90
00827ce0:  sub      x1, x29, #0x30
00827ce4:  bl       #0x817c7c
00827ce8:  ldurb    w8, [x29, #-0x30]
00827cec:  mov      x21, x0
00827cf0:  tbz      w8, #0, #0x827cfc
00827cf4:  ldur     x0, [x29, #-0x20]
00827cf8:  bl       #0x8ccfd0
00827cfc:  cbz      x21, #0x827d0c
00827d00:  add      x0, x21, #0x28
00827d04:  bl       #0x809024
00827d08:  str      s0, [sp, #0x104]
00827d0c:  mov      w0, #0x20
00827d10:  bl       #0x8ccfa0
00827d14:  adrp     x8, #0x371000
00827d18:  stur     x0, [x29, #-0x20]
00827d1c:  ldr      q0, [x8, #0x7a0]
00827d20:  adrp     x8, #0x370000
00827d24:  add      x8, x8, #0x665
00827d28:  ldr      q1, [x8]
00827d2c:  ldur     q2, [x8, #0xe]
00827d30:  strb     wzr, [x0, #0x1e]
00827d34:  stur     q0, [x29, #-0x30]
00827d38:  str      q1, [x0]
00827d3c:  stur     q2, [x0, #0xe]
00827d40:  sub      x0, x29, #0x90
00827d44:  sub      x1, x29, #0x30
00827d48:  bl       #0x817c7c
00827d4c:  ldurb    w8, [x29, #-0x30]
00827d50:  mov      x21, x0
00827d54:  tbz      w8, #0, #0x827d60
00827d58:  ldur     x0, [x29, #-0x20]
00827d5c:  bl       #0x8ccfd0
00827d60:  cbz      x21, #0x827d98
00827d64:  ldr      x8, [sp, #0x70]
00827d68:  stur     wzr, [x29, #-0x30]
00827d6c:  ldr      x0, [x8, #8]
00827d70:  ldr      w1, [x8]
00827d74:  adrp     x4, #0x99e000
00827d78:  add      x2, x21, #0x28
00827d7c:  sub      x3, x29, #0x30
00827d80:  ldr      x4, [x4, #0x140]
00827d84:  bl       #0x807f90
00827d88:  ldur     w8, [x29, #-0x30]
00827d8c:  mov      w9, #1
00827d90:  strb     w9, [sp, #0x10c]
00827d94:  str      w8, [sp, #0x108]
00827d98:  adrp     x10, #0x368000
00827d9c:  add      x10, x10, #0xd84
00827da0:  mov      w9, #0x6c6f
00827da4:  ldr      q0, [x10]
00827da8:  mov      w8, #0x28
00827dac:  movk     w9, #0x726f, lsl #16
00827db0:  sturb    w8, [x29, #-0x30]
00827db4:  stur     w9, [x27, #0x91]
00827db8:  stur     q0, [x27, #0x81]
00827dbc:  sturb    wzr, [x29, #-0x1b]
00827dc0:  sub      x0, x29, #0x90
00827dc4:  sub      x1, x29, #0x30
00827dc8:  bl       #0x817c7c
00827dcc:  ldurb    w8, [x29, #-0x30]
00827dd0:  mov      x21, x0
00827dd4:  tbz      w8, #0, #0x827de0
00827dd8:  ldur     x0, [x29, #-0x20]
00827ddc:  bl       #0x8ccfd0
00827de0:  cbz      x21, #0x827e18
00827de4:  ldr      x8, [sp, #0x70]
00827de8:  stur     wzr, [x29, #-0x30]
00827dec:  ldr      x0, [x8, #8]
00827df0:  ldr      w1, [x8]
00827df4:  adrp     x4, #0x99e000
00827df8:  add      x2, x21, #0x28
00827dfc:  sub      x3, x29, #0x30
00827e00:  ldr      x4, [x4, #0x140]
00827e04:  bl       #0x807f90
00827e08:  ldur     w8, [x29, #-0x30]
00827e0c:  mov      w9, #1
00827e10:  strb     w9, [sp, #0x114]
00827e14:  str      w8, [sp, #0x110]
00827e18:  mov      w0, #0x20
00827e1c:  bl       #0x8ccfa0
00827e20:  adrp     x8, #0x371000
00827e24:  stur     x0, [x29, #-0x20]
00827e28:  ldr      q0, [x8, #0xb20]
00827e2c:  adrp     x8, #0x369000
00827e30:  add      x8, x8, #0x3df
00827e34:  ldr      q1, [x8]
00827e38:  ldur     q2, [x8, #0xb]
00827e3c:  strb     wzr, [x0, #0x1b]
00827e40:  stur     q0, [x29, #-0x30]
00827e44:  str      q1, [x0]
00827e48:  stur     q2, [x0, #0xb]
00827e4c:  sub      x0, x29, #0x90
00827e50:  sub      x1, x29, #0x30
00827e54:  bl       #0x817c7c
00827e58:  ldurb    w8, [x29, #-0x30]
00827e5c:  mov      x21, x0
00827e60:  tbz      w8, #0, #0x827e6c
00827e64:  ldur     x0, [x29, #-0x20]
00827e68:  bl       #0x8ccfd0
00827e6c:  cbz      x21, #0x827e7c
00827e70:  add      x0, x21, #0x28
00827e74:  bl       #0x809024
00827e78:  str      s0, [sp, #0x118]
00827e7c:  mov      w0, #0x30
00827e80:  bl       #0x8ccfa0
00827e84:  adrp     x8, #0x371000
00827e88:  stur     x0, [x29, #-0x20]
00827e8c:  ldr      q0, [x8, #0x9d0]
00827e90:  adrp     x8, #0x370000
00827e94:  add      x8, x8, #0xae2
00827e98:  ldp      q1, q2, [x8]
00827e9c:  ldur     x8, [x8, #0x1d]
00827ea0:  stur     q0, [x29, #-0x30]
00827ea4:  strb     wzr, [x0, #0x25]
00827ea8:  stp      q1, q2, [x0]
00827eac:  stur     x8, [x0, #0x1d]
00827eb0:  sub      x0, x29, #0x90
00827eb4:  sub      x1, x29, #0x30
00827eb8:  bl       #0x817c7c
00827ebc:  ldurb    w8, [x29, #-0x30]
00827ec0:  mov      x21, x0
00827ec4:  tbz      w8, #0, #0x827ed0
00827ec8:  ldur     x0, [x29, #-0x20]
00827ecc:  bl       #0x8ccfd0
00827ed0:  cbz      x21, #0x827ee0
00827ed4:  add      x0, x21, #0x28
00827ed8:  bl       #0x809024
00827edc:  str      s0, [sp, #0x11c]
00827ee0:  mov      w0, #0x20
00827ee4:  bl       #0x8ccfa0
00827ee8:  adrp     x8, #0x371000
00827eec:  stur     x0, [x29, #-0x20]
00827ef0:  ldr      q1, [x8, #0x460]
00827ef4:  adrp     x8, #0x36f000
00827ef8:  add      x8, x8, #0x94b
00827efc:  ldr      q0, [x8]
00827f00:  ldr      x8, [x8, #0x10]
00827f04:  strb     wzr, [x0, #0x18]
00827f08:  str      q1, [sp, #0x40]
00827f0c:  stur     q1, [x29, #-0x30]
00827f10:  str      q0, [x0]
00827f14:  str      x8, [x0, #0x10]
00827f18:  sub      x0, x29, #0x90
00827f1c:  sub      x1, x29, #0x30
00827f20:  bl       #0x817c7c
00827f24:  ldurb    w8, [x29, #-0x30]
00827f28:  mov      x21, x0
00827f2c:  tbz      w8, #0, #0x827f38
00827f30:  ldur     x0, [x29, #-0x20]
00827f34:  bl       #0x8ccfd0
00827f38:  cbz      x21, #0x827f48
00827f3c:  add      x0, x21, #0x28
00827f40:  bl       #0x809024
00827f44:  str      s0, [sp, #0x120]
00827f48:  mov      w0, #0x30
00827f4c:  bl       #0x8ccfa0
00827f50:  ldr      q0, [sp, #0x50]
00827f54:  adrp     x9, #0x36c000
00827f58:  add      x9, x9, #0x4c5
00827f5c:  mov      w8, #0x65
00827f60:  stur     x0, [x29, #-0x20]
00827f64:  stur     q0, [x29, #-0x30]
00827f68:  ldp      q0, q1, [x9]
00827f6c:  strh     w8, [x0, #0x20]
00827f70:  stp      q0, q1, [x0]
00827f74:  sub      x0, x29, #0x90
00827f78:  sub      x1, x29, #0x30
00827f7c:  bl       #0x817c7c
00827f80:  ldurb    w8, [x29, #-0x30]
00827f84:  mov      x21, x0
00827f88:  tbz      w8, #0, #0x827f94
00827f8c:  ldur     x0, [x29, #-0x20]
00827f90:  bl       #0x8ccfd0
00827f94:  cbz      x21, #0x827fa4
00827f98:  add      x0, x21, #0x28
00827f9c:  bl       #0x809024
00827fa0:  str      s0, [sp, #0x124]
00827fa4:  adrp     x9, #0x365000
00827fa8:  add      x9, x9, #0xd68
00827fac:  mov      w8, #0x2c
00827fb0:  ldr      q0, [x9]
00827fb4:  ldur     x9, [x9, #0xe]
00827fb8:  sturb    w8, [x29, #-0x30]
00827fbc:  sturb    wzr, [x29, #-0x19]
00827fc0:  stur     q0, [x27, #0x81]
00827fc4:  stur     x9, [x27, #0x8f]
00827fc8:  sub      x0, x29, #0x90
00827fcc:  sub      x1, x29, #0x30
00827fd0:  bl       #0x817c7c
00827fd4:  ldurb    w8, [x29, #-0x30]
00827fd8:  mov      x21, x0
00827fdc:  tbz      w8, #0, #0x827fe8
00827fe0:  ldur     x0, [x29, #-0x20]
00827fe4:  bl       #0x8ccfd0
00827fe8:  cbz      x21, #0x827ff8
00827fec:  add      x0, x21, #0x28
00827ff0:  bl       #0x809024
00827ff4:  str      s0, [sp, #0x128]
00827ff8:  adrp     x10, #0x36c000
00827ffc:  add      x10, x10, #0x4e7
00828000:  mov      w9, #0x6168
00828004:  ldr      q0, [x10]
00828008:  mov      w8, #0x28
0082800c:  movk     w9, #0x6570, lsl #16
00828010:  sturb    w8, [x29, #-0x30]
00828014:  stur     w9, [x27, #0x91]
00828018:  stur     q0, [x27, #0x81]
0082801c:  sturb    wzr, [x29, #-0x1b]
00828020:  sub      x0, x29, #0x90
00828024:  sub      x1, x29, #0x30
00828028:  bl       #0x817c7c
0082802c:  ldurb    w8, [x29, #-0x30]
00828030:  mov      x21, x0
00828034:  tbz      w8, #0, #0x828040
00828038:  ldur     x0, [x29, #-0x20]
0082803c:  bl       #0x8ccfd0
00828040:  cbz      x21, #0x8280c4
00828044:  sub      x8, x29, #0x30
00828048:  add      x0, x21, #0x28
0082804c:  bl       #0x807a6c
00828050:  ldp      x10, x20, [x29, #-0x28]
00828054:  ldur     x8, [x27, #0x82]
00828058:  ldurb    w21, [x29, #-0x30]
0082805c:  ldrb     w9, [sp, #0x148]
00828060:  ldurb    w22, [x29, #-0x2f]
00828064:  stur     x8, [x29, #-0x40]
00828068:  stur     x10, [x27, #0x76]
0082806c:  cbz      w9, #0x8280a0
00828070:  ldrb     w8, [sp, #0x130]
00828074:  tbz      w8, #0, #0x828080
00828078:  ldr      x0, [sp, #0x140]
0082807c:  bl       #0x8ccfd0
00828080:  ldur     x8, [x29, #-0x40]
00828084:  ldur     x9, [x27, #0x76]
00828088:  add      x10, sp, #0xa8
0082808c:  strb     w21, [sp, #0x130]
00828090:  strb     w22, [sp, #0x131]
00828094:  stur     x8, [x10, #0x8a]
00828098:  stp      x9, x20, [sp, #0x138]
0082809c:  b        #0x8280c4
008280a0:  ldur     x8, [x29, #-0x40]
008280a4:  ldur     x9, [x27, #0x76]
008280a8:  add      x10, sp, #0xa8
008280ac:  strb     w21, [sp, #0x130]
008280b0:  stur     x8, [x10, #0x8a]
008280b4:  mov      w8, #1
008280b8:  strb     w22, [sp, #0x131]
008280bc:  stp      x9, x20, [sp, #0x138]
008280c0:  strb     w8, [sp, #0x148]
008280c4:  mov      w0, #0x20
008280c8:  bl       #0x8ccfa0
008280cc:  adrp     x8, #0x36b000
008280d0:  add      x8, x8, #0x944
008280d4:  ldr      q1, [sp, #0x40]
008280d8:  ldr      q0, [x8]
008280dc:  ldr      x8, [x8, #0x10]
008280e0:  stur     x0, [x29, #-0x20]
008280e4:  stur     q1, [x29, #-0x30]
008280e8:  str      q0, [x0]
008280ec:  str      x8, [x0, #0x10]
008280f0:  strb     wzr, [x0, #0x18]
008280f4:  sub      x0, x29, #0x90
008280f8:  sub      x1, x29, #0x30
008280fc:  bl       #0x817c7c
00828100:  ldurb    w8, [x29, #-0x30]
00828104:  mov      x21, x0
00828108:  tbz      w8, #0, #0x828114
0082810c:  ldur     x0, [x29, #-0x20]
00828110:  bl       #0x8ccfd0
00828114:  cbz      x21, #0x828124
00828118:  add      x0, x21, #0x28
0082811c:  bl       #0x809024
00828120:  str      s0, [sp, #0x150]
00828124:  adrp     x10, #0x369000
00828128:  add      x10, x10, #0x89d
0082812c:  mov      w8, #0x1e
00828130:  ldr      x9, [x10]
00828134:  ldur     x10, [x10, #7]
00828138:  sturb    w8, [x29, #-0x30]
0082813c:  sturb    wzr, [x29, #-0x20]
00828140:  stur     x9, [x27, #0x81]
00828144:  stur     x10, [x29, #-0x28]
00828148:  sub      x0, x29, #0x90
0082814c:  sub      x1, x29, #0x30
00828150:  bl       #0x817c7c
00828154:  ldurb    w8, [x29, #-0x30]
00828158:  mov      x21, x0
0082815c:  tbz      w8, #0, #0x828168
00828160:  ldur     x0, [x29, #-0x20]
00828164:  bl       #0x8ccfd0
00828168:  cbz      x21, #0x828178
0082816c:  add      x0, x21, #0x28
00828170:  bl       #0x8161a0
00828174:  str      w0, [sp, #0x154]
00828178:  mov      w8, #0xa
0082817c:  mov      w9, #0x6977
00828180:  movk     w9, #0x7464, lsl #16
00828184:  sturb    w8, [x29, #-0x30]
00828188:  mov      w8, #0x68
0082818c:  stur     w9, [x27, #0x81]
00828190:  sturh    w8, [x27, #0x85]
00828194:  sub      x0, x29, #0x90
00828198:  sub      x1, x29, #0x30
0082819c:  bl       #0x817c7c
008281a0:  ldurb    w8, [x29, #-0x30]
008281a4:  mov      x21, x0
008281a8:  tbz      w8, #0, #0x8281b4
008281ac:  ldur     x0, [x29, #-0x20]
008281b0:  bl       #0x8ccfd0
008281b4:  cbz      x21, #0x8281c4
008281b8:  add      x0, x21, #0x28
008281bc:  bl       #0x809024
008281c0:  str      s0, [sp, #0x158]
008281c4:  mov      w8, #0xc
008281c8:  mov      w9, #0x6568
008281cc:  sturb    wzr, [x29, #-0x29]
008281d0:  movk     w9, #0x6769, lsl #16
008281d4:  sturb    w8, [x29, #-0x30]
008281d8:  mov      w8, #0x7468
008281dc:  stur     w9, [x27, #0x81]
008281e0:  sturh    w8, [x27, #0x85]
008281e4:  sub      x0, x29, #0x90
008281e8:  sub      x1, x29, #0x30
008281ec:  bl       #0x817c7c
008281f0:  ldurb    w8, [x29, #-0x30]
008281f4:  mov      x21, x0
008281f8:  tbz      w8, #0, #0x828204
008281fc:  ldur     x0, [x29, #-0x20]
00828200:  bl       #0x8ccfd0
00828204:  cbz      x21, #0x828214
00828208:  add      x0, x21, #0x28
0082820c:  bl       #0x809024
00828210:  str      s0, [sp, #0x15c]
00828214:  adrp     x10, #0x36e000
00828218:  add      x10, x10, #0x59
0082821c:  mov      w8, #0x22
00828220:  ldr      q0, [x10]
00828224:  mov      w9, #0x74
00828228:  sturb    w8, [x29, #-0x30]
0082822c:  sturh    w9, [x27, #0x91]
00828230:  stur     q0, [x27, #0x81]
00828234:  sub      x0, x29, #0x90
00828238:  sub      x1, x29, #0x30
0082823c:  bl       #0x817c7c
00828240:  ldurb    w8, [x29, #-0x30]
00828244:  mov      x21, x0
00828248:  tbz      w8, #0, #0x828254
0082824c:  ldur     x0, [x29, #-0x20]
00828250:  bl       #0x8ccfd0
00828254:  cbz      x21, #0x8282d8
00828258:  sub      x8, x29, #0x30
0082825c:  add      x0, x21, #0x28
00828260:  bl       #0x807a6c
00828264:  ldp      x10, x20, [x29, #-0x28]
00828268:  ldur     x8, [x27, #0x82]
0082826c:  ldurb    w21, [x29, #-0x30]
00828270:  ldrb     w9, [sp, #0x178]
00828274:  ldurb    w22, [x29, #-0x2f]
00828278:  stur     x8, [x29, #-0x40]
0082827c:  stur     x10, [x27, #0x76]
00828280:  cbz      w9, #0x8282b4
00828284:  ldrb     w8, [sp, #0x160]
00828288:  tbz      w8, #0, #0x828294
0082828c:  ldr      x0, [sp, #0x170]
00828290:  bl       #0x8ccfd0
00828294:  ldur     x8, [x29, #-0x40]
00828298:  ldur     x9, [x27, #0x76]
0082829c:  add      x10, sp, #0xa8
008282a0:  strb     w21, [sp, #0x160]
008282a4:  strb     w22, [sp, #0x161]
008282a8:  stur     x8, [x10, #0xba]
008282ac:  stp      x9, x20, [sp, #0x168]
008282b0:  b        #0x8282d8
008282b4:  ldur     x8, [x29, #-0x40]
008282b8:  ldur     x9, [x27, #0x76]
008282bc:  add      x10, sp, #0xa8
008282c0:  strb     w21, [sp, #0x160]
008282c4:  stur     x8, [x10, #0xba]
008282c8:  mov      w8, #1
008282cc:  strb     w22, [sp, #0x161]
008282d0:  stp      x9, x20, [sp, #0x168]
008282d4:  strb     w8, [sp, #0x178]
008282d8:  adrp     x10, #0x365000
008282dc:  add      x10, x10, #0x32
008282e0:  mov      w9, #0x656d
008282e4:  ldr      q0, [x10]
008282e8:  mov      w8, #0x26
008282ec:  movk     w9, #0x746e, lsl #16
008282f0:  sturb    w8, [x29, #-0x30]
008282f4:  stur     w9, [x29, #-0x20]
008282f8:  stur     q0, [x27, #0x81]
008282fc:  sturb    wzr, [x29, #-0x1c]
00828300:  sub      x0, x29, #0x90
00828304:  sub      x1, x29, #0x30
00828308:  bl       #0x817c7c
0082830c:  ldurb    w8, [x29, #-0x30]
00828310:  mov      x21, x0
00828314:  tbz      w8, #0, #0x828320
00828318:  ldur     x0, [x29, #-0x20]
0082831c:  bl       #0x8ccfd0
00828320:  cbz      x21, #0x82837c
00828324:  sub      x8, x29, #0x30
00828328:  add      x0, x21, #0x28
0082832c:  bl       #0x807a6c
00828330:  ldp      x10, x20, [x29, #-0x28]
00828334:  ldur     x8, [x27, #0x82]
00828338:  ldurb    w21, [x29, #-0x30]
0082833c:  ldrb     w9, [sp, #0x198]
00828340:  ldurb    w22, [x29, #-0x2f]
00828344:  stur     x8, [x29, #-0x40]
00828348:  stur     x10, [x27, #0x76]
0082834c:  cbz      w9, #0x8283dc
00828350:  ldrb     w8, [sp, #0x180]
00828354:  tbz      w8, #0, #0x828360
00828358:  ldr      x0, [sp, #0x190]
0082835c:  bl       #0x8ccfd0
00828360:  ldur     x8, [x29, #-0x40]
00828364:  ldur     x9, [x27, #0x76]
00828368:  add      x10, sp, #0xa8
0082836c:  strb     w21, [sp, #0x180]
00828370:  strb     w22, [sp, #0x181]
00828374:  stur     x8, [x10, #0xda]
00828378:  stp      x9, x20, [sp, #0x188]
0082837c:  ldur     x21, [x29, #-0x80]
00828380:  cbz      x21, #0x828408
00828384:  mov      w20, #-1
00828388:  b        #0x82839c
0082838c:  mov      x0, x21
00828390:  bl       #0x8ccfd0
00828394:  mov      x21, x22
00828398:  cbz      x22, #0x828408
0082839c:  ldr      w8, [x21, #0x58]
008283a0:  ldr      x22, [x21]
008283a4:  cmn      w8, #1
008283a8:  b.eq     #0x8283c4
008283ac:  adrp     x9, #0x98c000
008283b0:  add      x9, x9, #0x980
008283b4:  ldr      x8, [x9, x8, lsl #3]
008283b8:  sub      x0, x29, #0x30
008283bc:  add      x1, x21, #0x28
008283c0:  blr      x8
008283c4:  ldrb     w8, [x21, #0x10]
008283c8:  str      w20, [x21, #0x58]
008283cc:  tbz      w8, #0, #0x82838c
008283d0:  ldr      x0, [x21, #0x20]
008283d4:  bl       #0x8ccfd0
008283d8:  b        #0x82838c
008283dc:  ldur     x8, [x29, #-0x40]
008283e0:  ldur     x9, [x27, #0x76]
008283e4:  add      x10, sp, #0xa8
008283e8:  strb     w21, [sp, #0x180]
008283ec:  stur     x8, [x10, #0xda]
008283f0:  mov      w8, #1
008283f4:  strb     w22, [sp, #0x181]
008283f8:  stp      x9, x20, [sp, #0x188]
008283fc:  strb     w8, [sp, #0x198]
00828400:  ldur     x21, [x29, #-0x80]
00828404:  cbnz     x21, #0x828384
00828408:  ldur     x0, [x29, #-0x90]
0082840c:  stur     xzr, [x29, #-0x90]
00828410:  cbz      x0, #0x828418
00828414:  bl       #0x8ccfd0
00828418:  ldrb     w22, [sp, #0xe8]
0082841c:  add      x8, sp, #0xa8
00828420:  cbz      w22, #0x828450
00828424:  ldur     x9, [sp, #0xd2]
00828428:  ldrb     w20, [sp, #0xd0]
0082842c:  ldrb     w3, [sp, #0xd1]
00828430:  stur     x9, [x29, #-0x40]
00828434:  ldp      x10, x9, [sp, #0xd8]
00828438:  stp      xzr, xzr, [sp, #0xd0]
0082843c:  str      xzr, [sp, #0xe0]
00828440:  str      x9, [sp, #0x38]
00828444:  mov      w9, #1
00828448:  stur     x10, [x27, #0x76]
0082844c:  b        #0x828458
00828450:  mov      w20, wzr
00828454:  mov      w9, wzr
00828458:  ldur     q0, [x8, #0x48]
0082845c:  ldur     q1, [x8, #0x58]
00828460:  ldur     q2, [x8, #0x68]
00828464:  ldrb     w21, [sp, #0x148]
00828468:  stur     q0, [x27, #0x27]
0082846c:  ldur     q0, [x8, #0x74]
00828470:  stur     q1, [x27, #0x37]
00828474:  stur     q2, [x27, #0x47]
00828478:  stur     q0, [x27, #0x53]
0082847c:  cbz      w21, #0x8284b4
00828480:  add      x10, sp, #0xa8
00828484:  ldrb     w17, [sp, #0x131]
00828488:  mov      w4, #1
0082848c:  ldur     x10, [x10, #0x8a]
00828490:  stur     x10, [x29, #-0xa0]
00828494:  ldp      x11, x10, [sp, #0x138]
00828498:  str      x10, [sp, #0x40]
0082849c:  ldrb     w10, [sp, #0x130]
008284a0:  stur     x11, [x27, #0x16]
008284a4:  str      w10, [sp, #0x50]
008284a8:  stp      xzr, xzr, [x8, #0x90]
008284ac:  stur     xzr, [x8, #0x88]
008284b0:  b        #0x8284bc
008284b4:  str      wzr, [sp, #0x50]
008284b8:  mov      w4, wzr
008284bc:  ldur     q0, [x8, #0xa8]
008284c0:  ldrb     w10, [sp, #0x178]
008284c4:  stur     q0, [x27, #0x87]
008284c8:  str      w10, [sp, #0x30]
008284cc:  cbz      w10, #0x828500
008284d0:  add      x10, sp, #0xa8
008284d4:  ldrb     w14, [sp, #0x160]
008284d8:  ldrb     w16, [sp, #0x161]
008284dc:  ldur     x10, [x10, #0xba]
008284e0:  mov      w2, #1
008284e4:  stur     x10, [x29, #-0xb0]
008284e8:  ldp      x11, x10, [sp, #0x168]
008284ec:  stp      xzr, xzr, [sp, #0x160]
008284f0:  str      xzr, [sp, #0x170]
008284f4:  str      x10, [sp, #0x18]
008284f8:  stur     x11, [x27, #6]
008284fc:  b        #0x828508
00828500:  mov      w14, wzr
00828504:  mov      w2, wzr
00828508:  ldrb     w15, [sp, #0x198]
0082850c:  add      x10, x19, #0x500
00828510:  stp      w22, w21, [sp, #0x24]
00828514:  cbz      w15, #0x828548
00828518:  add      x13, sp, #0xa8
0082851c:  ldp      x12, x0, [sp, #0x188]
00828520:  ldur     x11, [x13, #0xda]
00828524:  mov      w1, #1
00828528:  stur     x11, [x29, #-0xc0]
0082852c:  ldrb     w11, [sp, #0x181]
00828530:  stur     x12, [x13, #0xfe]
00828534:  ldrb     w13, [sp, #0x180]
00828538:  str      w11, [sp, #8]
0082853c:  stp      xzr, xzr, [x8, #0xe0]
00828540:  stur     xzr, [x8, #0xd8]
00828544:  b        #0x828550
00828548:  mov      w13, wzr
0082854c:  mov      w1, wzr
00828550:  ldur     q0, [sp, #0xa8]
00828554:  ldur     q1, [sp, #0xb8]
00828558:  ldrb     w11, [x19, #0x5f8]
0082855c:  ldr      x12, [sp, #0xc8]
00828560:  stp      q0, q1, [x10]
00828564:  str      x12, [x10, #0x20]
00828568:  cbz      w11, #0x828604
0082856c:  ldrb     w8, [x19, #0x540]
00828570:  sub      x28, x29, #0x90
00828574:  str      x0, [sp, #0x10]
00828578:  str      w13, [sp, #0xc]
0082857c:  cmp      w8, w9
00828580:  b.ne     #0x828774
00828584:  cbz      w8, #0x82884c
00828588:  ldrb     w8, [x19, #0x528]
0082858c:  tbz      w8, #0, #0x8285d8
00828590:  ldr      x0, [x19, #0x538]
00828594:  mov      w25, w14
00828598:  mov      w23, w15
0082859c:  mov      w26, w16
008285a0:  stp      w4, w17, [sp]
008285a4:  mov      w24, w1
008285a8:  mov      w22, w2
008285ac:  mov      w21, w3
008285b0:  bl       #0x8ccfd0
008285b4:  ldp      w4, w17, [sp]
008285b8:  ldr      w13, [sp, #0xc]
008285bc:  ldr      x0, [sp, #0x10]
008285c0:  mov      w3, w21
008285c4:  mov      w2, w22
008285c8:  mov      w1, w24
008285cc:  mov      w16, w26
008285d0:  mov      w15, w23
008285d4:  mov      w14, w25
008285d8:  ldur     x8, [x27, #0x76]
008285dc:  ldur     x9, [x29, #-0x40]
008285e0:  add      x10, x19, #0x52a
008285e4:  strb     w20, [x19, #0x528]
008285e8:  mov      w20, wzr
008285ec:  str      x8, [x19, #0x530]
008285f0:  ldr      x8, [sp, #0x38]
008285f4:  strb     w3, [x19, #0x529]
008285f8:  str      x9, [x10]
008285fc:  str      x8, [x19, #0x538]
00828600:  b        #0x82884c
00828604:  ldr      w22, [sp, #0x24]
00828608:  strb     wzr, [x19, #0x528]
0082860c:  strb     wzr, [x19, #0x540]
00828610:  cbz      w22, #0x828650
00828614:  ldur     x9, [x27, #0x76]
00828618:  ldur     x10, [x29, #-0x40]
0082861c:  add      x11, x19, #0x52a
00828620:  strb     w20, [x19, #0x528]
00828624:  mov      w20, wzr
00828628:  str      x9, [x19, #0x530]
0082862c:  ldr      x9, [sp, #0x38]
00828630:  strb     w3, [x19, #0x529]
00828634:  str      x9, [x19, #0x538]
00828638:  mov      w9, #1
0082863c:  str      x10, [x11]
00828640:  stur     xzr, [x29, #-0x40]
00828644:  stur     xzr, [x27, #0x76]
00828648:  strb     w9, [x19, #0x540]
0082864c:  str      xzr, [sp, #0x38]
00828650:  ldur     q0, [x8, #0x48]
00828654:  add      x9, x19, #0x500
00828658:  ldr      w21, [sp, #0x28]
0082865c:  ldr      w24, [sp, #0x30]
00828660:  ldr      x25, [sp, #0x18]
00828664:  ldur     q1, [x8, #0x58]
00828668:  ldur     q2, [x8, #0x68]
0082866c:  stur     q0, [x9, #0x48]
00828670:  ldur     q0, [x8, #0x74]
00828674:  stur     q1, [x9, #0x58]
00828678:  stur     q2, [x9, #0x68]
0082867c:  stur     q0, [x9, #0x74]
00828680:  strb     wzr, [x19, #0x588]
00828684:  strb     wzr, [x19, #0x5a0]
00828688:  cbz      w21, #0x8286cc
0082868c:  ldr      w9, [sp, #0x50]
00828690:  ldur     x10, [x29, #-0xa0]
00828694:  add      x11, x19, #0x58a
00828698:  strb     w17, [x19, #0x589]
0082869c:  strb     w9, [x19, #0x588]
008286a0:  ldur     x9, [x27, #0x16]
008286a4:  stur     xzr, [x29, #-0xa0]
008286a8:  str      x9, [x19, #0x590]
008286ac:  ldr      x9, [sp, #0x40]
008286b0:  str      x10, [x11]
008286b4:  str      x9, [x19, #0x598]
008286b8:  mov      w9, #1
008286bc:  stur     xzr, [x27, #0x16]
008286c0:  strb     w9, [x19, #0x5a0]
008286c4:  str      wzr, [sp, #0x50]
008286c8:  str      xzr, [sp, #0x40]
008286cc:  ldur     q0, [x8, #0xa8]
008286d0:  add      x8, x19, #0x5a8
008286d4:  strb     wzr, [x19, #0x5b8]
008286d8:  strb     wzr, [x19, #0x5d0]
008286dc:  str      q0, [x8]
008286e0:  cbz      w24, #0x82871c
008286e4:  ldur     x8, [x27, #6]
008286e8:  ldur     x9, [x29, #-0xb0]
008286ec:  add      x10, x19, #0x5ba
008286f0:  strb     w14, [x19, #0x5b8]
008286f4:  mov      w14, wzr
008286f8:  str      x8, [x19, #0x5c0]
008286fc:  mov      w8, #1
00828700:  str      x25, [x19, #0x5c8]
00828704:  mov      x25, xzr
00828708:  strb     w16, [x19, #0x5b9]
0082870c:  str      x9, [x10]
00828710:  stur     xzr, [x29, #-0xb0]
00828714:  stur     xzr, [x27, #6]
00828718:  strb     w8, [x19, #0x5d0]
0082871c:  strb     wzr, [x19, #0x5d8]
00828720:  strb     wzr, [x19, #0x5f0]
00828724:  cbz      w15, #0x828768
00828728:  add      x11, sp, #0xa8
0082872c:  ldr      w9, [sp, #8]
00828730:  strb     w13, [x19, #0x5d8]
00828734:  ldur     x8, [x11, #0xfe]
00828738:  add      x10, x19, #0x5da
0082873c:  str      x0, [x19, #0x5e8]
00828740:  strb     w9, [x19, #0x5d9]
00828744:  ldur     x9, [x29, #-0xc0]
00828748:  mov      w13, wzr
0082874c:  str      x8, [x19, #0x5e0]
00828750:  mov      w8, #1
00828754:  mov      x0, xzr
00828758:  str      x9, [x10]
0082875c:  stur     xzr, [x29, #-0xc0]
00828760:  stur     xzr, [x11, #0xfe]
00828764:  strb     w8, [x19, #0x5f0]
00828768:  mov      w8, #1
0082876c:  strb     w8, [x19, #0x5f8]
00828770:  b        #0x828b28
00828774:  cbz      w8, #0x828810
00828778:  ldrb     w8, [x19, #0x528]
0082877c:  tbz      w8, #0, #0x8287c8
00828780:  ldr      x0, [x19, #0x538]
00828784:  mov      w25, w14
00828788:  mov      w23, w15
0082878c:  mov      w26, w16
00828790:  mov      w24, w17
00828794:  mov      w21, w1
00828798:  str      w2, [sp, #4]
0082879c:  mov      w22, w4
008287a0:  bl       #0x8ccfd0
008287a4:  ldr      w2, [sp, #4]
008287a8:  ldr      w13, [sp, #0xc]
008287ac:  mov      w4, w22
008287b0:  ldr      x0, [sp, #0x10]
008287b4:  mov      w1, w21
008287b8:  mov      w17, w24
008287bc:  mov      w16, w26
008287c0:  mov      w15, w23
008287c4:  mov      w14, w25
008287c8:  strb     wzr, [x19, #0x540]
008287cc:  b        #0x82884c
008287d0:  add      x11, sp, #0xa8
008287d4:  ldr      w9, [sp, #8]
008287d8:  add      x10, x19, #0x4da
008287dc:  ldur     x8, [x11, #0xfe]
008287e0:  strb     w13, [x19, #0x4d8]
008287e4:  strb     w9, [x19, #0x4d9]
008287e8:  ldur     x9, [x29, #-0xc0]
008287ec:  str      x8, [x19, #0x4e0]
008287f0:  mov      w8, #1
008287f4:  str      x9, [x10]
008287f8:  str      x0, [x19, #0x4e8]
008287fc:  stur     xzr, [x29, #-0xc0]
00828800:  stur     xzr, [x11, #0xfe]
00828804:  strb     w8, [x19, #0x4f0]
00828808:  cbnz     w24, #0x82758c
0082880c:  b        #0x827598
00828810:  ldur     x8, [x27, #0x76]
00828814:  ldur     x9, [x29, #-0x40]
00828818:  add      x10, x19, #0x52a
0082881c:  strb     w20, [x19, #0x528]
00828820:  mov      w20, wzr
00828824:  str      x8, [x19, #0x530]
00828828:  ldr      x8, [sp, #0x38]
0082882c:  strb     w3, [x19, #0x529]
00828830:  str      x8, [x19, #0x538]
00828834:  mov      w8, #1
00828838:  str      x9, [x10]
0082883c:  stur     xzr, [x29, #-0x40]
00828840:  stur     xzr, [x27, #0x76]
00828844:  strb     w8, [x19, #0x540]
00828848:  str      xzr, [sp, #0x38]
0082884c:  ldur     q0, [x28, #7]
00828850:  add      x9, x19, #0x500
00828854:  ldrb     w8, [x19, #0x5a0]
00828858:  ldur     q1, [x28, #0x17]
0082885c:  ldur     q2, [x28, #0x27]
00828860:  sub      x24, x29, #0x30
00828864:  stur     q0, [x9, #0x48]
00828868:  ldur     q0, [x28, #0x33]
0082886c:  cmp      w8, w4
00828870:  stur     q1, [x9, #0x58]
00828874:  stur     q2, [x9, #0x68]
00828878:  stur     q0, [x9, #0x74]
0082887c:  b.ne     #0x8288fc
00828880:  cbz      w8, #0x828988
00828884:  ldrb     w8, [x19, #0x588]
00828888:  tbz      w8, #0, #0x8288cc
0082888c:  ldr      x0, [x19, #0x598]
00828890:  mov      w25, w14
00828894:  mov      w23, w15
00828898:  mov      w26, w16
0082889c:  mov      w28, w17
008288a0:  mov      w21, w1
008288a4:  mov      w22, w2
008288a8:  bl       #0x8ccfd0
008288ac:  ldr      w13, [sp, #0xc]
008288b0:  ldr      x0, [sp, #0x10]
008288b4:  mov      w2, w22
008288b8:  mov      w1, w21
008288bc:  mov      w17, w28
008288c0:  mov      w16, w26
008288c4:  mov      w15, w23
008288c8:  mov      w14, w25
008288cc:  ldr      w8, [sp, #0x50]
008288d0:  ldur     x9, [x29, #-0xa0]
008288d4:  add      x10, x19, #0x58a
008288d8:  strb     w17, [x19, #0x589]
008288dc:  strb     w8, [x19, #0x588]
008288e0:  ldur     x8, [x27, #0x16]
008288e4:  str      wzr, [sp, #0x50]
008288e8:  str      x8, [x19, #0x590]
008288ec:  ldr      x8, [sp, #0x40]
008288f0:  str      x9, [x10]
008288f4:  str      x8, [x19, #0x598]
008288f8:  b        #0x828988
008288fc:  cbz      w8, #0x828948
00828900:  ldrb     w8, [x19, #0x588]
00828904:  tbz      w8, #0, #0x828940
00828908:  ldr      x0, [x19, #0x598]
0082890c:  mov      w25, w14
00828910:  mov      w23, w15
00828914:  mov      w26, w16
00828918:  mov      w28, w1
0082891c:  mov      w21, w2
00828920:  bl       #0x8ccfd0
00828924:  ldr      w13, [sp, #0xc]
00828928:  ldr      x0, [sp, #0x10]
0082892c:  mov      w2, w21
00828930:  mov      w1, w28
00828934:  mov      w16, w26
00828938:  mov      w15, w23
0082893c:  mov      w14, w25
00828940:  strb     wzr, [x19, #0x5a0]
00828944:  b        #0x828988
00828948:  ldr      w8, [sp, #0x50]
0082894c:  ldur     x9, [x29, #-0xa0]
00828950:  add      x10, x19, #0x58a
00828954:  strb     w17, [x19, #0x589]
00828958:  strb     w8, [x19, #0x588]
0082895c:  ldur     x8, [x27, #0x16]
00828960:  stur     xzr, [x29, #-0xa0]
00828964:  str      x8, [x19, #0x590]
00828968:  ldr      x8, [sp, #0x40]
0082896c:  str      x9, [x10]
00828970:  str      x8, [x19, #0x598]
00828974:  mov      w8, #1
00828978:  stur     xzr, [x27, #0x16]
0082897c:  strb     w8, [x19, #0x5a0]
00828980:  str      wzr, [sp, #0x50]
00828984:  str      xzr, [sp, #0x40]
00828988:  ldrb     w8, [x19, #0x5d0]
0082898c:  ldur     q0, [x24, #7]
00828990:  add      x9, x19, #0x5a8
00828994:  cmp      w8, w2
00828998:  str      q0, [x9]
0082899c:  b.ne     #0x828a14
008289a0:  ldr      w24, [sp, #0x30]
008289a4:  ldr      x25, [sp, #0x18]
008289a8:  cbz      w8, #0x828a90
008289ac:  ldrb     w8, [x19, #0x5b8]
008289b0:  tbz      w8, #0, #0x8289ec
008289b4:  ldr      x0, [x19, #0x5c8]
008289b8:  mov      w23, w14
008289bc:  mov      w26, w15
008289c0:  mov      w28, w16
008289c4:  mov      w21, w24
008289c8:  mov      w24, w1
008289cc:  bl       #0x8ccfd0
008289d0:  ldr      w13, [sp, #0xc]
008289d4:  ldr      x0, [sp, #0x10]
008289d8:  mov      w1, w24
008289dc:  mov      w24, w21
008289e0:  mov      w16, w28
008289e4:  mov      w15, w26
008289e8:  mov      w14, w23
008289ec:  ldur     x8, [x27, #6]
008289f0:  ldur     x9, [x29, #-0xb0]
008289f4:  add      x10, x19, #0x5ba
008289f8:  strb     w14, [x19, #0x5b8]
008289fc:  mov      w14, wzr
00828a00:  strb     w16, [x19, #0x5b9]
00828a04:  str      x8, [x19, #0x5c0]
00828a08:  str      x9, [x10]
00828a0c:  str      x25, [x19, #0x5c8]
00828a10:  b        #0x828a90
00828a14:  ldr      w24, [sp, #0x30]
00828a18:  ldr      x25, [sp, #0x18]
00828a1c:  cbz      w8, #0x828a58
00828a20:  ldrb     w8, [x19, #0x5b8]
00828a24:  tbz      w8, #0, #0x828a50
00828a28:  ldr      x0, [x19, #0x5c8]
00828a2c:  mov      w23, w14
00828a30:  mov      w26, w15
00828a34:  mov      w21, w1
00828a38:  bl       #0x8ccfd0
00828a3c:  ldr      w13, [sp, #0xc]
00828a40:  ldr      x0, [sp, #0x10]
00828a44:  mov      w1, w21
00828a48:  mov      w15, w26
00828a4c:  mov      w14, w23
00828a50:  strb     wzr, [x19, #0x5d0]
00828a54:  b        #0x828a90
00828a58:  ldur     x8, [x27, #6]
00828a5c:  ldur     x9, [x29, #-0xb0]
00828a60:  add      x10, x19, #0x5ba
00828a64:  strb     w14, [x19, #0x5b8]
00828a68:  mov      w14, wzr
00828a6c:  str      x8, [x19, #0x5c0]
00828a70:  mov      w8, #1
00828a74:  str      x25, [x19, #0x5c8]
00828a78:  mov      x25, xzr
00828a7c:  strb     w16, [x19, #0x5b9]
00828a80:  str      x9, [x10]
00828a84:  stur     xzr, [x29, #-0xb0]
00828a88:  stur     xzr, [x27, #6]
00828a8c:  strb     w8, [x19, #0x5d0]
00828a90:  ldrb     w8, [x19, #0x5f0]
00828a94:  cmp      w8, w1
00828a98:  b.ne     #0x828af4
00828a9c:  ldp      w22, w21, [sp, #0x24]
00828aa0:  cbz      w8, #0x828b28
00828aa4:  ldrb     w8, [x19, #0x5d8]
00828aa8:  tbz      w8, #0, #0x828ac4
00828aac:  ldr      x0, [x19, #0x5e8]
00828ab0:  mov      w23, w14
00828ab4:  bl       #0x8ccfd0
00828ab8:  ldr      w13, [sp, #0xc]
00828abc:  ldr      x0, [sp, #0x10]
00828ac0:  mov      w14, w23
00828ac4:  ldr      w9, [sp, #8]
00828ac8:  add      x8, sp, #0xa8
00828acc:  add      x10, x19, #0x5da
00828ad0:  ldur     x8, [x8, #0xfe]
00828ad4:  strb     w13, [x19, #0x5d8]
00828ad8:  strb     w9, [x19, #0x5d9]
00828adc:  ldur     x9, [x29, #-0xc0]
00828ae0:  str      x8, [x19, #0x5e0]
00828ae4:  str      x9, [x10]
00828ae8:  str      x0, [x19, #0x5e8]
00828aec:  cbnz     w24, #0x828b40
00828af0:  b        #0x828b4c
00828af4:  ldp      w22, w21, [sp, #0x24]
00828af8:  cbz      w8, #0x829d7c
00828afc:  ldrb     w8, [x19, #0x5d8]
00828b00:  tbz      w8, #0, #0x828b24
00828b04:  ldr      x0, [x19, #0x5e8]
00828b08:  mov      w23, w14
00828b0c:  mov      w26, w15
00828b10:  bl       #0x8ccfd0
00828b14:  ldr      w13, [sp, #0xc]
00828b18:  ldr      x0, [sp, #0x10]
00828b1c:  mov      w15, w26
00828b20:  mov      w14, w23
00828b24:  strb     wzr, [x19, #0x5f0]
00828b28:  cbz      w15, #0x828b3c
00828b2c:  tbz      w13, #0, #0x828b3c
00828b30:  mov      w23, w14
00828b34:  bl       #0x8ccfd0
00828b38:  mov      w14, w23
00828b3c:  cbz      w24, #0x828b4c
00828b40:  tbz      w14, #0, #0x828b4c
00828b44:  mov      x0, x25
00828b48:  bl       #0x8ccfd0
00828b4c:  cbz      w21, #0x828b60
00828b50:  ldr      w8, [sp, #0x50]
00828b54:  tbz      w8, #0, #0x828b60
00828b58:  ldr      x0, [sp, #0x40]
00828b5c:  bl       #0x8ccfd0
00828b60:  cbz      w22, #0x828b70
00828b64:  tbz      w20, #0, #0x828b70
00828b68:  ldr      x0, [sp, #0x38]
00828b6c:  bl       #0x8ccfd0
00828b70:  ldrb     w8, [sp, #0x198]
00828b74:  cbz      w8, #0x828b88
00828b78:  ldrb     w8, [sp, #0x180]
00828b7c:  tbz      w8, #0, #0x828b88
00828b80:  ldr      x0, [sp, #0x190]
00828b84:  bl       #0x8ccfd0
00828b88:  ldrb     w8, [sp, #0x178]
00828b8c:  cbz      w8, #0x828ba0
00828b90:  ldrb     w8, [sp, #0x160]
00828b94:  tbz      w8, #0, #0x828ba0
00828b98:  ldr      x0, [sp, #0x170]
00828b9c:  bl       #0x8ccfd0
00828ba0:  ldrb     w8, [sp, #0x148]
00828ba4:  cbz      w8, #0x828bb8
00828ba8:  ldrb     w8, [sp, #0x130]
00828bac:  tbz      w8, #0, #0x828bb8
00828bb0:  ldr      x0, [sp, #0x140]
00828bb4:  bl       #0x8ccfd0
00828bb8:  ldrb     w8, [sp, #0xe8]
00828bbc:  cbz      w8, #0x828bd0
00828bc0:  ldrb     w8, [sp, #0xd0]
00828bc4:  tbz      w8, #0, #0x828bd0
00828bc8:  ldr      x0, [sp, #0xe0]
00828bcc:  bl       #0x8ccfd0
00828bd0:  adrp     x9, #0x36f000
00828bd4:  add      x9, x9, #0xfc0
00828bd8:  mov      w10, #0x7465
00828bdc:  ldr      q0, [x9]
00828be0:  mov      w8, #0x28
00828be4:  movk     w10, #0x6e6f, lsl #16
00828be8:  strb     w8, [sp, #0xa8]
00828bec:  stur     w10, [sp, #0xb9]
00828bf0:  stur     q0, [sp, #0xa9]
00828bf4:  strb     wzr, [sp, #0xbd]
00828bf8:  add      x0, sp, #0x80
00828bfc:  add      x1, sp, #0xa8
00828c00:  bl       #0x817c7c
00828c04:  ldrb     w8, [sp, #0xa8]
00828c08:  mov      x21, x0
00828c0c:  tbz      w8, #0, #0x828c18
00828c10:  ldr      x0, [sp, #0xb8]
00828c14:  bl       #0x8ccfd0
00828c18:  cbz      x21, #0x82a13c
00828c1c:  strb     wzr, [sp, #0x10c]
00828c20:  strb     wzr, [sp, #0x110]
00828c24:  strb     wzr, [sp, #0x114]
00828c28:  strb     wzr, [sp, #0x130]
00828c2c:  strb     wzr, [sp, #0x148]
00828c30:  strb     wzr, [sp, #0x178]
00828c34:  strb     wzr, [sp, #0x180]
00828c38:  strb     wzr, [sp, #0x198]
00828c3c:  strb     wzr, [sp, #0x108]
00828c40:  stp      xzr, xzr, [sp, #0x118]
00828c44:  str      wzr, [sp, #0x128]
00828c48:  stp      xzr, xzr, [sp, #0x150]
00828c4c:  strb     wzr, [sp, #0x160]
00828c50:  stp      xzr, xzr, [sp, #0xf8]
00828c54:  ldr      w8, [x21, #0x58]
00828c58:  strb     wzr, [sp, #0xc0]
00828c5c:  strb     wzr, [sp, #0xc4]
00828c60:  cmp      w8, #1
00828c64:  strb     wzr, [sp, #0xe8]
00828c68:  strb     wzr, [sp, #0xf0]
00828c6c:  strb     wzr, [sp, #0xf4]
00828c70:  stp      xzr, xzr, [sp, #0xa8]
00828c74:  stur     xzr, [sp, #0xb5]
00828c78:  str      xzr, [sp, #0xc8]
00828c7c:  strb     wzr, [sp, #0xd0]
00828c80:  b.eq     #0x828c9c
00828c84:  cbnz     w8, #0x82b098
00828c88:  sub      x8, x29, #0x90
00828c8c:  add      x0, x21, #0x28
00828c90:  mov      x1, xzr
00828c94:  bl       #0x8118bc
00828c98:  b        #0x828cb0
00828c9c:  ldr      x0, [x21, #0x28]
00828ca0:  sub      x8, x29, #0x90
00828ca4:  add      x1, x21, #0x30
00828ca8:  mov      x2, xzr
00828cac:  bl       #0x811aa8
00828cb0:  adrp     x10, #0x370000
00828cb4:  add      x10, x10, #0xad5
00828cb8:  mov      w9, #0x6964
00828cbc:  ldr      x10, [x10]
00828cc0:  mov      w8, #0x18
00828cc4:  movk     w9, #0x7375, lsl #16
00828cc8:  sturb    w8, [x29, #-0x30]
00828ccc:  stur     w9, [x27, #0x89]
00828cd0:  stur     x10, [x27, #0x81]
00828cd4:  sturb    wzr, [x29, #-0x23]
00828cd8:  sub      x0, x29, #0x90
00828cdc:  sub      x1, x29, #0x30
00828ce0:  bl       #0x817c7c
00828ce4:  ldurb    w8, [x29, #-0x30]
00828ce8:  mov      x21, x0
00828cec:  tbz      w8, #0, #0x828cf8
00828cf0:  ldur     x0, [x29, #-0x20]
00828cf4:  bl       #0x8ccfd0
00828cf8:  cbz      x21, #0x828d08
00828cfc:  add      x0, x21, #0x28
00828d00:  bl       #0x809024
00828d04:  str      s0, [sp, #0xa8]
00828d08:  adrp     x10, #0x36e000
00828d0c:  add      x10, x10, #0x6cb
00828d10:  mov      w9, #0x6964
00828d14:  ldr      q0, [x10]
00828d18:  mov      w8, #0x26
00828d1c:  movk     w9, #0x7375, lsl #16
00828d20:  sturb    w8, [x29, #-0x30]
00828d24:  stur     w9, [x29, #-0x20]
00828d28:  stur     q0, [x27, #0x81]
00828d2c:  sturb    wzr, [x29, #-0x1c]
00828d30:  sub      x0, x29, #0x90
00828d34:  sub      x1, x29, #0x30
00828d38:  bl       #0x817c7c
00828d3c:  ldurb    w8, [x29, #-0x30]
00828d40:  mov      x21, x0
00828d44:  tbz      w8, #0, #0x828d50
00828d48:  ldur     x0, [x29, #-0x20]
00828d4c:  bl       #0x8ccfd0
00828d50:  cbz      x21, #0x828d60
00828d54:  add      x0, x21, #0x28
00828d58:  bl       #0x809024
00828d5c:  str      s0, [sp, #0xac]
00828d60:  adrp     x10, #0x36a000
00828d64:  add      x10, x10, #0xe62
00828d68:  mov      w9, #0x6964
00828d6c:  ldr      q0, [x10]
00828d70:  mov      w8, #0x28
00828d74:  movk     w9, #0x7375, lsl #16
00828d78:  sturb    w8, [x29, #-0x30]
00828d7c:  stur     w9, [x27, #0x91]
00828d80:  stur     q0, [x27, #0x81]
00828d84:  sturb    wzr, [x29, #-0x1b]
00828d88:  sub      x0, x29, #0x90
00828d8c:  sub      x1, x29, #0x30
00828d90:  bl       #0x817c7c
00828d94:  ldurb    w8, [x29, #-0x30]
00828d98:  mov      x21, x0
00828d9c:  tbz      w8, #0, #0x828da8
00828da0:  ldur     x0, [x29, #-0x20]
00828da4:  bl       #0x8ccfd0
00828da8:  cbz      x21, #0x828db8
00828dac:  add      x0, x21, #0x28
00828db0:  bl       #0x809024
00828db4:  str      s0, [sp, #0xb0]
00828db8:  adrp     x9, #0x36e000
00828dbc:  add      x9, x9, #0x42
00828dc0:  mov      w8, #0x2c
00828dc4:  ldr      q0, [x9]
00828dc8:  ldur     x9, [x9, #0xe]
00828dcc:  sturb    w8, [x29, #-0x30]
00828dd0:  sturb    wzr, [x29, #-0x19]
00828dd4:  stur     q0, [x27, #0x81]
00828dd8:  stur     x9, [x27, #0x8f]
00828ddc:  sub      x0, x29, #0x90
00828de0:  sub      x1, x29, #0x30
00828de4:  bl       #0x817c7c
00828de8:  ldurb    w8, [x29, #-0x30]
00828dec:  mov      x21, x0
00828df0:  tbz      w8, #0, #0x828dfc
00828df4:  ldur     x0, [x29, #-0x20]
00828df8:  bl       #0x8ccfd0
00828dfc:  cbz      x21, #0x828e0c
00828e00:  add      x0, x21, #0x28
00828e04:  bl       #0x809024
00828e08:  str      s0, [sp, #0xb4]
00828e0c:  mov      w0, #0x20
00828e10:  bl       #0x8ccfa0
00828e14:  adrp     x8, #0x372000
00828e18:  stur     x0, [x29, #-0x20]
00828e1c:  ldr      q0, [x8, #0xd20]
00828e20:  adrp     x8, #0x36c000
00828e24:  add      x8, x8, #0x45
00828e28:  ldr      q1, [x8]
00828e2c:  ldur     x8, [x8, #0xf]
00828e30:  strb     wzr, [x0, #0x17]
00828e34:  stur     q0, [x29, #-0x30]
00828e38:  str      q1, [x0]
00828e3c:  stur     x8, [x0, #0xf]
00828e40:  sub      x0, x29, #0x90
00828e44:  sub      x1, x29, #0x30
00828e48:  bl       #0x817c7c
00828e4c:  ldurb    w8, [x29, #-0x30]
00828e50:  mov      x21, x0
00828e54:  tbz      w8, #0, #0x828e60
00828e58:  ldur     x0, [x29, #-0x20]
00828e5c:  bl       #0x8ccfd0
00828e60:  cbz      x21, #0x828e70
00828e64:  add      x0, x21, #0x28
00828e68:  bl       #0x809024
00828e6c:  str      s0, [sp, #0xb8]
00828e70:  mov      w8, #0xe
00828e74:  mov      w9, #0x6964
00828e78:  sturb    wzr, [x29, #-0x28]
00828e7c:  sturb    w8, [x29, #-0x30]
00828e80:  mov      w8, #0x6469
00828e84:  movk     w9, #0x6976, lsl #16
00828e88:  movk     w8, #0x7265, lsl #16
00828e8c:  stur     w9, [x27, #0x81]
00828e90:  stur     w8, [x29, #-0x2c]
00828e94:  sub      x0, x29, #0x90
00828e98:  sub      x1, x29, #0x30
00828e9c:  bl       #0x817c7c
00828ea0:  ldurb    w8, [x29, #-0x30]
00828ea4:  mov      x21, x0
00828ea8:  tbz      w8, #0, #0x828eb4
00828eac:  ldur     x0, [x29, #-0x20]
00828eb0:  bl       #0x8ccfd0
00828eb4:  cbz      x21, #0x828ef4
00828eb8:  ldr      w8, [x21, #0x58]
00828ebc:  cmp      w8, #1
00828ec0:  b.eq     #0x828ee4
00828ec4:  cbnz     w8, #0x82b230
00828ec8:  ldr      w1, [x21, #0x28]
00828ecc:  cmp      w1, #2
00828ed0:  b.ne     #0x82b248
00828ed4:  ldrb     w8, [x21, #0x30]
00828ed8:  cmp      w8, #0
00828edc:  cset     w0, ne
00828ee0:  b        #0x828eec
00828ee4:  add      x0, x21, #0x30
00828ee8:  bl       #0x8cdb20
00828eec:  and      w8, w0, #1
00828ef0:  strb     w8, [sp, #0xbc]
00828ef4:  adrp     x10, #0x36f000
00828ef8:  add      x10, x10, #0x93e
00828efc:  mov      w9, #0x6c6f
00828f00:  ldr      x10, [x10]
00828f04:  mov      w8, #0x18
00828f08:  movk     w9, #0x726f, lsl #16
00828f0c:  sturb    w8, [x29, #-0x30]
00828f10:  stur     w9, [x27, #0x89]
00828f14:  stur     x10, [x27, #0x81]
00828f18:  sturb    wzr, [x29, #-0x23]
00828f1c:  sub      x0, x29, #0x90
00828f20:  sub      x1, x29, #0x30
00828f24:  bl       #0x817c7c
00828f28:  ldurb    w8, [x29, #-0x30]
00828f2c:  mov      x21, x0
00828f30:  tbz      w8, #0, #0x828f3c
00828f34:  ldur     x0, [x29, #-0x20]
00828f38:  bl       #0x8ccfd0
00828f3c:  cbz      x21, #0x828f74
00828f40:  ldr      x8, [sp, #0x70]
00828f44:  stur     wzr, [x29, #-0x30]
00828f48:  ldr      x0, [x8, #8]
00828f4c:  ldr      w1, [x8]
00828f50:  adrp     x4, #0x99e000
00828f54:  add      x2, x21, #0x28
00828f58:  sub      x3, x29, #0x30
00828f5c:  ldr      x4, [x4, #0x140]
00828f60:  bl       #0x807f90
00828f64:  ldur     w8, [x29, #-0x30]
00828f68:  mov      w9, #1
00828f6c:  strb     w9, [sp, #0xc4]
00828f70:  str      w8, [sp, #0xc0]
00828f74:  adrp     x10, #0x367000
00828f78:  add      x10, x10, #0xa0f
00828f7c:  mov      w8, #0x24
00828f80:  ldr      q0, [x10]
00828f84:  mov      w9, #0x7466
00828f88:  sturb    w8, [x29, #-0x30]
00828f8c:  sturh    w9, [x27, #0x91]
00828f90:  stur     q0, [x27, #0x81]
00828f94:  sturb    wzr, [x29, #-0x1d]
00828f98:  sub      x0, x29, #0x90
00828f9c:  sub      x1, x29, #0x30
00828fa0:  bl       #0x817c7c
00828fa4:  ldurb    w8, [x29, #-0x30]
00828fa8:  mov      x21, x0
00828fac:  tbz      w8, #0, #0x828fb8
00828fb0:  ldur     x0, [x29, #-0x20]
00828fb4:  bl       #0x8ccfd0
00828fb8:  cbz      x21, #0x828fc8
00828fbc:  add      x0, x21, #0x28
00828fc0:  bl       #0x809024
00828fc4:  str      s0, [sp, #0xc8]
00828fc8:  adrp     x10, #0x36a000
00828fcc:  add      x10, x10, #0x836
00828fd0:  mov      w9, #0x6769
00828fd4:  ldr      q0, [x10]
00828fd8:  mov      w8, #0x26
00828fdc:  movk     w9, #0x7468, lsl #16
00828fe0:  sturb    w8, [x29, #-0x30]
00828fe4:  stur     w9, [x29, #-0x20]
00828fe8:  stur     q0, [x27, #0x81]
00828fec:  sturb    wzr, [x29, #-0x1c]
00828ff0:  sub      x0, x29, #0x90
00828ff4:  sub      x1, x29, #0x30
00828ff8:  bl       #0x817c7c
00828ffc:  ldurb    w8, [x29, #-0x30]
00829000:  mov      x21, x0
00829004:  tbz      w8, #0, #0x829010
00829008:  ldur     x0, [x29, #-0x20]
0082900c:  bl       #0x8ccfd0
00829010:  cbz      x21, #0x829020
00829014:  add      x0, x21, #0x28
00829018:  bl       #0x809024
0082901c:  str      s0, [sp, #0xcc]
00829020:  adrp     x9, #0x36c000
00829024:  add      x9, x9, #0x4b4
00829028:  mov      w8, #0x20
0082902c:  ldr      q0, [x9]
00829030:  sturb    w8, [x29, #-0x30]
00829034:  sturb    wzr, [x29, #-0x1f]
00829038:  stur     q0, [x27, #0x81]
0082903c:  sub      x0, x29, #0x90
00829040:  sub      x1, x29, #0x30
00829044:  bl       #0x817c7c
00829048:  ldurb    w8, [x29, #-0x30]
0082904c:  mov      x21, x0
00829050:  tbz      w8, #0, #0x82905c
00829054:  ldur     x0, [x29, #-0x20]
00829058:  bl       #0x8ccfd0
0082905c:  cbz      x21, #0x8290d8
00829060:  sub      x8, x29, #0x30
00829064:  add      x0, x21, #0x28
00829068:  bl       #0x807a6c
0082906c:  ldp      x10, x20, [x29, #-0x28]
00829070:  ldur     x8, [x27, #0x82]
00829074:  ldurb    w21, [x29, #-0x30]
00829078:  ldrb     w9, [sp, #0xe8]
0082907c:  ldurb    w22, [x29, #-0x2f]
00829080:  stur     x8, [x29, #-0x40]
00829084:  stur     x10, [x27, #0x76]
00829088:  cbz      w9, #0x8290b8
0082908c:  ldrb     w8, [sp, #0xd0]
00829090:  tbz      w8, #0, #0x82909c
00829094:  ldr      x0, [sp, #0xe0]
00829098:  bl       #0x8ccfd0
0082909c:  ldur     x8, [x29, #-0x40]
008290a0:  ldur     x9, [x27, #0x76]
008290a4:  strb     w21, [sp, #0xd0]
008290a8:  strb     w22, [sp, #0xd1]
008290ac:  stur     x8, [sp, #0xd2]
008290b0:  stp      x9, x20, [sp, #0xd8]
008290b4:  b        #0x8290d8
008290b8:  ldur     x8, [x29, #-0x40]
008290bc:  ldur     x9, [x27, #0x76]
008290c0:  strb     w21, [sp, #0xd0]
008290c4:  strb     w22, [sp, #0xd1]
008290c8:  stur     x8, [sp, #0xd2]
008290cc:  mov      w8, #1
008290d0:  stp      x9, x20, [sp, #0xd8]
008290d4:  strb     w8, [sp, #0xe8]
008290d8:  adrp     x9, #0x36a000
008290dc:  add      x9, x9, #0x84a
008290e0:  mov      w8, #0x2a
008290e4:  ldr      q0, [x9]
008290e8:  ldur     x9, [x9, #0xd]
008290ec:  sturb    w8, [x29, #-0x30]
008290f0:  sturb    wzr, [x29, #-0x1a]
008290f4:  stur     q0, [x27, #0x81]
008290f8:  stur     x9, [x27, #0x8e]
008290fc:  sub      x0, x29, #0x90
00829100:  sub      x1, x29, #0x30
00829104:  bl       #0x817c7c
00829108:  ldurb    w8, [x29, #-0x30]
0082910c:  mov      x21, x0
00829110:  tbz      w8, #0, #0x82911c
00829114:  ldur     x0, [x29, #-0x20]
00829118:  bl       #0x8ccfd0
0082911c:  cbz      x21, #0x829154
00829120:  ldr      x8, [sp, #0x70]
00829124:  stur     wzr, [x29, #-0x30]
00829128:  ldr      x0, [x8, #8]
0082912c:  ldr      w1, [x8]
00829130:  adrp     x4, #0x99e000
00829134:  add      x2, x21, #0x28
00829138:  sub      x3, x29, #0x30
0082913c:  ldr      x4, [x4, #0x140]
00829140:  bl       #0x807f90
00829144:  ldur     w8, [x29, #-0x30]
00829148:  mov      w9, #1
0082914c:  strb     w9, [sp, #0xf4]
00829150:  str      w8, [sp, #0xf0]
00829154:  adrp     x9, #0x36d000
00829158:  add      x9, x9, #0x9e1
0082915c:  mov      w8, #0x2a
00829160:  ldr      q0, [x9]
00829164:  ldur     x9, [x9, #0xd]
00829168:  sturb    w8, [x29, #-0x30]
0082916c:  sturb    wzr, [x29, #-0x1a]
00829170:  stur     q0, [x27, #0x81]
00829174:  stur     x9, [x27, #0x8e]
00829178:  sub      x0, x29, #0x90
0082917c:  sub      x1, x29, #0x30
00829180:  bl       #0x817c7c
00829184:  ldurb    w8, [x29, #-0x30]
00829188:  mov      x21, x0
0082918c:  tbz      w8, #0, #0x829198
00829190:  ldur     x0, [x29, #-0x20]
00829194:  bl       #0x8ccfd0
00829198:  cbz      x21, #0x8291a8
0082919c:  add      x0, x21, #0x28
008291a0:  bl       #0x8161a0
008291a4:  str      w0, [sp, #0xf8]
008291a8:  adrp     x10, #0x36a000
008291ac:  add      x10, x10, #0xe77
008291b0:  mov      w9, #0x4765
008291b4:  ldr      q0, [x10]
008291b8:  mov      w8, #0x26
008291bc:  movk     w9, #0x7061, lsl #16
008291c0:  sturb    w8, [x29, #-0x30]
008291c4:  stur     w9, [x29, #-0x20]
008291c8:  stur     q0, [x27, #0x81]
008291cc:  sturb    wzr, [x29, #-0x1c]
008291d0:  sub      x0, x29, #0x90
008291d4:  sub      x1, x29, #0x30
008291d8:  bl       #0x817c7c
008291dc:  ldurb    w8, [x29, #-0x30]
008291e0:  mov      x21, x0
008291e4:  tbz      w8, #0, #0x8291f0
008291e8:  ldur     x0, [x29, #-0x20]
008291ec:  bl       #0x8ccfd0
008291f0:  cbz      x21, #0x829200
008291f4:  add      x0, x21, #0x28
008291f8:  bl       #0x809024
008291fc:  str      s0, [sp, #0xfc]
00829200:  mov      w0, #0x30
00829204:  bl       #0x8ccfa0
00829208:  adrp     x8, #0x373000
0082920c:  stur     x0, [x29, #-0x20]
00829210:  ldr      q2, [x8, #0x40]
00829214:  mov      w8, #0x6c
00829218:  strh     w8, [x0, #0x20]
0082921c:  adrp     x8, #0x369000
00829220:  add      x8, x8, #0x87b
00829224:  ldp      q0, q1, [x8]
00829228:  str      q2, [sp, #0x50]
0082922c:  stur     q2, [x29, #-0x30]
00829230:  stp      q0, q1, [x0]
00829234:  sub      x0, x29, #0x90
00829238:  sub      x1, x29, #0x30
0082923c:  bl       #0x817c7c
00829240:  ldurb    w8, [x29, #-0x30]
00829244:  mov      x21, x0
00829248:  tbz      w8, #0, #0x829254
0082924c:  ldur     x0, [x29, #-0x20]
00829250:  bl       #0x8ccfd0
00829254:  cbz      x21, #0x829264
00829258:  add      x0, x21, #0x28
0082925c:  bl       #0x809024
00829260:  str      s0, [sp, #0x100]
00829264:  mov      w0, #0x20
00829268:  bl       #0x8ccfa0
0082926c:  adrp     x8, #0x372000
00829270:  stur     x0, [x29, #-0x20]
00829274:  ldr      q0, [x8, #0x250]
00829278:  adrp     x8, #0x36a000
0082927c:  add      x8, x8, #0x258
00829280:  ldr      q1, [x8]
00829284:  ldur     q2, [x8, #0xf]
00829288:  strb     wzr, [x0, #0x1f]
0082928c:  stur     q0, [x29, #-0x30]
00829290:  str      q1, [x0]
00829294:  stur     q2, [x0, #0xf]
00829298:  sub      x0, x29, #0x90
0082929c:  sub      x1, x29, #0x30
008292a0:  bl       #0x817c7c
008292a4:  ldurb    w8, [x29, #-0x30]
008292a8:  mov      x21, x0
008292ac:  tbz      w8, #0, #0x8292b8
008292b0:  ldur     x0, [x29, #-0x20]
008292b4:  bl       #0x8ccfd0
008292b8:  cbz      x21, #0x8292c8
008292bc:  add      x0, x21, #0x28
008292c0:  bl       #0x809024
008292c4:  str      s0, [sp, #0x104]
008292c8:  mov      w0, #0x20
008292cc:  bl       #0x8ccfa0
008292d0:  adrp     x8, #0x371000
008292d4:  stur     x0, [x29, #-0x20]
008292d8:  ldr      q0, [x8, #0x7a0]
008292dc:  adrp     x8, #0x370000
008292e0:  add      x8, x8, #0x665
008292e4:  ldr      q1, [x8]
008292e8:  ldur     q2, [x8, #0xe]
008292ec:  strb     wzr, [x0, #0x1e]
008292f0:  stur     q0, [x29, #-0x30]
008292f4:  str      q1, [x0]
008292f8:  stur     q2, [x0, #0xe]
008292fc:  sub      x0, x29, #0x90
00829300:  sub      x1, x29, #0x30
00829304:  bl       #0x817c7c
00829308:  ldurb    w8, [x29, #-0x30]
0082930c:  mov      x21, x0
00829310:  tbz      w8, #0, #0x82931c
00829314:  ldur     x0, [x29, #-0x20]
00829318:  bl       #0x8ccfd0
0082931c:  cbz      x21, #0x829354
00829320:  ldr      x8, [sp, #0x70]
00829324:  stur     wzr, [x29, #-0x30]
00829328:  ldr      x0, [x8, #8]
0082932c:  ldr      w1, [x8]
00829330:  adrp     x4, #0x99e000
00829334:  add      x2, x21, #0x28
00829338:  sub      x3, x29, #0x30
0082933c:  ldr      x4, [x4, #0x140]
00829340:  bl       #0x807f90
00829344:  ldur     w8, [x29, #-0x30]
00829348:  mov      w9, #1
0082934c:  strb     w9, [sp, #0x10c]
00829350:  str      w8, [sp, #0x108]
00829354:  adrp     x10, #0x368000
00829358:  add      x10, x10, #0xd84
0082935c:  mov      w9, #0x6c6f
00829360:  ldr      q0, [x10]
00829364:  mov      w8, #0x28
00829368:  movk     w9, #0x726f, lsl #16
0082936c:  sturb    w8, [x29, #-0x30]
00829370:  stur     w9, [x27, #0x91]
00829374:  stur     q0, [x27, #0x81]
00829378:  sturb    wzr, [x29, #-0x1b]
0082937c:  sub      x0, x29, #0x90
00829380:  sub      x1, x29, #0x30
00829384:  bl       #0x817c7c
00829388:  ldurb    w8, [x29, #-0x30]
0082938c:  mov      x21, x0
00829390:  tbz      w8, #0, #0x82939c
00829394:  ldur     x0, [x29, #-0x20]
00829398:  bl       #0x8ccfd0
0082939c:  cbz      x21, #0x8293d4
008293a0:  ldr      x8, [sp, #0x70]
008293a4:  stur     wzr, [x29, #-0x30]
008293a8:  ldr      x0, [x8, #8]
008293ac:  ldr      w1, [x8]
008293b0:  adrp     x4, #0x99e000
008293b4:  add      x2, x21, #0x28
008293b8:  sub      x3, x29, #0x30
008293bc:  ldr      x4, [x4, #0x140]
008293c0:  bl       #0x807f90
008293c4:  ldur     w8, [x29, #-0x30]
008293c8:  mov      w9, #1
008293cc:  strb     w9, [sp, #0x114]
008293d0:  str      w8, [sp, #0x110]
008293d4:  mov      w0, #0x20
008293d8:  bl       #0x8ccfa0
008293dc:  adrp     x8, #0x371000
008293e0:  stur     x0, [x29, #-0x20]
008293e4:  ldr      q0, [x8, #0xb20]
008293e8:  adrp     x8, #0x369000
008293ec:  add      x8, x8, #0x3df
008293f0:  ldr      q1, [x8]
008293f4:  ldur     q2, [x8, #0xb]
008293f8:  strb     wzr, [x0, #0x1b]
008293fc:  stur     q0, [x29, #-0x30]
00829400:  str      q1, [x0]
00829404:  stur     q2, [x0, #0xb]
00829408:  sub      x0, x29, #0x90
0082940c:  sub      x1, x29, #0x30
00829410:  bl       #0x817c7c
00829414:  ldurb    w8, [x29, #-0x30]
00829418:  mov      x21, x0
0082941c:  tbz      w8, #0, #0x829428
00829420:  ldur     x0, [x29, #-0x20]
00829424:  bl       #0x8ccfd0
00829428:  cbz      x21, #0x829438
0082942c:  add      x0, x21, #0x28
00829430:  bl       #0x809024
00829434:  str      s0, [sp, #0x118]
00829438:  mov      w0, #0x30
0082943c:  bl       #0x8ccfa0
00829440:  adrp     x8, #0x371000
00829444:  stur     x0, [x29, #-0x20]
00829448:  ldr      q0, [x8, #0x9d0]
0082944c:  adrp     x8, #0x370000
00829450:  add      x8, x8, #0xae2
00829454:  ldp      q1, q2, [x8]
00829458:  ldur     x8, [x8, #0x1d]
0082945c:  stur     q0, [x29, #-0x30]
00829460:  strb     wzr, [x0, #0x25]
00829464:  stp      q1, q2, [x0]
00829468:  stur     x8, [x0, #0x1d]
0082946c:  sub      x0, x29, #0x90
00829470:  sub      x1, x29, #0x30
00829474:  bl       #0x817c7c
00829478:  ldurb    w8, [x29, #-0x30]
0082947c:  mov      x21, x0
00829480:  tbz      w8, #0, #0x82948c
00829484:  ldur     x0, [x29, #-0x20]
00829488:  bl       #0x8ccfd0
0082948c:  cbz      x21, #0x82949c
00829490:  add      x0, x21, #0x28
00829494:  bl       #0x809024
00829498:  str      s0, [sp, #0x11c]
0082949c:  mov      w0, #0x20
008294a0:  bl       #0x8ccfa0
008294a4:  adrp     x8, #0x371000
008294a8:  stur     x0, [x29, #-0x20]
008294ac:  ldr      q1, [x8, #0x460]
008294b0:  adrp     x8, #0x36f000
008294b4:  add      x8, x8, #0x94b
008294b8:  ldr      q0, [x8]
008294bc:  ldr      x8, [x8, #0x10]
008294c0:  strb     wzr, [x0, #0x18]
008294c4:  str      q1, [sp, #0x40]
008294c8:  stur     q1, [x29, #-0x30]
008294cc:  str      q0, [x0]
008294d0:  str      x8, [x0, #0x10]
008294d4:  sub      x0, x29, #0x90
008294d8:  sub      x1, x29, #0x30
008294dc:  bl       #0x817c7c
008294e0:  ldurb    w8, [x29, #-0x30]
008294e4:  mov      x21, x0
008294e8:  tbz      w8, #0, #0x8294f4
008294ec:  ldur     x0, [x29, #-0x20]
008294f0:  bl       #0x8ccfd0
008294f4:  cbz      x21, #0x829504
008294f8:  add      x0, x21, #0x28
008294fc:  bl       #0x809024
00829500:  str      s0, [sp, #0x120]
00829504:  mov      w0, #0x30
00829508:  bl       #0x8ccfa0
0082950c:  ldr      q0, [sp, #0x50]
00829510:  adrp     x9, #0x36c000
00829514:  add      x9, x9, #0x4c5
00829518:  mov      w8, #0x65
0082951c:  stur     x0, [x29, #-0x20]
00829520:  stur     q0, [x29, #-0x30]
00829524:  ldp      q0, q1, [x9]
00829528:  strh     w8, [x0, #0x20]
0082952c:  stp      q0, q1, [x0]
00829530:  sub      x0, x29, #0x90
00829534:  sub      x1, x29, #0x30
00829538:  bl       #0x817c7c
0082953c:  ldurb    w8, [x29, #-0x30]
00829540:  mov      x21, x0
00829544:  tbz      w8, #0, #0x829550
00829548:  ldur     x0, [x29, #-0x20]
0082954c:  bl       #0x8ccfd0
00829550:  cbz      x21, #0x829560
00829554:  add      x0, x21, #0x28
00829558:  bl       #0x809024
0082955c:  str      s0, [sp, #0x124]
00829560:  adrp     x9, #0x365000
00829564:  add      x9, x9, #0xd68
00829568:  mov      w8, #0x2c
0082956c:  ldr      q0, [x9]
00829570:  ldur     x9, [x9, #0xe]
00829574:  sturb    w8, [x29, #-0x30]
00829578:  sturb    wzr, [x29, #-0x19]
0082957c:  stur     q0, [x27, #0x81]
00829580:  stur     x9, [x27, #0x8f]
00829584:  sub      x0, x29, #0x90
00829588:  sub      x1, x29, #0x30
0082958c:  bl       #0x817c7c
00829590:  ldurb    w8, [x29, #-0x30]
00829594:  mov      x21, x0
00829598:  tbz      w8, #0, #0x8295a4
0082959c:  ldur     x0, [x29, #-0x20]
008295a0:  bl       #0x8ccfd0
008295a4:  cbz      x21, #0x8295b4
008295a8:  add      x0, x21, #0x28
008295ac:  bl       #0x809024
008295b0:  str      s0, [sp, #0x128]
008295b4:  adrp     x10, #0x36c000
008295b8:  add      x10, x10, #0x4e7
008295bc:  mov      w9, #0x6168
008295c0:  ldr      q0, [x10]
008295c4:  mov      w8, #0x28
008295c8:  movk     w9, #0x6570, lsl #16
008295cc:  sturb    w8, [x29, #-0x30]
008295d0:  stur     w9, [x27, #0x91]
008295d4:  stur     q0, [x27, #0x81]
008295d8:  sturb    wzr, [x29, #-0x1b]
008295dc:  sub      x0, x29, #0x90
008295e0:  sub      x1, x29, #0x30
008295e4:  bl       #0x817c7c
008295e8:  ldurb    w8, [x29, #-0x30]
008295ec:  mov      x21, x0
008295f0:  tbz      w8, #0, #0x8295fc
008295f4:  ldur     x0, [x29, #-0x20]
008295f8:  bl       #0x8ccfd0
008295fc:  cbz      x21, #0x829680
00829600:  sub      x8, x29, #0x30
00829604:  add      x0, x21, #0x28
00829608:  bl       #0x807a6c
0082960c:  ldp      x10, x20, [x29, #-0x28]
00829610:  ldur     x8, [x27, #0x82]
00829614:  ldurb    w21, [x29, #-0x30]
00829618:  ldrb     w9, [sp, #0x148]
0082961c:  ldurb    w22, [x29, #-0x2f]
00829620:  stur     x8, [x29, #-0x40]
00829624:  stur     x10, [x27, #0x76]
00829628:  cbz      w9, #0x82965c
0082962c:  ldrb     w8, [sp, #0x130]
00829630:  tbz      w8, #0, #0x82963c
00829634:  ldr      x0, [sp, #0x140]
00829638:  bl       #0x8ccfd0
0082963c:  ldur     x8, [x29, #-0x40]
00829640:  ldur     x9, [x27, #0x76]
00829644:  add      x10, sp, #0xa8
00829648:  strb     w21, [sp, #0x130]
0082964c:  strb     w22, [sp, #0x131]
00829650:  stur     x8, [x10, #0x8a]
00829654:  stp      x9, x20, [sp, #0x138]
00829658:  b        #0x829680
0082965c:  ldur     x8, [x29, #-0x40]
00829660:  ldur     x9, [x27, #0x76]
00829664:  add      x10, sp, #0xa8
00829668:  strb     w21, [sp, #0x130]
0082966c:  stur     x8, [x10, #0x8a]
00829670:  mov      w8, #1
00829674:  strb     w22, [sp, #0x131]
00829678:  stp      x9, x20, [sp, #0x138]
0082967c:  strb     w8, [sp, #0x148]
00829680:  mov      w0, #0x20
00829684:  bl       #0x8ccfa0
00829688:  adrp     x8, #0x36b000
0082968c:  add      x8, x8, #0x944
00829690:  ldr      q1, [sp, #0x40]
00829694:  ldr      q0, [x8]
00829698:  ldr      x8, [x8, #0x10]
0082969c:  stur     x0, [x29, #-0x20]
008296a0:  stur     q1, [x29, #-0x30]
008296a4:  str      q0, [x0]
008296a8:  str      x8, [x0, #0x10]
008296ac:  strb     wzr, [x0, #0x18]
008296b0:  sub      x0, x29, #0x90
008296b4:  sub      x1, x29, #0x30
008296b8:  bl       #0x817c7c
008296bc:  ldurb    w8, [x29, #-0x30]
008296c0:  mov      x21, x0
008296c4:  tbz      w8, #0, #0x8296d0
008296c8:  ldur     x0, [x29, #-0x20]
008296cc:  bl       #0x8ccfd0
008296d0:  cbz      x21, #0x8296e0
008296d4:  add      x0, x21, #0x28
008296d8:  bl       #0x809024
008296dc:  str      s0, [sp, #0x150]
008296e0:  adrp     x10, #0x369000
008296e4:  add      x10, x10, #0x89d
008296e8:  mov      w8, #0x1e
008296ec:  ldr      x9, [x10]
008296f0:  ldur     x10, [x10, #7]
008296f4:  sturb    w8, [x29, #-0x30]
008296f8:  sturb    wzr, [x29, #-0x20]
008296fc:  stur     x9, [x27, #0x81]
00829700:  stur     x10, [x29, #-0x28]
00829704:  sub      x0, x29, #0x90
00829708:  sub      x1, x29, #0x30
0082970c:  bl       #0x817c7c
00829710:  ldurb    w8, [x29, #-0x30]
00829714:  mov      x21, x0
00829718:  tbz      w8, #0, #0x829724
0082971c:  ldur     x0, [x29, #-0x20]
00829720:  bl       #0x8ccfd0
00829724:  cbz      x21, #0x829734
00829728:  add      x0, x21, #0x28
0082972c:  bl       #0x8161a0
00829730:  str      w0, [sp, #0x154]
00829734:  mov      w8, #0xa
00829738:  mov      w9, #0x6977
0082973c:  movk     w9, #0x7464, lsl #16
00829740:  sturb    w8, [x29, #-0x30]
00829744:  mov      w8, #0x68
00829748:  stur     w9, [x27, #0x81]
0082974c:  sturh    w8, [x27, #0x85]
00829750:  sub      x0, x29, #0x90
00829754:  sub      x1, x29, #0x30
00829758:  bl       #0x817c7c
0082975c:  ldurb    w8, [x29, #-0x30]
00829760:  mov      x21, x0
00829764:  tbz      w8, #0, #0x829770
00829768:  ldur     x0, [x29, #-0x20]
0082976c:  bl       #0x8ccfd0
00829770:  cbz      x21, #0x829780
00829774:  add      x0, x21, #0x28
00829778:  bl       #0x809024
0082977c:  str      s0, [sp, #0x158]
00829780:  mov      w8, #0xc
00829784:  mov      w9, #0x6568
00829788:  sturb    wzr, [x29, #-0x29]
0082978c:  movk     w9, #0x6769, lsl #16
00829790:  sturb    w8, [x29, #-0x30]
00829794:  mov      w8, #0x7468
00829798:  stur     w9, [x27, #0x81]
0082979c:  sturh    w8, [x27, #0x85]
008297a0:  sub      x0, x29, #0x90
008297a4:  sub      x1, x29, #0x30
008297a8:  bl       #0x817c7c
008297ac:  ldurb    w8, [x29, #-0x30]
008297b0:  mov      x21, x0
008297b4:  tbz      w8, #0, #0x8297c0
008297b8:  ldur     x0, [x29, #-0x20]
008297bc:  bl       #0x8ccfd0
008297c0:  cbz      x21, #0x8297d0
008297c4:  add      x0, x21, #0x28
008297c8:  bl       #0x809024
008297cc:  str      s0, [sp, #0x15c]
008297d0:  adrp     x10, #0x36e000
008297d4:  add      x10, x10, #0x59
008297d8:  mov      w8, #0x22
008297dc:  ldr      q0, [x10]
008297e0:  mov      w9, #0x74
008297e4:  sturb    w8, [x29, #-0x30]
008297e8:  sturh    w9, [x27, #0x91]
008297ec:  stur     q0, [x27, #0x81]
008297f0:  sub      x0, x29, #0x90
008297f4:  sub      x1, x29, #0x30
008297f8:  bl       #0x817c7c
008297fc:  ldurb    w8, [x29, #-0x30]
00829800:  mov      x21, x0
00829804:  tbz      w8, #0, #0x829810
00829808:  ldur     x0, [x29, #-0x20]
0082980c:  bl       #0x8ccfd0
00829810:  cbz      x21, #0x829894
00829814:  sub      x8, x29, #0x30
00829818:  add      x0, x21, #0x28
0082981c:  bl       #0x807a6c
00829820:  ldp      x10, x20, [x29, #-0x28]
00829824:  ldur     x8, [x27, #0x82]
00829828:  ldurb    w21, [x29, #-0x30]
0082982c:  ldrb     w9, [sp, #0x178]
00829830:  ldurb    w22, [x29, #-0x2f]
00829834:  stur     x8, [x29, #-0x40]
00829838:  stur     x10, [x27, #0x76]
0082983c:  cbz      w9, #0x829870
00829840:  ldrb     w8, [sp, #0x160]
00829844:  tbz      w8, #0, #0x829850
00829848:  ldr      x0, [sp, #0x170]
0082984c:  bl       #0x8ccfd0
00829850:  ldur     x8, [x29, #-0x40]
00829854:  ldur     x9, [x27, #0x76]
00829858:  add      x10, sp, #0xa8
0082985c:  strb     w21, [sp, #0x160]
00829860:  strb     w22, [sp, #0x161]
00829864:  stur     x8, [x10, #0xba]
00829868:  stp      x9, x20, [sp, #0x168]
0082986c:  b        #0x829894
00829870:  ldur     x8, [x29, #-0x40]
00829874:  ldur     x9, [x27, #0x76]
00829878:  add      x10, sp, #0xa8
0082987c:  strb     w21, [sp, #0x160]
00829880:  stur     x8, [x10, #0xba]
00829884:  mov      w8, #1
00829888:  strb     w22, [sp, #0x161]
0082988c:  stp      x9, x20, [sp, #0x168]
00829890:  strb     w8, [sp, #0x178]
00829894:  adrp     x10, #0x365000
00829898:  add      x10, x10, #0x32
0082989c:  mov      w9, #0x656d
008298a0:  ldr      q0, [x10]
008298a4:  mov      w8, #0x26
008298a8:  movk     w9, #0x746e, lsl #16
008298ac:  sturb    w8, [x29, #-0x30]
008298b0:  stur     w9, [x29, #-0x20]
008298b4:  stur     q0, [x27, #0x81]
008298b8:  sturb    wzr, [x29, #-0x1c]
008298bc:  sub      x0, x29, #0x90
008298c0:  sub      x1, x29, #0x30
008298c4:  bl       #0x817c7c
008298c8:  ldurb    w8, [x29, #-0x30]
008298cc:  mov      x21, x0
008298d0:  tbz      w8, #0, #0x8298dc
008298d4:  ldur     x0, [x29, #-0x20]
008298d8:  bl       #0x8ccfd0
008298dc:  cbz      x21, #0x829938
008298e0:  sub      x8, x29, #0x30
008298e4:  add      x0, x21, #0x28
008298e8:  bl       #0x807a6c
008298ec:  ldp      x10, x20, [x29, #-0x28]
008298f0:  ldur     x8, [x27, #0x82]
008298f4:  ldurb    w21, [x29, #-0x30]
008298f8:  ldrb     w9, [sp, #0x198]
008298fc:  ldurb    w22, [x29, #-0x2f]
00829900:  stur     x8, [x29, #-0x40]
00829904:  stur     x10, [x27, #0x76]
00829908:  cbz      w9, #0x829998
0082990c:  ldrb     w8, [sp, #0x180]
00829910:  tbz      w8, #0, #0x82991c
00829914:  ldr      x0, [sp, #0x190]
00829918:  bl       #0x8ccfd0
0082991c:  ldur     x8, [x29, #-0x40]
00829920:  ldur     x9, [x27, #0x76]
00829924:  add      x10, sp, #0xa8
00829928:  strb     w21, [sp, #0x180]
0082992c:  strb     w22, [sp, #0x181]
00829930:  stur     x8, [x10, #0xda]
00829934:  stp      x9, x20, [sp, #0x188]
00829938:  ldur     x21, [x29, #-0x80]
0082993c:  cbz      x21, #0x8299c4
00829940:  mov      w20, #-1
00829944:  b        #0x829958
00829948:  mov      x0, x21
0082994c:  bl       #0x8ccfd0
00829950:  mov      x21, x22
00829954:  cbz      x22, #0x8299c4
00829958:  ldr      w8, [x21, #0x58]
0082995c:  ldr      x22, [x21]
00829960:  cmn      w8, #1
00829964:  b.eq     #0x829980
00829968:  adrp     x9, #0x98c000
0082996c:  add      x9, x9, #0x980
00829970:  ldr      x8, [x9, x8, lsl #3]
00829974:  sub      x0, x29, #0x30
00829978:  add      x1, x21, #0x28
0082997c:  blr      x8
00829980:  ldrb     w8, [x21, #0x10]
00829984:  str      w20, [x21, #0x58]
00829988:  tbz      w8, #0, #0x829948
0082998c:  ldr      x0, [x21, #0x20]
00829990:  bl       #0x8ccfd0
00829994:  b        #0x829948
00829998:  ldur     x8, [x29, #-0x40]
0082999c:  ldur     x9, [x27, #0x76]
008299a0:  add      x10, sp, #0xa8
008299a4:  strb     w21, [sp, #0x180]
008299a8:  stur     x8, [x10, #0xda]
008299ac:  mov      w8, #1
008299b0:  strb     w22, [sp, #0x181]
008299b4:  stp      x9, x20, [sp, #0x188]
008299b8:  strb     w8, [sp, #0x198]
008299bc:  ldur     x21, [x29, #-0x80]
008299c0:  cbnz     x21, #0x829940
008299c4:  ldur     x0, [x29, #-0x90]
008299c8:  stur     xzr, [x29, #-0x90]
008299cc:  cbz      x0, #0x8299d4
008299d0:  bl       #0x8ccfd0
008299d4:  ldrb     w22, [sp, #0xe8]
008299d8:  add      x8, sp, #0xa8
008299dc:  cbz      w22, #0x829a0c
008299e0:  ldur     x9, [sp, #0xd2]
008299e4:  ldrb     w20, [sp, #0xd0]
008299e8:  ldrb     w2, [sp, #0xd1]
008299ec:  stur     x9, [x29, #-0x40]
008299f0:  ldp      x10, x9, [sp, #0xd8]
008299f4:  stp      xzr, xzr, [sp, #0xd0]
008299f8:  str      xzr, [sp, #0xe0]
008299fc:  str      x9, [sp, #0x30]
00829a00:  mov      w9, #1
00829a04:  stur     x10, [x27, #0x76]
00829a08:  b        #0x829a14
00829a0c:  mov      w20, wzr
00829a10:  mov      w9, wzr
00829a14:  ldur     q0, [x8, #0x48]
00829a18:  ldur     q1, [x8, #0x58]
00829a1c:  add      x12, sp, #0xa8
00829a20:  ldur     q2, [x8, #0x68]
00829a24:  ldrb     w21, [sp, #0x148]
00829a28:  stur     q0, [x27, #0x27]
00829a2c:  ldur     q0, [x8, #0x74]
00829a30:  stur     q1, [x27, #0x37]
00829a34:  stur     q2, [x27, #0x47]
00829a38:  stur     q0, [x27, #0x53]
00829a3c:  cbz      w21, #0x829a74
00829a40:  add      x10, sp, #0xa8
00829a44:  ldrb     w17, [sp, #0x131]
00829a48:  mov      w25, #1
00829a4c:  ldur     x10, [x10, #0x8a]
00829a50:  stur     x10, [x29, #-0xa0]
00829a54:  ldp      x11, x10, [sp, #0x138]
00829a58:  str      x10, [sp, #0x40]
00829a5c:  ldrb     w10, [sp, #0x130]
00829a60:  stur     x11, [x27, #0x16]
00829a64:  str      w10, [sp, #0x50]
00829a68:  stp      xzr, xzr, [x8, #0x90]
00829a6c:  stur     xzr, [x8, #0x88]
00829a70:  b        #0x829a7c
00829a74:  str      wzr, [sp, #0x50]
00829a78:  mov      w25, wzr
00829a7c:  ldur     q0, [x8, #0xa8]
00829a80:  ldrb     w10, [sp, #0x178]
00829a84:  stur     q0, [x27, #0x87]
00829a88:  str      w10, [sp, #0x24]
00829a8c:  cbz      w10, #0x829abc
00829a90:  ldur     x10, [x12, #0xba]
00829a94:  ldrb     w23, [sp, #0x160]
00829a98:  mov      w1, #1
00829a9c:  ldrb     w16, [sp, #0x161]
00829aa0:  stur     x10, [x29, #-0xb0]
00829aa4:  ldp      x11, x10, [sp, #0x168]
00829aa8:  stp      xzr, xzr, [sp, #0x160]
00829aac:  str      xzr, [sp, #0x170]
00829ab0:  str      x10, [sp, #0x38]
00829ab4:  stur     x11, [x27, #6]
00829ab8:  b        #0x829ac4
00829abc:  mov      w23, wzr
00829ac0:  mov      w1, wzr
00829ac4:  ldrb     w15, [sp, #0x198]
00829ac8:  add      x10, x19, #0x600
00829acc:  str      w21, [sp, #0x18]
00829ad0:  str      w22, [sp, #0x28]
00829ad4:  cbz      w15, #0x829b08
00829ad8:  add      x13, sp, #0xa8
00829adc:  ldp      x12, x0, [sp, #0x188]
00829ae0:  ldur     x11, [x13, #0xda]
00829ae4:  mov      w21, #1
00829ae8:  stur     x11, [x29, #-0xc0]
00829aec:  ldrb     w11, [sp, #0x181]
00829af0:  stur     x12, [x13, #0xfe]
00829af4:  ldrb     w13, [sp, #0x180]
00829af8:  str      w11, [sp, #8]
00829afc:  stp      xzr, xzr, [x8, #0xe0]
00829b00:  stur     xzr, [x8, #0xd8]
00829b04:  b        #0x829b10
00829b08:  mov      w13, wzr
00829b0c:  mov      w21, wzr
00829b10:  ldur     q0, [sp, #0xa8]
00829b14:  ldur     q1, [sp, #0xb8]
00829b18:  ldrb     w11, [x19, #0x6f8]
00829b1c:  ldr      x12, [sp, #0xc8]
00829b20:  stp      q0, q1, [x10]
00829b24:  str      x12, [x10, #0x20]
00829b28:  cbz      w11, #0x829bbc
00829b2c:  ldrb     w8, [x19, #0x640]
00829b30:  sub      x28, x29, #0x90
00829b34:  str      x0, [sp, #0x10]
00829b38:  str      w13, [sp, #0xc]
00829b3c:  cmp      w8, w9
00829b40:  b.ne     #0x829d30
00829b44:  cbz      w8, #0x829df8
00829b48:  ldrb     w8, [x19, #0x628]
00829b4c:  tbz      w8, #0, #0x829b90
00829b50:  ldr      x0, [x19, #0x638]
00829b54:  mov      w24, w15
00829b58:  mov      w26, w16
00829b5c:  stp      w25, w21, [sp]
00829b60:  mov      w21, w17
00829b64:  mov      w22, w1
00829b68:  mov      w25, w2
00829b6c:  bl       #0x8ccfd0
00829b70:  mov      w2, w25
00829b74:  mov      w17, w21
00829b78:  ldr      w13, [sp, #0xc]
00829b7c:  ldp      w25, w21, [sp]
00829b80:  ldr      x0, [sp, #0x10]
00829b84:  mov      w1, w22
00829b88:  mov      w16, w26
00829b8c:  mov      w15, w24
00829b90:  ldur     x8, [x27, #0x76]
00829b94:  ldur     x9, [x29, #-0x40]
00829b98:  add      x10, x19, #0x62a
00829b9c:  strb     w20, [x19, #0x628]
00829ba0:  mov      w20, wzr
00829ba4:  str      x8, [x19, #0x630]
00829ba8:  ldr      x8, [sp, #0x30]
00829bac:  strb     w2, [x19, #0x629]
00829bb0:  str      x9, [x10]
00829bb4:  str      x8, [x19, #0x638]
00829bb8:  b        #0x829df8
00829bbc:  ldr      w22, [sp, #0x28]
00829bc0:  strb     wzr, [x19, #0x628]
00829bc4:  strb     wzr, [x19, #0x640]
00829bc8:  cbz      w22, #0x829c08
00829bcc:  ldur     x9, [x27, #0x76]
00829bd0:  ldur     x10, [x29, #-0x40]
00829bd4:  add      x11, x19, #0x62a
00829bd8:  strb     w20, [x19, #0x628]
00829bdc:  mov      w20, wzr
00829be0:  str      x9, [x19, #0x630]
00829be4:  ldr      x9, [sp, #0x30]
00829be8:  strb     w2, [x19, #0x629]
00829bec:  str      x9, [x19, #0x638]
00829bf0:  mov      w9, #1
00829bf4:  str      x10, [x11]
00829bf8:  stur     xzr, [x29, #-0x40]
00829bfc:  stur     xzr, [x27, #0x76]
00829c00:  strb     w9, [x19, #0x640]
00829c04:  str      xzr, [sp, #0x30]
00829c08:  ldur     q0, [x8, #0x48]
00829c0c:  add      x9, x19, #0x600
00829c10:  ldr      w21, [sp, #0x18]
00829c14:  ldr      w24, [sp, #0x24]
00829c18:  ldr      w25, [sp, #0x50]
00829c1c:  add      x12, sp, #0xa8
00829c20:  ldur     q1, [x8, #0x58]
00829c24:  ldur     q2, [x8, #0x68]
00829c28:  stur     q0, [x9, #0x48]
00829c2c:  ldur     q0, [x8, #0x74]
00829c30:  strb     wzr, [x19, #0x688]
00829c34:  stur     q1, [x9, #0x58]
00829c38:  stur     q2, [x9, #0x68]
00829c3c:  stur     q0, [x9, #0x74]
00829c40:  strb     wzr, [x19, #0x6a0]
00829c44:  cbz      w21, #0x829c84
00829c48:  ldur     x9, [x27, #0x16]
00829c4c:  ldur     x10, [x29, #-0xa0]
00829c50:  add      x11, x19, #0x68a
00829c54:  strb     w25, [x19, #0x688]
00829c58:  mov      w25, wzr
00829c5c:  str      x9, [x19, #0x690]
00829c60:  ldr      x9, [sp, #0x40]
00829c64:  strb     w17, [x19, #0x689]
00829c68:  str      x9, [x19, #0x698]
00829c6c:  mov      w9, #1
00829c70:  str      x10, [x11]
00829c74:  stur     xzr, [x29, #-0xa0]
00829c78:  stur     xzr, [x27, #0x16]
00829c7c:  strb     w9, [x19, #0x6a0]
00829c80:  str      xzr, [sp, #0x40]
00829c84:  ldur     q0, [x8, #0xa8]
00829c88:  add      x8, x19, #0x6a8
00829c8c:  strb     wzr, [x19, #0x6b8]
00829c90:  strb     wzr, [x19, #0x6d0]
00829c94:  str      q0, [x8]
00829c98:  cbz      w24, #0x829cd8
00829c9c:  ldur     x8, [x27, #6]
00829ca0:  ldur     x9, [x29, #-0xb0]
00829ca4:  add      x10, x19, #0x6ba
00829ca8:  strb     w23, [x19, #0x6b8]
00829cac:  mov      w23, wzr
00829cb0:  str      x8, [x19, #0x6c0]
00829cb4:  ldr      x8, [sp, #0x38]
00829cb8:  strb     w16, [x19, #0x6b9]
00829cbc:  str      x8, [x19, #0x6c8]
00829cc0:  mov      w8, #1
00829cc4:  str      x9, [x10]
00829cc8:  stur     xzr, [x29, #-0xb0]
00829ccc:  stur     xzr, [x27, #6]
00829cd0:  strb     w8, [x19, #0x6d0]
00829cd4:  str      xzr, [sp, #0x38]
00829cd8:  strb     wzr, [x19, #0x6d8]
00829cdc:  strb     wzr, [x19, #0x6f0]
00829ce0:  cbz      w15, #0x829d20
00829ce4:  ldr      w9, [sp, #8]
00829ce8:  ldur     x8, [x12, #0xfe]
00829cec:  add      x10, x19, #0x6da
00829cf0:  strb     w13, [x19, #0x6d8]
00829cf4:  mov      w13, wzr
00829cf8:  strb     w9, [x19, #0x6d9]
00829cfc:  ldur     x9, [x29, #-0xc0]
00829d00:  str      x8, [x19, #0x6e0]
00829d04:  mov      w8, #1
00829d08:  str      x0, [x19, #0x6e8]
00829d0c:  mov      x0, xzr
00829d10:  str      x9, [x10]
00829d14:  stur     xzr, [x29, #-0xc0]
00829d18:  stur     xzr, [x12, #0xfe]
00829d1c:  strb     w8, [x19, #0x6f0]
00829d20:  mov      w8, #1
00829d24:  strb     w8, [x19, #0x6f8]
00829d28:  cbnz     w15, #0x82a0a4
00829d2c:  b        #0x82a0ac
00829d30:  cbz      w8, #0x829dbc
00829d34:  ldrb     w8, [x19, #0x628]
00829d38:  tbz      w8, #0, #0x829d74
00829d3c:  ldr      x0, [x19, #0x638]
00829d40:  mov      w24, w15
00829d44:  mov      w26, w16
00829d48:  str      w21, [sp, #4]
00829d4c:  mov      w21, w17
00829d50:  mov      w22, w1
00829d54:  bl       #0x8ccfd0
00829d58:  mov      w17, w21
00829d5c:  ldr      w21, [sp, #4]
00829d60:  ldr      w13, [sp, #0xc]
00829d64:  ldr      x0, [sp, #0x10]
00829d68:  mov      w1, w22
00829d6c:  mov      w16, w26
00829d70:  mov      w15, w24
00829d74:  strb     wzr, [x19, #0x640]
00829d78:  b        #0x829df8
00829d7c:  add      x11, sp, #0xa8
00829d80:  ldr      w9, [sp, #8]
00829d84:  add      x10, x19, #0x5da
00829d88:  ldur     x8, [x11, #0xfe]
00829d8c:  strb     w13, [x19, #0x5d8]
00829d90:  strb     w9, [x19, #0x5d9]
00829d94:  ldur     x9, [x29, #-0xc0]
00829d98:  str      x8, [x19, #0x5e0]
00829d9c:  mov      w8, #1
00829da0:  str      x9, [x10]
00829da4:  str      x0, [x19, #0x5e8]
00829da8:  stur     xzr, [x29, #-0xc0]
00829dac:  stur     xzr, [x11, #0xfe]
00829db0:  strb     w8, [x19, #0x5f0]
00829db4:  cbnz     w24, #0x828b40
00829db8:  b        #0x828b4c
00829dbc:  ldur     x8, [x27, #0x76]
00829dc0:  ldur     x9, [x29, #-0x40]
00829dc4:  add      x10, x19, #0x62a
00829dc8:  strb     w20, [x19, #0x628]
00829dcc:  mov      w20, wzr
00829dd0:  str      x8, [x19, #0x630]
00829dd4:  ldr      x8, [sp, #0x30]
00829dd8:  strb     w2, [x19, #0x629]
00829ddc:  str      x8, [x19, #0x638]
00829de0:  mov      w8, #1
00829de4:  str      x9, [x10]
00829de8:  stur     xzr, [x29, #-0x40]
00829dec:  stur     xzr, [x27, #0x76]
00829df0:  strb     w8, [x19, #0x640]
00829df4:  str      xzr, [sp, #0x30]
00829df8:  ldur     q0, [x28, #7]
00829dfc:  add      x9, x19, #0x600
00829e00:  ldrb     w8, [x19, #0x6a0]
00829e04:  ldur     q1, [x28, #0x17]
00829e08:  ldur     q2, [x28, #0x27]
00829e0c:  stur     q0, [x9, #0x48]
00829e10:  ldur     q0, [x28, #0x33]
00829e14:  cmp      w8, w25
00829e18:  sub      x25, x29, #0x30
00829e1c:  stur     q1, [x9, #0x58]
00829e20:  stur     q2, [x9, #0x68]
00829e24:  stur     q0, [x9, #0x74]
00829e28:  b.ne     #0x829ea0
00829e2c:  cbz      w8, #0x829f1c
00829e30:  ldrb     w8, [x19, #0x688]
00829e34:  tbz      w8, #0, #0x829e70
00829e38:  ldr      x0, [x19, #0x698]
00829e3c:  mov      w26, w15
00829e40:  mov      w28, w16
00829e44:  mov      w22, w21
00829e48:  mov      w21, w17
00829e4c:  mov      w24, w1
00829e50:  bl       #0x8ccfd0
00829e54:  ldr      w13, [sp, #0xc]
00829e58:  ldr      x0, [sp, #0x10]
00829e5c:  mov      w1, w24
00829e60:  mov      w17, w21
00829e64:  mov      w21, w22
00829e68:  mov      w16, w28
00829e6c:  mov      w15, w26
00829e70:  ldr      w8, [sp, #0x50]
00829e74:  ldur     x9, [x29, #-0xa0]
00829e78:  add      x10, x19, #0x68a
00829e7c:  strb     w17, [x19, #0x689]
00829e80:  strb     w8, [x19, #0x688]
00829e84:  ldur     x8, [x27, #0x16]
00829e88:  str      wzr, [sp, #0x50]
00829e8c:  str      x8, [x19, #0x690]
00829e90:  ldr      x8, [sp, #0x40]
00829e94:  str      x9, [x10]
00829e98:  str      x8, [x19, #0x698]
00829e9c:  b        #0x829f1c
00829ea0:  cbz      w8, #0x829edc
00829ea4:  ldrb     w8, [x19, #0x688]
00829ea8:  tbz      w8, #0, #0x829ed4
00829eac:  ldr      x0, [x19, #0x698]
00829eb0:  mov      w26, w15
00829eb4:  mov      w28, w16
00829eb8:  mov      w22, w1
00829ebc:  bl       #0x8ccfd0
00829ec0:  ldr      w13, [sp, #0xc]
00829ec4:  ldr      x0, [sp, #0x10]
00829ec8:  mov      w1, w22
00829ecc:  mov      w16, w28
00829ed0:  mov      w15, w26
00829ed4:  strb     wzr, [x19, #0x6a0]
00829ed8:  b        #0x829f1c
00829edc:  ldr      w8, [sp, #0x50]
00829ee0:  ldur     x9, [x29, #-0xa0]
00829ee4:  add      x10, x19, #0x68a
00829ee8:  strb     w17, [x19, #0x689]
00829eec:  strb     w8, [x19, #0x688]
00829ef0:  ldur     x8, [x27, #0x16]
00829ef4:  stur     xzr, [x29, #-0xa0]
00829ef8:  str      x8, [x19, #0x690]
00829efc:  ldr      x8, [sp, #0x40]
00829f00:  str      x9, [x10]
00829f04:  str      x8, [x19, #0x698]
00829f08:  mov      w8, #1
00829f0c:  stur     xzr, [x27, #0x16]
00829f10:  strb     w8, [x19, #0x6a0]
00829f14:  str      wzr, [sp, #0x50]
00829f18:  str      xzr, [sp, #0x40]
00829f1c:  ldrb     w8, [x19, #0x6d0]
00829f20:  ldur     q0, [x25, #7]
00829f24:  add      x9, x19, #0x6a8
00829f28:  add      x24, sp, #0xa8
00829f2c:  cmp      w8, w1
00829f30:  str      q0, [x9]
00829f34:  b.ne     #0x829f94
00829f38:  ldr      w25, [sp, #0x50]
00829f3c:  cbz      w8, #0x82a000
00829f40:  ldrb     w8, [x19, #0x6b8]
00829f44:  tbz      w8, #0, #0x829f68
00829f48:  ldr      x0, [x19, #0x6c8]
00829f4c:  mov      w26, w15
00829f50:  mov      w28, w16
00829f54:  bl       #0x8ccfd0
00829f58:  ldr      w13, [sp, #0xc]
00829f5c:  ldr      x0, [sp, #0x10]
00829f60:  mov      w16, w28
00829f64:  mov      w15, w26
00829f68:  ldur     x8, [x27, #6]
00829f6c:  ldur     x9, [x29, #-0xb0]
00829f70:  add      x10, x19, #0x6ba
00829f74:  strb     w23, [x19, #0x6b8]
00829f78:  mov      w23, wzr
00829f7c:  str      x8, [x19, #0x6c0]
00829f80:  ldr      x8, [sp, #0x38]
00829f84:  strb     w16, [x19, #0x6b9]
00829f88:  str      x9, [x10]
00829f8c:  str      x8, [x19, #0x6c8]
00829f90:  b        #0x82a000
00829f94:  ldr      w25, [sp, #0x50]
00829f98:  cbz      w8, #0x829fc4
00829f9c:  ldrb     w8, [x19, #0x6b8]
00829fa0:  tbz      w8, #0, #0x829fbc
00829fa4:  ldr      x0, [x19, #0x6c8]
00829fa8:  mov      w26, w15
00829fac:  bl       #0x8ccfd0
00829fb0:  ldr      w13, [sp, #0xc]
00829fb4:  ldr      x0, [sp, #0x10]
00829fb8:  mov      w15, w26
00829fbc:  strb     wzr, [x19, #0x6d0]
00829fc0:  b        #0x82a000
00829fc4:  ldur     x8, [x27, #6]
00829fc8:  ldur     x9, [x29, #-0xb0]
00829fcc:  add      x10, x19, #0x6ba
00829fd0:  strb     w23, [x19, #0x6b8]
00829fd4:  mov      w23, wzr
00829fd8:  str      x8, [x19, #0x6c0]
00829fdc:  ldr      x8, [sp, #0x38]
00829fe0:  strb     w16, [x19, #0x6b9]
00829fe4:  str      x8, [x19, #0x6c8]
00829fe8:  mov      w8, #1
00829fec:  str      x9, [x10]
00829ff0:  stur     xzr, [x29, #-0xb0]
00829ff4:  stur     xzr, [x27, #6]
00829ff8:  strb     w8, [x19, #0x6d0]
00829ffc:  str      xzr, [sp, #0x38]
0082a000:  ldrb     w8, [x19, #0x6f0]
0082a004:  cmp      w8, w21
0082a008:  b.ne     #0x82a060
0082a00c:  ldr      w22, [sp, #0x28]
0082a010:  ldr      w21, [sp, #0x18]
0082a014:  cbz      w8, #0x82a09c
0082a018:  ldrb     w8, [x19, #0x6d8]
0082a01c:  tbz      w8, #0, #0x82a030
0082a020:  ldr      x0, [x19, #0x6e8]
0082a024:  bl       #0x8ccfd0
0082a028:  ldr      w13, [sp, #0xc]
0082a02c:  ldr      x0, [sp, #0x10]
0082a030:  ldr      w9, [sp, #8]
0082a034:  ldur     x8, [x24, #0xfe]
0082a038:  add      x10, x19, #0x6da
0082a03c:  ldr      w24, [sp, #0x24]
0082a040:  strb     w13, [x19, #0x6d8]
0082a044:  strb     w9, [x19, #0x6d9]
0082a048:  ldur     x9, [x29, #-0xc0]
0082a04c:  str      x8, [x19, #0x6e0]
0082a050:  str      x9, [x10]
0082a054:  str      x0, [x19, #0x6e8]
0082a058:  cbnz     w24, #0x82a0b0
0082a05c:  b        #0x82a0bc
0082a060:  ldr      w22, [sp, #0x28]
0082a064:  ldr      w21, [sp, #0x18]
0082a068:  cbz      w8, #0x82afb0
0082a06c:  ldrb     w8, [x19, #0x6d8]
0082a070:  tbz      w8, #0, #0x82a08c
0082a074:  ldr      x0, [x19, #0x6e8]
0082a078:  mov      w24, w15
0082a07c:  bl       #0x8ccfd0
0082a080:  ldr      w13, [sp, #0xc]
0082a084:  ldr      x0, [sp, #0x10]
0082a088:  mov      w15, w24
0082a08c:  ldr      w24, [sp, #0x24]
0082a090:  strb     wzr, [x19, #0x6f0]
0082a094:  cbnz     w15, #0x82a0a4
0082a098:  b        #0x82a0ac
0082a09c:  ldr      w24, [sp, #0x24]
0082a0a0:  cbz      w15, #0x82a0ac
0082a0a4:  tbz      w13, #0, #0x82a0ac
0082a0a8:  bl       #0x8ccfd0
0082a0ac:  cbz      w24, #0x82a0bc
0082a0b0:  tbz      w23, #0, #0x82a0bc
0082a0b4:  ldr      x0, [sp, #0x38]
0082a0b8:  bl       #0x8ccfd0
0082a0bc:  cbz      w21, #0x82a0cc
0082a0c0:  tbz      w25, #0, #0x82a0cc
0082a0c4:  ldr      x0, [sp, #0x40]
0082a0c8:  bl       #0x8ccfd0
0082a0cc:  cbz      w22, #0x82a0dc
0082a0d0:  tbz      w20, #0, #0x82a0dc
0082a0d4:  ldr      x0, [sp, #0x30]
0082a0d8:  bl       #0x8ccfd0
0082a0dc:  ldrb     w8, [sp, #0x198]
0082a0e0:  cbz      w8, #0x82a0f4
0082a0e4:  ldrb     w8, [sp, #0x180]
0082a0e8:  tbz      w8, #0, #0x82a0f4
0082a0ec:  ldr      x0, [sp, #0x190]
0082a0f0:  bl       #0x8ccfd0
0082a0f4:  ldrb     w8, [sp, #0x178]
0082a0f8:  cbz      w8, #0x82a10c
0082a0fc:  ldrb     w8, [sp, #0x160]
0082a100:  tbz      w8, #0, #0x82a10c
0082a104:  ldr      x0, [sp, #0x170]
0082a108:  bl       #0x8ccfd0
0082a10c:  ldrb     w8, [sp, #0x148]
0082a110:  cbz      w8, #0x82a124
0082a114:  ldrb     w8, [sp, #0x130]
0082a118:  tbz      w8, #0, #0x82a124
0082a11c:  ldr      x0, [sp, #0x140]
0082a120:  bl       #0x8ccfd0
0082a124:  ldrb     w8, [sp, #0xe8]
0082a128:  cbz      w8, #0x82a13c
0082a12c:  ldrb     w8, [sp, #0xd0]
0082a130:  tbz      w8, #0, #0x82a13c
0082a134:  ldr      x0, [sp, #0xe0]
0082a138:  bl       #0x8ccfd0
0082a13c:  adrp     x9, #0x36e000
0082a140:  add      x9, x9, #0x6bf
0082a144:  mov      w10, #0x7449
0082a148:  ldr      x9, [x9]
0082a14c:  mov      w8, #0x16
0082a150:  movk     w10, #0x6d65, lsl #16
0082a154:  strb     w8, [sp, #0xa8]
0082a158:  str      w10, [sp, #0xb0]
0082a15c:  stur     x9, [sp, #0xa9]
0082a160:  strb     wzr, [sp, #0xb4]
0082a164:  add      x0, sp, #0x80
0082a168:  add      x1, sp, #0xa8
0082a16c:  bl       #0x817c7c
0082a170:  ldrb     w8, [sp, #0xa8]
0082a174:  mov      x21, x0
0082a178:  tbz      w8, #0, #0x82a184
0082a17c:  ldr      x0, [sp, #0xb8]
0082a180:  bl       #0x8ccfd0
0082a184:  cbz      x21, #0x82af0c
0082a188:  ldr      w8, [x21, #0x58]
0082a18c:  cmp      w8, #1
0082a190:  b.eq     #0x82a1ac
0082a194:  cbnz     w8, #0x82b0b0
0082a198:  add      x8, sp, #0xa8
0082a19c:  add      x0, x21, #0x28
0082a1a0:  mov      x1, xzr
0082a1a4:  bl       #0x8118bc
0082a1a8:  b        #0x82a1c0
0082a1ac:  ldr      x0, [x21, #0x28]
0082a1b0:  add      x8, sp, #0xa8
0082a1b4:  add      x1, x21, #0x30
0082a1b8:  mov      x2, xzr
0082a1bc:  bl       #0x811aa8
0082a1c0:  adrp     x10, #0x370000
0082a1c4:  add      x10, x10, #0xad5
0082a1c8:  mov      w9, #0x6964
0082a1cc:  ldr      x10, [x10]
0082a1d0:  mov      w8, #0x18
0082a1d4:  movk     w9, #0x7375, lsl #16
0082a1d8:  sturb    w8, [x29, #-0x90]
0082a1dc:  stur     w9, [x27, #0x29]
0082a1e0:  stur     x10, [x27, #0x21]
0082a1e4:  sturb    wzr, [x29, #-0x83]
0082a1e8:  add      x0, sp, #0xa8
0082a1ec:  sub      x1, x29, #0x90
0082a1f0:  bl       #0x817c7c
0082a1f4:  ldurb    w8, [x29, #-0x90]
0082a1f8:  mov      x21, x0
0082a1fc:  tbz      w8, #0, #0x82a208
0082a200:  ldur     x0, [x29, #-0x80]
0082a204:  bl       #0x8ccfd0
0082a208:  cbz      x21, #0x82a218
0082a20c:  add      x0, x21, #0x28
0082a210:  bl       #0x809024
0082a214:  str      s0, [x19, #0x700]
0082a218:  adrp     x10, #0x36e000
0082a21c:  add      x10, x10, #0x6cb
0082a220:  mov      w9, #0x6964
0082a224:  ldr      q0, [x10]
0082a228:  mov      w8, #0x26
0082a22c:  movk     w9, #0x7375, lsl #16
0082a230:  sturb    w8, [x29, #-0x90]
0082a234:  stur     w9, [x29, #-0x80]
0082a238:  stur     q0, [x27, #0x21]
0082a23c:  sturb    wzr, [x29, #-0x7c]
0082a240:  add      x0, sp, #0xa8
0082a244:  sub      x1, x29, #0x90
0082a248:  bl       #0x817c7c
0082a24c:  ldurb    w8, [x29, #-0x90]
0082a250:  mov      x21, x0
0082a254:  tbz      w8, #0, #0x82a260
0082a258:  ldur     x0, [x29, #-0x80]
0082a25c:  bl       #0x8ccfd0
0082a260:  cbz      x21, #0x82a270
0082a264:  add      x0, x21, #0x28
0082a268:  bl       #0x809024
0082a26c:  str      s0, [x19, #0x704]
0082a270:  adrp     x10, #0x36a000
0082a274:  add      x10, x10, #0xe62
0082a278:  mov      w9, #0x6964
0082a27c:  ldr      q0, [x10]
0082a280:  mov      w8, #0x28
0082a284:  movk     w9, #0x7375, lsl #16
0082a288:  sturb    w8, [x29, #-0x90]
0082a28c:  stur     w9, [x27, #0x31]
0082a290:  stur     q0, [x27, #0x21]
0082a294:  sturb    wzr, [x29, #-0x7b]
0082a298:  add      x0, sp, #0xa8
0082a29c:  sub      x1, x29, #0x90
0082a2a0:  bl       #0x817c7c
0082a2a4:  ldurb    w8, [x29, #-0x90]
0082a2a8:  mov      x21, x0
0082a2ac:  tbz      w8, #0, #0x82a2b8
0082a2b0:  ldur     x0, [x29, #-0x80]
0082a2b4:  bl       #0x8ccfd0
0082a2b8:  cbz      x21, #0x82a2c8
0082a2bc:  add      x0, x21, #0x28
0082a2c0:  bl       #0x809024
0082a2c4:  str      s0, [x19, #0x708]
0082a2c8:  adrp     x9, #0x36e000
0082a2cc:  add      x9, x9, #0x42
0082a2d0:  mov      w8, #0x2c
0082a2d4:  ldr      q0, [x9]
0082a2d8:  ldur     x9, [x9, #0xe]
0082a2dc:  sturb    w8, [x29, #-0x90]
0082a2e0:  sturb    wzr, [x29, #-0x79]
0082a2e4:  stur     q0, [x27, #0x21]
0082a2e8:  stur     x9, [x27, #0x2f]
0082a2ec:  add      x0, sp, #0xa8
0082a2f0:  sub      x1, x29, #0x90
0082a2f4:  bl       #0x817c7c
0082a2f8:  ldurb    w8, [x29, #-0x90]
0082a2fc:  mov      x21, x0
0082a300:  tbz      w8, #0, #0x82a30c
0082a304:  ldur     x0, [x29, #-0x80]
0082a308:  bl       #0x8ccfd0
0082a30c:  cbz      x21, #0x82a31c
0082a310:  add      x0, x21, #0x28
0082a314:  bl       #0x809024
0082a318:  str      s0, [x19, #0x70c]
0082a31c:  mov      w0, #0x20
0082a320:  bl       #0x8ccfa0
0082a324:  adrp     x8, #0x372000
0082a328:  stur     x0, [x29, #-0x80]
0082a32c:  ldr      q0, [x8, #0xd20]
0082a330:  adrp     x8, #0x36c000
0082a334:  add      x8, x8, #0x45
0082a338:  ldr      q1, [x8]
0082a33c:  ldur     x8, [x8, #0xf]
0082a340:  strb     wzr, [x0, #0x17]
0082a344:  stur     q0, [x29, #-0x90]
0082a348:  str      q1, [x0]
0082a34c:  stur     x8, [x0, #0xf]
0082a350:  add      x0, sp, #0xa8
0082a354:  sub      x1, x29, #0x90
0082a358:  bl       #0x817c7c
0082a35c:  ldurb    w8, [x29, #-0x90]
0082a360:  mov      x21, x0
0082a364:  tbz      w8, #0, #0x82a370
0082a368:  ldur     x0, [x29, #-0x80]
0082a36c:  bl       #0x8ccfd0
0082a370:  cbz      x21, #0x82a380
0082a374:  add      x0, x21, #0x28
0082a378:  bl       #0x809024
0082a37c:  str      s0, [x19, #0x710]
0082a380:  mov      w8, #0xe
0082a384:  mov      w9, #0x6964
0082a388:  sturb    wzr, [x29, #-0x88]
0082a38c:  sturb    w8, [x29, #-0x90]
0082a390:  mov      w8, #0x6469
0082a394:  movk     w9, #0x6976, lsl #16
0082a398:  movk     w8, #0x7265, lsl #16
0082a39c:  stur     w9, [x27, #0x21]
0082a3a0:  stur     w8, [x29, #-0x8c]
0082a3a4:  add      x0, sp, #0xa8
0082a3a8:  sub      x1, x29, #0x90
0082a3ac:  bl       #0x817c7c
0082a3b0:  ldurb    w8, [x29, #-0x90]
0082a3b4:  mov      x21, x0
0082a3b8:  tbz      w8, #0, #0x82a3c4
0082a3bc:  ldur     x0, [x29, #-0x80]
0082a3c0:  bl       #0x8ccfd0
0082a3c4:  cbz      x21, #0x82a404
0082a3c8:  ldr      w8, [x21, #0x58]
0082a3cc:  cmp      w8, #1
0082a3d0:  b.eq     #0x82a3f4
0082a3d4:  cbnz     w8, #0x82b26c
0082a3d8:  ldr      w1, [x21, #0x28]
0082a3dc:  cmp      w1, #2
0082a3e0:  b.ne     #0x82b284
0082a3e4:  ldrb     w8, [x21, #0x30]
0082a3e8:  cmp      w8, #0
0082a3ec:  cset     w0, ne
0082a3f0:  b        #0x82a3fc
0082a3f4:  add      x0, x21, #0x30
0082a3f8:  bl       #0x8cdb20
0082a3fc:  and      w8, w0, #1
0082a400:  strb     w8, [x19, #0x714]
0082a404:  adrp     x10, #0x36f000
0082a408:  add      x10, x10, #0x93e
0082a40c:  mov      w9, #0x6c6f
0082a410:  ldr      x10, [x10]
0082a414:  mov      w8, #0x18
0082a418:  movk     w9, #0x726f, lsl #16
0082a41c:  sturb    w8, [x29, #-0x90]
0082a420:  stur     w9, [x27, #0x29]
0082a424:  stur     x10, [x27, #0x21]
0082a428:  sturb    wzr, [x29, #-0x83]
0082a42c:  add      x0, sp, #0xa8
0082a430:  sub      x1, x29, #0x90
0082a434:  bl       #0x817c7c
0082a438:  ldurb    w8, [x29, #-0x90]
0082a43c:  mov      x21, x0
0082a440:  tbz      w8, #0, #0x82a44c
0082a444:  ldur     x0, [x29, #-0x80]
0082a448:  bl       #0x8ccfd0
0082a44c:  cbz      x21, #0x82a484
0082a450:  ldr      x8, [sp, #0x70]
0082a454:  stur     wzr, [x29, #-0x90]
0082a458:  ldr      x0, [x8, #8]
0082a45c:  ldr      w1, [x8]
0082a460:  adrp     x4, #0x99e000
0082a464:  add      x2, x21, #0x28
0082a468:  sub      x3, x29, #0x90
0082a46c:  ldr      x4, [x4, #0x140]
0082a470:  bl       #0x807f90
0082a474:  ldur     w8, [x29, #-0x90]
0082a478:  mov      w9, #1
0082a47c:  strb     w9, [x19, #0x71c]
0082a480:  str      w8, [x19, #0x718]
0082a484:  adrp     x10, #0x367000
0082a488:  add      x10, x10, #0xa0f
0082a48c:  mov      w8, #0x24
0082a490:  ldr      q0, [x10]
0082a494:  mov      w9, #0x7466
0082a498:  sturb    w8, [x29, #-0x90]
0082a49c:  sturh    w9, [x27, #0x31]
0082a4a0:  stur     q0, [x27, #0x21]
0082a4a4:  sturb    wzr, [x29, #-0x7d]
0082a4a8:  add      x0, sp, #0xa8
0082a4ac:  sub      x1, x29, #0x90
0082a4b0:  bl       #0x817c7c
0082a4b4:  ldurb    w8, [x29, #-0x90]
0082a4b8:  mov      x21, x0
0082a4bc:  tbz      w8, #0, #0x82a4c8
0082a4c0:  ldur     x0, [x29, #-0x80]
0082a4c4:  bl       #0x8ccfd0
0082a4c8:  cbz      x21, #0x82a4d8
0082a4cc:  add      x0, x21, #0x28
0082a4d0:  bl       #0x809024
0082a4d4:  str      s0, [x19, #0x720]
0082a4d8:  adrp     x10, #0x36a000
0082a4dc:  add      x10, x10, #0x836
0082a4e0:  mov      w9, #0x6769
0082a4e4:  ldr      q0, [x10]
0082a4e8:  mov      w8, #0x26
0082a4ec:  movk     w9, #0x7468, lsl #16
0082a4f0:  sturb    w8, [x29, #-0x90]
0082a4f4:  stur     w9, [x29, #-0x80]
0082a4f8:  stur     q0, [x27, #0x21]
0082a4fc:  sturb    wzr, [x29, #-0x7c]
0082a500:  add      x0, sp, #0xa8
0082a504:  sub      x1, x29, #0x90
0082a508:  bl       #0x817c7c
0082a50c:  ldurb    w8, [x29, #-0x90]
0082a510:  mov      x21, x0
0082a514:  tbz      w8, #0, #0x82a520
0082a518:  ldur     x0, [x29, #-0x80]
0082a51c:  bl       #0x8ccfd0
0082a520:  cbz      x21, #0x82a530
0082a524:  add      x0, x21, #0x28
0082a528:  bl       #0x809024
0082a52c:  str      s0, [x19, #0x724]
0082a530:  adrp     x9, #0x36c000
0082a534:  add      x9, x9, #0x4b4
0082a538:  mov      w8, #0x20
0082a53c:  ldr      q0, [x9]
0082a540:  sturb    w8, [x29, #-0x90]
0082a544:  sturb    wzr, [x29, #-0x7f]
0082a548:  stur     q0, [x27, #0x21]
0082a54c:  add      x0, sp, #0xa8
0082a550:  sub      x1, x29, #0x90
0082a554:  bl       #0x817c7c
0082a558:  ldurb    w8, [x29, #-0x90]
0082a55c:  mov      x21, x0
0082a560:  tbz      w8, #0, #0x82a56c
0082a564:  ldur     x0, [x29, #-0x80]
0082a568:  bl       #0x8ccfd0
0082a56c:  cbz      x21, #0x82a5f8
0082a570:  sub      x8, x29, #0x90
0082a574:  add      x0, x21, #0x28
0082a578:  bl       #0x807a6c
0082a57c:  ldp      x10, x20, [x29, #-0x88]
0082a580:  ldur     x8, [x27, #0x22]
0082a584:  ldurb    w22, [x29, #-0x90]
0082a588:  ldrb     w9, [x19, #0x740]
0082a58c:  ldurb    w21, [x29, #-0x8f]
0082a590:  stur     x8, [x29, #-0x30]
0082a594:  stur     x10, [x27, #0x86]
0082a598:  cbz      w9, #0x82a5d0
0082a59c:  ldrb     w8, [x19, #0x728]
0082a5a0:  tbz      w8, #0, #0x82a5ac
0082a5a4:  ldr      x0, [x19, #0x738]
0082a5a8:  bl       #0x8ccfd0
0082a5ac:  ldur     x8, [x27, #0x86]
0082a5b0:  ldur     x9, [x29, #-0x30]
0082a5b4:  add      x10, x19, #0x72a
0082a5b8:  strb     w22, [x19, #0x728]
0082a5bc:  strb     w21, [x19, #0x729]
0082a5c0:  str      x8, [x19, #0x730]
0082a5c4:  str      x9, [x10]
0082a5c8:  str      x20, [x19, #0x738]
0082a5cc:  b        #0x82a5f8
0082a5d0:  ldur     x8, [x27, #0x86]
0082a5d4:  ldur     x9, [x29, #-0x30]
0082a5d8:  add      x10, x19, #0x72a
0082a5dc:  strb     w22, [x19, #0x728]
0082a5e0:  str      x8, [x19, #0x730]
0082a5e4:  mov      w8, #1
0082a5e8:  strb     w21, [x19, #0x729]
0082a5ec:  str      x9, [x10]
0082a5f0:  str      x20, [x19, #0x738]
0082a5f4:  strb     w8, [x19, #0x740]
0082a5f8:  adrp     x9, #0x36a000
0082a5fc:  add      x9, x9, #0x84a
0082a600:  mov      w8, #0x2a
0082a604:  ldr      q0, [x9]
0082a608:  ldur     x9, [x9, #0xd]
0082a60c:  sturb    w8, [x29, #-0x90]
0082a610:  sturb    wzr, [x29, #-0x7a]
0082a614:  stur     q0, [x27, #0x21]
0082a618:  stur     x9, [x27, #0x2e]
0082a61c:  add      x0, sp, #0xa8
0082a620:  sub      x1, x29, #0x90
0082a624:  bl       #0x817c7c
0082a628:  ldurb    w8, [x29, #-0x90]
0082a62c:  mov      x21, x0
0082a630:  tbz      w8, #0, #0x82a63c
0082a634:  ldur     x0, [x29, #-0x80]
0082a638:  bl       #0x8ccfd0
0082a63c:  cbz      x21, #0x82a674
0082a640:  ldr      x8, [sp, #0x70]
0082a644:  stur     wzr, [x29, #-0x90]
0082a648:  ldr      x0, [x8, #8]
0082a64c:  ldr      w1, [x8]
0082a650:  adrp     x4, #0x99e000
0082a654:  add      x2, x21, #0x28
0082a658:  sub      x3, x29, #0x90
0082a65c:  ldr      x4, [x4, #0x140]
0082a660:  bl       #0x807f90
0082a664:  ldur     w8, [x29, #-0x90]
0082a668:  mov      w9, #1
0082a66c:  strb     w9, [x19, #0x74c]
0082a670:  str      w8, [x19, #0x748]
0082a674:  adrp     x9, #0x36d000
0082a678:  add      x9, x9, #0x9e1
0082a67c:  mov      w8, #0x2a
0082a680:  ldr      q0, [x9]
0082a684:  ldur     x9, [x9, #0xd]
0082a688:  sturb    w8, [x29, #-0x90]
0082a68c:  sturb    wzr, [x29, #-0x7a]
0082a690:  stur     q0, [x27, #0x21]
0082a694:  stur     x9, [x27, #0x2e]
0082a698:  add      x0, sp, #0xa8
0082a69c:  sub      x1, x29, #0x90
0082a6a0:  bl       #0x817c7c
0082a6a4:  ldurb    w8, [x29, #-0x90]
0082a6a8:  mov      x21, x0
0082a6ac:  tbz      w8, #0, #0x82a6b8
0082a6b0:  ldur     x0, [x29, #-0x80]
0082a6b4:  bl       #0x8ccfd0
0082a6b8:  cbz      x21, #0x82a6c8
0082a6bc:  add      x0, x21, #0x28
0082a6c0:  bl       #0x8161a0
0082a6c4:  str      w0, [x19, #0x750]
0082a6c8:  adrp     x10, #0x36a000
0082a6cc:  add      x10, x10, #0xe77
0082a6d0:  mov      w9, #0x4765
0082a6d4:  ldr      q0, [x10]
0082a6d8:  mov      w8, #0x26
0082a6dc:  movk     w9, #0x7061, lsl #16
0082a6e0:  sturb    w8, [x29, #-0x90]
0082a6e4:  stur     w9, [x29, #-0x80]
0082a6e8:  stur     q0, [x27, #0x21]
0082a6ec:  sturb    wzr, [x29, #-0x7c]
0082a6f0:  add      x0, sp, #0xa8
0082a6f4:  sub      x1, x29, #0x90
0082a6f8:  bl       #0x817c7c
0082a6fc:  ldurb    w8, [x29, #-0x90]
0082a700:  mov      x21, x0
0082a704:  tbz      w8, #0, #0x82a710
0082a708:  ldur     x0, [x29, #-0x80]
0082a70c:  bl       #0x8ccfd0
0082a710:  cbz      x21, #0x82a720
0082a714:  add      x0, x21, #0x28
0082a718:  bl       #0x809024
0082a71c:  str      s0, [x19, #0x754]
0082a720:  mov      w0, #0x30
0082a724:  bl       #0x8ccfa0
0082a728:  adrp     x8, #0x373000
0082a72c:  stur     x0, [x29, #-0x80]
0082a730:  ldr      q2, [x8, #0x40]
0082a734:  mov      w8, #0x6c
0082a738:  strh     w8, [x0, #0x20]
0082a73c:  adrp     x8, #0x369000
0082a740:  add      x8, x8, #0x87b
0082a744:  ldp      q0, q1, [x8]
0082a748:  str      q2, [sp, #0x50]
0082a74c:  stur     q2, [x29, #-0x90]
0082a750:  stp      q0, q1, [x0]
0082a754:  add      x0, sp, #0xa8
0082a758:  sub      x1, x29, #0x90
0082a75c:  bl       #0x817c7c
0082a760:  ldurb    w8, [x29, #-0x90]
0082a764:  mov      x21, x0
0082a768:  tbz      w8, #0, #0x82a774
0082a76c:  ldur     x0, [x29, #-0x80]
0082a770:  bl       #0x8ccfd0
0082a774:  cbz      x21, #0x82a784
0082a778:  add      x0, x21, #0x28
0082a77c:  bl       #0x809024
0082a780:  str      s0, [x19, #0x758]
0082a784:  mov      w0, #0x20
0082a788:  bl       #0x8ccfa0
0082a78c:  adrp     x8, #0x372000
0082a790:  stur     x0, [x29, #-0x80]
0082a794:  ldr      q0, [x8, #0x250]
0082a798:  adrp     x8, #0x36a000
0082a79c:  add      x8, x8, #0x258
0082a7a0:  ldr      q1, [x8]
0082a7a4:  ldur     q2, [x8, #0xf]
0082a7a8:  strb     wzr, [x0, #0x1f]
0082a7ac:  stur     q0, [x29, #-0x90]
0082a7b0:  str      q1, [x0]
0082a7b4:  stur     q2, [x0, #0xf]
0082a7b8:  add      x0, sp, #0xa8
0082a7bc:  sub      x1, x29, #0x90
0082a7c0:  bl       #0x817c7c
0082a7c4:  ldurb    w8, [x29, #-0x90]
0082a7c8:  mov      x21, x0
0082a7cc:  tbz      w8, #0, #0x82a7d8
0082a7d0:  ldur     x0, [x29, #-0x80]
0082a7d4:  bl       #0x8ccfd0
0082a7d8:  cbz      x21, #0x82a7e8
0082a7dc:  add      x0, x21, #0x28
0082a7e0:  bl       #0x809024
0082a7e4:  str      s0, [x19, #0x75c]
0082a7e8:  mov      w0, #0x20
0082a7ec:  bl       #0x8ccfa0
0082a7f0:  adrp     x8, #0x371000
0082a7f4:  stur     x0, [x29, #-0x80]
0082a7f8:  ldr      q0, [x8, #0x7a0]
0082a7fc:  adrp     x8, #0x370000
0082a800:  add      x8, x8, #0x665
0082a804:  ldr      q1, [x8]
0082a808:  ldur     q2, [x8, #0xe]
0082a80c:  strb     wzr, [x0, #0x1e]
0082a810:  stur     q0, [x29, #-0x90]
0082a814:  str      q1, [x0]
0082a818:  stur     q2, [x0, #0xe]
0082a81c:  add      x0, sp, #0xa8
0082a820:  sub      x1, x29, #0x90
0082a824:  bl       #0x817c7c
0082a828:  ldurb    w8, [x29, #-0x90]
0082a82c:  mov      x21, x0
0082a830:  tbz      w8, #0, #0x82a83c
0082a834:  ldur     x0, [x29, #-0x80]
0082a838:  bl       #0x8ccfd0
0082a83c:  cbz      x21, #0x82a874
0082a840:  ldr      x8, [sp, #0x70]
0082a844:  stur     wzr, [x29, #-0x90]
0082a848:  ldr      x0, [x8, #8]
0082a84c:  ldr      w1, [x8]
0082a850:  adrp     x4, #0x99e000
0082a854:  add      x2, x21, #0x28
0082a858:  sub      x3, x29, #0x90
0082a85c:  ldr      x4, [x4, #0x140]
0082a860:  bl       #0x807f90
0082a864:  ldur     w8, [x29, #-0x90]
0082a868:  mov      w9, #1
0082a86c:  strb     w9, [x19, #0x764]
0082a870:  str      w8, [x19, #0x760]
0082a874:  adrp     x10, #0x368000
0082a878:  add      x10, x10, #0xd84
0082a87c:  mov      w9, #0x6c6f
0082a880:  ldr      q0, [x10]
0082a884:  mov      w8, #0x28
0082a888:  movk     w9, #0x726f, lsl #16
0082a88c:  sturb    w8, [x29, #-0x90]
0082a890:  stur     w9, [x27, #0x31]
0082a894:  stur     q0, [x27, #0x21]
0082a898:  sturb    wzr, [x29, #-0x7b]
0082a89c:  add      x0, sp, #0xa8
0082a8a0:  sub      x1, x29, #0x90
0082a8a4:  bl       #0x817c7c
0082a8a8:  ldurb    w8, [x29, #-0x90]
0082a8ac:  mov      x21, x0
0082a8b0:  tbz      w8, #0, #0x82a8bc
0082a8b4:  ldur     x0, [x29, #-0x80]
0082a8b8:  bl       #0x8ccfd0
0082a8bc:  cbz      x21, #0x82a8f4
0082a8c0:  ldr      x8, [sp, #0x70]
0082a8c4:  stur     wzr, [x29, #-0x90]
0082a8c8:  ldr      x0, [x8, #8]
0082a8cc:  ldr      w1, [x8]
0082a8d0:  adrp     x4, #0x99e000
0082a8d4:  add      x2, x21, #0x28
0082a8d8:  sub      x3, x29, #0x90
0082a8dc:  ldr      x4, [x4, #0x140]
0082a8e0:  bl       #0x807f90
0082a8e4:  ldur     w8, [x29, #-0x90]
0082a8e8:  mov      w9, #1
0082a8ec:  strb     w9, [x19, #0x76c]
0082a8f0:  str      w8, [x19, #0x768]
0082a8f4:  mov      w0, #0x20
0082a8f8:  bl       #0x8ccfa0
0082a8fc:  adrp     x8, #0x371000
0082a900:  stur     x0, [x29, #-0x80]
0082a904:  ldr      q0, [x8, #0xb20]
0082a908:  adrp     x8, #0x369000
0082a90c:  add      x8, x8, #0x3df
0082a910:  ldr      q1, [x8]
0082a914:  ldur     q2, [x8, #0xb]
0082a918:  strb     wzr, [x0, #0x1b]
0082a91c:  stur     q0, [x29, #-0x90]
0082a920:  str      q1, [x0]
0082a924:  stur     q2, [x0, #0xb]
0082a928:  add      x0, sp, #0xa8
0082a92c:  sub      x1, x29, #0x90
0082a930:  bl       #0x817c7c
0082a934:  ldurb    w8, [x29, #-0x90]
0082a938:  mov      x20, x0
0082a93c:  tbz      w8, #0, #0x82a948
0082a940:  ldur     x0, [x29, #-0x80]
0082a944:  bl       #0x8ccfd0
0082a948:  cbz      x20, #0x82a958
0082a94c:  add      x0, x20, #0x28
0082a950:  bl       #0x809024
0082a954:  str      s0, [x19, #0x770]
0082a958:  mov      w0, #0x30
0082a95c:  bl       #0x8ccfa0
0082a960:  adrp     x8, #0x371000
0082a964:  stur     x0, [x29, #-0x80]
0082a968:  ldr      q0, [x8, #0x9d0]
0082a96c:  adrp     x8, #0x370000
0082a970:  add      x8, x8, #0xae2
0082a974:  ldp      q1, q2, [x8]
0082a978:  ldur     x8, [x8, #0x1d]
0082a97c:  stur     q0, [x29, #-0x90]
0082a980:  strb     wzr, [x0, #0x25]
0082a984:  stp      q1, q2, [x0]
0082a988:  stur     x8, [x0, #0x1d]
0082a98c:  add      x0, sp, #0xa8
0082a990:  sub      x1, x29, #0x90
0082a994:  bl       #0x817c7c
0082a998:  ldurb    w8, [x29, #-0x90]
0082a99c:  mov      x20, x0
0082a9a0:  tbz      w8, #0, #0x82a9ac
0082a9a4:  ldur     x0, [x29, #-0x80]
0082a9a8:  bl       #0x8ccfd0
0082a9ac:  cbz      x20, #0x82a9bc
0082a9b0:  add      x0, x20, #0x28
0082a9b4:  bl       #0x809024
0082a9b8:  str      s0, [x19, #0x774]
0082a9bc:  mov      w0, #0x20
0082a9c0:  bl       #0x8ccfa0
0082a9c4:  adrp     x8, #0x371000
0082a9c8:  stur     x0, [x29, #-0x80]
0082a9cc:  ldr      q1, [x8, #0x460]
0082a9d0:  adrp     x8, #0x36f000
0082a9d4:  add      x8, x8, #0x94b
0082a9d8:  ldr      q0, [x8]
0082a9dc:  ldr      x8, [x8, #0x10]
0082a9e0:  strb     wzr, [x0, #0x18]
0082a9e4:  str      q1, [sp, #0x70]
0082a9e8:  stur     q1, [x29, #-0x90]
0082a9ec:  str      q0, [x0]
0082a9f0:  str      x8, [x0, #0x10]
0082a9f4:  add      x0, sp, #0xa8
0082a9f8:  sub      x1, x29, #0x90
0082a9fc:  bl       #0x817c7c
0082aa00:  ldurb    w8, [x29, #-0x90]
0082aa04:  mov      x20, x0
0082aa08:  tbz      w8, #0, #0x82aa14
0082aa0c:  ldur     x0, [x29, #-0x80]
0082aa10:  bl       #0x8ccfd0
0082aa14:  cbz      x20, #0x82aa24
0082aa18:  add      x0, x20, #0x28
0082aa1c:  bl       #0x809024
0082aa20:  str      s0, [x19, #0x778]
0082aa24:  mov      w0, #0x30
0082aa28:  bl       #0x8ccfa0
0082aa2c:  ldr      q0, [sp, #0x50]
0082aa30:  adrp     x9, #0x36c000
0082aa34:  add      x9, x9, #0x4c5
0082aa38:  mov      w8, #0x65
0082aa3c:  stur     x0, [x29, #-0x80]
0082aa40:  stur     q0, [x29, #-0x90]
0082aa44:  ldp      q0, q1, [x9]
0082aa48:  strh     w8, [x0, #0x20]
0082aa4c:  stp      q0, q1, [x0]
0082aa50:  add      x0, sp, #0xa8
0082aa54:  sub      x1, x29, #0x90
0082aa58:  bl       #0x817c7c
0082aa5c:  ldurb    w8, [x29, #-0x90]
0082aa60:  mov      x20, x0
0082aa64:  tbz      w8, #0, #0x82aa70
0082aa68:  ldur     x0, [x29, #-0x80]
0082aa6c:  bl       #0x8ccfd0
0082aa70:  cbz      x20, #0x82aa80
0082aa74:  add      x0, x20, #0x28
0082aa78:  bl       #0x809024
0082aa7c:  str      s0, [x19, #0x77c]
0082aa80:  adrp     x9, #0x365000
0082aa84:  add      x9, x9, #0xd68
0082aa88:  mov      w8, #0x2c
0082aa8c:  ldr      q0, [x9]
0082aa90:  ldur     x9, [x9, #0xe]
0082aa94:  sturb    w8, [x29, #-0x90]
0082aa98:  sturb    wzr, [x29, #-0x79]
0082aa9c:  stur     q0, [x27, #0x21]
0082aaa0:  stur     x9, [x27, #0x2f]
0082aaa4:  add      x0, sp, #0xa8
0082aaa8:  sub      x1, x29, #0x90
0082aaac:  bl       #0x817c7c
0082aab0:  ldurb    w8, [x29, #-0x90]
0082aab4:  mov      x20, x0
0082aab8:  tbz      w8, #0, #0x82aac4
0082aabc:  ldur     x0, [x29, #-0x80]
0082aac0:  bl       #0x8ccfd0
0082aac4:  cbz      x20, #0x82aad4
0082aac8:  add      x0, x20, #0x28
0082aacc:  bl       #0x809024
0082aad0:  str      s0, [x19, #0x780]
0082aad4:  adrp     x10, #0x36c000
0082aad8:  add      x10, x10, #0x4e7
0082aadc:  mov      w9, #0x6168
0082aae0:  ldr      q0, [x10]
0082aae4:  mov      w8, #0x28
0082aae8:  movk     w9, #0x6570, lsl #16
0082aaec:  sturb    w8, [x29, #-0x90]
0082aaf0:  stur     w9, [x27, #0x31]
0082aaf4:  stur     q0, [x27, #0x21]
0082aaf8:  sturb    wzr, [x29, #-0x7b]
0082aafc:  add      x0, sp, #0xa8
0082ab00:  sub      x1, x29, #0x90
0082ab04:  bl       #0x817c7c
0082ab08:  ldurb    w8, [x29, #-0x90]
0082ab0c:  mov      x20, x0
0082ab10:  tbz      w8, #0, #0x82ab1c
0082ab14:  ldur     x0, [x29, #-0x80]
0082ab18:  bl       #0x8ccfd0
0082ab1c:  cbz      x20, #0x82aba8
0082ab20:  sub      x8, x29, #0x90
0082ab24:  add      x0, x20, #0x28
0082ab28:  bl       #0x807a6c
0082ab2c:  ldp      x10, x20, [x29, #-0x88]
0082ab30:  ldur     x8, [x27, #0x22]
0082ab34:  ldurb    w22, [x29, #-0x90]
0082ab38:  ldrb     w9, [x19, #0x7a0]
0082ab3c:  ldurb    w21, [x29, #-0x8f]
0082ab40:  stur     x8, [x29, #-0x30]
0082ab44:  stur     x10, [x27, #0x86]
0082ab48:  cbz      w9, #0x82ab80
0082ab4c:  ldrb     w8, [x19, #0x788]
0082ab50:  tbz      w8, #0, #0x82ab5c
0082ab54:  ldr      x0, [x19, #0x798]
0082ab58:  bl       #0x8ccfd0
0082ab5c:  ldur     x8, [x27, #0x86]
0082ab60:  ldur     x9, [x29, #-0x30]
0082ab64:  add      x10, x19, #0x78a
0082ab68:  strb     w22, [x19, #0x788]
0082ab6c:  strb     w21, [x19, #0x789]
0082ab70:  str      x8, [x19, #0x790]
0082ab74:  str      x9, [x10]
0082ab78:  str      x20, [x19, #0x798]
0082ab7c:  b        #0x82aba8
0082ab80:  ldur     x8, [x27, #0x86]
0082ab84:  ldur     x9, [x29, #-0x30]
0082ab88:  add      x10, x19, #0x78a
0082ab8c:  strb     w22, [x19, #0x788]
0082ab90:  str      x8, [x19, #0x790]
0082ab94:  mov      w8, #1
0082ab98:  strb     w21, [x19, #0x789]
0082ab9c:  str      x9, [x10]
0082aba0:  str      x20, [x19, #0x798]
0082aba4:  strb     w8, [x19, #0x7a0]
0082aba8:  mov      w0, #0x20
0082abac:  bl       #0x8ccfa0
0082abb0:  adrp     x8, #0x36b000
0082abb4:  add      x8, x8, #0x944
0082abb8:  ldr      q1, [sp, #0x70]
0082abbc:  ldr      q0, [x8]
0082abc0:  ldr      x8, [x8, #0x10]
0082abc4:  stur     x0, [x29, #-0x80]
0082abc8:  stur     q1, [x29, #-0x90]
0082abcc:  str      q0, [x0]
0082abd0:  str      x8, [x0, #0x10]
0082abd4:  strb     wzr, [x0, #0x18]
0082abd8:  add      x0, sp, #0xa8
0082abdc:  sub      x1, x29, #0x90
0082abe0:  bl       #0x817c7c
0082abe4:  ldurb    w8, [x29, #-0x90]
0082abe8:  mov      x20, x0
0082abec:  tbz      w8, #0, #0x82abf8
0082abf0:  ldur     x0, [x29, #-0x80]
0082abf4:  bl       #0x8ccfd0
0082abf8:  cbz      x20, #0x82ac08
0082abfc:  add      x0, x20, #0x28
0082ac00:  bl       #0x809024
0082ac04:  str      s0, [x19, #0x7a8]
0082ac08:  adrp     x10, #0x369000
0082ac0c:  add      x10, x10, #0x89d
0082ac10:  mov      w8, #0x1e
0082ac14:  ldr      x9, [x10]
0082ac18:  ldur     x10, [x10, #7]
0082ac1c:  sturb    w8, [x29, #-0x90]
0082ac20:  sturb    wzr, [x29, #-0x80]
0082ac24:  stur     x9, [x27, #0x21]
0082ac28:  stur     x10, [x29, #-0x88]
0082ac2c:  add      x0, sp, #0xa8
0082ac30:  sub      x1, x29, #0x90
0082ac34:  bl       #0x817c7c
0082ac38:  ldurb    w8, [x29, #-0x90]
0082ac3c:  mov      x20, x0
0082ac40:  tbz      w8, #0, #0x82ac4c
0082ac44:  ldur     x0, [x29, #-0x80]
0082ac48:  bl       #0x8ccfd0
0082ac4c:  cbz      x20, #0x82ac5c
0082ac50:  add      x0, x20, #0x28
0082ac54:  bl       #0x8161a0
0082ac58:  str      w0, [x19, #0x7ac]
0082ac5c:  mov      w8, #0xa
0082ac60:  mov      w9, #0x6977
0082ac64:  movk     w9, #0x7464, lsl #16
0082ac68:  sturb    w8, [x29, #-0x90]
0082ac6c:  mov      w8, #0x68
0082ac70:  stur     w9, [x27, #0x21]
0082ac74:  sturh    w8, [x27, #0x25]
0082ac78:  add      x0, sp, #0xa8
0082ac7c:  sub      x1, x29, #0x90
0082ac80:  bl       #0x817c7c
0082ac84:  ldurb    w8, [x29, #-0x90]
0082ac88:  mov      x20, x0
0082ac8c:  tbz      w8, #0, #0x82ac98
0082ac90:  ldur     x0, [x29, #-0x80]
0082ac94:  bl       #0x8ccfd0
0082ac98:  cbz      x20, #0x82aca8
0082ac9c:  add      x0, x20, #0x28
0082aca0:  bl       #0x809024
0082aca4:  str      s0, [x19, #0x7b0]
0082aca8:  mov      w8, #0xc
0082acac:  mov      w9, #0x6568
0082acb0:  sturb    wzr, [x29, #-0x89]
0082acb4:  movk     w9, #0x6769, lsl #16
0082acb8:  sturb    w8, [x29, #-0x90]
0082acbc:  mov      w8, #0x7468
0082acc0:  stur     w9, [x27, #0x21]
0082acc4:  sturh    w8, [x27, #0x25]
0082acc8:  add      x0, sp, #0xa8
0082accc:  sub      x1, x29, #0x90
0082acd0:  bl       #0x817c7c
0082acd4:  ldurb    w8, [x29, #-0x90]
0082acd8:  mov      x20, x0
0082acdc:  tbz      w8, #0, #0x82ace8
0082ace0:  ldur     x0, [x29, #-0x80]
0082ace4:  bl       #0x8ccfd0
0082ace8:  cbz      x20, #0x82acf8
0082acec:  add      x0, x20, #0x28
0082acf0:  bl       #0x809024
0082acf4:  str      s0, [x19, #0x7b4]
0082acf8:  adrp     x10, #0x36e000
0082acfc:  add      x10, x10, #0x59
0082ad00:  mov      w8, #0x22
0082ad04:  ldr      q0, [x10]
0082ad08:  mov      w9, #0x74
0082ad0c:  sturb    w8, [x29, #-0x90]
0082ad10:  sturh    w9, [x27, #0x31]
0082ad14:  stur     q0, [x27, #0x21]
0082ad18:  add      x0, sp, #0xa8
0082ad1c:  sub      x1, x29, #0x90
0082ad20:  bl       #0x817c7c
0082ad24:  ldurb    w8, [x29, #-0x90]
0082ad28:  mov      x20, x0
0082ad2c:  tbz      w8, #0, #0x82ad38
0082ad30:  ldur     x0, [x29, #-0x80]
0082ad34:  bl       #0x8ccfd0
0082ad38:  cbz      x20, #0x82adc4
0082ad3c:  sub      x8, x29, #0x90
0082ad40:  add      x0, x20, #0x28
0082ad44:  bl       #0x807a6c
0082ad48:  ldp      x10, x20, [x29, #-0x88]
0082ad4c:  ldur     x8, [x27, #0x22]
0082ad50:  ldurb    w22, [x29, #-0x90]
0082ad54:  ldrb     w9, [x19, #0x7d0]
0082ad58:  ldurb    w21, [x29, #-0x8f]
0082ad5c:  stur     x8, [x29, #-0x30]
0082ad60:  stur     x10, [x27, #0x86]
0082ad64:  cbz      w9, #0x82ad9c
0082ad68:  ldrb     w8, [x19, #0x7b8]
0082ad6c:  tbz      w8, #0, #0x82ad78
0082ad70:  ldr      x0, [x19, #0x7c8]
0082ad74:  bl       #0x8ccfd0
0082ad78:  ldur     x8, [x27, #0x86]
0082ad7c:  ldur     x9, [x29, #-0x30]
0082ad80:  add      x10, x19, #0x7ba
0082ad84:  strb     w22, [x19, #0x7b8]
0082ad88:  strb     w21, [x19, #0x7b9]
0082ad8c:  str      x8, [x19, #0x7c0]
0082ad90:  str      x9, [x10]
0082ad94:  str      x20, [x19, #0x7c8]
0082ad98:  b        #0x82adc4
0082ad9c:  ldur     x8, [x27, #0x86]
0082ada0:  ldur     x9, [x29, #-0x30]
0082ada4:  add      x10, x19, #0x7ba
0082ada8:  strb     w22, [x19, #0x7b8]
0082adac:  str      x8, [x19, #0x7c0]
0082adb0:  mov      w8, #1
0082adb4:  strb     w21, [x19, #0x7b9]
0082adb8:  str      x9, [x10]
0082adbc:  str      x20, [x19, #0x7c8]
0082adc0:  strb     w8, [x19, #0x7d0]
0082adc4:  adrp     x10, #0x365000
0082adc8:  add      x10, x10, #0x32
0082adcc:  mov      w9, #0x656d
0082add0:  ldr      q0, [x10]
0082add4:  mov      w8, #0x26
0082add8:  movk     w9, #0x746e, lsl #16
0082addc:  sturb    w8, [x29, #-0x90]
0082ade0:  stur     w9, [x29, #-0x80]
0082ade4:  stur     q0, [x27, #0x21]
0082ade8:  sturb    wzr, [x29, #-0x7c]
0082adec:  add      x0, sp, #0xa8
0082adf0:  sub      x1, x29, #0x90
0082adf4:  bl       #0x817c7c
0082adf8:  ldurb    w8, [x29, #-0x90]
0082adfc:  mov      x20, x0
0082ae00:  tbz      w8, #0, #0x82ae0c
0082ae04:  ldur     x0, [x29, #-0x80]
0082ae08:  bl       #0x8ccfd0
0082ae0c:  cbz      x20, #0x82ae6c
0082ae10:  sub      x8, x29, #0x90
0082ae14:  add      x0, x20, #0x28
0082ae18:  bl       #0x807a6c
0082ae1c:  ldp      x10, x20, [x29, #-0x88]
0082ae20:  ldur     x8, [x27, #0x22]
0082ae24:  ldurb    w22, [x29, #-0x90]
0082ae28:  ldrb     w9, [x19, #0x7f0]
0082ae2c:  ldurb    w21, [x29, #-0x8f]
0082ae30:  stur     x8, [x29, #-0x30]
0082ae34:  stur     x10, [x27, #0x86]
0082ae38:  cbz      w9, #0x82aecc
0082ae3c:  ldrb     w8, [x19, #0x7d8]
0082ae40:  tbz      w8, #0, #0x82ae4c
0082ae44:  ldr      x0, [x19, #0x7e8]
0082ae48:  bl       #0x8ccfd0
0082ae4c:  ldur     x8, [x27, #0x86]
0082ae50:  ldur     x9, [x29, #-0x30]
0082ae54:  add      x10, x19, #0x7da
0082ae58:  strb     w22, [x19, #0x7d8]
0082ae5c:  strb     w21, [x19, #0x7d9]
0082ae60:  str      x8, [x19, #0x7e0]
0082ae64:  str      x9, [x10]
0082ae68:  str      x20, [x19, #0x7e8]
0082ae6c:  ldr      x19, [sp, #0xb8]
0082ae70:  cbz      x19, #0x82aefc
0082ae74:  mov      w20, #-1
0082ae78:  b        #0x82ae8c
0082ae7c:  mov      x0, x19
0082ae80:  bl       #0x8ccfd0
0082ae84:  mov      x19, x21
0082ae88:  cbz      x21, #0x82aefc
0082ae8c:  ldr      w8, [x19, #0x58]
0082ae90:  ldr      x21, [x19]
0082ae94:  cmn      w8, #1
0082ae98:  b.eq     #0x82aeb4
0082ae9c:  adrp     x9, #0x98c000
0082aea0:  add      x9, x9, #0x980
0082aea4:  ldr      x8, [x9, x8, lsl #3]
0082aea8:  sub      x0, x29, #0x90
0082aeac:  add      x1, x19, #0x28
0082aeb0:  blr      x8
0082aeb4:  ldrb     w8, [x19, #0x10]
0082aeb8:  str      w20, [x19, #0x58]
0082aebc:  tbz      w8, #0, #0x82ae7c
0082aec0:  ldr      x0, [x19, #0x20]
0082aec4:  bl       #0x8ccfd0
0082aec8:  b        #0x82ae7c
0082aecc:  ldur     x8, [x27, #0x86]
0082aed0:  ldur     x9, [x29, #-0x30]
0082aed4:  add      x10, x19, #0x7da
0082aed8:  strb     w22, [x19, #0x7d8]
0082aedc:  str      x8, [x19, #0x7e0]
0082aee0:  mov      w8, #1
0082aee4:  strb     w21, [x19, #0x7d9]
0082aee8:  str      x9, [x10]
0082aeec:  str      x20, [x19, #0x7e8]
0082aef0:  strb     w8, [x19, #0x7f0]
0082aef4:  ldr      x19, [sp, #0xb8]
0082aef8:  cbnz     x19, #0x82ae74
0082aefc:  ldr      x0, [sp, #0xa8]
0082af00:  str      xzr, [sp, #0xa8]
0082af04:  cbz      x0, #0x82af0c
0082af08:  bl       #0x8ccfd0
0082af0c:  ldr      x19, [sp, #0x90]
0082af10:  cbz      x19, #0x82af6c
0082af14:  mov      w20, #-1
0082af18:  b        #0x82af2c
0082af1c:  mov      x0, x19
0082af20:  bl       #0x8ccfd0
0082af24:  mov      x19, x21
0082af28:  cbz      x21, #0x82af6c
0082af2c:  ldr      w8, [x19, #0x58]
0082af30:  ldr      x21, [x19]
0082af34:  cmn      w8, #1
0082af38:  b.eq     #0x82af54
0082af3c:  adrp     x9, #0x98c000
0082af40:  add      x9, x9, #0x980
0082af44:  ldr      x8, [x9, x8, lsl #3]
0082af48:  add      x0, sp, #0xa8
0082af4c:  add      x1, x19, #0x28
0082af50:  blr      x8
0082af54:  ldrb     w8, [x19, #0x10]
0082af58:  str      w20, [x19, #0x58]
0082af5c:  tbz      w8, #0, #0x82af1c
0082af60:  ldr      x0, [x19, #0x20]
0082af64:  bl       #0x8ccfd0
0082af68:  b        #0x82af1c
0082af6c:  ldr      x0, [sp, #0x80]
0082af70:  str      xzr, [sp, #0x80]
0082af74:  cbz      x0, #0x82af7c
0082af78:  bl       #0x8ccfd0
0082af7c:  ldr      x8, [sp, #0x68]
0082af80:  ldr      x8, [x8, #0x28]
0082af84:  ldur     x9, [x29, #-0x18]
0082af88:  cmp      x8, x9
0082af8c:  b.ne     #0x82bc60
0082af90:  add      sp, sp, #0x260
0082af94:  ldp      x20, x19, [sp, #0x50]
0082af98:  ldp      x22, x21, [sp, #0x40]
0082af9c:  ldp      x24, x23, [sp, #0x30]
0082afa0:  ldp      x26, x25, [sp, #0x20]
0082afa4:  ldp      x28, x27, [sp, #0x10]
0082afa8:  ldp      x29, x30, [sp], #0x60
0082afac:  ret      
0082afb0:  ldr      w9, [sp, #8]
0082afb4:  ldur     x8, [x24, #0xfe]
0082afb8:  add      x10, x19, #0x6da
0082afbc:  strb     w13, [x19, #0x6d8]
0082afc0:  strb     w9, [x19, #0x6d9]
0082afc4:  ldur     x9, [x29, #-0xc0]
0082afc8:  str      x8, [x19, #0x6e0]
0082afcc:  mov      w8, #1
0082afd0:  stur     xzr, [x29, #-0xc0]
0082afd4:  stur     xzr, [x24, #0xfe]
0082afd8:  ldr      w24, [sp, #0x24]
0082afdc:  str      x9, [x10]
0082afe0:  str      x0, [x19, #0x6e8]
0082afe4:  strb     w8, [x19, #0x6f0]
0082afe8:  cbnz     w24, #0x82a0b0
0082afec:  b        #0x82a0bc
0082aff0:  ldr      x8, [sp, #0x68]
0082aff4:  ldr      x8, [x8, #0x28]
0082aff8:  ldur     x9, [x29, #-0x18]
0082affc:  cmp      x8, x9
0082b000:  b.ne     #0x82bc60
0082b004:  bl       #0x807a38
0082b008:  ldr      x8, [sp, #0x68]
0082b00c:  ldr      x8, [x8, #0x28]
0082b010:  ldur     x9, [x29, #-0x18]
0082b014:  cmp      x8, x9
0082b018:  b.ne     #0x82bc60
0082b01c:  bl       #0x807a38
0082b020:  ldr      x8, [sp, #0x68]
0082b024:  ldr      x8, [x8, #0x28]
0082b028:  ldur     x9, [x29, #-0x18]
0082b02c:  cmp      x8, x9
0082b030:  b.ne     #0x82bc60
0082b034:  bl       #0x807a38
0082b038:  ldr      x8, [sp, #0x68]
0082b03c:  ldr      x8, [x8, #0x28]
0082b040:  ldur     x9, [x29, #-0x18]
0082b044:  cmp      x8, x9
0082b048:  b.ne     #0x82bc60
0082b04c:  bl       #0x807a38
0082b050:  ldr      x8, [sp, #0x68]
0082b054:  ldr      x8, [x8, #0x28]
0082b058:  ldur     x9, [x29, #-0x18]
0082b05c:  cmp      x8, x9
0082b060:  b.ne     #0x82bc60
0082b064:  bl       #0x807a38
0082b068:  ldr      x8, [sp, #0x68]
0082b06c:  ldr      x8, [x8, #0x28]
0082b070:  ldur     x9, [x29, #-0x18]
0082b074:  cmp      x8, x9
0082b078:  b.ne     #0x82bc60
0082b07c:  bl       #0x807a38
0082b080:  ldr      x8, [sp, #0x68]
0082b084:  ldr      x8, [x8, #0x28]
0082b088:  ldur     x9, [x29, #-0x18]
0082b08c:  cmp      x8, x9
0082b090:  b.ne     #0x82bc60
0082b094:  bl       #0x807a38
0082b098:  ldr      x8, [sp, #0x68]
0082b09c:  ldr      x8, [x8, #0x28]
0082b0a0:  ldur     x9, [x29, #-0x18]
0082b0a4:  cmp      x8, x9
0082b0a8:  b.ne     #0x82bc60
0082b0ac:  bl       #0x807a38
0082b0b0:  ldr      x8, [sp, #0x68]
0082b0b4:  ldr      x8, [x8, #0x28]
0082b0b8:  ldur     x9, [x29, #-0x18]
0082b0bc:  cmp      x8, x9
0082b0c0:  b.ne     #0x82bc60
0082b0c4:  bl       #0x807a38
0082b0c8:  ldr      x8, [sp, #0x68]
0082b0cc:  ldr      x8, [x8, #0x28]
0082b0d0:  ldur     x9, [x29, #-0x18]
0082b0d4:  cmp      x8, x9
0082b0d8:  b.ne     #0x82bc60
0082b0dc:  bl       #0x807a38
0082b0e0:  ldr      x8, [sp, #0x68]
0082b0e4:  ldr      x8, [x8, #0x28]
0082b0e8:  ldur     x9, [x29, #-0x18]
0082b0ec:  cmp      x8, x9
0082b0f0:  b.ne     #0x82bc60
0082b0f4:  adrp     x8, #0x99e000
0082b0f8:  ldr      x8, [x8, #0x368]
0082b0fc:  ldr      x0, [x8]
0082b100:  bl       #0x789f8c
0082b104:  ldr      x8, [sp, #0x68]
0082b108:  ldr      x8, [x8, #0x28]
0082b10c:  ldur     x9, [x29, #-0x18]
0082b110:  cmp      x8, x9
0082b114:  b.ne     #0x82bc60
0082b118:  bl       #0x807a38
0082b11c:  ldr      x8, [sp, #0x68]
0082b120:  ldr      x8, [x8, #0x28]
0082b124:  ldur     x9, [x29, #-0x18]
0082b128:  cmp      x8, x9
0082b12c:  b.ne     #0x82bc60
0082b130:  adrp     x8, #0x99e000
0082b134:  ldr      x8, [x8, #0x368]
0082b138:  ldr      x0, [x8]
0082b13c:  bl       #0x789f8c
0082b140:  ldr      x8, [sp, #0x68]
0082b144:  ldr      x8, [x8, #0x28]
0082b148:  ldur     x9, [x29, #-0x18]
0082b14c:  cmp      x8, x9
0082b150:  b.ne     #0x82bc60
0082b154:  bl       #0x807a38
0082b158:  ldr      x8, [sp, #0x68]
0082b15c:  ldr      x8, [x8, #0x28]
0082b160:  ldur     x9, [x29, #-0x18]
0082b164:  cmp      x8, x9
0082b168:  b.ne     #0x82bc60
0082b16c:  adrp     x8, #0x99e000
0082b170:  ldr      x8, [x8, #0x368]
0082b174:  ldr      x0, [x8]
0082b178:  bl       #0x789f8c
0082b17c:  ldr      x8, [sp, #0x68]
0082b180:  ldr      x8, [x8, #0x28]
0082b184:  ldur     x9, [x29, #-0x18]
0082b188:  cmp      x8, x9
0082b18c:  b.ne     #0x82bc60
0082b190:  bl       #0x807a38
0082b194:  ldr      x8, [sp, #0x68]
0082b198:  ldr      x8, [x8, #0x28]
0082b19c:  ldur     x9, [x29, #-0x18]
0082b1a0:  cmp      x8, x9
0082b1a4:  b.ne     #0x82bc60
0082b1a8:  adrp     x8, #0x99e000
0082b1ac:  ldr      x8, [x8, #0x368]
0082b1b0:  ldr      x0, [x8]
0082b1b4:  bl       #0x789f8c
0082b1b8:  ldr      x8, [sp, #0x68]
0082b1bc:  ldr      x8, [x8, #0x28]
0082b1c0:  ldur     x9, [x29, #-0x18]
0082b1c4:  cmp      x8, x9
0082b1c8:  b.ne     #0x82bc60
0082b1cc:  bl       #0x807a38
0082b1d0:  ldr      x8, [sp, #0x68]
0082b1d4:  ldr      x8, [x8, #0x28]
0082b1d8:  ldur     x9, [x29, #-0x18]
0082b1dc:  cmp      x8, x9
0082b1e0:  b.ne     #0x82bc60
0082b1e4:  adrp     x8, #0x99e000
0082b1e8:  ldr      x8, [x8, #0x368]
0082b1ec:  ldr      x0, [x8]
0082b1f0:  bl       #0x789f8c
0082b1f4:  ldr      x8, [sp, #0x68]
0082b1f8:  ldr      x8, [x8, #0x28]
0082b1fc:  ldur     x9, [x29, #-0x18]
0082b200:  cmp      x8, x9
0082b204:  b.ne     #0x82bc60
0082b208:  bl       #0x807a38
0082b20c:  ldr      x8, [sp, #0x68]
0082b210:  ldr      x8, [x8, #0x28]
0082b214:  ldur     x9, [x29, #-0x18]
0082b218:  cmp      x8, x9
0082b21c:  b.ne     #0x82bc60
0082b220:  adrp     x8, #0x99e000
0082b224:  ldr      x8, [x8, #0x368]
0082b228:  ldr      x0, [x8]
0082b22c:  bl       #0x789f8c
0082b230:  ldr      x8, [sp, #0x68]
0082b234:  ldr      x8, [x8, #0x28]
0082b238:  ldur     x9, [x29, #-0x18]
0082b23c:  cmp      x8, x9
0082b240:  b.ne     #0x82bc60
0082b244:  bl       #0x807a38
0082b248:  ldr      x8, [sp, #0x68]
0082b24c:  ldr      x8, [x8, #0x28]
0082b250:  ldur     x9, [x29, #-0x18]
0082b254:  cmp      x8, x9
0082b258:  b.ne     #0x82bc60
0082b25c:  adrp     x8, #0x99e000
0082b260:  ldr      x8, [x8, #0x368]
0082b264:  ldr      x0, [x8]
0082b268:  bl       #0x789f8c
0082b26c:  ldr      x8, [sp, #0x68]
0082b270:  ldr      x8, [x8, #0x28]
0082b274:  ldur     x9, [x29, #-0x18]
0082b278:  cmp      x8, x9
0082b27c:  b.ne     #0x82bc60
0082b280:  bl       #0x807a38
0082b284:  ldr      x8, [sp, #0x68]
0082b288:  ldr      x8, [x8, #0x28]
0082b28c:  ldur     x9, [x29, #-0x18]
0082b290:  cmp      x8, x9
0082b294:  b.ne     #0x82bc60
0082b298:  adrp     x8, #0x99e000
0082b29c:  ldr      x8, [x8, #0x368]
0082b2a0:  ldr      x0, [x8]
0082b2a4:  bl       #0x789f8c
0082b2a8:  b        #0x82b6d8

