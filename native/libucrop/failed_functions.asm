; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 001d1878  FUN_001d1878  (2720 bytes) =====
001d1878:  stp      d15, d14, [sp, #-0xa0]!
001d187c:  stp      d13, d12, [sp, #0x10]
001d1880:  stp      d11, d10, [sp, #0x20]
001d1884:  stp      d9, d8, [sp, #0x30]
001d1888:  stp      x29, x30, [sp, #0x40]
001d188c:  stp      x28, x27, [sp, #0x50]
001d1890:  stp      x26, x25, [sp, #0x60]
001d1894:  stp      x24, x23, [sp, #0x70]
001d1898:  stp      x22, x21, [sp, #0x80]
001d189c:  stp      x20, x19, [sp, #0x90]
001d18a0:  add      x29, sp, #0x40
001d18a4:  sub      sp, sp, #0x2b0
001d18a8:  ldr      w9, [x1, #0x1c]
001d18ac:  ldr      w10, [x1, #0x24]
001d18b0:  mov      x24, x3
001d18b4:  ldr      w8, [x0, #0x164]
001d18b8:  mov      x25, x0
001d18bc:  mov      x26, x2
001d18c0:  mul      w19, w10, w9
001d18c4:  cmn      w8, #1
001d18c8:  b.lt     #0x1d1908
001d18cc:  ldr      w20, [x25, #0x30]
001d18d0:  lsl      w9, w19, #1
001d18d4:  sub      w22, w9, w20
001d18d8:  cmp      w22, #1
001d18dc:  b.lt     #0x1d1908
001d18e0:  sub      x21, x26, #8
001d18e4:  add      w23, w8, #2
001d18e8:  ldr      x8, [x21], #8
001d18ec:  mov      x2, x22
001d18f0:  add      x0, x8, x20
001d18f4:  ldurb    w1, [x0, #-1]
001d18f8:  bl       #0x213410
001d18fc:  subs     x23, x23, #1
001d1900:  b.ne     #0x1d18e8
001d1904:  ldr      w8, [x25, #0x164]
001d1908:  cmp      w8, #1
001d190c:  b.lt     #0x1d22e8
001d1910:  ldr      w8, [x25, #0x134]
001d1914:  mov      w9, #-0x50
001d1918:  mov      w10, #0x4000
001d191c:  sub      w20, w19, #2
001d1920:  sub      w19, w19, #3
001d1924:  mov      x6, xzr
001d1928:  madd     w21, w8, w9, w10
001d192c:  lsl      w23, w8, #4
001d1930:  adrp     x8, #0x122000
001d1934:  adrp     x9, #0x122000
001d1938:  ldr      q25, [x8, #0xb50]
001d193c:  adrp     x8, #0x122000
001d1940:  ldr      q31, [x9, #0x850]
001d1944:  mov      x9, #0x1fffffffe
001d1948:  ldr      q1, [x8, #0xc50]
001d194c:  mov      w8, #0x8000
001d1950:  ubfiz    x11, x19, #1, #0x20
001d1954:  and      x22, x20, #0xfffffff0
001d1958:  dup      v8.2d, x23
001d195c:  dup      v0.2d, x21
001d1960:  dup      v28.2d, x9
001d1964:  adrp     x9, #0x122000
001d1968:  dup      v29.2d, x8
001d196c:  adrp     x8, #0x122000
001d1970:  str      q1, [sp, #0x70]
001d1974:  ldr      q1, [x9, #0xa20]
001d1978:  lsl      x9, x22, #1
001d197c:  ldr      q2, [x8, #0xb70]
001d1980:  mov      x7, xzr
001d1984:  add      x27, x11, #5
001d1988:  sub      w8, w20, w22
001d198c:  str      x9, [sp, #0x18]
001d1990:  str      w8, [sp, #0xc]
001d1994:  stp      x25, x24, [sp, #0x50]
001d1998:  stp      x20, x26, [sp, #0x40]
001d199c:  stp      x21, x19, [sp, #0x30]
001d19a0:  stp      x23, x22, [sp, #0x20]
001d19a4:  str      x27, [sp, #0x10]
001d19a8:  stp      q1, q28, [sp, #0x80]
001d19ac:  stp      q0, q2, [sp, #0xa0]
001d19b0:  stp      q29, q8, [sp, #0xc0]
001d19b4:  b        #0x1d1a44
001d19b8:  mov      x4, x5
001d19bc:  ldrb     w8, [x1, #1]
001d19c0:  ldrb     w9, [x0, #1]
001d19c4:  add      x6, x6, #1
001d19c8:  ldrb     w10, [x2]
001d19cc:  ldrb     w11, [x2, #1]
001d19d0:  ldrb     w12, [x3]
001d19d4:  ldrb     w13, [x3, #1]
001d19d8:  add      w8, w9, w8
001d19dc:  ldurb    w14, [x0, #-1]
001d19e0:  add      w9, w10, w11
001d19e4:  ldurb    w15, [x2, #-1]
001d19e8:  ldurb    w16, [x3, #-1]
001d19ec:  add      w10, w12, w13
001d19f0:  ldurb    w12, [x1, #-1]
001d19f4:  add      w9, w8, w9
001d19f8:  add      w11, w13, w11
001d19fc:  add      w13, w15, w16
001d1a00:  add      w10, w10, w12
001d1a04:  ldrb     w12, [x1]
001d1a08:  add      w10, w10, w14
001d1a0c:  ldrb     w14, [x0]
001d1a10:  add      w9, w9, w10
001d1a14:  add      w10, w11, w13
001d1a18:  add      w9, w10, w9, lsl #1
001d1a1c:  add      w10, w12, w14
001d1a20:  add      w8, w8, w10
001d1a24:  mul      w9, w9, w23
001d1a28:  madd     w8, w8, w21, w9
001d1a2c:  add      w8, w8, #8, lsl #12
001d1a30:  lsr      w8, w8, #0x10
001d1a34:  strb     w8, [x4]
001d1a38:  ldrsw    x8, [x25, #0x164]
001d1a3c:  cmp      x7, x8
001d1a40:  b.ge     #0x1d22e8
001d1a44:  add      x9, x26, x7, lsl #3
001d1a48:  add      x7, x7, #2
001d1a4c:  ldr      x8, [x26, x7, lsl #3]
001d1a50:  ldp      x11, x10, [x9]
001d1a54:  ldur     x9, [x9, #-8]
001d1a58:  ldrb     w12, [x8]
001d1a5c:  ldrb     w13, [x8, #1]
001d1a60:  mov      x3, x8
001d1a64:  ldrb     w16, [x9]
001d1a68:  ldrb     w4, [x9, #1]
001d1a6c:  mov      x2, x9
001d1a70:  mov      x1, x11
001d1a74:  ldrb     w14, [x11]
001d1a78:  ldrb     w15, [x10]
001d1a7c:  ldrb     w17, [x1, #2]!
001d1a80:  mov      x0, x10
001d1a84:  add      w13, w12, w13
001d1a88:  ldrb     w5, [x0, #2]!
001d1a8c:  add      w14, w15, w14
001d1a90:  ldrb     w15, [x2, #2]!
001d1a94:  add      w13, w13, w17
001d1a98:  ldrb     w17, [x3, #2]!
001d1a9c:  add      w4, w16, w4
001d1aa0:  add      w13, w13, w5
001d1aa4:  add      w12, w12, w16
001d1aa8:  add      w4, w14, w4
001d1aac:  add      w15, w15, w17
001d1ab0:  ldrb     w16, [x11, #1]
001d1ab4:  ldrb     w17, [x10, #1]
001d1ab8:  add      w13, w4, w13
001d1abc:  add      w12, w12, w15
001d1ac0:  add      w12, w12, w13, lsl #1
001d1ac4:  add      w13, w16, w17
001d1ac8:  add      w13, w14, w13
001d1acc:  mul      w12, w12, w23
001d1ad0:  madd     w13, w13, w21, w12
001d1ad4:  ldr      x12, [x24, x6, lsl #3]
001d1ad8:  mov      x5, x12
001d1adc:  add      w13, w13, #8, lsl #12
001d1ae0:  lsr      w13, w13, #0x10
001d1ae4:  strb     w13, [x5], #1
001d1ae8:  cbz      w20, #0x1d19b8
001d1aec:  cmp      w20, #0x10
001d1af0:  b.hs     #0x1d1b94
001d1af4:  mov      x4, x5
001d1af8:  mov      w8, w20
001d1afc:  ldrb     w11, [x2]
001d1b00:  ldrb     w12, [x2, #1]
001d1b04:  subs     w8, w8, #1
001d1b08:  ldrb     w9, [x1]
001d1b0c:  ldrb     w10, [x1, #1]
001d1b10:  ldrb     w13, [x3]
001d1b14:  ldrb     w14, [x3, #1]
001d1b18:  add      w11, w12, w11
001d1b1c:  ldurb    w15, [x1, #-1]
001d1b20:  ldrb     w16, [x1, #2]!
001d1b24:  add      w9, w10, w9
001d1b28:  ldurb    w12, [x0, #-1]
001d1b2c:  add      w13, w13, w14
001d1b30:  ldurb    w5, [x3, #-1]
001d1b34:  add      w14, w15, w16
001d1b38:  ldrb     w15, [x0]
001d1b3c:  add      w11, w11, w13
001d1b40:  add      w12, w14, w12
001d1b44:  ldurb    w14, [x2, #-1]
001d1b48:  ldrb     w13, [x0, #1]
001d1b4c:  ldrb     w16, [x2, #2]!
001d1b50:  add      w11, w11, w12
001d1b54:  ldrb     w17, [x0, #2]!
001d1b58:  add      w10, w15, w13
001d1b5c:  add      w12, w16, w14
001d1b60:  add      w9, w9, w10
001d1b64:  add      w11, w11, w17
001d1b68:  add      w12, w12, w5
001d1b6c:  add      w11, w12, w11, lsl #1
001d1b70:  ldrb     w12, [x3, #2]!
001d1b74:  add      w11, w11, w12
001d1b78:  mul      w10, w11, w23
001d1b7c:  madd     w9, w9, w21, w10
001d1b80:  add      w9, w9, #8, lsl #12
001d1b84:  lsr      w9, w9, #0x10
001d1b88:  strb     w9, [x4], #1
001d1b8c:  b.ne     #0x1d1afc
001d1b90:  b        #0x1d19bc
001d1b94:  add      x12, x12, x19
001d1b98:  add      x13, x10, x27
001d1b9c:  add      x14, x9, #1
001d1ba0:  add      x15, x12, #2
001d1ba4:  add      x12, x10, #1
001d1ba8:  cmp      x5, x13
001d1bac:  add      x13, x9, x27
001d1bb0:  ccmp     x12, x15, #2, lo
001d1bb4:  add      x16, x8, x27
001d1bb8:  cset     w12, lo
001d1bbc:  cmp      x5, x13
001d1bc0:  add      x17, x11, x27
001d1bc4:  ccmp     x14, x15, #2, lo
001d1bc8:  add      x14, x8, #1
001d1bcc:  cset     w13, lo
001d1bd0:  cmp      x5, x16
001d1bd4:  add      x16, x11, #1
001d1bd8:  ccmp     x14, x15, #2, lo
001d1bdc:  cset     w14, lo
001d1be0:  cmp      x16, x15
001d1be4:  ccmp     x5, x17, #2, lo
001d1be8:  b.lo     #0x1d1af4
001d1bec:  tbnz     w12, #0, #0x1d1af4
001d1bf0:  tbnz     w13, #0, #0x1d1af4
001d1bf4:  tbnz     w14, #0, #0x1d1af4
001d1bf8:  ldr      x12, [sp, #0x18]
001d1bfc:  add      x4, x5, x22
001d1c00:  add      x11, x11, #3
001d1c04:  add      x10, x10, #3
001d1c08:  add      x9, x9, #3
001d1c0c:  stp      x7, x6, [sp, #0x60]
001d1c10:  add      x3, x3, x12
001d1c14:  add      x2, x2, x12
001d1c18:  add      x0, x0, x12
001d1c1c:  add      x1, x1, x12
001d1c20:  add      x12, x8, #3
001d1c24:  stur     x22, [x29, #-0xd8]
001d1c28:  sub      x8, x11, #2
001d1c2c:  mov      v2.16b, v25.16b
001d1c30:  ld2      {v8.16b, v9.16b}, [x8]
001d1c34:  sub      x8, x10, #2
001d1c38:  add      x13, sp, #0x1b0
001d1c3c:  ld2      {v3.16b, v4.16b}, [x11], #32
001d1c40:  mov      v22.16b, v31.16b
001d1c44:  stur     x11, [x29, #-0xb8]
001d1c48:  ld2      {v0.16b, v1.16b}, [x8]
001d1c4c:  add      x8, sp, #0x1e0
001d1c50:  tbl      v11.16b, {v9.16b}, v31.16b
001d1c54:  tbl      v12.16b, {v9.16b}, v25.16b
001d1c58:  st1      {v3.2d, v4.2d}, [x13]
001d1c5c:  tbl      v13.16b, {v3.16b}, v31.16b
001d1c60:  tbl      v14.16b, {v3.16b}, v2.16b
001d1c64:  ld2      {v18.16b, v19.16b}, [x10], #32
001d1c68:  tbl      v27.16b, {v1.16b}, v2.16b
001d1c6c:  ldp      q17, q23, [sp, #0x70]
001d1c70:  tbl      v28.16b, {v1.16b}, v22.16b
001d1c74:  st1      {v0.2d, v1.2d}, [x8]
001d1c78:  sub      x8, x9, #2
001d1c7c:  mov      x13, x5
001d1c80:  uaddl2   v10.2d, v13.4s, v11.4s
001d1c84:  uaddl    v11.2d, v13.2s, v11.2s
001d1c88:  stur     x10, [x29, #-0xc0]
001d1c8c:  tbl      v6.16b, {v9.16b}, v17.16b
001d1c90:  tbl      v26.16b, {v3.16b}, v17.16b
001d1c94:  tbl      v31.16b, {v3.16b}, v23.16b
001d1c98:  tbl      v3.16b, {v1.16b}, v23.16b
001d1c9c:  tbl      v5.16b, {v1.16b}, v17.16b
001d1ca0:  uaddl2   v1.2d, v14.4s, v12.4s
001d1ca4:  tbl      v16.16b, {v18.16b}, v22.16b
001d1ca8:  tbl      v15.16b, {v18.16b}, v2.16b
001d1cac:  uaddl    v12.2d, v14.2s, v12.2s
001d1cb0:  uaddw2   v10.2d, v10.2d, v28.4s
001d1cb4:  tbl      v25.16b, {v9.16b}, v23.16b
001d1cb8:  uaddw    v28.2d, v11.2d, v28.2s
001d1cbc:  uaddl2   v13.2d, v26.4s, v6.4s
001d1cc0:  uaddl    v6.2d, v26.2s, v6.2s
001d1cc4:  uaddw2   v1.2d, v1.2d, v27.4s
001d1cc8:  uaddw    v27.2d, v12.2d, v27.2s
001d1ccc:  sub      x10, x29, #0x70
001d1cd0:  mov      v4.16b, v2.16b
001d1cd4:  tbl      v2.16b, {v18.16b}, v17.16b
001d1cd8:  st1      {v18.2d, v19.2d}, [x10]
001d1cdc:  ld2      {v29.16b, v30.16b}, [x8]
001d1ce0:  uaddw2   v13.2d, v13.2d, v5.4s
001d1ce4:  uaddw    v5.2d, v6.2d, v5.2s
001d1ce8:  uaddw2   v6.2d, v10.2d, v16.4s
001d1cec:  uaddw2   v1.2d, v1.2d, v15.4s
001d1cf0:  ld2      {v20.16b, v21.16b}, [x9], #32
001d1cf4:  uaddl2   v14.2d, v31.4s, v25.4s
001d1cf8:  uaddl    v31.2d, v31.2s, v25.2s
001d1cfc:  tbl      v0.16b, {v18.16b}, v23.16b
001d1d00:  stur     q6, [x29, #-0xf0]
001d1d04:  uaddw    v6.2d, v28.2d, v16.2s
001d1d08:  sub      x8, x12, #2
001d1d0c:  str      q1, [sp, #0x1d0]
001d1d10:  uaddw    v1.2d, v27.2d, v15.2s
001d1d14:  ld2      {v24.16b, v25.16b}, [x8]
001d1d18:  uaddw    v31.2d, v31.2d, v3.2s
001d1d1c:  uaddw2   v3.2d, v14.2d, v3.4s
001d1d20:  sub      x8, x29, #0x90
001d1d24:  st1      {v29.2d, v30.2d}, [x8]
001d1d28:  add      x8, sp, #0x140
001d1d2c:  tbl      v10.16b, {v30.16b}, v23.16b
001d1d30:  stp      q1, q6, [sp, #0x190]
001d1d34:  uaddw2   v1.2d, v13.2d, v2.4s
001d1d38:  tbl      v11.16b, {v20.16b}, v23.16b
001d1d3c:  stur     x9, [x29, #-0xd0]
001d1d40:  tbl      v6.16b, {v30.16b}, v4.16b
001d1d44:  tbl      v12.16b, {v20.16b}, v4.16b
001d1d48:  st1      {v20.2d, v21.2d}, [x8]
001d1d4c:  uaddw    v15.2d, v5.2d, v2.2s
001d1d50:  tbl      v2.16b, {v30.16b}, v17.16b
001d1d54:  str      q1, [sp, #0x160]
001d1d58:  uaddw2   v1.2d, v3.2d, v0.4s
001d1d5c:  tbl      v3.16b, {v20.16b}, v22.16b
001d1d60:  tbl      v5.16b, {v20.16b}, v17.16b
001d1d64:  uaddw    v14.2d, v31.2d, v0.2s
001d1d68:  tbl      v31.16b, {v25.16b}, v23.16b
001d1d6c:  tbl      v13.16b, {v25.16b}, v22.16b
001d1d70:  mov      v26.16b, v4.16b
001d1d74:  sub      x8, x29, #0xb0
001d1d78:  str      q1, [sp, #0x130]
001d1d7c:  tbl      v1.16b, {v30.16b}, v22.16b
001d1d80:  uaddl2   v4.2d, v12.4s, v6.4s
001d1d84:  ld2      {v18.16b, v19.16b}, [x12], #32
001d1d88:  st1      {v24.2d, v25.2d}, [x8]
001d1d8c:  add      x8, sp, #0x170
001d1d90:  uaddl    v6.2d, v12.2s, v6.2s
001d1d94:  uaddl2   v12.2d, v5.4s, v2.4s
001d1d98:  uaddl    v5.2d, v5.2s, v2.2s
001d1d9c:  tbl      v7.16b, {v25.16b}, v26.16b
001d1da0:  mov      x10, v15.d[1]
001d1da4:  uaddl2   v16.2d, v3.4s, v1.4s
001d1da8:  uaddl    v1.2d, v3.2s, v1.2s
001d1dac:  uaddl    v3.2d, v11.2s, v10.2s
001d1db0:  uaddl2   v11.2d, v11.4s, v10.4s
001d1db4:  tbl      v0.16b, {v25.16b}, v17.16b
001d1db8:  fmov     x11, d14
001d1dbc:  stur     x12, [x29, #-0xc8]
001d1dc0:  add      x12, sp, #0x1e0
001d1dc4:  uaddw    v10.2d, v3.2d, v31.2s
001d1dc8:  st1      {v18.2d, v19.2d}, [x8]
001d1dcc:  tbl      v3.16b, {v18.16b}, v22.16b
001d1dd0:  uaddw2   v31.2d, v11.2d, v31.4s
001d1dd4:  uaddw    v2.2d, v1.2d, v13.2s
001d1dd8:  uaddw2   v16.2d, v16.2d, v13.4s
001d1ddc:  tbl      v13.16b, {v18.16b}, v26.16b
001d1de0:  tbl      v1.16b, {v18.16b}, v23.16b
001d1de4:  tbl      v11.16b, {v18.16b}, v17.16b
001d1de8:  ldr      q18, [sp, #0xa0]
001d1dec:  mov      x8, v14.d[1]
001d1df0:  uaddw    v6.2d, v6.2d, v7.2s
001d1df4:  uaddw2   v4.2d, v4.2d, v7.4s
001d1df8:  uaddw    v27.2d, v2.2d, v3.2s
001d1dfc:  tbl      v2.16b, {v8.16b}, v23.16b
001d1e00:  mov      x9, v18.d[1]
001d1e04:  uaddw2   v21.2d, v16.2d, v3.4s
001d1e08:  tbl      v7.16b, {v8.16b}, v17.16b
001d1e0c:  tbl      v16.16b, {v8.16b}, v26.16b
001d1e10:  uaddw    v5.2d, v5.2d, v0.2s
001d1e14:  uaddw2   v0.2d, v12.2d, v0.4s
001d1e18:  uaddw2   v3.2d, v4.2d, v13.4s
001d1e1c:  uaddw    v4.2d, v6.2d, v13.2s
001d1e20:  uaddw    v6.2d, v10.2d, v1.2s
001d1e24:  uaddw2   v1.2d, v31.2d, v1.4s
001d1e28:  tbl      v31.16b, {v8.16b}, v22.16b
001d1e2c:  fmov     x5, d18
001d1e30:  mul      x8, x8, x9
001d1e34:  uaddw    v5.2d, v5.2d, v11.2s
001d1e38:  uaddw2   v0.2d, v0.2d, v11.4s
001d1e3c:  uaddw    v8.2d, v6.2d, v2.2s
001d1e40:  ldr      q6, [sp, #0x130]
001d1e44:  uaddw    v4.2d, v4.2d, v16.2s
001d1e48:  mul      x10, x10, x9
001d1e4c:  uaddw2   v1.2d, v1.2d, v2.4s
001d1e50:  uaddw2   v3.2d, v3.2d, v16.4s
001d1e54:  uaddw    v2.2d, v5.2d, v7.2s
001d1e58:  uaddw2   v28.2d, v0.2d, v7.4s
001d1e5c:  uaddw2   v10.2d, v21.2d, v31.4s
001d1e60:  ldr      q21, [sp, #0x160]
001d1e64:  uaddw    v16.2d, v27.2d, v31.2s
001d1e68:  ldr      q27, [sp, #0x90]
001d1e6c:  str      x8, [sp, #0x128]
001d1e70:  fmov     x8, d18
001d1e74:  str      x10, [sp, #0x120]
001d1e78:  mov      x10, v6.d[1]
001d1e7c:  mul      x20, x11, x8
001d1e80:  add      x11, sp, #0x1b0
001d1e84:  ld1      {v19.2d, v20.2d}, [x11]
001d1e88:  fmov     x11, d15
001d1e8c:  mul      x10, x10, x9
001d1e90:  tbl      v5.16b, {v20.16b}, v23.16b
001d1e94:  tbl      v7.16b, {v20.16b}, v17.16b
001d1e98:  mov      v24.16b, v19.16b
001d1e9c:  mul      x11, x11, x8
001d1ea0:  mov      v25.16b, v20.16b
001d1ea4:  ld1      {v19.2d, v20.2d}, [x12]
001d1ea8:  fmov     x12, d21
001d1eac:  tbl      v9.16b, {v19.16b}, v23.16b
001d1eb0:  uaddw    v0.2d, v8.2d, v5.2s
001d1eb4:  tbl      v8.16b, {v25.16b}, v22.16b
001d1eb8:  uaddw    v11.2d, v2.2d, v7.2s
001d1ebc:  uaddw2   v1.2d, v1.2d, v5.4s
001d1ec0:  tbl      v31.16b, {v19.16b}, v17.16b
001d1ec4:  stp      x11, x10, [sp, #0x110]
001d1ec8:  mov      x10, v21.d[1]
001d1ecc:  sub      x11, x29, #0x70
001d1ed0:  ld1      {v13.2d, v14.2d}, [x11]
001d1ed4:  fmov     x11, d6
001d1ed8:  tbl      v29.16b, {v25.16b}, v26.16b
001d1edc:  uaddw    v30.2d, v0.2d, v9.2s
001d1ee0:  uaddw2   v2.2d, v10.2d, v8.4s
001d1ee4:  uaddw    v0.2d, v16.2d, v8.2s
001d1ee8:  ldr      q25, [sp, #0x1a0]
001d1eec:  uaddw    v8.2d, v11.2d, v31.2s
001d1ef0:  uaddw2   v7.2d, v28.2d, v7.4s
001d1ef4:  mul      x10, x10, x9
001d1ef8:  tbl      v12.16b, {v14.16b}, v23.16b
001d1efc:  tbl      v16.16b, {v14.16b}, v17.16b
001d1f00:  stp      q0, q2, [sp, #0xe0]
001d1f04:  ldr      q2, [sp, #0x190]
001d1f08:  uaddw2   v24.2d, v3.2d, v29.4s
001d1f0c:  mul      x11, x11, x8
001d1f10:  uaddw2   v3.2d, v1.2d, v9.4s
001d1f14:  uaddw    v21.2d, v4.2d, v29.2s
001d1f18:  uaddw2   v7.2d, v7.2d, v31.4s
001d1f1c:  uaddw    v30.2d, v30.2d, v12.2s
001d1f20:  uaddw    v4.2d, v8.2d, v16.2s
001d1f24:  str      x10, [sp, #0x130]
001d1f28:  mov      x10, v2.d[1]
001d1f2c:  uaddw2   v3.2d, v3.2d, v12.4s
001d1f30:  uaddw2   v7.2d, v7.2d, v16.4s
001d1f34:  str      x11, [sp, #0x1b0]
001d1f38:  sub      x11, x29, #0x90
001d1f3c:  add      v30.2d, v30.2d, v30.2d
001d1f40:  ld1      {v5.2d, v6.2d}, [x11]
001d1f44:  add      x11, sp, #0x140
001d1f48:  add      v4.2d, v4.2d, v4.2d
001d1f4c:  ld1      {v14.2d, v15.2d}, [x11]
001d1f50:  mul      x11, x12, x8
001d1f54:  fmov     x12, d2
001d1f58:  and      v30.16b, v30.16b, v27.16b
001d1f5c:  add      v7.2d, v7.2d, v7.2d
001d1f60:  mul      x10, x10, x9
001d1f64:  tbl      v10.16b, {v5.16b}, v23.16b
001d1f68:  tbl      v29.16b, {v5.16b}, v17.16b
001d1f6c:  tbl      v11.16b, {v15.16b}, v23.16b
001d1f70:  tbl      v9.16b, {v15.16b}, v17.16b
001d1f74:  and      v4.16b, v4.16b, v27.16b
001d1f78:  and      v7.16b, v7.16b, v27.16b
001d1f7c:  str      x11, [sp, #0x108]
001d1f80:  sub      x11, x29, #0xb0
001d1f84:  ld1      {v0.2d, v1.2d}, [x11]
001d1f88:  mul      x11, x12, x8
001d1f8c:  fmov     x12, d25
001d1f90:  str      x10, [sp, #0x160]
001d1f94:  mov      x10, v25.d[1]
001d1f98:  uaddl    v13.2d, v11.2s, v10.2s
001d1f9c:  uaddl2   v10.2d, v11.4s, v10.4s
001d1fa0:  uaddl    v28.2d, v9.2s, v29.2s
001d1fa4:  uaddl2   v16.2d, v9.4s, v29.4s
001d1fa8:  tbl      v8.16b, {v0.16b}, v23.16b
001d1fac:  tbl      v6.16b, {v0.16b}, v17.16b
001d1fb0:  ldr      q0, [sp, #0x1d0]
001d1fb4:  add      v1.2d, v3.2d, v3.2d
001d1fb8:  mul      x19, x12, x8
001d1fbc:  ldr      q29, [sp, #0xc0]
001d1fc0:  str      x11, [sp, #0x190]
001d1fc4:  add      x11, sp, #0x170
001d1fc8:  fmov     x12, d0
001d1fcc:  mul      x10, x10, x9
001d1fd0:  ld1      {v11.2d, v12.2d}, [x11]
001d1fd4:  mov      v25.16b, v26.16b
001d1fd8:  uaddw    v5.2d, v13.2d, v8.2s
001d1fdc:  uaddw2   v8.2d, v10.2d, v8.4s
001d1fe0:  uaddw    v10.2d, v28.2d, v6.2s
001d1fe4:  and      v1.16b, v1.16b, v27.16b
001d1fe8:  mul      x15, x12, x8
001d1fec:  sub      x8, x29, #0x70
001d1ff0:  tbl      v13.16b, {v12.16b}, v23.16b
001d1ff4:  uaddw2   v6.2d, v16.2d, v6.4s
001d1ff8:  tbl      v16.16b, {v15.16b}, v26.16b
001d1ffc:  add      v31.2d, v5.2d, v30.2d
001d2000:  tbl      v30.16b, {v12.16b}, v17.16b
001d2004:  ldur     q5, [x29, #-0xf0]
001d2008:  str      x10, [sp, #0x100]
001d200c:  mov      x10, v0.d[1]
001d2010:  add      v4.2d, v10.2d, v4.2d
001d2014:  tbl      v10.16b, {v19.16b}, v26.16b
001d2018:  add      v1.2d, v8.2d, v1.2d
001d201c:  fmov     x12, d5
001d2020:  ldp      q8, q0, [sp, #0xd0]
001d2024:  ld1      {v17.2d, v18.2d}, [x8]
001d2028:  uaddw    v4.2d, v4.2d, v30.2s
001d202c:  uaddw    v31.2d, v31.2d, v13.2s
001d2030:  tbl      v19.16b, {v19.16b}, v22.16b
001d2034:  mul      x21, x10, x9
001d2038:  mov      x10, v5.d[1]
001d203c:  sub      x8, x29, #0x90
001d2040:  tbl      v20.16b, {v18.16b}, v26.16b
001d2044:  uaddw    v5.2d, v21.2d, v10.2s
001d2048:  uaddw2   v3.2d, v24.2d, v10.4s
001d204c:  mul      x12, x12, x5
001d2050:  mov      x5, v4.d[1]
001d2054:  uaddw2   v1.2d, v1.2d, v13.4s
001d2058:  fmov     x6, d31
001d205c:  fmov     x28, d8
001d2060:  tbl      v17.16b, {v18.16b}, v22.16b
001d2064:  mul      x16, x10, x9
001d2068:  mov      x9, v8.d[1]
001d206c:  ld1      {v23.2d, v24.2d}, [x8]
001d2070:  uaddw    v2.2d, v0.2d, v19.2s
001d2074:  ldr      q0, [sp, #0xf0]
001d2078:  sub      x8, x29, #0xb0
001d207c:  mul      x24, x6, x28
001d2080:  fmov     x6, d4
001d2084:  uaddw    v4.2d, v5.2d, v20.2s
001d2088:  uaddw2   v0.2d, v0.2d, v19.4s
001d208c:  tbl      v18.16b, {v23.16b}, v26.16b
001d2090:  tbl      v19.16b, {v23.16b}, v22.16b
001d2094:  mul      x25, x5, x9
001d2098:  mov      x5, v1.d[1]
001d209c:  tbl      v5.16b, {v15.16b}, v22.16b
001d20a0:  ld1      {v23.2d, v24.2d}, [x8]
001d20a4:  uaddw2   v3.2d, v3.2d, v20.4s
001d20a8:  uaddw    v2.2d, v2.2d, v17.2s
001d20ac:  add      v6.2d, v6.2d, v7.2d
001d20b0:  add      v4.2d, v4.2d, v4.2d
001d20b4:  uaddw2   v0.2d, v0.2d, v17.4s
001d20b8:  uaddl    v20.2d, v16.2s, v18.2s
001d20bc:  uaddl2   v16.2d, v16.4s, v18.4s
001d20c0:  tbl      v18.16b, {v12.16b}, v26.16b
001d20c4:  tbl      v7.16b, {v23.16b}, v26.16b
001d20c8:  tbl      v21.16b, {v23.16b}, v22.16b
001d20cc:  mul      x27, x5, x9
001d20d0:  fmov     x5, d1
001d20d4:  add      v1.2d, v2.2d, v2.2d
001d20d8:  uaddl    v2.2d, v5.2s, v19.2s
001d20dc:  add      v3.2d, v3.2d, v3.2d
001d20e0:  and      v4.16b, v4.16b, v27.16b
001d20e4:  add      v0.2d, v0.2d, v0.2d
001d20e8:  uaddl2   v5.2d, v5.4s, v19.4s
001d20ec:  uaddw2   v6.2d, v6.2d, v30.4s
001d20f0:  mul      x26, x6, x28
001d20f4:  uaddw    v17.2d, v20.2d, v7.2s
001d20f8:  and      v1.16b, v1.16b, v27.16b
001d20fc:  uaddw    v2.2d, v2.2d, v21.2s
001d2100:  and      v3.16b, v3.16b, v27.16b
001d2104:  uaddw2   v7.2d, v16.2d, v7.4s
001d2108:  tbl      v16.16b, {v12.16b}, v22.16b
001d210c:  and      v0.16b, v0.16b, v27.16b
001d2110:  mov      x6, v6.d[1]
001d2114:  mul      x5, x5, x28
001d2118:  add      v4.2d, v17.2d, v4.2d
001d211c:  add      v1.2d, v2.2d, v1.2d
001d2120:  uaddw2   v2.2d, v5.2d, v21.4s
001d2124:  add      v3.2d, v7.2d, v3.2d
001d2128:  fmov     x8, d8
001d212c:  mov      x14, v31.d[1]
001d2130:  fmov     d7, x12
001d2134:  fmov     d5, x19
001d2138:  mov      v31.16b, v22.16b
001d213c:  uaddw    v4.2d, v4.2d, v18.2s
001d2140:  uaddw    v1.2d, v1.2d, v16.2s
001d2144:  add      v0.2d, v2.2d, v0.2d
001d2148:  uaddw2   v2.2d, v3.2d, v18.4s
001d214c:  mul      x30, x6, x9
001d2150:  fmov     x6, d6
001d2154:  ldr      d3, [sp, #0x110]
001d2158:  fmov     d6, x15
001d215c:  ldr      x15, [sp, #0x160]
001d2160:  fmov     x17, d4
001d2164:  fmov     x11, d1
001d2168:  uaddw2   v0.2d, v0.2d, v16.4s
001d216c:  fmov     x7, d2
001d2170:  mul      x6, x6, x28
001d2174:  mov      x23, v1.d[1]
001d2178:  fmov     d1, x20
001d217c:  ldr      x20, [sp, #0x128]
001d2180:  mov      x10, v2.d[1]
001d2184:  mul      x17, x17, x28
001d2188:  mov      x22, v4.d[1]
001d218c:  ldr      d2, [sp, #0x108]
001d2190:  ldr      d4, [sp, #0x190]
001d2194:  mov      v7.d[1], x16
001d2198:  mov      v6.d[1], x21
001d219c:  mul      x11, x11, x28
001d21a0:  mov      v1.d[1], x20
001d21a4:  ldr      x20, [sp, #0x120]
001d21a8:  mov      v4.d[1], x15
001d21ac:  ldr      x15, [sp, #0x100]
001d21b0:  fmov     d19, x6
001d21b4:  mul      x7, x7, x28
001d21b8:  fmov     x28, d0
001d21bc:  mov      v3.d[1], x20
001d21c0:  ldr      x20, [sp, #0x118]
001d21c4:  fmov     d18, x5
001d21c8:  mov      v5.d[1], x15
001d21cc:  mul      x10, x10, x9
001d21d0:  fmov     d17, x26
001d21d4:  fmov     d16, x24
001d21d8:  fmov     d22, x11
001d21dc:  fmov     d20, x17
001d21e0:  mov      v19.d[1], x30
001d21e4:  mul      x8, x28, x8
001d21e8:  mov      x28, v0.d[1]
001d21ec:  ldr      d0, [sp, #0x1b0]
001d21f0:  fmov     d23, x7
001d21f4:  mov      v18.d[1], x27
001d21f8:  add      v7.2d, v7.2d, v29.2d
001d21fc:  mov      v0.d[1], x20
001d2200:  ldr      x20, [sp, #0x130]
001d2204:  mul      x14, x14, x9
001d2208:  mov      v17.d[1], x25
001d220c:  add      v6.2d, v6.2d, v29.2d
001d2210:  add      v3.2d, v3.2d, v29.2d
001d2214:  mul      x12, x28, x9
001d2218:  mov      v2.d[1], x20
001d221c:  mov      v23.d[1], x10
001d2220:  fmov     d21, x8
001d2224:  add      v5.2d, v5.2d, v29.2d
001d2228:  add      v1.2d, v1.2d, v29.2d
001d222c:  mul      x22, x22, x9
001d2230:  add      v0.2d, v0.2d, v29.2d
001d2234:  add      v4.2d, v4.2d, v29.2d
001d2238:  mov      v16.d[1], x14
001d223c:  add      v3.2d, v3.2d, v17.2d
001d2240:  mov      x5, x13
001d2244:  mul      x9, x23, x9
001d2248:  add      v2.2d, v2.2d, v29.2d
001d224c:  add      v6.2d, v6.2d, v23.2d
001d2250:  mov      v21.d[1], x12
001d2254:  add      v0.2d, v0.2d, v18.2d
001d2258:  ldur     x12, [x29, #-0xc8]
001d225c:  ldp      x10, x11, [x29, #-0xc0]
001d2260:  mov      v20.d[1], x22
001d2264:  add      v2.2d, v2.2d, v19.2d
001d2268:  add      v1.2d, v1.2d, v16.2d
001d226c:  mov      v22.d[1], x9
001d2270:  add      v7.2d, v7.2d, v21.2d
001d2274:  ldp      x22, x9, [x29, #-0xd8]
001d2278:  add      v4.2d, v4.2d, v20.2d
001d227c:  ushr     v19.2d, v7.2d, #0x10
001d2280:  add      v5.2d, v5.2d, v22.2d
001d2284:  ushr     v23.2d, v2.2d, #0x10
001d2288:  ushr     v17.2d, v6.2d, #0x10
001d228c:  ushr     v21.2d, v0.2d, #0x10
001d2290:  ldr      q2, [sp, #0xb0]
001d2294:  subs     x22, x22, #0x10
001d2298:  ushr     v22.2d, v3.2d, #0x10
001d229c:  ushr     v18.2d, v5.2d, #0x10
001d22a0:  ushr     v20.2d, v1.2d, #0x10
001d22a4:  ushr     v16.2d, v4.2d, #0x10
001d22a8:  tbl      v0.16b, {v20.16b, v21.16b, v22.16b, v23.16b}, v2.16b
001d22ac:  tbl      v1.16b, {v16.16b, v17.16b, v18.16b, v19.16b}, v2.16b
001d22b0:  mov      v0.d[1], v1.d[0]
001d22b4:  str      q0, [x5], #0x10
001d22b8:  b.ne     #0x1d1c24
001d22bc:  ldp      x20, x26, [sp, #0x40]
001d22c0:  ldr      w8, [sp, #0xc]
001d22c4:  ldp      x22, x21, [sp, #0x28]
001d22c8:  ldr      x19, [sp, #0x38]
001d22cc:  ldr      x23, [sp, #0x20]
001d22d0:  ldr      x27, [sp, #0x10]
001d22d4:  ldp      x25, x24, [sp, #0x50]
001d22d8:  cmp      x22, x20
001d22dc:  ldp      x7, x6, [sp, #0x60]
001d22e0:  b.ne     #0x1d1afc
001d22e4:  b        #0x1d19bc
001d22e8:  add      sp, sp, #0x2b0
001d22ec:  ldp      x20, x19, [sp, #0x90]
001d22f0:  ldp      x22, x21, [sp, #0x80]
001d22f4:  ldp      x24, x23, [sp, #0x70]
001d22f8:  ldp      x26, x25, [sp, #0x60]
001d22fc:  ldp      x28, x27, [sp, #0x50]
001d2300:  ldp      x29, x30, [sp, #0x40]
001d2304:  ldp      d9, d8, [sp, #0x30]
001d2308:  ldp      d11, d10, [sp, #0x20]
001d230c:  ldp      d13, d12, [sp, #0x10]
001d2310:  ldp      d15, d14, [sp], #0xa0
001d2314:  ret      

