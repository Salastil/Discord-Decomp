; Functions Ghidra could not decompile (timeout/empty), disassembled with capstone 5.0.7
; addresses are Ghidra addresses (ELF vaddr + 0x100000)

; ===== 0013e650  FUN_0013e650  (2816 bytes) =====
0013e650:  stp      d15, d14, [sp, #-0xa0]!
0013e654:  stp      d13, d12, [sp, #0x10]
0013e658:  stp      d11, d10, [sp, #0x20]
0013e65c:  stp      d9, d8, [sp, #0x30]
0013e660:  stp      x29, x30, [sp, #0x40]
0013e664:  stp      x28, x27, [sp, #0x50]
0013e668:  stp      x26, x25, [sp, #0x60]
0013e66c:  stp      x24, x23, [sp, #0x70]
0013e670:  stp      x22, x21, [sp, #0x80]
0013e674:  stp      x20, x19, [sp, #0x90]
0013e678:  add      x29, sp, #0x40
0013e67c:  sub      sp, sp, #0x260
0013e680:  ldr      w8, [x0, #0x160]
0013e684:  ldr      w19, [x1, #0x1c]
0013e688:  mov      x25, x3
0013e68c:  mov      x26, x1
0013e690:  mov      x22, x0
0013e694:  mov      x27, x2
0013e698:  cmn      w8, #1
0013e69c:  b.lt     #0x13e6e0
0013e6a0:  ldr      w20, [x22, #0x30]
0013e6a4:  lsl      w9, w19, #4
0013e6a8:  sub      w10, w9, w20
0013e6ac:  cmp      w10, #1
0013e6b0:  b.lt     #0x13e6e0
0013e6b4:  mvn      w10, w20
0013e6b8:  sub      x21, x27, #8
0013e6bc:  add      w23, w8, #2
0013e6c0:  add      w24, w9, w10
0013e6c4:  ldr      x8, [x21], #8
0013e6c8:  add      x2, x24, #1
0013e6cc:  add      x0, x8, x20
0013e6d0:  ldurb    w1, [x0, #-1]
0013e6d4:  bl       #0x189a50
0013e6d8:  subs     x23, x23, #1
0013e6dc:  b.ne     #0x13e6c4
0013e6e0:  ldr      w8, [x26, #0xc]
0013e6e4:  cmp      w8, #1
0013e6e8:  b.lt     #0x13f120
0013e6ec:  ldr      w8, [x22, #0x134]
0013e6f0:  mov      w10, #-0x50
0013e6f4:  lsl      w9, w19, #3
0013e6f8:  mov      w11, #0x4000
0013e6fc:  mov      x2, xzr
0013e700:  mov      x7, xzr
0013e704:  madd     w19, w8, w10, w11
0013e708:  lsl      w20, w8, #4
0013e70c:  adrp     x8, #0x113000
0013e710:  adrp     x10, #0x113000
0013e714:  sub      w22, w9, #8
0013e718:  ldr      q24, [x8, #0x8e0]
0013e71c:  adrp     x8, #0x113000
0013e720:  ldr      q8, [x10, #0xc90]
0013e724:  mov      x10, #0x1fffffffe
0013e728:  mov      w11, #0x8000
0013e72c:  sub      w21, w9, #2
0013e730:  ubfiz    x9, x22, #1, #0x20
0013e734:  and      w12, w22, #0xfffffff0
0013e738:  dup      v29.2d, x20
0013e73c:  dup      v30.2d, x19
0013e740:  ldr      q31, [x8, #0xb70]
0013e744:  adrp     x8, #0x113000
0013e748:  dup      v25.2d, x10
0013e74c:  dup      v26.2d, x11
0013e750:  adrp     x10, #0x113000
0013e754:  ubfiz    x11, x12, #1, #0x20
0013e758:  ldr      q0, [x8, #0xab0]
0013e75c:  ldr      q2, [x10, #0xb80]
0013e760:  orr      x23, x22, #7
0013e764:  orr      x24, x9, #0xf
0013e768:  sub      w8, w21, w12
0013e76c:  str      x11, [sp, #0x20]
0013e770:  str      q0, [sp, #0x80]
0013e774:  stp      x12, x22, [sp, #0x28]
0013e778:  str      w8, [sp, #0xc]
0013e77c:  stp      x26, x25, [sp, #0x58]
0013e780:  stp      x19, x27, [sp, #0x48]
0013e784:  str      x20, [sp, #0x40]
0013e788:  str      w21, [sp, #0x3c]
0013e78c:  stur     q24, [x29, #-0x60]
0013e790:  str      q29, [sp, #0xc0]
0013e794:  stur     q30, [x29, #-0xa0]
0013e798:  stp      q26, q25, [sp, #0xa0]
0013e79c:  str      q2, [sp, #0x90]
0013e7a0:  stp      x24, x23, [sp, #0x10]
0013e7a4:  stur     q31, [x29, #-0x70]
0013e7a8:  lsl      x8, x7, #3
0013e7ac:  add      x7, x7, #2
0013e7b0:  cmp      w22, #0x10
0013e7b4:  ldr      x9, [x27, x7, lsl #3]
0013e7b8:  add      x10, x27, x8
0013e7bc:  orr      x8, x8, #8
0013e7c0:  ldp      x12, x13, [x10, #-8]
0013e7c4:  ldr      x8, [x27, x8]
0013e7c8:  ldrb     w10, [x9]
0013e7cc:  ldrb     w11, [x9, #1]
0013e7d0:  mov      x5, x9
0013e7d4:  ldrb     w15, [x8]
0013e7d8:  mov      x3, x8
0013e7dc:  mov      x6, x13
0013e7e0:  ldrb     w14, [x13]
0013e7e4:  ldrb     w16, [x12]
0013e7e8:  ldrb     w0, [x6, #2]!
0013e7ec:  ldrb     w17, [x12, #1]
0013e7f0:  add      w11, w10, w11
0013e7f4:  mov      x4, x12
0013e7f8:  add      w14, w15, w14
0013e7fc:  ldrb     w1, [x3, #2]!
0013e800:  add      w11, w11, w0
0013e804:  ldrb     w15, [x4, #2]!
0013e808:  add      w17, w16, w17
0013e80c:  ldrb     w0, [x5, #2]!
0013e810:  add      w11, w11, w1
0013e814:  add      w10, w10, w16
0013e818:  add      w17, w14, w17
0013e81c:  ldrb     w16, [x13, #1]
0013e820:  add      w15, w15, w0
0013e824:  ldrb     w0, [x8, #1]
0013e828:  add      w11, w17, w11
0013e82c:  add      w10, w10, w15
0013e830:  add      w10, w10, w11, lsl #1
0013e834:  add      w11, w16, w0
0013e838:  add      w11, w14, w11
0013e83c:  mul      w10, w10, w20
0013e840:  madd     w11, w11, w19, w10
0013e844:  ldr      x10, [x25, x2, lsl #3]
0013e848:  mov      x1, x10
0013e84c:  add      w11, w11, #8, lsl #12
0013e850:  lsr      w11, w11, #0x10
0013e854:  strb     w11, [x1], #1
0013e858:  b.hs     #0x13e864
0013e85c:  mov      w9, w21
0013e860:  b        #0x13eff4
0013e864:  add      x11, x8, x24
0013e868:  add      x15, x10, x23
0013e86c:  add      x10, x8, #1
0013e870:  cmp      x1, x11
0013e874:  add      x11, x12, x24
0013e878:  add      x14, x12, #1
0013e87c:  ccmp     x10, x15, #2, lo
0013e880:  add      x16, x9, x24
0013e884:  add      x17, x13, x24
0013e888:  cset     w10, lo
0013e88c:  cmp      x1, x11
0013e890:  ccmp     x14, x15, #2, lo
0013e894:  add      x14, x9, #1
0013e898:  cset     w11, lo
0013e89c:  cmp      x1, x16
0013e8a0:  add      x16, x13, #1
0013e8a4:  ccmp     x14, x15, #2, lo
0013e8a8:  cset     w14, lo
0013e8ac:  cmp      x16, x15
0013e8b0:  ccmp     x1, x17, #2, lo
0013e8b4:  b.lo     #0x13eff0
0013e8b8:  tbnz     w10, #0, #0x13efe8
0013e8bc:  tbnz     w11, #0, #0x13efe0
0013e8c0:  tbnz     w14, #0, #0x13efd8
0013e8c4:  ldr      x10, [sp, #0x28]
0013e8c8:  add      x16, x8, #3
0013e8cc:  add      x9, x9, #3
0013e8d0:  add      x12, x12, #3
0013e8d4:  stp      x7, x2, [sp, #0x70]
0013e8d8:  add      x11, x1, x10
0013e8dc:  str      x11, [sp, #0x68]
0013e8e0:  ldr      x11, [sp, #0x20]
0013e8e4:  add      x5, x5, x11
0013e8e8:  add      x4, x4, x11
0013e8ec:  add      x3, x3, x11
0013e8f0:  add      x6, x6, x11
0013e8f4:  add      x11, x13, #3
0013e8f8:  stur     x10, [x29, #-0xb0]
0013e8fc:  sub      x8, x11, #2
0013e900:  mov      v20.16b, v8.16b
0013e904:  ld2      {v13.16b, v14.16b}, [x8]
0013e908:  sub      x8, x16, #2
0013e90c:  add      x10, sp, #0xd0
0013e910:  ld2      {v29.16b, v30.16b}, [x11], #32
0013e914:  sub      x13, x29, #0x90
0013e918:  str      x11, [sp, #0x120]
0013e91c:  ld2      {v17.16b, v18.16b}, [x8]
0013e920:  sub      x8, x12, #2
0013e924:  ld2      {v21.16b, v22.16b}, [x16], #32
0013e928:  ldur     q3, [x29, #-0x60]
0013e92c:  ldr      q19, [sp, #0x80]
0013e930:  ld2      {v25.16b, v26.16b}, [x8]
0013e934:  add      x8, sp, #0x150
0013e938:  tbl      v0.16b, {v14.16b}, v24.16b
0013e93c:  tbl      v1.16b, {v14.16b}, v31.16b
0013e940:  tbl      v5.16b, {v14.16b}, v19.16b
0013e944:  tbl      v6.16b, {v29.16b}, v24.16b
0013e948:  tbl      v16.16b, {v29.16b}, v31.16b
0013e94c:  tbl      v24.16b, {v29.16b}, v19.16b
0013e950:  tbl      v11.16b, {v18.16b}, v3.16b
0013e954:  tbl      v10.16b, {v18.16b}, v31.16b
0013e958:  tbl      v2.16b, {v14.16b}, v8.16b
0013e95c:  tbl      v23.16b, {v29.16b}, v8.16b
0013e960:  tbl      v8.16b, {v18.16b}, v19.16b
0013e964:  tbl      v9.16b, {v18.16b}, v20.16b
0013e968:  tbl      v29.16b, {v30.16b}, v20.16b
0013e96c:  ldur     q3, [x29, #-0x60]
0013e970:  st1      {v17.2d, v18.2d}, [x8]
0013e974:  uaddl2   v15.2d, v6.4s, v0.4s
0013e978:  uaddl2   v31.2d, v16.4s, v1.4s
0013e97c:  uaddl    v0.2d, v6.2s, v0.2s
0013e980:  tbl      v12.16b, {v21.16b}, v3.16b
0013e984:  ld2      {v17.16b, v18.16b}, [x12], #32
0013e988:  sub      x8, x9, #2
0013e98c:  uaddl    v1.2d, v16.2s, v1.2s
0013e990:  tbl      v16.16b, {v21.16b}, v20.16b
0013e994:  ldp      q4, q3, [x29, #-0x70]
0013e998:  uaddl2   v7.2d, v23.4s, v2.4s
0013e99c:  ld2      {v27.16b, v28.16b}, [x8]
0013e9a0:  add      x8, sp, #0x190
0013e9a4:  uaddl    v2.2d, v23.2s, v2.2s
0013e9a8:  uaddw    v23.2d, v0.2d, v11.2s
0013e9ac:  st1      {v21.2d, v22.2d}, [x10]
0013e9b0:  mov      v22.16b, v26.16b
0013e9b4:  tbl      v6.16b, {v21.16b}, v4.16b
0013e9b8:  uaddl    v4.2d, v24.2s, v5.2s
0013e9bc:  uaddl2   v5.2d, v24.4s, v5.4s
0013e9c0:  uaddw2   v24.2d, v31.2d, v10.4s
0013e9c4:  uaddw2   v31.2d, v15.2d, v11.4s
0013e9c8:  tbl      v3.16b, {v26.16b}, v3.16b
0013e9cc:  tbl      v11.16b, {v26.16b}, v20.16b
0013e9d0:  tbl      v15.16b, {v26.16b}, v19.16b
0013e9d4:  st1      {v25.2d, v26.2d}, [x8]
0013e9d8:  uaddw    v10.2d, v1.2d, v10.2s
0013e9dc:  mov      v21.16b, v25.16b
0013e9e0:  tbl      v1.16b, {v17.16b}, v19.16b
0013e9e4:  uaddw    v26.2d, v4.2d, v8.2s
0013e9e8:  sub      x8, x29, #0x90
0013e9ec:  tbl      v0.16b, {v17.16b}, v20.16b
0013e9f0:  uaddw2   v4.2d, v31.2d, v12.4s
0013e9f4:  uaddw2   v7.2d, v7.2d, v9.4s
0013e9f8:  st1      {v17.2d, v18.2d}, [x8]
0013e9fc:  uaddw    v2.2d, v2.2d, v9.2s
0013ea00:  uaddw2   v5.2d, v5.2d, v8.4s
0013ea04:  add      x8, sp, #0x130
0013ea08:  uaddl2   v9.2d, v1.4s, v15.4s
0013ea0c:  uaddl    v1.2d, v1.2s, v15.2s
0013ea10:  tbl      v15.16b, {v28.16b}, v20.16b
0013ea14:  stur     q4, [x29, #-0xc0]
0013ea18:  uaddw2   v4.2d, v24.2d, v6.4s
0013ea1c:  uaddw2   v25.2d, v7.2d, v16.4s
0013ea20:  uaddl    v7.2d, v0.2s, v11.2s
0013ea24:  uaddl2   v0.2d, v0.4s, v11.4s
0013ea28:  uaddw    v24.2d, v2.2d, v16.2s
0013ea2c:  stur     q4, [x29, #-0xd0]
0013ea30:  uaddw    v4.2d, v23.2d, v12.2s
0013ea34:  uaddw2   v11.2d, v0.2d, v15.4s
0013ea38:  uaddw    v7.2d, v7.2d, v15.2s
0013ea3c:  mov      x10, v24.d[1]
0013ea40:  stur     q4, [x29, #-0xe0]
0013ea44:  uaddw    v4.2d, v10.2d, v6.2s
0013ea48:  tbl      v10.16b, {v28.16b}, v19.16b
0013ea4c:  stur     q4, [x29, #-0xf0]
0013ea50:  ldur     q4, [x29, #-0x70]
0013ea54:  uaddw    v12.2d, v1.2d, v10.2s
0013ea58:  uaddw2   v9.2d, v9.2d, v10.4s
0013ea5c:  tbl      v6.16b, {v22.16b}, v4.16b
0013ea60:  ldur     q4, [x29, #-0x70]
0013ea64:  tbl      v21.16b, {v30.16b}, v19.16b
0013ea68:  tbl      v31.16b, {v17.16b}, v4.16b
0013ea6c:  ldur     q4, [x29, #-0x60]
0013ea70:  tbl      v8.16b, {v17.16b}, v4.16b
0013ea74:  ld2      {v17.16b, v18.16b}, [x9], #32
0013ea78:  ldur     q4, [x29, #-0x70]
0013ea7c:  ldur     q1, [x29, #-0x60]
0013ea80:  st1      {v27.2d, v28.2d}, [x8]
0013ea84:  uaddl2   v2.2d, v31.4s, v6.4s
0013ea88:  uaddl    v6.2d, v31.2s, v6.2s
0013ea8c:  add      x8, sp, #0x170
0013ea90:  tbl      v31.16b, {v28.16b}, v4.16b
0013ea94:  ldur     q0, [x29, #-0x70]
0013ea98:  stur     x9, [x29, #-0xa8]
0013ea9c:  uaddl2   v16.2d, v8.4s, v3.4s
0013eaa0:  uaddl    v3.2d, v8.2s, v3.2s
0013eaa4:  tbl      v8.16b, {v28.16b}, v1.16b
0013eaa8:  ldur     q28, [x29, #-0xa0]
0013eaac:  add      x9, sp, #0x150
0013eab0:  st1      {v17.2d, v18.2d}, [x8]
0013eab4:  add      x8, sp, #0xd0
0013eab8:  tbl      v10.16b, {v17.16b}, v19.16b
0013eabc:  ld1      {v22.2d, v23.2d}, [x8]
0013eac0:  uaddw2   v4.2d, v2.2d, v31.4s
0013eac4:  tbl      v2.16b, {v17.16b}, v0.16b
0013eac8:  ldur     q0, [x29, #-0x60]
0013eacc:  uaddw    v6.2d, v6.2d, v31.2s
0013ead0:  uaddw    v3.2d, v3.2d, v8.2s
0013ead4:  uaddw2   v8.2d, v16.2d, v8.4s
0013ead8:  tbl      v15.16b, {v17.16b}, v20.16b
0013eadc:  mov      x17, v28.d[1]
0013eae0:  tbl      v1.16b, {v22.16b}, v19.16b
0013eae4:  tbl      v31.16b, {v17.16b}, v0.16b
0013eae8:  uaddw2   v9.2d, v9.2d, v10.4s
0013eaec:  uaddw    v10.2d, v12.2d, v10.2s
0013eaf0:  tbl      v0.16b, {v13.16b}, v19.16b
0013eaf4:  uaddw2   v12.2d, v5.2d, v1.4s
0013eaf8:  uaddw    v16.2d, v26.2d, v1.2s
0013eafc:  uaddw2   v1.2d, v4.2d, v2.4s
0013eb00:  ldur     q4, [x29, #-0x70]
0013eb04:  uaddw2   v17.2d, v8.2d, v31.4s
0013eb08:  uaddw    v3.2d, v3.2d, v31.2s
0013eb0c:  ldur     q31, [x29, #-0x60]
0013eb10:  uaddw    v5.2d, v7.2d, v15.2s
0013eb14:  tbl      v7.16b, {v13.16b}, v20.16b
0013eb18:  tbl      v4.16b, {v13.16b}, v4.16b
0013eb1c:  uaddw2   v27.2d, v9.2d, v0.4s
0013eb20:  uaddw2   v8.2d, v11.2d, v15.4s
0013eb24:  tbl      v13.16b, {v13.16b}, v31.16b
0013eb28:  mov      x8, v16.d[1]
0013eb2c:  uaddw    v31.2d, v6.2d, v2.2s
0013eb30:  uaddw    v6.2d, v10.2d, v0.2s
0013eb34:  mov      v14.16b, v23.16b
0013eb38:  ldr      q11, [sp, #0xb0]
0013eb3c:  uaddw    v0.2d, v5.2d, v7.2s
0013eb40:  uaddw2   v7.2d, v8.2d, v7.4s
0013eb44:  uaddw2   v1.2d, v1.2d, v4.4s
0013eb48:  uaddw2   v2.2d, v17.2d, v13.4s
0013eb4c:  ldp      q17, q5, [x29, #-0x70]
0013eb50:  mul      x2, x8, x17
0013eb54:  fmov     x8, d28
0013eb58:  uaddw    v3.2d, v3.2d, v13.2s
0013eb5c:  uaddw    v6.2d, v6.2d, v21.2s
0013eb60:  uaddw    v0.2d, v0.2d, v29.2s
0013eb64:  mov      v13.16b, v22.16b
0013eb68:  tbl      v9.16b, {v30.16b}, v17.16b
0013eb6c:  ld1      {v17.2d, v18.2d}, [x9]
0013eb70:  fmov     x9, d16
0013eb74:  tbl      v5.16b, {v30.16b}, v5.16b
0013eb78:  uaddw2   v7.2d, v7.2d, v29.4s
0013eb7c:  uaddw2   v29.2d, v27.2d, v21.4s
0013eb80:  uaddw    v4.2d, v31.2d, v4.2s
0013eb84:  tbl      v16.16b, {v14.16b}, v19.16b
0013eb88:  mul      x20, x9, x8
0013eb8c:  tbl      v30.16b, {v17.16b}, v19.16b
0013eb90:  uaddw2   v26.2d, v1.2d, v9.4s
0013eb94:  mul      x9, x10, x17
0013eb98:  fmov     x10, d24
0013eb9c:  uaddw2   v31.2d, v2.2d, v5.4s
0013eba0:  ldp      q1, q2, [x29, #-0x70]
0013eba4:  uaddw    v4.2d, v4.2d, v9.2s
0013eba8:  uaddw    v3.2d, v3.2d, v5.2s
0013ebac:  tbl      v5.16b, {v17.16b}, v20.16b
0013ebb0:  uaddw    v8.2d, v6.2d, v30.2s
0013ebb4:  mul      x10, x10, x8
0013ebb8:  uaddw2   v29.2d, v29.2d, v30.4s
0013ebbc:  tbl      v9.16b, {v17.16b}, v1.16b
0013ebc0:  mov      v1.16b, v25.16b
0013ebc4:  tbl      v27.16b, {v17.16b}, v2.16b
0013ebc8:  str      x9, [sp, #0x128]
0013ebcc:  mov      x9, v12.d[1]
0013ebd0:  mov      v18.16b, v14.16b
0013ebd4:  mov      v17.16b, v13.16b
0013ebd8:  uaddw    v28.2d, v0.2d, v5.2s
0013ebdc:  uaddw    v8.2d, v8.2d, v16.2s
0013ebe0:  uaddw2   v7.2d, v7.2d, v5.4s
0013ebe4:  uaddw2   v16.2d, v29.2d, v16.4s
0013ebe8:  str      x10, [sp, #0x150]
0013ebec:  add      x10, sp, #0x190
0013ebf0:  uaddw    v3.2d, v3.2d, v27.2s
0013ebf4:  ld1      {v21.2d, v22.2d}, [x10]
0013ebf8:  sub      x10, x29, #0x90
0013ebfc:  mul      x11, x9, x17
0013ec00:  mov      x9, v25.d[1]
0013ec04:  ld1      {v23.2d, v24.2d}, [x10]
0013ec08:  fmov     x10, d12
0013ec0c:  ldur     q25, [x29, #-0xf0]
0013ec10:  uaddw2   v31.2d, v31.2d, v27.4s
0013ec14:  ldur     q27, [x29, #-0x60]
0013ec18:  tbl      v30.16b, {v18.16b}, v20.16b
0013ec1c:  mov      v13.16b, v18.16b
0013ec20:  tbl      v2.16b, {v21.16b}, v19.16b
0013ec24:  mul      x10, x10, x8
0013ec28:  tbl      v10.16b, {v18.16b}, v27.16b
0013ec2c:  ldur     q18, [x29, #-0xe0]
0013ec30:  tbl      v6.16b, {v24.16b}, v19.16b
0013ec34:  mov      v12.16b, v17.16b
0013ec38:  add      v8.2d, v8.2d, v8.2d
0013ec3c:  mul      x9, x9, x17
0013ec40:  tbl      v27.16b, {v21.16b}, v20.16b
0013ec44:  uaddw    v4.2d, v4.2d, v9.2s
0013ec48:  uaddw    v17.2d, v28.2d, v30.2s
0013ec4c:  tbl      v28.16b, {v24.16b}, v20.16b
0013ec50:  uaddw2   v7.2d, v7.2d, v30.4s
0013ec54:  uaddw2   v9.2d, v26.2d, v9.4s
0013ec58:  add      v16.2d, v16.2d, v16.2d
0013ec5c:  stp      x10, x11, [sp, #0x110]
0013ec60:  add      x10, sp, #0x130
0013ec64:  uaddl    v5.2d, v6.2s, v2.2s
0013ec68:  ld1      {v14.2d, v15.2d}, [x10]
0013ec6c:  fmov     x10, d1
0013ec70:  ldur     q1, [x29, #-0x70]
0013ec74:  str      x9, [sp, #0x108]
0013ec78:  mov      x9, v25.d[1]
0013ec7c:  and      v8.16b, v8.16b, v11.16b
0013ec80:  tbl      v12.16b, {v13.16b}, v1.16b
0013ec84:  uaddw    v13.2d, v3.2d, v10.2s
0013ec88:  add      v3.2d, v17.2d, v17.2d
0013ec8c:  mul      x10, x10, x8
0013ec90:  tbl      v0.16b, {v14.16b}, v19.16b
0013ec94:  ldur     q17, [x29, #-0xd0]
0013ec98:  uaddw2   v1.2d, v31.2d, v10.4s
0013ec9c:  uaddl    v31.2d, v28.2s, v27.2s
0013eca0:  tbl      v10.16b, {v14.16b}, v20.16b
0013eca4:  mul      x9, x9, x17
0013eca8:  uaddl2   v2.2d, v6.4s, v2.4s
0013ecac:  uaddl2   v26.2d, v28.4s, v27.4s
0013ecb0:  and      v3.16b, v3.16b, v11.16b
0013ecb4:  uaddw2   v9.2d, v9.2d, v12.4s
0013ecb8:  uaddw    v4.2d, v4.2d, v12.2s
0013ecbc:  uaddw    v5.2d, v5.2d, v0.2s
0013ecc0:  add      v7.2d, v7.2d, v7.2d
0013ecc4:  and      v16.16b, v16.16b, v11.16b
0013ecc8:  uaddw    v29.2d, v31.2d, v10.2s
0013eccc:  add      v1.2d, v1.2d, v1.2d
0013ecd0:  uaddw2   v0.2d, v2.2d, v0.4s
0013ecd4:  ldur     q2, [x29, #-0x70]
0013ecd8:  stp      x10, x9, [sp, #0xf8]
0013ecdc:  fmov     x10, d25
0013ece0:  mov      x9, v18.d[1]
0013ece4:  add      v8.2d, v5.2d, v8.2d
0013ece8:  tbl      v2.16b, {v14.16b}, v2.16b
0013ecec:  add      v4.2d, v4.2d, v4.2d
0013ecf0:  add      v3.2d, v29.2d, v3.2d
0013ecf4:  ldr      q29, [sp, #0xc0]
0013ecf8:  and      v7.16b, v7.16b, v11.16b
0013ecfc:  mul      x10, x10, x8
0013ed00:  add      v0.2d, v0.2d, v16.2d
0013ed04:  and      v1.16b, v1.16b, v11.16b
0013ed08:  fmov     x28, d29
0013ed0c:  fmov     x24, d29
0013ed10:  mul      x9, x9, x17
0013ed14:  and      v4.16b, v4.16b, v11.16b
0013ed18:  stur     x10, [x29, #-0xf0]
0013ed1c:  add      x10, sp, #0x170
0013ed20:  ld1      {v23.2d, v24.2d}, [x10]
0013ed24:  fmov     x10, d18
0013ed28:  str      x9, [sp, #0xd0]
0013ed2c:  mov      x9, v17.d[1]
0013ed30:  tbl      v5.16b, {v24.16b}, v19.16b
0013ed34:  mul      x19, x10, x8
0013ed38:  fmov     x10, d17
0013ed3c:  ldur     q17, [x29, #-0xc0]
0013ed40:  tbl      v6.16b, {v24.16b}, v20.16b
0013ed44:  mul      x9, x9, x17
0013ed48:  fmov     x11, d17
0013ed4c:  uaddw    v30.2d, v8.2d, v5.2s
0013ed50:  ldp      q19, q8, [x29, #-0x70]
0013ed54:  mul      x21, x10, x8
0013ed58:  uaddw    v3.2d, v3.2d, v6.2s
0013ed5c:  uaddw2   v0.2d, v0.2d, v5.4s
0013ed60:  stur     x9, [x29, #-0xd0]
0013ed64:  mov      x9, v17.d[1]
0013ed68:  tbl      v31.16b, {v21.16b}, v19.16b
0013ed6c:  tbl      v17.16b, {v21.16b}, v8.16b
0013ed70:  ldp      q18, q8, [x29, #-0x70]
0013ed74:  ld1      {v21.2d, v22.2d}, [x13]
0013ed78:  ldur     q19, [x29, #-0xa0]
0013ed7c:  fmov     x0, d30
0013ed80:  mov      x23, v0.d[1]
0013ed84:  mov      x10, v30.d[1]
0013ed88:  fmov     x8, d19
0013ed8c:  add      v19.2d, v13.2d, v13.2d
0013ed90:  mul      x15, x9, x17
0013ed94:  tbl      v18.16b, {v22.16b}, v18.16b
0013ed98:  tbl      v25.16b, {v22.16b}, v8.16b
0013ed9c:  mov      v8.16b, v20.16b
0013eda0:  uaddw2   v22.2d, v26.2d, v10.4s
0013eda4:  add      v20.2d, v9.2d, v9.2d
0013eda8:  mul      x25, x0, x28
0013edac:  fmov     x0, d3
0013edb0:  mov      x17, v29.d[1]
0013edb4:  ldr      q26, [sp, #0xa0]
0013edb8:  mul      x13, x11, x8
0013edbc:  mov      x11, v3.d[1]
0013edc0:  and      v19.16b, v19.16b, v11.16b
0013edc4:  uaddl    v27.2d, v18.2s, v31.2s
0013edc8:  uaddl2   v18.2d, v18.4s, v31.4s
0013edcc:  uaddl    v28.2d, v25.2s, v17.2s
0013edd0:  uaddl2   v17.2d, v25.4s, v17.4s
0013edd4:  ldp      q31, q25, [x29, #-0x70]
0013edd8:  add      v7.2d, v22.2d, v7.2d
0013eddc:  mov      v22.16b, v23.16b
0013ede0:  mov      v23.16b, v24.16b
0013ede4:  and      v3.16b, v20.16b, v11.16b
0013ede8:  mul      x26, x0, x28
0013edec:  fmov     x0, d0
0013edf0:  tbl      v21.16b, {v14.16b}, v25.16b
0013edf4:  uaddw    v16.2d, v27.2d, v2.2s
0013edf8:  uaddw2   v2.2d, v18.2d, v2.4s
0013edfc:  fmov     d0, x20
0013ee00:  ldr      x20, [sp, #0x128]
0013ee04:  mul      x14, x10, x17
0013ee08:  uaddw2   v6.2d, v7.2d, v6.4s
0013ee0c:  fmov     d7, x13
0013ee10:  ldur     q24, [x29, #-0x60]
0013ee14:  mul      x7, x0, x28
0013ee18:  uaddw    v18.2d, v28.2d, v21.2s
0013ee1c:  uaddw2   v5.2d, v17.2d, v21.4s
0013ee20:  ldur     q17, [x29, #-0x60]
0013ee24:  add      v4.2d, v16.2d, v4.2d
0013ee28:  tbl      v16.16b, {v23.16b}, v31.16b
0013ee2c:  add      v2.2d, v2.2d, v3.2d
0013ee30:  tbl      v17.16b, {v23.16b}, v17.16b
0013ee34:  fmov     x0, d6
0013ee38:  mov      x8, v6.d[1]
0013ee3c:  mov      v0.d[1], x2
0013ee40:  fmov     d6, x21
0013ee44:  mul      x23, x23, x17
0013ee48:  add      v18.2d, v18.2d, v19.2d
0013ee4c:  add      v1.2d, v5.2d, v1.2d
0013ee50:  fmov     d5, x19
0013ee54:  uaddw    v3.2d, v4.2d, v16.2s
0013ee58:  uaddw2   v2.2d, v2.2d, v16.4s
0013ee5c:  mul      x27, x0, x28
0013ee60:  ldr      x19, [sp, #0x100]
0013ee64:  mov      v7.d[1], x15
0013ee68:  fmov     d16, x25
0013ee6c:  mul      x8, x8, x17
0013ee70:  add      v0.2d, v0.2d, v26.2d
0013ee74:  uaddw    v4.2d, v18.2d, v17.2s
0013ee78:  uaddw2   v1.2d, v1.2d, v17.4s
0013ee7c:  fmov     d18, x7
0013ee80:  fmov     x0, d3
0013ee84:  fmov     x22, d2
0013ee88:  mov      x10, v2.d[1]
0013ee8c:  ldr      d2, [sp, #0x110]
0013ee90:  fmov     d19, x27
0013ee94:  mul      x11, x11, x17
0013ee98:  fmov     d17, x26
0013ee9c:  add      v7.2d, v7.2d, v26.2d
0013eea0:  mov      v18.d[1], x23
0013eea4:  fmov     x30, d4
0013eea8:  mul      x0, x0, x28
0013eeac:  mov      x2, v1.d[1]
0013eeb0:  mov      x9, v4.d[1]
0013eeb4:  ldur     d4, [x29, #-0xf0]
0013eeb8:  mov      v19.d[1], x8
0013eebc:  mul      x22, x22, x28
0013eec0:  mov      v16.d[1], x14
0013eec4:  mov      v4.d[1], x19
0013eec8:  ldr      x19, [sp, #0xd0]
0013eecc:  mov      v17.d[1], x11
0013eed0:  mul      x30, x30, x28
0013eed4:  fmov     x28, d1
0013eed8:  ldr      d1, [sp, #0x150]
0013eedc:  mov      v5.d[1], x19
0013eee0:  fmov     d20, x0
0013eee4:  ldr      x11, [sp, #0x120]
0013eee8:  mov      v1.d[1], x20
0013eeec:  ldr      x20, [sp, #0x118]
0013eef0:  mul      x13, x2, x17
0013eef4:  ldur     x2, [x29, #-0xd0]
0013eef8:  fmov     d22, x22
0013eefc:  add      v4.2d, v4.2d, v26.2d
0013ef00:  mul      x24, x28, x24
0013ef04:  mov      x28, v3.d[1]
0013ef08:  ldr      d3, [sp, #0xf8]
0013ef0c:  mov      v2.d[1], x20
0013ef10:  ldr      x20, [sp, #0x108]
0013ef14:  mov      v6.d[1], x2
0013ef18:  mul      x10, x10, x17
0013ef1c:  fmov     d21, x30
0013ef20:  add      v1.2d, v1.2d, v26.2d
0013ef24:  mov      v3.d[1], x20
0013ef28:  add      v5.2d, v5.2d, v26.2d
0013ef2c:  add      v0.2d, v0.2d, v16.2d
0013ef30:  mul      x9, x9, x17
0013ef34:  fmov     d23, x24
0013ef38:  add      v2.2d, v2.2d, v26.2d
0013ef3c:  add      v6.2d, v6.2d, v26.2d
0013ef40:  mul      x8, x28, x17
0013ef44:  add      v1.2d, v1.2d, v17.2d
0013ef48:  add      v3.2d, v3.2d, v26.2d
0013ef4c:  mov      v22.d[1], x10
0013ef50:  mov      v23.d[1], x13
0013ef54:  mov      v21.d[1], x9
0013ef58:  add      v2.2d, v2.2d, v18.2d
0013ef5c:  ldp      x10, x9, [x29, #-0xb0]
0013ef60:  mov      v20.d[1], x8
0013ef64:  add      v3.2d, v3.2d, v19.2d
0013ef68:  add      v6.2d, v6.2d, v22.2d
0013ef6c:  add      v7.2d, v7.2d, v23.2d
0013ef70:  add      v5.2d, v5.2d, v21.2d
0013ef74:  subs     x10, x10, #0x10
0013ef78:  add      v4.2d, v4.2d, v20.2d
0013ef7c:  ushr     v23.2d, v3.2d, #0x10
0013ef80:  ushr     v19.2d, v7.2d, #0x10
0013ef84:  ushr     v21.2d, v2.2d, #0x10
0013ef88:  ldr      q2, [sp, #0x90]
0013ef8c:  ushr     v17.2d, v6.2d, #0x10
0013ef90:  ushr     v22.2d, v1.2d, #0x10
0013ef94:  ushr     v18.2d, v5.2d, #0x10
0013ef98:  ushr     v20.2d, v0.2d, #0x10
0013ef9c:  ushr     v16.2d, v4.2d, #0x10
0013efa0:  tbl      v0.16b, {v20.16b, v21.16b, v22.16b, v23.16b}, v2.16b
0013efa4:  tbl      v1.16b, {v16.16b, v17.16b, v18.16b, v19.16b}, v2.16b
0013efa8:  mov      v0.d[1], v1.d[0]
0013efac:  str      q0, [x1], #0x10
0013efb0:  b.ne     #0x13e8f8
0013efb4:  ldp      x25, x1, [sp, #0x60]
0013efb8:  ldr      w9, [sp, #0xc]
0013efbc:  ldp      x27, x26, [sp, #0x50]
0013efc0:  ldr      w21, [sp, #0x3c]
0013efc4:  ldr      x22, [sp, #0x30]
0013efc8:  ldp      x7, x2, [sp, #0x70]
0013efcc:  ldp      x20, x19, [sp, #0x40]
0013efd0:  ldp      x24, x23, [sp, #0x10]
0013efd4:  b        #0x13eff4
0013efd8:  mov      w9, w21
0013efdc:  b        #0x13eff4
0013efe0:  mov      w9, w21
0013efe4:  b        #0x13eff4
0013efe8:  mov      w9, w21
0013efec:  b        #0x13eff4
0013eff0:  mov      w9, w21
0013eff4:  ldrb     w11, [x4]
0013eff8:  ldrb     w14, [x4, #1]
0013effc:  mov      x10, x6
0013f000:  ldrb     w15, [x5]
0013f004:  ldrb     w16, [x5, #1]
0013f008:  mov      x13, x4
0013f00c:  ldurb    w17, [x6, #-1]
0013f010:  ldrb     w0, [x6, #2]!
0013f014:  add      w11, w14, w11
0013f018:  add      w14, w15, w16
0013f01c:  ldurb    w15, [x3, #-1]
0013f020:  add      w11, w11, w14
0013f024:  add      w14, w17, w0
0013f028:  ldurb    w16, [x4, #-1]
0013f02c:  add      w14, w14, w15
0013f030:  ldrb     w17, [x4, #2]!
0013f034:  mov      x8, x3
0013f038:  ldrb     w15, [x3, #2]!
0013f03c:  add      w11, w11, w14
0013f040:  ldurb    w14, [x5, #-1]
0013f044:  add      w16, w17, w16
0013f048:  add      w11, w11, w15
0013f04c:  mov      x12, x5
0013f050:  ldrb     w0, [x10]
0013f054:  add      w14, w16, w14
0013f058:  ldrb     w15, [x10, #1]
0013f05c:  ldrb     w17, [x8]
0013f060:  ldrb     w16, [x8, #1]
0013f064:  add      w11, w14, w11, lsl #1
0013f068:  subs     w9, w9, #1
0013f06c:  ldrb     w14, [x5, #2]!
0013f070:  add      w15, w15, w0
0013f074:  add      w16, w17, w16
0013f078:  add      w11, w11, w14
0013f07c:  add      w14, w15, w16
0013f080:  mul      w11, w11, w20
0013f084:  madd     w11, w14, w19, w11
0013f088:  add      w11, w11, #8, lsl #12
0013f08c:  lsr      w11, w11, #0x10
0013f090:  strb     w11, [x1], #1
0013f094:  b.ne     #0x13eff4
0013f098:  ldrb     w9, [x10, #3]
0013f09c:  ldrb     w11, [x8, #3]
0013f0a0:  add      x2, x2, #1
0013f0a4:  ldrb     w14, [x13, #2]
0013f0a8:  ldrb     w15, [x13, #3]
0013f0ac:  ldrb     w16, [x12, #2]
0013f0b0:  ldrb     w17, [x12, #3]
0013f0b4:  add      w9, w11, w9
0013f0b8:  ldrb     w13, [x13, #1]
0013f0bc:  add      w11, w14, w15
0013f0c0:  ldrb     w14, [x10, #1]
0013f0c4:  ldrb     w12, [x12, #1]
0013f0c8:  add      w16, w16, w17
0013f0cc:  add      w11, w9, w11
0013f0d0:  ldrb     w10, [x10, #2]
0013f0d4:  add      w14, w16, w14
0013f0d8:  ldrb     w16, [x8, #1]
0013f0dc:  add      w12, w13, w12
0013f0e0:  add      w11, w11, w14
0013f0e4:  add      w14, w17, w15
0013f0e8:  ldrb     w8, [x8, #2]
0013f0ec:  add      w11, w11, w16
0013f0f0:  add      w12, w14, w12
0013f0f4:  add      w11, w12, w11, lsl #1
0013f0f8:  add      w8, w10, w8
0013f0fc:  add      w8, w9, w8
0013f100:  mul      w9, w11, w20
0013f104:  madd     w8, w8, w19, w9
0013f108:  add      w8, w8, #8, lsl #12
0013f10c:  lsr      w8, w8, #0x10
0013f110:  strb     w8, [x1]
0013f114:  ldrsw    x8, [x26, #0xc]
0013f118:  cmp      x2, x8
0013f11c:  b.lt     #0x13e7a8
0013f120:  add      sp, sp, #0x260
0013f124:  ldp      x20, x19, [sp, #0x90]
0013f128:  ldp      x22, x21, [sp, #0x80]
0013f12c:  ldp      x24, x23, [sp, #0x70]
0013f130:  ldp      x26, x25, [sp, #0x60]
0013f134:  ldp      x28, x27, [sp, #0x50]
0013f138:  ldp      x29, x30, [sp, #0x40]
0013f13c:  ldp      d9, d8, [sp, #0x30]
0013f140:  ldp      d11, d10, [sp, #0x20]
0013f144:  ldp      d13, d12, [sp, #0x10]
0013f148:  ldp      d15, d14, [sp], #0xa0
0013f14c:  ret      

; ===== 001462cc  FUN_001462cc  (872 bytes) =====
001462cc:  cmp      w4, #1
001462d0:  b.lt     #0x146630
001462d4:  str      d8, [sp, #-0x10]!
001462d8:  str      x19, [sp, #8]
001462dc:  adrp     x12, #0x113000
001462e0:  movi     v1.4s, #0xf8, lsl #8
001462e4:  adrp     x13, #0x113000
001462e8:  ldr      q0, [x12, #0x8e0]
001462ec:  mov      w12, #0x7e0
001462f0:  adrp     x14, #0x113000
001462f4:  ldp      x9, x10, [x1]
001462f8:  adrp     x15, #0x113000
001462fc:  dup      v2.4s, w12
00146300:  ldr      w8, [x0, #0x88]
00146304:  ldr      x11, [x1, #0x10]
00146308:  ldr      q3, [x13, #0xb70]
0014630c:  ldr      q4, [x14, #0xc90]
00146310:  ldr      q5, [x15, #0xab0]
00146314:  b        #0x146328
00146318:  cmp      w4, #1
0014631c:  sub      w4, w4, #1
00146320:  add      w2, w2, #1
00146324:  b.le     #0x146628
00146328:  ubfiz    x13, x2, #3, #0x20
0014632c:  ldr      x12, [x3], #8
00146330:  ldr      x14, [x9, x13]
00146334:  ldr      x15, [x10, x13]
00146338:  ldr      x16, [x11, x13]
0014633c:  tst      x12, #3
00146340:  b.eq     #0x14636c
00146344:  ldrb     w13, [x14], #1
00146348:  sub      w8, w8, #1
0014634c:  ldrb     w17, [x15], #1
00146350:  lsl      w13, w13, #8
00146354:  ldrb     w0, [x16], #1
00146358:  lsr      w17, w17, #2
0014635c:  and      w13, w13, #0xf800
00146360:  bfi      w13, w17, #5, #6
00146364:  orr      w13, w13, w0, lsr #3
00146368:  strh     w13, [x12], #2
0014636c:  cmp      w8, #2
00146370:  b.hs     #0x14637c
00146374:  mov      x13, x12
00146378:  b        #0x14640c
0014637c:  lsr      w0, w8, #1
00146380:  sub      w13, w0, #1
00146384:  cmp      w13, #0xf
00146388:  b.hs     #0x146444
0014638c:  mov      w6, wzr
00146390:  mov      x17, x16
00146394:  mov      x1, x15
00146398:  mov      x5, x14
0014639c:  mov      x13, x12
001463a0:  sub      w12, w0, w6
001463a4:  ldrb     w14, [x5]
001463a8:  ldrb     w16, [x1, #1]
001463ac:  subs     w12, w12, #1
001463b0:  ldrb     w15, [x1]
001463b4:  ldrb     w0, [x5, #1]
001463b8:  lsl      w14, w14, #8
001463bc:  lsl      w16, w16, #3
001463c0:  lsr      w15, w15, #2
001463c4:  lsr      w0, w0, #3
001463c8:  and      w14, w14, #0xf800
001463cc:  and      w16, w16, #0x7e0
001463d0:  bfi      w14, w15, #5, #6
001463d4:  ldrb     w15, [x17]
001463d8:  bfi      w16, w0, #0xb, #5
001463dc:  ldrb     w0, [x17, #1]
001463e0:  orr      w14, w14, w15, lsr #3
001463e4:  orr      w15, w16, w0, lsr #3
001463e8:  add      x16, x17, #2
001463ec:  mov      x17, x16
001463f0:  orr      w0, w14, w15, lsl #16
001463f4:  add      x14, x5, #2
001463f8:  add      x15, x1, #2
001463fc:  mov      x1, x15
00146400:  mov      x5, x14
00146404:  str      w0, [x13], #4
00146408:  b.ne     #0x1463a4
0014640c:  mov      x5, x14
00146410:  mov      x1, x15
00146414:  mov      x17, x16
00146418:  tbz      w8, #0, #0x146318
0014641c:  ldrb     w12, [x5]
00146420:  ldrb     w14, [x1]
00146424:  ldrb     w15, [x17]
00146428:  lsl      w12, w12, #8
0014642c:  lsr      w14, w14, #2
00146430:  and      w12, w12, #0xf800
00146434:  bfi      w12, w14, #5, #6
00146438:  orr      w12, w12, w15, lsr #3
0014643c:  strh     w12, [x13]
00146440:  b        #0x146318
00146444:  ubfiz    x1, x13, #1, #0x20
00146448:  add      x17, x12, w13, uxtw #2
0014644c:  add      x5, x15, x1
00146450:  add      x6, x17, #4
00146454:  add      x17, x16, x1
00146458:  add      x5, x5, #2
0014645c:  add      x1, x14, x1
00146460:  cmp      x12, x5
00146464:  add      x5, x17, #2
00146468:  ccmp     x15, x6, #2, lo
0014646c:  cset     w17, lo
00146470:  cmp      x12, x5
00146474:  add      x5, x1, #2
00146478:  ccmp     x16, x6, #2, lo
0014647c:  cset     w1, lo
00146480:  cmp      x14, x6
00146484:  mov      w6, wzr
00146488:  ccmp     x12, x5, #2, lo
0014648c:  b.lo     #0x146390
00146490:  tbnz     w17, #0, #0x146390
00146494:  tbnz     w1, #0, #0x146390
00146498:  add      x7, x13, #1
0014649c:  and      x6, x7, #0x1fffffff0
001464a0:  lsl      x5, x6, #1
001464a4:  add      x13, x12, x6, lsl #2
001464a8:  mov      x19, x6
001464ac:  add      x17, x16, x5
001464b0:  add      x1, x15, x5
001464b4:  add      x5, x14, x5
001464b8:  ld2      {v18.16b, v19.16b}, [x14], #32
001464bc:  subs     x19, x19, #0x10
001464c0:  ld2      {v16.16b, v17.16b}, [x15], #32
001464c4:  ld2      {v6.16b, v7.16b}, [x16], #32
001464c8:  tbl      v21.16b, {v18.16b}, v5.16b
001464cc:  tbl      v20.16b, {v18.16b}, v0.16b
001464d0:  tbl      v24.16b, {v18.16b}, v3.16b
001464d4:  tbl      v23.16b, {v16.16b}, v5.16b
001464d8:  tbl      v22.16b, {v16.16b}, v0.16b
001464dc:  tbl      v25.16b, {v18.16b}, v4.16b
001464e0:  tbl      v26.16b, {v16.16b}, v3.16b
001464e4:  tbl      v18.16b, {v19.16b}, v0.16b
001464e8:  tbl      v31.16b, {v17.16b}, v0.16b
001464ec:  tbl      v27.16b, {v16.16b}, v4.16b
001464f0:  tbl      v28.16b, {v19.16b}, v5.16b
001464f4:  tbl      v29.16b, {v19.16b}, v4.16b
001464f8:  shl      v21.4s, v21.4s, #8
001464fc:  shl      v20.4s, v20.4s, #8
00146500:  tbl      v30.16b, {v19.16b}, v3.16b
00146504:  shl      v23.4s, v23.4s, #3
00146508:  shl      v22.4s, v22.4s, #3
0014650c:  tbl      v19.16b, {v17.16b}, v5.16b
00146510:  shl      v25.4s, v25.4s, #8
00146514:  shl      v24.4s, v24.4s, #8
00146518:  tbl      v8.16b, {v17.16b}, v4.16b
0014651c:  and      v21.16b, v21.16b, v1.16b
00146520:  tbl      v17.16b, {v17.16b}, v3.16b
00146524:  shl      v26.4s, v26.4s, #3
00146528:  and      v23.16b, v23.16b, v2.16b
0014652c:  and      v20.16b, v20.16b, v1.16b
00146530:  and      v22.16b, v22.16b, v2.16b
00146534:  shl      v18.4s, v18.4s, #8
00146538:  shl      v28.4s, v28.4s, #8
0014653c:  shl      v29.4s, v29.4s, #8
00146540:  orr      v16.16b, v23.16b, v21.16b
00146544:  and      v23.16b, v24.16b, v1.16b
00146548:  and      v24.16b, v25.16b, v1.16b
0014654c:  and      v25.16b, v26.16b, v2.16b
00146550:  shl      v26.4s, v31.4s, #3
00146554:  orr      v20.16b, v22.16b, v20.16b
00146558:  shl      v22.4s, v27.4s, #3
0014655c:  shl      v27.4s, v30.4s, #8
00146560:  shl      v17.4s, v17.4s, #3
00146564:  ushr     v21.16b, v6.16b, #3
00146568:  shl      v30.4s, v8.4s, #3
0014656c:  ushr     v6.16b, v7.16b, #3
00146570:  and      v7.16b, v18.16b, v1.16b
00146574:  shl      v18.4s, v19.4s, #3
00146578:  and      v19.16b, v26.16b, v2.16b
0014657c:  and      v27.16b, v27.16b, v1.16b
00146580:  and      v17.16b, v17.16b, v2.16b
00146584:  and      v26.16b, v28.16b, v1.16b
00146588:  and      v28.16b, v29.16b, v1.16b
0014658c:  and      v29.16b, v30.16b, v2.16b
00146590:  tbl      v30.16b, {v6.16b}, v0.16b
00146594:  and      v18.16b, v18.16b, v2.16b
00146598:  orr      v7.16b, v7.16b, v19.16b
0014659c:  tbl      v19.16b, {v6.16b}, v3.16b
001465a0:  orr      v17.16b, v27.16b, v17.16b
001465a4:  tbl      v27.16b, {v6.16b}, v4.16b
001465a8:  tbl      v6.16b, {v6.16b}, v5.16b
001465ac:  and      v22.16b, v22.16b, v2.16b
001465b0:  orr      v28.16b, v28.16b, v29.16b
001465b4:  tbl      v29.16b, {v21.16b}, v0.16b
001465b8:  orr      v18.16b, v26.16b, v18.16b
001465bc:  tbl      v26.16b, {v21.16b}, v3.16b
001465c0:  orr      v7.16b, v7.16b, v30.16b
001465c4:  orr      v17.16b, v17.16b, v19.16b
001465c8:  tbl      v19.16b, {v21.16b}, v4.16b
001465cc:  tbl      v21.16b, {v21.16b}, v5.16b
001465d0:  orr      v23.16b, v25.16b, v23.16b
001465d4:  orr      v22.16b, v22.16b, v24.16b
001465d8:  orr      v24.16b, v28.16b, v27.16b
001465dc:  orr      v6.16b, v18.16b, v6.16b
001465e0:  orr      v20.16b, v20.16b, v29.16b
001465e4:  shl      v7.4s, v7.4s, #0x10
001465e8:  shl      v17.4s, v17.4s, #0x10
001465ec:  orr      v18.16b, v23.16b, v26.16b
001465f0:  orr      v19.16b, v22.16b, v19.16b
001465f4:  shl      v22.4s, v24.4s, #0x10
001465f8:  orr      v16.16b, v16.16b, v21.16b
001465fc:  shl      v6.4s, v6.4s, #0x10
00146600:  orr      v7.16b, v20.16b, v7.16b
00146604:  orr      v17.16b, v18.16b, v17.16b
00146608:  orr      v18.16b, v19.16b, v22.16b
0014660c:  orr      v6.16b, v16.16b, v6.16b
00146610:  stp      q17, q7, [x12, #0x20]
00146614:  stp      q6, q18, [x12], #0x40
00146618:  b.ne     #0x1464b8
0014661c:  cmp      x7, x6
00146620:  b.ne     #0x1463a0
00146624:  b        #0x146418
00146628:  ldr      x19, [sp, #8]
0014662c:  ldr      d8, [sp], #0x10
00146630:  ret      

