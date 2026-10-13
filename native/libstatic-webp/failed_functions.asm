; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 00139e20  FUN_00139e20  (308 bytes) =====
00139e20:  cmp      w2, #1
00139e24:  b.lt     #0x139ea4
00139e28:  cmp      w2, #4
00139e2c:  mov      w8, w2
00139e30:  b.hs     #0x139ea8
00139e34:  mov      x9, xzr
00139e38:  lsl      x13, x9, #2
00139e3c:  mov      w10, #-0xff0100
00139e40:  mov      w11, #0xff00ff
00139e44:  sub      x8, x8, x9
00139e48:  add      x12, x3, x13
00139e4c:  add      x9, x1, x13
00139e50:  add      x13, x0, x13
00139e54:  ldp      w14, w15, [x9, #-4]
00139e58:  ldr      w17, [x13], #4
00139e5c:  subs     x8, x8, #1
00139e60:  add      x9, x9, #4
00139e64:  eor      w16, w15, w14
00139e68:  and      w14, w15, w14
00139e6c:  and      w15, w17, w10
00139e70:  lsr      w16, w16, #1
00139e74:  and      w17, w17, w11
00139e78:  and      w16, w16, #0x7f7f7f7f
00139e7c:  add      w14, w16, w14
00139e80:  and      w16, w14, w10
00139e84:  and      w14, w14, w11
00139e88:  add      w15, w16, w15
00139e8c:  add      w14, w14, w17
00139e90:  and      w15, w15, w10
00139e94:  and      w14, w14, w11
00139e98:  orr      w14, w15, w14
00139e9c:  str      w14, [x12], #4
00139ea0:  b.ne     #0x139e54
00139ea4:  ret      
00139ea8:  lsl      x9, x8, #2
00139eac:  sub      x12, x1, #4
00139eb0:  add      x10, x0, x9
00139eb4:  add      x11, x3, x9
00139eb8:  add      x9, x1, x9
00139ebc:  cmp      x10, x3
00139ec0:  ccmp     x11, x0, #0, hi
00139ec4:  cset     w10, hi
00139ec8:  cmp      x12, x11
00139ecc:  ccmp     x9, x3, #0, lo
00139ed0:  mov      x9, xzr
00139ed4:  b.hi     #0x139e38
00139ed8:  tbnz     w10, #0, #0x139e38
00139edc:  movi     v0.16b, #0x7f
00139ee0:  movi     v1.2d, #0xff00ff00ff00ff00
00139ee4:  and      x9, x8, #0x7ffffffc
00139ee8:  mov      x10, x9
00139eec:  mov      x11, x0
00139ef0:  mov      x12, x1
00139ef4:  mov      x13, x3
00139ef8:  ldur     q2, [x12, #-4]
00139efc:  ldr      q3, [x12], #0x10
00139f00:  subs     x10, x10, #4
00139f04:  eor      v4.16b, v3.16b, v2.16b
00139f08:  and      v2.16b, v3.16b, v2.16b
00139f0c:  ldr      q3, [x11], #0x10
00139f10:  ushr     v4.4s, v4.4s, #1
00139f14:  and      v4.16b, v4.16b, v0.16b
00139f18:  add      v2.4s, v4.4s, v2.4s
00139f1c:  mov      v4.16b, v3.16b
00139f20:  bic      v3.8h, #0xff, lsl #8
00139f24:  bic      v4.8h, #0xff
00139f28:  mov      v5.16b, v2.16b
00139f2c:  bic      v2.8h, #0xff, lsl #8
00139f30:  bic      v5.8h, #0xff
00139f34:  add      v2.4s, v2.4s, v3.4s
00139f38:  add      v4.4s, v5.4s, v4.4s
00139f3c:  bit      v2.16b, v4.16b, v1.16b
00139f40:  str      q2, [x13], #0x10
00139f44:  b.ne     #0x139ef8
00139f48:  cmp      x9, x8
00139f4c:  b.ne     #0x139e38
00139f50:  b        #0x139ea4

; ===== 00139f54  FUN_00139f54  (312 bytes) =====
00139f54:  cmp      w2, #1
00139f58:  b.lt     #0x139fdc
00139f5c:  cmp      w2, #4
00139f60:  mov      w8, w2
00139f64:  b.hs     #0x139fe0
00139f68:  mov      x9, xzr
00139f6c:  lsl      x13, x9, #2
00139f70:  mov      w10, #-0xff0100
00139f74:  mov      w11, #0xff00ff
00139f78:  sub      x8, x8, x9
00139f7c:  add      x14, x13, x1
00139f80:  add      x12, x3, x13
00139f84:  add      x13, x0, x13
00139f88:  add      x9, x14, #4
00139f8c:  ldp      w14, w15, [x9, #-4]
00139f90:  ldr      w17, [x13], #4
00139f94:  subs     x8, x8, #1
00139f98:  add      x9, x9, #4
00139f9c:  eor      w16, w15, w14
00139fa0:  and      w14, w15, w14
00139fa4:  and      w15, w17, w10
00139fa8:  lsr      w16, w16, #1
00139fac:  and      w17, w17, w11
00139fb0:  and      w16, w16, #0x7f7f7f7f
00139fb4:  add      w14, w16, w14
00139fb8:  and      w16, w14, w10
00139fbc:  and      w14, w14, w11
00139fc0:  add      w15, w16, w15
00139fc4:  add      w14, w14, w17
00139fc8:  and      w15, w15, w10
00139fcc:  and      w14, w14, w11
00139fd0:  orr      w14, w15, w14
00139fd4:  str      w14, [x12], #4
00139fd8:  b.ne     #0x139f8c
00139fdc:  ret      
00139fe0:  lsl      x9, x8, #2
00139fe4:  add      x10, x0, x9
00139fe8:  add      x11, x3, x9
00139fec:  add      x9, x1, x9
00139ff0:  cmp      x10, x3
00139ff4:  add      x9, x9, #4
00139ff8:  ccmp     x11, x0, #0, hi
00139ffc:  cset     w10, hi
0013a000:  cmp      x11, x1
0013a004:  ccmp     x9, x3, #0, hi
0013a008:  mov      x9, xzr
0013a00c:  b.hi     #0x139f6c
0013a010:  tbnz     w10, #0, #0x139f6c
0013a014:  movi     v0.16b, #0x7f
0013a018:  movi     v1.2d, #0xff00ff00ff00ff00
0013a01c:  and      x9, x8, #0x7ffffffc
0013a020:  add      x10, x1, #4
0013a024:  mov      x11, x9
0013a028:  mov      x12, x0
0013a02c:  mov      x13, x3
0013a030:  ldur     q2, [x10, #-4]
0013a034:  ldr      q3, [x10], #0x10
0013a038:  subs     x11, x11, #4
0013a03c:  eor      v4.16b, v3.16b, v2.16b
0013a040:  and      v2.16b, v3.16b, v2.16b
0013a044:  ldr      q3, [x12], #0x10
0013a048:  ushr     v4.4s, v4.4s, #1
0013a04c:  and      v4.16b, v4.16b, v0.16b
0013a050:  add      v2.4s, v4.4s, v2.4s
0013a054:  mov      v4.16b, v3.16b
0013a058:  bic      v3.8h, #0xff, lsl #8
0013a05c:  bic      v4.8h, #0xff
0013a060:  mov      v5.16b, v2.16b
0013a064:  bic      v2.8h, #0xff, lsl #8
0013a068:  bic      v5.8h, #0xff
0013a06c:  add      v2.4s, v2.4s, v3.4s
0013a070:  add      v4.4s, v5.4s, v4.4s
0013a074:  bit      v2.16b, v4.16b, v1.16b
0013a078:  str      q2, [x13], #0x10
0013a07c:  b.ne     #0x13a030
0013a080:  cmp      x9, x8
0013a084:  b.ne     #0x139f6c
0013a088:  b        #0x139fdc

; ===== 00146f40  FUN_00146f40  (5932 bytes) =====
00146f40:  stp      d15, d14, [sp, #-0xa0]!
00146f44:  stp      d13, d12, [sp, #0x10]
00146f48:  stp      d11, d10, [sp, #0x20]
00146f4c:  stp      d9, d8, [sp, #0x30]
00146f50:  stp      x29, x30, [sp, #0x40]
00146f54:  stp      x28, x27, [sp, #0x50]
00146f58:  stp      x26, x25, [sp, #0x60]
00146f5c:  stp      x24, x23, [sp, #0x70]
00146f60:  stp      x22, x21, [sp, #0x80]
00146f64:  stp      x20, x19, [sp, #0x90]
00146f68:  add      x29, sp, #0x40
00146f6c:  sub      sp, sp, #0x190
00146f70:  mrs      x8, tpidr_el0
00146f74:  mov      x12, x1
00146f78:  mov      x23, x5
00146f7c:  str      x8, [sp, #0xd0]
00146f80:  mov      w17, #0x1913
00146f84:  mov      x21, x6
00146f88:  ldr      x8, [x8, #0x28]
00146f8c:  mov      x24, x3
00146f90:  mov      x19, x7
00146f94:  mov      x25, x4
00146f98:  ldr      w27, [x29, #0x60]
00146f9c:  stur     x8, [x29, #-0x50]
00146fa0:  ldrb     w8, [x2]
00146fa4:  ldrb     w9, [x4]
00146fa8:  ldrb     w10, [x3]
00146fac:  ldrb     w11, [x5]
00146fb0:  str      x0, [sp, #0xe0]
00146fb4:  mov      w5, #0x6625
00146fb8:  add      w9, w9, w8
00146fbc:  mov      w4, #0x3408
00146fc0:  str      w27, [sp, #0xc0]
00146fc4:  add      w11, w11, w10
00146fc8:  lsr      w13, w9, #1
00146fcc:  mov      w9, #0x4a85
00146fd0:  lsr      w11, w11, #1
00146fd4:  add      w27, w27, #1
00146fd8:  add      w16, w13, #1
00146fdc:  ldrb     w13, [x0]
00146fe0:  add      w14, w11, #1
00146fe4:  add      w11, w16, w8
00146fe8:  mov      w8, #-0x379a
00146fec:  add      w10, w14, w10
00146ff0:  lsr      w0, w11, #1
00146ff4:  mul      w15, w13, w9
00146ff8:  lsr      w1, w10, #1
00146ffc:  mov      w11, #0x379a
00147000:  mov      w10, #0xf8
00147004:  mul      w3, w0, w17
00147008:  mov      w13, #0x2204
0014700c:  mul      w6, w1, w5
00147010:  lsr      w7, w15, #8
00147014:  mov      w5, #0x811a
00147018:  mul      w20, w1, w4
0014701c:  mov      w15, #-0x2204
00147020:  mov      w1, #-0x4515
00147024:  lsr      w26, w3, #8
00147028:  mul      w22, w0, w5
0014702c:  mov      w0, #0xff
00147030:  add      w6, w7, w6, lsr #8
00147034:  mov      w3, #0x4515
00147038:  add      w20, w26, w20, lsr #8
0014703c:  sbfx     x26, x27, #1, #0x1f
00147040:  add      w27, w6, w8
00147044:  cmp      w6, w11
00147048:  add      w22, w7, w22, lsr #8
0014704c:  lsr      w6, w27, #6
00147050:  sub      w7, w7, w20
00147054:  csel     w20, wzr, w10, lo
00147058:  cmp      w27, #4, lsl #12
0014705c:  add      w27, w7, w13
00147060:  csel     w20, w6, w20, lo
00147064:  cmp      w7, w15
00147068:  lsr      w6, w27, #6
0014706c:  csel     w7, wzr, w0, lt
00147070:  cmp      w27, #4, lsl #12
00147074:  sub      x27, x26, #1
00147078:  asr      w8, w27, #3
0014707c:  csel     w7, w6, w7, lo
00147080:  cmp      w22, w3
00147084:  add      w22, w22, w1
00147088:  mov      w6, #0x1f
0014708c:  and      x27, x27, #0xfffffffffffffff8
00147090:  csel     w28, wzr, w6, lo
00147094:  cmp      w22, #4, lsl #12
00147098:  lsr      w22, w22, #9
0014709c:  and      w20, w20, #0xf8
001470a0:  stur     x8, [x29, #-0xd0]
001470a4:  lsl      w30, w8, #4
001470a8:  lsl      w8, w7, #3
001470ac:  sub      x26, x26, x27
001470b0:  orr      w7, w20, w7, lsr #5
001470b4:  str      x26, [sp, #0xb0]
001470b8:  csel     w22, w22, w28, lo
001470bc:  sxtw     x26, w30
001470c0:  and      w8, w8, #0xe0
001470c4:  sub      x20, x29, #0x9f
001470c8:  strb     w7, [x21]
001470cc:  orr      w8, w8, w22
001470d0:  add      x7, x20, #0xf
001470d4:  mov      x20, x12
001470d8:  and      x27, x7, #0xfffffffffffffff0
001470dc:  strb     w8, [x21, #1]
001470e0:  orr      x8, x26, #1
001470e4:  str      x26, [sp, #0xd8]
001470e8:  stur     x8, [x29, #-0xe0]
001470ec:  cbz      x12, #0x1471a4
001470f0:  ldrb     w8, [x25]
001470f4:  ldrb     w7, [x23]
001470f8:  add      w8, w16, w8
001470fc:  ldrb     w16, [x20]
00147100:  add      w14, w14, w7
00147104:  lsr      w8, w8, #1
00147108:  lsr      w14, w14, #1
0014710c:  mul      w12, w16, w9
00147110:  mov      w9, #0x6625
00147114:  mul      w16, w8, w17
00147118:  mul      w9, w14, w9
0014711c:  lsr      w12, w12, #8
00147120:  mul      w14, w14, w4
00147124:  lsr      w16, w16, #8
00147128:  mul      w8, w8, w5
0014712c:  add      w9, w12, w9, lsr #8
00147130:  add      w14, w16, w14, lsr #8
00147134:  mov      w16, #-0x379a
00147138:  add      w16, w9, w16
0014713c:  cmp      w9, w11
00147140:  add      w8, w12, w8, lsr #8
00147144:  lsr      w9, w16, #6
00147148:  sub      w11, w12, w14
0014714c:  csel     w10, wzr, w10, lo
00147150:  cmp      w16, #4, lsl #12
00147154:  add      w13, w11, w13
00147158:  add      w12, w8, w1
0014715c:  csel     w9, w9, w10, lo
00147160:  lsr      w10, w13, #6
00147164:  cmp      w11, w15
00147168:  csel     w11, wzr, w0, lt
0014716c:  cmp      w13, #4, lsl #12
00147170:  csel     w10, w10, w11, lo
00147174:  lsr      w11, w12, #9
00147178:  cmp      w8, w3
0014717c:  and      w8, w9, #0xf8
00147180:  lsl      w9, w10, #3
00147184:  csel     w13, wzr, w6, lo
00147188:  cmp      w12, #4, lsl #12
0014718c:  orr      w8, w8, w10, lsr #5
00147190:  csel     w10, w11, w13, lo
00147194:  and      w9, w9, #0xe0
00147198:  orr      w9, w9, w10
0014719c:  strb     w8, [x19]
001471a0:  strb     w9, [x19, #1]
001471a4:  ldur     x0, [x29, #-0xd0]
001471a8:  cmp      w0, #1
001471ac:  b.lt     #0x1473e4
001471b0:  mov      w9, #0x11a
001471b4:  mov      w11, #0xc866
001471b8:  mov      w12, #0x2204
001471bc:  dup      v0.8h, w9
001471c0:  mov      w9, #0xbaeb
001471c4:  adrp     x10, #0x114000
001471c8:  dup      v1.8h, w11
001471cc:  dup      v2.8h, w12
001471d0:  dup      v3.8h, w9
001471d4:  ldr      d4, [x10, #0x688]
001471d8:  ldr      x1, [sp, #0xe0]
001471dc:  mov      x8, xzr
001471e0:  mov      w9, #-0xe
001471e4:  add      x10, x27, #0x20
001471e8:  add      x11, x27, #0x10
001471ec:  add      x12, x27, #0x30
001471f0:  b        #0x147210
001471f4:  add      x8, x8, #1
001471f8:  add      x2, x2, #8
001471fc:  add      x25, x25, #8
00147200:  cmp      x8, x0
00147204:  add      x24, x24, #8
00147208:  add      x23, x23, #8
0014720c:  b.eq     #0x1473e4
00147210:  ldr      d5, [x2]
00147214:  ldur     d6, [x2, #1]
00147218:  mov      w16, #1
0014721c:  ldr      d7, [x25]
00147220:  ldur     d16, [x25, #1]
00147224:  orr      x13, x16, x8, lsl #4
00147228:  mov      x14, xzr
0014722c:  uaddl    v17.8h, v16.8b, v5.8b
00147230:  uaddl    v18.8h, v7.8b, v6.8b
00147234:  add      x15, x1, x13
00147238:  add      v19.8h, v17.8h, v18.8h
0014723c:  add      v18.8h, v18.8h, v18.8h
00147240:  add      v17.8h, v17.8h, v17.8h
00147244:  add      v18.8h, v19.8h, v18.8h
00147248:  add      v17.8h, v19.8h, v17.8h
0014724c:  shrn     v18.8b, v18.8h, #3
00147250:  shrn     v17.8b, v17.8h, #3
00147254:  urhadd   v19.8b, v5.8b, v18.8b
00147258:  urhadd   v20.8b, v6.8b, v17.8b
0014725c:  urhadd   v5.8b, v7.8b, v17.8b
00147260:  urhadd   v6.8b, v16.8b, v18.8b
00147264:  st2      {v19.8b, v20.8b}, [x27]
00147268:  st2      {v5.8b, v6.8b}, [x10]
0014726c:  ldr      d5, [x24]
00147270:  ldur     d6, [x24, #1]
00147274:  ldr      d7, [x23]
00147278:  ldur     d16, [x23, #1]
0014727c:  uaddl    v18.8h, v7.8b, v6.8b
00147280:  uaddl    v17.8h, v16.8b, v5.8b
00147284:  add      v19.8h, v17.8h, v18.8h
00147288:  add      v18.8h, v18.8h, v18.8h
0014728c:  add      v17.8h, v17.8h, v17.8h
00147290:  add      v18.8h, v19.8h, v18.8h
00147294:  add      v17.8h, v19.8h, v17.8h
00147298:  shrn     v18.8b, v18.8h, #3
0014729c:  shrn     v17.8b, v17.8h, #3
001472a0:  urhadd   v19.8b, v5.8b, v18.8b
001472a4:  urhadd   v20.8b, v6.8b, v17.8b
001472a8:  urhadd   v5.8b, v7.8b, v17.8b
001472ac:  urhadd   v6.8b, v16.8b, v18.8b
001472b0:  st2      {v19.8b, v20.8b}, [x11]
001472b4:  st2      {v5.8b, v6.8b}, [x12]
001472b8:  ldr      d5, [x15, x14]
001472bc:  add      x17, x27, x14
001472c0:  orr      w14, w14, w13
001472c4:  ldr      d6, [x17]
001472c8:  ldr      d7, [x17, #0x10]
001472cc:  lsl      w14, w14, #1
001472d0:  ushll    v5.8h, v5.8b, #7
001472d4:  mov      w17, w16
001472d8:  mov      w16, wzr
001472dc:  ushll    v6.8h, v6.8b, #7
001472e0:  ushll    v7.8h, v7.8b, #7
001472e4:  and      x14, x14, x9
001472e8:  sqdmulh  v5.8h, v5.8h, v4.h[0]
001472ec:  sqdmulh  v16.8h, v6.8h, v4.h[2]
001472f0:  sqdmulh  v17.8h, v7.8h, v4.h[3]
001472f4:  sqdmulh  v18.8h, v6.8h, v0.8h
001472f8:  sqdmulh  v7.8h, v7.8h, v4.h[1]
001472fc:  sqadd    v19.8h, v5.8h, v3.8h
00147300:  sqadd    v20.8h, v5.8h, v2.8h
00147304:  sqadd    v5.8h, v5.8h, v1.8h
00147308:  sqadd    v16.8h, v16.8h, v17.8h
0014730c:  sqadd    v17.8h, v18.8h, v19.8h
00147310:  sqadd    v5.8h, v7.8h, v5.8h
00147314:  sqsub    v16.8h, v20.8h, v16.8h
00147318:  sqadd    v6.8h, v17.8h, v6.8h
0014731c:  sqshrun  v5.8b, v5.8h, #6
00147320:  sqshrun  v7.8b, v16.8h, #6
00147324:  sqshrun  v6.8b, v6.8h, #6
00147328:  shl      v16.8b, v7.8b, #3
0014732c:  sri      v5.8b, v7.8b, #5
00147330:  sri      v16.8b, v6.8b, #3
00147334:  zip1     v5.16b, v5.16b, v16.16b
00147338:  str      q5, [x21, x14]
0014733c:  mov      w14, #8
00147340:  tbnz     w17, #0, #0x1472b8
00147344:  cbz      x20, #0x1471f4
00147348:  mov      x16, xzr
0014734c:  add      x14, x20, x13
00147350:  mov      w15, #1
00147354:  ldr      d5, [x14, x16]
00147358:  add      x17, x10, x16
0014735c:  orr      w16, w16, w13
00147360:  ldr      d6, [x17]
00147364:  ldr      d7, [x17, #0x10]
00147368:  lsl      w16, w16, #1
0014736c:  ushll    v5.8h, v5.8b, #7
00147370:  mov      w17, w15
00147374:  ushll    v6.8h, v6.8b, #7
00147378:  ushll    v7.8h, v7.8b, #7
0014737c:  and      x15, x16, x9
00147380:  mov      w16, #8
00147384:  sqdmulh  v5.8h, v5.8h, v4.h[0]
00147388:  sqdmulh  v16.8h, v6.8h, v4.h[2]
0014738c:  sqdmulh  v17.8h, v7.8h, v4.h[3]
00147390:  sqdmulh  v18.8h, v6.8h, v0.8h
00147394:  sqdmulh  v7.8h, v7.8h, v4.h[1]
00147398:  sqadd    v19.8h, v5.8h, v3.8h
0014739c:  sqadd    v20.8h, v5.8h, v2.8h
001473a0:  sqadd    v5.8h, v5.8h, v1.8h
001473a4:  sqadd    v16.8h, v16.8h, v17.8h
001473a8:  sqadd    v17.8h, v18.8h, v19.8h
001473ac:  sqadd    v5.8h, v7.8h, v5.8h
001473b0:  sqsub    v16.8h, v20.8h, v16.8h
001473b4:  sqadd    v6.8h, v17.8h, v6.8h
001473b8:  sqshrun  v5.8b, v5.8h, #6
001473bc:  sqshrun  v7.8b, v16.8h, #6
001473c0:  sqshrun  v6.8b, v6.8h, #6
001473c4:  shl      v16.8b, v7.8b, #3
001473c8:  sri      v5.8b, v7.8b, #5
001473cc:  sri      v16.8b, v6.8b, #3
001473d0:  zip1     v5.16b, v5.16b, v16.16b
001473d4:  str      q5, [x19, x15]
001473d8:  mov      w15, wzr
001473dc:  tbnz     w17, #0, #0x147354
001473e0:  b        #0x1471f4
001473e4:  ldr      x22, [sp, #0xb0]
001473e8:  sub      x0, x29, #0xa8
001473ec:  mov      x1, x2
001473f0:  mov      w3, #9
001473f4:  str      x20, [sp, #0xa8]
001473f8:  mov      w20, #9
001473fc:  mov      w8, w22
00147400:  sxtw     x26, w8
00147404:  mov      x2, x26
00147408:  bl       #0x175670
0014740c:  sub      x0, x29, #0xb8
00147410:  mov      x1, x25
00147414:  mov      x2, x26
00147418:  mov      w3, #9
0014741c:  bl       #0x175670
00147420:  sub      w8, w20, w22
00147424:  sub      x28, x22, #1
00147428:  sub      x22, x29, #0xa8
0014742c:  sxtw     x25, w8
00147430:  sub      x8, x29, #0xa8
00147434:  ldrb     w1, [x8, x28]
00147438:  add      x0, x8, x26
0014743c:  mov      x2, x25
00147440:  bl       #0x175500
00147444:  sub      x8, x29, #0xb8
00147448:  mov      x2, x25
0014744c:  ldrb     w1, [x8, x28]
00147450:  add      x0, x8, x26
00147454:  bl       #0x175500
00147458:  ldur     d0, [x29, #-0xa8]
0014745c:  ldur     d1, [x29, #-0xa7]
00147460:  mov      x20, x27
00147464:  ldur     d2, [x29, #-0xb8]
00147468:  ldur     d3, [x29, #-0xb7]
0014746c:  add      x8, x27, #0x20
00147470:  sub      x0, x29, #0xa8
00147474:  mov      x1, x24
00147478:  mov      x2, x26
0014747c:  uaddl    v4.8h, v3.8b, v0.8b
00147480:  uaddl    v5.8h, v2.8b, v1.8b
00147484:  mov      w3, #9
00147488:  add      v6.8h, v4.8h, v5.8h
0014748c:  add      v5.8h, v5.8h, v5.8h
00147490:  add      v4.8h, v4.8h, v4.8h
00147494:  add      v5.8h, v6.8h, v5.8h
00147498:  add      v4.8h, v6.8h, v4.8h
0014749c:  shrn     v5.8b, v5.8h, #3
001474a0:  shrn     v4.8b, v4.8h, #3
001474a4:  urhadd   v6.8b, v0.8b, v5.8b
001474a8:  urhadd   v7.8b, v1.8b, v4.8b
001474ac:  urhadd   v0.8b, v2.8b, v4.8b
001474b0:  urhadd   v1.8b, v3.8b, v5.8b
001474b4:  st2      {v6.8b, v7.8b}, [x20], #16
001474b8:  str      x8, [sp, #8]
001474bc:  st2      {v0.8b, v1.8b}, [x8]
001474c0:  bl       #0x175670
001474c4:  sub      x0, x29, #0xb8
001474c8:  mov      x1, x23
001474cc:  mov      x2, x26
001474d0:  mov      w3, #9
001474d4:  bl       #0x175670
001474d8:  ldrb     w1, [x22, x28]
001474dc:  add      x0, x22, x26
001474e0:  mov      x2, x25
001474e4:  bl       #0x175500
001474e8:  sub      x8, x29, #0xb8
001474ec:  mov      x2, x25
001474f0:  ldrb     w1, [x8, x28]
001474f4:  add      x0, x8, x26
001474f8:  bl       #0x175500
001474fc:  ldur     d0, [x29, #-0xa8]
00147500:  ldur     d1, [x29, #-0xa7]
00147504:  ldur     d2, [x29, #-0xb8]
00147508:  ldur     d3, [x29, #-0xb7]
0014750c:  ldur     x8, [x29, #-0xe0]
00147510:  ldr      w9, [sp, #0xc0]
00147514:  uaddl    v5.8h, v2.8b, v1.8b
00147518:  uaddl    v4.8h, v3.8b, v0.8b
0014751c:  sub      w8, w9, w8
00147520:  add      x9, x27, #0x30
00147524:  cmp      w8, #1
00147528:  add      v6.8h, v4.8h, v5.8h
0014752c:  add      v5.8h, v5.8h, v5.8h
00147530:  add      v4.8h, v4.8h, v4.8h
00147534:  add      v5.8h, v6.8h, v5.8h
00147538:  add      v4.8h, v6.8h, v4.8h
0014753c:  shrn     v5.8b, v5.8h, #3
00147540:  shrn     v4.8b, v4.8h, #3
00147544:  urhadd   v6.8b, v0.8b, v5.8b
00147548:  urhadd   v7.8b, v1.8b, v4.8b
0014754c:  urhadd   v0.8b, v2.8b, v4.8b
00147550:  urhadd   v1.8b, v3.8b, v5.8b
00147554:  st2      {v6.8b, v7.8b}, [x20]
00147558:  st2      {v0.8b, v1.8b}, [x9]
0014755c:  b.lt     #0x1477a4
00147560:  cmp      w8, #8
00147564:  b.hs     #0x1477e8
00147568:  ldr      x17, [sp, #0xe0]
0014756c:  mov      x9, xzr
00147570:  ldr      x11, [sp, #0xd8]
00147574:  add      x12, x9, x27
00147578:  mov      w14, #-0x379a
0014757c:  mov      w16, #0x379a
00147580:  mov      w0, #0x1913
00147584:  mov      w1, #0x3408
00147588:  add      w10, w11, w9
0014758c:  add      x11, x9, x11
00147590:  sub      x9, x8, x9
00147594:  lsl      w15, w10, #1
00147598:  add      x13, x11, x17
0014759c:  add      x10, x12, #0x10
001475a0:  mov      w11, #0x4a85
001475a4:  add      x12, x13, #1
001475a8:  mov      w13, #0x6625
001475ac:  add      w15, w15, #2
001475b0:  mov      w17, #0xf8
001475b4:  mov      w2, #0x2204
001475b8:  mov      w3, #-0x2204
001475bc:  mov      w4, #0xff
001475c0:  mov      w5, #0x811a
001475c4:  mov      w6, #-0x4515
001475c8:  mov      w7, #0x4515
001475cc:  mov      w22, #0x1f
001475d0:  ldrb     w20, [x12], #1
001475d4:  ldurb    w23, [x10, #-0x10]
001475d8:  ldrb     w24, [x10], #1
001475dc:  mul      w20, w20, w11
001475e0:  mul      w25, w23, w0
001475e4:  mul      w26, w24, w13
001475e8:  lsr      w20, w20, #8
001475ec:  mul      w24, w24, w1
001475f0:  lsr      w25, w25, #8
001475f4:  mul      w23, w23, w5
001475f8:  add      w26, w20, w26, lsr #8
001475fc:  add      w24, w25, w24, lsr #8
00147600:  add      w25, w26, w14
00147604:  cmp      w26, w16
00147608:  lsr      w26, w25, #6
0014760c:  sub      w24, w20, w24
00147610:  csel     w28, wzr, w17, lo
00147614:  cmp      w25, #4, lsl #12
00147618:  add      w25, w24, w2
0014761c:  add      w20, w20, w23, lsr #8
00147620:  csel     w23, w26, w28, lo
00147624:  lsr      w26, w25, #6
00147628:  cmp      w24, w3
0014762c:  csel     w24, wzr, w4, lt
00147630:  cmp      w25, #4, lsl #12
00147634:  add      w25, w20, w6
00147638:  csel     w24, w26, w24, lo
0014763c:  lsr      w26, w25, #9
00147640:  cmp      w20, w7
00147644:  and      w20, w23, #0xf8
00147648:  lsl      w23, w24, #3
0014764c:  csel     w30, wzr, w22, lo
00147650:  cmp      w25, #4, lsl #12
00147654:  add      x28, x21, w15, sxtw
00147658:  orr      w20, w20, w24, lsr #5
0014765c:  csel     w24, w26, w30, lo
00147660:  and      w23, w23, #0xe0
00147664:  subs     x9, x9, #1
00147668:  orr      w23, w23, w24
0014766c:  add      w15, w15, #2
00147670:  strb     w20, [x28]
00147674:  strb     w23, [x28, #1]
00147678:  b.ne     #0x1475d0
0014767c:  ldr      x15, [sp, #0xa8]
00147680:  cbz      x15, #0x1477a4
00147684:  cmp      w8, #1
00147688:  b.lt     #0x1477a4
0014768c:  cmp      w8, #8
00147690:  b.hs     #0x147afc
00147694:  mov      x9, xzr
00147698:  ldr      x11, [sp, #0xd8]
0014769c:  add      x12, x9, x27
001476a0:  sub      x8, x8, x9
001476a4:  mov      w13, #-0x379a
001476a8:  mov      w16, #0xf8
001476ac:  mov      w17, #0x1913
001476b0:  add      w10, w11, w9
001476b4:  add      x11, x9, x11
001476b8:  mov      w9, #0x4a85
001476bc:  lsl      w14, w10, #1
001476c0:  add      x11, x11, x15
001476c4:  add      x10, x12, #0x30
001476c8:  add      x11, x11, #1
001476cc:  mov      w12, #0x6625
001476d0:  mov      w15, #0x379a
001476d4:  add      w14, w14, #2
001476d8:  mov      w0, #0x3408
001476dc:  mov      w1, #0x2204
001476e0:  mov      w2, #-0x2204
001476e4:  mov      w3, #0xff
001476e8:  mov      w4, #0x811a
001476ec:  mov      w5, #-0x4515
001476f0:  mov      w6, #0x4515
001476f4:  mov      w7, #0x1f
001476f8:  ldrb     w20, [x11], #1
001476fc:  ldurb    w21, [x10, #-0x10]
00147700:  ldrb     w22, [x10], #1
00147704:  mul      w20, w20, w9
00147708:  mul      w23, w21, w17
0014770c:  mul      w24, w22, w12
00147710:  lsr      w20, w20, #8
00147714:  mul      w22, w22, w0
00147718:  lsr      w23, w23, #8
0014771c:  mul      w21, w21, w4
00147720:  add      w24, w20, w24, lsr #8
00147724:  add      w22, w23, w22, lsr #8
00147728:  add      w23, w24, w13
0014772c:  cmp      w24, w15
00147730:  lsr      w24, w23, #6
00147734:  sub      w22, w20, w22
00147738:  csel     w25, wzr, w16, lo
0014773c:  cmp      w23, #4, lsl #12
00147740:  add      w23, w22, w1
00147744:  add      w20, w20, w21, lsr #8
00147748:  csel     w21, w24, w25, lo
0014774c:  lsr      w24, w23, #6
00147750:  cmp      w22, w2
00147754:  csel     w22, wzr, w3, lt
00147758:  cmp      w23, #4, lsl #12
0014775c:  add      w23, w20, w5
00147760:  csel     w22, w24, w22, lo
00147764:  lsr      w24, w23, #9
00147768:  cmp      w20, w6
0014776c:  and      w20, w21, #0xf8
00147770:  lsl      w21, w22, #3
00147774:  csel     w26, wzr, w7, lo
00147778:  cmp      w23, #4, lsl #12
0014777c:  add      x25, x19, w14, sxtw
00147780:  orr      w20, w20, w22, lsr #5
00147784:  csel     w22, w24, w26, lo
00147788:  and      w21, w21, #0xe0
0014778c:  subs     x8, x8, #1
00147790:  orr      w21, w21, w22
00147794:  add      w14, w14, #2
00147798:  strb     w20, [x25]
0014779c:  strb     w21, [x25, #1]
001477a0:  b.ne     #0x1476f8
001477a4:  ldr      x8, [sp, #0xd0]
001477a8:  ldr      x8, [x8, #0x28]
001477ac:  ldur     x9, [x29, #-0x50]
001477b0:  cmp      x8, x9
001477b4:  b.ne     #0x148668
001477b8:  add      sp, sp, #0x190
001477bc:  ldp      x20, x19, [sp, #0x90]
001477c0:  ldp      x22, x21, [sp, #0x80]
001477c4:  ldp      x24, x23, [sp, #0x70]
001477c8:  ldp      x26, x25, [sp, #0x60]
001477cc:  ldp      x28, x27, [sp, #0x50]
001477d0:  ldp      x29, x30, [sp, #0x40]
001477d4:  ldp      d9, d8, [sp, #0x30]
001477d8:  ldp      d11, d10, [sp, #0x20]
001477dc:  ldp      d13, d12, [sp, #0x10]
001477e0:  ldp      d15, d14, [sp], #0xa0
001477e4:  ret      
001477e8:  ldur     x13, [x29, #-0xd0]
001477ec:  mov      w11, #2
001477f0:  sub      x12, x8, #1
001477f4:  ldr      x17, [sp, #0xe0]
001477f8:  bfi      w11, w13, #5, #0x1b
001477fc:  add      w9, w11, w12, lsl #1
00147800:  cmp      w9, w11
00147804:  mov      x9, xzr
00147808:  b.lt     #0x147570
0014780c:  lsr      x10, x12, #0x1f
00147810:  cbnz     x10, #0x147570
00147814:  lsl      w10, w13, #5
00147818:  lsl      x12, x12, #1
0014781c:  add      x10, x21, w10, sxtw
00147820:  add      x13, x10, #2
00147824:  add      x14, x13, x12
00147828:  cmp      x14, x13
0014782c:  b.lo     #0x147570
00147830:  add      x13, x10, #3
00147834:  add      x12, x13, x12
00147838:  cmp      x12, x13
0014783c:  b.lo     #0x147570
00147840:  add      x9, x10, #2
00147844:  ldr      x10, [sp, #0xd8]
00147848:  add      x13, x27, x8
0014784c:  add      x12, x9, x8, lsl #1
00147850:  add      x13, x13, #0x10
00147854:  add      x10, x17, x10
00147858:  add      x10, x10, x8
0014785c:  cmp      x12, x27
00147860:  add      x14, x10, #1
00147864:  ldur     x10, [x29, #-0xe0]
00147868:  ccmp     x9, x13, #2, hi
0014786c:  add      x13, x17, x10
00147870:  cset     w10, lo
00147874:  cmp      x9, x14
00147878:  ccmp     x13, x12, #2, lo
0014787c:  mov      x9, xzr
00147880:  b.lo     #0x147570
00147884:  tbnz     w10, #0, #0x147570
00147888:  cmp      w8, #0x10
0014788c:  adrp     x12, #0x114000
00147890:  adrp     x10, #0x114000
00147894:  b.hs     #0x147e10
00147898:  mov      x9, xzr
0014789c:  ldr      q0, [x12, #0x260]
001478a0:  mov      w12, #0x6625
001478a4:  ldr      x15, [sp, #0xd8]
001478a8:  dup      v2.4h, w12
001478ac:  mov      w12, #0x379a
001478b0:  mov      x13, x9
001478b4:  dup      v5.4s, w12
001478b8:  mov      w12, #0x1913
001478bc:  mov      w11, #0x4a85
001478c0:  add      x14, x13, x15
001478c4:  dup      v7.4h, w12
001478c8:  mov      w12, #0x3408
001478cc:  dup      v1.8h, w11
001478d0:  add      x11, x14, x17
001478d4:  mov      w14, #-0x379a
001478d8:  dup      v16.4h, w12
001478dc:  mov      w12, #0x2204
001478e0:  dup      v3.4s, w14
001478e4:  mov      w14, #-0x2204
001478e8:  dup      v17.4s, w12
001478ec:  mov      w12, #0x811a
001478f0:  add      w15, w15, w13
001478f4:  movi     v4.4s, #0x40, lsl #8
001478f8:  dup      v18.4s, w14
001478fc:  dup      v20.4h, w12
00147900:  mov      w12, #-0x4515
00147904:  mov      w14, #0x4515
00147908:  lsl      w15, w15, #1
0014790c:  dup      v23.4s, w12
00147910:  dup      v24.4s, w14
00147914:  adrp     x12, #0x114000
00147918:  and      x9, x8, #0x7ffffff8
0014791c:  add      x14, x13, x27
00147920:  ldr      q25, [x10, #0x530]
00147924:  ldr      q26, [x12, #0x110]
00147928:  add      x11, x11, #1
0014792c:  add      w10, w15, #2
00147930:  add      x12, x14, #0x10
00147934:  sub      x13, x13, x9
00147938:  ldur     d27, [x12, #-0x10]
0014793c:  ldr      d28, [x12]
00147940:  movi     v22.2d, #0x0000ff000000ff
00147944:  add      x14, x21, w10, sxtw
00147948:  adds     x13, x13, #8
0014794c:  add      w10, w10, #0x10
00147950:  tbl      v30.16b, {v27.16b}, v25.16b
00147954:  tbl      v29.16b, {v27.16b}, v0.16b
00147958:  tbl      v8.16b, {v28.16b}, v25.16b
0014795c:  tbl      v31.16b, {v28.16b}, v0.16b
00147960:  add      x12, x12, #8
00147964:  xtn      v28.4h, v30.4s
00147968:  xtn      v27.4h, v29.4s
0014796c:  xtn      v29.4h, v8.4s
00147970:  xtn      v30.4h, v31.4s
00147974:  ldr      d31, [x11], #8
00147978:  ushll    v31.8h, v31.8b, #0
0014797c:  umull    v9.4s, v28.4h, v7.4h
00147980:  umull    v8.4s, v27.4h, v7.4h
00147984:  umull    v12.4s, v29.4h, v16.4h
00147988:  umull    v10.4s, v30.4h, v2.4h
0014798c:  umull    v30.4s, v30.4h, v16.4h
00147990:  umull    v28.4s, v28.4h, v20.4h
00147994:  umull    v13.4s, v31.4h, v1.4h
00147998:  umull2   v31.4s, v31.8h, v1.8h
0014799c:  umull    v27.4s, v27.4h, v20.4h
001479a0:  umull    v11.4s, v29.4h, v2.4h
001479a4:  ushr     v9.4s, v9.4s, #8
001479a8:  ushr     v8.4s, v8.4s, #8
001479ac:  ushr     v29.4s, v10.4s, #8
001479b0:  ushr     v28.4s, v28.4s, #8
001479b4:  ushr     v10.4s, v31.4s, #8
001479b8:  ushr     v27.4s, v27.4s, #8
001479bc:  usra     v9.4s, v12.4s, #8
001479c0:  ushr     v11.4s, v11.4s, #8
001479c4:  usra     v8.4s, v30.4s, #8
001479c8:  ushr     v30.4s, v13.4s, #8
001479cc:  usra     v28.4s, v31.4s, #8
001479d0:  usra     v27.4s, v13.4s, #8
001479d4:  usra     v11.4s, v31.4s, #8
001479d8:  usra     v29.4s, v13.4s, #8
001479dc:  sub      v9.4s, v10.4s, v9.4s
001479e0:  sub      v30.4s, v30.4s, v8.4s
001479e4:  add      v19.4s, v28.4s, v23.4s
001479e8:  cmhi     v28.4s, v24.4s, v28.4s
001479ec:  add      v21.4s, v27.4s, v23.4s
001479f0:  cmhi     v27.4s, v24.4s, v27.4s
001479f4:  add      v10.4s, v9.4s, v17.4s
001479f8:  cmgt     v9.4s, v18.4s, v9.4s
001479fc:  add      v31.4s, v11.4s, v3.4s
00147a00:  add      v12.4s, v30.4s, v17.4s
00147a04:  cmgt     v30.4s, v18.4s, v30.4s
00147a08:  add      v8.4s, v29.4s, v3.4s
00147a0c:  cmhi     v11.4s, v5.4s, v11.4s
00147a10:  cmhi     v29.4s, v5.4s, v29.4s
00147a14:  mvn      v28.16b, v28.16b
00147a18:  mvn      v9.16b, v9.16b
00147a1c:  mvn      v27.16b, v27.16b
00147a20:  cmhi     v15.4s, v4.4s, v10.4s
00147a24:  mvn      v30.16b, v30.16b
00147a28:  ushr     v10.4s, v10.4s, #6
00147a2c:  cmhi     v6.4s, v4.4s, v12.4s
00147a30:  ushr     v12.4s, v12.4s, #6
00147a34:  cmhi     v14.4s, v4.4s, v31.4s
00147a38:  ushr     v31.4s, v31.4s, #6
00147a3c:  mvn      v11.16b, v11.16b
00147a40:  cmhi     v13.4s, v4.4s, v8.4s
00147a44:  bic      v9.16b, v9.16b, v15.16b
00147a48:  and      v10.16b, v10.16b, v15.16b
00147a4c:  cmhi     v15.4s, v4.4s, v19.4s
00147a50:  bic      v30.16b, v30.16b, v6.16b
00147a54:  and      v6.16b, v12.16b, v6.16b
00147a58:  cmhi     v12.4s, v4.4s, v21.4s
00147a5c:  ushr     v8.4s, v8.4s, #6
00147a60:  mvn      v29.16b, v29.16b
00147a64:  ushr     v19.4s, v19.4s, #9
00147a68:  and      v9.16b, v9.16b, v22.16b
00147a6c:  bic      v28.16b, v28.16b, v15.16b
00147a70:  bif      v31.16b, v11.16b, v14.16b
00147a74:  and      v30.16b, v30.16b, v22.16b
00147a78:  movi     v22.4s, #0x1f
00147a7c:  bic      v27.16b, v27.16b, v12.16b
00147a80:  ushr     v21.4s, v21.4s, #9
00147a84:  bit      v29.16b, v8.16b, v13.16b
00147a88:  and      v19.16b, v19.16b, v15.16b
00147a8c:  orr      v9.16b, v10.16b, v9.16b
00147a90:  movi     v10.4s, #0xf8
00147a94:  orr      v6.16b, v6.16b, v30.16b
00147a98:  and      v28.16b, v28.16b, v22.16b
00147a9c:  and      v27.16b, v27.16b, v22.16b
00147aa0:  movi     v22.4s, #0xe0
00147aa4:  shl      v30.4s, v9.4s, #3
00147aa8:  and      v21.16b, v21.16b, v12.16b
00147aac:  shl      v8.4s, v6.4s, #3
00147ab0:  and      v29.16b, v29.16b, v10.16b
00147ab4:  ushr     v6.4s, v6.4s, #5
00147ab8:  orr      v19.16b, v19.16b, v28.16b
00147abc:  and      v28.16b, v31.16b, v10.16b
00147ac0:  ushr     v31.4s, v9.4s, #5
00147ac4:  and      v30.16b, v30.16b, v22.16b
00147ac8:  orr      v21.16b, v21.16b, v27.16b
00147acc:  and      v27.16b, v8.16b, v22.16b
00147ad0:  orr      v9.16b, v28.16b, v31.16b
00147ad4:  orr      v8.16b, v29.16b, v6.16b
00147ad8:  orr      v29.16b, v30.16b, v19.16b
00147adc:  orr      v28.16b, v27.16b, v21.16b
00147ae0:  tbl      v30.16b, {v8.16b, v9.16b}, v26.16b
00147ae4:  tbl      v31.16b, {v28.16b, v29.16b}, v26.16b
00147ae8:  st2      {v30.8b, v31.8b}, [x14]
00147aec:  b.ne     #0x147938
00147af0:  cmp      x9, x8
00147af4:  b.ne     #0x147570
00147af8:  b        #0x14767c
00147afc:  ldur     x13, [x29, #-0xd0]
00147b00:  mov      w10, #2
00147b04:  sub      x12, x8, #1
00147b08:  bfi      w10, w13, #5, #0x1b
00147b0c:  add      w9, w10, w12, lsl #1
00147b10:  cmp      w9, w10
00147b14:  mov      x9, xzr
00147b18:  b.lt     #0x147698
00147b1c:  lsr      x11, x12, #0x1f
00147b20:  cbnz     x11, #0x147698
00147b24:  lsl      w11, w13, #5
00147b28:  lsl      x12, x12, #1
00147b2c:  add      x11, x19, w11, sxtw
00147b30:  add      x13, x11, #2
00147b34:  add      x14, x13, x12
00147b38:  cmp      x14, x13
00147b3c:  b.lo     #0x147698
00147b40:  add      x13, x11, #3
00147b44:  add      x12, x13, x12
00147b48:  cmp      x12, x13
00147b4c:  b.lo     #0x147698
00147b50:  add      x9, x11, #2
00147b54:  ldr      x11, [sp, #0xd8]
00147b58:  ldr      x14, [sp, #8]
00147b5c:  add      x12, x9, x8, lsl #1
00147b60:  add      x13, x27, x8
00147b64:  add      x11, x15, x11
00147b68:  add      x13, x13, #0x30
00147b6c:  add      x11, x11, x8
00147b70:  cmp      x14, x12
00147b74:  add      x14, x11, #1
00147b78:  ldur     x11, [x29, #-0xe0]
00147b7c:  ccmp     x9, x13, #2, lo
00147b80:  add      x13, x15, x11
00147b84:  cset     w11, lo
00147b88:  cmp      x9, x14
00147b8c:  ccmp     x13, x12, #2, lo
00147b90:  mov      x9, xzr
00147b94:  b.lo     #0x147698
00147b98:  tbnz     w11, #0, #0x147698
00147b9c:  cmp      w8, #0x10
00147ba0:  b.hs     #0x148234
00147ba4:  mov      x9, xzr
00147ba8:  mov      w11, #0x4a85
00147bac:  ldr      x14, [sp, #0xd8]
00147bb0:  mov      x13, x9
00147bb4:  dup      v1.8h, w11
00147bb8:  mov      w11, #0x6625
00147bbc:  adrp     x10, #0x114000
00147bc0:  dup      v2.4h, w11
00147bc4:  mov      w11, #-0x379a
00147bc8:  add      x12, x13, x14
00147bcc:  dup      v3.4s, w11
00147bd0:  mov      w11, #0x379a
00147bd4:  add      w14, w14, w13
00147bd8:  dup      v5.4s, w11
00147bdc:  mov      w11, #0x1913
00147be0:  ldr      q0, [x10, #0x260]
00147be4:  dup      v7.4h, w11
00147be8:  mov      w11, #0x3408
00147bec:  add      x10, x12, x15
00147bf0:  dup      v16.4h, w11
00147bf4:  mov      w11, #-0x2204
00147bf8:  lsl      w12, w14, #1
00147bfc:  mov      w14, #0x2204
00147c00:  dup      v18.4s, w11
00147c04:  mov      w11, #0x811a
00147c08:  movi     v4.4s, #0x40, lsl #8
00147c0c:  dup      v17.4s, w14
00147c10:  mov      w14, #-0x4515
00147c14:  dup      v20.4h, w11
00147c18:  mov      w11, #0x4515
00147c1c:  dup      v21.4s, w14
00147c20:  adrp     x14, #0x114000
00147c24:  dup      v24.4s, w11
00147c28:  adrp     x11, #0x114000
00147c2c:  and      x9, x8, #0x7ffffff8
00147c30:  ldr      q25, [x14, #0x530]
00147c34:  add      x14, x13, x27
00147c38:  ldr      q26, [x11, #0x110]
00147c3c:  add      x10, x10, #1
00147c40:  add      w11, w12, #2
00147c44:  add      x12, x14, #0x30
00147c48:  sub      x13, x13, x9
00147c4c:  ldur     d27, [x12, #-0x10]
00147c50:  ldr      d28, [x12]
00147c54:  movi     v23.2d, #0x0000ff000000ff
00147c58:  add      x14, x19, w11, sxtw
00147c5c:  adds     x13, x13, #8
00147c60:  add      w11, w11, #0x10
00147c64:  tbl      v30.16b, {v27.16b}, v25.16b
00147c68:  tbl      v29.16b, {v27.16b}, v0.16b
00147c6c:  tbl      v8.16b, {v28.16b}, v25.16b
00147c70:  tbl      v31.16b, {v28.16b}, v0.16b
00147c74:  add      x12, x12, #8
00147c78:  xtn      v28.4h, v30.4s
00147c7c:  xtn      v27.4h, v29.4s
00147c80:  xtn      v29.4h, v8.4s
00147c84:  xtn      v30.4h, v31.4s
00147c88:  ldr      d31, [x10], #8
00147c8c:  ushll    v31.8h, v31.8b, #0
00147c90:  umull    v9.4s, v28.4h, v7.4h
00147c94:  umull    v8.4s, v27.4h, v7.4h
00147c98:  umull    v12.4s, v29.4h, v16.4h
00147c9c:  umull    v10.4s, v30.4h, v2.4h
00147ca0:  umull    v30.4s, v30.4h, v16.4h
00147ca4:  umull    v28.4s, v28.4h, v20.4h
00147ca8:  umull    v13.4s, v31.4h, v1.4h
00147cac:  umull2   v31.4s, v31.8h, v1.8h
00147cb0:  umull    v27.4s, v27.4h, v20.4h
00147cb4:  umull    v11.4s, v29.4h, v2.4h
00147cb8:  ushr     v9.4s, v9.4s, #8
00147cbc:  ushr     v8.4s, v8.4s, #8
00147cc0:  ushr     v29.4s, v10.4s, #8
00147cc4:  ushr     v28.4s, v28.4s, #8
00147cc8:  ushr     v10.4s, v31.4s, #8
00147ccc:  ushr     v27.4s, v27.4s, #8
00147cd0:  usra     v9.4s, v12.4s, #8
00147cd4:  ushr     v11.4s, v11.4s, #8
00147cd8:  usra     v8.4s, v30.4s, #8
00147cdc:  ushr     v30.4s, v13.4s, #8
00147ce0:  usra     v28.4s, v31.4s, #8
00147ce4:  usra     v27.4s, v13.4s, #8
00147ce8:  usra     v11.4s, v31.4s, #8
00147cec:  usra     v29.4s, v13.4s, #8
00147cf0:  sub      v9.4s, v10.4s, v9.4s
00147cf4:  sub      v30.4s, v30.4s, v8.4s
00147cf8:  add      v19.4s, v28.4s, v21.4s
00147cfc:  cmhi     v28.4s, v24.4s, v28.4s
00147d00:  add      v22.4s, v27.4s, v21.4s
00147d04:  cmhi     v27.4s, v24.4s, v27.4s
00147d08:  add      v10.4s, v9.4s, v17.4s
00147d0c:  cmgt     v9.4s, v18.4s, v9.4s
00147d10:  add      v31.4s, v11.4s, v3.4s
00147d14:  add      v12.4s, v30.4s, v17.4s
00147d18:  cmgt     v30.4s, v18.4s, v30.4s
00147d1c:  add      v8.4s, v29.4s, v3.4s
00147d20:  cmhi     v11.4s, v5.4s, v11.4s
00147d24:  cmhi     v29.4s, v5.4s, v29.4s
00147d28:  mvn      v28.16b, v28.16b
00147d2c:  mvn      v9.16b, v9.16b
00147d30:  mvn      v27.16b, v27.16b
00147d34:  cmhi     v15.4s, v4.4s, v10.4s
00147d38:  mvn      v30.16b, v30.16b
00147d3c:  ushr     v10.4s, v10.4s, #6
00147d40:  cmhi     v6.4s, v4.4s, v12.4s
00147d44:  ushr     v12.4s, v12.4s, #6
00147d48:  cmhi     v14.4s, v4.4s, v31.4s
00147d4c:  ushr     v31.4s, v31.4s, #6
00147d50:  mvn      v11.16b, v11.16b
00147d54:  cmhi     v13.4s, v4.4s, v8.4s
00147d58:  bic      v9.16b, v9.16b, v15.16b
00147d5c:  and      v10.16b, v10.16b, v15.16b
00147d60:  cmhi     v15.4s, v4.4s, v19.4s
00147d64:  bic      v30.16b, v30.16b, v6.16b
00147d68:  and      v6.16b, v12.16b, v6.16b
00147d6c:  cmhi     v12.4s, v4.4s, v22.4s
00147d70:  ushr     v8.4s, v8.4s, #6
00147d74:  mvn      v29.16b, v29.16b
00147d78:  ushr     v19.4s, v19.4s, #9
00147d7c:  and      v9.16b, v9.16b, v23.16b
00147d80:  bic      v28.16b, v28.16b, v15.16b
00147d84:  bif      v31.16b, v11.16b, v14.16b
00147d88:  and      v30.16b, v30.16b, v23.16b
00147d8c:  movi     v23.4s, #0x1f
00147d90:  bic      v27.16b, v27.16b, v12.16b
00147d94:  ushr     v22.4s, v22.4s, #9
00147d98:  bit      v29.16b, v8.16b, v13.16b
00147d9c:  and      v19.16b, v19.16b, v15.16b
00147da0:  orr      v9.16b, v10.16b, v9.16b
00147da4:  movi     v10.4s, #0xf8
00147da8:  orr      v6.16b, v6.16b, v30.16b
00147dac:  and      v28.16b, v28.16b, v23.16b
00147db0:  and      v27.16b, v27.16b, v23.16b
00147db4:  movi     v23.4s, #0xe0
00147db8:  shl      v30.4s, v9.4s, #3
00147dbc:  and      v22.16b, v22.16b, v12.16b
00147dc0:  shl      v8.4s, v6.4s, #3
00147dc4:  and      v29.16b, v29.16b, v10.16b
00147dc8:  ushr     v6.4s, v6.4s, #5
00147dcc:  orr      v19.16b, v19.16b, v28.16b
00147dd0:  and      v28.16b, v31.16b, v10.16b
00147dd4:  ushr     v31.4s, v9.4s, #5
00147dd8:  and      v30.16b, v30.16b, v23.16b
00147ddc:  orr      v22.16b, v22.16b, v27.16b
00147de0:  and      v27.16b, v8.16b, v23.16b
00147de4:  orr      v9.16b, v28.16b, v31.16b
00147de8:  orr      v8.16b, v29.16b, v6.16b
00147dec:  orr      v29.16b, v30.16b, v19.16b
00147df0:  orr      v28.16b, v27.16b, v22.16b
00147df4:  tbl      v30.16b, {v8.16b, v9.16b}, v26.16b
00147df8:  tbl      v31.16b, {v28.16b, v29.16b}, v26.16b
00147dfc:  st2      {v30.8b, v31.8b}, [x14]
00147e00:  b.ne     #0x147c4c
00147e04:  cmp      x9, x8
00147e08:  b.ne     #0x147698
00147e0c:  b        #0x1477a4
00147e10:  ldr      q0, [x12, #0x260]
00147e14:  mov      w14, #0x4a85
00147e18:  mov      w15, #0x6625
00147e1c:  adrp     x13, #0x114000
00147e20:  movi     v5.4s, #0x40, lsl #8
00147e24:  and      x9, x8, #0x7ffffff0
00147e28:  str      q0, [sp, #0xc0]
00147e2c:  ldr      q0, [x10, #0x530]
00147e30:  str      q0, [sp, #0xb0]
00147e34:  dup      v0.8h, w14
00147e38:  mov      w14, #-0x379a
00147e3c:  dup      v1.4s, w14
00147e40:  mov      w14, #0x379a
00147e44:  str      q0, [sp, #0x90]
00147e48:  dup      v0.4h, w15
00147e4c:  mov      w15, #0x2204
00147e50:  dup      v18.4s, w15
00147e54:  mov      w15, #-0x4515
00147e58:  dup      v22.4s, w15
00147e5c:  adrp     x15, #0x113000
00147e60:  str      d0, [sp, #0x80]
00147e64:  dup      v0.4s, w14
00147e68:  mov      w14, #0x1913
00147e6c:  stp      q0, q1, [sp, #0x60]
00147e70:  dup      v0.4h, w14
00147e74:  mov      w14, #0x3408
00147e78:  str      d0, [sp, #0x50]
00147e7c:  dup      v0.4h, w14
00147e80:  mov      w14, #-0x2204
00147e84:  dup      v19.4s, w14
00147e88:  mov      w14, #0x811a
00147e8c:  dup      v21.4h, w14
00147e90:  mov      w14, #0x4515
00147e94:  dup      v25.4s, w14
00147e98:  adrp     x14, #0x114000
00147e9c:  str      d0, [sp, #0x40]
00147ea0:  ldr      q0, [x13, #0x410]
00147ea4:  ldur     x13, [x29, #-0xe0]
00147ea8:  str      q0, [sp, #0x30]
00147eac:  ldr      q0, [x15, #0xfa0]
00147eb0:  add      x13, x17, x13
00147eb4:  mov      x15, x9
00147eb8:  str      q0, [sp, #0x20]
00147ebc:  ldr      q0, [x14, #0x3c0]
00147ec0:  add      x14, x27, #0x10
00147ec4:  str      q0, [sp, #0x10]
00147ec8:  ldp      q31, q0, [x14, #-0x10]
00147ecc:  add      x16, x21, w11, sxtw
00147ed0:  ldp      q3, q4, [sp, #0x20]
00147ed4:  subs     x15, x15, #0x10
00147ed8:  ldr      q2, [sp, #0xc0]
00147edc:  ldr      q10, [x13], #0x10
00147ee0:  ldp      q17, q16, [sp, #0x60]
00147ee4:  add      w11, w11, #0x20
00147ee8:  tbl      v1.16b, {v0.16b}, v3.16b
00147eec:  tbl      v30.16b, {v0.16b}, v2.16b
00147ef0:  tbl      v9.16b, {v0.16b}, v4.16b
00147ef4:  tbl      v8.16b, {v31.16b}, v3.16b
00147ef8:  ldr      q3, [sp, #0xb0]
00147efc:  ushll    v7.8h, v10.8b, #0
00147f00:  ushll2   v10.8h, v10.16b, #0
00147f04:  tbl      v11.16b, {v31.16b}, v2.16b
00147f08:  ldr      q2, [sp, #0x90]
00147f0c:  tbl      v13.16b, {v31.16b}, v3.16b
00147f10:  tbl      v14.16b, {v31.16b}, v4.16b
00147f14:  add      x14, x14, #0x10
00147f18:  xtn      v29.4h, v1.4s
00147f1c:  tbl      v1.16b, {v0.16b}, v3.16b
00147f20:  ldr      d3, [sp, #0x80]
00147f24:  xtn      v0.4h, v30.4s
00147f28:  xtn      v30.4h, v9.4s
00147f2c:  umull2   v31.4s, v10.8h, v2.8h
00147f30:  xtn      v12.4h, v8.4s
00147f34:  umull    v8.4s, v10.4h, v2.4h
00147f38:  xtn      v15.4h, v11.4s
00147f3c:  xtn      v13.4h, v13.4s
00147f40:  umull2   v9.4s, v7.8h, v2.8h
00147f44:  umull    v11.4s, v7.4h, v2.4h
00147f48:  umull    v20.4s, v29.4h, v3.4h
00147f4c:  xtn      v1.4h, v1.4s
00147f50:  ldr      d2, [sp, #0x50]
00147f54:  umull    v24.4s, v30.4h, v3.4h
00147f58:  umull    v23.4s, v0.4h, v3.4h
00147f5c:  xtn      v14.4h, v14.4s
00147f60:  umull    v26.4s, v15.4h, v2.4h
00147f64:  ushr     v6.4s, v8.4s, #8
00147f68:  umull    v27.4s, v13.4h, v2.4h
00147f6c:  ushr     v4.4s, v9.4s, #8
00147f70:  ushr     v10.4s, v20.4s, #8
00147f74:  umull    v7.4s, v1.4h, v3.4h
00147f78:  umull    v20.4s, v12.4h, v2.4h
00147f7c:  ushr     v24.4s, v24.4s, #8
00147f80:  ushr     v23.4s, v23.4s, #8
00147f84:  ldr      d3, [sp, #0x40]
00147f88:  umull    v28.4s, v14.4h, v2.4h
00147f8c:  ushr     v26.4s, v26.4s, #8
00147f90:  usra     v10.4s, v31.4s, #8
00147f94:  umull    v29.4s, v29.4h, v3.4h
00147f98:  umull    v2.4s, v30.4h, v3.4h
00147f9c:  usra     v24.4s, v8.4s, #8
00147fa0:  ushr     v30.4s, v7.4s, #8
00147fa4:  ushr     v7.4s, v20.4s, #8
00147fa8:  umull    v1.4s, v1.4h, v3.4h
00147fac:  ushr     v20.4s, v27.4s, #8
00147fb0:  umull    v0.4s, v0.4h, v3.4h
00147fb4:  ushr     v28.4s, v28.4s, #8
00147fb8:  ushr     v3.4s, v11.4s, #8
00147fbc:  usra     v23.4s, v11.4s, #8
00147fc0:  usra     v7.4s, v29.4s, #8
00147fc4:  usra     v20.4s, v1.4s, #8
00147fc8:  usra     v26.4s, v0.4s, #8
00147fcc:  ushr     v0.4s, v31.4s, #8
00147fd0:  add      v27.4s, v10.4s, v16.4s
00147fd4:  cmhi     v29.4s, v17.4s, v10.4s
00147fd8:  add      v1.4s, v24.4s, v16.4s
00147fdc:  cmhi     v24.4s, v17.4s, v24.4s
00147fe0:  usra     v28.4s, v2.4s, #8
00147fe4:  mvn      v29.16b, v29.16b
00147fe8:  cmhi     v10.4s, v5.4s, v27.4s
00147fec:  ushr     v27.4s, v27.4s, #6
00147ff0:  add      v2.4s, v23.4s, v16.4s
00147ff4:  sub      v7.4s, v0.4s, v7.4s
00147ff8:  cmhi     v0.4s, v17.4s, v23.4s
00147ffc:  mvn      v24.16b, v24.16b
00148000:  sub      v4.4s, v4.4s, v20.4s
00148004:  bit      v29.16b, v27.16b, v10.16b
00148008:  cmhi     v27.4s, v5.4s, v1.4s
0014800c:  ushr     v1.4s, v1.4s, #6
00148010:  cmhi     v23.4s, v5.4s, v2.4s
00148014:  sub      v3.4s, v3.4s, v26.4s
00148018:  ushr     v2.4s, v2.4s, #6
0014801c:  mvn      v26.16b, v0.16b
00148020:  add      v20.4s, v7.4s, v18.4s
00148024:  mov      v10.16b, v27.16b
00148028:  umull    v27.4s, v12.4h, v21.4h
0014802c:  sub      v6.4s, v6.4s, v28.4s
00148030:  usra     v30.4s, v9.4s, #8
00148034:  bsl      v10.16b, v1.16b, v24.16b
00148038:  cmgt     v1.4s, v19.4s, v7.4s
0014803c:  umull    v7.4s, v15.4h, v21.4h
00148040:  mov      v15.16b, v23.16b
00148044:  umull    v23.4s, v13.4h, v21.4h
00148048:  ushr     v27.4s, v27.4s, #8
0014804c:  cmhi     v12.4s, v5.4s, v20.4s
00148050:  add      v28.4s, v6.4s, v18.4s
00148054:  ushr     v20.4s, v20.4s, #6
00148058:  mvn      v1.16b, v1.16b
0014805c:  cmgt     v6.4s, v19.4s, v6.4s
00148060:  add      v24.4s, v4.4s, v18.4s
00148064:  bsl      v15.16b, v2.16b, v26.16b
00148068:  umull    v26.4s, v14.4h, v21.4h
0014806c:  ushr     v7.4s, v7.4s, #8
00148070:  ushr     v23.4s, v23.4s, #8
00148074:  add      v2.4s, v3.4s, v18.4s
00148078:  cmgt     v3.4s, v19.4s, v3.4s
0014807c:  add      v0.4s, v30.4s, v16.4s
00148080:  movi     v16.2d, #0x0000ff000000ff
00148084:  bic      v1.16b, v1.16b, v12.16b
00148088:  cmgt     v4.4s, v19.4s, v4.4s
0014808c:  and      v20.16b, v20.16b, v12.16b
00148090:  mvn      v6.16b, v6.16b
00148094:  ushr     v26.4s, v26.4s, #8
00148098:  mvn      v3.16b, v3.16b
0014809c:  cmhi     v30.4s, v17.4s, v30.4s
001480a0:  movi     v17.4s, #0xe0
001480a4:  and      v1.16b, v1.16b, v16.16b
001480a8:  mvn      v4.16b, v4.16b
001480ac:  mvn      v30.16b, v30.16b
001480b0:  usra     v7.4s, v11.4s, #8
001480b4:  cmhi     v11.4s, v5.4s, v24.4s
001480b8:  ushr     v24.4s, v24.4s, #6
001480bc:  usra     v23.4s, v9.4s, #8
001480c0:  cmhi     v9.4s, v5.4s, v2.4s
001480c4:  ushr     v2.4s, v2.4s, #6
001480c8:  usra     v26.4s, v8.4s, #8
001480cc:  cmhi     v8.4s, v5.4s, v28.4s
001480d0:  ushr     v28.4s, v28.4s, #6
001480d4:  bic      v4.16b, v4.16b, v11.16b
001480d8:  and      v24.16b, v24.16b, v11.16b
001480dc:  bic      v3.16b, v3.16b, v9.16b
001480e0:  and      v2.16b, v2.16b, v9.16b
001480e4:  bic      v6.16b, v6.16b, v8.16b
001480e8:  and      v4.16b, v4.16b, v16.16b
001480ec:  and      v3.16b, v3.16b, v16.16b
001480f0:  add      v12.4s, v7.4s, v22.4s
001480f4:  cmhi     v7.4s, v25.4s, v7.4s
001480f8:  and      v6.16b, v6.16b, v16.16b
001480fc:  movi     v16.4s, #0x1f
00148100:  orr      v4.16b, v24.16b, v4.16b
00148104:  orr      v2.16b, v2.16b, v3.16b
00148108:  mvn      v7.16b, v7.16b
0014810c:  cmhi     v9.4s, v5.4s, v12.4s
00148110:  ushr     v12.4s, v12.4s, #9
00148114:  usra     v27.4s, v31.4s, #8
00148118:  orr      v31.16b, v20.16b, v1.16b
0014811c:  add      v1.4s, v23.4s, v22.4s
00148120:  and      v20.16b, v28.16b, v8.16b
00148124:  add      v28.4s, v26.4s, v22.4s
00148128:  cmhi     v23.4s, v25.4s, v23.4s
0014812c:  cmhi     v26.4s, v25.4s, v26.4s
00148130:  bic      v7.16b, v7.16b, v9.16b
00148134:  and      v9.16b, v12.16b, v9.16b
00148138:  cmhi     v11.4s, v5.4s, v1.4s
0014813c:  mvn      v23.16b, v23.16b
00148140:  ushr     v1.4s, v1.4s, #9
00148144:  cmhi     v13.4s, v5.4s, v28.4s
00148148:  mvn      v26.16b, v26.16b
0014814c:  ushr     v28.4s, v28.4s, #9
00148150:  and      v7.16b, v7.16b, v16.16b
00148154:  orr      v6.16b, v20.16b, v6.16b
00148158:  bic      v23.16b, v23.16b, v11.16b
0014815c:  and      v1.16b, v1.16b, v11.16b
00148160:  cmhi     v11.4s, v5.4s, v0.4s
00148164:  add      v8.4s, v27.4s, v22.4s
00148168:  cmhi     v27.4s, v25.4s, v27.4s
0014816c:  bic      v26.16b, v26.16b, v13.16b
00148170:  ushr     v0.4s, v0.4s, #6
00148174:  and      v28.16b, v28.16b, v13.16b
00148178:  orr      v3.16b, v9.16b, v7.16b
0014817c:  and      v23.16b, v23.16b, v16.16b
00148180:  mvn      v27.16b, v27.16b
00148184:  and      v26.16b, v26.16b, v16.16b
00148188:  cmhi     v12.4s, v5.4s, v8.4s
0014818c:  ushr     v8.4s, v8.4s, #9
00148190:  bif      v0.16b, v30.16b, v11.16b
00148194:  orr      v1.16b, v1.16b, v23.16b
00148198:  shl      v23.4s, v31.4s, #3
0014819c:  shl      v30.4s, v4.4s, #3
001481a0:  orr      v7.16b, v28.16b, v26.16b
001481a4:  ushr     v4.4s, v4.4s, #5
001481a8:  bic      v27.16b, v27.16b, v12.16b
001481ac:  and      v8.16b, v8.16b, v12.16b
001481b0:  and      v23.16b, v23.16b, v17.16b
001481b4:  and      v27.16b, v27.16b, v16.16b
001481b8:  movi     v16.4s, #0xf8
001481bc:  orr      v20.16b, v8.16b, v27.16b
001481c0:  shl      v27.4s, v6.4s, #3
001481c4:  ushr     v6.4s, v6.4s, #5
001481c8:  and      v28.16b, v29.16b, v16.16b
001481cc:  ushr     v29.4s, v31.4s, #5
001481d0:  and      v26.16b, v10.16b, v16.16b
001481d4:  shl      v31.4s, v2.4s, #3
001481d8:  and      v0.16b, v0.16b, v16.16b
001481dc:  and      v24.16b, v15.16b, v16.16b
001481e0:  and      v27.16b, v27.16b, v17.16b
001481e4:  ushr     v2.4s, v2.4s, #5
001481e8:  orr      v15.16b, v23.16b, v20.16b
001481ec:  orr      v11.16b, v28.16b, v29.16b
001481f0:  and      v28.16b, v30.16b, v17.16b
001481f4:  orr      v10.16b, v26.16b, v6.16b
001481f8:  and      v6.16b, v31.16b, v17.16b
001481fc:  orr      v9.16b, v0.16b, v4.16b
00148200:  orr      v14.16b, v27.16b, v7.16b
00148204:  orr      v8.16b, v24.16b, v2.16b
00148208:  ldr      q2, [sp, #0x10]
0014820c:  orr      v13.16b, v28.16b, v1.16b
00148210:  orr      v12.16b, v6.16b, v3.16b
00148214:  tbl      v0.16b, {v8.16b, v9.16b, v10.16b, v11.16b}, v2.16b
00148218:  tbl      v1.16b, {v12.16b, v13.16b, v14.16b, v15.16b}, v2.16b
0014821c:  st2      {v0.16b, v1.16b}, [x16]
00148220:  b.ne     #0x147ec8
00148224:  cmp      x9, x8
00148228:  b.eq     #0x14767c
0014822c:  tbz      w8, #3, #0x147570
00148230:  b        #0x14789c
00148234:  adrp     x11, #0x114000
00148238:  ldur     x9, [x29, #-0xe0]
0014823c:  adrp     x12, #0x114000
00148240:  ldr      q0, [x11, #0x260]
00148244:  sxtw     x13, w9
00148248:  adrp     x11, #0x113000
0014824c:  adrp     x9, #0x114000
00148250:  movi     v6.4s, #0x40, lsl #8
00148254:  stur     q0, [x29, #-0xd0]
00148258:  ldr      q0, [x12, #0x530]
0014825c:  mov      w12, #-0x379a
00148260:  dup      v1.4s, w12
00148264:  mov      w12, #-0x2204
00148268:  stur     q0, [x29, #-0xe0]
0014826c:  ldr      q0, [x9, #0x410]
00148270:  mov      w9, #0x4a85
00148274:  dup      v20.4s, w12
00148278:  mov      w12, #0x4515
0014827c:  str      q0, [sp, #0xe0]
00148280:  dup      v0.8h, w9
00148284:  mov      w9, #0x6625
00148288:  dup      v26.4s, w12
0014828c:  adrp     x12, #0x114000
00148290:  str      q0, [sp, #0xc0]
00148294:  dup      v0.4h, w9
00148298:  mov      w9, #0x379a
0014829c:  str      d0, [sp, #0xb0]
001482a0:  dup      v0.4s, w9
001482a4:  mov      w9, #0x1913
001482a8:  stp      q0, q1, [sp, #0x80]
001482ac:  dup      v0.4h, w9
001482b0:  mov      w9, #0x3408
001482b4:  str      d0, [sp, #0x70]
001482b8:  dup      v0.4h, w9
001482bc:  mov      w9, #0x2204
001482c0:  dup      v19.4s, w9
001482c4:  mov      w9, #0x811a
001482c8:  dup      v22.4h, w9
001482cc:  mov      w9, #-0x4515
001482d0:  dup      v25.4s, w9
001482d4:  and      x9, x8, #0x7ffffff0
001482d8:  str      d0, [sp, #0x60]
001482dc:  ldr      q0, [x11, #0xfa0]
001482e0:  add      x11, x15, x13
001482e4:  mov      x13, x9
001482e8:  str      q0, [sp, #0x50]
001482ec:  ldr      q0, [x12, #0x3c0]
001482f0:  add      x12, x27, #0x30
001482f4:  str      q0, [sp, #0x40]
001482f8:  ldp      q31, q0, [x12, #-0x10]
001482fc:  add      x14, x19, w10, sxtw
00148300:  ldr      q3, [sp, #0x50]
00148304:  ldur     q2, [x29, #-0xd0]
00148308:  subs     x13, x13, #0x10
0014830c:  ldr      q4, [sp, #0xe0]
00148310:  ldr      q10, [x11], #0x10
00148314:  tbl      v1.16b, {v0.16b}, v3.16b
00148318:  tbl      v30.16b, {v0.16b}, v2.16b
0014831c:  tbl      v8.16b, {v31.16b}, v3.16b
00148320:  tbl      v9.16b, {v0.16b}, v4.16b
00148324:  ldur     q3, [x29, #-0xe0]
00148328:  tbl      v14.16b, {v31.16b}, v4.16b
0014832c:  ldr      d4, [sp, #0xb0]
00148330:  tbl      v11.16b, {v31.16b}, v2.16b
00148334:  ushll    v2.8h, v10.8b, #0
00148338:  ushll2   v10.8h, v10.16b, #0
0014833c:  tbl      v13.16b, {v31.16b}, v3.16b
00148340:  add      w10, w10, #0x20
00148344:  xtn      v29.4h, v1.4s
00148348:  tbl      v1.16b, {v0.16b}, v3.16b
0014834c:  xtn      v0.4h, v30.4s
00148350:  xtn      v30.4h, v9.4s
00148354:  ldr      q3, [sp, #0xc0]
00148358:  xtn      v12.4h, v8.4s
0014835c:  xtn      v15.4h, v11.4s
00148360:  xtn      v14.4h, v14.4s
00148364:  add      x12, x12, #0x10
00148368:  umull2   v31.4s, v10.8h, v3.8h
0014836c:  umull    v8.4s, v10.4h, v3.4h
00148370:  xtn      v13.4h, v13.4s
00148374:  umull    v16.4s, v29.4h, v4.4h
00148378:  xtn      v1.4h, v1.4s
0014837c:  umull    v21.4s, v0.4h, v4.4h
00148380:  umull    v23.4s, v30.4h, v4.4h
00148384:  umull2   v9.4s, v2.8h, v3.8h
00148388:  umull    v11.4s, v2.4h, v3.4h
0014838c:  ldr      d3, [sp, #0x70]
00148390:  ldp      q18, q17, [sp, #0x80]
00148394:  ushr     v7.4s, v8.4s, #8
00148398:  ushr     v10.4s, v16.4s, #8
0014839c:  umull    v2.4s, v1.4h, v4.4h
001483a0:  umull    v16.4s, v12.4h, v3.4h
001483a4:  ushr     v23.4s, v23.4s, #8
001483a8:  ushr     v21.4s, v21.4s, #8
001483ac:  ldr      d4, [sp, #0x60]
001483b0:  umull    v27.4s, v13.4h, v3.4h
001483b4:  umull    v24.4s, v15.4h, v3.4h
001483b8:  umull    v28.4s, v14.4h, v3.4h
001483bc:  usra     v10.4s, v31.4s, #8
001483c0:  umull    v29.4s, v29.4h, v4.4h
001483c4:  umull    v3.4s, v30.4h, v4.4h
001483c8:  usra     v23.4s, v8.4s, #8
001483cc:  ushr     v30.4s, v2.4s, #8
001483d0:  ushr     v2.4s, v16.4s, #8
001483d4:  umull    v1.4s, v1.4h, v4.4h
001483d8:  umull    v0.4s, v0.4h, v4.4h
001483dc:  ushr     v4.4s, v11.4s, #8
001483e0:  ushr     v16.4s, v27.4s, #8
001483e4:  ushr     v24.4s, v24.4s, #8
001483e8:  ushr     v28.4s, v28.4s, #8
001483ec:  ushr     v5.4s, v9.4s, #8
001483f0:  usra     v21.4s, v11.4s, #8
001483f4:  usra     v2.4s, v29.4s, #8
001483f8:  usra     v16.4s, v1.4s, #8
001483fc:  add      v27.4s, v10.4s, v17.4s
00148400:  cmhi     v29.4s, v18.4s, v10.4s
00148404:  add      v1.4s, v23.4s, v17.4s
00148408:  cmhi     v23.4s, v18.4s, v23.4s
0014840c:  usra     v24.4s, v0.4s, #8
00148410:  ushr     v0.4s, v31.4s, #8
00148414:  mvn      v29.16b, v29.16b
00148418:  cmhi     v10.4s, v6.4s, v27.4s
0014841c:  ushr     v27.4s, v27.4s, #6
00148420:  mvn      v23.16b, v23.16b
00148424:  usra     v28.4s, v3.4s, #8
00148428:  add      v3.4s, v21.4s, v17.4s
0014842c:  sub      v2.4s, v0.4s, v2.4s
00148430:  cmhi     v0.4s, v18.4s, v21.4s
00148434:  bit      v29.16b, v27.16b, v10.16b
00148438:  cmhi     v27.4s, v6.4s, v1.4s
0014843c:  ushr     v1.4s, v1.4s, #6
00148440:  sub      v5.4s, v5.4s, v16.4s
00148444:  cmhi     v21.4s, v6.4s, v3.4s
00148448:  ushr     v3.4s, v3.4s, #6
0014844c:  mov      v10.16b, v27.16b
00148450:  sub      v4.4s, v4.4s, v24.4s
00148454:  mvn      v24.16b, v0.16b
00148458:  add      v16.4s, v2.4s, v19.4s
0014845c:  umull    v27.4s, v12.4h, v22.4h
00148460:  usra     v30.4s, v9.4s, #8
00148464:  bsl      v10.16b, v1.16b, v23.16b
00148468:  cmgt     v1.4s, v20.4s, v2.4s
0014846c:  umull    v2.4s, v15.4h, v22.4h
00148470:  mov      v15.16b, v21.16b
00148474:  umull    v21.4s, v13.4h, v22.4h
00148478:  sub      v7.4s, v7.4s, v28.4s
0014847c:  ushr     v27.4s, v27.4s, #8
00148480:  cmhi     v12.4s, v6.4s, v16.4s
00148484:  ushr     v16.4s, v16.4s, #6
00148488:  mvn      v1.16b, v1.16b
0014848c:  add      v23.4s, v5.4s, v19.4s
00148490:  cmgt     v5.4s, v20.4s, v5.4s
00148494:  bsl      v15.16b, v3.16b, v24.16b
00148498:  umull    v24.4s, v14.4h, v22.4h
0014849c:  ushr     v2.4s, v2.4s, #8
001484a0:  ushr     v21.4s, v21.4s, #8
001484a4:  add      v28.4s, v7.4s, v19.4s
001484a8:  add      v3.4s, v4.4s, v19.4s
001484ac:  bic      v1.16b, v1.16b, v12.16b
001484b0:  cmgt     v7.4s, v20.4s, v7.4s
001484b4:  cmgt     v4.4s, v20.4s, v4.4s
001484b8:  add      v0.4s, v30.4s, v17.4s
001484bc:  movi     v17.2d, #0x0000ff000000ff
001484c0:  and      v16.16b, v16.16b, v12.16b
001484c4:  ushr     v24.4s, v24.4s, #8
001484c8:  mvn      v5.16b, v5.16b
001484cc:  cmhi     v30.4s, v18.4s, v30.4s
001484d0:  mvn      v7.16b, v7.16b
001484d4:  mvn      v4.16b, v4.16b
001484d8:  movi     v18.4s, #0xe0
001484dc:  usra     v2.4s, v11.4s, #8
001484e0:  cmhi     v11.4s, v6.4s, v23.4s
001484e4:  ushr     v23.4s, v23.4s, #6
001484e8:  and      v1.16b, v1.16b, v17.16b
001484ec:  mvn      v30.16b, v30.16b
001484f0:  usra     v21.4s, v9.4s, #8
001484f4:  cmhi     v9.4s, v6.4s, v3.4s
001484f8:  ushr     v3.4s, v3.4s, #6
001484fc:  bic      v5.16b, v5.16b, v11.16b
00148500:  and      v23.16b, v23.16b, v11.16b
00148504:  usra     v24.4s, v8.4s, #8
00148508:  cmhi     v8.4s, v6.4s, v28.4s
0014850c:  ushr     v28.4s, v28.4s, #6
00148510:  bic      v4.16b, v4.16b, v9.16b
00148514:  and      v3.16b, v3.16b, v9.16b
00148518:  and      v5.16b, v5.16b, v17.16b
0014851c:  bic      v7.16b, v7.16b, v8.16b
00148520:  add      v12.4s, v2.4s, v25.4s
00148524:  cmhi     v2.4s, v26.4s, v2.4s
00148528:  and      v4.16b, v4.16b, v17.16b
0014852c:  orr      v5.16b, v23.16b, v5.16b
00148530:  and      v7.16b, v7.16b, v17.16b
00148534:  movi     v17.4s, #0x1f
00148538:  mvn      v2.16b, v2.16b
0014853c:  orr      v3.16b, v3.16b, v4.16b
00148540:  cmhi     v9.4s, v6.4s, v12.4s
00148544:  ushr     v12.4s, v12.4s, #9
00148548:  usra     v27.4s, v31.4s, #8
0014854c:  orr      v31.16b, v16.16b, v1.16b
00148550:  add      v1.4s, v21.4s, v25.4s
00148554:  and      v16.16b, v28.16b, v8.16b
00148558:  add      v28.4s, v24.4s, v25.4s
0014855c:  cmhi     v21.4s, v26.4s, v21.4s
00148560:  cmhi     v24.4s, v26.4s, v24.4s
00148564:  bic      v2.16b, v2.16b, v9.16b
00148568:  and      v9.16b, v12.16b, v9.16b
0014856c:  cmhi     v11.4s, v6.4s, v1.4s
00148570:  mvn      v21.16b, v21.16b
00148574:  ushr     v1.4s, v1.4s, #9
00148578:  cmhi     v13.4s, v6.4s, v28.4s
0014857c:  mvn      v24.16b, v24.16b
00148580:  ushr     v28.4s, v28.4s, #9
00148584:  and      v2.16b, v2.16b, v17.16b
00148588:  orr      v7.16b, v16.16b, v7.16b
0014858c:  bic      v21.16b, v21.16b, v11.16b
00148590:  and      v1.16b, v1.16b, v11.16b
00148594:  cmhi     v11.4s, v6.4s, v0.4s
00148598:  add      v8.4s, v27.4s, v25.4s
0014859c:  cmhi     v27.4s, v26.4s, v27.4s
001485a0:  bic      v24.16b, v24.16b, v13.16b
001485a4:  ushr     v0.4s, v0.4s, #6
001485a8:  and      v28.16b, v28.16b, v13.16b
001485ac:  orr      v2.16b, v9.16b, v2.16b
001485b0:  and      v21.16b, v21.16b, v17.16b
001485b4:  mvn      v27.16b, v27.16b
001485b8:  and      v24.16b, v24.16b, v17.16b
001485bc:  cmhi     v12.4s, v6.4s, v8.4s
001485c0:  ushr     v8.4s, v8.4s, #9
001485c4:  bif      v0.16b, v30.16b, v11.16b
001485c8:  orr      v1.16b, v1.16b, v21.16b
001485cc:  shl      v21.4s, v31.4s, #3
001485d0:  shl      v30.4s, v5.4s, #3
001485d4:  orr      v4.16b, v28.16b, v24.16b
001485d8:  ushr     v5.4s, v5.4s, #5
001485dc:  bic      v27.16b, v27.16b, v12.16b
001485e0:  and      v8.16b, v8.16b, v12.16b
001485e4:  and      v21.16b, v21.16b, v18.16b
001485e8:  and      v27.16b, v27.16b, v17.16b
001485ec:  movi     v17.4s, #0xf8
001485f0:  orr      v16.16b, v8.16b, v27.16b
001485f4:  shl      v27.4s, v7.4s, #3
001485f8:  ushr     v7.4s, v7.4s, #5
001485fc:  and      v28.16b, v29.16b, v17.16b
00148600:  ushr     v29.4s, v31.4s, #5
00148604:  and      v24.16b, v10.16b, v17.16b
00148608:  shl      v31.4s, v3.4s, #3
0014860c:  and      v0.16b, v0.16b, v17.16b
00148610:  and      v23.16b, v15.16b, v17.16b
00148614:  and      v27.16b, v27.16b, v18.16b
00148618:  ushr     v3.4s, v3.4s, #5
0014861c:  orr      v15.16b, v21.16b, v16.16b
00148620:  orr      v11.16b, v28.16b, v29.16b
00148624:  and      v28.16b, v30.16b, v18.16b
00148628:  orr      v10.16b, v24.16b, v7.16b
0014862c:  and      v7.16b, v31.16b, v18.16b
00148630:  orr      v9.16b, v0.16b, v5.16b
00148634:  orr      v14.16b, v27.16b, v4.16b
00148638:  orr      v8.16b, v23.16b, v3.16b
0014863c:  orr      v13.16b, v28.16b, v1.16b
00148640:  orr      v12.16b, v7.16b, v2.16b
00148644:  ldr      q2, [sp, #0x40]
00148648:  tbl      v0.16b, {v8.16b, v9.16b, v10.16b, v11.16b}, v2.16b
0014864c:  tbl      v1.16b, {v12.16b, v13.16b, v14.16b, v15.16b}, v2.16b
00148650:  st2      {v0.16b, v1.16b}, [x14]
00148654:  b.ne     #0x1482f8
00148658:  cmp      x9, x8
0014865c:  b.eq     #0x1477a4
00148660:  tbz      w8, #3, #0x147698
00148664:  b        #0x147ba8
00148668:  bl       #0x175430

; ===== 0014866c  FUN_0014866c  (5720 bytes) =====
0014866c:  stp      d15, d14, [sp, #-0xa0]!
00148670:  stp      d13, d12, [sp, #0x10]
00148674:  stp      d11, d10, [sp, #0x20]
00148678:  stp      d9, d8, [sp, #0x30]
0014867c:  stp      x29, x30, [sp, #0x40]
00148680:  stp      x28, x27, [sp, #0x50]
00148684:  stp      x26, x25, [sp, #0x60]
00148688:  stp      x24, x23, [sp, #0x70]
0014868c:  stp      x22, x21, [sp, #0x80]
00148690:  stp      x20, x19, [sp, #0x90]
00148694:  add      x29, sp, #0x40
00148698:  sub      sp, sp, #0x1b0
0014869c:  mrs      x8, tpidr_el0
001486a0:  mov      w16, #0x4a85
001486a4:  mov      x23, x5
001486a8:  stur     x8, [x29, #-0xf0]
001486ac:  mov      x30, x1
001486b0:  mov      w1, #0x1913
001486b4:  ldr      x8, [x8, #0x28]
001486b8:  mov      x21, x6
001486bc:  mov      x25, x4
001486c0:  mov      x19, x7
001486c4:  mov      x24, x3
001486c8:  ldr      w22, [x29, #0x60]
001486cc:  stur     x8, [x29, #-0x50]
001486d0:  mov      w15, #0xf
001486d4:  ldrb     w8, [x3]
001486d8:  ldrb     w9, [x5]
001486dc:  ldrb     w10, [x2]
001486e0:  ldrb     w11, [x4]
001486e4:  ldrb     w13, [x0]
001486e8:  stur     x0, [x29, #-0xe0]
001486ec:  add      w9, w9, w8
001486f0:  mov      w3, #0x3408
001486f4:  str      w22, [sp, #0xf0]
001486f8:  add      w11, w11, w10
001486fc:  lsr      w9, w9, #1
00148700:  mul      w14, w13, w16
00148704:  lsr      w11, w11, #1
00148708:  add      w22, w22, #1
0014870c:  mov      w13, #0x2204
00148710:  add      w12, w9, #1
00148714:  mov      w9, #0x6625
00148718:  sbfx     x22, x22, #1, #0x1f
0014871c:  add      w17, w11, #1
00148720:  add      w8, w12, w8
00148724:  lsr      w7, w14, #8
00148728:  add      w10, w17, w10
0014872c:  lsr      w0, w8, #1
00148730:  mov      w8, #-0x379a
00148734:  lsr      w5, w10, #1
00148738:  mov      w11, #0x379a
0014873c:  mov      w10, #0xf0
00148740:  mul      w4, w0, w9
00148744:  mov      w14, #-0x2204
00148748:  mul      w6, w5, w1
0014874c:  mul      w20, w0, w3
00148750:  mov      w0, #-0x4515
00148754:  add      w26, w7, w4, lsr #8
00148758:  mov      w4, #0x811a
0014875c:  lsr      w6, w6, #8
00148760:  mul      w5, w5, w4
00148764:  add      w27, w26, w8
00148768:  cmp      w26, w11
0014876c:  add      w6, w6, w20, lsr #8
00148770:  lsr      w20, w27, #6
00148774:  csel     w26, wzr, w10, lo
00148778:  cmp      w27, #4, lsl #12
0014877c:  sub      x27, x22, #1
00148780:  sub      w6, w7, w6
00148784:  csel     w20, w20, w26, lo
00148788:  add      w26, w6, w13
0014878c:  cmp      w6, w14
00148790:  add      w6, w7, w5, lsr #8
00148794:  lsr      w7, w26, #0xa
00148798:  csel     w28, wzr, w15, lt
0014879c:  cmp      w26, #4, lsl #12
001487a0:  asr      w26, w27, #3
001487a4:  and      x5, x27, #0xfffffffffffffff8
001487a8:  and      w20, w20, #0xf0
001487ac:  sub      x5, x22, x5
001487b0:  csel     w7, w7, w28, lo
001487b4:  mov      x28, x26
001487b8:  str      x5, [sp, #0xe0]
001487bc:  mov      w5, #0x4515
001487c0:  lsl      w22, w28, #4
001487c4:  add      w26, w6, w0
001487c8:  cmp      w6, w5
001487cc:  lsr      w27, w26, #6
001487d0:  mov      w6, #-0x10
001487d4:  orr      w7, w20, w7
001487d8:  csel     w20, wzr, w6, lo
001487dc:  cmp      w26, #4, lsl #12
001487e0:  sxtw     x26, w22
001487e4:  sub      x22, x29, #0x9f
001487e8:  csel     w20, w27, w20, lo
001487ec:  strb     w7, [x21]
001487f0:  add      x7, x22, #0xf
001487f4:  orr      w20, w20, #0xf
001487f8:  stur     x26, [x29, #-0xe8]
001487fc:  and      x27, x7, #0xfffffffffffffff0
00148800:  orr      x7, x26, #1
00148804:  strb     w20, [x21, #1]
00148808:  stur     x7, [x29, #-0xd0]
0014880c:  cbz      x30, #0x1488b4
00148810:  ldrb     w7, [x25]
00148814:  ldrb     w20, [x23]
00148818:  add      w17, w17, w7
0014881c:  ldrb     w7, [x30]
00148820:  add      w12, w12, w20
00148824:  lsr      w17, w17, #1
00148828:  lsr      w12, w12, #1
0014882c:  mul      w16, w7, w16
00148830:  mul      w1, w17, w1
00148834:  mul      w9, w12, w9
00148838:  lsr      w16, w16, #8
0014883c:  mul      w12, w12, w3
00148840:  lsr      w1, w1, #8
00148844:  mul      w17, w17, w4
00148848:  add      w9, w16, w9, lsr #8
0014884c:  add      w12, w1, w12, lsr #8
00148850:  add      w8, w9, w8
00148854:  cmp      w9, w11
00148858:  lsr      w9, w8, #6
0014885c:  sub      w11, w16, w12
00148860:  csel     w10, wzr, w10, lo
00148864:  cmp      w8, #4, lsl #12
00148868:  add      w8, w11, w13
0014886c:  add      w12, w16, w17, lsr #8
00148870:  csel     w9, w9, w10, lo
00148874:  lsr      w10, w8, #0xa
00148878:  cmp      w11, w14
0014887c:  csel     w11, wzr, w15, lt
00148880:  cmp      w8, #4, lsl #12
00148884:  add      w8, w12, w0
00148888:  csel     w10, w10, w11, lo
0014888c:  lsr      w11, w8, #6
00148890:  cmp      w12, w5
00148894:  csel     w12, wzr, w6, lo
00148898:  and      w9, w9, #0xf0
0014889c:  cmp      w8, #4, lsl #12
001488a0:  orr      w8, w9, w10
001488a4:  csel     w9, w11, w12, lo
001488a8:  strb     w8, [x19]
001488ac:  orr      w8, w9, #0xf
001488b0:  strb     w8, [x19, #1]
001488b4:  cmp      w28, #1
001488b8:  b.lt     #0x148aec
001488bc:  mov      w9, #0x11a
001488c0:  mov      w11, #0xc866
001488c4:  mov      w12, #0x2204
001488c8:  dup      v0.8h, w9
001488cc:  mov      w9, #0xbaeb
001488d0:  movi     v1.2d, #0xffffffffffffffff
001488d4:  adrp     x10, #0x114000
001488d8:  dup      v2.8h, w11
001488dc:  dup      v3.8h, w12
001488e0:  dup      v4.8h, w9
001488e4:  ldr      d5, [x10, #0x688]
001488e8:  ldur     x0, [x29, #-0xe0]
001488ec:  mov      x8, xzr
001488f0:  mov      w9, #-0xe
001488f4:  add      x10, x27, #0x20
001488f8:  add      x11, x27, #0x10
001488fc:  add      x12, x27, #0x30
00148900:  b        #0x148920
00148904:  add      x8, x8, #1
00148908:  add      x2, x2, #8
0014890c:  add      x25, x25, #8
00148910:  cmp      x8, x28
00148914:  add      x24, x24, #8
00148918:  add      x23, x23, #8
0014891c:  b.eq     #0x148aec
00148920:  ldr      d6, [x2]
00148924:  ldur     d7, [x2, #1]
00148928:  mov      w16, #1
0014892c:  ldr      d16, [x25]
00148930:  ldur     d17, [x25, #1]
00148934:  orr      x13, x16, x8, lsl #4
00148938:  mov      x14, xzr
0014893c:  uaddl    v18.8h, v17.8b, v6.8b
00148940:  uaddl    v19.8h, v16.8b, v7.8b
00148944:  add      x15, x0, x13
00148948:  add      v20.8h, v18.8h, v19.8h
0014894c:  add      v19.8h, v19.8h, v19.8h
00148950:  add      v18.8h, v18.8h, v18.8h
00148954:  add      v19.8h, v20.8h, v19.8h
00148958:  add      v18.8h, v20.8h, v18.8h
0014895c:  shrn     v19.8b, v19.8h, #3
00148960:  shrn     v18.8b, v18.8h, #3
00148964:  urhadd   v20.8b, v6.8b, v19.8b
00148968:  urhadd   v21.8b, v7.8b, v18.8b
0014896c:  urhadd   v6.8b, v16.8b, v18.8b
00148970:  urhadd   v7.8b, v17.8b, v19.8b
00148974:  st2      {v20.8b, v21.8b}, [x27]
00148978:  st2      {v6.8b, v7.8b}, [x10]
0014897c:  ldr      d6, [x24]
00148980:  ldur     d7, [x24, #1]
00148984:  ldr      d16, [x23]
00148988:  ldur     d17, [x23, #1]
0014898c:  uaddl    v19.8h, v16.8b, v7.8b
00148990:  uaddl    v18.8h, v17.8b, v6.8b
00148994:  add      v20.8h, v18.8h, v19.8h
00148998:  add      v19.8h, v19.8h, v19.8h
0014899c:  add      v18.8h, v18.8h, v18.8h
001489a0:  add      v19.8h, v20.8h, v19.8h
001489a4:  add      v18.8h, v20.8h, v18.8h
001489a8:  shrn     v19.8b, v19.8h, #3
001489ac:  shrn     v18.8b, v18.8h, #3
001489b0:  urhadd   v20.8b, v6.8b, v19.8b
001489b4:  urhadd   v21.8b, v7.8b, v18.8b
001489b8:  urhadd   v6.8b, v16.8b, v18.8b
001489bc:  urhadd   v7.8b, v17.8b, v19.8b
001489c0:  st2      {v20.8b, v21.8b}, [x11]
001489c4:  st2      {v6.8b, v7.8b}, [x12]
001489c8:  ldr      d6, [x15, x14]
001489cc:  add      x17, x27, x14
001489d0:  orr      w14, w14, w13
001489d4:  ldr      d7, [x17]
001489d8:  ldr      d16, [x17, #0x10]
001489dc:  lsl      w14, w14, #1
001489e0:  ushll    v6.8h, v6.8b, #7
001489e4:  mov      w17, w16
001489e8:  mov      w16, wzr
001489ec:  ushll    v7.8h, v7.8b, #7
001489f0:  ushll    v16.8h, v16.8b, #7
001489f4:  and      x14, x14, x9
001489f8:  sqdmulh  v6.8h, v6.8h, v5.h[0]
001489fc:  sqdmulh  v17.8h, v7.8h, v5.h[2]
00148a00:  sqdmulh  v18.8h, v16.8h, v5.h[3]
00148a04:  sqdmulh  v19.8h, v7.8h, v0.8h
00148a08:  sqdmulh  v16.8h, v16.8h, v5.h[1]
00148a0c:  sqadd    v20.8h, v6.8h, v4.8h
00148a10:  sqadd    v21.8h, v6.8h, v2.8h
00148a14:  sqadd    v6.8h, v6.8h, v3.8h
00148a18:  sqadd    v17.8h, v17.8h, v18.8h
00148a1c:  sqadd    v18.8h, v19.8h, v20.8h
00148a20:  sqadd    v16.8h, v16.8h, v21.8h
00148a24:  sqsub    v6.8h, v6.8h, v17.8h
00148a28:  sqadd    v7.8h, v18.8h, v7.8h
00148a2c:  sqshrun  v16.8b, v16.8h, #6
00148a30:  sqshrun  v6.8b, v6.8h, #6
00148a34:  sqshrun  v7.8b, v7.8h, #6
00148a38:  sri      v16.8b, v6.8b, #4
00148a3c:  sri      v7.8b, v1.8b, #4
00148a40:  zip1     v6.16b, v16.16b, v7.16b
00148a44:  str      q6, [x21, x14]
00148a48:  mov      w14, #8
00148a4c:  tbnz     w17, #0, #0x1489c8
00148a50:  cbz      x30, #0x148904
00148a54:  mov      x16, xzr
00148a58:  add      x14, x30, x13
00148a5c:  mov      w15, #1
00148a60:  ldr      d6, [x14, x16]
00148a64:  add      x17, x10, x16
00148a68:  orr      w16, w16, w13
00148a6c:  ldr      d7, [x17]
00148a70:  ldr      d16, [x17, #0x10]
00148a74:  lsl      w16, w16, #1
00148a78:  ushll    v6.8h, v6.8b, #7
00148a7c:  mov      w17, w15
00148a80:  ushll    v7.8h, v7.8b, #7
00148a84:  ushll    v16.8h, v16.8b, #7
00148a88:  and      x15, x16, x9
00148a8c:  mov      w16, #8
00148a90:  sqdmulh  v6.8h, v6.8h, v5.h[0]
00148a94:  sqdmulh  v17.8h, v7.8h, v5.h[2]
00148a98:  sqdmulh  v18.8h, v16.8h, v5.h[3]
00148a9c:  sqdmulh  v19.8h, v7.8h, v0.8h
00148aa0:  sqdmulh  v16.8h, v16.8h, v5.h[1]
00148aa4:  sqadd    v20.8h, v6.8h, v4.8h
00148aa8:  sqadd    v21.8h, v6.8h, v2.8h
00148aac:  sqadd    v6.8h, v6.8h, v3.8h
00148ab0:  sqadd    v17.8h, v17.8h, v18.8h
00148ab4:  sqadd    v18.8h, v19.8h, v20.8h
00148ab8:  sqadd    v16.8h, v16.8h, v21.8h
00148abc:  sqsub    v6.8h, v6.8h, v17.8h
00148ac0:  sqadd    v7.8h, v18.8h, v7.8h
00148ac4:  sqshrun  v16.8b, v16.8h, #6
00148ac8:  sqshrun  v6.8b, v6.8h, #6
00148acc:  sqshrun  v7.8b, v7.8h, #6
00148ad0:  sri      v16.8b, v6.8b, #4
00148ad4:  sri      v7.8b, v1.8b, #4
00148ad8:  zip1     v6.16b, v16.16b, v7.16b
00148adc:  str      q6, [x19, x15]
00148ae0:  mov      w15, wzr
00148ae4:  tbnz     w17, #0, #0x148a60
00148ae8:  b        #0x148904
00148aec:  ldr      x22, [sp, #0xe0]
00148af0:  sub      x0, x29, #0xa8
00148af4:  mov      x1, x2
00148af8:  mov      w3, #9
00148afc:  stp      x28, x30, [sp, #0xd0]
00148b00:  mov      w20, #9
00148b04:  mov      w8, w22
00148b08:  sxtw     x26, w8
00148b0c:  mov      x2, x26
00148b10:  bl       #0x175670
00148b14:  sub      x0, x29, #0xb8
00148b18:  mov      x1, x25
00148b1c:  mov      x2, x26
00148b20:  mov      w3, #9
00148b24:  bl       #0x175670
00148b28:  sub      w8, w20, w22
00148b2c:  sub      x28, x22, #1
00148b30:  sub      x22, x29, #0xa8
00148b34:  sxtw     x25, w8
00148b38:  sub      x8, x29, #0xa8
00148b3c:  ldrb     w1, [x8, x28]
00148b40:  add      x0, x8, x26
00148b44:  mov      x2, x25
00148b48:  bl       #0x175500
00148b4c:  sub      x8, x29, #0xb8
00148b50:  mov      x2, x25
00148b54:  ldrb     w1, [x8, x28]
00148b58:  add      x0, x8, x26
00148b5c:  bl       #0x175500
00148b60:  ldur     d0, [x29, #-0xa8]
00148b64:  ldur     d1, [x29, #-0xa7]
00148b68:  mov      x20, x27
00148b6c:  ldur     d2, [x29, #-0xb8]
00148b70:  ldur     d3, [x29, #-0xb7]
00148b74:  add      x8, x27, #0x20
00148b78:  sub      x0, x29, #0xa8
00148b7c:  mov      x1, x24
00148b80:  mov      x2, x26
00148b84:  uaddl    v4.8h, v3.8b, v0.8b
00148b88:  uaddl    v5.8h, v2.8b, v1.8b
00148b8c:  mov      w3, #9
00148b90:  add      v6.8h, v4.8h, v5.8h
00148b94:  add      v5.8h, v5.8h, v5.8h
00148b98:  add      v4.8h, v4.8h, v4.8h
00148b9c:  add      v5.8h, v6.8h, v5.8h
00148ba0:  add      v4.8h, v6.8h, v4.8h
00148ba4:  shrn     v5.8b, v5.8h, #3
00148ba8:  shrn     v4.8b, v4.8h, #3
00148bac:  urhadd   v6.8b, v0.8b, v5.8b
00148bb0:  urhadd   v7.8b, v1.8b, v4.8b
00148bb4:  urhadd   v0.8b, v2.8b, v4.8b
00148bb8:  urhadd   v1.8b, v3.8b, v5.8b
00148bbc:  st2      {v6.8b, v7.8b}, [x20], #16
00148bc0:  str      x8, [sp, #8]
00148bc4:  st2      {v0.8b, v1.8b}, [x8]
00148bc8:  bl       #0x175670
00148bcc:  sub      x0, x29, #0xb8
00148bd0:  mov      x1, x23
00148bd4:  mov      x2, x26
00148bd8:  mov      w3, #9
00148bdc:  bl       #0x175670
00148be0:  ldrb     w1, [x22, x28]
00148be4:  add      x0, x22, x26
00148be8:  mov      x2, x25
00148bec:  bl       #0x175500
00148bf0:  sub      x8, x29, #0xb8
00148bf4:  mov      x2, x25
00148bf8:  ldrb     w1, [x8, x28]
00148bfc:  add      x0, x8, x26
00148c00:  bl       #0x175500
00148c04:  ldur     d0, [x29, #-0xa8]
00148c08:  ldur     d1, [x29, #-0xa7]
00148c0c:  ldur     d2, [x29, #-0xb8]
00148c10:  ldur     d3, [x29, #-0xb7]
00148c14:  ldur     x8, [x29, #-0xd0]
00148c18:  ldr      w9, [sp, #0xf0]
00148c1c:  uaddl    v5.8h, v2.8b, v1.8b
00148c20:  uaddl    v4.8h, v3.8b, v0.8b
00148c24:  sub      w8, w9, w8
00148c28:  add      x9, x27, #0x30
00148c2c:  cmp      w8, #1
00148c30:  add      v6.8h, v4.8h, v5.8h
00148c34:  add      v5.8h, v5.8h, v5.8h
00148c38:  add      v4.8h, v4.8h, v4.8h
00148c3c:  add      v5.8h, v6.8h, v5.8h
00148c40:  add      v4.8h, v6.8h, v4.8h
00148c44:  shrn     v5.8b, v5.8h, #3
00148c48:  shrn     v4.8b, v4.8h, #3
00148c4c:  urhadd   v6.8b, v0.8b, v5.8b
00148c50:  urhadd   v7.8b, v1.8b, v4.8b
00148c54:  urhadd   v0.8b, v2.8b, v4.8b
00148c58:  urhadd   v1.8b, v3.8b, v5.8b
00148c5c:  st2      {v6.8b, v7.8b}, [x20]
00148c60:  st2      {v0.8b, v1.8b}, [x9]
00148c64:  b.lt     #0x148e9c
00148c68:  cmp      w8, #8
00148c6c:  b.hs     #0x148ee0
00148c70:  ldur     x17, [x29, #-0xe0]
00148c74:  mov      x9, xzr
00148c78:  ldur     x11, [x29, #-0xe8]
00148c7c:  add      x12, x9, x27
00148c80:  mov      w14, #-0x379a
00148c84:  mov      w16, #0x379a
00148c88:  mov      w0, #0x1913
00148c8c:  mov      w1, #0x3408
00148c90:  add      w10, w11, w9
00148c94:  add      x11, x9, x11
00148c98:  sub      x9, x8, x9
00148c9c:  lsl      w15, w10, #1
00148ca0:  add      x13, x11, x17
00148ca4:  add      x10, x12, #0x10
00148ca8:  mov      w11, #0x4a85
00148cac:  add      x12, x13, #1
00148cb0:  mov      w13, #0x6625
00148cb4:  add      w15, w15, #2
00148cb8:  mov      w17, #0xf0
00148cbc:  mov      w2, #0x2204
00148cc0:  mov      w3, #-0x2204
00148cc4:  mov      w4, #0xf
00148cc8:  mov      w5, #0x811a
00148ccc:  mov      w6, #-0x4515
00148cd0:  mov      w7, #0x4515
00148cd4:  mov      w22, #-0x10
00148cd8:  ldrb     w20, [x12], #1
00148cdc:  ldurb    w23, [x10, #-0x10]
00148ce0:  ldrb     w24, [x10], #1
00148ce4:  mul      w20, w20, w11
00148ce8:  mul      w25, w23, w0
00148cec:  mul      w26, w24, w13
00148cf0:  lsr      w20, w20, #8
00148cf4:  mul      w24, w24, w1
00148cf8:  lsr      w25, w25, #8
00148cfc:  mul      w23, w23, w5
00148d00:  add      w26, w20, w26, lsr #8
00148d04:  add      w24, w25, w24, lsr #8
00148d08:  add      x25, x21, w15, sxtw
00148d0c:  add      w15, w15, #2
00148d10:  add      w28, w26, w14
00148d14:  cmp      w26, w16
00148d18:  lsr      w26, w28, #6
00148d1c:  sub      w24, w20, w24
00148d20:  csel     w30, wzr, w17, lo
00148d24:  cmp      w28, #4, lsl #12
00148d28:  add      w28, w24, w2
00148d2c:  add      w20, w20, w23, lsr #8
00148d30:  csel     w23, w26, w30, lo
00148d34:  lsr      w26, w28, #0xa
00148d38:  cmp      w24, w3
00148d3c:  csel     w24, wzr, w4, lt
00148d40:  cmp      w28, #4, lsl #12
00148d44:  add      w28, w20, w6
00148d48:  csel     w24, w26, w24, lo
00148d4c:  lsr      w26, w28, #6
00148d50:  cmp      w20, w7
00148d54:  csel     w20, wzr, w22, lo
00148d58:  cmp      w28, #4, lsl #12
00148d5c:  and      w23, w23, #0xf0
00148d60:  csel     w20, w26, w20, lo
00148d64:  orr      w23, w23, w24
00148d68:  subs     x9, x9, #1
00148d6c:  orr      w20, w20, #0xf
00148d70:  strb     w23, [x25]
00148d74:  strb     w20, [x25, #1]
00148d78:  b.ne     #0x148cd8
00148d7c:  ldr      x15, [sp, #0xd8]
00148d80:  cbz      x15, #0x148e9c
00148d84:  cmp      w8, #1
00148d88:  b.lt     #0x148e9c
00148d8c:  cmp      w8, #8
00148d90:  b.hs     #0x1491d4
00148d94:  mov      x9, xzr
00148d98:  ldur     x11, [x29, #-0xe8]
00148d9c:  add      x12, x9, x27
00148da0:  sub      x8, x8, x9
00148da4:  mov      w13, #-0x379a
00148da8:  mov      w16, #0xf0
00148dac:  mov      w17, #0x1913
00148db0:  add      w10, w11, w9
00148db4:  add      x11, x9, x11
00148db8:  mov      w9, #0x4a85
00148dbc:  lsl      w14, w10, #1
00148dc0:  add      x11, x11, x15
00148dc4:  add      x10, x12, #0x30
00148dc8:  add      x11, x11, #1
00148dcc:  mov      w12, #0x6625
00148dd0:  mov      w15, #0x379a
00148dd4:  add      w14, w14, #2
00148dd8:  mov      w0, #0x3408
00148ddc:  mov      w1, #0x2204
00148de0:  mov      w2, #-0x2204
00148de4:  mov      w3, #0xf
00148de8:  mov      w4, #0x811a
00148dec:  mov      w5, #-0x4515
00148df0:  mov      w6, #0x4515
00148df4:  mov      w7, #-0x10
00148df8:  ldrb     w20, [x11], #1
00148dfc:  ldurb    w21, [x10, #-0x10]
00148e00:  ldrb     w22, [x10], #1
00148e04:  mul      w20, w20, w9
00148e08:  mul      w23, w21, w17
00148e0c:  mul      w24, w22, w12
00148e10:  lsr      w20, w20, #8
00148e14:  mul      w22, w22, w0
00148e18:  lsr      w23, w23, #8
00148e1c:  mul      w21, w21, w4
00148e20:  add      w24, w20, w24, lsr #8
00148e24:  add      w22, w23, w22, lsr #8
00148e28:  add      x23, x19, w14, sxtw
00148e2c:  add      w14, w14, #2
00148e30:  add      w25, w24, w13
00148e34:  cmp      w24, w15
00148e38:  lsr      w24, w25, #6
00148e3c:  sub      w22, w20, w22
00148e40:  csel     w26, wzr, w16, lo
00148e44:  cmp      w25, #4, lsl #12
00148e48:  add      w25, w22, w1
00148e4c:  add      w20, w20, w21, lsr #8
00148e50:  csel     w21, w24, w26, lo
00148e54:  lsr      w24, w25, #0xa
00148e58:  cmp      w22, w2
00148e5c:  csel     w22, wzr, w3, lt
00148e60:  cmp      w25, #4, lsl #12
00148e64:  add      w25, w20, w5
00148e68:  csel     w22, w24, w22, lo
00148e6c:  lsr      w24, w25, #6
00148e70:  cmp      w20, w6
00148e74:  csel     w20, wzr, w7, lo
00148e78:  cmp      w25, #4, lsl #12
00148e7c:  and      w21, w21, #0xf0
00148e80:  csel     w20, w24, w20, lo
00148e84:  orr      w21, w21, w22
00148e88:  subs     x8, x8, #1
00148e8c:  orr      w20, w20, #0xf
00148e90:  strb     w21, [x23]
00148e94:  strb     w20, [x23, #1]
00148e98:  b.ne     #0x148df8
00148e9c:  ldur     x8, [x29, #-0xf0]
00148ea0:  ldr      x8, [x8, #0x28]
00148ea4:  ldur     x9, [x29, #-0x50]
00148ea8:  cmp      x8, x9
00148eac:  b.ne     #0x149cc0
00148eb0:  add      sp, sp, #0x1b0
00148eb4:  ldp      x20, x19, [sp, #0x90]
00148eb8:  ldp      x22, x21, [sp, #0x80]
00148ebc:  ldp      x24, x23, [sp, #0x70]
00148ec0:  ldp      x26, x25, [sp, #0x60]
00148ec4:  ldp      x28, x27, [sp, #0x50]
00148ec8:  ldp      x29, x30, [sp, #0x40]
00148ecc:  ldp      d9, d8, [sp, #0x30]
00148ed0:  ldp      d11, d10, [sp, #0x20]
00148ed4:  ldp      d13, d12, [sp, #0x10]
00148ed8:  ldp      d15, d14, [sp], #0xa0
00148edc:  ret      
00148ee0:  ldr      x13, [sp, #0xd0]
00148ee4:  mov      w11, #2
00148ee8:  sub      x12, x8, #1
00148eec:  ldur     x17, [x29, #-0xe0]
00148ef0:  bfi      w11, w13, #5, #0x1b
00148ef4:  add      w9, w11, w12, lsl #1
00148ef8:  cmp      w9, w11
00148efc:  mov      x9, xzr
00148f00:  b.lt     #0x148c78
00148f04:  lsr      x10, x12, #0x1f
00148f08:  cbnz     x10, #0x148c78
00148f0c:  lsl      w10, w13, #5
00148f10:  lsl      x12, x12, #1
00148f14:  add      x10, x21, w10, sxtw
00148f18:  add      x13, x10, #2
00148f1c:  add      x14, x13, x12
00148f20:  cmp      x14, x13
00148f24:  b.lo     #0x148c78
00148f28:  add      x13, x10, #3
00148f2c:  add      x12, x13, x12
00148f30:  cmp      x12, x13
00148f34:  b.lo     #0x148c78
00148f38:  add      x9, x10, #2
00148f3c:  ldur     x10, [x29, #-0xe8]
00148f40:  add      x13, x27, x8
00148f44:  add      x12, x9, x8, lsl #1
00148f48:  add      x13, x13, #0x10
00148f4c:  add      x10, x17, x10
00148f50:  add      x10, x10, x8
00148f54:  cmp      x12, x27
00148f58:  add      x14, x10, #1
00148f5c:  ldur     x10, [x29, #-0xd0]
00148f60:  ccmp     x9, x13, #2, hi
00148f64:  add      x13, x17, x10
00148f68:  cset     w10, lo
00148f6c:  cmp      x9, x14
00148f70:  ccmp     x13, x12, #2, lo
00148f74:  mov      x9, xzr
00148f78:  b.lo     #0x148c78
00148f7c:  tbnz     w10, #0, #0x148c78
00148f80:  cmp      w8, #0x10
00148f84:  adrp     x12, #0x114000
00148f88:  adrp     x10, #0x114000
00148f8c:  b.hs     #0x1494c8
00148f90:  mov      x9, xzr
00148f94:  ldur     x15, [x29, #-0xe8]
00148f98:  mov      x13, x9
00148f9c:  ldr      q0, [x12, #0x530]
00148fa0:  mov      w11, #0x4a85
00148fa4:  mov      w14, #0x6625
00148fa8:  movi     v4.4s, #0x40, lsl #8
00148fac:  add      x12, x13, x15
00148fb0:  dup      v1.8h, w11
00148fb4:  dup      v2.4h, w14
00148fb8:  add      x12, x12, x17
00148fbc:  mov      w14, #0x379a
00148fc0:  add      w15, w15, w13
00148fc4:  add      x11, x12, #1
00148fc8:  mov      w12, #-0x379a
00148fcc:  dup      v5.4s, w14
00148fd0:  dup      v3.4s, w12
00148fd4:  mov      w12, #0x1913
00148fd8:  mov      w14, #0x3408
00148fdc:  dup      v7.4h, w12
00148fe0:  mov      w12, #0x2204
00148fe4:  dup      v16.4h, w14
00148fe8:  dup      v17.4s, w12
00148fec:  mov      w12, #-0x2204
00148ff0:  mov      w14, #0x811a
00148ff4:  movi     v6.4s, #0xf0
00148ff8:  dup      v18.4s, w12
00148ffc:  dup      v20.4h, w14
00149000:  mov      w12, #-0x4515
00149004:  mov      w14, #0x4515
00149008:  lsl      w15, w15, #1
0014900c:  dup      v22.4s, w12
00149010:  dup      v23.4s, w14
00149014:  adrp     x12, #0x114000
00149018:  and      x9, x8, #0x7ffffff8
0014901c:  add      x14, x13, x27
00149020:  ldr      q24, [x10, #0x260]
00149024:  ldr      q25, [x12, #0x110]
00149028:  add      w10, w15, #2
0014902c:  add      x12, x14, #0x10
00149030:  sub      x13, x13, x9
00149034:  ldur     d27, [x12, #-0x10]
00149038:  ldr      d26, [x12]
0014903c:  add      x14, x21, w10, sxtw
00149040:  ldr      d30, [x11], #8
00149044:  adds     x13, x13, #8
00149048:  tbl      v29.16b, {v27.16b}, v24.16b
0014904c:  tbl      v28.16b, {v26.16b}, v24.16b
00149050:  tbl      v26.16b, {v26.16b}, v0.16b
00149054:  tbl      v27.16b, {v27.16b}, v0.16b
00149058:  ushll    v30.8h, v30.8b, #0
0014905c:  add      w10, w10, #0x10
00149060:  add      x12, x12, #8
00149064:  xtn      v29.4h, v29.4s
00149068:  xtn      v26.4h, v26.4s
0014906c:  xtn      v28.4h, v28.4s
00149070:  xtn      v27.4h, v27.4s
00149074:  umull    v11.4s, v30.4h, v1.4h
00149078:  umull2   v30.4s, v30.8h, v1.8h
0014907c:  umull    v9.4s, v29.4h, v7.4h
00149080:  umull    v8.4s, v26.4h, v2.4h
00149084:  umull    v31.4s, v28.4h, v2.4h
00149088:  umull    v10.4s, v27.4h, v7.4h
0014908c:  umull    v27.4s, v27.4h, v20.4h
00149090:  umull    v29.4s, v29.4h, v20.4h
00149094:  umull    v28.4s, v28.4h, v16.4h
00149098:  umull    v26.4s, v26.4h, v16.4h
0014909c:  ushr     v9.4s, v9.4s, #8
001490a0:  ushr     v8.4s, v8.4s, #8
001490a4:  ushr     v31.4s, v31.4s, #8
001490a8:  ushr     v10.4s, v10.4s, #8
001490ac:  ushr     v27.4s, v27.4s, #8
001490b0:  ushr     v29.4s, v29.4s, #8
001490b4:  usra     v9.4s, v28.4s, #8
001490b8:  ushr     v28.4s, v11.4s, #8
001490bc:  usra     v8.4s, v30.4s, #8
001490c0:  usra     v10.4s, v26.4s, #8
001490c4:  ushr     v26.4s, v30.4s, #8
001490c8:  usra     v31.4s, v11.4s, #8
001490cc:  usra     v27.4s, v30.4s, #8
001490d0:  usra     v29.4s, v11.4s, #8
001490d4:  sub      v28.4s, v28.4s, v9.4s
001490d8:  add      v30.4s, v8.4s, v3.4s
001490dc:  cmhi     v8.4s, v5.4s, v8.4s
001490e0:  sub      v26.4s, v26.4s, v10.4s
001490e4:  cmhi     v11.4s, v5.4s, v31.4s
001490e8:  add      v31.4s, v31.4s, v3.4s
001490ec:  add      v9.4s, v27.4s, v22.4s
001490f0:  cmhi     v27.4s, v23.4s, v27.4s
001490f4:  add      v14.4s, v28.4s, v17.4s
001490f8:  cmhi     v10.4s, v23.4s, v29.4s
001490fc:  add      v29.4s, v29.4s, v22.4s
00149100:  mvn      v8.16b, v8.16b
00149104:  cmhi     v12.4s, v4.4s, v30.4s
00149108:  ushr     v30.4s, v30.4s, #6
0014910c:  add      v13.4s, v26.4s, v17.4s
00149110:  cmgt     v28.4s, v18.4s, v28.4s
00149114:  mvn      v11.16b, v11.16b
00149118:  cmgt     v26.4s, v18.4s, v26.4s
0014911c:  mvn      v27.16b, v27.16b
00149120:  cmhi     v15.4s, v4.4s, v31.4s
00149124:  ushr     v31.4s, v31.4s, #6
00149128:  cmhi     v21.4s, v4.4s, v9.4s
0014912c:  mvn      v10.16b, v10.16b
00149130:  cmhi     v19.4s, v4.4s, v29.4s
00149134:  bif      v30.16b, v8.16b, v12.16b
00149138:  mvn      v28.16b, v28.16b
0014913c:  cmhi     v12.4s, v4.4s, v14.4s
00149140:  ushr     v14.4s, v14.4s, #0xa
00149144:  mvn      v26.16b, v26.16b
00149148:  cmhi     v8.4s, v4.4s, v13.4s
0014914c:  ushr     v13.4s, v13.4s, #0xa
00149150:  bif      v31.16b, v11.16b, v15.16b
00149154:  ushr     v9.4s, v9.4s, #6
00149158:  bic      v27.16b, v27.16b, v21.16b
0014915c:  ushr     v29.4s, v29.4s, #6
00149160:  bic      v10.16b, v10.16b, v19.16b
00149164:  bic      v28.16b, v28.16b, v12.16b
00149168:  and      v11.16b, v14.16b, v12.16b
0014916c:  movi     v12.4s, #0xf
00149170:  bic      v26.16b, v26.16b, v8.16b
00149174:  and      v8.16b, v13.16b, v8.16b
00149178:  and      v21.16b, v9.16b, v21.16b
0014917c:  and      v27.16b, v27.16b, v6.16b
00149180:  and      v30.16b, v30.16b, v6.16b
00149184:  and      v19.16b, v29.16b, v19.16b
00149188:  and      v29.16b, v10.16b, v6.16b
0014918c:  and      v31.16b, v31.16b, v6.16b
00149190:  and      v26.16b, v26.16b, v12.16b
00149194:  orr      v10.16b, v21.16b, v27.16b
00149198:  orr      v21.16b, v30.16b, v8.16b
0014919c:  and      v27.16b, v28.16b, v12.16b
001491a0:  orr      v9.16b, v19.16b, v29.16b
001491a4:  orr      v19.16b, v31.16b, v11.16b
001491a8:  orr      v29.16b, v21.16b, v26.16b
001491ac:  movi     v21.8b, #0xf
001491b0:  orr      v28.16b, v19.16b, v27.16b
001491b4:  tbl      v19.16b, {v9.16b, v10.16b}, v25.16b
001491b8:  tbl      v26.16b, {v28.16b, v29.16b}, v25.16b
001491bc:  orr      v27.8b, v19.8b, v21.8b
001491c0:  st2      {v26.8b, v27.8b}, [x14]
001491c4:  b.ne     #0x149034
001491c8:  cmp      x9, x8
001491cc:  b.ne     #0x148c78
001491d0:  b        #0x148d7c
001491d4:  ldr      x13, [sp, #0xd0]
001491d8:  mov      w10, #2
001491dc:  sub      x12, x8, #1
001491e0:  bfi      w10, w13, #5, #0x1b
001491e4:  add      w9, w10, w12, lsl #1
001491e8:  cmp      w9, w10
001491ec:  mov      x9, xzr
001491f0:  b.lt     #0x148d98
001491f4:  lsr      x11, x12, #0x1f
001491f8:  cbnz     x11, #0x148d98
001491fc:  lsl      w11, w13, #5
00149200:  lsl      x12, x12, #1
00149204:  add      x11, x19, w11, sxtw
00149208:  add      x13, x11, #2
0014920c:  add      x14, x13, x12
00149210:  cmp      x14, x13
00149214:  b.lo     #0x148d98
00149218:  add      x13, x11, #3
0014921c:  add      x12, x13, x12
00149220:  cmp      x12, x13
00149224:  b.lo     #0x148d98
00149228:  add      x9, x11, #2
0014922c:  ldur     x11, [x29, #-0xe8]
00149230:  ldr      x14, [sp, #8]
00149234:  add      x12, x9, x8, lsl #1
00149238:  add      x13, x27, x8
0014923c:  add      x11, x15, x11
00149240:  add      x13, x13, #0x30
00149244:  add      x11, x11, x8
00149248:  cmp      x14, x12
0014924c:  add      x14, x11, #1
00149250:  ldur     x11, [x29, #-0xd0]
00149254:  ccmp     x9, x13, #2, lo
00149258:  add      x13, x15, x11
0014925c:  cset     w11, lo
00149260:  cmp      x9, x14
00149264:  ccmp     x13, x12, #2, lo
00149268:  mov      x9, xzr
0014926c:  b.lo     #0x148d98
00149270:  tbnz     w11, #0, #0x148d98
00149274:  cmp      w8, #0x10
00149278:  b.hs     #0x1498bc
0014927c:  mov      x9, xzr
00149280:  ldur     x12, [x29, #-0xe8]
00149284:  mov      x13, x9
00149288:  adrp     x10, #0x114000
0014928c:  ldr      q0, [x10, #0x530]
00149290:  mov      w10, #0x4a85
00149294:  mov      w14, #-0x379a
00149298:  add      x11, x13, x12
0014929c:  dup      v1.8h, w10
001492a0:  add      w12, w12, w13
001492a4:  add      x10, x11, x15
001492a8:  mov      w11, #0x6625
001492ac:  dup      v3.4s, w14
001492b0:  dup      v2.4h, w11
001492b4:  mov      w11, #0x379a
001492b8:  movi     v4.4s, #0x40, lsl #8
001492bc:  dup      v5.4s, w11
001492c0:  mov      w11, #0x1913
001492c4:  movi     v6.4s, #0xf0
001492c8:  dup      v7.4h, w11
001492cc:  mov      w11, #0x3408
001492d0:  mov      w14, #-0x2204
001492d4:  dup      v16.4h, w11
001492d8:  mov      w11, #0x2204
001492dc:  lsl      w12, w12, #1
001492e0:  dup      v17.4s, w11
001492e4:  mov      w11, #0x811a
001492e8:  dup      v18.4s, w14
001492ec:  dup      v20.4h, w11
001492f0:  mov      w11, #-0x4515
001492f4:  adrp     x14, #0x114000
001492f8:  dup      v21.4s, w11
001492fc:  mov      w11, #0x4515
00149300:  and      x9, x8, #0x7ffffff8
00149304:  dup      v23.4s, w11
00149308:  adrp     x11, #0x114000
0014930c:  ldr      q24, [x14, #0x260]
00149310:  add      x14, x13, x27
00149314:  ldr      q25, [x11, #0x110]
00149318:  add      x10, x10, #1
0014931c:  add      w11, w12, #2
00149320:  add      x12, x14, #0x30
00149324:  sub      x13, x13, x9
00149328:  ldur     d27, [x12, #-0x10]
0014932c:  ldr      d26, [x12]
00149330:  add      x14, x19, w11, sxtw
00149334:  ldr      d30, [x10], #8
00149338:  adds     x13, x13, #8
0014933c:  tbl      v29.16b, {v27.16b}, v24.16b
00149340:  tbl      v28.16b, {v26.16b}, v24.16b
00149344:  tbl      v26.16b, {v26.16b}, v0.16b
00149348:  tbl      v27.16b, {v27.16b}, v0.16b
0014934c:  ushll    v30.8h, v30.8b, #0
00149350:  add      w11, w11, #0x10
00149354:  add      x12, x12, #8
00149358:  xtn      v29.4h, v29.4s
0014935c:  xtn      v26.4h, v26.4s
00149360:  xtn      v28.4h, v28.4s
00149364:  xtn      v27.4h, v27.4s
00149368:  umull    v11.4s, v30.4h, v1.4h
0014936c:  umull2   v30.4s, v30.8h, v1.8h
00149370:  umull    v9.4s, v29.4h, v7.4h
00149374:  umull    v8.4s, v26.4h, v2.4h
00149378:  umull    v31.4s, v28.4h, v2.4h
0014937c:  umull    v10.4s, v27.4h, v7.4h
00149380:  umull    v27.4s, v27.4h, v20.4h
00149384:  umull    v29.4s, v29.4h, v20.4h
00149388:  umull    v28.4s, v28.4h, v16.4h
0014938c:  umull    v26.4s, v26.4h, v16.4h
00149390:  ushr     v9.4s, v9.4s, #8
00149394:  ushr     v8.4s, v8.4s, #8
00149398:  ushr     v31.4s, v31.4s, #8
0014939c:  ushr     v10.4s, v10.4s, #8
001493a0:  ushr     v27.4s, v27.4s, #8
001493a4:  ushr     v29.4s, v29.4s, #8
001493a8:  usra     v9.4s, v28.4s, #8
001493ac:  ushr     v28.4s, v11.4s, #8
001493b0:  usra     v8.4s, v30.4s, #8
001493b4:  usra     v10.4s, v26.4s, #8
001493b8:  ushr     v26.4s, v30.4s, #8
001493bc:  usra     v31.4s, v11.4s, #8
001493c0:  usra     v27.4s, v30.4s, #8
001493c4:  usra     v29.4s, v11.4s, #8
001493c8:  sub      v28.4s, v28.4s, v9.4s
001493cc:  add      v30.4s, v8.4s, v3.4s
001493d0:  cmhi     v8.4s, v5.4s, v8.4s
001493d4:  sub      v26.4s, v26.4s, v10.4s
001493d8:  cmhi     v11.4s, v5.4s, v31.4s
001493dc:  add      v31.4s, v31.4s, v3.4s
001493e0:  add      v9.4s, v27.4s, v21.4s
001493e4:  cmhi     v27.4s, v23.4s, v27.4s
001493e8:  add      v14.4s, v28.4s, v17.4s
001493ec:  cmhi     v10.4s, v23.4s, v29.4s
001493f0:  add      v29.4s, v29.4s, v21.4s
001493f4:  mvn      v8.16b, v8.16b
001493f8:  cmhi     v12.4s, v4.4s, v30.4s
001493fc:  ushr     v30.4s, v30.4s, #6
00149400:  add      v13.4s, v26.4s, v17.4s
00149404:  cmgt     v28.4s, v18.4s, v28.4s
00149408:  mvn      v11.16b, v11.16b
0014940c:  cmgt     v26.4s, v18.4s, v26.4s
00149410:  mvn      v27.16b, v27.16b
00149414:  cmhi     v15.4s, v4.4s, v31.4s
00149418:  ushr     v31.4s, v31.4s, #6
0014941c:  cmhi     v22.4s, v4.4s, v9.4s
00149420:  mvn      v10.16b, v10.16b
00149424:  cmhi     v19.4s, v4.4s, v29.4s
00149428:  bif      v30.16b, v8.16b, v12.16b
0014942c:  mvn      v28.16b, v28.16b
00149430:  cmhi     v12.4s, v4.4s, v14.4s
00149434:  ushr     v14.4s, v14.4s, #0xa
00149438:  mvn      v26.16b, v26.16b
0014943c:  cmhi     v8.4s, v4.4s, v13.4s
00149440:  ushr     v13.4s, v13.4s, #0xa
00149444:  bif      v31.16b, v11.16b, v15.16b
00149448:  ushr     v9.4s, v9.4s, #6
0014944c:  bic      v27.16b, v27.16b, v22.16b
00149450:  ushr     v29.4s, v29.4s, #6
00149454:  bic      v10.16b, v10.16b, v19.16b
00149458:  bic      v28.16b, v28.16b, v12.16b
0014945c:  and      v11.16b, v14.16b, v12.16b
00149460:  movi     v12.4s, #0xf
00149464:  bic      v26.16b, v26.16b, v8.16b
00149468:  and      v8.16b, v13.16b, v8.16b
0014946c:  and      v22.16b, v9.16b, v22.16b
00149470:  and      v27.16b, v27.16b, v6.16b
00149474:  and      v30.16b, v30.16b, v6.16b
00149478:  and      v19.16b, v29.16b, v19.16b
0014947c:  and      v29.16b, v10.16b, v6.16b
00149480:  and      v31.16b, v31.16b, v6.16b
00149484:  and      v26.16b, v26.16b, v12.16b
00149488:  orr      v10.16b, v22.16b, v27.16b
0014948c:  orr      v22.16b, v30.16b, v8.16b
00149490:  and      v27.16b, v28.16b, v12.16b
00149494:  orr      v9.16b, v19.16b, v29.16b
00149498:  orr      v19.16b, v31.16b, v11.16b
0014949c:  orr      v29.16b, v22.16b, v26.16b
001494a0:  movi     v22.8b, #0xf
001494a4:  orr      v28.16b, v19.16b, v27.16b
001494a8:  tbl      v19.16b, {v9.16b, v10.16b}, v25.16b
001494ac:  tbl      v26.16b, {v28.16b, v29.16b}, v25.16b
001494b0:  orr      v27.8b, v19.8b, v22.8b
001494b4:  st2      {v26.8b, v27.8b}, [x14]
001494b8:  b.ne     #0x149328
001494bc:  cmp      x9, x8
001494c0:  b.ne     #0x148d98
001494c4:  b        #0x148e9c
001494c8:  adrp     x13, #0x113000
001494cc:  adrp     x14, #0x114000
001494d0:  mov      w15, #0x4a85
001494d4:  ldr      q0, [x13, #0xfa0]
001494d8:  mov      w13, #0x6625
001494dc:  movi     v5.4s, #0x40, lsl #8
001494e0:  and      x9, x8, #0x7ffffff0
001494e4:  str      q0, [sp, #0xf0]
001494e8:  ldr      q0, [x14, #0x410]
001494ec:  mov      w14, #0x379a
001494f0:  str      q0, [sp, #0xe0]
001494f4:  dup      v0.8h, w15
001494f8:  mov      x15, x9
001494fc:  str      q0, [sp, #0xc0]
00149500:  dup      v0.4h, w13
00149504:  mov      w13, #-0x379a
00149508:  dup      v1.4s, w13
0014950c:  mov      w13, #0x1913
00149510:  str      d0, [sp, #0xb0]
00149514:  dup      v0.4s, w14
00149518:  mov      w14, #0x3408
0014951c:  stp      q0, q1, [sp, #0x90]
00149520:  dup      v0.4h, w13
00149524:  mov      w13, #0x2204
00149528:  dup      v1.4s, w13
0014952c:  mov      w13, #-0x2204
00149530:  str      d0, [sp, #0x80]
00149534:  dup      v0.4h, w14
00149538:  mov      w14, #0x811a
0014953c:  str      d0, [sp, #0x70]
00149540:  dup      v0.4s, w13
00149544:  mov      w13, #-0x4515
00149548:  dup      v23.4s, w13
0014954c:  adrp     x13, #0x114000
00149550:  stp      q0, q1, [sp, #0x50]
00149554:  dup      v0.4h, w14
00149558:  mov      w14, #0x4515
0014955c:  dup      v24.4s, w14
00149560:  add      x14, x27, #0x10
00149564:  str      d0, [sp, #0x40]
00149568:  ldr      q0, [x12, #0x530]
0014956c:  str      q0, [sp, #0x30]
00149570:  ldr      q0, [x10, #0x260]
00149574:  str      q0, [sp, #0x20]
00149578:  ldr      q0, [x13, #0x3c0]
0014957c:  ldur     x13, [x29, #-0xd0]
00149580:  add      x13, x17, x13
00149584:  str      q0, [sp, #0x10]
00149588:  ldp      q22, q0, [x14, #-0x10]
0014958c:  add      x16, x21, w11, sxtw
00149590:  ldp      q2, q4, [sp, #0x20]
00149594:  subs     x15, x15, #0x10
00149598:  ldr      q31, [x13], #0x10
0014959c:  ldr      d6, [sp, #0x70]
001495a0:  ldr      d18, [sp, #0x40]
001495a4:  ldp      q17, q19, [sp, #0x90]
001495a8:  tbl      v1.16b, {v0.16b}, v2.16b
001495ac:  tbl      v26.16b, {v22.16b}, v2.16b
001495b0:  tbl      v25.16b, {v0.16b}, v4.16b
001495b4:  ldp      q3, q2, [sp, #0xe0]
001495b8:  tbl      v8.16b, {v22.16b}, v4.16b
001495bc:  ldr      d4, [sp, #0x80]
001495c0:  add      w11, w11, #0x20
001495c4:  add      x14, x14, #0x10
001495c8:  tbl      v28.16b, {v0.16b}, v3.16b
001495cc:  tbl      v30.16b, {v0.16b}, v2.16b
001495d0:  xtn      v0.4h, v25.4s
001495d4:  xtn      v20.4h, v1.4s
001495d8:  xtn      v29.4h, v26.4s
001495dc:  tbl      v26.16b, {v22.16b}, v2.16b
001495e0:  tbl      v22.16b, {v22.16b}, v3.16b
001495e4:  ushll    v1.8h, v31.8b, #0
001495e8:  ldr      d2, [sp, #0xb0]
001495ec:  ldr      q3, [sp, #0xc0]
001495f0:  ushll2   v25.8h, v31.16b, #0
001495f4:  xtn      v11.4h, v30.4s
001495f8:  xtn      v9.4h, v28.4s
001495fc:  xtn      v30.4h, v8.4s
00149600:  umull    v13.4s, v0.4h, v2.4h
00149604:  umull    v10.4s, v20.4h, v2.4h
00149608:  umull    v28.4s, v1.4h, v3.4h
0014960c:  umull2   v31.4s, v1.8h, v3.8h
00149610:  xtn      v1.4h, v22.4s
00149614:  umull    v8.4s, v25.4h, v3.4h
00149618:  umull2   v12.4s, v25.8h, v3.8h
0014961c:  xtn      v26.4h, v26.4s
00149620:  umull    v3.4s, v20.4h, v6.4h
00149624:  umull    v15.4s, v9.4h, v2.4h
00149628:  umull    v27.4s, v11.4h, v2.4h
0014962c:  umull    v2.4s, v29.4h, v4.4h
00149630:  umull    v22.4s, v30.4h, v4.4h
00149634:  ushr     v14.4s, v13.4s, #8
00149638:  umull    v0.4s, v0.4h, v6.4h
0014963c:  ushr     v10.4s, v10.4s, #8
00149640:  umull    v16.4s, v1.4h, v18.4h
00149644:  ushr     v7.4s, v28.4s, #8
00149648:  ushr     v13.4s, v27.4s, #8
0014964c:  ushr     v15.4s, v15.4s, #8
00149650:  ushr     v20.4s, v2.4s, #8
00149654:  ushr     v25.4s, v22.4s, #8
00149658:  umull    v2.4s, v26.4h, v4.4h
0014965c:  umull    v27.4s, v1.4h, v4.4h
00149660:  usra     v10.4s, v28.4s, #8
00149664:  umull    v26.4s, v26.4h, v18.4h
00149668:  ushr     v16.4s, v16.4s, #8
0014966c:  usra     v15.4s, v8.4s, #8
00149670:  ushr     v22.4s, v8.4s, #8
00149674:  usra     v13.4s, v12.4s, #8
00149678:  usra     v20.4s, v3.4s, #8
0014967c:  umull    v3.4s, v11.4h, v6.4h
00149680:  ushr     v11.4s, v2.4s, #8
00149684:  usra     v25.4s, v0.4s, #8
00149688:  umull    v2.4s, v9.4h, v6.4h
0014968c:  ushr     v27.4s, v27.4s, #8
00149690:  ushr     v9.4s, v31.4s, #8
00149694:  ushr     v0.4s, v12.4s, #8
00149698:  usra     v14.4s, v31.4s, #8
0014969c:  usra     v11.4s, v3.4s, #8
001496a0:  add      v4.4s, v10.4s, v19.4s
001496a4:  cmhi     v10.4s, v17.4s, v10.4s
001496a8:  add      v3.4s, v15.4s, v19.4s
001496ac:  usra     v27.4s, v2.4s, #8
001496b0:  ushr     v2.4s, v26.4s, #8
001496b4:  add      v26.4s, v13.4s, v19.4s
001496b8:  sub      v1.4s, v7.4s, v20.4s
001496bc:  cmhi     v13.4s, v17.4s, v13.4s
001496c0:  mvn      v10.16b, v10.16b
001496c4:  sub      v20.4s, v9.4s, v25.4s
001496c8:  cmhi     v9.4s, v17.4s, v15.4s
001496cc:  cmhi     v7.4s, v5.4s, v4.4s
001496d0:  ushr     v4.4s, v4.4s, #6
001496d4:  add      v6.4s, v14.4s, v19.4s
001496d8:  ldp      q19, q21, [sp, #0x50]
001496dc:  mvn      v15.16b, v9.16b
001496e0:  mvn      v9.16b, v13.16b
001496e4:  umull    v13.4s, v30.4h, v18.4h
001496e8:  cmhi     v14.4s, v17.4s, v14.4s
001496ec:  umull    v17.4s, v29.4h, v18.4h
001496f0:  mov      v29.16b, v7.16b
001496f4:  add      v18.4s, v20.4s, v21.4s
001496f8:  sub      v11.4s, v0.4s, v11.4s
001496fc:  cmgt     v20.4s, v19.4s, v20.4s
00149700:  cmhi     v25.4s, v5.4s, v6.4s
00149704:  sub      v22.4s, v22.4s, v27.4s
00149708:  add      v27.4s, v1.4s, v21.4s
0014970c:  bsl      v29.16b, v4.16b, v10.16b
00149710:  ushr     v6.4s, v6.4s, #6
00149714:  mvn      v14.16b, v14.16b
00149718:  ushr     v7.4s, v17.4s, #8
0014971c:  mvn      v20.16b, v20.16b
00149720:  cmgt     v1.4s, v19.4s, v1.4s
00149724:  mov      v30.16b, v25.16b
00149728:  cmhi     v17.4s, v5.4s, v18.4s
0014972c:  ushr     v18.4s, v18.4s, #0xa
00149730:  add      v4.4s, v22.4s, v21.4s
00149734:  cmgt     v22.4s, v19.4s, v22.4s
00149738:  add      v0.4s, v11.4s, v21.4s
0014973c:  cmgt     v11.4s, v19.4s, v11.4s
00149740:  mvn      v1.16b, v1.16b
00149744:  bsl      v30.16b, v6.16b, v14.16b
00149748:  cmhi     v6.4s, v5.4s, v27.4s
0014974c:  ushr     v27.4s, v27.4s, #0xa
00149750:  bic      v14.16b, v20.16b, v17.16b
00149754:  and      v17.16b, v18.16b, v17.16b
00149758:  usra     v2.4s, v12.4s, #8
0014975c:  cmhi     v12.4s, v5.4s, v3.4s
00149760:  ushr     v3.4s, v3.4s, #6
00149764:  bic      v1.16b, v1.16b, v6.16b
00149768:  and      v6.16b, v27.16b, v6.16b
0014976c:  usra     v16.4s, v8.4s, #8
00149770:  cmhi     v8.4s, v5.4s, v26.4s
00149774:  ushr     v26.4s, v26.4s, #6
00149778:  usra     v7.4s, v28.4s, #8
0014977c:  cmhi     v28.4s, v5.4s, v4.4s
00149780:  ushr     v4.4s, v4.4s, #0xa
00149784:  bit      v9.16b, v26.16b, v8.16b
00149788:  mov      v8.16b, v12.16b
0014978c:  and      v4.16b, v4.16b, v28.16b
00149790:  bsl      v8.16b, v3.16b, v15.16b
00149794:  ushr     v3.4s, v13.4s, #8
00149798:  add      v25.4s, v2.4s, v23.4s
0014979c:  cmhi     v2.4s, v24.4s, v2.4s
001497a0:  movi     v15.4s, #0xf0
001497a4:  mvn      v13.16b, v22.16b
001497a8:  add      v26.4s, v16.4s, v23.4s
001497ac:  cmhi     v16.4s, v24.4s, v16.4s
001497b0:  usra     v3.4s, v31.4s, #8
001497b4:  cmhi     v31.4s, v5.4s, v25.4s
001497b8:  mvn      v2.16b, v2.16b
001497bc:  ushr     v25.4s, v25.4s, #6
001497c0:  mvn      v16.16b, v16.16b
001497c4:  cmhi     v10.4s, v5.4s, v26.4s
001497c8:  ushr     v26.4s, v26.4s, #6
001497cc:  bic      v2.16b, v2.16b, v31.16b
001497d0:  and      v25.16b, v25.16b, v31.16b
001497d4:  add      v31.4s, v7.4s, v23.4s
001497d8:  cmhi     v7.4s, v24.4s, v7.4s
001497dc:  bic      v16.16b, v16.16b, v10.16b
001497e0:  and      v26.16b, v26.16b, v10.16b
001497e4:  and      v2.16b, v2.16b, v15.16b
001497e8:  add      v12.4s, v3.4s, v23.4s
001497ec:  cmhi     v3.4s, v24.4s, v3.4s
001497f0:  mvn      v7.16b, v7.16b
001497f4:  and      v16.16b, v16.16b, v15.16b
001497f8:  orr      v22.16b, v25.16b, v2.16b
001497fc:  cmhi     v2.4s, v5.4s, v31.4s
00149800:  mvn      v25.16b, v11.16b
00149804:  mvn      v3.16b, v3.16b
00149808:  cmhi     v18.4s, v5.4s, v12.4s
0014980c:  orr      v21.16b, v26.16b, v16.16b
00149810:  bic      v26.16b, v13.16b, v28.16b
00149814:  ushr     v28.4s, v31.4s, #6
00149818:  cmhi     v16.4s, v5.4s, v0.4s
0014981c:  ushr     v0.4s, v0.4s, #0xa
00149820:  ushr     v27.4s, v12.4s, #6
00149824:  bic      v7.16b, v7.16b, v2.16b
00149828:  bic      v3.16b, v3.16b, v18.16b
0014982c:  and      v2.16b, v28.16b, v2.16b
00149830:  and      v28.16b, v30.16b, v15.16b
00149834:  movi     v30.4s, #0xf
00149838:  bic      v25.16b, v25.16b, v16.16b
0014983c:  and      v0.16b, v0.16b, v16.16b
00149840:  and      v16.16b, v9.16b, v15.16b
00149844:  and      v18.16b, v27.16b, v18.16b
00149848:  and      v3.16b, v3.16b, v15.16b
0014984c:  and      v27.16b, v8.16b, v15.16b
00149850:  and      v7.16b, v7.16b, v15.16b
00149854:  orr      v0.16b, v16.16b, v0.16b
00149858:  and      v16.16b, v25.16b, v30.16b
0014985c:  and      v25.16b, v29.16b, v15.16b
00149860:  orr      v20.16b, v18.16b, v3.16b
00149864:  orr      v3.16b, v27.16b, v4.16b
00149868:  and      v4.16b, v26.16b, v30.16b
0014986c:  orr      v19.16b, v2.16b, v7.16b
00149870:  and      v2.16b, v14.16b, v30.16b
00149874:  orr      v7.16b, v28.16b, v17.16b
00149878:  orr      v6.16b, v25.16b, v6.16b
0014987c:  orr      v28.16b, v0.16b, v16.16b
00149880:  and      v1.16b, v1.16b, v30.16b
00149884:  orr      v27.16b, v3.16b, v4.16b
00149888:  movi     v3.16b, #0xf
0014988c:  orr      v26.16b, v7.16b, v2.16b
00149890:  ldr      q2, [sp, #0x10]
00149894:  orr      v25.16b, v6.16b, v1.16b
00149898:  tbl      v0.16b, {v19.16b, v20.16b, v21.16b, v22.16b}, v2.16b
0014989c:  tbl      v1.16b, {v25.16b, v26.16b, v27.16b, v28.16b}, v2.16b
001498a0:  orr      v2.16b, v0.16b, v3.16b
001498a4:  st2      {v1.16b, v2.16b}, [x16]
001498a8:  b.ne     #0x149588
001498ac:  cmp      x9, x8
001498b0:  b.eq     #0x148d7c
001498b4:  tbz      w8, #3, #0x148c78
001498b8:  b        #0x148f94
001498bc:  adrp     x11, #0x113000
001498c0:  ldur     x9, [x29, #-0xd0]
001498c4:  adrp     x12, #0x114000
001498c8:  ldr      q0, [x11, #0xfa0]
001498cc:  sxtw     x14, w9
001498d0:  adrp     x13, #0x114000
001498d4:  mov      w9, #0x4a85
001498d8:  ldr      q1, [x13, #0x530]
001498dc:  adrp     x11, #0x114000
001498e0:  stur     q0, [x29, #-0xd0]
001498e4:  ldr      q0, [x12, #0x410]
001498e8:  mov      w12, #0x379a
001498ec:  movi     v6.4s, #0x40, lsl #8
001498f0:  movi     v22.4s, #0xf0
001498f4:  stur     q0, [x29, #-0xe0]
001498f8:  dup      v0.8h, w9
001498fc:  mov      w9, #0x6625
00149900:  stp      q0, q1, [sp, #0xe0]
00149904:  dup      v0.4h, w9
00149908:  mov      w9, #-0x379a
0014990c:  dup      v1.4s, w9
00149910:  mov      w9, #0x1913
00149914:  str      d0, [sp, #0xd0]
00149918:  dup      v0.4s, w12
0014991c:  mov      w12, #0x3408
00149920:  stp      q0, q1, [sp, #0xb0]
00149924:  dup      v0.4h, w9
00149928:  mov      w9, #0x2204
0014992c:  dup      v1.4s, w9
00149930:  mov      w9, #-0x2204
00149934:  str      d0, [sp, #0xa0]
00149938:  dup      v0.4h, w12
0014993c:  mov      w12, #0x811a
00149940:  str      d0, [sp, #0x90]
00149944:  dup      v0.4s, w9
00149948:  mov      w9, #-0x4515
0014994c:  dup      v24.4s, w9
00149950:  and      x9, x8, #0x7ffffff0
00149954:  mov      x13, x9
00149958:  stp      q0, q1, [sp, #0x70]
0014995c:  dup      v0.4h, w12
00149960:  mov      w12, #0x4515
00149964:  dup      v25.4s, w12
00149968:  adrp     x12, #0x114000
0014996c:  str      d0, [sp, #0x60]
00149970:  ldr      q0, [x11, #0x260]
00149974:  add      x11, x15, x14
00149978:  str      q0, [sp, #0x50]
0014997c:  ldr      q0, [x12, #0x3c0]
00149980:  add      x12, x27, #0x30
00149984:  str      q0, [sp, #0x40]
00149988:  ldp      q21, q0, [x12, #-0x10]
0014998c:  add      x14, x19, w10, sxtw
00149990:  ldr      q5, [sp, #0xf0]
00149994:  ldp      q4, q3, [x29, #-0xe0]
00149998:  ldr      q2, [sp, #0x50]
0014999c:  subs     x13, x13, #0x10
001499a0:  add      w10, w10, #0x20
001499a4:  tbl      v23.16b, {v0.16b}, v5.16b
001499a8:  tbl      v8.16b, {v21.16b}, v5.16b
001499ac:  ldr      d5, [sp, #0xa0]
001499b0:  tbl      v1.16b, {v0.16b}, v2.16b
001499b4:  tbl      v26.16b, {v21.16b}, v2.16b
001499b8:  tbl      v28.16b, {v0.16b}, v4.16b
001499bc:  tbl      v30.16b, {v0.16b}, v3.16b
001499c0:  ldr      q31, [x11], #0x10
001499c4:  ldr      d7, [sp, #0x90]
001499c8:  ldr      d19, [sp, #0x60]
001499cc:  add      x12, x12, #0x10
001499d0:  xtn      v0.4h, v23.4s
001499d4:  ushll2   v23.8h, v31.16b, #0
001499d8:  xtn      v2.4h, v1.4s
001499dc:  xtn      v29.4h, v26.4s
001499e0:  xtn      v9.4h, v28.4s
001499e4:  xtn      v11.4h, v30.4s
001499e8:  tbl      v26.16b, {v21.16b}, v3.16b
001499ec:  tbl      v21.16b, {v21.16b}, v4.16b
001499f0:  ldr      d3, [sp, #0xd0]
001499f4:  xtn      v30.4h, v8.4s
001499f8:  ushll    v1.8h, v31.8b, #0
001499fc:  ldr      q4, [sp, #0xe0]
00149a00:  ldp      q18, q20, [sp, #0xb0]
00149a04:  umull    v13.4s, v0.4h, v3.4h
00149a08:  umull    v10.4s, v2.4h, v3.4h
00149a0c:  umull    v15.4s, v9.4h, v3.4h
00149a10:  umull    v28.4s, v1.4h, v4.4h
00149a14:  umull    v27.4s, v11.4h, v3.4h
00149a18:  umull    v3.4s, v29.4h, v5.4h
00149a1c:  umull2   v31.4s, v1.8h, v4.8h
00149a20:  xtn      v1.4h, v21.4s
00149a24:  umull    v21.4s, v30.4h, v5.4h
00149a28:  xtn      v26.4h, v26.4s
00149a2c:  umull    v8.4s, v23.4h, v4.4h
00149a30:  umull2   v12.4s, v23.8h, v4.8h
00149a34:  ushr     v14.4s, v13.4s, #8
00149a38:  umull    v23.4s, v2.4h, v7.4h
00149a3c:  umull    v0.4s, v0.4h, v7.4h
00149a40:  ushr     v10.4s, v10.4s, #8
00149a44:  ushr     v13.4s, v27.4s, #8
00149a48:  ushr     v15.4s, v15.4s, #8
00149a4c:  ushr     v2.4s, v3.4s, #8
00149a50:  ushr     v21.4s, v21.4s, #8
00149a54:  umull    v27.4s, v1.4h, v5.4h
00149a58:  usra     v14.4s, v31.4s, #8
00149a5c:  umull    v3.4s, v26.4h, v5.4h
00149a60:  umull    v4.4s, v11.4h, v7.4h
00149a64:  usra     v10.4s, v28.4s, #8
00149a68:  umull    v26.4s, v26.4h, v19.4h
00149a6c:  umull    v17.4s, v1.4h, v19.4h
00149a70:  ushr     v16.4s, v28.4s, #8
00149a74:  ushr     v27.4s, v27.4s, #8
00149a78:  usra     v15.4s, v8.4s, #8
00149a7c:  ushr     v11.4s, v3.4s, #8
00149a80:  umull    v3.4s, v9.4h, v7.4h
00149a84:  ushr     v9.4s, v31.4s, #8
00149a88:  ushr     v17.4s, v17.4s, #8
00149a8c:  usra     v13.4s, v12.4s, #8
00149a90:  usra     v2.4s, v23.4s, #8
00149a94:  ushr     v23.4s, v8.4s, #8
00149a98:  add      v7.4s, v14.4s, v20.4s
00149a9c:  cmhi     v14.4s, v18.4s, v14.4s
00149aa0:  add      v5.4s, v10.4s, v20.4s
00149aa4:  cmhi     v10.4s, v18.4s, v10.4s
00149aa8:  usra     v21.4s, v0.4s, #8
00149aac:  ushr     v0.4s, v12.4s, #8
00149ab0:  mvn      v14.16b, v14.16b
00149ab4:  mvn      v10.16b, v10.16b
00149ab8:  usra     v27.4s, v3.4s, #8
00149abc:  ushr     v3.4s, v26.4s, #8
00149ac0:  add      v26.4s, v13.4s, v20.4s
00149ac4:  cmhi     v13.4s, v18.4s, v13.4s
00149ac8:  sub      v1.4s, v16.4s, v2.4s
00149acc:  cmhi     v2.4s, v6.4s, v5.4s
00149ad0:  ushr     v5.4s, v5.4s, #6
00149ad4:  usra     v11.4s, v4.4s, #8
00149ad8:  add      v4.4s, v15.4s, v20.4s
00149adc:  ldr      q20, [sp, #0x80]
00149ae0:  usra     v3.4s, v12.4s, #8
00149ae4:  sub      v16.4s, v9.4s, v21.4s
00149ae8:  cmhi     v9.4s, v18.4s, v15.4s
00149aec:  cmhi     v21.4s, v6.4s, v7.4s
00149af0:  umull    v18.4s, v29.4h, v19.4h
00149af4:  ushr     v7.4s, v7.4s, #6
00149af8:  mov      v29.16b, v2.16b
00149afc:  cmhi     v12.4s, v6.4s, v4.4s
00149b00:  ushr     v4.4s, v4.4s, #6
00149b04:  mvn      v15.16b, v9.16b
00149b08:  mvn      v9.16b, v13.16b
00149b0c:  umull    v13.4s, v30.4h, v19.4h
00149b10:  mov      v30.16b, v21.16b
00149b14:  sub      v23.4s, v23.4s, v27.4s
00149b18:  add      v27.4s, v1.4s, v20.4s
00149b1c:  add      v19.4s, v16.4s, v20.4s
00149b20:  bsl      v29.16b, v5.16b, v10.16b
00149b24:  sub      v11.4s, v0.4s, v11.4s
00149b28:  ushr     v2.4s, v13.4s, #8
00149b2c:  bsl      v30.16b, v7.16b, v14.16b
00149b30:  ushr     v7.4s, v18.4s, #8
00149b34:  add      v21.4s, v3.4s, v24.4s
00149b38:  cmhi     v3.4s, v25.4s, v3.4s
00149b3c:  cmhi     v5.4s, v6.4s, v27.4s
00149b40:  cmhi     v18.4s, v6.4s, v19.4s
00149b44:  ushr     v19.4s, v19.4s, #0xa
00149b48:  ushr     v27.4s, v27.4s, #0xa
00149b4c:  add      v0.4s, v11.4s, v20.4s
00149b50:  mvn      v3.16b, v3.16b
00149b54:  usra     v17.4s, v8.4s, #8
00149b58:  cmhi     v8.4s, v6.4s, v26.4s
00149b5c:  ushr     v26.4s, v26.4s, #6
00149b60:  usra     v2.4s, v31.4s, #8
00149b64:  cmhi     v31.4s, v6.4s, v21.4s
00149b68:  ushr     v21.4s, v21.4s, #6
00149b6c:  usra     v7.4s, v28.4s, #8
00149b70:  bit      v9.16b, v26.16b, v8.16b
00149b74:  mov      v8.16b, v12.16b
00149b78:  bic      v3.16b, v3.16b, v31.16b
00149b7c:  and      v21.16b, v21.16b, v31.16b
00149b80:  bsl      v8.16b, v4.16b, v15.16b
00149b84:  add      v4.4s, v23.4s, v20.4s
00149b88:  ldr      q20, [sp, #0x70]
00149b8c:  and      v3.16b, v3.16b, v22.16b
00149b90:  add      v26.4s, v17.4s, v24.4s
00149b94:  cmhi     v17.4s, v25.4s, v17.4s
00149b98:  cmgt     v16.4s, v20.4s, v16.4s
00149b9c:  add      v12.4s, v2.4s, v24.4s
00149ba0:  cmhi     v2.4s, v25.4s, v2.4s
00149ba4:  cmgt     v23.4s, v20.4s, v23.4s
00149ba8:  add      v31.4s, v7.4s, v24.4s
00149bac:  cmgt     v1.4s, v20.4s, v1.4s
00149bb0:  cmhi     v7.4s, v25.4s, v7.4s
00149bb4:  mvn      v17.16b, v17.16b
00149bb8:  mvn      v16.16b, v16.16b
00149bbc:  cmgt     v11.4s, v20.4s, v11.4s
00149bc0:  cmhi     v10.4s, v6.4s, v26.4s
00149bc4:  ushr     v26.4s, v26.4s, #6
00149bc8:  mvn      v2.16b, v2.16b
00149bcc:  cmhi     v28.4s, v6.4s, v4.4s
00149bd0:  ushr     v4.4s, v4.4s, #0xa
00149bd4:  mvn      v23.16b, v23.16b
00149bd8:  bic      v20.16b, v16.16b, v18.16b
00149bdc:  and      v18.16b, v19.16b, v18.16b
00149be0:  cmhi     v19.4s, v6.4s, v12.4s
00149be4:  bic      v17.16b, v17.16b, v10.16b
00149be8:  and      v26.16b, v26.16b, v10.16b
00149bec:  mvn      v1.16b, v1.16b
00149bf0:  orr      v16.16b, v21.16b, v3.16b
00149bf4:  cmhi     v3.4s, v6.4s, v31.4s
00149bf8:  mvn      v7.16b, v7.16b
00149bfc:  mvn      v21.16b, v11.16b
00149c00:  bic      v2.16b, v2.16b, v19.16b
00149c04:  bic      v23.16b, v23.16b, v28.16b
00149c08:  and      v17.16b, v17.16b, v22.16b
00149c0c:  bic      v1.16b, v1.16b, v5.16b
00149c10:  and      v5.16b, v27.16b, v5.16b
00149c14:  and      v4.16b, v4.16b, v28.16b
00149c18:  ushr     v27.4s, v31.4s, #6
00149c1c:  bic      v7.16b, v7.16b, v3.16b
00149c20:  movi     v28.4s, #0xf
00149c24:  and      v2.16b, v2.16b, v22.16b
00149c28:  orr      v15.16b, v26.16b, v17.16b
00149c2c:  cmhi     v17.4s, v6.4s, v0.4s
00149c30:  ushr     v0.4s, v0.4s, #0xa
00149c34:  ushr     v26.4s, v12.4s, #6
00149c38:  and      v3.16b, v27.16b, v3.16b
00149c3c:  and      v7.16b, v7.16b, v22.16b
00149c40:  and      v27.16b, v30.16b, v22.16b
00149c44:  bic      v21.16b, v21.16b, v17.16b
00149c48:  and      v0.16b, v0.16b, v17.16b
00149c4c:  and      v17.16b, v9.16b, v22.16b
00149c50:  and      v19.16b, v26.16b, v19.16b
00149c54:  and      v26.16b, v8.16b, v22.16b
00149c58:  and      v1.16b, v1.16b, v28.16b
00149c5c:  orr      v0.16b, v17.16b, v0.16b
00149c60:  and      v17.16b, v21.16b, v28.16b
00149c64:  and      v21.16b, v29.16b, v22.16b
00149c68:  orr      v14.16b, v19.16b, v2.16b
00149c6c:  orr      v2.16b, v26.16b, v4.16b
00149c70:  and      v4.16b, v23.16b, v28.16b
00149c74:  orr      v13.16b, v3.16b, v7.16b
00149c78:  and      v3.16b, v20.16b, v28.16b
00149c7c:  orr      v7.16b, v27.16b, v18.16b
00149c80:  orr      v5.16b, v21.16b, v5.16b
00149c84:  orr      v20.16b, v0.16b, v17.16b
00149c88:  orr      v19.16b, v2.16b, v4.16b
00149c8c:  ldr      q2, [sp, #0x40]
00149c90:  orr      v18.16b, v7.16b, v3.16b
00149c94:  movi     v3.16b, #0xf
00149c98:  tbl      v0.16b, {v13.16b, v14.16b, v15.16b, v16.16b}, v2.16b
00149c9c:  orr      v17.16b, v5.16b, v1.16b
00149ca0:  tbl      v1.16b, {v17.16b, v18.16b, v19.16b, v20.16b}, v2.16b
00149ca4:  orr      v2.16b, v0.16b, v3.16b
00149ca8:  st2      {v1.16b, v2.16b}, [x14]
00149cac:  b.ne     #0x149988
00149cb0:  cmp      x9, x8
00149cb4:  b.eq     #0x148e9c
00149cb8:  tbz      w8, #3, #0x148d98
00149cbc:  b        #0x149280
00149cc0:  bl       #0x175430

