; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 003c4ac8  FUN_003c4ac8  (17016 bytes) =====
003c4ac8:  stp      x29, x30, [sp, #-0x20]!
003c4acc:  str      x19, [sp, #0x10]
003c4ad0:  mov      x29, sp
003c4ad4:  sub      w8, w0, #1
003c4ad8:  mov      x0, xzr
003c4adc:  cmp      w8, #0x3cb
003c4ae0:  b.hi     #0x3c8cf0
003c4ae4:  adrp     x9, #0x251000
003c4ae8:  add      x9, x9, #0x2d4
003c4aec:  adr      x10, #0x3c4afc
003c4af0:  ldrh     w11, [x9, x8, lsl #1]
003c4af4:  add      x10, x10, x11, lsl #2
003c4af8:  br       x10
003c4afc:  mov      w0, #0xc70
003c4b00:  bl       #0x644c30
003c4b04:  mov      x19, x0
003c4b08:  bl       #0x647c10
003c4b0c:  mov      x0, x19
003c4b10:  b        #0x3c8cf0
003c4b14:  mov      w0, #0x28
003c4b18:  bl       #0x644c30
003c4b1c:  mov      x19, x0
003c4b20:  bl       #0x6470e0
003c4b24:  mov      x0, x19
003c4b28:  b        #0x3c8cf0
003c4b2c:  mov      w0, #0x28
003c4b30:  bl       #0x644c30
003c4b34:  movi     v0.2d, #0000000000000000
003c4b38:  mov      w8, #-1
003c4b3c:  str      xzr, [x0, #0x20]
003c4b40:  stp      q0, q0, [x0]
003c4b44:  str      w8, [x0, #8]
003c4b48:  adrp     x8, #0x655000
003c4b4c:  add      x8, x8, #0xf60
003c4b50:  str      x8, [x0]
003c4b54:  b        #0x3c8cf0
003c4b58:  mov      w0, #0x60
003c4b5c:  bl       #0x644c30
003c4b60:  mov      x19, x0
003c4b64:  bl       #0x6471d0
003c4b68:  mov      x0, x19
003c4b6c:  b        #0x3c8cf0
003c4b70:  mov      w0, #0xc8
003c4b74:  bl       #0x644c30
003c4b78:  movi     v0.2d, #0000000000000000
003c4b7c:  mov      w8, #-1
003c4b80:  str      xzr, [x0, #0xc0]
003c4b84:  mov      w9, #0x3f800000
003c4b88:  stp      q0, q0, [x0]
003c4b8c:  str      w8, [x0, #8]
003c4b90:  mov      w8, #0xfffe
003c4b94:  stp      q0, q0, [x0, #0x20]
003c4b98:  stp      q0, q0, [x0, #0x40]
003c4b9c:  stp      q0, q0, [x0, #0x60]
003c4ba0:  stp      q0, q0, [x0, #0x80]
003c4ba4:  stp      q0, q0, [x0, #0xa0]
003c4ba8:  str      xzr, [x0, #0x30]
003c4bac:  strh     w8, [x0, #0x60]
003c4bb0:  adrp     x8, #0x67d000
003c4bb4:  stp      xzr, xzr, [x0, #0x68]
003c4bb8:  str      xzr, [x0, #0x78]
003c4bbc:  stp      xzr, xzr, [x0, #0x88]
003c4bc0:  ldr      x8, [x8, #0x3c0]
003c4bc4:  str      w9, [x0, #0xc0]
003c4bc8:  stp      q0, q0, [x0, #0xa0]
003c4bcc:  add      x9, x8, #0x10
003c4bd0:  add      x8, x8, #0xe8
003c4bd4:  str      x9, [x0]
003c4bd8:  str      x8, [x0, #0x98]
003c4bdc:  b        #0x3c8cf0
003c4be0:  mov      w0, #0xa8
003c4be4:  bl       #0x644c30
003c4be8:  movi     v0.2d, #0000000000000000
003c4bec:  mov      w8, #-1
003c4bf0:  mov      w9, #0xfffe
003c4bf4:  str      q0, [x0, #0x80]
003c4bf8:  stp      q0, q0, [x0]
003c4bfc:  stp      q0, q0, [x0, #0x20]
003c4c00:  stp      q0, q0, [x0, #0x40]
003c4c04:  stp      q0, q0, [x0, #0x60]
003c4c08:  str      w8, [x0, #8]
003c4c0c:  str      xzr, [x0, #0x30]
003c4c10:  strh     w9, [x0, #0x60]
003c4c14:  adrp     x9, #0x67c000
003c4c18:  stp      xzr, xzr, [x0, #0x68]
003c4c1c:  ldr      x9, [x9, #0xfa8]
003c4c20:  str      w8, [x0, #0x88]
003c4c24:  str      xzr, [x0, #0x78]
003c4c28:  add      x8, x9, #0x10
003c4c2c:  stp      xzr, xzr, [x0, #0x98]
003c4c30:  str      x8, [x0]
003c4c34:  str      xzr, [x0, #0x90]
003c4c38:  b        #0x3c8cf0
003c4c3c:  mov      w0, #0x30
003c4c40:  bl       #0x644c30
003c4c44:  movi     v0.2d, #0000000000000000
003c4c48:  movi     d1, #0x000000ffffffff
003c4c4c:  adrp     x9, #0x67c000
003c4c50:  mov      w8, #-1
003c4c54:  stp      q0, q0, [x0, #0x10]
003c4c58:  ldr      x9, [x9, #0xdb8]
003c4c5c:  str      d1, [x0, #8]
003c4c60:  str      w8, [x0, #0x18]
003c4c64:  add      x9, x9, #0x10
003c4c68:  str      w8, [x0, #0x28]
003c4c6c:  str      x9, [x0]
003c4c70:  b        #0x3c8cf0
003c4c74:  mov      w0, #0x18
003c4c78:  bl       #0x644c30
003c4c7c:  movi     v0.2d, #0xffffffffffffffff
003c4c80:  adrp     x8, #0x67c000
003c4c84:  ldr      x8, [x8, #0xf38]
003c4c88:  str      xzr, [x0, #0x10]
003c4c8c:  add      x8, x8, #0x10
003c4c90:  str      d0, [x0, #8]
003c4c94:  str      x8, [x0]
003c4c98:  b        #0x3c8cf0
003c4c9c:  mov      w0, #0x30
003c4ca0:  bl       #0x644c30
003c4ca4:  movi     v0.2d, #0000000000000000
003c4ca8:  mov      w8, #-1
003c4cac:  stp      q0, q0, [x0]
003c4cb0:  str      w8, [x0, #8]
003c4cb4:  adrp     x8, #0x659000
003c4cb8:  add      x8, x8, #0x6a0
003c4cbc:  b        #0x3c6aa4
003c4cc0:  mov      w0, #0xd0
003c4cc4:  bl       #0x644c30
003c4cc8:  movi     v0.2d, #0000000000000000
003c4ccc:  mov      w8, #-1
003c4cd0:  stp      q0, q0, [x0]
003c4cd4:  str      w8, [x0, #8]
003c4cd8:  mov      w8, #0xfffe
003c4cdc:  stp      q0, q0, [x0, #0x20]
003c4ce0:  stp      q0, q0, [x0, #0x40]
003c4ce4:  stp      q0, q0, [x0, #0x60]
003c4ce8:  stp      q0, q0, [x0, #0x80]
003c4cec:  stp      q0, q0, [x0, #0xa0]
003c4cf0:  str      q0, [x0, #0xc0]
003c4cf4:  str      xzr, [x0, #0x30]
003c4cf8:  strh     w8, [x0, #0x60]
003c4cfc:  adrp     x8, #0x67d000
003c4d00:  stp      xzr, xzr, [x0, #0x68]
003c4d04:  str      xzr, [x0, #0x78]
003c4d08:  stur     q0, [x0, #0x88]
003c4d0c:  ldr      x8, [x8, #0x3f8]
003c4d10:  b        #0x3c5a30
003c4d14:  mov      w0, #0x18
003c4d18:  bl       #0x644c30
003c4d1c:  adrp     x8, #0x67c000
003c4d20:  movi     v0.2d, #0xffffffffffffffff
003c4d24:  ldr      x8, [x8, #0xf40]
003c4d28:  str      xzr, [x0, #0x10]
003c4d2c:  b        #0x3c5268
003c4d30:  mov      w0, #0x20
003c4d34:  bl       #0x644c30
003c4d38:  fmov     d0, xzr
003c4d3c:  movi     v1.2d, #0xffffffffffffffff
003c4d40:  adrp     x8, #0x67c000
003c4d44:  ldr      x8, [x8, #0xd08]
003c4d48:  b        #0x3c5f04
003c4d4c:  mov      w0, #0xc0
003c4d50:  bl       #0x644c30
003c4d54:  movi     v0.2d, #0000000000000000
003c4d58:  mov      w8, #-1
003c4d5c:  stp      q0, q0, [x0]
003c4d60:  str      w8, [x0, #8]
003c4d64:  mov      w8, #0xfffe
003c4d68:  stp      q0, q0, [x0, #0x60]
003c4d6c:  str      q0, [x0, #0x80]
003c4d70:  stp      q0, q0, [x0, #0x20]
003c4d74:  stp      q0, q0, [x0, #0x40]
003c4d78:  str      xzr, [x0, #0x30]
003c4d7c:  strh     w8, [x0, #0x60]
003c4d80:  adrp     x8, #0x67d000
003c4d84:  stp      xzr, xzr, [x0, #0x68]
003c4d88:  str      xzr, [x0, #0x78]
003c4d8c:  stp      xzr, xzr, [x0, #0x88]
003c4d90:  ldr      x8, [x8, #0x268]
003c4d94:  stp      xzr, xzr, [x0, #0xa8]
003c4d98:  str      xzr, [x0, #0xb8]
003c4d9c:  add      x9, x8, #0x10
003c4da0:  add      x8, x8, #0xc0
003c4da4:  str      x9, [x0]
003c4da8:  b        #0x3c59cc
003c4dac:  mov      w0, #0x10
003c4db0:  bl       #0x644c30
003c4db4:  mov      w8, #-1
003c4db8:  adrp     x9, #0x65c000
003c4dbc:  add      x9, x9, #0x1c8
003c4dc0:  b        #0x3c80dc
003c4dc4:  mov      w0, #0x30
003c4dc8:  bl       #0x644c30
003c4dcc:  movi     v0.2d, #0000000000000000
003c4dd0:  adrp     x8, #0x67c000
003c4dd4:  movi     d1, #0x000000ffffffff
003c4dd8:  str      q0, [x0, #0x10]
003c4ddc:  ldr      x8, [x8, #0xdb0]
003c4de0:  b        #0x3c88d0
003c4de4:  mov      w0, #0x40
003c4de8:  bl       #0x644c30
003c4dec:  movi     v0.2d, #0000000000000000
003c4df0:  adrp     x8, #0x67c000
003c4df4:  movi     d1, #0x000000ffffffff
003c4df8:  stp      q0, q0, [x0, #0x10]
003c4dfc:  ldr      x8, [x8, #0xdc0]
003c4e00:  str      q0, [x0, #0x30]
003c4e04:  b        #0x3c88d4
003c4e08:  mov      w0, #0x210
003c4e0c:  bl       #0x644c30
003c4e10:  mov      x19, x0
003c4e14:  bl       #0x648ba0
003c4e18:  mov      x0, x19
003c4e1c:  b        #0x3c8cf0
003c4e20:  mov      w0, #0xe8
003c4e24:  bl       #0x644c30
003c4e28:  movi     v0.2d, #0000000000000000
003c4e2c:  mov      w8, #-1
003c4e30:  str      xzr, [x0, #0xe0]
003c4e34:  stp      q0, q0, [x0]
003c4e38:  str      w8, [x0, #8]
003c4e3c:  mov      w8, #0xfffe
003c4e40:  stp      q0, q0, [x0, #0x20]
003c4e44:  stp      q0, q0, [x0, #0x40]
003c4e48:  stp      q0, q0, [x0, #0x60]
003c4e4c:  strh     w8, [x0, #0x60]
003c4e50:  mov      w8, #1
003c4e54:  stp      q0, q0, [x0, #0x80]
003c4e58:  stp      q0, q0, [x0, #0xa0]
003c4e5c:  strb     w8, [x0, #0xa0]
003c4e60:  mov      w8, #0x7f
003c4e64:  str      xzr, [x0, #0x30]
003c4e68:  stp      xzr, xzr, [x0, #0x70]
003c4e6c:  str      xzr, [x0, #0x68]
003c4e70:  stp      xzr, xzr, [x0, #0x88]
003c4e74:  str      xzr, [x0, #0x98]
003c4e78:  str      w8, [x0, #0xa4]
003c4e7c:  adrp     x8, #0x67d000
003c4e80:  stp      q0, q0, [x0, #0xb0]
003c4e84:  stp      q0, q0, [x0, #0xc0]
003c4e88:  ldr      x8, [x8, #0x3c8]
003c4e8c:  str      q0, [x0, #0xd0]
003c4e90:  str      wzr, [x0, #0xe0]
003c4e94:  add      x9, x8, #0x10
003c4e98:  add      x8, x8, #0x128
003c4e9c:  str      x9, [x0]
003c4ea0:  str      x8, [x0, #0xa8]
003c4ea4:  b        #0x3c8cf0
003c4ea8:  mov      w0, #0xe8
003c4eac:  bl       #0x644c30
003c4eb0:  movi     v0.2d, #0000000000000000
003c4eb4:  mov      x19, x0
003c4eb8:  str      xzr, [x0, #0xe0]
003c4ebc:  stp      q0, q0, [x0]
003c4ec0:  stp      q0, q0, [x0, #0x20]
003c4ec4:  stp      q0, q0, [x0, #0x40]
003c4ec8:  stp      q0, q0, [x0, #0x60]
003c4ecc:  stp      q0, q0, [x0, #0x80]
003c4ed0:  stp      q0, q0, [x0, #0xa0]
003c4ed4:  stp      q0, q0, [x0, #0xc0]
003c4ed8:  bl       #0x3ca1d8
003c4edc:  mov      x0, x19
003c4ee0:  b        #0x3c8cf0
003c4ee4:  mov      w0, #0xb8
003c4ee8:  bl       #0x644c30
003c4eec:  movi     v0.2d, #0000000000000000
003c4ef0:  mov      w8, #-1
003c4ef4:  mov      w9, #0x3f800000
003c4ef8:  str      xzr, [x0, #0xb0]
003c4efc:  str      w9, [x0, #0xb0]
003c4f00:  adrp     x9, #0x67c000
003c4f04:  stp      q0, q0, [x0]
003c4f08:  str      w8, [x0, #8]
003c4f0c:  mov      w8, #0xfffe
003c4f10:  stp      q0, q0, [x0, #0x20]
003c4f14:  stp      q0, q0, [x0, #0x40]
003c4f18:  stp      q0, q0, [x0, #0x60]
003c4f1c:  stp      q0, q0, [x0, #0x80]
003c4f20:  str      q0, [x0, #0xa0]
003c4f24:  strb     wzr, [x0, #0x11]
003c4f28:  str      xzr, [x0, #0x30]
003c4f2c:  strh     w8, [x0, #0x60]
003c4f30:  mov      x8, #-0xffff00000001
003c4f34:  stp      xzr, xzr, [x0, #0x68]
003c4f38:  movk     x8, #0x3f80, lsl #48
003c4f3c:  str      xzr, [x0, #0x78]
003c4f40:  stp      xzr, xzr, [x0, #0x88]
003c4f44:  str      xzr, [x0, #0x98]
003c4f48:  ldr      x9, [x9, #0xe58]
003c4f4c:  stp      x8, xzr, [x0, #0xa0]
003c4f50:  b        #0x3c8ce8
003c4f54:  mov      w0, #0x90
003c4f58:  bl       #0x644c30
003c4f5c:  mov      x19, x0
003c4f60:  bl       #0x648030
003c4f64:  mov      x0, x19
003c4f68:  b        #0x3c8cf0
003c4f6c:  mov      w0, #0x90
003c4f70:  bl       #0x644c30
003c4f74:  mov      x19, x0
003c4f78:  bl       #0x3cbd98
003c4f7c:  mov      x0, x19
003c4f80:  b        #0x3c8cf0
003c4f84:  mov      w0, #0x90
003c4f88:  bl       #0x644c30
003c4f8c:  movi     v0.2d, #0000000000000000
003c4f90:  mov      w8, #-1
003c4f94:  mov      w9, #0xfffe
003c4f98:  str      q0, [x0, #0x80]
003c4f9c:  stp      q0, q0, [x0]
003c4fa0:  stp      q0, q0, [x0, #0x20]
003c4fa4:  stp      q0, q0, [x0, #0x40]
003c4fa8:  stp      q0, q0, [x0, #0x60]
003c4fac:  str      w8, [x0, #8]
003c4fb0:  str      xzr, [x0, #0x30]
003c4fb4:  strh     w9, [x0, #0x60]
003c4fb8:  adrp     x9, #0x67c000
003c4fbc:  stp      xzr, xzr, [x0, #0x68]
003c4fc0:  ldr      x9, [x9, #0xe68]
003c4fc4:  b        #0x3c8ce0
003c4fc8:  mov      w0, #0x118
003c4fcc:  bl       #0x644c30
003c4fd0:  movi     v0.2d, #0000000000000000
003c4fd4:  mov      w8, #-1
003c4fd8:  adrp     x9, #0x67d000
003c4fdc:  stp      q0, q0, [x0]
003c4fe0:  str      w8, [x0, #8]
003c4fe4:  mov      w8, #0xfffe
003c4fe8:  stp      q0, q0, [x0, #0x20]
003c4fec:  stp      q0, q0, [x0, #0x40]
003c4ff0:  stp      q0, q0, [x0, #0x60]
003c4ff4:  strh     w8, [x0, #0x60]
003c4ff8:  mov      w8, #0x3f800000
003c4ffc:  stp      q0, q0, [x0, #0x80]
003c5000:  stp      q0, q0, [x0, #0xa0]
003c5004:  str      q0, [x0, #0xc0]
003c5008:  str      xzr, [x0, #0x30]
003c500c:  stp      xzr, xzr, [x0, #0x68]
003c5010:  str      xzr, [x0, #0x78]
003c5014:  stur     q0, [x0, #0x88]
003c5018:  stur     q0, [x0, #0x98]
003c501c:  str      xzr, [x0, #0xa8]
003c5020:  str      w8, [x0, #0xb0]
003c5024:  str      w8, [x0, #0xc4]
003c5028:  mov      x8, x0
003c502c:  stur     q0, [x0, #0xf8]
003c5030:  stur     q0, [x0, #0xe8]
003c5034:  stur     q0, [x0, #0xd8]
003c5038:  ldr      x9, [x9, #0x398]
003c503c:  str      q0, [x8, #0xc8]!
003c5040:  str      q0, [x8, #0x40]
003c5044:  add      x8, x9, #0x10
003c5048:  str      x8, [x0]
003c504c:  add      x8, x9, #0xf8
003c5050:  str      x8, [x0, #0xb8]
003c5054:  b        #0x3c8cf0
003c5058:  mov      w0, #0x18
003c505c:  bl       #0x644c30
003c5060:  adrp     x9, #0x67c000
003c5064:  movi     d0, #0x000000ffffffff
003c5068:  mov      w8, #-1
003c506c:  ldr      x9, [x9, #0xdf8]
003c5070:  b        #0x3c6eac
003c5074:  mov      w0, #0xd0
003c5078:  bl       #0x644c30
003c507c:  movi     v0.2d, #0000000000000000
003c5080:  mov      w8, #-1
003c5084:  stp      q0, q0, [x0]
003c5088:  str      w8, [x0, #8]
003c508c:  mov      w8, #0xfffe
003c5090:  stp      q0, q0, [x0, #0x20]
003c5094:  stp      q0, q0, [x0, #0x40]
003c5098:  stp      q0, q0, [x0, #0x60]
003c509c:  stp      q0, q0, [x0, #0x80]
003c50a0:  stp      q0, q0, [x0, #0xa0]
003c50a4:  str      q0, [x0, #0xc0]
003c50a8:  str      xzr, [x0, #0x30]
003c50ac:  strh     w8, [x0, #0x60]
003c50b0:  adrp     x8, #0x67d000
003c50b4:  stp      xzr, xzr, [x0, #0x68]
003c50b8:  str      xzr, [x0, #0x78]
003c50bc:  stur     q0, [x0, #0x88]
003c50c0:  ldr      x8, [x8, #0x3e0]
003c50c4:  b        #0x3c5a30
003c50c8:  mov      w0, #0x178
003c50cc:  bl       #0x644c30
003c50d0:  movi     v0.2d, #0000000000000000
003c50d4:  mov      w8, #-1
003c50d8:  stp      q0, q0, [x0]
003c50dc:  str      w8, [x0, #8]
003c50e0:  mov      w8, #0xfffe
003c50e4:  stp      q0, q0, [x0, #0x20]
003c50e8:  stp      q0, q0, [x0, #0x40]
003c50ec:  stp      q0, q0, [x0, #0x60]
003c50f0:  strh     w8, [x0, #0x60]
003c50f4:  adrp     x8, #0x24e000
003c50f8:  ldr      q1, [x8, #0x260]
003c50fc:  adrp     x8, #0x24d000
003c5100:  stp      q0, q0, [x0, #0x80]
003c5104:  stp      q0, q0, [x0, #0xa0]
003c5108:  str      q0, [x0, #0xc0]
003c510c:  strb     wzr, [x0, #0x11]
003c5110:  str      xzr, [x0, #0x30]
003c5114:  stp      xzr, xzr, [x0, #0x68]
003c5118:  str      xzr, [x0, #0x78]
003c511c:  stp      xzr, xzr, [x0, #0x88]
003c5120:  str      wzr, [x0, #0xa0]
003c5124:  stur     q1, [x0, #0xa4]
003c5128:  ldr      q1, [x8, #0xeb0]
003c512c:  adrp     x8, #0x67d000
003c5130:  ldr      x8, [x8, #0x4c0]
003c5134:  str      xzr, [x0, #0x98]
003c5138:  stur     q1, [x0, #0xb4]
003c513c:  add      x8, x8, #0x10
003c5140:  stur     q0, [x0, #0xf8]
003c5144:  str      x8, [x0]
003c5148:  mov      x8, x0
003c514c:  stur     q0, [x0, #0xe8]
003c5150:  stur     q0, [x0, #0xd8]
003c5154:  str      q0, [x8, #0xc8]!
003c5158:  stp      q0, q0, [x8, #0x50]
003c515c:  stp      q0, q0, [x8, #0x70]
003c5160:  stp      q0, q0, [x8, #0x90]
003c5164:  str      q0, [x8, #0x40]
003c5168:  b        #0x3c8cf0
003c516c:  mov      w0, #0x10
003c5170:  bl       #0x644c30
003c5174:  adrp     x8, #0x24e000
003c5178:  ldr      d0, [x8, #0x660]
003c517c:  adrp     x8, #0x65f000
003c5180:  add      x8, x8, #0x3e8
003c5184:  b        #0x3c796c
003c5188:  mov      w0, #0x18
003c518c:  bl       #0x644c30
003c5190:  movi     d0, #0x000000ffffffff
003c5194:  adrp     x8, #0x67c000
003c5198:  ldr      x8, [x8, #0xe30]
003c519c:  b        #0x3c7758
003c51a0:  mov      w0, #0x88
003c51a4:  bl       #0x644c30
003c51a8:  movi     v0.2d, #0000000000000000
003c51ac:  mov      x19, x0
003c51b0:  str      xzr, [x0, #0x80]
003c51b4:  stp      q0, q0, [x0]
003c51b8:  stp      q0, q0, [x0, #0x20]
003c51bc:  stp      q0, q0, [x0, #0x40]
003c51c0:  stp      q0, q0, [x0, #0x60]
003c51c4:  bl       #0x3cbeb0
003c51c8:  mov      x0, x19
003c51cc:  b        #0x3c8cf0
003c51d0:  mov      w0, #0x30
003c51d4:  bl       #0x644c30
003c51d8:  movi     v0.2d, #0000000000000000
003c51dc:  mov      w8, #-1
003c51e0:  str      q0, [x0]
003c51e4:  str      w8, [x0, #8]
003c51e8:  adrp     x8, #0x664000
003c51ec:  add      x8, x8, #0x758
003c51f0:  b        #0x3c87a0
003c51f4:  mov      w0, #0x10
003c51f8:  bl       #0x644c30
003c51fc:  movi     v0.2d, #0xffffffffffffffff
003c5200:  adrp     x8, #0x65f000
003c5204:  add      x8, x8, #0x4b8
003c5208:  b        #0x3c7cb4
003c520c:  mov      w0, #0x150
003c5210:  bl       #0x644c30
003c5214:  movi     v0.2d, #0000000000000000
003c5218:  mov      x19, x0
003c521c:  stp      q0, q0, [x0]
003c5220:  stp      q0, q0, [x0, #0x20]
003c5224:  stp      q0, q0, [x0, #0x40]
003c5228:  stp      q0, q0, [x0, #0x60]
003c522c:  stp      q0, q0, [x0, #0x80]
003c5230:  stp      q0, q0, [x0, #0xa0]
003c5234:  stp      q0, q0, [x0, #0xc0]
003c5238:  stp      q0, q0, [x0, #0xe0]
003c523c:  stp      q0, q0, [x0, #0x100]
003c5240:  stp      q0, q0, [x0, #0x120]
003c5244:  str      q0, [x0, #0x140]
003c5248:  bl       #0x3cb3b0
003c524c:  mov      x0, x19
003c5250:  b        #0x3c8cf0
003c5254:  mov      w0, #0x10
003c5258:  bl       #0x644c30
003c525c:  movi     v0.2d, #0xffffffffffffffff
003c5260:  adrp     x8, #0x67c000
003c5264:  ldr      x8, [x8, #0xf50]
003c5268:  add      x8, x8, #0x10
003c526c:  str      d0, [x0, #8]
003c5270:  b        #0x3c8cec
003c5274:  mov      w0, #0xf8
003c5278:  bl       #0x644c30
003c527c:  movi     v0.2d, #0000000000000000
003c5280:  mov      x19, x0
003c5284:  str      xzr, [x0, #0xf0]
003c5288:  stp      q0, q0, [x0]
003c528c:  stp      q0, q0, [x0, #0x20]
003c5290:  stp      q0, q0, [x0, #0x40]
003c5294:  stp      q0, q0, [x0, #0x60]
003c5298:  stp      q0, q0, [x0, #0x80]
003c529c:  stp      q0, q0, [x0, #0xa0]
003c52a0:  stp      q0, q0, [x0, #0xc0]
003c52a4:  str      q0, [x0, #0xe0]
003c52a8:  bl       #0x3cbb64
003c52ac:  mov      x0, x19
003c52b0:  b        #0x3c8cf0
003c52b4:  mov      w0, #0x78
003c52b8:  bl       #0x644c30
003c52bc:  movi     v0.2d, #0000000000000000
003c52c0:  mov      w8, #-1
003c52c4:  stp      q0, q0, [x0]
003c52c8:  stp      q0, q0, [x0, #0x30]
003c52cc:  str      q0, [x0, #0x20]
003c52d0:  str      w8, [x0, #8]
003c52d4:  adrp     x8, #0x67c000
003c52d8:  str      wzr, [x0, #0x40]
003c52dc:  stur     q0, [x0, #0x58]
003c52e0:  ldr      x8, [x8, #0xd38]
003c52e4:  stur     q0, [x0, #0x68]
003c52e8:  stur     q0, [x0, #0x48]
003c52ec:  b        #0x3c8c18
003c52f0:  mov      w0, #0x90
003c52f4:  bl       #0x644c30
003c52f8:  movi     v0.2d, #0000000000000000
003c52fc:  mov      w8, #-1
003c5300:  stp      q0, q0, [x0]
003c5304:  str      w8, [x0, #8]
003c5308:  mov      w8, #0xfffe
003c530c:  stp      q0, q0, [x0, #0x20]
003c5310:  stp      q0, q0, [x0, #0x40]
003c5314:  stp      q0, q0, [x0, #0x60]
003c5318:  str      q0, [x0, #0x80]
003c531c:  str      xzr, [x0, #0x30]
003c5320:  strh     w8, [x0, #0x60]
003c5324:  adrp     x8, #0x67d000
003c5328:  ldr      x8, [x8, #0x4d8]
003c532c:  b        #0x3c838c
003c5330:  mov      w0, #0x40
003c5334:  bl       #0x644c30
003c5338:  movi     v0.2d, #0000000000000000
003c533c:  mov      w8, #-1
003c5340:  stp      q0, q0, [x0]
003c5344:  stp      q0, q0, [x0, #0x20]
003c5348:  str      w8, [x0, #8]
003c534c:  str      w8, [x0, #0x38]
003c5350:  adrp     x8, #0x664000
003c5354:  add      x8, x8, #0x458
003c5358:  b        #0x3c7ef4
003c535c:  mov      w0, #0x140
003c5360:  bl       #0x644c30
003c5364:  movi     v0.2d, #0000000000000000
003c5368:  mov      x19, x0
003c536c:  stp      q0, q0, [x0]
003c5370:  stp      q0, q0, [x0, #0x20]
003c5374:  stp      q0, q0, [x0, #0x40]
003c5378:  stp      q0, q0, [x0, #0x60]
003c537c:  stp      q0, q0, [x0, #0x80]
003c5380:  stp      q0, q0, [x0, #0xa0]
003c5384:  stp      q0, q0, [x0, #0xc0]
003c5388:  stp      q0, q0, [x0, #0xe0]
003c538c:  stp      q0, q0, [x0, #0x100]
003c5390:  stp      q0, q0, [x0, #0x120]
003c5394:  bl       #0x3c9bb4
003c5398:  mov      x0, x19
003c539c:  b        #0x3c8cf0
003c53a0:  mov      w0, #0x30
003c53a4:  bl       #0x644c30
003c53a8:  movi     v0.2d, #0000000000000000
003c53ac:  mov      w8, #-1
003c53b0:  str      q0, [x0]
003c53b4:  str      w8, [x0, #8]
003c53b8:  adrp     x8, #0x664000
003c53bc:  add      x8, x8, #0xa28
003c53c0:  b        #0x3c87a0
003c53c4:  mov      w0, #0x30
003c53c8:  bl       #0x644c30
003c53cc:  movi     v0.2d, #0000000000000000
003c53d0:  movi     d1, #0x000000ffffffff
003c53d4:  adrp     x8, #0x67c000
003c53d8:  str      q0, [x0, #0x10]
003c53dc:  ldr      x8, [x8, #0xdc8]
003c53e0:  b        #0x3c88d0
003c53e4:  mov      w0, #0xe0
003c53e8:  bl       #0x644c30
003c53ec:  movi     v0.2d, #0000000000000000
003c53f0:  mov      w8, #-1
003c53f4:  stp      q0, q0, [x0]
003c53f8:  str      w8, [x0, #8]
003c53fc:  mov      w8, #0xfffe
003c5400:  stp      q0, q0, [x0, #0x20]
003c5404:  stp      q0, q0, [x0, #0x40]
003c5408:  stp      q0, q0, [x0, #0x60]
003c540c:  strh     w8, [x0, #0x60]
003c5410:  adrp     x8, #0x663000
003c5414:  add      x8, x8, #0xa60
003c5418:  stp      q0, q0, [x0, #0x80]
003c541c:  stp      q0, q0, [x0, #0xa0]
003c5420:  stp      q0, q0, [x0, #0xc0]
003c5424:  str      xzr, [x0, #0x30]
003c5428:  stp      xzr, xzr, [x0, #0x70]
003c542c:  str      xzr, [x0, #0x68]
003c5430:  stp      xzr, xzr, [x0, #0x88]
003c5434:  str      xzr, [x0, #0x98]
003c5438:  stp      xzr, xzr, [x0, #0xb0]
003c543c:  strh     wzr, [x0, #0xc0]
003c5440:  str      x8, [x0]
003c5444:  add      x8, x8, #0xc0
003c5448:  b        #0x3c6e8c
003c544c:  mov      w0, #0xf0
003c5450:  bl       #0x644c30
003c5454:  movi     v0.2d, #0000000000000000
003c5458:  adrp     x9, #0x67d000
003c545c:  mov      w8, #-1
003c5460:  stp      q0, q0, [x0]
003c5464:  stp      q0, q0, [x0, #0x20]
003c5468:  stp      q0, q0, [x0, #0x40]
003c546c:  stp      q0, q0, [x0, #0x60]
003c5470:  stp      q0, q0, [x0, #0x80]
003c5474:  stp      q0, q0, [x0, #0xa0]
003c5478:  stp      q0, q0, [x0, #0xd0]
003c547c:  str      q0, [x0, #0xc0]
003c5480:  ldr      x9, [x9, #0x1f8]
003c5484:  str      w8, [x0, #8]
003c5488:  stur     q0, [x0, #0xb9]
003c548c:  add      x8, x9, #0x10
003c5490:  str      x8, [x0]
003c5494:  add      x8, x9, #0xc8
003c5498:  b        #0x3c5948
003c549c:  mov      w0, #0x18
003c54a0:  bl       #0x644c30
003c54a4:  adrp     x9, #0x67d000
003c54a8:  movi     d0, #0x000000ffffffff
003c54ac:  mov      w8, #-1
003c54b0:  ldr      x9, [x9, #0x368]
003c54b4:  b        #0x3c6eac
003c54b8:  mov      w0, #0x118
003c54bc:  bl       #0x644c30
003c54c0:  movi     v0.2d, #0000000000000000
003c54c4:  mov      x19, x0
003c54c8:  str      xzr, [x0, #0x110]
003c54cc:  stp      q0, q0, [x0]
003c54d0:  stp      q0, q0, [x0, #0x20]
003c54d4:  stp      q0, q0, [x0, #0x40]
003c54d8:  stp      q0, q0, [x0, #0x60]
003c54dc:  stp      q0, q0, [x0, #0x80]
003c54e0:  stp      q0, q0, [x0, #0xa0]
003c54e4:  stp      q0, q0, [x0, #0xc0]
003c54e8:  stp      q0, q0, [x0, #0xe0]
003c54ec:  str      q0, [x0, #0x100]
003c54f0:  bl       #0x3cac48
003c54f4:  mov      x0, x19
003c54f8:  b        #0x3c8cf0
003c54fc:  mov      w0, #0x200
003c5500:  bl       #0x644c30
003c5504:  mov      x19, x0
003c5508:  bl       #0x648c50
003c550c:  mov      x0, x19
003c5510:  b        #0x3c8cf0
003c5514:  mov      w0, #0x110
003c5518:  bl       #0x644c30
003c551c:  movi     v0.2d, #0000000000000000
003c5520:  mov      w8, #-1
003c5524:  stp      q0, q0, [x0]
003c5528:  str      w8, [x0, #8]
003c552c:  mov      w8, #0xfffe
003c5530:  stp      q0, q0, [x0, #0x20]
003c5534:  stp      q0, q0, [x0, #0x40]
003c5538:  stp      q0, q0, [x0, #0x60]
003c553c:  strh     w8, [x0, #0x60]
003c5540:  mov      w8, #1
003c5544:  stp      q0, q0, [x0, #0x40]
003c5548:  stp      q0, q0, [x0, #0x80]
003c554c:  stp      q0, q0, [x0, #0xa0]
003c5550:  stp      q0, q0, [x0, #0xc0]
003c5554:  stp      q0, q0, [x0, #0xe0]
003c5558:  str      q0, [x0, #0x100]
003c555c:  str      xzr, [x0, #0x30]
003c5560:  stp      xzr, xzr, [x0, #0x70]
003c5564:  str      xzr, [x0, #0x68]
003c5568:  str      w8, [x0, #0x8c]
003c556c:  adrp     x8, #0x67d000
003c5570:  str      xzr, [x0, #0xa0]
003c5574:  ldr      x8, [x8, #0x288]
003c5578:  stp      xzr, xzr, [x0, #0x90]
003c557c:  stur     q0, [x0, #0xb8]
003c5580:  add      x8, x8, #0x10
003c5584:  stur     q0, [x0, #0xc8]
003c5588:  str      x8, [x0]
003c558c:  stur     q0, [x0, #0xd8]
003c5590:  stur     q0, [x0, #0xe8]
003c5594:  str      xzr, [x0, #0xf8]
003c5598:  b        #0x3c8cf0
003c559c:  mov      w0, #0x10
003c55a0:  bl       #0x644c30
003c55a4:  movi     d0, #0x000000ffffffff
003c55a8:  adrp     x8, #0x65f000
003c55ac:  add      x8, x8, #0x8c8
003c55b0:  b        #0x3c796c
003c55b4:  mov      w0, #0x220
003c55b8:  bl       #0x644c30
003c55bc:  mov      w1, wzr
003c55c0:  mov      w2, #0x220
003c55c4:  mov      x19, x0
003c55c8:  bl       #0x645640
003c55cc:  mov      x0, x19
003c55d0:  bl       #0x3cb1fc
003c55d4:  mov      x0, x19
003c55d8:  b        #0x3c8cf0
003c55dc:  mov      w0, #0x28
003c55e0:  bl       #0x644c30
003c55e4:  mov      x19, x0
003c55e8:  bl       #0x647080
003c55ec:  mov      x0, x19
003c55f0:  b        #0x3c8cf0
003c55f4:  mov      w0, #0x148
003c55f8:  bl       #0x644c30
003c55fc:  movi     v0.2d, #0000000000000000
003c5600:  adrp     x8, #0x24e000
003c5604:  mov      w9, #-1
003c5608:  stp      q0, q0, [x0]
003c560c:  stp      q0, q0, [x0, #0x20]
003c5610:  stp      q0, q0, [x0, #0xd0]
003c5614:  stp      q0, q0, [x0, #0xf0]
003c5618:  str      q0, [x0, #0x130]
003c561c:  stp      q0, q0, [x0, #0x30]
003c5620:  stp      q0, q0, [x0, #0x40]
003c5624:  stp      q0, q0, [x0, #0x50]
003c5628:  stp      q0, q0, [x0, #0x60]
003c562c:  stp      q0, q0, [x0, #0x70]
003c5630:  stp      q0, q0, [x0, #0x80]
003c5634:  stp      q0, q0, [x0, #0x90]
003c5638:  stp      q0, q0, [x0, #0xa0]
003c563c:  stp      q0, q0, [x0, #0xb0]
003c5640:  stp      q0, q0, [x0, #0x110]
003c5644:  stur     q0, [x0, #0xb9]
003c5648:  ldr      d0, [x8, #0x888]
003c564c:  adrp     x8, #0x67d000
003c5650:  str      w9, [x0, #8]
003c5654:  mov      w9, #0x3f800000
003c5658:  ldr      x8, [x8, #0x1c8]
003c565c:  str      w9, [x0, #0xe0]
003c5660:  str      d0, [x0, #0xd8]
003c5664:  add      x9, x8, #0x10
003c5668:  add      x8, x8, #0xd8
003c566c:  stp      xzr, xzr, [x0, #0x108]
003c5670:  str      x9, [x0]
003c5674:  str      x8, [x0, #0x28]
003c5678:  str      wzr, [x0, #0x118]
003c567c:  stp      xzr, xzr, [x0, #0x120]
003c5680:  strh     wzr, [x0, #0x130]
003c5684:  stp      xzr, xzr, [x0, #0x138]
003c5688:  stp      xzr, xzr, [x0, #0xe8]
003c568c:  strb     wzr, [x0, #0xf8]
003c5690:  b        #0x3c8cf0
003c5694:  mov      w0, #0xb8
003c5698:  bl       #0x644c30
003c569c:  movi     v0.2d, #0000000000000000
003c56a0:  mov      x19, x0
003c56a4:  str      xzr, [x0, #0xb0]
003c56a8:  stp      q0, q0, [x0]
003c56ac:  stp      q0, q0, [x0, #0x20]
003c56b0:  stp      q0, q0, [x0, #0x40]
003c56b4:  stp      q0, q0, [x0, #0x60]
003c56b8:  stp      q0, q0, [x0, #0x80]
003c56bc:  str      q0, [x0, #0xa0]
003c56c0:  bl       #0x3c9e48
003c56c4:  mov      x0, x19
003c56c8:  b        #0x3c8cf0
003c56cc:  mov      w0, #0xf8
003c56d0:  bl       #0x644c30
003c56d4:  movi     v0.2d, #0000000000000000
003c56d8:  mov      x19, x0
003c56dc:  str      xzr, [x0, #0xf0]
003c56e0:  stp      q0, q0, [x0]
003c56e4:  stp      q0, q0, [x0, #0x20]
003c56e8:  stp      q0, q0, [x0, #0x40]
003c56ec:  stp      q0, q0, [x0, #0x60]
003c56f0:  stp      q0, q0, [x0, #0x80]
003c56f4:  stp      q0, q0, [x0, #0xa0]
003c56f8:  stp      q0, q0, [x0, #0xc0]
003c56fc:  str      q0, [x0, #0xe0]
003c5700:  bl       #0x3caaec
003c5704:  mov      x0, x19
003c5708:  b        #0x3c8cf0
003c570c:  mov      w0, #0x60
003c5710:  bl       #0x644c30
003c5714:  movi     v0.2d, #0000000000000000
003c5718:  mov      w8, #-1
003c571c:  stp      xzr, xzr, [x0, #0x50]
003c5720:  stp      q0, q0, [x0]
003c5724:  str      w8, [x0, #8]
003c5728:  adrp     x8, #0x656000
003c572c:  add      x8, x8, #0x138
003c5730:  b        #0x3c8984
003c5734:  mov      w0, #0x1c0
003c5738:  bl       #0x644c30
003c573c:  movi     v0.2d, #0000000000000000
003c5740:  mov      x19, x0
003c5744:  stp      q0, q0, [x0]
003c5748:  stp      q0, q0, [x0, #0x20]
003c574c:  stp      q0, q0, [x0, #0x40]
003c5750:  stp      q0, q0, [x0, #0x60]
003c5754:  stp      q0, q0, [x0, #0x80]
003c5758:  stp      q0, q0, [x0, #0xa0]
003c575c:  stp      q0, q0, [x0, #0xc0]
003c5760:  stp      q0, q0, [x0, #0xe0]
003c5764:  stp      q0, q0, [x0, #0x100]
003c5768:  stp      q0, q0, [x0, #0x120]
003c576c:  stp      q0, q0, [x0, #0x140]
003c5770:  stp      q0, q0, [x0, #0x160]
003c5774:  stp      q0, q0, [x0, #0x180]
003c5778:  stp      q0, q0, [x0, #0x1a0]
003c577c:  bl       #0x3cad30
003c5780:  mov      x0, x19
003c5784:  b        #0x3c8cf0
003c5788:  mov      w0, #0xf8
003c578c:  bl       #0x644c30
003c5790:  movi     v0.2d, #0000000000000000
003c5794:  mov      x19, x0
003c5798:  str      xzr, [x0, #0xf0]
003c579c:  stp      q0, q0, [x0]
003c57a0:  stp      q0, q0, [x0, #0x20]
003c57a4:  stp      q0, q0, [x0, #0x40]
003c57a8:  stp      q0, q0, [x0, #0x60]
003c57ac:  stp      q0, q0, [x0, #0x80]
003c57b0:  stp      q0, q0, [x0, #0xa0]
003c57b4:  stp      q0, q0, [x0, #0xc0]
003c57b8:  str      q0, [x0, #0xe0]
003c57bc:  bl       #0x3ca138
003c57c0:  mov      x0, x19
003c57c4:  b        #0x3c8cf0
003c57c8:  mov      w0, #0x28
003c57cc:  bl       #0x644c30
003c57d0:  movi     v0.2d, #0000000000000000
003c57d4:  mov      w8, #-1
003c57d8:  str      xzr, [x0, #0x20]
003c57dc:  stp      q0, q0, [x0]
003c57e0:  str      w8, [x0, #8]
003c57e4:  adrp     x8, #0x663000
003c57e8:  add      x8, x8, #0xeb8
003c57ec:  b        #0x3c8cec
003c57f0:  mov      w0, #0xc8
003c57f4:  bl       #0x644c30
003c57f8:  movi     v0.2d, #0000000000000000
003c57fc:  mov      x19, x0
003c5800:  str      xzr, [x0, #0xc0]
003c5804:  stp      q0, q0, [x0]
003c5808:  stp      q0, q0, [x0, #0x20]
003c580c:  stp      q0, q0, [x0, #0x40]
003c5810:  stp      q0, q0, [x0, #0x60]
003c5814:  stp      q0, q0, [x0, #0x80]
003c5818:  stp      q0, q0, [x0, #0xa0]
003c581c:  bl       #0x3c9dc8
003c5820:  mov      x0, x19
003c5824:  b        #0x3c8cf0
003c5828:  mov      w0, #0x118
003c582c:  bl       #0x644c30
003c5830:  movi     v0.2d, #0000000000000000
003c5834:  mov      w8, #-1
003c5838:  str      xzr, [x0, #0x110]
003c583c:  stp      q0, q0, [x0]
003c5840:  str      w8, [x0, #8]
003c5844:  mov      w8, #0xfffe
003c5848:  stp      q0, q0, [x0, #0x20]
003c584c:  stp      q0, q0, [x0, #0x40]
003c5850:  stp      q0, q0, [x0, #0x60]
003c5854:  strh     w8, [x0, #0x60]
003c5858:  mov      w8, #1
003c585c:  stp      q0, q0, [x0, #0x40]
003c5860:  stp      q0, q0, [x0, #0x80]
003c5864:  stp      q0, q0, [x0, #0xa0]
003c5868:  stp      q0, q0, [x0, #0xc0]
003c586c:  stp      q0, q0, [x0, #0xe0]
003c5870:  str      q0, [x0, #0x100]
003c5874:  str      xzr, [x0, #0x30]
003c5878:  stp      xzr, xzr, [x0, #0x70]
003c587c:  str      xzr, [x0, #0x68]
003c5880:  str      w8, [x0, #0x8c]
003c5884:  adrp     x8, #0x67d000
003c5888:  stur     q0, [x0, #0xb8]
003c588c:  stur     q0, [x0, #0xc8]
003c5890:  stur     q0, [x0, #0xd8]
003c5894:  stur     q0, [x0, #0xe8]
003c5898:  str      xzr, [x0, #0xf8]
003c589c:  ldr      x8, [x8, #0x548]
003c58a0:  b        #0x3c8418
003c58a4:  mov      w0, #0x18
003c58a8:  bl       #0x644c30
003c58ac:  mov      w8, #-1
003c58b0:  str      xzr, [x0, #0x10]
003c58b4:  adrp     x9, #0x662000
003c58b8:  add      x9, x9, #0x40
003c58bc:  b        #0x3c80dc
003c58c0:  mov      w0, #0x90
003c58c4:  bl       #0x644c30
003c58c8:  movi     v0.2d, #0000000000000000
003c58cc:  mov      w8, #-1
003c58d0:  stp      q0, q0, [x0]
003c58d4:  str      w8, [x0, #8]
003c58d8:  mov      w8, #0xfffe
003c58dc:  stp      q0, q0, [x0, #0x20]
003c58e0:  stp      q0, q0, [x0, #0x40]
003c58e4:  stp      q0, q0, [x0, #0x60]
003c58e8:  str      q0, [x0, #0x80]
003c58ec:  str      xzr, [x0, #0x30]
003c58f0:  strh     w8, [x0, #0x60]
003c58f4:  adrp     x8, #0x67d000
003c58f8:  ldr      x8, [x8, #0x328]
003c58fc:  b        #0x3c838c
003c5900:  mov      w0, #0xf0
003c5904:  bl       #0x644c30
003c5908:  movi     v0.2d, #0000000000000000
003c590c:  mov      w8, #-1
003c5910:  stp      q0, q0, [x0]
003c5914:  str      w8, [x0, #8]
003c5918:  adrp     x8, #0x660000
003c591c:  add      x8, x8, #0x760
003c5920:  str      x8, [x0]
003c5924:  add      x8, x8, #0xb8
003c5928:  stp      q0, q0, [x0, #0x20]
003c592c:  stp      q0, q0, [x0, #0x40]
003c5930:  stp      q0, q0, [x0, #0x60]
003c5934:  stp      q0, q0, [x0, #0x80]
003c5938:  stp      q0, q0, [x0, #0xa0]
003c593c:  stp      q0, q0, [x0, #0xd0]
003c5940:  str      q0, [x0, #0xc0]
003c5944:  stur     q0, [x0, #0xb9]
003c5948:  str      x8, [x0, #0x28]
003c594c:  adrp     x8, #0x66a000
003c5950:  add      x8, x8, #0xf48
003c5954:  str      x8, [x0, #0xe0]
003c5958:  b        #0x3c8cf0
003c595c:  mov      w0, #0x90
003c5960:  bl       #0x644c30
003c5964:  mov      x19, x0
003c5968:  bl       #0x648bc0
003c596c:  mov      x0, x19
003c5970:  b        #0x3c8cf0
003c5974:  mov      w0, #0xc0
003c5978:  bl       #0x644c30
003c597c:  movi     v0.2d, #0000000000000000
003c5980:  mov      w8, #-1
003c5984:  stp      xzr, xzr, [x0, #0xa8]
003c5988:  str      xzr, [x0, #0xb8]
003c598c:  stp      q0, q0, [x0]
003c5990:  str      w8, [x0, #8]
003c5994:  mov      w8, #0xfffe
003c5998:  stp      q0, q0, [x0, #0x60]
003c599c:  strh     w8, [x0, #0x60]
003c59a0:  adrp     x8, #0x65e000
003c59a4:  add      x8, x8, #0xcc8
003c59a8:  str      x8, [x0]
003c59ac:  add      x8, x8, #0xa8
003c59b0:  str      q0, [x0, #0x80]
003c59b4:  stp      q0, q0, [x0, #0x20]
003c59b8:  stp      q0, q0, [x0, #0x40]
003c59bc:  str      xzr, [x0, #0x30]
003c59c0:  stp      xzr, xzr, [x0, #0x68]
003c59c4:  str      xzr, [x0, #0x78]
003c59c8:  stp      xzr, xzr, [x0, #0x88]
003c59cc:  stp      xzr, x8, [x0, #0x98]
003c59d0:  b        #0x3c8cf0
003c59d4:  mov      w0, #0xd8
003c59d8:  bl       #0x644c30
003c59dc:  movi     v0.2d, #0000000000000000
003c59e0:  mov      w8, #-1
003c59e4:  str      xzr, [x0, #0xd0]
003c59e8:  stp      q0, q0, [x0]
003c59ec:  str      w8, [x0, #8]
003c59f0:  mov      w8, #0xfffe
003c59f4:  stp      q0, q0, [x0, #0x20]
003c59f8:  stp      q0, q0, [x0, #0x40]
003c59fc:  stp      q0, q0, [x0, #0x60]
003c5a00:  stp      q0, q0, [x0, #0x80]
003c5a04:  stp      q0, q0, [x0, #0xa0]
003c5a08:  str      q0, [x0, #0xc0]
003c5a0c:  str      xzr, [x0, #0x30]
003c5a10:  strh     w8, [x0, #0x60]
003c5a14:  adrp     x8, #0x67d000
003c5a18:  stp      xzr, xzr, [x0, #0x70]
003c5a1c:  str      xzr, [x0, #0x68]
003c5a20:  stur     xzr, [x0, #0xcc]
003c5a24:  stur     xzr, [x0, #0xc4]
003c5a28:  stur     q0, [x0, #0x88]
003c5a2c:  ldr      x8, [x8, #0x428]
003c5a30:  stur     q0, [x0, #0x98]
003c5a34:  stur     q0, [x0, #0xa2]
003c5a38:  b        #0x3c8c18
003c5a3c:  mov      w0, #0x128
003c5a40:  bl       #0x644c30
003c5a44:  movi     v0.2d, #0000000000000000
003c5a48:  mov      w8, #-1
003c5a4c:  str      xzr, [x0, #0x120]
003c5a50:  stp      q0, q0, [x0]
003c5a54:  str      w8, [x0, #8]
003c5a58:  mov      w8, #0xfffe
003c5a5c:  stp      q0, q0, [x0, #0x20]
003c5a60:  stp      q0, q0, [x0, #0x40]
003c5a64:  stp      q0, q0, [x0, #0x60]
003c5a68:  strh     w8, [x0, #0x60]
003c5a6c:  adrp     x8, #0x24e000
003c5a70:  ldr      d1, [x8, #0x7f0]
003c5a74:  stp      q0, q0, [x0, #0x40]
003c5a78:  adrp     x8, #0x67d000
003c5a7c:  stp      q0, q0, [x0, #0x80]
003c5a80:  stp      q0, q0, [x0, #0xa0]
003c5a84:  stp      q0, q0, [x0, #0xc0]
003c5a88:  stp      q0, q0, [x0, #0xe0]
003c5a8c:  stp      q0, q0, [x0, #0x100]
003c5a90:  strb     wzr, [x0, #0x11]
003c5a94:  str      xzr, [x0, #0x30]
003c5a98:  stp      xzr, xzr, [x0, #0x70]
003c5a9c:  str      xzr, [x0, #0x68]
003c5aa0:  str      d1, [x0, #0x88]
003c5aa4:  stur     q0, [x0, #0xb8]
003c5aa8:  stur     q0, [x0, #0xc8]
003c5aac:  stur     q0, [x0, #0xd8]
003c5ab0:  stur     q0, [x0, #0xe8]
003c5ab4:  str      xzr, [x0, #0xf8]
003c5ab8:  str      q0, [x0, #0x90]
003c5abc:  ldr      x8, [x8, #0x520]
003c5ac0:  str      q0, [x0, #0xa0]
003c5ac4:  strb     wzr, [x0, #0x111]
003c5ac8:  b        #0x3c8c18
003c5acc:  mov      w0, #0x18
003c5ad0:  bl       #0x644c30
003c5ad4:  movi     d0, #0x000000ffffffff
003c5ad8:  adrp     x8, #0x657000
003c5adc:  add      x8, x8, #0x168
003c5ae0:  b        #0x3c71cc
003c5ae4:  mov      w0, #0x18
003c5ae8:  bl       #0x644c30
003c5aec:  mov      w8, #-1
003c5af0:  str      xzr, [x0, #0x10]
003c5af4:  adrp     x9, #0x662000
003c5af8:  add      x9, x9, #0x4e0
003c5afc:  b        #0x3c80dc
003c5b00:  mov      w0, #0x38
003c5b04:  bl       #0x644c30
003c5b08:  movi     v0.2d, #0000000000000000
003c5b0c:  mov      w8, #-1
003c5b10:  str      xzr, [x0, #0x30]
003c5b14:  str      q0, [x0]
003c5b18:  str      w8, [x0, #8]
003c5b1c:  adrp     x8, #0x664000
003c5b20:  add      x8, x8, #0xb20
003c5b24:  b        #0x3c87a0
003c5b28:  mov      w0, #0x150
003c5b2c:  bl       #0x644c30
003c5b30:  movi     v0.2d, #0000000000000000
003c5b34:  mov      x19, x0
003c5b38:  stp      q0, q0, [x0]
003c5b3c:  stp      q0, q0, [x0, #0x20]
003c5b40:  stp      q0, q0, [x0, #0x40]
003c5b44:  stp      q0, q0, [x0, #0x60]
003c5b48:  stp      q0, q0, [x0, #0x80]
003c5b4c:  stp      q0, q0, [x0, #0xa0]
003c5b50:  stp      q0, q0, [x0, #0xc0]
003c5b54:  stp      q0, q0, [x0, #0xe0]
003c5b58:  stp      q0, q0, [x0, #0x100]
003c5b5c:  stp      q0, q0, [x0, #0x120]
003c5b60:  str      q0, [x0, #0x140]
003c5b64:  bl       #0x3c9edc
003c5b68:  mov      x0, x19
003c5b6c:  b        #0x3c8cf0
003c5b70:  mov      w0, #0x10
003c5b74:  bl       #0x644c30
003c5b78:  mov      w8, #-1
003c5b7c:  adrp     x9, #0x659000
003c5b80:  add      x9, x9, #0xfc0
003c5b84:  b        #0x3c80dc
003c5b88:  mov      w0, #0x90
003c5b8c:  bl       #0x644c30
003c5b90:  movi     v0.2d, #0000000000000000
003c5b94:  mov      w8, #-1
003c5b98:  stp      q0, q0, [x0]
003c5b9c:  str      w8, [x0, #8]
003c5ba0:  mov      w8, #0xfffe
003c5ba4:  stp      q0, q0, [x0, #0x20]
003c5ba8:  stp      q0, q0, [x0, #0x40]
003c5bac:  stp      q0, q0, [x0, #0x60]
003c5bb0:  strh     w8, [x0, #0x60]
003c5bb4:  adrp     x8, #0x65e000
003c5bb8:  add      x8, x8, #0xe40
003c5bbc:  str      q0, [x0, #0x80]
003c5bc0:  b        #0x3c8750
003c5bc4:  mov      w0, #0x120
003c5bc8:  bl       #0x644c30
003c5bcc:  movi     v0.2d, #0000000000000000
003c5bd0:  mov      x19, x0
003c5bd4:  stp      q0, q0, [x0]
003c5bd8:  stp      q0, q0, [x0, #0x20]
003c5bdc:  stp      q0, q0, [x0, #0x40]
003c5be0:  stp      q0, q0, [x0, #0x60]
003c5be4:  stp      q0, q0, [x0, #0x80]
003c5be8:  stp      q0, q0, [x0, #0xa0]
003c5bec:  stp      q0, q0, [x0, #0xc0]
003c5bf0:  stp      q0, q0, [x0, #0xe0]
003c5bf4:  stp      q0, q0, [x0, #0x100]
003c5bf8:  bl       #0x3cb06c
003c5bfc:  mov      x0, x19
003c5c00:  b        #0x3c8cf0
003c5c04:  mov      w0, #0x100
003c5c08:  bl       #0x644c30
003c5c0c:  movi     v0.2d, #0000000000000000
003c5c10:  mov      x19, x0
003c5c14:  stp      q0, q0, [x0]
003c5c18:  stp      q0, q0, [x0, #0x20]
003c5c1c:  stp      q0, q0, [x0, #0x40]
003c5c20:  stp      q0, q0, [x0, #0x60]
003c5c24:  stp      q0, q0, [x0, #0x80]
003c5c28:  stp      q0, q0, [x0, #0xa0]
003c5c2c:  stp      q0, q0, [x0, #0xc0]
003c5c30:  stp      q0, q0, [x0, #0xe0]
003c5c34:  bl       #0x3cbc48
003c5c38:  mov      x0, x19
003c5c3c:  b        #0x3c8cf0
003c5c40:  mov      w0, #0x1b8
003c5c44:  bl       #0x644c30
003c5c48:  movi     v0.2d, #0000000000000000
003c5c4c:  mov      x19, x0
003c5c50:  str      xzr, [x0, #0x1b0]
003c5c54:  stp      q0, q0, [x0]
003c5c58:  stp      q0, q0, [x0, #0x20]
003c5c5c:  stp      q0, q0, [x0, #0x40]
003c5c60:  stp      q0, q0, [x0, #0x60]
003c5c64:  stp      q0, q0, [x0, #0x80]
003c5c68:  stp      q0, q0, [x0, #0xa0]
003c5c6c:  stp      q0, q0, [x0, #0xc0]
003c5c70:  stp      q0, q0, [x0, #0xe0]
003c5c74:  stp      q0, q0, [x0, #0x100]
003c5c78:  stp      q0, q0, [x0, #0x120]
003c5c7c:  stp      q0, q0, [x0, #0x140]
003c5c80:  stp      q0, q0, [x0, #0x160]
003c5c84:  stp      q0, q0, [x0, #0x180]
003c5c88:  str      q0, [x0, #0x1a0]
003c5c8c:  bl       #0x3caf7c
003c5c90:  mov      x0, x19
003c5c94:  b        #0x3c8cf0
003c5c98:  mov      w0, #0xc8
003c5c9c:  bl       #0x644c30
003c5ca0:  movi     v0.2d, #0000000000000000
003c5ca4:  mov      w9, #0xfffe
003c5ca8:  mov      w8, #-1
003c5cac:  stp      q0, q0, [x0]
003c5cb0:  str      q0, [x0, #0xa0]
003c5cb4:  stp      q0, q0, [x0, #0x20]
003c5cb8:  stp      q0, q0, [x0, #0x40]
003c5cbc:  stp      q0, q0, [x0, #0x60]
003c5cc0:  stp      q0, q0, [x0, #0x80]
003c5cc4:  fmov     v0.2s, #-1.00000000
003c5cc8:  strh     w9, [x0, #0x60]
003c5ccc:  adrp     x9, #0x24d000
003c5cd0:  str      w8, [x0, #8]
003c5cd4:  strb     wzr, [x0, #0x11]
003c5cd8:  str      xzr, [x0, #0x30]
003c5cdc:  stp      xzr, xzr, [x0, #0x68]
003c5ce0:  str      xzr, [x0, #0x78]
003c5ce4:  stur     d0, [x0, #0x8c]
003c5ce8:  ldr      q0, [x9, #0xf80]
003c5cec:  adrp     x9, #0x67d000
003c5cf0:  ldr      x9, [x9, #0x350]
003c5cf4:  str      w8, [x0, #0x88]
003c5cf8:  stur     q0, [x0, #0x94]
003c5cfc:  add      x8, x9, #0x10
003c5d00:  stp      xzr, xzr, [x0, #0xa8]
003c5d04:  str      x8, [x0]
003c5d08:  stp      xzr, x0, [x0, #0xb8]
003c5d0c:  b        #0x3c8cf0
003c5d10:  mov      w0, #0x138
003c5d14:  bl       #0x644c30
003c5d18:  movi     v0.2d, #0000000000000000
003c5d1c:  mov      x19, x0
003c5d20:  str      xzr, [x0, #0x130]
003c5d24:  stp      q0, q0, [x0]
003c5d28:  stp      q0, q0, [x0, #0x20]
003c5d2c:  stp      q0, q0, [x0, #0x40]
003c5d30:  stp      q0, q0, [x0, #0x60]
003c5d34:  stp      q0, q0, [x0, #0x80]
003c5d38:  stp      q0, q0, [x0, #0xa0]
003c5d3c:  stp      q0, q0, [x0, #0xc0]
003c5d40:  stp      q0, q0, [x0, #0xe0]
003c5d44:  stp      q0, q0, [x0, #0x100]
003c5d48:  str      q0, [x0, #0x120]
003c5d4c:  bl       #0x3ca260
003c5d50:  mov      x0, x19
003c5d54:  b        #0x3c8cf0
003c5d58:  mov      w0, #0x40
003c5d5c:  bl       #0x644c30
003c5d60:  movi     v0.2d, #0000000000000000
003c5d64:  adrp     x9, #0x67d000
003c5d68:  adrp     x8, #0x24e000
003c5d6c:  ldr      x9, [x9, #0x298]
003c5d70:  ldr      d1, [x8, #0x6c8]
003c5d74:  stp      xzr, xzr, [x0, #0x10]
003c5d78:  add      x8, x9, #0x10
003c5d7c:  str      d1, [x0, #8]
003c5d80:  str      x8, [x0]
003c5d84:  stp      q0, q0, [x0, #0x20]
003c5d88:  strh     wzr, [x0, #0x28]
003c5d8c:  str      xzr, [x0, #0x20]
003c5d90:  b        #0x3c8cf0
003c5d94:  mov      w0, #0x60
003c5d98:  bl       #0x644c30
003c5d9c:  movi     v0.2d, #0000000000000000
003c5da0:  mov      w8, #-1
003c5da4:  stp      xzr, xzr, [x0, #0x50]
003c5da8:  stp      q0, q0, [x0]
003c5dac:  str      w8, [x0, #8]
003c5db0:  adrp     x8, #0x656000
003c5db4:  add      x8, x8, #0xbe0
003c5db8:  b        #0x3c8984
003c5dbc:  mov      w0, #0xa0
003c5dc0:  bl       #0x644c30
003c5dc4:  movi     v0.2d, #0000000000000000
003c5dc8:  mov      w8, #-1
003c5dcc:  mov      w9, #0x42c80000
003c5dd0:  str      x9, [x0, #0x98]
003c5dd4:  adrp     x9, #0x67d000
003c5dd8:  stp      q0, q0, [x0]
003c5ddc:  str      w8, [x0, #8]
003c5de0:  mov      w8, #0xfffe
003c5de4:  stp      q0, q0, [x0, #0x60]
003c5de8:  str      q0, [x0, #0x80]
003c5dec:  stp      q0, q0, [x0, #0x20]
003c5df0:  stp      q0, q0, [x0, #0x40]
003c5df4:  str      xzr, [x0, #0x30]
003c5df8:  strh     w8, [x0, #0x60]
003c5dfc:  mov      x8, #-0x10000
003c5e00:  stp      xzr, xzr, [x0, #0x68]
003c5e04:  movk     x8, #0x3f80, lsl #16
003c5e08:  str      xzr, [x0, #0x78]
003c5e0c:  ldr      x9, [x9, #0xa8]
003c5e10:  stp      x8, xzr, [x0, #0x88]
003c5e14:  b        #0x3c8ce8
003c5e18:  mov      w0, #0x28
003c5e1c:  bl       #0x644c30
003c5e20:  adrp     x9, #0x67d000
003c5e24:  adrp     x8, #0x24d000
003c5e28:  ldr      x9, [x9, #0x270]
003c5e2c:  ldr      q0, [x8, #0xf10]
003c5e30:  stp      xzr, xzr, [x0, #0x18]
003c5e34:  add      x8, x9, #0x10
003c5e38:  b        #0x3c8200
003c5e3c:  mov      w0, #0x18
003c5e40:  bl       #0x644c30
003c5e44:  movi     d0, #0x000000ffffffff
003c5e48:  adrp     x9, #0x67c000
003c5e4c:  mov      w8, #-1
003c5e50:  ldr      x9, [x9, #0xe08]
003c5e54:  b        #0x3c6eac
003c5e58:  mov      w0, #0x120
003c5e5c:  bl       #0x644c30
003c5e60:  movi     v0.2d, #0000000000000000
003c5e64:  mov      w8, #-1
003c5e68:  stp      q0, q0, [x0]
003c5e6c:  str      w8, [x0, #8]
003c5e70:  mov      w8, #0xfffe
003c5e74:  stp      q0, q0, [x0, #0x20]
003c5e78:  stp      q0, q0, [x0, #0x40]
003c5e7c:  str      xzr, [x0, #0x30]
003c5e80:  stp      q0, q0, [x0, #0x40]
003c5e84:  stp      q0, q0, [x0, #0x60]
003c5e88:  strh     w8, [x0, #0x60]
003c5e8c:  mov      x8, #0x100000000
003c5e90:  stp      q0, q0, [x0, #0x80]
003c5e94:  stp      q0, q0, [x0, #0xa0]
003c5e98:  stp      q0, q0, [x0, #0xc0]
003c5e9c:  stp      q0, q0, [x0, #0xe0]
003c5ea0:  stp      q0, q0, [x0, #0x100]
003c5ea4:  stp      xzr, xzr, [x0, #0x70]
003c5ea8:  str      xzr, [x0, #0x68]
003c5eac:  stp      xzr, x8, [x0, #0x98]
003c5eb0:  adrp     x8, #0x67d000
003c5eb4:  ldr      x8, [x8, #0x518]
003c5eb8:  stp      xzr, xzr, [x0, #0x88]
003c5ebc:  stur     q0, [x0, #0xa8]
003c5ec0:  add      x8, x8, #0x10
003c5ec4:  stur     q0, [x0, #0xb8]
003c5ec8:  str      x8, [x0]
003c5ecc:  mov      w8, #0x3f800000
003c5ed0:  stur     q0, [x0, #0xc8]
003c5ed4:  stur     q0, [x0, #0xd8]
003c5ed8:  stur     q0, [x0, #0xe8]
003c5edc:  stur     q0, [x0, #0xf8]
003c5ee0:  str      xzr, [x0, #0x108]
003c5ee4:  str      w8, [x0, #0x110]
003c5ee8:  b        #0x3c8cf0
003c5eec:  mov      w0, #0x20
003c5ef0:  bl       #0x644c30
003c5ef4:  fmov     d0, xzr
003c5ef8:  adrp     x8, #0x67d000
003c5efc:  movi     v1.2d, #0xffffffffffffffff
003c5f00:  ldr      x8, [x8, #0x1c0]
003c5f04:  mov      v0.d[1], v0.d[0]
003c5f08:  add      x8, x8, #0x10
003c5f0c:  str      d1, [x0, #8]
003c5f10:  str      q0, [x0, #0x10]
003c5f14:  b        #0x3c8cec
003c5f18:  mov      w0, #0x40
003c5f1c:  bl       #0x644c30
003c5f20:  movi     v0.2d, #0000000000000000
003c5f24:  adrp     x9, #0x67d000
003c5f28:  mov      w8, #-1
003c5f2c:  stp      q0, q0, [x0]
003c5f30:  str      q0, [x0, #0x20]
003c5f34:  ldr      x9, [x9, #0x2c0]
003c5f38:  str      q0, [x0, #0x30]
003c5f3c:  str      w8, [x0, #8]
003c5f40:  strb     wzr, [x0, #0x29]
003c5f44:  b        #0x3c8ce8
003c5f48:  mov      w0, #0xe8
003c5f4c:  bl       #0x644c30
003c5f50:  movi     v0.2d, #0000000000000000
003c5f54:  adrp     x9, #0x67d000
003c5f58:  mov      w8, #-1
003c5f5c:  stp      q0, q0, [x0]
003c5f60:  stp      q0, q0, [x0, #0x20]
003c5f64:  stp      q0, q0, [x0, #0x40]
003c5f68:  stp      q0, q0, [x0, #0x60]
003c5f6c:  stp      q0, q0, [x0, #0x80]
003c5f70:  stp      q0, q0, [x0, #0xa0]
003c5f74:  stp      q0, q0, [x0, #0xc0]
003c5f78:  ldr      x9, [x9, #0x238]
003c5f7c:  str      w8, [x0, #8]
003c5f80:  stur     q0, [x0, #0xb9]
003c5f84:  add      x8, x9, #0x10
003c5f88:  str      x8, [x0]
003c5f8c:  add      x8, x9, #0xc0
003c5f90:  str      x8, [x0, #0x28]
003c5f94:  adrp     x8, #0x661000
003c5f98:  add      x8, x8, #0xfa0
003c5f9c:  b        #0x3c7c98
003c5fa0:  mov      w0, #0xf0
003c5fa4:  bl       #0x644c30
003c5fa8:  movi     v0.2d, #0000000000000000
003c5fac:  adrp     x9, #0x67d000
003c5fb0:  mov      w8, #-1
003c5fb4:  stp      q0, q0, [x0]
003c5fb8:  stp      q0, q0, [x0, #0x20]
003c5fbc:  stp      q0, q0, [x0, #0x40]
003c5fc0:  stp      q0, q0, [x0, #0x60]
003c5fc4:  stp      q0, q0, [x0, #0x80]
003c5fc8:  stp      q0, q0, [x0, #0xa0]
003c5fcc:  stp      q0, q0, [x0, #0xc0]
003c5fd0:  ldr      x9, [x9, #0x1b8]
003c5fd4:  str      w8, [x0, #8]
003c5fd8:  stur     q0, [x0, #0xb9]
003c5fdc:  add      x8, x9, #0x10
003c5fe0:  stp      xzr, xzr, [x0, #0xd8]
003c5fe4:  str      x8, [x0]
003c5fe8:  add      x8, x9, #0xc0
003c5fec:  str      x8, [x0, #0x28]
003c5ff0:  str      xzr, [x0, #0xe8]
003c5ff4:  b        #0x3c8cf0
003c5ff8:  mov      w0, #0x10
003c5ffc:  bl       #0x644c30
003c6000:  movi     d0, #0x000000ffffffff
003c6004:  adrp     x8, #0x65f000
003c6008:  add      x8, x8, #0x588
003c600c:  b        #0x3c796c
003c6010:  mov      w0, #0x18
003c6014:  bl       #0x644c30
003c6018:  adrp     x8, #0x67d000
003c601c:  mov      w9, #-1
003c6020:  ldr      x8, [x8, #0x240]
003c6024:  b        #0x3c6488
003c6028:  mov      w0, #0x150
003c602c:  bl       #0x644c30
003c6030:  movi     v0.2d, #0000000000000000
003c6034:  mov      x19, x0
003c6038:  stp      q0, q0, [x0]
003c603c:  stp      q0, q0, [x0, #0x20]
003c6040:  stp      q0, q0, [x0, #0x40]
003c6044:  stp      q0, q0, [x0, #0x60]
003c6048:  stp      q0, q0, [x0, #0x80]
003c604c:  stp      q0, q0, [x0, #0xa0]
003c6050:  stp      q0, q0, [x0, #0xc0]
003c6054:  stp      q0, q0, [x0, #0xe0]
003c6058:  stp      q0, q0, [x0, #0x100]
003c605c:  stp      q0, q0, [x0, #0x120]
003c6060:  str      q0, [x0, #0x140]
003c6064:  bl       #0x3cb4cc
003c6068:  mov      x0, x19
003c606c:  b        #0x3c8cf0
003c6070:  mov      w0, #0xe8
003c6074:  bl       #0x644c30
003c6078:  movi     v0.2d, #0000000000000000
003c607c:  adrp     x9, #0x67d000
003c6080:  mov      w8, #-1
003c6084:  stp      q0, q0, [x0]
003c6088:  stp      q0, q0, [x0, #0x20]
003c608c:  stp      q0, q0, [x0, #0x40]
003c6090:  stp      q0, q0, [x0, #0x60]
003c6094:  stp      q0, q0, [x0, #0x80]
003c6098:  stp      q0, q0, [x0, #0xa0]
003c609c:  stp      q0, q0, [x0, #0xc0]
003c60a0:  ldr      x9, [x9, #0x228]
003c60a4:  b        #0x3c7c78
003c60a8:  mov      w0, #0x10
003c60ac:  bl       #0x644c30
003c60b0:  movi     v0.2d, #0xffffffffffffffff
003c60b4:  adrp     x8, #0x65f000
003c60b8:  add      x8, x8, #0x658
003c60bc:  b        #0x3c7cb4
003c60c0:  mov      w0, #0x10
003c60c4:  bl       #0x644c30
003c60c8:  movi     d0, #0x000000ffffffff
003c60cc:  adrp     x8, #0x65a000
003c60d0:  add      x8, x8, #0x898
003c60d4:  b        #0x3c796c
003c60d8:  mov      w0, #0x128
003c60dc:  bl       #0x644c30
003c60e0:  movi     v0.2d, #0000000000000000
003c60e4:  mov      w9, #0xfffe
003c60e8:  mov      w8, #-1
003c60ec:  stp      q0, q0, [x0]
003c60f0:  stp      q0, q0, [x0, #0x20]
003c60f4:  stp      q0, q0, [x0, #0x40]
003c60f8:  stp      q0, q0, [x0, #0x60]
003c60fc:  strh     w9, [x0, #0x60]
003c6100:  adrp     x9, #0x24e000
003c6104:  ldr      d1, [x9, #0x7f0]
003c6108:  stp      q0, q0, [x0, #0x40]
003c610c:  adrp     x9, #0x67d000
003c6110:  stp      q0, q0, [x0, #0x80]
003c6114:  stp      q0, q0, [x0, #0xa0]
003c6118:  stp      q0, q0, [x0, #0xc0]
003c611c:  stp      q0, q0, [x0, #0xe0]
003c6120:  stp      q0, q0, [x0, #0x100]
003c6124:  str      w8, [x0, #8]
003c6128:  strb     wzr, [x0, #0x11]
003c612c:  str      xzr, [x0, #0x30]
003c6130:  stp      xzr, xzr, [x0, #0x70]
003c6134:  str      xzr, [x0, #0x68]
003c6138:  str      d1, [x0, #0x88]
003c613c:  stur     q0, [x0, #0xb8]
003c6140:  stur     q0, [x0, #0xc8]
003c6144:  stur     q0, [x0, #0xd8]
003c6148:  stur     q0, [x0, #0xe8]
003c614c:  str      xzr, [x0, #0xf8]
003c6150:  str      q0, [x0, #0x90]
003c6154:  ldr      x9, [x9, #0x568]
003c6158:  str      w8, [x0, #0x110]
003c615c:  str      q0, [x0, #0xa0]
003c6160:  add      x8, x9, #0x10
003c6164:  stp      xzr, xzr, [x0, #0x118]
003c6168:  b        #0x3c8cec
003c616c:  mov      w0, #0x130
003c6170:  bl       #0x644c30
003c6174:  movi     v0.2d, #0000000000000000
003c6178:  mov      w9, #0xfffe
003c617c:  mov      w8, #-1
003c6180:  stp      q0, q0, [x0]
003c6184:  stp      q0, q0, [x0, #0x20]
003c6188:  stp      q0, q0, [x0, #0x40]
003c618c:  stp      q0, q0, [x0, #0x60]
003c6190:  strh     w9, [x0, #0x60]
003c6194:  adrp     x9, #0x24e000
003c6198:  ldr      d1, [x9, #0x7f0]
003c619c:  stp      q0, q0, [x0, #0x40]
003c61a0:  adrp     x9, #0x67d000
003c61a4:  stp      q0, q0, [x0, #0x80]
003c61a8:  stp      q0, q0, [x0, #0xa0]
003c61ac:  stp      q0, q0, [x0, #0xc0]
003c61b0:  stp      q0, q0, [x0, #0xe0]
003c61b4:  stp      q0, q0, [x0, #0x100]
003c61b8:  str      w8, [x0, #8]
003c61bc:  strb     wzr, [x0, #0x11]
003c61c0:  str      xzr, [x0, #0x30]
003c61c4:  stp      xzr, xzr, [x0, #0x70]
003c61c8:  str      xzr, [x0, #0x68]
003c61cc:  str      d1, [x0, #0x88]
003c61d0:  stur     q0, [x0, #0xb8]
003c61d4:  stur     q0, [x0, #0xc8]
003c61d8:  stur     q0, [x0, #0xd8]
003c61dc:  stur     q0, [x0, #0xe8]
003c61e0:  str      xzr, [x0, #0xf8]
003c61e4:  str      q0, [x0, #0x90]
003c61e8:  ldr      x9, [x9, #0x2b8]
003c61ec:  str      w8, [x0, #0x110]
003c61f0:  str      q0, [x0, #0xa0]
003c61f4:  add      x8, x9, #0x10
003c61f8:  stp      xzr, xzr, [x0, #0x118]
003c61fc:  str      x8, [x0]
003c6200:  str      xzr, [x0, #0x128]
003c6204:  b        #0x3c8cf0
003c6208:  mov      w0, #0x20
003c620c:  bl       #0x644c30
003c6210:  movi     v0.2d, #0000000000000000
003c6214:  mov      w8, #-1
003c6218:  stp      q0, q0, [x0]
003c621c:  str      w8, [x0, #8]
003c6220:  adrp     x8, #0x662000
003c6224:  add      x8, x8, #0x1c8
003c6228:  str      x8, [x0]
003c622c:  b        #0x3c8cf0
003c6230:  mov      w0, #0x1d0
003c6234:  bl       #0x644c30
003c6238:  movi     v0.2d, #0000000000000000
003c623c:  mov      x19, x0
003c6240:  stp      q0, q0, [x0]
003c6244:  stp      q0, q0, [x0, #0x20]
003c6248:  stp      q0, q0, [x0, #0x40]
003c624c:  stp      q0, q0, [x0, #0x60]
003c6250:  stp      q0, q0, [x0, #0x80]
003c6254:  stp      q0, q0, [x0, #0xa0]
003c6258:  stp      q0, q0, [x0, #0xc0]
003c625c:  stp      q0, q0, [x0, #0xe0]
003c6260:  stp      q0, q0, [x0, #0x100]
003c6264:  stp      q0, q0, [x0, #0x120]
003c6268:  stp      q0, q0, [x0, #0x140]
003c626c:  stp      q0, q0, [x0, #0x160]
003c6270:  stp      q0, q0, [x0, #0x180]
003c6274:  stp      q0, q0, [x0, #0x1a0]
003c6278:  str      q0, [x0, #0x1c0]
003c627c:  bl       #0x3cadfc
003c6280:  mov      x0, x19
003c6284:  b        #0x3c8cf0
003c6288:  mov      w0, #0xb8
003c628c:  bl       #0x644c30
003c6290:  movi     v0.2d, #0000000000000000
003c6294:  mov      w8, #-1
003c6298:  str      xzr, [x0, #0xb0]
003c629c:  stp      q0, q0, [x0]
003c62a0:  str      w8, [x0, #8]
003c62a4:  mov      w8, #0xfffe
003c62a8:  stp      q0, q0, [x0, #0x20]
003c62ac:  stp      q0, q0, [x0, #0x40]
003c62b0:  stp      q0, q0, [x0, #0x60]
003c62b4:  stp      q0, q0, [x0, #0x90]
003c62b8:  str      q0, [x0, #0x80]
003c62bc:  str      xzr, [x0, #0x30]
003c62c0:  strh     w8, [x0, #0x60]
003c62c4:  adrp     x8, #0x67d000
003c62c8:  stp      xzr, xzr, [x0, #0x68]
003c62cc:  str      xzr, [x0, #0x78]
003c62d0:  ldr      x8, [x8, #0x2c8]
003c62d4:  stp      xzr, xzr, [x0, #0xa0]
003c62d8:  strb     wzr, [x0, #0xb0]
003c62dc:  add      x9, x8, #0x10
003c62e0:  str      x9, [x0]
003c62e4:  add      x9, x8, #0xd0
003c62e8:  add      x8, x8, #0xe8
003c62ec:  stp      x9, x8, [x0, #0x90]
003c62f0:  b        #0x3c8cf0
003c62f4:  mov      w0, #0x118
003c62f8:  bl       #0x644c30
003c62fc:  movi     v0.2d, #0000000000000000
003c6300:  mov      w8, #-1
003c6304:  str      xzr, [x0, #0x110]
003c6308:  stp      q0, q0, [x0]
003c630c:  str      w8, [x0, #8]
003c6310:  mov      w8, #0xfffe
003c6314:  stp      q0, q0, [x0, #0x20]
003c6318:  stp      q0, q0, [x0, #0x40]
003c631c:  stp      q0, q0, [x0, #0x60]
003c6320:  strh     w8, [x0, #0x60]
003c6324:  mov      w8, #1
003c6328:  stp      q0, q0, [x0, #0x40]
003c632c:  stp      q0, q0, [x0, #0x80]
003c6330:  stp      q0, q0, [x0, #0xa0]
003c6334:  stp      q0, q0, [x0, #0xc0]
003c6338:  stp      q0, q0, [x0, #0xe0]
003c633c:  str      q0, [x0, #0x100]
003c6340:  str      xzr, [x0, #0x30]
003c6344:  stp      xzr, xzr, [x0, #0x70]
003c6348:  str      xzr, [x0, #0x68]
003c634c:  str      w8, [x0, #0x8c]
003c6350:  adrp     x8, #0x67d000
003c6354:  stur     q0, [x0, #0xb8]
003c6358:  stur     q0, [x0, #0xc8]
003c635c:  stur     q0, [x0, #0xd8]
003c6360:  stur     q0, [x0, #0xe8]
003c6364:  str      xzr, [x0, #0xf8]
003c6368:  ldr      x8, [x8, #0x530]
003c636c:  b        #0x3c8418
003c6370:  mov      w0, #0x30
003c6374:  bl       #0x644c30
003c6378:  movi     v0.2d, #0000000000000000
003c637c:  mov      w8, #-1
003c6380:  str      q0, [x0]
003c6384:  str      w8, [x0, #8]
003c6388:  adrp     x8, #0x664000
003c638c:  add      x8, x8, #0x358
003c6390:  b        #0x3c87a0
003c6394:  mov      w0, #0x450
003c6398:  bl       #0x644c30
003c639c:  mov      x19, x0
003c63a0:  bl       #0x647fc0
003c63a4:  mov      x0, x19
003c63a8:  b        #0x3c8cf0
003c63ac:  mov      w0, #0x210
003c63b0:  bl       #0x644c30
003c63b4:  mov      w1, wzr
003c63b8:  mov      w2, #0x210
003c63bc:  mov      x19, x0
003c63c0:  bl       #0x645640
003c63c4:  mov      x0, x19
003c63c8:  bl       #0x3ca5e8
003c63cc:  mov      x0, x19
003c63d0:  b        #0x3c8cf0
003c63d4:  mov      w0, #0xc8
003c63d8:  bl       #0x644c30
003c63dc:  movi     v0.2d, #0000000000000000
003c63e0:  mov      w8, #-1
003c63e4:  mov      w9, #0xfffe
003c63e8:  str      q0, [x0, #0xa0]
003c63ec:  stp      q0, q0, [x0]
003c63f0:  stp      q0, q0, [x0, #0x20]
003c63f4:  stp      q0, q0, [x0, #0x40]
003c63f8:  stp      q0, q0, [x0, #0x60]
003c63fc:  stp      q0, q0, [x0, #0x80]
003c6400:  str      w8, [x0, #8]
003c6404:  str      xzr, [x0, #0x30]
003c6408:  strh     w9, [x0, #0x60]
003c640c:  stp      xzr, xzr, [x0, #0x68]
003c6410:  str      xzr, [x0, #0x78]
003c6414:  str      w8, [x0, #0x88]
003c6418:  adrp     x8, #0x67d000
003c641c:  ldr      x8, [x8, #0x510]
003c6420:  stp      xzr, xzr, [x0, #0x98]
003c6424:  strb     wzr, [x0, #0xa8]
003c6428:  add      x9, x8, #0x10
003c642c:  stp      xzr, xzr, [x0, #0xb8]
003c6430:  str      x9, [x0]
003c6434:  add      x9, x8, #0xf0
003c6438:  add      x8, x8, #0x138
003c643c:  str      x9, [x0, #0x90]
003c6440:  str      x8, [x0, #0xb0]
003c6444:  b        #0x3c8cf0
003c6448:  mov      w0, #0x28
003c644c:  bl       #0x644c30
003c6450:  movi     v0.2d, #0000000000000000
003c6454:  mov      w8, #-1
003c6458:  str      xzr, [x0, #0x20]
003c645c:  stp      q0, q0, [x0]
003c6460:  str      w8, [x0, #8]
003c6464:  adrp     x8, #0x65f000
003c6468:  add      x8, x8, #0x7f8
003c646c:  str      x8, [x0]
003c6470:  b        #0x3c8cf0
003c6474:  mov      w0, #0x18
003c6478:  bl       #0x644c30
003c647c:  adrp     x8, #0x67c000
003c6480:  mov      w9, #-1
003c6484:  ldr      x8, [x8, #0xf48]
003c6488:  stp      xzr, xzr, [x0, #8]
003c648c:  str      w9, [x0, #8]
003c6490:  b        #0x3c8c18
003c6494:  mov      w0, #0xe8
003c6498:  bl       #0x644c30
003c649c:  movi     v0.2d, #0000000000000000
003c64a0:  mov      w8, #-1
003c64a4:  adrp     x9, #0x67d000
003c64a8:  stp      q0, q0, [x0]
003c64ac:  str      w8, [x0, #8]
003c64b0:  mov      w8, #0xfffe
003c64b4:  stp      q0, q0, [x0, #0x60]
003c64b8:  str      q0, [x0, #0x80]
003c64bc:  stp      q0, q0, [x0, #0x20]
003c64c0:  stp      q0, q0, [x0, #0x40]
003c64c4:  str      xzr, [x0, #0x30]
003c64c8:  strh     w8, [x0, #0x60]
003c64cc:  mov      w8, #0x101
003c64d0:  stp      xzr, xzr, [x0, #0x68]
003c64d4:  str      xzr, [x0, #0x78]
003c64d8:  ldr      x9, [x9, #0x430]
003c64dc:  strh     w8, [x0, #0x88]
003c64e0:  mov      w8, #1
003c64e4:  strb     w8, [x0, #0x8a]
003c64e8:  add      x8, x9, #0x10
003c64ec:  stur     q0, [x0, #0xd8]
003c64f0:  str      x8, [x0]
003c64f4:  add      x8, x9, #0x110
003c64f8:  str      x8, [x0, #0x90]
003c64fc:  stur     q0, [x0, #0xc8]
003c6500:  stur     q0, [x0, #0xb8]
003c6504:  stur     q0, [x0, #0xa8]
003c6508:  stur     q0, [x0, #0x98]
003c650c:  b        #0x3c8cf0
003c6510:  mov      w0, #0x118
003c6514:  bl       #0x644c30
003c6518:  movi     v0.2d, #0000000000000000
003c651c:  mov      w8, #-1
003c6520:  str      xzr, [x0, #0x110]
003c6524:  stp      q0, q0, [x0]
003c6528:  str      w8, [x0, #8]
003c652c:  mov      w8, #0xfffe
003c6530:  stp      q0, q0, [x0, #0x20]
003c6534:  stp      q0, q0, [x0, #0x40]
003c6538:  stp      q0, q0, [x0, #0x60]
003c653c:  strh     w8, [x0, #0x60]
003c6540:  mov      w8, #1
003c6544:  stp      q0, q0, [x0, #0x40]
003c6548:  stp      q0, q0, [x0, #0x80]
003c654c:  stp      q0, q0, [x0, #0xa0]
003c6550:  stp      q0, q0, [x0, #0xc0]
003c6554:  stp      q0, q0, [x0, #0xe0]
003c6558:  str      q0, [x0, #0x100]
003c655c:  str      xzr, [x0, #0x30]
003c6560:  stp      xzr, xzr, [x0, #0x70]
003c6564:  str      xzr, [x0, #0x68]
003c6568:  str      w8, [x0, #0x8c]
003c656c:  adrp     x8, #0x67d000
003c6570:  stur     q0, [x0, #0xb8]
003c6574:  stur     q0, [x0, #0xc8]
003c6578:  stur     q0, [x0, #0xd8]
003c657c:  stur     q0, [x0, #0xe8]
003c6580:  str      xzr, [x0, #0xf8]
003c6584:  ldr      x8, [x8, #0x560]
003c6588:  b        #0x3c8418
003c658c:  mov      w0, #0x1e0
003c6590:  bl       #0x644c30
003c6594:  mov      x19, x0
003c6598:  bl       #0x648c20
003c659c:  mov      x0, x19
003c65a0:  b        #0x3c8cf0
003c65a4:  mov      w0, #0x208
003c65a8:  bl       #0x644c30
003c65ac:  mov      w1, wzr
003c65b0:  mov      w2, #0x208
003c65b4:  mov      x19, x0
003c65b8:  bl       #0x645640
003c65bc:  mov      x0, x19
003c65c0:  bl       #0x3ca474
003c65c4:  mov      x0, x19
003c65c8:  b        #0x3c8cf0
003c65cc:  mov      w0, #0x10
003c65d0:  bl       #0x644c30
003c65d4:  adrp     x8, #0x67c000
003c65d8:  movi     d0, #0x000000ffffffff
003c65dc:  ldr      x8, [x8, #0xe20]
003c65e0:  b        #0x3c775c
003c65e4:  mov      w0, #0x118
003c65e8:  bl       #0x644c30
003c65ec:  movi     v0.2d, #0000000000000000
003c65f0:  mov      x19, x0
003c65f4:  str      xzr, [x0, #0x110]
003c65f8:  stp      q0, q0, [x0]
003c65fc:  stp      q0, q0, [x0, #0x20]
003c6600:  stp      q0, q0, [x0, #0x40]
003c6604:  stp      q0, q0, [x0, #0x60]
003c6608:  stp      q0, q0, [x0, #0x80]
003c660c:  stp      q0, q0, [x0, #0xa0]
003c6610:  stp      q0, q0, [x0, #0xc0]
003c6614:  stp      q0, q0, [x0, #0xe0]
003c6618:  str      q0, [x0, #0x100]
003c661c:  bl       #0x3c9d18
003c6620:  mov      x0, x19
003c6624:  b        #0x3c8cf0
003c6628:  mov      w0, #0x120
003c662c:  bl       #0x644c30
003c6630:  movi     v0.2d, #0000000000000000
003c6634:  mov      x19, x0
003c6638:  stp      q0, q0, [x0]
003c663c:  stp      q0, q0, [x0, #0x20]
003c6640:  stp      q0, q0, [x0, #0x40]
003c6644:  stp      q0, q0, [x0, #0x60]
003c6648:  stp      q0, q0, [x0, #0x80]
003c664c:  stp      q0, q0, [x0, #0xa0]
003c6650:  stp      q0, q0, [x0, #0xc0]
003c6654:  stp      q0, q0, [x0, #0xe0]
003c6658:  stp      q0, q0, [x0, #0x100]
003c665c:  bl       #0x3cb450
003c6660:  mov      x0, x19
003c6664:  b        #0x3c8cf0
003c6668:  mov      w0, #0x3e0
003c666c:  bl       #0x644c30
003c6670:  mov      x19, x0
003c6674:  bl       #0x648bf0
003c6678:  mov      x0, x19
003c667c:  b        #0x3c8cf0
003c6680:  mov      w0, #0x30
003c6684:  bl       #0x644c30
003c6688:  movi     v0.2d, #0000000000000000
003c668c:  mov      w8, #-1
003c6690:  str      q0, [x0]
003c6694:  str      w8, [x0, #8]
003c6698:  adrp     x8, #0x663000
003c669c:  add      x8, x8, #0xf98
003c66a0:  b        #0x3c87a0
003c66a4:  mov      w0, #0x90
003c66a8:  bl       #0x644c30
003c66ac:  movi     v0.2d, #0000000000000000
003c66b0:  mov      w8, #-1
003c66b4:  stp      q0, q0, [x0]
003c66b8:  str      w8, [x0, #8]
003c66bc:  mov      w8, #0xfffe
003c66c0:  stp      q0, q0, [x0, #0x20]
003c66c4:  stp      q0, q0, [x0, #0x40]
003c66c8:  stp      q0, q0, [x0, #0x60]
003c66cc:  str      q0, [x0, #0x80]
003c66d0:  str      xzr, [x0, #0x30]
003c66d4:  strh     w8, [x0, #0x60]
003c66d8:  adrp     x8, #0x67d000
003c66dc:  ldr      x8, [x8, #0x340]
003c66e0:  b        #0x3c838c
003c66e4:  mov      w0, #0x28
003c66e8:  bl       #0x644c30
003c66ec:  movi     v0.2d, #0000000000000000
003c66f0:  str      xzr, [x0, #0x20]
003c66f4:  mov      w8, #-1
003c66f8:  adrp     x9, #0x65b000
003c66fc:  add      x9, x9, #0x5d0
003c6700:  stp      q0, q0, [x0]
003c6704:  b        #0x3c80e0
003c6708:  mov      w0, #0x28
003c670c:  bl       #0x644c30
003c6710:  mov      x19, x0
003c6714:  bl       #0x647130
003c6718:  mov      x0, x19
003c671c:  b        #0x3c8cf0
003c6720:  mov      w0, #0x30
003c6724:  bl       #0x644c30
003c6728:  movi     v0.2d, #0000000000000000
003c672c:  mov      w8, #-1
003c6730:  str      q0, [x0]
003c6734:  str      w8, [x0, #8]
003c6738:  adrp     x8, #0x664000
003c673c:  add      x8, x8, #0x88
003c6740:  b        #0x3c87a0
003c6744:  mov      w0, #0x10
003c6748:  bl       #0x644c30
003c674c:  mov      w8, #-1
003c6750:  adrp     x9, #0x65a000
003c6754:  add      x9, x9, #0x358
003c6758:  b        #0x3c80dc
003c675c:  mov      w0, #0xe8
003c6760:  bl       #0x644c30
003c6764:  movi     v0.2d, #0000000000000000
003c6768:  adrp     x9, #0x67d000
003c676c:  mov      w8, #-1
003c6770:  stp      q0, q0, [x0]
003c6774:  stp      q0, q0, [x0, #0x20]
003c6778:  stp      q0, q0, [x0, #0x40]
003c677c:  stp      q0, q0, [x0, #0x60]
003c6780:  stp      q0, q0, [x0, #0x80]
003c6784:  stp      q0, q0, [x0, #0xa0]
003c6788:  stp      q0, q0, [x0, #0xc0]
003c678c:  ldr      x9, [x9, #0x1a8]
003c6790:  str      w8, [x0, #8]
003c6794:  stur     q0, [x0, #0xb9]
003c6798:  add      x8, x9, #0x10
003c679c:  str      x8, [x0]
003c67a0:  add      x8, x9, #0xc0
003c67a4:  str      x8, [x0, #0x28]
003c67a8:  adrp     x8, #0x66b000
003c67ac:  add      x8, x8, #0x48
003c67b0:  b        #0x3c7c98
003c67b4:  mov      w0, #0x18
003c67b8:  bl       #0x644c30
003c67bc:  movi     v0.2d, #0xffffffffffffffff
003c67c0:  adrp     x8, #0x65f000
003c67c4:  add      x8, x8, #0x998
003c67c8:  str      x8, [x0]
003c67cc:  str      xzr, [x0, #0x10]
003c67d0:  str      d0, [x0, #8]
003c67d4:  b        #0x3c8cf0
003c67d8:  mov      w0, #0x128
003c67dc:  bl       #0x644c30
003c67e0:  movi     v0.2d, #0000000000000000
003c67e4:  mov      w8, #-1
003c67e8:  stp      q0, q0, [x0]
003c67ec:  stp      q0, q0, [x0, #0x20]
003c67f0:  stp      q0, q0, [x0, #0xd0]
003c67f4:  str      q0, [x0, #0x110]
003c67f8:  str      w8, [x0, #8]
003c67fc:  adrp     x8, #0x67d000
003c6800:  stp      q0, q0, [x0, #0x30]
003c6804:  stp      q0, q0, [x0, #0x40]
003c6808:  stp      q0, q0, [x0, #0x50]
003c680c:  stp      q0, q0, [x0, #0x60]
003c6810:  stp      q0, q0, [x0, #0x70]
003c6814:  stp      q0, q0, [x0, #0x80]
003c6818:  stp      q0, q0, [x0, #0x90]
003c681c:  stp      q0, q0, [x0, #0xa0]
003c6820:  stp      q0, q0, [x0, #0xb0]
003c6824:  stp      q0, q0, [x0, #0xf0]
003c6828:  stur     q0, [x0, #0xb9]
003c682c:  ldr      x8, [x8, #0x230]
003c6830:  str      xzr, [x0, #0xd8]
003c6834:  strh     wzr, [x0, #0xe0]
003c6838:  add      x9, x8, #0x10
003c683c:  add      x8, x8, #0xd8
003c6840:  stp      xzr, xzr, [x0, #0x118]
003c6844:  str      x8, [x0, #0x28]
003c6848:  adrp     x8, #0x66a000
003c684c:  add      x8, x8, #0xfc8
003c6850:  str      x9, [x0]
003c6854:  str      x8, [x0, #0xf8]
003c6858:  b        #0x3c8cf0
003c685c:  mov      w0, #0x178
003c6860:  bl       #0x644c30
003c6864:  movi     v0.2d, #0000000000000000
003c6868:  mov      w8, #-1
003c686c:  stp      q0, q0, [x0]
003c6870:  stp      q0, q0, [x0, #0x20]
003c6874:  str      w8, [x0, #8]
003c6878:  adrp     x8, #0x67d000
003c687c:  stp      q0, q0, [x0, #0x30]
003c6880:  stp      q0, q0, [x0, #0x40]
003c6884:  stp      q0, q0, [x0, #0x50]
003c6888:  stp      q0, q0, [x0, #0x60]
003c688c:  stp      q0, q0, [x0, #0x70]
003c6890:  stp      q0, q0, [x0, #0x80]
003c6894:  stp      q0, q0, [x0, #0x90]
003c6898:  stp      q0, q0, [x0, #0xa0]
003c689c:  stp      q0, q0, [x0, #0xd0]
003c68a0:  stp      q0, q0, [x0, #0xf0]
003c68a4:  stp      q0, q0, [x0, #0x110]
003c68a8:  stp      q0, q0, [x0, #0x130]
003c68ac:  stp      q0, q0, [x0, #0x150]
003c68b0:  ldr      x8, [x8, #0x1b0]
003c68b4:  stp      q0, q0, [x0, #0xb0]
003c68b8:  stur     q0, [x0, #0xb9]
003c68bc:  add      x9, x8, #0x10
003c68c0:  str      xzr, [x0, #0x158]
003c68c4:  str      x9, [x0]
003c68c8:  add      x9, x8, #0xd8
003c68cc:  add      x8, x8, #0x110
003c68d0:  str      x9, [x0, #0x28]
003c68d4:  adrp     x9, #0x66a000
003c68d8:  add      x9, x9, #0xf48
003c68dc:  stp      x8, x9, [x0, #0xe0]
003c68e0:  mov      x8, x0
003c68e4:  str      q0, [x8, #0xf8]!
003c68e8:  stp      q0, q0, [x8, #0x10]
003c68ec:  stp      q0, q0, [x8, #0x30]
003c68f0:  str      q0, [x8, #0x50]
003c68f4:  mov      w8, #0x3f800000
003c68f8:  str      w8, [x0, #0x160]
003c68fc:  str      xzr, [x0, #0x170]
003c6900:  b        #0x3c8cf0
003c6904:  mov      w0, #0x10
003c6908:  bl       #0x644c30
003c690c:  movi     v0.2d, #0xffffffffffffffff
003c6910:  adrp     x8, #0x65f000
003c6914:  add      x8, x8, #0x178
003c6918:  b        #0x3c7cb4
003c691c:  mov      w0, #0x28
003c6920:  bl       #0x644c30
003c6924:  movi     d0, #0x000000ffffffff
003c6928:  adrp     x8, #0x658000
003c692c:  add      x8, x8, #0x70
003c6930:  b        #0x3c7230
003c6934:  mov      w0, #0x98
003c6938:  bl       #0x644c30
003c693c:  movi     v0.2d, #0000000000000000
003c6940:  mov      w8, #-1
003c6944:  stp      q0, q0, [x0]
003c6948:  str      w8, [x0, #8]
003c694c:  mov      w8, #0xfffe
003c6950:  stp      q0, q0, [x0, #0x20]
003c6954:  stp      q0, q0, [x0, #0x40]
003c6958:  stp      q0, q0, [x0, #0x60]
003c695c:  strh     w8, [x0, #0x60]
003c6960:  adrp     x8, #0x65f000
003c6964:  add      x8, x8, #0x40
003c6968:  str      x8, [x0]
003c696c:  add      x8, x8, #0xb8
003c6970:  str      q0, [x0, #0x80]
003c6974:  str      xzr, [x0, #0x30]
003c6978:  stp      xzr, xzr, [x0, #0x68]
003c697c:  str      xzr, [x0, #0x78]
003c6980:  str      x8, [x0, #0x90]
003c6984:  b        #0x3c8cf0
003c6988:  mov      w0, #0x10
003c698c:  bl       #0x644c30
003c6990:  adrp     x8, #0x24e000
003c6994:  ldr      d0, [x8, #0x660]
003c6998:  adrp     x8, #0x65a000
003c699c:  add      x8, x8, #0x438
003c69a0:  b        #0x3c796c
003c69a4:  mov      w0, #0x1a0
003c69a8:  bl       #0x644c30
003c69ac:  movi     v0.2d, #0000000000000000
003c69b0:  mov      x19, x0
003c69b4:  stp      q0, q0, [x0]
003c69b8:  stp      q0, q0, [x0, #0x20]
003c69bc:  stp      q0, q0, [x0, #0x40]
003c69c0:  stp      q0, q0, [x0, #0x60]
003c69c4:  stp      q0, q0, [x0, #0x80]
003c69c8:  stp      q0, q0, [x0, #0xa0]
003c69cc:  stp      q0, q0, [x0, #0xc0]
003c69d0:  stp      q0, q0, [x0, #0xe0]
003c69d4:  stp      q0, q0, [x0, #0x100]
003c69d8:  stp      q0, q0, [x0, #0x120]
003c69dc:  stp      q0, q0, [x0, #0x140]
003c69e0:  stp      q0, q0, [x0, #0x160]
003c69e4:  stp      q0, q0, [x0, #0x180]
003c69e8:  bl       #0x3cb8c8
003c69ec:  mov      x0, x19
003c69f0:  b        #0x3c8cf0
003c69f4:  mov      w0, #0x658
003c69f8:  bl       #0x644c30
003c69fc:  mov      w1, wzr
003c6a00:  mov      w2, #0x658
003c6a04:  mov      x19, x0
003c6a08:  bl       #0x645640
003c6a0c:  mov      x0, x19
003c6a10:  bl       #0x3cb7b8
003c6a14:  mov      x0, x19
003c6a18:  b        #0x3c8cf0
003c6a1c:  mov      w0, #0x18
003c6a20:  bl       #0x644c30
003c6a24:  adrp     x8, #0x67c000
003c6a28:  movi     d0, #0x000000ffffffff
003c6a2c:  ldr      x8, [x8, #0xe28]
003c6a30:  b        #0x3c7758
003c6a34:  mov      w0, #0x4d0
003c6a38:  bl       #0x644c30
003c6a3c:  mov      w1, wzr
003c6a40:  mov      w2, #0x4d0
003c6a44:  mov      x19, x0
003c6a48:  bl       #0x645640
003c6a4c:  mov      x0, x19
003c6a50:  bl       #0x3cb998
003c6a54:  mov      x0, x19
003c6a58:  b        #0x3c8cf0
003c6a5c:  mov      w0, #0x18
003c6a60:  bl       #0x644c30
003c6a64:  adrp     x9, #0x67d000
003c6a68:  adrp     x8, #0x24e000
003c6a6c:  ldr      x9, [x9, #0x500]
003c6a70:  ldr      q0, [x8, #0x510]
003c6a74:  add      x8, x9, #0x10
003c6a78:  stur     q0, [x0, #8]
003c6a7c:  str      x8, [x0]
003c6a80:  b        #0x3c8cf0
003c6a84:  mov      w0, #0x30
003c6a88:  bl       #0x644c30
003c6a8c:  movi     v0.2d, #0000000000000000
003c6a90:  mov      w8, #-1
003c6a94:  stp      q0, q0, [x0]
003c6a98:  str      w8, [x0, #8]
003c6a9c:  adrp     x8, #0x659000
003c6aa0:  add      x8, x8, #0x140
003c6aa4:  str      q0, [x0, #0x20]
003c6aa8:  b        #0x3c8cec
003c6aac:  mov      w0, #0xb8
003c6ab0:  bl       #0x644c30
003c6ab4:  movi     v0.2d, #0000000000000000
003c6ab8:  mov      w8, #-1
003c6abc:  stp      q0, q0, [x0]
003c6ac0:  str      w8, [x0, #8]
003c6ac4:  mov      w8, #0xfffe
003c6ac8:  stp      q0, q0, [x0, #0x20]
003c6acc:  stp      q0, q0, [x0, #0x40]
003c6ad0:  stp      q0, q0, [x0, #0x60]
003c6ad4:  strh     w8, [x0, #0x60]
003c6ad8:  mov      x8, #-0x10000
003c6adc:  movk     x8, #0x3f80, lsl #16
003c6ae0:  stp      q0, q0, [x0, #0x80]
003c6ae4:  str      xzr, [x0, #0x30]
003c6ae8:  str      x8, [x0, #0x88]
003c6aec:  adrp     x8, #0x67d000
003c6af0:  ldr      x8, [x8, #0xc0]
003c6af4:  stp      xzr, xzr, [x0, #0x68]
003c6af8:  str      xzr, [x0, #0x78]
003c6afc:  add      x8, x8, #0x10
003c6b00:  stp      xzr, xzr, [x0, #0xa0]
003c6b04:  str      x8, [x0]
003c6b08:  str      xzr, [x0, #0xb0]
003c6b0c:  b        #0x3c8cf0
003c6b10:  mov      w0, #0xd8
003c6b14:  bl       #0x644c30
003c6b18:  movi     v0.2d, #0000000000000000
003c6b1c:  mov      x19, x0
003c6b20:  str      xzr, [x0, #0xd0]
003c6b24:  stp      q0, q0, [x0]
003c6b28:  stp      q0, q0, [x0, #0x20]
003c6b2c:  stp      q0, q0, [x0, #0x40]
003c6b30:  stp      q0, q0, [x0, #0x60]
003c6b34:  stp      q0, q0, [x0, #0x80]
003c6b38:  stp      q0, q0, [x0, #0xa0]
003c6b3c:  str      q0, [x0, #0xc0]
003c6b40:  bl       #0x3cbcfc
003c6b44:  mov      x0, x19
003c6b48:  b        #0x3c8cf0
003c6b4c:  mov      w0, #0x18
003c6b50:  bl       #0x644c30
003c6b54:  adrp     x8, #0x24e000
003c6b58:  adrp     x9, #0x67c000
003c6b5c:  ldr      x9, [x9, #0xe18]
003c6b60:  ldr      q0, [x8, #0x490]
003c6b64:  b        #0x3c81d0
003c6b68:  mov      w0, #0x38
003c6b6c:  bl       #0x644c30
003c6b70:  movi     v0.2d, #0000000000000000
003c6b74:  str      xzr, [x0, #0x30]
003c6b78:  adrp     x8, #0x67d000
003c6b7c:  mov      w9, #-1
003c6b80:  str      q0, [x0]
003c6b84:  ldr      x8, [x8, #0x250]
003c6b88:  stp      q0, q0, [x0, #0x10]
003c6b8c:  str      w9, [x0, #8]
003c6b90:  add      x8, x8, #0x10
003c6b94:  strb     wzr, [x0, #0x30]
003c6b98:  str      x8, [x0]
003c6b9c:  b        #0x3c8cf0
003c6ba0:  mov      w0, #0x18
003c6ba4:  bl       #0x644c30
003c6ba8:  adrp     x8, #0x67c000
003c6bac:  movi     d0, #0x000000ffffffff
003c6bb0:  ldr      x8, [x8, #0xd78]
003c6bb4:  b        #0x3c7758
003c6bb8:  mov      w0, #0x68
003c6bbc:  bl       #0x644c30
003c6bc0:  movi     v0.2d, #0000000000000000
003c6bc4:  mov      w8, #-1
003c6bc8:  mov      w9, #1
003c6bcc:  str      q0, [x0]
003c6bd0:  str      w8, [x0, #8]
003c6bd4:  adrp     x8, #0x67d000
003c6bd8:  ldr      x8, [x8, #0x2b0]
003c6bdc:  stp      q0, q0, [x0, #0x10]
003c6be0:  str      w9, [x0, #0x28]
003c6be4:  add      x8, x8, #0x10
003c6be8:  stp      q0, q0, [x0, #0x30]
003c6bec:  str      x8, [x0]
003c6bf0:  str      q0, [x0, #0x50]
003c6bf4:  str      xzr, [x0, #0x60]
003c6bf8:  b        #0x3c8cf0
003c6bfc:  mov      w0, #0x58
003c6c00:  bl       #0x644c30
003c6c04:  movi     v0.2d, #0000000000000000
003c6c08:  adrp     x8, #0x24e000
003c6c0c:  str      xzr, [x0, #0x50]
003c6c10:  ldr      d1, [x8, #0x6c8]
003c6c14:  adrp     x8, #0x663000
003c6c18:  add      x8, x8, #0xd68
003c6c1c:  stp      xzr, xzr, [x0, #0x10]
003c6c20:  str      d1, [x0, #8]
003c6c24:  stp      q0, q0, [x0, #0x20]
003c6c28:  str      q0, [x0, #0x40]
003c6c2c:  b        #0x3c8090
003c6c30:  mov      w0, #0x60
003c6c34:  bl       #0x644c30
003c6c38:  mov      x19, x0
003c6c3c:  bl       #0x647980
003c6c40:  mov      x0, x19
003c6c44:  b        #0x3c8cf0
003c6c48:  mov      w0, #0x10
003c6c4c:  bl       #0x644c30
003c6c50:  movi     v0.2d, #0xffffffffffffffff
003c6c54:  adrp     x8, #0x65a000
003c6c58:  add      x8, x8, #0x518
003c6c5c:  b        #0x3c7cb4
003c6c60:  mov      w0, #0x1a0
003c6c64:  bl       #0x644c30
003c6c68:  movi     v0.2d, #0000000000000000
003c6c6c:  mov      x19, x0
003c6c70:  stp      q0, q0, [x0]
003c6c74:  stp      q0, q0, [x0, #0x20]
003c6c78:  stp      q0, q0, [x0, #0x40]
003c6c7c:  stp      q0, q0, [x0, #0x60]
003c6c80:  stp      q0, q0, [x0, #0x80]
003c6c84:  stp      q0, q0, [x0, #0xa0]
003c6c88:  stp      q0, q0, [x0, #0xc0]
003c6c8c:  stp      q0, q0, [x0, #0xe0]
003c6c90:  stp      q0, q0, [x0, #0x100]
003c6c94:  stp      q0, q0, [x0, #0x120]
003c6c98:  stp      q0, q0, [x0, #0x140]
003c6c9c:  stp      q0, q0, [x0, #0x160]
003c6ca0:  stp      q0, q0, [x0, #0x180]
003c6ca4:  bl       #0x3cb548
003c6ca8:  mov      x0, x19
003c6cac:  b        #0x3c8cf0
003c6cb0:  mov      w0, #0x10
003c6cb4:  bl       #0x644c30
003c6cb8:  adrp     x8, #0x67d000
003c6cbc:  movi     d0, #0x000000ffffffff
003c6cc0:  ldr      x8, [x8, #0x508]
003c6cc4:  b        #0x3c775c
003c6cc8:  mov      w0, #0x10
003c6ccc:  bl       #0x644c30
003c6cd0:  movi     d0, #0x000000ffffffff
003c6cd4:  adrp     x8, #0x658000
003c6cd8:  add      x8, x8, #0x140
003c6cdc:  b        #0x3c796c
003c6ce0:  mov      w0, #0x58
003c6ce4:  bl       #0x644c30
003c6ce8:  movi     v0.2d, #0000000000000000
003c6cec:  adrp     x8, #0x67c000
003c6cf0:  mov      w9, #-1
003c6cf4:  str      q0, [x0, #0x20]
003c6cf8:  ldr      x8, [x8, #0xf08]
003c6cfc:  stp      q0, q0, [x0]
003c6d00:  str      w9, [x0, #8]
003c6d04:  add      x8, x8, #0x10
003c6d08:  stur     q0, [x0, #0x38]
003c6d0c:  str      x8, [x0]
003c6d10:  stur     q0, [x0, #0x48]
003c6d14:  stur     q0, [x0, #0x28]
003c6d18:  b        #0x3c8cf0
003c6d1c:  mov      w0, #0xf0
003c6d20:  bl       #0x644c30
003c6d24:  movi     v0.2d, #0000000000000000
003c6d28:  mov      x19, x0
003c6d2c:  stp      q0, q0, [x0]
003c6d30:  stp      q0, q0, [x0, #0x20]
003c6d34:  stp      q0, q0, [x0, #0x40]
003c6d38:  stp      q0, q0, [x0, #0x60]
003c6d3c:  stp      q0, q0, [x0, #0x80]
003c6d40:  stp      q0, q0, [x0, #0xa0]
003c6d44:  stp      q0, q0, [x0, #0xc0]
003c6d48:  str      q0, [x0, #0xe0]
003c6d4c:  bl       #0x3cbe18
003c6d50:  mov      x0, x19
003c6d54:  b        #0x3c8cf0
003c6d58:  mov      w0, #0x88
003c6d5c:  bl       #0x644c30
003c6d60:  movi     v0.2d, #0xffffffffffffffff
003c6d64:  movi     v1.2d, #0000000000000000
003c6d68:  str      xzr, [x0, #0x80]
003c6d6c:  strh     wzr, [x0, #0x80]
003c6d70:  adrp     x8, #0x67d000
003c6d74:  str      d0, [x0, #8]
003c6d78:  stp      q1, q1, [x0, #0x40]
003c6d7c:  stp      q1, q1, [x0, #0x60]
003c6d80:  stur     q1, [x0, #0x28]
003c6d84:  ldr      x8, [x8, #0x300]
003c6d88:  str      wzr, [x0, #0x48]
003c6d8c:  stur     q1, [x0, #0x38]
003c6d90:  add      x9, x8, #0x10
003c6d94:  str      x9, [x0]
003c6d98:  add      x9, x8, #0xc0
003c6d9c:  add      x8, x8, #0x140
003c6da0:  b        #0x3c7018
003c6da4:  mov      w0, #0xd8
003c6da8:  bl       #0x644c30
003c6dac:  movi     v0.2d, #0000000000000000
003c6db0:  mov      x19, x0
003c6db4:  str      xzr, [x0, #0xd0]
003c6db8:  stp      q0, q0, [x0]
003c6dbc:  stp      q0, q0, [x0, #0x20]
003c6dc0:  stp      q0, q0, [x0, #0x40]
003c6dc4:  stp      q0, q0, [x0, #0x60]
003c6dc8:  stp      q0, q0, [x0, #0x80]
003c6dcc:  stp      q0, q0, [x0, #0xa0]
003c6dd0:  str      q0, [x0, #0xc0]
003c6dd4:  bl       #0x3ca054
003c6dd8:  mov      x0, x19
003c6ddc:  b        #0x3c8cf0
003c6de0:  mov      w0, #0xf8
003c6de4:  bl       #0x644c30
003c6de8:  movi     v0.2d, #0000000000000000
003c6dec:  mov      w8, #-1
003c6df0:  str      xzr, [x0, #0xf0]
003c6df4:  adrp     x9, #0x67d000
003c6df8:  stp      q0, q0, [x0]
003c6dfc:  stp      q0, q0, [x0, #0x20]
003c6e00:  stp      q0, q0, [x0, #0x40]
003c6e04:  stp      q0, q0, [x0, #0x60]
003c6e08:  stp      q0, q0, [x0, #0x80]
003c6e0c:  stp      q0, q0, [x0, #0xa0]
003c6e10:  stp      q0, q0, [x0, #0xc0]
003c6e14:  str      q0, [x0, #0xe0]
003c6e18:  str      w8, [x0, #8]
003c6e1c:  adrp     x8, #0x66a000
003c6e20:  add      x8, x8, #0xf48
003c6e24:  stur     q0, [x0, #0xb9]
003c6e28:  ldr      x9, [x9, #0x218]
003c6e2c:  b        #0x3c82d0
003c6e30:  mov      w0, #0xc0
003c6e34:  bl       #0x644c30
003c6e38:  movi     v0.2d, #0000000000000000
003c6e3c:  mov      w8, #-1
003c6e40:  stp      q0, q0, [x0]
003c6e44:  str      w8, [x0, #8]
003c6e48:  mov      w8, #0xfffe
003c6e4c:  stp      q0, q0, [x0, #0x20]
003c6e50:  stp      q0, q0, [x0, #0x40]
003c6e54:  stp      q0, q0, [x0, #0x60]
003c6e58:  stp      q0, q0, [x0, #0x80]
003c6e5c:  stp      q0, q0, [x0, #0xa0]
003c6e60:  str      xzr, [x0, #0x30]
003c6e64:  strh     w8, [x0, #0x60]
003c6e68:  adrp     x8, #0x67d000
003c6e6c:  stp      xzr, xzr, [x0, #0x68]
003c6e70:  str      xzr, [x0, #0x78]
003c6e74:  ldr      x8, [x8, #0x468]
003c6e78:  str      xzr, [x0, #0xb0]
003c6e7c:  strb     wzr, [x0, #0xb8]
003c6e80:  add      x9, x8, #0x10
003c6e84:  add      x8, x8, #0xc8
003c6e88:  str      x9, [x0]
003c6e8c:  stp      x8, xzr, [x0, #0xa0]
003c6e90:  b        #0x3c8cf0
003c6e94:  mov      w0, #0x18
003c6e98:  bl       #0x644c30
003c6e9c:  adrp     x9, #0x67c000
003c6ea0:  movi     d0, #0x000000ffffffff
003c6ea4:  mov      w8, #-1
003c6ea8:  ldr      x9, [x9, #0xd70]
003c6eac:  str      x8, [x0, #0x10]
003c6eb0:  add      x8, x9, #0x10
003c6eb4:  b        #0x3c7760
003c6eb8:  mov      w0, #0x110
003c6ebc:  bl       #0x644c30
003c6ec0:  movi     v0.2d, #0000000000000000
003c6ec4:  adrp     x8, #0x24e000
003c6ec8:  adrp     x9, #0x67d000
003c6ecc:  ldr      d1, [x8, #0x888]
003c6ed0:  mov      w8, #-1
003c6ed4:  stp      q0, q0, [x0]
003c6ed8:  stp      q0, q0, [x0, #0x20]
003c6edc:  stp      q0, q0, [x0, #0x30]
003c6ee0:  stp      q0, q0, [x0, #0x40]
003c6ee4:  stp      q0, q0, [x0, #0x50]
003c6ee8:  stp      q0, q0, [x0, #0x60]
003c6eec:  stp      q0, q0, [x0, #0x70]
003c6ef0:  stp      q0, q0, [x0, #0x80]
003c6ef4:  stp      q0, q0, [x0, #0x90]
003c6ef8:  stp      q0, q0, [x0, #0xa0]
003c6efc:  stp      q0, q0, [x0, #0xb0]
003c6f00:  stp      q0, q0, [x0, #0xd0]
003c6f04:  stp      q0, q0, [x0, #0xf0]
003c6f08:  stur     q0, [x0, #0xb9]
003c6f0c:  fmov     v0.4s, #1.00000000
003c6f10:  str      d1, [x0, #0xd8]
003c6f14:  ldr      x9, [x9, #0x1f0]
003c6f18:  str      w8, [x0, #8]
003c6f1c:  add      x8, x9, #0x10
003c6f20:  stur     q0, [x0, #0xe4]
003c6f24:  str      x8, [x0]
003c6f28:  add      x8, x9, #0xf8
003c6f2c:  str      x8, [x0, #0x28]
003c6f30:  adrp     x8, #0x66a000
003c6f34:  add      x8, x8, #0xf48
003c6f38:  str      x8, [x0, #0x100]
003c6f3c:  b        #0x3c8cf0
003c6f40:  mov      w0, #0xb8
003c6f44:  bl       #0x644c30
003c6f48:  movi     v0.2d, #0000000000000000
003c6f4c:  mov      w8, #-1
003c6f50:  str      xzr, [x0, #0xb0]
003c6f54:  stp      q0, q0, [x0]
003c6f58:  str      w8, [x0, #8]
003c6f5c:  mov      w8, #0xfffe
003c6f60:  stp      q0, q0, [x0, #0x20]
003c6f64:  stp      q0, q0, [x0, #0x40]
003c6f68:  stp      q0, q0, [x0, #0x60]
003c6f6c:  stp      q0, q0, [x0, #0x90]
003c6f70:  str      q0, [x0, #0x80]
003c6f74:  str      xzr, [x0, #0x30]
003c6f78:  strh     w8, [x0, #0x60]
003c6f7c:  adrp     x8, #0x67d000
003c6f80:  stp      xzr, xzr, [x0, #0x68]
003c6f84:  str      xzr, [x0, #0x78]
003c6f88:  ldr      x8, [x8, #0x2d0]
003c6f8c:  stp      xzr, xzr, [x0, #0x90]
003c6f90:  strb     wzr, [x0, #0xa0]
003c6f94:  add      x9, x8, #0x10
003c6f98:  add      x8, x8, #0xf0
003c6f9c:  str      x9, [x0]
003c6fa0:  str      x8, [x0, #0x88]
003c6fa4:  b        #0x3c8cf0
003c6fa8:  mov      w0, #0x20
003c6fac:  bl       #0x644c30
003c6fb0:  movi     v0.2d, #0000000000000000
003c6fb4:  mov      w8, #-1
003c6fb8:  stp      q0, q0, [x0]
003c6fbc:  str      w8, [x0, #8]
003c6fc0:  adrp     x8, #0x662000
003c6fc4:  add      x8, x8, #0x358
003c6fc8:  str      x8, [x0]
003c6fcc:  b        #0x3c8cf0
003c6fd0:  mov      w0, #0x88
003c6fd4:  bl       #0x644c30
003c6fd8:  movi     v0.2d, #0xffffffffffffffff
003c6fdc:  movi     v1.2d, #0000000000000000
003c6fe0:  str      xzr, [x0, #0x80]
003c6fe4:  strh     wzr, [x0, #0x80]
003c6fe8:  adrp     x8, #0x67c000
003c6fec:  str      d0, [x0, #8]
003c6ff0:  stp      q1, q1, [x0, #0x40]
003c6ff4:  stp      q1, q1, [x0, #0x60]
003c6ff8:  stur     q1, [x0, #0x28]
003c6ffc:  ldr      x8, [x8, #0xe88]
003c7000:  str      wzr, [x0, #0x48]
003c7004:  stur     q1, [x0, #0x38]
003c7008:  add      x9, x8, #0x10
003c700c:  str      x9, [x0]
003c7010:  add      x9, x8, #0xc8
003c7014:  add      x8, x8, #0x148
003c7018:  stp      x9, xzr, [x0, #0x10]
003c701c:  str      x8, [x0, #0x20]
003c7020:  b        #0x3c8cf0
003c7024:  mov      w0, #0x138
003c7028:  bl       #0x644c30
003c702c:  mov      x19, x0
003c7030:  bl       #0x648c40
003c7034:  mov      x0, x19
003c7038:  b        #0x3c8cf0
003c703c:  mov      w0, #0x118
003c7040:  bl       #0x644c30
003c7044:  movi     v0.2d, #0000000000000000
003c7048:  mov      x19, x0
003c704c:  str      xzr, [x0, #0x110]
003c7050:  stp      q0, q0, [x0]
003c7054:  stp      q0, q0, [x0, #0x20]
003c7058:  stp      q0, q0, [x0, #0x40]
003c705c:  stp      q0, q0, [x0, #0x60]
003c7060:  stp      q0, q0, [x0, #0x80]
003c7064:  stp      q0, q0, [x0, #0xa0]
003c7068:  stp      q0, q0, [x0, #0xc0]
003c706c:  stp      q0, q0, [x0, #0xe0]
003c7070:  str      q0, [x0, #0x100]
003c7074:  bl       #0x3cb0f4
003c7078:  mov      x0, x19
003c707c:  b        #0x3c8cf0
003c7080:  mov      w0, #0x120
003c7084:  bl       #0x644c30
003c7088:  movi     v0.2d, #0000000000000000
003c708c:  mov      w8, #-1
003c7090:  adrp     x9, #0x67d000
003c7094:  stp      q0, q0, [x0]
003c7098:  stp      q0, q0, [x0, #0x20]
003c709c:  stp      q0, q0, [x0, #0x40]
003c70a0:  stp      q0, q0, [x0, #0x60]
003c70a4:  stp      q0, q0, [x0, #0x80]
003c70a8:  stp      q0, q0, [x0, #0xa0]
003c70ac:  stp      q0, q0, [x0, #0xc0]
003c70b0:  str      w8, [x0, #8]
003c70b4:  ldr      x9, [x9, #0x1d8]
003c70b8:  str      w8, [x0, #0xd8]
003c70bc:  stur     q0, [x0, #0xb9]
003c70c0:  add      x8, x9, #0x10
003c70c4:  str      q0, [x0, #0x110]
003c70c8:  str      x8, [x0]
003c70cc:  add      x8, x9, #0xc8
003c70d0:  str      x8, [x0, #0x28]
003c70d4:  adrp     x8, #0x660000
003c70d8:  add      x8, x8, #0x630
003c70dc:  stp      xzr, x8, [x0, #0xe0]
003c70e0:  b        #0x3c8008
003c70e4:  mov      w0, #0x1a0
003c70e8:  bl       #0x644c30
003c70ec:  movi     v0.2d, #0000000000000000
003c70f0:  mov      x19, x0
003c70f4:  stp      q0, q0, [x0]
003c70f8:  stp      q0, q0, [x0, #0x20]
003c70fc:  stp      q0, q0, [x0, #0x40]
003c7100:  stp      q0, q0, [x0, #0x60]
003c7104:  stp      q0, q0, [x0, #0x80]
003c7108:  stp      q0, q0, [x0, #0xa0]
003c710c:  stp      q0, q0, [x0, #0xc0]
003c7110:  stp      q0, q0, [x0, #0xe0]
003c7114:  stp      q0, q0, [x0, #0x100]
003c7118:  stp      q0, q0, [x0, #0x120]
003c711c:  stp      q0, q0, [x0, #0x140]
003c7120:  stp      q0, q0, [x0, #0x160]
003c7124:  stp      q0, q0, [x0, #0x180]
003c7128:  bl       #0x3cb618
003c712c:  mov      x0, x19
003c7130:  b        #0x3c8cf0
003c7134:  mov      w0, #0x90
003c7138:  bl       #0x644c30
003c713c:  movi     v0.2d, #0000000000000000
003c7140:  movi     d1, #0x000000ffffffff
003c7144:  mov      w8, #-1
003c7148:  stp      q0, q0, [x0, #0x10]
003c714c:  stp      q0, q0, [x0, #0x50]
003c7150:  stp      q0, q0, [x0, #0x70]
003c7154:  str      d1, [x0, #8]
003c7158:  str      w8, [x0, #0x10]
003c715c:  adrp     x8, #0x67c000
003c7160:  stur     q0, [x0, #0x58]
003c7164:  stur     q0, [x0, #0x68]
003c7168:  stur     q0, [x0, #0x78]
003c716c:  strh     wzr, [x0, #0x88]
003c7170:  ldr      x8, [x8, #0xe70]
003c7174:  stp      q0, q0, [x0, #0x30]
003c7178:  str      wzr, [x0, #0x50]
003c717c:  add      x9, x8, #0x10
003c7180:  str      x9, [x0]
003c7184:  add      x9, x8, #0xc0
003c7188:  add      x8, x8, #0x140
003c718c:  str      x9, [x0, #0x18]
003c7190:  str      x8, [x0, #0x28]
003c7194:  b        #0x3c8cf0
003c7198:  mov      w0, #0x18
003c719c:  bl       #0x644c30
003c71a0:  movi     d0, #0x000000ffffffff
003c71a4:  mov      w8, #-1
003c71a8:  str      x8, [x0, #0x10]
003c71ac:  adrp     x8, #0x657000
003c71b0:  add      x8, x8, #0xec8
003c71b4:  b        #0x3c796c
003c71b8:  mov      w0, #0x18
003c71bc:  bl       #0x644c30
003c71c0:  movi     d0, #0x000000ffffffff
003c71c4:  adrp     x8, #0x659000
003c71c8:  add      x8, x8, #0xe10
003c71cc:  str      xzr, [x0, #0x10]
003c71d0:  b        #0x3c796c
003c71d4:  mov      w0, #0x90
003c71d8:  bl       #0x644c30
003c71dc:  movi     v0.2d, #0000000000000000
003c71e0:  mov      x19, x0
003c71e4:  stp      q0, q0, [x0]
003c71e8:  stp      q0, q0, [x0, #0x20]
003c71ec:  stp      q0, q0, [x0, #0x40]
003c71f0:  stp      q0, q0, [x0, #0x60]
003c71f4:  str      q0, [x0, #0x80]
003c71f8:  bl       #0x3cbbc8
003c71fc:  mov      x0, x19
003c7200:  b        #0x3c8cf0
003c7204:  mov      w0, #0x10
003c7208:  bl       #0x644c30
003c720c:  mov      w8, #-1
003c7210:  adrp     x9, #0x663000
003c7214:  add      x9, x9, #0x718
003c7218:  b        #0x3c80dc
003c721c:  mov      w0, #0x28
003c7220:  bl       #0x644c30
003c7224:  movi     d0, #0x000000ffffffff
003c7228:  adrp     x8, #0x657000
003c722c:  add      x8, x8, #0xfa0
003c7230:  str      x8, [x0]
003c7234:  stp      xzr, xzr, [x0, #0x18]
003c7238:  str      d0, [x0, #8]
003c723c:  str      xzr, [x0, #0x10]
003c7240:  b        #0x3c8cf0
003c7244:  mov      w0, #0x170
003c7248:  bl       #0x644c30
003c724c:  movi     v0.2d, #0000000000000000
003c7250:  mov      x19, x0
003c7254:  stp      q0, q0, [x0]
003c7258:  stp      q0, q0, [x0, #0x20]
003c725c:  stp      q0, q0, [x0, #0x40]
003c7260:  stp      q0, q0, [x0, #0x60]
003c7264:  stp      q0, q0, [x0, #0x80]
003c7268:  stp      q0, q0, [x0, #0xa0]
003c726c:  stp      q0, q0, [x0, #0xc0]
003c7270:  stp      q0, q0, [x0, #0xe0]
003c7274:  stp      q0, q0, [x0, #0x100]
003c7278:  stp      q0, q0, [x0, #0x120]
003c727c:  stp      q0, q0, [x0, #0x140]
003c7280:  str      q0, [x0, #0x160]
003c7284:  bl       #0x3ca56c
003c7288:  mov      x0, x19
003c728c:  b        #0x3c8cf0
003c7290:  mov      w0, #0xb0
003c7294:  bl       #0x644c30
003c7298:  movi     v0.2d, #0000000000000000
003c729c:  mov      w8, #-1
003c72a0:  stp      q0, q0, [x0]
003c72a4:  str      w8, [x0, #8]
003c72a8:  mov      w8, #0xfffe
003c72ac:  stp      q0, q0, [x0, #0x60]
003c72b0:  strh     w8, [x0, #0x60]
003c72b4:  mov      w8, #0x1d1d
003c72b8:  movk     w8, #0xff1d, lsl #16
003c72bc:  stp      q0, q0, [x0, #0x20]
003c72c0:  stp      q0, q0, [x0, #0x40]
003c72c4:  stp      q0, q0, [x0, #0x80]
003c72c8:  str      q0, [x0, #0xa0]
003c72cc:  str      xzr, [x0, #0x30]
003c72d0:  stp      xzr, xzr, [x0, #0x68]
003c72d4:  str      xzr, [x0, #0x78]
003c72d8:  str      w8, [x0, #0x88]
003c72dc:  adrp     x8, #0x67d000
003c72e0:  ldr      x8, [x8, #0x440]
003c72e4:  b        #0x3c792c
003c72e8:  mov      w0, #0xf0
003c72ec:  bl       #0x644c30
003c72f0:  movi     v0.2d, #0000000000000000
003c72f4:  mov      x19, x0
003c72f8:  stp      q0, q0, [x0]
003c72fc:  stp      q0, q0, [x0, #0x20]
003c7300:  stp      q0, q0, [x0, #0x40]
003c7304:  stp      q0, q0, [x0, #0x60]
003c7308:  stp      q0, q0, [x0, #0x80]
003c730c:  stp      q0, q0, [x0, #0xa0]
003c7310:  stp      q0, q0, [x0, #0xc0]
003c7314:  str      q0, [x0, #0xe0]
003c7318:  bl       #0x3cabd0
003c731c:  mov      x0, x19
003c7320:  b        #0x3c8cf0
003c7324:  mov      w0, #0x90
003c7328:  bl       #0x644c30
003c732c:  movi     v0.2d, #0000000000000000
003c7330:  mov      w8, #-1
003c7334:  adrp     x9, #0x24e000
003c7338:  ldr      d1, [x9, #0x888]
003c733c:  mov      w9, #1
003c7340:  stp      q0, q0, [x0]
003c7344:  stp      q0, q0, [x0, #0x20]
003c7348:  stp      q0, q0, [x0, #0x40]
003c734c:  str      w8, [x0, #8]
003c7350:  str      w8, [x0, #0x40]
003c7354:  adrp     x8, #0x67c000
003c7358:  ldr      x8, [x8, #0xf20]
003c735c:  str      d1, [x0, #0x50]
003c7360:  str      w9, [x0, #0x58]
003c7364:  add      x8, x8, #0x10
003c7368:  stp      q0, q0, [x0, #0x60]
003c736c:  str      x8, [x0]
003c7370:  str      w9, [x0, #0x68]
003c7374:  str      q0, [x0, #0x80]
003c7378:  b        #0x3c8cf0
003c737c:  mov      w0, #0x50
003c7380:  bl       #0x644c30
003c7384:  movi     v0.2d, #0000000000000000
003c7388:  adrp     x8, #0x24e000
003c738c:  mov      x9, #-0xf5c200000001
003c7390:  ldr      d1, [x8, #0x648]
003c7394:  adrp     x8, #0x67c000
003c7398:  movk     x9, #0x3ed7, lsl #48
003c739c:  stp      q0, q0, [x0, #0x10]
003c73a0:  str      q0, [x0, #0x30]
003c73a4:  ldr      x8, [x8, #0xd50]
003c73a8:  str      q0, [x0, #0x40]
003c73ac:  stur     d1, [x0, #0x14]
003c73b0:  add      x8, x8, #0x10
003c73b4:  stp      x8, x9, [x0]
003c73b8:  b        #0x3c8cf0
003c73bc:  mov      w0, #0x28
003c73c0:  bl       #0x644c30
003c73c4:  movi     v0.2d, #0000000000000000
003c73c8:  mov      w8, #-1
003c73cc:  str      xzr, [x0, #0x20]
003c73d0:  stp      q0, q0, [x0]
003c73d4:  str      w8, [x0, #8]
003c73d8:  adrp     x8, #0x659000
003c73dc:  add      x8, x8, #0x778
003c73e0:  str      x8, [x0]
003c73e4:  b        #0x3c8cf0
003c73e8:  mov      w0, #0xd8
003c73ec:  bl       #0x644c30
003c73f0:  movi     v0.2d, #0000000000000000
003c73f4:  mov      x19, x0
003c73f8:  str      xzr, [x0, #0xd0]
003c73fc:  stp      q0, q0, [x0]
003c7400:  stp      q0, q0, [x0, #0x20]
003c7404:  stp      q0, q0, [x0, #0x40]
003c7408:  stp      q0, q0, [x0, #0x60]
003c740c:  stp      q0, q0, [x0, #0x80]
003c7410:  stp      q0, q0, [x0, #0xa0]
003c7414:  str      q0, [x0, #0xc0]
003c7418:  bl       #0x3ca0cc
003c741c:  mov      x0, x19
003c7420:  b        #0x3c8cf0
003c7424:  mov      w0, #0x108
003c7428:  bl       #0x644c30
003c742c:  movi     v0.2d, #0000000000000000
003c7430:  mov      x19, x0
003c7434:  str      xzr, [x0, #0x100]
003c7438:  stp      q0, q0, [x0]
003c743c:  stp      q0, q0, [x0, #0x20]
003c7440:  stp      q0, q0, [x0, #0x40]
003c7444:  stp      q0, q0, [x0, #0x60]
003c7448:  stp      q0, q0, [x0, #0x80]
003c744c:  stp      q0, q0, [x0, #0xa0]
003c7450:  stp      q0, q0, [x0, #0xc0]
003c7454:  stp      q0, q0, [x0, #0xe0]
003c7458:  bl       #0x3c9ca4
003c745c:  mov      x0, x19
003c7460:  b        #0x3c8cf0
003c7464:  mov      w0, #0x10
003c7468:  bl       #0x644c30
003c746c:  movi     v0.2d, #0xffffffffffffffff
003c7470:  adrp     x8, #0x65a000
003c7474:  add      x8, x8, #0x278
003c7478:  b        #0x3c7cb4
003c747c:  mov      w0, #0xd0
003c7480:  bl       #0x644c30
003c7484:  movi     v0.2d, #0000000000000000
003c7488:  mov      w8, #-1
003c748c:  stp      q0, q0, [x0]
003c7490:  str      w8, [x0, #8]
003c7494:  mov      w8, #0xfffe
003c7498:  stp      q0, q0, [x0, #0x20]
003c749c:  stp      q0, q0, [x0, #0x40]
003c74a0:  stp      q0, q0, [x0, #0x60]
003c74a4:  strh     w8, [x0, #0x60]
003c74a8:  mov      w8, #0xa3d
003c74ac:  movk     w8, #0x3ed7, lsl #16
003c74b0:  stp      q0, q0, [x0, #0x80]
003c74b4:  str      w8, [x0, #0x88]
003c74b8:  adrp     x8, #0x24e000
003c74bc:  stp      q0, q0, [x0, #0xa0]
003c74c0:  str      q0, [x0, #0xc0]
003c74c4:  ldr      d0, [x8, #0x648]
003c74c8:  adrp     x8, #0x67c000
003c74cc:  str      xzr, [x0, #0x30]
003c74d0:  stp      xzr, xzr, [x0, #0x68]
003c74d4:  ldr      x8, [x8, #0xd58]
003c74d8:  str      xzr, [x0, #0x78]
003c74dc:  str      d0, [x0, #0x90]
003c74e0:  b        #0x3c8c18
003c74e4:  mov      w0, #0x130
003c74e8:  bl       #0x644c30
003c74ec:  movi     v0.2d, #0000000000000000
003c74f0:  mov      x19, x0
003c74f4:  stp      q0, q0, [x0]
003c74f8:  stp      q0, q0, [x0, #0x20]
003c74fc:  stp      q0, q0, [x0, #0x40]
003c7500:  stp      q0, q0, [x0, #0x60]
003c7504:  stp      q0, q0, [x0, #0x80]
003c7508:  stp      q0, q0, [x0, #0xa0]
003c750c:  stp      q0, q0, [x0, #0xc0]
003c7510:  stp      q0, q0, [x0, #0xe0]
003c7514:  stp      q0, q0, [x0, #0x100]
003c7518:  str      q0, [x0, #0x120]
003c751c:  bl       #0x3c9c2c
003c7520:  mov      x0, x19
003c7524:  b        #0x3c8cf0
003c7528:  mov      w0, #0x10
003c752c:  bl       #0x644c30
003c7530:  mov      w8, #-1
003c7534:  adrp     x9, #0x65a000
003c7538:  add      x9, x9, #0x6d8
003c753c:  b        #0x3c8474
003c7540:  mov      w0, #0x28
003c7544:  bl       #0x644c30
003c7548:  str      xzr, [x0, #0x20]
003c754c:  adrp     x8, #0x67c000
003c7550:  movi     d0, #0x000000ffffffff
003c7554:  ldr      x8, [x8, #0xf58]
003c7558:  stp      xzr, xzr, [x0, #0x10]
003c755c:  b        #0x3c775c
003c7560:  mov      w0, #0x100
003c7564:  bl       #0x644c30
003c7568:  movi     v0.2d, #0000000000000000
003c756c:  mov      w8, #-1
003c7570:  mov      w9, #1
003c7574:  stp      q0, q0, [x0]
003c7578:  stp      q0, q0, [x0, #0x20]
003c757c:  stp      q0, q0, [x0, #0x40]
003c7580:  stp      q0, q0, [x0, #0x60]
003c7584:  stp      q0, q0, [x0, #0x80]
003c7588:  stp      q0, q0, [x0, #0xa0]
003c758c:  stp      q0, q0, [x0, #0xc0]
003c7590:  stp      q0, q0, [x0, #0xe0]
003c7594:  str      w8, [x0, #8]
003c7598:  adrp     x8, #0x67d000
003c759c:  ldr      x8, [x8, #0x210]
003c75a0:  str      w9, [x0, #0xd8]
003c75a4:  stur     q0, [x0, #0xb9]
003c75a8:  add      x9, x8, #0x10
003c75ac:  add      x8, x8, #0xc8
003c75b0:  str      x8, [x0, #0x28]
003c75b4:  adrp     x8, #0x66a000
003c75b8:  add      x8, x8, #0xfc8
003c75bc:  str      x9, [x0]
003c75c0:  str      x8, [x0, #0xe0]
003c75c4:  b        #0x3c8cf0
003c75c8:  mov      w0, #0x108
003c75cc:  bl       #0x644c30
003c75d0:  movi     v0.2d, #0000000000000000
003c75d4:  mov      x19, x0
003c75d8:  str      xzr, [x0, #0x100]
003c75dc:  stp      q0, q0, [x0]
003c75e0:  stp      q0, q0, [x0, #0x20]
003c75e4:  stp      q0, q0, [x0, #0x40]
003c75e8:  stp      q0, q0, [x0, #0x60]
003c75ec:  stp      q0, q0, [x0, #0x80]
003c75f0:  stp      q0, q0, [x0, #0xa0]
003c75f4:  stp      q0, q0, [x0, #0xc0]
003c75f8:  stp      q0, q0, [x0, #0xe0]
003c75fc:  bl       #0x3caa7c
003c7600:  mov      x0, x19
003c7604:  b        #0x3c8cf0
003c7608:  mov      w0, #0xf8
003c760c:  bl       #0x644c30
003c7610:  movi     v0.2d, #0000000000000000
003c7614:  str      xzr, [x0, #0xf0]
003c7618:  adrp     x9, #0x67d000
003c761c:  mov      w8, #-1
003c7620:  stp      q0, q0, [x0]
003c7624:  stp      q0, q0, [x0, #0x20]
003c7628:  stp      q0, q0, [x0, #0x40]
003c762c:  stp      q0, q0, [x0, #0x60]
003c7630:  stp      q0, q0, [x0, #0x80]
003c7634:  stp      q0, q0, [x0, #0xa0]
003c7638:  stp      q0, q0, [x0, #0xc0]
003c763c:  str      q0, [x0, #0xe0]
003c7640:  ldr      x9, [x9, #0x208]
003c7644:  str      w8, [x0, #8]
003c7648:  stur     q0, [x0, #0xb9]
003c764c:  add      x8, x9, #0x10
003c7650:  str      x8, [x0]
003c7654:  add      x8, x9, #0xc0
003c7658:  str      x8, [x0, #0x28]
003c765c:  adrp     x8, #0x66a000
003c7660:  add      x8, x8, #0xfc8
003c7664:  str      x8, [x0, #0xd8]
003c7668:  b        #0x3c8cf0
003c766c:  mov      w0, #0x28
003c7670:  bl       #0x644c30
003c7674:  fmov     d0, xzr
003c7678:  movi     d1, #0x000000ffffffff
003c767c:  adrp     x8, #0x659000
003c7680:  add      x8, x8, #0xa08
003c7684:  str      xzr, [x0, #0x10]
003c7688:  str      x8, [x0]
003c768c:  mov      v0.d[1], v0.d[0]
003c7690:  str      d1, [x0, #8]
003c7694:  stur     q0, [x0, #0x18]
003c7698:  b        #0x3c8cf0
003c769c:  mov      w0, #0x108
003c76a0:  bl       #0x644c30
003c76a4:  mov      x19, x0
003c76a8:  bl       #0x648bb0
003c76ac:  mov      x0, x19
003c76b0:  b        #0x3c8cf0
003c76b4:  mov      w0, #0xf8
003c76b8:  bl       #0x644c30
003c76bc:  movi     v0.2d, #0000000000000000
003c76c0:  mov      w8, #-1
003c76c4:  str      xzr, [x0, #0xf0]
003c76c8:  adrp     x9, #0x67d000
003c76cc:  stp      q0, q0, [x0]
003c76d0:  stp      q0, q0, [x0, #0x20]
003c76d4:  stp      q0, q0, [x0, #0x40]
003c76d8:  stp      q0, q0, [x0, #0x60]
003c76dc:  stp      q0, q0, [x0, #0x80]
003c76e0:  stp      q0, q0, [x0, #0xa0]
003c76e4:  stp      q0, q0, [x0, #0xc0]
003c76e8:  str      q0, [x0, #0xe0]
003c76ec:  str      w8, [x0, #8]
003c76f0:  adrp     x8, #0x66a000
003c76f4:  add      x8, x8, #0xf48
003c76f8:  stur     q0, [x0, #0xb9]
003c76fc:  ldr      x9, [x9, #0x1e0]
003c7700:  b        #0x3c82d0
003c7704:  mov      w0, #0x90
003c7708:  bl       #0x644c30
003c770c:  movi     v0.2d, #0000000000000000
003c7710:  mov      w8, #-1
003c7714:  stp      q0, q0, [x0]
003c7718:  str      w8, [x0, #8]
003c771c:  mov      w8, #0xfffe
003c7720:  stp      q0, q0, [x0, #0x20]
003c7724:  stp      q0, q0, [x0, #0x40]
003c7728:  stp      q0, q0, [x0, #0x60]
003c772c:  str      q0, [x0, #0x80]
003c7730:  str      xzr, [x0, #0x30]
003c7734:  strh     w8, [x0, #0x60]
003c7738:  adrp     x8, #0x67d000
003c773c:  ldr      x8, [x8, #0x330]
003c7740:  b        #0x3c838c
003c7744:  mov      w0, #0x18
003c7748:  bl       #0x644c30
003c774c:  adrp     x8, #0x67c000
003c7750:  movi     d0, #0x000000ffffffff
003c7754:  ldr      x8, [x8, #0xea8]
003c7758:  str      xzr, [x0, #0x10]
003c775c:  add      x8, x8, #0x10
003c7760:  str      d0, [x0, #8]
003c7764:  b        #0x3c8cec
003c7768:  mov      w0, #0x90
003c776c:  bl       #0x644c30
003c7770:  movi     v0.2d, #0000000000000000
003c7774:  mov      w8, #-1
003c7778:  str      q0, [x0, #0x80]
003c777c:  stp      q0, q0, [x0]
003c7780:  stp      q0, q0, [x0, #0x20]
003c7784:  stp      q0, q0, [x0, #0x40]
003c7788:  stp      q0, q0, [x0, #0x60]
003c778c:  movi     v0.2d, #0xffffffffffffffff
003c7790:  str      w8, [x0, #8]
003c7794:  mov      w8, #0xfffe
003c7798:  str      xzr, [x0, #0x30]
003c779c:  strh     w8, [x0, #0x60]
003c77a0:  adrp     x8, #0x67c000
003c77a4:  stp      xzr, xzr, [x0, #0x68]
003c77a8:  ldr      x8, [x8, #0xfd0]
003c77ac:  str      xzr, [x0, #0x78]
003c77b0:  str      d0, [x0, #0x88]
003c77b4:  b        #0x3c8c18
003c77b8:  mov      w0, #0x30
003c77bc:  bl       #0x644c30
003c77c0:  movi     v0.2d, #0000000000000000
003c77c4:  mov      w8, #-1
003c77c8:  str      q0, [x0]
003c77cc:  str      w8, [x0, #8]
003c77d0:  adrp     x8, #0x664000
003c77d4:  add      x8, x8, #0x178
003c77d8:  b        #0x3c87a0
003c77dc:  mov      w0, #0xb0
003c77e0:  bl       #0x644c30
003c77e4:  movi     v0.2d, #0000000000000000
003c77e8:  mov      w8, #-1
003c77ec:  stp      q0, q0, [x0]
003c77f0:  str      w8, [x0, #8]
003c77f4:  mov      w8, #0xfffe
003c77f8:  stp      q0, q0, [x0, #0x20]
003c77fc:  stp      q0, q0, [x0, #0x40]
003c7800:  stp      q0, q0, [x0, #0x60]
003c7804:  stp      q0, q0, [x0, #0x90]
003c7808:  str      q0, [x0, #0x80]
003c780c:  str      xzr, [x0, #0x30]
003c7810:  strh     w8, [x0, #0x60]
003c7814:  adrp     x8, #0x67d000
003c7818:  stp      xzr, xzr, [x0, #0x68]
003c781c:  str      xzr, [x0, #0x78]
003c7820:  ldr      x8, [x8, #0x318]
003c7824:  b        #0x3c792c
003c7828:  mov      w0, #0x1a0
003c782c:  bl       #0x644c30
003c7830:  movi     v0.2d, #0000000000000000
003c7834:  mov      x19, x0
003c7838:  stp      q0, q0, [x0]
003c783c:  stp      q0, q0, [x0, #0x20]
003c7840:  stp      q0, q0, [x0, #0x40]
003c7844:  stp      q0, q0, [x0, #0x60]
003c7848:  stp      q0, q0, [x0, #0x80]
003c784c:  stp      q0, q0, [x0, #0xa0]
003c7850:  stp      q0, q0, [x0, #0xc0]
003c7854:  stp      q0, q0, [x0, #0xe0]
003c7858:  stp      q0, q0, [x0, #0x100]
003c785c:  stp      q0, q0, [x0, #0x120]
003c7860:  stp      q0, q0, [x0, #0x140]
003c7864:  stp      q0, q0, [x0, #0x160]
003c7868:  stp      q0, q0, [x0, #0x180]
003c786c:  bl       #0x3cb6e8
003c7870:  mov      x0, x19
003c7874:  b        #0x3c8cf0
003c7878:  mov      w0, #0xc8
003c787c:  bl       #0x644c30
003c7880:  movi     v0.2d, #0000000000000000
003c7884:  mov      w8, #-1
003c7888:  mov      w9, #0xfffe
003c788c:  stp      q0, q0, [x0]
003c7890:  stp      q0, q0, [x0, #0x20]
003c7894:  stp      q0, q0, [x0, #0x40]
003c7898:  stp      q0, q0, [x0, #0x60]
003c789c:  stp      q0, q0, [x0, #0x80]
003c78a0:  stp      q0, q0, [x0, #0xa0]
003c78a4:  str      w8, [x0, #8]
003c78a8:  str      xzr, [x0, #0x30]
003c78ac:  strh     w9, [x0, #0x60]
003c78b0:  mov      w9, #0x3f800000
003c78b4:  stp      xzr, xzr, [x0, #0x68]
003c78b8:  str      xzr, [x0, #0x78]
003c78bc:  str      w8, [x0, #0x88]
003c78c0:  adrp     x8, #0x67d000
003c78c4:  stur     q0, [x0, #0x98]
003c78c8:  ldr      x8, [x8, #0x380]
003c78cc:  str      w9, [x0, #0xb8]
003c78d0:  stur     q0, [x0, #0xa8]
003c78d4:  add      x9, x8, #0x10
003c78d8:  add      x8, x8, #0xe8
003c78dc:  str      xzr, [x0, #0xc0]
003c78e0:  b        #0x3c7a78
003c78e4:  mov      w0, #0xb0
003c78e8:  bl       #0x644c30
003c78ec:  movi     v0.2d, #0000000000000000
003c78f0:  mov      w8, #-1
003c78f4:  stp      q0, q0, [x0]
003c78f8:  str      w8, [x0, #8]
003c78fc:  mov      w8, #0xfffe
003c7900:  stp      q0, q0, [x0, #0x20]
003c7904:  stp      q0, q0, [x0, #0x40]
003c7908:  stp      q0, q0, [x0, #0x60]
003c790c:  stp      q0, q0, [x0, #0x90]
003c7910:  str      q0, [x0, #0x80]
003c7914:  str      xzr, [x0, #0x30]
003c7918:  strh     w8, [x0, #0x60]
003c791c:  adrp     x8, #0x67d000
003c7920:  stp      xzr, xzr, [x0, #0x68]
003c7924:  str      xzr, [x0, #0x78]
003c7928:  ldr      x8, [x8, #0x438]
003c792c:  add      x9, x8, #0x10
003c7930:  add      x8, x8, #0xc8
003c7934:  stp      xzr, xzr, [x0, #0x98]
003c7938:  strb     wzr, [x0, #0xa8]
003c793c:  b        #0x3c7a78
003c7940:  mov      w0, #0x10
003c7944:  bl       #0x644c30
003c7948:  movi     v0.2d, #0xffffffffffffffff
003c794c:  adrp     x8, #0x65a000
003c7950:  add      x8, x8, #0x198
003c7954:  b        #0x3c7cb4
003c7958:  mov      w0, #0x10
003c795c:  bl       #0x644c30
003c7960:  movi     d0, #0x000000ffffffff
003c7964:  adrp     x8, #0x659000
003c7968:  add      x8, x8, #0xd28
003c796c:  str      x8, [x0]
003c7970:  str      d0, [x0, #8]
003c7974:  b        #0x3c8cf0
003c7978:  mov      w0, #0x90
003c797c:  bl       #0x644c30
003c7980:  movi     v0.2d, #0000000000000000
003c7984:  mov      w8, #-1
003c7988:  str      q0, [x0, #0x80]
003c798c:  stp      q0, q0, [x0]
003c7990:  stp      q0, q0, [x0, #0x20]
003c7994:  stp      q0, q0, [x0, #0x40]
003c7998:  stp      q0, q0, [x0, #0x60]
003c799c:  movi     v0.2d, #0xffffffffffffffff
003c79a0:  str      w8, [x0, #8]
003c79a4:  mov      w8, #0xfffe
003c79a8:  strh     w8, [x0, #0x60]
003c79ac:  adrp     x8, #0x65e000
003c79b0:  add      x8, x8, #0xb70
003c79b4:  str      xzr, [x0, #0x30]
003c79b8:  stp      xzr, xzr, [x0, #0x68]
003c79bc:  str      xzr, [x0, #0x78]
003c79c0:  str      d0, [x0, #0x88]
003c79c4:  str      x8, [x0]
003c79c8:  b        #0x3c8cf0
003c79cc:  mov      w0, #0x160
003c79d0:  bl       #0x644c30
003c79d4:  movi     v0.2d, #0000000000000000
003c79d8:  mov      x19, x0
003c79dc:  stp      q0, q0, [x0]
003c79e0:  stp      q0, q0, [x0, #0x20]
003c79e4:  stp      q0, q0, [x0, #0x40]
003c79e8:  stp      q0, q0, [x0, #0x60]
003c79ec:  stp      q0, q0, [x0, #0x80]
003c79f0:  stp      q0, q0, [x0, #0xa0]
003c79f4:  stp      q0, q0, [x0, #0xc0]
003c79f8:  stp      q0, q0, [x0, #0xe0]
003c79fc:  stp      q0, q0, [x0, #0x100]
003c7a00:  stp      q0, q0, [x0, #0x120]
003c7a04:  stp      q0, q0, [x0, #0x140]
003c7a08:  bl       #0x3ca6e0
003c7a0c:  mov      x0, x19
003c7a10:  b        #0x3c8cf0
003c7a14:  mov      w0, #0xb0
003c7a18:  bl       #0x644c30
003c7a1c:  movi     v0.2d, #0000000000000000
003c7a20:  mov      w8, #-1
003c7a24:  stp      q0, q0, [x0]
003c7a28:  str      w8, [x0, #8]
003c7a2c:  mov      w8, #0xfffe
003c7a30:  stp      q0, q0, [x0, #0x20]
003c7a34:  stp      q0, q0, [x0, #0x40]
003c7a38:  stp      q0, q0, [x0, #0x60]
003c7a3c:  strh     w8, [x0, #0x60]
003c7a40:  mov      w8, #0x7474
003c7a44:  movk     w8, #0xff74, lsl #16
003c7a48:  stp      q0, q0, [x0, #0x80]
003c7a4c:  str      w8, [x0, #0x88]
003c7a50:  mov      w8, #0x3f800000
003c7a54:  str      xzr, [x0, #0x30]
003c7a58:  stp      xzr, xzr, [x0, #0x68]
003c7a5c:  str      xzr, [x0, #0x78]
003c7a60:  str      w8, [x0, #0x9c]
003c7a64:  adrp     x8, #0x67d000
003c7a68:  ldr      x8, [x8, #0x3a8]
003c7a6c:  stp      xzr, xzr, [x0, #0xa0]
003c7a70:  add      x9, x8, #0x10
003c7a74:  add      x8, x8, #0xc8
003c7a78:  str      x9, [x0]
003c7a7c:  str      x8, [x0, #0x90]
003c7a80:  b        #0x3c8cf0
003c7a84:  mov      w0, #0x18
003c7a88:  bl       #0x644c30
003c7a8c:  mov      x19, x0
003c7a90:  bl       #0x3cb158
003c7a94:  mov      x0, x19
003c7a98:  b        #0x3c8cf0
003c7a9c:  mov      w0, #0x30
003c7aa0:  bl       #0x644c30
003c7aa4:  movi     v0.2d, #0000000000000000
003c7aa8:  mov      w8, #-1
003c7aac:  str      q0, [x0]
003c7ab0:  str      w8, [x0, #8]
003c7ab4:  adrp     x8, #0x664000
003c7ab8:  add      x8, x8, #0x848
003c7abc:  b        #0x3c87a0
003c7ac0:  mov      w0, #0x118
003c7ac4:  bl       #0x644c30
003c7ac8:  movi     v0.2d, #0000000000000000
003c7acc:  mov      w8, #-1
003c7ad0:  str      xzr, [x0, #0x110]
003c7ad4:  stp      q0, q0, [x0]
003c7ad8:  str      w8, [x0, #8]
003c7adc:  mov      w8, #0xfffe
003c7ae0:  stp      q0, q0, [x0, #0x20]
003c7ae4:  stp      q0, q0, [x0, #0x40]
003c7ae8:  stp      q0, q0, [x0, #0x60]
003c7aec:  strh     w8, [x0, #0x60]
003c7af0:  mov      w8, #1
003c7af4:  stp      q0, q0, [x0, #0x40]
003c7af8:  stp      q0, q0, [x0, #0x80]
003c7afc:  stp      q0, q0, [x0, #0xa0]
003c7b00:  stp      q0, q0, [x0, #0xc0]
003c7b04:  stp      q0, q0, [x0, #0xe0]
003c7b08:  str      q0, [x0, #0x100]
003c7b0c:  str      xzr, [x0, #0x30]
003c7b10:  stp      xzr, xzr, [x0, #0x70]
003c7b14:  str      xzr, [x0, #0x68]
003c7b18:  str      w8, [x0, #0x8c]
003c7b1c:  adrp     x8, #0x67d000
003c7b20:  stur     q0, [x0, #0xb8]
003c7b24:  stur     q0, [x0, #0xc8]
003c7b28:  stur     q0, [x0, #0xd8]
003c7b2c:  stur     q0, [x0, #0xe8]
003c7b30:  str      xzr, [x0, #0xf8]
003c7b34:  ldr      x8, [x8, #0x550]
003c7b38:  b        #0x3c8418
003c7b3c:  mov      w0, #0x250
003c7b40:  bl       #0x644c30
003c7b44:  mov      w1, wzr
003c7b48:  mov      w2, #0x250
003c7b4c:  mov      x19, x0
003c7b50:  bl       #0x645640
003c7b54:  mov      x0, x19
003c7b58:  bl       #0x3ca774
003c7b5c:  mov      x0, x19
003c7b60:  b        #0x3c8cf0
003c7b64:  mov      w0, #0x18
003c7b68:  bl       #0x644c30
003c7b6c:  mov      w8, #-1
003c7b70:  str      xzr, [x0, #0x10]
003c7b74:  adrp     x9, #0x662000
003c7b78:  add      x9, x9, #0x290
003c7b7c:  b        #0x3c80dc
003c7b80:  mov      w0, #0x138
003c7b84:  bl       #0x644c30
003c7b88:  mov      x19, x0
003c7b8c:  bl       #0x648b80
003c7b90:  mov      x0, x19
003c7b94:  b        #0x3c8cf0
003c7b98:  mov      w0, #0x70
003c7b9c:  bl       #0x644c30
003c7ba0:  movi     v0.2d, #0000000000000000
003c7ba4:  mov      w8, #-1
003c7ba8:  stp      q0, q0, [x0]
003c7bac:  stp      q0, q0, [x0, #0x20]
003c7bb0:  stp      q0, q0, [x0, #0x40]
003c7bb4:  movi     d0, #0xffffffff00000000
003c7bb8:  str      w8, [x0, #8]
003c7bbc:  strb     wzr, [x0, #0x11]
003c7bc0:  str      w8, [x0, #0x28]
003c7bc4:  adrp     x8, #0x67c000
003c7bc8:  ldr      x8, [x8, #0xf18]
003c7bcc:  str      d0, [x0, #0x60]
003c7bd0:  str      xzr, [x0, #0x68]
003c7bd4:  b        #0x3c8c18
003c7bd8:  mov      w0, #0x90
003c7bdc:  bl       #0x644c30
003c7be0:  movi     v0.2d, #0000000000000000
003c7be4:  mov      w8, #-1
003c7be8:  stp      q0, q0, [x0]
003c7bec:  str      w8, [x0, #8]
003c7bf0:  mov      w8, #0xfffe
003c7bf4:  stp      q0, q0, [x0, #0x20]
003c7bf8:  stp      q0, q0, [x0, #0x40]
003c7bfc:  stp      q0, q0, [x0, #0x60]
003c7c00:  str      q0, [x0, #0x80]
003c7c04:  str      xzr, [x0, #0x30]
003c7c08:  strh     w8, [x0, #0x60]
003c7c0c:  adrp     x8, #0x67d000
003c7c10:  ldr      x8, [x8, #0x4b8]
003c7c14:  b        #0x3c838c
003c7c18:  mov      w0, #0x28
003c7c1c:  bl       #0x644c30
003c7c20:  movi     v0.2d, #0000000000000000
003c7c24:  mov      w8, #-1
003c7c28:  str      xzr, [x0, #0x20]
003c7c2c:  stp      q0, q0, [x0]
003c7c30:  str      w8, [x0, #8]
003c7c34:  adrp     x8, #0x65a000
003c7c38:  add      x8, x8, #0x7b8
003c7c3c:  str      x8, [x0]
003c7c40:  b        #0x3c8cf0
003c7c44:  mov      w0, #0xe8
003c7c48:  bl       #0x644c30
003c7c4c:  movi     v0.2d, #0000000000000000
003c7c50:  adrp     x9, #0x67d000
003c7c54:  mov      w8, #-1
003c7c58:  stp      q0, q0, [x0]
003c7c5c:  stp      q0, q0, [x0, #0x20]
003c7c60:  stp      q0, q0, [x0, #0x40]
003c7c64:  stp      q0, q0, [x0, #0x60]
003c7c68:  stp      q0, q0, [x0, #0x80]
003c7c6c:  stp      q0, q0, [x0, #0xa0]
003c7c70:  stp      q0, q0, [x0, #0xc0]
003c7c74:  ldr      x9, [x9, #0x1d0]
003c7c78:  str      w8, [x0, #8]
003c7c7c:  add      x8, x9, #0x10
003c7c80:  str      x8, [x0]
003c7c84:  add      x8, x9, #0xc0
003c7c88:  str      x8, [x0, #0x28]
003c7c8c:  adrp     x8, #0x66a000
003c7c90:  add      x8, x8, #0xf48
003c7c94:  stur     q0, [x0, #0xb9]
003c7c98:  stp      x8, xzr, [x0, #0xd8]
003c7c9c:  b        #0x3c8cf0
003c7ca0:  mov      w0, #0x10
003c7ca4:  bl       #0x644c30
003c7ca8:  movi     v0.2d, #0xffffffffffffffff
003c7cac:  adrp     x8, #0x65a000
003c7cb0:  add      x8, x8, #0x5f8
003c7cb4:  str      x8, [x0]
003c7cb8:  str      d0, [x0, #8]
003c7cbc:  b        #0x3c8cf0
003c7cc0:  mov      w0, #0x18
003c7cc4:  bl       #0x644c30
003c7cc8:  mov      w8, #-1
003c7ccc:  str      xzr, [x0, #0x10]
003c7cd0:  adrp     x9, #0x662000
003c7cd4:  add      x9, x9, #0x5a0
003c7cd8:  b        #0x3c80dc
003c7cdc:  mov      w0, #0x60
003c7ce0:  bl       #0x644c30
003c7ce4:  adrp     x9, #0x67c000
003c7ce8:  movi     v1.2d, #0000000000000000
003c7cec:  adrp     x8, #0x24e000
003c7cf0:  ldr      x9, [x9, #0xfc8]
003c7cf4:  ldr      q0, [x8, #0x150]
003c7cf8:  add      x8, x9, #0x10
003c7cfc:  add      x9, x9, #0xb8
003c7d00:  stur     q0, [x0, #8]
003c7d04:  str      x8, [x0]
003c7d08:  stp      q1, q1, [x0, #0x20]
003c7d0c:  stur     wzr, [x0, #0x27]
003c7d10:  stp      x9, xzr, [x0, #0x18]
003c7d14:  stp      q1, q1, [x0, #0x40]
003c7d18:  strb     wzr, [x0, #0x50]
003c7d1c:  b        #0x3c8cf0
003c7d20:  mov      w0, #0x120
003c7d24:  bl       #0x644c30
003c7d28:  movi     v0.2d, #0000000000000000
003c7d2c:  mov      w8, #-1
003c7d30:  mov      w9, #1
003c7d34:  stp      q0, q0, [x0]
003c7d38:  stp      q0, q0, [x0, #0x20]
003c7d3c:  stp      q0, q0, [x0, #0xd0]
003c7d40:  str      q0, [x0, #0x110]
003c7d44:  str      w8, [x0, #8]
003c7d48:  adrp     x8, #0x67d000
003c7d4c:  stp      q0, q0, [x0, #0x30]
003c7d50:  stp      q0, q0, [x0, #0x40]
003c7d54:  stp      q0, q0, [x0, #0x50]
003c7d58:  stp      q0, q0, [x0, #0x60]
003c7d5c:  stp      q0, q0, [x0, #0x70]
003c7d60:  stp      q0, q0, [x0, #0x80]
003c7d64:  stp      q0, q0, [x0, #0x90]
003c7d68:  stp      q0, q0, [x0, #0xa0]
003c7d6c:  stp      q0, q0, [x0, #0xb0]
003c7d70:  stp      q0, q0, [x0, #0xf0]
003c7d74:  ldr      x8, [x8, #0x200]
003c7d78:  str      w9, [x0, #0xd8]
003c7d7c:  stur     q0, [x0, #0xb9]
003c7d80:  add      x9, x8, #0x10
003c7d84:  add      x8, x8, #0xd8
003c7d88:  str      x8, [x0, #0x28]
003c7d8c:  adrp     x8, #0x66a000
003c7d90:  add      x8, x8, #0xfc8
003c7d94:  str      x9, [x0]
003c7d98:  str      x8, [x0, #0x100]
003c7d9c:  b        #0x3c8cf0
003c7da0:  mov      w0, #0x20
003c7da4:  bl       #0x644c30
003c7da8:  movi     v0.2d, #0000000000000000
003c7dac:  mov      w8, #-1
003c7db0:  mov      w9, #0x3f800000
003c7db4:  stp      q0, q0, [x0]
003c7db8:  str      w8, [x0, #8]
003c7dbc:  adrp     x8, #0x662000
003c7dc0:  add      x8, x8, #0x668
003c7dc4:  str      w9, [x0, #0x18]
003c7dc8:  str      x8, [x0]
003c7dcc:  b        #0x3c8cf0
003c7dd0:  mov      w0, #0x1f0
003c7dd4:  bl       #0x644c30
003c7dd8:  movi     v0.2d, #0000000000000000
003c7ddc:  mov      x19, x0
003c7de0:  stp      q0, q0, [x0]
003c7de4:  stp      q0, q0, [x0, #0x20]
003c7de8:  stp      q0, q0, [x0, #0x40]
003c7dec:  stp      q0, q0, [x0, #0x60]
003c7df0:  stp      q0, q0, [x0, #0x80]
003c7df4:  stp      q0, q0, [x0, #0xa0]
003c7df8:  stp      q0, q0, [x0, #0xc0]
003c7dfc:  stp      q0, q0, [x0, #0xe0]
003c7e00:  stp      q0, q0, [x0, #0x100]
003c7e04:  stp      q0, q0, [x0, #0x120]
003c7e08:  stp      q0, q0, [x0, #0x140]
003c7e0c:  stp      q0, q0, [x0, #0x160]
003c7e10:  stp      q0, q0, [x0, #0x180]
003c7e14:  stp      q0, q0, [x0, #0x1a0]
003c7e18:  stp      q0, q0, [x0, #0x1c0]
003c7e1c:  str      q0, [x0, #0x1e0]
003c7e20:  bl       #0x3ca994
003c7e24:  mov      x0, x19
003c7e28:  b        #0x3c8cf0
003c7e2c:  mov      w0, #0x90
003c7e30:  bl       #0x644c30
003c7e34:  movi     v0.2d, #0000000000000000
003c7e38:  mov      w8, #-1
003c7e3c:  stp      q0, q0, [x0]
003c7e40:  str      w8, [x0, #8]
003c7e44:  mov      w8, #0xfffe
003c7e48:  stp      q0, q0, [x0, #0x60]
003c7e4c:  strh     w8, [x0, #0x60]
003c7e50:  mov      w8, #0x1d1d
003c7e54:  movk     w8, #0xff1d, lsl #16
003c7e58:  str      q0, [x0, #0x80]
003c7e5c:  str      w8, [x0, #0x88]
003c7e60:  adrp     x8, #0x65e000
003c7e64:  add      x8, x8, #0xa18
003c7e68:  stp      q0, q0, [x0, #0x20]
003c7e6c:  stp      q0, q0, [x0, #0x40]
003c7e70:  b        #0x3c8750
003c7e74:  mov      w0, #0x38
003c7e78:  bl       #0x644c30
003c7e7c:  movi     v0.2d, #0000000000000000
003c7e80:  adrp     x9, #0x67d000
003c7e84:  mov      w8, #-1
003c7e88:  str      q0, [x0, #0x20]
003c7e8c:  str      q0, [x0]
003c7e90:  ldr      x9, [x9, #0x290]
003c7e94:  str      w8, [x0, #8]
003c7e98:  str      q0, [x0, #0x10]
003c7e9c:  add      x8, x9, #0x10
003c7ea0:  str      wzr, [x0, #0x2c]
003c7ea4:  str      x8, [x0]
003c7ea8:  str      xzr, [x0, #0x30]
003c7eac:  b        #0x3c8cf0
003c7eb0:  mov      w0, #0x18
003c7eb4:  bl       #0x644c30
003c7eb8:  mov      w8, #-1
003c7ebc:  str      xzr, [x0, #0x10]
003c7ec0:  adrp     x9, #0x662000
003c7ec4:  add      x9, x9, #0x420
003c7ec8:  b        #0x3c80dc
003c7ecc:  mov      w0, #0x40
003c7ed0:  bl       #0x644c30
003c7ed4:  movi     v0.2d, #0000000000000000
003c7ed8:  mov      w8, #-1
003c7edc:  stp      q0, q0, [x0]
003c7ee0:  str      w8, [x0, #8]
003c7ee4:  adrp     x8, #0x664000
003c7ee8:  add      x8, x8, #0x568
003c7eec:  stp      q0, q0, [x0, #0x20]
003c7ef0:  str      wzr, [x0, #0x38]
003c7ef4:  stp      xzr, xzr, [x0, #0x28]
003c7ef8:  b        #0x3c8cec
003c7efc:  mov      w0, #0xb8
003c7f00:  bl       #0x644c30
003c7f04:  movi     v0.2d, #0000000000000000
003c7f08:  mov      w8, #-1
003c7f0c:  str      xzr, [x0, #0xb0]
003c7f10:  adrp     x9, #0x67c000
003c7f14:  stp      q0, q0, [x0]
003c7f18:  str      w8, [x0, #8]
003c7f1c:  mov      w8, #0xfffe
003c7f20:  stp      q0, q0, [x0, #0x20]
003c7f24:  stp      q0, q0, [x0, #0x40]
003c7f28:  stp      q0, q0, [x0, #0x60]
003c7f2c:  stp      q0, q0, [x0, #0x80]
003c7f30:  str      q0, [x0, #0xa0]
003c7f34:  strb     wzr, [x0, #0x11]
003c7f38:  str      xzr, [x0, #0x30]
003c7f3c:  strh     w8, [x0, #0x60]
003c7f40:  mov      x8, #-0xffff00000001
003c7f44:  stp      xzr, xzr, [x0, #0x68]
003c7f48:  movk     x8, #0x3f80, lsl #48
003c7f4c:  str      xzr, [x0, #0x78]
003c7f50:  stp      xzr, xzr, [x0, #0x88]
003c7f54:  str      xzr, [x0, #0x98]
003c7f58:  ldr      x9, [x9, #0xe50]
003c7f5c:  stp      x8, xzr, [x0, #0xa0]
003c7f60:  b        #0x3c8ce8
003c7f64:  mov      w0, #0x30
003c7f68:  bl       #0x644c30
003c7f6c:  movi     v0.2d, #0000000000000000
003c7f70:  mov      w8, #-1
003c7f74:  str      q0, [x0]
003c7f78:  str      w8, [x0, #8]
003c7f7c:  adrp     x8, #0x664000
003c7f80:  add      x8, x8, #0x938
003c7f84:  b        #0x3c87a0
003c7f88:  mov      w0, #0x30
003c7f8c:  bl       #0x644c30
003c7f90:  movi     v0.2d, #0000000000000000
003c7f94:  mov      w8, #-1
003c7f98:  str      q0, [x0]
003c7f9c:  str      w8, [x0, #8]
003c7fa0:  adrp     x8, #0x664000
003c7fa4:  add      x8, x8, #0x668
003c7fa8:  b        #0x3c87a0
003c7fac:  mov      w0, #0x110
003c7fb0:  bl       #0x644c30
003c7fb4:  movi     v0.2d, #0000000000000000
003c7fb8:  mov      w8, #-1
003c7fbc:  adrp     x9, #0x66a000
003c7fc0:  add      x9, x9, #0xf48
003c7fc4:  stp      q0, q0, [x0]
003c7fc8:  stp      q0, q0, [x0, #0x20]
003c7fcc:  stp      q0, q0, [x0, #0x40]
003c7fd0:  stp      q0, q0, [x0, #0x60]
003c7fd4:  stp      q0, q0, [x0, #0x80]
003c7fd8:  stp      q0, q0, [x0, #0xa0]
003c7fdc:  stp      q0, q0, [x0, #0xc0]
003c7fe0:  str      w8, [x0, #8]
003c7fe4:  adrp     x8, #0x67d000
003c7fe8:  stur     q0, [x0, #0xb9]
003c7fec:  ldr      x8, [x8, #0x1e8]
003c7ff0:  str      q0, [x0, #0xe0]
003c7ff4:  str      x9, [x0, #0xe0]
003c7ff8:  add      x9, x8, #0x10
003c7ffc:  add      x8, x8, #0xe0
003c8000:  str      x9, [x0]
003c8004:  str      x8, [x0, #0x28]
003c8008:  stp      q0, q0, [x0, #0xf0]
003c800c:  b        #0x3c8cf0
003c8010:  mov      w0, #0xb8
003c8014:  bl       #0x644c30
003c8018:  movi     v0.2d, #0000000000000000
003c801c:  mov      w8, #-1
003c8020:  stp      q0, q0, [x0]
003c8024:  str      w8, [x0, #8]
003c8028:  mov      w8, #0xfffe
003c802c:  stp      q0, q0, [x0, #0x60]
003c8030:  str      q0, [x0, #0x80]
003c8034:  stp      q0, q0, [x0, #0x20]
003c8038:  stp      q0, q0, [x0, #0x40]
003c803c:  str      xzr, [x0, #0x30]
003c8040:  strh     w8, [x0, #0x60]
003c8044:  adrp     x8, #0x67d000
003c8048:  stp      xzr, xzr, [x0, #0x68]
003c804c:  str      xzr, [x0, #0x78]
003c8050:  stur     q0, [x0, #0x98]
003c8054:  ldr      x8, [x8, #0x3d0]
003c8058:  stur     q0, [x0, #0xa8]
003c805c:  stur     q0, [x0, #0x88]
003c8060:  b        #0x3c8c18
003c8064:  mov      w0, #0x48
003c8068:  bl       #0x644c30
003c806c:  movi     v0.2d, #0000000000000000
003c8070:  adrp     x8, #0x24e000
003c8074:  str      xzr, [x0, #0x40]
003c8078:  ldr      d1, [x8, #0x6c8]
003c807c:  adrp     x8, #0x663000
003c8080:  add      x8, x8, #0xe48
003c8084:  stp      xzr, xzr, [x0, #0x10]
003c8088:  str      d1, [x0, #8]
003c808c:  stp      q0, q0, [x0, #0x20]
003c8090:  strh     wzr, [x0, #0x28]
003c8094:  str      xzr, [x0, #0x20]
003c8098:  b        #0x3c8cec
003c809c:  mov      w0, #0x30
003c80a0:  bl       #0x644c30
003c80a4:  adrp     x8, #0x67d000
003c80a8:  movi     v0.2d, #0000000000000000
003c80ac:  mov      w9, #-1
003c80b0:  ldr      x8, [x8]
003c80b4:  add      x8, x8, #0x10
003c80b8:  stp      x8, xzr, [x0]
003c80bc:  str      w9, [x0, #8]
003c80c0:  stp      q0, q0, [x0, #0x10]
003c80c4:  b        #0x3c8cf0
003c80c8:  mov      w0, #0x10
003c80cc:  bl       #0x644c30
003c80d0:  mov      w8, #-1
003c80d4:  adrp     x9, #0x65f000
003c80d8:  add      x9, x9, #0x318
003c80dc:  str      xzr, [x0, #8]
003c80e0:  str      w8, [x0, #8]
003c80e4:  str      x9, [x0]
003c80e8:  b        #0x3c8cf0
003c80ec:  mov      w0, #0xc8
003c80f0:  bl       #0x644c30
003c80f4:  movi     v0.2d, #0000000000000000
003c80f8:  mov      x19, x0
003c80fc:  str      xzr, [x0, #0xc0]
003c8100:  stp      q0, q0, [x0]
003c8104:  stp      q0, q0, [x0, #0x20]
003c8108:  stp      q0, q0, [x0, #0x40]
003c810c:  stp      q0, q0, [x0, #0x60]
003c8110:  stp      q0, q0, [x0, #0x80]
003c8114:  stp      q0, q0, [x0, #0xa0]
003c8118:  bl       #0x3c9fa4
003c811c:  mov      x0, x19
003c8120:  b        #0x3c8cf0
003c8124:  mov      w0, #0x80
003c8128:  bl       #0x644c30
003c812c:  movi     v0.2d, #0000000000000000
003c8130:  mov      w8, #-1
003c8134:  stp      q0, q0, [x0]
003c8138:  stp      q0, q0, [x0, #0x20]
003c813c:  stp      q0, q0, [x0, #0x40]
003c8140:  stp      q0, q0, [x0, #0x60]
003c8144:  str      w8, [x0, #8]
003c8148:  adrp     x8, #0x67c000
003c814c:  str      wzr, [x0, #0x40]
003c8150:  stur     q0, [x0, #0x48]
003c8154:  ldr      x8, [x8, #0xd30]
003c8158:  b        #0x3c87e4
003c815c:  mov      w0, #0x80
003c8160:  bl       #0x644c30
003c8164:  movi     v0.2d, #0000000000000000
003c8168:  adrp     x8, #0x24e000
003c816c:  ldr      q1, [x8, #0x150]
003c8170:  adrp     x8, #0x67d000
003c8174:  stur     q1, [x0, #8]
003c8178:  stp      q0, q0, [x0, #0x20]
003c817c:  stp      q0, q0, [x0, #0x60]
003c8180:  stur     wzr, [x0, #0x27]
003c8184:  str      xzr, [x0, #0x20]
003c8188:  ldr      x8, [x8, #0x248]
003c818c:  stp      q0, q0, [x0, #0x40]
003c8190:  strb     wzr, [x0, #0x50]
003c8194:  add      x9, x8, #0x10
003c8198:  add      x8, x8, #0xd0
003c819c:  stp      xzr, xzr, [x0, #0x60]
003c81a0:  str      x9, [x0]
003c81a4:  str      x8, [x0, #0x18]
003c81a8:  strb     wzr, [x0, #0x78]
003c81ac:  str      xzr, [x0, #0x70]
003c81b0:  b        #0x3c8cf0
003c81b4:  mov      w0, #0x20
003c81b8:  bl       #0x644c30
003c81bc:  adrp     x8, #0x24e000
003c81c0:  adrp     x9, #0x67c000
003c81c4:  ldr      x9, [x9, #0xe10]
003c81c8:  ldr      q0, [x8, #0x490]
003c81cc:  str      xzr, [x0, #0x18]
003c81d0:  add      x8, x9, #0x10
003c81d4:  b        #0x3c8200
003c81d8:  mov      w0, #0x20
003c81dc:  bl       #0x644c30
003c81e0:  adrp     x8, #0x24e000
003c81e4:  str      xzr, [x0, #0x18]
003c81e8:  mov      w9, #1
003c81ec:  ldr      q0, [x8, #0x490]
003c81f0:  adrp     x8, #0x67c000
003c81f4:  ldr      x8, [x8, #0xe00]
003c81f8:  str      w9, [x0, #0x18]
003c81fc:  add      x8, x8, #0x10
003c8200:  stur     q0, [x0, #8]
003c8204:  b        #0x3c8cec
003c8208:  mov      w0, #0x118
003c820c:  bl       #0x644c30
003c8210:  movi     v0.2d, #0000000000000000
003c8214:  mov      w8, #-1
003c8218:  str      xzr, [x0, #0x110]
003c821c:  stp      q0, q0, [x0]
003c8220:  str      w8, [x0, #8]
003c8224:  mov      w8, #0xfffe
003c8228:  stp      q0, q0, [x0, #0x20]
003c822c:  stp      q0, q0, [x0, #0x40]
003c8230:  stp      q0, q0, [x0, #0x60]
003c8234:  strh     w8, [x0, #0x60]
003c8238:  mov      w8, #1
003c823c:  stp      q0, q0, [x0, #0x40]
003c8240:  stp      q0, q0, [x0, #0x80]
003c8244:  stp      q0, q0, [x0, #0xa0]
003c8248:  stp      q0, q0, [x0, #0xc0]
003c824c:  stp      q0, q0, [x0, #0xe0]
003c8250:  str      q0, [x0, #0x100]
003c8254:  str      xzr, [x0, #0x30]
003c8258:  stp      xzr, xzr, [x0, #0x70]
003c825c:  str      xzr, [x0, #0x68]
003c8260:  str      w8, [x0, #0x8c]
003c8264:  adrp     x8, #0x67d000
003c8268:  stur     q0, [x0, #0xb8]
003c826c:  stur     q0, [x0, #0xc8]
003c8270:  stur     q0, [x0, #0xd8]
003c8274:  stur     q0, [x0, #0xe8]
003c8278:  str      xzr, [x0, #0xf8]
003c827c:  ldr      x8, [x8, #0x528]
003c8280:  b        #0x3c8418
003c8284:  mov      w0, #0xf8
003c8288:  bl       #0x644c30
003c828c:  movi     v0.2d, #0000000000000000
003c8290:  mov      w8, #-1
003c8294:  str      xzr, [x0, #0xf0]
003c8298:  adrp     x9, #0x67d000
003c829c:  stp      q0, q0, [x0]
003c82a0:  stp      q0, q0, [x0, #0x20]
003c82a4:  stp      q0, q0, [x0, #0x40]
003c82a8:  stp      q0, q0, [x0, #0x60]
003c82ac:  stp      q0, q0, [x0, #0x80]
003c82b0:  stp      q0, q0, [x0, #0xa0]
003c82b4:  stp      q0, q0, [x0, #0xc0]
003c82b8:  str      q0, [x0, #0xe0]
003c82bc:  str      w8, [x0, #8]
003c82c0:  adrp     x8, #0x66a000
003c82c4:  add      x8, x8, #0xf48
003c82c8:  stur     q0, [x0, #0xb9]
003c82cc:  ldr      x9, [x9, #0x220]
003c82d0:  str      x8, [x0, #0xe0]
003c82d4:  mov      w8, #0x3f800000
003c82d8:  str      w8, [x0, #0xf0]
003c82dc:  add      x8, x9, #0x10
003c82e0:  str      x8, [x0]
003c82e4:  add      x8, x9, #0xd0
003c82e8:  str      x8, [x0, #0x28]
003c82ec:  b        #0x3c8cf0
003c82f0:  mov      w0, #0xb8
003c82f4:  bl       #0x644c30
003c82f8:  movi     v0.2d, #0000000000000000
003c82fc:  mov      w8, #-1
003c8300:  stp      q0, q0, [x0]
003c8304:  str      w8, [x0, #8]
003c8308:  mov      w8, #0xfffe
003c830c:  stp      q0, q0, [x0, #0x60]
003c8310:  strh     w8, [x0, #0x60]
003c8314:  adrp     x8, #0x663000
003c8318:  add      x8, x8, #0xc20
003c831c:  str      q0, [x0, #0x80]
003c8320:  stp      q0, q0, [x0, #0x20]
003c8324:  stp      q0, q0, [x0, #0x40]
003c8328:  str      xzr, [x0, #0x30]
003c832c:  stp      xzr, xzr, [x0, #0x68]
003c8330:  str      xzr, [x0, #0x78]
003c8334:  stur     q0, [x0, #0x98]
003c8338:  stur     q0, [x0, #0xa8]
003c833c:  stur     q0, [x0, #0x88]
003c8340:  str      x8, [x0]
003c8344:  b        #0x3c8cf0
003c8348:  mov      w0, #0x90
003c834c:  bl       #0x644c30
003c8350:  movi     v0.2d, #0000000000000000
003c8354:  mov      w8, #-1
003c8358:  stp      q0, q0, [x0]
003c835c:  str      w8, [x0, #8]
003c8360:  mov      w8, #0xfffe
003c8364:  stp      q0, q0, [x0, #0x60]
003c8368:  strh     w8, [x0, #0x60]
003c836c:  mov      w8, #1
003c8370:  str      q0, [x0, #0x80]
003c8374:  stp      q0, q0, [x0, #0x20]
003c8378:  stp      q0, q0, [x0, #0x40]
003c837c:  str      xzr, [x0, #0x30]
003c8380:  str      w8, [x0, #0x8c]
003c8384:  adrp     x8, #0x67d000
003c8388:  ldr      x8, [x8, #0x4b0]
003c838c:  stp      xzr, xzr, [x0, #0x68]
003c8390:  str      xzr, [x0, #0x78]
003c8394:  b        #0x3c8c18
003c8398:  mov      w0, #0x118
003c839c:  bl       #0x644c30
003c83a0:  movi     v0.2d, #0000000000000000
003c83a4:  mov      w8, #-1
003c83a8:  str      xzr, [x0, #0x110]
003c83ac:  stp      q0, q0, [x0]
003c83b0:  str      w8, [x0, #8]
003c83b4:  mov      w8, #0xfffe
003c83b8:  stp      q0, q0, [x0, #0x20]
003c83bc:  stp      q0, q0, [x0, #0x40]
003c83c0:  stp      q0, q0, [x0, #0x60]
003c83c4:  strh     w8, [x0, #0x60]
003c83c8:  mov      w8, #1
003c83cc:  stp      q0, q0, [x0, #0x40]
003c83d0:  stp      q0, q0, [x0, #0x80]
003c83d4:  str      w8, [x0, #0x8c]
003c83d8:  mov      w8, #-0x1000000
003c83dc:  stp      q0, q0, [x0, #0xa0]
003c83e0:  stp      q0, q0, [x0, #0xc0]
003c83e4:  stp      q0, q0, [x0, #0xe0]
003c83e8:  str      q0, [x0, #0x100]
003c83ec:  str      xzr, [x0, #0x30]
003c83f0:  stp      xzr, xzr, [x0, #0x70]
003c83f4:  str      xzr, [x0, #0x68]
003c83f8:  stur     q0, [x0, #0xb8]
003c83fc:  stur     q0, [x0, #0xc8]
003c8400:  stur     q0, [x0, #0xd8]
003c8404:  stur     q0, [x0, #0xe8]
003c8408:  str      xzr, [x0, #0xf8]
003c840c:  str      w8, [x0, #0x110]
003c8410:  adrp     x8, #0x67d000
003c8414:  ldr      x8, [x8, #0x538]
003c8418:  stp      q0, q0, [x0, #0x90]
003c841c:  b        #0x3c8c18
003c8420:  mov      w0, #0xf8
003c8424:  bl       #0x644c30
003c8428:  movi     v0.2d, #0000000000000000
003c842c:  mov      x19, x0
003c8430:  str      xzr, [x0, #0xf0]
003c8434:  stp      q0, q0, [x0]
003c8438:  stp      q0, q0, [x0, #0x20]
003c843c:  stp      q0, q0, [x0, #0x40]
003c8440:  stp      q0, q0, [x0, #0x60]
003c8444:  stp      q0, q0, [x0, #0x80]
003c8448:  stp      q0, q0, [x0, #0xa0]
003c844c:  stp      q0, q0, [x0, #0xc0]
003c8450:  str      q0, [x0, #0xe0]
003c8454:  bl       #0x3cacc4
003c8458:  mov      x0, x19
003c845c:  b        #0x3c8cf0
003c8460:  mov      w0, #0x10
003c8464:  bl       #0x644c30
003c8468:  mov      w8, #-1
003c846c:  adrp     x9, #0x65f000
003c8470:  add      x9, x9, #0x728
003c8474:  stp      x9, x8, [x0]
003c8478:  b        #0x3c8cf0
003c847c:  mov      w0, #0x1a0
003c8480:  bl       #0x644c30
003c8484:  movi     v0.2d, #0000000000000000
003c8488:  mov      x19, x0
003c848c:  stp      q0, q0, [x0]
003c8490:  stp      q0, q0, [x0, #0x20]
003c8494:  stp      q0, q0, [x0, #0x40]
003c8498:  stp      q0, q0, [x0, #0x60]
003c849c:  stp      q0, q0, [x0, #0x80]
003c84a0:  stp      q0, q0, [x0, #0xa0]
003c84a4:  stp      q0, q0, [x0, #0xc0]
003c84a8:  stp      q0, q0, [x0, #0xe0]
003c84ac:  stp      q0, q0, [x0, #0x100]
003c84b0:  stp      q0, q0, [x0, #0x120]
003c84b4:  stp      q0, q0, [x0, #0x140]
003c84b8:  stp      q0, q0, [x0, #0x160]
003c84bc:  stp      q0, q0, [x0, #0x180]
003c84c0:  bl       #0x3ca300
003c84c4:  mov      x0, x19
003c84c8:  b        #0x3c8cf0
003c84cc:  mov      w0, #0x90
003c84d0:  bl       #0x644c30
003c84d4:  movi     v0.2d, #0000000000000000
003c84d8:  mov      w8, #-1
003c84dc:  mov      w9, #0xfffe
003c84e0:  str      q0, [x0, #0x80]
003c84e4:  stp      q0, q0, [x0]
003c84e8:  stp      q0, q0, [x0, #0x20]
003c84ec:  stp      q0, q0, [x0, #0x40]
003c84f0:  stp      q0, q0, [x0, #0x60]
003c84f4:  str      w8, [x0, #8]
003c84f8:  str      xzr, [x0, #0x30]
003c84fc:  strh     w9, [x0, #0x60]
003c8500:  adrp     x9, #0x67c000
003c8504:  stp      xzr, xzr, [x0, #0x68]
003c8508:  ldr      x9, [x9, #0xe48]
003c850c:  b        #0x3c8ce0
003c8510:  mov      w0, #0xb0
003c8514:  bl       #0x644c30
003c8518:  movi     v0.2d, #0000000000000000
003c851c:  mov      w8, #-1
003c8520:  mov      w9, #0xfffe
003c8524:  stp      q0, q0, [x0]
003c8528:  stp      q0, q0, [x0, #0x20]
003c852c:  stp      q0, q0, [x0, #0x40]
003c8530:  stp      q0, q0, [x0, #0x60]
003c8534:  stp      q0, q0, [x0, #0x80]
003c8538:  str      q0, [x0, #0xa0]
003c853c:  str      w8, [x0, #8]
003c8540:  str      xzr, [x0, #0x30]
003c8544:  strh     w9, [x0, #0x60]
003c8548:  adrp     x9, #0x67d000
003c854c:  stp      xzr, xzr, [x0, #0x68]
003c8550:  str      xzr, [x0, #0x78]
003c8554:  stp      xzr, xzr, [x0, #0x88]
003c8558:  ldr      x9, [x9, #0x258]
003c855c:  str      xzr, [x0, #0x98]
003c8560:  str      w8, [x0, #0xa0]
003c8564:  b        #0x3c8ce8
003c8568:  mov      w0, #0x68
003c856c:  bl       #0x644c30
003c8570:  mov      x19, x0
003c8574:  bl       #0x647060
003c8578:  mov      x0, x19
003c857c:  b        #0x3c8cf0
003c8580:  mov      w0, #0x138
003c8584:  bl       #0x644c30
003c8588:  movi     v0.2d, #0000000000000000
003c858c:  mov      x19, x0
003c8590:  str      xzr, [x0, #0x130]
003c8594:  stp      q0, q0, [x0]
003c8598:  stp      q0, q0, [x0, #0x20]
003c859c:  stp      q0, q0, [x0, #0x40]
003c85a0:  stp      q0, q0, [x0, #0x60]
003c85a4:  stp      q0, q0, [x0, #0x80]
003c85a8:  stp      q0, q0, [x0, #0xa0]
003c85ac:  stp      q0, q0, [x0, #0xc0]
003c85b0:  stp      q0, q0, [x0, #0xe0]
003c85b4:  stp      q0, q0, [x0, #0x100]
003c85b8:  str      q0, [x0, #0x120]
003c85bc:  bl       #0x3ca3d0
003c85c0:  mov      x0, x19
003c85c4:  b        #0x3c8cf0
003c85c8:  mov      w0, #0x98
003c85cc:  bl       #0x644c30
003c85d0:  movi     v0.2d, #0000000000000000
003c85d4:  mov      w8, #-1
003c85d8:  str      xzr, [x0, #0x90]
003c85dc:  stp      q0, q0, [x0]
003c85e0:  str      w8, [x0, #8]
003c85e4:  mov      w8, #0xfffe
003c85e8:  stp      q0, q0, [x0, #0x60]
003c85ec:  strh     w8, [x0, #0x60]
003c85f0:  adrp     x8, #0x24e000
003c85f4:  str      q0, [x0, #0x80]
003c85f8:  stp      q0, q0, [x0, #0x20]
003c85fc:  stp      q0, q0, [x0, #0x40]
003c8600:  ldr      d0, [x8, #0x8f0]
003c8604:  adrp     x8, #0x67d000
003c8608:  str      xzr, [x0, #0x30]
003c860c:  stp      xzr, xzr, [x0, #0x68]
003c8610:  ldr      x8, [x8, #0x90]
003c8614:  str      xzr, [x0, #0x78]
003c8618:  str      d0, [x0, #0x88]
003c861c:  b        #0x3c8c18
003c8620:  mov      w0, #0x148
003c8624:  bl       #0x644c30
003c8628:  movi     v0.2d, #0000000000000000
003c862c:  mov      x19, x0
003c8630:  str      xzr, [x0, #0x140]
003c8634:  stp      q0, q0, [x0]
003c8638:  stp      q0, q0, [x0, #0x20]
003c863c:  stp      q0, q0, [x0, #0x40]
003c8640:  stp      q0, q0, [x0, #0x60]
003c8644:  stp      q0, q0, [x0, #0x80]
003c8648:  stp      q0, q0, [x0, #0xa0]
003c864c:  stp      q0, q0, [x0, #0xc0]
003c8650:  stp      q0, q0, [x0, #0xe0]
003c8654:  stp      q0, q0, [x0, #0x100]
003c8658:  stp      q0, q0, [x0, #0x120]
003c865c:  bl       #0x3cb314
003c8660:  mov      x0, x19
003c8664:  b        #0x3c8cf0
003c8668:  mov      w0, #0x90
003c866c:  bl       #0x644c30
003c8670:  movi     v0.2d, #0000000000000000
003c8674:  mov      w8, #-1
003c8678:  stp      q0, q0, [x0]
003c867c:  str      w8, [x0, #8]
003c8680:  mov      w8, #0xfffe
003c8684:  stp      q0, q0, [x0, #0x20]
003c8688:  stp      q0, q0, [x0, #0x40]
003c868c:  stp      q0, q0, [x0, #0x60]
003c8690:  strh     w8, [x0, #0x60]
003c8694:  adrp     x8, #0x65e000
003c8698:  add      x8, x8, #0x8c8
003c869c:  str      q0, [x0, #0x80]
003c86a0:  b        #0x3c8750
003c86a4:  mov      w0, #0x90
003c86a8:  bl       #0x644c30
003c86ac:  movi     v0.2d, #0000000000000000
003c86b0:  mov      w8, #-1
003c86b4:  mov      w9, #0xfffe
003c86b8:  str      q0, [x0, #0x80]
003c86bc:  stp      q0, q0, [x0]
003c86c0:  stp      q0, q0, [x0, #0x20]
003c86c4:  stp      q0, q0, [x0, #0x40]
003c86c8:  stp      q0, q0, [x0, #0x60]
003c86cc:  str      w8, [x0, #8]
003c86d0:  str      xzr, [x0, #0x30]
003c86d4:  strh     w9, [x0, #0x60]
003c86d8:  adrp     x9, #0x67c000
003c86dc:  stp      xzr, xzr, [x0, #0x68]
003c86e0:  ldr      x9, [x9, #0xe38]
003c86e4:  b        #0x3c8ce0
003c86e8:  mov      w0, #0x4b0
003c86ec:  bl       #0x644c30
003c86f0:  mov      x19, x0
003c86f4:  bl       #0x648be0
003c86f8:  mov      x0, x19
003c86fc:  b        #0x3c8cf0
003c8700:  mov      w0, #0xa0
003c8704:  bl       #0x644c30
003c8708:  mov      x19, x0
003c870c:  bl       #0x647480
003c8710:  mov      x0, x19
003c8714:  b        #0x3c8cf0
003c8718:  mov      w0, #0xa0
003c871c:  bl       #0x644c30
003c8720:  movi     v0.2d, #0000000000000000
003c8724:  mov      w8, #-1
003c8728:  stp      q0, q0, [x0]
003c872c:  str      w8, [x0, #8]
003c8730:  mov      w8, #0xfffe
003c8734:  stp      q0, q0, [x0, #0x20]
003c8738:  stp      q0, q0, [x0, #0x40]
003c873c:  stp      q0, q0, [x0, #0x60]
003c8740:  strh     w8, [x0, #0x60]
003c8744:  adrp     x8, #0x65e000
003c8748:  add      x8, x8, #0xee8
003c874c:  stp      q0, q0, [x0, #0x80]
003c8750:  str      xzr, [x0, #0x30]
003c8754:  stp      xzr, xzr, [x0, #0x68]
003c8758:  str      xzr, [x0, #0x78]
003c875c:  b        #0x3c8cec
003c8760:  mov      w0, #0x30
003c8764:  bl       #0x644c30
003c8768:  movi     v0.2d, #0000000000000000
003c876c:  adrp     x8, #0x67c000
003c8770:  movi     d1, #0x000000ffffffff
003c8774:  str      q0, [x0, #0x10]
003c8778:  ldr      x8, [x8, #0xda0]
003c877c:  b        #0x3c88d0
003c8780:  mov      w0, #0x30
003c8784:  bl       #0x644c30
003c8788:  movi     v0.2d, #0000000000000000
003c878c:  mov      w8, #-1
003c8790:  str      q0, [x0]
003c8794:  str      w8, [x0, #8]
003c8798:  adrp     x8, #0x664000
003c879c:  add      x8, x8, #0x268
003c87a0:  stp      q0, q0, [x0, #0x10]
003c87a4:  str      wzr, [x0, #0x2c]
003c87a8:  b        #0x3c8cec
003c87ac:  mov      w0, #0x80
003c87b0:  bl       #0x644c30
003c87b4:  movi     v0.2d, #0000000000000000
003c87b8:  mov      w8, #-1
003c87bc:  stp      q0, q0, [x0]
003c87c0:  stp      q0, q0, [x0, #0x20]
003c87c4:  stp      q0, q0, [x0, #0x40]
003c87c8:  stp      q0, q0, [x0, #0x60]
003c87cc:  str      w8, [x0, #8]
003c87d0:  str      wzr, [x0, #0x40]
003c87d4:  stur     q0, [x0, #0x48]
003c87d8:  str      w8, [x0, #0x78]
003c87dc:  adrp     x8, #0x67c000
003c87e0:  ldr      x8, [x8, #0xd20]
003c87e4:  stur     q0, [x0, #0x58]
003c87e8:  stur     q0, [x0, #0x68]
003c87ec:  b        #0x3c8c18
003c87f0:  mov      w0, #0x988
003c87f4:  bl       #0x644c30
003c87f8:  mov      x19, x0
003c87fc:  bl       #0x648c30
003c8800:  mov      x0, x19
003c8804:  b        #0x3c8cf0
003c8808:  mov      w0, #0x30
003c880c:  bl       #0x644c30
003c8810:  movi     v0.2d, #0000000000000000
003c8814:  adrp     x9, #0x67d000
003c8818:  mov      w8, #-1
003c881c:  str      q0, [x0, #0x20]
003c8820:  str      q0, [x0]
003c8824:  ldr      x9, [x9, #0x280]
003c8828:  str      w8, [x0, #8]
003c882c:  str      q0, [x0, #0x10]
003c8830:  add      x8, x9, #0x10
003c8834:  b        #0x3c87a4
003c8838:  mov      w0, #0xc8
003c883c:  bl       #0x644c30
003c8840:  mov      x19, x0
003c8844:  bl       #0x647300
003c8848:  mov      x0, x19
003c884c:  b        #0x3c8cf0
003c8850:  mov      w0, #0x168
003c8854:  bl       #0x644c30
003c8858:  movi     v0.2d, #0000000000000000
003c885c:  mov      x19, x0
003c8860:  str      xzr, [x0, #0x160]
003c8864:  stp      q0, q0, [x0]
003c8868:  stp      q0, q0, [x0, #0x20]
003c886c:  stp      q0, q0, [x0, #0x40]
003c8870:  stp      q0, q0, [x0, #0x60]
003c8874:  stp      q0, q0, [x0, #0x80]
003c8878:  stp      q0, q0, [x0, #0xa0]
003c887c:  stp      q0, q0, [x0, #0xc0]
003c8880:  stp      q0, q0, [x0, #0xe0]
003c8884:  stp      q0, q0, [x0, #0x100]
003c8888:  stp      q0, q0, [x0, #0x120]
003c888c:  stp      q0, q0, [x0, #0x140]
003c8890:  bl       #0x3caed0
003c8894:  mov      x0, x19
003c8898:  b        #0x3c8cf0
003c889c:  mov      w0, #0x1c0
003c88a0:  bl       #0x644c30
003c88a4:  mov      x19, x0
003c88a8:  bl       #0x3ca8ac
003c88ac:  mov      x0, x19
003c88b0:  b        #0x3c8cf0
003c88b4:  mov      w0, #0x30
003c88b8:  bl       #0x644c30
003c88bc:  movi     v0.2d, #0000000000000000
003c88c0:  adrp     x8, #0x67c000
003c88c4:  movi     d1, #0x000000ffffffff
003c88c8:  str      q0, [x0, #0x10]
003c88cc:  ldr      x8, [x8, #0xda8]
003c88d0:  str      q0, [x0, #0x20]
003c88d4:  mov      w9, #-1
003c88d8:  add      x8, x8, #0x10
003c88dc:  str      d1, [x0, #8]
003c88e0:  str      w9, [x0, #0x18]
003c88e4:  b        #0x3c8cec
003c88e8:  mov      w0, #0xd8
003c88ec:  bl       #0x644c30
003c88f0:  movi     v0.2d, #0000000000000000
003c88f4:  mov      w8, #-1
003c88f8:  mov      w9, #0xfffe
003c88fc:  stp      q0, q0, [x0]
003c8900:  stp      q0, q0, [x0, #0x20]
003c8904:  stp      q0, q0, [x0, #0x40]
003c8908:  stp      q0, q0, [x0, #0x60]
003c890c:  stp      q0, q0, [x0, #0x80]
003c8910:  stp      q0, q0, [x0, #0xa0]
003c8914:  str      q0, [x0, #0xc0]
003c8918:  str      w8, [x0, #8]
003c891c:  str      xzr, [x0, #0x30]
003c8920:  strh     w9, [x0, #0x60]
003c8924:  adrp     x9, #0x67d000
003c8928:  stp      xzr, xzr, [x0, #0x68]
003c892c:  str      xzr, [x0, #0x78]
003c8930:  stp      xzr, xzr, [x0, #0x88]
003c8934:  str      xzr, [x0, #0x98]
003c8938:  ldr      x9, [x9, #0x60]
003c893c:  str      w8, [x0, #0xc0]
003c8940:  stp      xzr, xzr, [x0, #0xb0]
003c8944:  add      x8, x9, #0x10
003c8948:  str      x8, [x0]
003c894c:  add      x8, x9, #0xd8
003c8950:  stp      x8, xzr, [x0, #0xa0]
003c8954:  add      x8, x9, #0x100
003c8958:  stp      x8, xzr, [x0, #0xc8]
003c895c:  b        #0x3c8cf0
003c8960:  mov      w0, #0x60
003c8964:  bl       #0x644c30
003c8968:  movi     v0.2d, #0000000000000000
003c896c:  mov      w8, #-1
003c8970:  stp      xzr, xzr, [x0, #0x50]
003c8974:  stp      q0, q0, [x0]
003c8978:  str      w8, [x0, #8]
003c897c:  adrp     x8, #0x656000
003c8980:  add      x8, x8, #0xcc0
003c8984:  stp      q0, q0, [x0, #0x30]
003c8988:  str      q0, [x0, #0x20]
003c898c:  str      xzr, [x0, #0x48]
003c8990:  str      wzr, [x0, #0x40]
003c8994:  b        #0x3c8cec
003c8998:  mov      w0, #0xb8
003c899c:  bl       #0x644c30
003c89a0:  movi     v0.2d, #0000000000000000
003c89a4:  mov      w8, #-1
003c89a8:  str      xzr, [x0, #0xb0]
003c89ac:  stp      q0, q0, [x0]
003c89b0:  str      w8, [x0, #8]
003c89b4:  mov      w8, #0xfffe
003c89b8:  stp      q0, q0, [x0, #0x60]
003c89bc:  strh     w8, [x0, #0x60]
003c89c0:  adrp     x8, #0x24e000
003c89c4:  stp      q0, q0, [x0, #0x80]
003c89c8:  str      q0, [x0, #0xa0]
003c89cc:  stp      q0, q0, [x0, #0x20]
003c89d0:  stp      q0, q0, [x0, #0x40]
003c89d4:  ldr      d0, [x8, #0x8f0]
003c89d8:  adrp     x8, #0x24e000
003c89dc:  str      xzr, [x0, #0x30]
003c89e0:  str      d0, [x0, #0x88]
003c89e4:  ldr      q0, [x8, #0x3b0]
003c89e8:  adrp     x8, #0x65c000
003c89ec:  add      x8, x8, #0x430
003c89f0:  stp      xzr, xzr, [x0, #0x68]
003c89f4:  str      xzr, [x0, #0x78]
003c89f8:  stur     q0, [x0, #0x98]
003c89fc:  str      x8, [x0]
003c8a00:  b        #0x3c8cf0
003c8a04:  mov      w0, #0x30
003c8a08:  bl       #0x644c30
003c8a0c:  fmov     d0, xzr
003c8a10:  movi     v1.2d, #0xffffffffffffffff
003c8a14:  str      xzr, [x0, #0x10]
003c8a18:  adrp     x9, #0x67c000
003c8a1c:  mov      x8, #-0xffff00000001
003c8a20:  ldr      x9, [x9, #0xd10]
003c8a24:  movk     x8, #0x42c8, lsl #48
003c8a28:  mov      v0.d[1], v0.d[0]
003c8a2c:  str      x8, [x0, #0x18]
003c8a30:  add      x8, x9, #0x10
003c8a34:  str      d1, [x0, #8]
003c8a38:  str      x8, [x0]
003c8a3c:  str      q0, [x0, #0x20]
003c8a40:  b        #0x3c8cf0
003c8a44:  mov      w0, #0xa0
003c8a48:  bl       #0x644c30
003c8a4c:  movi     v0.2d, #0000000000000000
003c8a50:  mov      w8, #-1
003c8a54:  adrp     x9, #0x24e000
003c8a58:  mov      w10, #1
003c8a5c:  stp      q0, q0, [x0]
003c8a60:  stp      q0, q0, [x0, #0x20]
003c8a64:  stp      q0, q0, [x0, #0x40]
003c8a68:  stp      q0, q0, [x0, #0x60]
003c8a6c:  stp      q0, q0, [x0, #0x80]
003c8a70:  ldr      d0, [x9, #0x888]
003c8a74:  adrp     x9, #0x67c000
003c8a78:  str      w8, [x0, #8]
003c8a7c:  str      w8, [x0, #0x40]
003c8a80:  str      w10, [x0, #0x58]
003c8a84:  str      w10, [x0, #0x68]
003c8a88:  ldr      x9, [x9, #0xd48]
003c8a8c:  str      d0, [x0, #0x50]
003c8a90:  str      w8, [x0, #0x90]
003c8a94:  b        #0x3c8ce8
003c8a98:  mov      w0, #0xf8
003c8a9c:  bl       #0x644c30
003c8aa0:  movi     v0.2d, #0000000000000000
003c8aa4:  mov      w8, #-1
003c8aa8:  str      xzr, [x0, #0xf0]
003c8aac:  stp      q0, q0, [x0]
003c8ab0:  str      w8, [x0, #8]
003c8ab4:  mov      w8, #0xfffe
003c8ab8:  stp      q0, q0, [x0, #0x20]
003c8abc:  stp      q0, q0, [x0, #0x40]
003c8ac0:  stp      q0, q0, [x0, #0x60]
003c8ac4:  strh     w8, [x0, #0x60]
003c8ac8:  adrp     x8, #0x24e000
003c8acc:  stp      q0, q0, [x0, #0x40]
003c8ad0:  ldr      q1, [x8, #0x5b0]
003c8ad4:  adrp     x8, #0x67d000
003c8ad8:  stp      q0, q0, [x0, #0x80]
003c8adc:  stp      q0, q0, [x0, #0xa0]
003c8ae0:  stp      q0, q0, [x0, #0xc0]
003c8ae4:  strb     wzr, [x0, #0x11]
003c8ae8:  str      xzr, [x0, #0x30]
003c8aec:  stp      xzr, xzr, [x0, #0x70]
003c8af0:  str      xzr, [x0, #0x68]
003c8af4:  str      xzr, [x0, #0x98]
003c8af8:  ldr      x8, [x8, #0x80]
003c8afc:  str      q1, [x0, #0xa0]
003c8b00:  stp      xzr, xzr, [x0, #0x88]
003c8b04:  add      x8, x8, #0x10
003c8b08:  str      xzr, [x0, #0xc8]
003c8b0c:  str      x8, [x0]
003c8b10:  adrp     x8, #0x281000
003c8b14:  add      x8, x8, #0xbf8
003c8b18:  ldr      q1, [x8]
003c8b1c:  stp      q0, q0, [x0, #0xd0]
003c8b20:  str      q0, [x0, #0xe0]
003c8b24:  stur     q1, [x0, #0xb8]
003c8b28:  b        #0x3c8cf0
003c8b2c:  mov      w0, #0x70
003c8b30:  bl       #0x644c30
003c8b34:  movi     v0.2d, #0000000000000000
003c8b38:  mov      w8, #-1
003c8b3c:  stp      q0, q0, [x0]
003c8b40:  str      w8, [x0, #8]
003c8b44:  mov      x8, #-0x10000
003c8b48:  movk     x8, #0x3f80, lsl #16
003c8b4c:  stp      q0, q0, [x0, #0x30]
003c8b50:  str      q0, [x0, #0x20]
003c8b54:  stp      xzr, x8, [x0, #0x58]
003c8b58:  adrp     x8, #0x67c000
003c8b5c:  ldr      x8, [x8, #0xcf0]
003c8b60:  stp      xzr, xzr, [x0, #0x48]
003c8b64:  str      wzr, [x0, #0x40]
003c8b68:  add      x8, x8, #0x10
003c8b6c:  str      xzr, [x0, #0x68]
003c8b70:  str      x8, [x0]
003c8b74:  b        #0x3c8cf0
003c8b78:  mov      w0, #0x378
003c8b7c:  bl       #0x644c30
003c8b80:  mov      x19, x0
003c8b84:  bl       #0x648bd0
003c8b88:  mov      x0, x19
003c8b8c:  b        #0x3c8cf0
003c8b90:  mov      w0, #0x1d8
003c8b94:  bl       #0x644c30
003c8b98:  mov      x19, x0
003c8b9c:  bl       #0x648c10
003c8ba0:  mov      x0, x19
003c8ba4:  b        #0x3c8cf0
003c8ba8:  mov      w0, #0x518
003c8bac:  bl       #0x644c30
003c8bb0:  mov      x19, x0
003c8bb4:  bl       #0x648c00
003c8bb8:  mov      x0, x19
003c8bbc:  b        #0x3c8cf0
003c8bc0:  mov      w0, #0xb8
003c8bc4:  bl       #0x644c30
003c8bc8:  movi     v0.2d, #0000000000000000
003c8bcc:  mov      w8, #-1
003c8bd0:  str      xzr, [x0, #0xb0]
003c8bd4:  stp      q0, q0, [x0]
003c8bd8:  str      w8, [x0, #8]
003c8bdc:  mov      w8, #0xfffe
003c8be0:  stp      q0, q0, [x0, #0x60]
003c8be4:  stp      q0, q0, [x0, #0x20]
003c8be8:  stp      q0, q0, [x0, #0x40]
003c8bec:  stp      q0, q0, [x0, #0x80]
003c8bf0:  str      q0, [x0, #0xa0]
003c8bf4:  str      xzr, [x0, #0x30]
003c8bf8:  strh     w8, [x0, #0x60]
003c8bfc:  adrp     x8, #0x67d000
003c8c00:  stp      xzr, xzr, [x0, #0x68]
003c8c04:  str      xzr, [x0, #0x78]
003c8c08:  stur     q0, [x0, #0x88]
003c8c0c:  ldr      x8, [x8, #0x3d8]
003c8c10:  stur     q0, [x0, #0x98]
003c8c14:  stur     q0, [x0, #0xa4]
003c8c18:  add      x8, x8, #0x10
003c8c1c:  b        #0x3c8cec
003c8c20:  mov      w0, #0xc8
003c8c24:  bl       #0x644c30
003c8c28:  movi     v0.2d, #0000000000000000
003c8c2c:  mov      w9, #0xfffe
003c8c30:  mov      w8, #-1
003c8c34:  stp      q0, q0, [x0]
003c8c38:  stp      q0, q0, [x0, #0x20]
003c8c3c:  stp      q0, q0, [x0, #0x40]
003c8c40:  stp      q0, q0, [x0, #0x60]
003c8c44:  strh     w9, [x0, #0x60]
003c8c48:  adrp     x9, #0x24e000
003c8c4c:  stp      q0, q0, [x0, #0x80]
003c8c50:  stp      q0, q0, [x0, #0xa0]
003c8c54:  ldr      q0, [x9, #0x5b0]
003c8c58:  adrp     x9, #0x67d000
003c8c5c:  str      w8, [x0, #8]
003c8c60:  strb     wzr, [x0, #0x11]
003c8c64:  str      xzr, [x0, #0x30]
003c8c68:  stp      xzr, xzr, [x0, #0x68]
003c8c6c:  str      xzr, [x0, #0x78]
003c8c70:  ldr      x9, [x9, #0x88]
003c8c74:  str      w8, [x0, #0x88]
003c8c78:  stur     q0, [x0, #0x8c]
003c8c7c:  add      x8, x9, #0x10
003c8c80:  stur     xzr, [x0, #0xb4]
003c8c84:  str      x8, [x0]
003c8c88:  adrp     x8, #0x281000
003c8c8c:  add      x8, x8, #0xbf8
003c8c90:  ldr      q0, [x8]
003c8c94:  str      xzr, [x0, #0xc0]
003c8c98:  stur     q0, [x0, #0xa4]
003c8c9c:  b        #0x3c8cf0
003c8ca0:  mov      w0, #0x90
003c8ca4:  bl       #0x644c30
003c8ca8:  movi     v0.2d, #0000000000000000
003c8cac:  mov      w8, #-1
003c8cb0:  mov      w9, #0xfffe
003c8cb4:  str      q0, [x0, #0x80]
003c8cb8:  stp      q0, q0, [x0]
003c8cbc:  stp      q0, q0, [x0, #0x20]
003c8cc0:  stp      q0, q0, [x0, #0x40]
003c8cc4:  stp      q0, q0, [x0, #0x60]
003c8cc8:  str      w8, [x0, #8]
003c8ccc:  str      xzr, [x0, #0x30]
003c8cd0:  strh     w9, [x0, #0x60]
003c8cd4:  adrp     x9, #0x67d000
003c8cd8:  stp      xzr, xzr, [x0, #0x68]
003c8cdc:  ldr      x9, [x9, #0x3b0]
003c8ce0:  str      xzr, [x0, #0x78]
003c8ce4:  str      w8, [x0, #0x88]
003c8ce8:  add      x8, x9, #0x10
003c8cec:  str      x8, [x0]
003c8cf0:  ldr      x19, [sp, #0x10]
003c8cf4:  ldp      x29, x30, [sp], #0x20
003c8cf8:  ret      
003c8cfc:  mov      w0, #0x118
003c8d00:  bl       #0x644c30
003c8d04:  movi     v0.2d, #0000000000000000
003c8d08:  mov      x19, x0
003c8d0c:  str      xzr, [x0, #0x110]
003c8d10:  stp      q0, q0, [x0]
003c8d14:  stp      q0, q0, [x0, #0x20]
003c8d18:  stp      q0, q0, [x0, #0x40]
003c8d1c:  stp      q0, q0, [x0, #0x60]
003c8d20:  stp      q0, q0, [x0, #0x80]
003c8d24:  stp      q0, q0, [x0, #0xa0]
003c8d28:  stp      q0, q0, [x0, #0xc0]
003c8d2c:  stp      q0, q0, [x0, #0xe0]
003c8d30:  str      q0, [x0, #0x100]
003c8d34:  bl       #0x3cab5c
003c8d38:  mov      x0, x19
003c8d3c:  b        #0x3c8cf0

