; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 004b0e54  FUN_004b0e54  (1568 bytes) =====
004b0e54:  stp      x29, x30, [sp, #-0x40]!
004b0e58:  stp      x28, x23, [sp, #0x10]
004b0e5c:  stp      x22, x21, [sp, #0x20]
004b0e60:  stp      x20, x19, [sp, #0x30]
004b0e64:  mov      x29, sp
004b0e68:  sub      sp, sp, #0x3a0
004b0e6c:  mov      x19, x8
004b0e70:  ldp      x10, x8, [x0, #0x20]
004b0e74:  mov      w9, #4
004b0e78:  adrp     x11, #0x2bd000
004b0e7c:  add      x11, x11, #0x1e0
004b0e80:  mov      x20, x0
004b0e84:  stp      x11, x9, [sp]
004b0e88:  adrp     x9, #0x2bd000
004b0e8c:  add      x9, x9, #0x298
004b0e90:  mov      w11, #0x1d
004b0e94:  cmp      x8, x10
004b0e98:  stp      x9, x11, [sp, #0x10]
004b0e9c:  b.hs     #0x4b0ef8
004b0ea0:  mov      x0, x20
004b0ea4:  mov      x15, #0x2600
004b0ea8:  sub      x23, x29, #0xa0
004b0eac:  ldr      x9, [x0, #0x18]!
004b0eb0:  add      x8, x8, #2
004b0eb4:  neg      x12, x10
004b0eb8:  mov      w14, #1
004b0ebc:  movk     x15, #1, lsl #32
004b0ec0:  add      x13, x9, #4
004b0ec4:  add      x11, x13, x8
004b0ec8:  ldurb    w11, [x11, #-6]
004b0ecc:  lsl      x16, x14, x11
004b0ed0:  cmp      w11, #0x20
004b0ed4:  and      x16, x16, x15
004b0ed8:  ccmp     x16, #0, #4, ls
004b0edc:  b.eq     #0x4b0f10
004b0ee0:  sub      x11, x8, #1
004b0ee4:  add      x8, x8, #1
004b0ee8:  add      x16, x12, x8
004b0eec:  str      x11, [x20, #0x28]
004b0ef0:  cmp      x16, #2
004b0ef4:  b.ne     #0x4b0ec4
004b0ef8:  mov      w8, #5
004b0efc:  add      x1, sp, #0x20
004b0f00:  mov      x0, x20
004b0f04:  str      x8, [sp, #0x20]
004b0f08:  bl       #0x4bce7c
004b0f0c:  b        #0x4b11e4
004b0f10:  cmp      w11, #0x5a
004b0f14:  b.le     #0x4b0fdc
004b0f18:  cmp      w11, #0x6d
004b0f1c:  b.le     #0x4b1018
004b0f20:  cmp      w11, #0x7b
004b0f24:  b.ne     #0x4b1110
004b0f28:  ldrb     w9, [x20, #0x30]
004b0f2c:  sub      w9, w9, #1
004b0f30:  tst      w9, #0xff
004b0f34:  strb     w9, [x20, #0x30]
004b0f38:  b.eq     #0x4b1b6c
004b0f3c:  sub      x8, x8, #1
004b0f40:  mov      x0, sp
004b0f44:  mov      x1, x20
004b0f48:  str      x8, [x20, #0x28]
004b0f4c:  sub      x8, x29, #0x28
004b0f50:  mov      w2, #1
004b0f54:  bl       #0x4c2058
004b0f58:  ldrb     w8, [x20, #0x30]
004b0f5c:  add      w8, w8, #1
004b0f60:  strb     w8, [x20, #0x30]
004b0f64:  mov      x0, x20
004b0f68:  bl       #0x4bd974
004b0f6c:  ldur     q0, [x23, #0x78]
004b0f70:  ldur     q1, [x23, #0x88]
004b0f74:  mov      x22, x0
004b0f78:  ldur     x9, [x29, #-8]
004b0f7c:  stp      q0, q1, [sp, #0x20]
004b0f80:  ldrb     w8, [sp, #0x28]
004b0f84:  stp      x9, x0, [sp, #0x40]
004b0f88:  cmp      w8, #0xff
004b0f8c:  b.ne     #0x4b10f4
004b0f90:  ldr      x21, [sp, #0x20]
004b0f94:  cbz      x22, #0x4b1244
004b0f98:  ldr      x8, [x22]
004b0f9c:  cmp      x8, #1
004b0fa0:  b.ne     #0x4b109c
004b0fa4:  ldr      x8, [x22, #8]
004b0fa8:  and      x9, x8, #3
004b0fac:  sub      x10, x9, #2
004b0fb0:  cmp      x10, #2
004b0fb4:  b.lo     #0x4b123c
004b0fb8:  cbz      x9, #0x4b123c
004b0fbc:  sub      x8, x8, #1
004b0fc0:  mov      w9, #3
004b0fc4:  stur     x8, [x29, #-0x20]
004b0fc8:  sub      x8, x29, #0x28
004b0fcc:  sturb    w9, [x29, #-0x28]
004b0fd0:  add      x0, x8, #8
004b0fd4:  bl       #0xab9370
004b0fd8:  b        #0x4b123c
004b0fdc:  cmp      w11, #0x22
004b0fe0:  b.eq     #0x4b10b4
004b0fe4:  cmp      w11, #0x2d
004b0fe8:  b.ne     #0x4b11b8
004b0fec:  sub      x8, x8, #1
004b0ff0:  mov      x0, x20
004b0ff4:  mov      w1, wzr
004b0ff8:  str      x8, [x20, #0x28]
004b0ffc:  sub      x8, x29, #0x60
004b1000:  bl       #0x4bd1b4
004b1004:  ldur     x8, [x29, #-0x60]
004b1008:  cmn      x8, #1
004b100c:  b.ne     #0x4b1a2c
004b1010:  ldur     x0, [x29, #-0x58]
004b1014:  b        #0x4b11e4
004b1018:  cmp      w11, #0x5b
004b101c:  b.ne     #0x4b11b0
004b1020:  ldrb     w9, [x20, #0x30]
004b1024:  sub      w9, w9, #1
004b1028:  tst      w9, #0xff
004b102c:  strb     w9, [x20, #0x30]
004b1030:  b.eq     #0x4b1b6c
004b1034:  sub      x8, x8, #1
004b1038:  mov      x0, sp
004b103c:  mov      x1, x20
004b1040:  str      x8, [x20, #0x28]
004b1044:  sub      x8, x29, #0x28
004b1048:  mov      w2, #1
004b104c:  bl       #0x4c24bc
004b1050:  ldrb     w8, [x20, #0x30]
004b1054:  add      w8, w8, #1
004b1058:  strb     w8, [x20, #0x30]
004b105c:  mov      x0, x20
004b1060:  bl       #0x4bda1c
004b1064:  ldur     q0, [x23, #0x78]
004b1068:  ldur     q1, [x23, #0x88]
004b106c:  mov      x22, x0
004b1070:  ldur     x9, [x29, #-8]
004b1074:  stp      q0, q1, [sp, #0x20]
004b1078:  ldrb     w8, [sp, #0x28]
004b107c:  stp      x9, x0, [sp, #0x40]
004b1080:  cmp      w8, #0xff
004b1084:  b.ne     #0x4b10f4
004b1088:  ldr      x21, [sp, #0x20]
004b108c:  cbz      x22, #0x4b1244
004b1090:  ldr      x8, [x22]
004b1094:  cmp      x8, #1
004b1098:  b.eq     #0x4b1208
004b109c:  cbnz     x8, #0x4b123c
004b10a0:  ldr      x8, [x22, #0x10]
004b10a4:  cbz      x8, #0x4b123c
004b10a8:  ldr      x0, [x22, #8]
004b10ac:  bl       #0xab9360
004b10b0:  b        #0x4b123c
004b10b4:  sub      x8, x8, #1
004b10b8:  mov      x1, x20
004b10bc:  str      xzr, [x20, #0x10]
004b10c0:  str      x8, [x20, #0x28]
004b10c4:  sub      x8, x29, #0x40
004b10c8:  bl       #0xab9430
004b10cc:  ldp      x9, x0, [x29, #-0x40]
004b10d0:  cmp      x9, #2
004b10d4:  b.eq     #0x4b11e4
004b10d8:  ldp      q0, q1, [sp]
004b10dc:  cmp      x9, #1
004b10e0:  ldur     x8, [x29, #-0x30]
004b10e4:  stp      q0, q1, [sp, #0x20]
004b10e8:  stp      x0, x8, [x29, #-0x20]
004b10ec:  mov      w8, #5
004b10f0:  b        #0x4b1b18
004b10f4:  cbz      x22, #0x4b1198
004b10f8:  add      x8, sp, #0x20
004b10fc:  orr      x0, x8, #8
004b1100:  bl       #0x4b0a90
004b1104:  mov      w8, #0xff
004b1108:  mov      x21, x22
004b110c:  b        #0x4b1248
004b1110:  cmp      w11, #0x6e
004b1114:  b.eq     #0x4b1934
004b1118:  cmp      w11, #0x74
004b111c:  b.ne     #0x4b11b8
004b1120:  sub      x11, x8, #1
004b1124:  cmp      x11, x10
004b1128:  str      x11, [x20, #0x28]
004b112c:  csel     x10, x11, x10, hi
004b1130:  b.hs     #0x4b1a14
004b1134:  add      x11, x9, x8
004b1138:  ldurb    w11, [x11, #-1]
004b113c:  str      x8, [x20, #0x28]
004b1140:  cmp      w11, #0x72
004b1144:  b.ne     #0x4b1b8c
004b1148:  cmp      x8, x10
004b114c:  b.eq     #0x4b1a14
004b1150:  ldrb     w12, [x9, x8]
004b1154:  add      x11, x8, #1
004b1158:  str      x11, [x20, #0x28]
004b115c:  cmp      w12, #0x75
004b1160:  b.ne     #0x4b1b8c
004b1164:  cmp      x11, x10
004b1168:  b.eq     #0x4b1a14
004b116c:  add      x9, x9, x8
004b1170:  add      x8, x8, #2
004b1174:  ldrb     w9, [x9, #1]
004b1178:  str      x8, [x20, #0x28]
004b117c:  cmp      w9, #0x65
004b1180:  b.ne     #0x4b1b8c
004b1184:  ldp      q0, q1, [sp]
004b1188:  mov      w8, #0x100
004b118c:  sturh    w8, [x29, #-0x28]
004b1190:  stp      q0, q1, [sp, #0x20]
004b1194:  b        #0x4b1b1c
004b1198:  ldur     q0, [sp, #0x29]
004b119c:  ldur     q1, [sp, #0x38]
004b11a0:  ldr      x21, [sp, #0x20]
004b11a4:  stur     q0, [x29, #-0x80]
004b11a8:  stur     q1, [x23, #0x2f]
004b11ac:  b        #0x4b1248
004b11b0:  cmp      w11, #0x66
004b11b4:  b.eq     #0x4b19a8
004b11b8:  sub      w8, w11, #0x30
004b11bc:  cmp      w8, #0xa
004b11c0:  b.hs     #0x4b1b74
004b11c4:  sub      x8, x29, #0x50
004b11c8:  mov      x0, x20
004b11cc:  mov      w1, #1
004b11d0:  bl       #0x4bd1b4
004b11d4:  ldur     x8, [x29, #-0x50]
004b11d8:  cmn      x8, #1
004b11dc:  b.ne     #0x4b1a48
004b11e0:  ldur     x0, [x29, #-0x48]
004b11e4:  mov      x8, #-1
004b11e8:  str      x0, [x19, #8]
004b11ec:  str      x8, [x19]
004b11f0:  add      sp, sp, #0x3a0
004b11f4:  ldp      x20, x19, [sp, #0x30]
004b11f8:  ldp      x22, x21, [sp, #0x20]
004b11fc:  ldp      x28, x23, [sp, #0x10]
004b1200:  ldp      x29, x30, [sp], #0x40
004b1204:  ret      
004b1208:  ldr      x8, [x22, #8]
004b120c:  and      x9, x8, #3
004b1210:  sub      x10, x9, #2
004b1214:  cmp      x10, #2
004b1218:  b.lo     #0x4b123c
004b121c:  cbz      x9, #0x4b123c
004b1220:  sub      x8, x8, #1
004b1224:  mov      w9, #3
004b1228:  stur     x8, [x29, #-0x20]
004b122c:  sub      x8, x29, #0x28
004b1230:  sturb    w9, [x29, #-0x28]
004b1234:  add      x0, x8, #8
004b1238:  bl       #0xab9370
004b123c:  mov      x0, x22
004b1240:  bl       #0xab9360
004b1244:  mov      w8, #0xff
004b1248:  cmp      w8, #0xff
004b124c:  b.eq     #0x4b1b34
004b1250:  ldur     q0, [x29, #-0x80]
004b1254:  ldur     q1, [x23, #0x2f]
004b1258:  adrp     x9, #0x29f000
004b125c:  add      x9, x9, #0
004b1260:  sturb    w8, [x29, #-0x28]
004b1264:  and      x8, x21, #0xff
004b1268:  stur     q0, [x29, #-0xa0]
004b126c:  stur     q1, [x23, #0xf]
004b1270:  ldur     q0, [x29, #-0xa0]
004b1274:  ldur     q1, [x23, #0xf]
004b1278:  stur     q0, [x23, #0x79]
004b127c:  stur     q1, [x23, #0x88]
004b1280:  adr      x10, #0x4b1290
004b1284:  ldrh     w11, [x9, x8, lsl #1]
004b1288:  add      x10, x10, x11, lsl #2
004b128c:  br       x10
004b1290:  adrp     x1, #0x2bf000
004b1294:  add      x1, x1, #0x41
004b1298:  sub      x0, x29, #0x28
004b129c:  mov      w2, #6
004b12a0:  mov      w3, #8
004b12a4:  mov      x4, xzr
004b12a8:  bl       #0x4d68f4
004b12ac:  cbnz     x0, #0x4b1730
004b12b0:  mov      w8, #3
004b12b4:  b        #0x4b11ec
004b12b8:  adrp     x1, #0x2c1000
004b12bc:  add      x1, x1, #0xe28
004b12c0:  adrp     x3, #0xace000
004b12c4:  add      x3, x3, #0xed8
004b12c8:  add      x8, sp, #0x20
004b12cc:  sub      x0, x29, #0x28
004b12d0:  mov      w2, #0x1d
004b12d4:  mov      w4, #2
004b12d8:  bl       #0x4cff40
004b12dc:  ldr      x8, [sp, #0x20]
004b12e0:  cmp      x8, #2
004b12e4:  b.eq     #0x4b1910
004b12e8:  ldp      q0, q1, [sp, #0xa0]
004b12ec:  mov      w8, #0x13
004b12f0:  b        #0x4b14fc
004b12f4:  adrp     x1, #0x2c1000
004b12f8:  add      x1, x1, #0xf6e
004b12fc:  adrp     x3, #0xacf000
004b1300:  add      x3, x3, #0xf8
004b1304:  add      x8, sp, #0x20
004b1308:  sub      x0, x29, #0x28
004b130c:  mov      w2, #0xf
004b1310:  mov      w4, #1
004b1314:  bl       #0x4da1d4
004b1318:  ldr      x8, [sp, #0x20]
004b131c:  cmn      x8, #1
004b1320:  b.eq     #0x4b1910
004b1324:  ldr      q0, [sp, #0x20]
004b1328:  ldr      x8, [sp, #0x30]
004b132c:  mov      w9, #0x11
004b1330:  b        #0x4b18bc
004b1334:  adrp     x1, #0x2c2000
004b1338:  add      x1, x1, #0x3e6
004b133c:  adrp     x3, #0xacf000
004b1340:  add      x3, x3, #0x538
004b1344:  add      x8, sp, #0x20
004b1348:  sub      x0, x29, #0x28
004b134c:  mov      w2, #0xe
004b1350:  mov      w4, #4
004b1354:  bl       #0x4e357c
004b1358:  ldr      x8, [sp, #0x20]
004b135c:  cbz      x8, #0x4b1910
004b1360:  ldp      q0, q1, [sp, #0x20]
004b1364:  mov      w9, #0xe
004b1368:  ldr      x8, [sp, #0x40]
004b136c:  str      x9, [x19]
004b1370:  stur     q0, [x19, #8]
004b1374:  stur     q1, [x19, #0x18]
004b1378:  stur     x8, [x19, #0x28]
004b137c:  add      sp, sp, #0x3a0
004b1380:  ldp      x20, x19, [sp, #0x30]
004b1384:  ldp      x22, x21, [sp, #0x20]
004b1388:  ldp      x28, x23, [sp, #0x10]
004b138c:  ldp      x29, x30, [sp], #0x40
004b1390:  ret      
004b1394:  adrp     x1, #0x2bd000
004b1398:  add      x1, x1, #0x9c8
004b139c:  adrp     x3, #0xaca000
004b13a0:  add      x3, x3, #0xac8
004b13a4:  add      x8, sp, #0x20
004b13a8:  sub      x0, x29, #0x28
004b13ac:  mov      w2, #0xe
004b13b0:  mov      w4, #2
004b13b4:  bl       #0x4d5e88
004b13b8:  ldr      x8, [sp, #0x20]
004b13bc:  cbz      x8, #0x4b1910
004b13c0:  ldr      q0, [sp, #0x20]
004b13c4:  ldr      x8, [sp, #0x30]
004b13c8:  mov      w9, #7
004b13cc:  b        #0x4b18bc
004b13d0:  adrp     x1, #0x2c2000
004b13d4:  add      x1, x1, #0x401
004b13d8:  adrp     x3, #0xacf000
004b13dc:  add      x3, x3, #0xf8
004b13e0:  add      x8, sp, #0x20
004b13e4:  sub      x0, x29, #0x28
004b13e8:  mov      w2, #0xe
004b13ec:  mov      w4, #1
004b13f0:  bl       #0x4e3d80
004b13f4:  ldr      x8, [sp, #0x20]
004b13f8:  cmn      x8, #1
004b13fc:  b.eq     #0x4b1910
004b1400:  ldr      q0, [sp, #0x20]
004b1404:  ldr      x8, [sp, #0x30]
004b1408:  mov      w9, #0xf
004b140c:  b        #0x4b18bc
004b1410:  adrp     x1, #0x2c2000
004b1414:  add      x1, x1, #0x3c5
004b1418:  adrp     x3, #0xacf000
004b141c:  add      x3, x3, #0x528
004b1420:  add      x8, sp, #0x20
004b1424:  sub      x0, x29, #0x28
004b1428:  mov      w2, #0xb
004b142c:  mov      w4, #1
004b1430:  bl       #0x4e26b8
004b1434:  ldr      x8, [sp, #0x20]
004b1438:  cmp      x8, #2
004b143c:  b.eq     #0x4b1910
004b1440:  add      x0, x19, #8
004b1444:  add      x1, sp, #0x20
004b1448:  mov      w2, #0x288
004b144c:  bl       #0xab9420
004b1450:  mov      w8, #0xc
004b1454:  b        #0x4b11ec
004b1458:  adrp     x1, #0x2c1000
004b145c:  add      x1, x1, #0xee0
004b1460:  adrp     x3, #0xace000
004b1464:  add      x3, x3, #0xfa8
004b1468:  add      x8, sp, #0x20
004b146c:  sub      x0, x29, #0x28
004b1470:  mov      w2, #0x19

; ===== 00521db8  FUN_00521db8  (1320 bytes) =====
00521db8:  sub      sp, sp, #0x150
00521dbc:  stp      x29, x30, [sp, #0xf0]
00521dc0:  str      x28, [sp, #0x100]
00521dc4:  stp      x26, x25, [sp, #0x110]
00521dc8:  stp      x24, x23, [sp, #0x120]
00521dcc:  stp      x22, x21, [sp, #0x130]
00521dd0:  stp      x20, x19, [sp, #0x140]
00521dd4:  add      x29, sp, #0xf0
00521dd8:  mov      x19, x0
00521ddc:  cbz      x2, #0x5222c0
00521de0:  mov      x20, x2
00521de4:  mov      x21, x1
00521de8:  cmp      x2, #2
00521dec:  b.ls     #0x521e20
00521df0:  cmp      x20, #0x10
00521df4:  b.hi     #0x521f9c
00521df8:  add      x8, x20, #1
00521dfc:  mov      w9, #0x2e2e
00521e00:  mov      x10, x21
00521e04:  ldrh     w11, [x10], #1
00521e08:  cmp      w11, w9
00521e0c:  b.eq     #0x522274
00521e10:  sub      x8, x8, #1
00521e14:  cmp      x8, #3
00521e18:  b.hs     #0x521e04
00521e1c:  b        #0x521e34
00521e20:  b.ne     #0x521e34
00521e24:  ldrh     w8, [x21]
00521e28:  mov      w9, #0x2e2e
00521e2c:  cmp      w8, w9
00521e30:  b.eq     #0x522274
00521e34:  adrp     x8, #0x2c0000
00521e38:  add      x8, x8, #0x8e9
00521e3c:  mov      w9, #5
00521e40:  stp      x8, x9, [sp, #0x78]
00521e44:  adrp     x8, #0x2c0000
00521e48:  add      x8, x8, #0x8ee
00521e4c:  mov      w10, #6
00521e50:  cmp      x20, #5
00521e54:  stp      x8, x10, [sp, #0x88]
00521e58:  adrp     x8, #0x2c0000
00521e5c:  add      x8, x8, #0x8f4
00521e60:  stp      x8, x9, [sp, #0x98]
00521e64:  adrp     x8, #0x2c0000
00521e68:  add      x8, x8, #0x8f9
00521e6c:  stp      x8, x9, [sp, #0xa8]
00521e70:  adrp     x8, #0x2c0000
00521e74:  add      x8, x8, #0x8fe
00521e78:  stp      x8, x10, [sp, #0xb8]
00521e7c:  add      x8, sp, #0x78
00521e80:  str      x8, [x29, #0x18]
00521e84:  b.lo     #0x521f54
00521e88:  ldr      w9, [x21]
00521e8c:  mov      w11, #0x652f
00521e90:  ldrb     w10, [x21, #4]
00521e94:  movk     w11, #0x6374, lsl #16
00521e98:  cmp      w9, w11
00521e9c:  mov      w9, #0x2f
00521ea0:  ccmp     w10, w9, #0, eq
00521ea4:  b.eq     #0x522288
00521ea8:  add      x9, x8, #0x10
00521eac:  cmp      x20, #5
00521eb0:  str      x9, [x29, #0x18]
00521eb4:  b.eq     #0x521ed8
00521eb8:  ldr      w9, [x21]
00521ebc:  mov      w11, #0x702f
00521ec0:  ldrh     w10, [x21, #4]
00521ec4:  movk     w11, #0x6f72, lsl #16
00521ec8:  cmp      w9, w11
00521ecc:  mov      w9, #0x2f63
00521ed0:  ccmp     w10, w9, #0, eq
00521ed4:  b.eq     #0x522288
00521ed8:  ldr      w9, [x21]
00521edc:  mov      w11, #0x732f
00521ee0:  ldrb     w10, [x21, #4]
00521ee4:  movk     w11, #0x7379, lsl #16
00521ee8:  cmp      w9, w11
00521eec:  mov      w9, #0x2f
00521ef0:  add      x11, x8, #0x20
00521ef4:  ccmp     w10, w9, #0, eq
00521ef8:  str      x11, [x29, #0x18]
00521efc:  b.eq     #0x522288
00521f00:  ldr      w10, [x21]
00521f04:  mov      w12, #0x642f
00521f08:  ldrb     w11, [x21, #4]
00521f0c:  movk     w12, #0x7665, lsl #16
00521f10:  cmp      w10, w12
00521f14:  add      x10, x8, #0x30
00521f18:  ccmp     w11, w9, #0, eq
00521f1c:  str      x10, [x29, #0x18]
00521f20:  b.eq     #0x522288
00521f24:  add      x8, x8, #0x40
00521f28:  cmp      x20, #5
00521f2c:  str      x8, [x29, #0x18]
00521f30:  b.eq     #0x521f54
00521f34:  ldr      w8, [x21]
00521f38:  mov      w10, #0x722f
00521f3c:  ldrh     w9, [x21, #4]
00521f40:  movk     w10, #0x6f6f, lsl #16
00521f44:  cmp      w8, w10
00521f48:  mov      w8, #0x2f74
00521f4c:  ccmp     w9, w8, #0, eq
00521f50:  b.eq     #0x522288
00521f54:  bl       #0xab9390
00521f58:  mov      x0, x20
00521f5c:  bl       #0xab93a0
00521f60:  cbz      x0, #0x5222d4
00521f64:  mov      x1, x21
00521f68:  mov      x2, x20
00521f6c:  mov      x22, x0
00521f70:  bl       #0xab9420
00521f74:  stp      x20, x22, [x19]
00521f78:  str      x20, [x19, #0x10]
00521f7c:  ldp      x20, x19, [sp, #0x140]
00521f80:  ldr      x28, [sp, #0x100]
00521f84:  ldp      x22, x21, [sp, #0x130]
00521f88:  ldp      x24, x23, [sp, #0x120]
00521f8c:  ldp      x26, x25, [sp, #0x110]
00521f90:  ldp      x29, x30, [sp, #0xf0]
00521f94:  add      sp, sp, #0x150
00521f98:  ret      
00521f9c:  adrp     x8, #0x2c0000
00521fa0:  add      x8, x8, #0x8e8
00521fa4:  mov      w9, #1
00521fa8:  cmp      x20, #0x42
00521fac:  adrp     x25, #0x2a0000
00521fb0:  stp      x21, x20, [sp, #0x78]
00521fb4:  stp      x8, x9, [sp, #0x88]
00521fb8:  b.hs     #0x522090
00521fbc:  mov      x24, xzr
00521fc0:  mov      w22, wzr
00521fc4:  tbnz     w22, #0, #0x52205c
00521fc8:  add      x8, x24, #0x11
00521fcc:  cmp      x8, x20
00521fd0:  b.hs     #0x52205c
00521fd4:  movi     v2.16b, #0x2e
00521fd8:  ldr      q0, [x25, #0xd80]
00521fdc:  str      q0, [sp, #0x60]
00521fe0:  add      x8, x21, x24
00521fe4:  ldr      q0, [x8]
00521fe8:  ldur     q1, [x8, #1]
00521fec:  cmeq     v0.16b, v0.16b, v2.16b
00521ff0:  cmeq     v1.16b, v1.16b, v2.16b
00521ff4:  and      v0.16b, v0.16b, v1.16b
00521ff8:  umaxv    b1, v0.16b
00521ffc:  fmov     w8, s1
00522000:  tbnz     w8, #0, #0x522020
00522004:  mov      w22, wzr
00522008:  add      x8, x24, #0x21
0052200c:  cmp      x8, x20
00522010:  b.hs     #0x52205c
00522014:  add      x24, x24, #0x10
00522018:  tbz      w22, #0, #0x521fe0
0052201c:  b        #0x52205c
00522020:  ldr      q1, [sp, #0x60]
00522024:  add      x0, sp, #0x78
00522028:  mov      x1, x24
0052202c:  mov      w3, wzr
00522030:  and      v0.16b, v0.16b, v1.16b
00522034:  ext      v1.16b, v0.16b, v0.16b, #8
00522038:  zip1     v0.16b, v0.16b, v1.16b
0052203c:  addv     h0, v0.8h
00522040:  fmov     w2, s0
00522044:  bl       #0x51f4dc
00522048:  movi     v2.16b, #0x2e
0052204c:  mov      w22, w0
00522050:  add      x8, x24, #0x21
00522054:  cmp      x8, x20
00522058:  b.lo     #0x522014
0052205c:  sub      x8, x20, #0x11
00522060:  movi     v0.16b, #0x2e
00522064:  add      x8, x21, x8
00522068:  ldr      q1, [x8]
0052206c:  ldur     q2, [x8, #1]
00522070:  cmeq     v1.16b, v1.16b, v0.16b
00522074:  cmeq     v0.16b, v2.16b, v0.16b
00522078:  and      v0.16b, v1.16b, v0.16b
0052207c:  umaxv    b1, v0.16b
00522080:  fmov     w8, s1
00522084:  tbnz     w8, #0, #0x522244
00522088:  tbz      w22, #0, #0x521e34
0052208c:  b        #0x522274
00522090:  movi     v2.16b, #0x2e
00522094:  ldr      q3, [x25, #0xd80]
00522098:  mov      x23, xzr
0052209c:  add      x26, x21, #0x20
005220a0:  str      q3, [sp, #0x40]
005220a4:  add      x8, x26, x23
005220a8:  ldp      q0, q16, [x8, #-0x20]
005220ac:  ldur     q1, [x8, #-0x1f]
005220b0:  ldur     q17, [x8, #-0xf]
005220b4:  ldp      q6, q4, [x8]
005220b8:  cmeq     v1.16b, v1.16b, v2.16b
005220bc:  ldur     q7, [x8, #1]
005220c0:  ldur     q5, [x8, #0x11]
005220c4:  cmeq     v0.16b, v0.16b, v2.16b
005220c8:  and      v0.16b, v0.16b, v1.16b
005220cc:  umaxv    b1, v0.16b
005220d0:  fmov     w8, s1
005220d4:  tbnz     w8, #0, #0x522170
005220d8:  mov      w22, wzr
005220dc:  cmeq     v0.16b, v16.16b, v2.16b
005220e0:  cmeq     v1.16b, v17.16b, v2.16b
005220e4:  and      v0.16b, v0.16b, v1.16b
005220e8:  and      v0.16b, v0.16b, v3.16b
005220ec:  ext      v1.16b, v0.16b, v0.16b, #8
005220f0:  zip1     v0.16b, v0.16b, v1.16b
005220f4:  addv     h0, v0.8h
005220f8:  fmov     w2, s0
005220fc:  tst      w2, #0xffff
00522100:  b.ne     #0x5221bc
00522104:  cmeq     v0.16b, v6.16b, v2.16b
00522108:  cmeq     v1.16b, v7.16b, v2.16b
0052210c:  and      v0.16b, v0.16b, v1.16b
00522110:  and      v0.16b, v0.16b, v3.16b
00522114:  ext      v1.16b, v0.16b, v0.16b, #8
00522118:  zip1     v0.16b, v0.16b, v1.16b
0052211c:  addv     h0, v0.8h
00522120:  fmov     w2, s0
00522124:  tst      w2, #0xffff
00522128:  b.ne     #0x5221ec
0052212c:  cmeq     v0.16b, v4.16b, v2.16b
00522130:  cmeq     v1.16b, v5.16b, v2.16b
00522134:  and      v0.16b, v0.16b, v1.16b
00522138:  and      v0.16b, v0.16b, v3.16b
0052213c:  ext      v1.16b, v0.16b, v0.16b, #8
00522140:  zip1     v0.16b, v0.16b, v1.16b
00522144:  addv     h0, v0.8h
00522148:  fmov     w2, s0
0052214c:  tst      w2, #0xffff
00522150:  b.ne     #0x522214
00522154:  add      x8, x23, #0x81
00522158:  add      x24, x23, #0x40
0052215c:  cmp      x8, x20
00522160:  b.hs     #0x521fc4
00522164:  mov      x23, x24
00522168:  tbz      w22, #0, #0x5220a4
0052216c:  b        #0x521fc4
00522170:  and      v0.16b, v0.16b, v3.16b
00522174:  add      x0, sp, #0x78
00522178:  mov      x1, x23
0052217c:  mov      w3, wzr
00522180:  stp      q17, q16, [sp]
00522184:  stp      q7, q6, [sp, #0x20]
00522188:  ext      v1.16b, v0.16b, v0.16b, #8
0052218c:  stp      q5, q4, [sp, #0x50]
00522190:  zip1     v0.16b, v0.16b, v1.16b
00522194:  addv     h0, v0.8h
00522198:  fmov     w2, s0
0052219c:  bl       #0x51f4dc
005221a0:  ldp      q17, q16, [sp]
005221a4:  movi     v2.16b, #0x2e
005221a8:  ldp      q7, q6, [sp, #0x20]
005221ac:  mov      w22, w0
005221b0:  ldp      q5, q4, [sp, #0x50]
005221b4:  ldr      q3, [sp, #0x40]
005221b8:  b        #0x5220dc
005221bc:  add      x0, sp, #0x78
005221c0:  add      x1, x23, #0x10
005221c4:  mov      w3, w22
005221c8:  stp      q7, q6, [sp, #0x20]
005221cc:  stp      q5, q4, [sp, #0x50]
005221d0:  bl       #0x51f4dc
005221d4:  movi     v2.16b, #0x2e
005221d8:  ldp      q7, q6, [sp, #0x20]
005221dc:  ldp      q5, q4, [sp, #0x50]
005221e0:  orr      w22, w22, w0
005221e4:  ldr      q3, [sp, #0x40]
005221e8:  b        #0x522104
005221ec:  add      x0, sp, #0x78
005221f0:  add      x1, x23, #0x20
005221f4:  mov      w3, w22
005221f8:  stp      q5, q4, [sp, #0x50]
005221fc:  bl       #0x51f4dc
00522200:  movi     v2.16b, #0x2e
00522204:  ldp      q5, q4, [sp, #0x50]
00522208:  ldr      q3, [sp, #0x40]
0052220c:  orr      w22, w22, w0
00522210:  b        #0x52212c
00522214:  add      x0, sp, #0x78
00522218:  add      x1, x23, #0x30
0052221c:  mov      w3, w22
00522220:  bl       #0x51f4dc
00522224:  movi     v2.16b, #0x2e
00522228:  ldr      q3, [sp, #0x40]
0052222c:  orr      w22, w22, w0
00522230:  add      x8, x23, #0x81
00522234:  add      x24, x23, #0x40
00522238:  cmp      x8, x20
0052223c:  b.lo     #0x522164
00522240:  b        #0x521fc4
00522244:  ldr      q1, [x25, #0xd80]
00522248:  add      x0, sp, #0x78
0052224c:  sub      x1, x20, #0x11
00522250:  mov      w3, w22
00522254:  and      v0.16b, v0.16b, v1.16b
00522258:  ext      v1.16b, v0.16b, v0.16b, #8
0052225c:  zip1     v0.16b, v0.16b, v1.16b
00522260:  addv     h0, v0.8h
00522264:  fmov     w2, s0
00522268:  bl       #0x51f4dc
0052226c:  orr      w8, w22, w0
00522270:  tbz      w8, #0, #0x521e34
00522274:  adrp     x0, #0x2c0000
00522278:  add      x0, x0, #0x904
0052227c:  mov      w1, #0x31
00522280:  bl       #0x514dcc
00522284:  b        #0x5222b4
00522288:  add      x8, x29, #0x18
0052228c:  nop      
00522290:  adr      x9, #0x4b32cc
00522294:  stp      x8, x9, [x29, #-0x10]
00522298:  adrp     x0, #0x2a5000
0052229c:  add      x0, x0, #0x2d5
005222a0:  sub      x8, x29, #0x28
005222a4:  sub      x1, x29, #0x10
005222a8:  bl       #0xab9490
005222ac:  sub      x0, x29, #0x28
005222b0:  bl       #0x514d60
005222b4:  mov      x8, #-1
005222b8:  stp      x8, x0, [x19]
005222bc:  b        #0x521f7c
005222c0:  adrp     x0, #0x2c0000
005222c4:  add      x0, x0, #0x935
005222c8:  mov      w1, #0x19
005222cc:  bl       #0x514dcc
005222d0:  b        #0x5222b4
005222d4:  mov      w0, #1
005222d8:  mov      x1, x20
005222dc:  bl       #0xab99c0

; ===== 005c32b4  FUN_005c32b4  (1244 bytes) =====
005c32b4:  str      d8, [sp, #-0x70]!
005c32b8:  stp      x29, x30, [sp, #0x10]
005c32bc:  stp      x28, x27, [sp, #0x20]
005c32c0:  stp      x26, x25, [sp, #0x30]
005c32c4:  stp      x24, x23, [sp, #0x40]
005c32c8:  stp      x22, x21, [sp, #0x50]
005c32cc:  stp      x20, x19, [sp, #0x60]
005c32d0:  add      x29, sp, #0x10
005c32d4:  sub      sp, sp, #0x1f0
005c32d8:  ldr      x20, [x0]
005c32dc:  ldr      w8, [x0, #0xd0]
005c32e0:  mov      x26, x0
005c32e4:  ldr      x28, [x0, #0x88]
005c32e8:  ldr      x21, [x0, #0x68]
005c32ec:  ldrb     w22, [x20, #0x64]
005c32f0:  cbz      w8, #0x5c32fc
005c32f4:  mov      x0, x26
005c32f8:  bl       #0x5bcf28
005c32fc:  ldr      x8, [x20, #0x208]
005c3300:  cbz      x8, #0x5c335c
005c3304:  ldr      w8, [x26, #0xe4]
005c3308:  ldr      w9, [x20, #0x218]
005c330c:  udiv     w10, w8, w9
005c3310:  neg      w8, w8
005c3314:  madd     w8, w10, w9, w8
005c3318:  add      w19, w9, w8
005c331c:  ldr      w8, [x26, #0x34]
005c3320:  str      x28, [sp, #0xd0]
005c3324:  cmp      w8, #7
005c3328:  b.ne     #0x5c3370
005c332c:  mov      x25, xzr
005c3330:  mov      w27, wzr
005c3334:  ldrb     w8, [x20, #0x67]
005c3338:  cbnz     w8, #0x5c3344
005c333c:  ldrb     w8, [x20, #0x68]
005c3340:  cbz      w8, #0x5cd66c
005c3344:  adrp     x1, #0x2b9000
005c3348:  add      x1, x1, #0xe5e
005c334c:  mov      x0, x26
005c3350:  bl       #0x5c0890
005c3354:  mov      w22, #7
005c3358:  b        #0x5ce1cc
005c335c:  mov      x19, #-1
005c3360:  ldr      w8, [x26, #0x34]
005c3364:  str      x28, [sp, #0xd0]
005c3368:  cmp      w8, #7
005c336c:  b.eq     #0x5c332c
005c3370:  str      wzr, [x26, #0x34]
005c3374:  str      xzr, [x26, #0x48]
005c3378:  str      wzr, [x20, #0x290]
005c337c:  ldr      w8, [x20, #0x190]
005c3380:  cbz      w8, #0x5c3394
005c3384:  mov      x25, xzr
005c3388:  mov      w27, wzr
005c338c:  mov      w22, #9
005c3390:  b        #0x5ce1cc
005c3394:  ldrsw    x8, [x26, #0x30]
005c3398:  mov      w9, #0x18
005c339c:  add      x10, x26, #0xa8
005c33a0:  stur     x21, [x29, #-8]
005c33a4:  mov      x25, xzr
005c33a8:  mov      w27, wzr
005c33ac:  smaddl   x28, w8, w9, x28
005c33b0:  sub      x9, x29, #0xb0
005c33b4:  adrp     x21, #0x2c6000
005c33b8:  add      x21, x21, #0xca2
005c33bc:  add      x8, x9, #8
005c33c0:  str      wzr, [sp, #0x8c]
005c33c4:  stp      x8, x10, [sp, #0x78]
005c33c8:  orr      x8, x9, #4
005c33cc:  str      wzr, [sp, #0x9c]
005c33d0:  stp      w22, wzr, [sp, #0xbc]
005c33d4:  str      x8, [sp, #0x60]
005c33d8:  str      x26, [sp, #0xc8]
005c33dc:  b        #0x5c33ec
005c33e0:  mov      x21, x24
005c33e4:  stur     x26, [x29, #-8]
005c33e8:  add      x28, x28, #0x18
005c33ec:  ldrb     w26, [x28]
005c33f0:  add      x25, x25, #1
005c33f4:  cmp      w26, #0xb8
005c33f8:  b.hi     #0x5c7ca4
005c33fc:  adr      x8, #0x5c340c
005c3400:  ldrh     w9, [x21, x26, lsl #1]
005c3404:  add      x8, x8, x9, lsl #2
005c3408:  br       x8
005c340c:  str      w27, [sp, #0xb8]
005c3410:  ldrsw    x27, [x28, #4]
005c3414:  mov      w8, #0x38
005c3418:  str      x25, [sp, #0xb0]
005c341c:  ldrsw    x25, [x28, #0xc]
005c3420:  ldur     x9, [x29, #-8]
005c3424:  nop      
005c3428:  smaddl   x21, w27, w8, x9
005c342c:  mov      x10, x28
005c3430:  smaddl   x22, w25, w8, x9
005c3434:  mov      x23, x21
005c3438:  mov      x24, x22
005c343c:  ldrh     w11, [x23, #0x14]!
005c3440:  ldrh     w28, [x24, #0x14]!
005c3444:  and      w8, w28, w11
005c3448:  tbnz     w8, #2, #0x5c370c
005c344c:  str      x10, [sp, #0xa8]
005c3450:  ldrh     w10, [x10, #2]
005c3454:  orr      w9, w28, w11
005c3458:  tbnz     w9, #0, #0x5c4b48
005c345c:  mov      w8, #0x47
005c3460:  str      x23, [sp, #0x90]
005c3464:  and      w8, w10, w8
005c3468:  cmp      w8, #0x43
005c346c:  b.lo     #0x5c8108
005c3470:  str      w11, [sp, #0xa0]
005c3474:  tbz      w9, #1, #0x5cae74
005c3478:  mov      w25, #0x2e
005c347c:  and      w8, w11, w25
005c3480:  cmp      w8, #2
005c3484:  b.ne     #0x5c3498
005c3488:  mov      x0, x21
005c348c:  mov      w1, wzr
005c3490:  bl       #0x594860
005c3494:  ldrh     w28, [x24]
005c3498:  and      w8, w28, w25
005c349c:  cmp      w8, #2
005c34a0:  b.ne     #0x5cae74
005c34a4:  mov      x0, x22
005c34a8:  mov      w1, wzr
005c34ac:  bl       #0x594860
005c34b0:  b        #0x5cae74
005c34b4:  ldpsw    x8, x9, [x28, #4]
005c34b8:  mov      w10, #0x38
005c34bc:  ldur     x11, [x29, #-8]
005c34c0:  str      w27, [sp, #0xb8]
005c34c4:  ldrsw    x27, [x28, #0xc]
005c34c8:  str      x25, [sp, #0xb0]
005c34cc:  mov      x25, x28
005c34d0:  smaddl   x21, w8, w10, x11
005c34d4:  smaddl   x22, w9, w10, x11
005c34d8:  smaddl   x24, w27, w10, x11
005c34dc:  mov      x23, x21
005c34e0:  mov      x28, x22
005c34e4:  ldrh     w9, [x23, #0x14]!
005c34e8:  ldrh     w8, [x28, #0x14]!
005c34ec:  and      w10, w9, w8
005c34f0:  tbz      w10, #2, #0x5c4b10
005c34f4:  ldr      x8, [x22]
005c34f8:  ldr      x1, [x21]
005c34fc:  cmp      x26, #0x6c
005c3500:  stur     x8, [x29, #-0xb0]
005c3504:  b.gt     #0x5c9f54
005c3508:  cmp      x26, #0x6b
005c350c:  b.eq     #0x5c82a4
005c3510:  cmp      x26, #0x6c
005c3514:  b.ne     #0x5c9f88
005c3518:  sub      x0, x29, #0xb0
005c351c:  bl       #0x5ce520
005c3520:  b        #0x5c9fac
005c3524:  ldpsw    x23, x10, [x28, #4]
005c3528:  mov      w8, #0x38
005c352c:  ldur     x12, [x29, #-8]
005c3530:  ldrsw    x22, [x28, #0xc]
005c3534:  mov      w26, w27
005c3538:  smaddl   x21, w23, w8, x12
005c353c:  smaddl   x11, w10, w8, x12
005c3540:  smaddl   x0, w22, w8, x12
005c3544:  ldrh     w9, [x21, #0x14]!
005c3548:  ldrh     w11, [x11, #0x14]
005c354c:  orr      w8, w11, w9
005c3550:  tbnz     w8, #0, #0x5c4a98
005c3554:  mov      w24, #0x38
005c3558:  mov      x27, x12
005c355c:  smaddl   x8, w10, w24, x12
005c3560:  mov      w12, #0x24
005c3564:  tst      w11, w12
005c3568:  b.eq     #0x5c81c0
005c356c:  ldr      x21, [x8]
005c3570:  nop      
005c3574:  smaddl   x8, w23, w24, x27
005c3578:  mov      w10, #0x24
005c357c:  tst      w9, w10
005c3580:  b.eq     #0x5c8214
005c3584:  ldr      x8, [x8]
005c3588:  ldrb     w9, [x28]
005c358c:  cmp      w9, #0x68
005c3590:  b.eq     #0x5c83c0
005c3594:  cmp      w9, #0x67
005c3598:  b.ne     #0x5c83c8
005c359c:  and      x8, x8, x21
005c35a0:  b        #0x5cbb10
005c35a4:  ldr      x8, [sp, #0xc8]
005c35a8:  ldrsw    x9, [x28, #4]
005c35ac:  cmp      x26, #0x2a
005c35b0:  ldr      w10, [x28, #0x10]
005c35b4:  mov      x22, x21
005c35b8:  ldur     x26, [x29, #-8]
005c35bc:  ldr      x8, [x8, #0x78]
005c35c0:  ldr      x8, [x8, x9, lsl #3]
005c35c4:  csetm    w9, lo
005c35c8:  strh     w10, [sp, #0x104]
005c35cc:  strb     w9, [sp, #0x106]
005c35d0:  mov      w10, #0x38
005c35d4:  ldrsw    x9, [x28, #0xc]
005c35d8:  nop      
005c35dc:  smaddl   x9, w9, w10, x26
005c35e0:  ldp      x21, x10, [x8, #0x28]
005c35e4:  mov      x0, x21
005c35e8:  stp      x10, x9, [sp, #0xe8]
005c35ec:  bl       #0x5b88ac
005c35f0:  ldr      w8, [x21, #0x40]
005c35f4:  cmp      w8, #0
005c35f8:  b.le     #0x5cd744
005c35fc:  ldr      x9, [x21, #0x88]
005c3600:  ldr      x1, [x21, #0x38]
005c3604:  ldrh     w10, [x21, #0x44]
005c3608:  sturh    wzr, [x29, #-0x9c]
005c360c:  ldr      w9, [x9, #0x58]
005c3610:  stur     wzr, [x29, #-0x90]
005c3614:  stur     x1, [x29, #-0xa8]
005c3618:  sub      w9, w9, w1
005c361c:  bic      w11, w9, w9, asr #31
005c3620:  cmp      w10, w9
005c3624:  sub      x9, x29, #0xb0
005c3628:  str      x20, [x9, #0x18]
005c362c:  csel     w9, w11, w10, gt
005c3630:  cmp      w9, w8
005c3634:  b.hs     #0x5c4abc
005c3638:  sub      x3, x29, #0xb0
005c363c:  mov      x0, x21
005c3640:  mov      w1, wzr
005c3644:  mov      w2, w8
005c3648:  bl       #0x5d95bc
005c364c:  cbnz     w0, #0x5cd7fc
005c3650:  ldur     w8, [x29, #-0xa0]
005c3654:  ldur     x1, [x29, #-0xa8]
005c3658:  b        #0x5c4ac8
005c365c:  ldr      x8, [sp, #0xc8]
005c3660:  ldrsw    x9, [x28, #4]
005c3664:  mov      w24, w27
005c3668:  ldr      x8, [x8, #0x78]
005c366c:  ldr      x27, [x8, x9, lsl #3]
005c3670:  ldrb     w8, [x27, #4]
005c3674:  strh     wzr, [x27, #2]
005c3678:  str      wzr, [x27, #0x18]
005c367c:  cbz      w8, #0x5c4c14
005c3680:  ldrsw    x22, [x28, #0xc]
005c3684:  mov      w8, #0x38
005c3688:  ldur     x9, [x29, #-8]
005c368c:  str      x28, [sp, #0xa8]
005c3690:  nop      
005c3694:  smaddl   x21, w22, w8, x9
005c3698:  mov      w8, #0x2e
005c369c:  str      w24, [sp, #0xb8]
005c36a0:  mov      x28, x21
005c36a4:  ldrh     w23, [x28, #0x14]!
005c36a8:  and      w8, w23, w8
005c36ac:  cmp      w8, #2
005c36b0:  mov      w8, w23
005c36b4:  b.ne     #0x5cc2c0
005c36b8:  mov      w8, #0x38
005c36bc:  ldur     x9, [x29, #-8]
005c36c0:  add      x1, sp, #0xe8
005c36c4:  smaddl   x8, w22, w8, x9
005c36c8:  ldr      x24, [x8, #8]
005c36cc:  ldrb     w3, [x8, #0x16]
005c36d0:  ldr      w2, [x8, #0x10]
005c36d4:  mov      x0, x24
005c36d8:  str      w2, [sp, #0x90]
005c36dc:  str      w3, [sp, #0xa0]
005c36e0:  bl       #0x5c1de0
005c36e4:  cmp      w0, #1
005c36e8:  b.lt     #0x5cc2bc
005c36ec:  ldr      d8, [sp, #0xe8]
005c36f0:  b.ne     #0x5cc2a4
005c36f4:  mov      x8, #-0x3c20000000000001
005c36f8:  fmov     d0, x8
005c36fc:  fcmp     d8, d0
005c3700:  b.pl     #0x5cadd0
005c3704:  mov      x8, #-0x8000000000000000
005c3708:  b        #0x5cbb4c
005c370c:  ldr      x8, [x22]
005c3710:  ldr      x9, [x21]
005c3714:  mov      x28, x10
005c3718:  cmp      x8, x9
005c371c:  b.le     #0x5c4b70
005c3720:  adrp     x8, #0x2c7000
005c3724:  add      x8, x8, #0x8ae
005c3728:  ldr      x9, [sp, #0xb0]
005c372c:  add      x8, x8, x26
005c3730:  ldr      w27, [sp, #0xb8]
005c3734:  adrp     x21, #0x2c6000
005c3738:  add      x21, x21, #0xca2
005c373c:  ldrb     w8, [x8, #0xd7]
005c3740:  cbnz     w8, #0x5c8194
005c3744:  mov      w8, #1
005c3748:  b        #0x5c4b9c
005c374c:  ldr      x9, [sp, #0xc8]
005c3750:  ldr      w8, [x9, #0xdc]
005c3754:  add      w8, w8, #1
005c3758:  str      w8, [x9, #0xdc]
005c375c:  ldr      x8, [sp, #0xc8]
005c3760:  ldrsw    x9, [x28, #4]
005c3764:  ldr      x8, [x8, #0x78]
005c3768:  ldr      x23, [x8, x9, lsl #3]
005c376c:  ldrb     w8, [x23]
005c3770:  cmp      w8, #1
005c3774:  b.ne     #0x5c4ba4
005c3778:  ldr      x24, [x23, #0x28]
005c377c:  ldur     x26, [x29, #-8]
005c3780:  ldrb     w8, [x24, #0x58]
005c3784:  cbz      w8, #0x5c8604
005c3788:  mov      x0, x24
005c378c:  bl       #0x5e14f0

; ===== 00a19824  FUN_00a19824  (3804 bytes) =====
00a19824:  stp      x29, x30, [sp, #-0x60]!
00a19828:  stp      x28, x27, [sp, #0x10]
00a1982c:  stp      x26, x25, [sp, #0x20]
00a19830:  stp      x24, x23, [sp, #0x30]
00a19834:  stp      x22, x21, [sp, #0x40]
00a19838:  stp      x20, x19, [sp, #0x50]
00a1983c:  mov      x29, sp
00a19840:  sub      sp, sp, #0x300
00a19844:  ldp      x9, x8, [x3, #0x100]
00a19848:  mov      x23, x3
00a1984c:  ldr      x24, [x3, #0xb0]
00a19850:  ldr      w26, [x3, #0x118]
00a19854:  mov      x19, x0
00a19858:  ldr      x28, [x3, #0x110]
00a1985c:  ldrb     w27, [x3, #0x121]
00a19860:  stp      x1, x2, [sp, #0x18]
00a19864:  str      x8, [sp, #0x60]
00a19868:  lsl      x25, x24, #2
00a1986c:  ldp      x10, x8, [x3, #0x70]
00a19870:  str      w26, [sp, #0x88]
00a19874:  str      w27, [sp, #0x80]
00a19878:  stp      x9, x28, [sp, #0x70]
00a1987c:  stp      x8, x10, [sp, #0x48]
00a19880:  str      x25, [sp, #0x10]
00a19884:  cbz      x24, #0xa19a40
00a19888:  ldr      x20, [x23, #0xa8]
00a1988c:  bl       #0xab9390
00a19890:  mov      x0, x25
00a19894:  mov      w1, #2
00a19898:  bl       #0x4b25a4
00a1989c:  mov      x2, x25
00a198a0:  cbz      x0, #0xa1ad60
00a198a4:  mov      x1, x20
00a198a8:  mov      x25, x0
00a198ac:  bl       #0xab9420
00a198b0:  ldr      x22, [x23, #0xc8]
00a198b4:  str      x19, [sp, #0x28]
00a198b8:  stp      x25, x24, [sp, #0x90]
00a198bc:  lsl      x28, x22, #5
00a198c0:  cbz      x22, #0xa19a58
00a198c4:  ldr      x21, [x23, #0xc0]
00a198c8:  bl       #0xab9390
00a198cc:  mov      x0, x28
00a198d0:  mov      w1, #0x10
00a198d4:  bl       #0x4b25a4
00a198d8:  str      x0, [sp, #0xa8]
00a198dc:  cbz      x0, #0xa1ad6c
00a198e0:  mov      x19, xzr
00a198e4:  mov      x20, x22
00a198e8:  mov      x1, x21
00a198ec:  cmp      x28, x19
00a198f0:  b.eq     #0xa19920
00a198f4:  add      x0, sp, #0xf0
00a198f8:  sub      x20, x20, #1
00a198fc:  add      x21, x1, #0x20
00a19900:  bl       #0xa61fb8
00a19904:  ldp      q0, q1, [sp, #0xf0]
00a19908:  mov      x1, x21
00a1990c:  ldr      x8, [sp, #0xa8]
00a19910:  add      x8, x8, x19
00a19914:  add      x19, x19, #0x20
00a19918:  stp      q0, q1, [x8]
00a1991c:  cbnz     x20, #0xa198ec
00a19920:  ldr      x19, [x23, #0xe0]
00a19924:  str      x22, [sp, #0x58]
00a19928:  lsl      x21, x19, #2
00a1992c:  cbz      x19, #0xa19a70
00a19930:  ldr      x20, [x23, #0xd8]
00a19934:  bl       #0xab9390
00a19938:  mov      x0, x21
00a1993c:  mov      w1, #2
00a19940:  bl       #0x4b25a4
00a19944:  cbz      x0, #0xa1ad7c
00a19948:  mov      x1, x20
00a1994c:  mov      x2, x21
00a19950:  str      x0, [sp, #0x38]
00a19954:  bl       #0xab9420
00a19958:  ldr      x9, [x23, #0xf8]
00a1995c:  str      x19, [sp, #0x40]
00a19960:  str      x9, [sp, #0x30]
00a19964:  cbz      x9, #0xa19a84
00a19968:  lsl      x8, x9, #7
00a1996c:  ldr      x25, [x23, #0xf0]
00a19970:  mov      x19, x9
00a19974:  sub      x20, x8, x9, lsl #4
00a19978:  bl       #0xab9390
00a1997c:  mov      x0, x20
00a19980:  mov      w1, #0x10
00a19984:  bl       #0x4b25a4
00a19988:  str      x0, [sp, #0xa0]
00a1998c:  cbz      x0, #0xa1ad8c
00a19990:  add      x8, sp, #0xf0
00a19994:  mov      x22, xzr
00a19998:  orr      x28, x8, #8
00a1999c:  b        #0xa199f0
00a199a0:  ldp      q0, q1, [x29, #-0x50]
00a199a4:  sub      x19, x19, #1
00a199a8:  ldr      x9, [sp, #0xa0]
00a199ac:  ldur     x10, [x29, #-0x80]
00a199b0:  add      x9, x9, x22
00a199b4:  stp      q0, q1, [sp, #0xf0]
00a199b8:  stp      q0, q1, [x9]
00a199bc:  ldur     q0, [x29, #-0x90]
00a199c0:  str      x8, [x9, #0x20]
00a199c4:  add      x8, x25, x22
00a199c8:  add      x22, x22, #0x70
00a199cc:  stur     q0, [x9, #0x28]
00a199d0:  str      x10, [x9, #0x38]
00a199d4:  str      q0, [sp, #0xd0]
00a199d8:  ldr      q0, [x8, #0x40]
00a199dc:  str      x10, [sp, #0xe0]
00a199e0:  str      q0, [x9, #0x40]
00a199e4:  stp      x27, x24, [x9, #0x50]
00a199e8:  str      x26, [x9, #0x60]
00a199ec:  cbz      x19, #0xa19a8c
00a199f0:  cmp      x20, x22
00a199f4:  b.eq     #0xa19a8c
00a199f8:  sub      x0, x29, #0x50
00a199fc:  add      x1, x25, x22
00a19a00:  add      x21, x25, x22
00a19a04:  bl       #0xa61fb8
00a19a08:  ldp      x27, x24, [x21, #0x50]
00a19a0c:  ldr      x26, [x21, #0x60]
00a19a10:  ldr      x8, [x21, #0x20]!
00a19a14:  cmn      x8, #1
00a19a18:  b.eq     #0xa199a0
00a19a1c:  add      x0, sp, #0xf0
00a19a20:  mov      x1, x21
00a19a24:  bl       #0xa61fb8
00a19a28:  ldr      q0, [x28]
00a19a2c:  ldr      x9, [x28, #0x10]
00a19a30:  ldr      x8, [sp, #0xf0]
00a19a34:  stur     q0, [x29, #-0x90]
00a19a38:  stur     x9, [x29, #-0x80]
00a19a3c:  b        #0xa199a0
00a19a40:  mov      w25, #2
00a19a44:  ldr      x22, [x23, #0xc8]
00a19a48:  str      x19, [sp, #0x28]
00a19a4c:  stp      x25, x24, [sp, #0x90]
00a19a50:  lsl      x28, x22, #5
00a19a54:  cbnz     x22, #0xa198c4
00a19a58:  mov      w8, #0x10
00a19a5c:  str      x8, [sp, #0xa8]
00a19a60:  ldr      x19, [x23, #0xe0]
00a19a64:  str      x22, [sp, #0x58]
00a19a68:  lsl      x21, x19, #2
00a19a6c:  cbnz     x19, #0xa19930
00a19a70:  mov      w8, #2
00a19a74:  stp      x8, x19, [sp, #0x38]
00a19a78:  ldr      x9, [x23, #0xf8]
00a19a7c:  str      x9, [sp, #0x30]
00a19a80:  cbnz     x9, #0xa19968
00a19a84:  mov      w8, #0x10
00a19a88:  str      x8, [sp, #0xa0]
00a19a8c:  ldr      x8, [x23]
00a19a90:  ldp      x21, x26, [x23, #0x80]
00a19a94:  ldp      x28, x25, [x23, #0x90]
00a19a98:  add      x9, sp, #0xf0
00a19a9c:  cmn      x8, #1
00a19aa0:  sub      x19, x29, #0x50
00a19aa4:  add      x24, x9, #0x11d
00a19aa8:  b.eq     #0xa19af0
00a19aac:  sub      x0, x29, #0x50
00a19ab0:  mov      x1, x23
00a19ab4:  bl       #0xa61fb8
00a19ab8:  mov      x1, x23
00a19abc:  ldr      x8, [x1, #0x20]!
00a19ac0:  ldr      x20, [x1, #0x40]
00a19ac4:  ldp      x27, x22, [x1, #0x30]
00a19ac8:  cmn      x8, #1
00a19acc:  b.eq     #0xa19af8
00a19ad0:  add      x0, sp, #0xf0
00a19ad4:  bl       #0xa61fb8
00a19ad8:  ldur     q0, [sp, #0xf8]
00a19adc:  ldr      x8, [sp, #0x108]
00a19ae0:  ldr      x9, [sp, #0xf0]
00a19ae4:  stur     q0, [x29, #-0x90]
00a19ae8:  stur     x8, [x29, #-0x80]
00a19aec:  b        #0xa19afc
00a19af0:  mov      x10, #-1
00a19af4:  b        #0xa19b18
00a19af8:  mov      x9, #-1
00a19afc:  ldur     q0, [x19, #8]
00a19b00:  ldur     x8, [x29, #-0x38]
00a19b04:  ldr      q1, [x23, #0x40]
00a19b08:  ldur     x10, [x29, #-0x50]
00a19b0c:  str      q0, [sp, #0xd0]
00a19b10:  str      x8, [sp, #0xe0]
00a19b14:  str      q1, [sp, #0xb0]
00a19b18:  str      x10, [sp, #0xf0]
00a19b1c:  ldr      x10, [sp, #0xe0]
00a19b20:  ldur     x11, [x29, #-0x80]
00a19b24:  ldr      q0, [sp, #0xd0]
00a19b28:  add      x12, sp, #0x19
00a19b2c:  mov      w8, wzr
00a19b30:  stp      x10, x9, [sp, #0x108]
00a19b34:  ldp      x9, x10, [sp, #0x48]
00a19b38:  str      x11, [sp, #0x128]
00a19b3c:  mov      w11, #8
00a19b40:  ldur     q1, [x29, #-0x90]
00a19b44:  stp      x11, xzr, [sp]
00a19b48:  stp      x10, x9, [sp, #0x160]
00a19b4c:  ldp      x10, x11, [sp, #0x90]
00a19b50:  ldr      x9, [sp, #0x58]
00a19b54:  stur     q0, [sp, #0xf8]
00a19b58:  ldr      q0, [sp, #0xb0]
00a19b5c:  stur     q1, [x12, #0xff]
00a19b60:  mov      w12, #8
00a19b64:  stp      x11, x10, [sp, #0x190]
00a19b68:  ldr      x10, [sp, #0xa8]
00a19b6c:  stp      x11, x9, [sp, #0x1a0]
00a19b70:  stp      x10, x9, [sp, #0x1b0]
00a19b74:  ldp      x10, x11, [sp, #0x38]
00a19b78:  ldr      x9, [sp, #0x30]
00a19b7c:  str      q0, [sp, #0x130]
00a19b80:  str      x20, [sp, #0x150]
00a19b84:  add      x20, sp, #0xf0
00a19b88:  stp      x11, x10, [sp, #0x1c0]
00a19b8c:  ldr      x10, [sp, #0xa0]
00a19b90:  stp      x11, x9, [sp, #0x1d0]
00a19b94:  stp      x10, x9, [sp, #0x1e0]
00a19b98:  ldp      x10, x11, [sp, #0x70]
00a19b9c:  ldr      x9, [sp, #0x60]
00a19ba0:  stp      xzr, x12, [sp, #0xb0]
00a19ba4:  str      xzr, [sp, #0xc0]
00a19ba8:  stp      x10, x9, [sp, #0x1f0]
00a19bac:  add      x10, x23, #0x11d
00a19bb0:  ldrb     w9, [x23, #0x11c]
00a19bb4:  ldr      w10, [x10]
00a19bb8:  str      x11, [sp, #0x200]
00a19bbc:  ldr      w11, [sp, #0x88]
00a19bc0:  strb     w9, [sp, #0x20c]
00a19bc4:  str      w10, [x24]
00a19bc8:  mov      w10, #1
00a19bcc:  dup      v0.2d, x10
00a19bd0:  strb     w9, [sp, #0x259]
00a19bd4:  adrp     x9, #0x29f000
00a19bd8:  str      w11, [sp, #0x208]
00a19bdc:  ldr      w11, [sp, #0x80]
00a19be0:  nop      
00a19be4:  adr      x10, #0xafa788
00a19be8:  stp      xzr, x12, [sp, #0xd0]
00a19bec:  str      q0, [sp, #0x230]
00a19bf0:  ldr      q0, [x9, #0x9e0]
00a19bf4:  str      xzr, [sp, #0xe0]
00a19bf8:  stp      x27, x22, [sp, #0x140]
00a19bfc:  stp      x21, x26, [sp, #0x170]
00a19c00:  stp      x28, x25, [sp, #0x180]
00a19c04:  strb     w11, [sp, #0x211]
00a19c08:  str      xzr, [sp, #0x220]
00a19c0c:  str      xzr, [sp, #0x228]
00a19c10:  str      xzr, [sp, #0x250]
00a19c14:  str      xzr, [sp, #0x240]
00a19c18:  str      xzr, [sp, #0x248]
00a19c1c:  str      x10, [sp, #0x58]
00a19c20:  strb     wzr, [sp, #0x258]
00a19c24:  stur     wzr, [x24, #0x4d]
00a19c28:  str      q0, [sp, #0x60]
00a19c2c:  str      x21, [sp, #0x260]
00a19c30:  str      x26, [sp, #0x268]
00a19c34:  str      x24, [sp, #0x10]
00a19c38:  tbz      w8, #0, #0xa19c68
00a19c3c:  mov      w8, #1
00a19c40:  add      x9, sp, #0xf0
00a19c44:  add      x20, sp, #0xf0
00a19c48:  dup      v0.2d, x8
00a19c4c:  ldrb     w8, [sp, #0x20c]
00a19c50:  stp      xzr, xzr, [x9, #0x130]
00a19c54:  strb     wzr, [sp, #0x258]
00a19c58:  stp      xzr, xzr, [x9, #0x150]
00a19c5c:  str      q0, [sp, #0x230]
00a19c60:  strb     w8, [sp, #0x259]
00a19c64:  strb     wzr, [sp, #0x25b]
00a19c68:  ldr      x9, [sp, #0x268]
00a19c6c:  str      xzr, [sp, #0x250]
00a19c70:  strb     wzr, [sp, #0x25a]
00a19c74:  strh     wzr, [sp, #0x25c]
00a19c78:  cbz      x9, #0xa1a814
00a19c7c:  mov      x26, xzr
00a19c80:  mov      x24, xzr
00a19c84:  mov      x21, xzr
00a19c88:  mov      x28, xzr
00a19c8c:  stp      xzr, x8, [sp, #0xa0]
00a19c90:  b        #0xa19d14
00a19c94:  ldr      x9, [sp, #0x1e0]
00a19c98:  mov      w10, #0x70
00a19c9c:  mov      w11, w19
00a19ca0:  madd     x9, x23, x10, x9
00a19ca4:  ldp      x12, x10, [sp, #0xa0]
00a19ca8:  and      x11, x11, #0xff
00a19cac:  mov      x8, xzr
00a19cb0:  bfi      x10, x12, #8, #0x38
00a19cb4:  str      x10, [x9, #0x10]
00a19cb8:  orr      x10, x11, x26, lsl #8
00a19cbc:  ldr      w11, [sp, #0x98]
00a19cc0:  orr      x10, x10, x22, lsl #16
00a19cc4:  strb     w11, [x9, #0x18]
00a19cc8:  mov      x11, #-1
00a19ccc:  str      x11, [x9, #0x20]
00a19cd0:  ldr      x11, [sp, #0x88]
00a19cd4:  stp      x25, x10, [x9]
00a19cd8:  ldur     q0, [x29, #-0x50]
00a19cdc:  stur     q0, [x9, #0x28]
00a19ce0:  ldur     q0, [x29, #-0x40]
00a19ce4:  stur     q0, [x9, #0x38]
00a19ce8:  ldur     x10, [x29, #-0x30]
00a19cec:  str      x11, [x9, #0x58]
00a19cf0:  ldr      x11, [sp, #0x80]
00a19cf4:  str      x11, [x9, #0x60]
00a19cf8:  ldr      x11, [sp, #0x90]
00a19cfc:  stp      x10, x11, [x9, #0x48]
00a19d00:  add      x10, x23, #1
00a19d04:  str      x10, [sp, #0x1e8]
00a19d08:  ldr      x9, [sp, #0x268]
00a19d0c:  mov      x24, x8
00a19d10:  cbz      x9, #0xa1a814
00a19d14:  ldr      x8, [sp, #0x260]
00a19d18:  sub      x27, x9, #1
00a19d1c:  mov      x23, x8
00a19d20:  ldrb     w22, [x23], #1
00a19d24:  str      x23, [sp, #0x260]
00a19d28:  str      x27, [sp, #0x268]
00a19d2c:  cbz      w22, #0xa19d94
00a19d30:  ldrb     w10, [sp, #0x211]
00a19d34:  cmp      w22, w10
00a19d38:  b.hs     #0xa19e50
00a19d3c:  sub      w10, w22, #1
00a19d40:  cmp      w10, #0xb
00a19d44:  b.hi     #0xa1a03c
00a19d48:  adrp     x13, #0x381000
00a19d4c:  add      x13, x13, #0x902
00a19d50:  mov      w25, #0x30
00a19d54:  adr      x11, #0xa19d64
00a19d58:  ldrh     w12, [x13, x10, lsl #1]
00a19d5c:  add      x11, x11, x12, lsl #2
00a19d60:  br       x11
00a19d64:  sub      x0, x29, #0x50
00a19d68:  add      x1, x20, #0x170
00a19d6c:  bl       #0xa69f78
00a19d70:  ldurb    w8, [x29, #-0x50]
00a19d74:  cmp      w8, #0xff
00a19d78:  b.ne     #0xa1a850
00a19d7c:  ldur     x19, [x29, #-0x48]
00a19d80:  mov      w25, #0x31
00a19d84:  ubfx     x26, x19, #8, #8
00a19d88:  lsr      w28, w19, #0x10
00a19d8c:  lsr      x21, x19, #0x20
00a19d90:  b        #0xa1a174
00a19d94:  sub      x0, x29, #0x50
00a19d98:  add      x1, x20, #0x170
00a19d9c:  bl       #0xa69f78
00a19da0:  ldurb    w8, [x29, #-0x50]
00a19da4:  cmp      w8, #0xff
00a19da8:  b.ne     #0xa1a850
00a19dac:  ldur     x10, [x29, #-0x48]
00a19db0:  ldr      x8, [sp, #0x268]
00a19db4:  ldr      x23, [sp, #0x260]
00a19db8:  subs     x8, x8, x10
00a19dbc:  b.lo     #0xa1a8b8
00a19dc0:  add      x9, x23, x10
00a19dc4:  str      x8, [sp, #0x268]
00a19dc8:  str      x9, [sp, #0x260]
00a19dcc:  cbz      x10, #0xa1a9e4
00a19dd0:  mov      x22, x23
00a19dd4:  sub      x8, x10, #1
00a19dd8:  ldrb     w9, [x22], #1
00a19ddc:  stp      x22, x8, [x29, #-0x60]
00a19de0:  cmp      w9, #2
00a19de4:  b.gt     #0xa19e5c
00a19de8:  cmp      w9, #1
00a19dec:  b.eq     #0xa19ebc
00a19df0:  cmp      w9, #2
00a19df4:  b.ne     #0xa19e9c
00a19df8:  ldrb     w9, [sp, #0x208]
00a19dfc:  sub      w10, w9, #1
00a19e00:  eor      w11, w9, w10
00a19e04:  and      w11, w11, #0xff
00a19e08:  cmp      w11, w10, uxtb
00a19e0c:  b.ls     #0xa1a140
00a19e10:  rbit     w10, w9
00a19e14:  clz      w10, w10
00a19e18:  cmp      w10, #1
00a19e1c:  b.gt     #0xa1a0f0
00a19e20:  cbz      w10, #0xa1a564
00a19e24:  cmp      w10, #1
00a19e28:  b.ne     #0xa1a140
00a19e2c:  cmp      x8, #1
00a19e30:  b.ls     #0xa1acec
00a19e34:  ldrh     w19, [x22]
00a19e38:  ldr      x9, [sp, #0x78]
00a19e3c:  orr      x9, x9, #0xff
00a19e40:  and      w8, w9, #0xff
00a19e44:  cmp      w8, #0xff
00a19e48:  b.eq     #0xa1a160
00a19e4c:  b        #0xa1ad08
00a19e50:  mov      w25, #0x2f
00a19e54:  mov      w19, w22
00a19e58:  b        #0xa1a174
00a19e5c:  cmp      w9, #3
00a19e60:  b.eq     #0xa19ec4
00a19e64:  cmp      w9, #4
00a19e68:  b.ne     #0xa19e9c
00a19e6c:  sub      x0, x29, #0x50
00a19e70:  sub      x1, x29, #0x60
00a19e74:  bl       #0xa69f78
00a19e78:  ldurb    w8, [x29, #-0x50]
00a19e7c:  cmp      w8, #0xff
00a19e80:  b.ne     #0xa1a850
00a19e84:  ldur     x19, [x29, #-0x48]
00a19e88:  mov      w25, #0x42
00a19e8c:  ubfx     x26, x19, #8, #8
00a19e90:  lsr      w28, w19, #0x10
00a19e94:  lsr      x21, x19, #0x20
00a19e98:  b        #0xa1a174
00a19e9c:  ubfx     x26, x22, #8, #8
00a19ea0:  lsr      w28, w22, #0x10
00a19ea4:  lsr      x21, x22, #0x20
00a19ea8:  lsr      x10, x8, #8
00a19eac:  mov      w25, #0x43
00a19eb0:  str      w9, [sp, #0x98]
00a19eb4:  str      x10, [sp, #0xa0]
00a19eb8:  b        #0xa19f20
00a19ebc:  mov      w25, #0x3f
00a19ec0:  b        #0xa1a174
00a19ec4:  ldrh     w9, [sp, #0x20a]
00a19ec8:  cmp      w9, #5
00a19ecc:  b.hs     #0xa19f00
00a19ed0:  cbz      x8, #0xa1a864
00a19ed4:  mov      x27, xzr
00a19ed8:  add      x8, x23, #2
00a19edc:  sub      x9, x10, #2
00a19ee0:  ldurb    w10, [x8, #-1]
00a19ee4:  cbz      w10, #0xa1a3c8
00a19ee8:  sub      x9, x9, #1
00a19eec:  add      x27, x27, #1
00a19ef0:  add      x8, x8, #1
00a19ef4:  cmn      x9, #1
00a19ef8:  b.ne     #0xa19ee0
00a19efc:  b        #0xa1a864
00a19f00:  lsr      x9, x8, #8
00a19f04:  ubfx     x26, x22, #8, #8
00a19f08:  lsr      w28, w22, #0x10
00a19f0c:  lsr      x21, x22, #0x20
00a19f10:  mov      w25, #0x43
00a19f14:  str      x9, [sp, #0xa0]
00a19f18:  mov      w9, #3
00a19f1c:  str      w9, [sp, #0x98]
00a19f20:  str      x8, [sp, #0xa8]
00a19f24:  mov      w19, w22
00a19f28:  b        #0xa1a174
00a19f2c:  sub      x0, x29, #0x50
00a19f30:  add      x1, x20, #0x170
00a19f34:  bl       #0xa69f78
00a19f38:  ldurb    w8, [x29, #-0x50]
00a19f3c:  cmp      w8, #0xff
00a19f40:  b.ne     #0xa1a850
00a19f44:  ldur     x19, [x29, #-0x48]
00a19f48:  mov      w25, #0x3b
00a19f4c:  ubfx     x26, x19, #8, #8
00a19f50:  lsr      w28, w19, #0x10
00a19f54:  lsr      x21, x19, #0x20
00a19f58:  b        #0xa1a174
00a19f5c:  sub      x0, x29, #0x50
00a19f60:  add      x1, x20, #0x170
00a19f64:  bl       #0xa69f78
00a19f68:  ldurb    w8, [x29, #-0x50]
00a19f6c:  cmp      w8, #0xff
00a19f70:  b.ne     #0xa1a850
00a19f74:  ldur     x19, [x29, #-0x48]
00a19f78:  mov      w25, #0x34
00a19f7c:  ubfx     x26, x19, #8, #8
00a19f80:  lsr      w28, w19, #0x10
00a19f84:  lsr      x21, x19, #0x20
00a19f88:  b        #0xa1a174
00a19f8c:  mov      w25, #0x39
00a19f90:  b        #0xa1a174
00a19f94:  sub      x0, x29, #0x50
00a19f98:  add      x1, x20, #0x170
00a19f9c:  bl       #0xa69d98
00a19fa0:  ldurb    w8, [x29, #-0x50]
00a19fa4:  cmp      w8, #0xff
00a19fa8:  b.ne     #0xa1a850
00a19fac:  ldur     x19, [x29, #-0x48]
00a19fb0:  mov      w25, #0x32
00a19fb4:  ubfx     x26, x19, #8, #8
00a19fb8:  lsr      w28, w19, #0x10
00a19fbc:  lsr      x21, x19, #0x20
00a19fc0:  b        #0xa1a174
00a19fc4:  sub      x0, x29, #0x50
00a19fc8:  add      x1, x20, #0x170
00a19fcc:  bl       #0xa69f78
00a19fd0:  ldurb    w8, [x29, #-0x50]
00a19fd4:  cmp      w8, #0xff
00a19fd8:  b.ne     #0xa1a850
00a19fdc:  ldur     x19, [x29, #-0x48]
00a19fe0:  mov      w25, #0x33
00a19fe4:  ubfx     x26, x19, #8, #8
00a19fe8:  lsr      w28, w19, #0x10
00a19fec:  lsr      x21, x19, #0x20
00a19ff0:  b        #0xa1a174
00a19ff4:  mov      w25, #0x37
00a19ff8:  b        #0xa1a174
00a19ffc:  mov      w25, #0x35
00a1a000:  b        #0xa1a174
00a1a004:  mov      w25, #0x36
00a1a008:  b        #0xa1a174
00a1a00c:  mov      w25, #0x3a
00a1a010:  b        #0xa1a174
00a1a014:  cmp      x27, #1
00a1a018:  b.ls     #0xa1a8b8
00a1a01c:  add      x10, x8, #3
00a1a020:  sub      x9, x9, #3
00a1a024:  mov      w25, #0x38
00a1a028:  str      x10, [sp, #0x260]
00a1a02c:  str      x9, [sp, #0x268]
00a1a030:  ldurh    w19, [x8, #1]
00a1a034:  lsr      w26, w19, #8
00a1a038:  b        #0xa1a174
00a1a03c:  ldp      x9, x11, [sp, #0x160]
00a1a040:  and      x8, x10, #0xff
00a1a044:  cmp      x11, x8
00a1a048:  b.lo     #0xa1acbc
00a1a04c:  add      x9, x9, x8
00a1a050:  b.eq     #0xa1acbc
00a1a054:  ldrb     w19, [x9]
00a1a058:  cbz      w19, #0xa1a558
00a1a05c:  cmp      w19, #1
00a1a060:  b.ne     #0xa1a09c
00a1a064:  sub      x0, x29, #0x50
00a1a068:  add      x1, x20, #0x170
00a1a06c:  bl       #0xa69f78
00a1a070:  ldurb    w8, [x29, #-0x50]
00a1a074:  cmp      w8, #0xff
00a1a078:  b.ne     #0xa1a850
00a1a07c:  ldur     x19, [x29, #-0x48]
00a1a080:  mov      w8, w22
00a1a084:  mov      w25, #0x3d
00a1a088:  str      x8, [sp, #0xa8]
00a1a08c:  ubfx     x26, x19, #8, #8
00a1a090:  lsr      w28, w19, #0x10
00a1a094:  lsr      x21, x19, #0x20
00a1a098:  b        #0xa1a174
00a1a09c:  sub      x0, x29, #0x50
00a1a0a0:  add      x1, x20, #0x170
00a1a0a4:  bl       #0xa69f78
00a1a0a8:  ldurb    w8, [x29, #-0x50]
00a1a0ac:  cmp      w8, #0xff
00a1a0b0:  b.ne     #0xa1a850
00a1a0b4:  subs     x19, x19, #1
00a1a0b8:  b.ne     #0xa1a09c
00a1a0bc:  ldr      x8, [sp, #0x260]
00a1a0c0:  sub      x8, x8, x23
00a1a0c4:  cmp      x27, x8
00a1a0c8:  b.lo     #0xa1a9e4
00a1a0cc:  lsr      x9, x8, #8
00a1a0d0:  ubfx     x26, x23, #8, #8
00a1a0d4:  lsr      w28, w23, #0x10
00a1a0d8:  lsr      x21, x23, #0x20
00a1a0dc:  mov      w25, #0x3e
00a1a0e0:  str      w22, [sp, #0x98]
00a1a0e4:  stp      x9, x8, [sp, #0xa0]
00a1a0e8:  mov      w19, w23
00a1a0ec:  b        #0xa1a174
00a1a0f0:  cmp      w10, #2
00a1a0f4:  b.eq     #0xa1a584
00a1a0f8:  cmp      w10, #3
00a1a0fc:  b.ne     #0xa1a140
00a1a100:  cmp      x8, #7
00a1a104:  b.ls     #0xa1acfc
00a1a108:  ldrb     w8, [x23, #7]
00a1a10c:  ldurh    w9, [x23, #5]
00a1a110:  ldur     w10, [x23, #1]
00a1a114:  orr      w8, w9, w8, lsl #16
00a1a118:  lsl      x9, x10, #8
00a1a11c:  ldrb     w10, [x23, #8]
00a1a120:  orr      x8, x9, x8, lsl #40
00a1a124:  extr     x19, x10, x8, #8
00a1a128:  ldr      x9, [sp, #0x78]
00a1a12c:  orr      x9, x9, #0xff
00a1a130:  and      w8, w9, #0xff
00a1a134:  cmp      w8, #0xff
00a1a138:  b.eq     #0xa1a160
00a1a13c:  b        #0xa1ad08
00a1a140:  ldp      x19, x8, [sp, #0x70]
00a1a144:  and      x8, x8, #0xffffffffffff0000
00a1a148:  orr      x8, x8, x9, lsl #8
00a1a14c:  mov      w9, #0x14
00a1a150:  orr      x9, x8, x9
00a1a154:  and      w8, w9, #0xff
00a1a158:  cmp      w8, #0xff
00a1a15c:  b.ne     #0xa1ad08
00a1a160:  stp      x19, x9, [sp, #0x70]
00a1a164:  ubfx     x26, x19, #8, #8
00a1a168:  lsr      w28, w19, #0x10
00a1a16c:  lsr      x21, x19, #0x20
00a1a170:  mov      w25, #0x40
00a1a174:  ldp      q0, q1, [x29, #-0x90]
00a1a178:  orr      x22, x28, x21, lsl #16
00a1a17c:  ldur     x8, [x29, #-0x70]
00a1a180:  subs     x9, x25, #0x2f
00a1a184:  stp      q0, q1, [x29, #-0x50]
00a1a188:  stur     x8, [x29, #-0x30]
00a1a18c:  b.lo     #0xa1a1ec
00a1a190:  adrp     x12, #0x381000
00a1a194:  add      x12, x12, #0x91a
00a1a198:  mov      x8, xzr
00a1a19c:  adr      x10, #0xa19d08
00a1a1a0:  ldrh     w11, [x12, x9, lsl #1]
00a1a1a4:  add      x10, x10, x11, lsl #2
00a1a1a8:  br       x10
00a1a1ac:  ldrb     w9, [sp, #0x210]
00a1a1b0:  cbz      w9, #0xa1adb8
00a1a1b4:  ldrb     w8, [sp, #0x211]
00a1a1b8:  sub      w10, w19, w8
00a1a1bc:  and      w8, w10, #0xff
00a1a1c0:  udiv     w8, w8, w9
00a1a1c4:  msub     w9, w8, w9, w10
00a1a1c8:  ldrsb    x10, [sp, #0x20f]
00a1a1cc:  adds     x9, x10, w9, uxtb
00a1a1d0:  b.mi     #0xa1a510
00a1a1d4:  ldr      x10, [sp, #0x238]
00a1a1d8:  add      x9, x10, x9
00a1a1dc:  ldrb     w10, [sp, #0x258]
00a1a1e0:  str      x9, [sp, #0x238]
00a1a1e4:  tbz      w10, #0, #0xa1a530
00a1a1e8:  b        #0xa1a634
00a1a1ec:  ldr      x23, [sp, #0x1e8]
00a1a1f0:  ldr      x8, [sp, #0x1d8]
00a1a1f4:  cmp      x23, x8
00a1a1f8:  b.ne     #0xa19c94
00a1a1fc:  add      x0, x20, #0xe8
00a1a200:  bl       #0xac4ae0
00a1a204:  b        #0xa19c94
00a1a208:  mov      w9, w19
00a1a20c:  mov      x8, xzr
00a1a210:  and      x9, x9, #0xff
00a1a214:  orr      x9, x9, x26, lsl #8
00a1a218:  orr      x9, x9, x22, lsl #16
00a1a21c:  str      x9, [sp, #0x248]
00a1a220:  b        #0xa19d08
00a1a224:  mov      w9, #1
00a1a228:  mov      x8, xzr
00a1a22c:  strb     w9, [sp, #0x25c]
00a1a230:  b        #0xa19d08
00a1a234:  mov      w9, #1
00a1a238:  mov      x8, xzr
00a1a23c:  strb     w9, [sp, #0x25a]
00a1a240:  b        #0xa19d08
00a1a244:  ldrb     w8, [sp, #0x210]
00a1a248:  cbz      w8, #0xa1ad9c
00a1a24c:  ldrb     w9, [sp, #0x258]
00a1a250:  tbnz     w9, #0, #0xa1a364
00a1a254:  ldrb     w9, [sp, #0x211]
00a1a258:  ldrb     w10, [sp, #0x20e]
00a1a25c:  eor      w9, w9, #0xff
00a1a260:  cmp      w10, #1
00a1a264:  udiv     w8, w9, w8
00a1a268:  ldrb     w9, [sp, #0x20d]
00a1a26c:  b.eq     #0xa1a5c0
00a1a270:  cbz      w10, #0xa1adac
00a1a274:  ldr      x11, [sp, #0x228]
00a1a278:  add      x11, x11, x8
00a1a27c:  udiv     x8, x11, x10
00a1a280:  msub     x10, x8, x10, x11
00a1a284:  mul      x8, x8, x9
00a1a288:  ldr      x9, [sp, #0x220]
00a1a28c:  str      x10, [sp, #0x228]
00a1a290:  adds     x23, x8, x9
00a1a294:  b.lo     #0xa1a5d4
00a1a298:  b        #0xa1acc8
00a1a29c:  mov      w9, w19
00a1a2a0:  mov      x8, xzr
00a1a2a4:  and      x9, x9, #0xff
00a1a2a8:  orr      x9, x9, x26, lsl #8
00a1a2ac:  orr      x9, x9, x22, lsl #16
00a1a2b0:  str      x9, [sp, #0x240]
00a1a2b4:  b        #0xa19d08
00a1a2b8:  mov      w9, #1
00a1a2bc:  mov      x8, xzr
00a1a2c0:  strb     w9, [sp, #0x25d]
00a1a2c4:  b        #0xa19d08
00a1a2c8:  mov      w8, w19
00a1a2cc:  lsl      x10, x22, #0x10
00a1a2d0:  and      x8, x8, #0xff
00a1a2d4:  orr      x8, x8, x26, lsl #8
00a1a2d8:  orr      x9, x8, x10
00a1a2dc:  tbnz     x10, #0x3f, #0xa1a4e4
00a1a2e0:  ldr      x10, [sp, #0x238]
00a1a2e4:  b        #0xa1a500
00a1a2e8:  mov      w8, #1
00a1a2ec:  strb     w8, [sp, #0x25b]
00a1a2f0:  b        #0xa1a634
00a1a2f4:  mov      w9, w19
00a1a2f8:  mov      x8, xzr
00a1a2fc:  and      x9, x9, #0xff
00a1a300:  orr      x9, x9, x26, lsl #8
00a1a304:  orr      x9, x9, x22, lsl #16
00a1a308:  str      x9, [sp, #0x250]
00a1a30c:  b        #0xa19d08
00a1a310:  ldrb     w8, [sp, #0x258]
00a1a314:  tbnz     w8, #0, #0xa1a364
00a1a318:  mov      w8, w19
00a1a31c:  ldr      x9, [sp, #0x220]
00a1a320:  and      x8, x8, #0xff
00a1a324:  orr      x8, x8, x26, lsl #8
00a1a328:  adds     x23, x8, x9
00a1a32c:  b.hs     #0xa1acc8
00a1a330:  ldrb     w8, [sp, #0x208]
00a1a334:  mov      x9, #-1
00a1a338:  neg      w8, w8, lsl #3
00a1a33c:  and      w8, w8, #0x38
00a1a340:  lsr      x8, x9, x8
00a1a344:  cmp      x23, x8
00a1a348:  b.hi     #0xa1acc8
00a1a34c:  mov      x8, xzr
00a1a350:  str      x23, [sp, #0x220]
00a1a354:  str      xzr, [sp, #0x228]
00a1a358:  b        #0xa19d08
00a1a35c:  ldrb     w8, [sp, #0x258]
00a1a360:  tbz      w8, #0, #0xa1a464
00a1a364:  mov      x8, xzr
00a1a368:  b        #0xa19d08
00a1a36c:  mov      w8, w19
00a1a370:  and      x8, x8, #0xff
00a1a374:  orr      x8, x8, x26, lsl #8
00a1a378:  orr      x9, x8, x22, lsl #16
00a1a37c:  ldr      x8, [sp, #0x220]
00a1a380:  cmp      x9, x8
00a1a384:  b.hs     #0xa1a4ac
00a1a388:  mov      w9, #1
00a1a38c:  mov      x8, xzr
00a1a390:  strb     w9, [sp, #0x258]
00a1a394:  b        #0xa19d08
00a1a398:  ldrb     w9, [sp, #0x259]
00a1a39c:  mov      x8, xzr
00a1a3a0:  eor      w9, w9, #1
00a1a3a4:  strb     w9, [sp, #0x259]
00a1a3a8:  b        #0xa19d08
00a1a3ac:  mov      w9, w19
00a1a3b0:  mov      x8, xzr
00a1a3b4:  and      x9, x9, #0xff
00a1a3b8:  orr      x9, x9, x26, lsl #8
00a1a3bc:  orr      x9, x9, x22, lsl #16
00a1a3c0:  str      x9, [sp, #0x230]
00a1a3c4:  b        #0xa19d08
00a1a3c8:  sub      x0, x29, #0x20
00a1a3cc:  sub      x1, x29, #0x60
00a1a3d0:  stp      x8, x9, [x29, #-0x60]
00a1a3d4:  bl       #0xa69f78
00a1a3d8:  ldurb    w8, [x29, #-0x20]
00a1a3dc:  cmp      w8, #0xff
00a1a3e0:  b.ne     #0xa1ac90
00a1a3e4:  ldur     x8, [x29, #-0x18]
00a1a3e8:  sub      x0, x29, #0x20
00a1a3ec:  sub      x1, x29, #0x60
00a1a3f0:  str      x8, [sp, #0x90]
00a1a3f4:  bl       #0xa69f78
00a1a3f8:  ldurb    w8, [x29, #-0x20]
00a1a3fc:  cmp      w8, #0xff
00a1a400:  b.ne     #0xa1ac90
00a1a404:  ldur     x8, [x29, #-0x18]
00a1a408:  sub      x0, x29, #0x20
00a1a40c:  sub      x1, x29, #0x60
00a1a410:  str      x8, [sp, #0x88]
00a1a414:  bl       #0xa69f78
00a1a418:  ldurb    w8, [x29, #-0x20]
00a1a41c:  cmp      w8, #0xff
00a1a420:  b.ne     #0xa1ac90
00a1a424:  sub      x8, x29, #0x50
00a1a428:  lsr      x9, x27, #8
00a1a42c:  ubfx     x26, x22, #8, #8
00a1a430:  stp      xzr, xzr, [x8, #0x18]
00a1a434:  ldur     x8, [x29, #-0x18]
00a1a438:  lsr      w28, w22, #0x10
00a1a43c:  ldp      q0, q1, [x29, #-0x50]
00a1a440:  lsr      x21, x22, #0x20
00a1a444:  str      x8, [sp, #0x80]
00a1a448:  ldur     x8, [x29, #-0x30]
00a1a44c:  mov      w25, #0x20
00a1a450:  stp      x9, x27, [sp, #0xa0]
00a1a454:  mov      w19, w22
00a1a458:  stur     x8, [x29, #-0x70]
00a1a45c:  stp      q0, q1, [x29, #-0x90]
00a1a460:  b        #0xa1a174
00a1a464:  and      x8, x19, #0xff
00a1a468:  ldrb     w10, [sp, #0x20e]
00a1a46c:  orr      x8, x8, x26, lsl #8
00a1a470:  cmp      w10, #1
00a1a474:  orr      x9, x8, x22, lsl #16
00a1a478:  ldrb     w8, [sp, #0x20d]
00a1a47c:  b.eq     #0xa1a5a8
00a1a480:  cbz      w10, #0xa1adac
00a1a484:  ldr      x11, [sp, #0x228]
00a1a488:  add      x11, x11, x9
00a1a48c:  udiv     x9, x11, x10
00a1a490:  msub     x10, x9, x10, x11
00a1a494:  mul      x8, x9, x8
00a1a498:  ldr      x9, [sp, #0x220]
00a1a49c:  str      x10, [sp, #0x228]
00a1a4a0:  adds     x23, x8, x9
00a1a4a4:  b.lo     #0xa1a5d4
00a1a4a8:  b        #0xa1acc8
00a1a4ac:  ldrb     w8, [sp, #0x208]
00a1a4b0:  mov      x10, #-2
00a1a4b4:  neg      w8, w8, lsl #3
00a1a4b8:  and      w8, w8, #0x38
00a1a4bc:  lsl      x10, x10, x8
00a1a4c0:  lsr      x8, x10, x8
00a1a4c4:  cmp      x9, x8
00a1a4c8:  cset     w8, hs
00a1a4cc:  strb     w8, [sp, #0x258]
00a1a4d0:  mov      x8, xzr
00a1a4d4:  b.hs     #0xa19d08
00a1a4d8:  str      x9, [sp, #0x220]
00a1a4dc:  str      xzr, [sp, #0x228]
00a1a4e0:  b        #0xa19d08
00a1a4e4:  ldr      x10, [sp, #0x238]
00a1a4e8:  neg      x8, x9
00a1a4ec:  cmp      x10, x8
00a1a4f0:  b.hs     #0xa1a500
00a1a4f4:  mov      x8, xzr
00a1a4f8:  str      xzr, [sp, #0x238]
00a1a4fc:  b        #0xa19d08
00a1a500:  mov      x8, xzr
00a1a504:  add      x9, x10, x9
00a1a508:  str      x9, [sp, #0x238]
00a1a50c:  b        #0xa19d08
00a1a510:  ldr      x10, [sp, #0x238]
00a1a514:  neg      x11, x9
00a1a518:  add      x9, x10, x9
00a1a51c:  cmp      x10, x11
00a1a520:  csel     x9, xzr, x9, lo
00a1a524:  ldrb     w10, [sp, #0x258]
00a1a528:  str      x9, [sp, #0x238]
00a1a52c:  tbnz     w10, #0, #0xa1a634
00a1a530:  ldrb     w10, [sp, #0x20e]
00a1a534:  ldrb     w9, [sp, #0x20d]
00a1a538:  cmp      w10, #1
00a1a53c:  b.eq     #0xa1a5fc
00a1a540:  cbz      w10, #0xa1adac
00a1a544:  ldr      x11, [sp, #0x228]
00a1a548:  add      x11, x11, x8
00a1a54c:  udiv     x8, x11, x10
00a1a550:  msub     x10, x8, x10, x11
00a1a554:  b        #0xa1a600
00a1a558:  mov      w25, #0x3c
00a1a55c:  mov      w19, w22
00a1a560:  b        #0xa1a174
00a1a564:  cbz      x8, #0xa1a694
00a1a568:  ldrb     w19, [x22]
00a1a56c:  ldr      x9, [sp, #0x78]
00a1a570:  orr      x9, x9, #0xff
00a1a574:  and      w8, w9, #0xff
00a1a578:  cmp      w8, #0xff
00a1a57c:  b.eq     #0xa1a160
00a1a580:  b        #0xa1ad08
00a1a584:  cmp      x8, #3
00a1a588:  b.ls     #0xa1acec
00a1a58c:  ldr      w19, [x22]
00a1a590:  ldr      x9, [sp, #0x78]
00a1a594:  orr      x9, x9, #0xff
00a1a598:  and      w8, w9, #0xff
00a1a59c:  cmp      w8, #0xff
00a1a5a0:  b.eq     #0xa1a160
00a1a5a4:  b        #0xa1ad08
00a1a5a8:  mul      x8, x9, x8
00a1a5ac:  ldr      x9, [sp, #0x220]
00a1a5b0:  str      xzr, [sp, #0x228]
00a1a5b4:  adds     x23, x8, x9
00a1a5b8:  b.lo     #0xa1a5d4
00a1a5bc:  b        #0xa1acc8
00a1a5c0:  mul      x8, x8, x9
00a1a5c4:  ldr      x9, [sp, #0x220]
00a1a5c8:  str      xzr, [sp, #0x228]
00a1a5cc:  adds     x23, x8, x9
00a1a5d0:  b.hs     #0xa1acc8
00a1a5d4:  ldrb     w8, [sp, #0x208]
00a1a5d8:  mov      x9, #-1
00a1a5dc:  neg      w8, w8, lsl #3
00a1a5e0:  and      w8, w8, #0x38
00a1a5e4:  lsr      x8, x9, x8
00a1a5e8:  cmp      x23, x8
00a1a5ec:  b.hi     #0xa1acc8
00a1a5f0:  mov      x8, xzr
00a1a5f4:  str      x23, [sp, #0x220]
00a1a5f8:  b        #0xa19d08
00a1a5fc:  mov      x10, xzr
00a1a600:  mul      x8, x8, x9
00a1a604:  ldr      x9, [sp, #0x220]
00a1a608:  str      x10, [sp, #0x228]
00a1a60c:  adds     x23, x8, x9
00a1a610:  b.hs     #0xa1acc8
00a1a614:  ldrb     w8, [sp, #0x208]
00a1a618:  mov      x9, #-1
00a1a61c:  neg      w8, w8, lsl #3
00a1a620:  and      w8, w8, #0x38
00a1a624:  lsr      x8, x9, x8
00a1a628:  cmp      x23, x8
00a1a62c:  b.hi     #0xa1acc8
00a1a630:  str      x23, [sp, #0x220]
00a1a634:  ldrb     w8, [sp, #0x258]
00a1a638:  tbz      w8, #0, #0xa1a6b4
00a1a63c:  ldrb     w8, [sp, #0x25b]
00a1a640:  tbz      w8, #0, #0xa1a680
00a1a644:  mov      w8, #1
00a1a648:  add      x9, sp, #0xf0
00a1a64c:  add      x20, sp, #0xf0
00a1a650:  dup      v0.2d, x8
00a1a654:  stp      xzr, xzr, [x9, #0x130]
00a1a658:  ldrb     w8, [sp, #0x20c]
00a1a65c:  stp      xzr, xzr, [x9, #0x150]
00a1a660:  str      xzr, [x9, #0x160]
00a1a664:  strb     wzr, [x9, #0x168]
00a1a668:  ldr      x9, [sp, #0x10]
00a1a66c:  str      q0, [sp, #0x230]
00a1a670:  strb     w8, [sp, #0x259]
00a1a674:  mov      w8, #0x100
00a1a678:  stur     wzr, [x9, #0x4d]
00a1a67c:  b        #0xa19d08
00a1a680:  str      xzr, [sp, #0x250]
00a1a684:  mov      w8, #0x100
00a1a688:  strb     wzr, [sp, #0x25a]
00a1a68c:  strh     wzr, [sp, #0x25c]
00a1a690:  b        #0xa19d08
00a1a694:  ldr      x9, [sp, #0x78]
00a1a698:  mov      x8, #0x11
00a1a69c:  mov      x19, x22
00a1a6a0:  bfxil    x9, x8, #0, #8
00a1a6a4:  and      w8, w9, #0xff
00a1a6a8:  cmp      w8, #0xff
00a1a6ac:  b.eq     #0xa1a160
00a1a6b0:  b        #0xa1ad08
00a1a6b4:  ldrb     w8, [sp, #0x25b]
00a1a6b8:  ldr      x25, [sp, #8]
00a1a6bc:  tbz      w8, #0, #0xa1a71c
00a1a6c0:  cbz      x25, #0xa1a79c
00a1a6c4:  ldp      x8, x23, [sp, #0xd0]
00a1a6c8:  ldr      x19, [sp, #0x220]
00a1a6cc:  ldr      q0, [sp, #0x60]
00a1a6d0:  str      xzr, [sp, #0xe0]
00a1a6d4:  ldr      x22, [x23]
00a1a6d8:  str      q0, [sp, #0xd0]
00a1a6dc:  cmp      x22, x19
00a1a6e0:  b.hs     #0xa1a7a8
00a1a6e4:  cmp      x8, x25
00a1a6e8:  b.ls     #0xa1a7d0
00a1a6ec:  add      x8, x8, x8, lsl #1
00a1a6f0:  add      x9, x25, x25, lsl #1
00a1a6f4:  mov      x0, x23
00a1a6f8:  mov      w2, #8
00a1a6fc:  lsl      x21, x8, #3

; ===== 00a1af38  FUN_00a1af38  (11924 bytes) =====
00a1af38:  stp      x29, x30, [sp, #-0x60]!
00a1af3c:  bl       #0xa6baf8
00a1af40:  sub      sp, sp, #1, lsl #12
00a1af44:  str      xzr, [sp]
00a1af48:  sub      sp, sp, #0x3c0
00a1af4c:  adrp     x8, #0xb0f000
00a1af50:  mov      x21, x0
00a1af54:  nop      
00a1af58:  adr      x23, #0xb0f878
00a1af5c:  ldr      x8, [x8, #0x878]
00a1af60:  str      x2, [sp, #0x1f8]
00a1af64:  str      x1, [sp, #0x240]
00a1af68:  cmn      x8, #1
00a1af6c:  b.ne     #0xa1b22c
00a1af70:  mov      w8, #1
00a1af74:  adrp     x9, #0x383000
00a1af78:  add      x9, x9, #0x59
00a1af7c:  ldr      x11, [x9]
00a1af80:  str      x8, [sp, #0x1228]
00a1af84:  ldur     x8, [x9, #7]
00a1af88:  add      x9, sp, #0x168
00a1af8c:  mov      x10, #0x1b600000000
00a1af90:  add      x0, sp, #0x260
00a1af94:  str      x11, [sp, #0x260]
00a1af98:  mov      w1, #0x10
00a1af9c:  stur     x8, [x9, #0xff]
00a1afa0:  add      x8, sp, #0xec0
00a1afa4:  str      x10, [sp, #0x1220]
00a1afa8:  strb     wzr, [sp, #0x26f]
00a1afac:  bl       #0xac4b10
00a1afb0:  bl       #0xa6bb70
00a1afb4:  b.ne     #0xa1afc4
00a1afb8:  nop      
00a1afbc:  adr      x8, #0xafab10
00a1afc0:  b        #0xa1afec
00a1afc4:  ldr      x1, [sp, #0xec8]
00a1afc8:  add      x0, sp, #1, lsl #12
00a1afcc:  add      x2, sp, #1, lsl #12
00a1afd0:  add      x0, x0, #0x130
00a1afd4:  add      x2, x2, #0x220
00a1afd8:  bl       #0xa4725c
00a1afdc:  ldr      w8, [sp, #0x1130]
00a1afe0:  cmp      w8, #1
00a1afe4:  b.ne     #0xa1b008
00a1afe8:  ldr      x8, [sp, #0x1138]
00a1afec:  bl       #0xa6b920
00a1aff0:  b.lo     #0xa1b184
00a1aff4:  cbz      x9, #0xa1b184
00a1aff8:  sub      x8, x8, #1
00a1affc:  bl       #0xa6b910
00a1b000:  bl       #0xa6bbe0
00a1b004:  b        #0xa1b184
00a1b008:  ldr      w8, [sp, #0x1134]
00a1b00c:  mov      w9, #1
00a1b010:  str      xzr, [sp, #0x1130]
00a1b014:  str      x9, [sp, #0x1138]
00a1b018:  stur     w8, [x29, #-0x78]
00a1b01c:  sub      x8, x29, #0x78
00a1b020:  str      xzr, [sp, #0x1140]
00a1b024:  str      x8, [sp, #0x260]
00a1b028:  add      x1, sp, #1, lsl #12
00a1b02c:  add      x0, sp, #0x260
00a1b030:  add      x1, x1, #0x130
00a1b034:  bl       #0xac4b20
00a1b038:  cmp      x0, #1
00a1b03c:  b.ne     #0xa1b080
00a1b040:  and      x8, x1, #3
00a1b044:  sub      x9, x8, #2
00a1b048:  cmp      x9, #2
00a1b04c:  b.lo     #0xa1b064
00a1b050:  cbz      x8, #0xa1b064
00a1b054:  sub      x8, x1, #1
00a1b058:  bl       #0xa6b910
00a1b05c:  strb     w9, [sp, #0x260]
00a1b060:  bl       #0xa6b9e4
00a1b064:  ldr      x1, [sp, #0x1130]
00a1b068:  cbz      x1, #0xa1b074
00a1b06c:  ldr      x0, [sp, #0x1138]
00a1b070:  bl       #0xa6b890
00a1b074:  ldur     w0, [x29, #-0x78]
00a1b078:  bl       #0xaba040
00a1b07c:  b        #0xa1b184
00a1b080:  ldr      x26, [sp, #0x1140]
00a1b084:  mov      w8, #8
00a1b088:  mov      x19, xzr
00a1b08c:  str      xzr, [sp, #0xec0]
00a1b090:  str      x8, [sp, #0xec8]
00a1b094:  str      xzr, [sp, #0xed0]
00a1b098:  cbz      x26, #0xa1b15c
00a1b09c:  ldr      x22, [sp, #0x1138]
00a1b0a0:  add      x25, sp, #0x260
00a1b0a4:  mov      w28, #8
00a1b0a8:  add      x8, x22, x26
00a1b0ac:  mov      x24, xzr
00a1b0b0:  ldrb     w9, [x22, x24]
00a1b0b4:  cmp      w9, #0xa
00a1b0b8:  b.eq     #0xa1b0d0
00a1b0bc:  add      x24, x24, #1
00a1b0c0:  add      x9, x22, x24
00a1b0c4:  cmp      x9, x8
00a1b0c8:  b.eq     #0xa1b15c
00a1b0cc:  b        #0xa1b0b0
00a1b0d0:  add      x8, sp, #0x260
00a1b0d4:  mov      x0, x22
00a1b0d8:  mov      x1, x24
00a1b0dc:  bl       #0xac4b30
00a1b0e0:  bl       #0xa6bc7c
00a1b0e4:  b.eq     #0xa1cf58
00a1b0e8:  ldr      x8, [sp, #0xec0]
00a1b0ec:  ldur     q0, [x25, #0x18]
00a1b0f0:  ldur     x9, [x25, #0x28]
00a1b0f4:  ldr      x25, [sp, #0x268]
00a1b0f8:  ldr      x27, [sp, #0x270]
00a1b0fc:  cmp      x19, x8
00a1b100:  str      q0, [sp, #0xc50]
00a1b104:  str      x9, [sp, #0xc60]
00a1b108:  b.ne     #0xa1b118
00a1b10c:  add      x0, sp, #0xec0
00a1b110:  bl       #0xac4b40
00a1b114:  ldr      x28, [sp, #0xec8]
00a1b118:  mov      w8, #0x30
00a1b11c:  sub      x11, x26, #1
00a1b120:  add      x12, x22, x24
00a1b124:  madd     x9, x19, x8, x28
00a1b128:  add      x19, x19, #1
00a1b12c:  add      x8, x22, x26
00a1b130:  subs     x26, x11, x24
00a1b134:  add      x22, x12, #1
00a1b138:  stp      x20, x25, [x9]
00a1b13c:  add      x25, sp, #0x260
00a1b140:  str      x27, [x9, #0x10]
00a1b144:  ldr      x10, [sp, #0xc60]
00a1b148:  ldr      q0, [sp, #0xc50]
00a1b14c:  str      x10, [x9, #0x28]
00a1b150:  stur     q0, [x9, #0x18]
00a1b154:  str      x19, [sp, #0xed0]
00a1b158:  b.ne     #0xa1b0ac
00a1b15c:  ldr      x1, [sp, #0x1130]
00a1b160:  ldr      x20, [sp, #0xec0]
00a1b164:  ldr      x22, [sp, #0xec8]
00a1b168:  cbz      x1, #0xa1b174
00a1b16c:  ldr      x0, [sp, #0x1138]
00a1b170:  bl       #0xa6b890
00a1b174:  ldur     w0, [x29, #-0x78]
00a1b178:  bl       #0xaba040
00a1b17c:  cmn      x20, #1
00a1b180:  b.ne     #0xa1b188
00a1b184:  mov      x20, #-1
00a1b188:  mov      w8, #8
00a1b18c:  nop      
00a1b190:  adr      x0, #0xa52cd4
00a1b194:  add      x1, sp, #0x260
00a1b198:  str      xzr, [sp, #0x260]
00a1b19c:  str      x8, [sp, #0x268]
00a1b1a0:  str      xzr, [sp, #0x270]
00a1b1a4:  str      x20, [sp, #0x278]
00a1b1a8:  str      x22, [sp, #0x280]
00a1b1ac:  str      x19, [sp, #0x288]
00a1b1b0:  bl       #0xac4b50
00a1b1b4:  ldr      x19, [sp, #0x278]
00a1b1b8:  ldr      q0, [sp, #0x260]
00a1b1bc:  ldr      x8, [sp, #0x270]
00a1b1c0:  cmn      x19, #1
00a1b1c4:  str      q0, [sp, #0xec0]
00a1b1c8:  str      x8, [sp, #0xed0]
00a1b1cc:  b.eq     #0xa1b208
00a1b1d0:  ldr      x22, [sp, #0x288]
00a1b1d4:  ldr      x20, [sp, #0x280]
00a1b1d8:  cbz      x22, #0xa1b1fc
00a1b1dc:  add      x24, x20, #8
00a1b1e0:  ldur     x1, [x24, #-8]
00a1b1e4:  cbz      x1, #0xa1b1f0
00a1b1e8:  ldr      x0, [x24]
00a1b1ec:  bl       #0xa6b890
00a1b1f0:  subs     x22, x22, #1
00a1b1f4:  add      x24, x24, #0x30
00a1b1f8:  b.ne     #0xa1b1e0
00a1b1fc:  cbz      x19, #0xa1b208
00a1b200:  add      x8, x19, x19, lsl #1
00a1b204:  bl       #0xa6b938
00a1b208:  ldr      q0, [sp, #0xec0]
00a1b20c:  ldr      x8, [sp, #0xed0]
00a1b210:  add      x1, sp, #0x260
00a1b214:  mov      x0, x23
00a1b218:  mov      w2, #0x9b8
00a1b21c:  str      q0, [sp, #0x260]
00a1b220:  str      x8, [sp, #0x270]
00a1b224:  bl       #0xab9420
00a1b228:  str      xzr, [x23, #0x9b8]
00a1b22c:  adrp     x8, #0xb0f000
00a1b230:  add      x8, x8, #0x880
00a1b234:  ldr      x1, [x8, #8]
00a1b238:  cbz      x1, #0xa1cf1c
00a1b23c:  mov      w10, #0x48
00a1b240:  ldr      x9, [x8]
00a1b244:  mov      x22, xzr
00a1b248:  madd     x8, x1, x10, x9
00a1b24c:  add      x15, sp, #0xc50
00a1b250:  mov      x10, x9
00a1b254:  ldp      x12, x11, [x10, #0x30]
00a1b258:  ldr      x25, [x10, #0x40]
00a1b25c:  add      x10, x10, #0x48
00a1b260:  lsl      x11, x11, #4
00a1b264:  cbz      x11, #0xa1b288
00a1b268:  ldp      x13, x14, [x12], #0x10
00a1b26c:  sub      x11, x11, #0x10
00a1b270:  add      x13, x13, x25
00a1b274:  add      x14, x13, x14
00a1b278:  cmp      x13, x21
00a1b27c:  ccmp     x14, x21, #0, ls
00a1b280:  b.ls     #0xa1b264
00a1b284:  b        #0xa1b298
00a1b288:  cmp      x10, x8
00a1b28c:  add      x22, x22, #1
00a1b290:  b.ne     #0xa1b254
00a1b294:  b        #0xa1cf1c
00a1b298:  adrp     x26, #0xb10000
00a1b29c:  ldr      x8, [x26, #0x230]
00a1b2a0:  cmp      x8, #5
00a1b2a4:  b.hs     #0xa1cfe8
00a1b2a8:  cbz      x8, #0xa1b2dc
00a1b2ac:  mov      w11, #0x268
00a1b2b0:  mov      x10, xzr
00a1b2b4:  mov      x12, xzr
00a1b2b8:  mul      x11, x8, x11
00a1b2bc:  add      x13, x23, x10
00a1b2c0:  ldr      x13, [x13, #0x18]
00a1b2c4:  cmp      x13, x22
00a1b2c8:  b.eq     #0xa1b404
00a1b2cc:  add      x10, x10, #0x268
00a1b2d0:  add      x12, x12, #1
00a1b2d4:  cmp      x11, x10
00a1b2d8:  b.ne     #0xa1b2bc
00a1b2dc:  add      x8, x15, #0x128
00a1b2e0:  cmp      x22, x1
00a1b2e4:  str      x8, [sp, #0x258]
00a1b2e8:  b.hs     #0xa1d914
00a1b2ec:  mov      w8, #0x48
00a1b2f0:  madd     x8, x22, x8, x9
00a1b2f4:  ldr      x9, [x8]
00a1b2f8:  ldp      x28, x27, [x8, #0x18]
00a1b2fc:  cmp      x9, #1
00a1b300:  ccmp     x27, #2, #0, eq
00a1b304:  b.hs     #0xa1b450
00a1b308:  add      x0, sp, #0x260
00a1b30c:  mov      x1, x28
00a1b310:  mov      x2, x27
00a1b314:  bl       #0xa50dc4
00a1b318:  bl       #0xa6bd04
00a1b31c:  b.ne     #0xa1cf1c
00a1b320:  ldr      x1, [sp, #0x268]
00a1b324:  mov      w8, #8
00a1b328:  ldr      x2, [sp, #0x270]
00a1b32c:  str      xzr, [sp, #0x11c0]
00a1b330:  str      x8, [sp, #0x11c8]
00a1b334:  str      xzr, [sp, #0x11d8]
00a1b338:  str      xzr, [sp, #0x11d0]
00a1b33c:  str      x8, [sp, #0x11e0]
00a1b340:  str      xzr, [sp, #0x11e8]
00a1b344:  add      x0, sp, #0x260
00a1b348:  str      x1, [sp, #0x248]
00a1b34c:  str      x2, [sp, #0x250]
00a1b350:  bl       #0xa40300
00a1b354:  ldr      x8, [sp, #0x260]
00a1b358:  cmn      x8, #1
00a1b35c:  b.eq     #0xa1b91c
00a1b360:  add      x0, sp, #1, lsl #12
00a1b364:  add      x1, sp, #0x260
00a1b368:  mov      w2, #0x78
00a1b36c:  add      x0, x0, #0x220
00a1b370:  str      x28, [sp, #0x230]
00a1b374:  str      x27, [sp, #0x238]
00a1b378:  bl       #0xab9420
00a1b37c:  add      x0, sp, #1, lsl #12
00a1b380:  add      x0, x0, #0x220
00a1b384:  bl       #0xa40c88
00a1b388:  ldr      x8, [sp, #0x1250]
00a1b38c:  cbz      x8, #0xa1b7c8
00a1b390:  ldr      x27, [sp, #0x1258]
00a1b394:  cbz      x27, #0xa1b7c8
00a1b398:  lsl      x24, x8, #6
00a1b39c:  ldr      x8, [sp, #0x1248]
00a1b3a0:  ldr      x28, [sp, #0x1260]
00a1b3a4:  ldr      x20, [sp, #0x1270]
00a1b3a8:  ldr      x26, [sp, #0x1268]
00a1b3ac:  adrp     x23, #0x382000
00a1b3b0:  add      x23, x23, #0xa3c
00a1b3b4:  add      x19, x8, #0x20
00a1b3b8:  ldur     w8, [x19, #-0x20]
00a1b3bc:  adds     x2, x26, x8
00a1b3c0:  b.hs     #0xa1b3f4
00a1b3c4:  mov      x0, x27
00a1b3c8:  mov      x1, x28
00a1b3cc:  mov      x3, x20
00a1b3d0:  mov      w4, wzr
00a1b3d4:  bl       #0xac4b60
00a1b3d8:  cbz      x0, #0xa1b3f4
00a1b3dc:  cmp      x1, #0xe
00a1b3e0:  b.ne     #0xa1b3f4
00a1b3e4:  mov      x1, x23
00a1b3e8:  mov      w2, #0xe
00a1b3ec:  bl       #0xab97c0
00a1b3f0:  cbz      w0, #0xa1b720
00a1b3f4:  subs     x24, x24, #0x40
00a1b3f8:  add      x19, x19, #0x40
00a1b3fc:  b.ne     #0xa1b3b8
00a1b400:  b        #0xa1b7c8
00a1b404:  cmp      x12, x8
00a1b408:  b.hs     #0xa1cf1c
00a1b40c:  adrp     x20, #0xb0f000
00a1b410:  add      x20, x20, #0x890
00a1b414:  add      x0, sp, #0xec0
00a1b418:  add      x1, x20, x10
00a1b41c:  mov      w2, #0x268
00a1b420:  add      x19, x10, #0x268
00a1b424:  bl       #0xab9420
00a1b428:  bl       #0xa6bcbc
00a1b42c:  mov      w2, #0x268
00a1b430:  add      x22, x20, #0x268
00a1b434:  bl       #0xab9420
00a1b438:  bl       #0xa6bad8
00a1b43c:  bl       #0xa6bab0
00a1b440:  subs     x19, x19, #0x268
00a1b444:  mov      x20, x22
00a1b448:  b.ne     #0xa1b428
00a1b44c:  b        #0xa1bb0c
00a1b450:  ldr      x24, [x8, #8]
00a1b454:  mov      x23, xzr
00a1b458:  sub      x8, x27, #1
00a1b45c:  mov      w9, #0x2f21
00a1b460:  ldrh     w10, [x28, x23]
00a1b464:  cmp      w10, w9
00a1b468:  b.eq     #0xa1b47c
00a1b46c:  add      x23, x23, #1
00a1b470:  cmp      x8, x23
00a1b474:  b.ne     #0xa1b460
00a1b478:  b        #0xa1b308
00a1b47c:  cmp      x23, x27
00a1b480:  b.hi     #0xa1d264
00a1b484:  mov      x8, #0x1b600000000
00a1b488:  mov      w9, #1
00a1b48c:  cmp      x23, #0x17f
00a1b490:  str      x8, [sp, #0x1130]
00a1b494:  add      x8, sp, #1, lsl #12
00a1b498:  add      x8, x8, #0x130
00a1b49c:  str      x9, [sp, #0x1138]
00a1b4a0:  str      x8, [sp, #0x1220]
00a1b4a4:  b.hi     #0xa1d27c
00a1b4a8:  add      x0, sp, #0x260
00a1b4ac:  mov      x1, x28
00a1b4b0:  mov      x2, x23
00a1b4b4:  add      x19, sp, #0x260
00a1b4b8:  bl       #0xab9420
00a1b4bc:  add      x8, sp, #0xec0
00a1b4c0:  add      x0, sp, #0x260
00a1b4c4:  add      x1, x23, #1
00a1b4c8:  strb     wzr, [x19, x23]
00a1b4cc:  bl       #0xac4b10
00a1b4d0:  bl       #0xa6bb70
00a1b4d4:  b.ne     #0xa1b4f0
00a1b4d8:  nop      
00a1b4dc:  adr      x8, #0xafab10
00a1b4e0:  str      x8, [sp, #0xc58]
00a1b4e4:  mov      w8, #1
00a1b4e8:  str      w8, [sp, #0xc50]
00a1b4ec:  b        #0xa1b504
00a1b4f0:  ldr      x1, [sp, #0xec8]
00a1b4f4:  add      x2, sp, #1, lsl #12
00a1b4f8:  add      x0, sp, #0xc50
00a1b4fc:  add      x2, x2, #0x130
00a1b500:  bl       #0xa4725c
00a1b504:  ldr      w8, [sp, #0xc50]
00a1b508:  cmp      w8, #1
00a1b50c:  b.ne     #0xa1b530
00a1b510:  ldr      x8, [sp, #0xc58]
00a1b514:  bl       #0xa6b920
00a1b518:  b.lo     #0xa1b308
00a1b51c:  cbz      x9, #0xa1b308
00a1b520:  sub      x8, x8, #1
00a1b524:  bl       #0xa6b910
00a1b528:  bl       #0xa6bbe0
00a1b52c:  b        #0xa1b308
00a1b530:  movi     v0.2d, #0000000000000000
00a1b534:  ldr      w23, [sp, #0xc54]
00a1b538:  add      x1, sp, #0x260
00a1b53c:  mov      w0, w23
00a1b540:  stp      q0, q0, [sp, #0x260]
00a1b544:  stp      q0, q0, [sp, #0x280]
00a1b548:  stp      q0, q0, [sp, #0x2a0]
00a1b54c:  stp      q0, q0, [sp, #0x2c0]
00a1b550:  bl       #0xabc140
00a1b554:  cmn      w0, #1
00a1b558:  b.eq     #0xa1b76c
00a1b55c:  tbnz     x24, #0x3f, #0xa1b7a4
00a1b560:  ldr      x8, [sp, #0x290]
00a1b564:  mov      x0, xzr
00a1b568:  mov      w2, #1
00a1b56c:  mov      w3, #2
00a1b570:  mov      w4, w23
00a1b574:  mov      x5, x24
00a1b578:  sub      x19, x8, x24
00a1b57c:  mov      x1, x19
00a1b580:  bl       #0xabc1d0
00a1b584:  cmn      x0, #1
00a1b588:  b.eq     #0xa1b7a4
00a1b58c:  mov      w8, #8
00a1b590:  mov      x9, x0
00a1b594:  str      xzr, [sp, #0x1220]
00a1b598:  str      x8, [sp, #0x1228]
00a1b59c:  str      xzr, [sp, #0x1238]
00a1b5a0:  str      xzr, [sp, #0x1230]
00a1b5a4:  str      x8, [sp, #0x1240]
00a1b5a8:  str      xzr, [sp, #0x1248]
00a1b5ac:  add      x0, sp, #1, lsl #12
00a1b5b0:  mov      x1, x9
00a1b5b4:  mov      x2, x19
00a1b5b8:  add      x0, x0, #0x130
00a1b5bc:  str      x9, [sp, #0x248]
00a1b5c0:  str      x19, [sp, #0x250]
00a1b5c4:  bl       #0xa40300
00a1b5c8:  ldr      x8, [sp, #0x1130]
00a1b5cc:  cmn      x8, #1
00a1b5d0:  b.eq     #0xa1b79c
00a1b5d4:  add      x1, sp, #1, lsl #12
00a1b5d8:  add      x0, sp, #0xc50
00a1b5dc:  mov      w2, #0x78
00a1b5e0:  add      x1, x1, #0x130
00a1b5e4:  bl       #0xab9420
00a1b5e8:  mov      x8, #-1
00a1b5ec:  str      x8, [sp, #0xec0]
00a1b5f0:  add      x1, sp, #1, lsl #12
00a1b5f4:  add      x0, sp, #0x260
00a1b5f8:  add      x2, sp, #0xc50
00a1b5fc:  add      x1, x1, #0x220
00a1b600:  add      x3, sp, #0xec0
00a1b604:  add      x4, sp, #0xec0
00a1b608:  bl       #0xa3d164
00a1b60c:  bl       #0xa6bc7c
00a1b610:  b.eq     #0xa1b79c
00a1b614:  ldr      x8, [sp, #0x280]
00a1b618:  ldr      x9, [sp, #0x268]
00a1b61c:  mov      w0, w23
00a1b620:  ldr      x10, [sp, #0x270]
00a1b624:  ldr      x11, [sp, #0x278]
00a1b628:  ldr      q2, [sp, #0x420]
00a1b62c:  str      x8, [sp, #0x168]
00a1b630:  ldr      x8, [sp, #0x288]
00a1b634:  ldr      q3, [sp, #0x440]
00a1b638:  ldr      x19, [sp, #0x2e8]
00a1b63c:  ldr      x23, [sp, #0x2f0]
00a1b640:  ldr      x27, [sp, #0x360]
00a1b644:  str      x8, [sp, #0x158]
00a1b648:  ldr      x8, [sp, #0x290]
00a1b64c:  ldr      x28, [sp, #0x368]
00a1b650:  ldr      x24, [sp, #0x370]
00a1b654:  bl       #0xa6b898
00a1b658:  ldr      x8, [sp, #0x2f8]
00a1b65c:  ldr      x9, [sp, #0x328]
00a1b660:  stp      q0, q1, [sp, #0x90]
00a1b664:  ldr      q1, [sp, #0x430]
00a1b668:  ldr      q0, [sp, #0x1220]
00a1b66c:  str      x8, [sp, #0x228]
00a1b670:  ldr      x8, [sp, #0x300]
00a1b674:  stp      q1, q2, [sp, #0x70]
00a1b678:  ldr      q2, [sp, #0x450]
00a1b67c:  ldr      q1, [sp, #0x1230]
00a1b680:  str      x8, [sp, #0x220]
00a1b684:  ldr      x8, [sp, #0x308]
00a1b688:  stp      q2, q3, [sp, #0x50]
00a1b68c:  ldr      q2, [sp, #0x460]
00a1b690:  str      x8, [sp, #0x218]
00a1b694:  ldr      x8, [sp, #0x310]
00a1b698:  str      q0, [sp, #0xc20]
00a1b69c:  ldr      q0, [sp, #0x470]
00a1b6a0:  str      x8, [sp, #0x210]
00a1b6a4:  ldr      x8, [sp, #0x318]
00a1b6a8:  stp      q0, q2, [sp, #0x30]
00a1b6ac:  ldr      q0, [sp, #0x1240]
00a1b6b0:  str      x8, [sp, #0x208]
00a1b6b4:  ldr      x8, [sp, #0x320]
00a1b6b8:  str      q1, [sp, #0xc30]
00a1b6bc:  str      x8, [sp, #0x200]
00a1b6c0:  ldr      x8, [sp, #0x330]
00a1b6c4:  str      q0, [sp, #0xc40]
00a1b6c8:  stp      x8, x9, [sp, #0x1e8]
00a1b6cc:  ldr      x9, [sp, #0x338]
00a1b6d0:  ldr      x8, [sp, #0x340]
00a1b6d4:  bl       #0xa6ba58
00a1b6d8:  bl       #0xaba040
00a1b6dc:  ldp      q25, q24, [sp, #0x30]
00a1b6e0:  ldp      q23, q22, [sp, #0x50]
00a1b6e4:  ldp      q21, q20, [sp, #0x70]
00a1b6e8:  ldp      q19, q18, [sp, #0x90]
00a1b6ec:  ldp      q17, q16, [sp, #0xb0]
00a1b6f0:  ldp      q7, q6, [sp, #0xd0]
00a1b6f4:  ldp      q5, q4, [sp, #0xf0]
00a1b6f8:  ldp      q3, q2, [sp, #0x110]
00a1b6fc:  ldp      x30, x7, [sp, #0x138]
00a1b700:  ldp      x6, x5, [sp, #0x148]
00a1b704:  ldp      x4, x3, [sp, #0x158]
00a1b708:  ldp      x2, x1, [sp, #0x168]
00a1b70c:  ldp      x0, x17, [sp, #0x178]
00a1b710:  ldp      x16, x15, [sp, #0x188]
00a1b714:  ldp      x14, x13, [sp, #0x198]
00a1b718:  ldp      x12, x9, [sp, #0x1a8]
00a1b71c:  b        #0xa1b910
00a1b720:  ldur     w8, [x19, #-0x1c]
00a1b724:  cmp      w8, #8
00a1b728:  b.eq     #0xa1b7c8
00a1b72c:  ldr      x8, [x19]
00a1b730:  cbz      x8, #0xa1b7c8
00a1b734:  ldr      x10, [sp, #0x1240]
00a1b738:  ldur     x9, [x19, #-8]
00a1b73c:  subs     x10, x10, x9
00a1b740:  ccmp     x8, x10, #2, hs
00a1b744:  b.hi     #0xa1b7c8
00a1b748:  ldr      x10, [sp, #0x1238]
00a1b74c:  mov      x27, xzr
00a1b750:  add      x28, x10, x9
00a1b754:  ldrb     w9, [x28, x27]
00a1b758:  cbz      w9, #0xa1b7b0
00a1b75c:  add      x27, x27, #1
00a1b760:  cmp      x8, x27
00a1b764:  b.ne     #0xa1b754
00a1b768:  b        #0xa1b7c8
00a1b76c:  bl       #0xabbc90
00a1b770:  adrp     x8, #0xb01000
00a1b774:  nop      
00a1b778:  adr      x9, #0xafaaf8
00a1b77c:  ldr      x8, [x8, #0x168]
00a1b780:  ldr      x8, [x8]
00a1b784:  cmp      x8, x9
00a1b788:  b.eq     #0xa1b7a4
00a1b78c:  nop      
00a1b790:  adr      x0, #0xafaaf8
00a1b794:  bl       #0xac0af0
00a1b798:  b        #0xa1b7a4
00a1b79c:  bl       #0xa6bbf4
00a1b7a0:  bl       #0xa6b96c
00a1b7a4:  mov      w0, w23
00a1b7a8:  bl       #0xaba040
00a1b7ac:  b        #0xa1b308
00a1b7b0:  and      x9, x27, #0xfffffffffffffffc
00a1b7b4:  add      x10, x9, #4
00a1b7b8:  add      x9, x9, #8
00a1b7bc:  cmp      x9, x10
00a1b7c0:  ccmp     x9, x8, #2, hs
00a1b7c4:  b.ls     #0xa1cf94
00a1b7c8:  add      x3, sp, #1, lsl #12
00a1b7cc:  ldr      x1, [sp, #0x230]
00a1b7d0:  ldr      x2, [sp, #0x238]
00a1b7d4:  add      x0, sp, #0xc50
00a1b7d8:  add      x3, x3, #0x1c0
00a1b7dc:  bl       #0xa30894
00a1b7e0:  adrp     x26, #0xb10000
00a1b7e4:  mov      x8, #-1
00a1b7e8:  str      x8, [sp, #0xec0]
00a1b7ec:  add      x1, sp, #1, lsl #12
00a1b7f0:  add      x2, sp, #1, lsl #12
00a1b7f4:  add      x0, sp, #0x260
00a1b7f8:  add      x1, x1, #0x1c0
00a1b7fc:  add      x2, x2, #0x220
00a1b800:  add      x3, sp, #0xec0
00a1b804:  add      x4, sp, #0xc50
00a1b808:  bl       #0xa3d164
00a1b80c:  bl       #0xa6bc7c
00a1b810:  b.eq     #0xa1b91c
00a1b814:  ldr      x8, [sp, #0x2f8]
00a1b818:  ldr      x10, [sp, #0x328]
00a1b81c:  ldr      q0, [sp, #0x11c0]
00a1b820:  ldp      q2, q3, [sp, #0x380]
00a1b824:  ldr      x14, [sp, #0x268]
00a1b828:  str      x8, [sp, #0x228]
00a1b82c:  ldr      x8, [sp, #0x300]
00a1b830:  ldr      x16, [sp, #0x270]
00a1b834:  ldr      x0, [sp, #0x278]
00a1b838:  ldr      x2, [sp, #0x280]
00a1b83c:  ldr      x4, [sp, #0x288]
00a1b840:  str      x8, [sp, #0x220]
00a1b844:  ldr      x8, [sp, #0x308]
00a1b848:  ldr      x9, [sp, #0x290]
00a1b84c:  ldr      x12, [sp, #0x298]
00a1b850:  ldr      x13, [sp, #0x2a0]
00a1b854:  ldr      x15, [sp, #0x2a8]
00a1b858:  str      x8, [sp, #0x218]
00a1b85c:  ldr      x8, [sp, #0x310]
00a1b860:  ldr      x17, [sp, #0x2b0]
00a1b864:  ldr      x1, [sp, #0x2b8]
00a1b868:  ldr      x3, [sp, #0x2c0]
00a1b86c:  ldr      x5, [sp, #0x2c8]
00a1b870:  str      x8, [sp, #0x210]
00a1b874:  ldr      x8, [sp, #0x318]
00a1b878:  ldr      x6, [sp, #0x2d0]
00a1b87c:  ldr      x7, [sp, #0x2d8]
00a1b880:  ldr      x30, [sp, #0x2e0]
00a1b884:  ldr      x19, [sp, #0x2e8]
00a1b888:  str      x8, [sp, #0x208]
00a1b88c:  ldr      x8, [sp, #0x320]
00a1b890:  ldr      x23, [sp, #0x2f0]
00a1b894:  ldr      q18, [sp, #0x400]
00a1b898:  ldr      q19, [sp, #0x410]
00a1b89c:  ldr      q20, [sp, #0x420]
00a1b8a0:  str      x8, [sp, #0x200]
00a1b8a4:  ldr      x8, [sp, #0x330]
00a1b8a8:  ldr      q21, [sp, #0x430]
00a1b8ac:  ldr      q1, [sp, #0x11d0]
00a1b8b0:  ldr      q22, [sp, #0x440]
00a1b8b4:  ldr      q23, [sp, #0x450]
00a1b8b8:  stp      x8, x10, [sp, #0x1e8]
00a1b8bc:  ldr      x10, [sp, #0x338]
00a1b8c0:  ldr      x8, [sp, #0x340]
00a1b8c4:  str      q0, [sp, #0xc20]
00a1b8c8:  ldr      q24, [sp, #0x460]
00a1b8cc:  ldr      q25, [sp, #0x470]
00a1b8d0:  stp      x8, x10, [sp, #0x1d8]
00a1b8d4:  ldr      x10, [sp, #0x348]
00a1b8d8:  ldr      x8, [sp, #0x350]
00a1b8dc:  ldr      q0, [sp, #0x11e0]
00a1b8e0:  ldr      x27, [sp, #0x360]
00a1b8e4:  ldr      x28, [sp, #0x368]
00a1b8e8:  stp      x8, x10, [sp, #0x1c8]
00a1b8ec:  ldr      x10, [sp, #0x358]
00a1b8f0:  ldr      x24, [sp, #0x370]
00a1b8f4:  ldr      x8, [sp, #0x378]
00a1b8f8:  str      q1, [sp, #0xc30]
00a1b8fc:  str      q0, [sp, #0xc40]
00a1b900:  ldp      q4, q5, [sp, #0x3a0]
00a1b904:  stp      x10, x8, [sp, #0x1b8]
00a1b908:  ldp      q6, q7, [sp, #0x3c0]
00a1b90c:  ldp      q16, q17, [sp, #0x3e0]
00a1b910:  ldr      x10, [sp, #0x250]
00a1b914:  ldr      x11, [sp, #0x248]
00a1b918:  b        #0xa1b97c
00a1b91c:  mov      x20, #-1
00a1b920:  bl       #0xa6bc00
00a1b924:  bl       #0xa6b96c
00a1b928:  mov      x10, x23
00a1b92c:  mov      x11, x19
00a1b930:  cmn      x20, #1
00a1b934:  ldp      x12, x9, [sp, #0x1a8]
00a1b938:  ldp      x14, x13, [sp, #0x198]
00a1b93c:  ldp      x16, x15, [sp, #0x188]
00a1b940:  ldp      x0, x17, [sp, #0x178]
00a1b944:  ldp      x2, x1, [sp, #0x168]
00a1b948:  ldp      x4, x3, [sp, #0x158]
00a1b94c:  ldp      x6, x5, [sp, #0x148]
00a1b950:  ldp      x30, x7, [sp, #0x138]
00a1b954:  ldp      x23, x19, [sp, #0x20]
00a1b958:  ldp      q3, q2, [sp, #0x110]
00a1b95c:  ldp      q5, q4, [sp, #0xf0]
00a1b960:  ldp      q7, q6, [sp, #0xd0]
00a1b964:  ldp      q17, q16, [sp, #0xb0]
00a1b968:  ldp      q19, q18, [sp, #0x90]
00a1b96c:  ldp      q21, q20, [sp, #0x70]
00a1b970:  ldp      q23, q22, [sp, #0x50]
00a1b974:  ldp      q25, q24, [sp, #0x30]
00a1b978:  b.eq     #0xa1cf1c
00a1b97c:  str      x9, [sp, #0xc88]
00a1b980:  ldr      x9, [sp, #0x228]
00a1b984:  add      x8, sp, #0xc50
00a1b988:  ldr      q0, [sp, #0xc40]
00a1b98c:  ldr      q1, [sp, #0xc30]
00a1b990:  str      x20, [sp, #0xc58]
00a1b994:  str      x9, [sp, #0xcf0]
00a1b998:  ldr      x9, [sp, #0x220]
00a1b99c:  str      x14, [sp, #0xc60]
00a1b9a0:  str      x9, [sp, #0xcf8]
00a1b9a4:  ldr      x9, [sp, #0x218]
00a1b9a8:  str      x16, [sp, #0xc68]
00a1b9ac:  str      x9, [sp, #0xd00]
00a1b9b0:  ldr      x9, [sp, #0x210]
00a1b9b4:  str      x0, [sp, #0xc70]
00a1b9b8:  str      x9, [sp, #0xd08]
00a1b9bc:  ldr      x9, [sp, #0x208]
00a1b9c0:  str      x2, [sp, #0xc78]
00a1b9c4:  str      x9, [sp, #0xd10]
00a1b9c8:  ldr      x9, [sp, #0x200]
00a1b9cc:  str      x4, [sp, #0xc80]
00a1b9d0:  str      x9, [sp, #0xd18]
00a1b9d4:  ldr      x9, [sp, #0x1f0]
00a1b9d8:  str      x12, [sp, #0xc90]
00a1b9dc:  str      x9, [sp, #0xd20]
00a1b9e0:  ldr      x9, [sp, #0x1e8]
00a1b9e4:  str      x13, [sp, #0xc98]
00a1b9e8:  str      x9, [sp, #0xd28]
00a1b9ec:  ldr      x9, [sp, #0x1e0]
00a1b9f0:  str      x15, [sp, #0xca0]
00a1b9f4:  str      x9, [sp, #0xd30]
00a1b9f8:  ldr      x9, [sp, #0x1d8]
00a1b9fc:  str      x17, [sp, #0xca8]
00a1ba00:  str      x9, [sp, #0xd38]
00a1ba04:  ldr      x9, [sp, #0x1d0]
00a1ba08:  str      x1, [sp, #0xcb0]
00a1ba0c:  str      x9, [sp, #0xd40]
00a1ba10:  ldr      x9, [sp, #0x1c8]
00a1ba14:  str      x3, [sp, #0xcb8]
00a1ba18:  str      x9, [sp, #0xd48]
00a1ba1c:  ldr      x9, [sp, #0x1b8]
00a1ba20:  str      x5, [sp, #0xcc0]
00a1ba24:  str      x9, [sp, #0xd50]
00a1ba28:  ldr      x9, [sp, #0x258]
00a1ba2c:  str      x6, [sp, #0xcc8]
00a1ba30:  stp      q2, q3, [x9]
00a1ba34:  ldr      q2, [sp, #0xc20]
00a1ba38:  stp      q4, q5, [x9, #0x20]
00a1ba3c:  stp      q6, q7, [x9, #0x40]
00a1ba40:  stp      q16, q17, [x9, #0x60]
00a1ba44:  stp      q18, q19, [x9, #0x80]
00a1ba48:  stp      q20, q21, [x9, #0xa0]
00a1ba4c:  stp      q22, q23, [x9, #0xc0]
00a1ba50:  stp      q24, q25, [x9, #0xe0]
00a1ba54:  ldr      x9, [sp, #0x1c0]
00a1ba58:  str      x7, [sp, #0xcd0]
00a1ba5c:  str      x9, [sp, #0xd70]
00a1ba60:  add      x9, x8, #0x238
00a1ba64:  ldr      x8, [x26, #0x230]
00a1ba68:  str      x30, [sp, #0xcd8]
00a1ba6c:  cmp      x8, #4
00a1ba70:  str      x19, [sp, #0xce0]
00a1ba74:  str      x23, [sp, #0xce8]
00a1ba78:  str      x27, [sp, #0xd58]
00a1ba7c:  str      x28, [sp, #0xd60]
00a1ba80:  str      x24, [sp, #0xd68]
00a1ba84:  str      x11, [sp, #0xe78]
00a1ba88:  str      x10, [sp, #0xe80]
00a1ba8c:  stp      q1, q0, [x9, #0x10]
00a1ba90:  str      q2, [x9]
00a1ba94:  str      x22, [sp, #0xc50]
00a1ba98:  b.ne     #0xa1bab4
00a1ba9c:  mov      w8, #3
00a1baa0:  adrp     x0, #0xb0f000
00a1baa4:  add      x0, x0, #0xfc8
00a1baa8:  str      x8, [x0, #0x268]
00a1baac:  bl       #0xa22224
00a1bab0:  ldr      x8, [x26, #0x230]
00a1bab4:  add      x0, sp, #0xec0
00a1bab8:  add      x1, sp, #0xc50
00a1babc:  mov      w2, #0x268
00a1bac0:  add      x22, x8, #1
00a1bac4:  bl       #0xab9420
00a1bac8:  cmp      x22, #4
00a1bacc:  b.hi     #0xa1d058
00a1bad0:  cbz      x22, #0xa1bb08
00a1bad4:  mov      w8, #0x268
00a1bad8:  adrp     x20, #0xb0f000
00a1badc:  add      x20, x20, #0x890
00a1bae0:  mul      x19, x22, x8
00a1bae4:  bl       #0xa6bcbc
00a1bae8:  mov      w2, #0x268
00a1baec:  add      x23, x20, #0x268
00a1baf0:  bl       #0xab9420
00a1baf4:  bl       #0xa6bad8
00a1baf8:  bl       #0xa6bab0
00a1bafc:  subs     x19, x19, #0x268
00a1bb00:  mov      x20, x23
00a1bb04:  b.ne     #0xa1bae4
00a1bb08:  str      x22, [x26, #0x230]
00a1bb0c:  adrp     x8, #0xb0f000
00a1bb10:  add      x8, x8, #0xa88
00a1bb14:  sub      x25, x21, x25
00a1bb18:  ldp      x8, x1, [x8]
00a1bb1c:  mov      x9, x1
00a1bb20:  mov      x10, x1
00a1bb24:  cbz      x1, #0xa1bb80
00a1bb28:  cmp      x1, #1
00a1bb2c:  b.ne     #0xa1bb38
00a1bb30:  mov      x9, xzr
00a1bb34:  b        #0xa1bb60
00a1bb38:  mov      x9, xzr
00a1bb3c:  mov      x10, x1
00a1bb40:  add      x11, x9, x10, lsr #1
00a1bb44:  sub      x10, x10, x10, lsr #1
00a1bb48:  add      x12, x8, x11, lsl #5
00a1bb4c:  ldr      x12, [x12, #8]
00a1bb50:  cmp      x12, x25
00a1bb54:  csel     x9, x9, x11, hi
00a1bb58:  cmp      x10, #1
00a1bb5c:  b.hi     #0xa1bb40
00a1bb60:  add      x10, x8, x9, lsl #5
00a1bb64:  ldr      x10, [x10, #8]
00a1bb68:  cmp      x10, x25
00a1bb6c:  b.ne     #0xa1bb78
00a1bb70:  mov      w10, #1
00a1bb74:  b        #0xa1bb80
00a1bb78:  mov      x10, xzr
00a1bb7c:  cinc     x9, x9, lo
00a1bb80:  add      x0, x10, x9
00a1bb84:  cmp      x0, x1
00a1bb88:  b.hi     #0xa1d210
00a1bb8c:  cmp      x0, x1
00a1bb90:  b.eq     #0xa1bca0
00a1bb94:  lsl      x9, x1, #5
00a1bb98:  add      x19, x8, x1, lsl #5
00a1bb9c:  add      x8, x8, x0, lsl #5
00a1bba0:  add      x21, x25, #1
00a1bba4:  sub      x9, x9, x0, lsl #5
00a1bba8:  ldr      x10, [x8, #0x18]
00a1bbac:  add      x23, x8, #0x20
00a1bbb0:  cmp      x21, x10
00a1bbb4:  b.ls     #0xa1bbe0
00a1bbb8:  ldr      x10, [x8, #8]
00a1bbbc:  cmp      x25, x10
00a1bbc0:  b.hs     #0xa1bbd0
00a1bbc4:  ldr      x10, [x8]
00a1bbc8:  cmp      x21, x10
00a1bbcc:  b.hi     #0xa1bbf0
00a1bbd0:  subs     x9, x9, #0x20
00a1bbd4:  mov      x8, x23
00a1bbd8:  b.ne     #0xa1bba8
00a1bbdc:  b        #0xa1bca0
00a1bbe0:  mov      x8, xzr
00a1bbe4:  add      x9, sp, #0x260
00a1bbe8:  mov      w24, #1
00a1bbec:  b        #0xa1bc20
00a1bbf0:  adrp     x9, #0xb0f000
00a1bbf4:  ldr      x0, [x8, #0x10]
00a1bbf8:  ldr      x1, [x9, #0xaa0]
00a1bbfc:  cmp      x0, x1
00a1bc00:  b.hs     #0xa1dd50
00a1bc04:  adrp     x9, #0xb0f000
00a1bc08:  mov      w10, #0x250
00a1bc0c:  mov      w24, wzr
00a1bc10:  ldr      x9, [x9, #0xa98]
00a1bc14:  madd     x9, x0, x10, x9
00a1bc18:  str      x9, [sp, #0x260]
00a1bc1c:  add      x9, sp, #0xec0
00a1bc20:  str      x8, [x9]
00a1bc24:  ldr      x20, [sp, #0x260]
00a1bc28:  cbz      x20, #0xa1bca0
00a1bc2c:  adrp     x22, #0xb0f000
00a1bc30:  add      x22, x22, #0xa80
00a1bc34:  bl       #0xa6bcbc
00a1bc38:  mov      x2, x25
00a1bc3c:  mov      x3, x22
00a1bc40:  bl       #0xa2dc54
00a1bc44:  add      x8, x22, #8
00a1bc48:  add      x0, sp, #0xc50
00a1bc4c:  add      x1, sp, #0x260
00a1bc50:  add      x2, sp, #0xec0
00a1bc54:  str      x25, [sp, #0xec0]
00a1bc58:  str      x20, [sp, #0xec8]
00a1bc5c:  str      x22, [sp, #0xed0]
00a1bc60:  str      x8, [sp, #0xed8]
00a1bc64:  str      x25, [sp, #0xee0]
00a1bc68:  str      x21, [sp, #0xee8]
00a1bc6c:  str      x23, [sp, #0xef0]
00a1bc70:  str      x19, [sp, #0xef8]
00a1bc74:  str      x25, [sp, #0x1a0]
00a1bc78:  str      x25, [sp, #0xf00]
00a1bc7c:  str      x21, [sp, #0xf08]
00a1bc80:  strb     w24, [sp, #0xf10]
00a1bc84:  bl       #0xa37548
00a1bc88:  ldrb     w8, [sp, #0xd08]
00a1bc8c:  cmp      w8, #2
00a1bc90:  b.ne     #0xa1be34
00a1bc94:  ldr      w26, [sp, #0xc50]
00a1bc98:  ldr      x25, [sp, #0x1a0]
00a1bc9c:  b        #0xa1bca4
00a1bca0:  mov      w26, #3
00a1bca4:  cmn      w26, #1
00a1bca8:  b.eq     #0xa1cee4
00a1bcac:  ldr      x11, [sp, #0xc98]
00a1bcb0:  ldr      x10, [sp, #0xc88]
00a1bcb4:  sub      w8, w26, #3
00a1bcb8:  cmp      w26, #2
00a1bcbc:  mov      w9, #2
00a1bcc0:  str      x10, [sp, #0x208]
00a1bcc4:  lsl      x10, x11, #3
00a1bcc8:  csel     w8, w8, w9, hi
00a1bccc:  str      x11, [sp, #0x220]
00a1bcd0:  str      x10, [sp, #0x210]
00a1bcd4:  cbz      w8, #0xa1bd74
00a1bcd8:  ldr      x21, [sp, #0xc58]
00a1bcdc:  cmp      w8, #1
00a1bce0:  ldr      w9, [sp, #0xc54]
00a1bce4:  ldr      x2, [sp, #0xc70]
00a1bce8:  ldr      x1, [sp, #0xc78]
00a1bcec:  mov      x23, x25
00a1bcf0:  lsr      x8, x21, #0x20
00a1bcf4:  str      x9, [sp, #0x238]
00a1bcf8:  ldr      x9, [sp, #0xc60]
00a1bcfc:  ldr      x10, [sp, #0xc80]
00a1bd00:  add      x0, x2, #0x200
00a1bd04:  str      x2, [sp, #0x228]
00a1bd08:  str      x8, [sp, #0x248]
00a1bd0c:  ldr      x8, [sp, #0xc90]
00a1bd10:  str      x9, [sp, #0x250]
00a1bd14:  ldr      x9, [sp, #0xc68]
00a1bd18:  str      x8, [sp, #0x218]
00a1bd1c:  ldr      x8, [sp, #0xca0]
00a1bd20:  str      x9, [sp, #0x258]
00a1bd24:  str      x8, [sp, #0x230]
00a1bd28:  add      x8, x2, #0x1f8
00a1bd2c:  stp      x1, x8, [sp, #0x1e8]
00a1bd30:  str      x10, [sp, #0x200]
00a1bd34:  b.ne     #0xa1bd7c
00a1bd38:  cmp      w26, #2
00a1bd3c:  b.hi     #0xa1bd4c
00a1bd40:  ldr      x8, [sp, #0x220]
00a1bd44:  cbz      x8, #0xa1bd4c
00a1bd48:  bl       #0xa6b840
00a1bd4c:  ldr      x25, [sp, #0x250]
00a1bd50:  ldr      x20, [sp, #0x258]
00a1bd54:  mov      w26, #3
00a1bd58:  ldr      x19, [sp, #0x228]
00a1bd5c:  mov      x24, x21
00a1bd60:  mov      w21, #2
00a1bd64:  bl       #0xa6baa0
00a1bd68:  mov      x28, x0
00a1bd6c:  mov      x27, x1
00a1bd70:  b        #0xa1ccfc
00a1bd74:  mov      w19, wzr
00a1bd78:  b        #0xa1cecc
00a1bd7c:  ldr      x9, [sp, #0x238]
00a1bd80:  mov      w8, w26
00a1bd84:  orr      x24, x8, x9, lsl #32
00a1bd88:  ldr      x8, [sp, #0x218]
00a1bd8c:  ldr      x9, [sp, #0x230]
00a1bd90:  cmp      x8, x9
00a1bd94:  b.eq     #0xa1ccb4
00a1bd98:  ldr      x27, [x9, #-8]!
00a1bd9c:  str      x9, [sp, #0x230]
00a1bda0:  ldp      w8, w9, [x27, #0x28]
00a1bda4:  str      x8, [sp, #0x238]
00a1bda8:  cmp      x8, #0
00a1bdac:  ldr      x8, [x27]
00a1bdb0:  cset     w26, ne
00a1bdb4:  cmp      x9, #0
00a1bdb8:  str      x9, [sp, #0x248]
00a1bdbc:  cset     w22, ne
00a1bdc0:  cmp      x8, #1
00a1bdc4:  b.ne     #0xa1be0c
00a1bdc8:  ldur     x8, [x2, #0x10]
00a1bdcc:  cmn      x8, #2
00a1bdd0:  b.eq     #0xa1be0c
00a1bdd4:  add      x8, x2, #0x1f8
00a1bdd8:  ldr      x19, [x27, #8]
00a1bddc:  ldr      w8, [x8]
00a1bde0:  tbz      w8, #0, #0xa1d868
00a1bde4:  ldr      x8, [x0]
00a1bde8:  cbz      x8, #0xa1cf38
00a1bdec:  ldr      x8, [x0, #8]
00a1bdf0:  cmp      x19, x8
00a1bdf4:  b.hs     #0xa1be0c
00a1bdf8:  mov      w8, #0x18
00a1bdfc:  ldr      x9, [x0]
00a1be00:  madd     x9, x19, x8, x9
00a1be04:  ldp      x8, x9, [x9, #8]
00a1be08:  b        #0xa1be10
00a1be0c:  mov      x8, xzr
00a1be10:  ldr      x28, [x27, #0x18]
00a1be14:  cbz      x28, #0xa1ccc4
00a1be18:  ldr      x20, [sp, #0x250]
00a1be1c:  ldr      x27, [x27, #0x20]
00a1be20:  mov      x25, x21
00a1be24:  ldr      x19, [sp, #0x258]
00a1be28:  mov      w21, w22
00a1be2c:  bl       #0xa6bc50
00a1be30:  b        #0xa1ccfc
00a1be34:  adrp     x10, #0xb0f000
00a1be38:  add      x10, x10, #0x910
00a1be3c:  bl       #0xa6bb34
00a1be40:  ldrb     w8, [x10]
00a1be44:  ldp      w11, w9, [x10, #0x4c]
00a1be48:  cmp      w8, #0xff
00a1be4c:  str      w8, [sp, #0x250]
00a1be50:  csel     x8, xzr, x10, eq
00a1be54:  ldp      x21, x19, [x10, #8]
00a1be58:  str      w9, [sp, #0x258]
00a1be5c:  sub      w22, w9, #1
00a1be60:  ldr      x9, [x10, #0x20]
00a1be64:  str      w11, [sp, #0x198]
00a1be68:  ldr      w11, [x10, #0x48]
00a1be6c:  str      x9, [sp, #0x1a8]
00a1be70:  ldr      x9, [x10, #0x18]
00a1be74:  add      x8, x8, x11
00a1be78:  str      x19, [sp, #0x238]
00a1be7c:  stp      x8, x9, [sp, #0x188]
00a1be80:  ldr      x9, [x10, #0x30]
00a1be84:  add      x8, sp, #1, lsl #12
00a1be88:  stp      x9, x11, [sp, #0x178]
00a1be8c:  ldr      x11, [x10, #0x28]
00a1be90:  add      x8, x8, #0x1f0
00a1be94:  add      x8, x8, #0x18
00a1be98:  str      x21, [sp, #0x230]
00a1be9c:  ldr      x9, [x10, #0x38]
00a1bea0:  str      x8, [sp, #0x248]
00a1bea4:  stp      x9, x11, [sp, #0x160]
00a1bea8:  ldr      x9, [x10, #0x40]
00a1beac:  str      x22, [sp, #0x228]
00a1beb0:  str      x9, [sp, #0x170]
00a1beb4:  ldp      x11, x9, [x10, #0xb0]
00a1beb8:  str      x9, [sp, #0x158]
00a1bebc:  ldr      x9, [x10, #0xc8]
00a1bec0:  stp      x11, x9, [sp, #0x148]
00a1bec4:  ldp      x8, x11, [x10, #0xd0]
00a1bec8:  ldr      x9, [x10, #0xc0]
00a1becc:  str      x11, [sp, #0x70]
00a1bed0:  stp      x8, x9, [sp, #0x138]
00a1bed4:  ldp      x9, x11, [x10, #0x120]
00a1bed8:  mov      w8, #9
00a1bedc:  str      x9, [sp, #0x120]
00a1bee0:  add      x9, sp, #0x260
00a1bee4:  orr      x8, x9, x8
00a1bee8:  str      x11, [sp, #0x60]
00a1beec:  str      x8, [sp, #0x30]
00a1bef0:  ldp      x8, x11, [x10, #0x130]
00a1bef4:  str      x11, [sp, #0x50]
00a1bef8:  str      x8, [sp, #0x110]
00a1befc:  ldp      x8, x11, [x10, #0xe0]
00a1bf00:  str      x11, [sp, #0x40]
00a1bf04:  str      x8, [sp, #0x100]
00a1bf08:  ldp      x8, x11, [x10, #0xf0]
00a1bf0c:  str      x11, [sp, #0x28]
00a1bf10:  str      x8, [sp, #0xf0]
00a1bf14:  ldp      x8, x11, [x10, #0x110]
00a1bf18:  str      x8, [sp, #0xe0]
00a1bf1c:  ldr      x8, [x10, #0x148]
00a1bf20:  stp      x8, x11, [sp, #0x10]
00a1bf24:  ldr      x8, [x10, #0x140]
00a1bf28:  str      x8, [sp, #0xd0]
00a1bf2c:  ldp      x8, x11, [x10, #0x150]
00a1bf30:  str      x11, [sp, #8]
00a1bf34:  str      x8, [sp, #0xc0]
00a1bf38:  ldp      x11, x8, [x10, #0x100]
00a1bf3c:  str      x11, [sp, #0xb0]
00a1bf40:  str      x8, [sp, #0xa0]
00a1bf44:  ldp      x11, x8, [x10, #0x160]
00a1bf48:  str      x8, [sp, #0x80]
00a1bf4c:  add      x8, x9, #0x1a4
00a1bf50:  str      x11, [sp, #0x90]
00a1bf54:  str      x8, [sp, #0x20]
00a1bf58:  ldr      q0, [sp, #0xc50]
00a1bf5c:  ldr      q1, [sp, #0xc60]
00a1bf60:  add      x0, sp, #1, lsl #12
00a1bf64:  ldr      q2, [sp, #0xc70]
00a1bf68:  add      x8, sp, #0xc50
00a1bf6c:  add      x0, x0, #0x130
00a1bf70:  add      x1, x8, #0x30
00a1bf74:  mov      w2, #0x90
00a1bf78:  str      q0, [sp, #0x12a0]
00a1bf7c:  str      q1, [sp, #0x12b0]
00a1bf80:  str      q2, [sp, #0x12c0]
00a1bf84:  bl       #0xab9420
00a1bf88:  ldr      w8, [sp, #0x250]
00a1bf8c:  cmp      w8, #0xff
00a1bf90:  b.eq     #0xa1c29c
00a1bf94:  ldr      w8, [sp, #0x258]
00a1bf98:  cbz      w8, #0xa1c29c
00a1bf9c:  ldr      x8, [sp, #0x12a8]
00a1bfa0:  ldr      w10, [sp, #0x258]
00a1bfa4:  ldr      x20, [sp, #0x12a0]
00a1bfa8:  and      x9, x22, x8, lsr #32
00a1bfac:  sub      w12, w10, #1
00a1bfb0:  mov      x10, x8
00a1bfb4:  orr      x9, x9, #1
00a1bfb8:  and      x10, x10, x22
00a1bfbc:  subs     x11, x19, x10, lsl #3
00a1bfc0:  ccmp     x11, #8, #0, hs
00a1bfc4:  b.lo     #0xa1c29c
00a1bfc8:  mov      w11, w12
00a1bfcc:  lsl      x12, x10, #3
00a1bfd0:  add      x12, x21, x12
00a1bfd4:  ldrb     w13, [x12, #6]
00a1bfd8:  ldrh     w14, [x12, #4]
00a1bfdc:  ldr      w15, [x12]
00a1bfe0:  ldrb     w12, [x12, #7]
00a1bfe4:  orr      w13, w14, w13, lsl #16
00a1bfe8:  lsl      x14, x15, #8
00a1bfec:  orr      x13, x14, x13, lsl #40
00a1bff0:  extr     x12, x12, x13, #8
00a1bff4:  cmp      x12, x8
00a1bff8:  b.eq     #0xa1c010
00a1bffc:  cbz      x12, #0xa1c29c
00a1c000:  add      x10, x10, x9
00a1c004:  sub      w12, w11, #1
00a1c008:  cbnz     w11, #0xa1bfb8
00a1c00c:  b        #0xa1c29c
00a1c010:  ldr      x8, [sp, #0x1a8]
00a1c014:  subs     x8, x8, x10, lsl #2
00a1c018:  ccmp     x8, #4, #0, hs
00a1c01c:  b.lo     #0xa1c29c
00a1c020:  lsl      x8, x10, #2
00a1c024:  ldr      x9, [sp, #0x190]
00a1c028:  ldr      w8, [x9, x8]
00a1c02c:  ldr      w9, [sp, #0x198]
00a1c030:  sub      w8, w8, #1
00a1c034:  cmp      w8, w9
00a1c038:  b.hs     #0xa1c29c
00a1c03c:  ldp      x9, x10, [sp, #0x178]
00a1c040:  umull    x8, w10, w8
00a1c044:  cmp      x9, x8, lsl #2
00a1c048:  b.lo     #0xa1c29c
00a1c04c:  lsl      x17, x8, #2
00a1c050:  ldr      x8, [sp, #0x170]
00a1c054:  subs     x21, x8, x17
00a1c058:  b.lo     #0xa1c29c
00a1c05c:  ldr      x1, [sp, #0x180]
00a1c060:  cmp      w1, #9
00a1c064:  b.hs     #0xa1d850
00a1c068:  cbz      w1, #0xa1c854
00a1c06c:  ldr      x19, [sp, #0x178]
00a1c070:  mov      x0, xzr
00a1c074:  mov      x26, xzr
00a1c078:  mov      x7, xzr
00a1c07c:  mov      x16, xzr
00a1c080:  mov      x6, xzr
00a1c084:  sub      x27, x19, x17
00a1c088:  ldp      x19, x1, [sp, #0x160]
00a1c08c:  mov      x15, xzr
00a1c090:  mov      x5, xzr
00a1c094:  mov      x12, xzr
00a1c098:  mov      x4, xzr
00a1c09c:  mov      x10, xzr
00a1c0a0:  mov      x3, xzr
00a1c0a4:  mov      x14, xzr
00a1c0a8:  mov      x2, xzr
00a1c0ac:  mov      x13, xzr
00a1c0b0:  mov      x11, xzr
00a1c0b4:  mov      x8, xzr
00a1c0b8:  mov      x9, xzr
00a1c0bc:  add      x28, x1, x17
00a1c0c0:  add      x30, x19, x17
00a1c0c4:  adrp     x17, #0xb0f000
00a1c0c8:  add      x17, x17, #0x910
00a1c0cc:  str      xzr, [sp, #0x220]
00a1c0d0:  str      xzr, [sp, #0x218]
00a1c0d4:  str      xzr, [sp, #0x210]
00a1c0d8:  subs     x27, x27, #4
00a1c0dc:  b.lo     #0xa1c19c
00a1c0e0:  subs     x21, x21, #4
00a1c0e4:  b.lo     #0xa1c19c
00a1c0e8:  ldrb     w23, [x17], #1
00a1c0ec:  adrp     x1, #0x381000
00a1c0f0:  add      x1, x1, #0x944
00a1c0f4:  ldr      w22, [x28], #4
00a1c0f8:  ldr      w19, [x30], #4
00a1c0fc:  adr      x24, #0xa1c10c
00a1c100:  ldrb     w25, [x1, x23]
00a1c104:  add      x24, x24, x25, lsl #2
00a1c108:  br       x24
00a1c10c:  mov      x16, x19
00a1c110:  mov      x7, x22
00a1c114:  b        #0xa1c174
00a1c118:  mov      x10, x19
00a1c11c:  mov      x4, x22
00a1c120:  b        #0xa1c174
00a1c124:  mov      x9, x19
00a1c128:  str      x22, [sp, #0x210]
00a1c12c:  b        #0xa1c174
00a1c130:  mov      x15, x19
00a1c134:  mov      x6, x22
00a1c138:  b        #0xa1c174
00a1c13c:  mov      x12, x19
00a1c140:  mov      x5, x22
00a1c144:  b        #0xa1c174
00a1c148:  mov      x8, x19
00a1c14c:  str      x22, [sp, #0x218]
00a1c150:  b        #0xa1c174
00a1c154:  mov      x14, x19
00a1c158:  mov      x3, x22
00a1c15c:  b        #0xa1c174
00a1c160:  mov      x13, x19
00a1c164:  mov      x2, x22
00a1c168:  b        #0xa1c174
00a1c16c:  mov      x11, x19
00a1c170:  str      x22, [sp, #0x220]
00a1c174:  mov      x19, x26
00a1c178:  mov      x22, x0
00a1c17c:  ldr      x0, [sp, #0x188]
00a1c180:  mov      x26, x19
00a1c184:  adrp     x23, #0xb0f000
00a1c188:  add      x23, x23, #0xac8
00a1c18c:  cmp      x17, x0
00a1c190:  mov      x0, x22
00a1c194:  b.ne     #0xa1c0d8
00a1c198:  b        #0xa1c1a4
00a1c19c:  mov      x19, x26
00a1c1a0:  mov      x22, x0
00a1c1a4:  ldr      x17, [sp, #0x158]
00a1c1a8:  subs     x17, x17, x22
00a1c1ac:  b.lo     #0xa1c29c
00a1c1b0:  cmp      x17, x19
00a1c1b4:  ldr      x17, [sp, #0x150]
00a1c1b8:  ccmp     x17, x7, #0, hs
00a1c1bc:  b.lo     #0xa1c29c
00a1c1c0:  ldr      x17, [sp, #0x150]
00a1c1c4:  sub      x17, x17, x7
00a1c1c8:  cmp      x17, x16
00a1c1cc:  ldr      x17, [sp, #0x70]
00a1c1d0:  ccmp     x17, x6, #0, hs
00a1c1d4:  b.lo     #0xa1c29c
00a1c1d8:  ldr      x17, [sp, #0x70]
00a1c1dc:  sub      x17, x17, x6
00a1c1e0:  cmp      x17, x15
00a1c1e4:  ldr      x17, [sp, #0x60]
00a1c1e8:  ccmp     x17, x5, #0, hs
00a1c1ec:  b.lo     #0xa1c29c
00a1c1f0:  ldr      x17, [sp, #0x60]
00a1c1f4:  sub      x17, x17, x5
00a1c1f8:  cmp      x17, x12
00a1c1fc:  ldr      x17, [sp, #0x50]
00a1c200:  ccmp     x17, x4, #0, hs
00a1c204:  b.lo     #0xa1c29c
00a1c208:  ldr      x17, [sp, #0x50]
00a1c20c:  sub      x17, x17, x4
00a1c210:  cmp      x17, x10
00a1c214:  ldr      x17, [sp, #0x40]
00a1c218:  ccmp     x17, x3, #0, hs
00a1c21c:  b.lo     #0xa1c29c
00a1c220:  ldr      x17, [sp, #0x40]
00a1c224:  sub      x17, x17, x3
00a1c228:  cmp      x17, x14
00a1c22c:  ldr      x17, [sp, #0x28]
00a1c230:  ccmp     x17, x2, #0, hs
00a1c234:  b.lo     #0xa1c29c
00a1c238:  ldr      x17, [sp, #0x28]
00a1c23c:  ldr      x0, [sp, #0x220]
00a1c240:  sub      x17, x17, x2
00a1c244:  cmp      x17, x13
00a1c248:  ldr      x17, [sp, #0x18]
00a1c24c:  ccmp     x17, x0, #0, hs
00a1c250:  b.lo     #0xa1c29c
00a1c254:  ldr      x17, [sp, #0x18]
00a1c258:  ldr      x0, [sp, #0x220]
00a1c25c:  sub      x17, x17, x0
00a1c260:  ldr      x0, [sp, #0x218]
00a1c264:  cmp      x17, x11
00a1c268:  ldr      x17, [sp, #0x10]
00a1c26c:  ccmp     x17, x0, #0, hs
00a1c270:  b.lo     #0xa1c29c
00a1c274:  ldr      x17, [sp, #0x10]
00a1c278:  ldr      x0, [sp, #0x218]
00a1c27c:  ldr      x1, [sp, #0x210]
00a1c280:  sub      x17, x17, x0
00a1c284:  ldr      x0, [sp, #8]
00a1c288:  cmp      x17, x8
00a1c28c:  sub      x17, x0, x1
00a1c290:  ccmp     x0, x1, #0, hs
00a1c294:  ccmp     x17, x9, #0, hs
00a1c298:  b.hs     #0xa1cc54
00a1c29c:  ldr      x22, [sp, #0x12b0]
00a1c2a0:  mov      w8, #1
00a1c2a4:  stur     xzr, [x29, #-0x68]
00a1c2a8:  stp      xzr, x8, [x29, #-0x78]
00a1c2ac:  cbz      x22, #0xa1c2e8
00a1c2b0:  ldr      x20, [sp, #0x12b8]
00a1c2b4:  cbz      x20, #0xa1c30c
00a1c2b8:  ldrb     w8, [x22]
00a1c2bc:  cmp      w8, #0x2f
00a1c2c0:  sub      x0, x29, #0x78
00a1c2c4:  mov      x1, xzr
00a1c2c8:  mov      x2, x20
00a1c2cc:  bl       #0xa6b834
00a1c2d0:  ldp      x26, x19, [x29, #-0x70]
00a1c2d4:  mov      x1, x22
00a1c2d8:  mov      x2, x20
00a1c2dc:  add      x0, x26, x19
00a1c2e0:  bl       #0xab9420
00a1c2e4:  b        #0xa1c314
00a1c2e8:  ldr      x27, [sp, #0x12c0]
00a1c2ec:  cbz      x27, #0xa1c704
00a1c2f0:  ldr      x28, [sp, #0x12c8]
00a1c2f4:  mov      x22, xzr
00a1c2f8:  mov      w9, wzr
00a1c2fc:  mov      w26, #1
00a1c300:  cbnz     x28, #0xa1c340
00a1c304:  ldur     x8, [x29, #-0x78]
00a1c308:  b        #0xa1c364
00a1c30c:  mov      x19, xzr
00a1c310:  mov      w26, #1
00a1c314:  ldr      x27, [sp, #0x12c0]
00a1c318:  add      x22, x19, x20
00a1c31c:  stur     x22, [x29, #-0x68]
00a1c320:  cbz      x27, #0xa1c708
00a1c324:  ldr      x28, [sp, #0x12c8]
00a1c328:  cbz      x22, #0xa1c6f8
00a1c32c:  add      x8, x26, x22
00a1c330:  ldurb    w8, [x8, #-1]
00a1c334:  cmp      w8, #0x2f
00a1c338:  cset     w9, ne
00a1c33c:  cbz      x28, #0xa1c304
00a1c340:  ldrb     w10, [x27]
00a1c344:  ldur     x8, [x29, #-0x78]
00a1c348:  cmp      w10, #0x2f
00a1c34c:  b.ne     #0xa1c364
00a1c350:  mov      x22, xzr
00a1c354:  cmp      x28, x8
00a1c358:  stur     xzr, [x29, #-0x68]
00a1c35c:  b.ls     #0xa1c390
00a1c360:  b        #0xa1c9fc
00a1c364:  cbz      w9, #0xa1c380
00a1c368:  cmp      x8, x22
00a1c36c:  b.eq     #0xa1cacc
00a1c370:  mov      w9, #0x2f
00a1c374:  strb     w9, [x26, x22]
00a1c378:  add      x22, x22, #1
00a1c37c:  stur     x22, [x29, #-0x68]
00a1c380:  sub      x8, x8, x22
00a1c384:  cmp      x28, x8
00a1c388:  b.hi     #0xa1c9fc
00a1c38c:  cbz      x28, #0xa1c3a0
00a1c390:  add      x0, x26, x22
00a1c394:  mov      x1, x27
00a1c398:  mov      x2, x28
00a1c39c:  bl       #0xab9420
00a1c3a0:  ldur     x26, [x29, #-0x70]
00a1c3a4:  add      x2, x22, x28
00a1c3a8:  stur     x2, [x29, #-0x68]
00a1c3ac:  add      x0, sp, #1, lsl #12
00a1c3b0:  mov      x1, x26
00a1c3b4:  add      x0, x0, #0x220
00a1c3b8:  bl       #0xa50dc4
00a1c3bc:  ldr      x8, [sp, #0x1220]
00a1c3c0:  cmp      x8, #1
00a1c3c4:  b.ne     #0xa1c6c8
00a1c3c8:  adrp     x0, #0xb0f000
00a1c3cc:  add      x0, x0, #0xae0
00a1c3d0:  ldr      x22, [sp, #0x1228]
00a1c3d4:  ldr      x19, [x0, #0x10]
00a1c3d8:  ldr      x8, [x0]
00a1c3dc:  ldr      x20, [sp, #0x1230]
00a1c3e0:  cmp      x19, x8
00a1c3e4:  b.ne     #0xa1c400
00a1c3e8:  bl       #0xac4b70
00a1c3ec:  bl       #0xa6bc88
00a1c3f0:  add      x8, x19, #1
00a1c3f4:  stp      x22, x20, [x9]
00a1c3f8:  str      x8, [x10, #8]
00a1c3fc:  b        #0xa1c414
00a1c400:  bl       #0xa6bc88
00a1c404:  adds     x8, x19, #1
00a1c408:  stp      x22, x20, [x9]
00a1c40c:  str      x8, [x10, #8]
00a1c410:  b.hs     #0xa1d220
00a1c414:  adrp     x9, #0xb0f000
00a1c418:  ldr      x9, [x9, #0xae8]
00a1c41c:  add      x8, x9, x8, lsl #4
00a1c420:  ldp      x1, x2, [x8, #-0x10]
00a1c424:  add      x0, sp, #0xec0
00a1c428:  bl       #0xa40300
00a1c42c:  ldr      x8, [sp, #0xec0]
00a1c430:  cmn      x8, #1
00a1c434:  b.eq     #0xa1c6c8
00a1c438:  str      x8, [sp, #0x1b8]
00a1c43c:  ldr      x8, [sp, #0xec8]
00a1c440:  str      x8, [sp, #0x1b0]
00a1c444:  bl       #0xa6b9bc
00a1c448:  adrp     x2, #0x382000
00a1c44c:  add      x2, x2, #0x2a4
00a1c450:  mov      w3, #0x11
00a1c454:  bl       #0xa4093c
00a1c458:  cmp      x0, #0
00a1c45c:  csel     x8, xzr, x1, eq
00a1c460:  str      x8, [sp, #0x220]
00a1c464:  csinc    x8, x0, xzr, ne
00a1c468:  str      x8, [sp, #0x218]
00a1c46c:  bl       #0xa6b9bc
00a1c470:  adrp     x2, #0x382000
00a1c474:  add      x2, x2, #0x2c4
00a1c478:  mov      w3, #0xf
00a1c47c:  bl       #0xa4093c
00a1c480:  cmp      x0, #0
00a1c484:  csel     x8, xzr, x1, eq
00a1c488:  str      x8, [sp, #0x210]
00a1c48c:  csinc    x8, x0, xzr, ne
00a1c490:  str      x8, [sp, #0x208]
00a1c494:  bl       #0xa6b9bc
00a1c498:  adrp     x2, #0x382000
00a1c49c:  add      x2, x2, #0x2d3
00a1c4a0:  mov      w3, #0xf
00a1c4a4:  bl       #0xa4093c
00a1c4a8:  cmp      x0, #0
00a1c4ac:  csel     x8, xzr, x1, eq
00a1c4b0:  str      x8, [sp, #0x200]
00a1c4b4:  csinc    x8, x0, xzr, ne
00a1c4b8:  str      x8, [sp, #0x1f0]
00a1c4bc:  bl       #0xa6b9bc
00a1c4c0:  adrp     x2, #0x382000
00a1c4c4:  add      x2, x2, #0x303
00a1c4c8:  bl       #0xa6ba98
00a1c4cc:  cmp      x0, #0
00a1c4d0:  csel     x9, xzr, x1, eq
00a1c4d4:  csinc    x8, x0, xzr, ne
00a1c4d8:  stp      x8, x9, [sp, #0x1e0]
00a1c4dc:  bl       #0xa6b9bc
00a1c4e0:  adrp     x2, #0x2a0000
00a1c4e4:  add      x2, x2, #0x560
00a1c4e8:  bl       #0xa6ba90
00a1c4ec:  cmp      x0, #0
00a1c4f0:  csel     x9, xzr, x1, eq
00a1c4f4:  csinc    x8, x0, xzr, ne
00a1c4f8:  stp      x8, x9, [sp, #0x1d0]
00a1c4fc:  bl       #0xa6b9bc
00a1c500:  adrp     x2, #0x382000
00a1c504:  add      x2, x2, #0x328
00a1c508:  bl       #0xa6b9b4
00a1c50c:  cmp      x0, #0
00a1c510:  csel     x9, xzr, x1, eq
00a1c514:  csinc    x8, x0, xzr, ne
00a1c518:  stp      x8, x9, [sp, #0x1c0]
00a1c51c:  bl       #0xa6b9bc
00a1c520:  adrp     x2, #0x382000
00a1c524:  add      x2, x2, #0x336
00a1c528:  mov      w3, #0x16
00a1c52c:  bl       #0xa4093c
00a1c530:  cmp      x0, #0
00a1c534:  csel     x25, xzr, x1, eq
00a1c538:  csinc    x21, x0, xzr, ne
00a1c53c:  bl       #0xa6b9bc
00a1c540:  adrp     x2, #0x29f000
00a1c544:  add      x2, x2, #0xbf0
00a1c548:  bl       #0xa6ba90
00a1c54c:  cmp      x0, #0
00a1c550:  csel     x19, xzr, x1, eq
00a1c554:  csinc    x27, x0, xzr, ne
00a1c558:  bl       #0xa6b9bc
00a1c55c:  adrp     x2, #0x382000
00a1c560:  add      x2, x2, #0x2e2
00a1c564:  bl       #0xa6b9b4
00a1c568:  cmp      x0, #0
00a1c56c:  csel     x24, xzr, x1, eq
00a1c570:  csinc    x28, x0, xzr, ne
00a1c574:  bl       #0xa6b9bc
00a1c578:  adrp     x2, #0x382000
00a1c57c:  add      x2, x2, #0x2f0
00a1c580:  bl       #0xa6ba78
00a1c584:  mov      x20, x0
00a1c588:  mov      x22, x1
00a1c58c:  bl       #0xa6b9bc
00a1c590:  adrp     x2, #0x382000
00a1c594:  add      x2, x2, #0x315
00a1c598:  bl       #0xa6ba78
00a1c59c:  ldr      x11, [sp, #0x12a0]
00a1c5a0:  cmp      x20, #0
00a1c5a4:  csinc    x8, x20, xzr, ne
00a1c5a8:  csel     x9, xzr, x22, eq
00a1c5ac:  cmp      x0, #0
00a1c5b0:  ldp      x15, x16, [x11, #0x20]
00a1c5b4:  ldr      x10, [x11, #0x110]
00a1c5b8:  ldp      x12, x13, [x11, #0xf0]
00a1c5bc:  csel     x11, xzr, x1, eq
00a1c5c0:  csinc    x14, x0, xzr, ne
00a1c5c4:  cbz      x10, #0xa1c5dc
00a1c5c8:  ldxr     x17, [x10]
00a1c5cc:  add      x0, x17, #1
00a1c5d0:  stxr     w1, x0, [x10]
00a1c5d4:  cbnz     w1, #0xa1c5c8
00a1c5d8:  tbnz     x17, #0x3f, #0xa1de6c
00a1c5dc:  str      x16, [sp, #0x288]
00a1c5e0:  ldr      x16, [sp, #0x208]
00a1c5e4:  ldr      x17, [sp, #0x218]
00a1c5e8:  str      x15, [sp, #0x280]
00a1c5ec:  mov      w15, #1
00a1c5f0:  str      x16, [sp, #0x2a0]
00a1c5f4:  ldr      x16, [sp, #0x210]
00a1c5f8:  dup      v0.2d, x15
00a1c5fc:  str      x17, [sp, #0x270]
00a1c600:  ldr      x17, [sp, #0x220]
00a1c604:  str      x16, [sp, #0x2a8]
00a1c608:  ldr      x16, [sp, #0x1f0]
00a1c60c:  str      x17, [sp, #0x278]
00a1c610:  str      x16, [sp, #0x2b0]
00a1c614:  ldr      x16, [sp, #0x200]
00a1c618:  str      x15, [sp, #0x290]
00a1c61c:  str      x16, [sp, #0x2b8]
00a1c620:  ldp      x17, x16, [sp, #0x1e0]
00a1c624:  str      xzr, [sp, #0x298]
00a1c628:  str      x15, [sp, #0x2c0]
00a1c62c:  str      x17, [sp, #0x2d0]
00a1c630:  str      x16, [sp, #0x2d8]
00a1c634:  ldp      x17, x16, [sp, #0x1d0]
00a1c638:  str      xzr, [sp, #0x2c8]
00a1c63c:  str      x15, [sp, #0x2f0]
00a1c640:  str      x17, [sp, #0x2e0]
00a1c644:  str      x16, [sp, #0x2e8]
00a1c648:  ldp      x17, x16, [sp, #0x1c0]
00a1c64c:  str      xzr, [sp, #0x2f8]
00a1c650:  str      x21, [sp, #0x310]
00a1c654:  str      x17, [sp, #0x300]
00a1c658:  str      x16, [sp, #0x308]
00a1c65c:  str      x25, [sp, #0x318]
00a1c660:  str      x27, [sp, #0x320]
00a1c664:  str      x19, [sp, #0x328]
00a1c668:  str      x28, [sp, #0x330]
00a1c66c:  str      x24, [sp, #0x338]
00a1c670:  str      x8, [sp, #0x340]
00a1c674:  str      x9, [sp, #0x348]
00a1c678:  str      x12, [sp, #0x350]
00a1c67c:  str      x13, [sp, #0x358]
00a1c680:  str      x14, [sp, #0x360]
00a1c684:  str      x11, [sp, #0x368]
00a1c688:  str      x10, [sp, #0x370]
00a1c68c:  str      xzr, [sp, #0x378]
00a1c690:  str      xzr, [sp, #0x388]
00a1c694:  strb     w15, [sp, #0x390]
00a1c698:  str      q0, [sp, #0x260]
00a1c69c:  bl       #0xab9390
00a1c6a0:  bl       #0xa6b9ec
00a1c6a4:  cbz      x0, #0xa1d228
00a1c6a8:  bl       #0xa6ba80
00a1c6ac:  ldr      x8, [sp, #0x1b8]
00a1c6b0:  bl       #0xa6bb34
00a1c6b4:  cbz      x8, #0xa1c708
00a1c6b8:  add      x8, x8, x8, lsl #1
00a1c6bc:  ldr      x0, [sp, #0x1b0]
00a1c6c0:  bl       #0xa6b884
00a1c6c4:  b        #0xa1c708
00a1c6c8:  ldur     x1, [x29, #-0x78]
00a1c6cc:  cbz      x1, #0xa1c6d8
00a1c6d0:  mov      x0, x26
00a1c6d4:  bl       #0xa6b890
00a1c6d8:  ldr      x9, [sp, #0x12a0]
00a1c6dc:  ldxr     x8, [x9]
00a1c6e0:  sub      x10, x8, #1
00a1c6e4:  stlxr    w11, x10, [x9]
00a1c6e8:  cbnz     w11, #0xa1c6dc
00a1c6ec:  cmp      x8, #1
00a1c6f0:  mov      x27, xzr
00a1c6f4:  b        #0xa1c72c
00a1c6f8:  mov      w9, wzr
00a1c6fc:  cbnz     x28, #0xa1c340
00a1c700:  b        #0xa1c304
00a1c704:  mov      w26, #1
00a1c708:  ldur     x1, [x29, #-0x78]
00a1c70c:  cbz      x1, #0xa1c718
00a1c710:  mov      x0, x26
00a1c714:  bl       #0xa6b890
00a1c718:  ldr      x20, [sp, #0x12a0]
00a1c71c:  ldxr     x8, [x20]
00a1c720:  subs     x8, x8, #1
00a1c724:  stlxr    w9, x8, [x20]
00a1c728:  cbnz     w9, #0xa1c71c
00a1c72c:  b.ne     #0xa1c738
00a1c730:  dmb      ishld
00a1c734:  bl       #0xa6bc0c
00a1c738:  ldr      q0, [sp, #0x1140]
00a1c73c:  ldr      q1, [sp, #0x1130]
00a1c740:  ldr      x9, [sp, #0x248]
00a1c744:  str      x27, [sp, #0xc28]
00a1c748:  str      q0, [sp, #0x1200]
00a1c74c:  ldr      x19, [sp, #0x1200]
00a1c750:  str      q1, [sp, #0x11f0]
00a1c754:  str      x9, [sp, #0xc20]
00a1c758:  ldrb     w8, [x19, #0x1e0]
00a1c75c:  cmp      w8, #0xfe
00a1c760:  b.eq     #0xa1c988
00a1c764:  cbz      x27, #0xa1c78c
00a1c768:  bl       #0xa6bd10
00a1c76c:  stlxr    w9, x8, [x27]
00a1c770:  cbnz     w9, #0xa1c768
00a1c774:  b.ne     #0xa1c788
00a1c778:  dmb      ishld
00a1c77c:  add      x8, sp, #0xc20
00a1c780:  add      x0, x8, #8
00a1c784:  bl       #0xac4b80
00a1c788:  ldrb     w8, [x19, #0x1e0]
00a1c78c:  cmp      w8, #0xff
00a1c790:  b.ne     #0xa1c7ac
00a1c794:  ldr      x8, [x19, #0x1e8]
00a1c798:  cbz      x8, #0xa1c7b8
00a1c79c:  ldr      x9, [x8, #0x1e0]
00a1c7a0:  add      x10, x9, #0x10
00a1c7a4:  mov      w9, #2
00a1c7a8:  b        #0xa1c7cc
00a1c7ac:  ldp      x10, x8, [x19, #0x1e0]
00a1c7b0:  mov      w9, #0xff
00a1c7b4:  b        #0xa1c7cc
00a1c7b8:  ldr      x8, [sp, #0x11f8]
00a1c7bc:  mov      w9, wzr
00a1c7c0:  ldr      x10, [x8]
00a1c7c4:  ldr      x8, [sp, #0x11f0]
00a1c7c8:  add      x10, x10, #0x10
00a1c7cc:  strb     w9, [sp, #0x260]
00a1c7d0:  str      x10, [sp, #0x268]
00a1c7d4:  str      x8, [sp, #0x270]
00a1c7d8:  add      x8, sp, #1, lsl #12
00a1c7dc:  add      x2, sp, #0x260
00a1c7e0:  add      x8, x8, #0x220
00a1c7e4:  add      x0, x8, #8
00a1c7e8:  add      x8, sp, #1, lsl #12
00a1c7ec:  add      x8, x8, #0x130
00a1c7f0:  add      x1, x8, #0x20
00a1c7f4:  bl       #0xa2b0a8
00a1c7f8:  add      x8, sp, #1, lsl #12
00a1c7fc:  add      x0, sp, #0xec0
00a1c800:  mov      w2, #0x58
00a1c804:  add      x8, x8, #0x130
00a1c808:  str      xzr, [sp, #0x1220]
00a1c80c:  add      x1, x8, #0x38
00a1c810:  bl       #0xab9420
00a1c814:  add      x1, sp, #1, lsl #12
00a1c818:  add      x0, sp, #0x260
00a1c81c:  add      x2, sp, #0xec0
00a1c820:  add      x1, x1, #0x220
00a1c824:  bl       #0xa37548
00a1c828:  add      x0, sp, #0xc50
00a1c82c:  add      x1, sp, #0x260
00a1c830:  mov      w2, #0xc0
00a1c834:  bl       #0xab9420
00a1c838:  ldrb     w8, [sp, #0xd08]
00a1c83c:  ldr      x19, [sp, #0x238]
00a1c840:  ldr      x21, [sp, #0x230]
00a1c844:  ldr      x22, [sp, #0x228]
00a1c848:  cmp      w8, #2
00a1c84c:  b.ne     #0xa1bf58
00a1c850:  b        #0xa1bc94
00a1c854:  ldp      x6, x7, [sp, #0x138]
00a1c858:  mov      x9, xzr
00a1c85c:  ldr      x1, [sp, #0xc0]
00a1c860:  ldr      x17, [sp, #0xd0]
00a1c864:  mov      x8, xzr
00a1c868:  ldr      x2, [sp, #0xe0]
00a1c86c:  ldr      x3, [sp, #0xf0]
00a1c870:  mov      x11, xzr
00a1c874:  ldr      x4, [sp, #0x100]
00a1c878:  ldr      x0, [sp, #0x110]
00a1c87c:  mov      x13, xzr
00a1c880:  ldr      x5, [sp, #0x120]
00a1c884:  ldr      x21, [sp, #0x148]
00a1c888:  mov      x14, xzr
00a1c88c:  mov      x10, xzr
00a1c890:  mov      x12, xzr
00a1c894:  mov      x15, xzr
00a1c898:  mov      x16, xzr
00a1c89c:  mov      x19, xzr
00a1c8a0:  ldp      x25, x26, [x20, #0x20]
00a1c8a4:  ldr      x22, [x20, #0x110]
00a1c8a8:  ldp      x23, x24, [x20, #0xf0]
00a1c8ac:  cbz      x22, #0xa1c8c4
00a1c8b0:  ldxr     x27, [x22]
00a1c8b4:  add      x28, x27, #1
00a1c8b8:  stxr     w30, x28, [x22]
00a1c8bc:  cbnz     w30, #0xa1c8b0
00a1c8c0:  tbnz     x27, #0x3f, #0xa1de6c
00a1c8c4:  mov      w27, #1
00a1c8c8:  str      x13, [sp, #0x2e8]
00a1c8cc:  ldr      x13, [sp, #0xb0]
00a1c8d0:  dup      v0.2d, x27
00a1c8d4:  str      x21, [sp, #0x270]
00a1c8d8:  ldr      x21, [sp, #0x80]
00a1c8dc:  str      x19, [sp, #0x278]
00a1c8e0:  ldr      x19, [sp, #0x90]
00a1c8e4:  str      x13, [sp, #0x300]
00a1c8e8:  ldr      x13, [sp, #0xa0]
00a1c8ec:  str      q0, [sp, #0x260]
00a1c8f0:  str      x25, [sp, #0x280]
00a1c8f4:  str      x26, [sp, #0x288]
00a1c8f8:  str      x19, [sp, #0x290]
00a1c8fc:  str      x21, [sp, #0x298]
00a1c900:  str      x7, [sp, #0x2a0]
00a1c904:  str      x16, [sp, #0x2a8]
00a1c908:  str      x6, [sp, #0x2b0]
00a1c90c:  str      x15, [sp, #0x2b8]
00a1c910:  str      x19, [sp, #0x2c0]
00a1c914:  str      x21, [sp, #0x2c8]
00a1c918:  str      x4, [sp, #0x2d0]
00a1c91c:  str      x14, [sp, #0x2d8]
00a1c920:  str      x3, [sp, #0x2e0]
00a1c924:  str      x19, [sp, #0x2f0]
00a1c928:  str      x21, [sp, #0x2f8]
00a1c92c:  str      x13, [sp, #0x308]
00a1c930:  str      x2, [sp, #0x310]
00a1c934:  str      x11, [sp, #0x318]
00a1c938:  str      x1, [sp, #0x320]
00a1c93c:  str      x9, [sp, #0x328]
00a1c940:  str      x5, [sp, #0x330]
00a1c944:  str      x12, [sp, #0x338]
00a1c948:  str      x0, [sp, #0x340]
00a1c94c:  str      x10, [sp, #0x348]
00a1c950:  str      x23, [sp, #0x350]
00a1c954:  str      x24, [sp, #0x358]
00a1c958:  str      x17, [sp, #0x360]
00a1c95c:  str      x8, [sp, #0x368]
00a1c960:  str      x22, [sp, #0x370]
00a1c964:  str      xzr, [sp, #0x378]
00a1c968:  str      xzr, [sp, #0x388]
00a1c96c:  strb     w27, [sp, #0x390]
00a1c970:  bl       #0xab9390
00a1c974:  bl       #0xa6b9ec
00a1c978:  cbz      x0, #0xa1d870
00a1c97c:  bl       #0xa6ba80
00a1c980:  bl       #0xa6bb34
00a1c984:  b        #0xa1c71c
00a1c988:  cbz      x27, #0xa1ca14
00a1c98c:  stur     x27, [x29, #-0xf0]
00a1c990:  add      x1, sp, #1, lsl #12
00a1c994:  ldr      x20, [sp, #0x1208]
00a1c998:  ldp      x8, x9, [x27, #0x40]
00a1c99c:  add      x0, sp, #0x260
00a1c9a0:  add      x1, x1, #0x1c0
00a1c9a4:  str      xzr, [sp, #0x11d0]
00a1c9a8:  str      x8, [sp, #0x11c0]
00a1c9ac:  str      x9, [sp, #0x11c8]
00a1c9b0:  bl       #0xa3a85c
00a1c9b4:  add      x10, sp, #0x260
00a1c9b8:  ldr      x8, [sp, #0x260]
00a1c9bc:  ldrb     w28, [sp, #0x268]
00a1c9c0:  ldur     w9, [x10, #9]
00a1c9c4:  ldur     w10, [x10, #0xc]
00a1c9c8:  ldr      x26, [sp, #0x270]
00a1c9cc:  cmn      x8, #2
00a1c9d0:  stur     w9, [x29, #-0xe8]
00a1c9d4:  sub      x9, x29, #0xe8
00a1c9d8:  stur     w10, [x9, #3]
00a1c9dc:  sub      x10, x29, #0xe8
00a1c9e0:  b.ne     #0xa1ca20
00a1c9e4:  ldur     w8, [x29, #-0xe8]
00a1c9e8:  ldur     w9, [x10, #3]
00a1c9ec:  str      w8, [sp, #0x260]
00a1c9f0:  add      x8, sp, #0x164
00a1c9f4:  stur     w9, [x8, #0xff]
00a1c9f8:  b        #0xa1caf0
00a1c9fc:  sub      x0, x29, #0x78
00a1ca00:  mov      x1, x22
00a1ca04:  mov      x2, x28
00a1ca08:  bl       #0xa6b834
00a1ca0c:  ldp      x26, x22, [x29, #-0x70]
00a1ca10:  b        #0xa1c390
00a1ca14:  mov      x26, xzr
00a1ca18:  mov      w28, #0xff
00a1ca1c:  b        #0xa1cc18
00a1ca20:  add      x9, sp, #0x260
00a1ca24:  cmn      x8, #1
00a1ca28:  ldur     q0, [x9, #0x18]
00a1ca2c:  ldur     q1, [x9, #0x28]
00a1ca30:  ldur     q2, [x9, #0x38]
00a1ca34:  stp      q0, q1, [x29, #-0xd0]
00a1ca38:  stur     q2, [x29, #-0xb0]
00a1ca3c:  b.eq     #0xa1cae8
00a1ca40:  ldp      q0, q1, [x29, #-0xd0]
00a1ca44:  sub      x24, x29, #0xe8
00a1ca48:  sub      x11, x29, #0x78
00a1ca4c:  ldur     w9, [x29, #-0xe8]
00a1ca50:  strb     w28, [x10, #0x78]
00a1ca54:  ldur     w10, [x24, #3]
00a1ca58:  stur     x8, [x29, #-0x78]
00a1ca5c:  stur     q0, [x11, #0x18]
00a1ca60:  ldur     q0, [x29, #-0xb0]
00a1ca64:  stur     w9, [x11, #9]
00a1ca68:  stur     w10, [x11, #0xc]
00a1ca6c:  stur     x26, [x29, #-0x68]
00a1ca70:  stur     q1, [x11, #0x28]
00a1ca74:  stur     q0, [x11, #0x38]
00a1ca78:  add      x0, sp, #0x260
00a1ca7c:  add      x1, x27, #0x10
00a1ca80:  sub      x2, x29, #0x78
00a1ca84:  bl       #0xa38620
00a1ca88:  ldr      x9, [sp, #0x30]
00a1ca8c:  ldr      x21, [sp, #0x260]
00a1ca90:  ldrb     w28, [sp, #0x268]
00a1ca94:  ldr      x26, [sp, #0x270]
00a1ca98:  ldr      w8, [x9]
00a1ca9c:  ldur     w9, [x9, #3]
00a1caa0:  cmp      x21, #2
00a1caa4:  stur     w8, [x29, #-0xe0]
00a1caa8:  stur     w9, [x24, #0xb]
00a1caac:  b.ne     #0xa1cb10
00a1cab0:  ldur     w8, [x29, #-0xe0]
00a1cab4:  ldur     w9, [x24, #0xb]
00a1cab8:  bl       #0xa6bb34
00a1cabc:  str      w8, [sp, #0x260]
00a1cac0:  add      x8, sp, #0x164
00a1cac4:  stur     w9, [x8, #0xff]
00a1cac8:  b        #0xa1caf0
00a1cacc:  sub      x0, x29, #0x78
00a1cad0:  mov      x1, x22
00a1cad4:  mov      w2, #1
00a1cad8:  bl       #0xa6b834
00a1cadc:  ldp      x26, x22, [x29, #-0x70]
00a1cae0:  ldur     x8, [x29, #-0x78]
00a1cae4:  b        #0xa1c370
00a1cae8:  mov      x26, xzr
00a1caec:  mov      w28, #0xff
00a1caf0:  bl       #0xa6bd10
00a1caf4:  stlxr    w9, x8, [x27]
00a1caf8:  cbnz     w9, #0xa1caf0
00a1cafc:  b.ne     #0xa1cc18
00a1cb00:  dmb      ishld
00a1cb04:  sub      x0, x29, #0xf0
00a1cb08:  bl       #0xac4b80
00a1cb0c:  b        #0xa1cc18
00a1cb10:  add      x8, sp, #0x260
00a1cb14:  add      x0, sp, #0xec0
00a1cb18:  mov      w2, #0x18a
00a1cb1c:  add      x1, x8, #0x18
00a1cb20:  bl       #0xab9420
00a1cb24:  ldr      x9, [sp, #0x20]
00a1cb28:  ldrh     w22, [sp, #0x402]
00a1cb2c:  sub      x10, x29, #0xe8
00a1cb30:  ldr      x23, [sp, #0x430]
00a1cb34:  ldr      x25, [sp, #0x438]
00a1cb38:  ldr      x8, [x9]
00a1cb3c:  ldr      w9, [x9, #8]
00a1cb40:  cmp      w22, #4
00a1cb44:  stur     w9, [x29, #-0x98]
00a1cb48:  ldr      x9, [sp, #0x418]
00a1cb4c:  stur     x8, [x29, #-0xa0]
00a1cb50:  ldur     w8, [x29, #-0xe0]
00a1cb54:  str      x9, [sp, #0x218]
00a1cb58:  ldr      x9, [sp, #0x428]
00a1cb5c:  stur     w8, [x29, #-0xd8]
00a1cb60:  str      x9, [sp, #0x220]
00a1cb64:  ldur     w9, [x24, #0xb]
00a1cb68:  stur     w9, [x24, #0x13]
00a1cb6c:  b.hi     #0xa1cb74
00a1cb70:  ldr      x23, [x20, #0x1d0]
00a1cb74:  ldur     w8, [x29, #-0xd8]
00a1cb78:  ldur     w9, [x10, #0x13]
00a1cb7c:  add      x1, sp, #0xec0
00a1cb80:  ldr      x10, [sp, #0x30]
00a1cb84:  str      x21, [sp, #0x260]
00a1cb88:  mov      w2, #0x18a
00a1cb8c:  ldr      x21, [x20, #0x1b0]
00a1cb90:  ldr      x20, [x20, #0x1c0]
00a1cb94:  strb     w28, [sp, #0x268]
00a1cb98:  str      w8, [x10]
00a1cb9c:  add      x8, sp, #0x260
00a1cba0:  add      x0, x8, #0x18
00a1cba4:  stur     w9, [x10, #3]
00a1cba8:  str      x27, [sp, #0x440]
00a1cbac:  str      x26, [sp, #0x270]
00a1cbb0:  bl       #0xab9420
00a1cbb4:  ldur     x8, [x29, #-0xa0]
00a1cbb8:  ldr      x10, [sp, #0x20]
00a1cbbc:  ldur     w9, [x29, #-0x98]
00a1cbc0:  strh     w22, [sp, #0x402]
00a1cbc4:  str      x8, [x10]
00a1cbc8:  ldr      x8, [sp, #0x218]
00a1cbcc:  str      w9, [x10, #8]
00a1cbd0:  str      x8, [sp, #0x418]
00a1cbd4:  ldr      x8, [sp, #0x220]
00a1cbd8:  str      x21, [sp, #0x410]
00a1cbdc:  str      x20, [sp, #0x420]
00a1cbe0:  str      x8, [sp, #0x428]
00a1cbe4:  str      x23, [sp, #0x430]
00a1cbe8:  str      x25, [sp, #0x438]
00a1cbec:  bl       #0xab9390
00a1cbf0:  mov      w0, #0x1f0
00a1cbf4:  mov      w1, #0x10
00a1cbf8:  bl       #0x4b25a4
00a1cbfc:  cbz      x0, #0xa1dd10
00a1cc00:  add      x1, sp, #0x260
00a1cc04:  mov      w2, #0x1f0
00a1cc08:  mov      x26, x0
00a1cc0c:  bl       #0xab9420
00a1cc10:  mov      w28, #0xff
00a1cc14:  bl       #0xa6bb34
00a1cc18:  ldrb     w8, [x19, #0x1e0]
00a1cc1c:  cmp      w8, #0xfe
00a1cc20:  b.ne     #0xa1cc48
00a1cc24:  add      x8, sp, #0x164
00a1cc28:  ldr      w9, [sp, #0x260]
00a1cc2c:  add      x10, x19, #0x1e1
00a1cc30:  ldur     w8, [x8, #0xff]
00a1cc34:  strb     w28, [x19, #0x1e0]
00a1cc38:  str      x26, [x19, #0x1e8]
00a1cc3c:  str      w8, [x19, #0x1e4]
00a1cc40:  str      w9, [x10]
00a1cc44:  b        #0xa1c788
00a1cc48:  cmp      w28, #0xfe
00a1cc4c:  b.eq     #0xa1c788
00a1cc50:  b        #0xa1d9bc
00a1cc54:  ldr      x17, [sp, #0x148]
00a1cc58:  ldr      x1, [sp, #0x220]
00a1cc5c:  add      x21, x17, x22
00a1cc60:  ldr      x17, [sp, #0x140]
00a1cc64:  ldr      x22, [sp, #0x210]
00a1cc68:  add      x7, x17, x7
00a1cc6c:  ldr      x17, [sp, #0x138]
00a1cc70:  add      x6, x17, x6
00a1cc74:  ldr      x17, [sp, #0x120]
00a1cc78:  add      x5, x17, x5
00a1cc7c:  ldr      x17, [sp, #0x110]
00a1cc80:  add      x0, x17, x4
00a1cc84:  ldr      x17, [sp, #0x100]
00a1cc88:  add      x4, x17, x3
00a1cc8c:  ldr      x17, [sp, #0xf0]
00a1cc90:  add      x3, x17, x2
00a1cc94:  ldr      x17, [sp, #0xe0]
00a1cc98:  add      x2, x17, x1
00a1cc9c:  ldr      x17, [sp, #0xd0]
00a1cca0:  ldr      x1, [sp, #0x218]
00a1cca4:  add      x17, x17, x1
00a1cca8:  ldr      x1, [sp, #0xc0]
00a1ccac:  add      x1, x1, x22
00a1ccb0:  b        #0xa1c8a0
00a1ccb4:  ldr      x28, [x10, #0x28]
00a1ccb8:  cbz      x28, #0xa1ccdc
00a1ccbc:  ldr      x27, [x10, #0x30]
00a1ccc0:  b        #0xa1ccdc
00a1ccc4:  ldr      x20, [sp, #0x250]
00a1ccc8:  ldr      x19, [sp, #0x258]
00a1cccc:  mov      x25, x21
00a1ccd0:  mov      w21, w22
00a1ccd4:  bl       #0xa6bc50
00a1ccd8:  b        #0xa1bd64
00a1ccdc:  ldr      x8, [sp, #0x220]
00a1cce0:  cbz      x8, #0xa1cce8
00a1cce4:  bl       #0xa6b840
00a1cce8:  ldr      x20, [sp, #0x250]
00a1ccec:  ldr      x19, [sp, #0x258]
00a1ccf0:  mov      w26, #3
00a1ccf4:  mov      x25, x21
00a1ccf8:  cbz      x28, #0xa1bd64
00a1ccfc:  ldr      x8, [sp, #0x1f8]
00a1cd00:  str      x24, [sp, #0x260]
00a1cd04:  str      x25, [sp, #0x268]
00a1cd08:  ldr      x24, [x8, #0x20]
00a1cd0c:  str      x20, [sp, #0x270]
00a1cd10:  str      x19, [sp, #0x278]
00a1cd14:  str      x23, [sp, #0x280]
00a1cd18:  str      x28, [sp, #0x288]
00a1cd1c:  str      x27, [sp, #0x290]
00a1cd20:  bl       #0xa6bbd4
00a1cd24:  sub      w8, w26, #3
00a1cd28:  cmp      w26, #2
00a1cd2c:  mov      w9, #2
00a1cd30:  csel     w8, w8, w9, hi
00a1cd34:  mov      w19, w21
00a1cd38:  cmp      w8, #1
00a1cd3c:  b.eq     #0xa1cdf4
00a1cd40:  cmp      w8, #2
00a1cd44:  b.ne     #0xa1cec4
00a1cd48:  ldr      x9, [sp, #0x238]
00a1cd4c:  mov      w8, w26
00a1cd50:  orr      x25, x8, x9, lsl #32
00a1cd54:  ldr      x8, [sp, #0x248]
00a1cd58:  ldr      x9, [sp, #0x230]
00a1cd5c:  orr      x20, x19, x8, lsl #32
00a1cd60:  ldr      x8, [sp, #0x218]
00a1cd64:  cmp      x8, x9
00a1cd68:  b.eq     #0xa1ce54
00a1cd6c:  ldr      x28, [x9, #-8]!
00a1cd70:  str      x9, [sp, #0x230]
00a1cd74:  ldp      w8, w9, [x28, #0x28]
00a1cd78:  cmp      x8, #0
00a1cd7c:  str      x8, [sp, #0x238]
00a1cd80:  ldr      w8, [x28]
00a1cd84:  cset     w26, ne
00a1cd88:  cmp      x9, #0
00a1cd8c:  str      x9, [sp, #0x248]
00a1cd90:  cset     w21, ne
00a1cd94:  tbz      w8, #0, #0xa1ce34
00a1cd98:  ldr      x9, [sp, #0x228]
00a1cd9c:  ldur     x8, [x9, #0x10]
00a1cda0:  cmn      x8, #2
00a1cda4:  b.eq     #0xa1ce34
00a1cda8:  ldr      x8, [sp, #0x1f0]
00a1cdac:  ldr      x19, [x28, #8]
00a1cdb0:  add      x0, x9, #0x200
00a1cdb4:  ldr      w8, [x8]
00a1cdb8:  tbz      w8, #0, #0xa1ceb4
00a1cdbc:  ldr      x8, [x0]
00a1cdc0:  cbnz     x8, #0xa1cdd4
00a1cdc4:  ldrb     w8, [x0, #8]
00a1cdc8:  cmp      w8, #0xff
00a1cdcc:  b.ne     #0xa1cf30
00a1cdd0:  ldr      x0, [x0, #0x10]
00a1cdd4:  ldr      x8, [x0, #8]
00a1cdd8:  cmp      x19, x8
00a1cddc:  b.hs     #0xa1ce34
00a1cde0:  mov      w9, #0x18
00a1cde4:  ldr      x8, [x0]
00a1cde8:  madd     x9, x19, x9, x8
00a1cdec:  ldp      x8, x9, [x9, #8]
00a1cdf0:  b        #0xa1ce38
00a1cdf4:  cmp      w26, #2
00a1cdf8:  b.hi     #0xa1ce08
00a1cdfc:  ldr      x8, [sp, #0x220]
00a1ce00:  cbz      x8, #0xa1ce08
00a1ce04:  bl       #0xa6b840
00a1ce08:  ldr      x8, [sp, #0x248]
00a1ce0c:  ldr      x20, [sp, #0x250]
00a1ce10:  mov      w21, #2
00a1ce14:  ldr      x22, [sp, #0x228]
00a1ce18:  mov      w26, #3
00a1ce1c:  orr      x25, x19, x8, lsl #32
00a1ce20:  ldr      x19, [sp, #0x258]
00a1ce24:  bl       #0xa6baa0
00a1ce28:  mov      x27, x0
00a1ce2c:  mov      x28, x1
00a1ce30:  b        #0xa1ce80
00a1ce34:  mov      x8, xzr
00a1ce38:  ldr      x27, [x28, #0x18]
00a1ce3c:  cbz      x27, #0xa1cea4
00a1ce40:  ldr      x19, [sp, #0x250]
00a1ce44:  ldr      x28, [x28, #0x20]
00a1ce48:  ldr      x22, [sp, #0x258]
00a1ce4c:  bl       #0xa6bc50
00a1ce50:  b        #0xa1ce80
00a1ce54:  ldr      x8, [sp, #0x200]
00a1ce58:  ldr      x27, [x8, #0x28]
00a1ce5c:  cbz      x27, #0xa1ce64
00a1ce60:  ldr      x28, [x8, #0x30]
00a1ce64:  ldr      x8, [sp, #0x220]
00a1ce68:  cbz      x8, #0xa1ce70
00a1ce6c:  bl       #0xa6b840
00a1ce70:  ldr      x19, [sp, #0x250]
00a1ce74:  ldr      x22, [sp, #0x258]
00a1ce78:  mov      w26, #3
00a1ce7c:  cbz      x27, #0xa1ce24
00a1ce80:  str      x25, [sp, #0x260]
00a1ce84:  str      x20, [sp, #0x268]
00a1ce88:  str      x19, [sp, #0x270]
00a1ce8c:  str      x22, [sp, #0x278]
00a1ce90:  str      x23, [sp, #0x280]
00a1ce94:  str      x27, [sp, #0x288]
00a1ce98:  str      x28, [sp, #0x290]
00a1ce9c:  bl       #0xa6bbd4
00a1cea0:  b        #0xa1cd24
00a1cea4:  ldr      x19, [sp, #0x250]
00a1cea8:  ldr      x22, [sp, #0x258]
00a1ceac:  bl       #0xa6bc50
00a1ceb0:  b        #0xa1ce24
00a1ceb4:  ldr      x2, [sp, #0x228]
00a1ceb8:  ldr      x1, [sp, #0x1e8]
00a1cebc:  bl       #0xa6bbb4
00a1cec0:  b        #0xa1cdbc
00a1cec4:  mov      w19, #1
00a1cec8:  mov      x25, x23
00a1cecc:  cmp      w26, #2
00a1ced0:  b.hi     #0xa1cee0
00a1ced4:  ldr      x8, [sp, #0x220]
00a1ced8:  cbz      x8, #0xa1cee0
00a1cedc:  bl       #0xa6b840
00a1cee0:  tbnz     w19, #0, #0xa1cf1c
00a1cee4:  adrp     x0, #0xb0f000
00a1cee8:  add      x0, x0, #0x898
00a1ceec:  mov      x1, x25
00a1cef0:  bl       #0xa40210
00a1cef4:  cbz      x0, #0xa1cf1c
00a1cef8:  mov      w8, #-1
00a1cefc:  str      x0, [sp, #0x268]
00a1cf00:  ldr      x0, [sp, #0x240]
00a1cf04:  str      w8, [sp, #0x260]
00a1cf08:  ldr      x8, [sp, #0x1f8]
00a1cf0c:  str      x1, [sp, #0x270]
00a1cf10:  add      x1, sp, #0x260
00a1cf14:  ldr      x8, [x8, #0x20]
00a1cf18:  blr      x8
00a1cf1c:  add      sp, sp, #1, lsl #12
00a1cf20:  add      sp, sp, #0x3c0
00a1cf24:  bl       #0xa6bb40
00a1cf28:  ldp      x29, x30, [sp], #0x60
00a1cf2c:  ret      
00a1cf30:  mov      w19, #1
00a1cf34:  b        #0xa1cf48
00a1cf38:  ldrb     w8, [x0, #8]
00a1cf3c:  cmp      w8, #0xff
00a1cf40:  b.eq     #0xa1cf50
00a1cf44:  mov      w19, wzr
00a1cf48:  mov      x25, x23
00a1cf4c:  b        #0xa1ced4
00a1cf50:  ldr      x0, [x0, #0x10]
00a1cf54:  b        #0xa1bdec
00a1cf58:  ldr      x20, [sp, #0xec8]
00a1cf5c:  cbz      x19, #0xa1cf80
00a1cf60:  add      x22, x20, #8
00a1cf64:  ldur     x1, [x22, #-8]
00a1cf68:  cbz      x1, #0xa1cf74
00a1cf6c:  ldr      x0, [x22]
00a1cf70:  bl       #0xa6b890
00a1cf74:  subs     x19, x19, #1
00a1cf78:  add      x22, x22, #0x30
00a1cf7c:  b.ne     #0xa1cf64
00a1cf80:  ldr      x8, [sp, #0xec0]
00a1cf84:  cbz      x8, #0xa1b064
00a1cf88:  add      x8, x8, x8, lsl #1
00a1cf8c:  bl       #0xa6b938
00a1cf90:  b        #0xa1b064
00a1cf94:  ldr      x20, [sp, #0x238]
00a1cf98:  cmp      x20, #0x17f
00a1cf9c:  b.hi     #0xa1d924
00a1cfa0:  ldr      x1, [sp, #0x230]
00a1cfa4:  add      x0, sp, #0x260
00a1cfa8:  mov      x2, x20
00a1cfac:  add      x19, sp, #0x260
00a1cfb0:  bl       #0xab9420
00a1cfb4:  strb     wzr, [x19, x20]
00a1cfb8:  add      x8, sp, #0xec0
00a1cfbc:  add      x0, sp, #0x260
00a1cfc0:  add      x1, x20, #1
00a1cfc4:  bl       #0xac4b10
00a1cfc8:  bl       #0xa6bb70
00a1cfcc:  b.ne     #0xa1cffc
00a1cfd0:  mov      x8, #-1
00a1cfd4:  nop      
00a1cfd8:  adr      x9, #0xafab10
00a1cfdc:  str      x9, [sp, #0xc58]
00a1cfe0:  str      x8, [sp, #0xc50]
00a1cfe4:  b        #0xa1d008
00a1cfe8:  nop      
00a1cfec:  adr      x3, #0xafb510
00a1cff0:  mov      x0, xzr
00a1cff4:  mov      x1, x8
00a1cff8:  b        #0xa1d068
00a1cffc:  ldr      x1, [sp, #0xec8]
00a1d000:  add      x0, sp, #0xc50
00a1d004:  bl       #0xa51514
00a1d008:  ldr      x26, [sp, #0xc50]
00a1d00c:  ldr      x24, [sp, #0xc58]
00a1d010:  cmn      x26, #1
00a1d014:  b.eq     #0xa1d030
00a1d018:  ldr      x19, [sp, #0xc60]
00a1d01c:  cbz      x19, #0xa1d070
00a1d020:  ldrb     w8, [x24]
00a1d024:  cmp      w8, #0x2f
00a1d028:  cset     w8, eq
00a1d02c:  b        #0xa1d074
00a1d030:  and      x8, x24, #3
00a1d034:  sub      x9, x8, #2
00a1d038:  cmp      x9, #2
00a1d03c:  b.lo     #0xa1b7c8
00a1d040:  cbz      x8, #0xa1b7c8
00a1d044:  sub      x8, x24, #1
00a1d048:  bl       #0xa6b910
00a1d04c:  strb     w9, [sp, #0x260]
00a1d050:  bl       #0xa6b9e4
00a1d054:  b        #0xa1b7c8
00a1d058:  nop      
00a1d05c:  adr      x3, #0xafb4f8
00a1d060:  mov      x0, xzr
00a1d064:  mov      x1, x22
00a1d068:  mov      w2, #4
00a1d06c:  bl       #0xab9570
00a1d070:  mov      w8, wzr
00a1d074:  mov      w9, #0xff
00a1d078:  strb     w8, [sp, #0x29a]
00a1d07c:  mov      w8, #0x201
00a1d080:  str      x24, [sp, #0x260]
00a1d084:  str      x19, [sp, #0x268]
00a1d088:  strb     w9, [sp, #0x270]
00a1d08c:  strh     w8, [sp, #0x298]
00a1d090:  add      x8, sp, #0xec0
00a1d094:  add      x0, sp, #0x260
00a1d098:  bl       #0xabb950
00a1d09c:  ldrb     w8, [sp, #0xec0]
00a1d0a0:  sub      w8, w8, #7
00a1d0a4:  cmp      w8, #0xf7
00a1d0a8:  b.hi     #0xa1d0e0
00a1d0ac:  add      x0, sp, #0x260
00a1d0b0:  bl       #0xac4b90
00a1d0b4:  str      x1, [sp, #0x228]
00a1d0b8:  cbz      x0, #0xa1d0e0
00a1d0bc:  ldr      x8, [sp, #0x228]
00a1d0c0:  add      x8, x8, x27
00a1d0c4:  adds     x20, x8, #0x10
00a1d0c8:  b.pl     #0xa1d240
00a1d0cc:  mov      x23, xzr
00a1d0d0:  mov      x0, x23
00a1d0d4:  mov      x1, x20
00a1d0d8:  bl       #0xab99c0
00a1d0dc:  b        #0xa1de6c
00a1d0e0:  mov      x19, #-1
00a1d0e4:  str      x26, [sp, #0x220]
00a1d0e8:  ldr      x1, [sp, #0x220]
00a1d0ec:  cbz      x1, #0xa1d0f8
00a1d0f0:  mov      x0, x24
00a1d0f4:  bl       #0xa6b890
00a1d0f8:  cmn      x19, #1
00a1d0fc:  b.eq     #0xa1b7c8
00a1d100:  bl       #0xa6bcbc
00a1d104:  mov      x2, x23
00a1d108:  bl       #0xa50dc4
00a1d10c:  bl       #0xa6bd04
00a1d110:  b.ne     #0xa1d230
00a1d114:  ldr      x1, [sp, #0x268]
00a1d118:  mov      w8, #8
00a1d11c:  ldr      x2, [sp, #0x270]
00a1d120:  stp      x20, x19, [sp]
00a1d124:  stp      xzr, x8, [x29, #-0xd0]
00a1d128:  stp      xzr, xzr, [x29, #-0xc0]
00a1d12c:  stp      x8, xzr, [x29, #-0xb0]
00a1d130:  add      x0, sp, #0xec0
00a1d134:  stp      x2, x1, [sp, #0x10]
00a1d138:  bl       #0xa40300
00a1d13c:  ldr      x28, [sp, #0xec0]
00a1d140:  cmn      x28, #1
00a1d144:  b.eq     #0xa1d7d4
00a1d148:  add      x8, sp, #0xec0
00a1d14c:  ldr      x9, [sp, #0xec8]
00a1d150:  ldr      x26, [sp, #0xf08]
00a1d154:  ldur     q0, [x8, #0x58]
00a1d158:  ldur     q1, [x8, #0x68]
00a1d15c:  mov      x20, #-1
00a1d160:  ldr      x8, [sp, #0xed0]
00a1d164:  stp      q0, q1, [x29, #-0xa0]
00a1d168:  stp      x8, x9, [sp, #0x1e8]
00a1d16c:  ldr      x8, [sp, #0xed8]
00a1d170:  ldr      x9, [sp, #0xef8]
00a1d174:  str      x8, [sp, #0x200]
00a1d178:  ldr      x8, [sp, #0xee0]
00a1d17c:  str      x9, [sp, #0x228]
00a1d180:  ldr      x9, [sp, #0xf00]
00a1d184:  str      x8, [sp, #0x208]
00a1d188:  ldr      x8, [sp, #0xee8]
00a1d18c:  str      x9, [sp, #0x220]
00a1d190:  ldr      x9, [sp, #0xf10]
00a1d194:  str      x8, [sp, #0x210]
00a1d198:  ldr      x8, [sp, #0xef0]
00a1d19c:  str      x9, [sp, #0x218]
00a1d1a0:  mov      x24, x8
00a1d1a4:  cbz      x8, #0xa1d65c
00a1d1a8:  ldr      x8, [sp, #0x228]
00a1d1ac:  cbz      x8, #0xa1d65c
00a1d1b0:  ldr      x8, [sp, #0x210]
00a1d1b4:  lsl      x19, x24, #6
00a1d1b8:  adrp     x20, #0x382000
00a1d1bc:  add      x20, x20, #0xa4a
00a1d1c0:  add      x27, x8, #0x20
00a1d1c4:  ldur     w8, [x27, #-0x20]
00a1d1c8:  adds     x2, x26, x8
00a1d1cc:  b.hs     #0xa1d200
00a1d1d0:  ldr      x0, [sp, #0x228]
00a1d1d4:  ldr      x1, [sp, #0x220]
00a1d1d8:  mov      w4, wzr
00a1d1dc:  ldr      x3, [sp, #0x218]
00a1d1e0:  bl       #0xac4b60
00a1d1e4:  cbz      x0, #0xa1d200
00a1d1e8:  cmp      x1, #0x11
00a1d1ec:  b.ne     #0xa1d200
00a1d1f0:  mov      x1, x20
00a1d1f4:  mov      w2, #0x11
00a1d1f8:  bl       #0xab97c0
00a1d1fc:  cbz      w0, #0xa1d604
00a1d200:  subs     x19, x19, #0x40
00a1d204:  add      x27, x27, #0x40
00a1d208:  b.ne     #0xa1d1c4
00a1d20c:  b        #0xa1d658
00a1d210:  nop      
00a1d214:  adr      x3, #0xafb498
00a1d218:  mov      x2, x1
00a1d21c:  bl       #0xab9570
00a1d220:  bl       #0xa6bc30
00a1d224:  b        #0xa1de6c
00a1d228:  bl       #0xa6bc24
00a1d22c:  b        #0xa1de6c
00a1d230:  cbz      x19, #0xa1b7c8
00a1d234:  mov      x0, x20
00a1d238:  mov      x1, x19
00a1d23c:  b        #0xa1d5e4
00a1d240:  str      x0, [sp, #0x218]
00a1d244:  cbz      x20, #0xa1d2a0
00a1d248:  bl       #0xab9390
00a1d24c:  mov      x0, x20
00a1d250:  mov      w1, #1
00a1d254:  mov      w23, #1
00a1d258:  bl       #0x4b25a4
00a1d25c:  cbz      x0, #0xa1d0d0
00a1d260:  b        #0xa1d2a4
00a1d264:  adrp     x0, #0x382000
00a1d268:  add      x0, x0, #0x47a
00a1d26c:  nop      
00a1d270:  adr      x2, #0xafb890
00a1d274:  mov      w1, #0x13
00a1d278:  bl       #0xab9400
00a1d27c:  add      x3, sp, #1, lsl #12
00a1d280:  nop      
00a1d284:  adr      x4, #0xa2bb60
00a1d288:  add      x0, sp, #0xc50
00a1d28c:  add      x3, x3, #0x220
00a1d290:  mov      x1, x28
00a1d294:  mov      x2, x23
00a1d298:  bl       #0xa24ad8
00a1d29c:  b        #0xa1b504
00a1d2a0:  mov      w0, #1
00a1d2a4:  ldr      x8, [sp, #0x228]
00a1d2a8:  str      x26, [sp, #0x220]
00a1d2ac:  str      x20, [sp, #0xc50]
00a1d2b0:  str      x0, [sp, #0xc58]
00a1d2b4:  str      xzr, [sp, #0xc60]
00a1d2b8:  cbz      x8, #0xa1d2e0
00a1d2bc:  ldr      x8, [sp, #0x228]
00a1d2c0:  cmp      x8, x20
00a1d2c4:  b.hi     #0xa1dd5c
00a1d2c8:  mov      x20, xzr
00a1d2cc:  ldr      x1, [sp, #0x218]
00a1d2d0:  ldr      x2, [sp, #0x228]
00a1d2d4:  add      x0, x0, x20
00a1d2d8:  bl       #0xab9420
00a1d2dc:  b        #0xa1d2e4
00a1d2e0:  mov      x20, xzr
00a1d2e4:  ldr      x8, [sp, #0x228]
00a1d2e8:  adds     x23, x20, x8
00a1d2ec:  str      x23, [sp, #0xc60]
00a1d2f0:  b.eq     #0xa1d30c
00a1d2f4:  ldr      x8, [sp, #0xc58]
00a1d2f8:  add      x8, x8, x23
00a1d2fc:  ldurb    w8, [x8, #-1]
00a1d300:  cmp      w8, #0x2f
00a1d304:  cset     w9, ne
00a1d308:  b        #0xa1d310
00a1d30c:  mov      w9, wzr
00a1d310:  cbz      x27, #0xa1d338
00a1d314:  ldrb     w10, [x28]
00a1d318:  ldr      x8, [sp, #0xc50]
00a1d31c:  cmp      w10, #0x2f
00a1d320:  b.ne     #0xa1d33c
00a1d324:  mov      x23, xzr
00a1d328:  cmp      x27, x8
00a1d32c:  str      xzr, [sp, #0xc60]
00a1d330:  b.ls     #0xa1d36c
00a1d334:  b        #0xa1dcf8
00a1d338:  ldr      x8, [sp, #0xc50]
00a1d33c:  cbz      w9, #0xa1d35c
00a1d340:  cmp      x8, x23
00a1d344:  b.eq     #0xa1ddb0
00a1d348:  ldr      x9, [sp, #0xc58]
00a1d34c:  mov      w10, #0x2f
00a1d350:  strb     w10, [x9, x23]
00a1d354:  add      x23, x23, #1
00a1d358:  str      x23, [sp, #0xc60]
00a1d35c:  sub      x8, x8, x23
00a1d360:  cmp      x27, x8
00a1d364:  b.hi     #0xa1dcf8
00a1d368:  cbz      x27, #0xa1d388
00a1d36c:  ldr      x8, [sp, #0xc58]
00a1d370:  mov      x1, x28
00a1d374:  mov      x2, x27
00a1d378:  add      x0, x8, x23
00a1d37c:  mov      x20, x8
00a1d380:  bl       #0xab9420
00a1d384:  b        #0xa1d38c
00a1d388:  ldr      x20, [sp, #0xc58]
00a1d38c:  adds     x8, x23, x27
00a1d390:  mov      x23, x8
00a1d394:  str      x8, [sp, #0xc60]
00a1d398:  b.eq     #0xa1d3ac
00a1d39c:  ldrb     w8, [x20]
00a1d3a0:  cmp      w8, #0x2f
00a1d3a4:  cset     w9, eq
00a1d3a8:  b        #0xa1d3b0
00a1d3ac:  mov      w9, wzr
00a1d3b0:  mov      w8, #0xff
00a1d3b4:  strb     w9, [sp, #0xefa]
00a1d3b8:  mov      w9, #0x201
00a1d3bc:  str      x20, [sp, #0xec0]
00a1d3c0:  str      x23, [sp, #0xec8]
00a1d3c4:  strb     w8, [sp, #0xed0]
00a1d3c8:  strh     w9, [sp, #0xef8]
00a1d3cc:  cbz      x19, #0xa1d3e0
00a1d3d0:  ldrb     w10, [x24]
00a1d3d4:  cmp      w10, #0x2f
00a1d3d8:  cset     w10, eq
00a1d3dc:  b        #0xa1d3e4
00a1d3e0:  mov      w10, wzr
00a1d3e4:  str      x24, [sp, #0x260]
00a1d3e8:  str      x19, [sp, #0x268]
00a1d3ec:  strb     w8, [sp, #0x270]
00a1d3f0:  strb     w10, [sp, #0x29a]
00a1d3f4:  strh     w9, [sp, #0x298]
00a1d3f8:  add      x0, sp, #0xec0
00a1d3fc:  add      x1, sp, #0x260
00a1d400:  bl       #0xa676d8
00a1d404:  tbz      w0, #0, #0xa1d43c
00a1d408:  ldr      x8, [sp, #0x228]
00a1d40c:  str      xzr, [sp, #0xc60]
00a1d410:  cbz      x8, #0xa1d478
00a1d414:  ldr      x8, [sp, #0xc50]
00a1d418:  ldr      x9, [sp, #0x228]
00a1d41c:  cmp      x9, x8
00a1d420:  b.hi     #0xa1dd78
00a1d424:  mov      x19, xzr
00a1d428:  ldr      x1, [sp, #0x218]
00a1d42c:  ldr      x2, [sp, #0x228]
00a1d430:  add      x0, x20, x19
00a1d434:  bl       #0xab9420
00a1d438:  b        #0xa1d47c
00a1d43c:  add      x8, sp, #0x260
00a1d440:  mov      x0, x20
00a1d444:  mov      x1, x23
00a1d448:  bl       #0xab9f20
00a1d44c:  bl       #0xa6bd04
00a1d450:  b.ne     #0xa1d5ec
00a1d454:  ldr      x8, [sp, #0x268]
00a1d458:  bl       #0xa6b920
00a1d45c:  b.lo     #0xa1d408
00a1d460:  cbz      x9, #0xa1d408
00a1d464:  sub      x8, x8, #1
00a1d468:  bl       #0xa6b910
00a1d46c:  strb     w9, [sp, #0x260]
00a1d470:  bl       #0xa6b9e4
00a1d474:  b        #0xa1d408
00a1d478:  mov      x19, xzr
00a1d47c:  ldr      x8, [sp, #0x228]
00a1d480:  adds     x1, x19, x8
00a1d484:  str      x1, [sp, #0xc60]
00a1d488:  b.eq     #0xa1d4c0
00a1d48c:  ldr      x9, [sp, #0xc58]
00a1d490:  ldr      x8, [sp, #0xc50]
00a1d494:  add      x10, x9, x1
00a1d498:  ldurb    w10, [x10, #-1]
00a1d49c:  cmp      w10, #0x2f
00a1d4a0:  b.eq     #0xa1d4c4
00a1d4a4:  cmp      x8, x1
00a1d4a8:  b.eq     #0xa1ddec
00a1d4ac:  mov      w10, #0x2f
00a1d4b0:  strb     w10, [x9, x1]
00a1d4b4:  add      x1, x1, #1
00a1d4b8:  str      x1, [sp, #0xc60]
00a1d4bc:  b        #0xa1d4c4
00a1d4c0:  ldr      x8, [sp, #0xc50]
00a1d4c4:  sub      x8, x8, x1
00a1d4c8:  cmp      x8, #5
00a1d4cc:  b.ls     #0xa1dd20
00a1d4d0:  ldr      x11, [sp, #0xc58]
00a1d4d4:  mov      w10, #0x642e
00a1d4d8:  mov      w8, #0x6775
00a1d4dc:  movk     w10, #0x6265, lsl #16
00a1d4e0:  add      x19, x1, #6
00a1d4e4:  add      x9, x11, x1
00a1d4e8:  mov      x0, x11
00a1d4ec:  strh     w8, [x9, #4]
00a1d4f0:  add      x8, x11, x19
00a1d4f4:  str      w10, [x9]
00a1d4f8:  str      x19, [sp, #0xc60]
00a1d4fc:  ldurb    w9, [x8, #-1]
00a1d500:  cbz      x27, #0xa1d528
00a1d504:  ldrb     w10, [x28]
00a1d508:  ldr      x8, [sp, #0xc50]
00a1d50c:  cmp      w10, #0x2f
00a1d510:  b.ne     #0xa1d52c
00a1d514:  mov      x19, xzr
00a1d518:  cmp      x27, x8
00a1d51c:  str      xzr, [sp, #0xc60]
00a1d520:  b.ls     #0xa1d55c
00a1d524:  b        #0xa1dd34
00a1d528:  ldr      x8, [sp, #0xc50]
00a1d52c:  cmp      w9, #0x2f
00a1d530:  b.eq     #0xa1d54c
00a1d534:  cmp      x8, x19
00a1d538:  b.eq     #0xa1ddcc
00a1d53c:  mov      w9, #0x2f
00a1d540:  strb     w9, [x0, x19]
00a1d544:  add      x19, x19, #1
00a1d548:  str      x19, [sp, #0xc60]
00a1d54c:  sub      x8, x8, x19
00a1d550:  cmp      x27, x8
00a1d554:  b.hi     #0xa1dd34
00a1d558:  cbz      x27, #0xa1d570
00a1d55c:  add      x0, x0, x19
00a1d560:  mov      x1, x28
00a1d564:  mov      x2, x27
00a1d568:  bl       #0xab9420
00a1d56c:  ldr      x0, [sp, #0xc58]
00a1d570:  add      x1, x19, x27
00a1d574:  str      x1, [sp, #0xc60]
00a1d578:  add      x8, sp, #0x260
00a1d57c:  mov      x20, x0
00a1d580:  mov      x23, x1
00a1d584:  bl       #0xab9f20
00a1d588:  bl       #0xa6bd04
00a1d58c:  b.ne     #0xa1d5b8
00a1d590:  ldr      x8, [sp, #0x268]
00a1d594:  bl       #0xa6b920
00a1d598:  b.lo     #0xa1d5b0
00a1d59c:  cbz      x9, #0xa1d5b0
00a1d5a0:  sub      x8, x8, #1
00a1d5a4:  bl       #0xa6b910
00a1d5a8:  strb     w9, [sp, #0x260]
00a1d5ac:  bl       #0xa6b9e4
00a1d5b0:  ldr      x1, [sp, #0xc50]
00a1d5b4:  b        #0xa1d5c8
00a1d5b8:  ldr      w8, [sp, #0x278]
00a1d5bc:  ldr      x1, [sp, #0xc50]
00a1d5c0:  bl       #0xa6bc9c
00a1d5c4:  b.eq     #0xa1d5fc
00a1d5c8:  cbz      x1, #0xa1d5d4
00a1d5cc:  mov      x0, x20
00a1d5d0:  bl       #0xa6b890
00a1d5d4:  ldr      x8, [sp, #0x220]
00a1d5d8:  cbz      x8, #0xa1b7c8
00a1d5dc:  ldr      x1, [sp, #0x220]
00a1d5e0:  mov      x0, x24
00a1d5e4:  bl       #0xa6b890
00a1d5e8:  b        #0xa1b7c8
00a1d5ec:  ldr      w8, [sp, #0x278]
00a1d5f0:  bl       #0xa6bc9c
00a1d5f4:  b.ne     #0xa1d408
00a1d5f8:  ldr      x1, [sp, #0xc50]
00a1d5fc:  mov      x19, x1
00a1d600:  b        #0xa1d0e8
00a1d604:  ldur     w8, [x27, #-0x1c]
00a1d608:  cmp      w8, #8
00a1d60c:  b.eq     #0xa1d658
00a1d610:  ldr      x19, [x27]
00a1d614:  cbz      x19, #0xa1d658
00a1d618:  ldur     x8, [x27, #-8]
00a1d61c:  ldr      x9, [sp, #0x208]
00a1d620:  subs     x9, x9, x8
00a1d624:  ccmp     x19, x9, #2, hs
00a1d628:  b.hi     #0xa1d658
00a1d62c:  ldr      x9, [sp, #0x200]
00a1d630:  mov      x27, xzr
00a1d634:  add      x8, x9, x8
00a1d638:  str      x8, [sp, #0x1d8]
00a1d63c:  ldr      x8, [sp, #0x1d8]
00a1d640:  ldrb     w8, [x8, x27]
00a1d644:  cbz      w8, #0xa1d878
00a1d648:  add      x8, x27, #1
00a1d64c:  mov      x27, x8
00a1d650:  cmp      x19, x8
00a1d654:  b.ne     #0xa1d63c
00a1d658:  mov      x20, #-1
00a1d65c:  add      x0, sp, #1, lsl #12
00a1d660:  ldr      x1, [sp, #0x230]
00a1d664:  ldr      x2, [sp, #0x238]
00a1d668:  add      x0, x0, #0x130
00a1d66c:  sub      x3, x29, #0xd0
00a1d670:  bl       #0xa30894
00a1d674:  ldp      x9, x10, [sp, #0x1e8]
00a1d678:  add      x8, sp, #0xc50
00a1d67c:  ldp      q0, q1, [x29, #-0xa0]
00a1d680:  sub      x1, x29, #0x78
00a1d684:  mov      w2, #0x68
00a1d688:  str      x28, [sp, #0xc50]
00a1d68c:  str      x9, [sp, #0xc60]
00a1d690:  ldr      x9, [sp, #0x200]
00a1d694:  stur     q0, [x8, #0x58]
00a1d698:  str      x9, [sp, #0xc68]
00a1d69c:  ldr      x9, [sp, #0x208]
00a1d6a0:  stur     q1, [x8, #0x68]
00a1d6a4:  add      x8, sp, #0xec0
00a1d6a8:  str      x9, [sp, #0xc70]
00a1d6ac:  ldr      x9, [sp, #0x210]
00a1d6b0:  add      x0, x8, #0x10
00a1d6b4:  str      x10, [sp, #0xc58]
00a1d6b8:  str      x9, [sp, #0xc78]
00a1d6bc:  ldr      x9, [sp, #0x228]
00a1d6c0:  str      x24, [sp, #0xc80]
00a1d6c4:  str      x9, [sp, #0xc88]
00a1d6c8:  ldr      x9, [sp, #0x220]
00a1d6cc:  str      x26, [sp, #0xc98]
00a1d6d0:  str      x9, [sp, #0xc90]
00a1d6d4:  ldr      x9, [sp, #0x218]
00a1d6d8:  str      x20, [sp, #0xec0]
00a1d6dc:  str      x9, [sp, #0xca0]
00a1d6e0:  ldr      x9, [sp, #0x1e0]
00a1d6e4:  str      x9, [sp, #0xec8]
00a1d6e8:  bl       #0xab9420
00a1d6ec:  add      x4, sp, #1, lsl #12
00a1d6f0:  add      x0, sp, #0x260
00a1d6f4:  sub      x1, x29, #0xd0
00a1d6f8:  add      x2, sp, #0xc50
00a1d6fc:  add      x3, sp, #0xec0
00a1d700:  add      x4, x4, #0x130
00a1d704:  bl       #0xa3d164
00a1d708:  bl       #0xa6bc7c
00a1d70c:  b.eq     #0xa1d7d4
00a1d710:  ldr      x8, [sp, #0x280]
00a1d714:  ldr      x9, [sp, #0x268]
00a1d718:  ldr      x10, [sp, #0x270]
00a1d71c:  ldr      x11, [sp, #0x278]
00a1d720:  ldr      q2, [sp, #0x420]
00a1d724:  ldr      q3, [sp, #0x440]
00a1d728:  str      x8, [sp, #0x168]
00a1d72c:  ldr      x8, [sp, #0x288]
00a1d730:  ldr      x27, [sp, #0x360]
00a1d734:  ldr      x28, [sp, #0x368]
00a1d738:  ldr      x24, [sp, #0x370]
00a1d73c:  str      x8, [sp, #0x158]
00a1d740:  ldr      x8, [sp, #0x290]
00a1d744:  bl       #0xa6b898
00a1d748:  ldr      x9, [sp, #0x2e8]
00a1d74c:  ldr      x8, [sp, #0x2f0]
00a1d750:  stp      q0, q1, [sp, #0x90]
00a1d754:  ldr      q1, [sp, #0x430]
00a1d758:  stp      x8, x9, [sp, #0x20]
00a1d75c:  ldr      x8, [sp, #0x2f8]
00a1d760:  ldr      x9, [sp, #0x328]
00a1d764:  stp      q1, q2, [sp, #0x70]
00a1d768:  ldr      q2, [sp, #0x450]
00a1d76c:  str      x8, [sp, #0x228]
00a1d770:  ldr      x8, [sp, #0x300]
00a1d774:  stp      q2, q3, [sp, #0x50]
00a1d778:  ldr      q2, [sp, #0x460]
00a1d77c:  str      x8, [sp, #0x220]
00a1d780:  ldr      x8, [sp, #0x308]
00a1d784:  ldp      q0, q1, [x29, #-0xd0]
00a1d788:  str      x8, [sp, #0x218]
00a1d78c:  ldr      x8, [sp, #0x310]
00a1d790:  str      x8, [sp, #0x210]
00a1d794:  ldr      x8, [sp, #0x318]
00a1d798:  str      q0, [sp, #0x12a0]
00a1d79c:  ldr      q0, [sp, #0x470]
00a1d7a0:  str      x8, [sp, #0x208]
00a1d7a4:  ldr      x8, [sp, #0x320]
00a1d7a8:  stp      q0, q2, [sp, #0x30]
00a1d7ac:  ldur     q0, [x29, #-0xb0]
00a1d7b0:  str      x8, [sp, #0x200]
00a1d7b4:  ldr      x8, [sp, #0x330]
00a1d7b8:  str      q1, [sp, #0x12b0]
00a1d7bc:  stp      x8, x9, [sp, #0x1e8]
00a1d7c0:  ldr      x9, [sp, #0x338]
00a1d7c4:  ldr      x8, [sp, #0x340]
00a1d7c8:  str      q0, [sp, #0x12c0]
00a1d7cc:  bl       #0xa6ba58
00a1d7d0:  b        #0xa1d7e8
00a1d7d4:  sub      x0, x29, #0xd0
00a1d7d8:  bl       #0xa21e4c
00a1d7dc:  ldp      x1, x0, [sp, #0x10]
00a1d7e0:  bl       #0xabc1e0
00a1d7e4:  mov      x20, #-1
00a1d7e8:  ldr      x1, [sp, #8]
00a1d7ec:  cbz      x1, #0xa1d7f8
00a1d7f0:  ldr      x0, [sp]
00a1d7f4:  bl       #0xa6b890
00a1d7f8:  cmn      x20, #1
00a1d7fc:  b.eq     #0xa1b7c8
00a1d800:  ldr      q0, [sp, #0x12a0]
00a1d804:  ldr      q1, [sp, #0x12b0]
00a1d808:  ldr      q2, [sp, #0x12c0]
00a1d80c:  ldr      x8, [sp, #0x1220]
00a1d810:  str      q0, [sp, #0x11f0]
00a1d814:  str      q1, [sp, #0x1200]
00a1d818:  str      q2, [sp, #0x1210]
00a1d81c:  cbz      x8, #0xa1d82c
00a1d820:  add      x8, x8, x8, lsl #1
00a1d824:  ldr      x0, [sp, #0x1228]
00a1d828:  bl       #0xa6b884
00a1d82c:  ldp      x23, x19, [sp, #0x10]
00a1d830:  adrp     x26, #0xb10000
00a1d834:  ldr      q0, [sp, #0x11f0]
00a1d838:  ldr      q1, [sp, #0x1200]
00a1d83c:  ldr      q2, [sp, #0x1210]
00a1d840:  str      q0, [sp, #0xc20]
00a1d844:  str      q1, [sp, #0xc30]
00a1d848:  str      q2, [sp, #0xc40]
00a1d84c:  b        #0xa1b920
00a1d850:  nop      
00a1d854:  adr      x3, #0xafb408
00a1d858:  mov      x0, xzr
00a1d85c:  mov      w2, #8
00a1d860:  bl       #0xab9570
00a1d864:  b        #0xa1de6c
00a1d868:  bl       #0xa6bbb4
00a1d86c:  b        #0xa1bde4
00a1d870:  bl       #0xa6bc24
00a1d874:  b        #0xa1de6c
00a1d878:  cbz      x27, #0xa1d8c0
00a1d87c:  ldr      x8, [sp, #0x1d8]
00a1d880:  ldrb     w8, [x8]
00a1d884:  cmp      w8, #0x2f
00a1d888:  b.ne     #0xa1d8c0
00a1d88c:  ldr      x0, [sp, #0x1d8]
00a1d890:  add      x8, sp, #0xec0
00a1d894:  mov      x1, x27
00a1d898:  bl       #0xab9f20
00a1d89c:  bl       #0xa6bb70
00a1d8a0:  b.ne     #0xa1daac
00a1d8a4:  ldr      x8, [sp, #0xec8]
00a1d8a8:  bl       #0xa6b920
00a1d8ac:  b.lo     #0xa1d658
00a1d8b0:  cbz      x9, #0xa1d658
00a1d8b4:  bl       #0xa6bb58
00a1d8b8:  bl       #0xa6b9e4
00a1d8bc:  b        #0xa1d658
00a1d8c0:  cmp      x23, #0x17f
00a1d8c4:  b.hi     #0xa1de08
00a1d8c8:  ldr      x1, [sp]
00a1d8cc:  add      x0, sp, #0xec0
00a1d8d0:  mov      x2, x23
00a1d8d4:  add      x20, sp, #0xec0
00a1d8d8:  bl       #0xab9420
00a1d8dc:  strb     wzr, [x20, x23]
00a1d8e0:  add      x8, sp, #0xc50
00a1d8e4:  add      x0, sp, #0xec0
00a1d8e8:  add      x1, x23, #1
00a1d8ec:  bl       #0xac4b10
00a1d8f0:  ldr      x8, [sp, #0xc50]
00a1d8f4:  cmp      x8, #1
00a1d8f8:  b.ne     #0xa1d940
00a1d8fc:  mov      x8, #-1
00a1d900:  nop      
00a1d904:  adr      x9, #0xafab10
00a1d908:  str      x9, [sp, #0x1138]
00a1d90c:  str      x8, [sp, #0x1130]
00a1d910:  b        #0xa1d950
00a1d914:  nop      
00a1d918:  adr      x2, #0xafb158
00a1d91c:  mov      x0, x22
00a1d920:  bl       #0xaba5a0
00a1d924:  ldr      x1, [sp, #0x230]
00a1d928:  nop      
00a1d92c:  adr      x3, #0xa6b1f4
00a1d930:  add      x0, sp, #0xc50
00a1d934:  mov      x2, x20
00a1d938:  bl       #0xa24a1c
00a1d93c:  b        #0xa1d008
00a1d940:  ldr      x1, [sp, #0xc58]
00a1d944:  add      x0, sp, #1, lsl #12
00a1d948:  add      x0, x0, #0x130
00a1d94c:  bl       #0xa51514
00a1d950:  ldr      x9, [sp, #0x1130]
00a1d954:  ldr      x8, [sp, #0x1138]
00a1d958:  cmn      x9, #1
00a1d95c:  str      x8, [sp, #0x1e0]
00a1d960:  str      x9, [sp, #0x1d0]
00a1d964:  b.eq     #0xa1d984
00a1d968:  ldr      x8, [sp, #0x1140]
00a1d96c:  cbz      x8, #0xa1d9e4
00a1d970:  ldr      x9, [sp, #0x1e0]
00a1d974:  ldrb     w9, [x9]
00a1d978:  cmp      w9, #0x2f
00a1d97c:  cset     w9, eq
00a1d980:  b        #0xa1d9e8
00a1d984:  ldr      x8, [sp, #0x1e0]
00a1d988:  and      x8, x8, #3
00a1d98c:  sub      x9, x8, #2
00a1d990:  cmp      x9, #2
00a1d994:  b.lo     #0xa1d658
00a1d998:  cbz      x8, #0xa1d658
00a1d99c:  ldr      x8, [sp, #0x1e0]
00a1d9a0:  mov      w9, #3
00a1d9a4:  strb     w9, [sp, #0xec0]
00a1d9a8:  sub      x8, x8, #1
00a1d9ac:  str      x8, [sp, #0xec8]
00a1d9b0:  add      x8, sp, #0xec0
00a1d9b4:  bl       #0xa6b9e4
00a1d9b8:  b        #0xa1d658
00a1d9bc:  mov      w0, w28
00a1d9c0:  mov      x1, x26
00a1d9c4:  bl       #0xa1fe14
00a1d9c8:  adrp     x0, #0x381000
00a1d9cc:  add      x0, x0, #0xfd3
00a1d9d0:  nop      
00a1d9d4:  adr      x2, #0xafa4b0
00a1d9d8:  mov      w1, #0x1d
00a1d9dc:  bl       #0xab9400
00a1d9e0:  b        #0xa1de6c
00a1d9e4:  mov      w9, wzr
00a1d9e8:  ldr      x10, [sp, #0x1e0]
00a1d9ec:  str      x8, [sp, #0xec8]
00a1d9f0:  mov      w8, #0xff
00a1d9f4:  strb     w8, [sp, #0xed0]
00a1d9f8:  mov      w8, #0x201
00a1d9fc:  str      x10, [sp, #0xec0]
00a1da00:  strb     w9, [sp, #0xefa]
00a1da04:  strh     w8, [sp, #0xef8]
00a1da08:  add      x8, sp, #0xc50
00a1da0c:  add      x0, sp, #0xec0
00a1da10:  bl       #0xabb950
00a1da14:  ldrb     w8, [sp, #0xc50]
00a1da18:  sub      w8, w8, #7
00a1da1c:  cmp      w8, #0xf7
00a1da20:  b.hi     #0xa1da88
00a1da24:  add      x0, sp, #0xec0
00a1da28:  bl       #0xac4b90
00a1da2c:  str      x0, [sp, #0x1c0]
00a1da30:  ldr      x8, [sp, #0x1c0]
00a1da34:  cbz      x8, #0xa1da88
00a1da38:  mov      x23, x1
00a1da3c:  cbz      x1, #0xa1dbd4
00a1da40:  bl       #0xab9390
00a1da44:  mov      x0, x23
00a1da48:  mov      w1, #1
00a1da4c:  bl       #0x4b25a4
00a1da50:  str      x0, [sp, #0x1c8]
00a1da54:  cbz      x0, #0xa1de50
00a1da58:  ldp      x1, x20, [sp, #0x1c0]
00a1da5c:  mov      x2, x23
00a1da60:  mov      x0, x20
00a1da64:  bl       #0xab9420
00a1da68:  add      x8, x20, x23
00a1da6c:  str      x23, [sp, #0xc50]
00a1da70:  ldurb    w8, [x8, #-1]
00a1da74:  str      x20, [sp, #0xc58]
00a1da78:  str      x23, [sp, #0xc60]
00a1da7c:  cmp      w8, #0x2f
00a1da80:  cset     w8, ne
00a1da84:  b        #0xa1dbf0
00a1da88:  mov      x23, #-1
00a1da8c:  ldr      x8, [sp, #0x1d0]
00a1da90:  cbz      x8, #0xa1daa0
00a1da94:  ldr      x0, [sp, #0x1e0]
00a1da98:  ldr      x1, [sp, #0x1d0]
00a1da9c:  bl       #0xa6b890
00a1daa0:  cmn      x23, #1
00a1daa4:  b.eq     #0xa1d658
00a1daa8:  b        #0xa1dae8
00a1daac:  ldr      w8, [sp, #0xed8]
00a1dab0:  bl       #0xa6bc9c
00a1dab4:  b.ne     #0xa1d658
00a1dab8:  bl       #0xab9390
00a1dabc:  mov      x0, x27
00a1dac0:  mov      w1, #1
00a1dac4:  bl       #0x4b25a4
00a1dac8:  str      x0, [sp, #0x1c8]
00a1dacc:  cbz      x0, #0xa1de60
00a1dad0:  ldr      x0, [sp, #0x1c8]
00a1dad4:  ldr      x1, [sp, #0x1d8]
00a1dad8:  mov      x2, x27
00a1dadc:  mov      x20, x27
00a1dae0:  bl       #0xab9420
00a1dae4:  mov      x23, x27
00a1dae8:  ldr      x1, [sp, #0x1c8]
00a1daec:  add      x0, sp, #0xc50
00a1daf0:  mov      x2, x20
00a1daf4:  bl       #0xa50dc4
00a1daf8:  ldr      x8, [sp, #0xc50]
00a1dafc:  cmp      x8, #1
00a1db00:  b.ne     #0xa1dbbc
00a1db04:  ldr      x9, [sp, #0xc58]
00a1db08:  ldur     x20, [x29, #-0xa8]
00a1db0c:  ldur     x8, [x29, #-0xb8]
00a1db10:  str      x9, [sp, #0x1d0]
00a1db14:  ldr      x9, [sp, #0xc60]
00a1db18:  cmp      x20, x8
00a1db1c:  str      x9, [sp, #0x1e0]
00a1db20:  b.ne     #0xa1db40
00a1db24:  sub      x8, x29, #0xd0
00a1db28:  add      x0, x8, #0x18
00a1db2c:  bl       #0xac4b70
00a1db30:  bl       #0xa6bb7c
00a1db34:  add      x9, x20, #1
00a1db38:  stur     x9, [x29, #-0xa8]
00a1db3c:  b        #0xa1db50
00a1db40:  bl       #0xa6bb7c
00a1db44:  adds     x9, x20, #1
00a1db48:  stur     x9, [x29, #-0xa8]
00a1db4c:  b.hs     #0xa1de28
00a1db50:  add      x8, x8, x9, lsl #4
00a1db54:  ldp      x1, x2, [x8, #-0x10]
00a1db58:  add      x0, sp, #0xec0
00a1db5c:  bl       #0xa40300
00a1db60:  ldr      x20, [sp, #0xec0]
00a1db64:  cmn      x20, #1
00a1db68:  b.eq     #0xa1dbc0
00a1db6c:  ldr      x8, [sp, #0xec8]
00a1db70:  add      x0, sp, #0xec0
00a1db74:  str      x8, [sp, #0x1e0]
00a1db78:  bl       #0xa40c88
00a1db7c:  cbz      x0, #0xa1dbac
00a1db80:  mvn      x8, x1
00a1db84:  add      x8, x8, x19
00a1db88:  cmp      x8, x27
00a1db8c:  b.ne     #0xa1dbac
00a1db90:  ldr      x9, [sp, #0x1d8]
00a1db94:  mvn      x8, x27
00a1db98:  add      x2, x8, x19
00a1db9c:  add      x9, x9, x27
00a1dba0:  add      x1, x9, #1
00a1dba4:  bl       #0xab97c0
00a1dba8:  cbz      w0, #0xa1dd94
00a1dbac:  cbz      x20, #0xa1dbbc
00a1dbb0:  add      x8, x20, x20, lsl #1
00a1dbb4:  ldr      x0, [sp, #0x1e0]
00a1dbb8:  bl       #0xa6b884
00a1dbbc:  mov      x20, #-1
00a1dbc0:  cbz      x23, #0xa1d65c
00a1dbc4:  ldr      x0, [sp, #0x1c8]
00a1dbc8:  mov      x1, x23
00a1dbcc:  bl       #0xa6b890
00a1dbd0:  b        #0xa1d65c
00a1dbd4:  mov      w10, #1
00a1dbd8:  mov      w9, #1
00a1dbdc:  mov      w8, wzr
00a1dbe0:  str      xzr, [sp, #0xc50]
00a1dbe4:  str      x9, [sp, #0x1c8]
00a1dbe8:  str      x10, [sp, #0xc58]
00a1dbec:  str      xzr, [sp, #0xc60]
00a1dbf0:  cbz      x27, #0xa1dc18
00a1dbf4:  ldr      x9, [sp, #0x1d8]
00a1dbf8:  ldrb     w9, [x9]
00a1dbfc:  cmp      w9, #0x2f
00a1dc00:  b.ne     #0xa1dc18
00a1dc04:  mov      x20, xzr
00a1dc08:  cmp      x27, x23
00a1dc0c:  str      xzr, [sp, #0xc60]
00a1dc10:  b.ls     #0xa1dc64
00a1dc14:  b        #0xa1de30
00a1dc18:  cbz      w8, #0xa1dc50
00a1dc1c:  add      x0, sp, #0xc50
00a1dc20:  mov      x1, x23
00a1dc24:  mov      w2, #1
00a1dc28:  bl       #0xa6b834
00a1dc2c:  ldr      x8, [sp, #0xc60]
00a1dc30:  ldr      x10, [sp, #0xc58]
00a1dc34:  mov      w9, #0x2f
00a1dc38:  ldr      x23, [sp, #0xc50]
00a1dc3c:  add      x20, x8, #1
00a1dc40:  str      x10, [sp, #0x1c8]
00a1dc44:  strb     w9, [x10, x8]
00a1dc48:  str      x20, [sp, #0xc60]
00a1dc4c:  b        #0xa1dc54
00a1dc50:  mov      x20, x23
00a1dc54:  sub      x8, x23, x20
00a1dc58:  cmp      x27, x8
00a1dc5c:  b.hi     #0xa1de30
00a1dc60:  cbz      x27, #0xa1dc80
00a1dc64:  ldr      x8, [sp, #0x1c8]
00a1dc68:  ldr      x1, [sp, #0x1d8]
00a1dc6c:  mov      x2, x27
00a1dc70:  add      x0, x8, x20
00a1dc74:  bl       #0xab9420
00a1dc78:  ldr      x8, [sp, #0xc58]
00a1dc7c:  str      x8, [sp, #0x1c8]
00a1dc80:  add      x20, x20, x27
00a1dc84:  str      x20, [sp, #0xc60]
00a1dc88:  ldr      x0, [sp, #0x1c8]
00a1dc8c:  add      x8, sp, #0xec0
00a1dc90:  mov      x1, x20
00a1dc94:  bl       #0xab9f20
00a1dc98:  bl       #0xa6bb70
00a1dc9c:  b.ne     #0xa1dcc0
00a1dca0:  ldr      x8, [sp, #0xec8]
00a1dca4:  bl       #0xa6b920
00a1dca8:  b.lo     #0xa1dcb8
00a1dcac:  cbz      x9, #0xa1dcb8
00a1dcb0:  bl       #0xa6bb58
00a1dcb4:  bl       #0xa6b9e4
00a1dcb8:  ldr      x23, [sp, #0xc50]
00a1dcbc:  b        #0xa1dcd0
00a1dcc0:  ldr      w8, [sp, #0xed8]
00a1dcc4:  ldr      x23, [sp, #0xc50]
00a1dcc8:  bl       #0xa6bc9c
00a1dccc:  b.eq     #0xa1da8c
00a1dcd0:  cbz      x23, #0xa1dce0
00a1dcd4:  ldr      x0, [sp, #0x1c8]
00a1dcd8:  mov      x1, x23
00a1dcdc:  bl       #0xa6b890
00a1dce0:  ldr      x8, [sp, #0x1d0]
00a1dce4:  cbz      x8, #0xa1d658
00a1dce8:  ldr      x0, [sp, #0x1e0]
00a1dcec:  ldr      x1, [sp, #0x1d0]
00a1dcf0:  bl       #0xa6b890
00a1dcf4:  b        #0xa1d658
00a1dcf8:  add      x0, sp, #0xc50
00a1dcfc:  mov      x1, x23
00a1dd00:  mov      x2, x27
00a1dd04:  bl       #0xa6b834
00a1dd08:  ldr      x23, [sp, #0xc60]
00a1dd0c:  b        #0xa1d36c
00a1dd10:  mov      w0, #0x10
00a1dd14:  mov      w1, #0x1f0
00a1dd18:  bl       #0xab93b0
00a1dd1c:  b        #0xa1de6c
00a1dd20:  add      x0, sp, #0xc50
00a1dd24:  mov      w2, #6
00a1dd28:  bl       #0xa6b834
00a1dd2c:  ldr      x1, [sp, #0xc60]
00a1dd30:  b        #0xa1d4d0
00a1dd34:  add      x0, sp, #0xc50
00a1dd38:  mov      x1, x19
00a1dd3c:  mov      x2, x27
00a1dd40:  bl       #0xa6b834
00a1dd44:  ldr      x19, [sp, #0xc60]
00a1dd48:  ldr      x0, [sp, #0xc58]
00a1dd4c:  b        #0xa1d55c
00a1dd50:  nop      
00a1dd54:  adr      x2, #0xafac80
00a1dd58:  bl       #0xaba5a0
00a1dd5c:  ldr      x2, [sp, #0x228]
00a1dd60:  add      x0, sp, #0xc50
00a1dd64:  mov      x1, xzr
00a1dd68:  bl       #0xa6b834
00a1dd6c:  ldr      x20, [sp, #0xc60]
00a1dd70:  ldr      x0, [sp, #0xc58]
00a1dd74:  b        #0xa1d2cc
00a1dd78:  ldr      x2, [sp, #0x228]
00a1dd7c:  add      x0, sp, #0xc50
00a1dd80:  mov      x1, xzr
00a1dd84:  bl       #0xa6b834
00a1dd88:  ldr      x19, [sp, #0xc60]
00a1dd8c:  ldr      x20, [sp, #0xc58]
00a1dd90:  b        #0xa1d428
00a1dd94:  add      x8, sp, #0xec0
00a1dd98:  sub      x0, x29, #0x78
00a1dd9c:  mov      w2, #0x68
00a1dda0:  add      x1, x8, #0x10
00a1dda4:  bl       #0xab9420
00a1dda8:  cbz      x23, #0xa1d65c
00a1ddac:  b        #0xa1dbc4
00a1ddb0:  add      x0, sp, #0xc50
00a1ddb4:  mov      x1, x23
00a1ddb8:  mov      w2, #1
00a1ddbc:  bl       #0xa6b834
00a1ddc0:  ldr      x23, [sp, #0xc60]
00a1ddc4:  ldr      x8, [sp, #0xc50]
00a1ddc8:  b        #0xa1d348

; ===== 00a25fa8  FUN_00a25fa8  (980 bytes) =====
00a25fa8:  stp      x29, x30, [sp, #-0x30]!
00a25fac:  stp      x28, x21, [sp, #0x10]
00a25fb0:  stp      x20, x19, [sp, #0x20]
00a25fb4:  mov      x29, sp
00a25fb8:  sub      sp, sp, #0x600
00a25fbc:  cmp      x1, #2
00a25fc0:  str      xzr, [sp]
00a25fc4:  b.lo     #0xa26364
00a25fc8:  lsr      x8, x1, #1
00a25fcc:  mov      x19, x0
00a25fd0:  cmp      x1, #8
00a25fd4:  lsl      x9, x8, #5
00a25fd8:  b.lo     #0xa26148
00a25fdc:  ldr      x12, [x19, #0x30]
00a25fe0:  ldr      x13, [x19, #0x10]
00a25fe4:  mov      w10, #0x40
00a25fe8:  ldr      x14, [x19, #0x70]
00a25fec:  ldr      x15, [x19, #0x50]
00a25ff0:  mov      w11, #0x60
00a25ff4:  cmp      x12, x13
00a25ff8:  cset     w12, hs
00a25ffc:  cset     w13, lo
00a26000:  cmp      x14, x15
00a26004:  add      x14, x19, x12, lsl #5
00a26008:  csel     x12, x10, x11, lo
00a2600c:  add      x13, x19, x13, lsl #5
00a26010:  csel     x15, x11, x10, lo
00a26014:  add      x16, x19, x12
00a26018:  add      x15, x19, x15
00a2601c:  ldr      x17, [x16, #0x10]
00a26020:  ldr      x0, [x14, #0x10]
00a26024:  ldr      x12, [x15, #0x10]
00a26028:  ldr      x2, [x13, #0x10]
00a2602c:  cmp      x17, x0
00a26030:  csel     x3, x15, x14, lo
00a26034:  cmp      x12, x2
00a26038:  csel     x12, x15, x13, lo
00a2603c:  csel     x13, x13, x3, lo
00a26040:  csel     x15, x14, x15, lo
00a26044:  cmp      x17, x0
00a26048:  add      x17, x19, x9
00a2604c:  ldr      x0, [x13, #0x10]
00a26050:  csel     x15, x16, x15, lo
00a26054:  ldr      x3, [x17, #0x30]
00a26058:  ldr      x4, [x17, #0x10]
00a2605c:  ldr      x2, [x15, #0x10]
00a26060:  csel     x16, x14, x16, lo
00a26064:  ldp      q0, q1, [x12]
00a26068:  cmp      x2, x0
00a2606c:  ldr      x0, [x17, #0x70]
00a26070:  ldr      x2, [x17, #0x50]
00a26074:  csel     x14, x15, x13, lo
00a26078:  csel     x13, x13, x15, lo
00a2607c:  cmp      x3, x4
00a26080:  cset     w3, hs
00a26084:  cset     w4, lo
00a26088:  cmp      x0, x2
00a2608c:  add      x0, x17, x3, lsl #5
00a26090:  csel     x2, x10, x11, lo
00a26094:  stp      q0, q1, [sp]
00a26098:  ldp      q0, q2, [x16]
00a2609c:  add      x3, x17, x4, lsl #5
00a260a0:  csel     x10, x11, x10, lo
00a260a4:  add      x11, x17, x2
00a260a8:  ldr      x2, [x0, #0x10]
00a260ac:  add      x10, x17, x10
00a260b0:  ldr      x17, [x11, #0x10]
00a260b4:  ldr      x4, [x3, #0x10]
00a260b8:  ldr      x12, [x10, #0x10]
00a260bc:  stp      q0, q2, [sp, #0x60]
00a260c0:  mov      x15, sp
00a260c4:  ldp      q1, q0, [x14]
00a260c8:  cmp      x17, x2
00a260cc:  csel     x16, x10, x0, lo
00a260d0:  cmp      x12, x4
00a260d4:  add      x12, x15, x9
00a260d8:  csel     x15, x10, x3, lo
00a260dc:  csel     x16, x3, x16, lo
00a260e0:  csel     x10, x0, x10, lo
00a260e4:  cmp      x17, x2
00a260e8:  stp      q1, q0, [sp, #0x20]
00a260ec:  ldr      x14, [x16, #0x10]
00a260f0:  ldp      q2, q0, [x13]
00a260f4:  csel     x10, x11, x10, lo
00a260f8:  ldr      x17, [x10, #0x10]
00a260fc:  csel     x11, x0, x11, lo
00a26100:  stp      q2, q0, [sp, #0x40]
00a26104:  ldp      q1, q0, [x15]
00a26108:  cmp      x17, x14
00a2610c:  csel     x13, x10, x16, lo
00a26110:  csel     x10, x16, x10, lo
00a26114:  stp      q1, q0, [x12]
00a26118:  ldp      q2, q0, [x13]
00a2611c:  stp      q2, q0, [x12, #0x20]
00a26120:  ldp      q1, q2, [x10]
00a26124:  stp      q1, q2, [x12, #0x40]
00a26128:  ldp      q1, q0, [x11]
00a2612c:  stp      q1, q0, [x12, #0x60]
00a26130:  mov      w12, #4
00a26134:  lsl      x13, x12, #5
00a26138:  cmp      x12, x8
00a2613c:  sub      x14, x1, x8
00a26140:  b.lo     #0xa26178
00a26144:  b        #0xa26208
00a26148:  ldp      q0, q1, [x19]
00a2614c:  add      x10, x19, x9
00a26150:  mov      x11, sp
00a26154:  mov      w12, #1
00a26158:  add      x11, x11, x9
00a2615c:  stp      q0, q1, [sp]
00a26160:  ldp      q2, q0, [x10]
00a26164:  stp      q2, q0, [x11]
00a26168:  lsl      x13, x12, #5
00a2616c:  cmp      x12, x8
00a26170:  sub      x14, x1, x8
00a26174:  b.hs     #0xa26208
00a26178:  mov      x10, sp
00a2617c:  mov      x11, x13
00a26180:  mov      x15, x12
00a26184:  b        #0xa261ac
00a26188:  add      x3, x10, x4
00a2618c:  ldr      q0, [x16]
00a26190:  add      x16, x10, x2
00a26194:  str      q0, [x3]
00a26198:  stp      x17, x0, [x16, #-0x10]
00a2619c:  add      x15, x15, #1
00a261a0:  add      x11, x11, #0x20
00a261a4:  cmp      x15, x8
00a261a8:  b.eq     #0xa26208
00a261ac:  lsl      x17, x15, #5
00a261b0:  add      x16, x19, x17
00a261b4:  add      x0, x10, x17
00a261b8:  ldp      q1, q0, [x16]
00a261bc:  ldur     x2, [x0, #-0x10]
00a261c0:  stp      q1, q0, [x0]
00a261c4:  ldr      x17, [x0, #0x10]
00a261c8:  cmp      x17, x2
00a261cc:  b.hs     #0xa2619c
00a261d0:  ldr      x0, [x0, #0x18]
00a261d4:  mov      x4, x11
00a261d8:  mov      x3, sp
00a261dc:  mov      x2, x4
00a261e0:  add      x5, x3, x4
00a261e4:  subs     x4, x4, #0x20
00a261e8:  ldp      q0, q1, [x5, #-0x20]
00a261ec:  stp      q0, q1, [x5]
00a261f0:  b.eq     #0xa2618c
00a261f4:  add      x3, x10, x2
00a261f8:  ldur     x3, [x3, #-0x30]
00a261fc:  cmp      x17, x3
00a26200:  b.lo     #0xa261d8
00a26204:  b        #0xa26188
00a26208:  mov      x11, sp
00a2620c:  cmp      x12, x14
00a26210:  add      x10, x11, x9
00a26214:  b.hs     #0xa262ac
00a26218:  add      x9, x19, x9
00a2621c:  mov      w15, #0x20
00a26220:  mov      x16, x10
00a26224:  b        #0xa2624c
00a26228:  mov      x4, x10
00a2622c:  ldr      q0, [x17]
00a26230:  str      q0, [x4]
00a26234:  stp      x0, x2, [x3, #-0x10]
00a26238:  add      x12, x12, #1
00a2623c:  sub      x15, x15, #0x20
00a26240:  add      x16, x16, #0x20
00a26244:  cmp      x12, x14
00a26248:  b.eq     #0xa262ac
00a2624c:  lsl      x0, x12, #5
00a26250:  add      x17, x9, x0
00a26254:  add      x2, x10, x0
00a26258:  ldp      q1, q0, [x17]
00a2625c:  ldur     x3, [x2, #-0x10]
00a26260:  stp      q1, q0, [x2]
00a26264:  ldr      x0, [x2, #0x10]
00a26268:  cmp      x0, x3
00a2626c:  b.hs     #0xa26238
00a26270:  ldr      x2, [x2, #0x18]
00a26274:  mov      x4, x16
00a26278:  mov      x5, x15
00a2627c:  add      x3, x4, x13
00a26280:  cmp      x13, x5
00a26284:  ldp      q0, q1, [x3, #-0x20]
00a26288:  stp      q0, q1, [x3]
00a2628c:  b.eq     #0xa26228
00a26290:  ldur     x6, [x3, #-0x30]
00a26294:  add      x5, x5, #0x20
00a26298:  sub      x4, x4, #0x20
00a2629c:  cmp      x0, x6
00a262a0:  b.lo     #0xa2627c
00a262a4:  add      x4, x4, x13
00a262a8:  b        #0xa2622c
00a262ac:  lsl      x20, x1, #5
00a262b0:  sub      x14, x10, #0x20
00a262b4:  mov      w15, #0x20
00a262b8:  mov      x12, x19
00a262bc:  sub      x13, x20, #0x20
00a262c0:  add      x9, x11, x13
00a262c4:  ldr      x16, [x10, #0x10]
00a262c8:  ldr      x17, [x11, #0x10]
00a262cc:  sub      x8, x8, #1
00a262d0:  ldr      x0, [x9, #0x10]
00a262d4:  ldr      x2, [x14, #0x10]
00a262d8:  cmp      x16, x17
00a262dc:  csel     x16, x10, x11, lo
00a262e0:  csel     x17, x15, xzr, lo
00a262e4:  csel     x3, xzr, x15, lo
00a262e8:  ldp      q0, q1, [x16]
00a262ec:  cmp      x0, x2
00a262f0:  csel     x16, x14, x9, lo
00a262f4:  add      x10, x10, x17
00a262f8:  csetm    x17, lo
00a262fc:  add      x14, x14, x17, lsl #5
00a26300:  add      x0, x19, x13
00a26304:  add      x11, x11, x3
00a26308:  stp      q0, q1, [x12], #0x20
00a2630c:  sub      x13, x13, #0x20
00a26310:  ldp      q0, q1, [x16]
00a26314:  csetm    x16, hs
00a26318:  add      x9, x9, x16, lsl #5
00a2631c:  stp      q0, q1, [x0]
00a26320:  cbnz     x8, #0xa262c4
00a26324:  add      x8, x14, #0x20
00a26328:  tbz      w1, #0, #0xa26350
00a2632c:  cmp      x11, x8
00a26330:  mov      w14, #0x20
00a26334:  csel     x13, x11, x10, lo
00a26338:  ldp      q0, q1, [x13]
00a2633c:  csel     x13, x14, xzr, lo
00a26340:  csel     x14, xzr, x14, lo
00a26344:  add      x11, x11, x13
00a26348:  add      x10, x10, x14
00a2634c:  stp      q0, q1, [x12]
00a26350:  cmp      x11, x8
00a26354:  b.ne     #0xa26378
00a26358:  add      x8, x9, #0x20
00a2635c:  cmp      x10, x8
00a26360:  b.ne     #0xa26378
00a26364:  add      sp, sp, #0x600
00a26368:  ldp      x20, x19, [sp, #0x20]
00a2636c:  ldp      x28, x21, [sp, #0x10]
00a26370:  ldp      x29, x30, [sp], #0x30
00a26374:  ret      
00a26378:  bl       #0xabb3f0

; ===== 00a2639c  FUN_00a2639c  (1284 bytes) =====
00a2639c:  stp      x29, x30, [sp, #-0x30]!
00a263a0:  stp      x28, x21, [sp, #0x10]
00a263a4:  stp      x20, x19, [sp, #0x20]
00a263a8:  mov      x29, sp
00a263ac:  sub      sp, sp, #0x600
00a263b0:  cmp      x1, #2
00a263b4:  str      xzr, [sp]
00a263b8:  b.lo     #0xa26888
00a263bc:  lsr      x8, x1, #1
00a263c0:  mov      x19, x0
00a263c4:  cmp      x1, #8
00a263c8:  lsl      x9, x8, #5
00a263cc:  b.lo     #0xa265f4
00a263d0:  ldp      x13, x10, [x19, #8]
00a263d4:  ldp      x12, x11, [x19, #0x28]
00a263d8:  cmp      x11, x10
00a263dc:  cset     w10, lo
00a263e0:  cmp      x12, x13
00a263e4:  ldp      x12, x11, [x19, #0x68]
00a263e8:  cset     w15, lo
00a263ec:  ldp      x13, x14, [x19, #0x48]
00a263f0:  csel     w15, w10, w15, eq
00a263f4:  cmp      x11, x14
00a263f8:  mov      w14, #0x60
00a263fc:  cset     w10, lo
00a26400:  cmp      x12, x13
00a26404:  mov      w13, #0x40
00a26408:  cset     w11, lo
00a2640c:  eor      w12, w15, #1
00a26410:  csel     w11, w10, w11, eq
00a26414:  add      x10, x19, x15, lsl #5
00a26418:  add      x12, x19, x12, lsl #5
00a2641c:  cmp      w11, #0
00a26420:  csel     x11, x14, x13, ne
00a26424:  ldp      x15, x16, [x10, #8]
00a26428:  add      x11, x19, x11
00a2642c:  csel     x17, x13, x14, ne
00a26430:  ldp      x2, x0, [x11, #8]
00a26434:  add      x17, x19, x17
00a26438:  cmp      x0, x16
00a2643c:  cset     w16, lo
00a26440:  cmp      x2, x15
00a26444:  ldp      x0, x15, [x12, #8]
00a26448:  cset     w4, lo
00a2644c:  ldp      x2, x3, [x17, #8]
00a26450:  csel     w16, w16, w4, eq
00a26454:  cmp      x3, x15
00a26458:  cset     w15, lo
00a2645c:  cmp      x2, x0
00a26460:  add      x2, x19, x9
00a26464:  cset     w0, lo
00a26468:  ldp      x3, x4, [x2, #0x28]
00a2646c:  csel     w0, w15, w0, eq
00a26470:  cmp      w0, #0
00a26474:  csel     x5, x11, x12, ne
00a26478:  cmp      w16, #0
00a2647c:  ldp      x16, x6, [x2, #8]
00a26480:  csel     x15, x11, x10, ne
00a26484:  csel     x10, x10, x5, ne
00a26488:  csel     x11, x12, x11, ne
00a2648c:  cmp      w0, #0
00a26490:  csel     x12, x12, x17, ne
00a26494:  csel     x11, x17, x11, ne
00a26498:  cmp      x4, x6
00a2649c:  ldp      q0, q1, [x15]
00a264a0:  cset     w17, lo
00a264a4:  cmp      x3, x16
00a264a8:  ldp      x0, x16, [x2, #0x68]
00a264ac:  cset     w4, lo
00a264b0:  ldp      x3, x7, [x2, #0x48]
00a264b4:  csel     w17, w17, w4, eq
00a264b8:  stp      q0, q1, [sp]
00a264bc:  ldp      q0, q2, [x12]
00a264c0:  cmp      x16, x7
00a264c4:  cset     w16, lo
00a264c8:  cmp      x0, x3
00a264cc:  eor      w3, w17, #1
00a264d0:  cset     w0, lo
00a264d4:  stp      q0, q2, [sp, #0x60]
00a264d8:  csel     w0, w16, w0, eq
00a264dc:  add      x16, x2, x17, lsl #5
00a264e0:  cmp      w0, #0
00a264e4:  csel     x0, x14, x13, ne
00a264e8:  csel     x13, x13, x14, ne
00a264ec:  add      x14, x2, x3, lsl #5
00a264f0:  add      x17, x2, x0
00a264f4:  ldp      x0, x4, [x16, #8]
00a264f8:  ldp      x6, x5, [x17, #8]
00a264fc:  add      x13, x2, x13
00a26500:  cmp      x5, x4
00a26504:  ldp      x5, x2, [x13, #8]
00a26508:  cset     w3, lo
00a2650c:  cmp      x6, x0
00a26510:  ldp      x4, x0, [x14, #8]
00a26514:  cset     w6, lo
00a26518:  csel     w3, w3, w6, eq
00a2651c:  cmp      x2, x0
00a26520:  cset     w0, lo
00a26524:  cmp      x5, x4
00a26528:  mov      x4, sp
00a2652c:  cset     w2, lo
00a26530:  csel     w0, w0, w2, eq
00a26534:  ldp      x2, x5, [x10, #8]
00a26538:  cmp      w0, #0
00a2653c:  csel     x15, x14, x13, ne
00a26540:  csel     x6, x17, x14, ne
00a26544:  cmp      w3, #0
00a26548:  ldp      x3, x7, [x11, #8]
00a2654c:  csel     x20, x17, x16, ne
00a26550:  csel     x16, x16, x6, ne
00a26554:  csel     x14, x14, x17, ne
00a26558:  cmp      w0, #0
00a2655c:  csel     x13, x13, x14, ne
00a26560:  ldp      x17, x0, [x16, #8]
00a26564:  cmp      x7, x5
00a26568:  cset     w14, lo
00a2656c:  cmp      x3, x2
00a26570:  cset     w12, lo
00a26574:  csel     w12, w14, w12, eq
00a26578:  ldp      x14, x2, [x13, #8]
00a2657c:  cmp      w12, #0
00a26580:  add      x12, x4, x9
00a26584:  csel     x3, x11, x10, ne
00a26588:  csel     x10, x10, x11, ne
00a2658c:  ldp      q0, q1, [x3]
00a26590:  cmp      x2, x0
00a26594:  cset     w11, lo
00a26598:  cmp      x14, x17
00a2659c:  cset     w14, lo
00a265a0:  stp      q0, q1, [sp, #0x20]
00a265a4:  ldp      q0, q2, [x10]
00a265a8:  csel     w10, w11, w14, eq
00a265ac:  cmp      w10, #0
00a265b0:  stp      q0, q2, [sp, #0x40]
00a265b4:  ldp      q0, q1, [x20]
00a265b8:  csel     x10, x13, x16, ne
00a265bc:  csel     x11, x16, x13, ne
00a265c0:  stp      q0, q1, [x12]
00a265c4:  ldp      q2, q0, [x10]
00a265c8:  stp      q2, q0, [x12, #0x20]
00a265cc:  ldp      q1, q2, [x11]
00a265d0:  stp      q1, q2, [x12, #0x40]
00a265d4:  ldp      q1, q0, [x15]
00a265d8:  stp      q1, q0, [x12, #0x60]
00a265dc:  mov      w12, #4
00a265e0:  lsl      x13, x12, #5
00a265e4:  cmp      x12, x8
00a265e8:  sub      x14, x1, x8
00a265ec:  b.lo     #0xa26624
00a265f0:  b        #0xa266dc
00a265f4:  ldp      q0, q1, [x19]
00a265f8:  add      x10, x19, x9
00a265fc:  mov      x11, sp
00a26600:  mov      w12, #1
00a26604:  add      x11, x11, x9
00a26608:  stp      q0, q1, [sp]
00a2660c:  ldp      q2, q0, [x10]
00a26610:  stp      q2, q0, [x11]
00a26614:  lsl      x13, x12, #5
00a26618:  cmp      x12, x8
00a2661c:  sub      x14, x1, x8
00a26620:  b.hs     #0xa266dc
00a26624:  mov      x10, sp
00a26628:  mov      x11, x13
00a2662c:  mov      x15, x12
00a26630:  b        #0xa26658
00a26634:  add      x5, x10, x4
00a26638:  str      x2, [x5]
00a2663c:  add      x2, x10, x3
00a26640:  stp      x17, x16, [x2, #-0x18]
00a26644:  stur     x0, [x2, #-8]
00a26648:  add      x15, x15, #1
00a2664c:  add      x11, x11, #0x20
00a26650:  cmp      x15, x8
00a26654:  b.eq     #0xa266dc
00a26658:  lsl      x16, x15, #5
00a2665c:  add      x17, x19, x16
00a26660:  add      x0, x10, x16
00a26664:  ldp      q1, q0, [x17]
00a26668:  ldp      x3, x2, [x0, #-0x18]
00a2666c:  stp      q1, q0, [x0]
00a26670:  ldp      x17, x16, [x0, #8]
00a26674:  cmp      x16, x2
00a26678:  cset     w2, lo
00a2667c:  cmp      x17, x3
00a26680:  cset     w3, lo
00a26684:  csel     w2, w2, w3, eq
00a26688:  cmp      w2, #1
00a2668c:  b.ne     #0xa26648
00a26690:  ldr      x2, [x0]
00a26694:  ldr      x0, [x0, #0x18]
00a26698:  mov      x4, x11
00a2669c:  mov      x5, sp
00a266a0:  mov      x3, x4
00a266a4:  add      x6, x5, x4
00a266a8:  subs     x4, x4, #0x20
00a266ac:  ldp      q0, q1, [x6, #-0x20]
00a266b0:  stp      q0, q1, [x6]
00a266b4:  b.eq     #0xa26638
00a266b8:  add      x5, x10, x3
00a266bc:  ldp      x5, x6, [x5, #-0x38]
00a266c0:  cmp      x16, x6
00a266c4:  cset     w6, lo
00a266c8:  cmp      x17, x5
00a266cc:  cset     w5, lo
00a266d0:  csel     w5, w6, w5, eq
00a266d4:  tbnz     w5, #0, #0xa2669c
00a266d8:  b        #0xa26634
00a266dc:  mov      x11, sp
00a266e0:  cmp      x12, x14
00a266e4:  add      x10, x11, x9
00a266e8:  b.hs     #0xa267a8
00a266ec:  add      x9, x19, x9
00a266f0:  mov      w15, #0x20
00a266f4:  mov      x16, x10
00a266f8:  b        #0xa26720
00a266fc:  mov      x5, x10
00a26700:  str      x3, [x5]
00a26704:  stp      x0, x17, [x4, #-0x18]
00a26708:  stur     x2, [x4, #-8]
00a2670c:  add      x12, x12, #1
00a26710:  sub      x15, x15, #0x20
00a26714:  add      x16, x16, #0x20
00a26718:  cmp      x12, x14
00a2671c:  b.eq     #0xa267a8
00a26720:  lsl      x17, x12, #5
00a26724:  add      x0, x9, x17
00a26728:  add      x2, x10, x17
00a2672c:  ldp      q1, q0, [x0]
00a26730:  ldp      x4, x3, [x2, #-0x18]
00a26734:  stp      q1, q0, [x2]
00a26738:  ldp      x0, x17, [x2, #8]
00a2673c:  cmp      x17, x3
00a26740:  cset     w3, lo
00a26744:  cmp      x0, x4
00a26748:  cset     w4, lo
00a2674c:  csel     w3, w3, w4, eq
00a26750:  cmp      w3, #1
00a26754:  b.ne     #0xa2670c
00a26758:  ldr      x3, [x2]
00a2675c:  ldr      x2, [x2, #0x18]
00a26760:  mov      x5, x16
00a26764:  mov      x6, x15
00a26768:  add      x4, x5, x13
00a2676c:  cmp      x13, x6
00a26770:  ldp      q0, q1, [x4, #-0x20]
00a26774:  stp      q0, q1, [x4]
00a26778:  b.eq     #0xa266fc
00a2677c:  ldp      x20, x7, [x4, #-0x38]
00a26780:  add      x6, x6, #0x20
00a26784:  sub      x5, x5, #0x20
00a26788:  cmp      x17, x7
00a2678c:  cset     w7, lo
00a26790:  cmp      x0, x20
00a26794:  cset     w20, lo
00a26798:  csel     w7, w7, w20, eq
00a2679c:  tbnz     w7, #0, #0xa26768
00a267a0:  add      x5, x5, x13
00a267a4:  b        #0xa26700
00a267a8:  lsl      x20, x1, #5
00a267ac:  sub      x14, x10, #0x20
00a267b0:  mov      w15, #0x20
00a267b4:  mov      x12, x19
00a267b8:  sub      x13, x20, #0x20
00a267bc:  add      x9, x11, x13
00a267c0:  ldp      x2, x16, [x11, #8]
00a267c4:  sub      x8, x8, #1
00a267c8:  ldp      x0, x17, [x10, #8]
00a267cc:  cmp      x17, x16
00a267d0:  cset     w16, lo
00a267d4:  cmp      x0, x2
00a267d8:  cset     w17, lo
00a267dc:  csel     w16, w16, w17, eq
00a267e0:  ldp      x2, x17, [x14, #8]
00a267e4:  cmp      w16, #0
00a267e8:  ldp      x0, x16, [x9, #8]
00a267ec:  csel     x3, x10, x11, ne
00a267f0:  csel     x4, x15, xzr, ne
00a267f4:  csel     x5, xzr, x15, ne
00a267f8:  ldp      q0, q1, [x3]
00a267fc:  add      x10, x10, x4
00a26800:  cmp      x16, x17
00a26804:  add      x11, x11, x5
00a26808:  cset     w16, lo
00a2680c:  cmp      x0, x2
00a26810:  cset     w17, lo
00a26814:  stp      q0, q1, [x12], #0x20
00a26818:  csel     w16, w16, w17, eq
00a2681c:  add      x17, x19, x13
00a26820:  sub      x13, x13, #0x20
00a26824:  cmp      w16, #0
00a26828:  sbfx     x2, x16, #0, #1
00a2682c:  csel     x0, x14, x9, ne
00a26830:  add      x9, x9, x16, lsl #5
00a26834:  ldp      q2, q0, [x0]
00a26838:  add      x14, x14, x2, lsl #5
00a2683c:  sub      x9, x9, #0x20
00a26840:  stp      q2, q0, [x17]
00a26844:  cbnz     x8, #0xa267c0
00a26848:  add      x8, x14, #0x20
00a2684c:  tbz      w1, #0, #0xa26874
00a26850:  cmp      x11, x8
00a26854:  mov      w14, #0x20
00a26858:  csel     x13, x11, x10, lo
00a2685c:  ldp      q0, q1, [x13]
00a26860:  csel     x13, x14, xzr, lo
00a26864:  csel     x14, xzr, x14, lo
00a26868:  add      x11, x11, x13
00a2686c:  add      x10, x10, x14
00a26870:  stp      q0, q1, [x12]
00a26874:  cmp      x11, x8
00a26878:  b.ne     #0xa2689c
00a2687c:  add      x8, x9, #0x20
00a26880:  cmp      x10, x8
00a26884:  b.ne     #0xa2689c
00a26888:  add      sp, sp, #0x600
00a2688c:  ldp      x20, x19, [sp, #0x20]
00a26890:  ldp      x28, x21, [sp, #0x10]
00a26894:  ldp      x29, x30, [sp], #0x30
00a26898:  ret      
00a2689c:  bl       #0xabb3f0

; ===== 00a268c0  FUN_00a268c0  (1152 bytes) =====
00a268c0:  stp      x29, x30, [sp, #-0x30]!
00a268c4:  str      x28, [sp, #0x10]
00a268c8:  stp      x20, x19, [sp, #0x20]
00a268cc:  mov      x29, sp
00a268d0:  sub      sp, sp, #0x490
00a268d4:  cmp      x1, #2
00a268d8:  str      xzr, [sp]
00a268dc:  b.lo     #0xa26d28
00a268e0:  lsr      x8, x1, #1
00a268e4:  mov      x20, x1
00a268e8:  mov      x19, x0
00a268ec:  cmp      x1, #8
00a268f0:  add      x9, x8, x8, lsl #1
00a268f4:  b.lo     #0xa26aac
00a268f8:  ldr      x11, [x19, #0x18]
00a268fc:  ldr      x12, [x19]
00a26900:  mov      w10, #0x18
00a26904:  ldr      x13, [x19, #0x48]
00a26908:  ldr      x14, [x19, #0x30]
00a2690c:  cmp      x11, x12
00a26910:  mov      w11, #0x30
00a26914:  mov      w12, #0x48
00a26918:  cset     w15, hs
00a2691c:  cset     w16, lo
00a26920:  cmp      x13, x14
00a26924:  umaddl   x14, w15, w10, x19
00a26928:  csel     x13, x11, x12, lo
00a2692c:  umaddl   x15, w16, w10, x19
00a26930:  csel     x16, x12, x11, lo
00a26934:  add      x17, x19, x13
00a26938:  add      x16, x19, x16
00a2693c:  ldr      x0, [x17]
00a26940:  ldr      x1, [x14]
00a26944:  ldr      x13, [x16]
00a26948:  ldr      x2, [x15]
00a2694c:  cmp      x0, x1
00a26950:  csel     x3, x16, x14, lo
00a26954:  cmp      x13, x2
00a26958:  lsl      x13, x9, #3
00a2695c:  csel     x2, x16, x15, lo
00a26960:  csel     x15, x15, x3, lo
00a26964:  csel     x16, x14, x16, lo
00a26968:  cmp      x0, x1
00a2696c:  add      x0, x19, x13
00a26970:  ldr      x1, [x15]
00a26974:  csel     x16, x17, x16, lo
00a26978:  ldr      x4, [x0, #0x18]
00a2697c:  ldr      x5, [x0]
00a26980:  ldr      x3, [x16]
00a26984:  csel     x17, x14, x17, lo
00a26988:  ldr      q0, [x2]
00a2698c:  cmp      x3, x1
00a26990:  ldr      x1, [x0, #0x48]
00a26994:  str      q0, [sp]
00a26998:  csel     x3, x16, x15, lo
00a2699c:  csel     x14, x15, x16, lo
00a269a0:  ldr      x15, [x0, #0x30]
00a269a4:  cmp      x4, x5
00a269a8:  ldr      q0, [x17]
00a269ac:  ldr      x17, [x17, #0x10]
00a269b0:  cset     w16, hs
00a269b4:  cset     w4, lo
00a269b8:  cmp      x1, x15
00a269bc:  umaddl   x15, w16, w10, x0
00a269c0:  csel     x1, x11, x12, lo
00a269c4:  ldr      x16, [x2, #0x10]
00a269c8:  umaddl   x10, w4, w10, x0
00a269cc:  add      x1, x0, x1
00a269d0:  csel     x11, x12, x11, lo
00a269d4:  ldr      x12, [x1]
00a269d8:  add      x11, x0, x11
00a269dc:  str      x16, [sp, #0x10]
00a269e0:  ldr      x2, [x15]
00a269e4:  ldr      x16, [x11]
00a269e8:  stur     q0, [sp, #0x48]
00a269ec:  ldr      x0, [x10]
00a269f0:  str      x17, [sp, #0x58]
00a269f4:  ldr      x17, [x3, #0x10]
00a269f8:  cmp      x12, x2
00a269fc:  ldr      q0, [x3]
00a26a00:  csel     x4, x11, x15, lo
00a26a04:  cmp      x16, x0
00a26a08:  str      x17, [sp, #0x28]
00a26a0c:  csel     x0, x11, x10, lo
00a26a10:  csel     x10, x10, x4, lo
00a26a14:  csel     x11, x15, x11, lo
00a26a18:  cmp      x12, x2
00a26a1c:  stur     q0, [sp, #0x18]
00a26a20:  ldr      q0, [x14]
00a26a24:  csel     x11, x1, x11, lo
00a26a28:  ldr      x12, [x10]
00a26a2c:  ldr      x14, [x14, #0x10]
00a26a30:  ldr      x17, [x11]
00a26a34:  mov      x16, sp
00a26a38:  str      q0, [sp, #0x30]
00a26a3c:  csel     x15, x15, x1, lo
00a26a40:  ldr      q0, [x0]
00a26a44:  add      x13, x16, x13
00a26a48:  cmp      x17, x12
00a26a4c:  str      x14, [sp, #0x40]
00a26a50:  ldr      x12, [x0, #0x10]
00a26a54:  csel     x14, x11, x10, lo
00a26a58:  str      q0, [x13]
00a26a5c:  csel     x10, x10, x11, lo
00a26a60:  ldr      q0, [x14]
00a26a64:  ldr      x16, [x15, #0x10]
00a26a68:  ldr      x11, [x14, #0x10]
00a26a6c:  str      x12, [x13, #0x10]
00a26a70:  stur     q0, [x13, #0x18]
00a26a74:  ldr      q0, [x10]
00a26a78:  ldr      x10, [x10, #0x10]
00a26a7c:  str      x16, [x13, #0x58]
00a26a80:  str      q0, [x13, #0x30]
00a26a84:  ldr      q0, [x15]
00a26a88:  str      x11, [x13, #0x28]
00a26a8c:  mov      w11, #4
00a26a90:  str      x10, [x13, #0x40]
00a26a94:  stur     q0, [x13, #0x48]
00a26a98:  add      x13, x11, x11, lsl #1
00a26a9c:  cmp      x11, x8
00a26aa0:  sub      x12, x20, x8
00a26aa4:  b.lo     #0xa26af0
00a26aa8:  b        #0xa26b94
00a26aac:  lsl      x10, x9, #3
00a26ab0:  ldr      x11, [x19, #0x10]
00a26ab4:  ldr      q0, [x19]
00a26ab8:  mov      x13, sp
00a26abc:  add      x12, x19, x10
00a26ac0:  str      x11, [sp, #0x10]
00a26ac4:  add      x10, x13, x10
00a26ac8:  ldr      x11, [x12, #0x10]
00a26acc:  str      q0, [sp]
00a26ad0:  ldr      q0, [x12]
00a26ad4:  str      x11, [x10, #0x10]
00a26ad8:  mov      w11, #1
00a26adc:  str      q0, [x10]
00a26ae0:  add      x13, x11, x11, lsl #1
00a26ae4:  cmp      x11, x8
00a26ae8:  sub      x12, x20, x8
00a26aec:  b.hs     #0xa26b94
00a26af0:  lsl      x10, x13, #3
00a26af4:  mov      x14, sp
00a26af8:  mov      x15, x11
00a26afc:  b        #0xa26b20
00a26b00:  add      x17, x14, x1
00a26b04:  ldur     q0, [x29, #-0x10]
00a26b08:  str      x16, [x17]
00a26b0c:  stur     q0, [x17, #8]
00a26b10:  add      x15, x15, #1
00a26b14:  add      x10, x10, #0x18
00a26b18:  cmp      x15, x8
00a26b1c:  b.eq     #0xa26b94
00a26b20:  add      x16, x15, x15, lsl #1
00a26b24:  lsl      x16, x16, #3
00a26b28:  add      x17, x19, x16
00a26b2c:  add      x0, x14, x16
00a26b30:  ldr      q0, [x17]
00a26b34:  ldur     x1, [x0, #-0x18]
00a26b38:  ldr      x2, [x17, #0x10]
00a26b3c:  str      q0, [x0]
00a26b40:  ldr      x16, [x0]
00a26b44:  str      x2, [x0, #0x10]
00a26b48:  cmp      x16, x1
00a26b4c:  b.hs     #0xa26b10
00a26b50:  ldur     q0, [x17, #8]
00a26b54:  mov      x0, x10
00a26b58:  stur     q0, [x29, #-0x10]
00a26b5c:  mov      x17, sp
00a26b60:  subs     x1, x0, #0x18
00a26b64:  add      x2, x17, x0
00a26b68:  ldur     q0, [x2, #-0x18]
00a26b6c:  ldur     x3, [x2, #-8]
00a26b70:  str      q0, [x2]
00a26b74:  str      x3, [x2, #0x10]
00a26b78:  b.eq     #0xa26b04
00a26b7c:  add      x17, x14, x0
00a26b80:  mov      x0, x1
00a26b84:  ldur     x17, [x17, #-0x30]
00a26b88:  cmp      x16, x17
00a26b8c:  b.lo     #0xa26b5c
00a26b90:  b        #0xa26b00
00a26b94:  lsl      x14, x9, #3
00a26b98:  mov      x10, sp
00a26b9c:  cmp      x11, x12
00a26ba0:  add      x9, x10, x14
00a26ba4:  b.hs     #0xa26c58
00a26ba8:  lsl      x13, x13, #3
00a26bac:  add      x14, x19, x14
00a26bb0:  mov      w15, #0x18
00a26bb4:  mov      x16, x9
00a26bb8:  b        #0xa26be0
00a26bbc:  mov      x0, x9
00a26bc0:  ldur     q0, [x29, #-0x10]
00a26bc4:  str      x17, [x0]
00a26bc8:  stur     q0, [x0, #8]
00a26bcc:  add      x11, x11, #1
00a26bd0:  add      x16, x16, #0x18
00a26bd4:  sub      x15, x15, #0x18
00a26bd8:  cmp      x11, x12
00a26bdc:  b.eq     #0xa26c58
00a26be0:  add      x17, x11, x11, lsl #1
00a26be4:  lsl      x17, x17, #3
00a26be8:  add      x0, x14, x17
00a26bec:  add      x1, x9, x17
00a26bf0:  ldr      q0, [x0]
00a26bf4:  ldur     x2, [x1, #-0x18]
00a26bf8:  ldr      x3, [x0, #0x10]
00a26bfc:  str      q0, [x1]
00a26c00:  ldr      x17, [x1]
00a26c04:  str      x3, [x1, #0x10]
00a26c08:  cmp      x17, x2
00a26c0c:  b.hs     #0xa26bcc
00a26c10:  ldur     q0, [x0, #8]
00a26c14:  mov      x1, x15
00a26c18:  mov      x0, x16
00a26c1c:  stur     q0, [x29, #-0x10]
00a26c20:  add      x2, x0, x13
00a26c24:  cmp      x13, x1
00a26c28:  ldur     q0, [x2, #-0x18]
00a26c2c:  ldur     x3, [x2, #-8]
00a26c30:  str      q0, [x2]
00a26c34:  str      x3, [x2, #0x10]
00a26c38:  b.eq     #0xa26bbc
00a26c3c:  ldur     x2, [x2, #-0x30]
00a26c40:  sub      x0, x0, #0x18
00a26c44:  add      x1, x1, #0x18
00a26c48:  cmp      x17, x2
00a26c4c:  b.lo     #0xa26c20
00a26c50:  add      x0, x0, x13
00a26c54:  b        #0xa26bc0
00a26c58:  mov      w13, #0x18
00a26c5c:  mov      x11, #-0x18
00a26c60:  sub      x15, x9, #0x18
00a26c64:  madd     x14, x20, x13, x11
00a26c68:  mov      x12, x19
00a26c6c:  add      x11, x10, x14
00a26c70:  ldr      x16, [x9]
00a26c74:  ldr      x17, [x10]
00a26c78:  sub      x8, x8, #1
00a26c7c:  ldr      x0, [x11]
00a26c80:  ldr      x1, [x15]
00a26c84:  cmp      x16, x17
00a26c88:  csel     x16, x9, x10, lo
00a26c8c:  csel     x17, x13, xzr, lo
00a26c90:  csel     x2, xzr, x13, lo
00a26c94:  cmp      x0, x1
00a26c98:  ldr      q0, [x16]
00a26c9c:  add      x9, x9, x17
00a26ca0:  csetm    x0, hs
00a26ca4:  csel     x1, x15, x11, lo
00a26ca8:  add      x10, x10, x2
00a26cac:  madd     x11, x0, x13, x11
00a26cb0:  ldr      x0, [x16, #0x10]
00a26cb4:  csetm    x16, lo
00a26cb8:  ldr      x17, [x1, #0x10]
00a26cbc:  madd     x15, x16, x13, x15
00a26cc0:  str      x0, [x12, #0x10]
00a26cc4:  add      x16, x19, x14
00a26cc8:  str      q0, [x12], #0x18
00a26ccc:  ldr      q0, [x1]
00a26cd0:  sub      x14, x14, #0x18
00a26cd4:  str      x17, [x16, #0x10]
00a26cd8:  str      q0, [x16]
00a26cdc:  cbnz     x8, #0xa26c70
00a26ce0:  add      x8, x15, #0x18
00a26ce4:  tbz      w20, #0, #0xa26d14
00a26ce8:  cmp      x10, x8
00a26cec:  mov      w14, #0x18
00a26cf0:  csel     x13, x10, x9, lo
00a26cf4:  csel     x15, x14, xzr, lo
00a26cf8:  csel     x14, xzr, x14, lo
00a26cfc:  ldr      q0, [x13]
00a26d00:  ldr      x13, [x13, #0x10]
00a26d04:  add      x10, x10, x15
00a26d08:  add      x9, x9, x14
00a26d0c:  str      q0, [x12]
00a26d10:  str      x13, [x12, #0x10]
00a26d14:  cmp      x10, x8
00a26d18:  b.ne     #0xa26d3c
00a26d1c:  add      x8, x11, #0x18
00a26d20:  cmp      x9, x8
00a26d24:  b.ne     #0xa26d3c
00a26d28:  add      sp, sp, #0x490
00a26d2c:  ldp      x20, x19, [sp, #0x20]
00a26d30:  ldr      x28, [sp, #0x10]
00a26d34:  ldp      x29, x30, [sp], #0x30
00a26d38:  ret      
00a26d3c:  bl       #0xabb3f0

; ===== 00a26d64  FUN_00a26d64  (904 bytes) =====
00a26d64:  stp      x29, x30, [sp, #-0x40]!
00a26d68:  stp      x28, x23, [sp, #0x10]
00a26d6c:  stp      x22, x21, [sp, #0x20]
00a26d70:  stp      x20, x19, [sp, #0x30]
00a26d74:  mov      x29, sp
00a26d78:  sub      sp, sp, #0x600
00a26d7c:  cmp      x1, #2
00a26d80:  str      xzr, [sp]
00a26d84:  b.lo     #0xa270d0
00a26d88:  lsr      x22, x1, #1
00a26d8c:  mov      x9, sp
00a26d90:  mov      x19, x0
00a26d94:  cmp      x1, #8
00a26d98:  lsl      x8, x22, #5
00a26d9c:  add      x21, x0, x8
00a26da0:  add      x20, x9, x8
00a26da4:  b.lo     #0xa26de0
00a26da8:  mov      x23, x1
00a26dac:  mov      x1, sp
00a26db0:  mov      x0, x19
00a26db4:  bl       #0xa25b70
00a26db8:  mov      x0, x21
00a26dbc:  mov      x1, x20
00a26dc0:  bl       #0xa25b70
00a26dc4:  mov      x1, x23
00a26dc8:  mov      w8, #4
00a26dcc:  lsl      x9, x8, #5
00a26dd0:  cmp      x8, x22
00a26dd4:  sub      x10, x23, x22
00a26dd8:  b.lo     #0xa26e04
00a26ddc:  b        #0xa26ed0
00a26de0:  ldp      q0, q1, [x19]
00a26de4:  mov      w8, #1
00a26de8:  stp      q0, q1, [sp]
00a26dec:  ldp      q0, q2, [x21]
00a26df0:  stp      q0, q2, [x20]
00a26df4:  lsl      x9, x8, #5
00a26df8:  cmp      x8, x22
00a26dfc:  sub      x10, x1, x22
00a26e00:  b.hs     #0xa26ed0
00a26e04:  mov      x11, sp
00a26e08:  mov      x12, x9
00a26e0c:  mov      x13, x8
00a26e10:  b        #0xa26e30
00a26e14:  mov      x0, sp
00a26e18:  stp      x15, x16, [x0]
00a26e1c:  stp      x14, x17, [x0, #0x10]
00a26e20:  add      x13, x13, #1
00a26e24:  add      x12, x12, #0x20
00a26e28:  cmp      x13, x22
00a26e2c:  b.eq     #0xa26ed0
00a26e30:  lsl      x14, x13, #5
00a26e34:  add      x15, x19, x14
00a26e38:  add      x2, x11, x14
00a26e3c:  ldp      q1, q0, [x15]
00a26e40:  ldur     x16, [x2, #-0x10]
00a26e44:  sub      x0, x2, #0x20
00a26e48:  stp      q1, q0, [x2]
00a26e4c:  ldr      x14, [x2, #0x10]
00a26e50:  ldr      x15, [x2]
00a26e54:  cmp      x14, x16
00a26e58:  b.lo     #0xa26e6c
00a26e5c:  b.hi     #0xa26e20
00a26e60:  ldr      x16, [x0]
00a26e64:  cmp      x15, x16
00a26e68:  b.hs     #0xa26e20
00a26e6c:  ldp      q0, q1, [x0]
00a26e70:  cmp      x13, #1
00a26e74:  ldr      x16, [x2, #8]
00a26e78:  ldr      x17, [x2, #0x18]
00a26e7c:  stp      q0, q1, [x2]
00a26e80:  b.eq     #0xa26e18
00a26e84:  mov      x0, x12
00a26e88:  b        #0xa26ea0
00a26e8c:  ldp      q0, q1, [x3]
00a26e90:  sub      x0, x0, #0x20
00a26e94:  cmp      x0, #0x20
00a26e98:  stp      q0, q1, [x2, #-0x20]!
00a26e9c:  b.eq     #0xa26e14
00a26ea0:  add      x2, x11, x0
00a26ea4:  ldur     x3, [x2, #-0x30]
00a26ea8:  cmp      x14, x3
00a26eac:  sub      x3, x2, #0x40
00a26eb0:  b.lo     #0xa26e8c
00a26eb4:  b.hi     #0xa26ec4
00a26eb8:  ldr      x4, [x3]
00a26ebc:  cmp      x15, x4
00a26ec0:  b.lo     #0xa26e8c
00a26ec4:  add      x0, x11, x0
00a26ec8:  sub      x0, x0, #0x20
00a26ecc:  b        #0xa26e18
00a26ed0:  cmp      x8, x10
00a26ed4:  b.hs     #0xa26fac
00a26ed8:  mov      w11, #0x20
00a26edc:  mov      x12, x20
00a26ee0:  b        #0xa26f04
00a26ee4:  mov      x17, x20
00a26ee8:  stp      x14, x15, [x17]
00a26eec:  stp      x13, x16, [x17, #0x10]
00a26ef0:  add      x8, x8, #1
00a26ef4:  add      x12, x12, #0x20
00a26ef8:  sub      x11, x11, #0x20
00a26efc:  cmp      x8, x10
00a26f00:  b.eq     #0xa26fac
00a26f04:  lsl      x13, x8, #5
00a26f08:  add      x14, x21, x13
00a26f0c:  add      x0, x20, x13
00a26f10:  ldp      q1, q0, [x14]
00a26f14:  ldur     x15, [x0, #-0x10]
00a26f18:  sub      x17, x0, #0x20
00a26f1c:  stp      q1, q0, [x0]
00a26f20:  ldr      x13, [x0, #0x10]
00a26f24:  ldr      x14, [x0]
00a26f28:  cmp      x13, x15
00a26f2c:  b.lo     #0xa26f40
00a26f30:  b.hi     #0xa26ef0
00a26f34:  ldr      x15, [x17]
00a26f38:  cmp      x14, x15
00a26f3c:  b.hs     #0xa26ef0
00a26f40:  ldp      q0, q1, [x17]
00a26f44:  cmp      x8, #1
00a26f48:  ldr      x15, [x0, #8]
00a26f4c:  ldr      x16, [x0, #0x18]
00a26f50:  stp      q0, q1, [x0]
00a26f54:  b.eq     #0xa26ee8
00a26f58:  mov      x0, x11
00a26f5c:  mov      x17, x12
00a26f60:  b        #0xa26f7c
00a26f64:  ldp      q0, q1, [x3]
00a26f68:  add      x0, x0, #0x20
00a26f6c:  cmp      x9, x0
00a26f70:  sub      x17, x17, #0x20
00a26f74:  stp      q0, q1, [x2, #-0x20]!
00a26f78:  b.eq     #0xa26ee4
00a26f7c:  add      x2, x17, x9
00a26f80:  ldur     x3, [x2, #-0x30]
00a26f84:  cmp      x13, x3
00a26f88:  sub      x3, x2, #0x40
00a26f8c:  b.lo     #0xa26f64
00a26f90:  b.hi     #0xa26fa0
00a26f94:  ldr      x4, [x3]
00a26f98:  cmp      x14, x4
00a26f9c:  b.lo     #0xa26f64
00a26fa0:  add      x17, x17, x9
00a26fa4:  sub      x17, x17, #0x20
00a26fa8:  b        #0xa26ee8
00a26fac:  lsl      x21, x1, #5
00a26fb0:  mov      x8, sp
00a26fb4:  sub      x12, x20, #0x20
00a26fb8:  mov      w13, #0x20
00a26fbc:  mov      x10, x19
00a26fc0:  sub      x11, x21, #0x20
00a26fc4:  add      x9, x8, x11
00a26fc8:  b        #0xa2701c
00a26fcc:  ldr      x16, [x12]
00a26fd0:  ldr      x17, [x9]
00a26fd4:  cmp      x14, x15
00a26fd8:  cset     w14, ls
00a26fdc:  cmp      x17, x16
00a26fe0:  cset     w15, lo
00a26fe4:  ands     w14, w14, w15
00a26fe8:  csel     x15, x12, x9, ne
00a26fec:  ldp      q0, q1, [x15]
00a26ff0:  and      x15, x14, #1
00a26ff4:  sbfx     x14, x14, #0, #1
00a26ff8:  add      x9, x9, x15, lsl #5
00a26ffc:  add      x16, x19, x11
00a27000:  add      x10, x10, #0x20
00a27004:  sub      x22, x22, #1
00a27008:  sub      x11, x11, #0x20
00a2700c:  add      x12, x12, x14, lsl #5
00a27010:  sub      x9, x9, #0x20
00a27014:  stp      q0, q1, [x16]
00a27018:  cbz      x22, #0xa27090
00a2701c:  ldr      x14, [x20, #0x10]
00a27020:  ldr      x15, [x8, #0x10]
00a27024:  cmp      x14, x15
00a27028:  b.hs     #0xa27048
00a2702c:  ldp      q1, q0, [x20], #0x20
00a27030:  stp      q1, q0, [x10]
00a27034:  ldr      x14, [x9, #0x10]
00a27038:  ldr      x15, [x12, #0x10]
00a2703c:  cmp      x14, x15
00a27040:  b.hs     #0xa26fcc
00a27044:  b        #0xa27084
00a27048:  ldr      x16, [x8]
00a2704c:  ldr      x17, [x20]
00a27050:  cmp      x14, x15
00a27054:  ccmp     x17, x16, #2, ls
00a27058:  csel     x14, x20, x8, lo
00a2705c:  csel     x15, xzr, x13, lo
00a27060:  ldp      q1, q0, [x14]
00a27064:  csel     x14, x13, xzr, lo
00a27068:  add      x20, x20, x14
00a2706c:  add      x8, x8, x15
00a27070:  stp      q1, q0, [x10]
00a27074:  ldr      x14, [x9, #0x10]
00a27078:  ldr      x15, [x12, #0x10]
00a2707c:  cmp      x14, x15
00a27080:  b.hs     #0xa26fcc
00a27084:  mov      w14, #1
00a27088:  mov      x15, x12
00a2708c:  b        #0xa26fec
00a27090:  add      x11, x12, #0x20
00a27094:  tbz      w1, #0, #0xa270bc
00a27098:  cmp      x8, x11
00a2709c:  csel     x12, x8, x20, lo
00a270a0:  ldp      q1, q0, [x12]
00a270a4:  mov      w12, #0x20
00a270a8:  csel     x13, x12, xzr, lo
00a270ac:  csel     x12, xzr, x12, lo
00a270b0:  add      x8, x8, x13
00a270b4:  add      x20, x20, x12
00a270b8:  stp      q1, q0, [x10]
00a270bc:  cmp      x8, x11
00a270c0:  b.ne     #0xa270e8
00a270c4:  add      x8, x9, #0x20
00a270c8:  cmp      x20, x8
00a270cc:  b.ne     #0xa270e8
00a270d0:  add      sp, sp, #0x600
00a270d4:  ldp      x20, x19, [sp, #0x30]
00a270d8:  ldp      x22, x21, [sp, #0x20]
00a270dc:  ldp      x28, x23, [sp, #0x10]
00a270e0:  ldp      x29, x30, [sp], #0x40
00a270e4:  ret      
00a270e8:  bl       #0xabb3f0

; ===== 00a2710c  FUN_00a2710c  (1152 bytes) =====
00a2710c:  stp      x29, x30, [sp, #-0x30]!
00a27110:  str      x28, [sp, #0x10]
00a27114:  stp      x20, x19, [sp, #0x20]
00a27118:  mov      x29, sp
00a2711c:  sub      sp, sp, #0x490
00a27120:  cmp      x1, #2
00a27124:  str      xzr, [sp]
00a27128:  b.lo     #0xa27574
00a2712c:  lsr      x8, x1, #1
00a27130:  mov      x20, x1
00a27134:  mov      x19, x0
00a27138:  cmp      x1, #8
00a2713c:  add      x9, x8, x8, lsl #1
00a27140:  b.lo     #0xa272f8
00a27144:  ldr      x11, [x19, #0x18]
00a27148:  ldr      x12, [x19]
00a2714c:  mov      w10, #0x18
00a27150:  ldr      x13, [x19, #0x48]
00a27154:  ldr      x14, [x19, #0x30]
00a27158:  cmp      x11, x12
00a2715c:  mov      w11, #0x30
00a27160:  mov      w12, #0x48
00a27164:  cset     w15, hs
00a27168:  cset     w16, lo
00a2716c:  cmp      x13, x14
00a27170:  umaddl   x14, w15, w10, x19
00a27174:  csel     x13, x11, x12, lo
00a27178:  umaddl   x15, w16, w10, x19
00a2717c:  csel     x16, x12, x11, lo
00a27180:  add      x17, x19, x13
00a27184:  add      x16, x19, x16
00a27188:  ldr      x0, [x17]
00a2718c:  ldr      x1, [x14]
00a27190:  ldr      x13, [x16]
00a27194:  ldr      x2, [x15]
00a27198:  cmp      x0, x1
00a2719c:  csel     x3, x16, x14, lo
00a271a0:  cmp      x13, x2
00a271a4:  lsl      x13, x9, #3
00a271a8:  csel     x2, x16, x15, lo
00a271ac:  csel     x15, x15, x3, lo
00a271b0:  csel     x16, x14, x16, lo
00a271b4:  cmp      x0, x1
00a271b8:  add      x0, x19, x13
00a271bc:  ldr      x1, [x15]
00a271c0:  csel     x16, x17, x16, lo
00a271c4:  ldr      x4, [x0, #0x18]
00a271c8:  ldr      x5, [x0]
00a271cc:  ldr      x3, [x16]
00a271d0:  csel     x17, x14, x17, lo
00a271d4:  ldr      q0, [x2]
00a271d8:  cmp      x3, x1
00a271dc:  ldr      x1, [x0, #0x48]
00a271e0:  str      q0, [sp]
00a271e4:  csel     x3, x16, x15, lo
00a271e8:  csel     x14, x15, x16, lo
00a271ec:  ldr      x15, [x0, #0x30]
00a271f0:  cmp      x4, x5
00a271f4:  ldr      q0, [x17]
00a271f8:  ldr      x17, [x17, #0x10]
00a271fc:  cset     w16, hs
00a27200:  cset     w4, lo
00a27204:  cmp      x1, x15
00a27208:  umaddl   x15, w16, w10, x0
00a2720c:  csel     x1, x11, x12, lo
00a27210:  ldr      x16, [x2, #0x10]
00a27214:  umaddl   x10, w4, w10, x0
00a27218:  add      x1, x0, x1
00a2721c:  csel     x11, x12, x11, lo
00a27220:  ldr      x12, [x1]
00a27224:  add      x11, x0, x11
00a27228:  str      x16, [sp, #0x10]
00a2722c:  ldr      x2, [x15]
00a27230:  ldr      x16, [x11]
00a27234:  stur     q0, [sp, #0x48]
00a27238:  ldr      x0, [x10]
00a2723c:  str      x17, [sp, #0x58]
00a27240:  ldr      x17, [x3, #0x10]
00a27244:  cmp      x12, x2
00a27248:  ldr      q0, [x3]
00a2724c:  csel     x4, x11, x15, lo
00a27250:  cmp      x16, x0
00a27254:  str      x17, [sp, #0x28]
00a27258:  csel     x0, x11, x10, lo
00a2725c:  csel     x10, x10, x4, lo
00a27260:  csel     x11, x15, x11, lo
00a27264:  cmp      x12, x2
00a27268:  stur     q0, [sp, #0x18]
00a2726c:  ldr      q0, [x14]
00a27270:  csel     x11, x1, x11, lo
00a27274:  ldr      x12, [x10]
00a27278:  ldr      x14, [x14, #0x10]
00a2727c:  ldr      x17, [x11]
00a27280:  mov      x16, sp
00a27284:  str      q0, [sp, #0x30]
00a27288:  csel     x15, x15, x1, lo
00a2728c:  ldr      q0, [x0]
00a27290:  add      x13, x16, x13
00a27294:  cmp      x17, x12
00a27298:  str      x14, [sp, #0x40]
00a2729c:  ldr      x12, [x0, #0x10]
00a272a0:  csel     x14, x11, x10, lo
00a272a4:  str      q0, [x13]
00a272a8:  csel     x10, x10, x11, lo
00a272ac:  ldr      q0, [x14]
00a272b0:  ldr      x16, [x15, #0x10]
00a272b4:  ldr      x11, [x14, #0x10]
00a272b8:  str      x12, [x13, #0x10]
00a272bc:  stur     q0, [x13, #0x18]
00a272c0:  ldr      q0, [x10]
00a272c4:  ldr      x10, [x10, #0x10]
00a272c8:  str      x16, [x13, #0x58]
00a272cc:  str      q0, [x13, #0x30]
00a272d0:  ldr      q0, [x15]
00a272d4:  str      x11, [x13, #0x28]
00a272d8:  mov      w11, #4
00a272dc:  str      x10, [x13, #0x40]
00a272e0:  stur     q0, [x13, #0x48]
00a272e4:  add      x13, x11, x11, lsl #1
00a272e8:  cmp      x11, x8
00a272ec:  sub      x12, x20, x8
00a272f0:  b.lo     #0xa2733c
00a272f4:  b        #0xa273e0
00a272f8:  lsl      x10, x9, #3
00a272fc:  ldr      x11, [x19, #0x10]
00a27300:  ldr      q0, [x19]
00a27304:  mov      x13, sp
00a27308:  add      x12, x19, x10
00a2730c:  str      x11, [sp, #0x10]
00a27310:  add      x10, x13, x10
00a27314:  ldr      x11, [x12, #0x10]
00a27318:  str      q0, [sp]
00a2731c:  ldr      q0, [x12]
00a27320:  str      x11, [x10, #0x10]
00a27324:  mov      w11, #1
00a27328:  str      q0, [x10]
00a2732c:  add      x13, x11, x11, lsl #1
00a27330:  cmp      x11, x8
00a27334:  sub      x12, x20, x8
00a27338:  b.hs     #0xa273e0
00a2733c:  lsl      x10, x13, #3
00a27340:  mov      x14, sp
00a27344:  mov      x15, x11
00a27348:  b        #0xa2736c
00a2734c:  add      x17, x14, x1
00a27350:  ldur     q0, [x29, #-0x10]
00a27354:  str      x16, [x17]
00a27358:  stur     q0, [x17, #8]
00a2735c:  add      x15, x15, #1
00a27360:  add      x10, x10, #0x18
00a27364:  cmp      x15, x8
00a27368:  b.eq     #0xa273e0
00a2736c:  add      x16, x15, x15, lsl #1
00a27370:  lsl      x16, x16, #3
00a27374:  add      x17, x19, x16
00a27378:  add      x0, x14, x16
00a2737c:  ldr      q0, [x17]
00a27380:  ldur     x1, [x0, #-0x18]
00a27384:  ldr      x2, [x17, #0x10]
00a27388:  str      q0, [x0]
00a2738c:  ldr      x16, [x0]
00a27390:  str      x2, [x0, #0x10]
00a27394:  cmp      x16, x1
00a27398:  b.hs     #0xa2735c
00a2739c:  ldur     q0, [x17, #8]
00a273a0:  mov      x0, x10
00a273a4:  stur     q0, [x29, #-0x10]
00a273a8:  mov      x17, sp
00a273ac:  subs     x1, x0, #0x18
00a273b0:  add      x2, x17, x0
00a273b4:  ldur     q0, [x2, #-0x18]
00a273b8:  ldur     x3, [x2, #-8]
00a273bc:  str      q0, [x2]
00a273c0:  str      x3, [x2, #0x10]
00a273c4:  b.eq     #0xa27350
00a273c8:  add      x17, x14, x0
00a273cc:  mov      x0, x1
00a273d0:  ldur     x17, [x17, #-0x30]
00a273d4:  cmp      x16, x17
00a273d8:  b.lo     #0xa273a8
00a273dc:  b        #0xa2734c
00a273e0:  lsl      x14, x9, #3
00a273e4:  mov      x10, sp
00a273e8:  cmp      x11, x12
00a273ec:  add      x9, x10, x14
00a273f0:  b.hs     #0xa274a4
00a273f4:  lsl      x13, x13, #3
00a273f8:  add      x14, x19, x14
00a273fc:  mov      w15, #0x18
00a27400:  mov      x16, x9
00a27404:  b        #0xa2742c
00a27408:  mov      x0, x9
00a2740c:  ldur     q0, [x29, #-0x10]
00a27410:  str      x17, [x0]
00a27414:  stur     q0, [x0, #8]
00a27418:  add      x11, x11, #1
00a2741c:  add      x16, x16, #0x18
00a27420:  sub      x15, x15, #0x18
00a27424:  cmp      x11, x12
00a27428:  b.eq     #0xa274a4
00a2742c:  add      x17, x11, x11, lsl #1
00a27430:  lsl      x17, x17, #3
00a27434:  add      x0, x14, x17
00a27438:  add      x1, x9, x17
00a2743c:  ldr      q0, [x0]
00a27440:  ldur     x2, [x1, #-0x18]
00a27444:  ldr      x3, [x0, #0x10]
00a27448:  str      q0, [x1]
00a2744c:  ldr      x17, [x1]
00a27450:  str      x3, [x1, #0x10]
00a27454:  cmp      x17, x2
00a27458:  b.hs     #0xa27418
00a2745c:  ldur     q0, [x0, #8]
00a27460:  mov      x1, x15
00a27464:  mov      x0, x16
00a27468:  stur     q0, [x29, #-0x10]
00a2746c:  add      x2, x0, x13
00a27470:  cmp      x13, x1
00a27474:  ldur     q0, [x2, #-0x18]
00a27478:  ldur     x3, [x2, #-8]
00a2747c:  str      q0, [x2]
00a27480:  str      x3, [x2, #0x10]
00a27484:  b.eq     #0xa27408
00a27488:  ldur     x2, [x2, #-0x30]
00a2748c:  sub      x0, x0, #0x18
00a27490:  add      x1, x1, #0x18
00a27494:  cmp      x17, x2
00a27498:  b.lo     #0xa2746c
00a2749c:  add      x0, x0, x13
00a274a0:  b        #0xa2740c
00a274a4:  mov      w13, #0x18
00a274a8:  mov      x11, #-0x18
00a274ac:  sub      x15, x9, #0x18
00a274b0:  madd     x14, x20, x13, x11
00a274b4:  mov      x12, x19
00a274b8:  add      x11, x10, x14
00a274bc:  ldr      x16, [x9]
00a274c0:  ldr      x17, [x10]
00a274c4:  sub      x8, x8, #1
00a274c8:  ldr      x0, [x11]
00a274cc:  ldr      x1, [x15]
00a274d0:  cmp      x16, x17
00a274d4:  csel     x16, x9, x10, lo
00a274d8:  csel     x17, x13, xzr, lo
00a274dc:  csel     x2, xzr, x13, lo
00a274e0:  cmp      x0, x1
00a274e4:  ldr      q0, [x16]
00a274e8:  add      x9, x9, x17
00a274ec:  csetm    x0, hs
00a274f0:  csel     x1, x15, x11, lo
00a274f4:  add      x10, x10, x2
00a274f8:  madd     x11, x0, x13, x11
00a274fc:  ldr      x0, [x16, #0x10]
00a27500:  csetm    x16, lo
00a27504:  ldr      x17, [x1, #0x10]
00a27508:  madd     x15, x16, x13, x15
00a2750c:  str      x0, [x12, #0x10]
00a27510:  add      x16, x19, x14
00a27514:  str      q0, [x12], #0x18
00a27518:  ldr      q0, [x1]
00a2751c:  sub      x14, x14, #0x18
00a27520:  str      x17, [x16, #0x10]
00a27524:  str      q0, [x16]
00a27528:  cbnz     x8, #0xa274bc
00a2752c:  add      x8, x15, #0x18
00a27530:  tbz      w20, #0, #0xa27560
00a27534:  cmp      x10, x8
00a27538:  mov      w14, #0x18
00a2753c:  csel     x13, x10, x9, lo
00a27540:  csel     x15, x14, xzr, lo
00a27544:  csel     x14, xzr, x14, lo
00a27548:  ldr      q0, [x13]
00a2754c:  ldr      x13, [x13, #0x10]
00a27550:  add      x10, x10, x15
00a27554:  add      x9, x9, x14
00a27558:  str      q0, [x12]
00a2755c:  str      x13, [x12, #0x10]
00a27560:  cmp      x10, x8
00a27564:  b.ne     #0xa27588
00a27568:  add      x8, x11, #0x18
00a2756c:  cmp      x9, x8
00a27570:  b.ne     #0xa27588
00a27574:  add      sp, sp, #0x490
00a27578:  ldp      x20, x19, [sp, #0x20]
00a2757c:  ldr      x28, [sp, #0x10]
00a27580:  ldp      x29, x30, [sp], #0x30
00a27584:  ret      
00a27588:  bl       #0xabb3f0

; ===== 00a29054  FUN_00a29054  (1796 bytes) =====
00a29054:  stp      x29, x30, [sp, #-0x60]!
00a29058:  stp      x28, x27, [sp, #0x10]
00a2905c:  stp      x26, x25, [sp, #0x20]
00a29060:  stp      x24, x23, [sp, #0x30]
00a29064:  stp      x22, x21, [sp, #0x40]
00a29068:  stp      x20, x19, [sp, #0x50]
00a2906c:  mov      x29, sp
00a29070:  sub      sp, sp, #0x300
00a29074:  mov      x20, x1
00a29078:  cmp      x1, #0x21
00a2907c:  mov      x19, x0
00a29080:  b.hs     #0xa290d8
00a29084:  cmp      x20, #2
00a29088:  b.lo     #0xa29734
00a2908c:  lsr      x22, x20, #1
00a29090:  cmp      x20, #0xf
00a29094:  lsl      x23, x22, #4
00a29098:  b.ls     #0xa293e0
00a2909c:  mov      x24, sp
00a290a0:  mov      x1, sp
00a290a4:  mov      x0, x19
00a290a8:  add      x21, x24, x20, lsl #4
00a290ac:  mov      x2, x21
00a290b0:  bl       #0xa25cec
00a290b4:  add      x0, x19, x23
00a290b8:  add      x1, x24, x23
00a290bc:  add      x2, x21, #0x80
00a290c0:  bl       #0xa25cec
00a290c4:  mov      w10, #8
00a290c8:  cmp      x10, x22
00a290cc:  sub      x11, x20, x22
00a290d0:  b.lo     #0xa29564
00a290d4:  b        #0xa295e4
00a290d8:  mov      x21, x4
00a290dc:  mov      w22, w3
00a290e0:  mov      x23, x2
00a290e4:  mov      w24, #0x70
00a290e8:  mov      x25, sp
00a290ec:  b        #0xa29124
00a290f0:  lsl      x8, x12, #4
00a290f4:  ldr      q0, [x19]
00a290f8:  add      x9, x12, #1
00a290fc:  mov      x23, xzr
00a29100:  sub      x20, x20, x9
00a29104:  ldr      q1, [x19, x8]
00a29108:  str      q0, [sp]
00a2910c:  ldr      q0, [sp]
00a29110:  str      q1, [x19]
00a29114:  str      q0, [x19, x8]
00a29118:  add      x19, x19, x9, lsl #4
00a2911c:  cmp      x20, #0x21
00a29120:  b.lo     #0xa29084
00a29124:  cbz      w22, #0xa293b8
00a29128:  lsr      x3, x20, #3
00a2912c:  cmp      x20, #0x40
00a29130:  madd     x2, x3, x24, x19
00a29134:  add      x1, x19, x3, lsl #6
00a29138:  b.hs     #0xa2918c
00a2913c:  ldr      x8, [x19]
00a29140:  ldr      x9, [x1]
00a29144:  ldr      x10, [x2]
00a29148:  cmp      x8, x9
00a2914c:  cset     w11, lo
00a29150:  cmp      x8, x10
00a29154:  cset     w8, lo
00a29158:  cmp      x9, x10
00a2915c:  cset     w9, lo
00a29160:  eor      w8, w11, w8
00a29164:  eor      w9, w11, w9
00a29168:  cmp      w9, #0
00a2916c:  csel     x9, x2, x1, ne
00a29170:  cmp      w8, #0
00a29174:  csel     x0, x19, x9, ne
00a29178:  add      x8, x19, x20, lsl #4
00a2917c:  sub      w22, w22, #1
00a29180:  sub      x10, x0, x19
00a29184:  cbnz     x23, #0xa291a4
00a29188:  b        #0xa291b4
00a2918c:  mov      x0, x19
00a29190:  bl       #0xa25aa4
00a29194:  add      x8, x19, x20, lsl #4
00a29198:  sub      w22, w22, #1
00a2919c:  sub      x10, x0, x19
00a291a0:  cbz      x23, #0xa291b4
00a291a4:  ldr      x9, [x23]
00a291a8:  ldr      x11, [x19, x10]
00a291ac:  cmp      x9, x11
00a291b0:  b.hs     #0xa292dc
00a291b4:  ldr      q0, [x19]
00a291b8:  ldr      q1, [x19, x10]
00a291bc:  mov      x9, x19
00a291c0:  sub      x12, x8, #0x10
00a291c4:  add      x11, x19, #0x20
00a291c8:  mov      x1, xzr
00a291cc:  str      q0, [sp]
00a291d0:  cmp      x11, x12
00a291d4:  ldr      q0, [sp]
00a291d8:  str      q1, [x19]
00a291dc:  str      q0, [x19, x10]
00a291e0:  ldr      q0, [x9, #0x10]!
00a291e4:  ldr      x10, [x19]
00a291e8:  str      q0, [sp]
00a291ec:  b.hs     #0xa29244
00a291f0:  lsl      x13, x1, #4
00a291f4:  ldr      x14, [x11]
00a291f8:  ldr      q0, [x9, x13]
00a291fc:  cmp      x14, x10
00a29200:  cinc     x14, x1, lo
00a29204:  stur     q0, [x11, #-0x10]
00a29208:  ldr      q0, [x11]
00a2920c:  str      q0, [x9, x13]
00a29210:  lsl      x13, x14, #4
00a29214:  ldr      x15, [x11, #0x10]
00a29218:  ldr      q0, [x9, x13]
00a2921c:  cmp      x15, x10
00a29220:  str      q0, [x11]
00a29224:  ldr      q0, [x11, #0x10]
00a29228:  add      x11, x11, #0x20
00a2922c:  cinc     x1, x14, lo
00a29230:  cmp      x11, x12
00a29234:  str      q0, [x9, x13]
00a29238:  b.lo     #0xa291f0
00a2923c:  sub      x12, x11, #0x10
00a29240:  b        #0xa29248
00a29244:  mov      x12, x9
00a29248:  lsl      x13, x1, #4
00a2924c:  cmp      x11, x8
00a29250:  csel     x14, x25, x11, eq
00a29254:  ldr      q0, [x9, x13]
00a29258:  ldr      x15, [x14]
00a2925c:  str      q0, [x12]
00a29260:  cmp      x15, x10
00a29264:  mov      x12, x11
00a29268:  ldr      q0, [x14]
00a2926c:  add      x14, x11, #0x10
00a29270:  cinc     x1, x1, lo
00a29274:  cmp      x11, x8
00a29278:  mov      x11, x14
00a2927c:  str      q0, [x9, x13]
00a29280:  b.ne     #0xa29248
00a29284:  cmp      x1, x20
00a29288:  b.hs     #0xa293b4
00a2928c:  ldr      q0, [x19]
00a29290:  add      x26, x19, x1, lsl #4
00a29294:  mvn      x8, x1
00a29298:  mov      x0, x19
00a2929c:  mov      x2, x23
00a292a0:  mov      w3, w22
00a292a4:  str      q0, [sp]
00a292a8:  ldr      q0, [x26]
00a292ac:  mov      x4, x21
00a292b0:  ldr      q1, [sp]
00a292b4:  add      x27, x26, #0x10
00a292b8:  add      x20, x20, x8
00a292bc:  str      q0, [x19]
00a292c0:  str      q1, [x26]
00a292c4:  bl       #0xa29054
00a292c8:  mov      x23, x26
00a292cc:  mov      x19, x27
00a292d0:  cmp      x20, #0x21
00a292d4:  b.hs     #0xa29124
00a292d8:  b        #0xa29084
00a292dc:  ldr      q0, [x19]
00a292e0:  ldr      q1, [x19, x10]
00a292e4:  mov      x9, x19
00a292e8:  mov      x11, x19
00a292ec:  sub      x13, x8, #0x10
00a292f0:  mov      x12, xzr
00a292f4:  str      q0, [sp]
00a292f8:  ldr      q0, [sp]
00a292fc:  str      q1, [x19]
00a29300:  str      q0, [x19, x10]
00a29304:  ldr      q0, [x9, #0x10]!
00a29308:  ldr      x10, [x11], #0x20
00a2930c:  cmp      x11, x13
00a29310:  str      q0, [sp]
00a29314:  b.hs     #0xa2936c
00a29318:  lsl      x14, x12, #4
00a2931c:  ldr      x15, [x11]
00a29320:  ldr      q0, [x9, x14]
00a29324:  cmp      x10, x15
00a29328:  cinc     x12, x12, hs
00a2932c:  stur     q0, [x11, #-0x10]
00a29330:  ldr      q0, [x11]
00a29334:  str      q0, [x9, x14]
00a29338:  lsl      x14, x12, #4
00a2933c:  ldr      x15, [x11, #0x10]
00a29340:  ldr      q0, [x9, x14]
00a29344:  cmp      x10, x15
00a29348:  str      q0, [x11]
00a2934c:  ldr      q0, [x11, #0x10]
00a29350:  add      x11, x11, #0x20
00a29354:  cinc     x12, x12, hs
00a29358:  cmp      x11, x13
00a2935c:  str      q0, [x9, x14]
00a29360:  b.lo     #0xa29318
00a29364:  sub      x13, x11, #0x10
00a29368:  b        #0xa29370
00a2936c:  mov      x13, x9
00a29370:  lsl      x14, x12, #4
00a29374:  cmp      x11, x8
00a29378:  csel     x15, x25, x11, eq
00a2937c:  ldr      q0, [x9, x14]
00a29380:  ldr      x16, [x15]
00a29384:  str      q0, [x13]
00a29388:  cmp      x10, x16
00a2938c:  mov      x13, x11
00a29390:  ldr      q0, [x15]
00a29394:  add      x15, x11, #0x10
00a29398:  cinc     x12, x12, hs
00a2939c:  cmp      x11, x8
00a293a0:  mov      x11, x15
00a293a4:  str      q0, [x9, x14]
00a293a8:  b.ne     #0xa29370
00a293ac:  cmp      x12, x20
00a293b0:  b.lo     #0xa290f0
00a293b4:  brk      #1
00a293b8:  mov      x0, x19
00a293bc:  mov      x1, x20
00a293c0:  add      sp, sp, #0x300
00a293c4:  ldp      x20, x19, [sp, #0x50]
00a293c8:  ldp      x22, x21, [sp, #0x40]
00a293cc:  ldp      x24, x23, [sp, #0x30]
00a293d0:  ldp      x26, x25, [sp, #0x20]
00a293d4:  ldp      x28, x27, [sp, #0x10]
00a293d8:  ldp      x29, x30, [sp], #0x60
00a293dc:  b        #0xac4d20
00a293e0:  cmp      x20, #7
00a293e4:  b.ls     #0xa29540
00a293e8:  ldr      x10, [x19, #0x10]
00a293ec:  ldr      x11, [x19]
00a293f0:  mov      w8, #0x20
00a293f4:  ldr      x12, [x19, #0x30]
00a293f8:  ldr      x13, [x19, #0x20]
00a293fc:  mov      w9, #0x30
00a29400:  cmp      x10, x11
00a29404:  cset     w10, hs
00a29408:  cset     w11, lo
00a2940c:  cmp      x12, x13
00a29410:  add      x12, x19, w10, uxtw #4
00a29414:  csel     x10, x8, x9, lo
00a29418:  add      x11, x19, w11, uxtw #4
00a2941c:  csel     x13, x9, x8, lo
00a29420:  add      x14, x19, x10
00a29424:  add      x13, x19, x13
00a29428:  ldr      x15, [x14]
00a2942c:  ldr      x16, [x12]
00a29430:  ldr      x10, [x13]
00a29434:  ldr      x17, [x11]
00a29438:  cmp      x15, x16
00a2943c:  csel     x0, x13, x12, lo
00a29440:  cmp      x10, x17
00a29444:  csel     x10, x13, x11, lo
00a29448:  csel     x11, x11, x0, lo
00a2944c:  csel     x13, x12, x13, lo
00a29450:  cmp      x15, x16
00a29454:  add      x15, x19, x23
00a29458:  ldr      x16, [x11]
00a2945c:  csel     x13, x14, x13, lo
00a29460:  ldr      x0, [x15, #0x10]
00a29464:  ldr      x1, [x15]
00a29468:  ldr      x17, [x13]
00a2946c:  ldr      x2, [x15, #0x30]
00a29470:  csel     x12, x12, x14, lo
00a29474:  ldr      x14, [x15, #0x20]
00a29478:  ldr      q0, [x10]
00a2947c:  ldr      q2, [x12]
00a29480:  cmp      x17, x16
00a29484:  csel     x16, x13, x11, lo
00a29488:  csel     x11, x11, x13, lo
00a2948c:  cmp      x0, x1
00a29490:  cset     w13, hs
00a29494:  cset     w17, lo
00a29498:  cmp      x2, x14
00a2949c:  add      x13, x15, w13, uxtw #4
00a294a0:  csel     x14, x8, x9, lo
00a294a4:  add      x17, x15, w17, uxtw #4
00a294a8:  csel     x8, x9, x8, lo
00a294ac:  add      x9, x15, x14
00a294b0:  ldr      q1, [x16]
00a294b4:  add      x8, x15, x8
00a294b8:  ldr      x14, [x9]
00a294bc:  ldr      x15, [x13]
00a294c0:  ldr      x0, [x8]
00a294c4:  ldr      x1, [x17]
00a294c8:  ldr      q3, [x11]
00a294cc:  cmp      x14, x15
00a294d0:  stp      q0, q1, [sp]
00a294d4:  csel     x2, x8, x13, lo
00a294d8:  cmp      x0, x1
00a294dc:  stp      q3, q2, [sp, #0x20]
00a294e0:  csel     x0, x17, x2, lo
00a294e4:  csel     x17, x8, x17, lo
00a294e8:  csel     x8, x13, x8, lo
00a294ec:  cmp      x14, x15
00a294f0:  ldr      x10, [x0]
00a294f4:  mov      x14, sp
00a294f8:  csel     x8, x9, x8, lo
00a294fc:  csel     x9, x13, x9, lo
00a29500:  ldr      q0, [x17]
00a29504:  ldr      x15, [x8]
00a29508:  add      x14, x14, x23
00a2950c:  cmp      x15, x10
00a29510:  csel     x10, x8, x0, lo
00a29514:  csel     x8, x0, x8, lo
00a29518:  ldr      q1, [x10]
00a2951c:  ldr      q2, [x8]
00a29520:  mov      w10, #4
00a29524:  stp      q0, q1, [x14]
00a29528:  ldr      q0, [x9]
00a2952c:  stp      q2, q0, [x14, #0x20]
00a29530:  cmp      x10, x22
00a29534:  sub      x11, x20, x22
00a29538:  b.lo     #0xa29564
00a2953c:  b        #0xa295e4
00a29540:  ldr      q0, [x19]
00a29544:  ldr      q1, [x19, x23]
00a29548:  mov      x8, sp
00a2954c:  mov      w10, #1
00a29550:  str      q0, [sp]
00a29554:  str      q1, [x8, x23]
00a29558:  cmp      x10, x22
00a2955c:  sub      x11, x20, x22
00a29560:  b.hs     #0xa295e4
00a29564:  lsl      x8, x10, #4
00a29568:  mov      x9, sp
00a2956c:  mov      x12, x10
00a29570:  b        #0xa2958c
00a29574:  add      x15, x9, x17
00a29578:  stp      x13, x14, [x15]
00a2957c:  add      x12, x12, #1
00a29580:  add      x8, x8, #0x10
00a29584:  cmp      x12, x22
00a29588:  b.eq     #0xa295e4
00a2958c:  lsl      x13, x12, #4
00a29590:  ldr      q0, [x19, x13]
00a29594:  add      x14, x9, x13
00a29598:  ldur     x15, [x14, #-0x10]
00a2959c:  str      q0, [x14]
00a295a0:  ldr      x13, [x14]
00a295a4:  cmp      x13, x15
00a295a8:  b.hs     #0xa2957c
00a295ac:  ldr      x14, [x14, #8]
00a295b0:  mov      x16, x8
00a295b4:  mov      x15, sp
00a295b8:  subs     x17, x16, #0x10
00a295bc:  add      x0, x15, x16
00a295c0:  ldur     q0, [x0, #-0x10]
00a295c4:  str      q0, [x0]
00a295c8:  b.eq     #0xa29578
00a295cc:  add      x15, x9, x16
00a295d0:  mov      x16, x17
00a295d4:  ldur     x15, [x15, #-0x20]
00a295d8:  cmp      x13, x15
00a295dc:  b.lo     #0xa295b4
00a295e0:  b        #0xa29574
00a295e4:  mov      x9, sp
00a295e8:  cmp      x10, x11
00a295ec:  add      x8, x9, x23
00a295f0:  b.hs     #0xa29680
00a295f4:  lsl      x12, x10, #4
00a295f8:  add      x13, x19, x23
00a295fc:  mov      w14, #0x10
00a29600:  mov      x15, x8
00a29604:  b        #0xa29624
00a29608:  mov      x0, x8
00a2960c:  stp      x16, x17, [x0]
00a29610:  add      x10, x10, #1
00a29614:  add      x15, x15, #0x10
00a29618:  sub      x14, x14, #0x10
00a2961c:  cmp      x10, x11
00a29620:  b.eq     #0xa29680
00a29624:  lsl      x16, x10, #4
00a29628:  ldr      q0, [x13, x16]
00a2962c:  add      x17, x8, x16
00a29630:  ldur     x0, [x17, #-0x10]
00a29634:  str      q0, [x17]
00a29638:  ldr      x16, [x17]
00a2963c:  cmp      x16, x0
00a29640:  b.hs     #0xa29610
00a29644:  ldr      x17, [x17, #8]
00a29648:  mov      x1, x14
00a2964c:  mov      x0, x15
00a29650:  add      x2, x0, x12
00a29654:  cmp      x12, x1
00a29658:  ldur     q0, [x2, #-0x10]
00a2965c:  str      q0, [x2]
00a29660:  b.eq     #0xa29608
00a29664:  ldur     x2, [x2, #-0x20]
00a29668:  sub      x0, x0, #0x10
00a2966c:  add      x1, x1, #0x10
00a29670:  cmp      x16, x2
00a29674:  b.lo     #0xa29650
00a29678:  add      x0, x0, x12
00a2967c:  b        #0xa2960c
00a29680:  lsl      x21, x20, #4
00a29684:  sub      x13, x8, #0x10
00a29688:  mov      w14, #0x10
00a2968c:  mov      x11, x19
00a29690:  sub      x12, x21, #0x10
00a29694:  add      x10, x9, x12
00a29698:  ldr      x15, [x8]
00a2969c:  ldr      x16, [x9]
00a296a0:  sub      x22, x22, #1
00a296a4:  ldr      x17, [x10]
00a296a8:  ldr      x0, [x13]
00a296ac:  cmp      x15, x16
00a296b0:  csel     x15, x8, x9, lo
00a296b4:  csel     x16, x14, xzr, lo
00a296b8:  csel     x1, xzr, x14, lo
00a296bc:  cmp      x17, x0
00a296c0:  ldr      q0, [x15]
00a296c4:  add      x8, x8, x16
00a296c8:  csel     x15, x13, x10, lo
00a296cc:  csetm    x16, hs
00a296d0:  add      x9, x9, x1
00a296d4:  str      q0, [x11], #0x10
00a296d8:  ldr      q0, [x15]
00a296dc:  csetm    x15, lo
00a296e0:  add      x10, x10, x16, lsl #4
00a296e4:  str      q0, [x19, x12]
00a296e8:  add      x13, x13, x15, lsl #4
00a296ec:  sub      x12, x12, #0x10
00a296f0:  cbnz     x22, #0xa29698
00a296f4:  add      x12, x13, #0x10
00a296f8:  tbz      w20, #0, #0xa29720
00a296fc:  cmp      x9, x12
00a29700:  csel     x13, x9, x8, lo
00a29704:  ldr      q0, [x13]
00a29708:  mov      w13, #0x10
00a2970c:  csel     x14, x13, xzr, lo
00a29710:  csel     x13, xzr, x13, lo
00a29714:  add      x9, x9, x14
00a29718:  add      x8, x8, x13
00a2971c:  str      q0, [x11]
00a29720:  cmp      x9, x12
00a29724:  b.ne     #0xa29754
00a29728:  add      x9, x10, #0x10
00a2972c:  cmp      x8, x9
00a29730:  b.ne     #0xa29754
00a29734:  add      sp, sp, #0x300
00a29738:  ldp      x20, x19, [sp, #0x50]
00a2973c:  ldp      x22, x21, [sp, #0x40]
00a29740:  ldp      x24, x23, [sp, #0x30]
00a29744:  ldp      x26, x25, [sp, #0x20]
00a29748:  ldp      x28, x27, [sp, #0x10]
00a2974c:  ldp      x29, x30, [sp], #0x60
00a29750:  ret      
00a29754:  bl       #0xabb3f0

; ===== 00a68d04  FUN_00a68d04  (1880 bytes) =====
00a68d04:  sub      sp, sp, #0x170
00a68d08:  stp      x29, x30, [sp, #0x110]
00a68d0c:  stp      x28, x27, [sp, #0x120]
00a68d10:  stp      x26, x25, [sp, #0x130]
00a68d14:  stp      x24, x23, [sp, #0x140]
00a68d18:  stp      x22, x21, [sp, #0x150]
00a68d1c:  stp      x20, x19, [sp, #0x160]
00a68d20:  add      x29, sp, #0x110
00a68d24:  mov      x19, x2
00a68d28:  mov      x22, x1
00a68d2c:  cmp      x1, x3
00a68d30:  mov      x23, x0
00a68d34:  b.hs     #0xa68ddc
00a68d38:  sub      x10, x22, #1
00a68d3c:  ldrb     w8, [x23]
00a68d40:  mov      x21, x3
00a68d44:  ldrb     w9, [x23, x10]
00a68d48:  sub      x26, x22, #1
00a68d4c:  cmp      w9, w8
00a68d50:  b.ne     #0xa68dfc
00a68d54:  sub      x26, x22, #2
00a68d58:  ldrb     w9, [x23, x26]
00a68d5c:  cmp      w9, w8
00a68d60:  b.ne     #0xa68dfc
00a68d64:  sub      x26, x22, #3
00a68d68:  ldrb     w9, [x23, x26]
00a68d6c:  cmp      w9, w8
00a68d70:  b.ne     #0xa68dfc
00a68d74:  sub      x26, x22, #4
00a68d78:  ldrb     w9, [x23, x26]
00a68d7c:  cmp      w9, w8
00a68d80:  b.ne     #0xa68dfc
00a68d84:  sub      x8, x29, #0x70
00a68d88:  mov      x0, x19
00a68d8c:  mov      x1, x21
00a68d90:  mov      x2, x23
00a68d94:  mov      x3, x22
00a68d98:  bl       #0xabf870
00a68d9c:  ldur     w8, [x29, #-0x70]
00a68da0:  tbz      w8, #0, #0xa69148
00a68da4:  ldp      x14, x1, [x29, #-0x18]
00a68da8:  ldur     x11, [x29, #-0x38]
00a68dac:  ldp      x8, x9, [x29, #-0x28]
00a68db0:  cmn      x11, #1
00a68db4:  sub      x10, x1, #1
00a68db8:  b.eq     #0xa69218
00a68dbc:  ldur     x17, [x29, #-0x48]
00a68dc0:  add      x2, x17, x10
00a68dc4:  cmp      x2, x9
00a68dc8:  b.hs     #0xa69258
00a68dcc:  ldur     x12, [x29, #-0x68]
00a68dd0:  ldp      x15, x13, [x29, #-0x58]
00a68dd4:  neg      x16, x12
00a68dd8:  b        #0xa69194
00a68ddc:  b.ne     #0xa69258
00a68de0:  mov      x0, x23
00a68de4:  mov      x1, x19
00a68de8:  mov      x2, x22
00a68dec:  bl       #0xab97c0
00a68df0:  cmp      w0, #0
00a68df4:  cset     w20, eq
00a68df8:  b        #0xa6925c
00a68dfc:  add      x11, x22, #0xf
00a68e00:  cmp      x21, x11
00a68e04:  b.hs     #0xa68e3c
00a68e08:  sub      x21, x21, #1
00a68e0c:  mov      x0, x19
00a68e10:  mov      x1, x23
00a68e14:  mov      x2, x22
00a68e18:  bl       #0xab97c0
00a68e1c:  cmp      w0, #0
00a68e20:  cset     w20, eq
00a68e24:  cbz      w0, #0xa6925c
00a68e28:  cmp      x22, x21
00a68e2c:  sub      x21, x21, #1
00a68e30:  add      x19, x19, #1
00a68e34:  b.ls     #0xa68e0c
00a68e38:  b        #0xa6925c
00a68e3c:  dup      v2.16b, w8
00a68e40:  dup      v3.16b, w9
00a68e44:  add      x8, x23, #1
00a68e48:  add      x9, x22, #0x3f
00a68e4c:  stp      x8, x10, [x29, #-0x60]
00a68e50:  sub      x8, x22, #1
00a68e54:  cmp      x9, x21
00a68e58:  adrp     x9, #0x2a0000
00a68e5c:  stp      x19, x21, [x29, #-0x70]
00a68e60:  str      x8, [sp, #0x28]
00a68e64:  stur     q2, [x29, #-0x80]
00a68e68:  str      q3, [sp, #0x80]
00a68e6c:  b.hs     #0xa69038
00a68e70:  add      x8, x26, x19
00a68e74:  ldr      q4, [x9, #0xd80]
00a68e78:  mov      x23, xzr
00a68e7c:  add      x27, x22, #0x7f
00a68e80:  add      x28, x8, #0x20
00a68e84:  add      x25, x19, #0x30
00a68e88:  str      q4, [sp, #0x50]
00a68e8c:  add      x8, x25, x23
00a68e90:  add      x9, x28, x23
00a68e94:  ldp      q0, q18, [x9, #-0x20]
00a68e98:  ldp      q1, q17, [x8, #-0x30]
00a68e9c:  ldp      q7, q5, [x8, #-0x10]
00a68ea0:  cmeq     v0.16b, v0.16b, v3.16b
00a68ea4:  ldp      q16, q6, [x9]
00a68ea8:  cmeq     v1.16b, v1.16b, v2.16b
00a68eac:  and      v0.16b, v1.16b, v0.16b
00a68eb0:  umaxv    b1, v0.16b
00a68eb4:  fmov     w8, s1
00a68eb8:  tbnz     w8, #0, #0xa68f54
00a68ebc:  mov      w20, wzr
00a68ec0:  cmeq     v0.16b, v17.16b, v2.16b
00a68ec4:  cmeq     v1.16b, v18.16b, v3.16b
00a68ec8:  and      v0.16b, v0.16b, v1.16b
00a68ecc:  and      v0.16b, v0.16b, v4.16b
00a68ed0:  ext      v1.16b, v0.16b, v0.16b, #8
00a68ed4:  zip1     v0.16b, v0.16b, v1.16b
00a68ed8:  addv     h0, v0.8h
00a68edc:  fmov     w2, s0
00a68ee0:  tst      w2, #0xffff
00a68ee4:  b.ne     #0xa68fa4
00a68ee8:  cmeq     v0.16b, v7.16b, v2.16b
00a68eec:  cmeq     v1.16b, v16.16b, v3.16b
00a68ef0:  and      v0.16b, v0.16b, v1.16b
00a68ef4:  and      v0.16b, v0.16b, v4.16b
00a68ef8:  ext      v1.16b, v0.16b, v0.16b, #8
00a68efc:  zip1     v0.16b, v0.16b, v1.16b
00a68f00:  addv     h0, v0.8h
00a68f04:  fmov     w2, s0
00a68f08:  tst      w2, #0xffff
00a68f0c:  b.ne     #0xa68fd8
00a68f10:  cmeq     v0.16b, v5.16b, v2.16b
00a68f14:  cmeq     v1.16b, v6.16b, v3.16b
00a68f18:  and      v0.16b, v0.16b, v1.16b
00a68f1c:  and      v0.16b, v0.16b, v4.16b
00a68f20:  ext      v1.16b, v0.16b, v0.16b, #8
00a68f24:  zip1     v0.16b, v0.16b, v1.16b
00a68f28:  addv     h0, v0.8h
00a68f2c:  fmov     w2, s0
00a68f30:  tst      w2, #0xffff
00a68f34:  b.ne     #0xa69004
00a68f38:  add      x8, x27, x23
00a68f3c:  add      x24, x23, #0x40
00a68f40:  cmp      x8, x21
00a68f44:  b.hs     #0xa69040
00a68f48:  mov      x23, x24
00a68f4c:  tbz      w20, #0, #0xa68e8c
00a68f50:  b        #0xa69040
00a68f54:  and      v0.16b, v0.16b, v4.16b
00a68f58:  sub      x0, x29, #0x70
00a68f5c:  mov      x1, x23
00a68f60:  mov      w3, wzr
00a68f64:  stp      q18, q17, [sp]
00a68f68:  stp      q16, q7, [sp, #0x30]
00a68f6c:  ext      v1.16b, v0.16b, v0.16b, #8
00a68f70:  stp      q6, q5, [sp, #0x60]
00a68f74:  zip1     v0.16b, v0.16b, v1.16b
00a68f78:  addv     h0, v0.8h
00a68f7c:  fmov     w2, s0
00a68f80:  bl       #0xa2c668
00a68f84:  ldp      q18, q17, [sp]
00a68f88:  mov      w20, w0
00a68f8c:  ldp      q16, q7, [sp, #0x30]
00a68f90:  ldr      q4, [sp, #0x50]
00a68f94:  ldp      q6, q5, [sp, #0x60]
00a68f98:  ldr      q3, [sp, #0x80]
00a68f9c:  ldur     q2, [x29, #-0x80]
00a68fa0:  b        #0xa68ec0
00a68fa4:  sub      x0, x29, #0x70
00a68fa8:  add      x1, x23, #0x10
00a68fac:  mov      w3, w20
00a68fb0:  stp      q16, q7, [sp, #0x30]
00a68fb4:  stp      q6, q5, [sp, #0x60]
00a68fb8:  bl       #0xa2c668
00a68fbc:  ldp      q16, q7, [sp, #0x30]
00a68fc0:  orr      w20, w20, w0
00a68fc4:  ldp      q6, q5, [sp, #0x60]
00a68fc8:  ldr      q4, [sp, #0x50]
00a68fcc:  ldr      q3, [sp, #0x80]
00a68fd0:  ldur     q2, [x29, #-0x80]
00a68fd4:  b        #0xa68ee8
00a68fd8:  sub      x0, x29, #0x70
00a68fdc:  add      x1, x23, #0x20
00a68fe0:  mov      w3, w20
00a68fe4:  stp      q6, q5, [sp, #0x60]
00a68fe8:  bl       #0xa2c668
00a68fec:  ldp      q6, q5, [sp, #0x60]
00a68ff0:  orr      w20, w20, w0
00a68ff4:  ldr      q4, [sp, #0x50]
00a68ff8:  ldr      q3, [sp, #0x80]
00a68ffc:  ldur     q2, [x29, #-0x80]
00a69000:  b        #0xa68f10
00a69004:  sub      x0, x29, #0x70
00a69008:  add      x1, x23, #0x30
00a6900c:  mov      w3, w20
00a69010:  bl       #0xa2c668
00a69014:  ldr      q4, [sp, #0x50]
00a69018:  ldr      q3, [sp, #0x80]
00a6901c:  orr      w20, w20, w0
00a69020:  ldur     q2, [x29, #-0x80]
00a69024:  add      x8, x27, x23
00a69028:  add      x24, x23, #0x40
00a6902c:  cmp      x8, x21
00a69030:  b.lo     #0xa68f48
00a69034:  b        #0xa69040
00a69038:  mov      x24, xzr
00a6903c:  mov      w20, wzr
00a69040:  tbnz     w20, #0, #0xa690e8
00a69044:  add      x8, x22, #0xf
00a69048:  adrp     x25, #0x2a0000
00a6904c:  add      x8, x24, x8
00a69050:  cmp      x8, x21
00a69054:  b.hs     #0xa690ec
00a69058:  add      x8, x24, x22
00a6905c:  ldr      q0, [x25, #0xd80]
00a69060:  add      x23, x19, x26
00a69064:  add      x22, x8, #0x1f
00a69068:  str      q0, [sp, #0x70]
00a6906c:  ldr      q0, [x19, x24]
00a69070:  ldr      q1, [x23, x24]
00a69074:  cmeq     v0.16b, v0.16b, v2.16b
00a69078:  cmeq     v1.16b, v1.16b, v3.16b
00a6907c:  and      v0.16b, v0.16b, v1.16b
00a69080:  umaxv    b1, v0.16b
00a69084:  fmov     w8, s1
00a69088:  tbnz     w8, #0, #0xa690a8
00a6908c:  mov      w20, wzr
00a69090:  cmp      x22, x21
00a69094:  b.hs     #0xa690ec
00a69098:  add      x24, x24, #0x10
00a6909c:  add      x22, x22, #0x10
00a690a0:  tbz      w20, #0, #0xa6906c
00a690a4:  b        #0xa690ec
00a690a8:  ldr      q1, [sp, #0x70]
00a690ac:  sub      x0, x29, #0x70
00a690b0:  mov      x1, x24
00a690b4:  mov      w3, wzr
00a690b8:  and      v0.16b, v0.16b, v1.16b
00a690bc:  ext      v1.16b, v0.16b, v0.16b, #8
00a690c0:  zip1     v0.16b, v0.16b, v1.16b
00a690c4:  addv     h0, v0.8h
00a690c8:  fmov     w2, s0
00a690cc:  bl       #0xa2c668
00a690d0:  ldr      q3, [sp, #0x80]
00a690d4:  ldur     q2, [x29, #-0x80]
00a690d8:  mov      w20, w0
00a690dc:  cmp      x22, x21
00a690e0:  b.lo     #0xa69098
00a690e4:  b        #0xa690ec
00a690e8:  adrp     x25, #0x2a0000
00a690ec:  ldr      x8, [sp, #0x28]
00a690f0:  sub      x8, x21, x8
00a690f4:  sub      x1, x8, #0x10
00a690f8:  add      x8, x19, x1
00a690fc:  ldr      q0, [x8]
00a69100:  ldr      q1, [x8, x26]
00a69104:  cmeq     v0.16b, v0.16b, v2.16b
00a69108:  cmeq     v1.16b, v1.16b, v3.16b
00a6910c:  and      v0.16b, v0.16b, v1.16b
00a69110:  umaxv    b1, v0.16b
00a69114:  fmov     w8, s1
00a69118:  tbz      w8, #0, #0xa6925c
00a6911c:  ldr      q1, [x25, #0xd80]
00a69120:  sub      x0, x29, #0x70
00a69124:  mov      w3, w20
00a69128:  and      v0.16b, v0.16b, v1.16b
00a6912c:  ext      v1.16b, v0.16b, v0.16b, #8
00a69130:  zip1     v0.16b, v0.16b, v1.16b
00a69134:  addv     h0, v0.8h
00a69138:  fmov     w2, s0
00a6913c:  bl       #0xa2c668
00a69140:  orr      w20, w20, w0
00a69144:  b        #0xa6925c
00a69148:  ldurb    w8, [x29, #-0x56]
00a6914c:  tbnz     w8, #0, #0xa69258
00a69150:  ldp      x0, x1, [x29, #-0x28]
00a69154:  ldur     x2, [x29, #-0x68]
00a69158:  ldurb    w20, [x29, #-0x58]
00a6915c:  cbz      x2, #0xa69308
00a69160:  cmp      x2, x1
00a69164:  b.hs     #0xa69304
00a69168:  ldrsb    w8, [x0, x2]
00a6916c:  cmn      w8, #0x40
00a69170:  b.ge     #0xa69308
00a69174:  b        #0xa69420
00a69178:  mov      x11, xzr
00a6917c:  add      x0, x17, x1
00a69180:  add      x2, x0, x10
00a69184:  mov      w20, wzr
00a69188:  mov      x17, x0
00a6918c:  cmp      x2, x9
00a69190:  b.hs     #0xa6925c
00a69194:  ldrb     w0, [x8, x2]
00a69198:  lsr      x0, x13, x0
00a6919c:  tbz      w0, #0, #0xa69178
00a691a0:  cmp      x11, x12
00a691a4:  add      x0, x16, x17
00a691a8:  add      x2, x8, x17
00a691ac:  csel     x3, x11, x12, hi
00a691b0:  add      x0, x0, x3
00a691b4:  cmp      x3, x1
00a691b8:  b.hs     #0xa691dc
00a691bc:  ldrb     w4, [x14, x3]
00a691c0:  ldrb     w5, [x2, x3]
00a691c4:  add      x3, x3, #1
00a691c8:  add      x0, x0, #1
00a691cc:  cmp      w4, w5
00a691d0:  b.eq     #0xa691b4
00a691d4:  mov      x11, xzr
00a691d8:  b        #0xa69180
00a691dc:  add      x2, x8, x17
00a691e0:  sub      x0, x12, #1
00a691e4:  add      x3, x0, #1
00a691e8:  cmp      x11, x3
00a691ec:  b.hs     #0xa69444
00a691f0:  cmp      x0, x1
00a691f4:  b.hs     #0xa693b8
00a691f8:  ldrb     w3, [x14, x0]
00a691fc:  ldrb     w4, [x2, x0]
00a69200:  sub      x0, x0, #1
00a69204:  cmp      w3, w4
00a69208:  b.eq     #0xa691e4
00a6920c:  add      x0, x17, x15
00a69210:  sub      x11, x1, x15
00a69214:  b        #0xa69180
00a69218:  ldur     x11, [x29, #-0x48]
00a6921c:  add      x2, x11, x10
00a69220:  cmp      x2, x9
00a69224:  b.hs     #0xa69258
00a69228:  ldur     x12, [x29, #-0x68]
00a6922c:  ldur     x13, [x29, #-0x50]
00a69230:  cmp      x12, x1
00a69234:  sub      x0, x12, #1
00a69238:  csel     x17, x12, x1, hi
00a6923c:  cmp      x0, x1
00a69240:  b.hs     #0xa6935c
00a69244:  ldur     x15, [x29, #-0x58]
00a69248:  add      x16, x14, x12
00a6924c:  sub      x17, x17, x12
00a69250:  sub      x14, x14, #1
00a69254:  b        #0xa69294
00a69258:  mov      w20, wzr
00a6925c:  and      w0, w20, #1
00a69260:  ldp      x20, x19, [sp, #0x160]
00a69264:  ldp      x22, x21, [sp, #0x150]
00a69268:  ldp      x24, x23, [sp, #0x140]
00a6926c:  ldp      x26, x25, [sp, #0x130]
00a69270:  ldp      x28, x27, [sp, #0x120]
00a69274:  ldp      x29, x30, [sp, #0x110]
00a69278:  add      sp, sp, #0x170
00a6927c:  ret      
00a69280:  add      x11, x11, x1
00a69284:  add      x2, x11, x10
00a69288:  mov      w20, wzr
00a6928c:  cmp      x2, x9
00a69290:  b.hs     #0xa6925c
00a69294:  ldrb     w2, [x8, x2]
00a69298:  lsr      x2, x13, x2
00a6929c:  tbz      w2, #0, #0xa69280
00a692a0:  neg      x2, x11
00a692a4:  add      x3, x12, x11
00a692a8:  mov      x4, x17
00a692ac:  mov      x5, x16
00a692b0:  cbz      x4, #0xa692d8
00a692b4:  ldrb     w6, [x5], #1
00a692b8:  ldrb     w7, [x8, x3]
00a692bc:  sub      x2, x2, #1
00a692c0:  add      x3, x3, #1
00a692c4:  sub      x4, x4, #1
00a692c8:  cmp      w6, w7
00a692cc:  b.eq     #0xa692b0
00a692d0:  neg      x11, x2
00a692d4:  b        #0xa69284
00a692d8:  add      x2, x0, x11
00a692dc:  mov      x3, x12
00a692e0:  cbz      x3, #0xa69444
00a692e4:  ldrb     w4, [x14, x3]
00a692e8:  ldrb     w5, [x8, x2]
00a692ec:  sub      x3, x3, #1
00a692f0:  sub      x2, x2, #1
00a692f4:  cmp      w4, w5
00a692f8:  b.eq     #0xa692e0
00a692fc:  add      x11, x11, x15
00a69300:  b        #0xa69284
00a69304:  b.ne     #0xa69420
00a69308:  cmp      x2, x1
00a6930c:  b.eq     #0xa6925c
00a69310:  add      x9, x0, x2
00a69314:  ldrsb    w10, [x9]
00a69318:  and      w8, w10, #0xff
00a6931c:  tbz      w10, #0x1f, #0xa693d4
00a69320:  ldrb     w10, [x9, #1]
00a69324:  cmp      w8, #0xe0
00a69328:  and      w10, w10, #0x3f
00a6932c:  b.lo     #0xa693c4
00a69330:  ldrb     w11, [x9, #2]
00a69334:  cmp      w8, #0xf0
00a69338:  and      w11, w11, #0x3f
00a6933c:  orr      w11, w11, w10, lsl #6
00a69340:  and      w10, w8, #0x1f
00a69344:  b.lo     #0xa693d0
00a69348:  ldrb     w8, [x9, #3]
00a6934c:  and      w8, w8, #0x3f
00a69350:  orr      w8, w8, w11, lsl #6
00a69354:  bfi      w8, w10, #0x12, #3
00a69358:  b        #0xa693d4
00a6935c:  add      x14, x14, x12
00a69360:  add      x15, x8, x12
00a69364:  ldrb     w16, [x8, x2]
00a69368:  lsr      x16, x13, x16
00a6936c:  tbz      w16, #0, #0xa6939c
00a69370:  mov      x16, x17
00a69374:  mov      x2, x14
00a69378:  cmp      x12, x16
00a6937c:  b.eq     #0xa693b4
00a69380:  ldrb     w3, [x2], #1
00a69384:  ldrb     w4, [x15, x11]
00a69388:  add      x11, x11, #1
00a6938c:  sub      x16, x16, #1
00a69390:  cmp      w3, w4
00a69394:  b.eq     #0xa69378
00a69398:  b        #0xa693a0
00a6939c:  add      x11, x11, x1
00a693a0:  add      x2, x11, x10
00a693a4:  mov      w20, wzr
00a693a8:  cmp      x2, x9
00a693ac:  b.lo     #0xa69364
00a693b0:  b        #0xa6925c
00a693b4:  cbz      x12, #0xa69444
00a693b8:  nop      
00a693bc:  adr      x2, #0xafa830
00a693c0:  bl       #0xaba5a0
00a693c4:  bfi      w10, w8, #6, #5
00a693c8:  mov      w8, w10
00a693cc:  b        #0xa693d4
00a693d0:  orr      w8, w11, w10, lsl #12
00a693d4:  tbnz     w20, #0, #0xa69444
00a693d8:  cmp      w8, #0x80
00a693dc:  b.hs     #0xa693e8
00a693e0:  mov      w8, #1
00a693e4:  b        #0xa69404
00a693e8:  cmp      w8, #0x800
00a693ec:  b.hs     #0xa693f8
00a693f0:  mov      w8, #2
00a693f4:  b        #0xa69404
00a693f8:  cmp      w8, #0x10, lsl #12
00a693fc:  mov      w8, #3
00a69400:  cinc     x8, x8, hs
00a69404:  adds     x2, x8, x2
00a69408:  b.eq     #0xa69434
00a6940c:  cmp      x2, x1
00a69410:  b.hs     #0xa69430
00a69414:  ldrsb    w8, [x0, x2]
00a69418:  cmn      w8, #0x40
00a6941c:  b.ge     #0xa69434
00a69420:  nop      
00a69424:  adr      x4, #0xafc878
00a69428:  mov      x3, x1
00a6942c:  bl       #0xab9db0
00a69430:  b.ne     #0xa69420
00a69434:  cmp      x2, x1
00a69438:  b.eq     #0xa69444
00a6943c:  ldrsb    w8, [x0, x2]
00a69440:  tbnz     w8, #0x1f, #0xa6944c
00a69444:  mov      w20, #1
00a69448:  b        #0xa6925c
00a6944c:  and      w8, w8, #0xff
00a69450:  mov      w20, #1
00a69454:  cmp      w8, #0xe0
00a69458:  b        #0xa6925c

