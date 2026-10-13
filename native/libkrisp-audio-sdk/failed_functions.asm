; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 00348088  FUN_00348088  (5904 bytes) =====
00348088:  stp      d15, d14, [sp, #-0xa0]!
0034808c:  stp      d13, d12, [sp, #0x10]
00348090:  stp      d11, d10, [sp, #0x20]
00348094:  stp      d9, d8, [sp, #0x30]
00348098:  stp      x29, x30, [sp, #0x40]
0034809c:  stp      x28, x27, [sp, #0x50]
003480a0:  stp      x26, x25, [sp, #0x60]
003480a4:  stp      x24, x23, [sp, #0x70]
003480a8:  stp      x22, x21, [sp, #0x80]
003480ac:  stp      x20, x19, [sp, #0x90]
003480b0:  add      x29, sp, #0x40
003480b4:  sub      sp, sp, #0x2b0
003480b8:  ldp      w28, w9, [x3]
003480bc:  lsl      x5, x2, #3
003480c0:  mov      x27, x4
003480c4:  mov      x22, x1
003480c8:  sxtw     x28, w28
003480cc:  mov      x21, x0
003480d0:  sxtw     x10, w9
003480d4:  cmp      w9, #1
003480d8:  stp      x9, x2, [x29, #-0x70]
003480dc:  mul      w8, w9, w28
003480e0:  stur     x10, [x29, #-0x60]
003480e4:  sxtw     x8, w8
003480e8:  lsl      x20, x8, #3
003480ec:  b.ne     #0x34810c
003480f0:  mov      x8, x21
003480f4:  ldr      x9, [x22]
003480f8:  subs     x20, x20, #8
003480fc:  add      x22, x22, x5
00348100:  str      x9, [x8], #8
00348104:  b.ne     #0x3480f4
00348108:  b        #0x34814c
0034810c:  mul      x24, x28, x2
00348110:  lsl      x19, x10, #3
00348114:  mov      x23, x3
00348118:  mov      x25, xzr
0034811c:  add      x0, x21, x25
00348120:  add      x3, x23, #8
00348124:  mov      x1, x22
00348128:  mov      x2, x24
0034812c:  mov      x4, x27
00348130:  mov      x26, x5
00348134:  bl       #0x348088
00348138:  add      x25, x25, x19
0034813c:  mov      x5, x26
00348140:  add      x22, x22, x26
00348144:  cmp      x20, x25
00348148:  b.ne     #0x34811c
0034814c:  cmp      w28, #3
00348150:  b.gt     #0x34823c
00348154:  ldur     x16, [x29, #-0x60]
00348158:  cmp      w28, #2
0034815c:  b.eq     #0x34857c
00348160:  ldur     x26, [x29, #-0x68]
00348164:  cmp      w28, #3
00348168:  b.ne     #0x348408
0034816c:  mul      x8, x16, x26
00348170:  fmov     s0, #0.50000000
00348174:  lsl      x10, x26, #4
00348178:  lsl      x11, x16, #4
0034817c:  add      x12, x21, #4
00348180:  add      x9, x27, x8, lsl #3
00348184:  lsl      x8, x16, #3
00348188:  ldr      s1, [x9, #0x10c]
0034818c:  add      x9, x27, #0x10c
00348190:  mov      x13, x9
00348194:  add      x14, x12, x8
00348198:  add      x15, x12, x11
0034819c:  subs     x16, x16, #1
003481a0:  ldp      s6, s2, [x9, #-4]
003481a4:  add      x9, x9, x5
003481a8:  ldp      s7, s3, [x13, #-4]
003481ac:  add      x13, x13, x10
003481b0:  ldp      s18, s4, [x14, #-4]
003481b4:  ldp      s19, s5, [x15, #-4]
003481b8:  fnmul    s16, s4, s2
003481bc:  fmul     s4, s6, s4
003481c0:  fnmul    s17, s5, s3
003481c4:  fmul     s5, s7, s5
003481c8:  fmadd    s6, s18, s6, s16
003481cc:  fmadd    s2, s18, s2, s4
003481d0:  fmadd    s7, s19, s7, s17
003481d4:  fmadd    s3, s19, s3, s5
003481d8:  ldp      s16, s17, [x12, #-4]
003481dc:  fadd     s4, s6, s7
003481e0:  fadd     s5, s2, s3
003481e4:  fsub     s2, s2, s3
003481e8:  fsub     s6, s6, s7
003481ec:  fmsub    s16, s4, s0, s16
003481f0:  fmsub    s17, s5, s0, s17
003481f4:  fmul     s2, s1, s2
003481f8:  stp      s16, s17, [x14, #-4]
003481fc:  ldp      s16, s3, [x12, #-4]
00348200:  fadd     s4, s4, s16
00348204:  fadd     s3, s5, s3
00348208:  fmul     s5, s1, s6
0034820c:  stp      s4, s3, [x12, #-4]
00348210:  add      x12, x12, #8
00348214:  ldp      s3, s4, [x14, #-4]
00348218:  fadd     s3, s2, s3
0034821c:  fsub     s4, s4, s5
00348220:  stp      s3, s4, [x15, #-4]
00348224:  ldp      s3, s4, [x14, #-4]
00348228:  fsub     s2, s3, s2
0034822c:  fadd     s3, s5, s4
00348230:  stp      s2, s3, [x14, #-4]
00348234:  b.ne     #0x348194
00348238:  b        #0x3485cc
0034823c:  ldur     x3, [x29, #-0x60]
00348240:  cmp      w28, #4
00348244:  b.eq     #0x3485fc
00348248:  ldur     x26, [x29, #-0x68]
0034824c:  cmp      w28, #5
00348250:  b.ne     #0x348408
00348254:  ldur     x20, [x29, #-0x70]
00348258:  cmp      w20, #1
0034825c:  b.lt     #0x3485cc
00348260:  lsl      x22, x3, #1
00348264:  mul      x9, x3, x26
00348268:  add      x1, x27, #0x108
0034826c:  lsl      w13, w20, #2
00348270:  add      w17, w20, w20, lsl #1
00348274:  add      x8, x21, x3, lsl #3
00348278:  mul      x10, x22, x26
0034827c:  add      x11, x21, x22, lsl #3
00348280:  lsl      x25, x26, #5
00348284:  add      x7, x26, x26, lsl #1
00348288:  lsl      x6, x26, #4
0034828c:  cmp      w20, #0x30
00348290:  add      x12, x1, x9, lsl #3
00348294:  add      x9, x21, w13, uxtw #3
00348298:  add      x14, x1, x10, lsl #3
0034829c:  ldp      s0, s1, [x12]
003482a0:  add      x10, x21, w17, uxtw #3
003482a4:  ldp      s2, s3, [x14]
003482a8:  b.hs     #0x348714
003482ac:  mov      x23, xzr
003482b0:  mov      x1, x21
003482b4:  mul      x12, x23, x26
003482b8:  mov      w13, #0x18
003482bc:  lsl      x14, x7, #3
003482c0:  madd     x15, x12, x13, x27
003482c4:  add      x13, x27, x12, lsl #5
003482c8:  add      x16, x27, x12, lsl #4
003482cc:  add      x17, x27, x12, lsl #3
003482d0:  sub      x12, x20, x23
003482d4:  add      x13, x13, #0x10c
003482d8:  add      x16, x16, #0x10c
003482dc:  add      x17, x17, #0x10c
003482e0:  add      x15, x15, #0x10c
003482e4:  ldp      s7, s4, [x8]
003482e8:  subs     x12, x12, #1
003482ec:  ldp      s5, s6, [x17, #-4]
003482f0:  add      x17, x17, x5
003482f4:  ldp      s27, s16, [x11]
003482f8:  ldp      s18, s19, [x16, #-4]
003482fc:  add      x16, x16, x6
00348300:  ldp      s30, s20, [x10]
00348304:  fnmul    s17, s4, s6
00348308:  ldp      s31, s21, [x9]
0034830c:  fmul     s4, s5, s4
00348310:  ldp      s22, s23, [x13, #-4]
00348314:  fnmul    s25, s16, s19
00348318:  ldp      s24, s26, [x15, #-4]
0034831c:  fmul     s16, s18, s16
00348320:  fmadd    s5, s7, s5, s17
00348324:  add      x13, x13, x25
00348328:  add      x15, x15, x14
0034832c:  fnmul    s29, s21, s23
00348330:  fmul     s21, s22, s21
00348334:  fmul     s28, s24, s20
00348338:  fnmul    s20, s20, s26
0034833c:  fmadd    s4, s7, s6, s4
00348340:  fmadd    s6, s27, s18, s25
00348344:  fmadd    s7, s27, s19, s16
00348348:  fmadd    s17, s31, s22, s29
0034834c:  fmadd    s19, s31, s23, s21
00348350:  fmadd    s16, s30, s26, s28
00348354:  fmadd    s18, s30, s24, s20
00348358:  fadd     s20, s5, s17
0034835c:  fadd     s22, s4, s19
00348360:  fsub     s4, s4, s19
00348364:  fsub     s21, s7, s16
00348368:  fsub     s23, s6, s18
0034836c:  fadd     s6, s6, s18
00348370:  fadd     s7, s7, s16
00348374:  ldp      s18, s24, [x1]
00348378:  fsub     s5, s5, s17
0034837c:  fmadd    s16, s20, s0, s18
00348380:  fmul     s19, s3, s21
00348384:  fadd     s26, s6, s20
00348388:  fmadd    s17, s22, s0, s24
0034838c:  fnmul    s25, s23, s3
00348390:  fmadd    s20, s20, s2, s18
00348394:  fmadd    s27, s22, s2, s24
00348398:  fadd     s22, s7, s22
0034839c:  fmul     s21, s1, s21
003483a0:  fnmul    s23, s23, s1
003483a4:  fmadd    s16, s6, s2, s16
003483a8:  fmadd    s19, s4, s1, s19
003483ac:  fadd     s18, s18, s26
003483b0:  fmadd    s17, s7, s2, s17
003483b4:  fmsub    s25, s5, s1, s25
003483b8:  fadd     s22, s24, s22
003483bc:  fmadd    s6, s6, s0, s20
003483c0:  fmadd    s7, s7, s0, s27
003483c4:  fmsub    s4, s4, s3, s21
003483c8:  fmadd    s5, s5, s3, s23
003483cc:  fsub     s20, s16, s19
003483d0:  fadd     s16, s19, s16
003483d4:  fsub     s21, s17, s25
003483d8:  fadd     s17, s17, s25
003483dc:  stp      s18, s22, [x1], #8
003483e0:  fadd     s18, s4, s6
003483e4:  fadd     s19, s7, s5
003483e8:  fsub     s4, s6, s4
003483ec:  fsub     s5, s7, s5
003483f0:  stp      s20, s21, [x8], #8
003483f4:  stp      s16, s17, [x9], #8
003483f8:  stp      s18, s19, [x11], #8
003483fc:  stp      s4, s5, [x10], #8
00348400:  b.ne     #0x3482e4
00348404:  b        #0x3485cc
00348408:  lsl      x0, x28, #3
0034840c:  ldr      w22, [x27]
00348410:  mov      x19, x27
00348414:  bl       #0x75a260
00348418:  ldur     x23, [x29, #-0x70]
0034841c:  cmp      w23, #1
00348420:  b.lt     #0x34854c
00348424:  cmp      w28, #1
00348428:  b.lt     #0x34854c
0034842c:  cmp      w28, #1
00348430:  b.eq     #0x34854c
00348434:  ubfx     x13, x28, #1, #0x1e
00348438:  lsl      x11, x23, #4
0034843c:  lsl      x15, x23, #3
00348440:  mov      x8, xzr
00348444:  add      x9, x19, #0x108
00348448:  and      x10, x28, #0x7ffffffe
0034844c:  umull    x14, w23, w13
00348450:  add      x13, x0, x13, lsl #4
00348454:  and      x12, x28, #0xffffffff80000001
00348458:  sub      x16, x28, #1
0034845c:  add      x17, x0, #0xc
00348460:  mov      x1, x21
00348464:  add      x14, x21, x14, lsl #4
00348468:  mov      x2, xzr
0034846c:  mov      x3, x1
00348470:  add      x4, x0, x2, lsl #3
00348474:  ldr      x5, [x3]
00348478:  ldr      x6, [x3, x23, lsl #3]
0034847c:  add      x2, x2, #2
00348480:  add      x3, x3, x11
00348484:  cmp      x10, x2
00348488:  stp      x5, x6, [x4]
0034848c:  b.ne     #0x348470
00348490:  cmp      x28, x10
00348494:  b.eq     #0x3484b8
00348498:  mov      x2, x14
0034849c:  mov      x3, x13
003484a0:  mov      x4, x12
003484a4:  ldr      x5, [x2]
003484a8:  subs     x4, x4, #1
003484ac:  add      x2, x2, x15
003484b0:  str      x5, [x3], #8
003484b4:  b.ne     #0x3484a4
003484b8:  ldr      x3, [x0]
003484bc:  mov      w2, wzr
003484c0:  fmov     s0, w3
003484c4:  lsr      x4, x3, #0x20
003484c8:  mov      v0.s[1], w4
003484cc:  mov      x4, x8
003484d0:  fmov     d1, d0
003484d4:  mul      w5, w4, w26
003484d8:  mov      w7, wzr
003484dc:  mov      x6, x17
003484e0:  mov      x20, x16
003484e4:  str      x3, [x21, x4, lsl #3]
003484e8:  ldp      s4, s2, [x6, #-4]
003484ec:  add      w7, w7, w5
003484f0:  cmp      w7, w22
003484f4:  add      x6, x6, #8
003484f8:  csel     w19, wzr, w22, lt
003484fc:  subs     x20, x20, #1
00348500:  fneg     s3, s2
00348504:  sub      w7, w7, w19
00348508:  mov      v2.s[1], v3.s[0]
0034850c:  ldr      d3, [x9, w7, sxtw #3]
00348510:  fmul     v2.2s, v3.2s, v2.2s
00348514:  rev64    v2.2s, v2.2s
00348518:  fmla     v2.2s, v3.2s, v4.s[0]
0034851c:  fadd     v1.2s, v1.2s, v2.2s
00348520:  str      d1, [x21, x4, lsl #3]
00348524:  b.ne     #0x3484e8
00348528:  add      w2, w2, #1
0034852c:  add      x4, x4, x23
00348530:  cmp      w2, w28
00348534:  b.ne     #0x3484d0
00348538:  add      x8, x8, #1
0034853c:  add      x1, x1, #8
00348540:  add      x14, x14, #8
00348544:  cmp      x8, x23
00348548:  b.ne     #0x348468
0034854c:  add      sp, sp, #0x2b0
00348550:  ldp      x20, x19, [sp, #0x90]
00348554:  ldp      x22, x21, [sp, #0x80]
00348558:  ldp      x24, x23, [sp, #0x70]
0034855c:  ldp      x26, x25, [sp, #0x60]
00348560:  ldp      x28, x27, [sp, #0x50]
00348564:  ldp      x29, x30, [sp, #0x40]
00348568:  ldp      d9, d8, [sp, #0x30]
0034856c:  ldp      d11, d10, [sp, #0x20]
00348570:  ldp      d13, d12, [sp, #0x10]
00348574:  ldp      d15, d14, [sp], #0xa0
00348578:  b        #0x75a290
0034857c:  lsl      x8, x16, #3
00348580:  ldur     x11, [x29, #-0x70]
00348584:  add      x9, x27, #0x108
00348588:  add      x10, x21, x8
0034858c:  subs     w11, w11, #1
00348590:  ldp      s2, s0, [x10]
00348594:  fneg     s1, s0
00348598:  mov      v0.s[1], v1.s[0]
0034859c:  ldr      d1, [x9]
003485a0:  add      x9, x9, x5
003485a4:  fmul     v0.2s, v1.2s, v0.2s
003485a8:  rev64    v0.2s, v0.2s
003485ac:  fmla     v0.2s, v1.2s, v2.s[0]
003485b0:  ldr      d1, [x21]
003485b4:  fsub     v1.2s, v1.2s, v0.2s
003485b8:  str      d1, [x10]
003485bc:  ldr      d1, [x21]
003485c0:  fadd     v0.2s, v0.2s, v1.2s
003485c4:  str      d0, [x21], #8
003485c8:  b.ne     #0x348588
003485cc:  add      sp, sp, #0x2b0
003485d0:  ldp      x20, x19, [sp, #0x90]
003485d4:  ldp      x22, x21, [sp, #0x80]
003485d8:  ldp      x24, x23, [sp, #0x70]
003485dc:  ldp      x26, x25, [sp, #0x60]
003485e0:  ldp      x28, x27, [sp, #0x50]
003485e4:  ldp      x29, x30, [sp, #0x40]
003485e8:  ldp      d9, d8, [sp, #0x30]
003485ec:  ldp      d11, d10, [sp, #0x20]
003485f0:  ldp      d13, d12, [sp, #0x10]
003485f4:  ldp      d15, d14, [sp], #0xa0
003485f8:  ret      
003485fc:  ldur     x13, [x29, #-0x68]
00348600:  add      x14, x3, x3, lsl #1
00348604:  ldr      w8, [x27, #4]
00348608:  lsl      x9, x3, #3
0034860c:  add      x10, x27, #0x10c
00348610:  lsl      x12, x3, #4
00348614:  add      x11, x13, x13, lsl #1
00348618:  lsl      x13, x13, #4
0034861c:  lsl      x14, x14, #3
00348620:  add      x15, x21, #4
00348624:  mov      x16, x10
00348628:  mov      x17, x10
0034862c:  lsl      x11, x11, #3
00348630:  b        #0x348664
00348634:  fadd     s2, s0, s1
00348638:  fsub     s3, s4, s5
0034863c:  fsub     s1, s0, s1
00348640:  fadd     s0, s4, s5
00348644:  subs     x3, x3, #1
00348648:  add      x15, x15, #8
0034864c:  add      x17, x17, x11
00348650:  add      x16, x16, x13
00348654:  add      x10, x10, x5
00348658:  stp      s2, s3, [x0, #-4]
0034865c:  stp      s1, s0, [x1, #-4]
00348660:  b.eq     #0x3485cc
00348664:  add      x0, x15, x9
00348668:  add      x2, x15, x12
0034866c:  add      x1, x15, x14
00348670:  ldp      s0, s1, [x10, #-4]
00348674:  ldp      s20, s2, [x0, #-4]
00348678:  ldp      s3, s4, [x16, #-4]
0034867c:  ldp      s21, s5, [x2, #-4]
00348680:  ldp      s22, s6, [x1, #-4]
00348684:  fnmul    s17, s2, s1
00348688:  ldp      s16, s7, [x17, #-4]
0034868c:  fmul     s2, s0, s2
00348690:  fnmul    s18, s5, s4
00348694:  fmul     s5, s3, s5
00348698:  fnmul    s19, s6, s7
0034869c:  fmul     s6, s16, s6
003486a0:  fmadd    s17, s20, s0, s17
003486a4:  fmadd    s1, s20, s1, s2
003486a8:  fmadd    s0, s21, s3, s18
003486ac:  fmadd    s3, s21, s4, s5
003486b0:  ldp      s4, s5, [x15, #-4]
003486b4:  fmadd    s2, s22, s16, s19
003486b8:  fmadd    s6, s22, s7, s6
003486bc:  fadd     s7, s0, s4
003486c0:  fadd     s18, s3, s5
003486c4:  fsub     s0, s4, s0
003486c8:  fsub     s4, s5, s3
003486cc:  fadd     s16, s17, s2
003486d0:  fadd     s19, s1, s6
003486d4:  fsub     s5, s17, s2
003486d8:  fsub     s1, s1, s6
003486dc:  stp      s7, s18, [x15, #-4]
003486e0:  fsub     s20, s7, s16
003486e4:  fsub     s21, s18, s19
003486e8:  stp      s20, s21, [x2, #-4]
003486ec:  ldp      s7, s18, [x15, #-4]
003486f0:  fadd     s7, s16, s7
003486f4:  fadd     s16, s19, s18
003486f8:  stp      s7, s16, [x15, #-4]
003486fc:  cbz      w8, #0x348634
00348700:  fsub     s2, s0, s1
00348704:  fadd     s3, s4, s5
00348708:  fadd     s1, s0, s1
0034870c:  fsub     s0, s4, s5
00348710:  b        #0x348644
00348714:  sub      x12, x20, #1
00348718:  mov      w14, #0x18
0034871c:  add      x16, x27, #0x10c
00348720:  umulh    x15, x12, x14
00348724:  lsl      x14, x12, #5
00348728:  mov      x23, xzr
0034872c:  add      x0, x16, x14
00348730:  cmp      xzr, x15
00348734:  cset     w15, ne
00348738:  cmp      x0, x16
0034873c:  b.lo     #0x3482b0
00348740:  lsl      x0, x12, #4
00348744:  add      x2, x16, x0
00348748:  cmp      x2, x16
0034874c:  b.lo     #0x3482b0
00348750:  lsl      x2, x12, #3
00348754:  add      x3, x16, x2
00348758:  cmp      x3, x16
0034875c:  b.lo     #0x3482b0
00348760:  add      x3, x1, x2
00348764:  cmp      x3, x1
00348768:  b.lo     #0x3482b0
0034876c:  lsl      x19, x17, #3
00348770:  add      x17, x21, x19
00348774:  add      x17, x17, #4
00348778:  add      x3, x17, x2
0034877c:  cmp      x3, x17
00348780:  b.lo     #0x3482b0
00348784:  cmp      x26, #1
00348788:  b.ne     #0x3482b0
0034878c:  lsl      x24, x13, #3
00348790:  add      x13, x21, x24
00348794:  add      x13, x13, #4
00348798:  add      x17, x13, x2
0034879c:  cmp      x17, x13
003487a0:  b.lo     #0x3482b0
003487a4:  lsr      x13, x12, #0x3d
003487a8:  cbnz     x13, #0x3482b0
003487ac:  add      x13, x1, x0
003487b0:  cmp      x13, x1
003487b4:  b.lo     #0x3482b0
003487b8:  lsr      x13, x12, #0x3c
003487bc:  cbnz     x13, #0x3482b0
003487c0:  add      x13, x12, x12, lsl #1
003487c4:  lsl      x13, x13, #3
003487c8:  add      x17, x1, x13
003487cc:  cmp      x17, x1
003487d0:  b.lo     #0x3482b0
003487d4:  tbnz     w15, #0, #0x3482b0
003487d8:  add      x13, x16, x13
003487dc:  cmp      x13, x16
003487e0:  b.lo     #0x3482b0
003487e4:  tbnz     w15, #0, #0x3482b0
003487e8:  add      x13, x1, x14
003487ec:  cmp      x13, x1
003487f0:  b.lo     #0x3482b0
003487f4:  lsr      x12, x12, #0x3b
003487f8:  cbnz     x12, #0x3482b0
003487fc:  lsl      x16, x20, #3
00348800:  stur     x25, [x29, #-0xe8]
00348804:  add      x28, x11, #4
00348808:  str      x22, [sp]
0034880c:  mov      x4, x27
00348810:  dup      v21.2d, x11
00348814:  add      x13, x8, x16
00348818:  add      x14, x21, x16
0034881c:  stp      x7, x6, [x29, #-0xf8]
00348820:  sub      x12, x13, #4
00348824:  stur     x5, [x29, #-0x100]
00348828:  mov      x2, x13
0034882c:  str      x13, [sp, #0xc8]
00348830:  sub      x13, x14, #4
00348834:  add      x15, x14, x24
00348838:  cmp      x12, x21
0034883c:  sub      x17, x15, #4
00348840:  mov      x0, x14
00348844:  ccmp     x8, x13, #2, hi
00348848:  mov      x25, x15
0034884c:  add      x15, x11, x16
00348850:  cset     w14, lo
00348854:  cmp      x17, x21
00348858:  sub      x3, x15, #4
0034885c:  ccmp     x9, x13, #2, hi
00348860:  stur     x17, [x29, #-0x98]
00348864:  add      x22, x0, x19
00348868:  str      w14, [sp, #0xa0]
0034886c:  cset     w14, lo
00348870:  cmp      x3, x21
00348874:  stur     x3, [x29, #-0xb0]
00348878:  mov      x6, x15
0034887c:  ccmp     x11, x13, #2, hi
00348880:  str      x15, [sp, #0xb8]
00348884:  sub      x15, x22, #4
00348888:  add      x17, x21, #4
0034888c:  str      w14, [sp, #0xa4]
00348890:  cset     w14, lo
00348894:  cmp      x15, x21
00348898:  ccmp     x10, x13, #2, hi
0034889c:  str      x0, [sp, #0xd0]
003488a0:  add      x30, x17, x19
003488a4:  stur     x15, [x29, #-0x90]
003488a8:  add      x15, x8, #4
003488ac:  add      x16, x27, x16
003488b0:  str      w14, [sp, #0x9c]
003488b4:  cset     w14, lo
003488b8:  cmp      x0, x21
003488bc:  ccmp     x17, x13, #2, hi
003488c0:  str      w14, [sp, #0x98]
003488c4:  add      x0, x17, x24
003488c8:  cset     w14, lo
003488cc:  cmp      x2, x21
003488d0:  str      x15, [sp, #0xc0]
003488d4:  ccmp     x15, x13, #2, hi
003488d8:  str      w14, [sp, #0x94]
003488dc:  add      x3, x27, x20, lsl #4
003488e0:  cset     w14, lo
003488e4:  cmp      x6, x21
003488e8:  str      x28, [sp, #0x140]
003488ec:  ccmp     x28, x13, #2, hi
003488f0:  str      w14, [sp, #0x90]
003488f4:  mov      w6, #0x18
003488f8:  cset     w14, lo
003488fc:  cmp      x25, x21
00348900:  stur     x24, [x29, #-0x80]
00348904:  ccmp     x0, x13, #2, hi
00348908:  str      w14, [sp, #0x8c]
0034890c:  add      x5, x16, #0x104
00348910:  cset     w14, lo
00348914:  cmp      x22, x21
00348918:  str      x0, [sp, #0xb0]
0034891c:  ccmp     x30, x13, #2, hi
00348920:  stur     x25, [x29, #-0xb8]
00348924:  nop      
00348928:  umaddl   x6, w20, w6, x27
0034892c:  stur     x19, [x29, #-0x78]
00348930:  add      x0, x16, #0x108
00348934:  add      x23, x3, #0xfc
00348938:  str      w14, [sp, #0x88]
0034893c:  cset     w14, lo
00348940:  cmp      x5, x21
00348944:  cset     w16, hi
00348948:  cmp      x0, x21
0034894c:  mov      x15, x1
00348950:  cset     w19, hi
00348954:  cmp      x23, x21
00348958:  add      x1, x3, #0x100
0034895c:  str      x0, [sp, #0xa8]
00348960:  cset     w3, hi
00348964:  cmp      x1, x21
00348968:  add      x7, x27, x20, lsl #5
0034896c:  add      x0, x6, #0xf4
00348970:  add      x2, x6, #0xf8
00348974:  cset     w20, hi
00348978:  cmp      x0, x21
0034897c:  mov      x24, x25
00348980:  cset     w25, hi
00348984:  cmp      x2, x21
00348988:  add      x6, x7, #0xec
0034898c:  str      w14, [sp, #0x84]
00348990:  cset     w14, hi
00348994:  cmp      x6, x21
00348998:  add      x27, x7, #0xf0
0034899c:  cset     w7, hi
003489a0:  cmp      x15, x13
003489a4:  csel     w16, wzr, w16, hs
003489a8:  str      x0, [sp, #0xf8]
003489ac:  fmov     d4, x17
003489b0:  stur     x15, [x29, #-0xc0]
003489b4:  fmov     d30, x2
003489b8:  dup      v20.2d, x9
003489bc:  str      w16, [sp, #0x80]
003489c0:  csel     w16, wzr, w3, hs
003489c4:  add      x3, x4, #0x10c
003489c8:  str      w16, [sp, #0x78]
003489cc:  csel     w16, wzr, w25, hs
003489d0:  mov      v10.16b, v4.16b
003489d4:  str      w16, [sp, #0x70]
003489d8:  csel     w16, wzr, w7, hs
003489dc:  cmp      x27, x21
003489e0:  str      w16, [sp, #0x68]
003489e4:  cset     w16, hi
003489e8:  cmp      x3, x13
003489ec:  csel     w13, wzr, w19, hs
003489f0:  str      x27, [sp, #0x160]
003489f4:  mov      v15.16b, v4.16b
003489f8:  str      w13, [sp, #0x7c]
003489fc:  csel     w13, wzr, w20, hs
00348a00:  mov      v23.16b, v4.16b
00348a04:  str      w13, [sp, #0x74]
00348a08:  csel     w13, wzr, w14, hs
00348a0c:  fmov     d14, x23
00348a10:  str      w13, [sp, #0x6c]
00348a14:  csel     w13, wzr, w16, hs
00348a18:  fmov     d27, x10
00348a1c:  str      x4, [sp, #0x1e8]
00348a20:  ldp      x25, x20, [sp, #0xc8]
00348a24:  str      w13, [sp, #0x64]
00348a28:  ldp      x7, x4, [sp, #0xb8]
00348a2c:  ldur     x13, [x29, #-0x98]
00348a30:  mov      v23.d[1], x3
00348a34:  mov      v19.16b, v14.16b
00348a38:  cmp      x8, x13
00348a3c:  fmov     d26, x4
00348a40:  ccmp     x9, x12, #2, lo
00348a44:  cset     w13, lo
00348a48:  str      w13, [sp, #0x60]
00348a4c:  mov      v29.16b, v26.16b
00348a50:  ldur     x13, [x29, #-0xb0]
00348a54:  cmp      x8, x13
00348a58:  ccmp     x11, x12, #2, lo
00348a5c:  cset     w13, lo
00348a60:  str      w13, [sp, #0x5c]
00348a64:  ldur     x13, [x29, #-0x90]
00348a68:  str      x30, [sp, #0x118]
00348a6c:  str      x17, [sp, #0x198]
00348a70:  cmp      x8, x13
00348a74:  ccmp     x10, x12, #2, lo
00348a78:  cset     w14, lo
00348a7c:  cmp      x8, x20
00348a80:  ccmp     x17, x12, #2, lo
00348a84:  mov      x17, x25
00348a88:  cset     w13, lo
00348a8c:  cmp      x8, x25
00348a90:  ccmp     x4, x12, #2, lo
00348a94:  stp      w13, w14, [sp, #0x54]
00348a98:  cset     w14, lo
00348a9c:  cmp      x8, x7
00348aa0:  ccmp     x28, x12, #2, lo
00348aa4:  mov      x28, x22
00348aa8:  cset     w13, lo
00348aac:  cmp      x8, x24
00348ab0:  ldr      x24, [sp, #0xb0]
00348ab4:  stp      w13, w14, [sp, #0x4c]
00348ab8:  ccmp     x24, x12, #2, lo
00348abc:  mov      v29.d[1], x24
00348ac0:  cset     w14, lo
00348ac4:  cmp      x8, x22
00348ac8:  mov      x22, x30
00348acc:  ccmp     x30, x12, #2, lo
00348ad0:  mov      x30, x5
00348ad4:  mov      v15.d[1], x22
00348ad8:  cset     w13, lo
00348adc:  cmp      x8, x5
00348ae0:  ldr      x5, [sp, #0xa8]
00348ae4:  stp      w13, w14, [sp, #0x44]
00348ae8:  cset     w13, lo
00348aec:  fmov     d9, x30
00348af0:  cmp      x8, x5
00348af4:  cset     w14, lo
00348af8:  cmp      x8, x23
00348afc:  str      w14, [sp, #0x1cc]
00348b00:  cset     w14, lo
00348b04:  cmp      x8, x1
00348b08:  cset     w16, lo
00348b0c:  cmp      x8, x0
00348b10:  str      w16, [sp, #0x1a0]
00348b14:  cset     w16, lo
00348b18:  cmp      x8, x2
00348b1c:  cset     w0, lo
00348b20:  cmp      x8, x6
00348b24:  cset     w19, lo
00348b28:  cmp      x15, x12
00348b2c:  str      w0, [sp, #0x16c]
00348b30:  csel     w13, wzr, w13, hs
00348b34:  mov      x0, x7
00348b38:  str      w13, [sp, #0x40]
00348b3c:  csel     w13, wzr, w14, hs
00348b40:  str      w13, [sp, #0x38]
00348b44:  csel     w13, wzr, w16, hs
00348b48:  mov      x16, x1
00348b4c:  str      w13, [sp, #0x30]
00348b50:  csel     w13, wzr, w19, hs
00348b54:  cmp      x8, x27
00348b58:  str      w13, [sp, #0x28]
00348b5c:  cset     w13, lo
00348b60:  cmp      x3, x12
00348b64:  mov      x1, x20
00348b68:  mov      x12, x5
00348b6c:  mov      x5, x28
00348b70:  str      w13, [sp, #0x14c]
00348b74:  fmov     d28, x16
00348b78:  fmov     d24, x1
00348b7c:  stur     q4, [x29, #-0xd0]
00348b80:  fmov     d4, x0
00348b84:  fmov     d6, x12
00348b88:  fmov     d7, x5
00348b8c:  mov      x27, x3
00348b90:  mov      x3, x12
00348b94:  str      q28, [sp, #0x1b0]
00348b98:  mov      v5.16b, v24.16b
00348b9c:  mov      x13, x6
00348ba0:  stur     q6, [x29, #-0xe0]
00348ba4:  mov      v16.16b, v4.16b
00348ba8:  mov      v6.d[1], x23
00348bac:  str      q7, [sp, #0x1d0]
00348bb0:  mov      v7.d[1], x30
00348bb4:  mov      v4.d[1], x25
00348bb8:  ldur     x28, [x29, #-0xb8]
00348bbc:  mov      v5.d[1], x25
00348bc0:  ldr      x14, [sp, #0xf8]
00348bc4:  str      q30, [sp, #0x170]
00348bc8:  mov      v30.d[1], x6
00348bcc:  ldr      x15, [sp, #0x140]
00348bd0:  mov      v16.d[1], x28
00348bd4:  mov      v28.d[1], x14
00348bd8:  cmhi     v11.2d, v6.2d, v21.2d
00348bdc:  cmhi     v12.2d, v7.2d, v21.2d
00348be0:  cmhi     v4.2d, v4.2d, v29.2d
00348be4:  cmhi     v7.2d, v7.2d, v20.2d
00348be8:  cmhi     v8.2d, v5.2d, v21.2d
00348bec:  cmhi     v6.2d, v6.2d, v20.2d
00348bf0:  mov      v10.d[1], x15
00348bf4:  str      x5, [sp, #0xe0]
00348bf8:  mov      v14.d[1], x16
00348bfc:  mov      x19, x4
00348c00:  cmhi     v31.2d, v16.2d, v21.2d
00348c04:  cmhi     v16.2d, v16.2d, v20.2d
00348c08:  cmhi     v13.2d, v28.2d, v20.2d
00348c0c:  str      q4, [sp, #0x150]
00348c10:  cmhi     v4.2d, v5.2d, v20.2d
00348c14:  fmov     d5, x17
00348c18:  mov      v27.d[1], x27
00348c1c:  mov      x22, x27
00348c20:  mov      v19.d[1], x20
00348c24:  uzp1     v31.4s, v8.4s, v31.4s
00348c28:  uzp1     v8.4s, v12.4s, v11.4s
00348c2c:  cmhi     v11.2d, v28.2d, v21.2d
00348c30:  cmhi     v21.2d, v30.2d, v21.2d
00348c34:  str      q4, [sp, #0x100]
00348c38:  uzp1     v29.4s, v16.4s, v7.4s
00348c3c:  uzp1     v7.4s, v6.4s, v13.4s
00348c40:  mov      v6.16b, v9.16b
00348c44:  cmhi     v28.2d, v30.2d, v20.2d
00348c48:  mov      v17.16b, v5.16b
00348c4c:  mov      v22.16b, v5.16b
00348c50:  mov      v30.16b, v5.16b
00348c54:  uzp1     v4.4s, v11.4s, v21.4s
00348c58:  fmov     d11, x28
00348c5c:  mov      v13.16b, v5.16b
00348c60:  mov      v6.d[1], x12
00348c64:  dup      v20.2d, x10
00348c68:  fmov     d21, x15
00348c6c:  mov      v17.d[1], x28
00348c70:  mov      v9.d[1], x20
00348c74:  mov      x25, x30
00348c78:  mov      v13.d[1], x7
00348c7c:  cmhi     v25.2d, v19.2d, v23.2d
00348c80:  mov      x30, x16
00348c84:  stp      q4, q7, [sp, #0x120]
00348c88:  uzp1     v4.8h, v31.8h, v8.8h
00348c8c:  mov      v8.16b, v5.16b
00348c90:  mov      v31.16b, v5.16b
00348c94:  mov      v5.d[1], x20
00348c98:  mov      v7.16b, v21.16b
00348c9c:  cmhi     v9.2d, v9.2d, v23.2d
00348ca0:  cmhi     v16.2d, v14.2d, v20.2d
00348ca4:  mov      v30.d[1], x13
00348ca8:  cmhi     v13.2d, v13.2d, v20.2d
00348cac:  mov      v8.d[1], x25
00348cb0:  mov      v21.d[1], x24
00348cb4:  str      q4, [sp, #0x180]
00348cb8:  mov      v4.16b, v11.16b
00348cbc:  mov      v11.d[1], x20
00348cc0:  cmhi     v12.2d, v5.2d, v10.2d
00348cc4:  ldur     x12, [x29, #-0x90]
00348cc8:  mov      v7.d[1], x4
00348ccc:  mov      x4, x5
00348cd0:  str      x25, [sp, #0xf0]
00348cd4:  mov      x20, x23
00348cd8:  mov      v4.d[1], x5
00348cdc:  mov      x5, x14
00348ce0:  mov      v31.d[1], x23
00348ce4:  cmhi     v11.2d, v11.2d, v15.2d
00348ce8:  fmov     d15, x14
00348cec:  mov      v22.d[1], x5
00348cf0:  cmhi     v10.2d, v17.2d, v7.2d
00348cf4:  mov      x14, x19
00348cf8:  mov      x23, x15
00348cfc:  mov      v17.16b, v24.16b
00348d00:  cmhi     v5.2d, v4.2d, v20.2d
00348d04:  cmhi     v4.2d, v6.2d, v20.2d
00348d08:  fmov     d6, x6
00348d0c:  mov      v7.16b, v15.16b
00348d10:  ldr      x6, [sp, #0x160]
00348d14:  uzp1     v9.4s, v11.4s, v9.4s
00348d18:  mov      v15.d[1], x1
00348d1c:  mov      v18.16b, v6.16b
00348d20:  mov      v6.d[1], x12
00348d24:  ldr      w12, [sp, #0x1cc]
00348d28:  mov      v7.d[1], x2
00348d2c:  uzp1     v11.4s, v5.4s, v4.4s
00348d30:  fmov     d4, x6
00348d34:  csel     w12, wzr, w12, hs
00348d38:  fmov     d5, x11
00348d3c:  str      w12, [sp, #0x3c]
00348d40:  ldr      w12, [sp, #0x1a0]
00348d44:  mov      v18.d[1], x6
00348d48:  mov      v14.16b, v4.16b
00348d4c:  cmhi     v6.2d, v6.2d, v27.2d
00348d50:  cmhi     v15.2d, v15.2d, v23.2d
00348d54:  csel     w12, wzr, w12, hs
00348d58:  cmhi     v7.2d, v7.2d, v20.2d
00348d5c:  str      q5, [sp, #0x1a0]
00348d60:  str      w12, [sp, #0x34]
00348d64:  ldr      w12, [sp, #0x16c]
00348d68:  mov      v5.d[1], x10
00348d6c:  mov      v14.d[1], x1
00348d70:  uzp1     v19.4s, v6.4s, v12.4s
00348d74:  uzp1     v25.4s, v25.4s, v15.4s
00348d78:  csel     w12, wzr, w12, hs
00348d7c:  uzp1     v7.4s, v16.4s, v7.4s
00348d80:  fmov     d16, x22
00348d84:  str      w12, [sp, #0x2c]
00348d88:  ldr      w12, [sp, #0x14c]
00348d8c:  csel     w12, wzr, w12, hs
00348d90:  cmp      x19, x6
00348d94:  cmhi     v6.2d, v14.2d, v5.2d
00348d98:  ccmp     x27, x17, #2, lo
00348d9c:  str      w12, [sp, #0x24]
00348da0:  ldr      x27, [sp, #0x198]
00348da4:  cset     w12, lo
00348da8:  cmp      x15, x28
00348dac:  mov      v5.16b, v16.16b
00348db0:  ccmp     x24, x7, #2, lo
00348db4:  ldr      x7, [sp, #0x118]
00348db8:  str      w12, [sp, #0x20]
00348dbc:  dup      v27.2d, x27
00348dc0:  cset     w12, lo
00348dc4:  cmp      x15, x4
00348dc8:  ccmp     x7, x0, #2, lo
00348dcc:  str      w12, [sp, #0x1c]
00348dd0:  fmov     d23, x7
00348dd4:  cset     w12, lo
00348dd8:  mov      v5.d[1], x19
00348ddc:  cmp      x15, x25
00348de0:  cmhi     v18.2d, v18.2d, v27.2d
00348de4:  str      w12, [sp, #0x18]
00348de8:  fmov     d27, x9
00348dec:  ldur     x16, [x29, #-0xb0]
00348df0:  mov      v20.16b, v23.16b
00348df4:  mov      x12, x25
00348df8:  ldur     x4, [x29, #-0x98]
00348dfc:  cset     w14, lo
00348e00:  cmp      x15, x3
00348e04:  mov      v4.d[1], x16
00348e08:  mov      v27.d[1], x10
00348e0c:  fmov     d12, x16
00348e10:  mov      v20.d[1], x19
00348e14:  cmhi     v30.2d, v30.2d, v5.2d
00348e18:  mov      x12, x3
00348e1c:  cset     w3, lo
00348e20:  cmp      x15, x20
00348e24:  mov      x25, x5
00348e28:  mov      v14.16b, v12.16b
00348e2c:  str      w3, [sp, #0x1cc]
00348e30:  cset     w3, lo
00348e34:  cmhi     v4.2d, v4.2d, v27.2d
00348e38:  cmp      x15, x30
00348e3c:  mov      x15, x19
00348e40:  cmhi     v20.2d, v8.2d, v20.2d
00348e44:  cmhi     v8.2d, v31.2d, v5.2d
00348e48:  cmhi     v5.2d, v22.2d, v5.2d
00348e4c:  mov      v14.d[1], x4
00348e50:  cset     w5, lo
00348e54:  cmp      x23, x25
00348e58:  uzp1     v4.4s, v28.4s, v4.4s
00348e5c:  cset     w19, lo
00348e60:  cmp      x23, x2
00348e64:  uzp1     v22.4s, v5.4s, v30.4s
00348e68:  ldr      q5, [sp, #0x130]
00348e6c:  str      w5, [sp, #0x16c]
00348e70:  mov      x5, x2
00348e74:  cset     w2, lo
00348e78:  uzp1     v6.4s, v6.4s, v13.4s
00348e7c:  str      x20, [sp, #0xe8]
00348e80:  cmhi     v27.2d, v14.2d, v27.2d
00348e84:  mov      x28, x13
00348e88:  uzp1     v4.8h, v5.8h, v4.8h
00348e8c:  str      w2, [sp, #0x14c]
00348e90:  mov      x13, x30
00348e94:  uzp1     v10.4s, v18.4s, v10.4s
00348e98:  uzp1     v18.8h, v11.8h, v7.8h
00348e9c:  ldur     x30, [x29, #-0xc0]
00348ea0:  ldr      q7, [sp, #0x100]
00348ea4:  uzp1     v19.8h, v19.8h, v9.8h
00348ea8:  cmp      x23, x28
00348eac:  cset     w20, lo
00348eb0:  cmp      x30, x0
00348eb4:  fmov     d28, x30
00348eb8:  str      q4, [sp, #0x100]
00348ebc:  ldr      q4, [sp, #0x120]
00348ec0:  uzp1     v27.4s, v27.4s, v7.4s
00348ec4:  csel     w14, wzr, w14, hs
00348ec8:  uzp1     v8.4s, v20.4s, v8.4s
00348ecc:  dup      v11.2d, x1
00348ed0:  uzp1     v4.8h, v4.8h, v6.8h
00348ed4:  str      w14, [sp, #0x14]
00348ed8:  csel     w14, wzr, w3, hs
00348edc:  str      w14, [sp, #0x10]
00348ee0:  csel     w14, wzr, w19, hs
00348ee4:  mov      v9.16b, v28.16b
00348ee8:  uzp1     v5.8h, v27.8h, v29.8h
00348eec:  str      w14, [sp, #0xc]
00348ef0:  csel     w14, wzr, w20, hs
00348ef4:  mov      v27.16b, v24.16b
00348ef8:  str      w14, [sp, #8]
00348efc:  mov      v31.16b, v28.16b
00348f00:  str      q4, [sp, #0xd0]
00348f04:  uzp1     v4.16b, v18.16b, v19.16b
00348f08:  mov      v28.d[1], x22
00348f0c:  mov      v9.d[1], x27
00348f10:  mov      v20.16b, v24.16b
00348f14:  mov      v18.16b, v24.16b
00348f18:  mov      v24.d[1], x13
00348f1c:  mov      v27.d[1], x5
00348f20:  ldr      q7, [sp, #0x1d0]
00348f24:  ldr      q29, [sp, #0x170]
00348f28:  mov      v30.16b, v26.16b
00348f2c:  uzp1     v8.8h, v8.8h, v22.8h
00348f30:  stp      q5, q4, [sp, #0x120]
00348f34:  ldr      q5, [sp, #0x1b0]
00348f38:  mov      v7.d[1], x17
00348f3c:  ldp      q4, q13, [x29, #-0xe0]
00348f40:  mov      v29.d[1], x17
00348f44:  mov      v5.d[1], x17
00348f48:  mov      v22.16b, v26.16b
00348f4c:  mov      v26.d[1], x30
00348f50:  cmhi     v19.2d, v11.2d, v28.2d
00348f54:  cmhi     v24.2d, v24.2d, v9.2d
00348f58:  cmhi     v27.2d, v27.2d, v9.2d
00348f5c:  mov      v4.d[1], x17
00348f60:  ldr      q6, [sp, #0x150]
00348f64:  cmp      x23, x6
00348f68:  mov      x14, x27
00348f6c:  mov      v13.d[1], x15
00348f70:  cset     w3, lo
00348f74:  uzp1     v19.4s, v19.4s, v6.4s
00348f78:  cmhi     v6.2d, v7.2d, v26.2d
00348f7c:  cmhi     v7.2d, v5.2d, v26.2d
00348f80:  uzp1     v24.4s, v24.4s, v27.4s
00348f84:  fmov     d27, x24
00348f88:  mov      x14, x0
00348f8c:  cmhi     v15.2d, v4.2d, v26.2d
00348f90:  cmhi     v26.2d, v29.2d, v26.2d
00348f94:  cmp      x22, x0
00348f98:  mov      v20.d[1], x0
00348f9c:  ldur     x15, [x29, #-0x90]
00348fa0:  ldr      x0, [sp, #0xe0]
00348fa4:  mov      v4.16b, v27.16b
00348fa8:  mov      v27.d[1], x27
00348fac:  mov      v18.d[1], x12
00348fb0:  uzp1     v5.4s, v6.4s, v15.4s
00348fb4:  uzp1     v7.4s, v7.4s, v26.4s
00348fb8:  fmov     d26, x15
00348fbc:  mov      v17.d[1], x0
00348fc0:  mov      v30.d[1], x23
00348fc4:  mov      v14.16b, v16.16b
00348fc8:  mov      v22.d[1], x27
00348fcc:  uzp1     v29.8h, v24.8h, v19.8h
00348fd0:  mov      v23.d[1], x30
00348fd4:  mov      v26.d[1], x6
00348fd8:  mov      v31.d[1], x10
00348fdc:  mov      v4.d[1], x7
00348fe0:  uzp1     v19.8h, v5.8h, v7.8h
00348fe4:  mov      v7.16b, v16.16b
00348fe8:  mov      v16.d[1], x30
00348fec:  dup      v11.2d, x16
00348ff0:  uzp1     v25.8h, v25.8h, v10.8h
00348ff4:  dup      v10.2d, x4
00348ff8:  mov      x14, x12
00348ffc:  dup      v24.2d, x15
00349000:  cmhi     v18.2d, v18.2d, v9.2d
00349004:  cmhi     v5.2d, v17.2d, v27.2d
00349008:  ldr      w12, [sp, #0x1cc]
0034900c:  fmov     d15, x4
00349010:  mov      v14.d[1], x27
00349014:  mov      v12.d[1], x15
00349018:  ldr      q9, [sp, #0x1a0]
0034901c:  csel     w12, wzr, w12, hs
00349020:  cmhi     v27.2d, v10.2d, v23.2d
00349024:  cmhi     v22.2d, v20.2d, v22.2d
00349028:  cmhi     v20.2d, v10.2d, v21.2d
0034902c:  cmhi     v26.2d, v26.2d, v31.2d
00349030:  cmhi     v31.2d, v10.2d, v13.2d
00349034:  cmhi     v10.2d, v10.2d, v16.2d
00349038:  cmhi     v6.2d, v11.2d, v16.2d
0034903c:  cmhi     v30.2d, v24.2d, v30.2d
00349040:  cmhi     v28.2d, v24.2d, v28.2d
00349044:  cmhi     v4.2d, v24.2d, v4.2d
00349048:  uzp1     v16.4s, v5.4s, v18.4s
0034904c:  ldr      q5, [sp, #0x180]
00349050:  ldr      q24, [sp, #0xd0]
00349054:  stur     w12, [x29, #-0x90]
00349058:  mov      v15.d[1], x15
0034905c:  mov      v7.d[1], x11
00349060:  mov      v9.d[1], x9
00349064:  ldr      w12, [sp, #0x16c]
00349068:  cmhi     v23.2d, v11.2d, v23.2d
0034906c:  cmhi     v21.2d, v11.2d, v21.2d
00349070:  cmhi     v11.2d, v11.2d, v13.2d
00349074:  cmhi     v12.2d, v12.2d, v14.2d
00349078:  uzp1     v18.4s, v26.4s, v22.4s
0034907c:  csel     w12, wzr, w12, hs
00349080:  uzp1     v4.4s, v4.4s, v28.4s
00349084:  uzp1     v26.4s, v28.4s, v28.4s
00349088:  stur     w12, [x29, #-0x98]
0034908c:  cmhi     v17.2d, v15.2d, v9.2d
00349090:  cmhi     v7.2d, v15.2d, v7.2d
00349094:  ldr      w12, [sp, #0x14c]
00349098:  uzp1     v21.4s, v11.4s, v21.4s
0034909c:  uzp1     v22.4s, v12.4s, v30.4s
003490a0:  uzp1     v23.4s, v23.4s, v6.4s
003490a4:  uzp1     v6.4s, v6.4s, v6.4s
003490a8:  ldur     x15, [x29, #-0xb8]
003490ac:  csel     w12, wzr, w12, hs
003490b0:  uzp1     v24.16b, v5.16b, v24.16b
003490b4:  uzp1     v5.16b, v29.16b, v19.16b
003490b8:  uzp1     v19.4s, v20.4s, v27.4s
003490bc:  uzp1     v17.4s, v17.4s, v31.4s
003490c0:  uzp1     v7.4s, v10.4s, v7.4s
003490c4:  uzp1     v27.4s, v10.4s, v10.4s
003490c8:  stur     w12, [x29, #-0xb0]
003490cc:  csel     w12, wzr, w3, hs
003490d0:  cmp      x24, x0
003490d4:  uzp1     v16.8h, v18.8h, v16.8h
003490d8:  uzp1     v18.8h, v21.8h, v23.8h
003490dc:  ccmp     x7, x15, #2, lo
003490e0:  uzp1     v6.8h, v6.8h, v22.8h
003490e4:  uzp1     v4.8h, v4.8h, v26.8h
003490e8:  stur     w12, [x29, #-0xd0]
003490ec:  cset     w12, lo
003490f0:  mov      x17, x24
003490f4:  stur     w12, [x29, #-0xe0]
003490f8:  uzp1     v17.8h, v17.8h, v19.8h
003490fc:  uzp1     v7.8h, v27.8h, v7.8h
00349100:  ldp      x27, x24, [sp, #0xe8]
00349104:  uzp1     v25.16b, v25.16b, v8.16b
00349108:  uzp1     v6.16b, v18.16b, v6.16b
0034910c:  uzp1     v4.16b, v4.16b, v16.16b
00349110:  ldr      q16, [sp, #0x100]
00349114:  mov      x1, x22
00349118:  mov      x22, x14
0034911c:  cmp      x17, x24
00349120:  uzp1     v7.16b, v17.16b, v7.16b
00349124:  ldp      q18, q17, [sp, #0x120]
00349128:  cset     w12, lo
0034912c:  cmp      x17, x14
00349130:  uzp1     v16.16b, v18.16b, v16.16b
00349134:  cset     w14, lo
00349138:  cmp      x17, x27
0034913c:  and      v5.16b, v25.16b, v5.16b
00349140:  cset     w16, lo
00349144:  cmp      x17, x13
00349148:  and      v6.16b, v24.16b, v6.16b
0034914c:  cset     w2, lo
00349150:  cmp      x17, x25
00349154:  and      v4.16b, v17.16b, v4.16b
00349158:  cset     w4, lo
0034915c:  cmp      x17, x5
00349160:  and      v7.16b, v16.16b, v7.16b
00349164:  cset     w19, lo
00349168:  cmp      x17, x28
0034916c:  shl      v5.16b, v5.16b, #7
00349170:  cset     w20, lo
00349174:  cmp      x30, x15
00349178:  shl      v6.16b, v6.16b, #7
0034917c:  shl      v4.16b, v4.16b, #7
00349180:  shl      v7.16b, v7.16b, #7
00349184:  csel     w3, wzr, w12, hs
00349188:  csel     w12, wzr, w16, hs
0034918c:  cmlt     v5.16b, v5.16b, #0
00349190:  mov      x23, x17
00349194:  str      w12, [sp, #0x1d0]
00349198:  csel     w12, wzr, w4, hs
0034919c:  cmlt     v6.16b, v6.16b, #0
003491a0:  str      w12, [sp, #0x1cc]
003491a4:  csel     w12, wzr, w20, hs
003491a8:  cmlt     v4.16b, v4.16b, #0
003491ac:  str      w12, [sp, #0x1b0]
003491b0:  adrp     x12, #0x200000
003491b4:  cmlt     v7.16b, v7.16b, #0
003491b8:  ldr      q16, [x12, #0xa90]
003491bc:  mov      x17, x15
003491c0:  cmp      x23, x6
003491c4:  cset     w15, lo
003491c8:  cmp      x1, x17
003491cc:  mov      x23, xzr
003491d0:  and      v5.16b, v5.16b, v16.16b
003491d4:  and      v6.16b, v6.16b, v16.16b
003491d8:  and      v4.16b, v4.16b, v16.16b
003491dc:  and      v7.16b, v7.16b, v16.16b
003491e0:  csel     w12, wzr, w14, hs
003491e4:  csel     w16, wzr, w2, hs
003491e8:  csel     w4, wzr, w19, hs
003491ec:  csel     w14, wzr, w15, hs
003491f0:  cmp      x7, x24
003491f4:  ext      v16.16b, v5.16b, v5.16b, #8
003491f8:  ext      v17.16b, v6.16b, v6.16b, #8
003491fc:  ext      v18.16b, v4.16b, v4.16b, #8
00349200:  ext      v19.16b, v7.16b, v7.16b, #8
00349204:  cset     w15, lo
00349208:  cmp      x7, x22
0034920c:  cset     w2, lo
00349210:  cmp      x7, x27
00349214:  cset     w19, lo
00349218:  cmp      x7, x13
0034921c:  zip1     v5.16b, v5.16b, v16.16b
00349220:  zip1     v6.16b, v6.16b, v17.16b
00349224:  zip1     v4.16b, v4.16b, v18.16b
00349228:  zip1     v7.16b, v7.16b, v19.16b
0034922c:  cset     w20, lo
00349230:  cmp      x7, x25
00349234:  cset     w25, lo
00349238:  cmp      x7, x5
0034923c:  mov      x5, x0
00349240:  cset     w13, lo
00349244:  cmp      x7, x28
00349248:  addv     h5, v5.8h
0034924c:  addv     h6, v6.8h
00349250:  addv     h4, v4.8h
00349254:  addv     h7, v7.8h
00349258:  cset     w17, lo
0034925c:  cmp      x30, x0
00349260:  csel     w15, wzr, w15, hs
00349264:  csel     w22, wzr, w19, hs
00349268:  csel     w19, wzr, w25, hs
0034926c:  csel     w28, wzr, w17, hs
00349270:  cmp      x7, x6
00349274:  fmov     w17, s5
00349278:  fmov     w6, s6
0034927c:  fmov     w24, s4
00349280:  fmov     w25, s7
00349284:  cset     w0, lo
00349288:  cmp      x1, x5
0034928c:  csel     w7, wzr, w20, hs
00349290:  orr      w17, w6, w17
00349294:  orr      w6, w25, w24
00349298:  csel     w24, wzr, w2, hs
0034929c:  csel     w2, wzr, w0, hs
003492a0:  orr      w17, w6, w17
003492a4:  csel     w6, wzr, w13, hs
003492a8:  tst      w17, #0xffff
003492ac:  b.ne     #0x349760
003492b0:  ldr      w13, [sp, #0xa4]
003492b4:  tbnz     w13, #0, #0x349760
003492b8:  ldr      w13, [sp, #0xa0]
003492bc:  tbnz     w13, #0, #0x349760
003492c0:  ldr      w13, [sp, #0x9c]
003492c4:  tbnz     w13, #0, #0x349760
003492c8:  ldr      w13, [sp, #0x98]
003492cc:  tbnz     w13, #0, #0x349760
003492d0:  ldr      w13, [sp, #0x94]
003492d4:  tbnz     w13, #0, #0x349760
003492d8:  ldr      w13, [sp, #0x90]
003492dc:  tbnz     w13, #0, #0x349760
003492e0:  ldr      w13, [sp, #0x8c]
003492e4:  tbnz     w13, #0, #0x349760
003492e8:  ldr      w13, [sp, #0x88]
003492ec:  tbnz     w13, #0, #0x349760
003492f0:  ldr      w13, [sp, #0x84]
003492f4:  tbnz     w13, #0, #0x349760
003492f8:  ldr      w13, [sp, #0x80]
003492fc:  tbnz     w13, #0, #0x349760
00349300:  ldr      w13, [sp, #0x7c]
00349304:  tbnz     w13, #0, #0x349760
00349308:  ldr      w13, [sp, #0x78]
0034930c:  tbnz     w13, #0, #0x349760
00349310:  ldr      w13, [sp, #0x74]
00349314:  tbnz     w13, #0, #0x349760
00349318:  ldr      w13, [sp, #0x70]
0034931c:  tbnz     w13, #0, #0x349760
00349320:  ldr      w13, [sp, #0x6c]
00349324:  tbnz     w13, #0, #0x349760
00349328:  ldr      w13, [sp, #0x68]
0034932c:  tbnz     w13, #0, #0x349760
00349330:  ldr      w13, [sp, #0x64]
00349334:  tbnz     w13, #0, #0x349760
00349338:  ldr      w13, [sp, #0x60]
0034933c:  tbnz     w13, #0, #0x349760
00349340:  ldr      w13, [sp, #0x5c]
00349344:  tbnz     w13, #0, #0x349760
00349348:  ldr      w13, [sp, #0x58]
0034934c:  tbnz     w13, #0, #0x349760
00349350:  ldr      w13, [sp, #0x54]
00349354:  tbnz     w13, #0, #0x349760
00349358:  ldr      w13, [sp, #0x50]
0034935c:  tbnz     w13, #0, #0x349760
00349360:  ldr      w13, [sp, #0x4c]
00349364:  tbnz     w13, #0, #0x349760
00349368:  ldr      w13, [sp, #0x48]
0034936c:  tbnz     w13, #0, #0x349760
00349370:  ldr      w13, [sp, #0x44]
00349374:  tbnz     w13, #0, #0x349760
00349378:  ldr      w13, [sp, #0x40]
0034937c:  tbnz     w13, #0, #0x349760
00349380:  ldr      w13, [sp, #0x3c]
00349384:  tbnz     w13, #0, #0x349760
00349388:  ldr      w13, [sp, #0x38]
0034938c:  tbnz     w13, #0, #0x349760
00349390:  ldr      w13, [sp, #0x34]
00349394:  tbnz     w13, #0, #0x349760
00349398:  ldr      w13, [sp, #0x30]
0034939c:  tbnz     w13, #0, #0x349760
003493a0:  ldr      w13, [sp, #0x2c]
003493a4:  tbnz     w13, #0, #0x349760
003493a8:  ldr      w13, [sp, #0x28]
003493ac:  tbnz     w13, #0, #0x349760
003493b0:  ldr      w13, [sp, #0x24]
003493b4:  tbnz     w13, #0, #0x349760
003493b8:  ldr      w13, [sp, #0x20]
003493bc:  tbnz     w13, #0, #0x349760
003493c0:  ldr      w13, [sp, #0x1c]
003493c4:  tbnz     w13, #0, #0x349760
003493c8:  ldr      w13, [sp, #0x18]
003493cc:  tbnz     w13, #0, #0x349760
003493d0:  ldr      w13, [sp, #0x14]
003493d4:  tbnz     w13, #0, #0x349760
003493d8:  ldur     w13, [x29, #-0x90]
003493dc:  tbnz     w13, #0, #0x349760
003493e0:  ldr      w13, [sp, #0x10]
003493e4:  tbnz     w13, #0, #0x349760
003493e8:  ldur     w13, [x29, #-0x98]
003493ec:  tbnz     w13, #0, #0x349760
003493f0:  ldr      w13, [sp, #0xc]
003493f4:  tbnz     w13, #0, #0x349760
003493f8:  ldur     w13, [x29, #-0xb0]
003493fc:  tbnz     w13, #0, #0x349760
00349400:  ldr      w13, [sp, #8]
00349404:  tbnz     w13, #0, #0x349760
00349408:  ldur     w13, [x29, #-0xd0]
0034940c:  tbnz     w13, #0, #0x349760
00349410:  ldur     w13, [x29, #-0xe0]
00349414:  tbnz     w13, #0, #0x349760
00349418:  tbnz     w3, #0, #0x349760
0034941c:  tbnz     w12, #0, #0x349760
00349420:  ldr      w12, [sp, #0x1d0]
00349424:  tbnz     w12, #0, #0x349760
00349428:  tbnz     w16, #0, #0x349760
0034942c:  ldr      w12, [sp, #0x1cc]
00349430:  tbnz     w12, #0, #0x349760
00349434:  tbnz     w4, #0, #0x349760
00349438:  ldur     x20, [x29, #-0x70]
0034943c:  ldr      w12, [sp, #0x1b0]
00349440:  tbnz     w12, #0, #0x34977c
00349444:  tbnz     w14, #0, #0x34977c
00349448:  tbnz     w15, #0, #0x34977c
0034944c:  tbnz     w24, #0, #0x34977c
00349450:  tbnz     w22, #0, #0x34977c
00349454:  tbnz     w7, #0, #0x34977c
00349458:  tbnz     w19, #0, #0x34977c
0034945c:  ldur     x7, [x29, #-0xf8]
00349460:  tbnz     w6, #0, #0x349784
00349464:  tbnz     w28, #0, #0x349784
00349468:  tbnz     w2, #0, #0x349784
0034946c:  and      x22, x20, #0x7ffffffc
00349470:  dup      v6.4s, v3.s[0]
00349474:  ldur     x16, [x29, #-0x60]
00349478:  lsl      x13, x22, #3
0034947c:  mov      x14, #0x108
00349480:  lsl      x17, x7, #5
00349484:  lsl      x16, x16, #3
00349488:  mov      w12, #0x30
0034948c:  lsl      x0, x26, #6
00349490:  add      x1, x21, x13
00349494:  add      x8, x8, x13
00349498:  add      x11, x11, x13
0034949c:  add      x10, x10, x13
003494a0:  add      x9, x9, x13
003494a4:  mov      w13, #0x48
003494a8:  stur     q6, [x29, #-0x90]
003494ac:  nop      
003494b0:  madd     x15, x26, x13, x14
003494b4:  dup      v6.4s, v1.s[0]
003494b8:  mov      w13, #0x18
003494bc:  stur     x16, [x29, #-0xc0]
003494c0:  dup      v4.4s, v0.s[0]
003494c4:  madd     x6, x26, x13, x14
003494c8:  lsl      x13, x26, #7
003494cc:  stur     x17, [x29, #-0x98]
003494d0:  stur     q6, [x29, #-0xb0]
003494d4:  dup      v5.4s, v2.s[0]
003494d8:  add      x5, x17, #0x108
003494dc:  stur     x13, [x29, #-0xd0]
003494e0:  nop      
003494e4:  madd     x12, x26, x12, x14
003494e8:  add      x24, x0, #0x108
003494ec:  ldr      x13, [sp]
003494f0:  stur     x0, [x29, #-0xb8]
003494f4:  mov      w28, #0x10c
003494f8:  mov      w30, #0x108
003494fc:  mov      w17, #0x10c
00349500:  mov      w3, #0x10c
00349504:  lsl      x13, x13, #3
00349508:  stur     x13, [x29, #-0xe0]
0034950c:  ldp      x13, x14, [x29, #-0xf0]
00349510:  ldr      x4, [sp, #0x1e8]
00349514:  str      x22, [sp, #0x1d0]
00349518:  add      x16, x14, #0x108
0034951c:  add      x27, x13, #0x108
00349520:  mov      x14, x12
00349524:  mov      x23, x16
00349528:  ldur     x13, [x29, #-0xc0]
0034952c:  ldur     x0, [x29, #-0x80]
00349530:  add      x2, x4, x28
00349534:  add      x19, x4, x30
00349538:  add      x20, x4, x27
0034953c:  add      x25, x4, x14
00349540:  add      x7, x21, x13
00349544:  mov      x13, x21
00349548:  subs     x22, x22, #4
0034954c:  stur     x7, [x29, #-0x60]
00349550:  add      x30, x30, #0x20
00349554:  ld2      {v16.4s, v17.4s}, [x13], x0
00349558:  ldur     x0, [x29, #-0xe0]
0034955c:  ldp      s18, s25, [x2, #-4]
00349560:  ld2      {v19.4s, v20.4s}, [x7]
00349564:  add      x0, x21, x0
00349568:  add      x7, x4, x15
0034956c:  ld2      {v23.4s, v24.4s}, [x19]
00349570:  add      x19, x4, x23
00349574:  ld2      {v21.4s, v22.4s}, [x0]
00349578:  ld1      {v18.s}[1], [x20], #4
0034957c:  ld1      {v18.s}[2], [x19], #4
00349580:  fneg     v29.4s, v20.4s
00349584:  fmul     v14.4s, v23.4s, v20.4s
00349588:  fneg     v31.4s, v22.4s
0034958c:  ld1      {v18.s}[3], [x25], #4
00349590:  ld1      {v25.s}[1], [x20]
00349594:  add      x20, x4, x17
00349598:  ldur     x2, [x29, #-0x78]
0034959c:  fmul     v29.4s, v24.4s, v29.4s
003495a0:  ldp      s28, s30, [x20, #-4]
003495a4:  add      x20, x4, x16
003495a8:  ld1      {v25.s}[2], [x19]
003495ac:  add      x2, x21, x2
003495b0:  add      x19, x4, x6
003495b4:  ld2      {v26.4s, v27.4s}, [x2]
003495b8:  fmul     v15.4s, v18.4s, v22.4s
003495bc:  fmla     v14.4s, v24.4s, v19.4s
003495c0:  fmla     v29.4s, v23.4s, v19.4s
003495c4:  ld1      {v25.s}[3], [x25]
003495c8:  ld1      {v28.s}[1], [x19], #4
003495cc:  add      x25, x4, x12
003495d0:  ld1      {v28.s}[2], [x25], #4
003495d4:  fmul     v6.4s, v25.4s, v31.4s
003495d8:  fneg     v12.4s, v27.4s
003495dc:  fmla     v15.4s, v25.4s, v21.4s
003495e0:  mov      v25.16b, v16.16b
003495e4:  ld1      {v28.s}[3], [x7], #4
003495e8:  ld1      {v30.s}[1], [x19]
003495ec:  add      x19, x4, x3
003495f0:  ld2      {v9.4s, v10.4s}, [x13]
003495f4:  fmla     v6.4s, v18.4s, v21.4s
003495f8:  ldp      s8, s11, [x19, #-4]
003495fc:  ld1      {v30.s}[2], [x25]
00349600:  add      x25, x4, x5
00349604:  ld1      {v30.s}[3], [x7]
00349608:  ld1      {v8.s}[1], [x20], #4
0034960c:  add      x7, x4, x24
00349610:  fneg     v13.4s, v10.4s
00349614:  ld1      {v8.s}[2], [x7], #4
00349618:  fmul     v12.4s, v30.4s, v12.4s
0034961c:  ld1      {v8.s}[3], [x25], #4
00349620:  ld1      {v11.s}[1], [x20]
00349624:  fmla     v12.4s, v28.4s, v26.4s
00349628:  ld1      {v11.s}[2], [x7]
0034962c:  fmul     v7.4s, v8.4s, v10.4s
00349630:  fadd     v19.4s, v6.4s, v12.4s
00349634:  fsub     v6.4s, v6.4s, v12.4s
00349638:  ld1      {v11.s}[3], [x25]
0034963c:  fmul     v31.4s, v11.4s, v13.4s
00349640:  fmul     v13.4s, v28.4s, v27.4s
00349644:  fmla     v7.4s, v11.4s, v9.4s
00349648:  fneg     v6.4s, v6.4s
0034964c:  fmla     v31.4s, v8.4s, v9.4s
00349650:  fmla     v13.4s, v30.4s, v26.4s
00349654:  fadd     v21.4s, v14.4s, v7.4s
00349658:  fsub     v7.4s, v14.4s, v7.4s
0034965c:  fadd     v20.4s, v29.4s, v31.4s
00349660:  fadd     v18.4s, v15.4s, v13.4s
00349664:  fsub     v23.4s, v15.4s, v13.4s
00349668:  fsub     v28.4s, v29.4s, v31.4s
0034966c:  ldur     q29, [x29, #-0xb0]
00349670:  fadd     v22.4s, v19.4s, v20.4s
00349674:  fadd     v24.4s, v18.4s, v21.4s
00349678:  fmla     v25.4s, v4.4s, v20.4s
0034967c:  fadd     v26.4s, v16.4s, v22.4s
00349680:  fmul     v22.4s, v23.4s, v3.s[0]
00349684:  fmla     v25.4s, v5.4s, v19.4s
00349688:  fadd     v27.4s, v17.4s, v24.4s
0034968c:  mov      v24.16b, v17.16b
00349690:  fmla     v16.4s, v5.4s, v20.4s
00349694:  fmul     v20.4s, v6.4s, v3.s[0]
00349698:  fmul     v6.4s, v6.4s, v1.s[0]
0034969c:  fmla     v24.4s, v4.4s, v21.4s
003496a0:  fmla     v22.4s, v29.4s, v7.4s
003496a4:  fmla     v16.4s, v4.4s, v19.4s
003496a8:  fmul     v19.4s, v23.4s, v1.s[0]
003496ac:  fmla     v17.4s, v5.4s, v21.4s
003496b0:  st2      {v26.4s, v27.4s}, [x21], #32
003496b4:  ldur     q23, [x29, #-0x90]
003496b8:  fmls     v20.4s, v29.4s, v28.4s
003496bc:  ldur     x7, [x29, #-0x60]
003496c0:  fmla     v24.4s, v5.4s, v18.4s
003496c4:  fsub     v29.4s, v25.4s, v22.4s
003496c8:  fadd     v21.4s, v22.4s, v25.4s
003496cc:  fmls     v19.4s, v23.4s, v7.4s
003496d0:  fmla     v6.4s, v23.4s, v28.4s
003496d4:  fmla     v17.4s, v4.4s, v18.4s
003496d8:  fsub     v30.4s, v24.4s, v20.4s
003496dc:  fadd     v22.4s, v24.4s, v20.4s
003496e0:  fadd     v23.4s, v19.4s, v16.4s
003496e4:  fsub     v18.4s, v16.4s, v19.4s
003496e8:  fadd     v24.4s, v17.4s, v6.4s
003496ec:  fsub     v19.4s, v17.4s, v6.4s
003496f0:  st2      {v29.4s, v30.4s}, [x7]
003496f4:  ldur     x7, [x29, #-0xd0]
003496f8:  add      x5, x5, x7
003496fc:  add      x24, x24, x7
00349700:  add      x3, x3, x7
00349704:  add      x16, x16, x7
00349708:  st2      {v21.4s, v22.4s}, [x13]
0034970c:  ldur     x13, [x29, #-0x98]
00349710:  add      x15, x15, x13
00349714:  add      x12, x12, x13
00349718:  add      x17, x17, x13
0034971c:  add      x6, x6, x13
00349720:  st2      {v23.4s, v24.4s}, [x0]
00349724:  ldur     x0, [x29, #-0xb8]
00349728:  add      x14, x14, x0
0034972c:  add      x23, x23, x0
00349730:  add      x27, x27, x0
00349734:  add      x28, x28, x0
00349738:  st2      {v18.4s, v19.4s}, [x2]
0034973c:  b.ne     #0x349528
00349740:  ldur     x20, [x29, #-0x70]
00349744:  ldr      x23, [sp, #0x1d0]
00349748:  mov      x27, x4
0034974c:  ldp      x5, x7, [x29, #-0x100]
00349750:  ldp      x6, x25, [x29, #-0xf0]
00349754:  cmp      x23, x20
00349758:  b.ne     #0x3482b4
0034975c:  b        #0x3485cc
00349760:  ldur     x5, [x29, #-0x100]
00349764:  ldur     x20, [x29, #-0x70]
00349768:  mov      x1, x21
0034976c:  ldp      x7, x6, [x29, #-0xf8]
00349770:  ldr      x27, [sp, #0x1e8]
00349774:  ldur     x25, [x29, #-0xe8]
00349778:  b        #0x3482b4
0034977c:  ldur     x5, [x29, #-0x100]
00349780:  b        #0x349768
00349784:  ldp      x6, x25, [x29, #-0xf0]
00349788:  mov      x1, x21
0034978c:  ldur     x5, [x29, #-0x100]
00349790:  ldr      x27, [sp, #0x1e8]
00349794:  b        #0x3482b4

; ===== 00627470  FUN_00627470  (2500 bytes) =====
00627470:  sub      sp, sp, #0x1d0
00627474:  stp      d15, d14, [sp, #0x130]
00627478:  stp      d13, d12, [sp, #0x140]
0062747c:  stp      d11, d10, [sp, #0x150]
00627480:  stp      d9, d8, [sp, #0x160]
00627484:  stp      x29, x30, [sp, #0x170]
00627488:  stp      x28, x27, [sp, #0x180]
0062748c:  stp      x26, x25, [sp, #0x190]
00627490:  stp      x24, x23, [sp, #0x1a0]
00627494:  stp      x22, x21, [sp, #0x1b0]
00627498:  stp      x20, x19, [sp, #0x1c0]
0062749c:  add      x29, sp, #0x170
006274a0:  mrs      x19, tpidr_el0
006274a4:  mov      x30, x1
006274a8:  ldr      x8, [x19, #0x28]
006274ac:  cmp      x3, #8
006274b0:  stur     x8, [x29, #-0x50]
006274b4:  b.lo     #0x627730
006274b8:  lsl      x8, x2, #1
006274bc:  lsl      x10, x2, #2
006274c0:  lsl      x12, x2, #3
006274c4:  add      x9, x8, x2
006274c8:  add      x13, x10, x2
006274cc:  lsl      x11, x9, #1
006274d0:  b        #0x6275a0
006274d4:  movi     v5.2d, #0000000000000000
006274d8:  movi     v4.2d, #0000000000000000
006274dc:  movi     v2.2d, #0000000000000000
006274e0:  movi     v3.2d, #0000000000000000
006274e4:  movi     v6.2d, #0000000000000000
006274e8:  movi     v7.2d, #0000000000000000
006274ec:  ldr      d16, [x15]
006274f0:  mov      v6.d[1], v7.d[0]
006274f4:  fmov     d5, d5
006274f8:  mov      v2.d[1], v4.d[0]
006274fc:  mov      v16.d[1], v3.d[0]
00627500:  zip1     v3.16b, v6.16b, v5.16b
00627504:  zip2     v4.16b, v6.16b, v5.16b
00627508:  zip1     v5.16b, v16.16b, v2.16b
0062750c:  zip2     v2.16b, v16.16b, v2.16b
00627510:  zip1     v6.8h, v3.8h, v4.8h
00627514:  zip2     v3.8h, v3.8h, v4.8h
00627518:  zip1     v7.8h, v5.8h, v2.8h
0062751c:  zip2     v2.8h, v5.8h, v2.8h
00627520:  zip1     v4.4s, v7.4s, v6.4s
00627524:  zip2     v5.4s, v7.4s, v6.4s
00627528:  zip1     v6.4s, v2.4s, v3.4s
0062752c:  zip2     v2.4s, v2.4s, v3.4s
00627530:  saddlp   v3.8h, v4.16b
00627534:  saddlp   v7.8h, v5.16b
00627538:  saddlp   v16.8h, v6.16b
0062753c:  saddlp   v17.8h, v2.16b
00627540:  stp      q4, q5, [x0]
00627544:  stp      q6, q2, [x0, #0x20]
00627548:  add      x0, x0, #0x40
0062754c:  saddlp   v18.4s, v3.8h
00627550:  saddlp   v19.4s, v7.8h
00627554:  saddlp   v20.4s, v16.8h
00627558:  saddlp   v21.4s, v17.8h
0062755c:  rev64    v18.4s, v18.4s
00627560:  rev64    v19.4s, v19.4s
00627564:  rev64    v20.4s, v20.4s
00627568:  rev64    v21.4s, v21.4s
0062756c:  sadalp   v18.4s, v3.8h
00627570:  sadalp   v19.4s, v7.8h
00627574:  sadalp   v20.4s, v16.8h
00627578:  sadalp   v21.4s, v17.8h
0062757c:  uzp1     v3.4s, v18.4s, v19.4s
00627580:  uzp1     v7.4s, v20.4s, v21.4s
00627584:  add      v1.4s, v3.4s, v1.4s
00627588:  add      v0.4s, v7.4s, v0.4s
0062758c:  sub      x3, x3, #8
00627590:  add      x30, x30, #8
00627594:  cmp      x3, #7
00627598:  stp      q1, q0, [x5], #0x20
0062759c:  b.ls     #0x627730
006275a0:  movi     v0.2d, #0000000000000000
006275a4:  movi     v1.2d, #0000000000000000
006275a8:  cmp      x4, #8
006275ac:  b.lo     #0x6276b0
006275b0:  mov      x16, x30
006275b4:  mov      x14, x4
006275b8:  mov      x15, x16
006275bc:  add      x16, x16, x2
006275c0:  sub      x14, x14, #8
006275c4:  add      x17, x16, x2
006275c8:  ldr      d2, [x16]
006275cc:  ldr      d5, [x15]
006275d0:  add      x1, x17, x2
006275d4:  ldr      d3, [x17]
006275d8:  cmp      x14, #7
006275dc:  add      x6, x1, x2
006275e0:  ldr      d4, [x1]
006275e4:  add      x7, x6, x2
006275e8:  ldr      d6, [x6]
006275ec:  mov      v5.d[1], v3.d[0]
006275f0:  add      x17, x7, x2
006275f4:  ldr      d7, [x7]
006275f8:  mov      v2.d[1], v4.d[0]
006275fc:  add      x16, x17, x2
00627600:  ldr      d16, [x17]
00627604:  ldr      d17, [x16]
00627608:  add      x16, x16, x2
0062760c:  mov      v6.d[1], v16.d[0]
00627610:  mov      v7.d[1], v17.d[0]
00627614:  zip1     v3.16b, v5.16b, v2.16b
00627618:  zip2     v2.16b, v5.16b, v2.16b
0062761c:  zip1     v4.16b, v6.16b, v7.16b
00627620:  zip2     v5.16b, v6.16b, v7.16b
00627624:  zip1     v6.8h, v3.8h, v2.8h
00627628:  zip2     v2.8h, v3.8h, v2.8h
0062762c:  zip1     v7.8h, v4.8h, v5.8h
00627630:  zip2     v3.8h, v4.8h, v5.8h
00627634:  zip1     v4.4s, v6.4s, v7.4s
00627638:  zip2     v5.4s, v6.4s, v7.4s
0062763c:  zip1     v6.4s, v2.4s, v3.4s
00627640:  zip2     v2.4s, v2.4s, v3.4s
00627644:  saddlp   v3.8h, v4.16b
00627648:  saddlp   v7.8h, v5.16b
0062764c:  saddlp   v16.8h, v6.16b
00627650:  saddlp   v17.8h, v2.16b
00627654:  stp      q4, q5, [x0]
00627658:  stp      q6, q2, [x0, #0x20]
0062765c:  add      x0, x0, #0x40
00627660:  saddlp   v18.4s, v3.8h
00627664:  saddlp   v19.4s, v7.8h
00627668:  saddlp   v20.4s, v16.8h
0062766c:  saddlp   v21.4s, v17.8h
00627670:  rev64    v18.4s, v18.4s
00627674:  rev64    v19.4s, v19.4s
00627678:  rev64    v20.4s, v20.4s
0062767c:  rev64    v21.4s, v21.4s
00627680:  sadalp   v18.4s, v3.8h
00627684:  sadalp   v19.4s, v7.8h
00627688:  sadalp   v20.4s, v16.8h
0062768c:  sadalp   v21.4s, v17.8h
00627690:  uzp1     v3.4s, v18.4s, v19.4s
00627694:  uzp1     v7.4s, v20.4s, v21.4s
00627698:  add      v1.4s, v3.4s, v1.4s
0062769c:  add      v0.4s, v7.4s, v0.4s
006276a0:  b.hi     #0x6275b8
006276a4:  add      x15, x15, x12
006276a8:  cbnz     x14, #0x6276bc
006276ac:  b        #0x62758c
006276b0:  mov      x14, x4
006276b4:  mov      x15, x30
006276b8:  cbz      x4, #0x62758c
006276bc:  cmp      x14, #1
006276c0:  b.eq     #0x6274d4
006276c4:  ldr      d2, [x15, x2]
006276c8:  cmp      x14, #3
006276cc:  b.lo     #0x6276e8
006276d0:  ldr      d3, [x15, x8]
006276d4:  cmp      x14, #3
006276d8:  b.ne     #0x6276f4
006276dc:  movi     v5.2d, #0000000000000000
006276e0:  movi     v4.2d, #0000000000000000
006276e4:  b        #0x6274e4
006276e8:  movi     v5.2d, #0000000000000000
006276ec:  movi     v4.2d, #0000000000000000
006276f0:  b        #0x6274e0
006276f4:  ldr      d4, [x15, x9]
006276f8:  cmp      x14, #5
006276fc:  b.lo     #0x627714
00627700:  ldr      d6, [x15, x10]
00627704:  cmp      x14, #5
00627708:  b.ne     #0x62771c
0062770c:  movi     v5.2d, #0000000000000000
00627710:  b        #0x6274e8
00627714:  movi     v5.2d, #0000000000000000
00627718:  b        #0x6274e4
0062771c:  ldr      d5, [x15, x13]
00627720:  cmp      x14, #7
00627724:  b.ne     #0x6274e8
00627728:  ldr      d7, [x15, x11]
0062772c:  b        #0x6274ec
00627730:  cbz      x3, #0x627df0
00627734:  movi     v21.2d, #0000000000000000
00627738:  movi     v23.2d, #0000000000000000
0062773c:  str      x19, [sp]
00627740:  stp      q21, q21, [x29, #-0x90]
00627744:  stp      q21, q21, [x29, #-0x70]
00627748:  cbz      x4, #0x627de8
0062774c:  lsl      x22, x2, #2
00627750:  adrp     x8, #0x200000
00627754:  lsl      x10, x2, #1
00627758:  ldr      q3, [x8, #0xa40]
0062775c:  sub      x11, x29, #0x90
00627760:  lsl      x14, x2, #3
00627764:  add      x8, x22, x2
00627768:  dup      v0.2d, x11
0062776c:  add      x12, x10, x2
00627770:  stur     x8, [x29, #-0xb0]
00627774:  adrp     x8, #0x200000
00627778:  lsl      x9, x12, #1
0062777c:  ldr      q1, [x8, #0x120]
00627780:  mov      w8, #0x38
00627784:  add      x6, x11, x3
00627788:  dup      v6.2d, x8
0062778c:  mov      w8, #0x30
00627790:  add      v3.2d, v0.2d, v3.2d
00627794:  dup      v7.2d, x8
00627798:  mov      w8, #0x28
0062779c:  str      q1, [sp, #0x30]
006277a0:  dup      v16.2d, x8
006277a4:  mov      w8, #0x20
006277a8:  add      v1.2d, v0.2d, v1.2d
006277ac:  dup      v17.2d, x8
006277b0:  mov      w8, #0x18
006277b4:  str      x9, [sp, #0xb8]
006277b8:  adrp     x9, #0x200000
006277bc:  dup      v18.2d, x8
006277c0:  mov      w8, #8
006277c4:  ldr      q2, [x9, #0x4d0]
006277c8:  mov      w9, #0x10
006277cc:  dup      v20.2d, x8
006277d0:  dup      v19.2d, x9
006277d4:  orr      x8, x3, x11
006277d8:  orr      x9, x11, #1
006277dc:  stp      q1, q3, [sp, #0x80]
006277e0:  add      v3.2d, v0.2d, v2.2d
006277e4:  cmp      x8, x9
006277e8:  add      v1.2d, v0.2d, v18.2d
006277ec:  sub      x13, x14, x2
006277f0:  csinc    x8, x8, x11, hi
006277f4:  cmp      x6, x9
006277f8:  str      x13, [sp, #0xa8]
006277fc:  mov      x3, x10
00627800:  sub      x10, x8, x11
00627804:  and      x13, x8, #7
00627808:  csinc    x9, x6, x11, hi
0062780c:  and      x8, x8, #0xfffffffffffffff8
00627810:  add      v6.2d, v0.2d, v6.2d
00627814:  add      v7.2d, v0.2d, v7.2d
00627818:  str      x8, [sp, #8]
0062781c:  and      x8, x9, #0xfffffffffffffff8
00627820:  add      v16.2d, v0.2d, v16.2d
00627824:  add      v17.2d, v0.2d, v17.2d
00627828:  stp      q1, q3, [sp, #0x60]
0062782c:  add      v3.2d, v0.2d, v19.2d
00627830:  movi     v24.2d, #0000000000000000
00627834:  sub      x24, x8, x11
00627838:  mov      x8, #-8
0062783c:  orr      v1.16b, v0.16b, v20.16b
00627840:  fmov     d22, x11
00627844:  fmov     d25, x8
00627848:  add      x21, x11, #0x38
0062784c:  str      x10, [sp, #0xb0]
00627850:  sub      x10, x10, x13
00627854:  add      x25, x11, #0x20
00627858:  mov      x11, x12
0062785c:  stp      x10, x13, [sp, #0x10]
00627860:  stp      q1, q3, [sp, #0x40]
00627864:  stp      x12, x21, [sp, #0x20]
00627868:  b        #0x627920
0062786c:  ldp      d1, d3, [x29, #-0x90]
00627870:  ldur     x30, [x29, #-0xa8]
00627874:  ldp      d4, d5, [x29, #-0x80]
00627878:  ldp      d18, d19, [x29, #-0x70]
0062787c:  ldp      d20, d26, [x29, #-0x60]
00627880:  mov      v1.d[1], v4.d[0]
00627884:  mov      v3.d[1], v5.d[0]
00627888:  mov      v18.d[1], v20.d[0]
0062788c:  mov      v19.d[1], v26.d[0]
00627890:  zip1     v4.16b, v1.16b, v3.16b
00627894:  zip2     v1.16b, v1.16b, v3.16b
00627898:  zip1     v3.16b, v18.16b, v19.16b
0062789c:  zip2     v5.16b, v18.16b, v19.16b
006278a0:  zip1     v18.8h, v4.8h, v1.8h
006278a4:  zip2     v1.8h, v4.8h, v1.8h
006278a8:  zip1     v19.8h, v3.8h, v5.8h
006278ac:  zip2     v3.8h, v3.8h, v5.8h
006278b0:  zip1     v4.4s, v18.4s, v19.4s
006278b4:  zip2     v5.4s, v18.4s, v19.4s
006278b8:  zip1     v18.4s, v1.4s, v3.4s
006278bc:  zip2     v1.4s, v1.4s, v3.4s
006278c0:  saddlp   v3.8h, v4.16b
006278c4:  saddlp   v19.8h, v5.16b
006278c8:  saddlp   v20.8h, v18.16b
006278cc:  saddlp   v26.8h, v1.16b
006278d0:  stp      q4, q5, [x0]
006278d4:  stp      q18, q1, [x0, #0x20]
006278d8:  add      x0, x0, #0x40
006278dc:  saddlp   v27.4s, v3.8h
006278e0:  saddlp   v28.4s, v19.8h
006278e4:  saddlp   v29.4s, v20.8h
006278e8:  saddlp   v30.4s, v26.8h
006278ec:  rev64    v27.4s, v27.4s
006278f0:  rev64    v28.4s, v28.4s
006278f4:  rev64    v29.4s, v29.4s
006278f8:  rev64    v30.4s, v30.4s
006278fc:  sadalp   v27.4s, v3.8h
00627900:  sadalp   v28.4s, v19.8h
00627904:  sadalp   v29.4s, v20.8h
00627908:  sadalp   v30.4s, v26.8h
0062790c:  uzp1     v3.4s, v27.4s, v28.4s
00627910:  uzp1     v19.4s, v29.4s, v30.4s
00627914:  add      v23.4s, v3.4s, v23.4s
00627918:  add      v21.4s, v19.4s, v21.4s
0062791c:  cbz      x4, #0x627de8
00627920:  ldur     x12, [x29, #-0xb0]
00627924:  ldr      x13, [sp, #0xb8]
00627928:  add      x10, x30, x2
0062792c:  add      x9, x30, x3
00627930:  add      x16, x30, x11
00627934:  subs     x8, x4, #8
00627938:  add      x15, x30, x22
0062793c:  add      x12, x30, x12
00627940:  add      x17, x30, x13
00627944:  b.lo     #0x627970
00627948:  ldr      x13, [sp, #0xa8]
0062794c:  add      x1, x30, x14
00627950:  mov      x4, x8
00627954:  add      x28, x30, x13
00627958:  ldr      x8, [sp, #0xb0]
0062795c:  sub      x23, x29, #0x90
00627960:  stur     x1, [x29, #-0xa8]
00627964:  cmp      x8, #0x20
00627968:  b.hs     #0x6279c8
0062796c:  b        #0x627d78
00627970:  cmp      x4, #1
00627974:  mov      x28, x21
00627978:  mov      x1, x30
0062797c:  csel     x10, x21, x10, eq
00627980:  cmp      x4, #2
00627984:  stp      q24, q24, [x29, #-0x90]
00627988:  csel     x9, x9, x21, hi
0062798c:  cmp      x4, #3
00627990:  stp      q24, q24, [x29, #-0x70]
00627994:  csel     x16, x16, x21, hi
00627998:  cmp      x4, #4
0062799c:  csel     x15, x15, x21, hi
006279a0:  cmp      x4, #5
006279a4:  csel     x12, x12, x21, hi
006279a8:  cmp      x4, #7
006279ac:  mov      x4, xzr
006279b0:  csel     x17, x17, x21, eq
006279b4:  ldr      x8, [sp, #0xb0]
006279b8:  sub      x23, x29, #0x90
006279bc:  stur     x30, [x29, #-0xa8]
006279c0:  cmp      x8, #0x20
006279c4:  b.lo     #0x627d78
006279c8:  fmov     d26, x17
006279cc:  fmov     d9, x30
006279d0:  ldr      q1, [sp, #0x90]
006279d4:  fmov     d10, x10
006279d8:  fmov     d8, x9
006279dc:  mov      w8, #8
006279e0:  fmov     d30, x16
006279e4:  fmov     d28, x15
006279e8:  dup      v27.2d, x8
006279ec:  mov      v11.16b, v26.16b
006279f0:  adrp     x8, #0x200000
006279f4:  mov      v9.d[1], x10
006279f8:  mov      v10.d[1], x9
006279fc:  mov      v31.16b, v8.16b
00627a00:  mov      v8.d[1], x30
00627a04:  mov      v29.16b, v30.16b
00627a08:  mov      v28.d[1], x12
00627a0c:  mov      v30.d[1], x30
00627a10:  mov      v11.d[1], x30
00627a14:  mov      v31.d[1], x16
00627a18:  sub      v19.2d, v16.2d, v9.2d
00627a1c:  mov      v29.d[1], x15
00627a20:  sub      v12.2d, v6.2d, v10.2d
00627a24:  sub      v14.2d, v7.2d, v28.2d
00627a28:  sub      v11.2d, v1.2d, v11.2d
00627a2c:  ldp      q3, q1, [sp, #0x50]
00627a30:  sub      v18.2d, v16.2d, v31.2d
00627a34:  sub      v20.2d, v7.2d, v31.2d
00627a38:  cmhi     v19.2d, v27.2d, v19.2d
00627a3c:  sub      v13.2d, v6.2d, v29.2d
00627a40:  sub      v5.2d, v17.2d, v29.2d
00627a44:  cmhi     v12.2d, v27.2d, v12.2d
00627a48:  sub      v15.2d, v3.2d, v9.2d
00627a4c:  sub      v3.2d, v1.2d, v10.2d
00627a50:  ldr      q1, [sp, #0x70]
00627a54:  sub      v10.2d, v17.2d, v10.2d
00627a58:  cmhi     v14.2d, v27.2d, v14.2d
00627a5c:  cmhi     v11.2d, v27.2d, v11.2d
00627a60:  sub      v8.2d, v1.2d, v8.2d
00627a64:  ldr      q1, [sp, #0x40]
00627a68:  cmhi     v18.2d, v27.2d, v18.2d
00627a6c:  cmhi     v5.2d, v27.2d, v5.2d
00627a70:  cmhi     v20.2d, v27.2d, v20.2d
00627a74:  cmhi     v13.2d, v27.2d, v13.2d
00627a78:  sub      v4.2d, v1.2d, v9.2d
00627a7c:  ldr      q1, [sp, #0x80]
00627a80:  sub      v9.2d, v7.2d, v9.2d
00627a84:  cmhi     v15.2d, v27.2d, v15.2d
00627a88:  cmhi     v3.2d, v27.2d, v3.2d
00627a8c:  cmhi     v10.2d, v27.2d, v10.2d
00627a90:  sub      v30.2d, v1.2d, v30.2d
00627a94:  sub      v1.2d, v16.2d, v28.2d
00627a98:  cmhi     v8.2d, v27.2d, v8.2d
00627a9c:  uzp1     v5.4s, v5.4s, v19.4s
00627aa0:  uzp1     v19.4s, v14.4s, v11.4s
00627aa4:  cmhi     v4.2d, v27.2d, v4.2d
00627aa8:  cmhi     v9.2d, v27.2d, v9.2d
00627aac:  uzp1     v3.4s, v8.4s, v3.4s
00627ab0:  ldr      q8, [x8, #0xa90]
00627ab4:  cmhi     v30.2d, v27.2d, v30.2d
00627ab8:  cmhi     v1.2d, v27.2d, v1.2d
00627abc:  uzp1     v4.4s, v4.4s, v15.4s
00627ac0:  uzp1     v30.4s, v30.4s, v10.4s
00627ac4:  uzp1     v1.4s, v18.4s, v1.4s
00627ac8:  uzp1     v18.4s, v9.4s, v20.4s
00627acc:  uzp1     v20.4s, v12.4s, v13.4s
00627ad0:  uzp1     v3.8h, v4.8h, v3.8h
00627ad4:  uzp1     v4.8h, v30.8h, v5.8h
00627ad8:  uzp1     v1.8h, v1.8h, v18.8h
00627adc:  uzp1     v5.8h, v19.8h, v20.8h
00627ae0:  uzp1     v3.16b, v3.16b, v4.16b
00627ae4:  uzp1     v1.16b, v1.16b, v5.16b
00627ae8:  shl      v3.16b, v3.16b, #7
00627aec:  shl      v1.16b, v1.16b, #7
00627af0:  cmlt     v3.16b, v3.16b, #0
00627af4:  cmlt     v1.16b, v1.16b, #0
00627af8:  and      v3.16b, v3.16b, v8.16b
00627afc:  and      v1.16b, v1.16b, v8.16b
00627b00:  ext      v4.16b, v3.16b, v3.16b, #8
00627b04:  ext      v5.16b, v1.16b, v1.16b, #8
00627b08:  zip1     v3.16b, v3.16b, v4.16b
00627b0c:  zip1     v1.16b, v1.16b, v5.16b
00627b10:  addv     h3, v3.8h
00627b14:  addv     h1, v1.8h
00627b18:  fmov     w8, s3
00627b1c:  fmov     w13, s1
00627b20:  orr      w8, w8, w13
00627b24:  tst      w8, #0xffff
00627b28:  b.ne     #0x627d78
00627b2c:  fmov     d30, x28
00627b30:  fmov     d1, x12
00627b34:  mov      x8, #-8
00627b38:  mov      v3.16b, v26.16b
00627b3c:  sub      v18.2d, v28.2d, v0.2d
00627b40:  sub      v19.2d, v31.2d, v0.2d
00627b44:  sub      v20.2d, v29.2d, v0.2d
00627b48:  dup      v28.2d, x8
00627b4c:  mov      w8, #0x10
00627b50:  mov      v4.16b, v30.16b
00627b54:  mov      v5.16b, v30.16b
00627b58:  mov      v1.d[1], x17
00627b5c:  mov      v3.d[1], x28
00627b60:  dup      v29.2d, x8
00627b64:  mov      w8, #0x18
00627b68:  and      v19.16b, v19.16b, v28.16b
00627b6c:  and      v18.16b, v18.16b, v28.16b
00627b70:  mov      v4.d[1], x12
00627b74:  mov      v5.d[1], x15
00627b78:  and      v20.16b, v20.16b, v28.16b
00627b7c:  sub      v1.2d, v1.2d, v0.2d
00627b80:  sub      v3.2d, v3.2d, v0.2d
00627b84:  cmeq     v18.2d, v18.2d, v27.2d
00627b88:  cmeq     v19.2d, v19.2d, v27.2d
00627b8c:  cmeq     v20.2d, v20.2d, v29.2d
00627b90:  sub      v5.2d, v5.2d, v0.2d
00627b94:  sub      v4.2d, v4.2d, v0.2d
00627b98:  and      v1.16b, v1.16b, v28.16b
00627b9c:  uzp1     v18.4s, v19.4s, v18.4s
00627ba0:  and      v3.16b, v3.16b, v28.16b
00627ba4:  and      v4.16b, v4.16b, v28.16b
00627ba8:  and      v5.16b, v5.16b, v28.16b
00627bac:  dup      v28.2d, x8
00627bb0:  cmeq     v3.2d, v3.2d, v27.2d
00627bb4:  cmeq     v27.2d, v1.2d, v29.2d
00627bb8:  cmeq     v1.2d, v1.2d, v28.2d
00627bbc:  ldr      q28, [sp, #0x30]
00627bc0:  cmeq     v5.2d, v5.2d, v2.2d
00627bc4:  uzp1     v3.4s, v3.4s, v20.4s
00627bc8:  cmeq     v4.2d, v4.2d, v28.2d
00627bcc:  uzp1     v5.4s, v27.4s, v5.4s
00627bd0:  uzp1     v1.4s, v1.4s, v4.4s
00627bd4:  uzp1     v3.8h, v18.8h, v3.8h
00627bd8:  uzp1     v1.8h, v5.8h, v1.8h
00627bdc:  uzp1     v1.16b, v3.16b, v1.16b
00627be0:  shl      v1.16b, v1.16b, #7
00627be4:  cmlt     v1.16b, v1.16b, #0
00627be8:  and      v1.16b, v1.16b, v8.16b
00627bec:  ext      v3.16b, v1.16b, v1.16b, #8
00627bf0:  zip1     v1.16b, v1.16b, v3.16b
00627bf4:  addv     h1, v1.8h
00627bf8:  fmov     w8, s1
00627bfc:  cbnz     w8, #0x627d78
00627c00:  sub      x8, x10, x23
00627c04:  cmp      x8, #8
00627c08:  b.lo     #0x627d78
00627c0c:  sub      x8, x23, x30
00627c10:  cmp      x8, #8
00627c14:  b.lo     #0x627d78
00627c18:  sub      x8, x9, x23
00627c1c:  cmp      x8, #8
00627c20:  b.lo     #0x627d78
00627c24:  sub      x8, x16, x23
00627c28:  cmp      x8, #8
00627c2c:  b.lo     #0x627d78
00627c30:  sub      x8, x15, x23
00627c34:  cmp      x8, #8
00627c38:  b.lo     #0x627d78
00627c3c:  sub      x8, x12, x23
00627c40:  cmp      x8, #8
00627c44:  b.lo     #0x627d78
00627c48:  sub      x8, x17, x23
00627c4c:  cmp      x8, #8
00627c50:  b.lo     #0x627d78
00627c54:  sub      x8, x28, x23
00627c58:  cmp      x8, #8
00627c5c:  b.lo     #0x627d78
00627c60:  sub      x13, x21, x12
00627c64:  cmp      x13, #8
00627c68:  b.lo     #0x627d78
00627c6c:  sub      x13, x21, x17
00627c70:  cmp      x13, #8
00627c74:  b.lo     #0x627d78
00627c78:  sub      x13, x21, x28
00627c7c:  cmp      x13, #8
00627c80:  b.lo     #0x627d78
00627c84:  sub      v1.2d, v26.2d, v22.2d
00627c88:  sub      v3.2d, v30.2d, v22.2d
00627c8c:  adrp     x13, #0x200000
00627c90:  ldr      q4, [x13, #0x810]
00627c94:  and      v1.16b, v1.16b, v25.16b
00627c98:  and      v3.16b, v3.16b, v25.16b
00627c9c:  dup      v1.2d, v1.d[0]
00627ca0:  dup      v3.2d, v3.d[0]
00627ca4:  cmeq     v1.2d, v1.2d, v4.2d
00627ca8:  cmeq     v3.2d, v3.2d, v4.2d
00627cac:  orr      v1.16b, v1.16b, v3.16b
00627cb0:  xtn      v1.2s, v1.2d
00627cb4:  dup      v3.2s, v1.s[1]
00627cb8:  orr      v1.8b, v1.8b, v3.8b
00627cbc:  fmov     w13, s1
00627cc0:  tbnz     w13, #0, #0x627d78
00627cc4:  and      x8, x8, #0xfffffffffffffff8
00627cc8:  cmp      x8, #0x30
00627ccc:  b.eq     #0x627d78
00627cd0:  ldr      x1, [sp, #0x10]
00627cd4:  sub      x21, x29, #0x90
00627cd8:  mov      x11, x14
00627cdc:  mov      x14, x22
00627ce0:  mov      x22, x3
00627ce4:  mov      x23, xzr
00627ce8:  add      x13, x28, x1
00627cec:  add      x26, x17, x1
00627cf0:  add      x20, x12, x1
00627cf4:  add      x27, x15, x1
00627cf8:  add      x19, x16, x1
00627cfc:  add      x7, x9, x1
00627d00:  add      x8, x10, x1
00627d04:  add      x1, x30, x1
00627d08:  ldr      d1, [x30, x23]
00627d0c:  add      x3, x25, x23
00627d10:  str      d1, [x21, x23]
00627d14:  ldr      d1, [x10, x23]
00627d18:  stur     d1, [x3, #-0x18]
00627d1c:  ldr      d1, [x9, x23]
00627d20:  stur     d1, [x3, #-0x10]
00627d24:  ldr      d1, [x16, x23]
00627d28:  stur     d1, [x3, #-8]
00627d2c:  ldr      d1, [x15, x23]
00627d30:  str      d1, [x3]
00627d34:  ldr      d1, [x12, x23]
00627d38:  str      d1, [x3, #8]
00627d3c:  ldr      d1, [x17, x23]
00627d40:  str      d1, [x3, #0x10]
00627d44:  ldr      d1, [x28, x23]
00627d48:  add      x23, x23, #8
00627d4c:  cmp      x24, x23
00627d50:  str      d1, [x3, #0x18]
00627d54:  b.ne     #0x627d08
00627d58:  mov      x3, x22
00627d5c:  mov      x22, x14
00627d60:  mov      x14, x11
00627d64:  ldp      x11, x21, [sp, #0x20]
00627d68:  ldr      x23, [sp, #8]
00627d6c:  ldr      x9, [sp, #0x18]
00627d70:  cbnz     x9, #0x627d98
00627d74:  b        #0x62786c
00627d78:  mov      x13, x28
00627d7c:  mov      x26, x17
00627d80:  mov      x20, x12
00627d84:  mov      x27, x15
00627d88:  mov      x19, x16
00627d8c:  mov      x7, x9
00627d90:  mov      x8, x10
00627d94:  mov      x1, x30
00627d98:  ldrb     w9, [x1], #1
00627d9c:  strb     w9, [x23]
00627da0:  ldrb     w9, [x8], #1
00627da4:  strb     w9, [x23, #8]
00627da8:  ldrb     w9, [x7], #1
00627dac:  strb     w9, [x23, #0x10]
00627db0:  ldrb     w9, [x19], #1
00627db4:  strb     w9, [x23, #0x18]
00627db8:  ldrb     w9, [x27], #1
00627dbc:  strb     w9, [x23, #0x20]
00627dc0:  ldrb     w9, [x20], #1
00627dc4:  strb     w9, [x23, #0x28]
00627dc8:  ldrb     w9, [x26], #1
00627dcc:  strb     w9, [x23, #0x30]
00627dd0:  ldrb     w9, [x13], #1
00627dd4:  strb     w9, [x23, #0x38]
00627dd8:  add      x23, x23, #1
00627ddc:  cmp      x23, x6
00627de0:  b.lo     #0x627d98
00627de4:  b        #0x62786c
00627de8:  ldr      x19, [sp]
00627dec:  stp      q23, q21, [x5]
00627df0:  ldr      x8, [x19, #0x28]
00627df4:  ldur     x9, [x29, #-0x50]
00627df8:  cmp      x8, x9
00627dfc:  b.ne     #0x627e30
00627e00:  ldp      x20, x19, [sp, #0x1c0]
00627e04:  ldp      x22, x21, [sp, #0x1b0]
00627e08:  ldp      x24, x23, [sp, #0x1a0]
00627e0c:  ldp      x26, x25, [sp, #0x190]
00627e10:  ldp      x28, x27, [sp, #0x180]
00627e14:  ldp      x29, x30, [sp, #0x170]
00627e18:  ldp      d9, d8, [sp, #0x160]
00627e1c:  ldp      d11, d10, [sp, #0x150]
00627e20:  ldp      d13, d12, [sp, #0x140]
00627e24:  ldp      d15, d14, [sp, #0x130]
00627e28:  add      sp, sp, #0x1d0
00627e2c:  ret      
00627e30:  bl       #0x759db0

; ===== 0062d90c  FUN_0062d90c  (2564 bytes) =====
0062d90c:  sub      sp, sp, #0x1d0
0062d910:  stp      d15, d14, [sp, #0x130]
0062d914:  stp      d13, d12, [sp, #0x140]
0062d918:  stp      d11, d10, [sp, #0x150]
0062d91c:  stp      d9, d8, [sp, #0x160]
0062d920:  stp      x29, x30, [sp, #0x170]
0062d924:  stp      x28, x27, [sp, #0x180]
0062d928:  stp      x26, x25, [sp, #0x190]
0062d92c:  stp      x24, x23, [sp, #0x1a0]
0062d930:  stp      x22, x21, [sp, #0x1b0]
0062d934:  stp      x20, x19, [sp, #0x1c0]
0062d938:  add      x29, sp, #0x170
0062d93c:  tst      w6, #1
0062d940:  mov      w9, #-0x80
0062d944:  mov      x8, x1
0062d948:  mrs      x20, tpidr_el0
0062d94c:  csel     w9, w9, wzr, ne
0062d950:  ldr      x10, [x20, #0x28]
0062d954:  cmp      x3, #8
0062d958:  dup      v0.16b, w9
0062d95c:  stur     x10, [x29, #-0x50]
0062d960:  b.lo     #0x62dc04
0062d964:  fmov     s1, w9
0062d968:  lsl      x15, x2, #1
0062d96c:  lsl      x10, x2, #2
0062d970:  lsl      x12, x2, #3
0062d974:  add      x9, x15, x2
0062d978:  add      x13, x10, x2
0062d97c:  dup      v1.8b, v1.b[0]
0062d980:  lsl      x11, x9, #1
0062d984:  b        #0x62da60
0062d988:  fmov     d7, d1
0062d98c:  fmov     d6, d1
0062d990:  fmov     d5, d1
0062d994:  fmov     d16, d1
0062d998:  fmov     d17, d1
0062d99c:  ldr      d18, [x16]
0062d9a0:  mov      v16.d[1], v17.d[0]
0062d9a4:  mov      v7.d[1], v1.d[0]
0062d9a8:  mov      v4.d[1], v6.d[0]
0062d9ac:  mov      v18.d[1], v5.d[0]
0062d9b0:  eor      v5.16b, v16.16b, v0.16b
0062d9b4:  eor      v6.16b, v7.16b, v0.16b
0062d9b8:  eor      v4.16b, v4.16b, v0.16b
0062d9bc:  eor      v7.16b, v18.16b, v0.16b
0062d9c0:  zip1     v16.16b, v5.16b, v6.16b
0062d9c4:  zip2     v5.16b, v5.16b, v6.16b
0062d9c8:  zip1     v6.16b, v7.16b, v4.16b
0062d9cc:  zip2     v4.16b, v7.16b, v4.16b
0062d9d0:  zip1     v7.8h, v16.8h, v5.8h
0062d9d4:  zip2     v5.8h, v16.8h, v5.8h
0062d9d8:  zip1     v17.8h, v6.8h, v4.8h
0062d9dc:  zip2     v4.8h, v6.8h, v4.8h
0062d9e0:  zip1     v6.4s, v17.4s, v7.4s
0062d9e4:  zip2     v7.4s, v17.4s, v7.4s
0062d9e8:  zip1     v16.4s, v4.4s, v5.4s
0062d9ec:  zip2     v4.4s, v4.4s, v5.4s
0062d9f0:  uaddlp   v5.8h, v6.16b
0062d9f4:  uaddlp   v17.8h, v7.16b
0062d9f8:  uaddlp   v18.8h, v16.16b
0062d9fc:  uaddlp   v19.8h, v4.16b
0062da00:  stp      q6, q7, [x0]
0062da04:  stp      q16, q4, [x0, #0x20]
0062da08:  add      x0, x0, #0x40
0062da0c:  uaddlp   v20.4s, v5.8h
0062da10:  uaddlp   v21.4s, v17.8h
0062da14:  uaddlp   v22.4s, v18.8h
0062da18:  uaddlp   v23.4s, v19.8h
0062da1c:  rev64    v20.4s, v20.4s
0062da20:  rev64    v21.4s, v21.4s
0062da24:  rev64    v22.4s, v22.4s
0062da28:  rev64    v23.4s, v23.4s
0062da2c:  uadalp   v20.4s, v5.8h
0062da30:  uadalp   v21.4s, v17.8h
0062da34:  uadalp   v22.4s, v18.8h
0062da38:  uadalp   v23.4s, v19.8h
0062da3c:  uzp1     v5.4s, v20.4s, v21.4s
0062da40:  uzp1     v17.4s, v22.4s, v23.4s
0062da44:  add      v3.4s, v5.4s, v3.4s
0062da48:  add      v2.4s, v17.4s, v2.4s
0062da4c:  sub      x3, x3, #8
0062da50:  add      x8, x8, #8
0062da54:  cmp      x3, #7
0062da58:  stp      q3, q2, [x5], #0x20
0062da5c:  b.ls     #0x62dc04
0062da60:  movi     v2.2d, #0000000000000000
0062da64:  movi     v3.2d, #0000000000000000
0062da68:  cmp      x4, #8
0062da6c:  b.lo     #0x62db80
0062da70:  mov      x17, x8
0062da74:  mov      x14, x4
0062da78:  mov      x16, x17
0062da7c:  add      x17, x17, x2
0062da80:  sub      x14, x14, #8
0062da84:  add      x1, x17, x2
0062da88:  ldr      d4, [x17]
0062da8c:  ldr      d7, [x16]
0062da90:  add      x6, x1, x2
0062da94:  ldr      d5, [x1]
0062da98:  cmp      x14, #7
0062da9c:  add      x7, x6, x2
0062daa0:  ldr      d6, [x6]
0062daa4:  add      x19, x7, x2
0062daa8:  ldr      d16, [x7]
0062daac:  mov      v7.d[1], v5.d[0]
0062dab0:  add      x1, x19, x2
0062dab4:  ldr      d17, [x19]
0062dab8:  mov      v4.d[1], v6.d[0]
0062dabc:  add      x17, x1, x2
0062dac0:  ldr      d18, [x1]
0062dac4:  ldr      d19, [x17]
0062dac8:  add      x17, x17, x2
0062dacc:  mov      v16.d[1], v18.d[0]
0062dad0:  eor      v5.16b, v7.16b, v0.16b
0062dad4:  mov      v17.d[1], v19.d[0]
0062dad8:  eor      v4.16b, v4.16b, v0.16b
0062dadc:  eor      v6.16b, v16.16b, v0.16b
0062dae0:  zip1     v16.16b, v5.16b, v4.16b
0062dae4:  zip2     v4.16b, v5.16b, v4.16b
0062dae8:  eor      v7.16b, v17.16b, v0.16b
0062daec:  zip1     v5.16b, v6.16b, v7.16b
0062daf0:  zip2     v6.16b, v6.16b, v7.16b
0062daf4:  zip1     v7.8h, v16.8h, v4.8h
0062daf8:  zip2     v4.8h, v16.8h, v4.8h
0062dafc:  zip1     v17.8h, v5.8h, v6.8h
0062db00:  zip2     v5.8h, v5.8h, v6.8h
0062db04:  zip1     v6.4s, v7.4s, v17.4s
0062db08:  zip2     v7.4s, v7.4s, v17.4s
0062db0c:  zip1     v16.4s, v4.4s, v5.4s
0062db10:  zip2     v4.4s, v4.4s, v5.4s
0062db14:  uaddlp   v5.8h, v6.16b
0062db18:  uaddlp   v17.8h, v7.16b
0062db1c:  uaddlp   v18.8h, v16.16b
0062db20:  uaddlp   v19.8h, v4.16b
0062db24:  stp      q6, q7, [x0]
0062db28:  stp      q16, q4, [x0, #0x20]
0062db2c:  add      x0, x0, #0x40
0062db30:  uaddlp   v20.4s, v5.8h
0062db34:  uaddlp   v21.4s, v17.8h
0062db38:  uaddlp   v22.4s, v18.8h
0062db3c:  uaddlp   v23.4s, v19.8h
0062db40:  rev64    v20.4s, v20.4s
0062db44:  rev64    v21.4s, v21.4s
0062db48:  rev64    v22.4s, v22.4s
0062db4c:  rev64    v23.4s, v23.4s
0062db50:  uadalp   v20.4s, v5.8h
0062db54:  uadalp   v21.4s, v17.8h
0062db58:  uadalp   v22.4s, v18.8h
0062db5c:  uadalp   v23.4s, v19.8h
0062db60:  uzp1     v5.4s, v20.4s, v21.4s
0062db64:  uzp1     v17.4s, v22.4s, v23.4s
0062db68:  add      v3.4s, v5.4s, v3.4s
0062db6c:  add      v2.4s, v17.4s, v2.4s
0062db70:  b.hi     #0x62da78
0062db74:  add      x16, x16, x12
0062db78:  cbnz     x14, #0x62db8c
0062db7c:  b        #0x62da4c
0062db80:  mov      x14, x4
0062db84:  mov      x16, x8
0062db88:  cbz      x4, #0x62da4c
0062db8c:  fmov     d7, d1
0062db90:  fmov     d6, d1
0062db94:  cmp      x14, #1
0062db98:  fmov     d4, d1
0062db9c:  fmov     d5, d1
0062dba0:  fmov     d16, d1
0062dba4:  fmov     d17, d1
0062dba8:  b.eq     #0x62d99c
0062dbac:  ldr      d4, [x16, x2]
0062dbb0:  cmp      x14, #3
0062dbb4:  b.lo     #0x62d988
0062dbb8:  ldr      d5, [x16, x15]
0062dbbc:  b.ne     #0x62dbcc
0062dbc0:  fmov     d7, d1
0062dbc4:  fmov     d6, d1
0062dbc8:  b        #0x62d994
0062dbcc:  ldr      d6, [x16, x9]
0062dbd0:  cmp      x14, #5
0062dbd4:  b.lo     #0x62dbe8
0062dbd8:  ldr      d16, [x16, x10]
0062dbdc:  b.ne     #0x62dbf0
0062dbe0:  fmov     d7, d1
0062dbe4:  b        #0x62d998
0062dbe8:  fmov     d7, d1
0062dbec:  b        #0x62d994
0062dbf0:  ldr      d7, [x16, x13]
0062dbf4:  cmp      x14, #7
0062dbf8:  b.ne     #0x62d998
0062dbfc:  ldr      d17, [x16, x11]
0062dc00:  b        #0x62d99c
0062dc04:  cbz      x3, #0x62e2cc
0062dc08:  str      x20, [sp]
0062dc0c:  stp      q0, q0, [x29, #-0x90]
0062dc10:  stp      q0, q0, [x29, #-0x70]
0062dc14:  cbz      x4, #0x62e2bc
0062dc18:  lsl      x22, x2, #2
0062dc1c:  lsl      x13, x2, #1
0062dc20:  lsl      x14, x2, #3
0062dc24:  adrp     x9, #0x200000
0062dc28:  sub      x11, x29, #0x90
0062dc2c:  adrp     x10, #0x200000
0062dc30:  ldr      q4, [x9, #0xa40]
0062dc34:  add      x9, x22, x2
0062dc38:  add      x15, x13, x2
0062dc3c:  stur     x9, [x29, #-0xb0]
0062dc40:  sub      x9, x14, x2
0062dc44:  dup      v1.2d, x11
0062dc48:  str      x9, [sp, #0xa0]
0062dc4c:  lsl      x9, x15, #1
0062dc50:  ldr      q3, [x10, #0x4d0]
0062dc54:  mov      w10, #0x18
0062dc58:  mov      w12, #0x38
0062dc5c:  add      x6, x11, x3
0062dc60:  str      x9, [sp, #0xb8]
0062dc64:  adrp     x9, #0x200000
0062dc68:  add      v4.2d, v1.2d, v4.2d
0062dc6c:  ldr      q2, [x9, #0x120]
0062dc70:  mov      w9, #0x30
0062dc74:  dup      v19.2d, x10
0062dc78:  dup      v16.2d, x9
0062dc7c:  mov      w9, #0x28
0062dc80:  orr      x10, x11, #1
0062dc84:  stp      q3, q2, [sp, #0x30]
0062dc88:  add      v2.2d, v1.2d, v2.2d
0062dc8c:  dup      v17.2d, x9
0062dc90:  mov      w9, #0x20
0062dc94:  dup      v7.2d, x12
0062dc98:  movi     v22.2d, #0000000000000000
0062dc9c:  dup      v18.2d, x9
0062dca0:  mov      w9, #0x10
0062dca4:  add      v16.2d, v1.2d, v16.2d
0062dca8:  dup      v20.2d, x9
0062dcac:  orr      x9, x3, x11
0062dcb0:  mov      x3, x13
0062dcb4:  stp      q2, q4, [sp, #0x80]
0062dcb8:  add      v4.2d, v1.2d, v3.2d
0062dcbc:  add      v2.2d, v1.2d, v19.2d
0062dcc0:  cmp      x9, x10
0062dcc4:  add      v7.2d, v1.2d, v7.2d
0062dcc8:  add      v17.2d, v1.2d, v17.2d
0062dccc:  csinc    x9, x9, x11, hi
0062dcd0:  add      v18.2d, v1.2d, v18.2d
0062dcd4:  cmp      x6, x10
0062dcd8:  sub      x12, x9, x11
0062dcdc:  and      x13, x9, #7
0062dce0:  and      x9, x9, #0xfffffffffffffff8
0062dce4:  stp      q2, q4, [sp, #0x60]
0062dce8:  add      v2.2d, v1.2d, v20.2d
0062dcec:  movi     v23.2d, #0000000000000000
0062dcf0:  str      x9, [sp, #8]
0062dcf4:  mov      x9, #-8
0062dcf8:  fmov     d21, x11
0062dcfc:  csinc    x10, x6, x11, hi
0062dd00:  fmov     d24, x9
0062dd04:  orr      x19, x11, #8
0062dd08:  and      x10, x10, #0xfffffffffffffff8
0062dd0c:  add      x16, x11, #0x38
0062dd10:  stp      x12, x19, [sp, #0xa8]
0062dd14:  sub      x12, x12, x13
0062dd18:  sub      x24, x10, x11
0062dd1c:  add      x25, x11, #0x20
0062dd20:  mov      x11, x15
0062dd24:  str      q2, [sp, #0x50]
0062dd28:  stp      x12, x13, [sp, #0x10]
0062dd2c:  stp      x15, x16, [sp, #0x20]
0062dd30:  b        #0x62ddfc
0062dd34:  ldp      d2, d3, [x29, #-0x90]
0062dd38:  ldur     x8, [x29, #-0xa8]
0062dd3c:  ldp      d4, d5, [x29, #-0x80]
0062dd40:  ldr      x19, [sp, #0xb0]
0062dd44:  ldp      d6, d19, [x29, #-0x70]
0062dd48:  ldp      d20, d25, [x29, #-0x60]
0062dd4c:  mov      v2.d[1], v4.d[0]
0062dd50:  mov      v3.d[1], v5.d[0]
0062dd54:  mov      v6.d[1], v20.d[0]
0062dd58:  mov      v19.d[1], v25.d[0]
0062dd5c:  eor      v2.16b, v2.16b, v0.16b
0062dd60:  eor      v3.16b, v3.16b, v0.16b
0062dd64:  eor      v4.16b, v6.16b, v0.16b
0062dd68:  eor      v5.16b, v19.16b, v0.16b
0062dd6c:  zip1     v6.16b, v2.16b, v3.16b
0062dd70:  zip2     v2.16b, v2.16b, v3.16b
0062dd74:  zip1     v3.16b, v4.16b, v5.16b
0062dd78:  zip2     v4.16b, v4.16b, v5.16b
0062dd7c:  zip1     v5.8h, v6.8h, v2.8h
0062dd80:  zip2     v2.8h, v6.8h, v2.8h
0062dd84:  zip1     v19.8h, v3.8h, v4.8h
0062dd88:  zip2     v3.8h, v3.8h, v4.8h
0062dd8c:  zip1     v4.4s, v5.4s, v19.4s
0062dd90:  zip2     v5.4s, v5.4s, v19.4s
0062dd94:  zip1     v6.4s, v2.4s, v3.4s
0062dd98:  zip2     v2.4s, v2.4s, v3.4s
0062dd9c:  uaddlp   v3.8h, v4.16b
0062dda0:  uaddlp   v19.8h, v5.16b
0062dda4:  uaddlp   v20.8h, v6.16b
0062dda8:  uaddlp   v25.8h, v2.16b
0062ddac:  stp      q4, q5, [x0]
0062ddb0:  stp      q6, q2, [x0, #0x20]
0062ddb4:  add      x0, x0, #0x40
0062ddb8:  uaddlp   v26.4s, v3.8h
0062ddbc:  uaddlp   v27.4s, v19.8h
0062ddc0:  uaddlp   v28.4s, v20.8h
0062ddc4:  uaddlp   v29.4s, v25.8h
0062ddc8:  rev64    v26.4s, v26.4s
0062ddcc:  rev64    v27.4s, v27.4s
0062ddd0:  rev64    v28.4s, v28.4s
0062ddd4:  rev64    v29.4s, v29.4s
0062ddd8:  uadalp   v26.4s, v3.8h
0062dddc:  uadalp   v27.4s, v19.8h
0062dde0:  uadalp   v28.4s, v20.8h
0062dde4:  uadalp   v29.4s, v25.8h
0062dde8:  uzp1     v3.4s, v26.4s, v27.4s
0062ddec:  uzp1     v19.4s, v28.4s, v29.4s
0062ddf0:  add      v22.4s, v3.4s, v22.4s
0062ddf4:  add      v23.4s, v19.4s, v23.4s
0062ddf8:  cbz      x4, #0x62e2c4
0062ddfc:  ldur     x12, [x29, #-0xb0]
0062de00:  add      x10, x8, x2
0062de04:  add      x9, x8, x3
0062de08:  add      x17, x8, x11
0062de0c:  subs     x13, x4, #8
0062de10:  add      x15, x8, x22
0062de14:  add      x7, x8, x12
0062de18:  ldr      x12, [sp, #0xb8]
0062de1c:  add      x12, x8, x12
0062de20:  b.lo     #0x62de4c
0062de24:  ldr      x1, [sp, #0xa0]
0062de28:  add      x20, x8, x14
0062de2c:  mov      x4, x13
0062de30:  add      x21, x8, x1
0062de34:  ldr      x13, [sp, #0xa8]
0062de38:  sub      x23, x29, #0x90
0062de3c:  stur     x20, [x29, #-0xa8]
0062de40:  cmp      x13, #0x20
0062de44:  b.hs     #0x62dea4
0062de48:  b        #0x62e24c
0062de4c:  cmp      x4, #1
0062de50:  mov      x21, x16
0062de54:  mov      x20, x8
0062de58:  csel     x10, x16, x10, eq
0062de5c:  cmp      x4, #2
0062de60:  stp      q0, q0, [x29, #-0x90]
0062de64:  csel     x9, x9, x16, hi
0062de68:  cmp      x4, #3
0062de6c:  stp      q0, q0, [x29, #-0x70]
0062de70:  csel     x17, x17, x16, hi
0062de74:  cmp      x4, #4
0062de78:  csel     x15, x15, x16, hi
0062de7c:  cmp      x4, #5
0062de80:  csel     x7, x7, x16, hi
0062de84:  cmp      x4, #7
0062de88:  mov      x4, xzr
0062de8c:  csel     x12, x12, x16, eq
0062de90:  ldr      x13, [sp, #0xa8]
0062de94:  sub      x23, x29, #0x90
0062de98:  stur     x8, [x29, #-0xa8]
0062de9c:  cmp      x13, #0x20
0062dea0:  b.lo     #0x62e24c
0062dea4:  fmov     d25, x12
0062dea8:  fmov     d30, x17
0062deac:  ldr      q2, [sp, #0x90]
0062deb0:  fmov     d8, x9
0062deb4:  fmov     d26, x7
0062deb8:  mov      w13, #8
0062debc:  fmov     d9, x8
0062dec0:  fmov     d11, x10
0062dec4:  fmov     d31, x15
0062dec8:  mov      v10.16b, v25.16b
0062decc:  mov      v28.16b, v30.16b
0062ded0:  mov      v30.d[1], x8
0062ded4:  mov      v29.16b, v8.16b
0062ded8:  mov      v8.d[1], x8
0062dedc:  mov      v26.d[1], x12
0062dee0:  mov      v11.d[1], x9
0062dee4:  mov      v9.d[1], x10
0062dee8:  mov      v31.d[1], x7
0062deec:  mov      v10.d[1], x8
0062def0:  mov      v28.d[1], x15
0062def4:  dup      v27.2d, x13
0062def8:  adrp     x13, #0x200000
0062defc:  mov      v29.d[1], x17
0062df00:  sub      v12.2d, v7.2d, v26.2d
0062df04:  sub      v14.2d, v7.2d, v11.2d
0062df08:  sub      v5.2d, v17.2d, v9.2d
0062df0c:  sub      v19.2d, v17.2d, v31.2d
0062df10:  sub      v10.2d, v2.2d, v10.2d
0062df14:  ldp      q3, q2, [sp, #0x70]
0062df18:  sub      v13.2d, v7.2d, v28.2d
0062df1c:  sub      v6.2d, v18.2d, v28.2d
0062df20:  sub      v20.2d, v17.2d, v29.2d
0062df24:  cmhi     v12.2d, v27.2d, v12.2d
0062df28:  sub      v8.2d, v3.2d, v8.2d
0062df2c:  sub      v30.2d, v2.2d, v30.2d
0062df30:  cmhi     v5.2d, v27.2d, v5.2d
0062df34:  ldp      q2, q3, [sp, #0x50]
0062df38:  cmhi     v19.2d, v27.2d, v19.2d
0062df3c:  cmhi     v6.2d, v27.2d, v6.2d
0062df40:  cmhi     v20.2d, v27.2d, v20.2d
0062df44:  cmhi     v10.2d, v27.2d, v10.2d
0062df48:  cmhi     v14.2d, v27.2d, v14.2d
0062df4c:  cmhi     v13.2d, v27.2d, v13.2d
0062df50:  sub      v15.2d, v3.2d, v11.2d
0062df54:  sub      v4.2d, v2.2d, v9.2d
0062df58:  sub      v11.2d, v18.2d, v11.2d
0062df5c:  sub      v9.2d, v16.2d, v9.2d
0062df60:  sub      v2.2d, v16.2d, v31.2d
0062df64:  sub      v3.2d, v16.2d, v29.2d
0062df68:  cmhi     v8.2d, v27.2d, v8.2d
0062df6c:  cmhi     v30.2d, v27.2d, v30.2d
0062df70:  uzp1     v5.4s, v5.4s, v20.4s
0062df74:  uzp1     v20.4s, v13.4s, v12.4s
0062df78:  cmhi     v4.2d, v27.2d, v4.2d
0062df7c:  cmhi     v15.2d, v27.2d, v15.2d
0062df80:  cmhi     v11.2d, v27.2d, v11.2d
0062df84:  cmhi     v9.2d, v27.2d, v9.2d
0062df88:  cmhi     v3.2d, v27.2d, v3.2d
0062df8c:  cmhi     v2.2d, v27.2d, v2.2d
0062df90:  uzp1     v4.4s, v4.4s, v8.4s
0062df94:  ldr      q8, [x13, #0xa90]
0062df98:  uzp1     v30.4s, v15.4s, v30.4s
0062df9c:  uzp1     v6.4s, v11.4s, v6.4s
0062dfa0:  uzp1     v19.4s, v19.4s, v9.4s
0062dfa4:  uzp1     v2.4s, v3.4s, v2.4s
0062dfa8:  uzp1     v3.4s, v10.4s, v14.4s
0062dfac:  uzp1     v4.8h, v4.8h, v30.8h
0062dfb0:  uzp1     v5.8h, v6.8h, v5.8h
0062dfb4:  uzp1     v2.8h, v19.8h, v2.8h
0062dfb8:  uzp1     v3.8h, v3.8h, v20.8h
0062dfbc:  uzp1     v4.16b, v4.16b, v5.16b
0062dfc0:  uzp1     v2.16b, v2.16b, v3.16b
0062dfc4:  shl      v3.16b, v4.16b, #7
0062dfc8:  shl      v2.16b, v2.16b, #7
0062dfcc:  cmlt     v3.16b, v3.16b, #0
0062dfd0:  cmlt     v2.16b, v2.16b, #0
0062dfd4:  and      v3.16b, v3.16b, v8.16b
0062dfd8:  and      v2.16b, v2.16b, v8.16b
0062dfdc:  ext      v4.16b, v3.16b, v3.16b, #8
0062dfe0:  ext      v5.16b, v2.16b, v2.16b, #8
0062dfe4:  zip1     v3.16b, v3.16b, v4.16b
0062dfe8:  zip1     v2.16b, v2.16b, v5.16b
0062dfec:  addv     h3, v3.8h
0062dff0:  addv     h2, v2.8h
0062dff4:  fmov     w13, s3
0062dff8:  fmov     w1, s2
0062dffc:  orr      w13, w13, w1
0062e000:  tst      w13, #0xffff
0062e004:  b.ne     #0x62e24c
0062e008:  fmov     d30, x21
0062e00c:  mov      v2.16b, v25.16b
0062e010:  mov      x13, #-8
0062e014:  sub      v5.2d, v31.2d, v1.2d
0062e018:  sub      v6.2d, v29.2d, v1.2d
0062e01c:  sub      v19.2d, v26.2d, v1.2d
0062e020:  sub      v20.2d, v28.2d, v1.2d
0062e024:  dup      v26.2d, x13
0062e028:  mov      w13, #0x10
0062e02c:  mov      v3.16b, v30.16b
0062e030:  mov      v4.16b, v30.16b
0062e034:  mov      v2.d[1], x21
0062e038:  dup      v28.2d, x13
0062e03c:  mov      w13, #0x18
0062e040:  and      v19.16b, v19.16b, v26.16b
0062e044:  and      v6.16b, v6.16b, v26.16b
0062e048:  and      v5.16b, v5.16b, v26.16b
0062e04c:  mov      v3.d[1], x7
0062e050:  mov      v4.d[1], x15
0062e054:  and      v20.16b, v20.16b, v26.16b
0062e058:  sub      v2.2d, v2.2d, v1.2d
0062e05c:  cmeq     v5.2d, v5.2d, v27.2d
0062e060:  cmeq     v6.2d, v6.2d, v27.2d
0062e064:  cmeq     v20.2d, v20.2d, v28.2d
0062e068:  sub      v4.2d, v4.2d, v1.2d
0062e06c:  sub      v3.2d, v3.2d, v1.2d
0062e070:  and      v2.16b, v2.16b, v26.16b
0062e074:  uzp1     v5.4s, v6.4s, v5.4s
0062e078:  and      v3.16b, v3.16b, v26.16b
0062e07c:  and      v4.16b, v4.16b, v26.16b
0062e080:  dup      v26.2d, x13
0062e084:  cmeq     v2.2d, v2.2d, v27.2d
0062e088:  cmeq     v27.2d, v19.2d, v28.2d
0062e08c:  cmeq     v19.2d, v19.2d, v26.2d
0062e090:  ldp      q28, q26, [sp, #0x30]
0062e094:  cmeq     v4.2d, v4.2d, v28.2d
0062e098:  uzp1     v2.4s, v2.4s, v20.4s
0062e09c:  cmeq     v3.2d, v3.2d, v26.2d
0062e0a0:  uzp1     v4.4s, v27.4s, v4.4s
0062e0a4:  uzp1     v3.4s, v19.4s, v3.4s
0062e0a8:  uzp1     v2.8h, v5.8h, v2.8h
0062e0ac:  uzp1     v3.8h, v4.8h, v3.8h
0062e0b0:  uzp1     v2.16b, v2.16b, v3.16b
0062e0b4:  shl      v2.16b, v2.16b, #7
0062e0b8:  cmlt     v2.16b, v2.16b, #0
0062e0bc:  and      v2.16b, v2.16b, v8.16b
0062e0c0:  ext      v3.16b, v2.16b, v2.16b, #8
0062e0c4:  zip1     v2.16b, v2.16b, v3.16b
0062e0c8:  addv     h2, v2.8h
0062e0cc:  fmov     w13, s2
0062e0d0:  cbnz     w13, #0x62e24c
0062e0d4:  sub      x13, x10, x23
0062e0d8:  cmp      x13, #8
0062e0dc:  b.lo     #0x62e24c
0062e0e0:  sub      x13, x23, x8
0062e0e4:  cmp      x13, #8
0062e0e8:  b.lo     #0x62e24c
0062e0ec:  sub      x13, x9, x23
0062e0f0:  cmp      x13, #8
0062e0f4:  b.lo     #0x62e24c
0062e0f8:  sub      x13, x17, x23
0062e0fc:  cmp      x13, #8
0062e100:  b.lo     #0x62e24c
0062e104:  sub      x13, x15, x23
0062e108:  cmp      x13, #8
0062e10c:  b.lo     #0x62e24c
0062e110:  sub      x13, x7, x23
0062e114:  cmp      x13, #8
0062e118:  b.lo     #0x62e24c
0062e11c:  sub      x13, x12, x23
0062e120:  cmp      x13, #8
0062e124:  b.lo     #0x62e24c
0062e128:  sub      x13, x21, x23
0062e12c:  cmp      x13, #8
0062e130:  b.lo     #0x62e24c
0062e134:  sub      x1, x19, x8
0062e138:  cmp      x1, #8
0062e13c:  b.lo     #0x62e24c
0062e140:  sub      x1, x19, x10
0062e144:  cmp      x1, #8
0062e148:  b.lo     #0x62e24c
0062e14c:  sub      x1, x16, x21
0062e150:  cmp      x1, #8
0062e154:  b.lo     #0x62e24c
0062e158:  sub      v2.2d, v25.2d, v21.2d
0062e15c:  sub      v3.2d, v30.2d, v21.2d
0062e160:  adrp     x1, #0x200000
0062e164:  ldr      q4, [x1, #0x810]
0062e168:  and      v2.16b, v2.16b, v24.16b
0062e16c:  and      v3.16b, v3.16b, v24.16b
0062e170:  dup      v2.2d, v2.d[0]
0062e174:  dup      v3.2d, v3.d[0]
0062e178:  cmeq     v2.2d, v2.2d, v4.2d
0062e17c:  cmeq     v3.2d, v3.2d, v4.2d
0062e180:  orr      v2.16b, v2.16b, v3.16b
0062e184:  xtn      v2.2s, v2.2d
0062e188:  dup      v3.2s, v2.s[1]
0062e18c:  orr      v2.8b, v2.8b, v3.8b
0062e190:  fmov     w1, s2
0062e194:  tbnz     w1, #0, #0x62e24c
0062e198:  and      x13, x13, #0xfffffffffffffff8
0062e19c:  cmp      x13, #0x30
0062e1a0:  b.eq     #0x62e24c
0062e1a4:  ldr      x1, [sp, #0x10]
0062e1a8:  sub      x11, x29, #0x90
0062e1ac:  mov      x16, x14
0062e1b0:  mov      x14, x22
0062e1b4:  mov      x22, x3
0062e1b8:  mov      x23, xzr
0062e1bc:  add      x13, x21, x1
0062e1c0:  add      x19, x12, x1
0062e1c4:  add      x26, x7, x1
0062e1c8:  add      x28, x15, x1
0062e1cc:  add      x27, x17, x1
0062e1d0:  add      x20, x9, x1
0062e1d4:  add      x30, x10, x1
0062e1d8:  add      x1, x8, x1
0062e1dc:  ldr      d2, [x8, x23]
0062e1e0:  add      x3, x25, x23
0062e1e4:  str      d2, [x11, x23]
0062e1e8:  ldr      d2, [x10, x23]
0062e1ec:  stur     d2, [x3, #-0x18]
0062e1f0:  ldr      d2, [x9, x23]
0062e1f4:  stur     d2, [x3, #-0x10]
0062e1f8:  ldr      d2, [x17, x23]
0062e1fc:  stur     d2, [x3, #-8]
0062e200:  ldr      d2, [x15, x23]
0062e204:  str      d2, [x3]
0062e208:  ldr      d2, [x7, x23]
0062e20c:  str      d2, [x3, #8]
0062e210:  ldr      d2, [x12, x23]
0062e214:  str      d2, [x3, #0x10]
0062e218:  ldr      d2, [x21, x23]
0062e21c:  add      x23, x23, #8
0062e220:  cmp      x24, x23
0062e224:  str      d2, [x3, #0x18]
0062e228:  b.ne     #0x62e1dc
0062e22c:  mov      x3, x22
0062e230:  mov      x22, x14
0062e234:  mov      x14, x16
0062e238:  ldp      x11, x16, [sp, #0x20]
0062e23c:  ldr      x23, [sp, #8]
0062e240:  ldr      x8, [sp, #0x18]
0062e244:  cbnz     x8, #0x62e26c
0062e248:  b        #0x62dd34
0062e24c:  mov      x13, x21
0062e250:  mov      x19, x12
0062e254:  mov      x26, x7
0062e258:  mov      x28, x15
0062e25c:  mov      x27, x17
0062e260:  mov      x20, x9
0062e264:  mov      x30, x10
0062e268:  mov      x1, x8
0062e26c:  ldrb     w8, [x1], #1
0062e270:  strb     w8, [x23]
0062e274:  ldrb     w8, [x30], #1
0062e278:  strb     w8, [x23, #8]
0062e27c:  ldrb     w8, [x20], #1
0062e280:  strb     w8, [x23, #0x10]
0062e284:  ldrb     w8, [x27], #1
0062e288:  strb     w8, [x23, #0x18]
0062e28c:  ldrb     w8, [x28], #1
0062e290:  strb     w8, [x23, #0x20]
0062e294:  ldrb     w8, [x26], #1
0062e298:  strb     w8, [x23, #0x28]
0062e29c:  ldrb     w8, [x19], #1
0062e2a0:  strb     w8, [x23, #0x30]
0062e2a4:  ldrb     w8, [x13], #1
0062e2a8:  strb     w8, [x23, #0x38]
0062e2ac:  add      x23, x23, #1
0062e2b0:  cmp      x23, x6
0062e2b4:  b.lo     #0x62e26c
0062e2b8:  b        #0x62dd34
0062e2bc:  movi     v23.2d, #0000000000000000
0062e2c0:  movi     v22.2d, #0000000000000000
0062e2c4:  ldr      x20, [sp]
0062e2c8:  stp      q22, q23, [x5]
0062e2cc:  ldr      x8, [x20, #0x28]
0062e2d0:  ldur     x9, [x29, #-0x50]
0062e2d4:  cmp      x8, x9
0062e2d8:  b.ne     #0x62e30c
0062e2dc:  ldp      x20, x19, [sp, #0x1c0]
0062e2e0:  ldp      x22, x21, [sp, #0x1b0]
0062e2e4:  ldp      x24, x23, [sp, #0x1a0]
0062e2e8:  ldp      x26, x25, [sp, #0x190]
0062e2ec:  ldp      x28, x27, [sp, #0x180]
0062e2f0:  ldp      x29, x30, [sp, #0x170]
0062e2f4:  ldp      d9, d8, [sp, #0x160]
0062e2f8:  ldp      d11, d10, [sp, #0x150]
0062e2fc:  ldp      d13, d12, [sp, #0x140]
0062e300:  ldp      d15, d14, [sp, #0x130]
0062e304:  add      sp, sp, #0x1d0
0062e308:  ret      
0062e30c:  bl       #0x759db0

