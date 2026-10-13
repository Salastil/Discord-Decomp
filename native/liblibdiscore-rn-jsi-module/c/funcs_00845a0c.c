// ===== 00845a0c  subtle::black_box<u8> =====

/* WARNING: Unknown calling convention: __rustcall */
/* subtle::black_box<u8> */

undefined1 __rustcall subtle::black_box<u8>(undefined1 param_1)

{
  return param_1;
}


// ===== 00845a20  FUN_00845a20 =====

undefined8 FUN_00845a20(undefined8 param_1,uint *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *local_60;
  long *plStack_58;
  
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    plVar3 = *(long **)(param_2 + 4);
    uVar4 = *param_2;
    uVar2 = *(ulong *)(param_2 + 6);
    plVar5 = *(long **)(param_2 + 2);
    do {
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae69e8);
      }
      if (plVar5 == (long *)0x0) {
        for (; plVar5 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar5[0x70];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar8 = plVar5;
        if (*(short *)((long)plVar5 + 0x37a) == 0) goto LAB_00845af8;
      }
      else {
        plVar8 = plVar5;
        if (*(ushort *)((long)plVar5 + 0x37a) <= uVar2) {
LAB_00845af8:
          do {
            plVar5 = (long *)*plVar8;
            if (plVar5 == (long *)0x0) {
                    /* try { // try from 00845b5c to 00845b67 has its CatchHandler @ 00845b78 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68f0);
            }
            puVar1 = (ushort *)(plVar8 + 0x6f);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar8 = plVar5;
          } while (*(ushort *)((long)plVar5 + 0x37a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar9 = uVar2 + 1;
        plVar8 = plVar5;
      }
      else {
        plVar6 = plVar5 + uVar2 + 0x71;
        do {
          plVar8 = (long *)*plVar6;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar6 = plVar8 + 0x70;
        } while (plVar3 != (long *)0x0);
        uVar9 = 0;
      }
      lVar7 = lVar7 + -1;
      local_60 = plVar5 + uVar2 * 3 + 1;
      plStack_58 = plVar5 + uVar2 * 7 + 0x22;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (param_1,&local_60,&DAT_00ae66d0,&plStack_58,&DAT_00ae66f0);
      plVar3 = (long *)0x0;
      uVar4 = 1;
      uVar2 = uVar9;
      plVar5 = plVar8;
    } while (lVar7 != 0);
  }
  return param_1;
}


// ===== 00845b7c  FUN_00845b7c =====

void FUN_00845b7c(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong __n;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  size_t sVar5;
  short sVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong local_68;
  
  puVar16 = (undefined8 *)*param_2;
  uVar3 = *(ushort *)((long)puVar16 + 10);
  if (uVar3 < 0xb) {
    uVar20 = param_2[2];
    if (uVar20 + 1 <= (ulong)uVar3) {
      memmove((void *)((long)puVar16 + uVar20 + 0xd),(void *)((long)puVar16 + uVar20 + 0xc),
              uVar3 - uVar20);
    }
    uVar12 = param_2[1];
    *(undefined1 *)((long)puVar16 + uVar20 + 0xc) = param_3;
    *(ushort *)((long)puVar16 + 10) = uVar3 + 1;
    puVar18 = puVar16;
  }
  else {
    uVar20 = param_2[2];
    if (uVar20 < 5) {
      bVar7 = false;
      uVar12 = 4;
    }
    else if (uVar20 == 5) {
      bVar7 = false;
      uVar12 = 5;
    }
    else if (uVar20 == 6) {
      uVar20 = 0;
      bVar7 = true;
      uVar12 = 5;
    }
    else {
      uVar20 = uVar20 - 7;
      bVar7 = true;
      uVar12 = 6;
    }
    local_68 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *puVar8 = 0;
    uVar14 = (ulong)*(ushort *)((long)puVar16 + 10) + ~uVar12;
    *(short *)((long)puVar8 + 10) = (short)uVar14;
    if (0xb < uVar14) {
                    /* try { // try from 00846078 to 0084608f has its CatchHandler @ 008460fc */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar14,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae67e8);
    }
    uVar19 = *(undefined1 *)((long)puVar16 + uVar12 + 0xc);
    memcpy((void *)((long)puVar8 + 0xc),(void *)((long)puVar16 + uVar12 + 0xd),uVar14);
    *(short *)((long)puVar16 + 10) = (short)uVar12;
    puVar18 = puVar8;
    if (!bVar7) {
      puVar18 = puVar16;
    }
    uVar12 = 0;
    if (!bVar7) {
      uVar12 = local_68;
    }
    uVar3 = *(ushort *)((long)puVar18 + 10);
    sVar5 = uVar3 - uVar20;
    if (uVar20 <= uVar3 && sVar5 != 0) {
      memmove((void *)((long)puVar18 + uVar20 + 0xd),(void *)((long)puVar18 + uVar20 + 0xc),sVar5);
    }
    *(undefined1 *)((long)puVar18 + uVar20 + 0xc) = param_3;
    *(ushort *)((long)puVar18 + 10) = uVar3 + 1;
    if ((undefined8 *)*puVar16 == (undefined8 *)0x0) {
      local_68 = 0;
    }
    else {
      bVar7 = local_68 == 0;
      puVar13 = (undefined8 *)*puVar16;
      puVar15 = puVar8;
      uVar2 = uVar19;
      do {
        puVar9 = puVar13;
        if (!bVar7) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002f9e8e,0x35,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6728);
        }
        uVar3 = *(ushort *)((long)puVar9 + 10);
        uVar14 = (ulong)uVar3;
        uVar4 = *(ushort *)(puVar16 + 1);
        uVar21 = (ulong)uVar4;
        if (uVar3 < 0xb) {
          if (uVar4 < uVar3) {
            memmove((void *)((long)puVar9 + uVar21 + 0xd),(void *)((long)puVar9 + uVar21 + 0xc),
                    uVar14 - uVar21);
            memmove(puVar9 + uVar21 + 5,puVar9 + uVar21 + 4,(uVar14 - uVar21) * 8);
          }
          *(undefined1 *)((long)puVar9 + uVar21 + 0xc) = uVar2;
          *(ushort *)((long)puVar9 + 10) = uVar3 + 1;
          puVar9[uVar21 + 4] = puVar15;
          if (uVar21 + 1 < uVar14 + 2) {
            lVar11 = uVar21 + 4;
            do {
              sVar6 = (short)lVar11;
              puVar16 = (undefined8 *)puVar9[lVar11];
              lVar11 = lVar11 + 1;
              *puVar16 = puVar9;
              *(short *)(puVar16 + 1) = sVar6 + -3;
            } while (~uVar14 + lVar11 != 4);
          }
          goto LAB_00845f40;
        }
        if (uVar4 < 5) {
          bVar7 = false;
          uVar17 = 4;
        }
        else if (uVar4 == 5) {
          bVar7 = false;
          uVar17 = uVar21;
        }
        else if (uVar4 == 6) {
          uVar21 = 0;
          bVar7 = true;
          uVar17 = 5;
        }
        else {
          uVar21 = uVar21 - 7;
          bVar7 = true;
          uVar17 = 6;
        }
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar8 = (undefined8 *)FUN_004b25a4(0x78,8);
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x78);
        }
        *puVar8 = 0;
        *(undefined2 *)((long)puVar8 + 10) = 0;
        __n = (ulong)*(ushort *)((long)puVar9 + 10) + ~uVar17;
        *(short *)((long)puVar8 + 10) = (short)__n;
        if (0xb < __n) {
                    /* try { // try from 00846000 to 00846017 has its CatchHandler @ 00846118 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,__n,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae67e8);
        }
        uVar19 = *(undefined1 *)((long)puVar9 + uVar17 + 0xc);
        memcpy((void *)((long)puVar8 + 0xc),(void *)((long)puVar9 + uVar17 + 0xd),__n);
        *(short *)((long)puVar9 + 10) = (short)uVar17;
        lVar11 = (ulong)*(ushort *)((long)puVar8 + 10) + 1;
        if (0xb < (ulong)*(ushort *)((long)puVar8 + 10)) {
                    /* try { // try from 0084601c to 00846033 has its CatchHandler @ 0084611c */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,lVar11,0xc,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6740);
        }
        if (uVar14 - uVar17 != lVar11) {
                    /* try { // try from 0084605c to 00846073 has its CatchHandler @ 0084611c */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002f9ec3,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6758);
        }
        local_68 = local_68 + 1;
        memcpy(puVar8 + 3,puVar9 + uVar17 + 4,lVar11 * 8);
        lVar10 = 0;
        do {
          lVar1 = lVar10 + 1;
          puVar16 = (undefined8 *)puVar8[lVar10 + 3];
          *(short *)(puVar16 + 1) = (short)lVar10;
          *puVar16 = puVar8;
          lVar10 = lVar1;
        } while (lVar11 != lVar1);
        puVar16 = puVar8;
        if (!bVar7) {
          puVar16 = puVar9;
        }
        uVar3 = *(ushort *)((long)puVar16 + 10);
        uVar14 = (ulong)uVar3;
        sVar5 = uVar14 - uVar21;
        if (uVar21 <= uVar14 && sVar5 != 0) {
          memmove((void *)((long)puVar16 + uVar21 + 0xd),(void *)((long)puVar16 + uVar21 + 0xc),
                  sVar5);
          memmove(puVar16 + uVar21 + 5,puVar16 + uVar21 + 4,sVar5 * 8);
        }
        *(undefined1 *)((long)puVar16 + uVar21 + 0xc) = uVar2;
        puVar16[uVar21 + 4] = puVar15;
        *(ushort *)((long)puVar16 + 10) = uVar3 + 1;
        if (uVar21 + 1 < uVar14 + 2) {
          lVar11 = uVar21 + 4;
          do {
            sVar6 = (short)lVar11;
            puVar13 = (undefined8 *)puVar16[lVar11];
            lVar11 = lVar11 + 1;
            *puVar13 = puVar16;
            *(short *)(puVar13 + 1) = sVar6 + -3;
          } while (~uVar14 + lVar11 != 4);
        }
        bVar7 = true;
        puVar13 = (undefined8 *)*puVar9;
        puVar15 = puVar8;
        puVar16 = puVar9;
        uVar2 = uVar19;
      } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
    }
    param_4 = (undefined8 *)*param_4;
    puVar16 = (undefined8 *)*param_4;
    if (puVar16 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6770);
    }
    uVar14 = param_4[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar13 = (undefined8 *)FUN_004b25a4(0x78,8);
    if (puVar13 == (undefined8 *)0x0) {
                    /* try { // try from 008460ac to 008460b7 has its CatchHandler @ 008460f8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x78);
    }
    *puVar13 = 0;
    *(undefined2 *)((long)puVar13 + 10) = 0;
    puVar13[3] = puVar16;
    if (0xfffffffffffffffe < uVar14) {
                    /* try { // try from 008460bc to 008460c7 has its CatchHandler @ 008460e4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6710);
    }
    *puVar16 = puVar13;
    *(undefined2 *)(puVar16 + 1) = 0;
    *param_4 = puVar13;
    param_4[1] = uVar14 + 1;
    if (local_68 != uVar14) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: edge.height == self.height - 1",0x30,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00ae6818);
    }
    *(undefined1 *)((long)puVar13 + 0xc) = uVar19;
    *(undefined2 *)((long)puVar13 + 10) = 1;
    puVar13[4] = puVar8;
    *puVar8 = puVar13;
    *(undefined2 *)(puVar8 + 1) = 1;
  }
LAB_00845f40:
  *param_1 = puVar18;
  param_1[1] = uVar12;
  param_1[2] = uVar20;
  return;
}


// ===== 00846138  FUN_00846138 =====

void FUN_00846138(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4)

{
  long lVar1;
  void *__src;
  ulong uVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  short sVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined2 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong local_68;
  
  puVar19 = (undefined8 *)*param_2;
  uVar4 = *(ushort *)((long)puVar19 + 10);
  if (uVar4 < 0xb) {
    uVar17 = param_2[2];
    if (uVar17 + 1 <= (ulong)uVar4) {
      memmove((void *)((long)puVar19 + (uVar17 + 1) * 2 + 0xc),
              (void *)((long)puVar19 + uVar17 * 2 + 0xc),(uVar4 - uVar17) * 2);
    }
    uVar13 = param_2[1];
    *(undefined2 *)((long)puVar19 + uVar17 * 2 + 0xc) = param_3;
    *(ushort *)((long)puVar19 + 10) = uVar4 + 1;
    puVar21 = puVar19;
  }
  else {
    uVar17 = param_2[2];
    if (uVar17 < 5) {
      bVar8 = false;
      uVar13 = 4;
    }
    else if (uVar17 == 5) {
      bVar8 = false;
      uVar13 = 5;
    }
    else if (uVar17 == 6) {
      uVar17 = 0;
      bVar8 = true;
      uVar13 = 5;
    }
    else {
      uVar17 = uVar17 - 7;
      bVar8 = true;
      uVar13 = 6;
    }
    local_68 = param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar9 = (undefined8 *)FUN_004b25a4(0x28,8);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    *puVar9 = 0;
    uVar16 = (ulong)*(ushort *)((long)puVar19 + 10) + ~uVar13;
    *(short *)((long)puVar9 + 10) = (short)uVar16;
    if (0xb < uVar16) {
                    /* try { // try from 0084664c to 0084665f has its CatchHandler @ 008466cc */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar16,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae67e8);
    }
    uVar15 = *(undefined2 *)((long)puVar19 + uVar13 * 2 + 0xc);
    memcpy((void *)((long)puVar9 + 0xc),(void *)((long)puVar19 + uVar13 * 2 + 0xe),uVar16 * 2);
    *(short *)((long)puVar19 + 10) = (short)uVar13;
    puVar21 = puVar9;
    if (!bVar8) {
      puVar21 = puVar19;
    }
    uVar13 = 0;
    if (!bVar8) {
      uVar13 = local_68;
    }
    uVar4 = *(ushort *)((long)puVar21 + 10);
    lVar12 = uVar4 - uVar17;
    if (uVar17 <= uVar4 && lVar12 != 0) {
      __src = (void *)((long)puVar21 + uVar17 * 2 + 0xc);
      memmove((void *)((long)__src + 2),__src,lVar12 * 2);
    }
    *(undefined2 *)((long)puVar21 + uVar17 * 2 + 0xc) = param_3;
    *(ushort *)((long)puVar21 + 10) = uVar4 + 1;
    if ((undefined8 *)*puVar19 == (undefined8 *)0x0) {
      local_68 = 0;
    }
    else {
      bVar8 = local_68 == 0;
      puVar14 = (undefined8 *)*puVar19;
      puVar18 = puVar9;
      uVar5 = uVar15;
      do {
        puVar10 = puVar14;
        if (!bVar8) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002f9e8e,0x35,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6728);
        }
        uVar4 = *(ushort *)((long)puVar10 + 10);
        uVar16 = (ulong)uVar4;
        uVar6 = *(ushort *)(puVar19 + 1);
        uVar22 = (ulong)uVar6;
        if (uVar4 < 0xb) {
          puVar3 = (undefined2 *)((long)puVar10 + uVar22 * 2 + 0xc);
          if (uVar6 < uVar4) {
            memmove((void *)((long)puVar10 + (uVar22 + 1) * 2 + 0xc),puVar3,(uVar16 - uVar22) * 2);
            memmove(puVar10 + uVar22 + 7,puVar10 + uVar22 + 6,(uVar16 - uVar22) * 8);
          }
          *puVar3 = uVar5;
          *(ushort *)((long)puVar10 + 10) = uVar4 + 1;
          puVar10[uVar22 + 6] = puVar18;
          if (uVar22 + 1 < uVar16 + 2) {
            lVar12 = uVar22 + 6;
            do {
              sVar7 = (short)lVar12;
              puVar19 = (undefined8 *)puVar10[lVar12];
              lVar12 = lVar12 + 1;
              *puVar19 = puVar10;
              *(short *)(puVar19 + 1) = sVar7 + -5;
            } while (lVar12 - uVar16 != 7);
          }
          goto LAB_00846510;
        }
        if (uVar6 < 5) {
          bVar8 = false;
          uVar20 = 4;
        }
        else if (uVar6 == 5) {
          bVar8 = false;
          uVar20 = uVar22;
        }
        else if (uVar6 == 6) {
          uVar22 = 0;
          bVar8 = true;
          uVar20 = 5;
        }
        else {
          uVar22 = uVar22 - 7;
          bVar8 = true;
          uVar20 = 6;
        }
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar9 = (undefined8 *)FUN_004b25a4(0x88,8);
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x88);
        }
        *puVar9 = 0;
        *(undefined2 *)((long)puVar9 + 10) = 0;
        uVar2 = (ulong)*(ushort *)((long)puVar10 + 10) + ~uVar20;
        *(short *)((long)puVar9 + 10) = (short)uVar2;
        if (0xb < uVar2) {
                    /* try { // try from 008465d8 to 008465eb has its CatchHandler @ 008466e8 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar2,0xb,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae67e8);
        }
        uVar15 = *(undefined2 *)((long)puVar10 + uVar20 * 2 + 0xc);
        memcpy((void *)((long)puVar9 + 0xc),(void *)((long)puVar10 + uVar20 * 2 + 0xe),uVar2 * 2);
        *(short *)((long)puVar10 + 10) = (short)uVar20;
        lVar12 = (ulong)*(ushort *)((long)puVar9 + 10) + 1;
        if (0xb < (ulong)*(ushort *)((long)puVar9 + 10)) {
                    /* try { // try from 008465f0 to 00846607 has its CatchHandler @ 008466ec */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,lVar12,0xc,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6740);
        }
        if (uVar16 - uVar20 != lVar12) {
                    /* try { // try from 00846630 to 00846647 has its CatchHandler @ 008466ec */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002f9ec3,0x28,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6758);
        }
        local_68 = local_68 + 1;
        memcpy(puVar9 + 5,puVar10 + uVar20 + 6,lVar12 * 8);
        lVar11 = 0;
        do {
          lVar1 = lVar11 + 1;
          puVar19 = (undefined8 *)puVar9[lVar11 + 5];
          *(short *)(puVar19 + 1) = (short)lVar11;
          *puVar19 = puVar9;
          lVar11 = lVar1;
        } while (lVar12 != lVar1);
        puVar19 = puVar9;
        if (!bVar8) {
          puVar19 = puVar10;
        }
        uVar4 = *(ushort *)((long)puVar19 + 10);
        uVar16 = (ulong)uVar4;
        puVar3 = (undefined2 *)((long)puVar19 + uVar22 * 2 + 0xc);
        lVar12 = uVar16 - uVar22;
        if (uVar22 <= uVar16 && lVar12 != 0) {
          memmove((void *)((long)puVar19 + (uVar22 + 1) * 2 + 0xc),puVar3,lVar12 * 2);
          memmove(puVar19 + uVar22 + 7,puVar19 + uVar22 + 6,lVar12 * 8);
        }
        *puVar3 = uVar5;
        puVar19[uVar22 + 6] = puVar18;
        *(ushort *)((long)puVar19 + 10) = uVar4 + 1;
        if (uVar22 + 1 < uVar16 + 2) {
          lVar12 = uVar22 + 6;
          do {
            sVar7 = (short)lVar12;
            puVar14 = (undefined8 *)puVar19[lVar12];
            lVar12 = lVar12 + 1;
            *puVar14 = puVar19;
            *(short *)(puVar14 + 1) = sVar7 + -5;
          } while (lVar12 - uVar16 != 7);
        }
        bVar8 = true;
        puVar14 = (undefined8 *)*puVar10;
        puVar18 = puVar9;
        puVar19 = puVar10;
        uVar5 = uVar15;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
    param_4 = (undefined8 *)*param_4;
    puVar19 = (undefined8 *)*param_4;
    if (puVar19 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6770);
    }
    uVar16 = param_4[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar14 = (undefined8 *)FUN_004b25a4(0x88,8);
    if (puVar14 == (undefined8 *)0x0) {
                    /* try { // try from 0084667c to 00846687 has its CatchHandler @ 008466c8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x88);
    }
    *puVar14 = 0;
    *(undefined2 *)((long)puVar14 + 10) = 0;
    puVar14[5] = puVar19;
    if (0xfffffffffffffffe < uVar16) {
                    /* try { // try from 0084668c to 00846697 has its CatchHandler @ 008466b4 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae6710);
    }
    *puVar19 = puVar14;
    *(undefined2 *)(puVar19 + 1) = 0;
    *param_4 = puVar14;
    param_4[1] = uVar16 + 1;
    if (local_68 != uVar16) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: edge.height == self.height - 1",0x30,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00ae6818);
    }
    *(undefined2 *)((long)puVar14 + 0xc) = uVar15;
    *(undefined2 *)((long)puVar14 + 10) = 1;
    puVar14[6] = puVar9;
    *puVar9 = puVar14;
    *(undefined2 *)(puVar9 + 1) = 1;
  }
LAB_00846510:
  *param_1 = puVar21;
  param_1[1] = uVar13;
  param_1[2] = uVar17;
  return;
}


// ===== 00846708  FUN_00846708 =====

void FUN_00846708(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00846728 to 0084672f has its CatchHandler @ 00846760 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00846780  FUN_00846780 =====

void FUN_00846780(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 008467a0 to 008467a7 has its CatchHandler @ 008467d8 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 008467f8  FUN_008467f8 =====

void FUN_008467f8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  pvVar1 = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00846818 to 0084681f has its CatchHandler @ 00846898 */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[2];
  puVar2 = (undefined8 *)param_1[3];
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00846840 to 00846847 has its CatchHandler @ 00846878 */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 008468c8  FUN_008468c8 =====

void FUN_008468c8(long param_1)

{
                    /* try { // try from 008468d8 to 008468db has its CatchHandler @ 008468ec */
  FUN_008467f8();
  FUN_008467f8(param_1 + 0x20);
  return;
}


// ===== 00846904  FUN_00846904 =====

void FUN_00846904(long param_1)

{
                    /* try { // try from 00846914 to 0084691b has its CatchHandler @ 0084692c */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  return;
}


// ===== 00846944  core::slice::sort::unstable::heapsort::heapsort<(u32,usize),<{backref_15}as_core::cmp::PartialOrd>::lt> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<(u32, usize), <{backref 15} as
   core::cmp::PartialOrd>::lt> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<(u32,usize),<_backref_15_as_core::cmp::PartialOrd>::lt>(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      uVar8 = uVar7 - param_2;
      if (uVar7 < param_2) {
        uVar8 = 0;
        uVar14 = param_1[1];
        uVar13 = *param_1;
        uVar12 = param_1[uVar7 * 2];
        param_1[1] = (param_1 + uVar7 * 2)[1];
        *param_1 = uVar12;
        (param_1 + uVar7 * 2)[1] = uVar14;
        param_1[uVar7 * 2] = uVar13;
      }
      uVar9 = (uVar8 & 0x3fffffffffffffff) << 1 | 1;
      uVar3 = param_2;
      if (uVar7 <= param_2) {
        uVar3 = uVar7;
      }
    } while (uVar3 <= uVar9);
    do {
      uVar11 = uVar8 * 2 + 2;
      uVar10 = uVar9;
      if (uVar11 < uVar3) {
        uVar4 = *(uint *)(param_1 + uVar9 * 2);
        uVar5 = *(uint *)(param_1 + uVar11 * 2);
        bVar6 = *(ulong *)((long)(param_1 + uVar9 * 2) + 8) <
                *(ulong *)((long)(param_1 + uVar11 * 2) + 8);
        if (uVar4 != uVar5) {
          bVar6 = uVar4 < uVar5;
        }
        uVar10 = uVar9 + bVar6;
      }
      puVar1 = (uint *)(param_1 + uVar8 * 2);
      puVar2 = (uint *)(param_1 + uVar10 * 2);
      uVar8 = *(ulong *)(puVar1 + 2);
      uVar11 = *(ulong *)(puVar2 + 2);
      bVar6 = uVar8 < uVar11;
      if (*puVar1 != *puVar2) {
        bVar6 = *puVar1 < *puVar2;
      }
      if (!bVar6) break;
      uVar12 = *(undefined8 *)puVar1;
      uVar9 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      *(undefined8 *)puVar1 = *(undefined8 *)puVar2;
      *(ulong *)(puVar1 + 2) = uVar11;
      *(undefined8 *)puVar2 = uVar12;
      *(ulong *)(puVar2 + 2) = uVar8;
      uVar8 = uVar10;
    } while (uVar9 < uVar3);
  } while( true );
}


// ===== 00846a40  core::slice::sort::unstable::heapsort::heapsort<(u32,u32),<{backref_15}as_core::cmp::PartialOrd>::lt> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::unstable::heapsort::heapsort<(u32, u32), <{backref 15} as
   core::cmp::PartialOrd>::lt> */

void __rustcall
core::slice::sort::unstable::heapsort::
heapsort<(u32,u32),<_backref_15_as_core::cmp::PartialOrd>::lt>(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar8 = param_2 + (param_2 >> 1);
  do {
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      uVar9 = uVar8 - param_2;
      if (uVar8 < param_2) {
        uVar9 = 0;
        uVar10 = *param_1;
        *param_1 = param_1[uVar8];
        param_1[uVar8] = uVar10;
      }
      uVar11 = (uVar9 & 0x3fffffffffffffff) << 1 | 1;
      uVar4 = param_2;
      if (uVar8 <= param_2) {
        uVar4 = uVar8;
      }
    } while (uVar4 <= uVar11);
    do {
      uVar1 = uVar9 * 2 + 2;
      uVar12 = uVar11;
      if (uVar1 < uVar4) {
        uVar5 = *(uint *)(param_1 + uVar1);
        uVar6 = *(uint *)(param_1 + uVar11);
        bVar7 = *(uint *)((long)(param_1 + uVar11) + 4) < *(uint *)((long)(param_1 + uVar1) + 4);
        if (uVar6 != uVar5) {
          bVar7 = uVar6 < uVar5;
        }
        uVar12 = uVar11 + bVar7;
      }
      puVar2 = (uint *)(param_1 + uVar9);
      puVar3 = (uint *)(param_1 + uVar12);
      bVar7 = puVar2[1] < puVar3[1];
      if (*puVar2 != *puVar3) {
        bVar7 = *puVar2 < *puVar3;
      }
      if (!bVar7) break;
      uVar10 = *(undefined8 *)puVar2;
      uVar11 = (uVar12 & 0x3fffffffffffffff) << 1 | 1;
      *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar3 = uVar10;
      uVar9 = uVar12;
    } while (uVar11 < uVar4);
  } while( true );
}


// ===== 00846b20  FUN_00846b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00846b20(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  local_40 = 0;
  uStack_38 = 0;
  bVar7 = (byte)((ulong)uStack_50 >> 8);
  bVar8 = (byte)((ulong)uStack_50 >> 0x10);
  bVar9 = (byte)((ulong)uStack_50 >> 0x18);
  bVar10 = (byte)((ulong)uStack_50 >> 0x20);
  bVar11 = (byte)((ulong)uStack_50 >> 0x28);
  bVar12 = (byte)((ulong)uStack_50 >> 0x30);
  bVar13 = (byte)((ulong)uStack_50 >> 0x38);
  local_70 = CONCAT17(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar8 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_68 = CONCAT17(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar8 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar7 = (byte)((ulong)uStack_48 >> 8);
  bVar8 = (byte)((ulong)uStack_48 >> 0x10);
  bVar9 = (byte)((ulong)uStack_48 >> 0x18);
  bVar10 = (byte)((ulong)uStack_48 >> 0x20);
  bVar11 = (byte)((ulong)uStack_48 >> 0x28);
  bVar12 = (byte)((ulong)uStack_48 >> 0x30);
  bVar13 = (byte)((ulong)uStack_48 >> 0x38);
  local_60 = CONCAT17(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar8 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_58 = CONCAT17(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar8 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  local_30 = 0;
  local_28 = uVar3;
  FUN_00849720(&local_70,&local_28,8);
  FUN_00849720(&local_70,uVar2,uVar3);
  uStack_38 = uStack_38 | local_40 << 0x38;
  uStack_58 = uStack_38 ^ uStack_58;
  uVar4 = local_60 + local_70;
  uVar5 = uVar4 ^ (local_60 >> 0x33 | local_60 << 0xd);
  uVar6 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
  uVar1 = uStack_58 + lStack_68 + uVar5;
  uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar4 = (uVar4 ^ uStack_38) + uVar5;
  uVar1 = uVar6 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar5 = uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar6 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar1 = uVar5 + uVar1;
  uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar4 = uVar5 + uVar4;
  uVar1 = uVar6 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar5 = uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar6 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar1 = uVar5 + uVar1;
  uVar4 = uVar6 + (uVar4 >> 0x20 | uVar4 << 0x20);
  uVar5 = uVar1 ^ (uVar5 >> 0x2f | uVar5 << 0x11);
  uVar6 = uVar4 ^ (uVar6 >> 0x2b | uVar6 << 0x15);
  uVar1 = uVar6 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar4 = uVar5 + uVar4 ^ (uVar5 >> 0x33 | uVar5 << 0xd);
  uVar5 = uVar1 ^ (uVar6 >> 0x30 | uVar6 << 0x10);
  uVar1 = uVar4 + uVar1;
  return (uVar5 >> 0x2b | uVar5 << 0x15) ^ (uVar4 >> 0x2f | uVar4 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 00846c54  FUN_00846c54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00846c54(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  bVar2 = *param_2;
  local_28 = (ulong)bVar2;
  local_40 = 0;
  uStack_38 = 0;
  bVar12 = (byte)((ulong)uStack_50 >> 8);
  bVar13 = (byte)((ulong)uStack_50 >> 0x10);
  bVar14 = (byte)((ulong)uStack_50 >> 0x18);
  bVar15 = (byte)((ulong)uStack_50 >> 0x20);
  bVar16 = (byte)((ulong)uStack_50 >> 0x28);
  bVar17 = (byte)((ulong)uStack_50 >> 0x30);
  bVar18 = (byte)((ulong)uStack_50 >> 0x38);
  local_70 = CONCAT17(bVar18 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar17 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar16 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar15 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                         0x18),
                                                          CONCAT12(bVar13 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >> 8
                                                                          ),
                                                           (byte)uStack_50 ^ (byte)_DAT_0029fb60))))
                                       )));
  lStack_68 = CONCAT17(bVar18 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar17 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar16 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar15 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                          0x18),
                                                           CONCAT12(bVar13 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >> 8
                                                                          ),
                                                           (byte)uStack_50 ^ (byte)_UNK_0029fb68))))
                                        )));
  bVar12 = (byte)((ulong)uStack_48 >> 8);
  bVar13 = (byte)((ulong)uStack_48 >> 0x10);
  bVar14 = (byte)((ulong)uStack_48 >> 0x18);
  bVar15 = (byte)((ulong)uStack_48 >> 0x20);
  bVar16 = (byte)((ulong)uStack_48 >> 0x28);
  bVar17 = (byte)((ulong)uStack_48 >> 0x30);
  bVar18 = (byte)((ulong)uStack_48 >> 0x38);
  local_60 = CONCAT17(bVar18 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar17 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar16 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar15 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                         0x18),
                                                          CONCAT12(bVar13 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >> 8
                                                                          ),
                                                           (byte)uStack_48 ^ (byte)_DAT_0029f5c0))))
                                       )));
  uStack_58 = CONCAT17(bVar18 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar17 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar16 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar15 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                          0x18),
                                                           CONCAT12(bVar13 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >> 8
                                                                          ),
                                                           (byte)uStack_48 ^ (byte)_UNK_0029f5c8))))
                                        )));
  local_30 = 0;
  FUN_00849720(&local_70,&local_28,8);
  if (bVar2 == 1) {
    bVar2 = param_2[1];
    local_28 = (ulong)bVar2;
    FUN_00849720(&local_70,&local_28,8);
    if (bVar2 == 1) {
      uVar9 = 0x10;
    }
    else {
      uVar9 = 4;
    }
    local_28 = uVar9;
    FUN_00849720(&local_70,&local_28,8);
    FUN_00849720(&local_70,param_2 + 2,uVar9);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar5 != 0) {
      pbVar10 = *(byte **)(param_2 + 0x10);
      pbVar11 = pbVar10;
      do {
        pbVar6 = pbVar11 + 1;
        uVar4 = (uint)*pbVar11;
        if ((char)*pbVar11 < '\0') {
          if (uVar4 < 0xe0) {
            uVar4 = pbVar11[1] & 0x3f | (uVar4 & 0x1f) << 6;
            pbVar6 = pbVar11 + 2;
          }
          else {
            uVar3 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
            if (uVar4 < 0xf0) {
              uVar4 = uVar3 | (uVar4 & 0x1f) << 0xc;
              pbVar6 = pbVar11 + 3;
            }
            else {
              pbVar6 = pbVar11 + 4;
              uVar4 = pbVar11[3] & 0x3f | uVar3 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        uVar3 = uVar4 | 0x20;
        if (0x19 < uVar4 - 0x41) {
          uVar3 = uVar4;
        }
        local_28 = CONCAT44(local_28._4_4_,uVar3);
        FUN_00849720(&local_70,&local_28,4);
        pbVar11 = pbVar6;
      } while (pbVar6 != pbVar10 + lVar5);
    }
  }
  uStack_38 = uStack_38 | local_40 << 0x38;
  uStack_58 = uStack_38 ^ uStack_58;
  uVar9 = local_60 + local_70;
  uVar7 = uVar9 ^ (local_60 >> 0x33 | local_60 << 0xd);
  uVar8 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
  uVar1 = uStack_58 + lStack_68 + uVar7;
  uVar9 = uVar8 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar8 = uVar9 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar9 = (uVar9 ^ uStack_38) + uVar7;
  uVar1 = uVar8 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar7 = uVar9 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
  uVar1 = uVar7 + uVar1;
  uVar9 = uVar8 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar8 = uVar9 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar9 = uVar7 + uVar9;
  uVar1 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar7 = uVar9 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
  uVar1 = uVar7 + uVar1;
  uVar9 = uVar8 + (uVar9 >> 0x20 | uVar9 << 0x20);
  uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
  uVar8 = uVar9 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
  uVar1 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar9 = uVar7 + uVar9 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
  uVar7 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
  uVar1 = uVar9 + uVar1;
  return (uVar7 >> 0x2b | uVar7 << 0x15) ^ (uVar9 >> 0x2f | uVar9 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 00846e84  FUN_00846e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00846e84(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_00849720(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_14[0] = 0xff;
  FUN_00849720(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 00846fb0  FUN_00846fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00846fb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  local_40 = 0;
  uStack_38 = 0;
  bVar5 = (byte)((ulong)uStack_50 >> 8);
  bVar6 = (byte)((ulong)uStack_50 >> 0x10);
  bVar7 = (byte)((ulong)uStack_50 >> 0x18);
  bVar8 = (byte)((ulong)uStack_50 >> 0x20);
  bVar9 = (byte)((ulong)uStack_50 >> 0x28);
  bVar10 = (byte)((ulong)uStack_50 >> 0x30);
  bVar11 = (byte)((ulong)uStack_50 >> 0x38);
  local_70 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_68 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_48 >> 8);
  bVar6 = (byte)((ulong)uStack_48 >> 0x10);
  bVar7 = (byte)((ulong)uStack_48 >> 0x18);
  bVar8 = (byte)((ulong)uStack_48 >> 0x20);
  bVar9 = (byte)((ulong)uStack_48 >> 0x28);
  bVar10 = (byte)((ulong)uStack_48 >> 0x30);
  bVar11 = (byte)((ulong)uStack_48 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  local_30 = 0;
  local_28 = param_3;
  FUN_00849720(&local_70,&local_28,8);
  FUN_00849720(&local_70,param_2,param_3);
  uStack_38 = uStack_38 | local_40 << 0x38;
  uStack_58 = uStack_38 ^ uStack_58;
  uVar2 = local_60 + local_70;
  uVar3 = uVar2 ^ (local_60 >> 0x33 | local_60 << 0xd);
  uVar4 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
  uVar1 = uStack_58 + lStack_68 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_38) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 008470e8  FUN_008470e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_008470e8(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_00849720(&local_60);
  local_14[0] = 0xff;
  FUN_00849720(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0084720c  <rustls::quic::rustls::quic::Quic>::write_hs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::rustls::quic::Quic>::write_hs */

void __rustcall
<rustls::quic::rustls::quic::Quic>::write_hs(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *__src;
  long lVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  byte local_1c7;
  undefined4 local_1c6;
  undefined2 local_1c2;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  byte bStack_d7;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  bVar6 = *(byte *)(param_2 + 0x131);
  if (*(long *)(param_2 + 0x68) != 0) {
    uVar4 = *(ulong *)(param_2 + 0x50);
    lVar5 = *(long *)(param_2 + 0x58);
    uVar13 = *(ulong *)(param_2 + 0x60);
    lVar10 = *(long *)(param_2 + 0x68) + -1;
    do {
      uVar1 = uVar13 + 1;
      if (uVar1 < uVar4) {
        lVar2 = lVar5 + uVar13 * 0x20;
        *(ulong *)(param_2 + 0x60) = uVar1;
        *(long *)(param_2 + 0x68) = lVar10;
        lVar11 = *(long *)(lVar2 + 8);
        uVar13 = uVar1;
      }
      else {
        lVar2 = lVar5 + uVar13 * 0x20;
        *(ulong *)(param_2 + 0x60) = uVar1 - uVar4;
        *(long *)(param_2 + 0x68) = lVar10;
        lVar11 = *(long *)(lVar2 + 8);
        uVar13 = uVar1 - uVar4;
      }
      if (lVar11 == -1) break;
      lVar12 = param_3[2];
      __src = *(void **)(lVar2 + 0x10);
      uVar1 = *(ulong *)(lVar2 + 0x18);
      if ((ulong)(*param_3 - lVar12) < uVar1) {
                    /* try { // try from 00847338 to 0084734f has its CatchHandler @ 00847624 */
        FUN_00874c84(param_3,lVar12,uVar1,1,1);
        lVar12 = param_3[2];
LAB_008472c0:
        memcpy((void *)(param_3[1] + lVar12),__src,uVar1);
      }
      else if (uVar1 != 0) goto LAB_008472c0;
      param_3[2] = lVar12 + uVar1;
      if (lVar10 != 0) {
        if (uVar13 < uVar4) {
          cVar7 = *(char *)(lVar5 + uVar13 * 0x20);
        }
        else {
          cVar7 = *(char *)(lVar5 + (uVar13 - uVar4) * 0x20);
        }
        if ((cVar7 == '\x01') && (bVar6 != 2)) {
          if (lVar11 != 0) {
            free(__src);
          }
          *(undefined1 *)(param_2 + 0x131) = 2;
          goto LAB_00847418;
        }
      }
      if (lVar11 != 0) {
        free(__src);
      }
      lVar10 = lVar10 + -1;
    } while (lVar10 != -1);
  }
  *(undefined1 *)(param_2 + 0x131) = 2;
  if (bVar6 == 2) {
    bVar6 = *(byte *)(param_2 + 0x1e1);
    *(undefined1 *)(param_2 + 0x1e1) = 2;
    if (bVar6 != 2) {
      uStack_1e8 = *(undefined8 *)(param_2 + 0x1c0);
      local_1f0 = *(undefined8 *)(param_2 + 0x1b8);
      uStack_1e0 = *(undefined8 *)(param_2 + 0x1c8);
      uStack_1d8 = (undefined1)*(undefined8 *)(param_2 + 0x1d0);
      uStack_228 = *(undefined8 *)(param_2 + 0x180);
      local_230 = *(undefined8 *)(param_2 + 0x178);
      uStack_218 = *(undefined8 *)(param_2 + 400);
      uStack_220 = *(undefined8 *)(param_2 + 0x188);
      uStack_1cf = (undefined7)*(undefined8 *)(param_2 + 0x1d9);
      uStack_1c8 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x1d9) >> 0x38);
      uVar9 = uStack_1c8;
      local_1d7 = (undefined7)*(undefined8 *)(param_2 + 0x1d1);
      uStack_1d0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x1d1) >> 0x38);
      uStack_208 = *(undefined8 *)(param_2 + 0x1a0);
      local_210 = *(undefined8 *)(param_2 + 0x198);
      uStack_1f8 = *(undefined8 *)(param_2 + 0x1b0);
      uStack_200 = *(undefined8 *)(param_2 + 0x1a8);
      uVar15 = *(undefined8 *)(param_2 + 0x140);
      uVar14 = *(undefined8 *)(param_2 + 0x138);
      uStack_258 = *(undefined8 *)(param_2 + 0x150);
      uStack_260 = *(undefined8 *)(param_2 + 0x148);
      uStack_248 = *(undefined8 *)(param_2 + 0x160);
      local_250 = *(undefined8 *)(param_2 + 0x158);
      uStack_238 = *(undefined8 *)(param_2 + 0x170);
      uStack_240 = *(undefined8 *)(param_2 + 0x168);
      local_1c6 = *(undefined4 *)(param_2 + 0x1e2);
      local_1c2 = *(undefined2 *)(param_2 + 0x1e6);
      local_270 = uVar14;
      uStack_268 = uVar15;
      local_1c7 = bVar6;
      if ((*(byte *)(param_2 + 0x1ea) & 1) == 0) {
        uVar8 = CONCAT71(uStack_1cf,uStack_1d0);
        *(undefined1 *)(param_2 + 0x1ea) = 1;
        puVar3 = &uStack_218;
        if ((bVar6 & 1) == 0) {
          puVar3 = &uStack_260;
        }
                    /* try { // try from 0084754c to 00847563 has its CatchHandler @ 00847668 */
        <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
                  (&local_90,uVar8,uVar14,uVar15,puVar3,uStack_1c8);
        puVar3 = &uStack_260;
        if ((bVar6 & 1) == 0) {
          puVar3 = &uStack_218;
        }
                    /* try { // try from 0084756c to 00847583 has its CatchHandler @ 00847654 */
        <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
                  (&local_180,uVar8,uVar14,uVar15,puVar3,uVar9);
        uStack_1b8 = uStack_88;
        local_1c0 = local_90;
        uStack_1a8 = uStack_78;
        uStack_1b0 = uStack_80;
        uStack_198 = uStack_178;
        local_1a0 = local_180;
        uStack_188 = uStack_168;
        uStack_190 = uStack_170;
                    /* try { // try from 00847594 to 0084759b has its CatchHandler @ 00847644 */
        FUN_008489d4(&local_270);
        param_1[0x19] = uStack_1e8;
        param_1[0x18] = local_1f0;
        param_1[0x1b] = CONCAT71(local_1d7,uStack_1d8);
        param_1[0x1a] = uStack_1e0;
        param_1[0x1d] = CONCAT26(local_1c2,CONCAT42(local_1c6,CONCAT11(local_1c7,uStack_1c8)));
        param_1[0x1c] = CONCAT71(uStack_1cf,uStack_1d0);
        param_1[0x11] = uStack_228;
        param_1[0x10] = local_230;
        param_1[0x13] = uStack_218;
        param_1[0x12] = uStack_220;
        param_1[0x15] = uStack_208;
        param_1[0x14] = local_210;
        param_1[0x17] = uStack_1f8;
        param_1[0x16] = uStack_200;
        param_1[9] = uStack_268;
        param_1[8] = local_270;
        param_1[0xb] = uStack_258;
        param_1[10] = uStack_260;
        param_1[0xd] = uStack_248;
        param_1[0xc] = local_250;
        param_1[0xf] = uStack_238;
        param_1[0xe] = uStack_240;
        param_1[1] = uStack_1b8;
        *param_1 = local_1c0;
        param_1[3] = uStack_1a8;
        param_1[2] = uStack_1b0;
        param_1[5] = uStack_198;
        param_1[4] = local_1a0;
        param_1[7] = uStack_188;
        param_1[6] = uStack_190;
        return;
      }
                    /* try { // try from 008473d8 to 008473df has its CatchHandler @ 00847678 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&uStack_260);
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&uStack_218);
    }
    *(undefined1 *)((long)param_1 + 0xe9) = 0xff;
  }
  else {
LAB_00847418:
    uStack_138 = *(undefined8 *)(param_2 + 0xd0);
    local_140 = *(undefined8 *)(param_2 + 200);
    uStack_128 = *(undefined8 *)(param_2 + 0xe0);
    uStack_130 = *(undefined8 *)(param_2 + 0xd8);
    uStack_108 = *(undefined8 *)(param_2 + 0x100);
    uStack_110 = *(undefined8 *)(param_2 + 0xf8);
    uStack_d2 = *(undefined2 *)(param_2 + 0x136);
    uStack_118 = *(undefined8 *)(param_2 + 0xf0);
    local_120 = *(undefined8 *)(param_2 + 0xe8);
    uVar15 = *(undefined8 *)(param_2 + 0x90);
    uVar14 = *(undefined8 *)(param_2 + 0x88);
    uStack_d6 = *(undefined4 *)(param_2 + 0x132);
    uStack_168 = *(undefined8 *)(param_2 + 0xa0);
    uStack_170 = *(undefined8 *)(param_2 + 0x98);
    uStack_148 = *(undefined8 *)(param_2 + 0xc0);
    uStack_150 = *(undefined8 *)(param_2 + 0xb8);
    uStack_158 = *(undefined8 *)(param_2 + 0xb0);
    local_160 = *(undefined8 *)(param_2 + 0xa8);
    puVar3 = &uStack_128;
    if ((bVar6 & 1) == 0) {
      puVar3 = &uStack_170;
    }
    uStack_f8 = *(undefined8 *)(param_2 + 0x110);
    local_100 = *(undefined8 *)(param_2 + 0x108);
    uStack_f0 = *(undefined8 *)(param_2 + 0x118);
    uStack_e8 = (undefined1)*(undefined8 *)(param_2 + 0x120);
    uStack_df = (undefined7)*(undefined8 *)(param_2 + 0x129);
    uStack_d8 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x129) >> 0x38);
    uVar9 = uStack_d8;
    uStack_e7 = (undefined7)*(undefined8 *)(param_2 + 0x121);
    local_e0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x121) >> 0x38);
    uVar8 = CONCAT71(uStack_df,local_e0);
                    /* try { // try from 00847498 to 008474af has its CatchHandler @ 008476b4 */
    local_180 = uVar14;
    uStack_178 = uVar15;
    bStack_d7 = bVar6;
    <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
              (&local_90,uVar8,uVar14,uVar15,puVar3,uStack_d8);
    puVar3 = &uStack_170;
    if ((bVar6 & 1) == 0) {
      puVar3 = &uStack_128;
    }
                    /* try { // try from 008474b8 to 008474cf has its CatchHandler @ 008476a0 */
    <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
              (&local_1c0,uVar8,uVar14,uVar15,puVar3,uVar9);
    uStack_268 = uStack_88;
    local_270 = local_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_248 = uStack_1b8;
    local_250 = local_1c0;
    uStack_238 = uStack_1a8;
    uStack_240 = uStack_1b0;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_1b8;
    param_1[4] = local_1c0;
    param_1[7] = uStack_1a8;
    param_1[6] = uStack_1b0;
    *(undefined1 *)((long)param_1 + 0xe9) = 2;
                    /* try { // try from 008474f4 to 008474fb has its CatchHandler @ 0084768c */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&uStack_170);
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&uStack_128);
  }
  return;
}


// ===== 008476cc  <rustls::crypto::hash::rustls::crypto::hash::Output>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::hash::rustls::crypto::hash::Output>::new */

void __rustcall
<rustls::crypto::hash::rustls::crypto::hash::Output>::new
          (undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong local_30;
  
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_30 = param_3;
  if (param_3 < 0x41) {
    memcpy(&local_70,param_2,param_3);
    param_1[8] = local_30;
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[7] = uStack_38;
    param_1[6] = uStack_40;
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,param_3,0x40,&PTR_s__root__cargo_registry_src_index__00ae6788);
}


// ===== 00847748  FUN_00847748 =====

void FUN_00847748(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_70;
  long lStack_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  uVar2 = param_2[2];
  if (*param_2 != 0) {
    uVar2 = param_2[3] - param_2[2];
  }
  lVar1 = uVar2 + 5;
  if (lVar1 < 0) {
    uVar4 = 0;
LAB_00847780:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar4,lVar1);
  }
  if (lVar1 == 0) {
    local_58 = 0;
    lStack_50 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    lStack_50 = FUN_004b25a4(lVar1,1);
    if (lStack_50 == 0) goto LAB_00847780;
    local_48 = 0;
    local_58 = lVar1;
    if (uVar2 < 0xfffffffffffffffb) goto LAB_008477f0;
  }
                    /* try { // try from 008477d4 to 008477eb has its CatchHandler @ 00847850 */
  local_48 = 0;
  FUN_00874c84(&local_58,0,5,1,1);
LAB_008477f0:
  local_60 = local_48 + 5;
  *(undefined4 *)(lStack_50 + local_48) = 0;
  *(undefined1 *)((undefined4 *)(lStack_50 + local_48) + 1) = 0;
  lStack_68 = lStack_50;
  local_70 = local_58;
                    /* try { // try from 0084780c to 00847817 has its CatchHandler @ 00847864 */
  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::copy_to_vec
            (param_2,&local_70);
  lVar1 = param_2[4];
  uVar3 = *(undefined4 *)((long)param_2 + 0x22);
  param_1[1] = lStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  *(short *)((long)param_1 + 0x1c) = (short)lVar1;
  *(undefined4 *)(param_1 + 3) = uVar3;
  return;
}


// ===== 00847884  <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new */

void __rustcall
<rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
          (undefined1 (*param_1) [16],long param_2,undefined8 param_3,long param_4,
          undefined8 param_5,char param_6)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  long lStack_130;
  char local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ushort local_ec [2];
  char local_e8 [4];
  undefined1 local_e4 [4];
  ushort *local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_51;
  
  local_148 = (**(code **)(*(long *)(param_2 + 0x18) + 0x30))
                        (*(undefined8 *)(param_2 + 0x10),param_5);
  puVar3 = local_148._8_8_;
  __ptr = local_148._0_8_;
  local_138 = param_3;
  lStack_130 = param_4;
  local_128 = param_6;
                    /* try { // try from 008478d8 to 008479b7 has its CatchHandler @ 00847a6c */
  uVar2 = (**(code **)(param_4 + 0x28))(param_3);
  local_ec[0] = (ushort)((ulong)uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8);
  uStack_a8 = 9;
  if (param_6 != '\x02') {
    uStack_a8 = 7;
  }
  local_e8[0] = (char)uStack_a8 + '\x06';
  local_d0 = local_e8;
  uStack_c8 = 1;
  local_c0 = "tls13 ";
  uStack_b8 = 6;
  local_b0 = &UNK_002f9f0c;
  if (param_6 != '\x02') {
    local_b0 = &DAT_002f9f05;
  }
  local_90 = 1;
  uStack_88 = 0;
  local_a0 = local_e4;
  uStack_98 = 1;
  local_e0 = local_ec;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_d8 = 2;
  local_e4[0] = 0;
  iVar1 = (*(code *)puVar3[3])(__ptr,&local_e0,6,&local_120,0x20);
  if (iVar1 == 0) {
    local_60 = 0x20;
    uStack_78 = uStack_118;
    local_80 = local_120;
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    FUN_00841790(&local_120,&local_80,uVar2);
    auVar5 = (**(code **)(param_4 + 0x20))(param_3,&local_120);
                    /* try { // try from 008479b8 to 008479c7 has its CatchHandler @ 00847a58 */
    auVar6 = FUN_008481e0(local_148);
    pcVar4 = (code *)*puVar3;
    *param_1 = auVar5;
    param_1[1] = auVar6;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 008479d8 to 008479df has its CatchHandler @ 00847a38 */
      (*pcVar4)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
    return;
  }
                    /* try { // try from 00847a10 to 00847a33 has its CatchHandler @ 00847a6c */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_51,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 00847a88  <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::into_plain_message =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::into_plain_message
    */

void __rustcall
<rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::
into_plain_message(size_t *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  size_t __n;
  long lVar4;
  undefined1 *__dest;
  ulong uVar5;
  long lVar6;
  void *__ptr;
  undefined8 uVar7;
  
  uVar5 = param_2[2];
  if (uVar5 < 5) {
                    /* try { // try from 00847b80 to 00847b93 has its CatchHandler @ 00847b98 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (5,uVar5,uVar5,&PTR_s__root__cargo_registry_src_index__00ae6848);
  }
  __n = uVar5 - 5;
  if ((long)__n < 0) {
    uVar7 = 0;
LAB_00847ac0:
                    /* try { // try from 00847ac0 to 00847acb has its CatchHandler @ 00847b98 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,__n);
  }
  lVar4 = param_2[3];
  uVar3 = *(undefined2 *)((long)param_2 + 0x1a);
  uVar1 = *(undefined1 *)((long)param_2 + 0x1c);
  uVar2 = *(undefined1 *)((long)param_2 + 0x1d);
  __ptr = (void *)param_2[1];
  if (__n == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar7 = 1;
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00847ac0;
    memcpy(__dest,(void *)((long)__ptr + 5),__n);
  }
  lVar6 = *param_2;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1d) = uVar2;
  *(short *)(param_1 + 3) = (short)lVar4;
  *(undefined2 *)((long)param_1 + 0x1a) = uVar3;
  *param_1 = __n;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  if (lVar6 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00847bbc  <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::read
    */

void __rustcall
<rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::read
          (long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong __n;
  long lVar7;
  
  uVar5 = FUN_008491bc();
  if ((((uint)uVar5 ^ 0xffffffff) & 0xffff) == 0) {
    *(char *)(param_1 + 1) = (char)(uVar5 >> 0x10);
  }
  else {
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    __n = uVar5 >> 0x30;
    if (__n <= uVar3 - uVar4) {
      uVar2 = uVar4 + __n;
      param_2[2] = uVar2;
      if ((!CARRY8(uVar4,__n)) && (uVar2 <= uVar3)) {
        lVar7 = *param_2;
        lVar1 = __n + 5;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar6 = (undefined4 *)FUN_004b25a4(__n + 5,1);
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar6 + 1) = 0;
          *puVar6 = 0;
          if (__n != 0) {
            memcpy((void *)((long)puVar6 + 5),(void *)(lVar7 + uVar4),__n);
          }
          *param_1 = lVar1;
          param_1[1] = (long)puVar6;
          param_1[2] = lVar1;
          *(short *)(param_1 + 3) = (short)uVar5;
          *(short *)((long)param_1 + 0x1a) = (short)(uVar5 >> 0x10);
          *(char *)((long)param_1 + 0x1c) = (char)(uVar5 >> 0x20);
          *(char *)((long)param_1 + 0x1d) = (char)(uVar5 >> 0x28);
          return;
        }
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,lVar1);
      }
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (uVar4,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = -1;
  return;
}


// ===== 00847ce4  <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::encode
    */

void __rustcall
<rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::
encode(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar2 = *(byte *)(param_1 + 0x1c);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      uVar3 = 0x14;
    }
    else if (bVar2 == 1) {
      uVar3 = 0x15;
    }
    else {
      uVar3 = 0x16;
    }
  }
  else if (bVar2 == 3) {
    uVar3 = 0x17;
  }
  else if (bVar2 == 4) {
    uVar3 = 0x18;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x1d);
  }
  if (uVar1 != 0) {
    **(undefined1 **)(param_1 + 8) = uVar3;
    if (2 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00847d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00847d80 + (ulong)(byte)(&DAT_002f9e84)[*(ushort *)(param_1 + 0x18)] * 4))();
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00847e28 to 00847e43 has its CatchHandler @ 00847e48 */
    core::slice::index::slice_index_fail(1,3,uVar1,&PTR_s__root__cargo_registry_src_index__00ae67b8)
    ;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00ae67a0);
}


// ===== 00847e68  <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::with_capacity =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::with_capacity
    */

void __rustcall
<rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::
with_capacity(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = param_2 + 5;
  if (lVar1 < 0) {
    uVar2 = 0;
LAB_00847e88:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,lVar1);
  }
  if (lVar1 == 0) {
    local_48 = 0;
    lStack_40 = 1;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    lStack_40 = FUN_004b25a4(lVar1,1);
    if (lStack_40 == 0) goto LAB_00847e88;
    local_38 = 0;
    local_48 = lVar1;
    if (param_2 < 0xfffffffffffffffb) goto LAB_00847ef8;
  }
                    /* try { // try from 00847edc to 00847ef3 has its CatchHandler @ 00847f28 */
  local_38 = 0;
  FUN_00874c84(&local_48,0,5,1,1);
LAB_00847ef8:
  *(undefined4 *)(lStack_40 + local_38) = 0;
  *(undefined1 *)((undefined4 *)(lStack_40 + local_38) + 1) = 0;
  param_1[1] = lStack_40;
  *param_1 = local_48;
  param_1[2] = local_38 + 5;
  return;
}


// ===== 00847f48  <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::extend_from_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::extend_from_slice
    */

void __rustcall
<rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::
extend_from_slice(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if ((ulong)(*param_1 - lVar1) < param_3) {
    FUN_00874c84(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00847f88;
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
LAB_00847f88:
  param_1[2] = lVar1 + param_3;
  return;
}


// ===== 00847fc8  <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::extend_from_chunks =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::extend_from_chunks
    */

void __rustcall
<rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::
extend_from_chunks(undefined8 param_1,undefined8 param_2)

{
  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::copy_to_vec
            (param_2,param_1);
  return;
}


// ===== 00847fd8  <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::truncate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::truncate
    */

void __rustcall
<rustls::msgs::message::outbound::[2]::rustls::msgs::message::outbound::PrefixedPayload>::truncate
          (long param_1,long param_2)

{
  if (param_2 + 5U <= *(ulong *)(param_1 + 0x10)) {
    *(ulong *)(param_1 + 0x10) = param_2 + 5U;
  }
  return;
}


// ===== 00847ff0  <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>::dangerous_extract_secrets =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>::dangerous_extract_secrets
    */

void __rustcall
<rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
::dangerous_extract_secrets(undefined8 param_1,void *param_2)

{
  undefined8 local_440 [132];
  
  local_440[0] = 0;
  memcpy(local_440,param_2,0x420);
  FUN_0086f310(param_1,local_440);
  return;
}


// ===== 00848034  <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>::new
    */

void __rustcall
<rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
::new(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_430;
  long lStack_428;
  long local_420;
  long lStack_418;
  long local_410;
  long lStack_408;
  long local_400;
  long local_3f8;
  long local_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long local_3d0;
  long lStack_3c8;
  long local_3c0;
  undefined1 auStack_3b8 [904];
  
  local_430 = 0;
  lStack_428 = 8;
  local_420 = 0;
  FUN_0086a4f0(&local_3f8,param_2,param_3,&local_430,0);
  lStack_428 = lStack_3e8;
  local_430 = local_3f0;
  lStack_418 = lStack_3d8;
  local_420 = lStack_3e0;
  lStack_408 = lStack_3c8;
  local_410 = local_3d0;
  local_400 = local_3c0;
  if (local_3f8 == 2) {
    param_1[6] = lStack_3c8;
    param_1[5] = local_3d0;
    param_1[2] = lStack_3e8;
    param_1[1] = local_3f0;
    param_1[4] = lStack_3d8;
    param_1[3] = lStack_3e0;
    param_1[7] = local_3c0;
    *param_1 = 2;
    return;
  }
  memcpy(param_1 + 8,auStack_3b8,0x388);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[2] = lStack_428;
  param_1[1] = local_430;
  param_1[7] = local_400;
  param_1[4] = lStack_418;
  param_1[3] = local_420;
  param_1[6] = lStack_408;
  param_1[5] = local_410;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  lVar2 = _UNK_002a0708;
  lVar1 = _DAT_002a0700;
  param_1[0x79] = 1;
  param_1[0x7b] = lVar2;
  param_1[0x7a] = lVar1;
  param_1[0x7c] = 8;
  param_1[0x81] = 1;
  *param_1 = local_3f8;
  return;
}


// ===== 00848140  FUN_00848140 =====

void FUN_00848140(size_t *param_1,size_t *param_2)

{
  undefined1 *__src;
  undefined1 *__dest;
  size_t sVar1;
  size_t __n;
  undefined8 uVar2;
  
  __src = (undefined1 *)param_2[1];
  __n = param_2[2];
  sVar1 = *param_2;
  __dest = __src;
  if (*param_2 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_00848188:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      sVar1 = 0;
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00848188;
      memcpy(__dest,__src,__n);
      sVar1 = __n;
    }
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 008481e0  FUN_008481e0 =====

void FUN_008481e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 *local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined2 local_dc;
  char local_d8 [4];
  char local_d4 [4];
  undefined8 *local_d0;
  ulong uStack_c8;
  char *local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 uStack_61;
  
  uVar1 = param_1[2];
  lVar3 = param_1[3];
  uVar6 = (**(code **)(lVar3 + 0x28))(uVar1);
  cVar4 = *(char *)(param_1 + 4);
  uStack_98 = 10;
  local_a0 = &UNK_002f9eeb;
  if (cVar4 != '\x02') {
    uStack_98 = 8;
    local_a0 = &DAT_002a1928;
  }
  local_120 = (undefined8 *)
              CONCAT62(local_120._2_6_,
                       (ushort)((ulong)uVar6 >> 8) & 0xff | (ushort)(((uint)uVar6 & 0xff00ff) << 8))
  ;
  local_d4[0] = (char)uStack_98 + '\x06';
  local_d0 = &local_120;
  uVar2 = *param_1;
  uStack_b8 = 1;
  local_b0 = "tls13 ";
  uStack_a8 = 6;
  uStack_88 = 1;
  local_80 = 1;
  uStack_78 = 0;
  uStack_148 = 0;
  local_150 = (undefined8 *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  pcVar7 = *(code **)(param_1[1] + 0x18);
  local_dc = (ushort)local_dc._1_1_ << 8;
  uStack_c8 = 2;
  local_c0 = local_d4;
  local_90 = (char *)&local_dc;
  iVar5 = (*pcVar7)(uVar2,&local_d0,6,&local_150,0x20);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002ff1d9,0x24,&uStack_61,&DAT_00ae8158,
               &PTR_s__root__cargo_registry_src_index__00ae80f0);
  }
  local_f0 = 0x20;
  uStack_108 = uStack_148;
  local_110 = local_150;
  uStack_f8 = uStack_138;
  uStack_100 = uStack_140;
  FUN_00841790(&local_150,&local_110,uVar6);
  uStack_98 = 9;
  if (cVar4 != '\x02') {
    uStack_98 = 7;
  }
  local_d8[0] = (char)uStack_98 + '\x06';
  local_dc = 0xc00;
  uStack_c8 = 2;
  local_c0 = local_d8;
  uStack_b8 = 1;
  local_a0 = &UNK_002f9efc;
  if (cVar4 != '\x02') {
    local_a0 = &DAT_002f9ef5;
  }
  local_d4[0] = '\0';
  local_b0 = "tls13 ";
  uStack_a8 = 6;
  uStack_88 = 1;
  local_80 = 1;
  uStack_78 = 0;
  uStack_108 = uStack_108 & 0xffffffff00000000;
  local_110 = (undefined8 *)0x0;
                    /* try { // try from 00848348 to 0084835f has its CatchHandler @ 00848404 */
  local_d0 = (undefined8 *)&local_dc;
  local_90 = local_d4;
  iVar5 = (*pcVar7)(uVar2,&local_d0,6,&local_110,0xc);
  if (iVar5 != 0) {
                    /* try { // try from 008483dc to 008483ff has its CatchHandler @ 00848404 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002ff1d9,0x24,&uStack_61,&DAT_00ae8158,
               &PTR_s__root__cargo_registry_src_index__00ae80f0);
  }
  uStack_c8 = uStack_148;
  local_d0 = local_150;
  uStack_b8 = uStack_138;
  local_c0 = (char *)uStack_140;
  local_b0 = (char *)local_130;
  local_120 = local_110;
  local_118 = (undefined4)uStack_108;
  (**(code **)(lVar3 + 0x18))(uVar1,&local_d0,&local_120);
  return;
}


// ===== 0084841c  <rustls::quic::[5]::rustls::quic::Suite>::keys =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::[5]::rustls::quic::Suite>::keys */

void __rustcall
<rustls::quic::[5]::rustls::quic::Suite>::keys
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

{
  <rustls::quic::[6]::rustls::quic::Keys>::initial
            (param_5,*param_1,param_1[1],param_1[2],param_2,param_3,param_4);
  return;
}


// ===== 00848440  <rustls::quic::[6]::rustls::quic::Keys>::initial =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::[6]::rustls::quic::Keys>::initial */

void __rustcall
<rustls::quic::[6]::rustls::quic::Keys>::initial
          (undefined8 *param_1,ulong param_2,long param_3,ushort *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 **ppuVar1;
  uint uVar2;
  void *__ptr;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  ushort *local_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 uStack_180;
  undefined2 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ushort local_c0;
  undefined6 uStack_be;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [12];
  
  auVar5 = (**(code **)(*(long *)(param_3 + 0x18) + 0x20))
                     (*(undefined8 *)(param_3 + 0x10),
                      &DAT_002f9fa4 + *(int *)(&DAT_002f9fa4 + (param_2 & 0xff) * 4),0x14,param_6,
                      param_7);
  puVar3 = auVar5._8_8_;
  __ptr = auVar5._0_8_;
  pcVar4 = (code *)puVar3[5];
                    /* try { // try from 008484b0 to 00848527 has its CatchHandler @ 00848728 */
  uVar2 = (*pcVar4)();
  local_c0 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
  local_1b8 = &local_c0;
  local_6c[0] = 0xf;
  local_1b0 = 2;
  local_1a8 = local_6c;
  uStack_1a0 = 1;
  local_198 = "tls13 ";
  uStack_190 = 6;
  local_188 = "client in";
  uStack_180 = 9;
  local_178 = &local_74;
  local_74 = (ushort)local_74._1_1_ << 8;
  uStack_170 = 1;
  local_168 = 1;
  local_160 = (undefined1 *)0x0;
  (*(code *)puVar3[4])(&local_108,__ptr,&local_1b8,6);
                    /* try { // try from 00848528 to 008485a3 has its CatchHandler @ 00848718 */
  uVar2 = (*pcVar4)(__ptr);
  local_74 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
  local_70[0] = 0xf;
  local_1b8 = &local_74;
  local_6c[0] = 0;
  local_1b0 = 2;
  local_1a8 = local_70;
  uStack_1a0 = 1;
  local_198 = "tls13 ";
  uStack_190 = 6;
  local_188 = "server in";
  uStack_180 = 9;
  local_178 = (undefined2 *)local_6c;
  uStack_170 = 1;
  local_168 = 1;
  local_160 = (undefined1 *)0x0;
  (*(code *)puVar3[4])(&local_c0,__ptr,&local_1b8,6);
  uStack_180 = uStack_e0;
  local_188 = (char *)local_e8;
  uStack_170 = uStack_d0;
  local_178 = (undefined2 *)local_d8;
  uStack_190 = uStack_f0;
  local_198 = (char *)local_f8;
  local_160 = (undefined1 *)CONCAT62(uStack_be,local_c0);
  uStack_1a0 = uStack_100;
  local_1a8 = local_108;
  local_168 = local_c8;
  uStack_128 = uStack_88;
  local_130 = uStack_90;
  uStack_138 = uStack_98;
  local_140 = local_a0;
  ppuVar1 = &local_160;
  if (param_8 == 0) {
    ppuVar1 = &local_1a8;
  }
  uStack_158 = uStack_b8;
  uStack_148 = uStack_a8;
  uStack_150 = local_b0;
  local_120 = local_80;
  local_10f = (undefined1)param_8;
  local_110 = (undefined1)param_2;
                    /* try { // try from 0084861c to 00848633 has its CatchHandler @ 00848708 */
  local_1b8 = param_4;
  local_1b0 = param_5;
  lStack_118 = param_3;
  <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
            (&local_108,param_3,param_4,param_5,ppuVar1,param_2 & 0xffffffff);
  ppuVar1 = &local_1a8;
  if (param_8 == 0) {
    ppuVar1 = &local_160;
  }
                    /* try { // try from 0084863c to 00848653 has its CatchHandler @ 008486f4 */
  <rustls::quic::[0]::rustls::quic::DirectionalKeys>::new
            (&local_c0,param_3,param_4,param_5,ppuVar1,param_2 & 0xffffffff);
  param_1[1] = uStack_100;
  *param_1 = local_108;
  param_1[3] = uStack_f0;
  param_1[2] = local_f8;
  param_1[5] = uStack_b8;
  param_1[4] = CONCAT62(uStack_be,local_c0);
  param_1[7] = uStack_a8;
  param_1[6] = local_b0;
                    /* try { // try from 0084866c to 00848673 has its CatchHandler @ 008486e0 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_1a8);
                    /* try { // try from 00848674 to 0084867b has its CatchHandler @ 00848728 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_160);
  if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 00848684 to 0084868b has its CatchHandler @ 008486c0 */
    (*(code *)*puVar3)(__ptr);
  }
  if (puVar3[1] != 0) {
    free(__ptr);
  }
  return;
}


// ===== 00848744  <rustls::msgs::base::[6]::rustls::msgs::base::PayloadU16>::encode_slice =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::[6]::rustls::msgs::base::PayloadU16>::encode_slice */

void __rustcall
<rustls::msgs::base::[6]::rustls::msgs::base::PayloadU16>::encode_slice
          (void *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_3[2];
  lVar3 = *param_3;
  if ((ulong)(lVar3 - lVar1) < 2) {
    FUN_00874c84(param_3,lVar1,2,1,1);
    lVar1 = param_3[2];
    lVar3 = *param_3;
  }
  lVar4 = lVar1 + 2;
  lVar2 = param_3[1];
  param_3[2] = lVar4;
  *(ushort *)(lVar2 + lVar1) =
       (ushort)(param_2 >> 8) & 0xff | (ushort)(((uint)param_2 & 0xff00ff) << 8);
  if ((ulong)(lVar3 - lVar4) < param_2) {
    FUN_00874c84(param_3,lVar4,param_2,1,1);
    lVar2 = param_3[1];
    lVar4 = param_3[2];
  }
  else if (param_2 == 0) goto LAB_008487ac;
  memcpy((void *)(lVar2 + lVar4),param_1,param_2);
LAB_008487ac:
  param_3[2] = lVar4 + param_2;
  return;
}


// ===== 00848804  <rustls::quic::rustls::quic::Secrets>::next_packet_keys =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::rustls::quic::Secrets>::next_packet_keys */

void __rustcall
<rustls::quic::rustls::quic::Secrets>::next_packet_keys
          (undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  cVar5 = *(char *)((long)param_2 + 0xa9);
  uVar1 = *(undefined8 *)(param_2[0x14] + 0x10);
  lVar3 = *(long *)(param_2[0x14] + 0x18);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar6 = *(undefined1 *)(param_2 + 0x15);
  puVar8 = param_2 + 0xb;
  if (cVar5 == '\0') {
    puVar8 = param_2 + 2;
  }
  local_b0 = (**(code **)(lVar3 + 0x30))(uVar1,puVar8);
  puVar7 = local_b0._8_8_;
  __ptr = local_b0._0_8_;
                    /* try { // try from 0084886c to 00848873 has its CatchHandler @ 008489bc */
  local_a0 = uVar2;
  uStack_98 = uVar4;
  local_90 = uVar6;
  auVar10 = FUN_008481e0(local_b0);
  puVar8 = param_2 + 2;
  if (cVar5 == '\0') {
    puVar8 = param_2 + 0xb;
  }
                    /* try { // try from 0084888c to 00848893 has its CatchHandler @ 008489a8 */
  local_88 = (**(code **)(lVar3 + 0x30))(uVar1,puVar8);
  puVar8 = local_88._8_8_;
  __ptr_00 = local_88._0_8_;
                    /* try { // try from 008488a8 to 008488af has its CatchHandler @ 00848988 */
  local_78 = uVar2;
  uStack_70 = uVar4;
  local_68 = uVar6;
  auVar11 = FUN_008481e0(local_88);
  pcVar9 = (code *)*puVar8;
  if (pcVar9 != (code *)0x0) {
                    /* try { // try from 008488c0 to 008488c7 has its CatchHandler @ 00848958 */
    (*pcVar9)(__ptr_00);
  }
  if (puVar8[1] != 0) {
    free(__ptr_00);
  }
  pcVar9 = (code *)*puVar7;
  if (pcVar9 != (code *)0x0) {
                    /* try { // try from 008488e8 to 008488ef has its CatchHandler @ 00848938 */
    (*pcVar9)(__ptr);
  }
  if (puVar7[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 00848904 to 0084890b has its CatchHandler @ 00848974 */
  FUN_008489d4(param_2);
  *param_1 = auVar10;
  param_1[1] = auVar11;
  return;
}


// ===== 008489d4  FUN_008489d4 =====

void FUN_008489d4(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ushort local_bc [2];
  char local_b8 [4];
  undefined1 local_b4 [4];
  ushort *local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  auVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x18) + 0x30))
                     (*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10),param_1 + 0x10);
  puVar5 = auVar6._8_8_;
  pvVar4 = auVar6._0_8_;
  cVar1 = *(char *)(param_1 + 0xa8);
                    /* try { // try from 00848a18 to 00848aa7 has its CatchHandler @ 00848c94 */
  uVar3 = (*(code *)puVar5[5])();
  bVar2 = cVar1 != '\x02';
  local_bc[0] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  local_78 = 9;
  if (bVar2) {
    local_78 = 7;
  }
  local_b8[0] = (char)local_78 + '\x06';
  local_b0 = local_bc;
  uStack_a8 = 2;
  local_a0 = local_b8;
  local_98 = 1;
  local_80 = "quicv2 ku";
  if (bVar2) {
    local_80 = "quic kuquicv2 ku";
  }
  local_90 = "tls13 ";
  local_88 = 6;
  local_70 = local_b4;
  local_b4[0] = 0;
  local_68 = 1;
  local_60 = 1;
  local_58 = 0;
  (*(code *)puVar5[4])(&local_108,pvVar4,&local_b0,6);
                    /* try { // try from 00848aa8 to 00848aaf has its CatchHandler @ 00848c58 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x38) = uStack_e0;
  *(undefined8 *)(param_1 + 0x30) = local_e8;
  *(undefined8 *)(param_1 + 0x48) = uStack_d0;
  *(undefined8 *)(param_1 + 0x40) = local_d8;
  *(undefined8 *)(param_1 + 0x50) = local_c8;
  *(undefined8 *)(param_1 + 0x18) = uStack_100;
  *(undefined8 *)(param_1 + 0x10) = local_108;
  *(undefined8 *)(param_1 + 0x28) = uStack_f0;
  *(undefined8 *)(param_1 + 0x20) = local_f8;
  if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00848ad8 to 00848adf has its CatchHandler @ 00848c08 */
    (*(code *)*puVar5)(pvVar4);
  }
  if (puVar5[1] != 0) {
    free(pvVar4);
  }
  auVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x18) + 0x30))
                     (*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x10),param_1 + 0x58);
  puVar5 = auVar6._8_8_;
  pvVar4 = auVar6._0_8_;
  cVar1 = *(char *)(param_1 + 0xa8);
                    /* try { // try from 00848b18 to 00848b93 has its CatchHandler @ 00848c80 */
  uVar3 = (*(code *)puVar5[5])();
  bVar2 = cVar1 != '\x02';
  local_bc[0] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  local_78 = 9;
  if (bVar2) {
    local_78 = 7;
  }
  local_b4[0] = 0;
  local_b8[0] = (char)local_78 + '\x06';
  local_b0 = local_bc;
  uStack_a8 = 2;
  local_a0 = local_b8;
  local_80 = "quicv2 ku";
  if (bVar2) {
    local_80 = "quic kuquicv2 ku";
  }
  local_88 = 6;
  local_70 = local_b4;
  local_98 = 1;
  local_90 = "tls13 ";
  local_68 = 1;
  local_60 = 1;
  local_58 = 0;
  (*(code *)puVar5[4])(&local_108,pvVar4,&local_b0,6);
                    /* try { // try from 00848b94 to 00848b9b has its CatchHandler @ 00848c28 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = uStack_f0;
  *(undefined8 *)(param_1 + 0x68) = local_f8;
  *(undefined8 *)(param_1 + 0x80) = uStack_e0;
  *(undefined8 *)(param_1 + 0x78) = local_e8;
  *(undefined8 *)(param_1 + 0x90) = uStack_d0;
  *(undefined8 *)(param_1 + 0x88) = local_d8;
  *(undefined8 *)(param_1 + 0x98) = local_c8;
  *(undefined8 *)(param_1 + 0x60) = uStack_100;
  *(undefined8 *)(param_1 + 0x58) = local_108;
  if ((code *)*puVar5 != (code *)0x0) {
                    /* try { // try from 00848bcc to 00848bd3 has its CatchHandler @ 00848c04 */
    (*(code *)*puVar5)(pvVar4);
  }
  if (puVar5[1] != 0) {
    free(pvVar4);
  }
  return;
}


// ===== 00848cb0  <rustls::msgs::base::rustls::msgs::base::Payload>::into_owned =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::rustls::msgs::base::Payload>::into_owned */

void __rustcall
<rustls::msgs::base::rustls::msgs::base::Payload>::into_owned(size_t *param_1,size_t *param_2)

{
  undefined1 *__src;
  undefined1 *__dest;
  size_t sVar1;
  size_t __n;
  undefined8 uVar2;
  
  __src = (undefined1 *)param_2[1];
  __n = param_2[2];
  sVar1 = *param_2;
  __dest = __src;
  if (*param_2 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar2 = 0;
LAB_00848cf8:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,__n);
    }
    if (__n == 0) {
      sVar1 = 0;
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00848cf8;
      memcpy(__dest,__src,__n);
      sVar1 = __n;
    }
  }
  *param_1 = sVar1;
  param_1[1] = (size_t)__dest;
  param_1[2] = __n;
  return;
}


// ===== 00848d50  <rustls::msgs::base::rustls::msgs::base::Payload>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::rustls::msgs::base::Payload>::read */

void __rustcall
<rustls::msgs::base::rustls::msgs::base::Payload>::read(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar2 <= uVar1) {
    lVar3 = *param_2;
    param_2[2] = uVar1;
    param_1[2] = uVar1 - uVar2;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = lVar3 + uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c28);
}


// ===== 00848d94  <rustls::msgs::base::rustls::msgs::base::Payload>::into_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::rustls::msgs::base::Payload>::into_vec */

void __rustcall
<rustls::msgs::base::rustls::msgs::base::Payload>::into_vec(size_t *param_1,size_t *param_2)

{
  void *__dest;
  size_t sVar1;
  void *__src;
  undefined8 uVar2;
  size_t sVar3;
  
  if (*param_2 != 0xffffffffffffffff) {
    sVar3 = *param_2;
    sVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = sVar3;
    param_1[2] = sVar1;
    return;
  }
  sVar1 = param_2[2];
  if ((long)sVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (sVar1 == 0) {
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 1;
      return;
    }
    __src = (void *)param_2[1];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 1;
    __dest = (void *)FUN_004b25a4(sVar1,1);
    if (__dest != (void *)0x0) {
      *param_1 = sVar1;
      param_1[1] = (size_t)__dest;
      memcpy(__dest,__src,sVar1);
      param_1[2] = sVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,sVar1);
}


// ===== 00848e4c  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::copy_to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::copy_to_vec
    */

void __rustcall
<rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::copy_to_vec
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong __n_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  
  __n_00 = param_1[2];
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      return;
    }
    uVar7 = param_1[3];
    lVar8 = param_1[1] << 4;
    puVar9 = (ulong *)(*param_1 + 8);
    uVar4 = 0;
    do {
      uVar3 = *puVar9;
      uVar2 = uVar7 - uVar4;
      if ((uVar4 <= uVar7 && uVar2 != 0) && (__n_00 < uVar3 + uVar4)) {
        uVar1 = 0;
        if (uVar4 <= __n_00) {
          uVar1 = __n_00 - uVar4;
        }
        if (uVar3 <= uVar2) {
          uVar2 = uVar3;
        }
        __n = uVar2 - uVar1;
        if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae6800);
        }
        lVar6 = param_2[2];
        uVar5 = puVar9[-1];
        if ((ulong)(*param_2 - lVar6) < __n) {
          FUN_00874c84(param_2,lVar6,__n,1,1);
          lVar6 = param_2[2];
        }
        if (uVar2 != uVar1) {
          memcpy((void *)(param_2[1] + lVar6),(void *)(uVar5 + uVar1),__n);
        }
        param_2[2] = lVar6 + __n;
      }
      lVar8 = lVar8 + -0x10;
      puVar9 = puVar9 + 2;
      uVar4 = uVar3 + uVar4;
      if (lVar8 == 0) {
        return;
      }
    } while( true );
  }
  lVar8 = param_2[2];
  __src = (void *)param_1[1];
  if ((ulong)(*param_2 - lVar8) < __n_00) {
    FUN_00874c84(param_2,lVar8,__n_00,1,1);
    lVar8 = param_2[2];
  }
  else if (__n_00 == 0) goto LAB_00848f7c;
  memcpy((void *)(param_2[1] + lVar8),__src,__n_00);
LAB_00848f7c:
  param_2[2] = lVar8 + __n_00;
  return;
}


// ===== 00848fe4  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new */

void __rustcall
<rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::new
          (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = param_3;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      *param_1 = 0;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      return;
    }
    if (param_3 < 5) {
      lVar5 = 0;
      uVar7 = 0;
    }
    else {
      lVar6 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      uVar7 = 4;
      if ((param_3 & 3) != 0) {
        uVar7 = param_3 & 3;
      }
      plVar8 = param_2 + 5;
      lVar5 = param_3 - uVar7;
      lVar9 = lVar5;
      do {
        plVar1 = plVar8 + -4;
        lVar14 = *plVar8;
        plVar10 = plVar8 + -2;
        plVar2 = plVar8 + 2;
        lVar9 = lVar9 + -4;
        plVar8 = plVar8 + 8;
        lVar6 = *plVar1 + lVar6;
        lVar11 = *plVar10 + lVar11;
        lVar12 = lVar14 + lVar12;
        lVar13 = *plVar2 + lVar13;
      } while (lVar9 != 0);
      uVar7 = lVar12 + lVar6 + lVar13 + lVar11;
    }
    lVar6 = param_3 - lVar5;
    plVar8 = param_2 + lVar5 * 2 + 1;
    do {
      lVar6 = lVar6 + -1;
      uVar7 = *plVar8 + uVar7;
      plVar8 = plVar8 + 2;
    } while (lVar6 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = uVar7;
  return;
}


// ===== 00849098  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::to_vec =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::to_vec */

void __rustcall
<rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::to_vec
          (long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = param_2[2];
  if (*param_2 != 0) {
    lVar1 = param_2[3] - param_2[2];
  }
  if (-1 < lVar1) {
    if (lVar1 == 0) {
      lStack_40 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      lStack_40 = FUN_004b25a4(lVar1,1);
      if (lStack_40 == 0) goto LAB_008490c8;
    }
    local_38 = 0;
                    /* try { // try from 00849110 to 00849117 has its CatchHandler @ 0084913c */
    local_48 = lVar1;
    copy_to_vec(param_2,&local_48);
    param_1[1] = lStack_40;
    *param_1 = local_48;
    param_1[2] = local_38;
    return;
  }
  uVar2 = 0;
LAB_008490c8:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,lVar1);
}


// ===== 0084915c  <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::split_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::split_at */

void __rustcall
<rustls::msgs::message::outbound::rustls::msgs::message::outbound::OutboundChunks>::split_at
          (long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *param_2;
  uVar2 = param_2[2];
  if (lVar1 != 0) {
    uVar4 = param_2[3];
    lVar3 = param_2[1];
    param_1[7] = uVar4;
    if (uVar2 + param_3 <= uVar4) {
      uVar4 = uVar2 + param_3;
    }
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[4] = lVar1;
    param_1[5] = lVar3;
    param_1[6] = uVar4;
    return;
  }
  lVar1 = param_2[1];
  uVar4 = uVar2;
  if (param_3 <= uVar2) {
    uVar4 = param_3;
  }
  *param_1 = 0;
  param_1[1] = lVar1;
  param_1[2] = uVar4;
  param_1[4] = 0;
  param_1[5] = lVar1 + uVar4;
  param_1[6] = uVar2 - uVar4;
  return;
}


// ===== 008491bc  FUN_008491bc =====

ulong FUN_008491bc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 uStack_17;
  undefined1 uStack_14;
  byte bStack_13;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar2 == uVar3) {
    return 0xffff;
  }
  uVar11 = uVar3 + 1;
  param_1[2] = uVar11;
  if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar3,uVar11,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar10 = *param_1;
  bVar4 = *(byte *)(lVar10 + uVar3);
  uVar9 = bVar4 - 0x14;
  if (4 < uVar9) {
    return 0x4ffff;
  }
  if (uVar2 - uVar11 < 2) {
    return 0xffff;
  }
  uVar1 = uVar3 + 3;
  param_1[2] = uVar1;
  if ((0xfffffffffffffffd < uVar11) || (uVar2 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar11,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  uVar5 = *(ushort *)(lVar10 + uVar11);
  uVar7 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
  uVar8 = uVar5 & 0xff00ff;
  if (uVar7 < 0x303) {
    if (uVar7 < 0x301) {
      if (uVar7 == 2) {
        uVar11 = 0;
        goto LAB_0084933c;
      }
      if (uVar7 == 0x300) {
        uVar11 = 1;
        goto LAB_0084933c;
      }
    }
    else {
      if (uVar7 == 0x301) {
        uVar11 = 2;
        goto LAB_0084933c;
      }
      if (uVar7 == 0x302) {
        uVar11 = 3;
        goto LAB_0084933c;
      }
    }
  }
  else if (uVar7 < 0xfefc) {
    if (uVar7 == 0x303) {
      uVar11 = 4;
      goto LAB_0084933c;
    }
    if (uVar7 == 0x304) {
      uVar11 = 5;
      goto LAB_0084933c;
    }
  }
  else {
    if (uVar7 == 0xfefc) {
      uVar11 = 8;
      goto LAB_0084933c;
    }
    if (uVar7 == 0xfefd) {
      uVar11 = 7;
      goto LAB_0084933c;
    }
    if (uVar7 == 0xfeff) {
      uVar11 = 6;
      goto LAB_0084933c;
    }
  }
  if (uVar8 != 3) {
    return 0x5ffff;
  }
  uVar11 = 9;
LAB_0084933c:
  if (uVar2 - uVar1 < 2) {
    return 0xffff;
  }
  uVar3 = uVar3 + 5;
  param_1[2] = uVar3;
  if ((uVar1 < 0xfffffffffffffffe) && (uVar3 <= uVar2)) {
    uVar6 = *(ushort *)(lVar10 + uVar1);
    if (((uVar9 & 0xff) != 3) && (uVar6 == 0)) {
      return 0x2ffff;
    }
    uVar7 = uVar6 & 0xff00ff;
    if (8 < (uVar7 << 8) >> 0xb) {
      return 0x3ffff;
    }
    uStack_17 = (undefined1)uVar8;
    uStack_14 = (undefined1)(uVar6 >> 8);
    bStack_13 = (byte)uVar7;
    return (ulong)CONCAT13(uStack_14,CONCAT12(bVar4,CONCAT11((char)uVar9,uStack_17))) << 0x18 |
           (ulong)bStack_13 << 0x38 | uVar11 | (ulong)(uVar5 >> 8) << 0x10;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar3,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 00849420  <rustls::msgs::base::Payload_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::Payload as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::base::Payload_as_rustls::msgs::codec::Codec>::read(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (uVar2 <= uVar1) {
    param_2[2] = uVar1;
    uVar4 = _UNK_0029f318;
    uVar3 = _DAT_0029f310;
    param_1[2] = *param_2 + uVar2;
    param_1[3] = uVar1 - uVar2;
    param_1[1] = uVar4;
    *param_1 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c28);
}


// ===== 00849468  <rustls::msgs::base::Payload_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::Payload as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::base::Payload_as_rustls::msgs::codec::Codec>::encode(long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  
  lVar1 = param_2[2];
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_008494a8;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
LAB_008494a8:
  param_2[2] = lVar1 + __n;
  return;
}


// ===== 008494e8  <rustls::quic::Tag_as_core::convert::From<&[u8]>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::quic::Tag as core::convert::From<&[u8]>>::from */

void __rustcall
<rustls::quic::Tag_as_core::convert::From<&[u8]>>::from
          (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0x10) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::copy_from_slice_impl::len_mismatch_fail
            (0x10,param_3,&PTR_s__root__cargo_registry_src_index__00ae6830);
}


// ===== 00849514  <rustls::client::client_conn::connection::ClientConnection_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::client::client_conn::connection::ClientConnection as core::fmt::Debug>::fmt */

void __rustcall
<rustls::client::client_conn::connection::ClientConnection_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"ClientConnection",0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 0084954c  FUN_0084954c =====

void FUN_0084954c(undefined8 *param_1)

{
  <rustls_pki_types::server_name::DnsNameInner_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00849554  FUN_00849554 =====

undefined8 FUN_00849554(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar4 = *(long *)(*param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar5 = *(long *)(*param_1 + 8);
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = lVar5;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


// ===== 008495ec  FUN_008495ec =====

undefined8 FUN_008495ec(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar4 = *(long *)(*param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar5 = *(long *)(*param_1 + 8);
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = lVar5;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


// ===== 00849684  FUN_00849684 =====

void FUN_00849684(undefined8 *param_1)

{
  <ring::aead::algorithm::Algorithm_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0084968c  <rustls::msgs::base::Payload_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::Payload as core::fmt::Debug>::fmt */

undefined8 __rustcall
<rustls::msgs::base::Payload_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar5 = *(long *)(param_1 + 8);
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = lVar5;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


// ===== 00849720  FUN_00849720 =====

void FUN_00849720(ulong *param_1,uint *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[8];
  param_1[6] = param_1[6] + param_3;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar4 = param_3 & 0xfffffffffffffff8;
    param_3 = param_3 & 7;
    if (uVar4 != 0) goto LAB_00849858;
LAB_0084977c:
    if (param_3 < 4) goto LAB_008498b0;
LAB_00849784:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_008498dc;
  }
  else {
    uVar3 = 8 - uVar4;
    uVar7 = uVar3;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
    if (uVar7 < 4) {
      uVar9 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_008497b0;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_008497b0:
        puVar1 = (ushort *)((long)param_2 + uVar9);
        lVar11 = uVar9 << 3;
        uVar9 = uVar9 | 2;
        uVar6 = (ulong)*puVar1 << lVar11 | uVar6;
      }
    }
    if (uVar9 < uVar7) {
      uVar6 = (ulong)*(byte *)((long)param_2 + uVar9) << (uVar9 << 3) | uVar6;
    }
    uVar7 = param_1[7] | uVar6 << ((uVar4 & 7) << 3);
    param_1[7] = uVar7;
    if (param_3 < uVar3) {
      param_1[8] = uVar4 + param_3;
      return;
    }
    uVar6 = param_1[2];
    uVar9 = param_1[3] ^ uVar7;
    uVar4 = uVar6 + *param_1;
    uVar8 = uVar4 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
    uVar5 = param_1[1] + uVar9 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
    uVar6 = param_1[1] + uVar9 + uVar8;
    uVar4 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
    param_1[2] = uVar6 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    param_1[3] = uVar4 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    *param_1 = uVar4 ^ uVar7;
    param_1[1] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar4 = param_3 - uVar3 & 0xfffffffffffffff8;
    param_3 = param_3 - uVar3 & 7;
    if (uVar4 <= uVar3) goto LAB_0084977c;
LAB_00849858:
    uVar6 = param_1[2];
    uVar9 = param_1[3];
    uVar7 = *param_1;
    uVar5 = param_1[1];
    do {
      puVar2 = (ulong *)((long)param_2 + uVar3);
      uVar7 = uVar7 + uVar6;
      uVar3 = uVar3 + 8;
      uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
      uVar9 = *puVar2 ^ uVar9;
      uVar8 = uVar9 + uVar5 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
      uVar9 = uVar9 + uVar5 + uVar6;
      uVar6 = uVar9 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
      uVar5 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar8 + (uVar7 >> 0x20 | uVar7 << 0x20);
      uVar9 = uVar7 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
      uVar7 = uVar7 ^ *puVar2;
    } while (uVar3 < uVar4);
    param_1[2] = uVar6;
    param_1[3] = uVar9;
    *param_1 = uVar7;
    param_1[1] = uVar5;
    if (3 < param_3) goto LAB_00849784;
LAB_008498b0:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_008498dc;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_008498dc:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 00849908  <rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::AsRef<[u8]>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::PrefixedPayload as core::convert::AsRef<[u8]>>::as_ref */

undefined1  [16] __rustcall
<rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::AsRef<[u8]>>::as_ref
          (long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (4 < uVar1) {
    auVar2._8_8_ = uVar1 - 5;
    auVar2._0_8_ = *(long *)(param_1 + 8) + 5;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (5,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae6848);
}


// ===== 00849940  <rustls::msgs::base::PayloadU24_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU24 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::base::PayloadU24_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = param_2[1];
  uVar7 = param_2[2];
  if (uVar4 - uVar7 < 3) {
    param_1[2] = &DAT_002ff0bc;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar7 + 3;
  param_2[2] = uVar1;
  if ((0xfffffffffffffffc < uVar7) || (uVar4 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar7,uVar1,uVar4,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar6 = *param_2;
  pbVar2 = (byte *)(lVar6 + uVar7);
  uVar5 = ((uint)*pbVar2 << 8 | (uint)pbVar2[2] << 0x18) >> 8;
  uVar7 = (ulong)((uVar5 | (uint)pbVar2[1] << 0x18) >> 0x10 | uVar5 << 0x10);
  if (uVar4 - uVar1 < uVar7) {
    param_1[3] = 0;
    param_1[1] = 0xb;
    param_1[2] = uVar7;
    *param_1 = 1;
    return;
  }
  uVar3 = uVar1 + uVar7;
  param_2[2] = uVar3;
  if ((!CARRY8(uVar1,uVar7)) && (uVar3 <= uVar4)) {
    param_1[1] = 0xffffffffffffffff;
    param_1[2] = lVar6 + uVar1;
    param_1[3] = uVar7;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar3,uVar4,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 00849a34  <rustls::msgs::base::PayloadU24_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU24 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::base::PayloadU24_as_rustls::msgs::codec::Codec>::encode(long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_2[2];
  lVar4 = *param_2;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if ((ulong)(lVar4 - lVar2) < 3) {
    FUN_00874c84(param_2,lVar2,3,1,1);
    lVar2 = param_2[2];
    lVar4 = *param_2;
  }
  uVar1 = (uint)__n & 0xff00ff;
  lVar3 = param_2[1];
  lVar5 = lVar2 + 3;
  param_2[2] = lVar5;
  *(char *)((ushort *)(lVar3 + lVar2) + 1) = (char)uVar1;
  *(ushort *)(lVar3 + lVar2) =
       (ushort)(byte)(uVar1 >> 0x10) | (ushort)(((((uint)__n & 0xff00ff00) >> 8) << 0x10) >> 8);
  if ((ulong)(lVar4 - lVar5) < __n) {
    FUN_00874c84(param_2,lVar5,__n,1,1);
    lVar3 = param_2[1];
    lVar5 = param_2[2];
  }
  else if (__n == 0) goto LAB_00849aa0;
  memcpy((void *)(lVar3 + lVar5),__src,__n);
LAB_00849aa0:
  param_2[2] = lVar5 + __n;
  return;
}


// ===== 00849b0c  <rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::AsMut<[u8]>>::as_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::PrefixedPayload as core::convert::AsMut<[u8]>>::as_mut */

undefined1  [16] __rustcall
<rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::AsMut<[u8]>>::as_mut
          (long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (4 < uVar1) {
    auVar2._8_8_ = uVar1 - 5;
    auVar2._0_8_ = *(long *)(param_1 + 8) + 5;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (5,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae6860);
}


// ===== 00849b44  <rustls::msgs::base::PayloadU24_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU24 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<rustls::msgs::base::PayloadU24_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar5 = *(long *)(param_1 + 8);
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = lVar5;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


// ===== 00849bd8  <rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::From<&[u8]>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::outbound::PrefixedPayload as core::convert::From<&[u8]>>::from */

void __rustcall
<rustls::msgs::message::outbound::PrefixedPayload_as_core::convert::From<&[u8]>>::from
          (long *param_1,void *param_2,size_t param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_3 + 5;
  if (lVar1 < 0) {
    uVar3 = 0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar3 = 1;
    puVar2 = (undefined4 *)FUN_004b25a4(lVar1,1);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      if (param_3 != 0) {
        memcpy((void *)((long)puVar2 + 5),param_2,param_3);
      }
      *param_1 = lVar1;
      param_1[1] = (long)puVar2;
      param_1[2] = lVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,lVar1);
}


// ===== 00849c64  <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU16 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined1 *__dest;
  ulong uVar5;
  long lVar6;
  
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  if (uVar3 - uVar5 < 2) {
    param_1[2] = &DAT_002ff0a3;
    param_1[3] = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar5 + 2;
  param_2[2] = uVar1;
  if ((0xfffffffffffffffd < uVar5) || (uVar3 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar6 = *param_2;
  uVar4 = *(ushort *)(lVar6 + uVar5);
  uVar5 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
  if (uVar3 - uVar1 < uVar5) {
    param_1[3] = 0;
    param_1[1] = 0xb;
    param_1[2] = uVar5;
    *param_1 = 1;
    return;
  }
  uVar2 = uVar1 + uVar5;
  param_2[2] = uVar2;
  if ((!CARRY8(uVar1,uVar5)) && (uVar2 <= uVar3)) {
    if (uVar4 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(uVar5,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar5);
      }
      memcpy(__dest,(void *)(lVar6 + uVar1),uVar5);
    }
    param_1[1] = uVar5;
    param_1[2] = __dest;
    param_1[3] = uVar5;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 00849db4  <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU16 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::encode(long param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_2[2];
  lVar3 = *param_2;
  __src = *(void **)(param_1 + 8);
  __n = *(ulong *)(param_1 + 0x10);
  if ((ulong)(lVar3 - lVar1) < 2) {
    FUN_00874c84(param_2,lVar1,2,1,1);
    lVar1 = param_2[2];
    lVar3 = *param_2;
  }
  lVar4 = lVar1 + 2;
  lVar2 = param_2[1];
  param_2[2] = lVar4;
  *(ushort *)(lVar2 + lVar1) = (ushort)(__n >> 8) & 0xff | (ushort)(((uint)__n & 0xff00ff) << 8);
  if ((ulong)(lVar3 - lVar4) < __n) {
    FUN_00874c84(param_2,lVar4,__n,1,1);
    lVar2 = param_2[1];
    lVar4 = param_2[2];
  }
  else if (__n == 0) goto LAB_00849e14;
  memcpy((void *)(lVar2 + lVar4),__src,__n);
LAB_00849e14:
  param_2[2] = lVar4 + __n;
  return;
}


// ===== 00849e80  <rustls::msgs::base::PayloadU8_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU8 as core::fmt::Debug>::fmt */

undefined8 __rustcall
<rustls::msgs::base::PayloadU8_as_core::fmt::Debug>::fmt(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  code *pcStack_58;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar5 = *(long *)(param_1 + 8);
    do {
      pcStack_58 = FUN_0082d3c0;
      local_60 = &local_38;
      local_38 = lVar5;
      iVar3 = core::fmt::write(uVar1,uVar2,&DAT_002a1430,&local_60);
      if (iVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


// ===== 00849f14  <rustls::crypto::hash::Output_as_core::convert::AsRef<[u8]>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::hash::Output as core::convert::AsRef<[u8]>>::as_ref */

void __rustcall <rustls::crypto::hash::Output_as_core::convert::AsRef<[u8]>>::as_ref(long param_1)

{
  if (*(ulong *)(param_1 + 0x40) < 0x41) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0x40),0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 00849f40  <rustls::client::client_conn::connection::WriteEarlyData_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::client::client_conn::connection::WriteEarlyData as core::io::write::Write>::write */

undefined1  [16] __rustcall
<rustls::client::client_conn::connection::WriteEarlyData_as_core::io::write::Write>::write
          (long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulong uStack_20;
  
  lVar3 = *param_1;
  if (1 < *(byte *)(lVar3 + 0x358) - 1) {
    if (1 < *(byte *)(lVar3 + 0x358) - 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002ff1fd,0x28,&PTR_s__root__cargo_registry_src_index__00ae81e8);
    }
    auVar5._8_8_ = 0x1400000003;
    auVar5._0_8_ = 1;
    return auVar5;
  }
  uVar4 = *(ulong *)(lVar3 + 0x350);
  uStack_20 = uVar4;
  lVar2 = 0;
  if (param_3 <= uVar4) {
    uStack_20 = param_3;
    lVar2 = uVar4 - param_3;
  }
  *(long *)(lVar3 + 0x350) = lVar2;
  if (uStack_20 == 0) {
    return ZEXT816(0);
  }
  local_30 = 0;
  local_28 = param_2;
  uVar4 = FUN_0084c6b8(lVar3,&local_30,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  return auVar1 << 0x40;
}


// ===== 00849ff0  <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU8 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 *__dest;
  ulong uVar5;
  long lVar6;
  
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  if (uVar3 == uVar5) {
    param_1[2] = &DAT_002ff13f;
    param_1[3] = 2;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar5 + 1;
  param_2[2] = uVar1;
  if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar5,uVar1,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
  }
  lVar6 = *param_2;
  bVar4 = *(byte *)(lVar6 + uVar5);
  uVar5 = (ulong)bVar4;
  if (uVar3 - uVar1 < uVar5) {
    param_1[3] = 0;
    param_1[1] = 0xb;
    param_1[2] = uVar5;
    *param_1 = 1;
    return;
  }
  uVar2 = uVar1 + uVar5;
  param_2[2] = uVar2;
  if ((!CARRY8(uVar1,uVar5)) && (uVar2 <= uVar3)) {
    if (bVar4 == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      __dest = (undefined1 *)FUN_004b25a4(uVar5,1);
      if (__dest == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,uVar5);
      }
      memcpy(__dest,(void *)(lVar6 + uVar1),uVar5);
    }
    param_1[1] = uVar5;
    param_1[2] = __dest;
    param_1[3] = uVar5;
    *param_1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar1,uVar2,uVar3,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 0084a12c  <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU8 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::encode(long param_1,long *param_2)

{
  long lVar1;
  void *__src;
  ulong __n;
  long lVar2;
  
  lVar2 = param_2[2];
  __n = *(ulong *)(param_1 + 0x10);
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  lVar1 = lVar2 + 1;
  *(char *)(param_2[1] + lVar2) = (char)__n;
  param_2[2] = lVar1;
  __src = *(void **)(param_1 + 8);
  if ((ulong)(*param_2 - lVar1) < __n) {
    FUN_00874c84(param_2,lVar1,__n,1,1);
    lVar1 = param_2[2];
  }
  else if (__n == 0) goto LAB_0084a1a0;
  memcpy((void *)(param_2[1] + lVar1),__src,__n);
  lVar1 = param_2[2];
LAB_0084a1a0:
  param_2[2] = lVar1 + __n;
  return;
}


// ===== 0084a1dc  <rustls::msgs::base::PayloadU8_as_zeroize::Zeroize>::zeroize =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::base::PayloadU8 as zeroize::Zeroize>::zeroize */

void __rustcall <rustls::msgs::base::PayloadU8_as_zeroize::Zeroize>::zeroize(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  lVar3 = *param_1;
  param_1[2] = 0;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}


// ===== 0084a210  FUN_0084a210 =====

void FUN_0084a210(undefined8 *param_1,long param_2,uint param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_f0;
  uint local_e8;
  undefined2 local_38;
  
  local_38 = 4;
  local_f0 = 0x8000000000000000;
  local_e8 = (param_3 & 0xff) << 0x10 | param_4 << 0x18 | 1;
                    /* try { // try from 0084a25c to 0084a263 has its CatchHandler @ 0084a29c */
  <rustls::common_state::rustls::common_state::CommonState>::send_msg
            (param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
  uVar3 = param_5[1];
  uVar2 = *param_5;
  uVar1 = param_5[2];
  *(undefined1 *)(param_2 + 0x335) = 1;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  *param_1 = 0x8000000000000019;
  return;
}


// ===== 0084a2b4  FUN_0084a2b4 =====

void FUN_0084a2b4(undefined8 *param_1,long param_2,uint param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_f0;
  uint local_e8;
  undefined2 local_38;
  
  local_38 = 4;
  local_f0 = 0x8000000000000000;
  local_e8 = (param_3 & 0xff) << 0x10 | param_4 << 0x18 | 1;
                    /* try { // try from 0084a300 to 0084a307 has its CatchHandler @ 0084a33c */
  <rustls::common_state::rustls::common_state::CommonState>::send_msg
            (param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
  uVar3 = param_5[1];
  uVar2 = *param_5;
  uVar5 = param_5[3];
  uVar4 = param_5[2];
  *(undefined1 *)(param_2 + 0x335) = 1;
  uVar7 = param_5[5];
  uVar6 = param_5[4];
  uVar1 = param_5[6];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_1[6] = uVar1;
  return;
}


// ===== 0084a354  FUN_0084a354 =====

void FUN_0084a354(long *param_1,long param_2,long *param_3,void *param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  if ((((*(char *)(param_2 + 0x333) == '\x01') && (*(short *)(param_2 + 0x328) != 5)) &&
      (-0x7ffffffffffffffc < *param_3)) && (*(char *)(param_2 + 0x330) == (char)param_3[0x16])) {
    if (*(char *)(param_2 + 0x32d) == '\0') {
      pcVar1 = (code *)*param_5;
      *param_1 = -0x7fffffffffffffe6;
      *(undefined1 *)(param_1 + 1) = 0x41;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0084a538 to 0084a53f has its CatchHandler @ 0084a574 */
        (*pcVar1)(param_4);
      }
      if (param_5[1] != 0) {
        free(param_4);
      }
    }
    else {
      *(char *)(param_2 + 0x32d) = *(char *)(param_2 + 0x32d) + -1;
      local_100 = -0x8000000000000000;
      lStack_48 = CONCAT62(lStack_48._2_6_,4);
      lStack_f8 = CONCAT44(lStack_f8._4_4_,0x180000);
                    /* try { // try from 0084a3f4 to 0084a3ff has its CatchHandler @ 0084a590 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,&local_100,*(char *)(param_2 + 0x49) == '\x02');
      param_1[1] = (long)param_4;
      param_1[2] = (long)param_5;
      *param_1 = -1;
    }
    FUN_0084af40(param_3);
    return;
  }
  lStack_68 = param_3[0x13];
  local_70 = param_3[0x12];
  lStack_58 = param_3[0x15];
  lStack_60 = param_3[0x14];
  lStack_48 = param_3[0x17];
  local_50 = param_3[0x16];
  lStack_a8 = param_3[0xb];
  local_b0 = param_3[10];
  lStack_98 = param_3[0xd];
  lStack_a0 = param_3[0xc];
  lStack_88 = param_3[0xf];
  local_90 = param_3[0xe];
  lStack_78 = param_3[0x11];
  lStack_80 = param_3[0x10];
  lStack_f8 = param_3[1];
  local_100 = *param_3;
  lStack_e8 = param_3[3];
  lStack_f0 = param_3[2];
  lStack_d8 = param_3[5];
  local_e0 = param_3[4];
  lStack_c8 = param_3[7];
  local_d0 = param_3[6];
  lStack_b8 = param_3[9];
  lStack_c0 = param_3[8];
  local_158 = param_2;
  local_150 = param_6;
  uStack_148 = param_7;
  (*(code *)param_5[3])(param_1,param_4,&local_158,&local_100);
  if (*param_1 != -1) {
    if (*param_1 + 0x7fffffffffffffefU < 2) {
      lStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      lStack_130 = param_1[2];
      local_110 = param_1[6];
      lStack_48 = CONCAT62(lStack_48._2_6_,4);
      lStack_118 = param_1[5];
      local_120 = param_1[4];
      local_100 = -0x8000000000000000;
      lStack_f8 = CONCAT44(lStack_f8._4_4_,0x10001);
                    /* try { // try from 0084a4c8 to 0084a4d3 has its CatchHandler @ 0084a5b0 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,&local_100,*(char *)(param_2 + 0x49) == '\x02');
      *(undefined1 *)(param_2 + 0x335) = 1;
    }
    return;
  }
  auVar2 = (**(code **)(param_1[2] + 0x40))(param_1[1]);
  *(undefined1 (*) [16])(param_1 + 1) = auVar2;
  return;
}


// ===== 0084a5c8  FUN_0084a5c8 =====

void FUN_0084a5c8(long *param_1,long param_2,long *param_3,void *param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  if ((((*(char *)(param_2 + 0x333) == '\x01') && (*(short *)(param_2 + 0x328) != 5)) &&
      (-0x7ffffffffffffffc < *param_3)) && (*(char *)(param_2 + 0x330) == (char)param_3[0x16])) {
    if (*(char *)(param_2 + 0x32d) == '\0') {
      pcVar1 = (code *)*param_5;
      *param_1 = -0x7fffffffffffffe6;
      *(undefined1 *)(param_1 + 1) = 0x41;
      if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0084a7ac to 0084a7b3 has its CatchHandler @ 0084a7e8 */
        (*pcVar1)(param_4);
      }
      if (param_5[1] != 0) {
        free(param_4);
      }
    }
    else {
      *(char *)(param_2 + 0x32d) = *(char *)(param_2 + 0x32d) + -1;
      local_100 = -0x8000000000000000;
      lStack_48 = CONCAT62(lStack_48._2_6_,4);
      lStack_f8 = CONCAT44(lStack_f8._4_4_,0x180000);
                    /* try { // try from 0084a668 to 0084a673 has its CatchHandler @ 0084a804 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,&local_100,*(char *)(param_2 + 0x49) == '\x02');
      param_1[1] = (long)param_4;
      param_1[2] = (long)param_5;
      *param_1 = -1;
    }
    FUN_0084af40(param_3);
    return;
  }
  lStack_68 = param_3[0x13];
  local_70 = param_3[0x12];
  lStack_58 = param_3[0x15];
  lStack_60 = param_3[0x14];
  lStack_48 = param_3[0x17];
  local_50 = param_3[0x16];
  lStack_a8 = param_3[0xb];
  local_b0 = param_3[10];
  lStack_98 = param_3[0xd];
  lStack_a0 = param_3[0xc];
  lStack_88 = param_3[0xf];
  local_90 = param_3[0xe];
  lStack_78 = param_3[0x11];
  lStack_80 = param_3[0x10];
  lStack_f8 = param_3[1];
  local_100 = *param_3;
  lStack_e8 = param_3[3];
  lStack_f0 = param_3[2];
  lStack_d8 = param_3[5];
  local_e0 = param_3[4];
  lStack_c8 = param_3[7];
  local_d0 = param_3[6];
  lStack_b8 = param_3[9];
  lStack_c0 = param_3[8];
  local_158 = param_2;
  local_150 = param_6;
  uStack_148 = param_7;
  (*(code *)param_5[3])(param_1,param_4,&local_158,&local_100);
  if (*param_1 != -1) {
    if (*param_1 + 0x7fffffffffffffefU < 2) {
      lStack_138 = param_1[1];
      local_140 = *param_1;
      lStack_128 = param_1[3];
      lStack_130 = param_1[2];
      local_110 = param_1[6];
      lStack_48 = CONCAT62(lStack_48._2_6_,4);
      lStack_118 = param_1[5];
      local_120 = param_1[4];
      local_100 = -0x8000000000000000;
      lStack_f8 = CONCAT44(lStack_f8._4_4_,0x10001);
                    /* try { // try from 0084a73c to 0084a747 has its CatchHandler @ 0084a824 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_2,&local_100,*(char *)(param_2 + 0x49) == '\x02');
      *(undefined1 *)(param_2 + 0x335) = 1;
    }
    return;
  }
  auVar2 = (**(code **)(param_1[2] + 0x40))(param_1[1]);
  *(undefined1 (*) [16])(param_1 + 1) = auVar2;
  return;
}


// ===== 0084a83c  FUN_0084a83c =====

void FUN_0084a83c(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0xfffffffffffffffc) {
    uVar1 = param_1[1];
    if (-1 < (long)uVar1) {
      if ((((param_1[4] & 1) == 0) && (param_1[5] != 0xffffffffffffffff)) && (param_1[5] != 0)) {
        free((void *)param_1[6]);
      }
      __ptr = (void *)param_1[2];
      uVar2 = param_1[3];
      if (uVar2 != 0) {
        puVar3 = (undefined8 *)((long)__ptr + 8);
        do {
          if (puVar3[-1] != 0) {
            free((void *)*puVar3);
          }
          uVar2 = uVar2 - 1;
          puVar3 = puVar3 + 3;
        } while (uVar2 != 0);
      }
      if (uVar1 != 0) {
        free(__ptr);
        return;
      }
    }
  }
  else if (uVar1 != 0xfffffffffffffffd) {
    if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
      free((void *)param_1[1]);
    }
    if ((param_1[0x1f] < 0xfffffffffffffffe) && (param_1[0x1f] != 0)) {
      free((void *)param_1[0x20]);
    }
    if ((param_1[0x3e] < 0xfffffffffffffffe) && (param_1[0x3e] != 0)) {
      free((void *)param_1[0x3f]);
    }
    if ((param_1[0x5d] < 0xfffffffffffffffe) && (param_1[0x5d] != 0)) {
      free((void *)param_1[0x5e]);
    }
    if ((param_1[0x7c] < 0xfffffffffffffffe) && (param_1[0x7c] != 0)) {
      free((void *)param_1[0x7d]);
    }
    if ((param_1[0x9b] < 0xfffffffffffffffe) && (param_1[0x9b] != 0)) {
      free((void *)param_1[0x9c]);
      return;
    }
  }
  return;
}


// ===== 0084a9a8  FUN_0084a9a8 =====

void FUN_0084a9a8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (((ulong)puVar2[-1] < 0xfffffffffffffffe) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0084aa2c  FUN_0084aa2c =====

void FUN_0084aa2c(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0084aa4c to 0084aa53 has its CatchHandler @ 0084aa84 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0084aaa4  FUN_0084aaa4 =====

void FUN_0084aaa4(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0084aac4 to 0084aacb has its CatchHandler @ 0084aafc */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0084ab1c  FUN_0084ab1c =====

void FUN_0084ab1c(byte *param_1)

{
  if ((((*param_1 & 1) == 0) && (*(long *)(param_1 + 8) != -1)) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0084ab44  FUN_0084ab44 =====

void FUN_0084ab44(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar6 = *param_1;
  uVar4 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar4 = 0xd;
  }
  if ((0xc < uVar4) && (1 < uVar4 - 0xe)) {
    if (uVar4 == 0xd) {
      if ((((param_1[3] & 1) == 0) && (param_1[4] != 0xffffffffffffffff)) && (param_1[4] != 0)) {
        free((void *)param_1[5]);
      }
      __ptr = (void *)param_1[1];
      uVar4 = param_1[2];
      if (uVar4 != 0) {
        puVar7 = (undefined8 *)((long)__ptr + 8);
        do {
          if (puVar7[-1] != 0) {
            free((void *)*puVar7);
          }
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + 3;
        } while (uVar4 != 0);
      }
      if (uVar6 != 0) {
        free(__ptr);
        return;
      }
    }
    else {
      plVar3 = (long *)param_1[1];
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
        ::drop_slow();
        return;
      }
    }
  }
  return;
}


// ===== 0084ac4c  FUN_0084ac4c =====

void FUN_0084ac4c(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if ((-0x7fffffffffffffec < lVar2) && (lVar2 != -1)) {
    __ptr = (void *)param_1[1];
    lVar3 = param_1[2] + 1;
    pvVar1 = __ptr;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0084ac94 to 0084ac97 has its CatchHandler @ 0084acdc */
      FUN_007ff534(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    if (lVar2 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0084ad20  FUN_0084ad20 =====

void FUN_0084ad20(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *param_1 + 0x7fffffffffffffef;
  if (*param_1 < 0x8000000000000011) {
    lVar5 = 0xb;
  }
  if (lVar5 < 0xb) {
    if (lVar5 < 8) {
      if (lVar5 - 2U < 6) {
        return;
      }
      if ((lVar5 == 0) || (lVar5 == 1)) {
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar5 - 9U < 2) {
        return;
      }
      if (lVar5 == 8) {
        if ((long)param_1[1] < -0x7fffffffffffffeb) {
          return;
        }
        if (param_1[1] == 0xffffffffffffffff) {
          return;
        }
        lVar5 = param_1[3] + 1;
        uVar3 = param_1[2];
        while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0084ae00 to 0084ae03 has its CatchHandler @ 0084aef8 */
          FUN_007ff534(uVar3);
          uVar3 = uVar3 + 0x70;
        }
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
  }
  else if (lVar5 < 0xe) {
    if (lVar5 == 0xb) {
      FUN_0084ab44(param_1);
      return;
    }
    if (lVar5 == 0xc) {
      if (param_1[1] != 4) {
        return;
      }
      param_1 = param_1 + 2;
      plVar4 = (long *)*param_1;
      do {
        lVar5 = *plVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0084ae98;
    }
    if (lVar5 == 0xd) {
      if (param_1[1] == 0) {
        return;
      }
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar5 - 0xeU < 7) {
    return;
  }
  param_1 = param_1 + 1;
  plVar4 = (long *)*param_1;
  do {
    lVar5 = *plVar4 + -1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0084ae98:
  if (lVar5 != 0) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow(param_1);
  return;
}


// ===== 0084af40  FUN_0084af40 =====

void FUN_0084af40(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (4 < uVar1) {
    uVar1 = 1;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == 1) {
                    /* try { // try from 0084af70 to 0084af7b has its CatchHandler @ 0084afd0 */
      FUN_0084aff4(param_1 + 3);
      uVar1 = *param_1;
      goto joined_r0x0084afa8;
    }
  }
  else if ((uVar1 != 2) && (uVar1 == 3)) {
    return;
  }
  param_1 = param_1 + 1;
  uVar1 = *param_1;
joined_r0x0084afa8:
  if ((uVar1 != 0xffffffffffffffff) && (uVar1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0084aff4  FUN_0084aff4 =====

void FUN_0084aff4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  uVar6 = *param_1;
  uVar8 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar8 = 1;
  }
  switch(uVar8) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    if (uVar6 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    lVar9 = param_1[8] + 1;
    uVar8 = param_1[7];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 0084b184 to 0084b187 has its CatchHandler @ 0084b5b4 */
      FUN_007feea4(uVar8);
      uVar8 = uVar8 + 0x40;
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
      return;
    }
    break;
  case 2:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 0084b28c to 0084b28f has its CatchHandler @ 0084b504 */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
    goto LAB_0084b298;
  case 3:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar11 = (ulong *)param_1[2];
      lVar9 = 0;
      puVar12 = puVar11;
      do {
        uVar5 = *puVar12;
        uVar6 = uVar5 ^ 0x8000000000000000;
        if (3 < uVar6) {
          uVar6 = 4;
        }
        if ((long)uVar6 < 2) {
          if (uVar6 != 0) {
            if (uVar6 == 1) goto LAB_0084b35c;
LAB_0084b338:
            puVar3 = puVar12;
            if (uVar5 != 0xffffffffffffffff) goto joined_r0x0084b368;
          }
        }
        else if (uVar6 != 2) {
          if (uVar6 != 3) goto LAB_0084b338;
LAB_0084b35c:
          uVar5 = puVar12[1];
          puVar3 = puVar11 + lVar9 * 4 + 1;
joined_r0x0084b368:
          if (uVar5 != 0) {
            free((void *)puVar3[1]);
          }
        }
        uVar8 = uVar8 - 1;
        puVar12 = puVar12 + 4;
        lVar9 = lVar9 + 1;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    pvVar4 = (void *)param_1[2];
    goto LAB_0084b388;
  case 4:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[2] + 8);
      do {
        if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_0084b2a4;
  case 5:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
                    /* try { // try from 0084b3fc to 0084b403 has its CatchHandler @ 0084b4dc */
    FUN_00808fd4(param_1 + 4);
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
      return;
    }
    break;
  default:
    uVar8 = param_1[1];
    if (uVar8 == 0xffffffffffffffff) {
      return;
    }
    goto joined_r0x0084b2c8;
  case 7:
    if (param_1[1] == 0xffffffffffffffff) {
      uVar8 = param_1[2];
      if (uVar8 == 0xffffffffffffffff) {
        return;
      }
      lVar9 = 0x10;
    }
    else {
      if (param_1[5] == 0xffffffffffffffff) {
        lVar9 = 0x30;
      }
      else {
        if (param_1[5] != 0) {
          free((void *)param_1[6]);
        }
        if (param_1[8] != 0) {
          free((void *)param_1[9]);
        }
        lVar9 = 0x58;
      }
      if (*(long *)((long)param_1 + lVar9) != 0) {
        free((void *)((long *)((long)param_1 + lVar9))[1]);
      }
      uVar8 = param_1[1];
      lVar9 = 8;
    }
    if (uVar8 != 0) {
      free(*(void **)((long)param_1 + lVar9 + 8));
      return;
    }
    break;
  case 8:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    uVar8 = param_1[9];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[8] + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    pvVar4 = (void *)param_1[8];
    goto LAB_0084b2a8;
  case 9:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    lVar9 = param_1[6] + 1;
    uVar8 = param_1[5];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 0084b1b8 to 0084b1bb has its CatchHandler @ 0084b570 */
      FUN_007ff374(uVar8);
      uVar8 = uVar8 + 0x20;
    }
    goto LAB_0084b1c4;
  case 10:
    uVar8 = param_1[1];
joined_r0x0084b2c8:
    if (uVar8 != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 0xe:
    plVar7 = (long *)param_1[1];
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(param_1 + 1);
      return;
    }
    break;
  case 0xf:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    plVar7 = (long *)param_1[7];
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0084b084 to 0084b087 has its CatchHandler @ 0084b4c8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    uVar8 = param_1[6];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[5] + 8);
      do {
        if (((ulong)puVar10[-1] < 0xfffffffffffffffe) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 4;
      } while (uVar8 != 0);
    }
LAB_0084b1c4:
    if (param_1[4] != 0) {
      pvVar4 = (void *)param_1[5];
LAB_0084b388:
      free(pvVar4);
      return;
    }
    break;
  case 0x10:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 0084b26c to 0084b26f has its CatchHandler @ 0084b528 */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
LAB_0084b298:
    if (param_1[1] != 0) {
LAB_0084b2a4:
      pvVar4 = (void *)param_1[2];
LAB_0084b2a8:
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 0084b600  <rustls::common_state::rustls::common_state::CommonState>::process_alert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::process_alert */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::process_alert
          (undefined8 *param_1,long param_2,char *param_3)

{
  undefined8 local_168;
  char cStack_160;
  char cStack_15f;
  undefined6 uStack_15e;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_38;
  
  if (*param_3 == '\x02') {
    local_38 = 4;
    local_130 = 0x800000000000001b;
    uStack_128 = CONCAT62(uStack_128._2_6_,*(undefined2 *)(param_3 + 2));
    local_f0 = 0x8000000000000000;
    local_e8 = 0xd0001;
                    /* try { // try from 0084b664 to 0084b66f has its CatchHandler @ 0084b7e4 */
    send_msg(param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
    *(undefined1 *)(param_2 + 0x335) = 1;
  }
  else {
    cStack_160 = param_3[2];
    if ((*(char *)(param_2 + 0x333) == '\x01') && (cStack_160 == '\0')) {
      *(undefined1 *)(param_2 + 0x337) = 1;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    cStack_15f = param_3[3];
    local_168 = 0x800000000000001b;
    if (*param_3 == '\0') {
      if (*(char *)(param_2 + 0x32c) == '\0') {
        *param_1 = 0x800000000000001a;
        *(undefined1 *)(param_1 + 1) = 0x42;
      }
      else {
        *(char *)(param_2 + 0x32c) = *(char *)(param_2 + 0x32c) + -1;
        if ((cStack_160 != '\x17') && (*(short *)(param_2 + 0x328) == 5)) {
          uStack_128 = CONCAT62(uStack_15e,CONCAT11(cStack_15f,cStack_160));
          local_38 = 4;
          local_f0 = 0x8000000000000000;
          local_130 = 0x800000000000001b;
          local_e8 = 0x100001;
                    /* try { // try from 0084b778 to 0084b783 has its CatchHandler @ 0084b7d0 */
          send_msg(param_2,&local_f0,*(char *)(param_2 + 0x49) == '\x02');
          uStack_128 = CONCAT62(uStack_15e,CONCAT11(cStack_15f,cStack_160));
          *(undefined1 *)(param_2 + 0x335) = 1;
          local_100 = local_138;
          local_130 = local_168;
          uStack_120 = local_158;
          uStack_118 = uStack_150;
          local_110 = local_148;
          uStack_108 = uStack_140;
          goto LAB_0084b6ec;
        }
        *param_1 = 0xffffffffffffffff;
      }
      FUN_0084ad20(&local_168);
      return;
    }
    uStack_128 = CONCAT62(uStack_15e,CONCAT11(cStack_15f,cStack_160));
    local_130 = 0x800000000000001b;
    local_100 = local_138;
    uStack_120 = local_158;
    uStack_118 = uStack_150;
    local_110 = local_148;
    uStack_108 = uStack_140;
  }
LAB_0084b6ec:
  param_1[1] = uStack_128;
  *param_1 = local_130;
  param_1[3] = uStack_118;
  param_1[2] = uStack_120;
  param_1[5] = uStack_108;
  param_1[4] = local_110;
  param_1[6] = local_100;
  return;
}


// ===== 0084b7fc  <rustls::common_state::rustls::common_state::CommonState>::write_plaintext =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::write_plaintext */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::write_plaintext
          (undefined8 *param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t __n;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  void *pvVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long local_160;
  void *local_158;
  size_t local_150;
  undefined1 auStack_148 [32];
  long local_128;
  ulong local_120;
  ulong local_118;
  ulong uStack_110;
  undefined1 local_108;
  undefined2 local_106;
  undefined2 local_70;
  
  uVar3 = _DAT_0029fde0;
  uVar24 = param_3[2];
  uVar4 = param_3[3];
  lVar10 = *param_3;
  uVar7 = uVar24;
  if (lVar10 != 0) {
    uVar7 = uVar4 - uVar24;
  }
  if (uVar7 == 0) {
    param_1[1] = _UNK_0029fde8;
    *param_1 = uVar3;
    return;
  }
  uVar23 = *(ulong *)(param_2 + 800);
  if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s__root__cargo_registry_src_index__00ae6908);
  }
  lVar18 = param_3[1];
  if (!CARRY8(uVar7 - 1,uVar23)) {
    uVar8 = 0;
    if (uVar23 != 0) {
      uVar8 = ((uVar7 - 1) + uVar23) / uVar23;
    }
    uVar7 = *(ulong *)(param_2 + 0x38);
    if (*(short *)(param_2 + 0x328) == 5) {
      uVar6 = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar7;
        if (uVar11 <= uVar7) {
          uVar13 = uVar11;
        }
        if (uVar13 + uVar6 == *(ulong *)(param_2 + 0x30)) {
          *(undefined1 *)(param_2 + 0x33b) = 1;
        }
        else if (0xfffffffffffffffd < uVar13 + uVar6) {
LAB_0084bdc4:
          *param_1 = 1;
          return;
        }
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar6 < uVar8);
    }
    else {
      uVar6 = 0;
      uVar11 = 0xffffffffffffffff;
      do {
        uVar13 = uVar7;
        if (uVar11 <= uVar7) {
          uVar13 = uVar11;
        }
        if (uVar13 + uVar6 == *(ulong *)(param_2 + 0x30)) {
          if ((*(byte *)(param_2 + 0x335) & 1) == 0) {
            *(undefined2 *)(param_2 + 0x335) = 0x101;
            local_70 = 4;
            local_128 = -0x8000000000000000;
            local_120 = local_120 & 0xffffffff00000000;
            send_msg(param_2,&local_128,*(char *)(param_2 + 0x49) == '\x02');
          }
          goto LAB_0084bdc4;
        }
        if (0xfffffffffffffffd < uVar13 + uVar6) goto LAB_0084bdc4;
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar6 < uVar8);
    }
  }
  lVar21 = *(long *)(param_2 + 0x308);
  *(undefined8 *)(param_2 + 0x308) = 0xffffffffffffffff;
  if (lVar21 != -1) {
    lVar19 = *(long *)(param_2 + 0x318);
    pvVar22 = *(void **)(param_2 + 0x310);
    if (lVar19 != 0) {
      uVar8 = *(ulong *)(param_2 + 0x98);
      uVar7 = *(ulong *)(param_2 + 0xb0);
      if (uVar7 == uVar8) {
                    /* try { // try from 0084b88c to 0084b88f has its CatchHandler @ 0084be44 */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
        ::grow();
        uVar7 = *(ulong *)(param_2 + 0xb0);
        uVar8 = *(ulong *)(param_2 + 0x98);
      }
      uVar6 = *(long *)(param_2 + 0xa8) + uVar7;
      *(ulong *)(param_2 + 0xb0) = uVar7 + 1;
      uVar7 = 0;
      if (uVar8 <= uVar6) {
        uVar7 = uVar8;
      }
      plVar9 = (long *)(*(long *)(param_2 + 0xa0) + (uVar6 - uVar7) * 0x18);
      *plVar9 = lVar21;
      plVar9[1] = (long)pvVar22;
      plVar9[2] = lVar19;
      uVar7 = *(ulong *)(param_2 + 0xb0);
      goto joined_r0x0084b968;
    }
    if (lVar21 != 0) {
      free(pvVar22);
    }
  }
  uVar7 = *(ulong *)(param_2 + 0xb0);
joined_r0x0084b968:
  if (uVar7 == 0) {
    lVar19 = 0;
  }
  else {
    lVar21 = *(long *)(param_2 + 0xa0);
    uVar11 = *(ulong *)(param_2 + 0xa8);
    uVar6 = *(ulong *)(param_2 + 0x98);
    uVar8 = 0;
    if (uVar6 <= uVar11) {
      uVar8 = uVar6;
    }
    lVar12 = uVar11 - uVar8;
    uVar13 = uVar6 - lVar12;
    lVar19 = uVar7 - uVar13;
    if (uVar7 < uVar13 || lVar19 == 0) {
      uVar6 = lVar12 + uVar7;
    }
    uVar14 = lVar19 * 0x18;
    if (uVar7 < uVar13 || lVar19 == 0) {
      uVar14 = 0;
    }
    lVar19 = 0;
    if (uVar6 - lVar12 != 0) {
      uVar7 = (uVar6 - lVar12) * 0x18;
      uVar6 = uVar7 / 0x18;
      if (uVar7 < 0x78) {
        lVar15 = 0;
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        lVar12 = 0;
        lVar25 = 0;
        lVar26 = 0;
        uVar7 = 4;
        if ((uVar6 & 3) != 0) {
          uVar7 = uVar6 & 3;
        }
        lVar15 = uVar6 - uVar7;
        lVar16 = uVar7 - uVar6;
        plVar9 = (long *)(uVar11 * 0x18 + uVar8 * -0x18 + lVar21 + 0x40);
        do {
          plVar1 = plVar9 + -6;
          lVar27 = *plVar9;
          plVar17 = plVar9 + -3;
          plVar2 = plVar9 + 3;
          lVar16 = lVar16 + 4;
          plVar9 = plVar9 + 0xc;
          lVar19 = *plVar1 + lVar19;
          lVar12 = *plVar17 + lVar12;
          lVar25 = lVar27 + lVar25;
          lVar26 = *plVar2 + lVar26;
        } while (lVar16 != 0);
        lVar19 = lVar25 + lVar19 + lVar26 + lVar12;
      }
      lVar12 = lVar15 - uVar6;
      plVar9 = (long *)(uVar11 * 0x18 + lVar15 * 0x18 + uVar8 * -0x18 + lVar21 + 0x10);
      do {
        bVar5 = lVar12 != -1;
        lVar12 = lVar12 + 1;
        lVar19 = *plVar9 + lVar19;
        plVar9 = plVar9 + 3;
      } while (bVar5);
    }
    if (uVar14 != 0) {
      uVar7 = uVar14 / 0x18;
      if (uVar14 < 0x78) {
        lVar15 = 0;
      }
      else {
        lVar12 = 0;
        lVar25 = 0;
        lVar26 = 0;
        uVar8 = 4;
        if ((uVar7 & 3) != 0) {
          uVar8 = uVar7 & 3;
        }
        lVar15 = uVar7 - uVar8;
        plVar9 = (long *)(lVar21 + 0x40);
        lVar16 = lVar15;
        do {
          plVar1 = plVar9 + -6;
          lVar27 = *plVar9;
          plVar17 = plVar9 + -3;
          plVar2 = plVar9 + 3;
          lVar16 = lVar16 + -4;
          plVar9 = plVar9 + 0xc;
          lVar19 = *plVar1 + lVar19;
          lVar12 = *plVar17 + lVar12;
          lVar25 = lVar27 + lVar25;
          lVar26 = *plVar2 + lVar26;
        } while (lVar16 != 0);
        lVar19 = lVar25 + lVar19 + lVar26 + lVar12;
      }
      lVar12 = uVar7 - lVar15;
      plVar9 = (long *)(lVar21 + lVar15 * 0x18 + 0x10);
      do {
        lVar12 = lVar12 + -1;
        lVar19 = *plVar9 + lVar19;
        plVar9 = plVar9 + 3;
      } while (lVar12 != 0);
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar7 = lVar19 - *(long *)(param_2 + 0xb8);
  pcVar20 = *(code **)(*(long *)(param_2 + 0x18) + 0x20);
  uVar8 = uVar24;
  if (lVar10 == 0) {
    do {
      uVar6 = uVar8;
      if (uVar23 <= uVar8) {
        uVar6 = uVar23;
      }
      uVar8 = uVar8 - uVar6;
      lVar21 = (*pcVar20)(uVar3);
      uVar7 = uVar7 + lVar21 + 5;
    } while (uVar8 != 0);
  }
  else {
    do {
      uVar6 = uVar8 + uVar23;
      uVar11 = uVar4;
      if (uVar6 <= uVar4) {
        uVar11 = uVar6;
      }
      lVar21 = (*pcVar20)(uVar3,uVar11 - uVar8);
      uVar7 = uVar7 + lVar21 + 5;
      uVar8 = uVar11;
    } while (uVar6 < uVar4);
  }
  if (param_5 < uVar7) {
    *param_1 = 0;
    param_1[1] = uVar7;
  }
  else {
    lVar21 = *(long *)(param_2 + 0xb0);
    uVar7 = *(ulong *)(param_2 + 800);
    if (lVar21 == 0) {
      uVar23 = 0;
    }
    else {
      uVar23 = 0;
      do {
        uVar8 = *(long *)(param_2 + 0xa8) + 1;
        plVar9 = (long *)(*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x18);
        uVar6 = 0;
        if (*(ulong *)(param_2 + 0x98) <= uVar8) {
          uVar6 = *(ulong *)(param_2 + 0x98);
        }
        *(ulong *)(param_2 + 0xa8) = uVar8 - uVar6;
        *(long *)(param_2 + 0xb0) = lVar21 + -1;
        lVar21 = *plVar9;
        if (lVar21 == -1) break;
        pvVar22 = (void *)plVar9[1];
        uVar8 = plVar9[2];
        uVar6 = *(ulong *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xb8) = 0;
        __n = uVar8 - uVar6;
        if (uVar8 < uVar6) {
                    /* try { // try from 0084be08 to 0084be17 has its CatchHandler @ 0084be60 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar6,uVar8,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae63f8);
        }
        if ((uVar6 != 0) && (__n != 0)) {
          memmove(pvVar22,(void *)((long)pvVar22 + uVar6),__n);
        }
        uVar8 = __n + uVar23;
        if (param_5 < uVar8) {
                    /* try { // try from 0084be1c to 0084be33 has its CatchHandler @ 0084be58 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar23,uVar8,param_5,&PTR_s__root__cargo_registry_src_index__00ae6890);
        }
        memcpy((void *)(param_4 + uVar23),pvVar22,__n);
        if (lVar21 != 0) {
          free(pvVar22);
        }
        lVar21 = *(long *)(param_2 + 0xb0);
        uVar23 = uVar8;
      } while (lVar21 != 0);
    }
    do {
      if (lVar10 == 0) {
        uVar8 = uVar24;
        if (uVar7 <= uVar24) {
          uVar8 = uVar7;
        }
        lVar21 = uVar8 + lVar18;
        uVar6 = uVar24 - uVar8;
        uVar24 = uVar8;
      }
      else {
        lVar21 = lVar18;
        uVar6 = uVar4;
        if (uVar24 + uVar7 <= uVar4) {
          uVar6 = uVar24 + uVar7;
        }
      }
      local_108 = 3;
      local_106 = 4;
      local_128 = lVar10;
      local_120 = lVar18;
      local_118 = uVar24;
      uStack_110 = uVar6;
      FUN_00868cbc(auStack_148,param_2,&local_128);
      <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>
      ::encode(&local_160,auStack_148);
      pvVar22 = local_158;
      uVar8 = local_150 + uVar23;
      if (param_5 < uVar8) {
                    /* try { // try from 0084bdec to 0084be03 has its CatchHandler @ 0084be74 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (uVar23,uVar8,param_5,&PTR_s__root__cargo_registry_src_index__00ae68a8);
      }
      memcpy((void *)(param_4 + uVar23),local_158,local_150);
      if (local_160 != 0) {
        free(pvVar22);
      }
      uVar11 = uVar6;
      if (lVar10 != 0) {
        uVar11 = uVar4 - uVar6;
      }
      lVar18 = lVar21;
      uVar23 = uVar8;
      uVar24 = uVar6;
    } while (uVar11 != 0);
    *param_1 = 2;
    param_1[1] = uVar8;
  }
  return;
}


// ===== 0084be98  <rustls::common_state::rustls::common_state::CommonState>::current_io_state =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::current_io_state */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::current_io_state
          (long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  uVar4 = *(ulong *)(param_2 + 0xb0);
  if (uVar4 != 0) {
    lVar6 = *(long *)(param_2 + 0xa0);
    uVar11 = *(ulong *)(param_2 + 0xa8);
    uVar7 = *(ulong *)(param_2 + 0x98);
    uVar10 = 0;
    if (uVar7 <= uVar11) {
      uVar10 = uVar7;
    }
    lVar12 = uVar11 - uVar10;
    uVar13 = uVar7 - lVar12;
    lVar9 = uVar4 - uVar13;
    if (uVar4 < uVar13 || lVar9 == 0) {
      uVar7 = lVar12 + uVar4;
    }
    uVar14 = lVar9 * 0x18;
    if (uVar4 < uVar13 || lVar9 == 0) {
      uVar14 = 0;
    }
    uVar4 = 0;
    if (uVar7 - lVar12 != 0) {
      uVar4 = (uVar7 - lVar12) * 0x18;
      uVar7 = uVar4 / 0x18;
      if (uVar4 < 0x78) {
        lVar15 = 0;
        uVar4 = 0;
      }
      else {
        lVar9 = 0;
        lVar12 = 0;
        lVar16 = 0;
        lVar20 = 0;
        uVar4 = 4;
        if ((uVar7 & 3) != 0) {
          uVar4 = uVar7 & 3;
        }
        lVar15 = uVar7 - uVar4;
        lVar8 = uVar4 - uVar7;
        plVar5 = (long *)(uVar11 * 0x18 + uVar10 * -0x18 + lVar6 + 0x40);
        do {
          plVar1 = plVar5 + -6;
          lVar19 = *plVar5;
          plVar17 = plVar5 + -3;
          plVar2 = plVar5 + 3;
          lVar8 = lVar8 + 4;
          plVar5 = plVar5 + 0xc;
          lVar9 = *plVar1 + lVar9;
          lVar12 = *plVar17 + lVar12;
          lVar16 = lVar19 + lVar16;
          lVar20 = *plVar2 + lVar20;
        } while (lVar8 != 0);
        uVar4 = lVar16 + lVar9 + lVar20 + lVar12;
      }
      lVar9 = lVar15 - uVar7;
      plVar5 = (long *)(uVar11 * 0x18 + lVar15 * 0x18 + uVar10 * -0x18 + lVar6 + 0x10);
      do {
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        uVar4 = *plVar5 + uVar4;
        plVar5 = plVar5 + 3;
      } while (bVar3);
    }
    if (uVar14 != 0) {
      uVar10 = uVar14 / 0x18;
      if (uVar14 < 0x78) {
        lVar8 = 0;
      }
      else {
        lVar9 = 0;
        lVar12 = 0;
        lVar16 = 0;
        uVar7 = 4;
        if ((uVar10 & 3) != 0) {
          uVar7 = uVar10 & 3;
        }
        lVar8 = uVar10 - uVar7;
        plVar5 = (long *)(lVar6 + 0x40);
        lVar20 = lVar8;
        do {
          plVar1 = plVar5 + -6;
          lVar15 = *plVar5;
          plVar17 = plVar5 + -3;
          plVar2 = plVar5 + 3;
          lVar20 = lVar20 + -4;
          plVar5 = plVar5 + 0xc;
          uVar4 = *plVar1 + uVar4;
          lVar9 = *plVar17 + lVar9;
          lVar12 = lVar15 + lVar12;
          lVar16 = *plVar2 + lVar16;
        } while (lVar20 != 0);
        uVar4 = lVar12 + uVar4 + lVar16 + lVar9;
      }
      lVar9 = uVar10 - lVar8;
      plVar5 = (long *)(lVar6 + lVar8 * 0x18 + 0x10);
      do {
        lVar9 = lVar9 + -1;
        uVar4 = *plVar5 + uVar4;
        plVar5 = plVar5 + 3;
      } while (lVar9 != 0);
    }
  }
  uVar10 = *(ulong *)(param_2 + 0x78);
  lVar6 = *(long *)(param_2 + 0xb8);
  if (uVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar12 = *(long *)(param_2 + 0x68);
    uVar13 = *(ulong *)(param_2 + 0x70);
    uVar11 = *(ulong *)(param_2 + 0x60);
    uVar7 = 0;
    if (uVar11 <= uVar13) {
      uVar7 = uVar11;
    }
    lVar16 = uVar13 - uVar7;
    uVar14 = uVar11 - lVar16;
    lVar9 = uVar10 - uVar14;
    if (uVar10 < uVar14 || lVar9 == 0) {
      uVar11 = lVar16 + uVar10;
    }
    uVar18 = lVar9 * 0x18;
    if (uVar10 < uVar14 || lVar9 == 0) {
      uVar18 = 0;
    }
    lVar9 = 0;
    if (uVar11 - lVar16 != 0) {
      uVar10 = (uVar11 - lVar16) * 0x18;
      uVar11 = uVar10 / 0x18;
      if (uVar10 < 0x78) {
        lVar19 = 0;
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        lVar16 = 0;
        lVar20 = 0;
        lVar8 = 0;
        uVar10 = 4;
        if ((uVar11 & 3) != 0) {
          uVar10 = uVar11 & 3;
        }
        lVar19 = uVar11 - uVar10;
        lVar15 = uVar10 - uVar11;
        plVar5 = (long *)(uVar13 * 0x18 + uVar7 * -0x18 + lVar12 + 0x40);
        do {
          plVar1 = plVar5 + -6;
          lVar21 = *plVar5;
          plVar17 = plVar5 + -3;
          plVar2 = plVar5 + 3;
          lVar15 = lVar15 + 4;
          plVar5 = plVar5 + 0xc;
          lVar9 = *plVar1 + lVar9;
          lVar16 = *plVar17 + lVar16;
          lVar20 = lVar21 + lVar20;
          lVar8 = *plVar2 + lVar8;
        } while (lVar15 != 0);
        lVar9 = lVar20 + lVar9 + lVar8 + lVar16;
      }
      lVar16 = lVar19 - uVar11;
      plVar5 = (long *)(uVar13 * 0x18 + lVar19 * 0x18 + uVar7 * -0x18 + lVar12 + 0x10);
      do {
        bVar3 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        lVar9 = *plVar5 + lVar9;
        plVar5 = plVar5 + 3;
      } while (bVar3);
    }
    if (uVar18 != 0) {
      uVar10 = uVar18 / 0x18;
      if (uVar18 < 0x78) {
        lVar19 = 0;
      }
      else {
        lVar16 = 0;
        lVar20 = 0;
        lVar8 = 0;
        uVar7 = 4;
        if ((uVar10 & 3) != 0) {
          uVar7 = uVar10 & 3;
        }
        lVar19 = uVar10 - uVar7;
        plVar5 = (long *)(lVar12 + 0x40);
        lVar15 = lVar19;
        do {
          plVar1 = plVar5 + -6;
          lVar21 = *plVar5;
          plVar17 = plVar5 + -3;
          plVar2 = plVar5 + 3;
          lVar15 = lVar15 + -4;
          plVar5 = plVar5 + 0xc;
          lVar9 = *plVar1 + lVar9;
          lVar16 = *plVar17 + lVar16;
          lVar20 = lVar21 + lVar20;
          lVar8 = *plVar2 + lVar8;
        } while (lVar15 != 0);
        lVar9 = lVar20 + lVar9 + lVar8 + lVar16;
      }
      lVar16 = uVar10 - lVar19;
      plVar5 = (long *)(lVar12 + lVar19 * 0x18 + 0x10);
      do {
        lVar16 = lVar16 + -1;
        lVar9 = *plVar5 + lVar9;
        plVar5 = plVar5 + 3;
      } while (lVar16 != 0);
    }
  }
  lVar12 = *(long *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x337);
  *param_1 = uVar4 - lVar6;
  param_1[1] = lVar9 - lVar12;
  return;
}


// ===== 0084c208  FUN_0084c208 =====

void FUN_0084c208(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *__ptr;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_168;
  void *pvStack_160;
  ulong local_158;
  char local_148;
  undefined1 local_147;
  undefined2 local_146;
  undefined2 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined2 local_88;
  long local_80;
  void *local_78;
  long local_70;
  
  __ptr = (void *)param_2[1];
  uVar13 = param_2[2];
  if (uVar13 != 0) {
    uVar15 = *(ulong *)(param_1 + 800);
    cVar3 = *(char *)((long)param_2 + 0x1c);
    uVar4 = *(undefined1 *)((long)param_2 + 0x1d);
    uVar5 = (undefined2)param_2[3];
    uVar6 = *(undefined2 *)((long)param_2 + 0x1a);
    pvVar10 = __ptr;
    if (cVar3 == '\x01') {
      do {
        local_168 = 0;
        local_148 = '\x01';
        uVar2 = uVar13;
        if (uVar15 <= uVar13) {
          uVar2 = uVar15;
        }
                    /* try { // try from 0084c2c4 to 0084c2d3 has its CatchHandler @ 0084c5f4 */
        pvStack_160 = pvVar10;
        local_158 = uVar2;
        local_147 = uVar4;
        local_146 = uVar5;
        local_144 = uVar6;
        FUN_00868cbc(&local_140,param_1,&local_168);
        lVar11 = *(long *)(param_1 + 0x308);
        *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
        if (lVar11 != -1) {
          lVar14 = *(long *)(param_1 + 0x318);
          pvVar12 = *(void **)(param_1 + 0x310);
          if (lVar14 == 0) {
            if (lVar11 != 0) {
              free(pvVar12);
            }
          }
          else {
            uVar7 = *(ulong *)(param_1 + 0xb0);
            uVar8 = *(ulong *)(param_1 + 0x98);
            if (uVar7 == uVar8) {
                    /* try { // try from 0084c304 to 0084c30b has its CatchHandler @ 0084c5ac */
              <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
              ::grow(param_1 + 0x98);
              uVar7 = *(ulong *)(param_1 + 0xb0);
              uVar8 = *(ulong *)(param_1 + 0x98);
            }
            uVar1 = *(long *)(param_1 + 0xa8) + uVar7;
            *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
            uVar7 = 0;
            if (uVar8 <= uVar1) {
              uVar7 = uVar8;
            }
            plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar1 - uVar7) * 0x18);
            *plVar9 = lVar11;
            plVar9[1] = (long)pvVar12;
            plVar9[2] = lVar14;
          }
        }
                    /* try { // try from 0084c358 to 0084c363 has its CatchHandler @ 0084c5f4 */
        <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>
        ::encode(&local_80,&local_140);
        lVar14 = local_70;
        pvVar12 = local_78;
        lVar11 = local_80;
        if (local_70 == 0) {
          if (local_80 != 0) {
            free(local_78);
          }
        }
        else {
          uVar7 = *(ulong *)(param_1 + 0xb0);
          uVar8 = *(ulong *)(param_1 + 0x98);
          if (uVar7 == uVar8) {
                    /* try { // try from 0084c380 to 0084c387 has its CatchHandler @ 0084c5d4 */
            <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
            ::grow(param_1 + 0x98);
            uVar7 = *(ulong *)(param_1 + 0xb0);
            uVar8 = *(ulong *)(param_1 + 0x98);
          }
          uVar1 = *(long *)(param_1 + 0xa8) + uVar7;
          *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
          uVar7 = 0;
          if (uVar8 <= uVar1) {
            uVar7 = uVar8;
          }
          plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar1 - uVar7) * 0x18);
          *plVar9 = lVar11;
          plVar9[1] = (long)pvVar12;
          plVar9[2] = lVar14;
        }
        uVar13 = uVar13 - uVar2;
        pvVar10 = (void *)((long)pvVar10 + uVar2);
      } while (uVar13 != 0);
    }
    else {
      do {
        local_168 = 0;
        uVar2 = uVar13;
        if (uVar15 <= uVar13) {
          uVar2 = uVar15;
        }
        pvStack_160 = pvVar10;
        local_158 = uVar2;
        local_148 = cVar3;
        if (*(ulong *)(param_1 + 0x38) == *(ulong *)(param_1 + 0x30)) {
          if (*(short *)(param_1 + 0x328) == 5) {
            *(undefined1 *)(param_1 + 0x33b) = 1;
LAB_0084c43c:
                    /* try { // try from 0084c43c to 0084c44b has its CatchHandler @ 0084c5f0 */
            local_147 = uVar4;
            local_146 = uVar5;
            local_144 = uVar6;
            FUN_00868cbc(&local_140,param_1,&local_168);
            lVar11 = *(long *)(param_1 + 0x308);
            *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
            if (lVar11 != -1) {
              lVar14 = *(long *)(param_1 + 0x318);
              pvVar12 = *(void **)(param_1 + 0x310);
              if (lVar14 == 0) {
                if (lVar11 != 0) {
                  free(pvVar12);
                }
              }
              else {
                uVar7 = *(ulong *)(param_1 + 0xb0);
                uVar8 = *(ulong *)(param_1 + 0x98);
                if (uVar7 == uVar8) {
                    /* try { // try from 0084c47c to 0084c483 has its CatchHandler @ 0084c5a4 */
                  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
                  ::grow(param_1 + 0x98);
                  uVar7 = *(ulong *)(param_1 + 0xb0);
                  uVar8 = *(ulong *)(param_1 + 0x98);
                }
                uVar1 = *(long *)(param_1 + 0xa8) + uVar7;
                *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
                uVar7 = 0;
                if (uVar8 <= uVar1) {
                  uVar7 = uVar8;
                }
                plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar1 - uVar7) * 0x18);
                *plVar9 = lVar11;
                plVar9[1] = (long)pvVar12;
                plVar9[2] = lVar14;
              }
            }
            <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>
            ::encode(&local_80,&local_140);
            lVar14 = local_70;
            pvVar12 = local_78;
            lVar11 = local_80;
            if (local_70 == 0) {
              if (local_80 != 0) {
                free(local_78);
              }
            }
            else {
              uVar7 = *(ulong *)(param_1 + 0xb0);
              uVar8 = *(ulong *)(param_1 + 0x98);
              if (uVar7 == uVar8) {
                    /* try { // try from 0084c53c to 0084c543 has its CatchHandler @ 0084c5a8 */
                <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
                ::grow(param_1 + 0x98);
                uVar7 = *(ulong *)(param_1 + 0xb0);
                uVar8 = *(ulong *)(param_1 + 0x98);
              }
              uVar1 = *(long *)(param_1 + 0xa8) + uVar7;
              *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
              uVar7 = 0;
              if (uVar8 <= uVar1) {
                uVar7 = uVar8;
              }
              plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar1 - uVar7) * 0x18);
              *plVar9 = lVar11;
              plVar9[1] = (long)pvVar12;
              plVar9[2] = lVar14;
            }
          }
          else {
            local_147 = uVar4;
            local_146 = uVar5;
            local_144 = uVar6;
            if ((*(byte *)(param_1 + 0x335) & 1) == 0) {
              *(undefined2 *)(param_1 + 0x335) = 0x101;
              local_88 = 4;
              local_140 = 0x8000000000000000;
              local_138 = 0;
                    /* try { // try from 0084c4f0 to 0084c51f has its CatchHandler @ 0084c5f0 */
              <rustls::common_state::rustls::common_state::CommonState>::send_msg
                        (param_1,&local_140,*(char *)(param_1 + 0x49) == '\x02');
            }
          }
        }
        else {
          local_147 = uVar4;
          local_146 = uVar5;
          local_144 = uVar6;
          if (*(ulong *)(param_1 + 0x38) < 0xfffffffffffffffe) goto LAB_0084c43c;
        }
        uVar13 = uVar13 - uVar2;
        pvVar10 = (void *)((long)pvVar10 + uVar2);
      } while (uVar13 != 0);
    }
  }
  if (0 < *param_2) {
    free(__ptr);
  }
  return;
}


// ===== 0084c61c  <rustls::common_state::rustls::common_state::CommonState>::send_close_notify =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::send_close_notify */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::send_close_notify(long param_1)

{
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_18;
  
  if ((*(byte *)(param_1 + 0x335) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x335) = 0x101;
    local_18 = 4;
    local_d0 = 0x8000000000000000;
    local_c8 = 0;
    send_msg(param_1,&local_d0,*(char *)(param_1 + 0x49) == '\x02');
  }
  return;
}


// ===== 0084c670  <rustls::common_state::rustls::common_state::CommonState>::send_warning_alert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::send_warning_alert */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::send_warning_alert
          (long param_1,uint param_2,int param_3)

{
  undefined8 local_d0;
  uint local_c8;
  undefined2 local_18;
  
  local_18 = 4;
  local_c8 = (param_2 & 0xff) << 0x10 | param_3 << 0x18;
  local_d0 = 0x8000000000000000;
  send_msg(param_1,&local_d0,*(char *)(param_1 + 0x49) == '\x02');
  return;
}


// ===== 0084c6b8  FUN_0084c6b8 =====

ulong FUN_0084c6b8(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  void *pvVar18;
  long lVar19;
  ulong unaff_x27;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong local_170;
  long local_168;
  long lStack_160;
  ulong local_158;
  ulong uStack_150;
  undefined1 local_148;
  undefined2 local_146;
  long local_140;
  void *local_138;
  long local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_70;
  
  if (param_3 == 0) {
    local_158 = param_2[2];
    uVar6 = param_2[3];
    lVar19 = *param_2;
    uVar20 = local_158;
    if (lVar19 != 0) {
      uVar20 = uVar6 - local_158;
    }
    local_170 = uVar20;
    if (*(long *)(param_1 + 0x88) == 1) {
      uVar7 = *(ulong *)(param_1 + 0xb0);
      if (uVar7 == 0) {
        lVar11 = 0;
      }
      else {
        lVar17 = *(long *)(param_1 + 0xa0);
        uVar3 = *(ulong *)(param_1 + 0xa8);
        uVar10 = *(ulong *)(param_1 + 0x98);
        uVar8 = 0;
        if (uVar10 <= uVar3) {
          uVar8 = uVar10;
        }
        lVar16 = uVar3 - uVar8;
        uVar12 = uVar10 - lVar16;
        lVar11 = uVar7 - uVar12;
        if (uVar7 < uVar12 || lVar11 == 0) {
          uVar10 = lVar16 + uVar7;
        }
        uVar13 = lVar11 * 0x18;
        if (uVar7 < uVar12 || lVar11 == 0) {
          uVar13 = 0;
        }
        lVar11 = 0;
        if (uVar10 - lVar16 != 0) {
          uVar7 = (uVar10 - lVar16) * 0x18;
          uVar10 = uVar7 / 0x18;
          if (uVar7 < 0x78) {
            lVar14 = 0;
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            lVar16 = 0;
            lVar21 = 0;
            lVar22 = 0;
            uVar7 = 4;
            if ((uVar10 & 3) != 0) {
              uVar7 = uVar10 & 3;
            }
            lVar14 = uVar10 - uVar7;
            lVar15 = uVar7 - uVar10;
            plVar9 = (long *)(uVar3 * 0x18 + uVar8 * -0x18 + lVar17 + 0x40);
            do {
              plVar1 = plVar9 + -6;
              lVar23 = *plVar9;
              plVar5 = plVar9 + -3;
              plVar2 = plVar9 + 3;
              lVar15 = lVar15 + 4;
              plVar9 = plVar9 + 0xc;
              lVar11 = *plVar1 + lVar11;
              lVar16 = *plVar5 + lVar16;
              lVar21 = lVar23 + lVar21;
              lVar22 = *plVar2 + lVar22;
            } while (lVar15 != 0);
            lVar11 = lVar21 + lVar11 + lVar22 + lVar16;
          }
          lVar16 = lVar14 - uVar10;
          plVar9 = (long *)(uVar3 * 0x18 + lVar14 * 0x18 + uVar8 * -0x18 + lVar17 + 0x10);
          do {
            bVar4 = lVar16 != -1;
            lVar16 = lVar16 + 1;
            lVar11 = *plVar9 + lVar11;
            plVar9 = plVar9 + 3;
          } while (bVar4);
        }
        if (uVar13 != 0) {
          uVar7 = uVar13 / 0x18;
          if (uVar13 < 0x78) {
            lVar14 = 0;
          }
          else {
            lVar16 = 0;
            lVar21 = 0;
            lVar22 = 0;
            uVar8 = 4;
            if ((uVar7 & 3) != 0) {
              uVar8 = uVar7 & 3;
            }
            lVar14 = uVar7 - uVar8;
            plVar9 = (long *)(lVar17 + 0x40);
            lVar15 = lVar14;
            do {
              plVar1 = plVar9 + -6;
              lVar23 = *plVar9;
              plVar5 = plVar9 + -3;
              plVar2 = plVar9 + 3;
              lVar15 = lVar15 + -4;
              plVar9 = plVar9 + 0xc;
              lVar11 = *plVar1 + lVar11;
              lVar16 = *plVar5 + lVar16;
              lVar21 = lVar23 + lVar21;
              lVar22 = *plVar2 + lVar22;
            } while (lVar15 != 0);
            lVar11 = lVar21 + lVar11 + lVar22 + lVar16;
          }
          lVar16 = uVar7 - lVar14;
          plVar9 = (long *)(lVar17 + lVar14 * 0x18 + 0x10);
          do {
            lVar16 = lVar16 + -1;
            lVar11 = *plVar9 + lVar11;
            plVar9 = plVar9 + 3;
          } while (lVar16 != 0);
        }
      }
      uVar7 = lVar11 - *(long *)(param_1 + 0xb8);
      local_170 = 0;
      if (uVar7 <= *(ulong *)(param_1 + 0x90)) {
        local_170 = *(ulong *)(param_1 + 0x90) - uVar7;
      }
      if (uVar20 <= local_170) {
        local_170 = uVar20;
      }
    }
    if (lVar19 == 0) goto LAB_0084c91c;
  }
  else {
    lVar19 = *param_2;
    if (lVar19 == 0) {
      local_170 = param_2[2];
      local_158 = local_170;
LAB_0084c91c:
      lStack_160 = param_2[1];
      lVar19 = 0;
      if (local_170 <= local_158) {
        local_158 = local_170;
      }
      bVar4 = true;
      if (local_158 == 0) {
        return local_170;
      }
      goto LAB_0084c938;
    }
    local_158 = param_2[2];
    uVar6 = param_2[3];
    local_170 = uVar6 - local_158;
  }
  lStack_160 = param_2[1];
  bVar4 = false;
  unaff_x27 = uVar6;
  if (local_158 + local_170 <= uVar6) {
    unaff_x27 = local_158 + local_170;
  }
  if (unaff_x27 == local_158) {
    return local_170;
  }
LAB_0084c938:
  uVar20 = *(ulong *)(param_1 + 800);
  do {
    if (bVar4) {
      uVar7 = local_158;
      if (uVar20 <= local_158) {
        uVar7 = uVar20;
      }
      uVar6 = local_158 - uVar7;
      local_158 = uVar7;
      lVar11 = uVar7 + lStack_160;
    }
    else {
      uVar6 = unaff_x27;
      lVar11 = lStack_160;
      if (local_158 + uVar20 <= unaff_x27) {
        uVar6 = local_158 + uVar20;
      }
    }
    local_148 = 3;
    local_146 = 4;
    local_168 = lVar19;
    uStack_150 = uVar6;
    if (*(ulong *)(param_1 + 0x38) == *(ulong *)(param_1 + 0x30)) {
      if (*(short *)(param_1 + 0x328) == 5) {
        *(undefined1 *)(param_1 + 0x33b) = 1;
LAB_0084c9fc:
        FUN_00868cbc(&local_128,param_1,&local_168);
        lVar17 = *(long *)(param_1 + 0x308);
        *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
        if (lVar17 != -1) {
          lVar16 = *(long *)(param_1 + 0x318);
          pvVar18 = *(void **)(param_1 + 0x310);
          if (lVar16 == 0) {
            if (lVar17 != 0) {
              free(pvVar18);
            }
          }
          else {
            uVar7 = *(ulong *)(param_1 + 0xb0);
            uVar8 = *(ulong *)(param_1 + 0x98);
            if (uVar7 == uVar8) {
                    /* try { // try from 0084ca3c to 0084ca43 has its CatchHandler @ 0084cb48 */
              <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
              ::grow(param_1 + 0x98);
              uVar7 = *(ulong *)(param_1 + 0xb0);
              uVar8 = *(ulong *)(param_1 + 0x98);
            }
            uVar10 = *(long *)(param_1 + 0xa8) + uVar7;
            *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
            uVar7 = 0;
            if (uVar8 <= uVar10) {
              uVar7 = uVar8;
            }
            plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar10 - uVar7) * 0x18);
            *plVar9 = lVar17;
            plVar9[1] = (long)pvVar18;
            plVar9[2] = lVar16;
          }
        }
        <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>
        ::encode(&local_140,&local_128);
        lVar16 = local_130;
        pvVar18 = local_138;
        lVar17 = local_140;
        if (local_130 == 0) {
          if (local_140 != 0) {
            free(local_138);
          }
        }
        else {
          uVar7 = *(ulong *)(param_1 + 0xb0);
          uVar8 = *(ulong *)(param_1 + 0x98);
          if (uVar7 == uVar8) {
                    /* try { // try from 0084caf8 to 0084caff has its CatchHandler @ 0084cb70 */
            <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
            ::grow(param_1 + 0x98);
            uVar7 = *(ulong *)(param_1 + 0xb0);
            uVar8 = *(ulong *)(param_1 + 0x98);
          }
          uVar10 = *(long *)(param_1 + 0xa8) + uVar7;
          *(ulong *)(param_1 + 0xb0) = uVar7 + 1;
          uVar7 = 0;
          if (uVar8 <= uVar10) {
            uVar7 = uVar8;
          }
          plVar9 = (long *)(*(long *)(param_1 + 0xa0) + (uVar10 - uVar7) * 0x18);
          *plVar9 = lVar17;
          plVar9[1] = (long)pvVar18;
          plVar9[2] = lVar16;
        }
      }
      else if ((*(byte *)(param_1 + 0x335) & 1) == 0) {
        *(undefined2 *)(param_1 + 0x335) = 0x101;
        local_70 = 4;
        local_128 = 0x8000000000000000;
        local_120 = 0;
        <rustls::common_state::rustls::common_state::CommonState>::send_msg
                  (param_1,&local_128,*(char *)(param_1 + 0x49) == '\x02');
      }
    }
    else if (*(ulong *)(param_1 + 0x38) < 0xfffffffffffffffe) goto LAB_0084c9fc;
    uVar7 = uVar6;
    if (!bVar4) {
      uVar7 = unaff_x27 - uVar6;
    }
    local_158 = uVar6;
    lStack_160 = lVar11;
    if (uVar7 == 0) {
      return local_170;
    }
  } while( true );
}


// ===== 0084cb90  FUN_0084cb90 =====

void FUN_0084cb90(long param_1,long *param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_0085a9a4(&local_70,param_2,param_3);
  pvVar1 = *(void **)(param_1 + 0x10);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar4 = *(ulong *)(*param_2 + 0x40);
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0084cbe0 to 0084cbe7 has its CatchHandler @ 0084cc90 */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = local_60;
  *(undefined8 *)(param_1 + 0x18) = uStack_58;
  if (0xfffffffffffeffff < uVar4) {
    uVar4 = 0xffffffffffff0000;
  }
  pcVar3 = (code *)*puVar2;
  *(ulong *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0084cc24 to 0084cc2b has its CatchHandler @ 0084cc6c */
    (*pcVar3)(pvVar1);
  }
  if (puVar2[1] != 0) {
    free(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = local_70;
  *(undefined8 *)(param_1 + 0x28) = uStack_68;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}


// ===== 0084ccc4  FUN_0084ccc4 =====

void FUN_0084ccc4(long param_1,long *param_2)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_60;
  void *local_58;
  size_t sStack_50;
  
  lVar5 = *param_2;
  *(undefined1 *)(param_1 + 0x332) = 1;
  if (lVar5 != 0) {
    lVar3 = *(long *)(lVar5 + 0x28);
    while (lVar3 != 0) {
      plVar4 = (long *)(*(long *)(lVar5 + 0x18) + *(long *)(lVar5 + 0x20) * 0x18);
      uVar1 = *(long *)(lVar5 + 0x20) + 1;
      uVar2 = 0;
      if (*(ulong *)(lVar5 + 0x10) <= uVar1) {
        uVar2 = *(ulong *)(lVar5 + 0x10);
      }
      *(ulong *)(lVar5 + 0x20) = uVar1 - uVar2;
      *(long *)(lVar5 + 0x28) = lVar3 + -1;
      lVar3 = *plVar4;
      if (lVar3 == -1) {
        return;
      }
      __dest = (void *)plVar4[1];
      uVar1 = plVar4[2];
      uVar2 = *(ulong *)(lVar5 + 0x30);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      __n = uVar1 - uVar2;
      if (uVar1 < uVar2) {
                    /* try { // try from 0084cdc0 to 0084cdcf has its CatchHandler @ 0084cddc */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,uVar2,uVar1,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae63f8);
      }
      if (uVar2 == 0) {
        local_60 = 0;
        local_58 = __dest;
        sStack_50 = __n;
        if (uVar1 != 0) goto LAB_0084cd80;
      }
      else if (uVar1 != uVar2) {
        memmove(__dest,(void *)((long)__dest + uVar2),__n);
LAB_0084cd80:
                    /* try { // try from 0084cd80 to 0084cd8f has its CatchHandler @ 0084cdd4 */
        local_60 = 0;
        local_58 = __dest;
        sStack_50 = __n;
        FUN_0084c6b8(param_1,&local_60,1);
      }
      if (lVar3 != 0) {
        free(__dest);
      }
      lVar3 = *(long *)(lVar5 + 0x28);
    }
  }
  return;
}


// ===== 0084cdfc  FUN_0084cdfc =====

void FUN_0084cdfc(undefined8 *param_1,long param_2)

{
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_28;
  
  if ((*(byte *)(param_2 + 0x331) & 1) != 0) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  local_28 = 4;
  local_e0 = 0x8000000000000000;
  local_d8 = 0x10001;
  <rustls::common_state::rustls::common_state::CommonState>::send_msg
            (param_2,&local_e0,*(char *)(param_2 + 0x49) == '\x02');
  *(undefined1 *)(param_2 + 0x335) = 1;
  *(undefined1 *)(param_1 + 1) = 0x1b;
  *param_1 = 0x800000000000001a;
  return;
}


// ===== 0084ce8c  <rustls::common_state::rustls::common_state::CommonState>::eager_send_close_notify =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::eager_send_close_notify */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::eager_send_close_notify
          (undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  size_t __n;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_70;
  
  if ((*(byte *)(param_2 + 0x335) & 1) == 0) {
    *(undefined2 *)(param_2 + 0x335) = 0x101;
    local_70 = 4;
    local_128 = 0x8000000000000000;
    local_120 = 0;
    send_msg(param_2,&local_128,*(char *)(param_2 + 0x49) == '\x02');
  }
  uVar5 = *(ulong *)(param_2 + 0xb0);
  if (uVar5 == 0) {
    uVar8 = 0;
    uVar7 = -*(long *)(param_2 + 0xb8);
    if (uVar7 <= param_4) goto LAB_0084d17c;
  }
  else {
    lVar16 = *(long *)(param_2 + 0xa0);
    uVar3 = *(ulong *)(param_2 + 0xa8);
    uVar7 = *(ulong *)(param_2 + 0x98);
    uVar8 = 0;
    if (uVar7 <= uVar3) {
      uVar8 = uVar7;
    }
    lVar9 = uVar3 - uVar8;
    uVar11 = uVar7 - lVar9;
    lVar10 = uVar5 - uVar11;
    if (uVar5 < uVar11 || lVar10 == 0) {
      uVar7 = lVar9 + uVar5;
    }
    uVar12 = lVar10 * 0x18;
    if (uVar5 < uVar11 || lVar10 == 0) {
      uVar12 = 0;
    }
    lVar10 = 0;
    if (uVar7 - lVar9 != 0) {
      uVar7 = (uVar7 - lVar9) * 0x18;
      uVar11 = uVar7 / 0x18;
      if (uVar7 < 0x78) {
        lVar13 = 0;
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        lVar9 = 0;
        lVar17 = 0;
        lVar18 = 0;
        uVar7 = 4;
        if ((uVar11 & 3) != 0) {
          uVar7 = uVar11 & 3;
        }
        lVar13 = uVar11 - uVar7;
        lVar14 = uVar7 - uVar11;
        plVar6 = (long *)(uVar3 * 0x18 + uVar8 * -0x18 + lVar16 + 0x40);
        do {
          plVar1 = plVar6 + -6;
          lVar19 = *plVar6;
          plVar15 = plVar6 + -3;
          plVar2 = plVar6 + 3;
          lVar14 = lVar14 + 4;
          plVar6 = plVar6 + 0xc;
          lVar10 = *plVar1 + lVar10;
          lVar9 = *plVar15 + lVar9;
          lVar17 = lVar19 + lVar17;
          lVar18 = *plVar2 + lVar18;
        } while (lVar14 != 0);
        lVar10 = lVar17 + lVar10 + lVar18 + lVar9;
      }
      lVar9 = lVar13 - uVar11;
      plVar6 = (long *)(uVar3 * 0x18 + lVar13 * 0x18 + uVar8 * -0x18 + lVar16 + 0x10);
      do {
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        lVar10 = *plVar6 + lVar10;
        plVar6 = plVar6 + 3;
      } while (bVar4);
    }
    if (uVar12 != 0) {
      uVar8 = uVar12 / 0x18;
      if (uVar12 < 0x78) {
        lVar13 = 0;
      }
      else {
        lVar9 = 0;
        lVar17 = 0;
        lVar18 = 0;
        uVar7 = 4;
        if ((uVar8 & 3) != 0) {
          uVar7 = uVar8 & 3;
        }
        lVar13 = uVar8 - uVar7;
        plVar6 = (long *)(lVar16 + 0x40);
        lVar14 = lVar13;
        do {
          plVar1 = plVar6 + -6;
          lVar19 = *plVar6;
          plVar15 = plVar6 + -3;
          plVar2 = plVar6 + 3;
          lVar14 = lVar14 + -4;
          plVar6 = plVar6 + 0xc;
          lVar10 = *plVar1 + lVar10;
          lVar9 = *plVar15 + lVar9;
          lVar17 = lVar19 + lVar17;
          lVar18 = *plVar2 + lVar18;
        } while (lVar14 != 0);
        lVar10 = lVar17 + lVar10 + lVar18 + lVar9;
      }
      lVar9 = uVar8 - lVar13;
      plVar6 = (long *)(lVar16 + lVar13 * 0x18 + 0x10);
      do {
        lVar9 = lVar9 + -1;
        lVar10 = *plVar6 + lVar10;
        plVar6 = plVar6 + 3;
      } while (lVar9 != 0);
    }
    uVar7 = lVar10 - *(long *)(param_2 + 0xb8);
    if (uVar7 <= param_4) {
      uVar8 = 0;
      do {
        plVar6 = (long *)(*(long *)(param_2 + 0xa0) + *(long *)(param_2 + 0xa8) * 0x18);
        uVar7 = *(long *)(param_2 + 0xa8) + 1;
        uVar3 = 0;
        if (*(ulong *)(param_2 + 0x98) <= uVar7) {
          uVar3 = *(ulong *)(param_2 + 0x98);
        }
        *(ulong *)(param_2 + 0xa8) = uVar7 - uVar3;
        *(ulong *)(param_2 + 0xb0) = uVar5 - 1;
        lVar16 = *plVar6;
        if (lVar16 == -1) break;
        __dest = (void *)plVar6[1];
        uVar5 = plVar6[2];
        uVar7 = *(ulong *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xb8) = 0;
        __n = uVar5 - uVar7;
        if (uVar5 < uVar7) {
                    /* try { // try from 0084d1a4 to 0084d1b3 has its CatchHandler @ 0084d1dc */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (0,uVar7,uVar5,&PTR_s__nix_store_8006w282fgsx3273c878b_00ae63f8);
        }
        if ((uVar7 != 0) && (__n != 0)) {
          memmove(__dest,(void *)((long)__dest + uVar7),__n);
        }
        uVar7 = __n + uVar8;
        if (param_4 < uVar7) {
                    /* try { // try from 0084d1b8 to 0084d1cf has its CatchHandler @ 0084d1d4 */
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar8,uVar7,param_4,&PTR_s__root__cargo_registry_src_index__00ae6890);
        }
        memcpy((void *)(param_3 + uVar8),__dest,__n);
        if (lVar16 != 0) {
          free(__dest);
        }
        uVar5 = *(ulong *)(param_2 + 0xb0);
        uVar8 = uVar7;
      } while (uVar5 != 0);
LAB_0084d17c:
      *param_1 = 2;
      param_1[1] = uVar8;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = uVar7;
  return;
}


// ===== 0084d1fc  FUN_0084d1fc =====

void FUN_0084d1fc(long param_1,size_t *param_2)

{
  ulong uVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  size_t *psVar4;
  size_t __n;
  size_t sVar5;
  undefined8 uVar6;
  
  sVar5 = *param_2;
  __src = (void *)param_2[1];
  __n = param_2[2];
  if (sVar5 == 0xffffffffffffffff) {
    if ((long)__n < 0) {
      uVar6 = 0;
LAB_0084d290:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar6,__n);
    }
    if (__n == 0) {
      return;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 1;
    __dest = (void *)FUN_004b25a4(__n,1);
    if (__dest == (void *)0x0) goto LAB_0084d290;
    memcpy(__dest,__src,__n);
    uVar3 = *(ulong *)(param_1 + 0x60);
    uVar2 = *(ulong *)(param_1 + 0x78);
    sVar5 = __n;
    if (uVar2 != uVar3) goto LAB_0084d248;
  }
  else {
    if (__n == 0) {
      if (sVar5 == 0) {
        return;
      }
      free(__src);
      return;
    }
    uVar3 = *(ulong *)(param_1 + 0x60);
    uVar2 = *(ulong *)(param_1 + 0x78);
    __dest = __src;
    if (uVar2 != uVar3) goto LAB_0084d248;
  }
                    /* try { // try from 0084d23c to 0084d23f has its CatchHandler @ 0084d30c */
  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
  ::grow();
  uVar2 = *(ulong *)(param_1 + 0x78);
  uVar3 = *(ulong *)(param_1 + 0x60);
LAB_0084d248:
  uVar1 = *(long *)(param_1 + 0x70) + uVar2;
  *(ulong *)(param_1 + 0x78) = uVar2 + 1;
  uVar2 = 0;
  if (uVar3 <= uVar1) {
    uVar2 = uVar3;
  }
  psVar4 = (size_t *)(*(long *)(param_1 + 0x68) + (uVar1 - uVar2) * 0x18);
  *psVar4 = sVar5;
  psVar4[1] = (size_t)__dest;
  psVar4[2] = __n;
  return;
}


// ===== 0084d32c  FUN_0084d32c =====

void FUN_0084d32c(ulong *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_120;
  undefined4 local_118;
  undefined2 local_68;
  
  uVar1 = *param_3;
  lVar2 = uVar1 + 0x7fffffffffffffef;
  if (uVar1 < 0x8000000000000011) {
    lVar2 = 0xb;
  }
  local_118 = 0x60001;
  if (lVar2 != 0xb) {
    if (lVar2 == 9) {
      local_118 = 0xd0001;
    }
    uVar5 = param_3[1];
    uVar3 = *param_3;
    uVar8 = param_3[3];
    uVar7 = param_3[2];
    uVar1 = param_3[6];
    local_68 = 4;
    uVar6 = param_3[5];
    uVar4 = param_3[4];
    local_120 = 0x8000000000000000;
                    /* try { // try from 0084d4f0 to 0084d4fb has its CatchHandler @ 0084d600 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_2,&local_120,*(char *)(param_2 + 0x49) == '\x02');
    *(undefined1 *)(param_2 + 0x335) = 1;
    param_1[1] = uVar5;
    *param_1 = uVar3;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1[5] = uVar6;
    param_1[4] = uVar4;
    param_1[6] = uVar1;
    return;
  }
  uVar3 = uVar1 ^ 0x8000000000000000;
  if (-1 < (long)uVar1) {
    uVar3 = 0xd;
  }
                    /* WARNING: Could not recover jumptable at 0x0084d3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0084d3c8 + (ulong)(byte)(&UNK_002f9fda)[uVar3] * 4))(0x8000000000000000);
  return;
}


// ===== 0084d618  FUN_0084d618 =====

void FUN_0084d618(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_1d0;
  undefined1 *puStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b4;
  long local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined2 local_f8;
  long local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  long local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_118 = CONCAT71(local_118._1_7_,0x11);
  local_1d0 = 0;
  puStack_1c8 = &DAT_00000001;
  local_1b0 = -0x7fffffffffffffef;
  puStack_1a8 = (undefined1 *)((ulong)puStack_1a8 & 0xffffffffffffff00);
  local_1c0 = 0;
  local_f0 = -0x8000000000000000;
                    /* try { // try from 0084d65c to 0084d66b has its CatchHandler @ 0084d7ac */
  FUN_007f0930(&local_1b0,&local_1d0,&local_f0);
  local_100 = local_118;
  uVar11 = local_130;
  uVar10 = local_150;
  uVar9 = uStack_158;
  uVar8 = uStack_160;
  uVar7 = uStack_168;
  uVar6 = local_170;
  uVar5 = local_190;
  lVar4 = lStack_198;
  uVar3 = local_1a0;
  puVar1 = puStack_1a8;
  lVar2 = local_1b0;
  puStack_e8 = puStack_1c8;
  local_f0 = local_1d0;
  local_e0 = local_1c0;
  local_f8 = 5;
  uStack_70 = uStack_148;
  local_78 = local_150;
  uStack_60 = uStack_138;
  local_68 = uStack_140;
  uStack_50 = uStack_128;
  local_58 = local_130;
  uStack_40 = local_118;
  local_48 = uStack_120;
  uStack_b0 = uStack_188;
  local_b8 = local_190;
  uStack_a0 = uStack_178;
  local_a8 = uStack_180;
  uStack_90 = uStack_168;
  local_98 = local_170;
  uStack_80 = uStack_158;
  local_88 = uStack_160;
  uStack_d0 = (ulong)puStack_1a8;
  local_d8 = local_1b0;
  uStack_c0 = lStack_198;
  local_c8 = local_1a0;
  uStack_108 = uStack_120;
  local_110 = uStack_128;
  uStack_128 = uStack_140;
  local_130 = uStack_148;
  local_118 = uVar11;
  uStack_120 = uStack_138;
  uStack_168 = uStack_180;
  local_170 = uStack_188;
  uStack_158 = uVar6;
  uStack_160 = uStack_178;
  uStack_148 = uVar8;
  local_150 = uVar7;
  uStack_138 = uVar10;
  uStack_140 = uVar9;
  puStack_1a8 = puStack_1c8;
  local_1b0 = local_1d0;
  lStack_198 = lVar2;
  local_1a0 = local_1c0;
  uStack_188 = uVar3;
  local_190 = (ulong)puVar1;
  uStack_178 = uVar5;
  uStack_180 = lVar4;
  <rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::from
            (&local_1d0,&local_1b0);
  puVar1 = puStack_1c8;
  local_190._0_6_ = CONCAT42(local_1b8,local_1b4);
  local_1b0 = 0;
  puStack_1a8 = puStack_1c8;
  local_1a0 = local_1c0;
                    /* try { // try from 0084d724 to 0084d73f has its CatchHandler @ 0084d7d4 */
  FUN_00868cbc(&local_f0,param_1,&local_1b0);
  <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>::
  encode(&local_1b0,&local_f0);
  puStack_e8 = puStack_1a8;
  local_f0 = local_1b0;
  local_e0 = local_1a0;
  if ((*(long *)(param_1 + 0x308) != -1) && (*(long *)(param_1 + 0x308) != 0)) {
    free(*(void **)(param_1 + 0x310));
  }
  *(undefined1 **)(param_1 + 0x310) = puStack_e8;
  *(long *)(param_1 + 0x308) = local_f0;
  *(undefined8 *)(param_1 + 0x318) = local_e0;
  if (0 < local_1d0) {
    free(puVar1);
  }
  return;
}


// ===== 0084d7f8  <rustls::common_state::rustls::common_state::CommonState>::send_msg =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::send_msg */

void __rustcall
<rustls::common_state::rustls::common_state::CommonState>::send_msg
          (long param_1,long *param_2,byte param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  long local_180;
  void *local_178;
  ulong uStack_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 auStack_160 [32];
  long local_140;
  void *pvStack_138;
  ulong local_130;
  long lStack_128;
  undefined8 local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  void *local_78;
  long local_70;
  
  if (*(char *)(param_1 + 0x339) == '\x01') {
    if (*param_2 == -0x8000000000000000) {
      *(undefined2 *)(param_1 + 0x2a8) = *(undefined2 *)((long)param_2 + 10);
    }
    else {
      local_130 = 0;
      local_140 = 0;
      pvStack_138 = (void *)0x1;
                    /* try { // try from 0084d8a8 to 0084d8b3 has its CatchHandler @ 0084db18 */
      <rustls::msgs::message::rustls::msgs::message::MessagePayload>::encode(param_2,&local_140);
      uVar11 = local_130;
      pvVar8 = pvStack_138;
      lVar9 = local_140;
      uVar3 = *(ulong *)(param_1 + 0x128);
      uVar5 = *(ulong *)(param_1 + 0x110);
      if (uVar3 == uVar5) {
                    /* try { // try from 0084d8cc to 0084d8d3 has its CatchHandler @ 0084db04 */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<(bool,alloc::vec::Vec<u8>)>>
        ::grow(param_1 + 0x110);
        uVar3 = *(ulong *)(param_1 + 0x128);
        uVar5 = *(ulong *)(param_1 + 0x110);
      }
      uVar4 = *(long *)(param_1 + 0x120) + uVar3;
      *(ulong *)(param_1 + 0x128) = uVar3 + 1;
      uVar3 = 0;
      if (uVar5 <= uVar4) {
        uVar3 = uVar5;
      }
      pbVar1 = (byte *)(*(long *)(param_1 + 0x118) + (uVar4 - uVar3) * 0x20);
      *pbVar1 = param_3;
      *(long *)(pbVar1 + 8) = lVar9;
      *(void **)(pbVar1 + 0x10) = pvVar8;
      *(ulong *)(pbVar1 + 0x18) = uVar11;
      if (*param_2 != -0x8000000000000000) {
        FUN_0084af40(param_2);
      }
    }
  }
  else if ((param_3 & 1) == 0) {
    lStack_b8 = param_2[0x11];
    local_c0 = param_2[0x10];
    lStack_a8 = param_2[0x13];
    lStack_b0 = param_2[0x12];
    lStack_98 = param_2[0x15];
    local_a0 = param_2[0x14];
    lStack_88 = param_2[0x17];
    lStack_90 = param_2[0x16];
    lStack_f8 = param_2[9];
    local_100 = param_2[8];
    lStack_e8 = param_2[0xb];
    lStack_f0 = param_2[10];
    lStack_d8 = param_2[0xd];
    local_e0 = param_2[0xc];
    lStack_c8 = param_2[0xf];
    lStack_d0 = param_2[0xe];
    pvStack_138 = (void *)param_2[1];
    local_140 = *param_2;
    lStack_128 = param_2[3];
    local_130 = param_2[2];
    lStack_118 = param_2[5];
    local_120 = param_2[4];
    lStack_108 = param_2[7];
    lStack_110 = param_2[6];
    <rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::
    from(&local_180,&local_140);
    if (uStack_170 != 0) {
      uVar3 = *(ulong *)(param_1 + 800);
      pvVar8 = local_178;
      uVar11 = uStack_170;
      do {
        lVar9 = local_120;
        local_140 = 0;
        uVar5 = uVar11;
        if (uVar3 <= uVar11) {
          uVar5 = uVar3;
        }
        local_120._0_2_ = CONCAT11(local_163,local_164);
        local_120._6_2_ = SUB82(lVar9,6);
        local_120._0_6_ = CONCAT24(local_166,CONCAT22(local_168,(undefined2)local_120));
                    /* try { // try from 0084d9e8 to 0084d9f3 has its CatchHandler @ 0084db94 */
        pvStack_138 = pvVar8;
        local_130 = uVar5;
        FUN_00847748(auStack_160,&local_140);
        lVar9 = *(long *)(param_1 + 0x308);
        *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
        if (lVar9 != -1) {
          lVar12 = *(long *)(param_1 + 0x318);
          pvVar10 = *(void **)(param_1 + 0x310);
          if (lVar12 == 0) {
            if (lVar9 != 0) {
              free(pvVar10);
            }
          }
          else {
            uVar4 = *(ulong *)(param_1 + 0xb0);
            uVar6 = *(ulong *)(param_1 + 0x98);
            if (uVar4 == uVar6) {
                    /* try { // try from 0084da24 to 0084da2b has its CatchHandler @ 0084db50 */
              <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
              ::grow(param_1 + 0x98);
              uVar4 = *(ulong *)(param_1 + 0xb0);
              uVar6 = *(ulong *)(param_1 + 0x98);
            }
            uVar2 = *(long *)(param_1 + 0xa8) + uVar4;
            *(ulong *)(param_1 + 0xb0) = uVar4 + 1;
            uVar4 = 0;
            if (uVar6 <= uVar2) {
              uVar4 = uVar6;
            }
            plVar7 = (long *)(*(long *)(param_1 + 0xa0) + (uVar2 - uVar4) * 0x18);
            *plVar7 = lVar9;
            plVar7[1] = (long)pvVar10;
            plVar7[2] = lVar12;
          }
        }
                    /* try { // try from 0084da78 to 0084da83 has its CatchHandler @ 0084db94 */
        <rustls::msgs::message::outbound::[1]::rustls::msgs::message::outbound::OutboundOpaqueMessage>
        ::encode(&local_80,auStack_160);
        lVar12 = local_70;
        pvVar10 = local_78;
        lVar9 = local_80;
        if (local_70 == 0) {
          if (local_80 != 0) {
            free(local_78);
          }
        }
        else {
          uVar4 = *(ulong *)(param_1 + 0xb0);
          uVar6 = *(ulong *)(param_1 + 0x98);
          if (uVar4 == uVar6) {
                    /* try { // try from 0084daa0 to 0084daa7 has its CatchHandler @ 0084db78 */
            <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
            ::grow(param_1 + 0x98);
            uVar4 = *(ulong *)(param_1 + 0xb0);
            uVar6 = *(ulong *)(param_1 + 0x98);
          }
          uVar2 = *(long *)(param_1 + 0xa8) + uVar4;
          *(ulong *)(param_1 + 0xb0) = uVar4 + 1;
          uVar4 = 0;
          if (uVar6 <= uVar2) {
            uVar4 = uVar6;
          }
          plVar7 = (long *)(*(long *)(param_1 + 0xa0) + (uVar2 - uVar4) * 0x18);
          *plVar7 = lVar9;
          plVar7[1] = (long)pvVar10;
          plVar7[2] = lVar12;
        }
        uVar11 = uVar11 - uVar5;
        pvVar8 = (void *)((long)pvVar8 + uVar5);
      } while (uVar11 != 0);
    }
    if (0 < local_180) {
      free(local_178);
    }
  }
  else {
    lStack_b8 = param_2[0x11];
    local_c0 = param_2[0x10];
    lStack_a8 = param_2[0x13];
    lStack_b0 = param_2[0x12];
    lStack_98 = param_2[0x15];
    local_a0 = param_2[0x14];
    lStack_88 = param_2[0x17];
    lStack_90 = param_2[0x16];
    lStack_f8 = param_2[9];
    local_100 = param_2[8];
    lStack_e8 = param_2[0xb];
    lStack_f0 = param_2[10];
    lStack_d8 = param_2[0xd];
    local_e0 = param_2[0xc];
    lStack_c8 = param_2[0xf];
    lStack_d0 = param_2[0xe];
    pvStack_138 = (void *)param_2[1];
    local_140 = *param_2;
    lStack_128 = param_2[3];
    local_130 = param_2[2];
    lStack_118 = param_2[5];
    local_120 = param_2[4];
    lStack_108 = param_2[7];
    lStack_110 = param_2[6];
    <rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::
    from(auStack_160,&local_140);
    FUN_0084c208(param_1,auStack_160);
  }
  return;
}


// ===== 0084dbb8  <rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::supported_schemes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::supported_schemes */

void __rustcall
<rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::supported_schemes
          (ulong *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  
  uVar11 = *(ulong *)(param_2 + 0x18);
  if (uVar11 == 0) {
    *param_1 = 0;
    param_1[1] = 2;
    param_1[2] = 0;
    return;
  }
  uVar12 = *(ulong *)(param_2 + 0x10);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  uVar4 = FUN_004b25a4(uVar11 << 2,2);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(2,uVar11 << 2);
  }
  if ((uVar11 < 8) || ((uVar4 < (uVar12 + uVar11 * 0x18) - 0x14 && (uVar12 < uVar4 + uVar11 * 4))))
  {
    uVar5 = 0;
  }
  else {
    lVar7 = 0;
    uVar5 = uVar11 & 0xfffffffffffffff8;
    puVar9 = (undefined2 *)(uVar12 + 0x60);
    uVar10 = uVar11 & 0xfffffffffffffff8;
    do {
      puVar2 = puVar9 + -0x30;
      uVar10 = uVar10 - 8;
      uVar13 = puVar9[-0x24];
      uVar14 = puVar9[-0x18];
      uVar15 = puVar9[-0xc];
      uVar16 = *puVar9;
      uVar17 = puVar9[0xc];
      uVar18 = puVar9[0x18];
      uVar19 = puVar9[0x24];
      uVar20 = puVar9[-0x2f];
      uVar21 = puVar9[-0x23];
      uVar22 = puVar9[-0x17];
      uVar23 = puVar9[-0xb];
      uVar24 = puVar9[1];
      uVar25 = puVar9[0xd];
      uVar26 = puVar9[0x19];
      puVar3 = puVar9 + 0x25;
      puVar9 = puVar9 + 0x60;
      uVar27 = *puVar3;
      puVar3 = (undefined2 *)(uVar4 + lVar7);
      lVar7 = lVar7 + 0x20;
      *puVar3 = *puVar2;
      puVar3[1] = uVar20;
      puVar3[2] = uVar13;
      puVar3[3] = uVar21;
      puVar3[4] = uVar14;
      puVar3[5] = uVar22;
      puVar3[6] = uVar15;
      puVar3[7] = uVar23;
      puVar3[8] = uVar16;
      puVar3[9] = uVar24;
      puVar3[10] = uVar17;
      puVar3[0xb] = uVar25;
      puVar3[0xc] = uVar18;
      puVar3[0xd] = uVar26;
      puVar3[0xe] = uVar19;
      puVar3[0xf] = uVar27;
    } while (uVar10 != 0);
    if (uVar11 == uVar5) goto LAB_0084dc4c;
  }
  lVar6 = uVar11 - uVar5;
  lVar7 = uVar4 + uVar5 * 4 + 2;
  lVar8 = uVar12 + uVar5 * 0x18 + 2;
  do {
    puVar1 = (undefined4 *)(lVar8 + -2);
    lVar6 = lVar6 + -1;
    lVar8 = lVar8 + 0x18;
    *(undefined4 *)(lVar7 + -2) = *puVar1;
    lVar7 = lVar7 + 4;
  } while (lVar6 != 0);
LAB_0084dc4c:
  *param_1 = uVar11;
  param_1[1] = uVar4;
  param_1[2] = uVar11;
  return;
}


// ===== 0084dd34  <rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::fips =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::fips */

undefined8 __rustcall
<rustls::webpki::verify::rustls::webpki::verify::WebPkiSupportedAlgorithms>::fips
          (undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)*param_1;
  lVar6 = param_1[1] << 4;
  do {
    if (lVar6 == 0) {
      if (param_1[3] == 0) {
        return 1;
      }
      lVar6 = param_1[2];
      lVar5 = lVar6 + param_1[3] * 0x18;
      do {
        puVar4 = *(undefined8 **)(lVar6 + 8);
        plVar2 = (long *)(lVar6 + 0x10);
        lVar6 = lVar6 + 0x18;
        lVar7 = *plVar2 << 4;
        while (lVar7 != 0) {
          uVar1 = *puVar4;
          plVar2 = puVar4 + 1;
          puVar4 = puVar4 + 2;
          uVar3 = (**(code **)(*plVar2 + 0x38))(uVar1);
          lVar7 = lVar7 + -0x10;
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
      } while (lVar6 != lVar5);
      return 1;
    }
    uVar1 = *puVar4;
    plVar2 = puVar4 + 1;
    puVar4 = puVar4 + 2;
    uVar3 = (**(code **)(*plVar2 + 0x38))(uVar1);
    lVar6 = lVar6 + -0x10;
  } while ((uVar3 & 1) != 0);
  return 0;
}


// ===== 0084ddec  <rustls::client::client_conn::danger::rustls::client::client_conn::danger::DangerousClientConfig>::set_certificate_verifier =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::client::client_conn::danger::rustls::client::client_conn::danger::DangerousClientConfig>::set_certificate_verifier
    */

void __rustcall
<rustls::client::client_conn::danger::rustls::client::client_conn::danger::DangerousClientConfig>::
set_certificate_verifier(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + 0x128);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0084de24 to 0084de2b has its CatchHandler @ 0084de40 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(lVar5 + 0x128);
  }
  *(undefined8 *)(lVar5 + 0x128) = param_2;
  *(undefined8 *)(lVar5 + 0x130) = param_3;
  return;
}


// ===== 0084de48  <rustls::webpki::verify::[0]::rustls::webpki::verify::ParsedCertificate>::subject_public_key_info =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::webpki::verify::[0]::rustls::webpki::verify::ParsedCertificate>::subject_public_key_info
    */

void __rustcall
<rustls::webpki::verify::[0]::rustls::webpki::verify::ParsedCertificate>::subject_public_key_info
          (void)

{
  (*(code *)PTR_subject_public_key_info_00b04468)();
  return;
}


// ===== 0084de4c  FUN_0084de4c =====

void FUN_0084de4c(long param_1,undefined8 param_2)

{
  ulong __n;
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_68 [3];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  local_68[0] = 0x8000000000000000;
                    /* try { // try from 0084de7c to 0084deb3 has its CatchHandler @ 0084df50 */
  FUN_007f0930(param_2,param_1,local_68);
  uVar3 = *(ulong *)(param_1 + 0x10);
  __n = uVar3 - uVar1;
  if (uVar3 < uVar1) {
                    /* try { // try from 0084df14 to 0084df47 has its CatchHandler @ 0084df50 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar3,uVar3,&PTR_s__root__cargo_registry_src_index__00ae6920);
  }
  plVar2 = *(long **)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 8);
  (**(code **)(plVar2[6] + 0x30))(plVar2[5],lVar5 + uVar1,__n);
  if (*plVar2 == -1) goto LAB_0084def4;
  lVar4 = plVar2[2];
  if ((ulong)(*plVar2 - lVar4) < __n) {
    FUN_00874c84(plVar2,lVar4,__n,1,1);
    lVar4 = plVar2[2];
LAB_0084ded8:
    memcpy((void *)(plVar2[1] + lVar4),(void *)(lVar5 + uVar1),__n);
  }
  else if (uVar3 != uVar1) goto LAB_0084ded8;
  plVar2[2] = lVar4 + __n;
LAB_0084def4:
  FUN_0084aff4(param_2);
  return;
}


// ===== 0084df68  <rustls::enums::[H]::rustls::enums::CipherSuite>::as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::[H]::rustls::enums::CipherSuite>::as_str */

undefined1  [16] __rustcall
<rustls::enums::[H]::rustls::enums::CipherSuite>::as_str(ushort *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_002fddf0 + (ulong)*param_1 * 8);
  auVar1._0_8_ = (&PTR_DAT_00ae6a10)[*param_1];
  return auVar1;
}


// ===== 0084df88  <rustls::enums::[H]::rustls::enums::CipherSuite>::to_array =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::[H]::rustls::enums::CipherSuite>::to_array */

uint __rustcall <rustls::enums::[H]::rustls::enums::CipherSuite>::to_array(void)

{
  uint uVar1;
  
  uVar1 = <u16_as_core::convert::From<rustls::enums::CipherSuite>>::from();
  return (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
}


// ===== 0084dfa0  <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext */

undefined8 __rustcall
<rustls::common_state::rustls::common_state::CommonState>::buffer_plaintext
          (long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *__ptr;
  long lVar7;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar6 = *(long *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
  if (lVar6 != -1) {
    lVar7 = *(long *)(param_1 + 0x318);
    __ptr = *(void **)(param_1 + 0x310);
    if (lVar7 == 0) {
      if (lVar6 != 0) {
        free(__ptr);
      }
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x98);
      uVar3 = *(ulong *)(param_1 + 0xb0);
      if (uVar3 == uVar4) {
                    /* try { // try from 0084dff8 to 0084dffb has its CatchHandler @ 0084e0d8 */
        <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<alloc::vec::Vec<u8>>>
        ::grow();
        uVar3 = *(ulong *)(param_1 + 0xb0);
        uVar4 = *(ulong *)(param_1 + 0x98);
      }
      uVar1 = *(long *)(param_1 + 0xa8) + uVar3;
      *(ulong *)(param_1 + 0xb0) = uVar3 + 1;
      uVar3 = 0;
      if (uVar4 <= uVar1) {
        uVar3 = uVar4;
      }
      plVar5 = (long *)(*(long *)(param_1 + 0xa0) + (uVar1 - uVar3) * 0x18);
      *plVar5 = lVar6;
      plVar5[1] = (long)__ptr;
      plVar5[2] = lVar7;
    }
  }
  if (*(char *)(param_1 + 0x332) == '\x01') {
    lVar6 = param_2[2];
    if (*param_2 != 0) {
      lVar6 = param_2[3] - param_2[2];
    }
    if (lVar6 != 0) {
      uVar2 = FUN_0084c6b8(param_1,param_2,0);
      return uVar2;
    }
    return 0;
  }
  lStack_58 = param_2[1];
  local_60 = *param_2;
  lStack_48 = param_2[3];
  lStack_50 = param_2[2];
  uVar2 = FUN_0086f5e4(param_3,&local_60);
  return uVar2;
}


// ===== 0084e0f8  <rustls::enums::rustls::enums::AlertDescription>::to_array =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::rustls::enums::AlertDescription>::to_array */

byte * __rustcall
<rustls::enums::rustls::enums::AlertDescription>::to_array
          (undefined1 param_1 [16],byte *param_2,byte *param_3,undefined1 *param_4,byte *param_5)

{
  long lVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long in_x12;
  uint uVar8;
  ulong in_x13;
  uint in_w14;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte *pbVar9;
  undefined8 uVar10;
  byte *in_stack_00000000;
  byte *in_stack_00000008;
  undefined8 in_stack_00000028;
  byte *in_stack_00000030;
  byte *in_stack_00000038;
  byte *in_stack_00000040;
  byte *in_stack_00000048;
  undefined1 auStack_80 [128];
  
  uVar10 = param_1._8_8_;
  pbVar9 = param_1._0_8_;
  pbVar4 = (byte *)((ulong)param_2 & 0xff);
  pbVar5 = &switchD_0084e110::switchdataD_002f9feb;
  uVar7 = (ulong)pbVar4[0x2f9feb];
  pbVar6 = (byte *)(uVar7 * 4 + 0x84e114);
  switch(pbVar4) {
  case (byte *)0x0:
  case (byte *)0x30:
    return param_2;
  case (byte *)0x1:
  case (byte *)0x24:
  case (byte *)0x25:
  case (byte *)0x26:
  case (byte *)0x27:
  case (byte *)0x28:
  case (byte *)0x29:
  case (byte *)0x2a:
  case (byte *)0x39:
  case (byte *)0xb4:
  case (byte *)0xd7:
  case (byte *)0xfb:
    return (byte *)0xa;
  case (byte *)0x2:
  case (byte *)0xb5:
    return &DAT_00000014;
  case (byte *)0x3:
  case (byte *)0xb6:
    return (byte *)0x15;
  case (byte *)0x4:
  case (byte *)0xb7:
    return (byte *)0x16;
  case (byte *)0x5:
  case (byte *)0xb8:
    return (byte *)0x1e;
  case (byte *)0x6:
  case (byte *)0xb9:
    return &DAT_00000028;
  case (byte *)0x7:
  case (byte *)0xba:
    return (byte *)0x29;
  case (byte *)0x8:
  case (byte *)0xbb:
    return (byte *)0x2a;
  case (byte *)0x9:
  case (byte *)0xbc:
    return (byte *)0x2b;
  case (byte *)0xa:
  case (byte *)0xbd:
    return (byte *)0x2c;
  case (byte *)0xb:
  case (byte *)0xbe:
    return (byte *)0x2d;
  case (byte *)0xc:
  case (byte *)0xbf:
    return (byte *)0x2e;
  case (byte *)0xd:
  case (byte *)0xc0:
    return (byte *)0x2f;
  case (byte *)0xe:
  case (byte *)0xc1:
    return &DAT_00000030;
  case (byte *)0xf:
  case (byte *)0xc2:
    return (byte *)0x31;
  case (byte *)0x10:
  case (byte *)0xc3:
    return &DAT_00000032;
  case (byte *)0x11:
  case (byte *)0xc4:
    return (byte *)0x33;
  case (byte *)0x12:
  case (byte *)0xc5:
    return (byte *)0x3c;
  case (byte *)0x13:
  case (byte *)0xc6:
    return (byte *)0x46;
  case (byte *)0x14:
  case (byte *)0xc7:
    return (byte *)0x47;
  case (byte *)0x15:
  case (byte *)0xc8:
    return &DAT_00000050;
  case (byte *)0x16:
  case (byte *)0xc9:
    return (byte *)0x56;
  case (byte *)0x17:
  case (byte *)0xca:
    return (byte *)0x5a;
  case (byte *)0x18:
  case (byte *)0xcb:
    return (byte *)0x64;
  case (byte *)0x19:
  case (byte *)0xcc:
    return (byte *)0x6d;
  case (byte *)0x1a:
  case (byte *)0xcd:
    return (byte *)0x6e;
  case (byte *)0x1b:
  case (byte *)0xce:
    return (byte *)0x6f;
  case (byte *)0x1c:
  case (byte *)0xcf:
    return &DAT_00000070;
  case (byte *)0x1d:
  case (byte *)0xd0:
    return (byte *)0x71;
  case (byte *)0x1e:
  case (byte *)0xd1:
    return (byte *)0x72;
  case (byte *)0x1f:
  case (byte *)0xd2:
    return (byte *)0x73;
  case (byte *)0x20:
  case (byte *)0xd3:
    return (byte *)0x74;
  case (byte *)0x21:
  case (byte *)0xd4:
    return &DAT_00000078;
  case (byte *)0x22:
  case (byte *)0xd5:
  case (byte *)0xfa:
  case (byte *)0xff:
    return (byte *)0x79;
  case (byte *)0x23:
  case (byte *)0xd6:
    return (byte *)((ulong)param_3 & 0xffffffff);
  case (byte *)0x2b:
    return param_2;
  case (byte *)0x2c:
    return param_2;
  case (byte *)0x2d:
  case (byte *)0x75:
    return param_2;
  case (byte *)0x2e:
    return param_2;
  case (byte *)0x2f:
    return param_2;
  case (byte *)0x31:
  case (byte *)0x89:
    return param_2;
  case (byte *)0x32:
  case (byte *)0x93:
  case (byte *)0xf2:
    return param_2;
  case (byte *)0x33:
    return param_2;
  case (byte *)0x34:
    return param_2;
  case (byte *)0x35:
  case (byte *)0xa6:
    return param_2;
  case (byte *)0x36:
    return param_2;
  case (byte *)0x37:
    return param_2;
  case (byte *)0x38:
    return param_2;
  default:
switchD_0084e110_caseD_3a:
    in_stack_00000000 = param_2;
    in_stack_00000008 = pbVar4;
    if (pbVar5 != (byte *)0x0) {
      pbVar5 = pbVar5 + -1;
      pbVar4 = *(byte **)(pbVar4 + (long)(pbVar6 + 5) * 8);
switchD_0084e244_caseD_46:
LAB_0084e404:
      pbVar6 = (byte *)(ulong)*(ushort *)(pbVar4 + 10);
      uVar7 = 6;
switchD_0084e244_caseD_3f:
      in_x12 = (long)pbVar6 << 1;
switchD_0084e110_caseD_a8:
      do {
        if (in_x12 == 0) goto switchD_0084e110_caseD_3a;
        in_x13 = (ulong)*(ushort *)(pbVar4 + uVar7 * 2);
        in_w14 = (uint)param_3 & 0xffff;
        uVar7 = uVar7 + 1;
        in_x12 = in_x12 + -2;
switchD_0084e244_caseD_45:
        in_CY = (uint)in_x13 <= in_w14;
        in_ZR = in_w14 == (uint)in_x13;
switchD_0084e110_caseD_a7:
        uVar8 = (uint)((bool)in_CY && !(bool)in_ZR);
        if (!(bool)in_CY) {
          uVar8 = 0xffffffff;
        }
        in_x13 = (ulong)(uVar8 & 0xff);
      } while ((uVar8 & 0xff) == 1);
switchD_0084e244_caseD_29:
      if ((int)in_x13 == 0) goto switchD_0084e110_caseD_f3;
switchD_0084e244_caseD_eb:
      pbVar6 = (byte *)(uVar7 - 7);
      goto switchD_0084e110_caseD_3a;
    }
switchD_0084e244_caseD_8e:
    param_2 = unaff_x29 + -0x20;
    uVar10 = 0;
    pbVar9 = in_stack_00000008;
switchD_0084e244_caseD_41:
    *(byte **)(unaff_x29 + -0x10) = pbVar6;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
    *(byte **)(unaff_x29 + -0x20) = pbVar9;
    FUN_00846138(&stack0x00000028,param_2);
switchD_0084e244_caseD_47:
    break;
  case (byte *)0x4d:
  case (byte *)0xe8:
switchD_0084e244_caseD_a1:
    while( true ) {
      uVar8 = (uint)in_x13 & 0xff;
      in_x13 = (ulong)uVar8;
      in_ZR = uVar8 == 1;
switchD_0084e244_caseD_99:
      if ((bool)in_ZR) goto LAB_0084e2e4;
      if ((int)in_x13 == 0) break;
switchD_0084e244_caseD_97:
      pbVar6 = (byte *)(uVar7 - 0xd);
switchD_0084e244_caseD_6b:
      do {
        if (pbVar5 == (byte *)0x0) {
          *(byte **)register0x00000008 = param_2;
          *(byte **)((long)register0x00000008 + 8) = pbVar4;
          pbVar4 = (byte *)((ulong)param_3 & 0xffffffff);
          pbVar5 = (byte *)register0x00000008;
          goto switchD_0084e244_caseD_f1;
        }
switchD_0084e244_caseD_ad:
        pbVar4 = pbVar4 + (long)pbVar6 * 8;
        pbVar5 = pbVar5 + -1;
switchD_0084e244_caseD_af:
        pbVar4 = *(byte **)(pbVar4 + 0x18);
switchD_0084e244_caseD_a0:
        pbVar6 = (byte *)(ulong)*(ushort *)(pbVar4 + 10);
        uVar7 = 0xc;
switchD_0084e244_caseD_a3:
        in_x12 = -(long)pbVar6;
LAB_0084e2e4:
        in_x13 = in_x12 + uVar7;
switchD_0084e244_caseD_94:
        in_ZR = in_x13 == 0xc;
switchD_0084e244_caseD_43:
      } while ((bool)in_ZR);
switchD_0084e244_caseD_a4:
      in_x13 = (ulong)pbVar4[uVar7];
      in_w14 = (uint)param_3 & 0xff;
switchD_0084e244_caseD_9c:
      uVar7 = uVar7 + 1;
      in_CY = (uint)in_x13 <= in_w14;
      in_ZR = in_w14 == (uint)in_x13;
switchD_0084e244_caseD_95:
      in_x13 = (ulong)((bool)in_CY && !(bool)in_ZR);
switchD_0084e244_caseD_42:
      uVar8 = (uint)in_x13;
      if (!(bool)in_CY) {
        uVar8 = 0xffffffff;
      }
      in_x13 = (ulong)uVar8;
    }
switchD_0084e244_caseD_a5:
    param_2 = &DAT_00000001;
switchD_0084e244_caseD_5b:
  case (byte *)0x43:
  case (byte *)0xdc:
switchD_0084e244_caseD_a2:
switchD_0084e244_caseD_a6:
    return param_2;
  case (byte *)0x4e:
  case (byte *)0xd9:
switchD_0084e244_caseD_b0:
    return param_2;
  case (byte *)0x4f:
  case (byte *)0xe6:
switchD_0084e244_caseD_9b:
    return param_2;
  case (byte *)0x57:
  case (byte *)0xe4:
    goto switchD_0084e110_caseD_57;
  case (byte *)0x61:
  case (byte *)0xf0:
switchD_0084e244_caseD_0:
    return param_2;
  case (byte *)0x62:
  case (byte *)0xef:
switchD_0084e244_caseD_b1:
    return param_2;
  case (byte *)0x63:
  case (byte *)0xd8:
    goto switchD_0084e244_caseD_a0;
  case (byte *)0x64:
  case (byte *)0xde:
    goto switchD_0084e244_caseD_92;
  case (byte *)0x65:
  case (byte *)0xe1:
    goto switchD_0084e244_caseD_e5;
  case (byte *)0x66:
  case (byte *)0xf8:
  case (byte *)0xfc:
    return param_2;
  case (byte *)0x67:
  case (byte *)0xe5:
    return param_2;
  case (byte *)0x68:
  case (byte *)0xf5:
    goto switchD_0084e110_caseD_68;
  case (byte *)0x69:
  case (byte *)0xf6:
    goto switchD_0084e244_caseD_a4;
  case (byte *)0x6a:
  case (byte *)0xeb:
    goto switchD_0084e244_caseD_ad;
  case (byte *)0x6b:
  case (byte *)0xdf:
    goto switchD_0084e110_caseD_6b;
  case (byte *)0x6c:
  case (byte *)0xdd:
    goto switchD_0084e110_caseD_6c;
  case (byte *)0x7f:
  case (byte *)0xdb:
    return param_2;
  case (byte *)0x80:
  case (byte *)0xf7:
switchD_0084e110_caseD_80:
    pbVar4 = *(byte **)param_2;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = *(byte **)(param_2 + 8);
      goto LAB_0084e404;
    }
switchD_0084e244_caseD_1f:
  case (byte *)0xf4:
switchD_0084e244_caseD_ed:
    unaff_x19 = param_3;
    unaff_x20 = param_2;
switchD_0084e244_caseD_f7:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    param_2 = &DAT_00000028;
switchD_0084e244_caseD_87:
    param_3 = &DAT_00000008;
    goto switchD_0084e110_caseD_f1;
  case (byte *)0x8f:
  case (byte *)0xe2:
    return param_2;
  case (byte *)0x9d:
  case (byte *)0xda:
switchD_0084e244_caseD_a7:
    return param_2;
  case (byte *)0xa7:
  case (byte *)0xea:
    goto switchD_0084e110_caseD_a7;
  case (byte *)0xa8:
  case (byte *)0xed:
    goto switchD_0084e110_caseD_a8;
  case (byte *)0xa9:
  case (byte *)0xe7:
  case (byte *)0xfe:
    return param_2;
  case (byte *)0xaa:
  case (byte *)0xe3:
    return param_2;
  case (byte *)0xab:
  case (byte *)0xec:
    goto switchD_0084e244_caseD_ac;
  case (byte *)0xac:
  case (byte *)0xe0:
    pbVar5 = &switchD_0084e244::switchdataD_002fa00f;
    uVar7 = (ulong)pbVar4[0x2fa00f];
    pbVar6 = (byte *)(uVar7 * 4 + 0x84e248);
    pbVar3 = unaff_x20;
    switch(pbVar4) {
    case (byte *)0x0:
    case (byte *)0x1:
    case (byte *)0x2:
    case (byte *)0x3:
    case (byte *)0x4:
    case (byte *)0x5:
    case (byte *)0x6:
    case (byte *)0x15:
    case (byte *)0x90:
    case (byte *)0xb3:
    case (byte *)0xd7:
    case (byte *)0xe1:
    case (byte *)0xe2:
    case (byte *)0xe4:
    case (byte *)0xe6:
    case (byte *)0xec:
    case (byte *)0xf2:
    case (byte *)0xf8:
    case (byte *)0xfc:
      goto switchD_0084e244_caseD_0;
    case (byte *)0x7:
      return &DAT_00000008;
    case (byte *)0x8:
      return (byte *)0xb;
    case (byte *)0x9:
    case (byte *)0x51:
      return &DAT_0000000c;
    case (byte *)0xa:
      return (byte *)0xd;
    case (byte *)0xb:
    case (byte *)0xe8:
    case (byte *)0xea:
    case (byte *)0xee:
    case (byte *)0xf0:
    case (byte *)0xf4:
    case (byte *)0xf6:
    case (byte *)0xfa:
    case (byte *)0xfe:
      return (byte *)0xe;
    case (byte *)0xc:
      return (byte *)0xf;
    case (byte *)0xd:
    case (byte *)0x65:
      return &DAT_00000010;
    case (byte *)0xe:
    case (byte *)0x6f:
    case (byte *)0xce:
      return &DAT_00000014;
    case (byte *)0xf:
      return (byte *)0x15;
    case (byte *)0x10:
      return (byte *)0x16;
    case (byte *)0x11:
    case (byte *)0x82:
      return &DAT_00000018;
    case (byte *)0x12:
      return &DAT_00000019;
    case (byte *)0x13:
      return (byte *)0xfe;
    case (byte *)0x14:
      return (byte *)((ulong)param_3 & 0xffffffff);
    default:
      goto switchD_0084e244_caseD_16;
    case (byte *)0x1f:
    case (byte *)0xb8:
      goto switchD_0084e244_caseD_1f;
    case (byte *)0x29:
    case (byte *)0xc4:
      goto switchD_0084e244_caseD_29;
    case (byte *)0x2b:
    case (byte *)0xc2:
      goto switchD_0084e244_caseD_2b;
    case (byte *)0x33:
    case (byte *)0xc0:
      goto switchD_0084e244_caseD_33;
    case (byte *)0x3d:
    case (byte *)0xcc:
      goto switchD_0084e244_caseD_3d;
    case (byte *)0x3e:
    case (byte *)0xcb:
      goto switchD_0084e244_caseD_3e;
    case (byte *)0x3f:
    case (byte *)0xb4:
      goto switchD_0084e244_caseD_3f;
    case (byte *)0x40:
    case (byte *)0xba:
      unaff_x29 = &stack0x00000060;
      goto switchD_0084e110_caseD_80;
    case (byte *)0x41:
    case (byte *)0xbd:
      goto switchD_0084e244_caseD_41;
    case (byte *)0x42:
    case (byte *)0xd4:
    case (byte *)0xd8:
      goto switchD_0084e244_caseD_42;
    case (byte *)0x43:
    case (byte *)0xc1:
    case (byte *)0xde:
      goto switchD_0084e244_caseD_43;
    case (byte *)0x44:
    case (byte *)0xd1:
      goto switchD_0084e244_caseD_44;
    case (byte *)0x45:
    case (byte *)0xd2:
      goto switchD_0084e244_caseD_45;
    case (byte *)0x46:
    case (byte *)0xc7:
      goto switchD_0084e244_caseD_46;
    case (byte *)0x47:
    case (byte *)0xbb:
      goto switchD_0084e244_caseD_47;
    case (byte *)0x48:
    case (byte *)0xb9:
      goto switchD_0084e244_caseD_48;
    case (byte *)0x5b:
    case (byte *)0xb7:
    case (byte *)0xdd:
      goto switchD_0084e244_caseD_5b;
    case (byte *)0x5c:
    case (byte *)0xd3:
      goto switchD_0084e244_caseD_5c;
    case (byte *)0x6b:
    case (byte *)0xbe:
    case (byte *)0xdc:
      goto switchD_0084e244_caseD_6b;
    case (byte *)0x79:
    case (byte *)0xb6:
      goto switchD_0084e244_caseD_79;
    case (byte *)0x83:
    case (byte *)0xc6:
      goto switchD_0084e244_caseD_83;
    case (byte *)0x84:
    case (byte *)0xc9:
      goto switchD_0084e244_caseD_84;
    case (byte *)0x85:
    case (byte *)0xc3:
    case (byte *)0xda:
      goto switchD_0084e244_caseD_85;
    case (byte *)0x86:
    case (byte *)0xbf:
    case (byte *)0xdf:
      goto switchD_0084e244_caseD_86;
    case (byte *)0x87:
    case (byte *)0xc8:
      goto switchD_0084e244_caseD_87;
    case (byte *)0x88:
    case (byte *)0xbc:
      goto switchD_0084e244_caseD_88;
    case (byte *)0x89:
    case (byte *)0xca:
      goto switchD_0084e244_caseD_89;
    case (byte *)0x8d:
    case (byte *)0xd5:
    case (byte *)0xd9:
      register0x00000008 = (BADSPACEBASE *)auStack_80;
    case (byte *)0x92:
switchD_0084e244_caseD_92:
      *(undefined1 **)((long)register0x00000008 + 0x60) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
      *(byte **)((long)register0x00000008 + 0x70) = unaff_x20;
      *(byte **)((long)register0x00000008 + 0x78) = unaff_x19;
switchD_0084e244_caseD_96:
      unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x60);
      pbVar4 = *(byte **)param_2;
switchD_0084e244_caseD_ae:
      if (pbVar4 != (byte *)0x0) {
switchD_0084e244_caseD_85:
        pbVar5 = *(byte **)(param_2 + 8);
        goto switchD_0084e244_caseD_a0;
      }
      pbVar4 = (byte *)((ulong)param_3 & 0xff);
switchD_0084e244_caseD_ab:
      unaff_x20 = param_2;
switchD_0084e244_caseD_86:
      unaff_x19 = param_3;
switchD_0084e244_caseD_ac:
      *(byte **)((long)register0x00000008 + 0x20) = pbVar4;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
switchD_0084e244_caseD_a9:
      param_2 = &DAT_00000018;
switchD_0084e244_caseD_8f:
      param_2 = (byte *)FUN_004b25a4(param_2,8);
switchD_0084e244_caseD_88:
      if (param_2 == (byte *)0x0) {
switchD_0084e244_caseD_79:
        param_2 = &DAT_00000008;
switchD_0084e110_caseD_68:
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(param_2,0x18);
      }
      goto switchD_0084e110_caseD_57;
    case (byte *)0x8e:
    case (byte *)0xc5:
      goto switchD_0084e244_caseD_8e;
    case (byte *)0x8f:
      goto switchD_0084e244_caseD_8f;
    case (byte *)0x91:
      return param_2;
    case (byte *)0x93:
      return param_2;
    case (byte *)0x94:
      goto switchD_0084e244_caseD_94;
    case (byte *)0x95:
      goto switchD_0084e244_caseD_95;
    case (byte *)0x96:
      goto switchD_0084e244_caseD_96;
    case (byte *)0x97:
      goto switchD_0084e244_caseD_97;
    case (byte *)0x98:
      return param_2;
    case (byte *)0x99:
      goto switchD_0084e244_caseD_99;
    case (byte *)0x9a:
      return param_2;
    case (byte *)0x9b:
      goto switchD_0084e244_caseD_9b;
    case (byte *)0x9c:
      goto switchD_0084e244_caseD_9c;
    case (byte *)0x9d:
      return param_2;
    case (byte *)0x9e:
      return param_2;
    case (byte *)0x9f:
      return param_2;
    case (byte *)0xa0:
      goto switchD_0084e244_caseD_a0;
    case (byte *)0xa1:
    case (byte *)0xff:
      goto switchD_0084e244_caseD_a1;
    case (byte *)0xa2:
      goto switchD_0084e244_caseD_a2;
    case (byte *)0xa3:
      goto switchD_0084e244_caseD_a3;
    case (byte *)0xa4:
      goto switchD_0084e244_caseD_a4;
    case (byte *)0xa5:
      goto switchD_0084e244_caseD_a5;
    case (byte *)0xa6:
      goto switchD_0084e244_caseD_a6;
    case (byte *)0xa7:
      goto switchD_0084e244_caseD_a7;
    case (byte *)0xa8:
    case (byte *)0xf3:
      return param_2;
    case (byte *)0xa9:
      goto switchD_0084e244_caseD_a9;
    case (byte *)0xaa:
      return param_2;
    case (byte *)0xab:
      goto switchD_0084e244_caseD_ab;
    case (byte *)0xac:
      goto switchD_0084e244_caseD_ac;
    case (byte *)0xad:
      goto switchD_0084e244_caseD_ad;
    case (byte *)0xae:
      goto switchD_0084e244_caseD_ae;
    case (byte *)0xaf:
      goto switchD_0084e244_caseD_af;
    case (byte *)0xb0:
    case (byte *)0xe0:
      goto switchD_0084e244_caseD_b0;
    case (byte *)0xb1:
    case (byte *)0xd6:
    case (byte *)0xdb:
      goto switchD_0084e244_caseD_b1;
    case (byte *)0xb2:
      return param_2;
    case (byte *)0xcd:
      goto switchD_0084e244_caseD_cd;
    case (byte *)0xcf:
      goto switchD_0084e244_caseD_cf;
    case (byte *)0xd0:
      goto switchD_0084e244_caseD_d0;
    case (byte *)0xe3:
      goto switchD_0084e244_caseD_e3;
    case (byte *)0xe5:
      goto switchD_0084e244_caseD_e5;
    case (byte *)0xe7:
      goto switchD_0084e244_caseD_e7;
    case (byte *)0xe9:
      goto switchD_0084e244_caseD_e9;
    case (byte *)0xeb:
      goto switchD_0084e244_caseD_eb;
    case (byte *)0xed:
      goto switchD_0084e244_caseD_ed;
    case (byte *)0xef:
      goto switchD_0084e244_caseD_ef;
    case (byte *)0xf1:
switchD_0084e244_caseD_f1:
      *(undefined8 *)((long)register0x00000008 + 0x10) = 0;
      *(byte **)((long)register0x00000008 + 0x18) = pbVar6;
    case (byte *)0x2a:
    case (byte *)0xb5:
      pbVar4 = (byte *)((ulong)pbVar4 & 0xff);
switchD_0084e244_caseD_e5:
      param_2 = unaff_x29 + -0x20;
      uVar10 = *(undefined8 *)((long)register0x00000008 + 0x10);
      pbVar9 = *(byte **)((long)register0x00000008 + 8);
switchD_0084e244_caseD_e3:
      *(byte **)((long)register0x00000008 + 0x20) = pbVar4;
      pbVar4 = (byte *)((long)register0x00000008 + 0x28);
switchD_0084e244_caseD_fb:
      param_4 = (undefined1 *)register0x00000008;
switchD_0084e244_caseD_2b:
      param_5 = pbVar5 + 0x21;
      goto switchD_0084e110_caseD_6b;
    case (byte *)0xf5:
      goto switchD_0084e244_caseD_f5;
    case (byte *)0xf7:
      goto switchD_0084e244_caseD_f7;
    case (byte *)0xf9:
      goto switchD_0084e244_caseD_f9;
    case (byte *)0xfb:
      goto switchD_0084e244_caseD_fb;
    case (byte *)0xfd:
      goto switchD_0084e244_caseD_fd;
    }
  case (byte *)0xad:
  case (byte *)0xee:
    goto switchD_0084e244_caseD_eb;
  case (byte *)0xb1:
  case (byte *)0xf9:
  case (byte *)0xfd:
    return param_2;
  case (byte *)0xb2:
  case (byte *)0xe9:
    goto switchD_0084e110_caseD_b2;
  case (byte *)0xb3:
    return param_2;
  case (byte *)0xf1:
    goto switchD_0084e110_caseD_f1;
  case (byte *)0xf3:
switchD_0084e110_caseD_f3:
    return &DAT_00000001;
  }
  goto LAB_0084e4a4;
switchD_0084e110_caseD_57:
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(byte **)unaff_x20 = param_2;
  unaff_x20[8] = 0;
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[0xd] = 0;
  unaff_x20[0xe] = 0;
  unaff_x20[0xf] = 0;
  param_2[10] = 1;
  param_2[0xb] = 0;
  param_2[0xc] = (byte)unaff_x19;
  goto switchD_0084e244_caseD_3d;
switchD_0084e110_caseD_f1:
  param_2 = (byte *)FUN_004b25a4(param_2,param_3);
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  pbVar4 = &DAT_00000001;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(byte **)unaff_x20 = param_2;
  unaff_x20[8] = 0;
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[0xd] = 0;
  unaff_x20[0xe] = 0;
  unaff_x20[0xf] = 0;
  pbVar3 = unaff_x20;
switchD_0084e244_caseD_33:
  in_stack_00000000 = pbVar3;
  *(short *)(param_2 + 10) = (short)pbVar4;
  *(short *)(param_2 + 0xc) = (short)unaff_x19;
LAB_0084e4a4:
  param_2 = (byte *)0x0;
  *(long *)(in_stack_00000000 + 0x10) = *(long *)(in_stack_00000000 + 0x10) + 1;
switchD_0084e244_caseD_48:
  return param_2;
switchD_0084e244_caseD_44:
  pbVar4 = *(byte **)(param_3 + 0x40);
  in_stack_00000028 = unaff_x23;
  in_stack_00000030 = unaff_x22;
  in_stack_00000038 = unaff_x21;
  in_stack_00000040 = unaff_x20;
  in_stack_00000048 = unaff_x19;
switchD_0084e244_caseD_5c:
  unaff_x19 = param_2;
switchD_0084e244_caseD_f9:
  if (pbVar4 == (byte *)0x0) {
    param_2 = *(byte **)(param_3 + 8);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    pbVar4 = *(byte **)(param_3 + 0x10);
    pbVar5 = *(byte **)(param_3 + 0x18);
    if (*(long *)param_3 == 1) {
switchD_0084e244_caseD_d0:
      if (param_2 == (byte *)0x0) {
        for (; pbVar5 != (byte *)0x0; pbVar5 = pbVar5 + -1) {
          pbVar4 = *(byte **)(pbVar4 + 0x380);
        }
        pbVar5 = *(byte **)pbVar4;
        param_2 = pbVar4;
      }
      else {
        pbVar5 = *(byte **)param_2;
      }
      while (pbVar4 = pbVar5, pbVar4 != (byte *)0x0) {
switchD_0084e244_caseD_cd:
        free(param_2);
        param_2 = pbVar4;
        pbVar5 = *(byte **)pbVar4;
      }
      free(param_2);
    }
    unaff_x19[0] = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    return param_2;
  }
  pbVar5 = *(byte **)param_3;
switchD_0084e244_caseD_ef:
  *(byte **)(param_3 + 0x40) = pbVar4 + -1;
  in_ZR = pbVar5 == &DAT_00000001;
switchD_0084e244_caseD_84:
  if (!(bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68c0);
  }
switchD_0084e244_caseD_e9:
  param_2 = *(byte **)(param_3 + 8);
  if (param_2 == (byte *)0x0) {
    pbVar5 = param_3 + 0x10;
    param_2 = *(byte **)pbVar5;
    for (lVar1 = *(long *)(param_3 + 0x18); lVar1 != 0; lVar1 = lVar1 + -1) {
      param_2 = *(byte **)(param_2 + 0x380);
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0] = 1;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(byte **)(param_3 + 8) = param_2;
    pbVar4 = *(byte **)(param_3 + 0x10);
    unaff_x20 = *(byte **)(param_3 + 0x18);
    unaff_x21 = param_2;
    unaff_x22 = pbVar4;
    if ((byte *)(ulong)*(ushort *)(param_2 + 0x37a) <= unaff_x20) goto LAB_0084e624;
switchD_0084e244_caseD_f5:
    pbVar5 = pbVar4;
  }
  else {
    pbVar4 = *(byte **)(param_3 + 0x10);
    unaff_x20 = *(byte **)(param_3 + 0x18);
    pbVar5 = (byte *)(ulong)*(ushort *)(param_2 + 0x37a);
switchD_0084e244_caseD_fd:
    in_CY = pbVar5 <= unaff_x20;
switchD_0084e244_caseD_83:
    unaff_x21 = param_2;
    unaff_x22 = pbVar4;
    if (!(bool)in_CY) goto switchD_0084e244_caseD_f5;
LAB_0084e624:
    do {
      unaff_x21 = *(byte **)param_2;
      if (unaff_x21 == (byte *)0x0) {
        free(param_2);
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68d8);
      }
      uVar2 = *(ushort *)(param_2 + 0x378);
      unaff_x20 = (byte *)(ulong)uVar2;
      pbVar4 = pbVar4 + 1;
      free(param_2);
      param_2 = unaff_x21;
      unaff_x22 = pbVar4;
      pbVar5 = pbVar4;
    } while (*(ushort *)(unaff_x21 + 0x37a) <= uVar2);
  }
  pbVar4 = unaff_x21;
  unaff_x21 = pbVar4;
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = unaff_x20 + 1;
  }
  else {
    pbVar4 = pbVar4 + (long)unaff_x20 * 8;
switchD_0084e244_caseD_e7:
    pbVar6 = unaff_x22;
    unaff_x22 = pbVar6;
switchD_0084e244_caseD_89:
    pbVar5 = pbVar4 + 0x388;
switchD_0084e244_caseD_16:
    do {
      pbVar4 = *(byte **)pbVar5;
      pbVar6 = pbVar6 + -1;
      pbVar5 = pbVar4 + 0x380;
    } while (pbVar6 != (byte *)0x0);
    pbVar5 = (byte *)0x0;
switchD_0084e244_caseD_cf:
  }
  *(byte **)unaff_x19 = unaff_x21;
  *(byte **)(unaff_x19 + 8) = unaff_x22;
  *(byte **)(unaff_x19 + 0x10) = unaff_x20;
  *(byte **)(param_3 + 8) = pbVar4;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  *(byte **)(param_3 + 0x18) = pbVar5;
  return param_2;
switchD_0084e110_caseD_6b:
  *(byte **)(unaff_x29 + -0x10) = pbVar6;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
  *(byte **)(unaff_x29 + -0x20) = pbVar9;
  FUN_00845b7c(pbVar4,param_2,param_3,param_4,param_5);
  unaff_x20 = *(byte **)register0x00000008;
switchD_0084e244_caseD_3d:
  pbVar4 = *(byte **)(unaff_x20 + 0x10);
switchD_0084e110_caseD_6c:
  param_2 = (byte *)0x0;
  *(byte **)(unaff_x20 + 0x10) = pbVar4 + 1;
switchD_0084e244_caseD_3e:
switchD_0084e110_caseD_b2:
  return param_2;
}


// ===== 0084e22c  <rustls::enums::[a]::rustls::enums::HandshakeType>::to_array =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::[a]::rustls::enums::HandshakeType>::to_array */

byte * __rustcall
<rustls::enums::[a]::rustls::enums::HandshakeType>::to_array
          (undefined1 param_1 [16],byte *param_2,byte *param_3,undefined1 *param_4)

{
  long lVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long in_x12;
  uint uVar8;
  ulong in_x13;
  uint in_w14;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte *pbVar9;
  undefined8 uVar10;
  byte *in_stack_00000000;
  byte *in_stack_00000008;
  undefined8 in_stack_00000028;
  byte *in_stack_00000030;
  byte *in_stack_00000038;
  byte *in_stack_00000040;
  byte *in_stack_00000048;
  undefined1 auStack_80 [128];
  
  uVar10 = param_1._8_8_;
  pbVar9 = param_1._0_8_;
  pbVar4 = (byte *)((ulong)param_2 & 0xff);
  pbVar5 = &switchD_0084e244::switchdataD_002fa00f;
  uVar7 = (ulong)pbVar4[0x2fa00f];
  pbVar6 = (byte *)(uVar7 * 4 + 0x84e248);
  pbVar3 = unaff_x20;
  switch(pbVar4) {
  case (byte *)0x0:
  case (byte *)0x1:
  case (byte *)0x2:
  case (byte *)0x3:
  case (byte *)0x4:
  case (byte *)0x5:
  case (byte *)0x6:
  case (byte *)0x15:
  case (byte *)0x90:
  case (byte *)0xb3:
  case (byte *)0xd7:
  case (byte *)0xe1:
  case (byte *)0xe2:
  case (byte *)0xe4:
  case (byte *)0xe6:
  case (byte *)0xec:
  case (byte *)0xf2:
  case (byte *)0xf8:
  case (byte *)0xfc:
    return param_2;
  case (byte *)0x7:
    return &DAT_00000008;
  case (byte *)0x8:
    return (byte *)0xb;
  case (byte *)0x9:
  case (byte *)0x51:
    return &DAT_0000000c;
  case (byte *)0xa:
    return (byte *)0xd;
  case (byte *)0xb:
  case (byte *)0xe8:
  case (byte *)0xea:
  case (byte *)0xee:
  case (byte *)0xf0:
  case (byte *)0xf4:
  case (byte *)0xf6:
  case (byte *)0xfa:
  case (byte *)0xfe:
    return (byte *)0xe;
  case (byte *)0xc:
    return (byte *)0xf;
  case (byte *)0xd:
  case (byte *)0x65:
    return &DAT_00000010;
  case (byte *)0xe:
  case (byte *)0x6f:
  case (byte *)0xce:
    return &DAT_00000014;
  case (byte *)0xf:
    return (byte *)0x15;
  case (byte *)0x10:
    return (byte *)0x16;
  case (byte *)0x11:
  case (byte *)0x82:
    return &DAT_00000018;
  case (byte *)0x12:
    return &DAT_00000019;
  case (byte *)0x13:
    return (byte *)0xfe;
  case (byte *)0x14:
    return (byte *)((ulong)param_3 & 0xffffffff);
  default:
    goto switchD_0084e244_caseD_16;
  case (byte *)0x29:
  case (byte *)0xc4:
switchD_0084e244_caseD_29:
    if ((int)in_x13 == 0) {
      return &DAT_00000001;
    }
switchD_0084e244_caseD_eb:
    pbVar6 = (byte *)(uVar7 - 7);
    while (in_stack_00000000 = param_2, in_stack_00000008 = pbVar4, pbVar5 != (byte *)0x0) {
      pbVar5 = pbVar5 + -1;
      pbVar4 = *(byte **)(pbVar4 + (long)(pbVar6 + 5) * 8);
switchD_0084e244_caseD_46:
LAB_0084e404:
      pbVar6 = (byte *)(ulong)*(ushort *)(pbVar4 + 10);
      uVar7 = 6;
switchD_0084e244_caseD_3f:
      in_x12 = (long)pbVar6 << 1;
      while (in_x12 != 0) {
        in_x13 = (ulong)*(ushort *)(pbVar4 + uVar7 * 2);
        in_w14 = (uint)param_3 & 0xffff;
        uVar7 = uVar7 + 1;
        in_x12 = in_x12 + -2;
switchD_0084e244_caseD_45:
        uVar8 = (uint)((uint)in_x13 < in_w14);
        if (in_w14 < (uint)in_x13) {
          uVar8 = 0xffffffff;
        }
        in_x13 = (ulong)(uVar8 & 0xff);
        if ((uVar8 & 0xff) != 1) goto switchD_0084e244_caseD_29;
      }
    }
  case (byte *)0x8e:
  case (byte *)0xc5:
    param_2 = unaff_x29 + -0x20;
    uVar10 = 0;
    pbVar9 = in_stack_00000008;
    break;
  case (byte *)0x2b:
  case (byte *)0xc2:
    goto switchD_0084e244_caseD_2b;
  case (byte *)0x33:
  case (byte *)0xc0:
    goto switchD_0084e244_caseD_33;
  case (byte *)0x3d:
  case (byte *)0xcc:
    goto switchD_0084e244_caseD_3d;
  case (byte *)0x3e:
  case (byte *)0xcb:
    goto switchD_0084e244_caseD_3e;
  case (byte *)0x3f:
  case (byte *)0xb4:
    goto switchD_0084e244_caseD_3f;
  case (byte *)0x40:
  case (byte *)0xba:
    unaff_x29 = &stack0x00000060;
    pbVar4 = *(byte **)param_2;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = *(byte **)(param_2 + 8);
      goto LAB_0084e404;
    }
  case (byte *)0x1f:
  case (byte *)0xb8:
    goto switchD_0084e244_caseD_ed;
  case (byte *)0x41:
  case (byte *)0xbd:
    break;
  case (byte *)0x42:
  case (byte *)0xd4:
  case (byte *)0xd8:
    while( true ) {
      uVar8 = (uint)in_x13;
      if (!(bool)in_CY) {
        uVar8 = 0xffffffff;
      }
      in_x13 = (ulong)uVar8;
switchD_0084e244_caseD_a1:
      uVar8 = (uint)in_x13 & 0xff;
      in_x13 = (ulong)uVar8;
      in_ZR = uVar8 == 1;
switchD_0084e244_caseD_99:
      if ((bool)in_ZR) goto LAB_0084e2e4;
      if ((int)in_x13 == 0) break;
switchD_0084e244_caseD_97:
      pbVar6 = (byte *)(uVar7 - 0xd);
switchD_0084e244_caseD_6b:
      do {
        if (pbVar5 == (byte *)0x0) {
          *(byte **)register0x00000008 = param_2;
          *(byte **)((long)register0x00000008 + 8) = pbVar4;
          pbVar4 = (byte *)((ulong)param_3 & 0xffffffff);
          pbVar5 = (byte *)register0x00000008;
          goto switchD_0084e244_caseD_f1;
        }
switchD_0084e244_caseD_ad:
        pbVar4 = pbVar4 + (long)pbVar6 * 8;
        pbVar5 = pbVar5 + -1;
switchD_0084e244_caseD_af:
        pbVar4 = *(byte **)(pbVar4 + 0x18);
switchD_0084e244_caseD_a0:
        pbVar6 = (byte *)(ulong)*(ushort *)(pbVar4 + 10);
        uVar7 = 0xc;
switchD_0084e244_caseD_a3:
        in_x12 = -(long)pbVar6;
LAB_0084e2e4:
        in_x13 = in_x12 + uVar7;
switchD_0084e244_caseD_94:
        in_ZR = in_x13 == 0xc;
switchD_0084e244_caseD_43:
      } while ((bool)in_ZR);
switchD_0084e244_caseD_a4:
      in_x13 = (ulong)pbVar4[uVar7];
      in_w14 = (uint)param_3 & 0xff;
switchD_0084e244_caseD_9c:
      uVar7 = uVar7 + 1;
      in_CY = (uint)in_x13 <= in_w14;
      in_ZR = in_w14 == (uint)in_x13;
switchD_0084e244_caseD_95:
      in_x13 = (ulong)((bool)in_CY && !(bool)in_ZR);
    }
  case (byte *)0xa5:
    param_2 = &DAT_00000001;
switchD_0084e244_caseD_5b:
switchD_0084e244_caseD_a2:
switchD_0084e244_caseD_a6:
    return param_2;
  case (byte *)0x43:
  case (byte *)0xc1:
  case (byte *)0xde:
    goto switchD_0084e244_caseD_43;
  case (byte *)0x44:
  case (byte *)0xd1:
    goto switchD_0084e244_caseD_44;
  case (byte *)0x45:
  case (byte *)0xd2:
    goto switchD_0084e244_caseD_45;
  case (byte *)0x46:
  case (byte *)0xc7:
    goto switchD_0084e244_caseD_46;
  case (byte *)0x47:
  case (byte *)0xbb:
    goto switchD_0084e244_caseD_47;
  case (byte *)0x48:
  case (byte *)0xb9:
    goto switchD_0084e244_caseD_48;
  case (byte *)0x5b:
  case (byte *)0xb7:
  case (byte *)0xdd:
    goto switchD_0084e244_caseD_5b;
  case (byte *)0x5c:
  case (byte *)0xd3:
    goto switchD_0084e244_caseD_5c;
  case (byte *)0x6b:
  case (byte *)0xbe:
  case (byte *)0xdc:
    goto switchD_0084e244_caseD_6b;
  case (byte *)0x79:
  case (byte *)0xb6:
    goto switchD_0084e244_caseD_79;
  case (byte *)0x83:
  case (byte *)0xc6:
    goto switchD_0084e244_caseD_83;
  case (byte *)0x84:
  case (byte *)0xc9:
    goto switchD_0084e244_caseD_84;
  case (byte *)0x85:
  case (byte *)0xc3:
  case (byte *)0xda:
    goto switchD_0084e244_caseD_85;
  case (byte *)0x86:
  case (byte *)0xbf:
  case (byte *)0xdf:
    goto switchD_0084e244_caseD_86;
  case (byte *)0x87:
  case (byte *)0xc8:
    goto switchD_0084e244_caseD_87;
  case (byte *)0x88:
  case (byte *)0xbc:
    goto switchD_0084e244_caseD_88;
  case (byte *)0x89:
  case (byte *)0xca:
    goto switchD_0084e244_caseD_89;
  case (byte *)0x8d:
  case (byte *)0xd5:
  case (byte *)0xd9:
    register0x00000008 = (BADSPACEBASE *)auStack_80;
  case (byte *)0x92:
    *(undefined1 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    *(byte **)((long)register0x00000008 + 0x70) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x78) = unaff_x19;
switchD_0084e244_caseD_96:
    unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x60);
    pbVar4 = *(byte **)param_2;
switchD_0084e244_caseD_ae:
    if (pbVar4 != (byte *)0x0) {
switchD_0084e244_caseD_85:
      pbVar5 = *(byte **)(param_2 + 8);
      goto switchD_0084e244_caseD_a0;
    }
    pbVar4 = (byte *)((ulong)param_3 & 0xff);
switchD_0084e244_caseD_ab:
    unaff_x20 = param_2;
switchD_0084e244_caseD_86:
    unaff_x19 = param_3;
switchD_0084e244_caseD_ac:
    *(byte **)((long)register0x00000008 + 0x20) = pbVar4;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
switchD_0084e244_caseD_a9:
    param_2 = &DAT_00000018;
switchD_0084e244_caseD_8f:
    param_2 = (byte *)FUN_004b25a4(param_2,8);
switchD_0084e244_caseD_88:
    if (param_2 == (byte *)0x0) {
switchD_0084e244_caseD_79:
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(byte **)unaff_x20 = param_2;
    unaff_x20[8] = 0;
    unaff_x20[9] = 0;
    unaff_x20[10] = 0;
    unaff_x20[0xb] = 0;
    unaff_x20[0xc] = 0;
    unaff_x20[0xd] = 0;
    unaff_x20[0xe] = 0;
    unaff_x20[0xf] = 0;
    param_2[10] = 1;
    param_2[0xb] = 0;
    param_2[0xc] = (byte)unaff_x19;
    goto switchD_0084e244_caseD_3d;
  case (byte *)0x8f:
    goto switchD_0084e244_caseD_8f;
  case (byte *)0x91:
    return param_2;
  case (byte *)0x93:
    return param_2;
  case (byte *)0x94:
    goto switchD_0084e244_caseD_94;
  case (byte *)0x95:
    goto switchD_0084e244_caseD_95;
  case (byte *)0x96:
    goto switchD_0084e244_caseD_96;
  case (byte *)0x97:
    goto switchD_0084e244_caseD_97;
  case (byte *)0x98:
    return param_2;
  case (byte *)0x99:
    goto switchD_0084e244_caseD_99;
  case (byte *)0x9a:
    return param_2;
  case (byte *)0x9b:
    return param_2;
  case (byte *)0x9c:
    goto switchD_0084e244_caseD_9c;
  case (byte *)0x9d:
    return param_2;
  case (byte *)0x9e:
    return param_2;
  case (byte *)0x9f:
    return param_2;
  case (byte *)0xa0:
    goto switchD_0084e244_caseD_a0;
  case (byte *)0xa1:
  case (byte *)0xff:
    goto switchD_0084e244_caseD_a1;
  case (byte *)0xa2:
    goto switchD_0084e244_caseD_a2;
  case (byte *)0xa3:
    goto switchD_0084e244_caseD_a3;
  case (byte *)0xa4:
    goto switchD_0084e244_caseD_a4;
  case (byte *)0xa6:
    goto switchD_0084e244_caseD_a6;
  case (byte *)0xa7:
    return param_2;
  case (byte *)0xa8:
  case (byte *)0xf3:
    return param_2;
  case (byte *)0xa9:
    goto switchD_0084e244_caseD_a9;
  case (byte *)0xaa:
    return param_2;
  case (byte *)0xab:
    goto switchD_0084e244_caseD_ab;
  case (byte *)0xac:
    goto switchD_0084e244_caseD_ac;
  case (byte *)0xad:
    goto switchD_0084e244_caseD_ad;
  case (byte *)0xae:
    goto switchD_0084e244_caseD_ae;
  case (byte *)0xaf:
    goto switchD_0084e244_caseD_af;
  case (byte *)0xb0:
  case (byte *)0xe0:
    return param_2;
  case (byte *)0xb1:
  case (byte *)0xd6:
  case (byte *)0xdb:
    return param_2;
  case (byte *)0xb2:
    return param_2;
  case (byte *)0xcd:
    goto switchD_0084e244_caseD_cd;
  case (byte *)0xcf:
    goto switchD_0084e244_caseD_cf;
  case (byte *)0xd0:
    goto switchD_0084e244_caseD_d0;
  case (byte *)0xe3:
    goto switchD_0084e244_caseD_e3;
  case (byte *)0xe5:
    goto switchD_0084e244_caseD_e5;
  case (byte *)0xe7:
    goto switchD_0084e244_caseD_e7;
  case (byte *)0xe9:
    goto switchD_0084e244_caseD_e9;
  case (byte *)0xeb:
    goto switchD_0084e244_caseD_eb;
  case (byte *)0xed:
    goto switchD_0084e244_caseD_ed;
  case (byte *)0xef:
    goto switchD_0084e244_caseD_ef;
  case (byte *)0xf1:
switchD_0084e244_caseD_f1:
    *(undefined8 *)((long)register0x00000008 + 0x10) = 0;
    *(byte **)((long)register0x00000008 + 0x18) = pbVar6;
  case (byte *)0x2a:
  case (byte *)0xb5:
    pbVar4 = (byte *)((ulong)pbVar4 & 0xff);
switchD_0084e244_caseD_e5:
    param_2 = unaff_x29 + -0x20;
    uVar10 = *(undefined8 *)((long)register0x00000008 + 0x10);
    pbVar9 = *(byte **)((long)register0x00000008 + 8);
switchD_0084e244_caseD_e3:
    *(byte **)((long)register0x00000008 + 0x20) = pbVar4;
    pbVar4 = (byte *)((long)register0x00000008 + 0x28);
switchD_0084e244_caseD_fb:
    param_4 = (undefined1 *)register0x00000008;
switchD_0084e244_caseD_2b:
    *(byte **)(unaff_x29 + -0x10) = pbVar6;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
    *(byte **)(unaff_x29 + -0x20) = pbVar9;
    FUN_00845b7c(pbVar4,param_2,param_3,param_4,pbVar5 + 0x21);
    unaff_x20 = *(byte **)register0x00000008;
switchD_0084e244_caseD_3d:
    param_2 = (byte *)0x0;
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + 1;
switchD_0084e244_caseD_3e:
    return param_2;
  case (byte *)0xf5:
    goto switchD_0084e244_caseD_f5;
  case (byte *)0xf7:
    goto switchD_0084e244_caseD_f7;
  case (byte *)0xf9:
    goto switchD_0084e244_caseD_f9;
  case (byte *)0xfb:
    goto switchD_0084e244_caseD_fb;
  case (byte *)0xfd:
    goto switchD_0084e244_caseD_fd;
  }
  *(byte **)(unaff_x29 + -0x10) = pbVar6;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
  *(byte **)(unaff_x29 + -0x20) = pbVar9;
  FUN_00846138(&stack0x00000028,param_2);
switchD_0084e244_caseD_47:
  goto LAB_0084e4a4;
switchD_0084e244_caseD_ed:
  unaff_x19 = param_3;
  unaff_x20 = param_2;
switchD_0084e244_caseD_f7:
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  param_2 = &DAT_00000028;
switchD_0084e244_caseD_87:
  param_2 = (byte *)FUN_004b25a4(param_2,8);
  if (param_2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  pbVar4 = &DAT_00000001;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(byte **)unaff_x20 = param_2;
  unaff_x20[8] = 0;
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  unaff_x20[0xb] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[0xd] = 0;
  unaff_x20[0xe] = 0;
  unaff_x20[0xf] = 0;
  pbVar3 = unaff_x20;
  goto switchD_0084e244_caseD_33;
switchD_0084e244_caseD_cf:
  goto LAB_0084e668;
switchD_0084e244_caseD_33:
  in_stack_00000000 = pbVar3;
  *(short *)(param_2 + 10) = (short)pbVar4;
  *(short *)(param_2 + 0xc) = (short)unaff_x19;
LAB_0084e4a4:
  param_2 = (byte *)0x0;
  *(long *)(in_stack_00000000 + 0x10) = *(long *)(in_stack_00000000 + 0x10) + 1;
switchD_0084e244_caseD_48:
  return param_2;
switchD_0084e244_caseD_44:
  pbVar4 = *(byte **)(param_3 + 0x40);
  in_stack_00000028 = unaff_x23;
  in_stack_00000030 = unaff_x22;
  in_stack_00000038 = unaff_x21;
  in_stack_00000040 = unaff_x20;
  in_stack_00000048 = unaff_x19;
switchD_0084e244_caseD_5c:
  unaff_x19 = param_2;
switchD_0084e244_caseD_f9:
  if (pbVar4 == (byte *)0x0) {
    param_2 = *(byte **)(param_3 + 8);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    pbVar4 = *(byte **)(param_3 + 0x10);
    pbVar5 = *(byte **)(param_3 + 0x18);
    if (*(long *)param_3 == 1) {
switchD_0084e244_caseD_d0:
      if (param_2 == (byte *)0x0) {
        for (; pbVar5 != (byte *)0x0; pbVar5 = pbVar5 + -1) {
          pbVar4 = *(byte **)(pbVar4 + 0x380);
        }
        pbVar5 = *(byte **)pbVar4;
        param_2 = pbVar4;
      }
      else {
        pbVar5 = *(byte **)param_2;
      }
      while (pbVar4 = pbVar5, pbVar4 != (byte *)0x0) {
switchD_0084e244_caseD_cd:
        free(param_2);
        param_2 = pbVar4;
        pbVar5 = *(byte **)pbVar4;
      }
      free(param_2);
    }
    unaff_x19[0] = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    return param_2;
  }
  pbVar5 = *(byte **)param_3;
switchD_0084e244_caseD_ef:
  *(byte **)(param_3 + 0x40) = pbVar4 + -1;
  in_ZR = pbVar5 == &DAT_00000001;
switchD_0084e244_caseD_84:
  if (!(bool)in_ZR) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68c0);
  }
switchD_0084e244_caseD_e9:
  param_2 = *(byte **)(param_3 + 8);
  if (param_2 == (byte *)0x0) {
    pbVar5 = param_3 + 0x10;
    param_2 = *(byte **)pbVar5;
    for (lVar1 = *(long *)(param_3 + 0x18); lVar1 != 0; lVar1 = lVar1 + -1) {
      param_2 = *(byte **)(param_2 + 0x380);
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5[4] = 0;
    pbVar5[5] = 0;
    pbVar5[6] = 0;
    pbVar5[7] = 0;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0] = 1;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    *(byte **)(param_3 + 8) = param_2;
    pbVar4 = *(byte **)(param_3 + 0x10);
    unaff_x20 = *(byte **)(param_3 + 0x18);
    unaff_x21 = param_2;
    unaff_x22 = pbVar4;
    if ((byte *)(ulong)*(ushort *)(param_2 + 0x37a) <= unaff_x20) goto LAB_0084e624;
switchD_0084e244_caseD_f5:
    pbVar5 = pbVar4;
  }
  else {
    pbVar4 = *(byte **)(param_3 + 0x10);
    unaff_x20 = *(byte **)(param_3 + 0x18);
    pbVar5 = (byte *)(ulong)*(ushort *)(param_2 + 0x37a);
switchD_0084e244_caseD_fd:
    in_CY = pbVar5 <= unaff_x20;
switchD_0084e244_caseD_83:
    unaff_x21 = param_2;
    unaff_x22 = pbVar4;
    if (!(bool)in_CY) goto switchD_0084e244_caseD_f5;
LAB_0084e624:
    do {
      unaff_x21 = *(byte **)param_2;
      if (unaff_x21 == (byte *)0x0) {
        free(param_2);
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68d8);
      }
      uVar2 = *(ushort *)(param_2 + 0x378);
      unaff_x20 = (byte *)(ulong)uVar2;
      pbVar4 = pbVar4 + 1;
      free(param_2);
      param_2 = unaff_x21;
      unaff_x22 = pbVar4;
      pbVar5 = pbVar4;
    } while (*(ushort *)(unaff_x21 + 0x37a) <= uVar2);
  }
  pbVar4 = unaff_x21;
  unaff_x21 = pbVar4;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar4 + (long)unaff_x20 * 8;
switchD_0084e244_caseD_e7:
    pbVar6 = unaff_x22;
    unaff_x22 = pbVar6;
switchD_0084e244_caseD_89:
    pbVar5 = pbVar4 + 0x388;
switchD_0084e244_caseD_16:
    do {
      pbVar4 = *(byte **)pbVar5;
      pbVar6 = pbVar6 + -1;
      pbVar5 = pbVar4 + 0x380;
    } while (pbVar6 != (byte *)0x0);
    pbVar5 = (byte *)0x0;
    goto switchD_0084e244_caseD_cf;
  }
  pbVar5 = unaff_x20 + 1;
LAB_0084e668:
  *(byte **)unaff_x19 = unaff_x21;
  *(byte **)(unaff_x19 + 8) = unaff_x22;
  *(byte **)(unaff_x19 + 0x10) = unaff_x20;
  *(byte **)(param_3 + 8) = pbVar4;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  *(byte **)(param_3 + 0x18) = pbVar5;
  return param_2;
}


// ===== 0084e2bc  switchD_0084e244::caseD_8d =====

undefined8 switchD_0084e244::caseD_8d(long *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *local_80;
  long local_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  long local_40 [4];
  
  local_78 = *param_1;
  local_80 = param_1;
  if (local_78 != 0) {
    lVar5 = param_1[1];
    do {
      uStack_68 = (ulong)*(ushort *)(local_78 + 10);
      lVar3 = 0xc;
      do {
        lVar6 = lVar3;
        if (lVar6 - uStack_68 == 0xc) goto switchD_0084e244_caseD_6b;
        uVar2 = (uint)param_2 & 0xff;
        cVar1 = *(byte *)(local_78 + lVar6) < uVar2;
        if (uVar2 < *(byte *)(local_78 + lVar6)) {
          cVar1 = -1;
        }
        lVar3 = lVar6 + 1;
      } while (cVar1 == '\x01');
      if (cVar1 == '\0') {
        return 1;
      }
      uStack_68 = lVar6 - 0xc;
switchD_0084e244_caseD_6b:
      if (lVar5 == 0) goto LAB_0084e39c;
      lVar5 = lVar5 + -1;
      local_78 = *(long *)(local_78 + uStack_68 * 8 + 0x18);
    } while( true );
  }
  local_60 = param_2 & 0xff;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  *puVar4 = 0;
  *param_1 = (long)puVar4;
  param_1[1] = 0;
  *(undefined2 *)((long)puVar4 + 10) = 1;
  *(char *)((long)puVar4 + 0xc) = (char)param_2;
switchD_0084e244_caseD_3d:
  local_80[2] = local_80[2] + 1;
  return 0;
LAB_0084e39c:
  uStack_70 = 0;
  local_60 = param_2 & 0xff;
  local_40[1] = 0;
  local_40[0] = local_78;
  local_40[2] = uStack_68;
  FUN_00845b7c(auStack_58,local_40,param_2,&local_80,(long)&local_60 + 1);
  goto switchD_0084e244_caseD_3d;
}


// ===== 0084e3e8  FUN_0084e3e8 =====

undefined8 FUN_0084e3e8(long *param_1,ulong param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *local_80;
  long local_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  long local_40 [4];
  
  local_78 = *param_1;
  local_80 = param_1;
  if (local_78 != 0) {
    lVar5 = param_1[1];
    do {
      uStack_68 = (ulong)*(ushort *)(local_78 + 10);
      lVar7 = uStack_68 << 1;
      lVar3 = 6;
      do {
        lVar6 = lVar3;
        if (lVar7 == 0) goto switchD_0084e110_caseD_3a;
        uVar2 = (uint)param_2 & 0xffff;
        lVar7 = lVar7 + -2;
        uVar8 = (uint)*(ushort *)(local_78 + lVar6 * 2);
        cVar1 = uVar8 < uVar2;
        if (uVar2 < uVar8) {
          cVar1 = -1;
        }
        lVar3 = lVar6 + 1;
      } while (cVar1 == '\x01');
      if (cVar1 == '\0') {
        return 1;
      }
      uStack_68 = lVar6 - 6;
switchD_0084e110_caseD_3a:
      if (lVar5 == 0) goto LAB_0084e4c4;
      lVar5 = lVar5 + -1;
      local_78 = *(long *)(local_78 + uStack_68 * 8 + 0x28);
    } while( true );
  }
  local_60 = param_2 & 0xffff;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x28,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x28);
  }
  *puVar4 = 0;
  *param_1 = (long)puVar4;
  param_1[1] = 0;
  *(undefined2 *)((long)puVar4 + 10) = 1;
  *(short *)((long)puVar4 + 0xc) = (short)param_2;
LAB_0084e4a4:
  local_80[2] = local_80[2] + 1;
  return 0;
LAB_0084e4c4:
  uStack_70 = 0;
  local_60 = param_2 & 0xffff;
  local_40[1] = 0;
  local_40[0] = local_78;
  local_40[2] = uStack_68;
  FUN_00846138(auStack_58,local_40,param_2,&local_80,(long)&local_60 + 2);
  goto LAB_0084e4a4;
}


// ===== 0084e510  FUN_0084e510 =====

void FUN_0084e510(long *param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2[8] == 0) {
    lVar3 = *param_2;
    puVar7 = (undefined8 *)param_2[1];
    *param_2 = 0;
    puVar2 = (undefined8 *)param_2[2];
    lVar5 = param_2[3];
    if (lVar3 == 1) {
      if (puVar7 == (undefined8 *)0x0) {
        for (; lVar5 != 0; lVar5 = lVar5 + -1) {
          puVar2 = (undefined8 *)puVar2[0x70];
        }
        puVar7 = (undefined8 *)*puVar2;
      }
      else {
        puVar2 = puVar7;
        puVar7 = (undefined8 *)*puVar7;
      }
      for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        free(puVar2);
        puVar2 = puVar7;
      }
      free(puVar2);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68c0);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[2];
    for (lVar3 = param_2[3]; lVar3 != 0; lVar3 = lVar3 + -1) {
      puVar2 = (undefined8 *)puVar2[0x70];
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 1;
    param_2[1] = (long)puVar2;
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    puVar7 = puVar2;
    if (uVar6 < *(ushort *)((long)puVar2 + 0x37a)) goto joined_r0x0084e568;
  }
  else {
    lVar3 = param_2[2];
    uVar6 = param_2[3];
    puVar7 = puVar2;
    if (uVar6 < *(ushort *)((long)puVar2 + 0x37a)) goto joined_r0x0084e568;
  }
  do {
    puVar7 = (undefined8 *)*puVar2;
    if (puVar7 == (undefined8 *)0x0) {
      free(puVar2);
                    /* try { // try from 0084e704 to 0084e70f has its CatchHandler @ 0084e720 */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68d8);
    }
    uVar1 = *(ushort *)(puVar2 + 0x6f);
    uVar6 = (ulong)uVar1;
    lVar3 = lVar3 + 1;
    free(puVar2);
    puVar2 = puVar7;
  } while (*(ushort *)((long)puVar7 + 0x37a) <= uVar1);
joined_r0x0084e568:
  if (lVar3 == 0) {
    lVar5 = uVar6 + 1;
    puVar2 = puVar7;
  }
  else {
    puVar4 = puVar7 + uVar6 + 0x71;
    lVar5 = lVar3;
    do {
      puVar2 = (undefined8 *)*puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = puVar2 + 0x70;
    } while (lVar5 != 0);
    lVar5 = 0;
  }
  *param_1 = (long)puVar7;
  param_1[1] = lVar3;
  param_1[2] = uVar6;
  param_2[1] = (long)puVar2;
  param_2[2] = 0;
  param_2[3] = lVar5;
  return;
}


// ===== 0084e724  rustls::webpki::verify::verify_server_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::webpki::verify::verify_server_name */

void __rustcall rustls::webpki::verify::verify_server_name(undefined8 *param_1)

{
  long local_58 [7];
  
  <webpki::end_entity::webpki::end_entity::EndEntityCert>::verify_is_valid_for_subject_name
            (local_58);
  if (local_58[0] != -1) {
    FUN_00842dbc(param_1,local_58);
    return;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0084e77c  rustls::webpki::verify::verify_tls12_signature =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::webpki::verify::verify_tls12_signature */

void __rustcall
rustls::webpki::verify::verify_tls12_signature
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  short *psVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short *psVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x24;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_318;
  void *local_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long local_2f0;
  long lStack_2e8;
  long local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  long local_200;
  long lStack_1f8;
  long local_1e0;
  void *pvStack_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_e8 [7];
  void *local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined8 *puVar12;
  
  uVar9 = *(ulong *)(param_6 + 0x18);
  if (uVar9 != 0) {
    sVar5 = *(short *)(param_5 + 0x18);
    psVar6 = *(short **)(param_6 + 0x10);
    lVar8 = uVar9 * 0x18;
    psVar7 = psVar6;
    if (sVar5 == 0xd) {
      do {
        if ((*psVar7 == 0xd) && (psVar7[1] == *(short *)(param_5 + 0x1a))) goto LAB_0084e890;
        lVar8 = lVar8 + -0x18;
        psVar7 = psVar7 + 0xc;
      } while (lVar8 != 0);
    }
    else {
      for (uVar2 = uVar9 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        if (*psVar7 == sVar5) goto LAB_0084e890;
        psVar7 = psVar7 + 0xc;
      }
      if (2 < (uVar9 - 1 & 0x1fffffffffffffff)) {
        psVar7 = psVar7 + 0x18;
        while( true ) {
          if (psVar7[-0x18] == sVar5) {
            psVar7 = psVar7 + -0x18;
            goto LAB_0084e890;
          }
          if (psVar7[-0xc] == sVar5) break;
          if (*psVar7 == sVar5) goto LAB_0084e890;
          if (psVar7[0xc] == sVar5) {
            psVar7 = psVar7 + 0xc;
            goto LAB_0084e890;
          }
          psVar1 = psVar7 + 0x18;
          puVar10 = (undefined8 *)0x0;
          psVar7 = psVar7 + 0x30;
          if (psVar1 == psVar6 + uVar9 * 0xc) goto LAB_0084e894;
        }
        psVar7 = psVar7 + -0xc;
LAB_0084e890:
        puVar10 = *(undefined8 **)(psVar7 + 4);
        unaff_x24 = *(long *)(psVar7 + 8);
        goto LAB_0084e894;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_0084e894:
  if (puVar10 == (undefined8 *)0x0) {
    *param_1 = -0x7fffffffffffffe6;
    param_1[1] = 0x3e;
  }
  else {
    <webpki::end_entity::EndEntityCert_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>
    ::try_from(&local_1e0,param_4);
    lVar8 = local_1e0;
    if (local_1e0 == -2) {
      FUN_00842dbc(&local_b0,&pvStack_1d8);
      param_1[1] = lStack_a8;
      *param_1 = (long)local_b0;
      param_1[3] = lStack_98;
      param_1[2] = local_a0;
      param_1[5] = lStack_88;
      param_1[4] = local_90;
      param_1[6] = local_80;
    }
    else {
      lStack_a8 = lStack_1d0;
      local_b0 = pvStack_1d8;
      lStack_98 = lStack_1c0;
      local_a0 = local_1c8;
      lStack_88 = lStack_1b0;
      local_90 = local_1b8;
      local_80 = local_1a8;
      uStack_250 = uStack_118;
      local_258 = local_120;
      uStack_240 = uStack_108;
      local_248 = uStack_110;
      uStack_230 = uStack_f8;
      local_238 = local_100;
      local_228 = local_f0;
      uStack_290 = uStack_158;
      local_298 = local_160;
      uStack_280 = uStack_148;
      local_288 = uStack_150;
      local_2e0 = local_1a8;
      uStack_260 = uStack_128;
      local_268 = uStack_130;
      uStack_270 = uStack_138;
      local_278 = local_140;
      local_318 = local_1e0;
      uStack_2c0 = uStack_188;
      local_2c8 = uStack_190;
      uStack_2d0 = uStack_198;
      local_2d8 = local_1a0;
      uStack_2b0 = uStack_178;
      local_2b8 = local_180;
      uStack_2a0 = uStack_168;
      local_2a8 = uStack_170;
      lStack_1f8 = lStack_1b0;
      local_200 = local_1b8;
      lStack_308 = lStack_1d0;
      local_310 = pvStack_1d8;
      lStack_2f8 = lStack_1c0;
      lStack_300 = local_1c8;
      lStack_2e8 = lStack_1b0;
      local_2f0 = local_1b8;
      if (unaff_x24 != 0) {
        uVar3 = *(undefined8 *)(param_5 + 8);
        uVar4 = *(undefined8 *)(param_5 + 0x10);
        puVar11 = puVar10;
        do {
          puVar12 = puVar11 + 2;
                    /* try { // try from 0084e9a0 to 0084e9bb has its CatchHandler @ 0084ea98 */
          <webpki::end_entity::webpki::end_entity::EndEntityCert>::verify_signature
                    (local_e8,&local_318,*puVar11,puVar11[1],param_2,param_3,uVar3,uVar4);
          if (local_e8[0] == -1) {
            *param_1 = -1;
            goto joined_r0x0084ea14;
          }
          if (local_e8[0] != -0x7fffffffffffffd5) {
            FUN_00842dbc(&local_1e0,local_e8);
            param_1[5] = local_1b8;
            param_1[4] = lStack_1c0;
            param_1[1] = (long)pvStack_1d8;
            *param_1 = local_1e0;
            param_1[3] = local_1c8;
            param_1[2] = lStack_1d0;
            param_1[6] = lStack_1b0;
            goto joined_r0x0084ea14;
          }
          puVar11 = puVar12;
        } while (puVar12 != puVar10 + unaff_x24 * 2);
      }
      local_1e0 = -0x7fffffffffffffd5;
                    /* try { // try from 0084e9dc to 0084ea27 has its CatchHandler @ 0084ea94 */
      FUN_00842dbc(&local_b0,&local_1e0);
      param_1[1] = lStack_a8;
      *param_1 = (long)local_b0;
      param_1[3] = lStack_98;
      param_1[2] = local_a0;
      param_1[5] = lStack_88;
      param_1[4] = local_90;
      param_1[6] = local_80;
joined_r0x0084ea14:
      if ((lVar8 != -1) && (lVar8 != 0)) {
        free(local_310);
      }
    }
  }
  return;
}


// ===== 0084eabc  rustls::webpki::verify::verify_tls13_signature =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::webpki::verify::verify_tls13_signature */

void __rustcall
rustls::webpki::verify::verify_tls13_signature
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  ushort *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  ushort *puVar8;
  ulong uVar9;
  long local_308;
  void *local_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long local_2e0;
  long lStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  long local_1f0;
  long lStack_1e8;
  void *local_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long local_190;
  void *pvStack_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98 [7];
  
  uVar7 = *(ushort *)(param_5 + 0x18);
  if (uVar7 < 0xc && (1 << (ulong)(uVar7 & 0x1f) & 0xfa8U) != 0) {
    uVar9 = *(ulong *)(param_6 + 0x18);
    if (uVar9 != 0) {
      puVar8 = *(ushort **)(param_6 + 0x10);
      for (uVar2 = uVar9 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        if (*puVar8 == uVar7) goto LAB_0084ed34;
        puVar8 = puVar8 + 0xc;
      }
      if (2 < (uVar9 - 1 & 0x1fffffffffffffff)) {
        puVar8 = puVar8 + 0x18;
        while( true ) {
          if (puVar8[-0x18] == uVar7) {
            puVar4 = *(undefined8 **)(puVar8 + -0x14);
            lVar6 = *(long *)(puVar8 + -0x10);
            goto joined_r0x0084ed38;
          }
          if (puVar8[-0xc] == uVar7) break;
          if (*puVar8 == uVar7) goto LAB_0084ed34;
          if (puVar8[0xc] == uVar7) {
            puVar4 = *(undefined8 **)(puVar8 + 0x10);
            lVar6 = *(long *)(puVar8 + 0x14);
            goto joined_r0x0084ed38;
          }
          puVar1 = puVar8 + 0x18;
          puVar8 = puVar8 + 0x30;
          if (puVar1 == *(ushort **)(param_6 + 0x10) + uVar9 * 0xc) goto LAB_0084ed3c;
        }
        puVar8 = puVar8 + -0xc;
LAB_0084ed34:
        puVar4 = *(undefined8 **)(puVar8 + 4);
        lVar6 = *(long *)(puVar8 + 8);
joined_r0x0084ed38:
        if (puVar4 != (undefined8 *)0x0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (0,0,&PTR_s__root__cargo_registry_src_index__00ae6958);
          }
          uVar3 = *puVar4;
          uVar5 = puVar4[1];
          <webpki::end_entity::EndEntityCert_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>
          ::try_from(&local_190,param_4);
          lVar6 = local_190;
          if (local_190 == -2) {
            FUN_00842dbc(&local_1d0,&pvStack_188);
            param_1[1] = lStack_1c8;
            *param_1 = (long)local_1d0;
            param_1[3] = lStack_1b8;
            param_1[2] = local_1c0;
            param_1[5] = lStack_1a8;
            param_1[4] = local_1b0;
            param_1[6] = local_1a0;
            return;
          }
          local_308 = local_190;
          lStack_1c8 = lStack_180;
          local_1d0 = pvStack_188;
          lStack_1b8 = lStack_170;
          local_1c0 = local_178;
          lStack_1a8 = lStack_160;
          local_1b0 = local_168;
          local_1a0 = local_158;
          uStack_240 = uStack_c8;
          local_248 = local_d0;
          uStack_230 = uStack_b8;
          local_238 = uStack_c0;
          uStack_220 = uStack_a8;
          local_228 = local_b0;
          local_218 = local_a0;
          uStack_280 = uStack_108;
          local_288 = local_110;
          uStack_270 = uStack_f8;
          local_278 = uStack_100;
          local_2d0 = local_158;
          uStack_250 = uStack_d8;
          local_258 = uStack_e0;
          uStack_260 = uStack_e8;
          local_268 = local_f0;
          uStack_2b0 = uStack_138;
          local_2b8 = uStack_140;
          uStack_2c0 = uStack_148;
          local_2c8 = local_150;
          uStack_2a0 = uStack_128;
          local_2a8 = local_130;
          uStack_290 = uStack_118;
          local_298 = uStack_120;
          lStack_1e8 = lStack_160;
          local_1f0 = local_168;
          lStack_2f8 = lStack_180;
          local_300 = pvStack_188;
          lStack_2e8 = lStack_170;
          lStack_2f0 = local_178;
          lStack_2d8 = lStack_160;
          local_2e0 = local_168;
                    /* try { // try from 0084ec3c to 0084ec6f has its CatchHandler @ 0084ed90 */
          <webpki::end_entity::webpki::end_entity::EndEntityCert>::verify_signature
                    (local_98,&local_308,uVar3,uVar5,param_2,param_3,*(undefined8 *)(param_5 + 8),
                     *(undefined8 *)(param_5 + 0x10));
          if (local_98[0] == -1) {
            *param_1 = -1;
          }
          else {
            FUN_00842dbc(&local_190,local_98);
            param_1[5] = local_168;
            param_1[4] = lStack_170;
            param_1[1] = (long)pvStack_188;
            *param_1 = local_190;
            param_1[3] = local_178;
            param_1[2] = lStack_180;
            param_1[6] = lStack_160;
          }
          if (lVar6 == -1) {
            return;
          }
          if (lVar6 == 0) {
            return;
          }
          free(local_300);
          return;
        }
      }
    }
LAB_0084ed3c:
    *param_1 = -0x7fffffffffffffe6;
    param_1[1] = 0x3e;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x3e;
    *param_1 = -0x7fffffffffffffe6;
  }
  return;
}


// ===== 0084edb4  rustls::webpki::verify::verify_tls13_signature_with_raw_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::webpki::verify::verify_tls13_signature_with_raw_key */

void __rustcall
rustls::webpki::verify::verify_tls13_signature_with_raw_key
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          long param_6)

{
  ushort *puVar1;
  ulong uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  ushort *local_e0;
  undefined8 uStack_d8;
  long local_b0 [7];
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  uVar3 = *(ushort *)(param_5 + 0x18);
  if (uVar3 < 0xc && (1 << (ulong)(uVar3 & 0x1f) & 0xfa8U) != 0) {
    <webpki::rpk_entity::RawPublicKeyEntity_as_core::convert::TryFrom<&rustls_pki_types::SubjectPublicKeyInfoDer>>
    ::try_from(&local_e8,param_4);
    if (local_e8 != -1) {
      FUN_00842dbc(&local_78,&local_e8);
      param_1[4] = lStack_58;
      param_1[3] = local_60;
      param_1[6] = lStack_48;
      param_1[5] = local_50;
      param_1[1] = lStack_70;
      *param_1 = local_78;
      param_1[2] = local_68;
      return;
    }
    puVar4 = *(undefined8 **)(param_6 + 0x18);
    local_f8 = local_e0;
    uStack_f0 = uStack_d8;
    if (puVar4 != (undefined8 *)0x0) {
      local_e0 = *(ushort **)(param_6 + 0x10);
      for (uVar2 = (ulong)puVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        if (*local_e0 == uVar3) goto LAB_0084ef90;
        local_e0 = local_e0 + 0xc;
      }
      if (((long)puVar4 - 1U & 0x1fffffffffffffff) < 3) {
LAB_0084eea8:
        puVar4 = (undefined8 *)0x0;
      }
      else {
        local_e0 = local_e0 + 0x18;
        while( true ) {
          if (local_e0[-0x18] == uVar3) {
            local_e0 = local_e0 + -0x18;
            goto LAB_0084ef90;
          }
          if (local_e0[-0xc] == uVar3) break;
          if (*local_e0 == uVar3) goto LAB_0084ef90;
          if (local_e0[0xc] == uVar3) {
            local_e0 = local_e0 + 0xc;
            goto LAB_0084ef90;
          }
          puVar1 = local_e0 + 0x18;
          local_e0 = local_e0 + 0x30;
          if (puVar1 == *(ushort **)(param_6 + 0x10) + (long)puVar4 * 0xc) goto LAB_0084eea8;
        }
        local_e0 = local_e0 + -0xc;
LAB_0084ef90:
        puVar4 = *(undefined8 **)(local_e0 + 4);
        local_e0 = *(ushort **)(local_e0 + 8);
      }
    }
    if (puVar4 == (undefined8 *)0x0) {
      *param_1 = -0x7fffffffffffffe6;
      param_1[1] = 0x3e;
      return;
    }
    if (local_e0 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s__root__cargo_registry_src_index__00ae6970);
    }
    <webpki::rpk_entity::webpki::rpk_entity::RawPublicKeyEntity>::verify_signature
              (local_b0,&local_f8,*puVar4,puVar4[1],param_2,param_3,*(undefined8 *)(param_5 + 8),
               *(undefined8 *)(param_5 + 0x10));
    if (local_b0[0] != -1) {
      FUN_00842dbc(param_1,local_b0);
      return;
    }
  }
  else {
    local_b0[0] = -0x7fffffffffffffe6;
    *(undefined1 *)(param_1 + 1) = 0x3e;
  }
  *param_1 = local_b0[0];
  return;
}


// ===== 0084efd4  rustls::webpki::verify::verify_server_cert_signed_by_trust_anchor =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::webpki::verify::verify_server_cert_signed_by_trust_anchor */

void __rustcall
rustls::webpki::verify::verify_server_cert_signed_by_trust_anchor
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_648 [18];
  undefined1 local_636;
  long local_630;
  undefined1 auStack_628 [1504];
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  local_636 = 2;
  local_48 = 1;
  puStack_40 = &DAT_002a18a0;
  local_38 = 8;
  <webpki::end_entity::webpki::end_entity::EndEntityCert>::verify_for_usage
            (&local_630,param_2,param_7,param_8,*(undefined8 *)(param_3 + 8),
             *(undefined8 *)(param_3 + 0x10),param_4,param_5,param_6,&local_48,auStack_648,0);
  if (local_630 == -4) {
    FUN_00842dbc(param_1,auStack_628);
    return;
  }
  *param_1 = 0xffffffffffffffff;
  FUN_0084a83c(&local_630);
  return;
}


// ===== 0084f09c  FUN_0084f09c =====

void FUN_0084f09c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long local_630;
  undefined1 auStack_628 [1504];
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  local_48 = 1;
  puStack_40 = &DAT_002a18a0;
  local_38 = 8;
  <webpki::end_entity::webpki::end_entity::EndEntityCert>::verify_for_usage
            (&local_630,param_2,param_8,param_9,*(undefined8 *)(param_3 + 8),
             *(undefined8 *)(param_3 + 0x10),param_4,param_5,param_7,&local_48,param_6,0);
  if (local_630 == -4) {
    FUN_00842dbc(param_1,auStack_628);
    return;
  }
  *param_1 = 0xffffffffffffffff;
  FUN_0084a83c(&local_630);
  return;
}


// ===== 0084f15c  <rustls::time_provider::DefaultTimeProvider_as_rustls::time_provider::TimeProvider>::current_time =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::time_provider::DefaultTimeProvider as rustls::time_provider::TimeProvider>::current_time
    */

undefined1  [16] __rustcall
<rustls::time_provider::DefaultTimeProvider_as_rustls::time_provider::TimeProvider>::current_time
          (void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = <rustls_pki_types::[Q]::rustls_pki_types::UnixTime>::now();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 1;
  return auVar2;
}


// ===== 0084f178  <rustls::versions::SupportedProtocolVersion_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::versions::SupportedProtocolVersion as core::fmt::Debug>::fmt */

void __rustcall <rustls::versions::SupportedProtocolVersion_as_core::fmt::Debug>::fmt(void)

{
  (*(code *)PTR_fmt_00b04488)();
  return;
}


// ===== 0084f17c  FUN_0084f17c =====

void FUN_0084f17c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  ulong local_70;
  undefined8 local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long local_48 [2];
  long local_38;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[1];
    local_50 = param_1[2];
    local_88 = 0;
    local_68 = 0;
    lStack_80 = lVar3;
    lStack_60 = lVar3;
    local_58 = local_78;
  }
  local_90 = (ulong)(lVar3 != 0);
  local_70 = local_90;
  FUN_0084e510(local_48,&local_90);
  lVar3 = local_48[0];
  lVar1 = local_38;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    local_48[0] = lVar3;
    local_38 = lVar1;
    if (*(long *)(lVar2 + 8) != 0) {
      free(*(void **)(lVar2 + 0x10));
    }
    lVar3 = lVar3 + lVar1 * 0x38;
    if (*(long *)(lVar3 + 0x120) != 0) {
      free(*(void **)(lVar3 + 0x128));
    }
    FUN_0084e510(local_48,&local_90);
    lVar3 = local_48[0];
    lVar1 = local_38;
  }
  return;
}


// ===== 0084f244  FUN_0084f244 =====

void FUN_0084f244(undefined8 *param_1)

{
  ushort uVar1;
  long *__ptr;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar4 = param_1[2];
  __ptr = plVar2;
  if (lVar4 == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      __ptr = (long *)__ptr[3];
    }
  }
  else {
    __ptr = (long *)0x0;
LAB_0084f290:
    do {
      if (__ptr == (long *)0x0) {
        for (; __ptr = plVar2, uVar5 != 0; uVar5 = uVar5 - 1) {
          plVar2 = (long *)__ptr[3];
        }
        plVar2 = (long *)0x0;
        uVar5 = 0;
        if (*(short *)((long)__ptr + 10) == 0) goto LAB_0084f2d0;
      }
      else if (*(ushort *)((long)__ptr + 10) <= uVar5) {
LAB_0084f2d0:
        do {
          plVar3 = (long *)*__ptr;
          if (plVar3 == (long *)0x0) {
            free(__ptr);
                    /* try { // try from 0084f3e0 to 0084f3eb has its CatchHandler @ 0084f3f0 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68d8);
          }
          uVar1 = *(ushort *)(__ptr + 1);
          uVar5 = (ulong)uVar1;
          plVar2 = (long *)((long)plVar2 + 1);
          free(__ptr);
          __ptr = plVar3;
        } while (*(ushort *)((long)plVar3 + 10) <= uVar1);
      }
      if (plVar2 == (long *)0x0) {
        uVar5 = uVar5 + 1;
        plVar2 = (long *)0x0;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) break;
        goto LAB_0084f290;
      }
      plVar3 = __ptr + uVar5 + 4;
      do {
        __ptr = (long *)*plVar3;
        plVar2 = (long *)((long)plVar2 + -1);
        plVar3 = __ptr + 3;
      } while (plVar2 != (long *)0x0);
      uVar5 = 0;
      plVar2 = (long *)0x0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar2 = (long *)*__ptr;
  while (plVar3 = plVar2, plVar3 != (long *)0x0) {
    free(__ptr);
    __ptr = plVar3;
    plVar2 = (long *)*plVar3;
  }
  free(__ptr);
  return;
}


// ===== 0084f3f4  FUN_0084f3f4 =====

void FUN_0084f3f4(undefined8 *param_1)

{
  ushort uVar1;
  long *__ptr;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar4 = param_1[2];
  __ptr = plVar2;
  if (lVar4 == 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      __ptr = (long *)__ptr[5];
    }
  }
  else {
    __ptr = (long *)0x0;
LAB_0084f440:
    do {
      if (__ptr == (long *)0x0) {
        for (; __ptr = plVar2, uVar5 != 0; uVar5 = uVar5 - 1) {
          plVar2 = (long *)__ptr[5];
        }
        plVar2 = (long *)0x0;
        uVar5 = 0;
        if (*(short *)((long)__ptr + 10) == 0) goto LAB_0084f480;
      }
      else if (*(ushort *)((long)__ptr + 10) <= uVar5) {
LAB_0084f480:
        do {
          plVar3 = (long *)*__ptr;
          if (plVar3 == (long *)0x0) {
            free(__ptr);
                    /* try { // try from 0084f590 to 0084f59b has its CatchHandler @ 0084f5a0 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00ae68d8);
          }
          uVar1 = *(ushort *)(__ptr + 1);
          uVar5 = (ulong)uVar1;
          plVar2 = (long *)((long)plVar2 + 1);
          free(__ptr);
          __ptr = plVar3;
        } while (*(ushort *)((long)plVar3 + 10) <= uVar1);
      }
      if (plVar2 == (long *)0x0) {
        uVar5 = uVar5 + 1;
        plVar2 = (long *)0x0;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) break;
        goto LAB_0084f440;
      }
      plVar3 = __ptr + uVar5 + 6;
      do {
        __ptr = (long *)*plVar3;
        plVar2 = (long *)((long)plVar2 + -1);
        plVar3 = __ptr + 5;
      } while (plVar2 != (long *)0x0);
      uVar5 = 0;
      plVar2 = (long *)0x0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  plVar2 = (long *)*__ptr;
  while (plVar3 = plVar2, plVar3 != (long *)0x0) {
    free(__ptr);
    __ptr = plVar3;
    plVar2 = (long *)*plVar3;
  }
  free(__ptr);
  return;
}


// ===== 0084f5a4  <rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::AlertDescription as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[2];
  if (param_2[1] == uVar1) {
    *param_1 = 0xc;
    *(char **)(param_1 + 8) = "AlertDescription";
    *(undefined8 *)(param_1 + 0x10) = 0x10;
    return;
  }
  param_2[2] = uVar1 + 1;
  if (uVar1 < (ulong)param_2[1]) {
    uVar3 = 0x23;
    uVar2 = *(undefined1 *)(*param_2 + uVar1);
    switch(uVar2) {
    case 0:
      param_1[2] = uVar2;
      param_1[1] = 0;
      *param_1 = 0xff;
      return;
    case 10:
      param_1[2] = uVar2;
      param_1[1] = 1;
      *param_1 = 0xff;
      return;
    case 0x14:
      param_1[2] = uVar2;
      param_1[1] = 2;
      *param_1 = 0xff;
      return;
    case 0x15:
      param_1[2] = uVar2;
      param_1[1] = 3;
      *param_1 = 0xff;
      return;
    case 0x16:
      param_1[2] = uVar2;
      param_1[1] = 4;
      *param_1 = 0xff;
      return;
    case 0x1e:
      param_1[2] = uVar2;
      param_1[1] = 5;
      *param_1 = 0xff;
      return;
    case 0x28:
      param_1[2] = uVar2;
      param_1[1] = 6;
      *param_1 = 0xff;
      return;
    case 0x29:
      param_1[2] = uVar2;
      param_1[1] = 7;
      *param_1 = 0xff;
      return;
    case 0x2a:
      param_1[2] = uVar2;
      param_1[1] = 8;
      *param_1 = 0xff;
      return;
    case 0x2b:
      param_1[2] = uVar2;
      param_1[1] = 9;
      *param_1 = 0xff;
      return;
    case 0x2c:
      param_1[2] = uVar2;
      param_1[1] = 10;
      *param_1 = 0xff;
      return;
    case 0x2d:
      param_1[2] = uVar2;
      param_1[1] = 0xb;
      *param_1 = 0xff;
      return;
    case 0x2e:
      param_1[2] = uVar2;
      param_1[1] = 0xc;
      *param_1 = 0xff;
      return;
    case 0x2f:
      param_1[2] = uVar2;
      param_1[1] = 0xd;
      *param_1 = 0xff;
      return;
    case 0x30:
      param_1[2] = uVar2;
      param_1[1] = 0xe;
      *param_1 = 0xff;
      return;
    case 0x31:
      param_1[2] = uVar2;
      param_1[1] = 0xf;
      *param_1 = 0xff;
      return;
    case 0x32:
      param_1[2] = uVar2;
      param_1[1] = 0x10;
      *param_1 = 0xff;
      return;
    case 0x33:
      param_1[2] = uVar2;
      param_1[1] = 0x11;
      *param_1 = 0xff;
      return;
    case 0x3c:
      param_1[2] = uVar2;
      param_1[1] = 0x12;
      *param_1 = 0xff;
      return;
    case 0x46:
      param_1[2] = uVar2;
      param_1[1] = 0x13;
      *param_1 = 0xff;
      return;
    case 0x47:
      param_1[2] = uVar2;
      param_1[1] = 0x14;
      *param_1 = 0xff;
      return;
    case 0x50:
      param_1[2] = uVar2;
      param_1[1] = 0x15;
      *param_1 = 0xff;
      return;
    case 0x56:
      param_1[2] = uVar2;
      param_1[1] = 0x16;
      *param_1 = 0xff;
      return;
    case 0x5a:
      param_1[2] = uVar2;
      param_1[1] = 0x17;
      *param_1 = 0xff;
      return;
    case 100:
      param_1[2] = uVar2;
      param_1[1] = 0x18;
      *param_1 = 0xff;
      return;
    case 0x6d:
      param_1[2] = uVar2;
      param_1[1] = 0x19;
      *param_1 = 0xff;
      return;
    case 0x6e:
      param_1[2] = uVar2;
      param_1[1] = 0x1a;
      *param_1 = 0xff;
      return;
    case 0x6f:
      param_1[2] = uVar2;
      param_1[1] = 0x1b;
      *param_1 = 0xff;
      return;
    case 0x70:
      param_1[2] = uVar2;
      param_1[1] = 0x1c;
      *param_1 = 0xff;
      return;
    case 0x71:
      param_1[2] = uVar2;
      param_1[1] = 0x1d;
      *param_1 = 0xff;
      return;
    case 0x72:
      param_1[2] = uVar2;
      param_1[1] = 0x1e;
      *param_1 = 0xff;
      return;
    case 0x73:
      param_1[2] = uVar2;
      param_1[1] = 0x1f;
      *param_1 = 0xff;
      return;
    case 0x74:
      uVar3 = 0x20;
      break;
    case 0x78:
      param_1[2] = uVar2;
      param_1[1] = 0x21;
      *param_1 = 0xff;
      return;
    case 0x79:
      param_1[2] = uVar2;
      param_1[1] = 0x22;
      *param_1 = 0xff;
      return;
    }
    param_1[2] = uVar2;
    param_1[1] = uVar3;
    *param_1 = 0xff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 0084f964  <rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::AlertDescription as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::encode(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0084f994 + (ulong)(&BYTE_002fa09e)[*param_1] * 4))();
  return;
}


// ===== 0084fae0  <rustls::enums::SignatureAlgorithm_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureAlgorithm as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::SignatureAlgorithm_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[2];
  if (param_2[1] == uVar1) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fd653;
    *(undefined8 *)(param_1 + 0x10) = 0x12;
    return;
  }
  param_2[2] = uVar1 + 1;
  if (uVar1 < (ulong)param_2[1]) {
    bVar2 = *(byte *)(*param_2 + uVar1);
    if ((ulong)bVar2 < 9) {
      uVar3 = (&DAT_002fe9b8)[bVar2];
      param_1[2] = bVar2;
      param_1[1] = uVar3;
      *param_1 = 0xff;
      return;
    }
    param_1[2] = bVar2;
    param_1[1] = 6;
    *param_1 = 0xff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 0084fb78  <rustls::enums::SignatureAlgorithm_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureAlgorithm as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::SignatureAlgorithm_as_rustls::msgs::codec::Codec>::encode
          (byte *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *param_1;
  if (3 < bVar1) {
    if (bVar1 == 4) {
      bVar1 = 7;
    }
    else if (bVar1 == 5) {
      bVar1 = 8;
    }
    else {
      bVar1 = param_1[1];
    }
  }
  lVar2 = param_2[2];
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  *(byte *)(param_2[1] + lVar2) = bVar1;
  param_2[2] = lVar2 + 1;
  return;
}


// ===== 0084fbf8  <rustls::enums::SignatureAlgorithm_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureAlgorithm as core::fmt::Debug>::fmt */

void __rustcall
<rustls::enums::SignatureAlgorithm_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte local_24 [4];
  byte *local_20;
  code *pcStack_18;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd665,9);
      return;
    }
    if (bVar1 == 1) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd66e,3);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd671,3);
    return;
  }
  if (4 < bVar1) {
    if (bVar1 == 5) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd680,5);
      return;
    }
    local_24[0] = param_1[1];
    local_20 = local_24;
    pcStack_18 = FUN_0085280c;
    core::fmt::write(*param_2,param_2[1],&DAT_002fd685,&local_20);
    return;
  }
  if (bVar1 == 3) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd674,5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd679,7);
  return;
}


// ===== 0084fcfc  <rustls::webpki::verify::ParsedCertificate_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>::try_from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::webpki::verify::ParsedCertificate as
   core::convert::TryFrom<&rustls_pki_types::CertificateDer>>::try_from */

void __rustcall
<rustls::webpki::verify::ParsedCertificate_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>
::try_from(long *param_1)

{
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  <webpki::end_entity::EndEntityCert_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>::
  try_from(&local_128);
  if (local_128 == -2) {
    FUN_00842dbc(&local_160,&local_120);
  }
  else {
    lStack_158 = lStack_118;
    local_160 = local_120;
    lStack_148 = lStack_108;
    lStack_150 = local_110;
    lStack_138 = lStack_f8;
    local_140 = local_100;
    local_130 = local_f0;
    param_1[0x1d] = lStack_40;
    param_1[0x1c] = local_48;
    param_1[0x19] = lStack_60;
    param_1[0x18] = local_68;
    param_1[0x1b] = lStack_50;
    param_1[0x1a] = lStack_58;
    param_1[0x1e] = local_38;
    param_1[0x15] = lStack_80;
    param_1[0x14] = local_88;
    param_1[0x17] = lStack_70;
    param_1[0x16] = lStack_78;
    param_1[0x11] = lStack_a0;
    param_1[0x10] = local_a8;
    param_1[0x13] = lStack_90;
    param_1[0x12] = lStack_98;
    param_1[9] = lStack_e0;
    param_1[8] = local_e8;
    param_1[0xb] = lStack_d0;
    param_1[10] = local_d8;
    param_1[0xd] = lStack_c0;
    param_1[0xc] = local_c8;
    param_1[0xf] = lStack_b0;
    param_1[0xe] = lStack_b8;
  }
  param_1[6] = lStack_138;
  param_1[5] = local_140;
  param_1[2] = lStack_158;
  param_1[1] = local_160;
  param_1[4] = lStack_148;
  param_1[3] = lStack_150;
  param_1[7] = local_130;
  *param_1 = local_128;
  return;
}


// ===== 0084fdc8  <rustls::enums::CertificateCompressionAlgorithm_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CertificateCompressionAlgorithm as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::CertificateCompressionAlgorithm_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fd6a3;
    *(undefined8 *)(param_1 + 0x10) = 0x1f;
    return;
  }
  param_2[2] = uVar1 + 2;
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 + 2 <= (ulong)param_2[1])) {
    uVar2 = (uint)(*(ushort *)(*param_2 + uVar1) >> 8) |
            (*(ushort *)(*param_2 + uVar1) & 0xff00ff) << 8;
    *(short *)(param_1 + 4) = (short)uVar2;
    uVar3 = 3;
    if (uVar2 < 4) {
      uVar3 = (undefined2)(0x2000100000003 >> (((ulong)uVar2 & 3) << 4));
    }
    *(undefined2 *)(param_1 + 2) = uVar3;
    *param_1 = 0xff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 0084fe68  <rustls::enums::CertificateCompressionAlgorithm_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CertificateCompressionAlgorithm as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::CertificateCompressionAlgorithm_as_rustls::msgs::codec::Codec>::encode
          (ushort *param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      uVar2 = 0x100;
    }
    else {
      uVar2 = 0x200;
    }
  }
  else if (uVar2 == 2) {
    uVar2 = 0x300;
  }
  else {
    uVar2 = param_1[1] >> 8 | (ushort)((param_1[1] & 0xff00ff) << 8);
  }
  lVar1 = param_2[2];
  if ((ulong)(*param_2 - lVar1) < 2) {
    FUN_00874c84(param_2,lVar1,2,1,1);
    lVar1 = param_2[2];
  }
  *(ushort *)(param_2[1] + lVar1) = uVar2;
  param_2[2] = lVar1 + 2;
  return;
}


// ===== 0084ff04  FUN_0084ff04 =====

void FUN_0084ff04(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002fd941,0x12,&DAT_002a1920,8,local_18 + 0x18,&PTR_FUN_00ae6988,
             &DAT_002fd953,9,&local_18,&DAT_00ae69a8);
  return;
}


// ===== 0084ff74  FUN_0084ff74 =====

void FUN_0084ff74(undefined8 *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_002fea98 + *(int *)(&DAT_002fea98 + (ulong)*(byte *)*param_1 * 4),
             *(undefined8 *)(&DAT_002fe9c8 + (ulong)*(byte *)*param_1 * 8));
  return;
}


// ===== 0084ffa0  FUN_0084ffa0 =====

void FUN_0084ffa0(undefined8 *param_1)

{
  <untrusted::input::Input_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0084ffa8  FUN_0084ffa8 =====

void FUN_0084ffa8(undefined8 *param_1)

{
  <rustls::enums::ContentType_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0084ffb0  FUN_0084ffb0 =====

void FUN_0084ffb0(undefined8 *param_1)

{
  <rustls::enums::HandshakeType_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0084ffb8  FUN_0084ffb8 =====

void FUN_0084ffb8(undefined8 *param_1)

{
  <rustls::enums::AlertDescription_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 0084ffc0  FUN_0084ffc0 =====

undefined8 FUN_0084ffc0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_48 [20];
  undefined4 local_34;
  undefined4 *puVar7;
  
  lVar4 = *param_1;
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002fda71,0x32);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_48,param_2);
  lVar3 = *(long *)(lVar4 + 0x18);
  if (lVar3 != 0) {
    puVar5 = *(undefined4 **)(lVar4 + 0x10);
    puVar6 = puVar5;
    do {
      puVar7 = puVar6 + 6;
      local_34 = *puVar6;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_48,&local_34,&DAT_00ae6550);
      puVar6 = puVar7;
    } while (puVar7 != puVar5 + lVar3 * 6);
  }
  uVar1 = <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_48);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002fdaa3,2);
  return uVar2;
}


// ===== 008500ac  <rustls::enums::CertificateCompressionAlgorithm_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CertificateCompressionAlgorithm as core::fmt::Debug>::fmt */

void __rustcall
<rustls::enums::CertificateCompressionAlgorithm_as_core::fmt::Debug>::fmt
          (ushort *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort local_24 [2];
  ushort *local_20;
  code *pcStack_18;
  
  uVar1 = *param_1;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd210,4);
      return;
    }
    local_24[0] = param_1[1];
    local_20 = local_24;
    pcStack_18 = FUN_00852824;
    core::fmt::write(*param_2,param_2[1],&DAT_002fd6c8,&local_20);
    return;
  }
  if (uVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd180,4);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fd6c2,6);
  return;
}


// ===== 00850150  <rustls::enums::EchClientHelloType_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::EchClientHelloType as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::EchClientHelloType_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  char cVar3;
  undefined1 uVar4;
  
  uVar2 = param_2[2];
  if (param_2[1] == uVar2) {
    *(undefined **)(param_1 + 8) = &DAT_002fd6f3;
    *(undefined8 *)(param_1 + 0x10) = 0x12;
    *param_1 = 0xc;
    return;
  }
  param_2[2] = uVar2 + 1;
  if (uVar2 < (ulong)param_2[1]) {
    cVar3 = *(char *)(*param_2 + uVar2);
    param_1[2] = cVar3;
    uVar4 = 1;
    if (cVar3 != '\x01') {
      uVar4 = 2;
    }
    uVar1 = 0;
    if (cVar3 != '\0') {
      uVar1 = uVar4;
    }
    *param_1 = 0xff;
    param_1[1] = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 008501d0  <rustls::enums::EchClientHelloType_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::EchClientHelloType as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::EchClientHelloType_as_rustls::msgs::codec::Codec>::encode
          (char *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = param_2[2];
  cVar1 = *param_1;
  cVar2 = param_1[1];
  if (lVar3 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  if (cVar1 != '\x02') {
    cVar2 = cVar1;
  }
  *(char *)(param_2[1] + lVar3) = cVar2;
  param_2[2] = lVar3 + 1;
  return;
}


// ===== 0085022c  <rustls::enums::EchClientHelloType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::EchClientHelloType as core::fmt::Debug>::fmt */

void __rustcall
<rustls::enums::EchClientHelloType_as_core::fmt::Debug>::fmt(char *param_1,undefined8 *param_2)

{
  char local_24 [4];
  char *local_20;
  code *pcStack_18;
  
  if (*param_1 == '\0') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0140,0x10);
    return;
  }
  if (*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0029f360,0x10);
    return;
  }
  local_24[0] = param_1[1];
  local_20 = local_24;
  pcStack_18 = FUN_0085280c;
  core::fmt::write(*param_2,param_2[1],&DAT_002fd705,&local_20);
  return;
}


// ===== 008502b0  FUN_008502b0 =====

void FUN_008502b0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [16];
  ulong local_68 [3];
  long local_50;
  ulong local_48;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  long local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_map(auStack_78,param_2);
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = param_1[1];
    local_28 = param_1[2];
    local_68[1] = 0;
    local_40 = 0;
    local_68[2] = lVar1;
    lStack_38 = lVar1;
    local_30 = local_50;
  }
  local_68[0] = (ulong)(lVar1 != 0);
  local_48 = local_68[0];
  FUN_00845a20(auStack_78,local_68);
  <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::finish(auStack_78);
  return;
}


// ===== 00850328  <rustls::enums::AlertDescription_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::AlertDescription as core::fmt::Debug>::fmt */

void __rustcall <rustls::enums::AlertDescription_as_core::fmt::Debug>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00850340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00850344 + (ulong)(&BYTE_002fa0c2)[*param_1] * 4))();
  return;
}


// ===== 008506d0  <rustls::enums::AlertDescription_as_core::convert::From<rustls::error::CertificateError>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::AlertDescription as core::convert::From<rustls::error::CertificateError>>::from
    */

undefined1 __rustcall
<rustls::enums::AlertDescription_as_core::convert::From<rustls::error::CertificateError>>::from
          (ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar1 = 0xd;
  }
  FUN_0084ab44();
  return (&UNK_002feb00)[uVar1];
}


// ===== 0085070c  <rustls::enums::ProtocolVersion_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ProtocolVersion as core::fmt::Debug>::fmt */

void __rustcall <rustls::enums::ProtocolVersion_as_core::fmt::Debug>::fmt(ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00850724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00850728 + (ulong)(&BYTE_002fa0e6)[*param_1] * 4))();
  return;
}


// ===== 00850844  <rustls::enums::CipherSuite_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CipherSuite as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::CipherSuite_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined2 extraout_w1;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 2) {
    *(undefined **)(param_1 + 8) = &DAT_002fd99d;
    *(undefined8 *)(param_1 + 0x10) = 0xb;
    *param_1 = 0xc;
    return;
  }
  param_2[2] = uVar1 + 2;
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 + 2 <= (ulong)param_2[1])) {
    uVar2 = <rustls::enums::CipherSuite_as_core::convert::From<u16>>::from
                      ((uint)(*(ushort *)(*param_2 + uVar1) >> 8) |
                       (*(ushort *)(*param_2 + uVar1) & 0xff00ff) << 8);
    *(undefined2 *)(param_1 + 2) = uVar2;
    *(undefined2 *)(param_1 + 4) = extraout_w1;
    *param_1 = 0xff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 008508dc  <rustls::enums::CipherSuite_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CipherSuite as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::CipherSuite_as_rustls::msgs::codec::Codec>::encode
          (undefined2 *param_1,long *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = param_2[2];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((ulong)(*param_2 - lVar4) < 2) {
    FUN_00874c84(param_2,lVar4,2,1,1);
    lVar4 = param_2[2];
  }
  uVar3 = <u16_as_core::convert::From<rustls::enums::CipherSuite>>::from(uVar1,uVar2);
  *(ushort *)(param_2[1] + lVar4) = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  param_2[2] = lVar4 + 2;
  return;
}


// ===== 0085096c  <rustls::enums::CipherSuite_as_core::convert::From<u16>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CipherSuite as core::convert::From<u16>>::from */

undefined1  [16] __rustcall
<rustls::enums::CipherSuite_as_core::convert::From<u16>>::from(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  
  uVar1 = param_1 & 0xffff;
  auVar3._8_8_ = CONCAT44(0,param_1);
  uVar2 = 0x178;
  if (uVar1 < 0x1302) {
    switch(uVar1) {
    case 0:
      return ZEXT416(param_1) << 0x40;
    case 1:
      auVar15._8_8_ = auVar3._8_8_;
      auVar15._0_8_ = 0x17;
      return auVar15;
    case 2:
      auVar14._8_8_ = auVar3._8_8_;
      auVar14._0_8_ = 0x18;
      return auVar14;
    case 3:
      auVar198._8_8_ = auVar3._8_8_;
      auVar198._0_8_ = 0x19;
      return auVar198;
    case 4:
      auVar193._8_8_ = auVar3._8_8_;
      auVar193._0_8_ = 0x1a;
      return auVar193;
    case 5:
      auVar32._8_8_ = auVar3._8_8_;
      auVar32._0_8_ = 0x1b;
      return auVar32;
    case 6:
      auVar166._8_8_ = auVar3._8_8_;
      auVar166._0_8_ = 0x1c;
      return auVar166;
    case 7:
      auVar191._8_8_ = auVar3._8_8_;
      auVar191._0_8_ = 0x1d;
      return auVar191;
    case 8:
      auVar13._8_8_ = auVar3._8_8_;
      auVar13._0_8_ = 0x1e;
      return auVar13;
    case 9:
      auVar108._8_8_ = auVar3._8_8_;
      auVar108._0_8_ = 0x1f;
      return auVar108;
    case 10:
      auVar197._8_8_ = auVar3._8_8_;
      auVar197._0_8_ = 0x20;
      return auVar197;
    case 0xb:
      auVar39._8_8_ = auVar3._8_8_;
      auVar39._0_8_ = 0x21;
      return auVar39;
    case 0xc:
      auVar190._8_8_ = auVar3._8_8_;
      auVar190._0_8_ = 0x22;
      return auVar190;
    case 0xd:
      auVar16._8_8_ = auVar3._8_8_;
      auVar16._0_8_ = 0x23;
      return auVar16;
    case 0xe:
      auVar195._8_8_ = auVar3._8_8_;
      auVar195._0_8_ = 0x24;
      return auVar195;
    case 0xf:
      auVar121._8_8_ = auVar3._8_8_;
      auVar121._0_8_ = 0x25;
      return auVar121;
    case 0x10:
      auVar40._8_8_ = auVar3._8_8_;
      auVar40._0_8_ = 0x26;
      return auVar40;
    case 0x11:
      auVar30._8_8_ = auVar3._8_8_;
      auVar30._0_8_ = 0x27;
      return auVar30;
    case 0x12:
      auVar125._8_8_ = auVar3._8_8_;
      auVar125._0_8_ = 0x28;
      return auVar125;
    case 0x13:
      auVar162._8_8_ = auVar3._8_8_;
      auVar162._0_8_ = 0x29;
      return auVar162;
    case 0x14:
      auVar148._8_8_ = auVar3._8_8_;
      auVar148._0_8_ = 0x2a;
      return auVar148;
    case 0x15:
      auVar165._8_8_ = auVar3._8_8_;
      auVar165._0_8_ = 0x2b;
      return auVar165;
    case 0x16:
      auVar150._8_8_ = auVar3._8_8_;
      auVar150._0_8_ = 0x2c;
      return auVar150;
    case 0x17:
      auVar130._8_8_ = auVar3._8_8_;
      auVar130._0_8_ = 0x2d;
      return auVar130;
    case 0x18:
      auVar196._8_8_ = auVar3._8_8_;
      auVar196._0_8_ = 0x2e;
      return auVar196;
    case 0x19:
      auVar192._8_8_ = auVar3._8_8_;
      auVar192._0_8_ = 0x2f;
      return auVar192;
    case 0x1a:
      auVar180._8_8_ = auVar3._8_8_;
      auVar180._0_8_ = 0x30;
      return auVar180;
    case 0x1b:
      auVar101._8_8_ = auVar3._8_8_;
      auVar101._0_8_ = 0x31;
      return auVar101;
    case 0x1c:
      auVar47._8_8_ = auVar3._8_8_;
      auVar47._0_8_ = 0x32;
      return auVar47;
    case 0x1d:
      auVar28._8_8_ = auVar3._8_8_;
      auVar28._0_8_ = 0x33;
      return auVar28;
    case 0x1e:
      auVar94._8_8_ = auVar3._8_8_;
      auVar94._0_8_ = 0x34;
      return auVar94;
    case 0x1f:
      auVar194._8_8_ = auVar3._8_8_;
      auVar194._0_8_ = 0x35;
      return auVar194;
    case 0x20:
      auVar21._8_8_ = auVar3._8_8_;
      auVar21._0_8_ = 0x36;
      return auVar21;
    case 0x21:
      auVar189._8_8_ = auVar3._8_8_;
      auVar189._0_8_ = 0x37;
      return auVar189;
    case 0x22:
      auVar186._8_8_ = auVar3._8_8_;
      auVar186._0_8_ = 0x38;
      return auVar186;
    case 0x23:
      auVar22._8_8_ = auVar3._8_8_;
      auVar22._0_8_ = 0x39;
      return auVar22;
    case 0x24:
      auVar79._8_8_ = auVar3._8_8_;
      auVar79._0_8_ = 0x3a;
      return auVar79;
    case 0x25:
      auVar26._8_8_ = auVar3._8_8_;
      auVar26._0_8_ = 0x3b;
      return auVar26;
    case 0x26:
      auVar75._8_8_ = auVar3._8_8_;
      auVar75._0_8_ = 0x3c;
      return auVar75;
    case 0x27:
      auVar182._8_8_ = auVar3._8_8_;
      auVar182._0_8_ = 0x3d;
      return auVar182;
    case 0x28:
      auVar181._8_8_ = auVar3._8_8_;
      auVar181._0_8_ = 0x3e;
      return auVar181;
    case 0x29:
      auVar144._8_8_ = auVar3._8_8_;
      auVar144._0_8_ = 0x3f;
      return auVar144;
    case 0x2a:
      auVar187._8_8_ = auVar3._8_8_;
      auVar187._0_8_ = 0x40;
      return auVar187;
    case 0x2b:
      auVar116._8_8_ = auVar3._8_8_;
      auVar116._0_8_ = 0x41;
      return auVar116;
    case 0x2c:
      auVar177._8_8_ = auVar3._8_8_;
      auVar177._0_8_ = 0x42;
      return auVar177;
    case 0x2d:
      auVar23._8_8_ = auVar3._8_8_;
      auVar23._0_8_ = 0x43;
      return auVar23;
    case 0x2e:
      auVar141._8_8_ = auVar3._8_8_;
      auVar141._0_8_ = 0x44;
      return auVar141;
    case 0x2f:
      auVar29._8_8_ = auVar3._8_8_;
      auVar29._0_8_ = 0x45;
      return auVar29;
    case 0x30:
      auVar188._8_8_ = auVar3._8_8_;
      auVar188._0_8_ = 0x46;
      return auVar188;
    case 0x31:
      auVar168._8_8_ = auVar3._8_8_;
      auVar168._0_8_ = 0x47;
      return auVar168;
    case 0x32:
      auVar78._8_8_ = auVar3._8_8_;
      auVar78._0_8_ = 0x48;
      return auVar78;
    case 0x33:
      auVar17._8_8_ = auVar3._8_8_;
      auVar17._0_8_ = 0x49;
      return auVar17;
    case 0x34:
      auVar70._8_8_ = auVar3._8_8_;
      auVar70._0_8_ = 0x4a;
      return auVar70;
    case 0x35:
      auVar170._8_8_ = auVar3._8_8_;
      auVar170._0_8_ = 0x4b;
      return auVar170;
    case 0x36:
      auVar34._8_8_ = auVar3._8_8_;
      auVar34._0_8_ = 0x4c;
      return auVar34;
    case 0x37:
      auVar45._8_8_ = auVar3._8_8_;
      auVar45._0_8_ = 0x4d;
      return auVar45;
    case 0x38:
      auVar142._8_8_ = auVar3._8_8_;
      auVar142._0_8_ = 0x4e;
      return auVar142;
    case 0x39:
      auVar18._8_8_ = auVar3._8_8_;
      auVar18._0_8_ = 0x4f;
      return auVar18;
    case 0x3a:
      auVar183._8_8_ = auVar3._8_8_;
      auVar183._0_8_ = 0x50;
      return auVar183;
    case 0x3b:
      auVar178._8_8_ = auVar3._8_8_;
      auVar178._0_8_ = 0x51;
      return auVar178;
    case 0x3c:
      auVar185._8_8_ = auVar3._8_8_;
      auVar185._0_8_ = 0x52;
      return auVar185;
    case 0x3d:
      auVar169._8_8_ = auVar3._8_8_;
      auVar169._0_8_ = 0x53;
      return auVar169;
    case 0x3e:
      auVar76._8_8_ = auVar3._8_8_;
      auVar76._0_8_ = 0x54;
      return auVar76;
    case 0x3f:
      auVar163._8_8_ = auVar3._8_8_;
      auVar163._0_8_ = 0x55;
      return auVar163;
    case 0x40:
      auVar19._8_8_ = auVar3._8_8_;
      auVar19._0_8_ = 0x56;
      return auVar19;
    case 0x41:
      auVar106._8_8_ = auVar3._8_8_;
      auVar106._0_8_ = 0x57;
      return auVar106;
    case 0x42:
      auVar33._8_8_ = auVar3._8_8_;
      auVar33._0_8_ = 0x58;
      return auVar33;
    case 0x43:
      auVar184._8_8_ = auVar3._8_8_;
      auVar184._0_8_ = 0x59;
      return auVar184;
    case 0x44:
      auVar151._8_8_ = auVar3._8_8_;
      auVar151._0_8_ = 0x5a;
      return auVar151;
    case 0x45:
      auVar42._8_8_ = auVar3._8_8_;
      auVar42._0_8_ = 0x5b;
      return auVar42;
    case 0x46:
      auVar174._8_8_ = auVar3._8_8_;
      auVar174._0_8_ = 0x5c;
      return auVar174;
    case 0x47:
      auVar160._8_8_ = auVar3._8_8_;
      auVar160._0_8_ = 0x5d;
      return auVar160;
    case 0x48:
      auVar124._8_8_ = auVar3._8_8_;
      auVar124._0_8_ = 0x5e;
      return auVar124;
    case 0x49:
      auVar67._8_8_ = auVar3._8_8_;
      auVar67._0_8_ = 0x5f;
      return auVar67;
    case 0x4a:
      auVar20._8_8_ = auVar3._8_8_;
      auVar20._0_8_ = 0x60;
      return auVar20;
    case 0x4b:
      auVar145._8_8_ = auVar3._8_8_;
      auVar145._0_8_ = 0x61;
      return auVar145;
    case 0x4c:
      auVar62._8_8_ = auVar3._8_8_;
      auVar62._0_8_ = 0x62;
      return auVar62;
    case 0x4d:
      auVar43._8_8_ = auVar3._8_8_;
      auVar43._0_8_ = 99;
      return auVar43;
    case 0x4e:
      auVar51._8_8_ = auVar3._8_8_;
      auVar51._0_8_ = 100;
      return auVar51;
    case 0x4f:
      auVar173._8_8_ = auVar3._8_8_;
      auVar173._0_8_ = 0x65;
      return auVar173;
    case 0x50:
      auVar56._8_8_ = auVar3._8_8_;
      auVar56._0_8_ = 0x66;
      return auVar56;
    case 0x51:
      auVar175._8_8_ = auVar3._8_8_;
      auVar175._0_8_ = 0x67;
      return auVar175;
    case 0x52:
      auVar37._8_8_ = auVar3._8_8_;
      auVar37._0_8_ = 0x68;
      return auVar37;
    case 0x53:
      auVar167._8_8_ = auVar3._8_8_;
      auVar167._0_8_ = 0x69;
      return auVar167;
    case 0x54:
      auVar49._8_8_ = auVar3._8_8_;
      auVar49._0_8_ = 0x6a;
      return auVar49;
    case 0x55:
      auVar72._8_8_ = auVar3._8_8_;
      auVar72._0_8_ = 0x6b;
      return auVar72;
    case 0x56:
      auVar63._8_8_ = auVar3._8_8_;
      auVar63._0_8_ = 0x6c;
      return auVar63;
    case 0x57:
      auVar179._8_8_ = auVar3._8_8_;
      auVar179._0_8_ = 0x6d;
      return auVar179;
    case 0x58:
      auVar176._8_8_ = auVar3._8_8_;
      auVar176._0_8_ = 0x6e;
      return auVar176;
    case 0x59:
      auVar31._8_8_ = auVar3._8_8_;
      auVar31._0_8_ = 0x6f;
      return auVar31;
    case 0x5a:
      auVar155._8_8_ = auVar3._8_8_;
      auVar155._0_8_ = 0x70;
      return auVar155;
    case 0x5b:
      auVar146._8_8_ = auVar3._8_8_;
      auVar146._0_8_ = 0x71;
      return auVar146;
    case 0x5c:
      auVar159._8_8_ = auVar3._8_8_;
      auVar159._0_8_ = 0x72;
      return auVar159;
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x75:
    case 0x76:
    case 0x7a:
    case 0x7b:
    case 0x7f:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
    case 0xfe:
      break;
    case 0x60:
      auVar41._8_8_ = auVar3._8_8_;
      auVar41._0_8_ = 0x73;
      return auVar41;
    case 0x61:
      auVar102._8_8_ = auVar3._8_8_;
      auVar102._0_8_ = 0x74;
      return auVar102;
    case 0x62:
      auVar27._8_8_ = auVar3._8_8_;
      auVar27._0_8_ = 0x75;
      return auVar27;
    case 99:
      auVar171._8_8_ = auVar3._8_8_;
      auVar171._0_8_ = 0x76;
      return auVar171;
    case 100:
      auVar172._8_8_ = auVar3._8_8_;
      auVar172._0_8_ = 0x77;
      return auVar172;
    case 0x65:
      auVar46._8_8_ = auVar3._8_8_;
      auVar46._0_8_ = 0x78;
      return auVar46;
    case 0x66:
      auVar156._8_8_ = auVar3._8_8_;
      auVar156._0_8_ = 0x79;
      return auVar156;
    case 0x67:
      auVar129._8_8_ = auVar3._8_8_;
      auVar129._0_8_ = 0x7a;
      return auVar129;
    case 0x68:
      auVar127._8_8_ = auVar3._8_8_;
      auVar127._0_8_ = 0x7b;
      return auVar127;
    case 0x69:
      auVar24._8_8_ = auVar3._8_8_;
      auVar24._0_8_ = 0x7c;
      return auVar24;
    case 0x6a:
      auVar25._8_8_ = auVar3._8_8_;
      auVar25._0_8_ = 0x7d;
      return auVar25;
    case 0x6b:
      auVar81._8_8_ = auVar3._8_8_;
      auVar81._0_8_ = 0x7e;
      return auVar81;
    case 0x6c:
      auVar83._8_8_ = auVar3._8_8_;
      auVar83._0_8_ = 0x7f;
      return auVar83;
    case 0x6d:
      auVar52._8_8_ = auVar3._8_8_;
      auVar52._0_8_ = 0x80;
      return auVar52;
    case 0x72:
      auVar35._8_8_ = auVar3._8_8_;
      auVar35._0_8_ = 0x81;
      return auVar35;
    case 0x73:
      auVar161._8_8_ = auVar3._8_8_;
      auVar161._0_8_ = 0x82;
      return auVar161;
    case 0x74:
      auVar38._8_8_ = auVar3._8_8_;
      auVar38._0_8_ = 0x83;
      return auVar38;
    case 0x77:
      auVar107._8_8_ = auVar3._8_8_;
      auVar107._0_8_ = 0x84;
      return auVar107;
    case 0x78:
      auVar59._8_8_ = auVar3._8_8_;
      auVar59._0_8_ = 0x85;
      return auVar59;
    case 0x79:
      auVar157._8_8_ = auVar3._8_8_;
      auVar157._0_8_ = 0x86;
      return auVar157;
    case 0x7c:
      auVar154._8_8_ = auVar3._8_8_;
      auVar154._0_8_ = 0x87;
      return auVar154;
    case 0x7d:
      auVar147._8_8_ = auVar3._8_8_;
      auVar147._0_8_ = 0x88;
      return auVar147;
    case 0x7e:
      auVar53._8_8_ = auVar3._8_8_;
      auVar53._0_8_ = 0x89;
      return auVar53;
    case 0x80:
      auVar36._8_8_ = auVar3._8_8_;
      auVar36._0_8_ = 0x8a;
      return auVar36;
    case 0x81:
      auVar64._8_8_ = auVar3._8_8_;
      auVar64._0_8_ = 0x8b;
      return auVar64;
    case 0x82:
      auVar164._8_8_ = auVar3._8_8_;
      auVar164._0_8_ = 0x8c;
      return auVar164;
    case 0x83:
      auVar69._8_8_ = auVar3._8_8_;
      auVar69._0_8_ = 0x8d;
      return auVar69;
    case 0x84:
      auVar50._8_8_ = auVar3._8_8_;
      auVar50._0_8_ = 0x8e;
      return auVar50;
    case 0x85:
      auVar112._8_8_ = auVar3._8_8_;
      auVar112._0_8_ = 0x8f;
      return auVar112;
    case 0x86:
      auVar88._8_8_ = auVar3._8_8_;
      auVar88._0_8_ = 0x90;
      return auVar88;
    case 0x87:
      auVar96._8_8_ = auVar3._8_8_;
      auVar96._0_8_ = 0x91;
      return auVar96;
    case 0x88:
      auVar113._8_8_ = auVar3._8_8_;
      auVar113._0_8_ = 0x92;
      return auVar113;
    case 0x89:
      auVar110._8_8_ = auVar3._8_8_;
      auVar110._0_8_ = 0x93;
      return auVar110;
    case 0x8a:
      auVar87._8_8_ = auVar3._8_8_;
      auVar87._0_8_ = 0x94;
      return auVar87;
    case 0x8b:
      auVar135._8_8_ = auVar3._8_8_;
      auVar135._0_8_ = 0x95;
      return auVar135;
    case 0x8c:
      auVar80._8_8_ = auVar3._8_8_;
      auVar80._0_8_ = 0x96;
      return auVar80;
    case 0x8d:
      auVar133._8_8_ = auVar3._8_8_;
      auVar133._0_8_ = 0x97;
      return auVar133;
    case 0x8e:
      auVar58._8_8_ = auVar3._8_8_;
      auVar58._0_8_ = 0x98;
      return auVar58;
    case 0x8f:
      auVar149._8_8_ = auVar3._8_8_;
      auVar149._0_8_ = 0x99;
      return auVar149;
    case 0x90:
      auVar143._8_8_ = auVar3._8_8_;
      auVar143._0_8_ = 0x9a;
      return auVar143;
    case 0x91:
      auVar55._8_8_ = auVar3._8_8_;
      auVar55._0_8_ = 0x9b;
      return auVar55;
    case 0x92:
      auVar152._8_8_ = auVar3._8_8_;
      auVar152._0_8_ = 0x9c;
      return auVar152;
    case 0x93:
      auVar158._8_8_ = auVar3._8_8_;
      auVar158._0_8_ = 0x9d;
      return auVar158;
    case 0x94:
      auVar44._8_8_ = auVar3._8_8_;
      auVar44._0_8_ = 0x9e;
      return auVar44;
    case 0x95:
      auVar84._8_8_ = auVar3._8_8_;
      auVar84._0_8_ = 0x9f;
      return auVar84;
    case 0x96:
      auVar77._8_8_ = auVar3._8_8_;
      auVar77._0_8_ = 0xa0;
      return auVar77;
    case 0x97:
      auVar57._8_8_ = auVar3._8_8_;
      auVar57._0_8_ = 0xa1;
      return auVar57;
    case 0x98:
      auVar153._8_8_ = auVar3._8_8_;
      auVar153._0_8_ = 0xa2;
      return auVar153;
    case 0x99:
      auVar126._8_8_ = auVar3._8_8_;
      auVar126._0_8_ = 0xa3;
      return auVar126;
    case 0x9a:
      auVar71._8_8_ = auVar3._8_8_;
      auVar71._0_8_ = 0xa4;
      return auVar71;
    case 0x9b:
      auVar48._8_8_ = auVar3._8_8_;
      auVar48._0_8_ = 0xa5;
      return auVar48;
    case 0x9c:
      auVar134._8_8_ = auVar3._8_8_;
      auVar134._0_8_ = 0xa6;
      return auVar134;
    case 0x9d:
      auVar105._8_8_ = auVar3._8_8_;
      auVar105._0_8_ = 0xa7;
      return auVar105;
    case 0x9e:
      auVar86._8_8_ = auVar3._8_8_;
      auVar86._0_8_ = 0xa8;
      return auVar86;
    case 0x9f:
      auVar131._8_8_ = auVar3._8_8_;
      auVar131._0_8_ = 0xa9;
      return auVar131;
    case 0xa0:
      auVar139._8_8_ = auVar3._8_8_;
      auVar139._0_8_ = 0xaa;
      return auVar139;
    case 0xa1:
      auVar54._8_8_ = auVar3._8_8_;
      auVar54._0_8_ = 0xab;
      return auVar54;
    case 0xa2:
      auVar61._8_8_ = auVar3._8_8_;
      auVar61._0_8_ = 0xac;
      return auVar61;
    case 0xa3:
      auVar60._8_8_ = auVar3._8_8_;
      auVar60._0_8_ = 0xad;
      return auVar60;
    case 0xa4:
      auVar66._8_8_ = auVar3._8_8_;
      auVar66._0_8_ = 0xae;
      return auVar66;
    case 0xa5:
      auVar74._8_8_ = auVar3._8_8_;
      auVar74._0_8_ = 0xaf;
      return auVar74;
    case 0xa6:
      auVar123._8_8_ = auVar3._8_8_;
      auVar123._0_8_ = 0xb0;
      return auVar123;
    case 0xa7:
      auVar103._8_8_ = auVar3._8_8_;
      auVar103._0_8_ = 0xb1;
      return auVar103;
    case 0xa8:
      auVar122._8_8_ = auVar3._8_8_;
      auVar122._0_8_ = 1;
      return auVar122;
    case 0xa9:
      auVar138._8_8_ = auVar3._8_8_;
      auVar138._0_8_ = 2;
      return auVar138;
    case 0xaa:
      auVar137._8_8_ = auVar3._8_8_;
      auVar137._0_8_ = 0xb2;
      return auVar137;
    case 0xab:
      auVar65._8_8_ = auVar3._8_8_;
      auVar65._0_8_ = 0xb3;
      return auVar65;
    case 0xac:
      auVar140._8_8_ = auVar3._8_8_;
      auVar140._0_8_ = 0xb4;
      return auVar140;
    case 0xad:
      auVar91._8_8_ = auVar3._8_8_;
      auVar91._0_8_ = 0xb5;
      return auVar91;
    case 0xae:
      auVar92._8_8_ = auVar3._8_8_;
      auVar92._0_8_ = 0xb6;
      return auVar92;
    case 0xaf:
      auVar136._8_8_ = auVar3._8_8_;
      auVar136._0_8_ = 0xb7;
      return auVar136;
    case 0xb0:
      auVar128._8_8_ = auVar3._8_8_;
      auVar128._0_8_ = 0xb8;
      return auVar128;
    case 0xb1:
      auVar114._8_8_ = auVar3._8_8_;
      auVar114._0_8_ = 0xb9;
      return auVar114;
    case 0xb2:
      auVar109._8_8_ = auVar3._8_8_;
      auVar109._0_8_ = 0xba;
      return auVar109;
    case 0xb3:
      auVar132._8_8_ = auVar3._8_8_;
      auVar132._0_8_ = 0xbb;
      return auVar132;
    case 0xb4:
      auVar118._8_8_ = auVar3._8_8_;
      auVar118._0_8_ = 0xbc;
      return auVar118;
    case 0xb5:
      auVar104._8_8_ = auVar3._8_8_;
      auVar104._0_8_ = 0xbd;
      return auVar104;
    case 0xb6:
      auVar68._8_8_ = auVar3._8_8_;
      auVar68._0_8_ = 0xbe;
      return auVar68;
    case 0xb7:
      auVar95._8_8_ = auVar3._8_8_;
      auVar95._0_8_ = 0xbf;
      return auVar95;
    case 0xb8:
      auVar73._8_8_ = auVar3._8_8_;
      auVar73._0_8_ = 0xc0;
      return auVar73;
    case 0xb9:
      auVar115._8_8_ = auVar3._8_8_;
      auVar115._0_8_ = 0xc1;
      return auVar115;
    case 0xba:
      auVar89._8_8_ = auVar3._8_8_;
      auVar89._0_8_ = 0xc2;
      return auVar89;
    case 0xbb:
      auVar82._8_8_ = auVar3._8_8_;
      auVar82._0_8_ = 0xc3;
      return auVar82;
    case 0xbc:
      auVar119._8_8_ = auVar3._8_8_;
      auVar119._0_8_ = 0xc4;
      return auVar119;
    case 0xbd:
      auVar90._8_8_ = auVar3._8_8_;
      auVar90._0_8_ = 0xc5;
      return auVar90;
    case 0xbe:
      auVar120._8_8_ = auVar3._8_8_;
      auVar120._0_8_ = 0xc6;
      return auVar120;
    case 0xbf:
      auVar98._8_8_ = auVar3._8_8_;
      auVar98._0_8_ = 199;
      return auVar98;
    case 0xc0:
      auVar117._8_8_ = auVar3._8_8_;
      auVar117._0_8_ = 200;
      return auVar117;
    case 0xc1:
      auVar111._8_8_ = auVar3._8_8_;
      auVar111._0_8_ = 0xc9;
      return auVar111;
    case 0xc2:
      auVar85._8_8_ = auVar3._8_8_;
      auVar85._0_8_ = 0xca;
      return auVar85;
    case 0xc3:
      auVar97._8_8_ = auVar3._8_8_;
      auVar97._0_8_ = 0xcb;
      return auVar97;
    case 0xc4:
      auVar93._8_8_ = auVar3._8_8_;
      auVar93._0_8_ = 0xcc;
      return auVar93;
    case 0xc5:
      auVar99._8_8_ = auVar3._8_8_;
      auVar99._0_8_ = 0xcd;
      return auVar99;
    case 0xff:
      auVar100._8_8_ = auVar3._8_8_;
      auVar100._0_8_ = 3;
      return auVar100;
    default:
      if (uVar1 == 0x1301) {
        auVar11._8_8_ = auVar3._8_8_;
        auVar11._0_8_ = 4;
        return auVar11;
      }
    }
  }
  else if (uVar1 < 0xcca8) {
    if (uVar1 < 0x1305) {
      if (uVar1 == 0x1302) {
        auVar10._8_8_ = auVar3._8_8_;
        auVar10._0_8_ = 5;
        return auVar10;
      }
      if (uVar1 == 0x1303) {
        auVar9._8_8_ = auVar3._8_8_;
        auVar9._0_8_ = 6;
        return auVar9;
      }
      if (uVar1 == 0x1304) {
        auVar6._8_8_ = auVar3._8_8_;
        auVar6._0_8_ = 7;
        return auVar6;
      }
    }
    else {
      switch(uVar1) {
      case 0xc001:
        auVar3._0_8_ = 0xce;
        return auVar3;
      case 0xc002:
        auVar319._8_8_ = auVar3._8_8_;
        auVar319._0_8_ = 0xcf;
        return auVar319;
      case 0xc003:
        auVar369._8_8_ = auVar3._8_8_;
        auVar369._0_8_ = 0xd0;
        return auVar369;
      case 0xc004:
        auVar317._8_8_ = auVar3._8_8_;
        auVar317._0_8_ = 0xd1;
        return auVar317;
      case 0xc005:
        auVar240._8_8_ = auVar3._8_8_;
        auVar240._0_8_ = 0xd2;
        return auVar240;
      case 0xc006:
        auVar214._8_8_ = auVar3._8_8_;
        auVar214._0_8_ = 0xd3;
        return auVar214;
      case 0xc007:
        auVar231._8_8_ = auVar3._8_8_;
        auVar231._0_8_ = 0xd4;
        return auVar231;
      case 0xc008:
        auVar219._8_8_ = auVar3._8_8_;
        auVar219._0_8_ = 0xd5;
        return auVar219;
      case 0xc009:
        auVar204._8_8_ = auVar3._8_8_;
        auVar204._0_8_ = 9;
        return auVar204;
      case 0xc00a:
        auVar377._8_8_ = auVar3._8_8_;
        auVar377._0_8_ = 10;
        return auVar377;
      case 0xc00b:
        auVar374._8_8_ = auVar3._8_8_;
        auVar374._0_8_ = 0xd6;
        return auVar374;
      case 0xc00c:
        auVar376._8_8_ = auVar3._8_8_;
        auVar376._0_8_ = 0xd7;
        return auVar376;
      case 0xc00d:
        auVar370._8_8_ = auVar3._8_8_;
        auVar370._0_8_ = 0xd8;
        return auVar370;
      case 0xc00e:
        auVar239._8_8_ = auVar3._8_8_;
        auVar239._0_8_ = 0xd9;
        return auVar239;
      case 0xc00f:
        auVar216._8_8_ = auVar3._8_8_;
        auVar216._0_8_ = 0xda;
        return auVar216;
      case 0xc010:
        auVar223._8_8_ = auVar3._8_8_;
        auVar223._0_8_ = 0xdb;
        return auVar223;
      case 0xc011:
        auVar375._8_8_ = auVar3._8_8_;
        auVar375._0_8_ = 0xdc;
        return auVar375;
      case 0xc012:
        auVar207._8_8_ = auVar3._8_8_;
        auVar207._0_8_ = 0xdd;
        return auVar207;
      case 0xc013:
        auVar224._8_8_ = auVar3._8_8_;
        auVar224._0_8_ = 0xb;
        return auVar224;
      case 0xc014:
        auVar230._8_8_ = auVar3._8_8_;
        auVar230._0_8_ = 0xc;
        return auVar230;
      case 0xc015:
        auVar360._8_8_ = auVar3._8_8_;
        auVar360._0_8_ = 0xde;
        return auVar360;
      case 0xc016:
        auVar288._8_8_ = auVar3._8_8_;
        auVar288._0_8_ = 0xdf;
        return auVar288;
      case 0xc017:
        auVar233._8_8_ = auVar3._8_8_;
        auVar233._0_8_ = 0xe0;
        return auVar233;
      case 0xc018:
        auVar241._8_8_ = auVar3._8_8_;
        auVar241._0_8_ = 0xe1;
        return auVar241;
      case 0xc019:
        auVar289._8_8_ = auVar3._8_8_;
        auVar289._0_8_ = 0xe2;
        return auVar289;
      case 0xc01a:
        auVar209._8_8_ = auVar3._8_8_;
        auVar209._0_8_ = 0xe3;
        return auVar209;
      case 0xc01b:
        auVar258._8_8_ = auVar3._8_8_;
        auVar258._0_8_ = 0xe4;
        return auVar258;
      case 0xc01c:
        auVar210._8_8_ = auVar3._8_8_;
        auVar210._0_8_ = 0xe5;
        return auVar210;
      case 0xc01d:
        auVar367._8_8_ = auVar3._8_8_;
        auVar367._0_8_ = 0xe6;
        return auVar367;
      case 0xc01e:
        auVar342._8_8_ = auVar3._8_8_;
        auVar342._0_8_ = 0xe7;
        return auVar342;
      case 0xc01f:
        auVar320._8_8_ = auVar3._8_8_;
        auVar320._0_8_ = 0xe8;
        return auVar320;
      case 0xc020:
        auVar243._8_8_ = auVar3._8_8_;
        auVar243._0_8_ = 0xe9;
        return auVar243;
      case 0xc021:
        auVar351._8_8_ = auVar3._8_8_;
        auVar351._0_8_ = 0xea;
        return auVar351;
      case 0xc022:
        auVar366._8_8_ = auVar3._8_8_;
        auVar366._0_8_ = 0xeb;
        return auVar366;
      case 0xc023:
        auVar373._8_8_ = auVar3._8_8_;
        auVar373._0_8_ = 0xd;
        return auVar373;
      case 0xc024:
        auVar257._8_8_ = auVar3._8_8_;
        auVar257._0_8_ = 0xe;
        return auVar257;
      case 0xc025:
        auVar212._8_8_ = auVar3._8_8_;
        auVar212._0_8_ = 0xec;
        return auVar212;
      case 0xc026:
        auVar218._8_8_ = auVar3._8_8_;
        auVar218._0_8_ = 0xed;
        return auVar218;
      case 0xc027:
        auVar344._8_8_ = auVar3._8_8_;
        auVar344._0_8_ = 0xf;
        return auVar344;
      case 0xc028:
        auVar262._8_8_ = auVar3._8_8_;
        auVar262._0_8_ = 0x10;
        return auVar262;
      case 0xc029:
        auVar363._8_8_ = auVar3._8_8_;
        auVar363._0_8_ = 0xee;
        return auVar363;
      case 0xc02a:
        auVar371._8_8_ = auVar3._8_8_;
        auVar371._0_8_ = 0xef;
        return auVar371;
      case 0xc02b:
        auVar208._8_8_ = auVar3._8_8_;
        auVar208._0_8_ = 0x11;
        return auVar208;
      case 0xc02c:
        auVar205._8_8_ = auVar3._8_8_;
        auVar205._0_8_ = 0x12;
        return auVar205;
      case 0xc02d:
        auVar263._8_8_ = auVar3._8_8_;
        auVar263._0_8_ = 0xf0;
        return auVar263;
      case 0xc02e:
        auVar272._8_8_ = auVar3._8_8_;
        auVar272._0_8_ = 0xf1;
        return auVar272;
      case 0xc02f:
        auVar322._8_8_ = auVar3._8_8_;
        auVar322._0_8_ = 0x13;
        return auVar322;
      case 0xc030:
        auVar280._8_8_ = auVar3._8_8_;
        auVar280._0_8_ = 0x14;
        return auVar280;
      case 0xc031:
        auVar321._8_8_ = auVar3._8_8_;
        auVar321._0_8_ = 0xf2;
        return auVar321;
      case 0xc032:
        auVar291._8_8_ = auVar3._8_8_;
        auVar291._0_8_ = 0xf3;
        return auVar291;
      case 0xc033:
        auVar347._8_8_ = auVar3._8_8_;
        auVar347._0_8_ = 0xf4;
        return auVar347;
      case 0xc034:
        auVar206._8_8_ = auVar3._8_8_;
        auVar206._0_8_ = 0xf5;
        return auVar206;
      case 0xc035:
        auVar213._8_8_ = auVar3._8_8_;
        auVar213._0_8_ = 0xf6;
        return auVar213;
      case 0xc036:
        auVar275._8_8_ = auVar3._8_8_;
        auVar275._0_8_ = 0xf7;
        return auVar275;
      case 0xc037:
        auVar226._8_8_ = auVar3._8_8_;
        auVar226._0_8_ = 0xf8;
        return auVar226;
      case 0xc038:
        auVar327._8_8_ = auVar3._8_8_;
        auVar327._0_8_ = 0xf9;
        return auVar327;
      case 0xc039:
        auVar329._8_8_ = auVar3._8_8_;
        auVar329._0_8_ = 0xfa;
        return auVar329;
      case 0xc03a:
        auVar270._8_8_ = auVar3._8_8_;
        auVar270._0_8_ = 0xfb;
        return auVar270;
      case 0xc03b:
        auVar338._8_8_ = auVar3._8_8_;
        auVar338._0_8_ = 0xfc;
        return auVar338;
      case 0xc03c:
        auVar326._8_8_ = auVar3._8_8_;
        auVar326._0_8_ = 0xfd;
        return auVar326;
      case 0xc03d:
        auVar242._8_8_ = auVar3._8_8_;
        auVar242._0_8_ = 0xfe;
        return auVar242;
      case 0xc03e:
        auVar245._8_8_ = auVar3._8_8_;
        auVar245._0_8_ = 0xff;
        return auVar245;
      case 0xc03f:
        auVar328._8_8_ = auVar3._8_8_;
        auVar328._0_8_ = 0x100;
        return auVar328;
      case 0xc040:
        auVar343._8_8_ = auVar3._8_8_;
        auVar343._0_8_ = 0x101;
        return auVar343;
      case 0xc041:
        auVar211._8_8_ = auVar3._8_8_;
        auVar211._0_8_ = 0x102;
        return auVar211;
      case 0xc042:
        auVar217._8_8_ = auVar3._8_8_;
        auVar217._0_8_ = 0x103;
        return auVar217;
      case 0xc043:
        auVar244._8_8_ = auVar3._8_8_;
        auVar244._0_8_ = 0x104;
        return auVar244;
      case 0xc044:
        auVar251._8_8_ = auVar3._8_8_;
        auVar251._0_8_ = 0x105;
        return auVar251;
      case 0xc045:
        auVar222._8_8_ = auVar3._8_8_;
        auVar222._0_8_ = 0x106;
        return auVar222;
      case 0xc046:
        auVar228._8_8_ = auVar3._8_8_;
        auVar228._0_8_ = 0x107;
        return auVar228;
      case 0xc047:
        auVar354._8_8_ = auVar3._8_8_;
        auVar354._0_8_ = 0x108;
        return auVar354;
      case 0xc048:
        auVar356._8_8_ = auVar3._8_8_;
        auVar356._0_8_ = 0x109;
        return auVar356;
      case 0xc049:
        auVar238._8_8_ = auVar3._8_8_;
        auVar238._0_8_ = 0x10a;
        return auVar238;
      case 0xc04a:
        auVar358._8_8_ = auVar3._8_8_;
        auVar358._0_8_ = 0x10b;
        return auVar358;
      case 0xc04b:
        auVar362._8_8_ = auVar3._8_8_;
        auVar362._0_8_ = 0x10c;
        return auVar362;
      case 0xc04c:
        auVar372._8_8_ = auVar3._8_8_;
        auVar372._0_8_ = 0x10d;
        return auVar372;
      case 0xc04d:
        auVar298._8_8_ = auVar3._8_8_;
        auVar298._0_8_ = 0x10e;
        return auVar298;
      case 0xc04e:
        auVar368._8_8_ = auVar3._8_8_;
        auVar368._0_8_ = 0x10f;
        return auVar368;
      case 0xc04f:
        auVar227._8_8_ = auVar3._8_8_;
        auVar227._0_8_ = 0x110;
        return auVar227;
      case 0xc050:
        auVar361._8_8_ = auVar3._8_8_;
        auVar361._0_8_ = 0x111;
        return auVar361;
      case 0xc051:
        auVar301._8_8_ = auVar3._8_8_;
        auVar301._0_8_ = 0x112;
        return auVar301;
      case 0xc052:
        auVar234._8_8_ = auVar3._8_8_;
        auVar234._0_8_ = 0x113;
        return auVar234;
      case 0xc053:
        auVar297._8_8_ = auVar3._8_8_;
        auVar297._0_8_ = 0x114;
        return auVar297;
      case 0xc054:
        auVar221._8_8_ = auVar3._8_8_;
        auVar221._0_8_ = 0x115;
        return auVar221;
      case 0xc055:
        auVar364._8_8_ = auVar3._8_8_;
        auVar364._0_8_ = 0x116;
        return auVar364;
      case 0xc056:
        auVar365._8_8_ = auVar3._8_8_;
        auVar365._0_8_ = 0x117;
        return auVar365;
      case 0xc057:
        auVar236._8_8_ = auVar3._8_8_;
        auVar236._0_8_ = 0x118;
        return auVar236;
      case 0xc058:
        auVar352._8_8_ = auVar3._8_8_;
        auVar352._0_8_ = 0x119;
        return auVar352;
      case 0xc059:
        auVar325._8_8_ = auVar3._8_8_;
        auVar325._0_8_ = 0x11a;
        return auVar325;
      case 0xc05a:
        auVar323._8_8_ = auVar3._8_8_;
        auVar323._0_8_ = 0x11b;
        return auVar323;
      case 0xc05b:
        auVar215._8_8_ = auVar3._8_8_;
        auVar215._0_8_ = 0x11c;
        return auVar215;
      case 0xc05c:
        auVar220._8_8_ = auVar3._8_8_;
        auVar220._0_8_ = 0x11d;
        return auVar220;
      case 0xc05d:
        auVar273._8_8_ = auVar3._8_8_;
        auVar273._0_8_ = 0x11e;
        return auVar273;
      case 0xc05e:
        auVar276._8_8_ = auVar3._8_8_;
        auVar276._0_8_ = 0x11f;
        return auVar276;
      case 0xc05f:
        auVar247._8_8_ = auVar3._8_8_;
        auVar247._0_8_ = 0x120;
        return auVar247;
      case 0xc060:
        auVar225._8_8_ = auVar3._8_8_;
        auVar225._0_8_ = 0x121;
        return auVar225;
      case 0xc061:
        auVar357._8_8_ = auVar3._8_8_;
        auVar357._0_8_ = 0x122;
        return auVar357;
      case 0xc062:
        auVar232._8_8_ = auVar3._8_8_;
        auVar232._0_8_ = 0x123;
        return auVar232;
      case 0xc063:
        auVar303._8_8_ = auVar3._8_8_;
        auVar303._0_8_ = 0x124;
        return auVar303;
      case 0xc064:
        auVar254._8_8_ = auVar3._8_8_;
        auVar254._0_8_ = 0x125;
        return auVar254;
      case 0xc065:
        auVar353._8_8_ = auVar3._8_8_;
        auVar353._0_8_ = 0x126;
        return auVar353;
      case 0xc066:
        auVar350._8_8_ = auVar3._8_8_;
        auVar350._0_8_ = 0x127;
        return auVar350;
      case 0xc067:
        auVar345._8_8_ = auVar3._8_8_;
        auVar345._0_8_ = 0x128;
        return auVar345;
      case 0xc068:
        auVar248._8_8_ = auVar3._8_8_;
        auVar248._0_8_ = 0x129;
        return auVar248;
      case 0xc069:
        auVar229._8_8_ = auVar3._8_8_;
        auVar229._0_8_ = 0x12a;
        return auVar229;
      case 0xc06a:
        auVar259._8_8_ = auVar3._8_8_;
        auVar259._0_8_ = 299;
        return auVar259;
      case 0xc06b:
        auVar359._8_8_ = auVar3._8_8_;
        auVar359._0_8_ = 300;
        return auVar359;
      case 0xc06c:
        auVar265._8_8_ = auVar3._8_8_;
        auVar265._0_8_ = 0x12d;
        return auVar265;
      case 0xc06d:
        auVar246._8_8_ = auVar3._8_8_;
        auVar246._0_8_ = 0x12e;
        return auVar246;
      case 0xc06e:
        auVar307._8_8_ = auVar3._8_8_;
        auVar307._0_8_ = 0x12f;
        return auVar307;
      case 0xc06f:
        auVar282._8_8_ = auVar3._8_8_;
        auVar282._0_8_ = 0x130;
        return auVar282;
      case 0xc070:
        auVar292._8_8_ = auVar3._8_8_;
        auVar292._0_8_ = 0x131;
        return auVar292;
      case 0xc071:
        auVar308._8_8_ = auVar3._8_8_;
        auVar308._0_8_ = 0x132;
        return auVar308;
      case 0xc072:
        auVar305._8_8_ = auVar3._8_8_;
        auVar305._0_8_ = 0x133;
        return auVar305;
      case 0xc073:
        auVar281._8_8_ = auVar3._8_8_;
        auVar281._0_8_ = 0x134;
        return auVar281;
      case 0xc074:
        auVar334._8_8_ = auVar3._8_8_;
        auVar334._0_8_ = 0x135;
        return auVar334;
      case 0xc075:
        auVar271._8_8_ = auVar3._8_8_;
        auVar271._0_8_ = 0x136;
        return auVar271;
      case 0xc076:
        auVar332._8_8_ = auVar3._8_8_;
        auVar332._0_8_ = 0x137;
        return auVar332;
      case 0xc077:
        auVar253._8_8_ = auVar3._8_8_;
        auVar253._0_8_ = 0x138;
        return auVar253;
      case 0xc078:
        auVar346._8_8_ = auVar3._8_8_;
        auVar346._0_8_ = 0x139;
        return auVar346;
      case 0xc079:
        auVar341._8_8_ = auVar3._8_8_;
        auVar341._0_8_ = 0x13a;
        return auVar341;
      case 0xc07a:
        auVar250._8_8_ = auVar3._8_8_;
        auVar250._0_8_ = 0x13b;
        return auVar250;
      case 0xc07b:
        auVar348._8_8_ = auVar3._8_8_;
        auVar348._0_8_ = 0x13c;
        return auVar348;
      case 0xc07c:
        auVar355._8_8_ = auVar3._8_8_;
        auVar355._0_8_ = 0x13d;
        return auVar355;
      case 0xc07d:
        auVar235._8_8_ = auVar3._8_8_;
        auVar235._0_8_ = 0x13e;
        return auVar235;
      case 0xc07e:
        auVar277._8_8_ = auVar3._8_8_;
        auVar277._0_8_ = 0x13f;
        return auVar277;
      case 0xc07f:
        auVar269._8_8_ = auVar3._8_8_;
        auVar269._0_8_ = 0x140;
        return auVar269;
      case 0xc080:
        auVar252._8_8_ = auVar3._8_8_;
        auVar252._0_8_ = 0x141;
        return auVar252;
      case 0xc081:
        auVar349._8_8_ = auVar3._8_8_;
        auVar349._0_8_ = 0x142;
        return auVar349;
      case 0xc082:
        auVar318._8_8_ = auVar3._8_8_;
        auVar318._0_8_ = 0x143;
        return auVar318;
      case 0xc083:
        auVar266._8_8_ = auVar3._8_8_;
        auVar266._0_8_ = 0x144;
        return auVar266;
      case 0xc084:
        auVar237._8_8_ = auVar3._8_8_;
        auVar237._0_8_ = 0x145;
        return auVar237;
      case 0xc085:
        auVar333._8_8_ = auVar3._8_8_;
        auVar333._0_8_ = 0x146;
        return auVar333;
      case 0xc086:
        auVar302._8_8_ = auVar3._8_8_;
        auVar302._0_8_ = 0x147;
        return auVar302;
      case 0xc087:
        auVar279._8_8_ = auVar3._8_8_;
        auVar279._0_8_ = 0x148;
        return auVar279;
      case 0xc088:
        auVar330._8_8_ = auVar3._8_8_;
        auVar330._0_8_ = 0x149;
        return auVar330;
      case 0xc089:
        auVar339._8_8_ = auVar3._8_8_;
        auVar339._0_8_ = 0x14a;
        return auVar339;
      case 0xc08a:
        auVar249._8_8_ = auVar3._8_8_;
        auVar249._0_8_ = 0x14b;
        return auVar249;
      case 0xc08b:
        auVar256._8_8_ = auVar3._8_8_;
        auVar256._0_8_ = 0x14c;
        return auVar256;
      case 0xc08c:
        auVar255._8_8_ = auVar3._8_8_;
        auVar255._0_8_ = 0x14d;
        return auVar255;
      case 0xc08d:
        auVar261._8_8_ = auVar3._8_8_;
        auVar261._0_8_ = 0x14e;
        return auVar261;
      case 0xc08e:
        auVar268._8_8_ = auVar3._8_8_;
        auVar268._0_8_ = 0x14f;
        return auVar268;
      case 0xc08f:
        auVar316._8_8_ = auVar3._8_8_;
        auVar316._0_8_ = 0x150;
        return auVar316;
      case 0xc090:
        auVar299._8_8_ = auVar3._8_8_;
        auVar299._0_8_ = 0x151;
        return auVar299;
      case 0xc091:
        auVar315._8_8_ = auVar3._8_8_;
        auVar315._0_8_ = 0x152;
        return auVar315;
      case 0xc092:
        auVar337._8_8_ = auVar3._8_8_;
        auVar337._0_8_ = 0x153;
        return auVar337;
      case 0xc093:
        auVar336._8_8_ = auVar3._8_8_;
        auVar336._0_8_ = 0x154;
        return auVar336;
      case 0xc094:
        auVar260._8_8_ = auVar3._8_8_;
        auVar260._0_8_ = 0x155;
        return auVar260;
      case 0xc095:
        auVar340._8_8_ = auVar3._8_8_;
        auVar340._0_8_ = 0x156;
        return auVar340;
      case 0xc096:
        auVar285._8_8_ = auVar3._8_8_;
        auVar285._0_8_ = 0x157;
        return auVar285;
      case 0xc097:
        auVar286._8_8_ = auVar3._8_8_;
        auVar286._0_8_ = 0x158;
        return auVar286;
      case 0xc098:
        auVar335._8_8_ = auVar3._8_8_;
        auVar335._0_8_ = 0x159;
        return auVar335;
      case 0xc099:
        auVar324._8_8_ = auVar3._8_8_;
        auVar324._0_8_ = 0x15a;
        return auVar324;
      case 0xc09a:
        auVar309._8_8_ = auVar3._8_8_;
        auVar309._0_8_ = 0x15b;
        return auVar309;
      case 0xc09b:
        auVar304._8_8_ = auVar3._8_8_;
        auVar304._0_8_ = 0x15c;
        return auVar304;
      case 0xc09c:
        auVar331._8_8_ = auVar3._8_8_;
        auVar331._0_8_ = 0x15d;
        return auVar331;
      case 0xc09d:
        auVar312._8_8_ = auVar3._8_8_;
        auVar312._0_8_ = 0x15e;
        return auVar312;
      case 0xc09e:
        auVar300._8_8_ = auVar3._8_8_;
        auVar300._0_8_ = 0x15f;
        return auVar300;
      case 0xc09f:
        auVar264._8_8_ = auVar3._8_8_;
        auVar264._0_8_ = 0x160;
        return auVar264;
      case 0xc0a0:
        auVar290._8_8_ = auVar3._8_8_;
        auVar290._0_8_ = 0x161;
        return auVar290;
      case 0xc0a1:
        auVar267._8_8_ = auVar3._8_8_;
        auVar267._0_8_ = 0x162;
        return auVar267;
      case 0xc0a2:
        auVar310._8_8_ = auVar3._8_8_;
        auVar310._0_8_ = 0x163;
        return auVar310;
      case 0xc0a3:
        auVar283._8_8_ = auVar3._8_8_;
        auVar283._0_8_ = 0x164;
        return auVar283;
      case 0xc0a4:
        auVar274._8_8_ = auVar3._8_8_;
        auVar274._0_8_ = 0x165;
        return auVar274;
      case 0xc0a5:
        auVar313._8_8_ = auVar3._8_8_;
        auVar313._0_8_ = 0x166;
        return auVar313;
      case 0xc0a6:
        auVar284._8_8_ = auVar3._8_8_;
        auVar284._0_8_ = 0x167;
        return auVar284;
      case 0xc0a7:
        auVar314._8_8_ = auVar3._8_8_;
        auVar314._0_8_ = 0x168;
        return auVar314;
      case 0xc0a8:
        auVar294._8_8_ = auVar3._8_8_;
        auVar294._0_8_ = 0x169;
        return auVar294;
      case 0xc0a9:
        auVar311._8_8_ = auVar3._8_8_;
        auVar311._0_8_ = 0x16a;
        return auVar311;
      case 0xc0aa:
        auVar306._8_8_ = auVar3._8_8_;
        auVar306._0_8_ = 0x16b;
        return auVar306;
      case 0xc0ab:
        auVar278._8_8_ = auVar3._8_8_;
        auVar278._0_8_ = 0x16c;
        return auVar278;
      case 0xc0ac:
        auVar293._8_8_ = auVar3._8_8_;
        auVar293._0_8_ = 0x16d;
        return auVar293;
      case 0xc0ad:
        auVar287._8_8_ = auVar3._8_8_;
        auVar287._0_8_ = 0x16e;
        return auVar287;
      case 0xc0ae:
        auVar295._8_8_ = auVar3._8_8_;
        auVar295._0_8_ = 0x16f;
        return auVar295;
      case 0xc0af:
        auVar296._8_8_ = auVar3._8_8_;
        auVar296._0_8_ = 0x170;
        return auVar296;
      }
      if (uVar1 == 0x1305) {
        auVar12._8_8_ = auVar3._8_8_;
        auVar12._0_8_ = 8;
        return auVar12;
      }
    }
  }
  else if (uVar1 < 0xccac) {
    if (uVar1 < 0xccaa) {
      if (uVar1 == 0xcca8) {
        auVar200._8_8_ = auVar3._8_8_;
        auVar200._0_8_ = 0x15;
        return auVar200;
      }
      if (uVar1 == 0xcca9) {
        auVar5._8_8_ = auVar3._8_8_;
        auVar5._0_8_ = 0x16;
        return auVar5;
      }
    }
    else {
      if (uVar1 == 0xccaa) {
        auVar201._8_8_ = auVar3._8_8_;
        auVar201._0_8_ = 0x171;
        return auVar201;
      }
      if (uVar1 == 0xccab) {
        auVar8._8_8_ = auVar3._8_8_;
        auVar8._0_8_ = 0x172;
        return auVar8;
      }
    }
  }
  else if (uVar1 < 0xccae) {
    if (uVar1 == 0xccac) {
      auVar199._8_8_ = auVar3._8_8_;
      auVar199._0_8_ = 0x173;
      return auVar199;
    }
    if (uVar1 == 0xccad) {
      auVar7._8_8_ = auVar3._8_8_;
      auVar7._0_8_ = 0x174;
      return auVar7;
    }
  }
  else {
    if (uVar1 == 0xccae) {
      auVar203._8_8_ = auVar3._8_8_;
      auVar203._0_8_ = 0x175;
      return auVar203;
    }
    if (uVar1 == 0xfefe) {
      uVar2 = 0x176;
    }
    else if (uVar1 == 0xfeff) {
      auVar4._8_8_ = auVar3._8_8_;
      auVar4._0_8_ = 0x177;
      return auVar4;
    }
  }
  auVar202._8_4_ = param_1;
  auVar202._0_8_ = uVar2;
  auVar202._12_4_ = 0;
  return auVar202;
}


// ===== 0085166c  <u16_as_core::convert::From<rustls::enums::CipherSuite>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as core::convert::From<rustls::enums::CipherSuite>>::from */

void __rustcall <u16_as_core::convert::From<rustls::enums::CipherSuite>>::from(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00851684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00851688 + (ulong)*(ushort *)(&DAT_002fa44e + (param_1 & 0xffff) * 2) * 4))();
  return;
}


// ===== 00852248  <rustls::enums::CipherSuite_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::CipherSuite as core::fmt::Debug>::fmt */

void __rustcall
<rustls::enums::CipherSuite_as_core::fmt::Debug>::fmt(undefined2 *param_1,undefined8 *param_2)

{
  undefined2 *local_30;
  code *pcStack_28;
  undefined2 local_4 [2];
  
  switch(*param_1) {
  case 0:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa7a7,0x17);
    return;
  case 1:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa7be,0x1f);
    return;
  case 2:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa7dd,0x1f);
    return;
  case 3:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa7fc,0x21);
    return;
  case 4:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa81d,0x18);
    return;
  case 5:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa835,0x18);
    return;
  case 6:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa84d,0x1e);
    return;
  case 7:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa86b,0x18);
    return;
  case 8:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa883,0x1a);
    return;
  case 9:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa89d,0x24);
    return;
  case 10:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa8c1,0x24);
    return;
  case 0xb:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa8e5,0x22);
    return;
  case 0xc:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa907,0x22);
    return;
  case 0xd:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa929,0x27);
    return;
  case 0xe:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa950,0x27);
    return;
  case 0xf:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa977,0x25);
    return;
  case 0x10:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa99c,0x25);
    return;
  case 0x11:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa9c1,0x27);
    return;
  case 0x12:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fa9e8,0x27);
    return;
  case 0x13:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002faa0f,0x25);
    return;
  case 0x14:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002faa34,0x25);
    return;
  case 0x15:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002faa59,0x2b);
    return;
  case 0x16:
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002faa84,0x2d);
    return;
  default:
    local_4[0] = <u16_as_core::convert::From<rustls::enums::CipherSuite>>::from(*param_1,param_1[1])
    ;
    local_30 = local_4;
    pcStack_28 = FUN_00852824;
    core::fmt::write(*param_2,param_2[1],&DAT_002fd9a8,&local_30);
    return;
  }
}


// ===== 008524f0  <rustls::enums::SignatureScheme_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureScheme as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::SignatureScheme_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fd9bf;
    *(undefined8 *)(param_1 + 0x10) = 0xf;
    return;
  }
  param_2[2] = uVar1 + 2;
  if ((0xfffffffffffffffd < uVar1) || ((ulong)param_2[1] < uVar1 + 2)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail();
  }
  uVar2 = *(ushort *)(*param_2 + uVar1);
  uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
  uVar4 = 0xd;
  if (uVar3 < 0x601) {
    if (uVar3 < 0x403) {
      if (uVar3 == 0x201) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 0;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x203) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 1;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x401) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 2;
        *param_1 = 0xff;
        return;
      }
    }
    else {
      if (uVar3 == 0x403) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 3;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x501) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 4;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x503) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 5;
        *param_1 = 0xff;
        return;
      }
    }
  }
  else if (uVar3 < 0x805) {
    if (uVar3 == 0x601) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 6;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0x603) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 7;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0x804) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 8;
      *param_1 = 0xff;
      return;
    }
  }
  else if (uVar3 < 0x807) {
    if (uVar3 == 0x805) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 9;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0x806) {
      uVar4 = 10;
    }
  }
  else {
    if (uVar3 == 0x807) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 0xb;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0x808) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 0xc;
      *param_1 = 0xff;
      return;
    }
  }
  *(ushort *)(param_1 + 4) = uVar2;
  *(undefined2 *)(param_1 + 2) = uVar4;
  *param_1 = 0xff;
  return;
}


// ===== 00852720  <rustls::enums::SignatureScheme_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureScheme as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::SignatureScheme_as_rustls::msgs::codec::Codec>::encode(ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00852748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0085274c + (ulong)(byte)(&DAT_002fa757)[*param_1] * 4))();
  return;
}


// ===== 0085280c  FUN_0085280c =====

void FUN_0085280c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00852824  FUN_00852824 =====

void FUN_00852824(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u16_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u16_as_core::fmt::Display>::fmt();
    return;
  }
  <u16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 0085283c  <rustls::enums::SignatureScheme_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::SignatureScheme as core::fmt::Debug>::fmt */

void __rustcall <rustls::enums::SignatureScheme_as_core::fmt::Debug>::fmt(ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00852854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00852858 + (ulong)(byte)(&DAT_002fa765)[*param_1] * 4))();
  return;
}


// ===== 008529d4  <rustls::versions::EnabledVersions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::versions::EnabledVersions as core::fmt::Debug>::fmt */

void __rustcall
<rustls::versions::EnabledVersions_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_30,param_2);
  if (*param_1 == 0) {
    lVar2 = param_1[1];
  }
  else {
    puVar1 = (undefined1 *)
             <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                       (auStack_30,*param_1,&DAT_00ae69c8);
    lVar2 = param_1[1];
  }
  if (lVar2 != 0) {
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry(puVar1,lVar2,&DAT_00ae69c8);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish();
  return;
}


// ===== 00852a44  <rustls::webpki::verify::WebPkiSupportedAlgorithms_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::webpki::verify::WebPkiSupportedAlgorithms as core::fmt::Debug>::fmt */

undefined8 __rustcall
<rustls::webpki::verify::WebPkiSupportedAlgorithms_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [20];
  undefined4 local_34;
  undefined4 *puVar6;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002fda71,0x32);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_48,param_2);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    puVar5 = puVar4;
    do {
      puVar6 = puVar5 + 6;
      local_34 = *puVar5;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_48,&local_34,&DAT_00ae6550);
      puVar5 = puVar6;
    } while (puVar6 != puVar4 + lVar3 * 6);
  }
  uVar1 = <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_48);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_002fdaa3,2);
  return uVar2;
}


// ===== 00852b30  <rustls::enums::HandshakeType_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::HandshakeType as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::HandshakeType_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[2];
  if (param_2[1] == uVar1) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fdaa5;
    *(undefined8 *)(param_1 + 0x10) = 0xd;
    return;
  }
  param_2[2] = uVar1 + 1;
  if (uVar1 < (ulong)param_2[1]) {
    cVar2 = *(char *)(*param_2 + uVar1);
    if ((byte)(cVar2 + 2U) < 0x1c) {
      uVar3 = (&DAT_002feb14)[(byte)(cVar2 + 2U)];
      param_1[2] = cVar2;
      param_1[1] = uVar3;
      *param_1 = 0xff;
      return;
    }
    param_1[2] = cVar2;
    param_1[1] = 0x14;
    *param_1 = 0xff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00852bd4  <rustls::enums::HandshakeType_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::HandshakeType as rustls::msgs::codec::Codec>::encode */

void __rustcall <rustls::enums::HandshakeType_as_rustls::msgs::codec::Codec>::encode(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00852c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00852c04 + (ulong)(byte)(&DAT_002fa773)[*param_1] * 4))();
  return;
}


// ===== 00852cac  <rustls::enums::HandshakeType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::HandshakeType as core::fmt::Debug>::fmt */

void __rustcall <rustls::enums::HandshakeType_as_core::fmt::Debug>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00852cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00852cc8 + (ulong)(byte)(&DAT_002fa788)[*param_1] * 4))();
  return;
}


// ===== 00852eec  <rustls::enums::ContentType_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ContentType as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::ContentType_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_2[2];
  if (param_2[1] == uVar2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fdd55;
    *(undefined8 *)(param_1 + 0x10) = 0xb;
    return;
  }
  param_2[2] = uVar2 + 1;
  if (uVar2 < (ulong)param_2[1]) {
    uVar3 = *(byte *)(*param_2 + uVar2) - 0x14;
    param_1[2] = *(byte *)(*param_2 + uVar2);
    uVar1 = (undefined1)uVar3;
    if (4 < uVar3) {
      uVar1 = 5;
    }
    *param_1 = 0xff;
    param_1[1] = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00852f6c  <rustls::enums::ContentType_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ContentType as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::ContentType_as_rustls::msgs::codec::Codec>::encode(byte *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      bVar1 = 0x14;
      lVar2 = param_2[2];
      if (lVar2 != *param_2) goto LAB_0085303c;
    }
    else if (bVar1 == 1) {
      bVar1 = 0x15;
      lVar2 = param_2[2];
      if (lVar2 != *param_2) goto LAB_0085303c;
    }
    else {
      bVar1 = 0x16;
      lVar2 = param_2[2];
      if (lVar2 != *param_2) goto LAB_0085303c;
    }
  }
  else if (bVar1 == 3) {
    bVar1 = 0x17;
    lVar2 = param_2[2];
    if (lVar2 != *param_2) goto LAB_0085303c;
  }
  else if (bVar1 == 4) {
    bVar1 = 0x18;
    lVar2 = param_2[2];
    if (lVar2 != *param_2) goto LAB_0085303c;
  }
  else {
    bVar1 = param_1[1];
    lVar2 = param_2[2];
    if (lVar2 != *param_2) goto LAB_0085303c;
  }
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
LAB_0085303c:
  *(byte *)(param_2[1] + lVar2) = bVar1;
  param_2[2] = lVar2 + 1;
  return;
}


// ===== 0085305c  <rustls::enums::ContentType_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ContentType as core::fmt::Debug>::fmt */

void __rustcall
<rustls::enums::ContentType_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte local_24 [4];
  byte *local_20;
  code *pcStack_18;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fdd6e,0xf);
      return;
    }
    if (bVar1 == 4) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fdd7d,9);
      return;
    }
    local_24[0] = param_1[1];
    local_20 = local_24;
    pcStack_18 = FUN_0085280c;
    core::fmt::write(*param_2,param_2[1],&DAT_002fdd86,&local_20);
    return;
  }
  if (bVar1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0910,0x10);
    return;
  }
  if (bVar1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fdd60,5);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002fdd65,9);
  return;
}


// ===== 00853140  <rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ProtocolVersion as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::read
          (undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002fd811;
    *(undefined8 *)(param_1 + 0x10) = 0xf;
    return;
  }
  param_2[2] = uVar1 + 2;
  if ((0xfffffffffffffffd < uVar1) || ((ulong)param_2[1] < uVar1 + 2)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail();
  }
  uVar2 = *(ushort *)(*param_2 + uVar1);
  uVar3 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
  uVar4 = 9;
  if (uVar3 < 0x303) {
    if (uVar3 < 0x301) {
      if (uVar3 == 2) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 0;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x300) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 1;
        *param_1 = 0xff;
        return;
      }
    }
    else {
      if (uVar3 == 0x301) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 2;
        *param_1 = 0xff;
        return;
      }
      if (uVar3 == 0x302) {
        *(ushort *)(param_1 + 4) = uVar2;
        *(undefined2 *)(param_1 + 2) = 3;
        *param_1 = 0xff;
        return;
      }
    }
  }
  else if (uVar3 < 0xfefc) {
    if (uVar3 == 0x303) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 4;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0x304) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 5;
      *param_1 = 0xff;
      return;
    }
  }
  else {
    if (uVar3 == 0xfefc) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 8;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0xfefd) {
      *(ushort *)(param_1 + 4) = uVar2;
      *(undefined2 *)(param_1 + 2) = 7;
      *param_1 = 0xff;
      return;
    }
    if (uVar3 == 0xfeff) {
      uVar4 = 6;
    }
  }
  *(ushort *)(param_1 + 4) = uVar2;
  *(undefined2 *)(param_1 + 2) = uVar4;
  *param_1 = 0xff;
  return;
}


// ===== 008532f8  <rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::enums::ProtocolVersion as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::enums::ProtocolVersion_as_rustls::msgs::codec::Codec>::encode(ushort *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00853320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00853324 + (ulong)(byte)(&DAT_002fa79d)[*param_1] * 4))();
  return;
}


// ===== 008533c4  FUN_008533c4 =====

undefined8 FUN_008533c4(void)

{
  return 0;
}


// ===== 008533cc  FUN_008533cc =====

void FUN_008533cc(long *param_1,long *param_2,short param_3,short param_4,long *param_5)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar3 = *param_2;
  if (lVar3 != -1) {
    lStack_58 = param_2[0xb];
    local_60 = param_2[10];
    lStack_48 = param_2[0xd];
    local_50 = param_2[0xc];
    lStack_88 = param_2[5];
    local_90 = param_2[4];
    lStack_38 = param_2[0xf];
    local_40 = param_2[0xe];
    lStack_28 = param_2[0x11];
    lVar3 = param_2[0x10];
    lStack_78 = param_2[7];
    lStack_80 = param_2[6];
    lStack_68 = param_2[9];
    local_70 = param_2[8];
    uStack_30._4_2_ = (short)((ulong)lVar3 >> 0x20);
    bVar1 = uStack_30._4_2_ == param_3;
    lStack_a8 = param_2[1];
    local_b0 = *param_2;
    lStack_98 = param_2[3];
    lStack_a0 = param_2[2];
    uStack_30 = lVar3;
    if ((bVar1) &&
       ((param_3 != 0x178 ||
        (uStack_30._6_2_ = (short)((ulong)lVar3 >> 0x30), bVar1 = uStack_30._6_2_ == param_4, bVar1)
        ))) {
      bVar2 = *param_5 == -2 && local_50 == -2;
      if ((local_50 != -2) && (*param_5 != -2)) {
                    /* try { // try from 00853464 to 00853473 has its CatchHandler @ 008534d0 */
        bVar2 = <rustls_pki_types::server_name::DnsNameInner_as_core::cmp::PartialEq>::eq
                          (&local_50,param_5);
      }
      if ((bVar2 & 1) != 0) {
        lVar4 = param_2[0xd];
        lVar3 = param_2[0xc];
        lVar6 = param_2[0xf];
        lVar5 = param_2[0xe];
        lVar7 = param_2[0x10];
        param_1[0x11] = param_2[0x11];
        param_1[0x10] = lVar7;
        param_1[0xd] = lVar4;
        param_1[0xc] = lVar3;
        param_1[0xf] = lVar6;
        param_1[0xe] = lVar5;
        lVar3 = param_2[4];
        lVar5 = param_2[7];
        lVar4 = param_2[6];
        param_1[5] = param_2[5];
        param_1[4] = lVar3;
        param_1[7] = lVar5;
        param_1[6] = lVar4;
        lVar3 = param_2[8];
        lVar5 = param_2[0xb];
        lVar4 = param_2[10];
        param_1[9] = param_2[9];
        param_1[8] = lVar3;
        param_1[0xb] = lVar5;
        param_1[10] = lVar4;
        lVar3 = *param_2;
        lVar5 = param_2[3];
        lVar4 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = lVar3;
        param_1[3] = lVar5;
        param_1[2] = lVar4;
        return;
      }
    }
    FUN_00853e5c(&local_b0);
    lVar3 = -1;
  }
  *param_1 = lVar3;
  return;
}


// ===== 008534e4  FUN_008534e4 =====

void FUN_008534e4(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *__ptr;
  undefined8 local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  void *local_f0;
  undefined8 local_e8;
  undefined2 local_48;
  
  local_108 = 0;
  local_118 = param_4;
  local_110 = param_5;
  if (param_2 == 0) {
    <rustls::msgs::base::PayloadU16_as_rustls::msgs::codec::Codec>::read(&local_100,&local_118);
    lVar3 = CONCAT44(uStack_f4,local_f8);
    if (local_100 != 1) {
      uVar2 = 1;
      __ptr = local_f0;
      if (local_108 < local_110) goto LAB_008535a4;
      goto LAB_0085353c;
    }
  }
  else {
    <rustls::msgs::base::PayloadU8_as_rustls::msgs::codec::Codec>::read(&local_118);
    lVar3 = CONCAT44(uStack_f4,local_f8);
    if ((local_100 & 1) == 0) {
      uVar2 = 0;
      __ptr = local_f0;
      if (local_108 < local_110) {
LAB_008535a4:
        local_48 = 4;
        local_100 = 0x8000000000000000;
        local_f8 = 0x100001;
                    /* try { // try from 008535cc to 008535d7 has its CatchHandler @ 00853620 */
        <rustls::common_state::rustls::common_state::CommonState>::send_msg
                  (param_3,&local_100,*(char *)(param_3 + 0x49) == '\x02');
        *(undefined1 *)(param_3 + 0x335) = 1;
        *param_1 = 0x8000000000000014;
        *(undefined1 *)(param_1 + 1) = 6;
        if (lVar3 == 0) {
          return;
        }
        free(__ptr);
        return;
      }
LAB_0085353c:
      param_1[2] = lVar3;
      param_1[3] = local_f0;
      param_1[4] = local_e8;
      uVar1 = 0xffffffffffffffff;
      param_1[1] = uVar2;
      goto LAB_00853578;
    }
  }
  param_1[2] = local_f0;
  param_1[3] = local_e8;
  uVar1 = 0x8000000000000014;
  param_1[1] = lVar3;
LAB_00853578:
  *param_1 = uVar1;
  return;
}


// ===== 00853640  FUN_00853640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00853640(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,ulong param_5)

{
  void **ppvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *__ptr;
  void *__ptr_00;
  void *pvVar5;
  void *pvVar6;
  undefined8 local_190;
  ulong local_188;
  ulong local_180;
  void *local_178;
  void *apvStack_170 [4];
  undefined8 local_150;
  void *pvStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *pvStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  void *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  void *local_100;
  void *pvStack_f8;
  void *local_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_58;
  
  local_180 = 0;
  local_190 = param_4;
  local_188 = param_5;
  if (param_2 == 0) {
    <rustls::msgs::handshake::ServerDhParams_as_rustls::msgs::codec::Codec>::read
              (&local_110,&local_190);
    __ptr_00 = (void *)CONCAT44(uStack_104,local_108);
    if (local_110 == (void *)0xffffffffffffffff) goto LAB_008537ac;
    pvStack_128 = pvStack_e0;
    local_130 = local_e8;
    uStack_118 = uStack_d0;
    uStack_120 = local_d8;
    pvVar4 = local_100;
    __ptr = local_f0;
    pvVar5 = pvStack_f8;
    pvVar6 = local_110;
  }
  else {
    <rustls::msgs::handshake::ServerEcdhParams_as_rustls::msgs::codec::Codec>::read(&local_190);
    __ptr_00 = (void *)CONCAT44(uStack_104,local_108);
    if (local_110 == (void *)0xffffffffffffffff) {
LAB_008537ac:
      param_1[2] = __ptr_00;
      param_1[3] = local_100;
      uVar3 = _UNK_0029ffe8;
      uVar2 = _DAT_0029ffe0;
      param_1[4] = pvStack_f8;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      return;
    }
    pvVar4 = __ptr_00;
    __ptr = pvStack_f8;
    __ptr_00 = local_110;
    pvVar5 = local_100;
    pvVar6 = (void *)0xffffffffffffffff;
  }
  pvStack_148 = pvStack_128;
  local_150 = local_130;
  local_138 = uStack_118;
  local_140 = uStack_120;
  if (local_180 < local_188) {
    local_58 = 4;
    local_110 = (void *)0x8000000000000000;
    local_108 = 0x100001;
                    /* try { // try from 00853714 to 0085371f has its CatchHandler @ 008537f8 */
    local_178 = pvVar6;
    apvStack_170[0] = __ptr_00;
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_3,&local_110,*(char *)(param_3 + 0x49) == '\x02');
    *(undefined1 *)(param_3 + 0x335) = 1;
    uVar3 = _UNK_0029ffe8;
    uVar2 = _DAT_0029ffe0;
    *(undefined1 *)(param_1 + 2) = 6;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    if (pvVar6 == (void *)0xffffffffffffffff) {
      ppvVar1 = apvStack_170;
    }
    else {
      ppvVar1 = &pvStack_148;
      if (pvVar6 != (void *)0x0) {
        free(__ptr_00);
      }
      apvStack_170[0] = pvStack_148;
      if (pvVar5 != (void *)0x0) {
        free(__ptr);
        apvStack_170[0] = pvStack_148;
      }
    }
    if (apvStack_170[0] != (void *)0x0) {
      free(ppvVar1[1]);
    }
  }
  else {
    param_1[5] = local_130;
    param_1[4] = __ptr;
    param_1[7] = uStack_120;
    param_1[6] = pvStack_128;
    param_1[8] = uStack_118;
    param_1[1] = __ptr_00;
    *param_1 = pvVar6;
    param_1[3] = pvVar5;
    param_1[2] = pvVar4;
  }
  return;
}


// ===== 0085380c  FUN_0085380c =====

void FUN_0085380c(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  lVar3 = *param_1;
  param_1[2] = 0;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (*param_1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 00853854  FUN_00853854 =====

void FUN_00853854(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    __ptr = (void *)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar3[-1] != -1) && (puVar3[-1] != 0)) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008538e0  FUN_008538e0 =====

void FUN_008538e0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00853968  FUN_00853968 =====

void FUN_00853968(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00853998 to 0085399b has its CatchHandler @ 008539e4 */
    FUN_007ff230(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x28);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00853a2c  FUN_00853a2c =====

void FUN_00853a2c(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00853aac  FUN_00853aac =====

void FUN_00853aac(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (((ulong)puVar2[-1] < 0xfffffffffffffffe) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00853b30  FUN_00853b30 =====

void FUN_00853b30(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00853b50 to 00853b57 has its CatchHandler @ 00853b88 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00853ba8  FUN_00853ba8 =====

void FUN_00853ba8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00853bc8 to 00853bcf has its CatchHandler @ 00853c00 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00853c20  FUN_00853c20 =====

void FUN_00853c20(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00853c40 to 00853c47 has its CatchHandler @ 00853c78 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00853c98  FUN_00853c98 =====

void FUN_00853c98(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  lVar3 = *param_1;
  param_1[2] = 0;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (*param_1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 00853ce0  FUN_00853ce0 =====

void FUN_00853ce0(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)param_1[5];
  puVar1 = (undefined8 *)param_1[6];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00853d00 to 00853d07 has its CatchHandler @ 00853d54 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00853da4  FUN_00853da4 =====

void FUN_00853da4(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (4 < uVar1) {
    uVar1 = 1;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == 1) {
                    /* try { // try from 00853dd4 to 00853ddf has its CatchHandler @ 00853e34 */
      FUN_008543c4(param_1 + 3);
      uVar1 = *param_1;
      goto joined_r0x00853e0c;
    }
  }
  else if ((uVar1 != 2) && (uVar1 == 3)) {
    return;
  }
  param_1 = param_1 + 1;
  uVar1 = *param_1;
joined_r0x00853e0c:
  if ((uVar1 != 0xffffffffffffffff) && (uVar1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00853e5c  FUN_00853e5c =====

void FUN_00853e5c(long *param_1)

{
  undefined1 *puVar1;
  void *__ptr;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (((ulong)param_1[0xc] < 0xfffffffffffffffe) && (param_1[0xc] != 0)) {
    free((void *)param_1[0xd]);
  }
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  lVar3 = *param_1;
  param_1[2] = 0;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  lVar3 = param_1[6];
  if (lVar3 != -1) {
    __ptr = (void *)param_1[7];
    lVar4 = param_1[8];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar5[-1] != -1) && (puVar5[-1] != 0)) {
          free((void *)*puVar5);
        }
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + 3;
      } while (lVar4 != 0);
    }
    if (lVar3 != 0) {
      free(__ptr);
    }
  }
  if ((param_1[9] != -1) && (param_1[9] != 0)) {
    free((void *)param_1[10]);
  }
  if (param_1[3] == 0) {
    return;
  }
  free((void *)param_1[4]);
  return;
}


// ===== 00853f88  FUN_00853f88 =====

void FUN_00853f88(undefined1 *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  switch(*param_1) {
  case 0:
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    free(*(void **)(param_1 + 0x10));
    return;
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    goto switchD_00853fc0_caseD_1;
  case 3:
  case 5:
  case 0xc:
  case 0xd:
    lVar2 = *(long *)(param_1 + 8);
    break;
  case 4:
    __ptr = *(void **)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar3[-1] != 0) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    lVar2 = *(long *)(param_1 + 8);
    goto joined_r0x008540a8;
  case 0xf:
    __ptr = *(void **)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18) + 1;
    pvVar1 = __ptr;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00854084 to 00854087 has its CatchHandler @ 008540d0 */
      FUN_007ff534(pvVar1);
      pvVar1 = (void *)((long)pvVar1 + 0x70);
    }
    lVar2 = *(long *)(param_1 + 8);
joined_r0x008540a8:
    if (lVar2 == 0) {
      return;
    }
    free(__ptr);
    return;
  default:
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == -1) {
      return;
    }
  }
  if (lVar2 != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
switchD_00853fc0_caseD_1:
  return;
}


// ===== 00854118  FUN_00854118 =====

void FUN_00854118(ulong *param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      __ptr = (void *)param_1[2];
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        puVar3 = (undefined8 *)((long)__ptr + 8);
        do {
          if (puVar3[-1] != 0) {
            free((void *)*puVar3);
          }
          uVar1 = uVar1 - 1;
          puVar3 = puVar3 + 3;
        } while (uVar1 != 0);
      }
      if (param_1[1] == 0) {
        return;
      }
      free(__ptr);
      return;
    }
    if (uVar2 != 2) {
      if (uVar1 == 0xffffffffffffffff) {
        return;
      }
      if (uVar1 == 0) {
        return;
      }
      free((void *)param_1[1]);
      return;
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  free((void *)param_1[2]);
  return;
}


// ===== 008541fc  FUN_008541fc =====

void FUN_008541fc(long *param_1)

{
  ulong *__ptr;
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  
  __ptr = (ulong *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar5 = 0;
    puVar6 = __ptr;
    do {
      uVar2 = *puVar6;
      uVar3 = uVar2 ^ 0x8000000000000000;
      if (3 < uVar3) {
        uVar3 = 4;
      }
      if ((long)uVar3 < 2) {
        if (uVar3 != 0) {
          if (uVar3 == 1) goto LAB_00854284;
LAB_00854260:
          puVar1 = puVar6;
          if (uVar2 != 0xffffffffffffffff) goto joined_r0x0085426c;
        }
      }
      else if (uVar3 != 2) {
        if (uVar3 != 3) goto LAB_00854260;
LAB_00854284:
        uVar2 = puVar6[1];
        puVar1 = __ptr + lVar5 * 4 + 1;
joined_r0x0085426c:
        if (uVar2 != 0) {
          free((void *)puVar1[1]);
        }
      }
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 008542e0  FUN_008542e0 =====

void FUN_008542e0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 ^ 0x8000000000000000;
  if (3 < uVar2) {
    uVar2 = 4;
  }
  if ((long)uVar2 < 2) {
    if (uVar2 == 0) {
      return;
    }
    if (uVar2 == 1) {
LAB_00854328:
      param_1 = param_1 + 1;
      uVar1 = *param_1;
      goto joined_r0x0085432c;
    }
  }
  else {
    if (uVar2 == 2) {
      return;
    }
    if (uVar2 == 3) goto LAB_00854328;
  }
  if (uVar1 == 0xffffffffffffffff) {
    return;
  }
joined_r0x0085432c:
  if (uVar1 == 0) {
    return;
  }
  free((void *)param_1[1]);
  return;
}


// ===== 00854340  FUN_00854340 =====

void FUN_00854340(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
                    /* try { // try from 00854364 to 0085436b has its CatchHandler @ 0085439c */
  FUN_00808fd4(param_1 + 3);
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 008543c4  FUN_008543c4 =====

void FUN_008543c4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  
  uVar6 = *param_1;
  uVar8 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar8 = 1;
  }
  switch(uVar8) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
    break;
  case 1:
    if (uVar6 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    lVar9 = param_1[8] + 1;
    uVar8 = param_1[7];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 00854554 to 00854557 has its CatchHandler @ 00854928 */
      FUN_007feea4(uVar8);
      uVar8 = uVar8 + 0x40;
    }
    if (param_1[6] != 0) {
      free((void *)param_1[7]);
      return;
    }
    break;
  case 2:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 00854630 to 00854633 has its CatchHandler @ 008548bc */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
    goto LAB_0085463c;
  case 3:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar11 = (ulong *)param_1[2];
      lVar9 = 0;
      puVar12 = puVar11;
      do {
        uVar5 = *puVar12;
        uVar6 = uVar5 ^ 0x8000000000000000;
        if (3 < uVar6) {
          uVar6 = 4;
        }
        if ((long)uVar6 < 2) {
          if (uVar6 != 0) {
            if (uVar6 == 1) goto LAB_00854700;
LAB_008546dc:
            puVar3 = puVar12;
            if (uVar5 != 0xffffffffffffffff) goto joined_r0x0085470c;
          }
        }
        else if (uVar6 != 2) {
          if (uVar6 != 3) goto LAB_008546dc;
LAB_00854700:
          uVar5 = puVar12[1];
          puVar3 = puVar11 + lVar9 * 4 + 1;
joined_r0x0085470c:
          if (uVar5 != 0) {
            free((void *)puVar3[1]);
          }
        }
        uVar8 = uVar8 - 1;
        puVar12 = puVar12 + 4;
        lVar9 = lVar9 + 1;
      } while (uVar8 != 0);
    }
    if (param_1[1] != 0) {
      pvVar4 = (void *)param_1[2];
LAB_008547cc:
      free(pvVar4);
      return;
    }
    break;
  case 4:
    uVar8 = param_1[3];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[2] + 8);
      do {
        if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[1] == 0) {
      return;
    }
    goto LAB_00854648;
  case 5:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
                    /* try { // try from 0085478c to 00854793 has its CatchHandler @ 00854894 */
    FUN_00808fd4(param_1 + 4);
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
      return;
    }
    break;
  default:
    uVar8 = param_1[1];
    if (uVar8 == 0xffffffffffffffff) {
      return;
    }
    goto joined_r0x0085466c;
  case 7:
    if (param_1[1] == 0xffffffffffffffff) {
      uVar8 = param_1[2];
      if (uVar8 == 0xffffffffffffffff) {
        return;
      }
      lVar9 = 0x10;
    }
    else {
      uVar8 = param_1[5];
      if (uVar8 == 0xffffffffffffffff) {
        lVar9 = 8;
      }
      else {
        if (uVar8 != 0) {
          free((void *)param_1[6]);
        }
        if (param_1[8] != 0) {
          free((void *)param_1[9]);
        }
        lVar9 = 0x30;
      }
      plVar7 = (long *)((long)(param_1 + 5) + lVar9);
      if (*plVar7 != 0) {
        free((void *)plVar7[1]);
      }
      uVar8 = param_1[1];
      lVar9 = 8;
    }
    if (uVar8 != 0) {
      free(*(void **)((long)param_1 + lVar9 + 8));
      return;
    }
    break;
  case 8:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
    }
    uVar8 = param_1[9];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[8] + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 3;
      } while (uVar8 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    pvVar4 = (void *)param_1[8];
    goto LAB_0085464c;
  case 9:
    FUN_008549f4(param_1 + 1);
    return;
  case 10:
    uVar8 = param_1[1];
joined_r0x0085466c:
    if (uVar8 != 0) {
      free((void *)param_1[2]);
      return;
    }
    break;
  case 0xe:
    plVar7 = (long *)param_1[1];
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(param_1 + 1);
      return;
    }
    break;
  case 0xf:
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
    }
    plVar7 = (long *)param_1[7];
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00854454 to 00854457 has its CatchHandler @ 00854880 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow();
    }
    uVar8 = param_1[6];
    if (uVar8 != 0) {
      puVar10 = (undefined8 *)(param_1[5] + 8);
      do {
        if (((ulong)puVar10[-1] < 0xfffffffffffffffe) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 4;
      } while (uVar8 != 0);
    }
    if (param_1[4] != 0) {
      pvVar4 = (void *)param_1[5];
      goto LAB_008547cc;
    }
    break;
  case 0x10:
    lVar9 = param_1[3] + 1;
    uVar8 = param_1[2];
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
                    /* try { // try from 00854610 to 00854613 has its CatchHandler @ 008548e0 */
      FUN_007ff230(uVar8);
      uVar8 = uVar8 + 0x28;
    }
LAB_0085463c:
    if (param_1[1] != 0) {
LAB_00854648:
      pvVar4 = (void *)param_1[2];
LAB_0085464c:
      free(pvVar4);
      return;
    }
  }
  return;
}


// ===== 00854974  FUN_00854974 =====

void FUN_00854974(long *param_1)

{
  long lVar1;
  
  if (*param_1 == -1) {
    param_1 = param_1 + 1;
    lVar1 = *param_1;
  }
  else {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    param_1 = param_1 + 6;
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 008549f4  FUN_008549f4 =====

void FUN_008549f4(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  __ptr = (void *)param_1[4];
  lVar2 = param_1[5] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00854a38 to 00854a3b has its CatchHandler @ 00854a80 */
    FUN_007ff374(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x20);
  }
  if (param_1[3] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00854ac4  FUN_00854ac4 =====

void FUN_00854ac4(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00854ae4 to 00854aeb has its CatchHandler @ 00854b24 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 00854b00 to 00854b07 has its CatchHandler @ 00854b54 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 3);
                    /* try { // try from 00854b08 to 00854b0f has its CatchHandler @ 00854b4c */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0xc);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x15);
  return;
}


// ===== 00854b74  FUN_00854b74 =====

void FUN_00854b74(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00854b94 to 00854b9b has its CatchHandler @ 00854bcc */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 00854bb0 to 00854bb7 has its CatchHandler @ 00854bf4 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 3);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0xc);
  return;
}


// ===== 00854c0c  FUN_00854c0c =====

void FUN_00854c0c(long param_1)

{
                    /* try { // try from 00854c1c to 00854c23 has its CatchHandler @ 00854c34 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0xf0);
  FUN_00854ac4(param_1);
  return;
}


// ===== 00854c4c  FUN_00854c4c =====

void FUN_00854c4c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[10];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00854c80 to 00854c83 has its CatchHandler @ 00854d1c */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
  lVar5 = param_1[2] + 1;
  lVar3 = param_1[1];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 00854c98 to 00854c9b has its CatchHandler @ 00854d2c */
    FUN_007ff230(lVar3);
    lVar3 = lVar3 + 0x28;
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] == -2) {
    if (param_1[4] != 0) {
      free((void *)param_1[5]);
      return;
    }
    return;
  }
  FUN_00853ce0();
  return;
}


// ===== 00854d80  FUN_00854d80 =====

void FUN_00854d80(long *param_1)

{
  if (*param_1 != -2) {
    FUN_00853ce0();
    return;
  }
  if (param_1[1] != 0) {
    free((void *)param_1[2]);
    return;
  }
  return;
}


// ===== 00854da8  FUN_00854da8 =====

void FUN_00854da8(long param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  plVar3 = *(long **)(param_1 + 0x50);
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00854dd8 to 00854ddb has its CatchHandler @ 00854e90 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 00854ddc to 00854de3 has its CatchHandler @ 00854ecc */
  FUN_00853ce0(param_1);
  __ptr = *(void **)(param_1 + 0x60);
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  pcVar4 = (code *)*puVar7;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00854df0 to 00854df7 has its CatchHandler @ 00854ea0 */
    (*pcVar4)(__ptr);
  }
  if (puVar7[1] != 0) {
    free(__ptr);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != -1) {
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
      do {
        if ((puVar7[-1] != -1) && (puVar7[-1] != 0)) {
          free((void *)*puVar7);
        }
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 3;
      } while (lVar6 != 0);
      lVar5 = *(long *)(param_1 + 0x38);
    }
    if (lVar5 != 0) {
      free(*(void **)(param_1 + 0x40));
      return;
    }
  }
  return;
}


// ===== 00854eec  FUN_00854eec =====

void FUN_00854eec(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x38);
  do {
    lVar6 = *plVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar3) {
      *plVar4 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00854f18 to 00854f1b has its CatchHandler @ 00854f60 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 00854f1c to 00854f23 has its CatchHandler @ 00854f94 */
  FUN_00853ce0(param_1);
  __ptr = *(void **)(param_1 + 0x48);
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00854f30 to 00854f37 has its CatchHandler @ 00854f70 */
    (*pcVar5)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00854fac  FUN_00854fac =====

void FUN_00854fac(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00854fd8 to 00854fdb has its CatchHandler @ 008550ac */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  FUN_00853ce0(param_1);
  return;
}


// ===== 00855184  FUN_00855184 =====

void FUN_00855184(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 008551b0 to 008551b3 has its CatchHandler @ 008551d4 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 008551b4 to 008551bb has its CatchHandler @ 008551f8 */
  FUN_00853ce0(param_1);
                    /* try { // try from 008551bc to 008551c3 has its CatchHandler @ 008551e4 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x138);
  FUN_00854ac4(param_1 + 0x48);
  return;
}


// ===== 00855210  FUN_00855210 =====

void FUN_00855210(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0085523c to 0085523f has its CatchHandler @ 00855260 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 00855240 to 00855247 has its CatchHandler @ 00855284 */
  FUN_00853ce0(param_1);
                    /* try { // try from 00855248 to 0085524f has its CatchHandler @ 00855270 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x138);
  FUN_00854ac4(param_1 + 0x48);
  return;
}


// ===== 0085529c  FUN_0085529c =====

void FUN_0085529c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 008552ac to 008552b3 has its CatchHandler @ 008552cc */
  FUN_00854c4c(__ptr);
  free(__ptr);
  return;
}


// ===== 008552e8  <rustls::tls12::rustls::tls12::Tls12CipherSuite>::resolve_sig_schemes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::tls12::rustls::tls12::Tls12CipherSuite>::resolve_sig_schemes */

void __rustcall
<rustls::tls12::rustls::tls12::Tls12CipherSuite>::resolve_sig_schemes
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long local_30;
  long lStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = *(long *)(param_1 + 0x10);
  lStack_28 = local_30 + *(long *)(param_1 + 0x18) * 4;
  local_20 = param_2;
  uStack_18 = param_3;
  FUN_008002c4(&local_30);
  return;
}


// ===== 00855318  <rustls::tls12::rustls::tls12::Tls12CipherSuite>::fips =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::tls12::rustls::tls12::Tls12CipherSuite>::fips */

undefined8 __rustcall <rustls::tls12::rustls::tls12::Tls12CipherSuite>::fips(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(param_1[7] + 0x38))(param_1[6]);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(param_1[1] + 0x28))(*param_1), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00855358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[5] + 0x38))(param_1[4]);
    return uVar2;
  }
  return 0;
}


// ===== 0085536c  FUN_0085536c =====

void FUN_0085536c(size_t *param_1,size_t *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  size_t sVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  size_t local_e0;
  size_t sStack_d8;
  size_t sStack_d0;
  size_t sStack_c8;
  size_t local_c0;
  size_t sStack_b8;
  size_t sStack_b0;
  size_t sStack_a8;
  size_t local_a0;
  size_t sStack_98;
  size_t sStack_90;
  size_t sStack_88;
  size_t local_80;
  size_t sStack_78;
  size_t sStack_70;
  size_t sStack_68;
  size_t local_60;
  size_t sStack_58;
  size_t sStack_50;
  size_t sStack_48;
  
  sVar5 = *param_2;
  uVar3 = sVar5 ^ 0x8000000000000000;
  if (4 < uVar3) {
    uVar3 = 1;
  }
  if ((long)uVar3 < 2) {
    if (uVar3 == 0) {
      sVar7 = param_2[0x11];
      sVar4 = param_2[0x10];
      sVar9 = param_2[0x13];
      sVar8 = param_2[0x12];
      sVar10 = param_2[0x14];
      sVar5 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = sVar10;
      param_1[0x11] = sVar7;
      param_1[0x10] = sVar4;
      param_1[0x13] = sVar9;
      param_1[0x12] = sVar8;
      sVar7 = param_2[9];
      sVar4 = param_2[8];
      sVar9 = param_2[0xb];
      sVar8 = param_2[10];
      param_1[0x16] = sVar5;
      param_1[9] = sVar7;
      param_1[8] = sVar4;
      param_1[0xb] = sVar9;
      param_1[10] = sVar8;
      sVar7 = param_2[0xc];
      sVar4 = param_2[0xf];
      sVar5 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = sVar7;
      param_1[0xf] = sVar4;
      param_1[0xe] = sVar5;
      sVar7 = *param_2;
      sVar4 = param_2[3];
      sVar5 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = sVar7;
      param_1[3] = sVar4;
      param_1[2] = sVar5;
      sVar7 = param_2[4];
      sVar4 = param_2[7];
      sVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = sVar7;
      param_1[7] = sVar4;
      param_1[6] = sVar5;
      return;
    }
    puVar1 = (undefined1 *)param_2[1];
                    /* try { // try from 00855484 to 00855493 has its CatchHandler @ 00855610 */
    FUN_007ef7dc(&local_e0,param_2 + 3);
    sVar4 = param_2[2];
    puVar2 = puVar1;
    if (sVar5 == 0xffffffffffffffff) {
      if ((long)sVar4 < 0) {
        uVar6 = 0;
LAB_00855560:
                    /* try { // try from 00855560 to 0085556b has its CatchHandler @ 00855638 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar6,sVar4);
      }
      if (sVar4 == 0) {
        puVar2 = &DAT_00000001;
        sVar5 = 0;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar6 = 1;
        puVar2 = (undefined1 *)FUN_004b25a4(sVar4,1);
        if (puVar2 == (undefined1 *)0x0) goto LAB_00855560;
        memcpy(puVar2,puVar1,sVar4);
        sVar5 = sVar4;
      }
    }
    *param_1 = sVar5;
    param_1[1] = (size_t)puVar2;
    param_1[2] = sVar4;
    param_1[0x10] = sStack_78;
    param_1[0xf] = local_80;
    param_1[0x12] = sStack_68;
    param_1[0x11] = sStack_70;
    param_1[0x14] = sStack_58;
    param_1[0x13] = local_60;
    param_1[0x16] = sStack_48;
    param_1[0x15] = sStack_50;
    param_1[8] = sStack_b8;
    param_1[7] = local_c0;
    param_1[10] = sStack_a8;
    param_1[9] = sStack_b0;
    param_1[0xc] = sStack_98;
    param_1[0xb] = local_a0;
    param_1[0xe] = sStack_88;
    param_1[0xd] = sStack_90;
    param_1[4] = sStack_d8;
    param_1[3] = local_e0;
    param_1[6] = sStack_c8;
    param_1[5] = sStack_d0;
    return;
  }
  if (uVar3 == 2) {
    puVar2 = (undefined1 *)param_2[2];
    sVar4 = param_2[3];
    sVar5 = param_2[1];
    puVar1 = puVar2;
    if (param_2[1] == 0xffffffffffffffff) {
      if ((long)sVar4 < 0) goto LAB_00855548;
      if (sVar4 == 0) {
        sVar5 = 0;
        puVar1 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar6 = 1;
        puVar1 = (undefined1 *)FUN_004b25a4(sVar4,1);
        if (puVar1 == (undefined1 *)0x0) goto LAB_0085554c;
        memcpy(puVar1,puVar2,sVar4);
        sVar5 = sVar4;
      }
    }
    param_1[2] = (size_t)puVar1;
    param_1[3] = sVar4;
    sVar4 = 0x8000000000000002;
  }
  else {
    if (uVar3 == 3) {
      *param_1 = 0x8000000000000003;
      return;
    }
    puVar2 = (undefined1 *)param_2[2];
    sVar4 = param_2[3];
    sVar5 = param_2[1];
    puVar1 = puVar2;
    if (param_2[1] == 0xffffffffffffffff) {
      if ((long)sVar4 < 0) {
LAB_00855548:
        uVar6 = 0;
LAB_0085554c:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar6,sVar4);
      }
      if (sVar4 == 0) {
        sVar5 = 0;
        puVar1 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar6 = 1;
        puVar1 = (undefined1 *)FUN_004b25a4(sVar4,1);
        if (puVar1 == (undefined1 *)0x0) goto LAB_0085554c;
        memcpy(puVar1,puVar2,sVar4);
        sVar5 = sVar4;
      }
    }
    param_1[2] = (size_t)puVar1;
    param_1[3] = sVar4;
    sVar4 = 0x8000000000000004;
  }
  *param_1 = sVar4;
  param_1[1] = sVar5;
  return;
}


// ===== 00855650  <rustls::msgs::message::rustls::msgs::message::MessagePayload>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::rustls::msgs::message::MessagePayload>::new */

void __rustcall
<rustls::msgs::message::rustls::msgs::message::MessagePayload>::new
          (undefined8 *param_1,byte param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5
          ,byte *param_6,ulong param_7)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 in_x10;
  undefined4 uVar6;
  undefined *in_x11;
  byte *local_e8;
  ulong local_e0;
  ulong local_d8;
  char local_d0;
  byte bStack_cf;
  byte bStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_14;
  undefined1 local_12;
  
  local_d8 = 0;
  local_e8 = param_6;
  local_e0 = param_7;
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_7 == 0) {
        uVar5 = 0xc;
        in_x11 = &DAT_002ff13f;
        in_x10 = 2;
      }
      else if (*param_6 == 1) {
        if (param_7 == 1) {
          *param_1 = 0x8000000000000003;
          return;
        }
        uVar5 = 0xf;
        in_x11 = &DAT_002ff34f;
        in_x10 = 0x17;
      }
      else {
        uVar5 = 2;
      }
      *(undefined1 *)(param_1 + 1) = uVar5;
      param_1[2] = in_x11;
      param_1[3] = in_x10;
      *param_1 = 0xfffffffffffffffe;
      return;
    }
    if (param_2 == 1) {
      if (param_7 == 0) {
        uVar6 = 0;
        local_d0 = '\f';
        puStack_c8 = &DAT_002f82f1;
        uStack_c0 = 10;
      }
      else {
        bVar2 = *param_6;
        local_d8 = 1;
        uVar4 = 1;
        if (bVar2 != 2) {
          uVar4 = 2;
        }
        uVar1 = 0;
        if (bVar2 != 1) {
          uVar1 = uVar4;
        }
        <rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::read(&local_d0,&local_e8);
        if (local_d0 == -1) {
          if (local_e0 <= local_d8) {
            *param_1 = 0x8000000000000000;
            *(uint *)(param_1 + 1) =
                 uVar1 | (uint)bVar2 << 8 | (uint)bStack_cf << 0x10 | (uint)bStack_ce << 0x18;
            return;
          }
          uVar6 = 0;
          local_d0 = '\x0f';
          puStack_c8 = &DAT_002ff9ef;
          uStack_c0 = 0x13;
        }
        else {
          local_14 = uStack_cb;
          uVar6 = CONCAT13(uStack_cc,CONCAT12(uStack_cd,CONCAT11(bStack_ce,bStack_cf)));
          local_12 = uStack_c9;
        }
      }
      *(char *)(param_1 + 1) = local_d0;
      *(undefined4 *)((long)param_1 + 9) = uVar6;
      *(undefined2 *)((long)param_1 + 0xd) = local_14;
      *(undefined1 *)((long)param_1 + 0xf) = local_12;
      param_1[2] = puStack_c8;
      param_1[3] = uStack_c0;
      *param_1 = 0xfffffffffffffffe;
      return;
    }
  }
  else {
    if (param_2 == 2) {
      FUN_007efca4(&local_d0,&local_e8,param_4,param_5);
      if (CONCAT17(uStack_c9,
                   CONCAT25(uStack_cb,
                            CONCAT14(uStack_cc,
                                     CONCAT13(uStack_cd,
                                              CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0))))))
          != -1) {
        param_1[1] = param_6;
        param_1[2] = param_7;
        *param_1 = 0xffffffffffffffff;
        param_1[0x10] = uStack_68;
        param_1[0xf] = local_70;
        param_1[0x12] = uStack_58;
        param_1[0x11] = uStack_60;
        param_1[0x14] = uStack_48;
        param_1[0x13] = local_50;
        param_1[0x16] = uStack_38;
        param_1[0x15] = uStack_40;
        param_1[8] = uStack_a8;
        param_1[7] = local_b0;
        param_1[10] = uStack_98;
        param_1[9] = uStack_a0;
        param_1[0xc] = uStack_88;
        param_1[0xb] = local_90;
        param_1[0xe] = uStack_78;
        param_1[0xd] = uStack_80;
        param_1[4] = puStack_c8;
        param_1[3] = CONCAT17(uStack_c9,
                              CONCAT25(uStack_cb,
                                       CONCAT14(uStack_cc,
                                                CONCAT13(uStack_cd,
                                                         CONCAT12(bStack_ce,
                                                                  CONCAT11(bStack_cf,local_d0))))));
        param_1[6] = local_b8;
        param_1[5] = uStack_c0;
        return;
      }
      *param_1 = 0xfffffffffffffffe;
      param_1[2] = uStack_c0;
      param_1[1] = puStack_c8;
      param_1[3] = local_b8;
      return;
    }
    if (param_2 == 3) {
      param_1[2] = param_6;
      param_1[3] = param_7;
      uVar3 = _DAT_0029f530;
      param_1[1] = _UNK_0029f538;
      *param_1 = uVar3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 0xfffffffffffffffe;
  return;
}


// ===== 00855928  <rustls::msgs::message::rustls::msgs::message::MessagePayload>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::rustls::msgs::message::MessagePayload>::encode */

void __rustcall
<rustls::msgs::message::rustls::msgs::message::MessagePayload>::encode(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (4 < uVar1) {
    uVar1 = 1;
  }
  if ((long)uVar1 < 2) {
    if (uVar1 == 0) {
      <rustls::msgs::alert::AlertMessagePayload_as_rustls::msgs::codec::Codec>::encode
                (param_1 + 1,param_2);
      return;
    }
    lVar2 = param_2[2];
    pvVar3 = (void *)param_1[1];
    uVar1 = param_1[2];
    if (uVar1 <= (ulong)(*param_2 - lVar2)) goto LAB_008559d4;
LAB_00855a64:
    FUN_00874c84(param_2,lVar2,uVar1,1,1);
    lVar2 = param_2[2];
  }
  else {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        lVar2 = param_2[2];
        if (lVar2 == *param_2) {
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
        }
        *(undefined1 *)(param_2[1] + lVar2) = 1;
        param_2[2] = lVar2 + 1;
        return;
      }
      lVar2 = param_2[2];
      pvVar3 = (void *)param_1[2];
      uVar1 = param_1[3];
      if ((ulong)(*param_2 - lVar2) < uVar1) {
        FUN_00874c84(param_2,lVar2,uVar1,1,1);
        lVar2 = param_2[2];
      }
      else if (uVar1 == 0) goto LAB_00855a34;
      memcpy((void *)(param_2[1] + lVar2),pvVar3,uVar1);
LAB_00855a34:
      param_2[2] = lVar2 + uVar1;
      return;
    }
    lVar2 = param_2[2];
    pvVar3 = (void *)param_1[2];
    uVar1 = param_1[3];
    if ((ulong)(*param_2 - lVar2) < uVar1) goto LAB_00855a64;
LAB_008559d4:
    if (uVar1 == 0) goto LAB_008559f0;
  }
  memcpy((void *)(param_2[1] + lVar2),pvVar3,uVar1);
  lVar2 = param_2[2];
LAB_008559f0:
  param_2[2] = lVar2 + uVar1;
  return;
}


// ===== 00855aa8  <rustls::msgs::message::rustls::msgs::message::MessagePayload>::handshake =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::rustls::msgs::message::MessagePayload>::handshake */

void __rustcall
<rustls::msgs::message::rustls::msgs::message::MessagePayload>::handshake
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 auStack_38 [3];
  
  local_50 = 0;
  uStack_48 = 1;
  local_40 = 0;
  auStack_38[0] = 0x8000000000000000;
                    /* try { // try from 00855ad0 to 00855adb has its CatchHandler @ 00855b38 */
  FUN_007f0930(param_2,&local_50,auStack_38);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  param_1[2] = local_40;
  param_1[0x10] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  uVar3 = param_2[0x10];
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x14] = param_2[0x11];
  param_1[0x13] = uVar3;
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[5];
  param_1[7] = uVar3;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  uVar3 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[0xc] = param_2[9];
  param_1[0xb] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[4] = param_2[1];
  param_1[3] = uVar3;
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  return;
}


// ===== 00855b64  FUN_00855b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00855b64(ulong *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 long param_6,undefined8 param_7,long param_8,long *param_9,byte param_10)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined2 uVar8;
  void *pvVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong *puVar13;
  undefined2 extraout_w1;
  long lVar14;
  long *plVar15;
  void *pvVar16;
  size_t sVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  long lVar20;
  short *psVar21;
  char *pcVar22;
  ulong uVar23;
  char *pcVar24;
  long lVar25;
  size_t *psVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  code *pcVar32;
  long **pplVar33;
  long lVar34;
  size_t __n;
  undefined1 auVar35 [16];
  long *local_478;
  ulong local_460;
  undefined1 *puStack_458;
  long lStack_450;
  long *local_448;
  void *pvStack_440;
  undefined8 local_438;
  ulong uStack_430;
  long *local_428;
  char *pcStack_420;
  char *local_418;
  char *pcStack_410;
  long *local_408;
  char *pcStack_400;
  char *local_3f8;
  ulong uStack_3f0;
  ulong local_3e8;
  ulong uStack_3e0;
  ulong local_3d8;
  undefined2 local_3d0;
  undefined6 uStack_3ce;
  undefined2 uStack_3c8;
  undefined6 uStack_3c6;
  undefined2 local_3c0;
  undefined6 uStack_3be;
  undefined7 uStack_3b8;
  undefined1 uStack_3b1;
  undefined7 local_3b0;
  undefined1 uStack_3a9;
  undefined7 uStack_3a8;
  undefined1 uStack_3a1;
  long *local_3a0;
  char *pcStack_398;
  char *local_390;
  char *pcStack_388;
  long *local_380;
  char *pcStack_378;
  char *local_370;
  ulong uStack_368;
  ulong local_360;
  ulong uStack_358;
  ulong local_350;
  char *pcStack_348;
  char *local_340;
  long lStack_338;
  long local_330;
  long lStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong local_310;
  undefined8 uStack_308;
  ulong local_2f8;
  void *local_2f0;
  long local_2e8;
  ulong local_2e0;
  long local_2d8;
  ulong local_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  ulong local_2b0;
  undefined1 *puStack_2a8;
  char *local_2a0;
  undefined7 *local_298;
  char *local_290;
  char *pcStack_288;
  char *local_280;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  ulong uStack_260;
  ulong local_258;
  ulong uStack_250;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 local_240;
  undefined1 local_23f;
  undefined1 local_23e;
  undefined1 local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined1 local_23a;
  undefined1 local_239;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  undefined1 local_234;
  undefined1 local_233;
  undefined1 local_232;
  undefined1 local_231;
  undefined1 local_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  undefined1 uStack_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined1 uStack_224;
  undefined1 uStack_223;
  undefined1 uStack_222;
  undefined1 uStack_221;
  undefined1 local_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined1 uStack_21d;
  undefined1 uStack_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  ulong local_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined1 uStack_1ef;
  undefined2 uStack_1ee;
  undefined4 uStack_1ec;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  char *pcStack_1e0;
  long *local_1d8;
  char *pcStack_1d0;
  char *local_1c8;
  char *pcStack_1c0;
  long *local_1b8;
  char *pcStack_1b0;
  char *local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  undefined8 uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  char *pcStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong local_138;
  undefined1 local_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  undefined1 local_124;
  undefined1 local_120;
  undefined1 local_11c;
  undefined1 local_118;
  undefined1 local_114;
  undefined1 local_110;
  undefined1 local_10c;
  undefined1 local_108;
  undefined1 local_104;
  undefined1 local_100;
  undefined1 local_fc;
  undefined1 local_f8;
  undefined1 local_f4;
  undefined1 local_f0;
  undefined1 local_ec;
  undefined1 local_e8;
  undefined1 local_e4;
  undefined1 local_e0;
  undefined1 local_dc;
  undefined1 local_d8;
  undefined1 local_d4;
  undefined1 local_d0;
  undefined1 local_cc;
  undefined1 local_c8;
  undefined1 local_c4;
  undefined1 local_c0;
  undefined1 local_bc;
  undefined1 local_b8;
  undefined1 local_b4;
  undefined1 local_b0;
  undefined1 local_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined1 local_98;
  undefined1 local_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined1 local_7c;
  undefined1 local_78;
  undefined1 local_74;
  
                    /* try { // try from 00855ba8 to 00855bb3 has its CatchHandler @ 00857cd4 */
  FUN_008702dc(param_2 + 3,param_5);
  lVar27 = *(long *)(param_6 + 0x38);
  lVar20 = *(long *)(param_6 + 0x40);
  lVar14 = lVar20 << 6;
  if (lVar20 != 0) {
    psVar21 = (short *)(lVar27 + 0x20);
    lVar25 = lVar14;
    do {
      uVar23 = *(ulong *)(psVar21 + -0x10) ^ 0x8000000000000000;
      if (0x16 < uVar23) {
        uVar23 = 0x13;
      }
      if (((1L << (uVar23 & 0x3f) & 0x3ff7ffU) == 0) && ((uVar23 != 0x16 || (*psVar21 == 0x15)))) {
        *(undefined1 *)(param_2 + 0x19) = 1;
        goto LAB_00855c90;
      }
      lVar25 = lVar25 + -0x40;
      psVar21 = psVar21 + 0x20;
    } while (lVar25 != 0);
  }
  if ((*(byte *)(param_2[10] + 0xf7) & 1) == 0) {
LAB_00855c90:
    pcVar28 = "";
    if (lVar20 != 0) {
      psVar21 = (short *)(lVar27 + 0x20);
      lVar25 = lVar14;
      do {
        uVar23 = *(ulong *)(psVar21 + -0x10) ^ 0x8000000000000000;
        if (0x16 < uVar23) {
          uVar23 = 0x13;
        }
        if ((0x14 < uVar23 - 1) && ((uVar23 != 0x16 || (*psVar21 == 0xb)))) {
          if (*(ulong *)(psVar21 + -0x10) == 0x8000000000000000) {
            if (*(long *)(psVar21 + -4) == 0) goto LAB_00855d24;
            pcVar28 = *(char **)(psVar21 + -8);
            pcVar24 = pcVar28 + *(long *)(psVar21 + -4) * 2;
            pcVar12 = pcVar28;
            goto LAB_00855d14;
          }
          break;
        }
        lVar25 = lVar25 + -0x40;
        psVar21 = psVar21 + 0x20;
      } while (lVar25 != 0);
    }
    pcVar24 = 
    "internal error: entered unreachable codekey expansionmaster secretextended master secretclient finishedserver finishedassertion failed: context.len() <= 0xffffech accept confirmationmessage buffer fulltraffic updresumptionCLIENT_EARLY_TRAFFIC_SECRETCLIENT_HANDSHAKE_TRAFFIC_SECRETSERVER_HANDSHAKE_TRAFFIC_SECRETCLIENT_TRAFFIC_SECRET_0SERVER_TRAFFIC_SECRET_0EXPORTER_SECRETres binderc e trafficc hs traffics hs trafficc ap traffics ap trafficexp masterres masterderivedhrr ech accept confirmationivkeysuiteSystemRandominternal error: entered unreachable code: only called if `hybrid_component()` implemented\v"
    ;
    pcVar12 = pcVar28;
LAB_00855d14:
    do {
      pcVar22 = pcVar28 + 2;
      if (*pcVar28 == '\0') {
        if ((param_10 & 1) != 0) {
          param_2[0x18] = 0x14452474e574f44;
        }
        if (lVar20 == 0) goto LAB_00855f18;
        puVar19 = (undefined8 *)(lVar27 + 0x10);
        goto LAB_00855e58;
      }
      pcVar28 = pcVar22;
    } while (pcVar22 != pcVar24);
LAB_00855d24:
    lVar27 = *param_3;
    pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
    local_210 = 0x8000000000000000;
    local_3d0 = 0x13;
    uStack_3ce = 0x800000000000;
    uStack_208._0_4_ = 0xd0001;
                    /* try { // try from 00855d60 to 00855d6b has its CatchHandler @ 00857aec */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar27,&local_210,*(char *)(lVar27 + 0x49) == '\x02');
    uVar30 = CONCAT62(uStack_3c6,uStack_3c8);
    uVar23 = CONCAT62(uStack_3ce,local_3d0);
    uVar31 = CONCAT62(uStack_3be,local_3c0);
    *(undefined1 *)(lVar27 + 0x335) = 1;
  }
  else {
    lVar27 = *param_3;
    pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
    local_3d0 = 1;
    uStack_3ce = 0x800000000000;
    local_210 = 0x8000000000000000;
    uStack_208._0_4_ = 0x60001;
                    /* try { // try from 00855c64 to 00855c6f has its CatchHandler @ 00857c98 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar27,&local_210,*(char *)(lVar27 + 0x49) == '\x02');
    uVar30 = CONCAT62(uStack_3c6,uStack_3c8);
    uVar23 = CONCAT62(uStack_3ce,local_3d0);
    uVar31 = CONCAT62(uStack_3be,local_3c0);
    *(undefined1 *)(lVar27 + 0x335) = 1;
  }
  bVar6 = true;
  param_1[2] = uVar30;
  param_1[1] = uVar23;
  param_1[3] = uVar31;
  *param_1 = 0x8000000000000019;
  goto LAB_00855d8c;
LAB_0085657c:
  do {
    if (lVar34 == 0) break;
    if (psVar26[-2] == 0xffffffffffffffff) {
      puVar10 = (undefined1 *)psVar26[-1];
      __n = *psVar26;
      sVar17 = 0xffffffffffffffff;
    }
    else {
      __n = *psVar26;
      if ((long)__n < 0) {
        uVar11 = 0;
LAB_00856610:
                    /* try { // try from 00856610 to 00856617 has its CatchHandler @ 00857d30 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar11,__n);
      }
      if (__n == 0) {
        sVar17 = 0;
        puVar10 = &DAT_00000001;
      }
      else {
        pvVar16 = (void *)psVar26[-1];
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar10 = (undefined1 *)FUN_004b25a4(__n,1);
        uVar11 = 1;
        if (puVar10 == (undefined1 *)0x0) goto LAB_00856610;
        memcpy(puVar10,pvVar16,__n);
        sVar17 = __n;
      }
    }
    lVar29 = lVar29 + 1;
    puVar19[-1] = sVar17;
    *puVar19 = puVar10;
    psVar26 = psVar26 + 3;
    puVar19[1] = __n;
    puVar19 = puVar19 + 3;
    lVar34 = lVar34 + -0x18;
  } while (lVar20 != lVar29);
LAB_0085663c:
  local_178 = CONCAT71(local_178._1_7_,8);
  uStack_1f8 = (undefined1)lVar20;
  uStack_1f7 = (undefined7)((ulong)lVar20 >> 8);
  uStack_200 = (undefined1)uStack_3c8;
  uStack_1ff = (undefined7)(CONCAT62(uStack_3c6,uStack_3c8) >> 8);
  uStack_208._0_4_ = (uint)CONCAT62(uStack_3ce,local_3d0);
  uStack_208._4_4_ = (undefined4)((uint6)uStack_3ce >> 0x10);
  local_210 = 0x8000000000000004;
                    /* try { // try from 00856668 to 008566af has its CatchHandler @ 00857ac8 */
  FUN_0084de4c(&local_460,&local_210);
  if (local_2e0 != 0) {
    local_178 = CONCAT71(local_178._1_7_,0x10);
    uStack_200 = (undefined1)local_2e0;
    uStack_1ff = (undefined7)(local_2e0 >> 8);
    uStack_208._0_4_ = (uint)_UNK_0029f948;
    uStack_208._4_4_ = (undefined4)((ulong)_UNK_0029f948 >> 0x20);
    local_210 = _DAT_0029f940;
    uStack_1f8 = (undefined1)local_2d8;
    uStack_1f7 = (undefined7)((ulong)local_2d8 >> 8);
    FUN_0084de4c(&local_460,&local_210);
  }
  uVar23 = local_2f8;
  lVar20 = *(long *)(lVar27 + 0x30);
  lVar14 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
  pcVar32 = *(code **)(*(long *)(lVar27 + 0x38) + 0x20);
                    /* try { // try from 008566d0 to 008566d7 has its CatchHandler @ 008579a8 */
  (**(code **)(param_8 + 0x20))(&local_210,param_7);
  pcVar28 = (char *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
  pcVar24 = (char *)CONCAT71(uStack_1ff,uStack_200);
  if (local_210 == 0xffffffffffffffff) {
                    /* try { // try from 00856704 to 00856717 has its CatchHandler @ 00857964 */
    FUN_007f1200(&local_3d0,pcVar28,pcVar24);
    local_290 = (char *)0x0;
    pcStack_288 = &DAT_00000001;
    local_280 = (char *)0x0;
                    /* try { // try from 00856728 to 008567af has its CatchHandler @ 008579b0 */
    FUN_00874c84(&local_290,0,0x20,1,1);
    lVar27 = param_2[0x11];
    lVar34 = param_2[0x14];
    lVar25 = param_2[0x13];
    plVar15 = (long *)(pcStack_288 + (long)local_280);
    local_280 = (char *)((long)local_280 + 0x20);
    plVar15[1] = param_2[0x12];
    *plVar15 = lVar27;
    plVar15[3] = lVar34;
    plVar15[2] = lVar25;
    if ((ulong)((long)local_290 - (long)local_280) < 0x20) {
                    /* try { // try from 00857694 to 008576a7 has its CatchHandler @ 008579b0 */
      FUN_00874c84(&local_290,local_280,0x20,1,1);
    }
    lVar27 = param_2[0x15];
    lVar34 = param_2[0x18];
    lVar25 = param_2[0x17];
    plVar15 = (long *)(pcStack_288 + (long)local_280);
    local_280 = (char *)((long)local_280 + 0x20);
    plVar15[1] = param_2[0x16];
    *plVar15 = lVar27;
    plVar15[3] = lVar34;
    plVar15[2] = lVar25;
    FUN_007f14b0(&local_3d0,&local_290);
    auVar35 = (*pcVar32)(lVar20 + (lVar14 - 1U & 0xfffffffffffffff0) + 0x10,local_2f0,local_2e8);
    puVar19 = auVar35._8_8_;
    pvVar16 = auVar35._0_8_;
    if (pvVar16 == (void *)0x0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar12 = (char *)FUN_004b25a4(0x18,1);
      uVar4 = s_incompatible_sig_002feb82._8_8_;
      uVar11 = s_incompatible_sig_002feb82._0_8_;
      if (pcVar12 == (char *)0x0) {
                    /* try { // try from 008576ec to 008576f7 has its CatchHandler @ 008579b0 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x18);
      }
      pcVar22 = &DAT_00000018;
      uVar31 = 0x18;
      *(char (*) [8])(pcVar12 + 0x10) = s_ning_key_002feb92;
      *(undefined8 *)(pcVar12 + 8) = uVar4;
      *(undefined8 *)pcVar12 = uVar11;
      uVar30 = 0x800000000000001e;
    }
    else {
                    /* try { // try from 008567c4 to 008567eb has its CatchHandler @ 0085796c */
      uVar8 = (*(code *)puVar19[5])(pvVar16);
      (*(code *)puVar19[4])(&local_210,pvVar16,pcStack_288,local_280);
      uVar30 = local_210;
      pcVar22 = (char *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
      pcVar12 = (char *)CONCAT71(uStack_1ff,uStack_200);
      uVar31 = CONCAT71(uStack_1f7,uStack_1f8);
      if (local_210 == 0xffffffffffffffff) {
        pcStack_1d0 = (char *)CONCAT17(uStack_3b1,uStack_3b8);
        local_1d8 = (long *)CONCAT62(uStack_3be,local_3c0);
        pcStack_1c0 = (char *)CONCAT17(uStack_3a1,uStack_3a8);
        local_1c8 = (char *)CONCAT17(uStack_3a9,local_3b0);
        pcStack_1e0 = (char *)CONCAT62(uStack_3c6,uStack_3c8);
        local_1a8 = local_390;
        local_178 = CONCAT71(local_178._1_7_,9);
        local_210 = 0x8000000000000007;
        pcStack_1b0 = pcStack_398;
        local_1b8 = local_3a0;
        local_1e8 = (undefined1)local_3d0;
        uStack_1e7 = (undefined7)(CONCAT62(uStack_3ce,local_3d0) >> 8);
        uStack_1f0 = (undefined1)uVar8;
        uStack_1ef = (undefined1)((ushort)uVar8 >> 8);
                    /* try { // try from 00856b28 to 00856b37 has its CatchHandler @ 0085796c */
        uStack_1ee = extraout_w1;
        FUN_0084de4c(&local_460,&local_210);
        if ((code *)*puVar19 != (code *)0x0) {
                    /* try { // try from 00856b44 to 00856b4b has its CatchHandler @ 0085773c */
          (*(code *)*puVar19)(pvVar16);
        }
        if (puVar19[1] != 0) {
          free(pvVar16);
        }
        if (local_290 != (char *)0x0) {
          free(pcStack_288);
        }
        uVar30 = 0xffffffffffffffff;
        pcVar12 = pcVar24;
        pcVar22 = pcVar28;
        goto LAB_00856b78;
      }
      puStack_2a8 = (undefined1 *)CONCAT71(uStack_1e7,local_1e8);
      local_2b0 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
      local_2a0 = pcStack_1e0;
      if ((code *)*puVar19 != (code *)0x0) {
                    /* try { // try from 00856820 to 00856827 has its CatchHandler @ 008577f8 */
        (*(code *)*puVar19)(pvVar16);
      }
      if (puVar19[1] != 0) {
        free(pvVar16);
      }
    }
    if (local_290 != (char *)0x0) {
      free(pcStack_288);
    }
    if (CONCAT62(uStack_3ce,local_3d0) == -1) {
      pplVar33 = (long **)&uStack_3c8;
    }
    else {
      pplVar33 = &local_3a0;
      if (CONCAT62(uStack_3ce,local_3d0) != 0) {
        free((void *)CONCAT62(uStack_3c6,uStack_3c8));
      }
      if (CONCAT17(uStack_3b1,uStack_3b8) != 0) {
        free((void *)CONCAT17(uStack_3a9,local_3b0));
      }
    }
    if (*pplVar33 != (long *)0x0) {
      free(pplVar33[1]);
    }
    if (*(code **)pcVar24 != (code *)0x0) {
                    /* try { // try from 00856ab0 to 00856ab7 has its CatchHandler @ 0085785c */
      (**(code **)pcVar24)(pcVar28);
    }
    if (*(long *)(pcVar24 + 8) != 0) {
      free(pcVar28);
    }
  }
  else {
    puStack_2a8 = (undefined1 *)CONCAT71(uStack_1e7,local_1e8);
    local_2b0 = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
    uVar31 = CONCAT71(uStack_1f7,uStack_1f8);
    local_2a0 = pcStack_1e0;
    uVar30 = local_210;
    pcVar12 = pcVar24;
    pcVar22 = pcVar28;
  }
LAB_00856b78:
  if (uVar23 != 0) {
    free(local_2f0);
  }
  if (uVar30 != 0xffffffffffffffff) {
    *param_1 = uVar30;
    param_1[1] = (ulong)pcVar22;
    param_1[2] = (ulong)pcVar12;
    param_1[3] = uVar31;
    param_1[5] = (ulong)puStack_2a8;
    param_1[4] = local_2b0;
    param_1[6] = (ulong)local_2a0;
LAB_00856c28:
    if (local_460 != 0) {
      free(puStack_458);
    }
    bVar6 = false;
    goto LAB_00855d8c;
  }
                    /* try { // try from 00856bc0 to 00856bcf has its CatchHandler @ 00857980 */
  FUN_0085e7a8(&local_210,&local_460,*(undefined8 *)(*local_478 + 0xa0),
               *(undefined8 *)(*local_478 + 0xa8));
  uVar2 = (uint)uStack_208;
  if (local_210 != 0xffffffffffffffff) {
    *param_1 = local_210;
    uStack_3b8 = CONCAT43(uStack_1ec,CONCAT21(uStack_1ee,uStack_1ef));
    uVar11 = CONCAT17(uStack_200,CONCAT43(uStack_208._4_4_,uStack_208._1_3_));
    *(undefined1 *)(param_1 + 1) = (undefined1)uStack_208;
    uStack_3a9 = SUB81(pcStack_1e0,0);
    uStack_3a8 = (undefined7)((ulong)pcStack_1e0 >> 8);
    local_3b0 = uStack_1e7;
    uStack_3c8 = (undefined2)uStack_1ff;
    uStack_3c6 = (undefined6)(CONCAT17(uStack_1f8,uStack_1ff) >> 0x10);
    local_3d0 = (undefined2)((uint)uStack_208 >> 8);
    uStack_3ce = (undefined6)((ulong)uVar11 >> 0x10);
    uStack_3b1 = local_1e8;
    local_3c0 = (undefined2)uStack_1f7;
    uStack_3be = (undefined6)(CONCAT17(uStack_1f0,uStack_1f7) >> 0x10);
    *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_1f8,uStack_1ff);
    *(undefined8 *)((long)param_1 + 9) = uVar11;
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_1e8,uStack_3b8);
    *(ulong *)((long)param_1 + 0x19) = CONCAT62(uStack_3be,local_3c0);
    param_1[6] = (ulong)pcStack_1e0;
    param_1[5] = CONCAT71(uStack_1e7,local_1e8);
                    /* try { // try from 00856c18 to 00856c27 has its CatchHandler @ 00857ac8 */
    FUN_00853b30(pcVar22,pcVar12);
    goto LAB_00856c28;
  }
  local_178 = CONCAT71(local_178._1_7_,0xb);
  local_210 = 0x800000000000000b;
                    /* try { // try from 00856c60 to 00856caf has its CatchHandler @ 00857980 */
  FUN_0084de4c(&local_460,&local_210);
  pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
  uStack_200 = SUB81(puStack_458,0);
  uStack_1ff = (undefined7)((ulong)puStack_458 >> 8);
  uStack_208._0_4_ = (uint)local_460;
  uStack_208._4_4_ = (undefined4)(local_460 >> 0x20);
  uStack_1f8 = (undefined1)lStack_450;
  uStack_1f7 = (undefined7)((ulong)lStack_450 >> 8);
  local_210 = 0x8000000000000002;
  <rustls::common_state::rustls::common_state::CommonState>::send_msg(*param_3,&local_210,0);
  if ((uVar2 & 1) == 0) {
    local_210 = param_2[3];
    lVar27 = param_2[7];
    local_138 = CONCAT62(local_138._2_6_,(short)param_2[0x19]);
    local_1e8 = (undefined1)param_2[8];
    uStack_1e7 = (undefined7)((ulong)param_2[8] >> 8);
    uStack_1f0 = (undefined1)lVar27;
    uStack_1ef = (undefined1)((ulong)lVar27 >> 8);
    uStack_1ee = (undefined2)((ulong)lVar27 >> 0x10);
    uStack_1ec = (undefined4)((ulong)lVar27 >> 0x20);
    uStack_208._0_4_ = (uint)param_2[4];
    uStack_208._4_4_ = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_1f8 = (undefined1)param_2[6];
    uStack_1f7 = (undefined7)((ulong)param_2[6] >> 8);
    uStack_200 = (undefined1)param_2[5];
    uStack_1ff = (undefined7)((ulong)param_2[5] >> 8);
    local_198 = param_2[0x12];
    uStack_1a0 = param_2[0x11];
    local_188 = param_2[0x14];
    uStack_190 = param_2[0x13];
    local_178 = param_2[0x16];
    uStack_180 = param_2[0x15];
    uStack_168 = param_2[0x18];
    uStack_170 = param_2[0x17];
    uStack_140 = param_2[0x10];
    pcStack_1c0 = (char *)param_2[10];
    local_1b8 = (long *)param_2[0xb];
    pcStack_158 = (char *)param_2[0xd];
    local_160 = param_2[0xc];
    uStack_148 = param_2[0xf];
    uStack_150 = param_2[0xe];
    pcStack_1e0 = (char *)param_2[9];
    local_1d8 = (long *)0xffffffffffffffff;
    pcStack_1b0 = pcVar22;
    local_1a8 = pcVar12;
                    /* try { // try from 00856dd8 to 00856ddf has its CatchHandler @ 0085776c */
    puVar13 = (ulong *)FUN_0085e1c8(0xe0);
    ppuVar18 = &PTR_FUN_00ae7620;
    puVar13[0x15] = uStack_168;
    puVar13[0x14] = uStack_170;
    puVar13[0x17] = (ulong)pcStack_158;
    puVar13[0x16] = local_160;
    puVar13[0x19] = uStack_148;
    puVar13[0x18] = uStack_150;
    puVar13[0x1b] = local_138;
    puVar13[0x1a] = uStack_140;
    puVar13[0xd] = (ulong)local_1a8;
    puVar13[0xc] = (ulong)pcStack_1b0;
    puVar13[0xf] = local_198;
    puVar13[0xe] = uStack_1a0;
    puVar13[0x11] = local_188;
    puVar13[0x10] = uStack_190;
    puVar13[0x13] = local_178;
    puVar13[0x12] = uStack_180;
    puVar13[5] = CONCAT71(uStack_1e7,local_1e8);
    puVar13[4] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
    puVar13[7] = (ulong)local_1d8;
    puVar13[6] = (ulong)pcStack_1e0;
    puVar13[9] = (ulong)local_1c8;
    puVar13[8] = (ulong)pcStack_1d0;
    puVar13[0xb] = (ulong)local_1b8;
    puVar13[10] = (ulong)pcStack_1c0;
    puVar13[1] = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
    *puVar13 = local_210;
    puVar13[3] = CONCAT71(uStack_1f7,uStack_1f8);
    puVar13[2] = CONCAT71(uStack_1ff,uStack_200);
  }
  else {
    local_210 = param_2[3];
    lVar27 = param_2[7];
    pcStack_1e0 = (char *)param_2[9];
    local_1e8 = (undefined1)param_2[8];
    uStack_1e7 = (undefined7)((ulong)param_2[8] >> 8);
    uStack_1f0 = (undefined1)lVar27;
    uStack_1ef = (undefined1)((ulong)lVar27 >> 8);
    uStack_1ee = (undefined2)((ulong)lVar27 >> 0x10);
    uStack_1ec = (undefined4)((ulong)lVar27 >> 0x20);
    uStack_208._0_4_ = (uint)param_2[4];
    uStack_208._4_4_ = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_1f8 = (undefined1)param_2[6];
    uStack_1f7 = (undefined7)((ulong)param_2[6] >> 8);
    uStack_200 = (undefined1)param_2[5];
    uStack_1ff = (undefined7)((ulong)param_2[5] >> 8);
    pcStack_1b0 = (char *)param_2[0x12];
    local_1b8 = (long *)param_2[0x11];
    uStack_1a0 = param_2[0x14];
    local_1a8 = (char *)param_2[0x13];
    pcStack_158 = (char *)param_2[0x10];
    uStack_150 = CONCAT62(uStack_150._2_6_,(short)param_2[0x19]);
    uStack_190 = param_2[0x16];
    local_198 = param_2[0x15];
    uStack_180 = param_2[0x18];
    local_188 = param_2[0x17];
    uStack_170 = param_2[0xd];
    local_178 = param_2[0xc];
    local_160 = param_2[0xf];
    uStack_168 = param_2[0xe];
    local_1d8 = (long *)param_2[10];
    pcStack_1d0 = (char *)param_2[0xb];
    local_1c8 = pcVar22;
    pcStack_1c0 = pcVar12;
                    /* try { // try from 00856d20 to 00856d27 has its CatchHandler @ 00857780 */
    puVar13 = (ulong *)FUN_0085e1c8(200);
    puVar13[0xb] = (ulong)local_1b8;
    puVar13[10] = (ulong)pcStack_1c0;
    puVar13[0x15] = uStack_168;
    puVar13[0x14] = uStack_170;
    puVar13[0x17] = (ulong)pcStack_158;
    puVar13[0x16] = local_160;
    puVar13[0x18] = uStack_150;
    ppuVar18 = &PTR_FUN_00ae7668;
    puVar13[0xd] = (ulong)local_1a8;
    puVar13[0xc] = (ulong)pcStack_1b0;
    puVar13[0xf] = local_198;
    puVar13[0xe] = uStack_1a0;
    puVar13[0x11] = local_188;
    puVar13[0x10] = uStack_190;
    puVar13[0x13] = local_178;
    puVar13[0x12] = uStack_180;
    puVar13[3] = CONCAT71(uStack_1f7,uStack_1f8);
    puVar13[2] = CONCAT71(uStack_1ff,uStack_200);
    puVar13[5] = CONCAT71(uStack_1e7,local_1e8);
    puVar13[4] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
    puVar13[1] = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
    *puVar13 = local_210;
    puVar13[7] = (ulong)local_1d8;
    puVar13[6] = (ulong)pcStack_1e0;
    puVar13[9] = (ulong)local_1c8;
    puVar13[8] = (ulong)pcStack_1d0;
  }
  param_1[1] = (ulong)puVar13;
  param_1[2] = (ulong)ppuVar18;
  lVar27 = *param_9;
  *param_1 = 0xffffffffffffffff;
  if (lVar27 == 0) {
    return;
  }
LAB_00856e38:
  goto LAB_00855e0c;
  while( true ) {
    lVar14 = lVar14 + -0x40;
    puVar19 = puVar19 + 8;
    if (lVar14 == 0) break;
LAB_00855e58:
    uVar23 = puVar19[-2] ^ 0x8000000000000000;
    if (0x16 < uVar23) {
      uVar23 = 0x13;
    }
    if ((0x10 < uVar23 - 5 && 3 < uVar23) && ((uVar23 != 0x16 || (*(short *)(puVar19 + 2) == 0x17)))
       ) {
      if ((puVar19[-2] == 0x8000000000000004) && (puVar19[-1] != -2)) {
        lVar27 = *(long *)(param_2[10] + 0x88);
                    /* try { // try from 00855ee4 to 00855eef has its CatchHandler @ 00857cd4 */
        (**(code **)(lVar27 + 0x38))
                  (&local_210,
                   *(long *)(param_2[10] + 0x80) +
                   (*(long *)(lVar27 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,*puVar19,puVar19[1]);
        if (local_210 == 0xffffffffffffffff) {
          bVar6 = true;
          goto LAB_0085625c;
        }
        lStack_450 = CONCAT71(uStack_1ff,uStack_200);
        puStack_458 = (undefined1 *)CONCAT44(uStack_208._4_4_,(uint)uStack_208);
        local_460 = local_210;
        bVar6 = true;
        goto LAB_00855f68;
      }
      break;
    }
  }
LAB_00855f18:
  uVar23 = *(ulong *)(param_6 + 0x88);
  local_210 = 0xffffffffffffffff;
  if (uVar23 == 0) {
    bVar6 = false;
  }
  else {
    if (0x20 < uVar23) {
                    /* try { // try from 00857390 to 008573a7 has its CatchHandler @ 00857d20 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar23,0x20,&PTR_s__root__cargo_registry_src_index__00ae3a20);
    }
    lVar27 = *(long *)(param_2[10] + 0x78);
                    /* try { // try from 00855f54 to 00855f63 has its CatchHandler @ 00857d20 */
    (**(code **)(lVar27 + 0x28))
              (&local_460,
               *(long *)(param_2[10] + 0x70) + (*(long *)(lVar27 + 0x10) - 1U & 0xfffffffffffffff0)
               + 0x10,param_6 + 0x68);
    bVar6 = false;
LAB_00855f68:
    puVar10 = puStack_458;
    uVar23 = local_460;
    if (local_460 != 0xffffffffffffffff) {
                    /* try { // try from 00855f7c to 00855f87 has its CatchHandler @ 00857a88 */
      FUN_008457d8(&local_210,puStack_458,lStack_450);
      uVar30 = local_210;
      if (local_210 != 0xffffffffffffffff) {
        uStack_368 = uStack_1a0;
        local_370 = local_1a8;
        uStack_358 = uStack_190;
        local_360 = local_198;
        local_350 = local_188;
        uStack_3a8 = SUB87(pcStack_1e0,0);
        uStack_3a1 = (undefined1)((ulong)pcStack_1e0 >> 0x38);
        local_3b0 = (undefined7)CONCAT71(uStack_1e7,local_1e8);
        uStack_3a9 = (undefined1)((uint7)uStack_1e7 >> 0x30);
        pcStack_398 = pcStack_1d0;
        local_3a0 = local_1d8;
        pcStack_388 = pcStack_1c0;
        local_390 = local_1c8;
        pcStack_378 = pcStack_1b0;
        local_380 = local_1b8;
        uStack_3c8 = (undefined2)CONCAT71(uStack_1ff,uStack_200);
        uStack_3c6 = (undefined6)((uint7)uStack_1ff >> 8);
        local_3d0 = (undefined2)(uint)uStack_208;
        uStack_3ce = (undefined6)(CONCAT44(uStack_208._4_4_,(uint)uStack_208) >> 0x10);
        uStack_3b8 = (undefined7)
                     CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
        uStack_3b1 = (undefined1)((uint)uStack_1ec >> 0x18);
        local_3c0 = (undefined2)CONCAT71(uStack_1f7,uStack_1f8);
        uStack_3be = (undefined6)((uint7)uStack_1f7 >> 8);
      }
      if (uVar23 != 0) {
        free(puVar10);
      }
      if (uVar30 != 0xffffffffffffffff) {
        local_188 = local_350;
        pcStack_1c0 = pcStack_388;
        local_1c8 = local_390;
        pcStack_1b0 = pcStack_378;
        local_1b8 = local_380;
        uStack_190 = uStack_358;
        uVar23 = uStack_190;
        local_198 = local_360;
        uStack_1a0 = uStack_368;
        local_1a8 = local_370;
        uStack_190._4_2_ = (short)(uStack_358 >> 0x20);
        sVar1 = *(short *)(param_2[0xb] + 0x48);
        uStack_1f0 = (undefined1)uStack_3b8;
        uStack_1ef = (undefined1)((uint7)uStack_3b8 >> 8);
        uStack_1ee = (undefined2)((uint7)uStack_3b8 >> 0x10);
        uStack_1ec = (undefined4)(CONCAT17(uStack_3b1,uStack_3b8) >> 0x20);
        uStack_1f8 = (undefined1)local_3c0;
        uStack_1f7 = (undefined7)(CONCAT62(uStack_3be,local_3c0) >> 8);
        pcStack_1e0 = (char *)CONCAT17(uStack_3a1,uStack_3a8);
        bVar5 = uStack_190._4_2_ == sVar1;
        uStack_200 = (undefined1)uStack_3c8;
        uStack_1ff = (undefined7)(CONCAT62(uStack_3c6,uStack_3c8) >> 8);
        uStack_208._0_4_ = (uint)CONCAT62(uStack_3ce,local_3d0);
        uStack_208._4_4_ = (undefined4)((uint6)uStack_3ce >> 0x10);
        local_1e8 = (undefined1)local_3b0;
        uStack_1e7 = (undefined7)(CONCAT17(uStack_3a9,local_3b0) >> 8);
        pcStack_1d0 = pcStack_398;
        local_1d8 = local_3a0;
        local_210 = uVar30;
        uStack_190 = uVar23;
        if (((bVar5) &&
            ((sVar1 != 0x178 ||
             (uStack_190._6_2_ = (short)(uStack_358 >> 0x30),
             bVar5 = uStack_190._6_2_ == *(short *)(param_2[0xb] + 0x4a), bVar5)))) &&
           (((char)param_2[0x19] == '\0' || ((local_350 & 0x100000000) != 0)))) {
          lVar27 = *(long *)(param_3[1] + 0x70);
          bVar7 = lVar27 == -2 && pcStack_378 == &DAT_fffffffffffffffe;
          if ((pcStack_378 != &DAT_fffffffffffffffe) && (lVar27 != -2)) {
                    /* try { // try from 0085609c to 008560ab has its CatchHandler @ 00857954 */
            bVar7 = <rustls_pki_types::server_name::DnsNameInner_as_core::cmp::PartialEq>::eq
                              (&pcStack_1b0,param_3[1] + 0x70);
          }
          if ((bVar7 & 1) != 0) {
            local_460 = uVar30;
            uStack_3e0 = uStack_358;
            local_3e8 = local_360;
            lStack_450 = CONCAT62(uStack_3c6,uStack_3c8);
            puStack_458 = (undefined1 *)CONCAT62(uStack_3ce,local_3d0);
            pcStack_400 = pcStack_378;
            local_408 = local_380;
            uStack_3f0 = uStack_368;
            local_3f8 = local_370;
            pvStack_440 = (void *)CONCAT17(uStack_3b1,uStack_3b8);
            local_448 = (long *)CONCAT62(uStack_3be,local_3c0);
            uStack_430 = CONCAT17(uStack_3a1,uStack_3a8);
            local_438 = CONCAT17(uStack_3a9,local_3b0);
            uStack_308 = param_2[0x19];
            local_310 = param_2[0x18];
            local_3d8 = local_350;
            pcStack_420 = pcStack_398;
            local_428 = local_3a0;
            lStack_328 = param_2[0x15];
            local_330 = param_2[0x14];
            uStack_318 = param_2[0x17];
            uStack_320 = param_2[0x16];
            pcStack_410 = pcStack_388;
            local_418 = local_390;
            lStack_338 = param_2[0x13];
            local_340 = (char *)param_2[0x12];
            pcStack_378 = (char *)param_2[0xb];
            local_380 = (long *)param_2[10];
            uStack_368 = param_2[0xd];
            local_370 = (char *)param_2[0xc];
            uVar2 = (uint)(local_350 >> 0x20) & 0xff ^ 1 | (uint)(byte)uStack_308;
            uStack_358 = param_2[0xf];
            local_360 = param_2[0xe];
            pcStack_348 = (char *)param_2[0x11];
            local_350 = param_2[0x10];
            pcStack_398 = (char *)param_2[7];
            local_3a0 = (long *)param_2[6];
            pcStack_388 = (char *)param_2[9];
            local_390 = (char *)param_2[8];
            uStack_3a8 = (undefined7)param_2[5];
            uStack_3a1 = (undefined1)((ulong)param_2[5] >> 0x38);
            local_3b0 = (undefined7)param_2[4];
            uStack_3a9 = (undefined1)((ulong)param_2[4] >> 0x38);
            uStack_3c8 = (undefined2)param_2[1];
            uStack_3c6 = (undefined6)((ulong)param_2[1] >> 0x10);
            local_3d0 = (undefined2)*param_2;
            uStack_3ce = (undefined6)((ulong)*param_2 >> 0x10);
            uStack_3b8 = (undefined7)param_2[3];
            uStack_3b1 = (undefined1)((ulong)param_2[3] >> 0x38);
            local_3c0 = (undefined2)param_2[2];
            uStack_3be = (undefined6)((ulong)param_2[2] >> 0x10);
            if ((uVar2 & 1) == 0) {
              local_210 = 0x8000000000000000;
              lVar27 = *param_3;
              pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
              uStack_208._0_4_ = 0xd0001;
                    /* try { // try from 00856884 to 0085688f has its CatchHandler @ 00857828 */
              <rustls::common_state::rustls::common_state::CommonState>::send_msg
                        (lVar27,&local_210,*(char *)(lVar27 + 0x49) == '\x02');
              bVar6 = true;
              *(undefined1 *)(lVar27 + 0x335) = 1;
              *(undefined1 *)(param_1 + 1) = 0x2b;
              *param_1 = 0x800000000000001a;
LAB_008568b0:
              puVar10 = puStack_458;
              if (pcStack_400 < &DAT_fffffffffffffffe) {
LAB_008568bc:
                puVar10 = puStack_458;
                if (pcStack_400 != (char *)0x0) {
                  free(local_3f8);
                  puVar10 = puStack_458;
                }
              }
joined_r0x008568d0:
              for (; lStack_450 != 0; lStack_450 = lStack_450 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              lStack_450 = 0;
              puVar10 = puStack_458;
              for (uVar23 = local_460; uVar23 != 0; uVar23 = uVar23 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              if (local_460 != 0) {
                free(puStack_458);
              }
              uVar23 = uStack_430;
                    /* try { // try from 00856920 to 0085692f has its CatchHandler @ 00857794 */
              if (((bVar6) && (uStack_430 != 0xffffffffffffffff)) &&
                 (FUN_00808ea4(&uStack_430), uVar23 != 0)) {
                free(local_428);
              }
              if ((local_418 != (char *)0xffffffffffffffff) && (local_418 != (char *)0x0)) {
                free(pcStack_410);
              }
              if (local_448 != (long *)0x0) {
                free(pvStack_440);
              }
              do {
                lVar27 = *local_380;
                cVar3 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(local_380,0x10);
                if (bVar6) {
                  *local_380 = lVar27 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar27 + -1 == 0) {
                DataMemoryBarrier(2,1);
                    /* try { // try from 00856998 to 0085699f has its CatchHandler @ 00857814 */
                <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::
                drop_slow(&local_380);
              }
                    /* try { // try from 008569a4 to 008569ab has its CatchHandler @ 00857940 */
              FUN_00853ce0(&uStack_3b8);
              if ((uVar2 & 1) == 0) {
                lVar27 = CONCAT62(uStack_3be,local_3c0) + 1;
                lVar20 = CONCAT62(uStack_3c6,uStack_3c8);
                while (lVar27 = lVar27 + -1, lVar27 != 0) {
                    /* try { // try from 008569c4 to 008569c7 has its CatchHandler @ 00857a1c */
                  FUN_007ff230(lVar20);
                  lVar20 = lVar20 + 0x28;
                }
                if (CONCAT62(uStack_3ce,local_3d0) != 0) {
                  pvVar9 = (void *)CONCAT62(uStack_3c6,uStack_3c8);
LAB_008569e8:
                  free(pvVar9);
                }
              }
            }
            else {
              local_350 = *(ulong *)(param_6 + 0x88);
              uStack_368 = *(ulong *)(param_6 + 0x70);
              local_370 = *(char **)(param_6 + 0x68);
              uStack_358 = *(ulong *)(param_6 + 0x80);
              local_360 = *(ulong *)(param_6 + 0x78);
              local_298 = &uStack_3b8;
              local_2b0 = 0;
              puStack_2a8 = &DAT_00000001;
              local_280 = (char *)param_2[2];
              pcStack_288 = (char *)param_2[1];
              local_290 = (char *)*param_2;
              local_2a0 = (char *)0x0;
              local_2f8 = 0;
                    /* try { // try from 0085619c to 008561cf has its CatchHandler @ 00857834 */
              FUN_0085e584(&local_210,&local_2b0,local_380 + 2,param_3,param_6 + 0x68,
                           *(undefined2 *)(pcStack_378 + 0x48),*(undefined2 *)(pcStack_378 + 0x4a),
                           (byte)uStack_308 & 1,&local_2f8,param_6,&local_460,&pcStack_348,
                           &local_290);
              bVar6 = local_210 != 0xffffffffffffffff;
              if (bVar6) {
                uStack_278 = CONCAT43(uStack_1ec,CONCAT21(uStack_1ee,uStack_1ef));
                local_280 = (char *)CONCAT17(uStack_1f0,uStack_1f7);
                pcStack_288 = (char *)CONCAT17(uStack_1f8,uStack_1ff);
                local_290 = (char *)CONCAT17(uStack_200,CONCAT43(uStack_208._4_4_,uStack_208._1_3_))
                ;
                *param_1 = local_210;
                uStack_269 = SUB81(pcStack_1e0,0);
                uStack_268 = (undefined7)((ulong)pcStack_1e0 >> 8);
                uStack_270 = uStack_1e7;
                uStack_271 = local_1e8;
                *(undefined1 *)(param_1 + 1) = (undefined1)uStack_208;
                *(char **)((long)param_1 + 0x11) = pcStack_288;
                *(char **)((long)param_1 + 9) = local_290;
                *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_1e8,uStack_278);
                *(char **)((long)param_1 + 0x19) = local_280;
                param_1[6] = (ulong)pcStack_1e0;
                param_1[5] = CONCAT71(uStack_1e7,local_1e8);
                if (local_2b0 == 0) goto LAB_008568b0;
                free(puStack_2a8);
                puVar10 = puStack_458;
                if (pcStack_400 < &DAT_fffffffffffffffe) goto LAB_008568bc;
                goto joined_r0x008568d0;
              }
              uStack_308._0_2_ = CONCAT11((undefined1)uStack_208,(byte)uStack_308);
              pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
              uStack_200 = SUB81(puStack_2a8,0);
              uStack_1ff = (undefined7)((ulong)puStack_2a8 >> 8);
              uStack_208._0_4_ = (uint)local_2b0;
              uStack_208._4_4_ = (undefined4)(local_2b0 >> 0x20);
              uStack_1f8 = SUB81(local_2a0,0);
              uStack_1f7 = (undefined7)((ulong)local_2a0 >> 8);
              local_210 = 0x8000000000000002;
                    /* try { // try from 00856e78 to 00856e83 has its CatchHandler @ 00857760 */
              <rustls::common_state::rustls::common_state::CommonState>::send_msg
                        (*param_3,&local_210,0);
              uVar31 = local_210;
              uVar30 = local_2e0;
              uVar23 = local_2f8;
              local_210 = local_210 & 0xffffffffffffff00;
              local_2f8 = local_2f8 & 0xffffffffffffff00;
              local_2e0 = local_2e0 & 0xffffffffffffff00;
              local_74 = 0;
              local_78 = 0;
              local_7c = 0;
              local_80 = 0;
              local_84 = 0;
              local_88 = 0;
              local_8c = 0;
              local_90 = 0;
              local_94 = 0;
              local_98 = 0;
              local_9c = 0;
              local_a0 = 0;
              local_a4 = 0;
              local_a8 = 0;
              local_ac = 0;
              local_b0 = 0;
              local_b4 = 0;
              local_b8 = 0;
              local_bc = 0;
              local_c0 = 0;
              local_c4 = 0;
              local_c8 = 0;
              local_cc = 0;
              local_d0 = 0;
              local_d4 = 0;
              local_d8 = 0;
              local_dc = 0;
              local_e0 = 0;
              local_e4 = 0;
              local_e8 = 0;
              local_ec = 0;
              local_f0 = 0;
              local_f4 = 0;
              local_f8 = 0;
              local_fc = 0;
              local_100 = 0;
              local_104 = 0;
              local_108 = 0;
              local_10c = 0;
              local_110 = 0;
              local_114 = 0;
              local_118 = 0;
              local_11c = 0;
              local_120 = 0;
              local_124 = 0;
              if (lStack_450 != 0x30) {
                    /* try { // try from 008576b4 to 008576c3 has its CatchHandler @ 00857b00 */
                    /* WARNING: Subroutine does not return */
                core::slice::copy_from_slice_impl::len_mismatch_fail
                          (0x30,lStack_450,&PTR_s__root__cargo_registry_src_index__00ae78a8);
              }
              local_248 = *puStack_458;
              local_247 = puStack_458[1];
              local_210 = CONCAT71(SUB87(uVar31,1),local_248);
              local_246 = puStack_458[2];
              local_2f8 = CONCAT71(SUB87(uVar23,1),local_247);
              local_245 = puStack_458[3];
              local_2e0 = CONCAT71(SUB87(uVar30,1),local_246);
              local_244 = puStack_458[4];
              local_243 = puStack_458[5];
              local_242 = puStack_458[6];
              local_241 = puStack_458[7];
              local_240 = puStack_458[8];
              local_23f = puStack_458[9];
              local_23e = puStack_458[10];
              local_23d = puStack_458[0xb];
              local_23c = puStack_458[0xc];
              local_23b = puStack_458[0xd];
              local_23a = puStack_458[0xe];
              local_239 = puStack_458[0xf];
              local_238 = puStack_458[0x10];
              local_237 = puStack_458[0x11];
              local_236 = puStack_458[0x12];
              local_235 = puStack_458[0x13];
              local_234 = puStack_458[0x14];
              local_233 = puStack_458[0x15];
              local_232 = puStack_458[0x16];
              local_231 = puStack_458[0x17];
              local_230 = puStack_458[0x18];
              uStack_22f = puStack_458[0x19];
              uStack_22e = puStack_458[0x1a];
              uStack_22d = puStack_458[0x1b];
              uStack_22c = puStack_458[0x1c];
              uStack_22b = puStack_458[0x1d];
              uStack_22a = puStack_458[0x1e];
              uStack_229 = puStack_458[0x1f];
              uStack_228 = puStack_458[0x20];
              uStack_227 = puStack_458[0x21];
              uStack_226 = puStack_458[0x22];
              uStack_225 = puStack_458[0x23];
              uStack_224 = puStack_458[0x24];
              uStack_223 = puStack_458[0x25];
              uStack_222 = puStack_458[0x26];
              uStack_221 = puStack_458[0x27];
              local_220 = puStack_458[0x28];
              uStack_21f = puStack_458[0x29];
              uStack_21e = puStack_458[0x2a];
              uStack_21d = puStack_458[0x2b];
              uStack_21c = puStack_458[0x2c];
              uStack_21b = puStack_458[0x2d];
              uStack_21a = puStack_458[0x2e];
              uStack_219 = puStack_458[0x2f];
              uStack_260 = uStack_320;
              uStack_268 = (undefined7)lStack_328;
              uStack_261 = (undefined1)((ulong)lStack_328 >> 0x38);
              uStack_250 = local_310;
              local_258 = uStack_318;
              local_290 = pcStack_378;
              uStack_270 = (undefined7)local_330;
              uStack_269 = (undefined1)((ulong)local_330 >> 0x38);
              uStack_278 = (undefined7)lStack_338;
              uStack_271 = (undefined1)((ulong)lStack_338 >> 0x38);
              local_280 = local_340;
              pcStack_288 = pcStack_348;
                    /* try { // try from 00857298 to 008572d3 has its CatchHandler @ 00857878 */
              local_124 = uStack_219;
              local_120 = uStack_21a;
              local_11c = uStack_21b;
              local_118 = uStack_21c;
              local_114 = uStack_21d;
              local_110 = uStack_21e;
              local_10c = uStack_21f;
              local_108 = local_220;
              local_104 = uStack_221;
              local_100 = uStack_222;
              local_fc = uStack_223;
              local_f8 = uStack_224;
              local_f4 = uStack_225;
              local_f0 = uStack_226;
              local_ec = uStack_227;
              local_e8 = uStack_228;
              local_e4 = uStack_229;
              local_e0 = uStack_22a;
              local_dc = uStack_22b;
              local_d8 = uStack_22c;
              local_d4 = uStack_22d;
              local_d0 = uStack_22e;
              local_cc = uStack_22f;
              local_c8 = local_230;
              local_c4 = local_231;
              local_c0 = local_232;
              local_bc = local_233;
              local_b8 = local_234;
              local_b4 = local_235;
              local_b0 = local_236;
              local_ac = local_237;
              local_a8 = local_238;
              local_a4 = local_239;
              local_a0 = local_23a;
              local_9c = local_23b;
              local_98 = local_23c;
              local_94 = local_23d;
              local_90 = local_23e;
              local_8c = local_23f;
              local_88 = local_240;
              local_84 = local_241;
              local_80 = local_242;
              local_7c = local_243;
              local_78 = local_244;
              local_74 = local_245;
              (**(code **)(local_380[0x17] + 0x20))
                        (local_380[0x16] +
                         (*(long *)(local_380[0x17] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                         "CLIENT_RANDOM",0xd,&pcStack_288,0x20,&local_248,0x30);
              FUN_0084cb90(*param_3,&local_290,1);
              lVar27 = *param_3;
              uStack_208._0_4_ = (uint)local_428;
              uStack_208._4_4_ = (undefined4)((ulong)local_428 >> 0x20);
              local_210 = uStack_430;
              uStack_200 = SUB81(pcStack_420,0);
              uStack_1ff = (undefined7)((ulong)pcStack_420 >> 8);
              if (*(long *)(lVar27 + 0x2f0) != -1) {
                    /* try { // try from 008572f8 to 00857303 has its CatchHandler @ 008576fc */
                FUN_00808ea4(lVar27 + 0x2f0);
                if (*(long *)(lVar27 + 0x2f0) != 0) {
                  free(*(void **)(lVar27 + 0x2f8));
                }
                lVar27 = *param_3;
              }
              *(ulong *)(lVar27 + 0x2f8) = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
              *(ulong *)(lVar27 + 0x2f0) = local_210;
              *(ulong *)(lVar27 + 0x300) = CONCAT71(uStack_1ff,uStack_200);
              *(undefined1 *)(*param_3 + 0x33d) = 2;
              if ((uStack_308 & 0x100) != 0) {
                    /* try { // try from 00857358 to 00857367 has its CatchHandler @ 00857878 */
                FUN_00870e08(&local_210,local_380 + 2);
                if (local_210 == 0xffffffffffffffff) {
                    /* try { // try from 008573c8 to 00857523 has its CatchHandler @ 00857878 */
                  FUN_00879cb4(&local_210,&local_290,&uStack_3b8,uStack_308 & 0xff,param_3,
                               local_380[0x10] +
                               (*(long *)(local_380[0x11] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
                  ;
                  if (local_210 == 0xffffffffffffffff) goto LAB_008574dc;
                  param_1[5] = CONCAT71(uStack_1e7,local_1e8);
                  param_1[4] = CONCAT44(uStack_1ec,
                                        CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
                  param_1[1] = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
                  *param_1 = local_210;
                  param_1[3] = CONCAT71(uStack_1f7,uStack_1f8);
                  param_1[2] = CONCAT71(uStack_1ff,uStack_200);
                  param_1[6] = (ulong)pcStack_1e0;
                }
                else {
                  *param_1 = local_210;
                  param_1[1] = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
                  param_1[6] = (ulong)pcStack_1e0;
                  param_1[3] = CONCAT71(uStack_1f7,uStack_1f8);
                  param_1[2] = CONCAT71(uStack_1ff,uStack_200);
                  param_1[5] = CONCAT71(uStack_1e7,local_1e8);
                  param_1[4] = CONCAT44(uStack_1ec,
                                        CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)));
                }
                local_248 = 0;
                local_247 = 0;
                local_246 = 0;
                local_245 = 0;
                local_244 = 0;
                local_243 = 0;
                local_242 = 0;
                local_241 = 0;
                local_240 = 0;
                local_23f = 0;
                local_23e = 0;
                local_23d = 0;
                local_23c = 0;
                local_23b = 0;
                local_23a = 0;
                local_239 = 0;
                local_238 = 0;
                local_237 = 0;
                local_236 = 0;
                local_235 = 0;
                local_234 = 0;
                local_233 = 0;
                local_232 = 0;
                local_231 = 0;
                local_230 = 0;
                uStack_22f = 0;
                uStack_22e = 0;
                uStack_22d = 0;
                uStack_22c = 0;
                uStack_22b = 0;
                uStack_22a = 0;
                uStack_229 = 0;
                uStack_228 = 0;
                uStack_227 = 0;
                uStack_226 = 0;
                uStack_225 = 0;
                uStack_224 = 0;
                uStack_223 = 0;
                uStack_222 = 0;
                uStack_221 = 0;
                local_220 = 0;
                uStack_21f = 0;
                uStack_21e = 0;
                uStack_21d = 0;
                uStack_21c = 0;
                uStack_21b = 0;
                uStack_21a = 0;
                uStack_219 = 0;
                puVar10 = puStack_458;
                if ((char *)0xfffffffffffffffd < pcStack_400) goto joined_r0x008568d0;
                goto LAB_008568bc;
              }
LAB_008574dc:
              pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
              local_210 = 0x8000000000000003;
              <rustls::common_state::rustls::common_state::CommonState>::send_msg
                        (*param_3,&local_210,0);
              *(undefined1 *)(*param_3 + 0x49) = 2;
              FUN_00879f98(&local_290,&uStack_3b8,*param_3);
              local_188 = CONCAT17(local_241,
                                   CONCAT16(local_242,
                                            CONCAT15(local_243,
                                                     CONCAT14(local_244,
                                                              CONCAT13(local_245,
                                                                       CONCAT12(local_246,
                                                                                CONCAT11(local_247,
                                                                                         local_248))
                                                                      )))));
              local_178 = CONCAT17(local_231,
                                   CONCAT16(local_232,
                                            CONCAT15(local_233,
                                                     CONCAT14(local_234,
                                                              CONCAT13(local_235,
                                                                       CONCAT12(local_236,
                                                                                CONCAT11(local_237,
                                                                                         local_238))
                                                                      )))));
              uStack_180 = CONCAT17(local_239,
                                    CONCAT16(local_23a,
                                             CONCAT15(local_23b,
                                                      CONCAT14(local_23c,
                                                               CONCAT13(local_23d,
                                                                        CONCAT12(local_23e,
                                                                                 CONCAT11(local_23f,
                                                                                          local_240)
                                                                                ))))));
              uStack_168 = CONCAT17(uStack_221,
                                    CONCAT16(uStack_222,
                                             CONCAT15(uStack_223,
                                                      CONCAT14(uStack_224,
                                                               CONCAT13(uStack_225,
                                                                        CONCAT12(uStack_226,
                                                                                 CONCAT11(uStack_227
                                                                                          ,
                                                  uStack_228)))))));
              uStack_170 = CONCAT17(uStack_229,
                                    CONCAT16(uStack_22a,
                                             CONCAT15(uStack_22b,
                                                      CONCAT14(uStack_22c,
                                                               CONCAT13(uStack_22d,
                                                                        CONCAT12(uStack_22e,
                                                                                 CONCAT11(uStack_22f
                                                                                          ,local_230
                                                                                         )))))));
              local_160 = CONCAT17(uStack_219,
                                   CONCAT16(uStack_21a,
                                            CONCAT15(uStack_21b,
                                                     CONCAT14(uStack_21c,
                                                              CONCAT13(uStack_21d,
                                                                       CONCAT12(uStack_21e,
                                                                                CONCAT11(uStack_21f,
                                                                                         local_220))
                                                                      )))));
              uStack_190 = uStack_250;
              local_1b8 = (long *)CONCAT17(uStack_271,uStack_278);
              local_138 = local_350;
              local_1c8 = pcStack_288;
              pcStack_1d0 = local_290;
              pcStack_1c0 = local_280;
              local_1a8 = (char *)CONCAT17(uStack_261,uStack_268);
              pcStack_1b0 = (char *)CONCAT17(uStack_269,uStack_270);
              local_1d8 = local_380;
              local_198 = local_258;
              uStack_1a0 = uStack_260;
              local_210 = CONCAT17(uStack_3b1,uStack_3b8);
              pcStack_1e0 = pcStack_388;
              uStack_12f = 1;
              uStack_1f8 = SUB81(local_3a0,0);
              uStack_1f7 = (undefined7)((ulong)local_3a0 >> 8);
              uStack_200 = (undefined1)uStack_3a8;
              uStack_1ff = (undefined7)(CONCAT17(uStack_3a1,uStack_3a8) >> 8);
              local_1e8 = SUB81(local_390,0);
              uStack_1e7 = (undefined7)((ulong)local_390 >> 8);
              uStack_1f0 = SUB81(pcStack_398,0);
              uStack_1ef = (undefined1)((ulong)pcStack_398 >> 8);
              uStack_1ee = (undefined2)((ulong)pcStack_398 >> 0x10);
              uStack_1ec = (undefined4)((ulong)pcStack_398 >> 0x20);
              uStack_208._0_4_ = (uint)local_3b0;
              uStack_208._4_4_ = (undefined4)(CONCAT17(uStack_3a9,local_3b0) >> 0x20);
              uStack_12e = uStack_308._1_1_;
              uStack_140 = uStack_358;
              uStack_148 = local_360;
              uStack_150 = uStack_368;
              pcStack_158 = local_370;
              local_130 = (byte)uStack_308;
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              puVar13 = (ulong *)FUN_004b25a4(0xe8,8);
              if (puVar13 == (ulong *)0x0) {
                    /* try { // try from 008576c8 to 008576d3 has its CatchHandler @ 00857ad0 */
                    /* WARNING: Subroutine does not return */
                alloc::alloc::handle_alloc_error(8,0xe8);
              }
              puVar13[0x1c] =
                   CONCAT53(uStack_12d,CONCAT12(uStack_12e,CONCAT11(uStack_12f,local_130)));
              puVar13[0x19] = uStack_148;
              puVar13[0x18] = uStack_150;
              puVar13[0x1b] = local_138;
              puVar13[0x1a] = uStack_140;
              param_1[1] = (ulong)puVar13;
              param_1[2] = (ulong)&PTR_FUN_00ae75d8;
              *param_1 = 0xffffffffffffffff;
              puVar13[0x11] = local_188;
              puVar13[0x10] = uStack_190;
              puVar13[0x13] = local_178;
              puVar13[0x12] = uStack_180;
              puVar13[0x15] = uStack_168;
              puVar13[0x14] = uStack_170;
              puVar13[0x17] = (ulong)pcStack_158;
              puVar13[0x16] = local_160;
              puVar13[9] = (ulong)local_1c8;
              puVar13[8] = (ulong)pcStack_1d0;
              puVar13[0xb] = (ulong)local_1b8;
              puVar13[10] = (ulong)pcStack_1c0;
              puVar13[0xd] = (ulong)local_1a8;
              puVar13[0xc] = (ulong)pcStack_1b0;
              puVar13[0xf] = local_198;
              puVar13[0xe] = uStack_1a0;
              puVar13[1] = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
              *puVar13 = local_210;
              puVar13[3] = CONCAT71(uStack_1f7,uStack_1f8);
              puVar13[2] = CONCAT71(uStack_1ff,uStack_200);
              puVar13[5] = CONCAT71(uStack_1e7,local_1e8);
              puVar13[4] = CONCAT44(uStack_1ec,CONCAT22(uStack_1ee,CONCAT11(uStack_1ef,uStack_1f0)))
              ;
              puVar13[7] = (ulong)local_1d8;
              puVar13[6] = (ulong)pcStack_1e0;
              puVar10 = puStack_458;
              if ((pcStack_400 < &DAT_fffffffffffffffe) && (pcStack_400 != (char *)0x0)) {
                free(local_3f8);
                puVar10 = puStack_458;
              }
              for (; lStack_450 != 0; lStack_450 = lStack_450 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              lStack_450 = 0;
              puVar10 = puStack_458;
              for (uVar23 = local_460; uVar23 != 0; uVar23 = uVar23 - 1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
              }
              if (local_460 != 0) {
                free(puStack_458);
              }
              if ((local_418 != (char *)0xffffffffffffffff) && (local_418 != (char *)0x0)) {
                free(pcStack_410);
              }
              pvVar9 = pvStack_440;
              if (local_448 != (long *)0x0) goto LAB_008569e8;
            }
            if (*param_9 == 0) {
              return;
            }
            pvVar9 = (void *)param_9[1];
            goto LAB_00856e38;
          }
        }
        FUN_00853e5c(&local_210);
      }
    }
  }
LAB_0085625c:
  local_478 = param_2 + 10;
  local_210 = *(ulong *)(param_2[0xb] + 0x10);
  uStack_208 = local_210 + *(long *)(param_2[0xb] + 0x18) * 4;
  pvVar9 = (void *)param_9[1];
  uStack_200 = SUB81(pvVar9,0);
  uStack_1ff = (undefined7)((ulong)pvVar9 >> 8);
  uStack_1f8 = (undefined1)param_9[2];
  uStack_1f7 = (undefined7)((ulong)param_9[2] >> 8);
                    /* try { // try from 00856280 to 0085628b has its CatchHandler @ 00857cd4 */
  FUN_008002c4(&local_2f8,&local_210);
  if (local_2e8 == 0) {
    lVar27 = *param_3;
    pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
    local_3d0 = 9;
    uStack_3ce = 0x800000000000;
    local_210 = 0x8000000000000000;
    uStack_208._0_4_ = 0x60001;
                    /* try { // try from 0085635c to 00856367 has its CatchHandler @ 00857a74 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar27,&local_210,*(char *)(lVar27 + 0x49) == '\x02');
    bVar6 = true;
    *(undefined1 *)(lVar27 + 0x335) = 1;
    param_1[2] = CONCAT62(uStack_3c6,uStack_3c8);
    param_1[1] = CONCAT62(uStack_3ce,local_3d0);
    param_1[3] = CONCAT62(uStack_3be,local_3c0);
    *param_1 = 0x8000000000000019;
  }
  else {
    do {
      pcVar28 = pcVar12 + 2;
      if (*pcVar12 == '\0') {
        local_2e0 = param_4[1];
        local_2d8 = param_4[2];
        lVar27 = *(long *)(*local_478 + 0x78);
                    /* try { // try from 008563b4 to 008563fb has its CatchHandler @ 00857ab8 */
        uVar23 = (**(code **)(lVar27 + 0x38))
                           (*(long *)(*local_478 + 0x70) +
                            (*(long *)(lVar27 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        if ((uVar23 & 1) == 0) {
          param_2[0x10] = 0;
          param_2[0xd] = 0;
          param_2[0xc] = 0;
          param_2[0xf] = 0;
          param_2[0xe] = 0;
        }
        else {
          if (param_2[0x10] != 0) {
            bVar6 = true;
          }
          if (!bVar6) {
            uStack_208._0_4_ = 0;
            uStack_208._4_4_ = 0;
            local_210 = 0;
            uStack_1f8 = 0;
            uStack_1f7 = 0;
            uStack_200 = 0;
            uStack_1ff = 0;
            uVar23 = (**(code **)(*(long *)(*(long *)(*local_478 + 0x68) + 0x68) + 0x20))
                               (*(undefined8 *)(*(long *)(*local_478 + 0x68) + 0x60),&local_210,0x20
                               );
            if ((uVar23 & 1) != 0) {
              bVar6 = true;
              *param_1 = 0x8000000000000020;
              goto LAB_0085650c;
            }
            lStack_2c8 = CONCAT44(uStack_208._4_4_,(uint)uStack_208);
            local_2d0 = local_210;
            lStack_2b8 = CONCAT71(uStack_1f7,uStack_1f8);
            lStack_2c0 = CONCAT71(uStack_1ff,uStack_200);
            param_2[0x10] = 0x20;
            param_2[0xd] = lStack_2c8;
            param_2[0xc] = local_210;
            param_2[0xf] = lStack_2b8;
            param_2[0xe] = lStack_2c0;
          }
        }
        lVar27 = *param_3;
        local_460 = 0;
        puStack_458 = &DAT_00000001;
        *(undefined8 *)(lVar27 + 0x2c0) = 1;
        *(undefined8 *)(lVar27 + 0x2c8) = param_7;
        *(long *)(lVar27 + 0x2d0) = param_8;
        *(undefined1 *)(*param_3 + 0x33d) = 0;
        local_448 = param_2 + 3;
        lStack_450 = 0;
        local_280 = (char *)param_2[2];
        uStack_3c8 = (undefined2)param_2[0xd];
        uStack_3c6 = (undefined6)((ulong)param_2[0xd] >> 0x10);
        local_3d0 = (undefined2)param_2[0xc];
        uStack_3ce = (undefined6)((ulong)param_2[0xc] >> 0x10);
        uStack_3b8 = (undefined7)param_2[0xf];
        uStack_3b1 = (undefined1)((ulong)param_2[0xf] >> 0x38);
        local_3c0 = (undefined2)param_2[0xe];
        uStack_3be = (undefined6)((ulong)param_2[0xe] >> 0x10);
        pcStack_288 = (char *)param_2[1];
        local_290 = (char *)*param_2;
        local_3b0 = (undefined7)param_2[0x10];
        uStack_3a9 = (undefined1)((ulong)param_2[0x10] >> 0x38);
                    /* try { // try from 00856484 to 008564ab has its CatchHandler @ 00857ac8 */
        FUN_0085e584(&local_210,&local_460,param_2[10] + 0x10,param_3,&local_3d0,
                     *(undefined2 *)(param_2[0xb] + 0x48),*(undefined2 *)(param_2[0xb] + 0x4a),
                     (char)param_2[0x19],&local_2e0,param_6,0,param_2 + 0x11,&local_290);
        if (local_210 == 0xffffffffffffffff) {
          lVar27 = *param_4;
          *(undefined1 *)((long)param_2 + 0xc9) = (undefined1)uStack_208;
          lVar20 = *(long *)(lVar27 + 0x10);
          if (lVar20 == 0) {
            local_3d0 = 0;
            uStack_3ce = 0;
            uStack_3c8 = 8;
            uStack_3c6 = 0;
            goto LAB_0085663c;
          }
          lVar25 = *(long *)(lVar27 + 8);
          lVar34 = lVar20 * 0x18;
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          lVar14 = FUN_004b25a4(lVar34,8);
          if (lVar14 == 0) {
                    /* try { // try from 008576dc to 008576e7 has its CatchHandler @ 00857ac8 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(8,lVar34);
          }
          lVar29 = 0;
          puVar19 = (undefined8 *)(lVar14 + 8);
          psVar26 = (size_t *)(lVar25 + 0x10);
          local_3d0 = (undefined2)lVar20;
          uStack_3ce = (undefined6)((ulong)lVar20 >> 0x10);
          uStack_3c8 = (undefined2)lVar14;
          uStack_3c6 = (undefined6)((ulong)lVar14 >> 0x10);
          goto LAB_0085657c;
        }
        *param_1 = local_210;
        uStack_3b8 = CONCAT43(uStack_1ec,CONCAT21(uStack_1ee,uStack_1ef));
        uVar11 = CONCAT17(uStack_200,(int7)((ulong)uStack_208 >> 8));
        *(undefined1 *)(param_1 + 1) = (undefined1)uStack_208;
        uStack_3a9 = SUB81(pcStack_1e0,0);
        uStack_3a8 = (undefined7)((ulong)pcStack_1e0 >> 8);
        local_3b0 = uStack_1e7;
        uStack_3c8 = (undefined2)uStack_1ff;
        uStack_3c6 = (undefined6)(CONCAT17(uStack_1f8,uStack_1ff) >> 0x10);
        local_3d0 = (undefined2)((ulong)uStack_208 >> 8);
        uStack_3ce = (undefined6)((ulong)uVar11 >> 0x10);
        uStack_3b1 = local_1e8;
        local_3c0 = (undefined2)uStack_1f7;
        uStack_3be = (undefined6)(CONCAT17(uStack_1f0,uStack_1f7) >> 0x10);
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_1f8,uStack_1ff);
        *(undefined8 *)((long)param_1 + 9) = uVar11;
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_1e8,uStack_3b8);
        *(ulong *)((long)param_1 + 0x19) = CONCAT62(uStack_3be,local_3c0);
        param_1[6] = (ulong)pcStack_1e0;
        param_1[5] = CONCAT71(uStack_1e7,local_1e8);
        if (local_460 != 0) {
          free(puStack_458);
        }
        bVar6 = false;
        goto LAB_0085650c;
      }
      pcVar12 = pcVar28;
    } while (pcVar28 != pcVar24);
    lVar27 = *param_3;
    pcStack_158 = (char *)CONCAT62(pcStack_158._2_6_,4);
    local_3d0 = 7;
    uStack_3ce = 0x800000000000;
    local_210 = 0x8000000000000000;
    uStack_208._0_4_ = 0x60001;
                    /* try { // try from 008562dc to 008562e7 has its CatchHandler @ 00857a60 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar27,&local_210,*(char *)(lVar27 + 0x49) == '\x02');
    bVar6 = true;
    *(undefined1 *)(lVar27 + 0x335) = 1;
    *(ulong *)((long)param_1 + 0x12) = CONCAT26(local_3c0,uStack_3c6);
    *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_3c8,uStack_3ce);
    param_1[3] = CONCAT62(uStack_3be,local_3c0);
    *param_1 = 0x8000000000000019;
    *(undefined2 *)(param_1 + 1) = 7;
  }
LAB_0085650c:
  if (local_2f8 != 0) {
    free(local_2f0);
  }
LAB_00855d8c:
  if (*param_9 != 0) {
    free((void *)param_9[1]);
  }
  plVar15 = (long *)param_2[10];
  do {
    lVar27 = *plVar15;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar27 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar27 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00855dc4 to 00855dc7 has its CatchHandler @ 00857cac */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 00855dc8 to 00855dcf has its CatchHandler @ 00857cc0 */
  FUN_00853ce0(param_2 + 3);
  if (bVar6) {
    lVar27 = param_2[2] + 1;
    lVar20 = param_2[1];
    while (lVar27 = lVar27 + -1, lVar27 != 0) {
                    /* try { // try from 00855de8 to 00855deb has its CatchHandler @ 00857cd8 */
      FUN_007ff230(lVar20);
      lVar20 = lVar20 + 0x28;
    }
    if (*param_2 != 0) {
      pvVar9 = (void *)param_2[1];
LAB_00855e0c:
      free(pvVar9);
    }
  }
  return;
}


// ===== 00857ddc  FUN_00857ddc =====

bool FUN_00857ddc(undefined8 param_1,long param_2,long param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,char *param_7,ulong param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  void *__ptr;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_110 [72];
  undefined1 local_c8 [16];
  long lStack_b8;
  long local_b0;
  undefined1 *local_a8;
  ulong local_a0;
  ulong local_70;
  
  if (*param_4 < -0x7ffffffffffffffb) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_002febb2,0x28,&PTR_s__root__cargo_registry_src_index__00ae76c8);
  }
  uVar2 = param_4[2];
  lVar11 = param_4[1];
  uVar9 = uVar2;
  if (((-1 < param_4[3]) && (param_4[0xb] != 0)) &&
     (lVar1 = param_4[10] + param_4[0xb] * 0x40, *(long *)(lVar1 + -0x40) == -0x7ffffffffffffff7)) {
    local_b0 = 0;
    local_a8 = &DAT_00000001;
    local_a0 = 0;
                    /* try { // try from 00857e68 to 00857e6f has its CatchHandler @ 00857ff0 */
    FUN_008033e8(lVar1 + -0x20,&local_b0);
    uVar3 = local_a0;
    if (local_b0 != 0) {
      free(local_a8);
    }
    uVar9 = uVar2 - uVar3;
    if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar9,uVar2,&PTR_s__root__cargo_registry_src_index__00ae76b0);
    }
  }
  auVar12 = (**(code **)(param_2 + 0x20))(param_1);
                    /* try { // try from 00857eb0 to 00857ebb has its CatchHandler @ 00858028 */
  (**(code **)(auVar12._8_8_ + 0x30))(auVar12._0_8_,lVar11,uVar9);
  (**(code **)(auVar12._8_8_ + 0x28))(auStack_110,auVar12._0_8_);
  local_c8 = (**(code **)(*(long *)(param_3 + 0x18) + 0x20))(*(undefined8 *)(param_3 + 0x10),0);
  puVar6 = local_c8._8_8_;
  __ptr = local_c8._0_8_;
                    /* try { // try from 00857ef4 to 00857f03 has its CatchHandler @ 00858040 */
  lStack_b8 = param_3;
  FUN_0085dc38(&local_b0,local_c8,auStack_110);
  if (0x40 < local_70) {
                    /* try { // try from 00857fac to 00857fbf has its CatchHandler @ 0085804c */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_70,0x40,&PTR_s__root__cargo_registry_src_index__00ae3c28);
  }
  if (local_70 == param_8) {
    uVar8 = 1;
    if (param_8 != 0) {
      plVar10 = &local_b0;
      do {
                    /* try { // try from 00857f34 to 00857f37 has its CatchHandler @ 00858048 */
        uVar5 = subtle::black_box<u8>((char)*plVar10 == *param_7);
        param_8 = param_8 - 1;
        uVar8 = uVar5 & uVar8;
        param_7 = param_7 + 1;
        plVar10 = (long *)((long)plVar10 + 1);
      } while (param_8 != 0);
    }
  }
  else {
    uVar8 = 0;
  }
                    /* try { // try from 00857f4c to 00857f53 has its CatchHandler @ 0085804c */
  cVar4 = subtle::black_box<u8>(uVar8);
                    /* try { // try from 00857f54 to 00857f5f has its CatchHandler @ 00858040 */
  <rustls::crypto::hmac::Tag_as_core::ops::drop::Drop>::drop(&local_b0);
  pcVar7 = (code *)*puVar6;
  if (pcVar7 != (code *)0x0) {
                    /* try { // try from 00857f68 to 00857f6f has its CatchHandler @ 00858008 */
    (*pcVar7)(__ptr);
  }
  if (puVar6[1] != 0) {
    free(__ptr);
  }
  return cVar4 != '\0';
}


// ===== 00858070  FUN_00858070 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00858070(undefined8 *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
                 long param_6,undefined8 param_7,ulong param_8,long *param_9)

{
  int iVar1;
  long **pplVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  short sVar9;
  void *pvVar10;
  long *plVar11;
  short extraout_w1;
  short extraout_w1_00;
  long *plVar12;
  code *pcVar13;
  short *psVar14;
  short *psVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined1 uVar18;
  ushort *puVar19;
  long lVar20;
  ushort *puVar21;
  long lVar22;
  short *psVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  int *piVar31;
  long lVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  long local_5c8;
  long local_5c0;
  long *local_5b8;
  byte *local_5a8;
  long local_590;
  long local_578;
  undefined8 uStack_570;
  ulong local_568;
  long *local_560;
  long lStack_558;
  long local_550;
  undefined1 auStack_548 [24];
  undefined1 local_530 [104];
  long *local_4c8;
  long lStack_4c0;
  long local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  long local_498;
  long lStack_490;
  long local_488;
  long lStack_480;
  long local_478;
  long lStack_470;
  long local_468;
  long lStack_460;
  long local_458;
  ulong uStack_450;
  long local_448;
  undefined8 uStack_440;
  long *local_438;
  long *plStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  long lStack_408;
  long local_400;
  long local_3f8;
  long lStack_3f0;
  long local_3e8;
  long lStack_3e0;
  long local_3d8;
  long lStack_3d0;
  long local_3c8;
  ulong uStack_3c0;
  long local_3b8;
  long lStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  long local_390;
  long local_388;
  long local_380;
  undefined1 *puStack_378;
  undefined8 local_370;
  long *plStack_368;
  long *local_360;
  long lStack_358;
  long local_350;
  undefined7 uStack_348;
  undefined1 uStack_341;
  undefined7 local_340;
  undefined1 uStack_339;
  undefined7 uStack_338;
  undefined1 uStack_331;
  long local_330;
  long lStack_328;
  long local_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long local_300;
  long lStack_2f8;
  long local_2f0;
  ulong local_2e8;
  long lStack_2e0;
  undefined8 local_2d8;
  long local_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *local_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long local_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong local_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined2 local_148;
  long local_80;
  undefined1 local_78;
  
  if (*(long *)(param_6 + 0x28) == 1) {
    uVar28 = param_9[2];
    if (uVar28 != 0) {
      puVar19 = (ushort *)param_9[1];
      uVar24 = 0;
      puVar5 = puVar19;
LAB_008580d0:
      puVar21 = puVar5 + 2;
      uVar3 = *puVar5;
      uVar16 = uVar24 + 1;
      if ((uVar3 - 7 < 5 || uVar3 == 3) || uVar3 == 5) goto code_r0x008580ec;
      if (uVar16 < uVar28) {
        lVar32 = ~uVar24 + uVar28;
        do {
          if (*puVar21 < 0xc && (1 << (ulong)(*puVar21 & 0x1f) & 0xfa8U) != 0) {
            *(undefined4 *)(puVar19 + uVar24 * 2) = *(undefined4 *)puVar21;
            uVar24 = uVar24 + 1;
          }
          lVar32 = lVar32 + -1;
          puVar21 = puVar21 + 2;
        } while (lVar32 != 0);
      }
      param_9[2] = uVar24;
      lVar32 = *(long *)(param_6 + 0x40);
      uVar28 = uVar24;
      goto joined_r0x00858338;
    }
LAB_008580fc:
    lVar32 = *(long *)(param_6 + 0x40);
joined_r0x00858338:
    if (lVar32 != 0) {
      lVar30 = *(long *)(param_6 + 0x38);
      lVar26 = lVar32 << 6;
      psVar23 = (short *)(lVar30 + 0x20);
      lVar27 = lVar26;
      do {
        uVar24 = *(ulong *)(psVar23 + -0x10) ^ 0x8000000000000000;
        if (0x16 < uVar24) {
          uVar24 = 0x13;
        }
        if (((1L << (uVar24 & 0x3f) & 0x3fff7fU) == 0) && ((uVar24 != 0x16 || (*psVar23 == 0x22))))
        {
          if (*(ulong *)(psVar23 + -0x10) == 0x8000000000000007) {
            local_590 = *(long *)(psVar23 + -8);
            lVar27 = *(long *)(psVar23 + -4);
                    /* try { // try from 0085817c to 0085820f has its CatchHandler @ 0085973c */
            uVar24 = FUN_007f3014(param_6);
            if ((uVar24 & 1) != 0) {
              lVar32 = *param_3;
              local_148 = 4;
              local_200 = (long *)0x8000000000000000;
              uStack_1f8 = 0xd0001;
              <rustls::common_state::rustls::common_state::CommonState>::send_msg
                        (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
              *param_1 = 0x800000000000001a;
              uVar8 = 0x23;
              goto LAB_0085873c;
            }
                    /* try { // try from 008583ac to 0085856f has its CatchHandler @ 0085973c */
            uVar24 = FUN_007f3230(param_6);
            if ((uVar24 & 1) == 0) {
              psVar23 = (short *)(lVar30 + 0x20);
              lVar20 = lVar26;
              goto LAB_00858424;
            }
            lVar32 = *param_3;
            local_148 = 4;
            local_200 = (long *)0x8000000000000000;
            uStack_1f8 = 0xd0001;
            <rustls::common_state::rustls::common_state::CommonState>::send_msg
                      (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
            *param_1 = 0x800000000000001a;
            uVar8 = 0x22;
            goto LAB_0085873c;
          }
          break;
        }
        lVar27 = lVar27 + -0x40;
        psVar23 = psVar23 + 0x20;
      } while (lVar27 != 0);
    }
    lVar32 = *param_3;
    local_148 = 4;
    local_200 = (long *)0x8000000000000000;
    local_360 = (long *)0x8000000000000003;
    uStack_1f8 = 0x60001;
                    /* try { // try from 00858374 to 0085837f has its CatchHandler @ 00859714 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
    *(undefined1 *)(lVar32 + 0x335) = 1;
    *param_1 = 0x8000000000000019;
    param_1[1] = 0x8000000000000003;
    lVar32 = *param_9;
  }
  else {
    lVar32 = *param_3;
    local_148 = 4;
    local_200 = (long *)0x8000000000000000;
    uStack_1f8 = 0xd0001;
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
    *(undefined1 *)(lVar32 + 0x335) = 1;
    *param_1 = 0x800000000000001a;
    *(undefined1 *)(param_1 + 1) = 0x26;
    lVar32 = *param_9;
  }
  uVar8 = true;
  goto joined_r0x00858fc0;
code_r0x008580ec:
  uVar24 = uVar16;
  puVar5 = puVar21;
  if (uVar28 == uVar16) goto LAB_008580fc;
  goto LAB_008580d0;
LAB_00858424:
  uVar24 = *(ulong *)(psVar23 + -0x10) ^ 0x8000000000000000;
  if (0x16 < uVar24) {
    uVar24 = 0x13;
  }
  if (((uVar24 < 0x12) || (uVar24 - 0x13 < 3)) || ((uVar24 == 0x16 && (*psVar23 != 0x16))))
  goto LAB_00858418;
  if (*(ulong *)(psVar23 + -0x10) == 0x8000000000000012) {
    lVar20 = *(long *)(param_2[10] + 0x48);
    if (lVar20 != 0) {
      plVar12 = *(long **)(param_2[10] + 0x40);
      lVar22 = *(long *)(psVar23 + -4);
      plVar11 = plVar12 + lVar20 * 2;
      if (lVar22 == 0) {
        do {
                    /* try { // try from 008586ac to 008586af has its CatchHandler @ 008596d0 */
          (**(code **)(plVar12[1] + 0x28))(*plVar12);
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar11);
      }
      else {
        local_5c8 = lVar22 * 4;
        psVar23 = *(short **)(psVar23 + -8);
        uVar24 = local_5c8 - 4;
        do {
                    /* try { // try from 008588c8 to 008588cb has its CatchHandler @ 00859690 */
          sVar9 = (**(code **)(plVar12[1] + 0x28))(*plVar12);
          psVar15 = psVar23 + 1;
          lVar20 = local_5c8;
          if (sVar9 == 3) {
            do {
              if ((psVar15[-1] == 3) && (*psVar15 == extraout_w1_00)) goto LAB_00858980;
              lVar20 = lVar20 + -4;
              psVar15 = psVar15 + 2;
            } while (lVar20 != 0);
          }
          else {
            psVar15 = psVar23;
            psVar14 = psVar23;
            lVar20 = -((ulong)(((uint)(uVar24 >> 2) & 0x3fffffff) + 1) & 3);
            if ((uVar24 & 0xc) != 0xc) {
              do {
                psVar15 = psVar14 + 2;
                if (*psVar14 == sVar9) goto LAB_00858980;
                bVar7 = lVar20 != -1;
                psVar14 = psVar15;
                lVar20 = lVar20 + 1;
              } while (bVar7);
            }
            if (0xb < uVar24) {
              do {
                if ((((*psVar15 == sVar9) || (psVar15[2] == sVar9)) || (psVar15[4] == sVar9)) ||
                   (psVar15[6] == sVar9)) goto LAB_00858980;
                psVar15 = psVar15 + 8;
              } while (psVar15 != psVar23 + lVar22 * 2);
            }
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar11);
      }
    }
    local_5c0 = 0;
    goto LAB_008584d8;
  }
  goto LAB_008584d0;
LAB_00858418:
  lVar20 = lVar20 + -0x40;
  psVar23 = psVar23 + 0x20;
  if (lVar20 == 0) goto LAB_008584d0;
  goto LAB_00858424;
LAB_00858980:
  local_5c0 = *plVar12;
  local_5c8 = plVar12[1];
  goto LAB_008584d8;
LAB_008584d0:
  local_5c0 = 0;
LAB_008584d8:
  local_5b8 = param_2 + 10;
  psVar23 = (short *)(lVar30 + 0x20);
  do {
    uVar24 = *(ulong *)(psVar23 + -0x10) ^ 0x8000000000000000;
    if (0x16 < uVar24) {
      uVar24 = 0x13;
    }
    if (((0x10 < uVar24) && (3 < uVar24 - 0x12)) && ((uVar24 != 0x16 || (*psVar23 == 0x19)))) {
      if ((*(byte *)(param_2 + 0x15) & 1) == 0) {
        bVar6 = true;
        bVar7 = true;
        goto joined_r0x008586d4;
      }
      lVar32 = *param_3;
      local_148 = 4;
      local_200 = (long *)0x8000000000000000;
      uStack_1f8 = 0xd0001;
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
      *param_1 = 0x800000000000001a;
      uVar8 = 9;
      goto LAB_0085873c;
    }
    lVar26 = lVar26 + -0x40;
    psVar23 = psVar23 + 0x20;
  } while (lVar26 != 0);
  bVar6 = false;
  bVar7 = false;
joined_r0x008586d4:
  if (lVar27 != 0) {
    local_5a8 = (byte *)(param_2 + 0x15);
    lVar27 = lVar27 << 5;
    pcVar13 = *(code **)(param_8 + 0x38);
    do {
                    /* try { // try from 008585bc to 008585c7 has its CatchHandler @ 00859710 */
      sVar9 = (*pcVar13)(param_7);
      if ((*(short *)(local_590 + 0x18) == sVar9) &&
         ((sVar9 != 0xf || (*(short *)(local_590 + 0x1a) == extraout_w1)))) {
        local_578 = local_590;
        local_560 = (long *)0xffffffffffffffff;
        uStack_570 = param_7;
        local_568 = param_8;
        lVar27 = FUN_007f31ac(param_6);
        if (lVar27 == 0) {
LAB_00858c64:
          uVar33 = 0;
          goto LAB_00858c68;
        }
        lVar30 = lVar30 + lVar32 * 0x40;
        uVar24 = *(ulong *)(lVar30 + -0x40) ^ 0x8000000000000000;
        if (0x16 < uVar24) {
          uVar24 = 0x13;
        }
        if (((1L << (uVar24 & 0x3f) & 0x3ffdffU) == 0) &&
           ((uVar24 == 9 || (*(short *)(lVar30 + -0x20) == 0x18)))) {
          lVar32 = FUN_007f3370(param_6);
          if (lVar32 == 0) {
            lVar32 = *param_3;
            local_148 = 4;
            local_200 = (long *)0x8000000000000000;
            uStack_1f8 = 0x190001;
            <rustls::common_state::rustls::common_state::CommonState>::send_msg
                      (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
            *(undefined1 *)(lVar32 + 0x335) = 1;
            *param_1 = 0x800000000000001a;
            uVar8 = 0x20;
            goto LAB_00858684;
          }
          if (*(long *)(lVar27 + 0x28) == 0) {
            lVar32 = *param_3;
            local_148 = 4;
            local_200 = (long *)0x8000000000000000;
            uStack_1f8 = 0x100001;
            <rustls::common_state::rustls::common_state::CommonState>::send_msg
                      (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
            *(undefined1 *)(lVar32 + 0x335) = 1;
            *param_1 = 0x800000000000001a;
            uVar8 = 0x1e;
            goto LAB_00858684;
          }
          if (*(long *)(lVar27 + 0x28) != *(long *)(lVar27 + 0x10)) {
            lVar32 = *param_3;
            local_148 = 4;
            local_200 = (long *)0x8000000000000000;
            uStack_1f8 = 0xd0001;
            <rustls::common_state::rustls::common_state::CommonState>::send_msg
                      (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
            *(undefined1 *)(lVar32 + 0x335) = 1;
            *param_1 = 0x800000000000001a;
            uVar8 = 0x28;
            goto LAB_00858684;
          }
                    /* try { // try from 008589dc to 00858b1f has its CatchHandler @ 008596f0 */
          FUN_00870e08(&local_200,*local_5b8 + 0x10);
          uVar24 = CONCAT44(uStack_1f4,uStack_1f8);
          if (local_200 == (long *)0xffffffffffffffff) {
            if (*(long *)(lVar27 + 0x10) == 0) goto LAB_00858c64;
            lVar30 = *(long *)(lVar27 + 0x10) << 5;
            lVar32 = 0;
            param_8 = 0;
            piVar31 = (int *)(*(long *)(lVar27 + 8) + 0x18);
            goto LAB_00858b5c;
          }
          *param_1 = local_200;
          param_1[1] = uVar24;
          param_1[3] = CONCAT71(uStack_1e7,uStack_1e8);
          param_1[2] = CONCAT71(uStack_1ef,local_1f0);
          param_1[5] = CONCAT71(uStack_1d7,uStack_1d8);
          param_1[4] = CONCAT71(uStack_1df,uStack_1e0);
          param_1[6] = lStack_1d0;
        }
        else {
          lVar32 = *param_3;
          local_148 = 4;
          local_200 = (long *)0x8000000000000000;
          uStack_1f8 = 0xd0001;
                    /* try { // try from 00858664 to 0085866f has its CatchHandler @ 008596f0 */
          <rustls::common_state::rustls::common_state::CommonState>::send_msg
                    (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
          *(undefined1 *)(lVar32 + 0x335) = 1;
          *param_1 = 0x800000000000001a;
          uVar8 = 0x27;
LAB_00858684:
          *(undefined1 *)(param_1 + 1) = uVar8;
        }
        uVar8 = true;
        goto joined_r0x008595d0;
      }
      lVar27 = lVar27 + -0x20;
      local_590 = local_590 + 0x20;
      bVar7 = bVar6;
    } while (lVar27 != 0);
  }
                    /* try { // try from 008586d8 to 008587b3 has its CatchHandler @ 0085973c */
  local_5a8 = (byte *)(param_2 + 0x15);
  FUN_008702dc(param_2 + 3,param_5);
  if ((*local_5a8 & 1) == 0) {
    lVar32 = param_2[0xb];
    lVar30 = *param_3;
    auVar34 = (**(code **)(param_8 + 0x38))(param_7);
    FUN_0085f6a4(param_2 + 3,*(undefined2 *)(lVar32 + 0x48),*(undefined2 *)(lVar32 + 0x4a),
                 param_6 + 0x68,lVar30,auVar34._0_8_ & 0xffffffff,auVar34._8_8_ & 0xffffffff);
    if ((*(byte *)(*param_3 + 0x339) & 1) == 0) {
      local_148 = 4;
      local_200 = (long *)0x8000000000000003;
      <rustls::common_state::rustls::common_state::CommonState>::send_msg(*param_3,&local_200,0);
    }
    local_1b8 = param_2[9];
    local_1b0 = param_2[10];
    uStack_1e0 = (undefined1)param_2[4];
    uStack_1df = (undefined7)((ulong)param_2[4] >> 8);
    uStack_1e8 = (undefined1)param_2[3];
    uStack_1e7 = (undefined7)((ulong)param_2[3] >> 8);
    lStack_1d0 = param_2[6];
    lStack_1c0 = param_2[8];
    local_1c8 = param_2[7];
    local_1f0 = (undefined1)param_2[2];
    uStack_1ef = (undefined7)((ulong)param_2[2] >> 8);
    lStack_180 = param_2[0x14];
    lStack_1a0 = 0;
    lStack_1a8 = 0;
    lStack_190 = 0;
    lStack_198 = 0;
    local_200 = (long *)*param_2;
    uVar25 = 0x4000;
    if (*(uint *)(local_1b0 + 0xf0) != 0) {
      uVar25 = *(uint *)(local_1b0 + 0xf0);
    }
    uStack_1d8 = (undefined1)param_2[5];
    uStack_1d7 = (undefined7)((ulong)param_2[5] >> 8);
    local_188 = 0;
    uStack_1f8 = (uint)param_2[1];
    uStack_1f4 = (undefined4)((ulong)param_2[1] >> 0x20);
    uStack_178 = CONCAT62(uStack_178._2_6_,0x100);
                    /* try { // try from 0085881c to 00858823 has its CatchHandler @ 008596d4 */
    plVar12 = (long *)FUN_0085e1c8(0x90);
    plVar12[0xd] = lStack_198;
    plVar12[0xc] = lStack_1a0;
    plVar12[0xf] = local_188;
    plVar12[0xe] = lStack_190;
    plVar12[0x11] = uStack_178;
    plVar12[0x10] = lStack_180;
    plVar12[5] = CONCAT71(uStack_1d7,uStack_1d8);
    plVar12[4] = CONCAT71(uStack_1df,uStack_1e0);
    plVar12[7] = local_1c8;
    plVar12[6] = lStack_1d0;
    plVar12[9] = local_1b8;
    plVar12[8] = lStack_1c0;
    plVar12[0xb] = lStack_1a8;
    plVar12[10] = local_1b0;
    plVar12[1] = CONCAT44(uStack_1f4,uStack_1f8);
    *plVar12 = (long)local_200;
    plVar12[3] = CONCAT71(uStack_1e7,uStack_1e8);
    plVar12[2] = CONCAT71(uStack_1ef,local_1f0);
    if (bVar7) {
      uStack_1f4 = 0;
      local_200 = plVar12;
      uStack_1f8 = uVar25;
                    /* try { // try from 00858860 to 00858867 has its CatchHandler @ 008596bc */
      plVar11 = (long *)FUN_0085e1c8(0x10);
      *plVar11 = (long)plVar12;
      plVar11[1] = (ulong)uVar25;
      ppuVar17 = &PTR_FUN_00ae7860;
      plVar12 = plVar11;
    }
    else {
      ppuVar17 = &PTR_FUN_00ae7818;
    }
    param_1[1] = plVar12;
    param_1[2] = ppuVar17;
    *param_1 = 0xffffffffffffffff;
    if (*param_9 == 0) {
      return;
    }
    pvVar10 = (void *)param_9[1];
    goto LAB_008582b4;
  }
  lVar32 = *param_3;
  local_148 = 4;
  local_200 = (long *)0x8000000000000000;
  uStack_1f8 = 0xd0001;
  <rustls::common_state::rustls::common_state::CommonState>::send_msg
            (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
  *param_1 = 0x800000000000001a;
  uVar8 = 0x29;
LAB_0085873c:
  *(undefined1 *)(lVar32 + 0x335) = 1;
  *(undefined1 *)(param_1 + 1) = uVar8;
  uVar8 = true;
  lVar32 = *param_9;
  goto joined_r0x00858fc0;
  while( true ) {
    uVar33 = 0;
    lVar30 = lVar30 + -0x20;
    lVar32 = lVar32 + 0x18;
    piVar31 = piVar31 + 8;
    param_8 = param_8 + 1;
    if (lVar30 == 0) break;
LAB_00858b5c:
                    /* try { // try from 00858b68 to 00858c33 has its CatchHandler @ 00859684 */
    FUN_00859808(&local_200,*local_5b8,*(undefined8 *)(piVar31 + -4),*(undefined8 *)(piVar31 + -2));
    if (local_200 != (long *)0xffffffffffffffff) {
      uVar16 = 0;
      if (local_188 <= uVar24) {
        uVar16 = uVar24 - local_188;
      }
      uVar16 = (uVar16 & 0xffffffff) * 1000;
      if ((uVar16 & 0xffffffff00000000) != 0) {
        uVar16 = 0xffffffff;
      }
      lStack_318 = local_1b8;
      local_320 = lStack_1c0;
      lStack_308 = lStack_1a8;
      lStack_310 = local_1b0;
      lStack_358 = CONCAT44(uStack_1f4,uStack_1f8);
      local_350 = CONCAT71(uStack_1ef,local_1f0);
      uVar29 = (*piVar31 - (int)uStack_178) - (uint)uVar16;
      local_2f0 = lStack_190;
      uVar25 = -uVar29;
      if ((uint)uVar16 <= (uint)(*piVar31 - (int)uStack_178) && uVar29 != 0) {
        uVar25 = uVar29;
      }
      lStack_2f8 = lStack_198;
      local_300 = lStack_1a0;
      uStack_348 = (undefined7)CONCAT71(uStack_1e7,uStack_1e8);
      uStack_341 = (undefined1)((uint7)uStack_1e7 >> 0x30);
      uStack_338 = (undefined7)CONCAT71(uStack_1d7,uStack_1d8);
      uStack_331 = (undefined1)((uint7)uStack_1d7 >> 0x30);
      local_340 = (undefined7)CONCAT71(uStack_1df,uStack_1e0);
      uStack_339 = (undefined1)((uint7)uStack_1df >> 0x30);
      lStack_328 = local_1c8;
      local_330 = lStack_1d0;
      local_2d8 = CONCAT26(uStack_178._6_2_,CONCAT15(uVar25 < 0xea61,(int5)uStack_178));
      lStack_2e0 = lStack_180;
      local_2e8 = local_188;
    }
    local_360 = local_200;
    FUN_008533cc(&local_4c8,&local_360,*(undefined2 *)(param_2[0xb] + 0x48),
                 *(undefined2 *)(param_2[0xb] + 0x4a),param_3[1] + 0x70);
    if (local_4c8 != (long *)0xffffffffffffffff) {
      lStack_2f8 = lStack_460;
      local_300 = local_468;
      local_2e8 = uStack_450;
      local_2f0 = local_458;
      local_2d8 = uStack_440;
      lStack_2e0 = local_448;
      uStack_338 = (undefined7)uStack_4a0;
      uStack_331 = (undefined1)((ulong)uStack_4a0 >> 0x38);
      local_340 = (undefined7)local_4a8;
      uStack_339 = (undefined1)((ulong)local_4a8 >> 0x38);
      lStack_328 = lStack_490;
      local_330 = local_498;
      lStack_318 = lStack_480;
      local_320 = local_488;
      lStack_308 = lStack_470;
      lStack_310 = local_478;
      lStack_358 = lStack_4c0;
      local_360 = local_4c8;
      uStack_348 = (undefined7)uStack_4b0;
      uStack_341 = (undefined1)((ulong)uStack_4b0 >> 0x38);
      local_350 = local_4b8;
      if (*(ulong *)(lVar27 + 0x28) <= param_8) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (param_8,*(ulong *)(lVar27 + 0x28),
                   &PTR_s__root__cargo_registry_src_index__00ae76e0);
      }
      lVar32 = *(long *)(lVar27 + 0x20) + lVar32;
                    /* try { // try from 008594e0 to 008595e7 has its CatchHandler @ 00859600 */
      uVar24 = FUN_00857ddc(param_2[8],param_2[9],param_2[0xb],param_5,lStack_4c0,local_4b8,
                            *(undefined8 *)(lVar32 + 8),*(undefined8 *)(lVar32 + 0x10));
      if ((uVar24 & 1) == 0) {
        lVar32 = *param_3;
        local_148 = 4;
        local_200 = (long *)0x8000000000000000;
        uStack_1f8 = 0x110001;
        <rustls::common_state::rustls::common_state::CommonState>::send_msg
                  (lVar32,&local_200,*(char *)(lVar32 + 0x49) == '\x02');
        uVar8 = true;
        *(undefined1 *)(lVar32 + 0x335) = 1;
        *param_1 = 0x800000000000001a;
        *(undefined1 *)(param_1 + 1) = 0x17;
        FUN_00853e5c(&local_360);
        goto joined_r0x008595d0;
      }
      if (local_560 != (long *)0xffffffffffffffff) {
        FUN_00853e5c(&local_560);
      }
      uVar33 = 1;
      local_550 = local_4b8;
      lStack_558 = lStack_4c0;
      local_560 = local_4c8;
      break;
    }
  }
LAB_00858c68:
                    /* try { // try from 00858c6c to 00858d9b has its CatchHandler @ 008596f0 */
  uVar24 = FUN_007f2ad0(param_6,1);
  if ((uVar24 & 1) == 0) {
    param_2[0x14] = 0;
    if (local_560 != (long *)0xffffffffffffffff) {
      FUN_00853e5c(&local_560);
    }
    uVar33 = 0;
    bVar7 = true;
    local_560 = (long *)0xffffffffffffffff;
  }
  else {
    param_2[0x14] = *(long *)(param_2[10] + 0xe8);
    if (local_560 == (long *)0xffffffffffffffff) {
      bVar7 = true;
    }
    else {
      FUN_00808b48(&local_200,auStack_548);
      lVar32 = param_3[1];
      lStack_358 = CONCAT44(uStack_1f4,uStack_1f8);
      local_350 = CONCAT71(uStack_1ef,local_1f0);
      local_360 = local_200;
      if (0 < *(long *)(lVar32 + 0x58)) {
        free(*(void **)(lVar32 + 0x60));
        lVar32 = param_3[1];
      }
      *(long *)(lVar32 + 0x60) = lStack_358;
      *(long **)(lVar32 + 0x58) = local_360;
      *(long *)(lVar32 + 0x68) = local_350;
      FUN_008613bc(*param_3 + 0x2f0,local_530);
      bVar7 = local_560 == (long *)0xffffffffffffffff;
    }
  }
  FUN_008702dc(param_2 + 3,param_5);
  lVar32 = 0;
  if (!bVar7) {
    lVar32 = lStack_558;
  }
  FUN_0085ea04(&local_200,param_2 + 3,param_2 + 0xc,param_2[0xb],*param_3,param_6 + 0x68,&local_578,
               uVar33,param_8,lVar32,local_550,*(undefined8 *)(param_2[10] + 0xb0),
               *(undefined8 *)(param_2[10] + 0xb8));
  lStack_428 = CONCAT71(uStack_1ef,local_1f0);
  plStack_430 = (long *)CONCAT44(uStack_1f4,uStack_1f8);
  lStack_420 = CONCAT71(uStack_1e7,uStack_1e8);
  uVar8 = local_200 == (long *)0x0;
  local_330 = local_1c8;
  uStack_348 = (undefined7)CONCAT71(uStack_1df,uStack_1e0);
  uStack_341 = (undefined1)((uint7)uStack_1df >> 0x30);
  uStack_338 = (undefined7)lStack_1d0;
  uStack_331 = (undefined1)((ulong)lStack_1d0 >> 0x38);
  local_340 = (undefined7)CONCAT71(uStack_1d7,uStack_1d8);
  uStack_339 = (undefined1)((uint7)uStack_1d7 >> 0x30);
  if (local_200 == (long *)0x0) {
    param_1[5] = lStack_1d0;
    param_1[4] = CONCAT17(uStack_339,local_340);
    param_1[1] = lStack_428;
    *param_1 = plStack_430;
    param_1[3] = CONCAT17(uStack_341,uStack_348);
    param_1[2] = lStack_420;
    param_1[6] = local_1c8;
    local_360 = plStack_430;
    lStack_358 = lStack_428;
    local_350 = lStack_420;
  }
  else {
    lVar32 = *param_3;
    local_438 = local_200;
    lStack_3b0 = uStack_178;
    local_3b8 = lStack_180;
    uStack_3a0 = uStack_168;
    local_3a8 = uStack_170;
    local_398 = local_160;
    lStack_3f0 = local_1b8;
    local_3f8 = lStack_1c0;
    lStack_3e0 = lStack_1a8;
    local_3e8 = local_1b0;
    uStack_3c0 = local_188;
    local_3c8 = lStack_190;
    lStack_3d0 = lStack_198;
    local_3d8 = lStack_1a0;
    uStack_418 = CONCAT17(uStack_341,uStack_348);
    lStack_408 = lStack_1d0;
    local_410 = CONCAT17(uStack_339,local_340);
    local_400 = local_1c8;
    if (((*local_5a8 & 1) == 0) && ((*(byte *)(lVar32 + 0x339) & 1) == 0)) {
      local_148 = 4;
      local_200 = (long *)0x8000000000000003;
                    /* try { // try from 00858e94 to 00858e9f has its CatchHandler @ 00859678 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg(lVar32,&local_200,0);
      lVar32 = *param_3;
    }
    if (bVar7) {
      if (*(char *)(lVar32 + 0x33d) == -1) {
        uVar18 = 0;
        goto LAB_00858ec8;
      }
    }
    else {
      uVar18 = 2;
LAB_00858ec8:
      *(undefined1 *)(lVar32 + 0x33d) = uVar18;
    }
    local_390 = param_4[1];
    local_388 = param_4[2];
    lStack_358 = param_2[1];
    local_360 = (long *)*param_2;
    local_380 = 0;
    puStack_378 = &DAT_00000001;
    local_350 = param_2[2];
    local_370 = 0;
    pplVar2 = (long **)0x0;
    if (local_560 != (long *)0xffffffffffffffff) {
      pplVar2 = &local_560;
    }
                    /* try { // try from 00858f1c to 00858f3b has its CatchHandler @ 00859694 */
    plStack_368 = param_2 + 3;
    FUN_0085f91c(&local_200,&local_380,*(undefined2 *)(param_2[0xb] + 0x48),
                 *(undefined2 *)(param_2[0xb] + 0x4a),param_3,&local_390,param_6,pplVar2,&local_360,
                 param_2[10] + 0x10);
    uVar25 = uStack_1f8 & 0xff;
    if (local_200 == (long *)0xffffffffffffffff) {
      if (bVar7) {
                    /* try { // try from 00858fd4 to 008590a3 has its CatchHandler @ 00859694 */
        FUN_0085fcec(&local_200,&local_380,*local_5b8 + 0x10);
        uVar29 = uStack_1f8 & 0xff;
        if (local_200 != (long *)0xffffffffffffffff) {
          *param_1 = local_200;
          local_350 = CONCAT17(uStack_1e0,uStack_1e7);
          lStack_358 = CONCAT17(uStack_1e8,uStack_1ef);
          local_360 = (long *)CONCAT17(local_1f0,CONCAT43(uStack_1f4,uStack_1f8._1_3_));
          *(undefined1 *)(param_1 + 1) = (undefined1)uStack_1f8;
          goto LAB_00858f68;
        }
        if (local_5c0 == 0) {
          lVar32 = *param_4;
                    /* try { // try from 008592c8 to 00859307 has its CatchHandler @ 00859694 */
          FUN_0085f624(&local_380,*(undefined8 *)(lVar32 + 8),*(undefined8 *)(lVar32 + 0x10),
                       local_390,local_388);
        }
        else {
          lVar32 = *param_4;
                    /* try { // try from 00859204 to 0085920f has its CatchHandler @ 00859694 */
          FUN_00860440(&local_380,*(undefined8 *)(*local_5b8 + 0xd0),*(undefined8 *)(lVar32 + 8),
                       *(undefined8 *)(lVar32 + 0x10),local_390,local_388,local_5c0,local_5c8);
        }
        FUN_00860170(&local_200,&local_380,*param_3,
                     *(long *)(lVar32 + 0x30) +
                     (*(long *)(*(long *)(lVar32 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                     *(undefined8 *)(*(long *)(lVar32 + 0x38) + 0x20),param_9[1],uVar28);
        if (local_200 == (long *)0xffffffffffffffff) goto LAB_00859018;
      }
      else {
        uVar29 = 0;
LAB_00859018:
        if (uVar25 == 0) {
          lVar32 = *param_3;
          auVar34 = FUN_0085d4b4(lStack_428,&lStack_420);
          FUN_00868d9c(lVar32,auVar34._0_8_,auVar34._8_8_);
LAB_00859078:
          FUN_0086f1b8(param_3[1]);
        }
        else {
          if (uVar25 == 1) {
            iVar1 = 0x4000;
            if (*(int *)(*local_5b8 + 0xf0) != 0) {
              iVar1 = *(int *)(*local_5b8 + 0xf0);
            }
            FUN_0085b85c(&local_438,iVar1,*param_3);
            goto LAB_00859078;
          }
          FUN_0086f090(param_3[1],*(undefined4 *)(*local_5b8 + 0xf0));
        }
        FUN_0084cdfc(&local_200,*param_3);
        if (local_200 == (long *)0xffffffffffffffff) {
          uStack_178 = lStack_3b0;
          lStack_180 = local_3b8;
          uStack_168 = uStack_3a0;
          uStack_170 = local_3a8;
          local_1c8 = local_400;
          lStack_1d0 = lStack_408;
          local_1b8 = lStack_3f0;
          lStack_1c0 = local_3f8;
          uStack_1d8 = (undefined1)local_410;
          uStack_1d7 = (undefined7)((ulong)local_410 >> 8);
          uStack_1e0 = (undefined1)uStack_418;
          uStack_1df = (undefined7)((ulong)uStack_418 >> 8);
          local_188 = uStack_3c0;
          lStack_190 = local_3c8;
          lStack_1a8 = lStack_3e0;
          local_1b0 = local_3e8;
          lStack_198 = lStack_3d0;
          lStack_1a0 = local_3d8;
          uStack_1f8 = (uint)plStack_430;
          uStack_1f4 = (undefined4)((ulong)plStack_430 >> 0x20);
          local_200 = local_438;
          uStack_1e8 = (undefined1)lStack_420;
          uStack_1e7 = (undefined7)((ulong)lStack_420 >> 8);
          local_1f0 = (undefined1)lStack_428;
          uStack_1ef = (undefined7)((ulong)lStack_428 >> 8);
          local_160 = local_398;
          puStack_218 = puStack_378;
          local_220 = local_380;
          plStack_208 = plStack_368;
          uStack_210 = local_370;
                    /* try { // try from 00859148 to 0085915b has its CatchHandler @ 0085966c */
          FUN_0085f190(&local_360,&local_220,param_2 + 0xc,*param_3,&local_200,
                       *(undefined8 *)(*local_5b8 + 0xb0),*(undefined8 *)(*local_5b8 + 0xb8));
          lVar32 = *local_5b8;
          if ((uVar29 & 1) == 0) {
            if (*(char *)(lVar32 + 0xf6) == '\x01') {
                    /* try { // try from 00859228 to 0085922b has its CatchHandler @ 00859628 */
              FUN_0084ccc4(*param_3,param_3 + 2);
            }
            if (uVar25 == 2) {
              lVar32 = *local_5b8;
              if ((*(byte *)(*param_3 + 0x339) & 1) == 0) {
                lVar30 = param_2[0xb];
                local_200 = (long *)param_2[3];
                lStack_1d0 = param_2[9];
                uStack_1d8 = (undefined1)param_2[8];
                uStack_1d7 = (undefined7)((ulong)param_2[8] >> 8);
                uStack_1e0 = (undefined1)param_2[7];
                uStack_1df = (undefined7)((ulong)param_2[7] >> 8);
                uStack_1f8 = (uint)param_2[4];
                uStack_1f4 = (undefined4)((ulong)param_2[4] >> 0x20);
                uStack_1e8 = (undefined1)param_2[6];
                uStack_1e7 = (undefined7)((ulong)param_2[6] >> 8);
                local_1f0 = (undefined1)param_2[5];
                uStack_1ef = (undefined7)((ulong)param_2[5] >> 8);
                memcpy(&local_1b8,&local_360,0x138);
                local_80 = param_2[0x14];
                local_1c8 = lVar32;
                lStack_1c0 = lVar30;
                    /* try { // try from 00859290 to 00859297 has its CatchHandler @ 008595ec */
                pvVar10 = (void *)FUN_0085e1c8(0x188);
                memcpy(pvVar10,&local_200,0x188);
                ppuVar17 = &PTR_FUN_00ae76f8;
                goto LAB_0085941c;
              }
            }
            else {
              lVar32 = *local_5b8;
            }
            lVar30 = param_2[0xb];
            local_200 = (long *)param_2[3];
            lStack_1d0 = param_2[9];
            uStack_1d8 = (undefined1)param_2[8];
            uStack_1d7 = (undefined7)((ulong)param_2[8] >> 8);
            uStack_1e0 = (undefined1)param_2[7];
            uStack_1df = (undefined7)((ulong)param_2[7] >> 8);
            uStack_1f8 = (uint)param_2[4];
            uStack_1f4 = (undefined4)((ulong)param_2[4] >> 0x20);
            uStack_1e8 = (undefined1)param_2[6];
            uStack_1e7 = (undefined7)((ulong)param_2[6] >> 8);
            local_1f0 = (undefined1)param_2[5];
            uStack_1ef = (undefined7)((ulong)param_2[5] >> 8);
            memcpy(&local_1b8,&local_360,0x138);
            local_80 = param_2[0x14];
            local_1c8 = lVar32;
            lStack_1c0 = lVar30;
                    /* try { // try from 0085938c to 00859393 has its CatchHandler @ 00859650 */
            pvVar10 = (void *)FUN_0085e1c8(0x188);
            memcpy(pvVar10,&local_200,0x188);
            ppuVar17 = &PTR_FUN_00ae7740;
          }
          else if (*(long *)(lVar32 + 0x60) == 0) {
            lVar30 = param_2[0xb];
            local_200 = (long *)param_2[3];
            lStack_1d0 = param_2[9];
            uStack_1d8 = (undefined1)param_2[8];
            uStack_1d7 = (undefined7)((ulong)param_2[8] >> 8);
            uStack_1e0 = (undefined1)param_2[7];
            uStack_1df = (undefined7)((ulong)param_2[7] >> 8);
            uStack_1f8 = (uint)param_2[4];
            uStack_1f4 = (undefined4)((ulong)param_2[4] >> 0x20);
            uStack_1e8 = (undefined1)param_2[6];
            uStack_1e7 = (undefined7)((ulong)param_2[6] >> 8);
            local_1f0 = (undefined1)param_2[5];
            uStack_1ef = (undefined7)((ulong)param_2[5] >> 8);
            memcpy(&local_1b8,&local_360,0x138);
            local_80 = param_2[0x14];
            local_78 = 0;
            local_1c8 = lVar32;
            lStack_1c0 = lVar30;
                    /* try { // try from 008593fc to 00859403 has its CatchHandler @ 00859614 */
            pvVar10 = (void *)FUN_0085e1c8(400);
            memcpy(pvVar10,&local_200,400);
            ppuVar17 = &PTR_FUN_00ae77d0;
          }
          else {
            lVar30 = param_2[0xb];
            local_200 = (long *)param_2[3];
            lStack_1d0 = param_2[9];
            uStack_1d8 = (undefined1)param_2[8];
            uStack_1d7 = (undefined7)((ulong)param_2[8] >> 8);
            uStack_1e0 = (undefined1)param_2[7];
            uStack_1df = (undefined7)((ulong)param_2[7] >> 8);
            uStack_1f8 = (uint)param_2[4];
            uStack_1f4 = (undefined4)((ulong)param_2[4] >> 0x20);
            uStack_1e8 = (undefined1)param_2[6];
            uStack_1e7 = (undefined7)((ulong)param_2[6] >> 8);
            local_1f0 = (undefined1)param_2[5];
            uStack_1ef = (undefined7)((ulong)param_2[5] >> 8);
            memcpy(&local_1b8,&local_360,0x138);
            local_80 = param_2[0x14];
            local_1c8 = lVar32;
            lStack_1c0 = lVar30;
                    /* try { // try from 008591b8 to 008591bf has its CatchHandler @ 0085963c */
            pvVar10 = (void *)FUN_0085e1c8(0x188);
            memcpy(pvVar10,&local_200,0x188);
            ppuVar17 = &PTR_FUN_00ae7788;
          }
LAB_0085941c:
          param_1[1] = pvVar10;
          param_1[2] = ppuVar17;
          *param_1 = 0xffffffffffffffff;
          if (local_560 != (long *)0xffffffffffffffff) {
            FUN_00853e5c(&local_560);
          }
          if (*param_9 == 0) {
            return;
          }
          pvVar10 = (void *)param_9[1];
          goto LAB_008582b4;
        }
      }
      param_1[5] = CONCAT71(uStack_1d7,uStack_1d8);
      param_1[4] = CONCAT71(uStack_1df,uStack_1e0);
      param_1[1] = CONCAT44(uStack_1f4,uStack_1f8);
      *param_1 = local_200;
      param_1[3] = CONCAT71(uStack_1e7,uStack_1e8);
      param_1[2] = CONCAT71(uStack_1ef,local_1f0);
      param_1[6] = lStack_1d0;
    }
    else {
      *param_1 = local_200;
      local_350 = CONCAT17(uStack_1e0,uStack_1e7);
      lStack_358 = CONCAT17(uStack_1e8,uStack_1ef);
      local_360 = (long *)CONCAT17(local_1f0,CONCAT43(uStack_1f4,uStack_1f8._1_3_));
      *(undefined1 *)(param_1 + 1) = (undefined1)uStack_1f8;
LAB_00858f68:
      uStack_339 = (undefined1)lStack_1d0;
      uStack_338 = (undefined7)((ulong)lStack_1d0 >> 8);
      *(long *)((long)param_1 + 0x11) = lStack_358;
      *(long **)((long)param_1 + 9) = local_360;
      *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_1d8,uStack_1df);
      *(long *)((long)param_1 + 0x19) = local_350;
      param_1[6] = lStack_1d0;
      param_1[5] = CONCAT71(uStack_1d7,uStack_1d8);
      uStack_348 = uStack_1df;
      uStack_341 = uStack_1d8;
      local_340 = uStack_1d7;
    }
    if (local_380 != 0) {
      free(puStack_378);
    }
                    /* try { // try from 00858f98 to 00858fa3 has its CatchHandler @ 008596f0 */
    FUN_00854b74(&local_438);
  }
joined_r0x008595d0:
  if (local_560 != (long *)0xffffffffffffffff) {
    FUN_00853e5c(&local_560);
  }
  lVar32 = *param_9;
joined_r0x00858fc0:
  if (lVar32 != 0) {
    free((void *)param_9[1]);
  }
  plVar12 = (long *)param_2[10];
  do {
    lVar32 = *plVar12;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar32 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar32 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0085826c to 0085826f has its CatchHandler @ 00859728 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow();
  }
                    /* try { // try from 00858270 to 00858277 has its CatchHandler @ 008597a8 */
  FUN_00853ce0(param_2 + 3);
  if (!(bool)uVar8) {
    return;
  }
  lVar32 = param_2[2] + 1;
  lVar30 = param_2[1];
  while (lVar32 = lVar32 + -1, lVar32 != 0) {
                    /* try { // try from 00858290 to 00858293 has its CatchHandler @ 008597c0 */
    FUN_007ff230(lVar30);
    lVar30 = lVar30 + 0x28;
  }
  if (*param_2 == 0) {
    return;
  }
  pvVar10 = (void *)param_2[1];
LAB_008582b4:
  free(pvVar10);
  return;
}


// ===== 00859808  FUN_00859808 =====

void FUN_00859808(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  uVar1 = (**(code **)(*(long *)(param_2 + 0x88) + 0x20))
                    (*(long *)(param_2 + 0x80) +
                     (*(long *)(*(long *)(param_2 + 0x88) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
  ;
  if ((uVar1 & 1) == 0) {
    (**(code **)(*(long *)(param_2 + 0x78) + 0x30))
              (&local_e8,
               *(long *)(param_2 + 0x70) +
               (*(long *)(*(long *)(param_2 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               param_3,param_4);
    if (local_e8 == -1) goto LAB_00859974;
                    /* try { // try from 0085993c to 00859947 has its CatchHandler @ 00859994 */
    FUN_008457d8(&local_d0,local_e0,uStack_d8);
  }
  else {
    (**(code **)(*(long *)(param_2 + 0x88) + 0x38))
              (&local_e8,
               *(long *)(param_2 + 0x80) +
               (*(long *)(*(long *)(param_2 + 0x88) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               param_3,param_4);
    if (local_e8 == -1) {
LAB_00859974:
      *param_1 = -1;
      return;
    }
                    /* try { // try from 00859894 to 0085989f has its CatchHandler @ 00859998 */
    FUN_008457d8(&local_d0,local_e0,uStack_d8);
  }
  if (local_d0 == -1) {
    *param_1 = -1;
  }
  else {
    param_1[0xd] = lStack_68;
    param_1[0xc] = local_70;
    param_1[0xf] = lStack_58;
    param_1[0xe] = local_60;
    param_1[0x11] = lStack_48;
    param_1[0x10] = lStack_50;
    param_1[5] = lStack_a8;
    param_1[4] = local_b0;
    param_1[7] = lStack_98;
    param_1[6] = lStack_a0;
    param_1[9] = lStack_88;
    param_1[8] = local_90;
    param_1[0xb] = lStack_78;
    param_1[10] = lStack_80;
    param_1[1] = lStack_c8;
    *param_1 = local_d0;
    param_1[3] = lStack_b8;
    param_1[2] = lStack_c0;
  }
  if (local_e8 != 0) {
    free(local_e0);
    return;
  }
  return;
}


// ===== 008599b8  <rustls::msgs::message::[0]::rustls::msgs::message::PlainMessage>::into_unencrypted_opaque =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::[0]::rustls::msgs::message::PlainMessage>::into_unencrypted_opaque */

void __rustcall
<rustls::msgs::message::[0]::rustls::msgs::message::PlainMessage>::into_unencrypted_opaque
          (long *param_1,long *param_2)

{
  long lVar1;
  void *__src;
  size_t __n;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  __src = (void *)param_2[1];
  __n = param_2[2];
  lVar1 = __n + 5;
  if (lVar1 < 0) {
    uVar8 = 0;
  }
  else {
    lVar5 = param_2[3];
    uVar4 = *(undefined2 *)((long)param_2 + 0x1a);
    uVar2 = *(undefined1 *)((long)param_2 + 0x1c);
    uVar3 = *(undefined1 *)((long)param_2 + 0x1d);
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar8 = 1;
    puVar6 = (undefined4 *)FUN_004b25a4(lVar1,1);
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = 0;
      if (__n != 0) {
        memcpy((void *)((long)puVar6 + 5),__src,__n);
      }
      lVar7 = *param_2;
      *(undefined1 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined1 *)((long)param_1 + 0x1d) = uVar3;
      *(short *)(param_1 + 3) = (short)lVar5;
      *(undefined2 *)((long)param_1 + 0x1a) = uVar4;
      *param_1 = lVar1;
      param_1[1] = (long)puVar6;
      param_1[2] = lVar1;
      if (0 < lVar7) {
        free(__src);
        return;
      }
      return;
    }
  }
                    /* try { // try from 008599ec to 008599f7 has its CatchHandler @ 00859abc */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,lVar1);
}


// ===== 00859ae0  FUN_00859ae0 =====

void FUN_00859ae0(undefined8 *param_1,undefined1 (*param_2) [16],long *param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long extraout_x1;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_168 [64];
  ulong local_128;
  undefined1 auStack_120 [64];
  ulong local_e0;
  ushort local_d4 [2];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  ushort *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  ulong uStack_70;
  
  uVar4 = param_3[2];
  uVar7 = param_3[3];
  if (uVar4 < uVar7) {
    ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ae6368;
    local_e0 = uVar4;
  }
  else {
    lVar9 = *(long *)param_2[1];
    puVar8 = (undefined1 *)param_3[1];
                    /* try { // try from 00859b2c to 00859bcf has its CatchHandler @ 00859d28 */
    (**(code **)(*(long *)(lVar9 + 0x38) + 0x18))(*(undefined8 *)(lVar9 + 0x30));
    (**(code **)(extraout_x1 + 0x28))(auStack_120);
    if (local_e0 < 0x41) {
      __ptr = *(void **)*param_2;
      puVar1 = *(undefined8 **)(*param_2 + 8);
      uVar3 = (*(code *)puVar1[5])(__ptr);
      local_d4[0] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
      local_d0[0] = 0xd;
      local_c8 = local_d4;
      local_cc[0] = (undefined1)local_e0;
      uStack_c0 = 2;
      local_b8 = local_d0;
      uStack_b0 = 1;
      local_a8 = "tls13 ";
      uStack_a0 = 6;
      local_98 = &DAT_002fed7f;
      uStack_90 = 7;
      local_88 = local_cc;
      uStack_80 = 1;
      local_78 = auStack_120;
      uStack_70 = local_e0;
      (*(code *)puVar1[4])(auStack_168,__ptr,&local_c8,6);
      if (0x40 < local_128) {
                    /* try { // try from 00859cb4 to 00859ccb has its CatchHandler @ 00859d14 */
                    /* WARNING: Subroutine does not return */
        core::slice::index::slice_index_fail
                  (0,local_128,0x40,&PTR_s__root__cargo_registry_src_index__00ae8520);
      }
                    /* try { // try from 00859be4 to 00859bf3 has its CatchHandler @ 00859d14 */
      auVar11 = (**(code **)(*(long *)(lVar9 + 0x18) + 0x20))
                          (*(undefined8 *)(lVar9 + 0x10),auStack_168,local_128,puVar8 + uVar7,
                           uVar4 - uVar7);
      if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00859c04 to 00859c0b has its CatchHandler @ 00859cec */
        (*(code *)*puVar1)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
      *param_2 = auVar11;
                    /* try { // try from 00859c24 to 00859c2b has its CatchHandler @ 00859d28 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(auStack_168);
      uVar10 = *(undefined8 *)*param_2;
      uVar6 = *(undefined8 *)param_2[1];
      param_1[1] = *(undefined8 *)(*param_2 + 8);
      *param_1 = uVar10;
      param_1[2] = uVar6;
      puVar2 = puVar8;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      lVar9 = *param_3;
      param_3[2] = 0;
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      if (*param_3 != 0) {
        free((void *)param_3[1]);
      }
      return;
    }
    uVar7 = 0;
    ppuVar5 = &PTR_s__root__cargo_registry_src_index__00ae6878;
    uVar4 = 0x40;
  }
                    /* try { // try from 00859cdc to 00859ce7 has its CatchHandler @ 00859d28 */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(uVar7,local_e0,uVar4,ppuVar5);
}


// ===== 00859d50  <rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_notify =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_notify */

void __rustcall
<rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_notify
          (undefined8 *param_1)

{
  undefined8 local_190 [23];
  undefined8 local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_40 = 0x11;
  local_38 = 0;
  uStack_30 = 1;
  local_d8 = 0x8000000000000011;
  uStack_d0 = 0;
  local_28 = 0;
  local_190[0] = 0x8000000000000000;
                    /* try { // try from 00859d90 to 00859d9f has its CatchHandler @ 00859e44 */
  FUN_007f0930(&local_d8,&local_38,local_190);
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  *(undefined2 *)(param_1 + 0x17) = 5;
  param_1[0x16] = CONCAT71(uStack_3f,local_40);
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[0x13] = local_58;
  param_1[0x12] = uStack_60;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = local_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = local_78;
  param_1[0xe] = uStack_80;
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[3] = local_d8;
  param_1[2] = local_28;
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,uStack_d0);
  param_1[7] = local_b8;
  param_1[6] = uStack_c0;
  return;
}


// ===== 00859e70  <rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_request =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_request */

void __rustcall
<rustls::msgs::message::[1]::rustls::msgs::message::Message>::build_key_update_request
          (undefined8 *param_1)

{
  undefined8 local_190 [23];
  undefined8 local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_40 = 0x11;
  uStack_d0 = 1;
  local_38 = 0;
  uStack_30 = 1;
  local_d8 = 0x8000000000000011;
  local_28 = 0;
  local_190[0] = 0x8000000000000000;
                    /* try { // try from 00859eb0 to 00859ebf has its CatchHandler @ 00859f64 */
  FUN_007f0930(&local_d8,&local_38,local_190);
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  *(undefined2 *)(param_1 + 0x17) = 5;
  param_1[0x16] = CONCAT71(uStack_3f,local_40);
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  param_1[0x13] = local_58;
  param_1[0x12] = uStack_60;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = local_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = local_78;
  param_1[0xe] = uStack_80;
  param_1[1] = uStack_30;
  *param_1 = local_38;
  param_1[3] = local_d8;
  param_1[2] = local_28;
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,uStack_d0);
  param_1[7] = local_b8;
  param_1[6] = uStack_c0;
  return;
}


// ===== 00859f90  FUN_00859f90 =====

void FUN_00859f90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4,
                 long param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  
  if (param_5 == 0x30) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    *param_1 = param_3;
    uVar52 = param_2[5];
    uVar51 = param_2[4];
    uVar50 = param_2[7];
    uVar49 = param_2[6];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    uVar5 = param_4[4];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    uVar9 = param_4[8];
    uVar10 = param_4[9];
    uVar11 = param_4[10];
    uVar12 = param_4[0xb];
    uVar13 = param_4[0xc];
    uVar14 = param_4[0xd];
    uVar15 = param_4[0xe];
    uVar16 = param_4[0xf];
    uVar17 = param_4[0x10];
    uVar18 = param_4[0x11];
    uVar19 = param_4[0x12];
    uVar20 = param_4[0x13];
    uVar21 = param_4[0x14];
    uVar22 = param_4[0x15];
    uVar23 = param_4[0x16];
    uVar24 = param_4[0x17];
    uVar25 = param_4[0x18];
    uVar26 = param_4[0x19];
    uVar27 = param_4[0x1a];
    uVar28 = param_4[0x1b];
    uVar29 = param_4[0x1c];
    uVar30 = param_4[0x1d];
    uVar31 = param_4[0x1e];
    uVar32 = param_4[0x1f];
    uVar33 = param_4[0x20];
    uVar34 = param_4[0x21];
    uVar35 = param_4[0x22];
    uVar36 = param_4[0x23];
    uVar37 = param_4[0x24];
    uVar38 = param_4[0x25];
    uVar39 = param_4[0x26];
    uVar40 = param_4[0x27];
    uVar41 = param_4[0x28];
    uVar42 = param_4[0x29];
    uVar43 = param_4[0x2a];
    uVar44 = param_4[0x2b];
    uVar45 = param_4[0x2c];
    uVar46 = param_4[0x2d];
    uVar47 = param_4[0x2e];
    uVar48 = param_4[0x2f];
    *(undefined1 *)(param_1 + 9) = uVar1;
    *(undefined1 *)((long)param_1 + 0x49) = uVar2;
    *(undefined1 *)((long)param_1 + 0x4a) = uVar3;
    *(undefined1 *)((long)param_1 + 0x4b) = uVar4;
    *(undefined1 *)((long)param_1 + 0x4c) = uVar5;
    *(undefined1 *)((long)param_1 + 0x4d) = uVar6;
    *(undefined1 *)((long)param_1 + 0x4e) = uVar7;
    *(undefined1 *)((long)param_1 + 0x4f) = uVar8;
    *(undefined1 *)(param_1 + 10) = uVar9;
    *(undefined1 *)((long)param_1 + 0x51) = uVar10;
    *(undefined1 *)((long)param_1 + 0x52) = uVar11;
    *(undefined1 *)((long)param_1 + 0x53) = uVar12;
    *(undefined1 *)((long)param_1 + 0x54) = uVar13;
    *(undefined1 *)((long)param_1 + 0x55) = uVar14;
    *(undefined1 *)((long)param_1 + 0x56) = uVar15;
    *(undefined1 *)((long)param_1 + 0x57) = uVar16;
    *(undefined1 *)(param_1 + 0xb) = uVar17;
    *(undefined1 *)((long)param_1 + 0x59) = uVar18;
    *(undefined1 *)((long)param_1 + 0x5a) = uVar19;
    *(undefined1 *)((long)param_1 + 0x5b) = uVar20;
    *(undefined1 *)((long)param_1 + 0x5c) = uVar21;
    *(undefined1 *)((long)param_1 + 0x5d) = uVar22;
    *(undefined1 *)((long)param_1 + 0x5e) = uVar23;
    *(undefined1 *)((long)param_1 + 0x5f) = uVar24;
    *(undefined1 *)(param_1 + 0xc) = uVar25;
    *(undefined1 *)((long)param_1 + 0x61) = uVar26;
    *(undefined1 *)((long)param_1 + 0x62) = uVar27;
    *(undefined1 *)((long)param_1 + 99) = uVar28;
    *(undefined1 *)((long)param_1 + 100) = uVar29;
    *(undefined1 *)((long)param_1 + 0x65) = uVar30;
    *(undefined1 *)((long)param_1 + 0x66) = uVar31;
    *(undefined1 *)((long)param_1 + 0x67) = uVar32;
    *(undefined1 *)(param_1 + 0xd) = uVar33;
    *(undefined1 *)((long)param_1 + 0x69) = uVar34;
    *(undefined1 *)((long)param_1 + 0x6a) = uVar35;
    *(undefined1 *)((long)param_1 + 0x6b) = uVar36;
    *(undefined1 *)((long)param_1 + 0x6c) = uVar37;
    *(undefined1 *)((long)param_1 + 0x6d) = uVar38;
    *(undefined1 *)((long)param_1 + 0x6e) = uVar39;
    *(undefined1 *)((long)param_1 + 0x6f) = uVar40;
    *(undefined1 *)(param_1 + 0xe) = uVar41;
    *(undefined1 *)((long)param_1 + 0x71) = uVar42;
    *(undefined1 *)((long)param_1 + 0x72) = uVar43;
    *(undefined1 *)((long)param_1 + 0x73) = uVar44;
    param_1[8] = uVar50;
    param_1[7] = uVar49;
    uVar54 = param_2[1];
    uVar53 = *param_2;
    uVar50 = param_2[3];
    uVar49 = param_2[2];
    *(undefined1 *)((long)param_1 + 0x74) = uVar45;
    *(undefined1 *)((long)param_1 + 0x75) = uVar46;
    param_1[6] = uVar52;
    param_1[5] = uVar51;
    param_1[4] = uVar50;
    param_1[3] = uVar49;
    param_1[2] = uVar54;
    param_1[1] = uVar53;
    *(undefined1 *)((long)param_1 + 0x76) = uVar47;
    *(undefined1 *)((long)param_1 + 0x77) = uVar48;
    return;
  }
                    /* try { // try from 0085a38c to 0085a39f has its CatchHandler @ 0085a3a4 */
                    /* WARNING: Subroutine does not return */
  core::slice::copy_from_slice_impl::len_mismatch_fail
            (0x30,param_5,&PTR_s__root__cargo_registry_src_index__00ae78a8);
}


// ===== 0085a468  FUN_0085a468 =====

void FUN_0085a468(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = (undefined8 *)*param_2;
  (**(code **)(puVar3[5] + 0x28))(&local_d8,puVar3[4]);
  local_c8 = local_c8 + (lStack_d0 + local_d8) * 2;
  if (-1 < local_c8) {
    if (local_c8 == 0) {
      lVar1 = 1;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      lVar1 = FUN_004b263c(local_c8,1);
      if (lVar1 == 0) goto LAB_0085a4b8;
    }
    uStack_b8 = param_2[6];
    local_c0 = param_2[5];
    uStack_a8 = param_2[8];
    uStack_b0 = param_2[7];
    uStack_98 = param_2[2];
    local_a0 = param_2[1];
    uStack_88 = param_2[4];
    uStack_90 = param_2[3];
                    /* try { // try from 0085a50c to 0085a537 has its CatchHandler @ 0085a558 */
    (**(code **)(puVar3[1] + 0x20))
              (*puVar3,lVar1,local_c8,param_2 + 9,0x30,&DAT_002febda,0xd,&local_c0,0x40);
    *param_1 = local_c8;
    param_1[1] = lVar1;
    param_1[2] = local_c8;
    return;
  }
  uVar2 = 0;
LAB_0085a4b8:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,local_c8);
}


// ===== 0085a578  FUN_0085a578 =====

void FUN_0085a578(undefined8 *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  int iVar11;
  undefined **ppuVar12;
  long lVar13;
  long local_230;
  void *local_228;
  ulong local_220;
  ulong uStack_218;
  ulong local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [104];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_71 [17];
  
  FUN_0085a468(&local_230,param_2);
  lVar13 = *param_2;
                    /* try { // try from 0085a5bc to 0085a633 has its CatchHandler @ 0085a980 */
  (**(code **)(*(long *)(lVar13 + 0x28) + 0x28))(&uStack_218,*(undefined8 *)(lVar13 + 0x20));
  pvVar10 = local_228;
  if (local_220 < uStack_218) {
    ppuVar12 = &PTR_s__root__cargo_registry_src_index__00ae78c0;
  }
  else {
    uVar7 = (local_220 - uStack_218) - uStack_218;
    if (local_220 - uStack_218 < uStack_218) {
      ppuVar12 = &PTR_s__root__cargo_registry_src_index__00ae78d8;
    }
    else {
      uVar8 = uVar7 - local_210;
      if (uVar7 < local_210) {
        ppuVar12 = &PTR_s__root__cargo_registry_src_index__00ae78f0;
      }
      else {
        lVar9 = uVar8 - local_210;
        if (local_210 <= uVar8) {
          uVar5 = *(undefined8 *)(lVar13 + 0x20);
          lVar6 = *(long *)(lVar13 + 0x28);
          FUN_008418e4(&local_200,local_228,uStack_218);
          lVar1 = (long)pvVar10 + uStack_218;
          lVar2 = lVar1 + uStack_218 + local_210;
          (**(code **)(lVar6 + 0x30))
                    (&local_f0,uVar5,&local_200,lVar1 + uStack_218,local_210,lVar2 + local_210,lVar9
                    );
          if ((char)local_f0 == -1) {
            local_e0 = 0;
            local_f0 = 0;
            uStack_e8 = 1;
                    /* try { // try from 0085a750 to 0085a763 has its CatchHandler @ 0085a95c */
            iVar11 = FUN_0082ffc0(&local_f0,&DAT_002f9e3b,0x17);
            if (iVar11 != 0) {
                    /* try { // try from 0085a8d4 to 0085a8f7 has its CatchHandler @ 0085a95c */
                    /* WARNING: Subroutine does not return */
              core::result::unwrap_failed
                        (&DAT_002f82ba,0x37,auStack_71,&DAT_00ae55c0,
                         &PTR_s__nix_store_8006w282fgsx3273c878b_00ae5730);
            }
            param_1[1] = 0x800000000000001e;
            param_1[3] = uStack_e8;
            param_1[2] = local_f0;
            param_1[4] = local_e0;
            *(undefined1 *)param_1 = 0xff;
          }
          else {
            local_1d0 = local_c0;
            uStack_1e8 = uStack_d8;
            local_1f0 = local_e0;
            uStack_1d8 = uStack_c8;
            local_1e0 = local_d0;
            uVar5 = *(undefined8 *)(lVar13 + 0x20);
            lVar13 = *(long *)(lVar13 + 0x28);
            uStack_1f8 = uStack_e8;
            local_200 = local_f0;
                    /* try { // try from 0085a65c to 0085a68f has its CatchHandler @ 0085a924 */
            FUN_008418e4(auStack_1c8,lVar1,uStack_218);
            (**(code **)(lVar13 + 0x30))
                      (&local_f0,uVar5,auStack_1c8,lVar2,local_210,lVar2 + local_210,lVar9);
            if ((char)local_f0 == -1) {
              local_e0 = 0;
              local_f0 = 0;
              uStack_e8 = 1;
                    /* try { // try from 0085a7cc to 0085a7df has its CatchHandler @ 0085a92c */
              iVar11 = FUN_0082ffc0(&local_f0,&DAT_002f9e3b,0x17);
              if (iVar11 != 0) {
                    /* try { // try from 0085a8fc to 0085a91f has its CatchHandler @ 0085a92c */
                    /* WARNING: Subroutine does not return */
                core::result::unwrap_failed
                          (&DAT_002f82ba,0x37,auStack_71,&DAT_00ae55c0,
                           &PTR_s__nix_store_8006w282fgsx3273c878b_00ae5730);
              }
              param_1[4] = local_e0;
              param_1[1] = 0x800000000000001e;
              param_1[3] = uStack_e8;
              param_1[2] = local_f0;
              *(undefined1 *)param_1 = 0xff;
              local_1f0 = 0;
              uStack_1e8 = 0;
              local_1e0 = 0;
              uStack_1d8 = 0;
            }
            else {
              puVar3 = &local_128;
              if (param_3 == 0) {
                puVar3 = &local_160;
              }
              puVar3[1] = uStack_1f8;
              *puVar3 = local_200;
              puVar3[3] = uStack_1e8;
              puVar3[2] = local_1f0;
              puVar4 = &local_160;
              if (param_3 == 0) {
                puVar4 = &local_128;
              }
              puVar3[5] = uStack_1d8;
              puVar3[4] = local_1e0;
              puVar3[6] = local_1d0;
              puVar4[1] = uStack_e8;
              *puVar4 = local_f0;
              puVar4[3] = uStack_d8;
              puVar4[2] = local_e0;
              puVar4[5] = uStack_c8;
              puVar4[4] = local_d0;
              puVar4[6] = local_c0;
              param_1[1] = uStack_158;
              *param_1 = local_160;
              param_1[3] = uStack_148;
              param_1[2] = uStack_150;
              param_1[5] = uStack_138;
              param_1[4] = local_140;
              param_1[0xb] = local_108;
              param_1[10] = uStack_110;
              param_1[0xd] = local_f8;
              param_1[0xc] = uStack_100;
              param_1[7] = local_128;
              param_1[6] = local_130;
              param_1[9] = uStack_118;
              param_1[8] = uStack_120;
              local_f0 = local_160;
              uStack_e8 = uStack_158;
              local_e0 = uStack_150;
            }
          }
          if (local_230 != 0) {
            free(local_228);
          }
          return;
        }
        ppuVar12 = &PTR_s__root__cargo_registry_src_index__00ae7908;
      }
    }
  }
                    /* try { // try from 0085a8c0 to 0085a8cf has its CatchHandler @ 0085a980 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt("mid > len",0x13,ppuVar12);
}


// ===== 0085a9a4  FUN_0085a9a4 =====

void FUN_0085a9a4(undefined1 (*param_1) [16],long *param_2,int param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long local_b8;
  void *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined1 auStack_88 [40];
  
  FUN_0085a468(&local_b8,param_2);
  lVar11 = *param_2;
                    /* try { // try from 0085a9e8 to 0085aa6f has its CatchHandler @ 0085ab44 */
  (**(code **)(*(long *)(lVar11 + 0x28) + 0x28))(&uStack_a0,*(undefined8 *)(lVar11 + 0x20));
  if (local_a8 < uStack_a0) {
    ppuVar10 = &PTR_s__root__cargo_registry_src_index__00ae7920;
  }
  else {
    uVar7 = (local_a8 - uStack_a0) - uStack_a0;
    if (local_a8 - uStack_a0 < uStack_a0) {
      ppuVar10 = &PTR_s__root__cargo_registry_src_index__00ae7938;
    }
    else {
      uVar8 = uVar7 - local_98;
      if (uVar7 < local_98) {
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00ae7950;
      }
      else {
        if (local_98 <= uVar8) {
          uVar5 = *(undefined8 *)(lVar11 + 0x20);
          lVar6 = *(long *)(lVar11 + 0x28);
          pvVar1 = (void *)((long)local_b0 + uStack_a0);
          lVar2 = (long)pvVar1 + uStack_a0;
          pvVar4 = local_b0;
          if (param_3 == 0) {
            pvVar4 = pvVar1;
          }
          lVar3 = lVar2 + local_98;
          lVar9 = lVar3;
          if (param_3 == 0) {
            pvVar1 = local_b0;
            lVar9 = lVar2;
          }
          FUN_008418e4(auStack_88,pvVar4,uStack_a0);
          if (param_3 == 0) {
            lVar2 = lVar3;
          }
          auVar12 = (**(code **)(lVar6 + 0x20))(uVar5,auStack_88,lVar2,local_98);
          uVar5 = *(undefined8 *)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
                    /* try { // try from 0085aa7c to 0085aaa7 has its CatchHandler @ 0085ab28 */
          FUN_008418e4(auStack_88,pvVar1,uStack_a0);
          auVar13 = (**(code **)(lVar11 + 0x18))
                              (uVar5,auStack_88,lVar9,local_98,lVar3 + local_98,uVar8 - local_98);
          *param_1 = auVar12;
          param_1[1] = auVar13;
          if (local_b8 != 0) {
            free(local_b0);
          }
          return;
        }
        ppuVar10 = &PTR_s__root__cargo_registry_src_index__00ae7968;
      }
    }
  }
                    /* try { // try from 0085ab14 to 0085ab23 has its CatchHandler @ 0085ab44 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt("mid > len",0x13,ppuVar10);
}


// ===== 0085ab68  FUN_0085ab68 =====

void FUN_0085ab68(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b263c(0xc,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xc);
  }
  uVar2 = *(ulong *)(param_3 + 0x40);
  if (uVar2 < 0x41) {
                    /* try { // try from 0085abc0 to 0085ac1f has its CatchHandler @ 0085ac30 */
    (**(code **)(((undefined8 *)*param_2)[1] + 0x20))
              (*(undefined8 *)*param_2,lVar1,0xc,param_2 + 9,0x30,param_4,0xf,param_3,uVar2);
    *param_1 = 0xc;
    param_1[1] = lVar1;
    param_1[2] = 0xc;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar2,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 0085ac4c  FUN_0085ac4c =====

void FUN_0085ac4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  undefined7 uStack_117;
  undefined1 local_110;
  undefined7 uStack_10f;
  ulong uStack_108;
  undefined7 uStack_100;
  undefined1 local_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 local_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 local_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 local_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  ulong local_b9;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar9 = param_7[1];
  uVar7 = *param_7;
  uVar12 = param_7[3];
  uVar11 = param_7[2];
  uVar6 = param_7[5];
  uVar5 = param_7[4];
  uVar10 = param_7[7];
  uVar8 = param_7[6];
  uStack_168 = 0;
  uStack_170 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_178 = 0;
  local_180 = 0;
  if ((*param_6 & 1) == 0) {
    uStack_137 = param_7[3];
    local_13f = param_7[2];
    uStack_127 = param_7[5];
    local_12f = param_7[4];
    uStack_11f = param_7[6];
    uStack_147 = param_7[1];
    local_14f = *param_7;
    uVar4 = (ulong)&local_150 | 1;
    local_150 = 1;
    puVar3 = &DAT_002febe7;
    uStack_c8 = (undefined7)param_7[7];
    uStack_c1 = (undefined1)((ulong)param_7[7] >> 0x38);
    uStack_d0 = (undefined7)uStack_11f;
    local_c9 = (undefined1)((ulong)uStack_11f >> 0x38);
    uStack_108 = 0x40;
    uVar2 = 0xd;
    uStack_e8 = (undefined7)uStack_137;
    uStack_e1 = (undefined1)((ulong)uStack_137 >> 0x38);
    uStack_f0 = (undefined7)local_13f;
    local_e9 = (undefined1)((ulong)local_13f >> 0x38);
    uStack_d8 = (undefined7)uStack_127;
    uStack_d1 = (undefined1)((ulong)uStack_127 >> 0x38);
    uStack_e0 = (undefined7)local_12f;
    local_d9 = (undefined1)((ulong)local_12f >> 0x38);
    uStack_f8 = (undefined7)uStack_147;
    uStack_f1 = (undefined1)((ulong)uStack_147 >> 0x38);
    uStack_100 = (undefined7)local_14f;
    local_f9 = (undefined1)((ulong)local_14f >> 0x38);
  }
  else {
    uStack_108 = *(ulong *)(param_6 + 0x12);
    local_150 = 0;
    uStack_c1 = (undefined1)*(undefined8 *)(param_6 + 0x10);
    uStack_c0 = (undefined7)((ulong)*(undefined8 *)(param_6 + 0x10) >> 8);
    local_c9 = (undefined1)*(undefined8 *)(param_6 + 0xe);
    uStack_c8 = (undefined7)((ulong)*(undefined8 *)(param_6 + 0xe) >> 8);
    uStack_e1 = (undefined1)*(undefined8 *)(param_6 + 8);
    uStack_e0 = (undefined7)((ulong)*(undefined8 *)(param_6 + 8) >> 8);
    local_e9 = (undefined1)*(undefined8 *)(param_6 + 6);
    uStack_e8 = (undefined7)((ulong)*(undefined8 *)(param_6 + 6) >> 8);
    uStack_f1 = (undefined1)*(undefined8 *)(param_6 + 4);
    uStack_f0 = (undefined7)((ulong)*(undefined8 *)(param_6 + 4) >> 8);
    local_f9 = (undefined1)*(undefined8 *)(param_6 + 2);
    uStack_f8 = (undefined7)((ulong)*(undefined8 *)(param_6 + 2) >> 8);
    uStack_d1 = (undefined1)*(undefined8 *)(param_6 + 0xc);
    uStack_d0 = (undefined7)((ulong)*(undefined8 *)(param_6 + 0xc) >> 8);
    local_d9 = (undefined1)*(undefined8 *)(param_6 + 10);
    uStack_d8 = (undefined7)((ulong)*(undefined8 *)(param_6 + 10) >> 8);
    uStack_147 = CONCAT17(uStack_f1,uStack_f8);
    local_14f = CONCAT17(local_f9,uStack_100);
    uStack_137 = CONCAT17(uStack_e1,uStack_e8);
    local_13f = CONCAT17(local_e9,uStack_f0);
    uStack_127 = CONCAT17(uStack_d1,uStack_d8);
    local_12f = CONCAT17(local_d9,uStack_e0);
    uStack_11f = CONCAT17(local_c9,uStack_d0);
    uStack_117 = uStack_c8;
    local_110 = uStack_c1;
    local_b9 = uStack_108;
    if (0x40 < uStack_108) {
      uStack_10f = uStack_c0;
                    /* try { // try from 0085aed8 to 0085aeeb has its CatchHandler @ 0085aef8 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uStack_108,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
    }
    puVar3 = &DAT_002febf4;
    uVar4 = (long)&local_14f + 7;
    uVar2 = 0x16;
  }
                    /* try { // try from 0085ad68 to 0085ad8b has its CatchHandler @ 0085aef0 */
  uStack_117 = uStack_c8;
  local_110 = uStack_c1;
  uStack_10f = uStack_c0;
  uVar1 = uStack_108;
  uStack_108 = local_b9;
  (**(code **)(param_8[1] + 0x18))
            (&local_a8,*param_8,&local_180,param_2,param_3,param_4,param_5,puVar3,uVar2,uVar4,uVar1)
  ;
  if (local_a8 != -1) {
    *param_1 = 0;
    param_1[2] = uStack_a0;
    param_1[1] = local_a8;
    param_1[4] = uStack_90;
    param_1[3] = local_98;
    param_1[6] = uStack_80;
    param_1[5] = local_88;
    param_1[7] = local_78;
    return;
  }
  param_1[9] = local_180;
  param_1[8] = uVar10;
  param_1[0xb] = uStack_170;
  param_1[10] = local_178;
  param_1[0xd] = uStack_160;
  param_1[0xc] = uStack_168;
  param_1[1] = uVar7;
  *param_1 = param_8;
  param_1[3] = uVar11;
  param_1[2] = uVar9;
  param_1[0xe] = local_158;
  param_1[5] = uVar5;
  param_1[4] = uVar12;
  param_1[7] = uVar8;
  param_1[6] = uVar6;
  return;
}


// ===== 0085afd4  FUN_0085afd4 =====

void FUN_0085afd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,void *param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined1 *__ptr;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  local_68 = 0;
  local_78 = 0;
  local_70 = &DAT_00000001;
                    /* try { // try from 0085b01c to 0085b033 has its CatchHandler @ 0085b1d8 */
  FUN_00874c84(&local_78,0,0x20,1,1);
  uVar3 = param_1[1];
  uVar5 = param_1[4];
  uVar4 = param_1[3];
  lVar2 = local_68 + 0x20;
  puVar1 = (undefined8 *)(local_70 + local_68);
  puVar1[1] = param_1[2];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  local_68 = lVar2;
  if ((ulong)(local_78 - lVar2) < 0x20) {
    FUN_00874c84(&local_78,lVar2,0x20,1,1);
  }
  uVar4 = param_1[8];
  uVar3 = param_1[7];
  uVar5 = param_1[5];
  puVar1 = (undefined8 *)(local_70 + local_68);
  local_68 = local_68 + 0x20;
  puVar1[1] = param_1[6];
  *puVar1 = uVar5;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  __ptr = local_70;
  if (param_6 == (void *)0x0) goto LAB_0085b0e0;
  if (0xffff < param_7) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_002fec28,0x29,&PTR_s__root__cargo_registry_src_index__00ae7980);
  }
  if ((ulong)(local_78 - local_68) < 2) {
    FUN_00874c84(&local_78,local_68,2,1,1);
  }
  lVar2 = local_68 + 2;
  *(ushort *)(local_70 + local_68) =
       (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8);
  local_68 = lVar2;
  if ((ulong)(local_78 - lVar2) < param_7) {
    FUN_00874c84(&local_78,lVar2,param_7,1,1);
LAB_0085b0bc:
    lVar2 = local_68;
    __ptr = local_70;
    memcpy(local_70 + local_68,param_6,param_7);
  }
  else {
    __ptr = local_70;
    if (param_7 != 0) goto LAB_0085b0bc;
  }
  local_68 = lVar2 + param_7;
LAB_0085b0e0:
                    /* try { // try from 0085b0ec to 0085b1cf has its CatchHandler @ 0085b1d8 */
  (**(code **)(((undefined8 *)*param_1)[1] + 0x20))
            (*(undefined8 *)*param_1,param_2,param_3,param_1 + 9,0x30,param_4,param_5,__ptr,local_68
            );
  if (local_78 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 0085b1fc  FUN_0085b1fc =====

void FUN_0085b1fc(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar5 = *(ulong *)(param_3 + 0x40);
  if (0x40 < uVar5) {
                    /* try { // try from 0085b3e0 to 0085b3f7 has its CatchHandler @ 0085b4a4 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar5,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
  }
  uVar3 = *param_2;
  uVar8 = param_2[1];
                    /* try { // try from 0085b24c to 0085b273 has its CatchHandler @ 0085b4a4 */
  FUN_0085d8c0(&local_190,uVar3,uVar8,2,param_3,uVar5,param_4,param_5,param_6,param_7);
                    /* try { // try from 0085b274 to 0085b29f has its CatchHandler @ 0085b474 */
  FUN_0085d8c0(&local_148,uVar3,uVar8,3,param_3,uVar5,param_4,param_5,param_6,param_7);
  if ((*(byte *)(param_8 + 0x339) & 1) != 0) {
    uStack_d8 = uStack_168;
    local_e0 = local_170;
    uStack_c8 = uStack_158;
    uStack_d0 = local_160;
    local_c0 = local_150;
    uStack_f8 = uStack_188;
    local_100 = local_190;
    uStack_e8 = uStack_178;
    uStack_f0 = local_180;
    local_70 = local_108;
    uStack_88 = uStack_120;
    local_90 = local_128;
    uStack_78 = uStack_110;
    uStack_80 = local_118;
    plVar4 = (long *)param_2[2];
    uStack_a8 = uStack_140;
    local_b0 = local_148;
    uStack_98 = uStack_130;
    uStack_a0 = local_138;
    lVar6 = *plVar4;
    if (lVar6 == 0) {
                    /* try { // try from 0085b3fc to 0085b40b has its CatchHandler @ 0085b47c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae7998);
    }
    lVar7 = plVar4[1];
    uVar1 = *(undefined1 *)(param_8 + 0x330);
    uVar2 = *(undefined1 *)(param_8 + 0x2ab);
    if (*(char *)(param_8 + 0x1f1) != '\x02') {
                    /* try { // try from 0085b310 to 0085b317 has its CatchHandler @ 0085b418 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_8 + 0x158);
                    /* try { // try from 0085b318 to 0085b31f has its CatchHandler @ 0085b410 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_8 + 0x1a0);
    }
    *(long *)(param_8 + 0x148) = lVar6;
    *(long *)(param_8 + 0x150) = lVar7;
    *(undefined1 *)(param_8 + 0x1f0) = uVar2;
    *(undefined8 *)(param_8 + 0x180) = uStack_168;
    *(undefined8 *)(param_8 + 0x178) = local_170;
    *(undefined8 *)(param_8 + 400) = uStack_158;
    *(undefined8 *)(param_8 + 0x188) = local_160;
    *(undefined8 *)(param_8 + 0x198) = local_150;
    *(undefined1 *)(param_8 + 0x1f1) = uVar1;
    *(undefined8 *)(param_8 + 0x160) = uStack_188;
    *(undefined8 *)(param_8 + 0x158) = local_190;
    *(undefined8 *)(param_8 + 0x170) = uStack_178;
    *(undefined8 *)(param_8 + 0x168) = local_180;
    *(undefined8 *)(param_8 + 0x1e0) = local_108;
    *(long **)(param_8 + 0x1e8) = plVar4;
    *(undefined8 *)(param_8 + 0x1c8) = uStack_120;
    *(undefined8 *)(param_8 + 0x1c0) = local_128;
    *(undefined8 *)(param_8 + 0x1d8) = uStack_110;
    *(undefined8 *)(param_8 + 0x1d0) = local_118;
    *(undefined8 *)(param_8 + 0x1a8) = uStack_140;
    *(undefined8 *)(param_8 + 0x1a0) = local_148;
    *(undefined8 *)(param_8 + 0x1b8) = uStack_130;
    *(undefined8 *)(param_8 + 0x1b0) = local_138;
  }
  param_1[0xb] = local_150;
  param_1[6] = uStack_178;
  param_1[5] = local_180;
  param_1[8] = uStack_168;
  param_1[7] = local_170;
  param_1[10] = uStack_158;
  param_1[9] = local_160;
  param_1[0x14] = local_108;
  uVar3 = param_2[2];
  param_1[0x11] = uStack_120;
  param_1[0x10] = local_128;
  param_1[0x13] = uStack_110;
  param_1[0x12] = local_118;
  param_1[4] = uStack_188;
  param_1[3] = local_190;
  param_1[0xd] = uStack_140;
  param_1[0xc] = local_148;
  param_1[0xf] = uStack_130;
  param_1[0xe] = local_138;
  uVar9 = param_2[1];
  uVar8 = *param_2;
  param_1[2] = uVar3;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  return;
}


// ===== 0085b4c8  FUN_0085b4c8 =====

undefined8 FUN_0085b4c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  void *__ptr;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined2 local_9c [2];
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined1 local_18 [4];
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  auVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x20))
                     (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,param_3,param_2,param_3);
  puVar3 = auVar4._8_8_;
  __ptr = auVar4._0_8_;
  uStack_40 = *(ulong *)(param_4 + 0x40);
  if (0x40 < uStack_40) {
                    /* try { // try from 0085b5cc to 0085b60b has its CatchHandler @ 0085b630 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_40,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
  }
  local_9c[0] = 0x800;
  local_88 = local_18;
  local_18[0] = 0x1d;
  uStack_80 = 1;
  local_78 = "tls13 ";
  uStack_70 = 6;
  local_14[0] = (undefined1)uStack_40;
  local_68 = &DAT_002fec51;
  uStack_60 = 0x17;
  local_58 = local_14;
  uStack_50 = 1;
  local_98 = local_9c;
  uStack_90 = 2;
  local_38 = 0;
                    /* try { // try from 0085b570 to 0085b587 has its CatchHandler @ 0085b630 */
  local_48 = param_4;
  iVar2 = (*(code *)puVar3[3])(__ptr,&local_98,6,&local_38,8);
  uVar1 = local_38;
  if (iVar2 == 0) {
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0085b598 to 0085b59f has its CatchHandler @ 0085b610 */
      (*(code *)*puVar3)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_11,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085b64c  FUN_0085b64c =====

void FUN_0085b64c(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  undefined8 uVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar1 = *(undefined8 *)(param_7 + 0x20);
  uVar2 = *(undefined8 *)(param_7 + 0x28);
  *(undefined8 *)(param_2 + 0x10) = param_5;
  FUN_0085b1fc(&local_f8,param_2,param_4,param_6,uVar1,uVar2);
                    /* try { // try from 0085b69c to 0085b6a3 has its CatchHandler @ 0085b780 */
  auVar5 = FUN_0085d4b4(local_e8,&local_98);
  __ptr = (void *)param_9[4];
  puVar3 = (undefined8 *)param_9[5];
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0085b6b8 to 0085b6bf has its CatchHandler @ 0085b760 */
    (*pcVar4)(__ptr);
  }
  if (puVar3[1] != 0) {
    free(__ptr);
  }
  *(undefined1 (*) [16])(param_9 + 4) = auVar5;
  param_9[8] = 0;
  *(undefined1 *)((long)param_9 + 0x4a) = 2;
  *param_9 = 0;
  if ((param_3 & 1) == 0) {
                    /* try { // try from 0085b6f4 to 0085b6ff has its CatchHandler @ 0085b780 */
    FUN_0085d1cc(local_e8,&uStack_e0,param_9);
  }
  param_1[0x11] = uStack_70;
  param_1[0x10] = local_78;
  param_1[0x13] = uStack_60;
  param_1[0x12] = local_68;
  param_1[0x14] = local_58;
  param_1[9] = uStack_b0;
  param_1[8] = local_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = local_a8;
  param_1[0xd] = uStack_90;
  param_1[0xc] = local_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = local_88;
  param_1[1] = uStack_f0;
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  param_1[5] = uStack_d0;
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  return;
}


// ===== 0085b798  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled_mut
    */

undefined8 __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::
filled_mut(long param_1)

{
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10)) {
    return *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0x18),*(ulong *)(param_1 + 0x10),
             &PTR_s__root__cargo_registry_src_index__00ae79b0);
}


// ===== 0085b7c4  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled
    */

undefined8 __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::filled
          (long param_1)

{
  if (*(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10)) {
    return *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_1 + 0x18),*(ulong *)(param_1 + 0x10),
             &PTR_s__root__cargo_registry_src_index__00ae79c8);
}


// ===== 0085b7f0  <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::discard =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::discard
    */

void __rustcall
<rustls::msgs::deframer::buffers::[2]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::discard
          (long param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  __n = uVar1 - param_2;
  if (uVar1 < param_2 || __n == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  if (uVar1 <= *(ulong *)(param_1 + 0x10)) {
    memmove(*(void **)(param_1 + 8),(void *)((long)*(void **)(param_1 + 8) + param_2),__n);
    *(size_t *)(param_1 + 0x18) = __n;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar1,*(ulong *)(param_1 + 0x10),&PTR_s__nix_store_8006w282fgsx3273c878b_00ae63f8);
}


// ===== 0085b85c  FUN_0085b85c =====

void FUN_0085b85c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_0085d4b4(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  __ptr = (void *)param_3[4];
  puVar1 = (undefined8 *)param_3[5];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0085b89c to 0085b8a3 has its CatchHandler @ 0085b8e4 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  *(undefined1 (*) [16])(param_3 + 4) = auVar3;
  *(undefined1 *)((long)param_3 + 0x4a) = 2;
  param_3[8] = 0;
  *param_3 = 1;
  param_3[1] = param_2;
  return;
}


// ===== 0085b908  FUN_0085b908 =====

void FUN_0085b908(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = param_2[2];
                    /* try { // try from 0085b944 to 0085b953 has its CatchHandler @ 0085ba08 */
  FUN_0085cd80(&local_170,&local_80,param_3,param_5,*(undefined8 *)(param_6 + 0x20),
               *(undefined8 *)(param_6 + 0x28),param_7);
                    /* try { // try from 0085b958 to 0085b967 has its CatchHandler @ 0085b9f8 */
  FUN_0085d730(&local_80,local_160,param_2 + 3,param_4);
  param_1[0x19] = uStack_a8;
  param_1[0x18] = local_b0;
  param_1[0x1b] = uStack_98;
  param_1[0x1a] = uStack_a0;
  param_1[0x26] = local_40;
  param_1[0x11] = uStack_e8;
  param_1[0x10] = local_f0;
  param_1[0x13] = uStack_d8;
  param_1[0x12] = uStack_e0;
  param_1[0x15] = uStack_c8;
  param_1[0x14] = local_d0;
  param_1[0x17] = uStack_b8;
  param_1[0x16] = uStack_c0;
  param_1[9] = uStack_128;
  param_1[8] = local_130;
  param_1[0xb] = uStack_118;
  param_1[10] = uStack_120;
  param_1[0xd] = uStack_108;
  param_1[0xc] = local_110;
  param_1[0xf] = uStack_f8;
  param_1[0xe] = uStack_100;
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[3] = uStack_158;
  param_1[2] = local_160;
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[0x21] = uStack_68;
  param_1[0x20] = local_70;
  param_1[0x23] = uStack_58;
  param_1[0x22] = uStack_60;
  param_1[0x25] = uStack_48;
  param_1[0x24] = local_50;
  param_1[0x1d] = uStack_88;
  param_1[0x1c] = local_90;
  param_1[0x1f] = uStack_78;
  param_1[0x1e] = local_80;
                    /* try { // try from 0085b9c4 to 0085b9cb has its CatchHandler @ 0085b9e8 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_2 + 3);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_2 + 0xc);
  return;
}


// ===== 0085ba28  <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::read
    */

undefined8 __rustcall
<rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::read
          (ulong *param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar4 = param_1[3];
  uVar5 = 0xffff;
  if (param_4 == 0) {
    uVar5 = 0x4805;
  }
  if (uVar5 <= uVar4) {
    <alloc::io::error::core::io::error::Error>::new<&str>(0x15,&DAT_002fec68,0x13);
    return 1;
  }
  uVar6 = param_1[2];
  uVar1 = uVar4 + 0x1000;
  if (uVar5 <= uVar4 + 0x1000) {
    uVar1 = uVar5;
  }
  uVar2 = uVar1 - uVar6;
  if (uVar1 < uVar6 || uVar2 == 0) {
    if ((uVar4 == 0) || (uVar5 < uVar6)) {
      param_1[2] = uVar1;
      uVar6 = uVar1;
      if (uVar1 < *param_1) {
        uVar5 = FUN_004b2600(param_1[1],*param_1,1,uVar1);
        if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(1,uVar1);
        }
        *param_1 = uVar1;
        param_1[1] = uVar5;
      }
    }
  }
  else {
    if (*param_1 - uVar6 < uVar2) {
      FUN_00874c84(param_1,uVar6,uVar2,1,1);
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      puVar3 = (undefined1 *)(uVar5 + uVar6);
    }
    else {
      uVar5 = param_1[1];
      puVar3 = (undefined1 *)(uVar5 + uVar6);
    }
    if (1 < uVar2) {
      memset((void *)(uVar5 + uVar6),0,uVar2 - 1);
      uVar6 = uVar6 + (uVar2 - 1);
      puVar3 = (undefined1 *)(uVar5 + uVar6);
    }
    uVar4 = param_1[3];
    *puVar3 = 0;
    param_1[2] = uVar6 + 1;
    uVar6 = uVar6 + 1;
  }
  if (uVar4 <= uVar6) {
    auVar7 = (**(code **)(param_3 + 0x18))(param_2,param_1[1] + uVar4,uVar6 - uVar4);
    if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 1;
    }
    param_1[3] = uVar4 + auVar7._8_8_;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar4,uVar6,uVar6,&PTR_s__root__cargo_registry_src_index__00ae79f8);
}


// ===== 0085bc00  <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::extend =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::extend
    */

undefined1  [16] __rustcall
<rustls::msgs::deframer::buffers::[3]::rustls::msgs::deframer::buffers::DeframerVecBuffer>::extend
          (long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar1 = uVar2 + param_3;
  uVar3 = uVar1 - uVar5;
  if (uVar5 <= uVar1 && uVar3 != 0) {
    if (*param_1 - uVar5 < uVar3) {
      FUN_00874c84(param_1,uVar5,uVar3,1,1);
      lVar6 = param_1[1];
      uVar5 = param_1[2];
      puVar4 = (undefined1 *)(lVar6 + uVar5);
    }
    else {
      lVar6 = param_1[1];
      puVar4 = (undefined1 *)(lVar6 + uVar5);
    }
    if (1 < uVar3) {
      memset((void *)(lVar6 + uVar5),0,uVar3 - 1);
      uVar5 = uVar5 + (uVar3 - 1);
      puVar4 = (undefined1 *)(lVar6 + uVar5);
    }
    uVar5 = uVar5 + 1;
    *puVar4 = 0;
    param_1[2] = uVar5;
  }
  if ((uVar2 <= uVar1) && (uVar1 <= uVar5)) {
    memcpy((void *)(param_1[1] + uVar2),param_2,param_3);
    param_1[3] = param_1[3] + param_3;
    auVar7._8_8_ = uVar1;
    auVar7._0_8_ = uVar2;
    return auVar7;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar5,&PTR_s__root__cargo_registry_src_index__00ae7a10);
}


// ===== 0085bd18  FUN_0085bd18 =====

void FUN_0085bd18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  
                    /* try { // try from 0085bd48 to 0085bd4f has its CatchHandler @ 0085bf84 */
  auVar26 = FUN_0085d4b4(param_2[2],param_2 + 0xc);
  __ptr = (void *)param_3[4];
  puVar1 = (undefined8 *)param_3[5];
  pcVar5 = (code *)*puVar1;
  if (pcVar5 != (code *)0x0) {
                    /* try { // try from 0085bd64 to 0085bd6b has its CatchHandler @ 0085bf64 */
    (*pcVar5)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  uVar4 = param_2[2];
  *(undefined1 (*) [16])(param_3 + 4) = auVar26;
  param_3[8] = 0;
  *(undefined1 *)((long)param_3 + 0x4a) = 2;
  *param_3 = 0;
                    /* try { // try from 0085bd98 to 0085bda3 has its CatchHandler @ 0085bf84 */
  FUN_0085d1cc(uVar4,param_2 + 3,param_3);
  if ((*(byte *)((long)param_3 + 0x339) & 1) != 0) {
    plVar7 = (long *)param_2[2];
    lVar8 = *plVar7;
    if (lVar8 == 0) {
                    /* try { // try from 0085bef8 to 0085bf03 has its CatchHandler @ 0085bf8c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae7a28);
    }
    uVar14 = param_2[8];
    uVar10 = param_2[7];
    uVar21 = param_2[10];
    uVar18 = param_2[9];
    uVar4 = param_2[0xb];
    lVar9 = plVar7[1];
    uVar2 = *(undefined1 *)(param_3 + 0x66);
    uVar3 = *(undefined1 *)((long)param_3 + 0x2ab);
    uVar15 = param_2[6];
    uVar11 = param_2[5];
    uVar22 = param_2[4];
    uVar19 = param_2[3];
    uVar6 = param_2[0x14];
    uVar23 = param_2[0x11];
    uVar20 = param_2[0x10];
    uVar16 = param_2[0x13];
    uVar12 = param_2[0x12];
    uVar17 = param_2[0xd];
    uVar13 = param_2[0xc];
    uVar25 = param_2[0xf];
    uVar24 = param_2[0xe];
    if (*(char *)((long)param_3 + 0x2a1) != '\x02') {
                    /* try { // try from 0085be44 to 0085be4b has its CatchHandler @ 0085bf10 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_3 + 0x41);
                    /* try { // try from 0085be4c to 0085be53 has its CatchHandler @ 0085bf08 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_3 + 0x4a);
    }
    param_3[0x3f] = lVar8;
    param_3[0x40] = lVar9;
    param_3[0x53] = plVar7;
    param_3[0x46] = uVar14;
    param_3[0x45] = uVar10;
    param_3[0x48] = uVar21;
    param_3[0x47] = uVar18;
    param_3[0x49] = uVar4;
    *(undefined1 *)(param_3 + 0x54) = uVar3;
    param_3[0x42] = uVar22;
    param_3[0x41] = uVar19;
    param_3[0x44] = uVar15;
    param_3[0x43] = uVar11;
    param_3[0x52] = uVar6;
    *(undefined1 *)((long)param_3 + 0x2a1) = uVar2;
    param_3[0x4f] = uVar23;
    param_3[0x4e] = uVar20;
    param_3[0x51] = uVar16;
    param_3[0x50] = uVar12;
    param_3[0x4b] = uVar17;
    param_3[0x4a] = uVar13;
    param_3[0x4d] = uVar25;
    param_3[0x4c] = uVar24;
  }
  uVar6 = param_2[0x19];
  uVar4 = param_2[0x18];
  uVar11 = param_2[0x1b];
  uVar10 = param_2[0x1a];
  uVar12 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar12;
  param_1[0x19] = uVar6;
  param_1[0x18] = uVar4;
  param_1[0x1b] = uVar11;
  param_1[0x1a] = uVar10;
  uVar4 = param_2[0x10];
  uVar10 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar4;
  param_1[0x13] = uVar10;
  param_1[0x12] = uVar6;
  uVar4 = param_2[0x14];
  uVar10 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar4;
  param_1[0x17] = uVar10;
  param_1[0x16] = uVar6;
  uVar10 = param_2[8];
  uVar6 = param_2[0xb];
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar10;
  param_1[0xb] = uVar6;
  param_1[10] = uVar4;
  uVar4 = param_2[0xc];
  uVar10 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar6;
  uVar10 = *param_2;
  uVar6 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar6;
  param_1[2] = uVar4;
  uVar4 = param_2[4];
  uVar10 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar10;
  param_1[6] = uVar6;
  return;
}


// ===== 0085bfb4  FUN_0085bfb4 =====

void FUN_0085bfb4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar3 = param_2[2];
                    /* try { // try from 0085bfe4 to 0085bff3 has its CatchHandler @ 0085c0f8 */
  FUN_0085d730(&local_98,uVar3,param_2 + 0x1e,param_3);
                    /* try { // try from 0085bff4 to 0085bfff has its CatchHandler @ 0085c0e8 */
  auVar7 = FUN_0085d4b4(uVar3,param_2 + 3);
  __ptr = (void *)param_4[4];
  puVar1 = (undefined8 *)param_4[5];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0085c014 to 0085c01b has its CatchHandler @ 0085c0c8 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  uVar4 = param_2[0x19];
  uVar3 = param_2[0x18];
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  *(undefined1 *)((long)param_4 + 0x4a) = 2;
  *(undefined1 (*) [16])(param_4 + 4) = auVar7;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  param_4[8] = 0;
  *param_4 = 0;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x26] = local_58;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  uVar5 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xf];
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar5;
  param_1[0xe] = uVar4;
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[0x21] = uStack_80;
  param_1[0x20] = local_88;
  param_1[0x23] = uStack_70;
  param_1[0x22] = local_78;
  uVar4 = param_2[0x1d];
  uVar3 = param_2[0x1c];
  param_1[0x25] = uStack_60;
  param_1[0x24] = local_68;
  param_1[0x1d] = uVar4;
  param_1[0x1c] = uVar3;
  param_1[0x1f] = uStack_90;
  param_1[0x1e] = local_98;
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_2 + 0x1e);
  return;
}


// ===== 0085c110  FUN_0085c110 =====

void FUN_0085c110(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_51;
  
  lVar12 = *(long *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(lVar12 + 0x10);
  lVar4 = *(long *)(lVar12 + 0x18);
  uVar10 = (**(code **)(*(long *)(lVar12 + 0x28) + 0x28))(*(undefined8 *)(lVar12 + 0x20));
  FUN_00860638(&local_d0,param_2 + 0x18,uVar3,*(undefined8 *)(lVar4 + 0x30),uVar10);
  uVar8 = local_b0;
  uVar7 = uStack_b8;
  uVar6 = local_c0;
  uVar5 = uStack_c8;
  uVar10 = local_d0;
  uVar3 = *(undefined8 *)(lVar12 + 0x10);
  lVar4 = *(long *)(lVar12 + 0x18);
  local_240 = uStack_a8;
  local_238 = (undefined4)local_a0;
                    /* try { // try from 0085c18c to 0085c1a7 has its CatchHandler @ 0085c4f4 */
  uVar11 = (**(code **)(*(long *)(lVar12 + 0x28) + 0x28))(*(undefined8 *)(lVar12 + 0x20));
  FUN_00860638(&local_d0,param_2 + 0x60,uVar3,*(undefined8 *)(lVar4 + 0x30),uVar11);
  local_210 = local_b0;
  local_200 = uStack_a8;
  uStack_228 = uStack_c8;
  local_230 = local_d0;
  local_218 = uStack_b8;
  local_220 = local_c0;
  local_1f8 = (undefined4)local_a0;
  uStack_1a8 = uVar5;
  local_1b0 = uVar10;
  uStack_198 = uVar7;
  uStack_1a0 = uVar6;
  local_190 = uVar8;
                    /* try { // try from 0085c1dc to 0085c1eb has its CatchHandler @ 0085c4ec */
  (**(code **)(*(long *)(lVar12 + 0x28) + 0x30))
            (&local_d0,*(undefined8 *)(lVar12 + 0x20),&local_1b0,&local_240);
  if ((char)local_d0 == -1) {
    local_c0 = 0;
    local_d0 = 0;
    uStack_c8 = 1;
                    /* try { // try from 0085c2f0 to 0085c303 has its CatchHandler @ 0085c52c */
    iVar9 = FUN_0082ffc0(&local_d0,&DAT_002f9e3b,0x17);
    if (iVar9 != 0) {
                    /* try { // try from 0085c494 to 0085c4b7 has its CatchHandler @ 0085c52c */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002f82ba,0x37,&uStack_51,&DAT_00ae55c0,
                 &PTR_s__nix_store_8006w282fgsx3273c878b_00ae5730);
    }
    param_1[4] = local_c0;
    param_1[1] = 0x800000000000001e;
    param_1[3] = uStack_c8;
    param_1[2] = local_d0;
    *(undefined1 *)param_1 = 0xff;
  }
  else {
    local_1c0 = local_a0;
    uStack_1d8 = uStack_b8;
    local_1e0 = local_c0;
    uStack_1c8 = uStack_a8;
    local_1d0 = local_b0;
    local_190 = local_210;
    uStack_1e8 = uStack_c8;
    local_1f0 = local_d0;
    uStack_1a8 = uStack_228;
    local_1b0 = local_230;
    uStack_198 = local_218;
    uStack_1a0 = local_220;
                    /* try { // try from 0085c228 to 0085c237 has its CatchHandler @ 0085c4e4 */
    (**(code **)(*(long *)(lVar12 + 0x28) + 0x30))
              (&local_d0,*(undefined8 *)(lVar12 + 0x20),&local_1b0,&local_200);
    if ((char)local_d0 == -1) {
      local_c0 = 0;
      local_d0 = 0;
      uStack_c8 = 1;
                    /* try { // try from 0085c3bc to 0085c3cf has its CatchHandler @ 0085c504 */
      iVar9 = FUN_0082ffc0(&local_d0,&DAT_002f9e3b,0x17);
      if (iVar9 != 0) {
                    /* try { // try from 0085c4bc to 0085c4df has its CatchHandler @ 0085c504 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002f82ba,0x37,&uStack_51,&DAT_00ae55c0,
                   &PTR_s__nix_store_8006w282fgsx3273c878b_00ae5730);
      }
      param_1[4] = local_c0;
      param_1[1] = 0x800000000000001e;
      param_1[3] = uStack_c8;
      param_1[2] = local_d0;
      *(undefined1 *)param_1 = 0xff;
    }
    else {
      puVar1 = &local_108;
      if (param_3 == 0) {
        puVar1 = &local_140;
      }
      puVar1[1] = uStack_1e8;
      *puVar1 = local_1f0;
      puVar1[3] = uStack_1d8;
      puVar1[2] = local_1e0;
      puVar2 = &local_140;
      if (param_3 == 0) {
        puVar2 = &local_108;
      }
      puVar1[5] = uStack_1c8;
      puVar1[4] = local_1d0;
      puVar1[6] = local_1c0;
      puVar2[1] = uStack_c8;
      *puVar2 = local_d0;
      puVar2[3] = uStack_b8;
      puVar2[2] = local_c0;
      puVar2[5] = uStack_a8;
      puVar2[4] = local_b0;
      puVar2[6] = local_a0;
      param_1[1] = uStack_138;
      *param_1 = local_140;
      param_1[3] = uStack_128;
      param_1[2] = uStack_130;
      param_1[5] = uStack_118;
      param_1[4] = local_120;
      param_1[0xb] = local_e8;
      param_1[10] = uStack_f0;
      param_1[0xd] = local_d8;
      param_1[0xc] = uStack_e0;
      param_1[7] = local_108;
      param_1[6] = local_110;
      param_1[9] = uStack_f8;
      param_1[8] = uStack_100;
    }
  }
  return;
}


// ===== 0085c558  FUN_0085c558 =====

void FUN_0085c558(long param_1,undefined8 *param_2)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [72];
  
  FUN_0085c9e8(auStack_88,param_1,(*(byte *)(param_2 + 0x66) ^ 0xff) & 1);
                    /* try { // try from 0085c594 to 0085c59b has its CatchHandler @ 0085c624 */
  auVar3 = FUN_0085d4b4(*(undefined8 *)(param_1 + 0x10),auStack_88);
  __ptr = (void *)param_2[4];
  puVar1 = (undefined8 *)param_2[5];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0085c5b0 to 0085c5b7 has its CatchHandler @ 0085c600 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  *(undefined1 (*) [16])(param_2 + 4) = auVar3;
  param_2[8] = 0;
  *(undefined1 *)((long)param_2 + 0x4a) = 2;
  *param_2 = 0;
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(auStack_88);
  return;
}


// ===== 0085c63c  FUN_0085c63c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085c63c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 local_168 [72];
  undefined1 auStack_120 [64];
  ulong local_e0;
  ushort local_d4 [2];
  char local_d0 [4];
  undefined1 local_cc [4];
  ushort *local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  ulong uStack_70;
  
  lVar13 = *(long *)(param_2 + 0x10);
  (**(code **)(*(long *)(lVar13 + 0x38) + 0x20))(auStack_120,*(undefined8 *)(lVar13 + 0x30),1,0);
  auVar14 = (**(code **)(*(long *)(lVar13 + 0x18) + 0x30))
                      (*(undefined8 *)(lVar13 + 0x10),param_2 + 0xa8);
  uVar5 = local_e0;
  puVar11 = auVar14._8_8_;
  pvVar9 = auVar14._0_8_;
  if (0x40 < local_e0) {
                    /* try { // try from 0085c8b8 to 0085c8cf has its CatchHandler @ 0085c95c */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_e0,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
  }
                    /* try { // try from 0085c6c0 to 0085c733 has its CatchHandler @ 0085c95c */
  uVar7 = (*(code *)puVar11[5])(pvVar9);
  local_d4[0] = (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
  local_d0[0] = (char)param_6 + '\x06';
  local_c8 = local_d4;
  local_cc[0] = (undefined1)uVar5;
  uStack_c0 = 2;
  local_b8 = local_d0;
  uStack_b0 = 1;
  local_a8 = "tls13 ";
  uStack_a0 = 6;
  local_88 = local_cc;
  uStack_80 = 1;
  local_78 = auStack_120;
  uStack_70 = uVar5;
  local_98 = (undefined *)param_5;
  uStack_90 = param_6;
  (*(code *)puVar11[4])(local_168,pvVar9,&local_c8,6);
  if ((code *)*puVar11 != (code *)0x0) {
                    /* try { // try from 0085c73c to 0085c743 has its CatchHandler @ 0085c918 */
    (*(code *)*puVar11)(pvVar9);
  }
  if (puVar11[1] != 0) {
    free(pvVar9);
  }
  bVar6 = param_7 == 0;
  if (bVar6) {
    param_7 = 1;
  }
  uVar1 = 0;
  if (!bVar6) {
    uVar1 = param_8;
  }
                    /* try { // try from 0085c76c to 0085c783 has its CatchHandler @ 0085c938 */
  (**(code **)(*(long *)(lVar13 + 0x38) + 0x20))
            (auStack_120,*(undefined8 *)(lVar13 + 0x30),param_7,uVar1);
  auVar14 = (**(code **)(*(long *)(lVar13 + 0x18) + 0x30))(*(undefined8 *)(lVar13 + 0x10),local_168)
  ;
  puVar11 = auVar14._8_8_;
  pvVar9 = auVar14._0_8_;
  if (local_e0 < 0x41) {
    local_d4[0] = (ushort)((ulong)param_4 >> 8) & 0xff | (ushort)(((uint)param_4 & 0xff00ff) << 8);
    local_d0[0] = '\x0e';
    local_c8 = local_d4;
    local_cc[0] = (undefined1)local_e0;
    uStack_c0 = 2;
    local_b8 = local_d0;
    uStack_b0 = 1;
    local_a8 = "tls13 ";
    uStack_a0 = 6;
    local_98 = &DAT_002a13d0;
    uStack_90 = 8;
    local_88 = local_cc;
    uStack_80 = 1;
    local_78 = auStack_120;
    uStack_70 = local_e0;
                    /* try { // try from 0085c7fc to 0085c813 has its CatchHandler @ 0085c940 */
    iVar8 = (*(code *)puVar11[3])(pvVar9,&local_c8,6,param_3,param_4);
    if (iVar8 == 0) {
      *param_1 = 0xffffffffffffffff;
      pcVar12 = (code *)*puVar11;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar10 = (char *)FUN_004b25a4(0x12,1);
      uVar4 = s_exporting_too_much_002feb70._8_8_;
      uVar1 = s_exporting_too_much_002feb70._0_8_;
      if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x12);
      }
      pcVar10[0x10] = 'c';
      uVar3 = _UNK_002a1078;
      uVar2 = _DAT_002a1070;
      pcVar10[0x11] = 'h';
      *(undefined8 *)(pcVar10 + 8) = uVar4;
      *(undefined8 *)pcVar10 = uVar1;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_1[2] = pcVar10;
      param_1[3] = 0x12;
      pcVar12 = (code *)*puVar11;
    }
    if (pcVar12 != (code *)0x0) {
                    /* try { // try from 0085c874 to 0085c87b has its CatchHandler @ 0085c8fc */
      (*pcVar12)(pvVar9);
    }
    if (puVar11[1] != 0) {
      free(pvVar9);
    }
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(local_168);
    return;
  }
                    /* try { // try from 0085c8d4 to 0085c8f7 has its CatchHandler @ 0085c940 */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_e0,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 0085c978  FUN_0085c978 =====

void FUN_0085c978(long param_1,long param_2)

{
  undefined1 auStack_68 [72];
  
  FUN_0085c9e8(auStack_68,param_1,*(undefined1 *)(param_2 + 0x330));
                    /* try { // try from 0085c9a0 to 0085c9b7 has its CatchHandler @ 0085c9d0 */
  FUN_0084d618(param_2);
  FUN_0085d1cc(*(undefined8 *)(param_1 + 0x10),auStack_68,param_2);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(auStack_68);
  return;
}


// ===== 0085c9e8  FUN_0085c9e8 =====

void FUN_0085c9e8(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  void *__ptr;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ushort local_9c [2];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  ushort *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = 0x60;
  if (param_3 == 0) {
    lVar2 = 0x18;
  }
  puVar1 = (undefined8 *)(param_2 + lVar2);
  auVar5 = (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + 0x18) + 0x30))
                     (*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),puVar1);
  puVar4 = auVar5._8_8_;
  __ptr = auVar5._0_8_;
                    /* try { // try from 0085ca34 to 0085caab has its CatchHandler @ 0085cb6c */
  uVar3 = (*(code *)puVar4[5])();
  local_9c[0] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
  local_98[0] = 0x11;
  local_90 = local_9c;
  local_94[0] = 0;
  uStack_88 = 2;
  local_80 = local_98;
  uStack_78 = 1;
  local_70 = "tls13 ";
  uStack_68 = 6;
  local_40 = 1;
  uStack_38 = 0;
  local_60 = &DAT_002fec7b;
  uStack_58 = 0xb;
  local_50 = local_94;
  uStack_48 = 1;
  (*(code *)puVar4[4])(&local_e8,__ptr,&local_90,6);
  if ((code *)*puVar4 != (code *)0x0) {
                    /* try { // try from 0085cab4 to 0085cabb has its CatchHandler @ 0085cb18 */
    (*(code *)*puVar4)(__ptr);
  }
  if (puVar4[1] != 0) {
    free(__ptr);
  }
                    /* try { // try from 0085cad0 to 0085cad7 has its CatchHandler @ 0085cb38 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(puVar1);
  puVar1[5] = uStack_c0;
  puVar1[4] = local_c8;
  puVar1[7] = uStack_b0;
  puVar1[6] = local_b8;
  puVar1[8] = local_a8;
  puVar1[1] = uStack_e0;
  *puVar1 = local_e8;
  puVar1[3] = uStack_d0;
  puVar1[2] = local_d8;
  param_1[5] = uStack_c0;
  param_1[4] = local_c8;
  param_1[7] = uStack_b0;
  param_1[6] = local_b8;
  param_1[8] = local_a8;
  param_1[1] = uStack_e0;
  *param_1 = local_e8;
  param_1[3] = uStack_d0;
  param_1[2] = local_d8;
  return;
}


// ===== 0085cb88  FUN_0085cb88 =====

void FUN_0085cb88(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(byte *)(param_3 + 0x331) & 1) != 0) {
    local_88 = CONCAT71(local_88._1_7_,0x11);
    local_120 = 0x8000000000000011;
    uStack_118 = CONCAT71(uStack_118._1_7_,1);
    local_58 = 0;
    uStack_50 = 1;
    local_48 = 0;
    local_1e0 = 0x8000000000000000;
                    /* try { // try from 0085cbe0 to 0085cbef has its CatchHandler @ 0085cd54 */
    FUN_007f0930(&local_120,&local_58,&local_1e0);
    uVar11 = local_a0;
    uVar10 = local_c0;
    uVar9 = uStack_c8;
    uVar8 = uStack_d0;
    uVar7 = uStack_d8;
    uVar6 = local_e0;
    uVar5 = local_100;
    uVar4 = uStack_108;
    uVar3 = uStack_110;
    uVar2 = uStack_118;
    uVar1 = local_120;
    uStack_1d8 = uStack_50;
    local_1e0 = local_58;
    local_1d0 = local_48;
    uStack_160 = uStack_b8;
    local_168 = local_c0;
    uStack_150 = uStack_a8;
    local_158 = uStack_b0;
    uStack_140 = uStack_98;
    local_148 = local_a0;
    uStack_130 = local_88;
    local_138 = uStack_90;
    local_68 = 5;
    uStack_1a0 = uStack_f8;
    local_1a8 = local_100;
    uStack_190 = uStack_e8;
    local_198 = uStack_f0;
    uStack_78 = uStack_90;
    local_80 = uStack_98;
    local_70 = local_88;
    uStack_180 = uStack_d8;
    local_188 = local_e0;
    uStack_170 = uStack_c8;
    local_178 = uStack_d0;
    uStack_1c0 = uStack_118;
    local_1c8 = local_120;
    uStack_1b0 = uStack_108;
    local_1b8 = uStack_110;
    uStack_98 = uStack_b0;
    local_a0 = uStack_b8;
    local_88 = uVar11;
    uStack_90 = uStack_a8;
    uStack_d8 = uStack_f0;
    local_e0 = uStack_f8;
    uStack_c8 = uVar6;
    uStack_d0 = uStack_e8;
    uStack_b8 = uVar8;
    local_c0 = uVar7;
    uStack_a8 = uVar10;
    uStack_b0 = uVar9;
    uStack_118 = uStack_50;
    local_120 = local_58;
    uStack_108 = uVar1;
    uStack_110 = local_48;
    uStack_f8 = uVar3;
    local_100 = uVar2;
    uStack_e8 = uVar5;
    uStack_f0 = uVar4;
    <rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::
    from(&local_1e0,&local_120);
    FUN_0084c208(param_3,&local_1e0);
    FUN_0085c9e8(&local_120,param_2,*(undefined1 *)(param_3 + 0x330));
                    /* try { // try from 0085ccac to 0085ccb7 has its CatchHandler @ 0085cd40 */
    FUN_0085d1cc(*(undefined8 *)(param_2 + 0x10),&local_120,param_3);
    *param_1 = 0xffffffffffffffff;
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_120);
    return;
  }
  local_68 = 4;
  local_120 = 0x8000000000000000;
  uStack_118 = CONCAT44(uStack_118._4_4_,0x10001);
  <rustls::common_state::rustls::common_state::CommonState>::send_msg
            (param_3,&local_120,*(char *)(param_3 + 0x49) == '\x02');
  *(undefined1 *)(param_3 + 0x335) = 1;
  *param_1 = 0x800000000000001a;
  *(undefined1 *)(param_1 + 1) = 0x1b;
  return;
}


// ===== 0085cd80  FUN_0085cd80 =====

void FUN_0085cd80(undefined8 *param_1,undefined1 (*param_2) [16],long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *__ptr;
  undefined8 *puVar1;
  uint uVar2;
  long extraout_x1;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ushort local_d4 [2];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  ushort *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  ulong uStack_70;
  
  lVar5 = *(long *)param_2[1];
                    /* try { // try from 0085cdc4 to 0085ce6b has its CatchHandler @ 0085d074 */
  (**(code **)(*(long *)(lVar5 + 0x38) + 0x18))(*(undefined8 *)(lVar5 + 0x30));
  (**(code **)(extraout_x1 + 0x28))(&local_120);
  uVar4 = local_e0;
  if (local_e0 < 0x41) {
    __ptr = *(void **)*param_2;
    puVar1 = *(undefined8 **)(*param_2 + 8);
    uVar2 = (*(code *)puVar1[5])(__ptr);
    local_d4[0] = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
    local_d0[0] = 0xd;
    local_c8 = local_d4;
    local_cc[0] = (undefined1)uVar4;
    uStack_c0 = 2;
    local_b8 = local_d0;
    uStack_b0 = 1;
    local_a8 = "tls13 ";
    uStack_a0 = 6;
    local_98 = &DAT_002fed7f;
    uStack_90 = 7;
    local_88 = local_cc;
    uStack_80 = 1;
    local_78 = &local_120;
    uStack_70 = uVar4;
    (*(code *)puVar1[4])(&local_168,__ptr,&local_c8,6);
    if (0x40 < local_128) {
                    /* try { // try from 0085cffc to 0085d013 has its CatchHandler @ 0085d058 */
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_128,0x40,&PTR_s__root__cargo_registry_src_index__00ae8520);
    }
                    /* try { // try from 0085ce80 to 0085ce87 has its CatchHandler @ 0085d058 */
    auVar7 = (**(code **)(*(long *)(lVar5 + 0x18) + 0x18))(*(undefined8 *)(lVar5 + 0x10),&local_168)
    ;
    uVar6 = auVar7._8_8_;
    uVar3 = auVar7._0_8_;
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 0085ce98 to 0085ce9f has its CatchHandler @ 0085d018 */
      (*(code *)*puVar1)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    *param_2 = auVar7;
                    /* try { // try from 0085ceb8 to 0085cef3 has its CatchHandler @ 0085d074 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_168);
    uVar4 = *(ulong *)(param_3 + 0x40);
    if (uVar4 < 0x41) {
      FUN_0085d8c0(&local_168,uVar3,uVar6,4,param_3,uVar4,param_4,param_5,param_6,param_7);
                    /* try { // try from 0085cef4 to 0085cf1f has its CatchHandler @ 0085d048 */
      FUN_0085d8c0(&local_120,uVar3,uVar6,5,param_3,uVar4,param_4,param_5,param_6,param_7);
                    /* try { // try from 0085cf20 to 0085cf47 has its CatchHandler @ 0085d038 */
      FUN_0085d8c0(&local_c8,uVar3,uVar6,6,param_3,uVar4,param_4,param_5,param_6,param_7);
      uVar6 = *(undefined8 *)*param_2;
      uVar3 = *(undefined8 *)param_2[1];
      param_1[1] = *(undefined8 *)(*param_2 + 8);
      *param_1 = uVar6;
      param_1[6] = uStack_150;
      param_1[5] = local_158;
      param_1[8] = uStack_140;
      param_1[7] = local_148;
      param_1[10] = uStack_130;
      param_1[9] = local_138;
      param_1[2] = uVar3;
      param_1[4] = uStack_160;
      param_1[3] = local_168;
      param_1[0x11] = uStack_f8;
      param_1[0x10] = local_100;
      param_1[0x13] = uStack_e8;
      param_1[0x12] = uStack_f0;
      param_1[0xb] = local_128;
      param_1[0x14] = local_e0;
      param_1[0xd] = uStack_118;
      param_1[0xc] = local_120;
      param_1[0xf] = uStack_108;
      param_1[0xe] = uStack_110;
      param_1[0x16] = uStack_c0;
      param_1[0x15] = local_c8;
      param_1[0x1d] = local_88;
      param_1[0x1c] = uStack_90;
      param_1[0x1b] = local_98;
      param_1[0x1a] = uStack_a0;
      param_1[0x19] = local_a8;
      param_1[0x18] = uStack_b0;
      param_1[0x17] = local_b8;
      return;
    }
  }
                    /* try { // try from 0085cfe0 to 0085cff7 has its CatchHandler @ 0085d074 */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,uVar4,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 0085d094  FUN_0085d094 =====

void FUN_0085d094(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ushort local_a4 [2];
  ushort *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  auVar3 = (**(code **)(*(long *)(*(long *)(*param_2 + 0x10) + 0x18) + 0x30))
                     (*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),param_2 + 1);
  puVar2 = auVar3._8_8_;
  __ptr = auVar3._0_8_;
                    /* try { // try from 0085d0dc to 0085d153 has its CatchHandler @ 0085d1b0 */
  uVar1 = (*(code *)puVar2[5])();
  local_a4[0] = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
  local_28[0] = 0x10;
  local_a0 = local_a4;
  local_24[0] = (undefined1)param_4;
  uStack_98 = 2;
  local_90 = local_28;
  uStack_88 = 1;
  local_80 = "tls13 ";
  uStack_78 = 6;
  local_70 = &DAT_002fec86;
  uStack_68 = 10;
  local_60 = local_24;
  uStack_58 = 1;
  local_50 = param_3;
  uStack_48 = param_4;
  (*(code *)puVar2[4])(param_1,__ptr,&local_a0,6);
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 0085d15c to 0085d163 has its CatchHandler @ 0085d190 */
    (*(code *)*puVar2)(__ptr);
  }
  if (puVar2[1] != 0) {
    free(__ptr);
  }
  return;
}


// ===== 0085d1cc  FUN_0085d1cc =====

void FUN_0085d1cc(long param_1,undefined8 param_2,long param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  int iVar2;
  void *__ptr_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 *local_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined2 local_c4;
  undefined8 *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined2 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_48 [4];
  undefined1 local_44 [3];
  undefined1 uStack_41;
  
  auVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0x30))(*(undefined8 *)(param_1 + 0x10));
  puVar4 = auVar7._8_8_;
  __ptr_00 = auVar7._0_8_;
                    /* try { // try from 0085d210 to 0085d2bb has its CatchHandler @ 0085d498 */
  uVar3 = (**(code **)(*(long *)(param_1 + 0x28) + 0x28))(*(undefined8 *)(param_1 + 0x20));
  local_44[0] = 9;
  local_b0 = local_44;
  local_c4 = (ushort)local_c4._1_1_ << 8;
  local_100 = (undefined8 *)
              CONCAT62(local_100._2_6_,
                       (ushort)((ulong)uVar3 >> 8) & 0xff | (ushort)(((uint)uVar3 & 0xff00ff) << 8))
  ;
  uStack_a8 = 1;
  local_a0 = "tls13 ";
  uStack_98 = 6;
  local_90 = &DAT_002feda3;
  uStack_88 = 3;
  local_80 = &local_c4;
  uStack_78 = 1;
  local_70 = 1;
  uStack_68 = 0;
  local_c0 = &local_100;
  uStack_128 = 0;
  local_130 = (undefined8 *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  pcVar6 = (code *)puVar4[3];
  uStack_b8 = 2;
  iVar2 = (*pcVar6)(__ptr_00,&local_c0,6,&local_130,0x20);
  if (iVar2 != 0) {
                    /* try { // try from 0085d3f4 to 0085d417 has its CatchHandler @ 0085d498 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002ff1d9,0x24,&uStack_41,&DAT_00ae8158,
               &PTR_s__root__cargo_registry_src_index__00ae80f0);
  }
  local_d0 = 0x20;
  uStack_e8 = uStack_128;
  local_f0 = local_130;
  uStack_d8 = uStack_118;
  uStack_e0 = uStack_120;
  FUN_00841790(&local_130,&local_f0,uVar3);
  local_c4 = 0xc00;
  local_c0 = (undefined8 *)&local_c4;
  local_48[0] = 8;
  uStack_b8 = 2;
  local_b0 = local_48;
  uStack_a8 = 1;
  local_a0 = "tls13 ";
  uStack_98 = 6;
  local_90 = &DAT_002feda1;
  uStack_88 = 2;
  local_80 = (undefined2 *)local_44;
  local_44[0] = 0;
  uStack_78 = 1;
  local_70 = 1;
  uStack_68 = 0;
  uStack_e8 = uStack_e8 & 0xffffffff00000000;
  local_f0 = (undefined8 *)0x0;
                    /* try { // try from 0085d310 to 0085d327 has its CatchHandler @ 0085d488 */
  iVar2 = (*pcVar6)(__ptr_00,&local_c0,6,&local_f0,0xc);
  if (iVar2 == 0) {
    local_a0 = (char *)local_110;
    uStack_b8 = uStack_128;
    local_c0 = local_130;
    uStack_a8 = uStack_118;
    local_b0 = (undefined1 *)uStack_120;
    local_100 = local_f0;
    local_f8 = (undefined4)uStack_e8;
                    /* try { // try from 0085d354 to 0085d35f has its CatchHandler @ 0085d484 */
    auVar7 = (**(code **)(*(long *)(param_1 + 0x28) + 0x18))
                       (*(undefined8 *)(param_1 + 0x20),&local_c0,&local_100);
    __ptr = *(void **)(param_3 + 0x10);
    puVar1 = *(undefined8 **)(param_3 + 0x18);
    uVar5 = *(ulong *)(param_1 + 0x40);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 0085d378 to 0085d37f has its CatchHandler @ 0085d464 */
      (*pcVar6)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    pcVar6 = (code *)*puVar4;
    if (0xfffffffffffeffff < uVar5) {
      uVar5 = 0xffffffffffff0000;
    }
    *(undefined1 (*) [16])(param_3 + 0x10) = auVar7;
    *(ulong *)(param_3 + 0x30) = uVar5;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined1 *)(param_3 + 0x49) = 2;
    if (pcVar6 != (code *)0x0) {
                    /* try { // try from 0085d3b8 to 0085d3bf has its CatchHandler @ 0085d444 */
      (*pcVar6)(__ptr_00);
    }
    if (puVar4[1] != 0) {
      free(__ptr_00);
    }
    return;
  }
                    /* try { // try from 0085d41c to 0085d43f has its CatchHandler @ 0085d488 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_41,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085d4b4  FUN_0085d4b4 =====

undefined1  [16] FUN_0085d4b4(long param_1)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 *local_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined2 local_b4;
  undefined8 *local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined2 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_38 [4];
  undefined1 local_34 [3];
  undefined1 uStack_31;
  
  auVar5 = (**(code **)(*(long *)(param_1 + 0x18) + 0x30))(*(undefined8 *)(param_1 + 0x10));
  puVar3 = auVar5._8_8_;
  __ptr = auVar5._0_8_;
                    /* try { // try from 0085d4f0 to 0085d59b has its CatchHandler @ 0085d714 */
  uVar2 = (**(code **)(*(long *)(param_1 + 0x28) + 0x28))(*(undefined8 *)(param_1 + 0x20));
  local_34[0] = 9;
  local_a0 = local_34;
  local_b4 = (ushort)local_b4._1_1_ << 8;
  local_f0 = (undefined8 *)
             CONCAT62(local_f0._2_6_,
                      (ushort)((ulong)uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8));
  uStack_98 = 1;
  local_90 = "tls13 ";
  uStack_88 = 6;
  local_80 = &DAT_002feda3;
  uStack_78 = 3;
  local_70 = &local_b4;
  uStack_68 = 1;
  local_60 = 1;
  uStack_58 = 0;
  local_b0 = &local_f0;
  uStack_118 = 0;
  local_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  pcVar4 = (code *)puVar3[3];
  uStack_a8 = 2;
  iVar1 = (*pcVar4)(__ptr,&local_b0,6,&local_120,0x20);
  if (iVar1 != 0) {
                    /* try { // try from 0085d690 to 0085d6b3 has its CatchHandler @ 0085d714 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002ff1d9,0x24,&uStack_31,&DAT_00ae8158,
               &PTR_s__root__cargo_registry_src_index__00ae80f0);
  }
  local_c0 = 0x20;
  uStack_d8 = uStack_118;
  local_e0 = local_120;
  uStack_c8 = uStack_108;
  uStack_d0 = uStack_110;
  FUN_00841790(&local_120,&local_e0,uVar2);
  local_b4 = 0xc00;
  local_b0 = (undefined8 *)&local_b4;
  local_38[0] = 8;
  uStack_a8 = 2;
  local_a0 = local_38;
  uStack_98 = 1;
  local_90 = "tls13 ";
  uStack_88 = 6;
  local_80 = &DAT_002feda1;
  uStack_78 = 2;
  local_70 = (undefined2 *)local_34;
  local_34[0] = 0;
  uStack_68 = 1;
  local_60 = 1;
  uStack_58 = 0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  local_e0 = (undefined8 *)0x0;
                    /* try { // try from 0085d5f0 to 0085d607 has its CatchHandler @ 0085d704 */
  iVar1 = (*pcVar4)(__ptr,&local_b0,6,&local_e0,0xc);
  if (iVar1 == 0) {
    local_f0 = local_e0;
    local_90 = (char *)local_100;
    local_e8 = (undefined4)uStack_d8;
    uStack_a8 = uStack_118;
    local_b0 = local_120;
    uStack_98 = uStack_108;
    local_a0 = (undefined1 *)uStack_110;
                    /* try { // try from 0085d634 to 0085d63f has its CatchHandler @ 0085d700 */
    auVar5 = (**(code **)(*(long *)(param_1 + 0x28) + 0x20))
                       (*(undefined8 *)(param_1 + 0x20),&local_b0,&local_f0);
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0085d650 to 0085d657 has its CatchHandler @ 0085d6e0 */
      (*(code *)*puVar3)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
    return auVar5;
  }
                    /* try { // try from 0085d6b8 to 0085d6db has its CatchHandler @ 0085d704 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_31,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085d730  FUN_0085d730 =====

void FUN_0085d730(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  void *__ptr;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_f0 [76];
  ushort local_a4 [2];
  ushort *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  auVar3 = (**(code **)(*(long *)(param_2 + 0x18) + 0x30))(*(undefined8 *)(param_2 + 0x10),param_3);
  puVar2 = auVar3._8_8_;
  __ptr = auVar3._0_8_;
                    /* try { // try from 0085d774 to 0085d7eb has its CatchHandler @ 0085d894 */
  uVar1 = (*(code *)puVar2[5])();
  local_a4[0] = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
  local_28[0] = 0xe;
  local_a0 = local_a4;
  local_24[0] = 0;
  uStack_98 = 2;
  local_90 = local_28;
  uStack_88 = 1;
  local_80 = "tls13 ";
  uStack_78 = 6;
  local_50 = 1;
  uStack_48 = 0;
  local_70 = "finished";
  uStack_68 = 8;
  local_60 = local_24;
  uStack_58 = 1;
  (*(code *)puVar2[4])(auStack_f0,__ptr,&local_a0,6);
  if (*(ulong *)(param_4 + 0x40) < 0x41) {
                    /* try { // try from 0085d800 to 0085d80f has its CatchHandler @ 0085d89c */
    (**(code **)(*(long *)(param_2 + 0x18) + 0x38))
              (param_1,*(undefined8 *)(param_2 + 0x10),auStack_f0,param_4);
                    /* try { // try from 0085d810 to 0085d817 has its CatchHandler @ 0085d894 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(auStack_f0);
    if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 0085d820 to 0085d827 has its CatchHandler @ 0085d874 */
      (*(code *)*puVar2)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
    return;
  }
                    /* try { // try from 0085d854 to 0085d86f has its CatchHandler @ 0085d89c */
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(ulong *)(param_4 + 0x40),0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 0085d8c0  FUN_0085d8c0 =====

void FUN_0085d8c0(undefined8 *param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,code *param_8,code *param_9,
                 undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ushort local_d4 [2];
  char local_d0 [4];
  undefined1 local_cc [4];
  ushort *local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar4 = (ulong)(param_4 - 1) & 0xff;
  iVar1 = *(int *)(&DAT_002fee40 + uVar4 * 4);
  uVar5 = *(undefined8 *)(&DAT_002fee10 + uVar4 * 8);
  uVar2 = (**(code **)(param_3 + 0x28))(param_2);
  local_d0[0] = (char)uVar5 + '\x06';
  local_d4[0] = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
  local_c8 = local_d4;
  uStack_c0 = 2;
  local_b8 = local_d0;
  uStack_b0 = 1;
  local_a8 = "tls13 ";
  uStack_a0 = 6;
  local_88 = local_cc;
  uStack_80 = 1;
  local_cc[0] = (undefined1)param_6;
  local_98 = &DAT_002fee40 + iVar1;
  uStack_90 = uVar5;
  local_78 = param_5;
  uStack_70 = param_6;
  (**(code **)(param_3 + 0x20))(&local_120,param_2,&local_c8,6);
  puVar3 = (&PTR_DAT_00ae7bf8)[uVar4];
  uVar5 = *(undefined8 *)(&DAT_002fee58 + uVar4 * 8);
                    /* try { // try from 0085d9b0 to 0085da3f has its CatchHandler @ 0085da44 */
  uVar4 = (*param_9)(param_7,puVar3,uVar5);
  if ((uVar4 & 1) != 0) {
    if (0x40 < local_e0) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,local_e0,0x40,&PTR_s__root__cargo_registry_src_index__00ae8520);
    }
    (*param_8)(param_7,puVar3,uVar5,param_10,0x20,&local_120);
  }
  param_1[8] = local_e0;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  return;
}


// ===== 0085da5c  FUN_0085da5c =====

void FUN_0085da5c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  void *__ptr;
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar2 = *(ulong *)(param_2 + 0x40);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uVar2,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
  }
  FUN_0085d8c0(&local_d8,*param_1,param_1[1],1,param_2,uVar2,param_3,*(undefined8 *)(param_4 + 0x20)
               ,*(undefined8 *)(param_4 + 0x28),param_5);
  if (*(char *)(param_6 + 0x66) == '\x01') {
                    /* try { // try from 0085dabc to 0085dac3 has its CatchHandler @ 0085dc20 */
    auVar4 = FUN_0085d4b4(param_1[2],&local_d8);
    __ptr = (void *)param_6[4];
    puVar1 = (undefined8 *)param_6[5];
    pcVar3 = (code *)*puVar1;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 0085dad8 to 0085dadf has its CatchHandler @ 0085dbfc */
      (*pcVar3)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
    *(undefined1 (*) [16])(param_6 + 4) = auVar4;
    param_6[8] = 0;
    *(undefined1 *)((long)param_6 + 0x4a) = 2;
    *param_6 = 0;
  }
  else {
                    /* try { // try from 0085db0c to 0085db17 has its CatchHandler @ 0085dc20 */
    FUN_0085d1cc(param_1[2],&local_d8,param_6);
  }
  if ((*(byte *)((long)param_6 + 0x339) & 1) != 0) {
    uStack_68 = uStack_b0;
    local_70 = local_b8;
    uStack_58 = uStack_a0;
    local_60 = local_a8;
    local_50 = local_98;
    uStack_88 = uStack_d0;
    local_90 = local_d8;
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    if (param_6[0x18] != 0) {
                    /* try { // try from 0085db48 to 0085db4f has its CatchHandler @ 0085dbcc */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_6 + 0x19);
    }
    param_6[0x18] = 1;
    param_6[0x1c] = uStack_78;
    param_6[0x1b] = local_80;
    param_6[0x1e] = uStack_68;
    param_6[0x1d] = local_70;
    param_6[0x20] = uStack_58;
    param_6[0x1f] = local_60;
    param_6[0x21] = local_50;
    param_6[0x1a] = uStack_88;
    param_6[0x19] = local_90;
    return;
  }
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_d8);
  return;
}


// ===== 0085dc38  FUN_0085dc38 =====

void FUN_0085dc38(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long extraout_x1;
  long lVar4;
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [64];
  ulong local_c8;
  ushort local_bc [2];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  ushort *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  ulong uStack_58;
  
  lVar4 = param_2[2];
  (**(code **)(*(long *)(lVar4 + 0x38) + 0x18))(*(undefined8 *)(lVar4 + 0x30));
  (**(code **)(extraout_x1 + 0x28))(auStack_108);
  if (local_c8 < 0x41) {
    uVar1 = *param_2;
    lVar2 = param_2[1];
    uVar3 = (**(code **)(lVar2 + 0x28))(uVar1);
    local_bc[0] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
    local_b0 = local_bc;
    local_b8[0] = 0x10;
    uStack_a8 = 2;
    local_a0 = local_b8;
    uStack_98 = 1;
    local_90 = "tls13 ";
    uStack_88 = 6;
    local_80 = &DAT_002fed26;
    uStack_78 = 10;
    local_70 = local_b4;
    uStack_68 = 1;
    local_b4[0] = (undefined1)local_c8;
    uStack_58 = local_c8;
    local_60 = auStack_108;
    (**(code **)(lVar2 + 0x20))(auStack_150,uVar1,&local_b0,6);
                    /* try { // try from 0085dd10 to 0085dd23 has its CatchHandler @ 0085dd60 */
    FUN_0085d730(param_1,lVar4,auStack_150,param_3);
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(auStack_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_c8,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 0085dd78  FUN_0085dd78 =====

void FUN_0085dd78(long *param_1,undefined1 param_2,void *param_3,ulong param_4,void *param_5,
                 ulong param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong *__src;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_80;
  long local_78;
  undefined1 *puStack_70;
  long local_68;
  
  __src = &local_80;
  uVar2 = param_6 + param_4;
  if (uVar2 < 0x80) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar4 = (undefined1 *)FUN_004b25a4(uVar2 + 2,1);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,uVar2 + 2);
    }
    *puVar4 = param_2;
    puVar4[1] = (char)uVar2;
    if (param_4 != 0) {
      memcpy(puVar4 + 2,param_3,param_4);
    }
    if (param_6 != 0) {
      memcpy(puVar4 + param_4 + 2,param_5,param_6);
    }
    *param_1 = uVar2 + 2;
    param_1[1] = (long)puVar4;
    local_68 = param_4 + 2;
    goto LAB_0085e004;
  }
  uVar3 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar3 & 0xffff0000ffff0000) >> 0x10;
  uVar3 = (uVar3 & 0xffff0000ffff) << 0x10;
  local_80 = (uVar6 | uVar3) >> 0x20 | (uVar6 | uVar3) << 0x20;
  if ((uVar6 & 0xff00000000) == 0) {
    if ((uVar6 & 0xff0000000000) == 0) {
      if ((uVar3 & 0xff000000000000) == 0) {
        if ((uVar3 & 0xff00000000000000) == 0) {
          if ((uVar6 & 0xff) == 0) {
            if ((uVar6 & 0xff00) == 0) {
              uVar6 = 6;
              if ((uVar3 & 0xff0000) == 0) {
                uVar6 = 7;
              }
              __src = (ulong *)((ulong)&local_80 | uVar6);
            }
            else {
              uVar6 = 5;
              __src = (ulong *)((ulong)&local_80 | 5);
            }
          }
          else {
            __src = (ulong *)((ulong)&local_80 | 4);
            uVar6 = 4;
          }
        }
        else {
          __src = (ulong *)((ulong)&local_80 | 3);
          uVar6 = 3;
        }
      }
      else {
        __src = (ulong *)((ulong)&local_80 | 2);
        uVar6 = 2;
      }
    }
    else {
      __src = (ulong *)((ulong)&local_80 | 1);
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  lVar1 = (uVar2 - uVar6) + 10;
  if (lVar1 < 0) {
    uVar5 = 0;
LAB_0085dec4:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,lVar1);
  }
  if (lVar1 == 0) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = &DAT_00000001;
                    /* try { // try from 0085df1c to 0085df47 has its CatchHandler @ 0085e08c */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_78);
    *puStack_70 = param_2;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 1;
    puStack_70 = (undefined1 *)FUN_004b25a4(lVar1,1);
    if (puStack_70 == (undefined1 *)0x0) goto LAB_0085dec4;
    *puStack_70 = param_2;
    local_78 = lVar1;
  }
  if (local_78 == 1) {
    local_68 = 1;
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(&local_78);
  }
  puStack_70[1] = -0x78 - (char)uVar6;
  uVar6 = 8 - uVar6;
  local_68 = 2;
  if (local_78 - 2U < uVar6) {
                    /* try { // try from 0085e028 to 0085e077 has its CatchHandler @ 0085e08c */
    FUN_00874c84(&local_78,2,uVar6,1,1);
  }
  memcpy(puStack_70 + local_68,__src,uVar6);
  local_68 = local_68 + uVar6;
  if ((ulong)(local_78 - local_68) < param_4) {
    FUN_00874c84(&local_78,local_68,param_4,1,1);
LAB_0085dfac:
    memcpy(puStack_70 + local_68,param_3,param_4);
  }
  else if (param_4 != 0) goto LAB_0085dfac;
  local_68 = local_68 + param_4;
  if ((ulong)(local_78 - local_68) < param_6) {
    FUN_00874c84(&local_78,local_68,param_6,1,1);
LAB_0085dfe0:
    memcpy(puStack_70 + local_68,param_5,param_6);
  }
  else if (param_6 != 0) goto LAB_0085dfe0;
  param_1[1] = (long)puStack_70;
  *param_1 = local_78;
LAB_0085e004:
  param_1[2] = local_68 + param_6;
  return;
}


// ===== 0085e0ac  FUN_0085e0ac =====

void FUN_0085e0ac(undefined8 *param_1,ulong *param_2,void *param_3,long param_4,void *param_5,
                 long param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  size_t __n;
  ulong uVar3;
  
  uVar3 = *param_2;
  if ((long)uVar3 < -0x7ffffffffffffffb) {
    if (param_4 == 0) {
      puVar1 = &DAT_00000001;
    }
    else {
      __n = param_4 << 1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar1 = (undefined1 *)FUN_004b25a4(__n,1);
      if (puVar1 == (undefined1 *)0x0) goto LAB_0085e1bc;
      memcpy(puVar1,param_3,__n);
    }
    param_1[1] = param_4;
    param_1[2] = puVar1;
    param_1[3] = param_4;
    *(char *)(param_1 + 4) = (char)(0x300020201 >> ((uVar3 & 7) << 3));
    uVar2 = 0x8000000000000011;
  }
  else {
    if (param_6 == 0) {
      puVar1 = &DAT_00000001;
    }
    else {
      __n = param_6 << 1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar1 = (undefined1 *)FUN_004b25a4(__n,1);
      if (puVar1 == (undefined1 *)0x0) {
LAB_0085e1bc:
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,__n);
      }
      memcpy(puVar1,param_5,__n);
    }
    uVar3 = param_2[0x16];
    uVar2 = 0x8000000000000012;
    param_1[1] = param_6;
    param_1[2] = puVar1;
    param_1[3] = param_6;
    *(short *)(param_1 + 4) = (short)uVar3;
  }
  *param_1 = uVar2;
  return;
}


// ===== 0085e1c8  FUN_0085e1c8 =====

void FUN_0085e1c8(undefined8 param_1)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(param_1,8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,param_1);
}


// ===== 0085e204  rustls::tls13::key_schedule::derive_traffic_iv =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::tls13::key_schedule::derive_traffic_iv */

void __rustcall
rustls::tls13::key_schedule::derive_traffic_iv(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined2 local_94 [2];
  undefined2 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_8 [4];
  undefined1 local_4 [3];
  undefined1 uStack_1;
  
  local_94[0] = 0xc00;
  local_90 = local_94;
  local_8[0] = 8;
  uStack_88 = 2;
  local_80 = local_8;
  uStack_78 = 1;
  local_70 = "tls13 ";
  uStack_68 = 6;
  local_60 = &DAT_002feda1;
  uStack_58 = 2;
  local_50 = local_4;
  uStack_48 = 1;
  local_4[0] = 0;
  local_40 = 1;
  uStack_38 = 0;
  local_28 = 0;
  local_30 = 0;
  iVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_90,6,&local_30,0xc);
  if (iVar1 == 0) {
    *param_1 = local_30;
    *(undefined4 *)(param_1 + 1) = local_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_1,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085e2d4  rustls::tls13::key_schedule::derive_traffic_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::tls13::key_schedule::derive_traffic_key */

void __rustcall
rustls::tls13::key_schedule::derive_traffic_key
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  ushort local_10c [2];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  ushort *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  uVar2 = (**(code **)(param_5 + 0x28))(param_4);
  local_100 = local_10c;
  local_10c[0] = (ushort)((ulong)uVar2 >> 8) & 0xff | (ushort)(((uint)uVar2 & 0xff00ff) << 8);
  local_108[0] = 9;
  uStack_f8 = 2;
  local_f0 = local_108;
  uStack_e8 = 1;
  local_e0 = "tls13 ";
  uStack_d8 = 6;
  local_d0 = &DAT_002feda3;
  uStack_c8 = 3;
  local_c0 = local_104;
  uStack_b8 = 1;
  local_104[0] = 0;
  local_b0 = 1;
  uStack_a8 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  iVar1 = (**(code **)(param_3 + 0x18))(param_2,&local_100,6,&local_70,0x20);
  if (iVar1 == 0) {
    local_80 = 0x20;
    uStack_98 = uStack_68;
    local_a0 = local_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    FUN_00841790(param_1,&local_a0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_41,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085e3ec  FUN_0085e3ec =====

undefined8
FUN_0085e3ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  int iVar2;
  void *__ptr;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined2 local_9c [2];
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined1 local_18 [4];
  undefined1 local_14 [3];
  undefined1 uStack_11;
  
  auVar4 = (**(code **)(param_2 + 0x20))(param_1,0,param_3,param_3,param_4);
  puVar3 = auVar4._8_8_;
  __ptr = auVar4._0_8_;
  uStack_40 = *(ulong *)(param_5 + 0x40);
  if (0x40 < uStack_40) {
                    /* try { // try from 0085e4e8 to 0085e527 has its CatchHandler @ 0085e54c */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,uStack_40,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
  }
  local_9c[0] = 0x800;
  local_88 = local_18;
  local_18[0] = 0x21;
  uStack_80 = 1;
  local_78 = "tls13 ";
  uStack_70 = 6;
  local_14[0] = (undefined1)uStack_40;
  local_68 = &DAT_002fed86;
  uStack_60 = 0x1b;
  local_58 = local_14;
  uStack_50 = 1;
  local_98 = local_9c;
  uStack_90 = 2;
  local_38 = 0;
                    /* try { // try from 0085e48c to 0085e4a3 has its CatchHandler @ 0085e54c */
  local_48 = param_5;
  iVar2 = (*(code *)puVar3[3])(__ptr,&local_98,6,&local_38,8);
  uVar1 = local_38;
  if (iVar2 == 0) {
    if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 0085e4b4 to 0085e4bb has its CatchHandler @ 0085e52c */
      (*(code *)*puVar3)(__ptr);
    }
    if (puVar3[1] != 0) {
      free(__ptr);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_11,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 0085e568  FUN_0085e568 =====

bool FUN_0085e568(char *param_1,long param_2)

{
  if (param_2 != 0) {
    return *param_1 == '\x04';
  }
  return false;
}


// ===== 0085e584  FUN_0085e584 =====

void FUN_0085e584(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                 undefined8 *param_13)

{
  undefined1 *puVar1;
  long lVar2;
  long local_1a0;
  undefined1 *puStack_198;
  long local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long local_160;
  long lStack_158;
  undefined1 *puStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined1 local_f0;
  undefined1 local_c8;
  long local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uStack_178 = param_13[1];
  local_180 = *param_13;
  local_170 = param_13[2];
  local_1a0 = 0;
  puStack_198 = &DAT_00000008;
  local_190 = 0;
  local_188 = 0;
                    /* try { // try from 0085e5f0 to 0085e60b has its CatchHandler @ 0085e744 */
  FUN_0080c270(&local_160,&local_1a0,param_3,param_4,param_9,param_10,param_11,&local_180);
  if (local_160 == -1) {
                    /* try { // try from 0085e670 to 0085e683 has its CatchHandler @ 0085e744 */
    FUN_0080bfa0(&local_1a0,param_3,param_10,param_8);
    lStack_138 = *(undefined8 *)(param_12 + 0x28);
    local_140 = *(undefined8 *)(param_12 + 0x20);
    local_128 = *(undefined8 *)(param_12 + 0x38);
    local_130 = *(undefined8 *)(param_12 + 0x30);
    local_b0 = local_190;
    uStack_100 = param_5[4];
    puStack_b8 = puStack_198;
    local_c0 = local_1a0;
    puStack_150 = puStack_198;
    lStack_158 = local_1a0;
    local_118 = param_5[1];
    uStack_120 = *param_5;
    local_108 = param_5[3];
    uStack_110 = param_5[2];
    local_c8 = 2;
    local_160 = -0x7ffffffffffffffe;
    local_f8 = 4;
    lStack_148 = local_190;
    local_f0 = 0;
    local_f4 = param_6;
    local_f2 = param_7;
    uStack_a8 = local_140;
    uStack_a0 = lStack_138;
    local_98 = local_130;
    uStack_90 = local_128;
    local_88 = uStack_120;
    uStack_80 = local_118;
    local_78 = uStack_110;
    uStack_70 = local_108;
    local_68 = uStack_100;
    FUN_0084de4c(param_2,&local_160);
    *param_1 = -1;
    *(undefined1 *)(param_1 + 1) = local_188;
  }
  else {
    param_1[5] = lStack_138;
    param_1[4] = local_140;
    lVar2 = local_190 + 1;
    param_1[6] = local_130;
    param_1[1] = lStack_158;
    *param_1 = local_160;
    param_1[3] = lStack_148;
    param_1[2] = (long)puStack_150;
    puVar1 = puStack_198;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0085e644 to 0085e647 has its CatchHandler @ 0085e758 */
      FUN_007ff230(puVar1);
      puVar1 = puVar1 + 0x28;
    }
    if (local_1a0 != 0) {
      free(puStack_198);
    }
  }
  return;
}


// ===== 0085e7a8  FUN_0085e7a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085e7a8(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined1 *__dest;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  size_t *psVar5;
  size_t __n;
  void *__src;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong local_130;
  long lStack_128;
  ulong local_120;
  ulong local_110;
  long lStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  long lStack_d0;
  ulong local_c8;
  undefined1 local_78;
  
  param_3 = param_3 + (*(long *)(param_4 + 0x10) - 1U & 0xfffffffffffffff0);
  uVar1 = (**(code **)(param_4 + 0x20))(param_3 + 0x10);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    (**(code **)(param_4 + 0x50))(&local_148,param_3 + 0x10);
                    /* try { // try from 0085e808 to 0085e83b has its CatchHandler @ 0085e9e0 */
    auVar7 = (**(code **)(param_4 + 0x30))(param_3 + 0x10);
    uVar1 = auVar7._8_8_;
    lVar2 = uVar1 * 0x18;
    if (0x555555555555555 < uVar1) {
      uVar4 = 0;
LAB_0085e830:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,lVar2);
    }
    if (lVar2 == 0) {
      local_110 = 0;
      lStack_108 = 8;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 8;
      lStack_108 = FUN_004b25a4(lVar2,8);
      if (lStack_108 == 0) goto LAB_0085e830;
      local_110 = uVar1;
      if (uVar1 != 0) {
        uVar6 = 0;
        psVar5 = (size_t *)(lStack_108 + 0x10);
        do {
          local_110 = auVar7._8_8_;
          lVar3 = auVar7._0_8_;
          if (lVar2 == 0) break;
          __n = *(size_t *)(lVar3 + 0x10);
          if ((long)__n < 0) {
            uVar4 = 0;
LAB_0085e990:
                    /* try { // try from 0085e990 to 0085e997 has its CatchHandler @ 0085e9c4 */
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar4,__n);
          }
          if (__n == 0) {
            __dest = &DAT_00000001;
          }
          else {
            __src = *(void **)(lVar3 + 8);
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            __dest = (undefined1 *)FUN_004b25a4(__n,1);
            uVar4 = 1;
            if (__dest == (undefined1 *)0x0) goto LAB_0085e990;
            memcpy(__dest,__src,__n);
          }
          uVar6 = uVar6 + 1;
          auVar7._8_8_ = local_110;
          auVar7._0_8_ = lVar3 + 0x18;
          lVar2 = lVar2 + -0x18;
          psVar5[-2] = __n;
          psVar5[-1] = (size_t)__dest;
          *psVar5 = __n;
          psVar5 = psVar5 + 3;
        } while (uVar1 != uVar6);
      }
    }
    lStack_128 = lStack_108;
    local_130 = local_110;
    local_120 = uVar1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_100 = (undefined1 *)FUN_004b25a4(4,1);
    if (local_100 == (undefined1 *)0x0) {
                    /* try { // try from 0085e99c to 0085e9a7 has its CatchHandler @ 0085e9ac */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,4);
    }
    *local_100 = 0;
    local_100[2] = 7;
    uStack_e8 = uStack_140;
    local_f0 = local_148;
    local_e0 = local_138;
    lStack_d0 = lStack_128;
    local_d8 = local_130;
    local_c8 = local_120;
    local_78 = 10;
    uStack_f8 = 2;
    lStack_108 = _UNK_002a0408;
    local_110 = _DAT_002a0400;
    FUN_0084de4c(param_2,&local_110);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 0085ea04  FUN_0085ea04 =====

void FUN_0085ea04(long *param_1,long param_2,long param_3,long param_4,long param_5,long *param_6,
                 long *param_7,long param_8,undefined2 param_9,long param_10,undefined8 param_11,
                 long param_12,long param_13)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_3a8;
  undefined8 *puStack_3a0;
  long local_398;
  long local_390;
  long lStack_388;
  long lStack_380;
  long local_378;
  undefined1 *puStack_370;
  long local_368;
  long lStack_360;
  long local_358;
  long local_350;
  long local_348;
  long lStack_340;
  long local_338;
  undefined1 *puStack_330;
  long local_328;
  long lStack_320;
  long local_318;
  long local_310;
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  long local_2f0;
  undefined8 *puStack_2e8;
  long local_2e0;
  long lStack_2d8;
  long local_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long local_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined2 local_258;
  undefined6 uStack_256;
  undefined8 local_248;
  long lStack_240;
  undefined8 *puStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  undefined2 local_1e0;
  undefined2 uStack_1de;
  undefined4 local_1dc;
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  undefined8 local_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  long local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_160 [16];
  long local_150;
  undefined1 auStack_148 [24];
  undefined1 local_130 [12];
  undefined4 uStack_124;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 *local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  puStack_3a0 = (undefined8 *)&DAT_00000008;
  local_398 = 0;
  local_3a8 = 0;
                    /* try { // try from 0085ea5c to 0085ea63 has its CatchHandler @ 0085f114 */
  (**(code **)(param_7[2] + 0x28))
            (&local_350,param_7[1],*(undefined8 *)(*param_7 + 8),*(undefined8 *)(*param_7 + 0x10));
  if (local_350 == -1) {
    local_2e0 = local_318;
    local_78 = CONCAT62(local_78._2_6_,4);
    lStack_308 = lStack_340;
    local_310 = local_348;
    puStack_2f8 = puStack_330;
    lStack_300 = local_338;
    puStack_2e8 = (undefined8 *)lStack_320;
    local_2f0 = local_328;
    local_130._0_8_ = 0x8000000000000000;
    stack0xfffffffffffffed8 = (undefined8 *)CONCAT44(uStack_124,0xd0001);
                    /* try { // try from 0085ee30 to 0085ee3b has its CatchHandler @ 0085f0a0 */
    <rustls::common_state::rustls::common_state::CommonState>::send_msg
              (param_5,local_130,*(char *)(param_5 + 0x49) == '\x02');
    *param_1 = 0;
    *(undefined1 *)(param_5 + 0x335) = 1;
    param_1[2] = lStack_340;
    param_1[1] = local_348;
    param_1[4] = (long)puStack_330;
    param_1[3] = local_338;
    lVar3 = local_398 + 1;
    param_1[6] = lStack_320;
    param_1[5] = local_328;
    param_1[7] = local_318;
    puVar2 = puStack_3a0;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
                    /* try { // try from 0085ee80 to 0085ee83 has its CatchHandler @ 0085f148 */
      FUN_007ff230(puVar2);
      puVar2 = puVar2 + 5;
    }
    if (local_3a8 != 0) {
      free(puStack_3a0);
    }
  }
  else {
    lStack_380 = lStack_340;
    lStack_388 = local_348;
    puStack_370 = puStack_330;
    local_378 = local_338;
    lStack_360 = lStack_320;
    local_368 = local_328;
    local_358 = local_318;
    lVar3 = local_358;
    local_390 = local_350;
    if (*(long *)(param_5 + 0x2c0) == 1) {
      *(undefined8 *)(param_5 + 0x2c0) = 2;
    }
    local_358._0_4_ = (undefined4)local_318;
    local_130[0] = 5;
    lStack_120 = local_348;
    stack0xfffffffffffffed8 = (undefined8 *)local_350;
    lStack_118 = lStack_340;
    lStack_110 = CONCAT44(lStack_110._4_4_,(undefined4)local_358);
                    /* try { // try from 0085ead4 to 0085eadb has its CatchHandler @ 0085f0f4 */
    local_358 = lVar3;
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::deframer::handshake::FragmentSpan>>::
    grow_one(&local_3a8);
    puStack_3a0[1] = stack0xfffffffffffffed8;
    *puStack_3a0 = local_130._0_8_;
    local_398 = 1;
    puStack_3a0[3] = lStack_118;
    puStack_3a0[2] = lStack_120;
    puStack_3a0[4] = lStack_110;
    local_130._2_2_ = 5;
    local_130[0] = 0xb;
    if (local_3a8 == 1) {
                    /* try { // try from 0085eb14 to 0085eb1b has its CatchHandler @ 0085f08c */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::deframer::handshake::FragmentSpan>>
      ::grow_one(&local_3a8);
    }
    local_398 = 2;
    puStack_3a0[6] = stack0xfffffffffffffed8;
    puStack_3a0[5] = local_130._0_8_;
    puStack_3a0[8] = lStack_118;
    puStack_3a0[7] = lStack_120;
    puStack_3a0[9] = lStack_110;
    if (param_8 == 1) {
      local_130._2_2_ = param_9;
      local_130[0] = 6;
      if (local_3a8 == 2) {
                    /* try { // try from 0085eb60 to 0085eb67 has its CatchHandler @ 0085f020 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::deframer::handshake::FragmentSpan>>
        ::grow_one(&local_3a8);
      }
      local_398 = 3;
      puStack_3a0[0xb] = stack0xfffffffffffffed8;
      puStack_3a0[10] = local_130._0_8_;
      puStack_3a0[0xd] = lStack_118;
      puStack_3a0[0xc] = lStack_120;
      puStack_3a0[0xe] = lStack_110;
    }
    local_220 = *(long *)(param_3 + 0x28);
    lStack_228 = *(long *)(param_3 + 0x20);
    local_210 = *(long *)(param_3 + 0x38);
    lStack_218 = *(long *)(param_3 + 0x30);
    uStack_1b0 = 2;
    local_200 = param_6[1];
    lStack_208 = *param_6;
    local_1f0 = param_6[3];
    lStack_1f8 = param_6[2];
    lStack_120 = local_398;
    lStack_1e8 = param_6[4];
    stack0xfffffffffffffed8 = puStack_3a0;
    local_1dc = *(undefined4 *)(param_4 + 0x48);
    puStack_238 = puStack_3a0;
    lStack_240 = local_3a8;
    lStack_230 = local_398;
    local_248 = 0x8000000000000002;
    local_1e0 = 4;
    local_1d8 = 0;
    local_1a8 = 0;
    uStack_1a0 = 1;
    local_198 = 0;
    local_130._0_8_ = 0x8000000000000000;
                    /* try { // try from 0085ec18 to 0085ec27 has its CatchHandler @ 0085f0cc */
    lStack_118 = lStack_228;
    lStack_110 = local_220;
    local_108 = (undefined8 *)lStack_218;
    lStack_100 = local_210;
    local_f8 = lStack_208;
    lStack_f0 = local_200;
    local_e8 = lStack_1f8;
    lStack_e0 = local_1f0;
    local_d8 = lStack_1e8;
    FUN_007f0930(&local_248,&local_1a8,local_130);
    local_258 = 4;
    stack0xfffffffffffffed8 = (undefined8 *)uStack_1a0;
    local_130._0_8_ = local_1a8;
    local_290 = CONCAT44(local_1dc,CONCAT22(uStack_1de,local_1e0));
    lStack_288 = CONCAT71(uStack_1d7,local_1d8);
    lStack_120 = local_198;
    local_b8 = lStack_1e8;
    lStack_a0 = lStack_1d0;
    local_260 = CONCAT71(uStack_1af,uStack_1b0);
    lStack_90 = lStack_1c0;
    local_98 = local_1c8;
    local_88 = local_1b8;
    lStack_f0 = local_220;
    local_f8 = lStack_228;
    lStack_e0 = local_210;
    local_e8 = lStack_218;
    lStack_d0 = local_200;
    local_d8 = lStack_208;
    lStack_c0 = local_1f0;
    local_c8 = lStack_1f8;
    lStack_110 = lStack_240;
    lStack_118 = local_248;
    lStack_100 = lStack_230;
    local_108 = puStack_238;
    uStack_268 = local_1b8;
    local_270 = lStack_1c0;
    lStack_278 = local_1c8;
    lStack_280 = lStack_1d0;
    lStack_2c8 = lStack_218;
    local_2d0 = local_220;
    lStack_2b8 = lStack_208;
    lStack_2c0 = local_210;
    lStack_2a8 = lStack_1f8;
    local_2b0 = local_200;
    lStack_298 = lStack_1e8;
    lStack_2a0 = local_1f0;
    lStack_308 = uStack_1a0;
    local_310 = local_1a8;
    puStack_2f8 = (undefined1 *)local_248;
    lStack_300 = local_198;
    puStack_2e8 = puStack_238;
    local_2f0 = lStack_240;
    lStack_2d8 = lStack_228;
    local_2e0 = lStack_230;
    lStack_b0 = local_290;
    local_a8 = lStack_288;
    uStack_80 = local_260;
    if ((*(byte *)(param_5 + 0x331) & 1) == 0) {
      local_78 = CONCAT62(local_78._2_6_,4);
      local_130._0_8_ = 0x8000000000000000;
      uStack_124 = (undefined4)((ulong)uStack_1a0 >> 0x20);
      stack0xfffffffffffffed8 = (undefined8 *)CONCAT44(uStack_124,0x10001);
                    /* try { // try from 0085eed0 to 0085eedb has its CatchHandler @ 0085f124 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_5,local_130,*(char *)(param_5 + 0x49) == '\x02');
      *(undefined1 *)(param_5 + 0x335) = 1;
      *(undefined1 *)(param_1 + 2) = 0x1b;
      *param_1 = 0;
      param_1[1] = -0x7fffffffffffffe6;
                    /* try { // try from 0085eef4 to 0085eefb has its CatchHandler @ 0085f070 */
      FUN_00853da4(&local_310);
      puVar1 = puStack_370;
      for (; local_368 != 0; local_368 = local_368 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      local_368 = 0;
      puVar1 = puStack_370;
      for (lVar3 = local_378; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      if (local_378 != 0) {
        free(puStack_370);
      }
    }
    else {
                    /* try { // try from 0085ed04 to 0085ed07 has its CatchHandler @ 0085f124 */
      auVar4 = (**(code **)(*(long *)(param_2 + 0x30) + 0x20))(*(undefined8 *)(param_2 + 0x28));
                    /* try { // try from 0085ed14 to 0085ed1f has its CatchHandler @ 0085f074 */
      (**(code **)(auVar4._8_8_ + 0x30))(auVar4._0_8_,1,0);
                    /* try { // try from 0085ed24 to 0085ed3b has its CatchHandler @ 0085f124 */
      (**(code **)(auVar4._8_8_ + 0x28))(&local_1a8,auVar4._0_8_);
      FUN_008702dc(param_2,&local_310);
      local_a8 = lStack_288;
      lStack_b0 = local_290;
      local_98 = lStack_278;
      lStack_a0 = lStack_280;
      local_78 = CONCAT62(uStack_256,local_258);
      local_88 = uStack_268;
      lStack_90 = local_270;
      uStack_80 = local_260;
      local_e8 = lStack_2c8;
      lStack_f0 = local_2d0;
      local_d8 = lStack_2b8;
      lStack_e0 = lStack_2c0;
      local_c8 = lStack_2a8;
      lStack_d0 = local_2b0;
      local_b8 = lStack_298;
      lStack_c0 = lStack_2a0;
      stack0xfffffffffffffed8 = (undefined8 *)lStack_308;
      local_130._0_8_ = local_310;
      lStack_118 = (long)puStack_2f8;
      lStack_120 = lStack_300;
      local_108 = puStack_2e8;
      lStack_110 = local_2f0;
      local_f8 = lStack_2d8;
      lStack_100 = local_2e0;
                    /* try { // try from 0085ed6c to 0085ed9b has its CatchHandler @ 0085f0b4 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg(param_5,local_130,0);
      if (param_10 == 0) {
                    /* try { // try from 0085ef4c to 0085ef53 has its CatchHandler @ 0085f0b4 */
        local_160 = (**(code **)(*(long *)(param_4 + 0x18) + 0x18))
                              (*(undefined8 *)(param_4 + 0x10),0);
        local_150 = param_4;
      }
      else {
        _local_130 = (**(code **)(*(long *)(param_4 + 0x18) + 0x20))
                               (*(undefined8 *)(param_4 + 0x10),0);
                    /* try { // try from 0085edbc to 0085edd7 has its CatchHandler @ 0085f034 */
        lStack_120 = param_4;
        FUN_0085da5c(local_130,&local_1a8,
                     param_12 + (*(long *)(param_13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                     param_13,param_3,param_5);
        local_150 = lStack_120;
        local_160 = _local_130;
      }
      stack0xfffffffffffffed8 = (undefined8 *)puStack_370;
      local_130._0_8_ = local_378;
      lStack_118 = lStack_360;
      lStack_120 = local_368;
      FUN_00859ae0(auStack_148,local_160,local_130);
                    /* try { // try from 0085ef88 to 0085ef8f has its CatchHandler @ 0085f05c */
      (**(code **)(*(long *)(param_2 + 0x30) + 0x18))(&local_248,*(undefined8 *)(param_2 + 0x28));
      FUN_0085b1fc(local_130,auStack_148,&local_248,
                   param_12 + (*(long *)(param_13 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                   *(undefined8 *)(param_13 + 0x20),*(undefined8 *)(param_13 + 0x28),param_3,param_5
                  );
                    /* try { // try from 0085efc4 to 0085efcf has its CatchHandler @ 0085f048 */
      FUN_0085d1cc(lStack_120,&lStack_d0,param_5);
      param_1[0x14] = lStack_90;
      param_1[0x11] = local_a8;
      param_1[0x10] = lStack_b0;
      param_1[0x13] = local_98;
      param_1[0x12] = lStack_a0;
      param_1[9] = local_e8;
      param_1[8] = lStack_f0;
      param_1[0xb] = local_d8;
      param_1[10] = lStack_e0;
      param_1[0xd] = local_c8;
      param_1[0xc] = lStack_d0;
      param_1[0xf] = local_b8;
      param_1[0xe] = lStack_c0;
      param_1[1] = (long)stack0xfffffffffffffed8;
      *param_1 = local_130._0_8_;
      param_1[3] = lStack_118;
      param_1[2] = lStack_120;
      param_1[5] = (long)local_108;
      param_1[4] = lStack_110;
      param_1[7] = local_f8;
      param_1[6] = lStack_100;
    }
  }
  return;
}


// ===== 0085f190  FUN_0085f190 =====

void FUN_0085f190(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5,long param_6,long param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *__dest;
  long lVar4;
  long lVar5;
  undefined1 auStack_4c8 [72];
  undefined1 auStack_480 [64];
  ulong local_440;
  undefined8 local_438;
  ulong local_430;
  undefined1 *puStack_428;
  ulong local_420;
  undefined1 local_3a0;
  undefined1 auStack_398 [72];
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined2 local_1e8;
  undefined6 uStack_1e6;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
                    /* try { // try from 0085f1dc to 0085f1fb has its CatchHandler @ 0085f58c */
  (**(code **)(*(long *)(param_2[3] + 0x30) + 0x18))(auStack_4c8,*(undefined8 *)(param_2[3] + 0x28))
  ;
  FUN_0085d730(auStack_480,param_5[2],param_5 + 0xc,auStack_4c8);
  if (0x40 < local_440) {
                    /* try { // try from 0085f4d8 to 0085f4f3 has its CatchHandler @ 0085f5dc */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_440,0x40,&PTR_s__root__cargo_registry_src_index__00ae3c28);
  }
  if (local_440 == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __dest = (undefined1 *)FUN_004b25a4(local_440,1);
    if (__dest == (undefined1 *)0x0) {
                    /* try { // try from 0085f50c to 0085f51b has its CatchHandler @ 0085f5dc */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,local_440);
    }
    memcpy(__dest,auStack_480,local_440);
  }
  local_430 = local_440;
  local_420 = local_440;
  local_3a0 = 0xe;
  local_438 = 0x8000000000000012;
                    /* try { // try from 0085f25c to 0085f2bb has its CatchHandler @ 0085f5dc */
  puStack_428 = __dest;
  FUN_0084de4c(param_2,&local_438);
  (**(code **)(*(long *)(param_2[3] + 0x30) + 0x18))(auStack_398,*(undefined8 *)(param_2[3] + 0x28))
  ;
  uStack_288 = param_2[2];
  plStack_290 = (long *)param_2[1];
  uStack_298 = *param_2;
  local_2a0 = 0x8000000000000002;
  local_1e8 = 5;
  <rustls::common_state::rustls::common_state::CommonState>::send_msg(param_4,&local_2a0,1);
  uStack_2c8 = param_5[0x11];
  local_2d0 = param_5[0x10];
  uStack_2b8 = param_5[0x13];
  uStack_2c0 = param_5[0x12];
  local_2b0 = param_5[0x14];
  uStack_b8 = param_5[1];
  local_c0 = *param_5;
  uStack_308 = param_5[9];
  local_310 = param_5[8];
  local_2f8 = param_5[0xb];
  uStack_300 = param_5[10];
  local_b0 = param_5[2];
  uStack_2e8 = param_5[0xd];
  local_2f0 = param_5[0xc];
  uStack_2d8 = param_5[0xf];
  uStack_2e0 = param_5[0xe];
  uStack_348 = param_5[1];
  local_350 = *param_5;
  uStack_338 = param_5[3];
  uStack_340 = param_5[2];
  uStack_328 = param_5[5];
  local_330 = param_5[4];
  uStack_318 = param_5[7];
  uStack_320 = param_5[6];
                    /* try { // try from 0085f310 to 0085f32b has its CatchHandler @ 0085f584 */
  FUN_0085cd80(&local_2a0,&local_c0,auStack_398,
               param_6 + (*(long *)(param_7 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               *(undefined8 *)(param_7 + 0x20),*(undefined8 *)(param_7 + 0x28),param_3);
  plVar3 = plStack_290;
                    /* try { // try from 0085f330 to 0085f33f has its CatchHandler @ 0085f57c */
  FUN_0085d1cc(plStack_290,&local_240,param_4);
  if ((*(byte *)(param_4 + 0x339) & 1) != 0) {
    uStack_e8 = uStack_260;
    local_f0 = local_268;
    uStack_d8 = uStack_250;
    uStack_e0 = local_258;
    local_d0 = local_248;
    uStack_108 = uStack_280;
    local_110 = uStack_288;
    uStack_f8 = uStack_270;
    uStack_100 = local_278;
    local_80 = local_200;
    uStack_98 = uStack_218;
    local_a0 = local_220;
    uStack_88 = uStack_208;
    uStack_90 = uStack_210;
    uStack_b8 = uStack_238;
    local_c0 = local_240;
    uStack_a8 = uStack_228;
    local_b0 = local_230;
    lVar4 = *plVar3;
    if (lVar4 == 0) {
                    /* try { // try from 0085f4f8 to 0085f503 has its CatchHandler @ 0085f59c */
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ae79e0);
    }
    lVar5 = plVar3[1];
    uVar1 = *(undefined1 *)(param_4 + 0x2ab);
    uStack_138 = uStack_260;
    local_140 = local_268;
    uStack_128 = uStack_250;
    uStack_130 = local_258;
    local_120 = local_248;
    uStack_158 = uStack_280;
    local_160 = uStack_288;
    uStack_148 = uStack_270;
    uStack_150 = local_278;
    local_170 = local_200;
    uStack_188 = uStack_218;
    local_190 = local_220;
    uStack_178 = uStack_208;
    uStack_180 = uStack_210;
    uVar2 = *(undefined1 *)(param_4 + 0x330);
    uStack_1a8 = uStack_238;
    local_1b0 = local_240;
    uStack_198 = uStack_228;
    uStack_1a0 = local_230;
    if (*(char *)(param_4 + 0x2a1) != '\x02') {
                    /* try { // try from 0085f3dc to 0085f3e3 has its CatchHandler @ 0085f528 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_4 + 0x208);
                    /* try { // try from 0085f3e4 to 0085f3eb has its CatchHandler @ 0085f520 */
      <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_4 + 0x250);
    }
    *(long *)(param_4 + 0x1f8) = lVar4;
    *(long *)(param_4 + 0x200) = lVar5;
    *(long **)(param_4 + 0x298) = plVar3;
    *(undefined8 *)(param_4 + 0x230) = uStack_138;
    *(undefined8 *)(param_4 + 0x228) = local_140;
    *(undefined8 *)(param_4 + 0x240) = uStack_128;
    *(undefined8 *)(param_4 + 0x238) = uStack_130;
    *(undefined8 *)(param_4 + 0x248) = local_120;
    *(undefined1 *)(param_4 + 0x2a0) = uVar1;
    *(undefined8 *)(param_4 + 0x210) = uStack_158;
    *(undefined8 *)(param_4 + 0x208) = local_160;
    *(undefined8 *)(param_4 + 0x220) = uStack_148;
    *(undefined8 *)(param_4 + 0x218) = uStack_150;
    *(undefined8 *)(param_4 + 0x290) = local_170;
    *(undefined1 *)(param_4 + 0x2a1) = uVar2;
    *(undefined8 *)(param_4 + 0x278) = uStack_188;
    *(undefined8 *)(param_4 + 0x270) = local_190;
    *(undefined8 *)(param_4 + 0x288) = uStack_178;
    *(undefined8 *)(param_4 + 0x280) = uStack_180;
    *(undefined8 *)(param_4 + 600) = uStack_1a8;
    *(undefined8 *)(param_4 + 0x250) = local_1b0;
    *(undefined8 *)(param_4 + 0x268) = uStack_198;
    *(undefined8 *)(param_4 + 0x260) = uStack_1a0;
  }
  param_1[0x21] = uStack_320;
  param_1[0x20] = uStack_328;
  param_1[0x23] = local_310;
  param_1[0x22] = uStack_318;
  param_1[0x25] = uStack_300;
  param_1[0x24] = uStack_308;
  param_1[0xf] = uStack_228;
  param_1[0xe] = local_230;
  param_1[0x19] = uStack_1d8;
  param_1[0x18] = local_1e0;
  param_1[0x1b] = uStack_1c8;
  param_1[0x1a] = uStack_1d0;
  param_1[0x26] = local_2f8;
  param_1[0x1d] = uStack_1b8;
  param_1[0x1c] = local_1c0;
  param_1[0x1f] = local_330;
  param_1[0x1e] = uStack_338;
  param_1[0x11] = uStack_218;
  param_1[0x10] = local_220;
  param_1[0x13] = uStack_208;
  param_1[0x12] = uStack_210;
  param_1[0x15] = uStack_1f8;
  param_1[0x14] = local_200;
  param_1[0x17] = CONCAT62(uStack_1e6,local_1e8);
  param_1[0x16] = uStack_1f0;
  param_1[7] = local_268;
  param_1[6] = uStack_270;
  param_1[9] = local_258;
  param_1[8] = uStack_260;
  param_1[0xb] = local_248;
  param_1[10] = uStack_250;
  param_1[0xd] = uStack_238;
  param_1[0xc] = local_240;
  param_1[1] = uStack_298;
  *param_1 = local_2a0;
  param_1[3] = uStack_288;
  param_1[2] = plStack_290;
  param_1[5] = local_278;
  param_1[4] = uStack_280;
                    /* try { // try from 0085f49c to 0085f4ab has its CatchHandler @ 0085f5dc */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(&local_2f0);
  <rustls::crypto::hmac::Tag_as_core::ops::drop::Drop>::drop(auStack_480);
  return;
}


// ===== 0085f624  FUN_0085f624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085f624(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [120];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lStack_48 = param_2 + param_3 * 0x18;
  local_40 = 0;
  uStack_38 = 0;
  local_80 = 1;
  uStack_68 = 1;
  local_60 = 0;
  uStack_78 = param_4;
  local_70 = param_5;
  local_50 = param_2;
  FUN_007ffc08(auStack_100,&local_80);
  local_110 = 1;
  uStack_108 = 0;
  local_88 = 8;
  uStack_118 = _UNK_002a0bf8;
  local_120 = _DAT_002a0bf0;
  FUN_0084de4c(param_1,&local_120);
  return;
}


// ===== 0085f6a4  FUN_0085f6a4 =====

void FUN_0085f6a4(undefined8 param_1,undefined2 param_2,undefined2 param_3,undefined8 *param_4,
                 long param_5,undefined2 param_6,undefined2 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_228;
  undefined8 *puStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined2 local_1e8;
  undefined2 uStack_1e6;
  undefined2 uStack_1e4;
  undefined2 uStack_1e2;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 local_1c8;
  long lStack_1c0;
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined6 uStack_126;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  long lStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uStack_208 = param_4[1];
  uStack_210 = *param_4;
  local_1f8 = param_4[3];
  uStack_200 = param_4[2];
  local_1e8 = 4;
  uStack_1f0 = param_4[4];
  local_228 = 0;
  puStack_220 = (undefined8 *)&DAT_00000008;
  local_218 = 0;
  uStack_118._0_4_ = CONCAT22(param_7,param_6);
  local_120 = 0x8000000000000000;
                    /* try { // try from 0085f700 to 0085f707 has its CatchHandler @ 0085f8e8 */
  uStack_1e4 = param_2;
  uStack_1e2 = param_3;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>::
  grow_one(&local_228);
  puStack_220[1] = uStack_118;
  *puStack_220 = local_120;
  puStack_220[3] = local_108;
  puStack_220[2] = local_110;
  local_218 = 1;
  uStack_118 = CONCAT62(uStack_118._2_6_,5);
  local_120 = 0x8000000000000002;
  if (local_228 == 1) {
                    /* try { // try from 0085f740 to 0085f747 has its CatchHandler @ 0085f8bc */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>::
    grow_one(&local_228);
  }
  local_218 = 2;
  local_48 = 0;
  puStack_220[5] = uStack_118;
  puStack_220[4] = local_120;
  puStack_220[7] = local_108;
  puStack_220[6] = local_110;
  local_198 = CONCAT26(uStack_1e2,CONCAT24(uStack_1e4,CONCAT22(uStack_1e6,local_1e8)));
  lStack_1c0 = uStack_210;
  local_1c8 = 2;
  local_148 = CONCAT71(local_148._1_7_,6);
  uStack_1b0 = uStack_200;
  local_1b8 = (undefined8 *)uStack_208;
  local_1e0 = 0x8000000000000003;
  local_58 = 0;
  uStack_50 = 1;
  uStack_1a0 = uStack_1f0;
  local_1a8 = local_1f8;
  puStack_1d0 = puStack_220;
  lStack_1d8 = local_228;
  local_120 = 0x8000000000000000;
                    /* try { // try from 0085f7a8 to 0085f7b7 has its CatchHandler @ 0085f8c0 */
  FUN_007f0930(&local_1e0,&local_58,&local_120);
  local_130 = local_148;
  uVar11 = local_160;
  uVar10 = local_180;
  uVar9 = uStack_188;
  uVar8 = uStack_190;
  uVar7 = local_198;
  uVar6 = uStack_1a0;
  lVar5 = lStack_1c0;
  uVar4 = local_1c8;
  puVar3 = puStack_1d0;
  lVar2 = lStack_1d8;
  uVar1 = local_1e0;
  uStack_118 = uStack_50;
  local_120 = local_58;
  local_110 = local_48;
  local_128 = 4;
  uStack_a0 = uStack_178;
  local_a8 = local_180;
  uStack_90 = uStack_168;
  local_98 = uStack_170;
  uStack_80 = uStack_158;
  local_88 = local_160;
  uStack_70 = local_148;
  local_78 = uStack_150;
  uStack_e0 = local_1b8;
  local_e8 = lStack_1c0;
  uStack_d0 = local_1a8;
  local_d8 = uStack_1b0;
  uStack_138 = uStack_150;
  local_140 = uStack_158;
  uStack_c0 = local_198;
  local_c8 = uStack_1a0;
  uStack_b0 = uStack_188;
  local_b8 = uStack_190;
  lStack_100 = lStack_1d8;
  local_108 = local_1e0;
  uStack_f0 = local_1c8;
  local_f8 = puStack_1d0;
  uStack_158 = uStack_170;
  local_160 = uStack_178;
  local_148 = uVar11;
  uStack_150 = uStack_168;
  local_198 = uStack_1b0;
  uStack_1a0 = local_1b8;
  uStack_188 = uVar6;
  uStack_190 = local_1a8;
  uStack_178 = uVar8;
  local_180 = uVar7;
  uStack_168 = uVar10;
  uStack_170 = uVar9;
  lStack_1d8 = uStack_50;
  local_1e0 = local_58;
  local_1c8 = uVar1;
  puStack_1d0 = (undefined8 *)local_48;
  local_1b8 = puVar3;
  lStack_1c0 = lVar2;
  local_1a8 = lVar5;
  uStack_1b0 = uVar4;
                    /* try { // try from 0085f848 to 0085f85b has its CatchHandler @ 0085f904 */
  FUN_008703d0(param_1);
  FUN_008702dc(param_1,&local_1e0);
  local_98 = uStack_158;
  uStack_a0 = local_160;
  local_88 = local_148;
  uStack_90 = uStack_150;
  uStack_68 = CONCAT62(uStack_126,local_128);
  local_78 = uStack_138;
  uStack_80 = local_140;
  uStack_70 = local_130;
  local_d8 = local_198;
  uStack_e0 = uStack_1a0;
  local_c8 = uStack_188;
  uStack_d0 = uStack_190;
  local_b8 = uStack_178;
  uStack_c0 = local_180;
  local_a8 = uStack_168;
  uStack_b0 = uStack_170;
  uStack_118 = lStack_1d8;
  local_120 = local_1e0;
  local_108 = local_1c8;
  local_110 = puStack_1d0;
  local_f8 = local_1b8;
  lStack_100 = lStack_1c0;
  local_e8 = local_1a8;
  uStack_f0 = uStack_1b0;
  <rustls::common_state::rustls::common_state::CommonState>::send_msg(param_5,&local_120,0);
  *(undefined1 *)(param_5 + 0x33d) = 1;
  return;
}


// ===== 0085f91c  FUN_0085f91c =====

void FUN_0085f91c(long *param_1,undefined8 param_2,short param_3,short param_4,long *param_5,
                 undefined8 param_6,long param_7,long param_8,undefined8 *param_9,long param_10)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  short *psVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long local_140;
  undefined1 *puStack_138;
  long local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined1 local_68;
  
  uStack_118 = param_9[1];
  local_120 = *param_9;
  local_110 = param_9[2];
  local_140 = 0;
  puStack_138 = &DAT_00000008;
  local_130 = 0;
  local_128 = 0;
                    /* try { // try from 0085f97c to 0085f99f has its CatchHandler @ 0085fc88 */
  FUN_0080c270(&local_100,&local_140,param_10,param_5,param_6,param_7,param_8,&local_120);
  if (local_100 == -1) {
    lVar11 = *param_5;
    if (*(long *)(param_7 + 0x40) != 0) {
      plVar10 = (long *)param_5[1];
      lVar7 = *(long *)(param_7 + 0x40) << 6;
      psVar8 = (short *)(*(long *)(param_7 + 0x38) + 0x20);
      do {
        uVar9 = *(ulong *)(psVar8 + -0x10) ^ 0x8000000000000000;
        if (0x16 < uVar9) {
          uVar9 = 0x13;
        }
        if (((0x10 < uVar9) && (3 < uVar9 - 0x12)) && ((uVar9 != 0x16 || (*psVar8 == 0x19)))) {
          if (param_8 == 0) {
            param_8 = 1;
            goto LAB_0085faf0;
          }
          if (*(int *)(param_10 + 0xe0) == 0) {
            uVar4 = 0;
          }
          else {
                    /* try { // try from 0085fa94 to 0085facf has its CatchHandler @ 0085fc88 */
            uVar4 = (**(code **)(*(long *)(param_10 + 0x78) + 0x20))
                              (*(long *)(param_10 + 0x70) +
                               (*(long *)(*(long *)(param_10 + 0x78) + 0x10) - 1U &
                               0xfffffffffffffff0) + 0x10);
            uVar4 = uVar4 ^ 1;
          }
          if (((((*(char *)(param_8 + 0x8d) == '\x01') &&
                (sVar2 = *(short *)(lVar11 + 0x328), sVar2 != -1)) &&
               (*(short *)(param_8 + 0x80) == sVar2)) &&
              ((sVar2 != 9 || (*(short *)(param_8 + 0x82) == *(short *)(lVar11 + 0x32a))))) &&
             ((*(short *)(param_8 + 0x84) == param_3 &&
              ((param_3 != 0x178 || (*(short *)(param_8 + 0x86) == param_4)))))) {
            if (*(long *)(param_8 + 0x48) == -1) {
              bVar3 = *(long *)(lVar11 + 0x2d8) == -1;
            }
            else {
              if ((*(long *)(lVar11 + 0x2d8) == -1) ||
                 (*(size_t *)(param_8 + 0x58) != *(size_t *)(lVar11 + 0x2e8))) goto LAB_0085fc0c;
              iVar5 = memcmp(*(void **)(param_8 + 0x50),*(void **)(lVar11 + 0x2e0),
                             *(size_t *)(param_8 + 0x58));
              bVar3 = iVar5 == 0;
            }
            lVar7 = local_130;
            uVar1 = 0;
            if (bVar3) {
              uVar1 = uVar4;
            }
            if (((uVar1 & 1) != 0) && (*plVar10 != 4)) {
              local_100 = CONCAT71(local_100._1_7_,0xe);
              if (local_130 == local_140) {
                    /* try { // try from 0085fc34 to 0085fc3b has its CatchHandler @ 0085fc68 */
                <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::deframer::handshake::FragmentSpan>>
                ::grow_one(&local_140);
              }
              local_130 = lVar7 + 1;
              plVar10 = (long *)(puStack_138 + lVar7 * 0x28);
              param_8 = 2;
              plVar10[1] = lStack_f8;
              *plVar10 = local_100;
              plVar10[3] = local_e8;
              plVar10[2] = (long)puStack_f0;
              plVar10[4] = local_e0;
              goto LAB_0085faf0;
            }
          }
LAB_0085fc0c:
          param_8 = 1;
          if ((*(byte *)(lVar11 + 0x339) & 1) == 0) goto LAB_0085faf0;
          goto LAB_0085fadc;
        }
        lVar7 = lVar7 + -0x40;
        psVar8 = psVar8 + 0x20;
      } while (lVar7 != 0);
    }
    if (param_8 != 0) {
      if (*(int *)(param_10 + 0xe0) != 0) {
        (**(code **)(*(long *)(param_10 + 0x78) + 0x20))
                  (*(long *)(param_10 + 0x70) +
                   (*(long *)(*(long *)(param_10 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      }
      param_8 = 0;
      if ((*(byte *)(lVar11 + 0x339) & 1) != 0) {
LAB_0085fadc:
        if (*(long *)(lVar11 + 0xc0) != 0) {
                    /* try { // try from 0085fae4 to 0085faeb has its CatchHandler @ 0085fc7c */
          <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(lVar11 + 200);
        }
        *(undefined8 *)(lVar11 + 0xc0) = 0;
      }
    }
LAB_0085faf0:
    local_68 = 7;
    puStack_f0 = puStack_138;
    lStack_f8 = local_140;
    local_e8 = local_130;
    local_100 = -0x7ffffffffffffff0;
    FUN_0084de4c(param_2,&local_100);
    *(char *)(param_1 + 1) = (char)param_8;
    *param_1 = -1;
  }
  else {
    param_1[5] = lStack_d8;
    param_1[4] = local_e0;
    lVar11 = local_130 + 1;
    param_1[6] = local_d0;
    param_1[1] = lStack_f8;
    *param_1 = local_100;
    param_1[3] = local_e8;
    param_1[2] = (long)puStack_f0;
    puVar6 = puStack_138;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
                    /* try { // try from 0085f9d8 to 0085f9db has its CatchHandler @ 0085fc9c */
      FUN_007ff230(puVar6);
      puVar6 = puVar6 + 0x28;
    }
    if (local_140 != 0) {
      free(puStack_138);
    }
  }
  return;
}


// ===== 0085fcec  FUN_0085fcec =====

void FUN_0085fcec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined2 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *__dest;
  undefined2 extraout_w1;
  ulong uVar7;
  undefined2 *puVar8;
  size_t *psVar9;
  ulong unaff_x22;
  undefined8 uVar10;
  long *plVar11;
  size_t __n;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  void *local_130;
  ulong uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  undefined1 local_88;
  ulong local_80;
  long lStack_78;
  
  lVar2 = *(long *)(param_3 + 0x98);
  lVar6 = *(long *)(param_3 + 0x90) + (*(long *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0);
  uVar4 = (**(code **)(lVar2 + 0x20))(lVar6 + 0x10);
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0xffffffffffffffff;
  }
  else {
    lStack_150 = 0;
    local_148 = 8;
    lStack_140 = 0;
                    /* try { // try from 0085fd54 to 0085fd5f has its CatchHandler @ 008600ec */
    (**(code **)(lVar2 + 0x50))(&local_138,lVar6 + 0x10);
    uVar10 = 0;
    if ((uStack_128 >> 0x3e != 0) || (unaff_x22 = uStack_128 * 4, 0x7ffffffffffffffe < unaff_x22)) {
LAB_0085fed0:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar10,unaff_x22);
    }
    if (unaff_x22 == 0) {
      pvVar5 = (void *)0x2;
      uVar4 = 0;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar10 = 2;
      pvVar5 = (void *)FUN_004b25a4(unaff_x22,2);
      uVar4 = uStack_128;
      if (pvVar5 == (void *)0x0) goto LAB_0085fed0;
    }
    if (uStack_128 != 0) {
      memcpy(pvVar5,local_130,unaff_x22);
    }
    lVar12 = lStack_140;
    local_108 = uStack_128;
    local_120 = 0x8000000000000000;
    uStack_118 = uVar4;
    local_110 = pvVar5;
    if (lStack_140 == lStack_150) {
                    /* try { // try from 0085fddc to 0085fde3 has its CatchHandler @ 008600d0 */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>::
      grow_one(&lStack_150);
    }
    uVar4 = *(ulong *)(param_3 + 0x50);
    lStack_140 = lVar12 + 1;
    puVar1 = (undefined8 *)(local_148 + lVar12 * 0x20);
    puVar1[1] = uStack_118;
    *puVar1 = local_120;
    puVar1[3] = local_108;
    puVar1[2] = local_110;
    if (uVar4 != 0) {
      lVar12 = *(long *)(param_3 + 0x48);
      unaff_x22 = uVar4 << 2;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar10 = 2;
      pvVar5 = (void *)FUN_004b25a4(unaff_x22,2);
      if (pvVar5 == (void *)0x0) goto LAB_0085fed0;
      plVar11 = (long *)(lVar12 + 8);
      puVar8 = (undefined2 *)((long)pvVar5 + 2);
      uVar7 = uVar4;
      do {
                    /* try { // try from 0085fe48 to 0085fe4b has its CatchHandler @ 008600f4 */
        uVar3 = (**(code **)(*plVar11 + 0x28))(plVar11[-1]);
        lVar12 = lStack_140;
        uVar7 = uVar7 - 1;
        plVar11 = plVar11 + 2;
        puVar8[-1] = uVar3;
        *puVar8 = extraout_w1;
        puVar8 = puVar8 + 2;
      } while (uVar7 != 0);
      local_120 = 0x8000000000000002;
      uStack_118 = uVar4;
      local_110 = pvVar5;
      local_108 = uVar4;
      if (lStack_140 == lStack_150) {
                    /* try { // try from 0085fe84 to 0085fe8b has its CatchHandler @ 008600c0 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>
        ::grow_one(&lStack_150);
      }
      lStack_140 = lVar12 + 1;
      puVar1 = (undefined8 *)(local_148 + lVar12 * 0x20);
      puVar1[1] = uStack_118;
      *puVar1 = local_120;
      puVar1[3] = local_108;
      puVar1[2] = local_110;
    }
    unaff_x22 = 0x8000000000000002;
                    /* try { // try from 0085feb0 to 0085fedf has its CatchHandler @ 0086013c */
    auVar14 = (**(code **)(lVar2 + 0x30))(lVar6 + 0x10);
    uVar4 = auVar14._8_8_;
    lVar6 = auVar14._0_8_;
    if (uVar4 != 0) {
      if (0x555555555555555 < uVar4) {
        uVar10 = 0;
        goto LAB_0085fed0;
      }
      unaff_x22 = uVar4 * 0x18;
      if (unaff_x22 == 0) {
        lStack_78 = 8;
        uVar7 = 0;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar10 = 8;
        lStack_78 = FUN_004b25a4(unaff_x22,8);
        uVar7 = uVar4;
        if (lStack_78 == 0) goto LAB_0085fed0;
      }
      uVar13 = 0;
      psVar9 = (size_t *)(lStack_78 + 0x10);
      local_80 = uVar7;
      do {
        if (unaff_x22 == 0) break;
        __n = *(size_t *)(lVar6 + 0x10);
        if ((long)__n < 0) {
          uVar10 = 0;
LAB_008600a8:
                    /* try { // try from 008600a8 to 008600af has its CatchHandler @ 0086011c */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar10,__n);
        }
        if (__n == 0) {
          __dest = &DAT_00000001;
        }
        else {
          pvVar5 = *(void **)(lVar6 + 8);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(__n,1);
          uVar10 = 1;
          if (__dest == (undefined1 *)0x0) goto LAB_008600a8;
          memcpy(__dest,pvVar5,__n);
        }
        uVar13 = uVar13 + 1;
        lVar6 = lVar6 + 0x18;
        unaff_x22 = unaff_x22 - 0x18;
        psVar9[-2] = __n;
        psVar9[-1] = (size_t)__dest;
        *psVar9 = __n;
        psVar9 = psVar9 + 3;
      } while (uVar7 != uVar13);
      lVar6 = lStack_140;
      local_120 = 0x8000000000000001;
      local_110 = (void *)lStack_78;
      uStack_118 = local_80;
      local_108 = uVar4;
      if (lStack_140 == lStack_150) {
                    /* try { // try from 00860014 to 0086001f has its CatchHandler @ 008600bc */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>
        ::grow_one(&lStack_150);
      }
      lStack_140 = lVar6 + 1;
      puVar1 = (undefined8 *)(local_148 + lVar6 * 0x20);
      puVar1[1] = uStack_118;
      *puVar1 = local_120;
      puVar1[3] = local_108;
      puVar1[2] = local_110;
    }
    local_88 = 10;
    local_110 = (void *)0x1;
    uStack_118 = 0;
    lStack_100 = lStack_150;
    local_108 = 0;
    lStack_f0 = lStack_140;
    local_f8 = local_148;
    local_120 = 0x8000000000000009;
                    /* try { // try from 00860068 to 00860077 has its CatchHandler @ 0086013c */
    FUN_0084de4c(param_2,&local_120);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0xffffffffffffffff;
    if (local_138 != 0) {
      free(local_130);
    }
  }
  return;
}


// ===== 00860170  FUN_00860170 =====

void FUN_00860170(long *param_1,long param_2,long param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined2 uVar1;
  void *__ptr;
  undefined2 extraout_w1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  long local_258;
  long lStack_250;
  long local_248;
  long lStack_240;
  long local_238;
  long lStack_230;
  long local_228;
  undefined8 uStack_220;
  char local_218 [8];
  char acStack_210 [8];
  char local_208 [8];
  char acStack_200 [8];
  char local_1f8 [2];
  undefined8 local_1f6;
  undefined8 uStack_1ee;
  undefined8 local_1e6;
  undefined8 uStack_1de;
  undefined8 local_1d6;
  undefined8 uStack_1ce;
  undefined8 local_1c6;
  undefined8 uStack_1be;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  ulong local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  long lStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  char local_e0 [8];
  char acStack_d8 [8];
  char local_d0 [8];
  char acStack_c8 [8];
  char local_c0 [2];
  undefined1 local_88;
  undefined2 local_68;
  
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0x18))
            (&local_1b0,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28));
  if (local_170 < 0x41) {
    local_c0[0] = s_y_002b18d5[0];
    local_c0[1] = s_y_002b18d5[1];
    lStack_118 = 0x2020202020202020;
    local_120 = 0x2020202020202020;
    lStack_108 = 0x2020202020202020;
    local_110 = 0x2020202020202020;
    lStack_f8 = 0x2020202020202020;
    local_100 = 0x2020202020202020;
    uStack_e8 = 0x2020202020202020;
    local_f0 = 0x2020202020202020;
    uStack_158 = 0x2020202020202020;
    local_160 = 0x2020202020202020;
    uStack_148 = 0x2020202020202020;
    uStack_150 = 0x2020202020202020;
    uStack_138 = 0x2020202020202020;
    local_140 = 0x2020202020202020;
    uStack_128 = 0x2020202020202020;
    uStack_130 = 0x2020202020202020;
    acStack_d8[0] = s_TLS_1_3__server_002b18b5[8];
    acStack_d8[1] = s_TLS_1_3__server_002b18b5[9];
    acStack_d8[2] = s_TLS_1_3__server_002b18b5[10];
    acStack_d8[3] = s_TLS_1_3__server_002b18b5[0xb];
    acStack_d8[4] = s_TLS_1_3__server_002b18b5[0xc];
    acStack_d8[5] = s_TLS_1_3__server_002b18b5[0xd];
    acStack_d8[6] = s_TLS_1_3__server_002b18b5[0xe];
    acStack_d8[7] = s_TLS_1_3__server_002b18b5[0xf];
    local_e0[0] = s_TLS_1_3__server_002b18b5[0];
    local_e0[1] = s_TLS_1_3__server_002b18b5[1];
    local_e0[2] = s_TLS_1_3__server_002b18b5[2];
    local_e0[3] = s_TLS_1_3__server_002b18b5[3];
    local_e0[4] = s_TLS_1_3__server_002b18b5[4];
    local_e0[5] = s_TLS_1_3__server_002b18b5[5];
    local_e0[6] = s_TLS_1_3__server_002b18b5[6];
    local_e0[7] = s_TLS_1_3__server_002b18b5[7];
    acStack_c8[0] = s_CertificateVerif_002b18c5[8];
    acStack_c8[1] = s_CertificateVerif_002b18c5[9];
    acStack_c8[2] = s_CertificateVerif_002b18c5[10];
    acStack_c8[3] = s_CertificateVerif_002b18c5[0xb];
    acStack_c8[4] = s_CertificateVerif_002b18c5[0xc];
    acStack_c8[5] = s_CertificateVerif_002b18c5[0xd];
    acStack_c8[6] = s_CertificateVerif_002b18c5[0xe];
    acStack_c8[7] = s_CertificateVerif_002b18c5[0xf];
    local_d0[0] = s_CertificateVerif_002b18c5[0];
    local_d0[1] = s_CertificateVerif_002b18c5[1];
    local_d0[2] = s_CertificateVerif_002b18c5[2];
    local_d0[3] = s_CertificateVerif_002b18c5[3];
    local_d0[4] = s_CertificateVerif_002b18c5[4];
    local_d0[5] = s_CertificateVerif_002b18c5[5];
    local_d0[6] = s_CertificateVerif_002b18c5[6];
    local_d0[7] = s_CertificateVerif_002b18c5[7];
    memcpy(&local_160,&local_1b0,local_170);
    acStack_210[0] = acStack_d8[0];
    acStack_210[1] = acStack_d8[1];
    acStack_210[2] = acStack_d8[2];
    acStack_210[3] = acStack_d8[3];
    acStack_210[4] = acStack_d8[4];
    acStack_210[5] = acStack_d8[5];
    acStack_210[6] = acStack_d8[6];
    acStack_210[7] = acStack_d8[7];
    local_218[0] = local_e0[0];
    local_218[1] = local_e0[1];
    local_218[2] = local_e0[2];
    local_218[3] = local_e0[3];
    local_218[4] = local_e0[4];
    local_218[5] = local_e0[5];
    local_218[6] = local_e0[6];
    local_218[7] = local_e0[7];
    uStack_220 = uStack_e8;
    local_228 = local_f0;
    acStack_200[0] = acStack_c8[0];
    acStack_200[1] = acStack_c8[1];
    acStack_200[2] = acStack_c8[2];
    acStack_200[3] = acStack_c8[3];
    acStack_200[4] = acStack_c8[4];
    acStack_200[5] = acStack_c8[5];
    acStack_200[6] = acStack_c8[6];
    acStack_200[7] = acStack_c8[7];
    local_208[0] = local_d0[0];
    local_208[1] = local_d0[1];
    local_208[2] = local_d0[2];
    local_208[3] = local_d0[3];
    local_208[4] = local_d0[4];
    local_208[5] = local_d0[5];
    local_208[6] = local_d0[6];
    local_208[7] = local_d0[7];
    lStack_250 = lStack_118;
    local_258 = local_120;
    lStack_240 = lStack_108;
    local_248 = local_110;
    local_1f8[0] = local_c0[0];
    local_1f8[1] = local_c0[1];
    lStack_230 = lStack_f8;
    local_238 = local_100;
    uStack_1be = uStack_128;
    local_1c6 = uStack_130;
    uStack_1ce = uStack_138;
    local_1d6 = local_140;
    uStack_1de = uStack_148;
    local_1e6 = uStack_150;
    uStack_1ee = uStack_158;
    local_1f6 = local_160;
    auVar4 = (*param_5)(param_4,param_6,param_7);
    puVar2 = auVar4._8_8_;
    __ptr = auVar4._0_8_;
    if (__ptr == (void *)0x0) {
      local_68 = 4;
      local_120 = -0x8000000000000000;
      local_1b0 = -0x7ffffffffffffff7;
      lStack_118 = CONCAT44(lStack_118._4_4_,0x60001);
                    /* try { // try from 0086032c to 00860337 has its CatchHandler @ 00860410 */
      <rustls::common_state::rustls::common_state::CommonState>::send_msg
                (param_3,&local_120,*(char *)(param_3 + 0x49) == '\x02');
      *(undefined1 *)(param_3 + 0x335) = 1;
      *param_1 = -0x7fffffffffffffe7;
      param_1[1] = -0x7ffffffffffffff7;
    }
    else {
                    /* try { // try from 0086027c to 0086029f has its CatchHandler @ 00860424 */
      uVar1 = (*(code *)puVar2[5])();
      (*(code *)puVar2[4])(&local_120,__ptr,&local_258,local_170 + 0x62);
      local_1a0 = lStack_108;
      lStack_1a8 = local_110;
      local_1b0 = lStack_118;
      if (local_120 == -1) {
        local_88 = 0xc;
        local_120 = -0x7ffffffffffffff6;
        local_100._0_4_ = CONCAT22(extraout_w1,uVar1);
                    /* try { // try from 0086037c to 00860387 has its CatchHandler @ 00860424 */
        FUN_0084de4c(param_2,&local_120);
        pcVar3 = (code *)*puVar2;
        *param_1 = -1;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00860398 to 0086039f has its CatchHandler @ 008603ec */
          (*pcVar3)(__ptr);
        }
      }
      else {
        *param_1 = local_120;
        param_1[6] = local_f0;
        pcVar3 = (code *)*puVar2;
        param_1[5] = lStack_f8;
        param_1[4] = local_100;
        param_1[2] = local_110;
        param_1[1] = lStack_118;
        param_1[3] = lStack_108;
        if (pcVar3 != (code *)0x0) {
                    /* try { // try from 008602ec to 008602f3 has its CatchHandler @ 008603f0 */
          (*pcVar3)(__ptr);
        }
      }
      if (puVar2[1] != 0) {
        free(__ptr);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,local_170,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 00860440  FUN_00860440 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00860440(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long local_190;
  undefined1 *local_188;
  undefined8 local_180;
  long local_178;
  void *local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  long lStack_148;
  long local_140 [2];
  long local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_c8;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = param_3 + param_4 * 0x18;
  local_120 = 0;
  uStack_118 = 0;
  local_160 = 1;
  lStack_148 = 1;
  local_140[0] = 0;
  uStack_158 = param_5;
  local_150 = param_6;
  local_130 = param_3;
  lStack_128 = lVar4;
  FUN_007ffc08(&local_178,&local_160);
  local_190 = 0;
  local_188 = &DAT_00000001;
  local_180 = 0;
                    /* try { // try from 008604b4 to 008604c7 has its CatchHandler @ 00860620 */
  plVar3 = (long *)FUN_008891a8(param_2 + 0x10,param_7,param_8,&local_190);
  if (plVar3 == (long *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_b8 = (long *)&DAT_00000001;
    uStack_a0 = 1;
    local_98 = 0;
    uStack_b0 = param_5;
    local_a8 = param_6;
    local_88 = param_3;
    lStack_80 = lVar4;
    FUN_007ffc08(local_140,&local_b8);
    local_150 = 1;
    lStack_148 = 0;
    local_c8 = 8;
    uStack_158 = _UNK_002a0bf8;
    local_160 = _DAT_002a0bf0;
    FUN_0084de4c(param_1,&local_160);
  }
  else {
    local_c8 = 0x12;
    local_150 = plVar3[6];
    lStack_148 = plVar3[7];
    local_140[0] = plVar3[8];
    uStack_158 = _UNK_002a03e8;
    local_160 = _DAT_002a03e0;
                    /* try { // try from 008604f8 to 00860503 has its CatchHandler @ 008605d0 */
    local_b8 = plVar3;
    FUN_0084de4c(param_1,&local_160);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0086051c to 0086058b has its CatchHandler @ 00860620 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow
                (&local_b8);
    }
    if (local_190 != 0) {
      free(local_188);
    }
  }
                    /* try { // try from 0086058c to 00860593 has its CatchHandler @ 008605f8 */
  FUN_00808fd4(&local_178);
  if (local_178 != 0) {
    free(local_170);
  }
  return;
}


// ===== 00860638  FUN_00860638 =====

void FUN_00860638(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  void *__ptr;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ushort local_b4 [2];
  ushort *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_38 [4];
  undefined1 local_34 [3];
  undefined1 uStack_31;
  
  auVar4 = (*param_4)(param_3);
  puVar2 = auVar4._8_8_;
  __ptr = auVar4._0_8_;
  local_b4[0] = (ushort)((ulong)param_5 >> 8) & 0xff | (ushort)(((uint)param_5 & 0xff00ff) << 8);
  local_38[0] = 9;
  local_a0 = local_38;
  uStack_98 = 1;
  local_90 = "tls13 ";
  uStack_88 = 6;
  local_80 = &DAT_002feda3;
  uStack_78 = 3;
  local_70 = local_34;
  uStack_68 = 1;
  local_60 = 1;
  uStack_58 = 0;
  local_b0 = local_b4;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  pcVar3 = (code *)puVar2[3];
  local_34[0] = 0;
  uStack_a8 = 2;
                    /* try { // try from 008606d4 to 0086070b has its CatchHandler @ 00860858 */
  iVar1 = (*pcVar3)(__ptr,&local_b0,6,&local_110,0x20);
  if (iVar1 != 0) {
                    /* try { // try from 008607d8 to 008607fb has its CatchHandler @ 00860858 */
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002ff1d9,0x24,&uStack_31,&DAT_00ae8158,
               &PTR_s__root__cargo_registry_src_index__00ae80f0);
  }
  local_c0 = 0x20;
  uStack_d8 = uStack_108;
  local_e0 = local_110;
  uStack_c8 = uStack_f8;
  uStack_d0 = uStack_100;
  FUN_00841790(&local_110,&local_e0,param_5);
  local_b4[0] = 0xc00;
  local_b0 = local_b4;
  local_38[0] = 8;
  uStack_a8 = 2;
  local_a0 = local_38;
  uStack_98 = 1;
  local_90 = "tls13 ";
  uStack_88 = 6;
  local_80 = &DAT_002feda1;
  uStack_78 = 2;
  local_70 = local_34;
  local_34[0] = 0;
  uStack_68 = 1;
  local_60 = 1;
  uStack_58 = 0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  local_e0 = 0;
                    /* try { // try from 00860760 to 00860777 has its CatchHandler @ 00860848 */
  iVar1 = (*pcVar3)(__ptr,&local_b0,6,&local_e0,0xc);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_d8;
    pcVar3 = (code *)*puVar2;
    param_1[1] = uStack_108;
    *param_1 = local_110;
    param_1[3] = uStack_f8;
    param_1[2] = uStack_100;
    param_1[4] = local_f0;
    param_1[5] = local_e0;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 008607a0 to 008607a7 has its CatchHandler @ 00860828 */
      (*pcVar3)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
    return;
  }
                    /* try { // try from 00860800 to 00860823 has its CatchHandler @ 00860848 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002ff1d9,0x24,&uStack_31,&DAT_00ae8158,
             &PTR_s__root__cargo_registry_src_index__00ae80f0);
}


// ===== 00860874  FUN_00860874 =====

undefined8 FUN_00860874(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = getrandom::imp::getrandom_inner(param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ===== 008608a4  FUN_008608a4 =====

void FUN_008608a4(void)

{
  return;
}


// ===== 008608b0  FUN_008608b0 =====

void FUN_008608b0(void)

{
  return;
}


// ===== 008608bc  FUN_008608bc =====

void FUN_008608bc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008608c4  FUN_008608c4 =====

undefined8 FUN_008608c4(void)

{
  return 0;
}


// ===== 008608cc  FUN_008608cc =====

undefined2 FUN_008608cc(long param_1)

{
  return *(undefined2 *)(param_1 + 0x10);
}


// ===== 008608dc  <rustls::crypto::ring::kx::KxGroup_as_rustls::crypto::SupportedKxGroup>::start =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::kx::KxGroup as rustls::crypto::SupportedKxGroup>::start */

void __rustcall
<rustls::crypto::ring::kx::KxGroup_as_rustls::crypto::SupportedKxGroup>::start
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  uVar5 = *param_2;
  <ring::agreement::[0]::ring::agreement::EphemeralPrivateKey>::generate
            (&local_d0,uVar5,&uStack_51,&DAT_00ae7b20);
  uVar3 = local_98;
  if (local_d0 != 0) {
    uStack_158 = uStack_a8;
    local_160 = local_b0;
    uStack_1b8 = uStack_c8;
    local_1c0 = local_d0;
    uStack_1a8 = uStack_b8;
    uStack_1b0 = uStack_c0;
    uStack_178 = uStack_c8;
    local_180 = local_d0;
    uStack_168 = uStack_b8;
    uStack_170 = uStack_c0;
    local_150 = local_a0;
    uStack_198 = uStack_a8;
    local_1a0 = local_b0;
    local_190 = local_a0;
    uStack_188 = local_98;
    ring::cpu::arm::featureflags::get_or_init();
    <ring::ec::keys::ring::ec::keys::Seed>::compute_public_key(&local_d0,&local_1c0);
    if (local_d0 != 1) {
      uVar1 = *(undefined2 *)(param_2 + 2);
      uVar2 = *(undefined2 *)((long)param_2 + 0x12);
      uVar6 = param_2[1];
      uStack_f8 = uStack_80;
      local_100 = local_88;
      uStack_e8 = uStack_70;
      uStack_f0 = local_78;
      uStack_d8 = uStack_60;
      local_e0 = local_68;
      uStack_138 = uStack_c0;
      local_140 = uStack_c8;
      uStack_128 = local_b0;
      uStack_130 = uStack_b8;
      uStack_118 = local_a0;
      local_120 = uStack_a8;
      uStack_108 = uStack_90;
      uStack_110 = local_98;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar4 = (undefined8 *)FUN_004b25a4(0xd0,8);
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0xd0);
      }
      *puVar4 = uVar5;
      puVar4[2] = uStack_178;
      puVar4[1] = local_180;
      puVar4[4] = uStack_168;
      puVar4[3] = uStack_170;
      puVar4[6] = uStack_158;
      puVar4[5] = local_160;
      puVar4[7] = local_150;
      puVar4[8] = uVar3;
      uVar5 = 0xffffffffffffffff;
      puVar4[0x13] = uStack_f8;
      puVar4[0x12] = local_100;
      puVar4[0x15] = uStack_e8;
      puVar4[0x14] = uStack_f0;
      puVar4[0x17] = uStack_d8;
      puVar4[0x16] = local_e0;
      puVar4[9] = uVar3;
      puVar4[0xb] = uStack_138;
      puVar4[10] = local_140;
      puVar4[0xd] = uStack_128;
      puVar4[0xc] = uStack_130;
      puVar4[0x18] = uVar6;
      *(undefined2 *)(puVar4 + 0x19) = uVar1;
      puVar4[0xf] = uStack_118;
      puVar4[0xe] = local_120;
      puVar4[0x11] = uStack_108;
      puVar4[0x10] = uStack_110;
      *(undefined2 *)((long)puVar4 + 0xca) = uVar2;
      param_1[1] = puVar4;
      param_1[2] = &DAT_00ae7b50;
      goto LAB_00860a20;
    }
  }
  uVar5 = 0x8000000000000020;
LAB_00860a20:
  *param_1 = uVar5;
  return;
}


// ===== 00860a4c  <rustls::crypto::hpke::HpkePrivateKey_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::hpke::HpkePrivateKey as core::ops::drop::Drop>::drop */

void __rustcall <rustls::crypto::hpke::HpkePrivateKey_as_core::ops::drop::Drop>::drop(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  puVar1 = (undefined1 *)param_1[1];
  puVar2 = puVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  lVar3 = *param_1;
  param_1[2] = 0;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}


// ===== 00860a80  FUN_00860a80 =====

void FUN_00860a80(void)

{
  return;
}


// ===== 00860a8c  FUN_00860a8c =====

undefined2 FUN_00860a8c(long param_1)

{
  return *(undefined2 *)(param_1 + 200);
}


// ===== 00860a9c  <rustls::crypto::ring::kx::KeyExchange_as_rustls::crypto::ActiveKeyExchange>::pub_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::kx::KeyExchange as rustls::crypto::ActiveKeyExchange>::pub_key */

void __rustcall
<rustls::crypto::ring::kx::KeyExchange_as_rustls::crypto::ActiveKeyExchange>::pub_key(long param_1)

{
  <ring::agreement::PublicKey_as_core::convert::AsRef<[u8]>>::as_ref(param_1 + 0x48);
  return;
}


// ===== 00860aa4  <rustls::crypto::ring::kx::KeyExchange_as_rustls::crypto::ActiveKeyExchange>::complete =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::kx::KeyExchange as rustls::crypto::ActiveKeyExchange>::complete */

void __rustcall
<rustls::crypto::ring::kx::KeyExchange_as_rustls::crypto::ActiveKeyExchange>::complete
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 00860acc to 00860b0f has its CatchHandler @ 00860b9c */
  uVar1 = (*(code *)param_2[0x18])(param_3,param_4);
  if ((uVar1 & 1) != 0) {
    uStack_68 = param_2[2];
    local_70 = param_2[1];
    uStack_58 = param_2[4];
    uStack_60 = param_2[3];
    local_a8 = *param_2;
    uStack_48 = param_2[6];
    local_50 = param_2[5];
    uStack_38 = param_2[8];
    uStack_40 = param_2[7];
    local_a0 = param_3;
    uStack_98 = param_4;
    FUN_00822cd8(&local_90,&local_70,&local_a8);
    if (local_90 == -1) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      uVar2 = 0x800000000000001a;
    }
    else {
      uVar2 = 0xffffffffffffffff;
      param_1[2] = uStack_88;
      param_1[1] = local_90;
      param_1[4] = uStack_78;
      param_1[3] = uStack_80;
    }
    *param_1 = uVar2;
    free(param_2);
    return;
  }
  *param_1 = 0x800000000000001a;
  *(undefined1 *)(param_1 + 1) = 0x1a;
  free(param_2);
  return;
}


// ===== 00860bb8  <rustls::tls12::Tls12CipherSuite_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::tls12::Tls12CipherSuite as core::fmt::Debug>::fmt */

void __rustcall
<rustls::tls12::Tls12CipherSuite_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Tls12CipherSuite",0x10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002feda6,5,param_1 + 0x48,&DAT_00ae7ba0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00860c1c  FUN_00860c1c =====

void FUN_00860c1c(void)

{
  return;
}


// ===== 00860c28  FUN_00860c28 =====

void FUN_00860c28(void)

{
  return;
}


// ===== 00860c34  FUN_00860c34 =====

void FUN_00860c34(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00860c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((undefined8 *)*param_1)[1] + 0x18))(*(undefined8 *)*param_1);
  return;
}


// ===== 00860c44  <rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::PlainMessage>>::try_from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::Message as
   core::convert::TryFrom<rustls::msgs::message::PlainMessage>>::try_from */

void __rustcall
<rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::PlainMessage>>::
try_from(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  byte *__ptr;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *in_x11;
  ulong uVar13;
  byte *in_x12;
  byte *extraout_x12;
  byte *pbVar14;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  ulong uStack_1c8;
  byte *local_1c0;
  byte *pbStack_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte local_100;
  byte bStack_ff;
  byte bStack_fe;
  byte bStack_fd;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  __ptr = (byte *)param_2[1];
  pbVar2 = (byte *)param_2[2];
  bVar3 = *(byte *)((long)param_2 + 0x1c);
  puVar10 = (undefined *)(ulong)bVar3;
  lVar5 = param_2[3];
  uVar4 = *(undefined2 *)((long)param_2 + 0x1a);
  uVar9 = 0;
  puVar11 = (undefined *)0x3;
  local_108 = (byte *)0x0;
  pbVar14 = pbVar2;
  local_118 = __ptr;
  local_110 = pbVar2;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      if (pbVar2 == (byte *)0x0) {
        uVar9 = 0;
        uVar13 = 0;
        puVar11 = (undefined *)0xc;
        puVar10 = &DAT_002ff13f;
        in_x11 = (undefined *)0x2;
      }
      else if (*__ptr == 1) {
        uVar9 = 0;
        if (pbVar2 == &DAT_00000001) {
          local_1d0 = 0x8000000000000003;
          uVar13 = 0;
          uVar12 = 0;
          local_1c0 = in_x12;
          goto LAB_00860de4;
        }
        puVar10 = &DAT_002ff34f;
        puVar11 = (undefined *)0xf;
        in_x11 = (undefined *)0x17;
        uVar13 = uVar9;
      }
      else {
        uVar9 = 0;
        uVar13 = 0;
        puVar11 = (undefined *)0x2;
      }
    }
    else {
      uVar13 = 0;
      if (bVar3 == 1) {
        if (pbVar2 == (byte *)0x0) {
          puVar10 = &DAT_002f82f1;
          in_x11 = (undefined *)0xa;
          local_f8 = (undefined *)0xc;
        }
        else {
          local_108 = &DAT_00000001;
          bVar3 = *__ptr;
                    /* try { // try from 00860cb8 to 00860e2f has its CatchHandler @ 00860fa0 */
          <rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::read
                    (&local_100,&local_118);
          if ((ulong)local_100 == 0xff) {
            if (local_110 <= local_108) {
              uVar9 = 0;
              uVar12 = (ulong)CONCAT12(bStack_fe,CONCAT11(bStack_ff,bVar3));
              uVar1 = 1;
              if (bVar3 != 2) {
                uVar1 = 2;
              }
              uVar13 = 0;
              if (bVar3 != 1) {
                uVar13 = uVar1;
              }
              local_1d0 = 0x8000000000000000;
              local_1c0 = extraout_x12;
              pbVar14 = (byte *)(ulong)bVar3;
              goto LAB_00860de4;
            }
            puVar10 = &DAT_002ff9ef;
            in_x11 = (undefined *)0x13;
            local_f8 = (undefined *)0xf;
          }
          else {
            puVar10 = local_f8;
            local_f8 = (undefined *)
                       ((ulong)local_100 | (ulong)uStack_fc._1_3_ << 0x28 |
                       (ulong)bStack_ff << 8 | (ulong)bStack_fe << 0x10 | (ulong)bStack_fd << 0x18 |
                       (ulong)(byte)uStack_fc << 0x20);
            in_x11 = puStack_f0;
          }
        }
LAB_00860efc:
        uVar9 = (ulong)local_f8 & 0xffffffff00000000;
        puVar11 = local_f8;
        uVar13 = (ulong)local_f8 & 0xffffff00;
      }
    }
LAB_00860f04:
    lVar8 = *param_2;
    param_1[4] = in_x11;
    uVar7 = _UNK_0029ffe8;
    uVar6 = _DAT_0029ffe0;
    param_1[2] = uVar13 | uVar9 | (ulong)puVar11 & 0xff;
    param_1[3] = puVar10;
    param_1[1] = uVar7;
    *param_1 = uVar6;
  }
  else {
    if (bVar3 == 2) {
      FUN_007efca4(&local_100,&local_118,(short)lVar5,uVar4);
      pbVar14 = (byte *)CONCAT44(uStack_fc,
                                 CONCAT13(bStack_fd,
                                          CONCAT12(bStack_fe,CONCAT11(bStack_ff,local_100))));
      puVar10 = puStack_f0;
      in_x11 = local_e8;
      if (pbVar14 == (byte *)0xffffffffffffffff) goto LAB_00860efc;
      uVar12 = (ulong)__ptr >> 8 & 0xffffff;
      uVar9 = (ulong)__ptr & 0xffffffff00000000;
      uStack_208 = uStack_90;
      local_210 = local_98;
      uStack_1f8 = uStack_80;
      uStack_200 = local_88;
      uVar13 = (ulong)__ptr & 0xff;
      uStack_1e8 = uStack_70;
      local_1f0 = local_78;
      local_1e0 = local_68;
      local_1d0 = 0xffffffffffffffff;
      uStack_248 = uStack_d0;
      local_250 = local_d8;
      uStack_238 = uStack_c0;
      uStack_240 = local_c8;
      uStack_228 = uStack_b0;
      local_230 = local_b8;
      uStack_218 = uStack_a0;
      uStack_220 = local_a8;
      puStack_268 = puStack_f0;
      local_270 = local_f8;
      uStack_258 = uStack_e0;
      puStack_260 = local_e8;
      local_1c0 = pbVar2;
    }
    else {
      uVar13 = 0;
      if (bVar3 != 3) goto LAB_00860f04;
      uVar9 = 0xffffffff00000000;
      uVar12 = 0xffffff;
      local_1d0 = 0x8000000000000004;
      uVar13 = 0xff;
      local_1c0 = __ptr;
    }
LAB_00860de4:
    uStack_1c8 = uVar13 | uVar12 << 8 | uVar9;
    uStack_148 = uStack_208;
    local_150 = local_210;
    uStack_138 = uStack_1f8;
    uStack_140 = uStack_200;
    uStack_128 = uStack_1e8;
    local_130 = local_1f0;
    local_120 = local_1e0;
    uStack_188 = uStack_248;
    local_190 = local_250;
    uStack_178 = uStack_238;
    uStack_180 = uStack_240;
    uStack_168 = uStack_228;
    local_170 = local_230;
    uStack_158 = uStack_218;
    uStack_160 = uStack_220;
    puStack_1a8 = puStack_268;
    local_1b0 = local_270;
    uStack_198 = uStack_258;
    puStack_1a0 = puStack_260;
    pbStack_1b8 = pbVar14;
    FUN_0085536c(&local_328,&local_1d0);
    lVar8 = *param_2;
    *(short *)(param_1 + 0x17) = (short)lVar5;
    param_1[0x11] = uStack_2a0;
    param_1[0x10] = local_2a8;
    param_1[0x13] = uStack_290;
    param_1[0x12] = local_298;
    param_1[0x15] = uStack_280;
    param_1[0x14] = local_288;
    param_1[9] = uStack_2e0;
    param_1[8] = local_2e8;
    param_1[0xb] = uStack_2d0;
    param_1[10] = local_2d8;
    param_1[0x16] = local_278;
    param_1[0xd] = uStack_2c0;
    param_1[0xc] = local_2c8;
    param_1[0xf] = uStack_2b0;
    param_1[0xe] = local_2b8;
    *(undefined2 *)((long)param_1 + 0xba) = uVar4;
    param_1[1] = uStack_320;
    *param_1 = local_328;
    param_1[3] = uStack_310;
    param_1[2] = local_318;
    param_1[5] = uStack_300;
    param_1[4] = local_308;
    param_1[7] = uStack_2f0;
    param_1[6] = local_2f8;
  }
  if ((lVar8 != -1) && (lVar8 != 0)) {
    free(__ptr);
  }
  return;
}


// ===== 00860fc4  <rustls::tls12::ConnectionSecrets_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::tls12::ConnectionSecrets as core::ops::drop::Drop>::drop */

void __rustcall <rustls::tls12::ConnectionSecrets_as_core::ops::drop::Drop>::drop(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  return;
}


// ===== 00861088  <rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>::try_from =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::Message as
   core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>::try_from */

void __rustcall
<rustls::msgs::message::Message_as_core::convert::TryFrom<rustls::msgs::message::inbound::InboundPlainMessage>>
::try_from(byte *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *in_x12;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  byte local_f0;
  byte bStack_ef;
  byte bStack_ee;
  byte bStack_ed;
  undefined4 uStack_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pbVar2 = (byte *)*param_2;
  pbVar14 = (byte *)param_2[1];
  uVar7 = 0;
  bVar3 = *(byte *)(param_2 + 2);
  puVar10 = (undefined *)(ulong)bVar3;
  uVar4 = *(undefined2 *)((long)param_2 + 0x12);
  puVar8 = (undefined *)0x3;
  uVar5 = *(undefined2 *)((long)param_2 + 0x14);
  local_f8 = (byte *)0x0;
  pbVar13 = pbVar14;
  local_108 = pbVar2;
  local_100 = pbVar14;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      if (pbVar14 == (byte *)0x0) {
        uVar7 = 0;
        uVar12 = 0;
        puVar8 = (undefined *)0xc;
        puVar10 = &DAT_002ff13f;
        in_x12 = (undefined *)0x2;
      }
      else if (*pbVar2 == 1) {
        uVar7 = 0;
        if (pbVar14 == &DAT_00000001) {
          uVar9 = 0x8000000000000003;
          uVar12 = 0;
          uVar11 = 0;
          pbVar14 = pbVar2;
          goto LAB_00861224;
        }
        puVar10 = &DAT_002ff34f;
        puVar8 = (undefined *)0xf;
        in_x12 = (undefined *)0x17;
        uVar12 = uVar7;
      }
      else {
        uVar7 = 0;
        uVar12 = 0;
        puVar8 = (undefined *)0x2;
      }
    }
    else {
      uVar12 = 0;
      if (bVar3 == 1) {
        if (pbVar14 == (byte *)0x0) {
          puVar10 = &DAT_002f82f1;
          in_x12 = (undefined *)0xa;
          puVar8 = (undefined *)0xc;
        }
        else {
          local_f8 = &DAT_00000001;
          bVar3 = *pbVar2;
          <rustls::enums::AlertDescription_as_rustls::msgs::codec::Codec>::read
                    (&local_f0,&local_108);
          if ((ulong)local_f0 == 0xff) {
            if (local_100 <= local_f8) {
              uVar7 = 0;
              uVar11 = (ulong)CONCAT12(bStack_ee,CONCAT11(bStack_ef,bVar3));
              uVar1 = 1;
              if (bVar3 != 2) {
                uVar1 = 2;
              }
              uVar12 = 0;
              if (bVar3 != 1) {
                uVar12 = uVar1;
              }
              uVar9 = 0x8000000000000000;
              pbVar13 = param_1;
              pbVar14 = (byte *)(ulong)bVar3;
              goto LAB_00861224;
            }
            puVar10 = &DAT_002ff9ef;
            in_x12 = (undefined *)0x13;
            puVar8 = (undefined *)0xf;
          }
          else {
            puVar8 = (undefined *)
                     ((ulong)local_f0 | (ulong)uStack_ec._1_3_ << 0x28 |
                     (ulong)bStack_ef << 8 | (ulong)bStack_ee << 0x10 | (ulong)bStack_ed << 0x18 |
                     (ulong)(byte)uStack_ec << 0x20);
            puVar10 = local_e8;
            in_x12 = puStack_e0;
          }
        }
LAB_008612e0:
        uVar7 = (ulong)puVar8 & 0xffffffff00000000;
        uVar12 = (ulong)puVar8 & 0xffffff00;
      }
    }
LAB_008612e8:
    *(undefined **)(param_1 + 0x20) = in_x12;
    uVar6 = _UNK_0029ffe8;
    uVar9 = _DAT_0029ffe0;
    *(ulong *)(param_1 + 0x10) = uVar12 | uVar7 | (ulong)puVar8 & 0xff;
    *(undefined **)(param_1 + 0x18) = puVar10;
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)param_1 = uVar9;
  }
  else {
    if (bVar3 == 2) {
      FUN_007efca4(&local_f0,&local_108,uVar4,uVar5);
      pbVar13 = (byte *)CONCAT44(uStack_ec,
                                 CONCAT13(bStack_ed,CONCAT12(bStack_ee,CONCAT11(bStack_ef,local_f0))
                                         ));
      puVar8 = local_e8;
      puVar10 = puStack_e0;
      in_x12 = local_d8;
      if (pbVar13 == (byte *)0xffffffffffffffff) goto LAB_008612e0;
      uVar7 = (ulong)pbVar2 & 0xffffffff00000000;
      uVar11 = (ulong)pbVar2 >> 8 & 0xffffff;
      uStack_138 = uStack_80;
      local_140 = local_88;
      uStack_128 = uStack_70;
      uStack_130 = local_78;
      uVar12 = (ulong)pbVar2 & 0xff;
      uStack_118 = uStack_60;
      local_120 = local_68;
      local_110 = local_58;
      uVar9 = 0xffffffffffffffff;
      uStack_178 = uStack_c0;
      local_180 = local_c8;
      uStack_168 = uStack_b0;
      uStack_170 = local_b8;
      uStack_158 = uStack_a0;
      local_160 = local_a8;
      uStack_148 = uStack_90;
      uStack_150 = local_98;
      puStack_198 = puStack_e0;
      local_1a0 = local_e8;
      uStack_188 = uStack_d0;
      puStack_190 = local_d8;
    }
    else {
      uVar12 = 0;
      if (bVar3 != 3) goto LAB_008612e8;
      uVar7 = 0xffffffff00000000;
      uVar11 = 0xffffff;
      uVar9 = 0x8000000000000004;
      uVar12 = 0xff;
      pbVar14 = pbVar2;
    }
LAB_00861224:
    *(byte **)(param_1 + 0x10) = pbVar14;
    *(byte **)(param_1 + 0x18) = pbVar13;
    *(undefined2 *)(param_1 + 0xb8) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = uStack_138;
    *(undefined8 *)(param_1 + 0x80) = local_140;
    *(undefined8 *)(param_1 + 0x98) = uStack_128;
    *(undefined8 *)(param_1 + 0x90) = uStack_130;
    *(undefined8 *)(param_1 + 0xa8) = uStack_118;
    *(undefined8 *)(param_1 + 0xa0) = local_120;
    *(undefined8 *)(param_1 + 0xb0) = local_110;
    *(undefined8 *)(param_1 + 0x48) = uStack_178;
    *(undefined8 *)(param_1 + 0x40) = local_180;
    *(undefined8 *)(param_1 + 0x58) = uStack_168;
    *(undefined8 *)(param_1 + 0x50) = uStack_170;
    *(undefined8 *)param_1 = uVar9;
    *(ulong *)(param_1 + 8) = uVar12 | uVar11 << 8 | uVar7;
    *(undefined2 *)(param_1 + 0xba) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uStack_158;
    *(undefined8 *)(param_1 + 0x60) = local_160;
    *(undefined8 *)(param_1 + 0x78) = uStack_148;
    *(undefined8 *)(param_1 + 0x70) = uStack_150;
    *(undefined **)(param_1 + 0x28) = puStack_198;
    *(undefined **)(param_1 + 0x20) = local_1a0;
    *(undefined8 *)(param_1 + 0x38) = uStack_188;
    *(undefined **)(param_1 + 0x30) = puStack_190;
  }
  return;
}


// ===== 00861364  FUN_00861364 =====

void FUN_00861364(void)

{
  return;
}


// ===== 00861370  <rustls::tls12::Seed_as_core::convert::AsRef<[u8]>>::as_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::tls12::Seed as core::convert::AsRef<[u8]>>::as_ref */

undefined1  [16] __rustcall
<rustls::tls12::Seed_as_core::convert::AsRef<[u8]>>::as_ref(byte *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((*param_1 & 1) != 0) {
    auVar1._8_8_ = 0x40;
    auVar1._0_8_ = param_1 + 1;
    return auVar1;
  }
  auVar2._8_8_ = *(ulong *)(param_1 + 0x48);
  if (auVar2._8_8_ < 0x41) {
    auVar2._0_8_ = param_1 + 8;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,auVar2._8_8_,0x40,&PTR_s__root__cargo_registry_src_index__00ae6878);
}


// ===== 008613bc  FUN_008613bc =====

void FUN_008613bc(long *param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_70;
  long lStack_68;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar2 = *param_1;
  if ((lVar2 != -1) && (*param_2 != -1)) {
    FUN_00807510(&local_58,param_2);
    pvVar1 = (void *)param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if ((puVar4[-1] != -1) && (puVar4[-1] != 0)) {
          free((void *)*puVar4);
        }
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
    }
    if (lVar2 != 0) {
      free(pvVar1);
    }
    param_1[1] = lStack_50;
    *param_1 = local_58;
    param_1[2] = local_48;
    return;
  }
  if (*param_2 == -1) {
    lVar3 = -1;
  }
  else {
    FUN_00807510(&local_58,param_2);
    lVar3 = local_58;
    local_70 = lStack_50;
    lStack_68 = local_48;
  }
  if (lVar2 != -1) {
    pvVar1 = (void *)param_1[1];
    lVar5 = param_1[2];
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if ((puVar4[-1] != -1) && (puVar4[-1] != 0)) {
          free((void *)*puVar4);
        }
        lVar5 = lVar5 + -1;
        puVar4 = puVar4 + 3;
      } while (lVar5 != 0);
    }
    if (lVar2 != 0) {
      free(pvVar1);
    }
  }
  *param_1 = lVar3;
  param_1[2] = lStack_68;
  param_1[1] = local_70;
  return;
}


// ===== 00861528  FUN_00861528 =====

void FUN_00861528(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002fedab,0xc,&local_18,&DAT_00ae7bc0);
  return;
}


// ===== 00861568  FUN_00861568 =====

void FUN_00861568(void)

{
  return;
}


// ===== 00861574  <rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::message::PlainMessage as
   core::convert::From<rustls::msgs::message::Message>>::from */

void __rustcall
<rustls::msgs::message::PlainMessage_as_core::convert::From<rustls::msgs::message::Message>>::from
          (ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  undefined1 *__src;
  undefined8 uVar4;
  ulong local_68;
  undefined1 *puStack_60;
  ulong local_58;
  
  uVar3 = *param_2;
  uVar1 = uVar3;
  if (-0x7ffffffffffffffc < (long)uVar3) {
    uVar1 = 1;
  }
  if (uVar3 == 0x8000000000000004) {
    __src = (undefined1 *)param_2[2];
    __n = param_2[3];
    uVar3 = param_2[1];
    if (param_2[1] == 0xffffffffffffffff) {
      if ((long)__n < 0) {
        uVar4 = 0;
LAB_008615d0:
                    /* try { // try from 008615d0 to 008615db has its CatchHandler @ 008616e4 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar4,__n);
      }
      if (__n == 0) {
        uVar3 = 0;
        __src = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar4 = 1;
        __dest = (undefined1 *)FUN_004b25a4(__n,1);
        if (__dest == (undefined1 *)0x0) goto LAB_008615d0;
        memcpy(__dest,__src,__n);
        uVar3 = __n;
        __src = __dest;
      }
    }
  }
  else {
    local_58 = 0;
    local_68 = 0;
    puStack_60 = &DAT_00000001;
                    /* try { // try from 008615ec to 008615f7 has its CatchHandler @ 0086169c */
    <rustls::msgs::message::rustls::msgs::message::MessagePayload>::encode(param_2,&local_68);
    uVar3 = local_68;
    __n = local_58;
    __src = puStack_60;
  }
  *param_1 = uVar3;
  param_1[1] = (ulong)__src;
  uVar2 = *param_2;
  uVar3 = param_2[0x17];
  param_1[2] = __n;
  *(int *)(param_1 + 3) = (int)uVar3;
  *(char *)((long)param_1 + 0x1c) = (char)(0x300020201 >> ((uVar1 & 7) << 3));
  if (uVar2 != 0x8000000000000004) {
    FUN_00853da4(param_2);
  }
  return;
}


// ===== 00861708  FUN_00861708 =====

void FUN_00861708(void)

{
  return;
}


// ===== 00861714  <rustls::crypto::ring::kx::KxGroup_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::kx::KxGroup as core::fmt::Debug>::fmt */

void __rustcall <rustls::crypto::ring::kx::KxGroup_as_core::fmt::Debug>::fmt(long param_1)

{
  <rustls::msgs::enums::NamedGroup_as_core::fmt::Debug>::fmt(param_1 + 0x10);
  return;
}


// ===== 0086171c  FUN_0086171c =====

bool FUN_0086171c(undefined8 param_1,long param_2)

{
  return param_2 == 0x20;
}


// ===== 00861728  FUN_00861728 =====

void FUN_00861728(undefined1 *param_1)

{
  *param_1 = 0xff;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000021;
  return;
}


// ===== 00861740  FUN_00861740 =====

void FUN_00861740(void)

{
  return;
}


// ===== 00861744  FUN_00861744 =====

void FUN_00861744(undefined8 *param_1)

{
  *param_1 = 0x8000000000000021;
  return;
}


// ===== 00861754  FUN_00861754 =====

void FUN_00861754(undefined8 *param_1)

{
  *param_1 = 0x8000000000000021;
  return;
}


// ===== 00861764  FUN_00861764 =====

void FUN_00861764(undefined2 *param_1)

{
  *param_1 = 0xffff;
  return;
}


// ===== 00861770  FUN_00861770 =====

void FUN_00861770(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 short *param_5)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_108;
  undefined8 local_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_5 == 4) {
    uVar2 = *(ushort *)(param_2 + 0x19);
    uVar3 = *(ushort *)((long)param_2 + 0xca);
                    /* try { // try from 008617b4 to 008617f7 has its CatchHandler @ 008619ec */
    uVar5 = (*(code *)param_2[0x18])(param_3,param_4);
    if ((uVar5 & 1) != 0) {
      local_90 = param_2[1];
      local_c8 = *param_2;
      uStack_68 = param_2[6];
      local_70 = param_2[5];
      uStack_88 = (undefined7)param_2[2];
      uStack_81 = (undefined1)((ulong)param_2[2] >> 0x38);
      uStack_78 = (undefined7)param_2[4];
      uStack_71 = (undefined1)((ulong)param_2[4] >> 0x38);
      uStack_80 = (undefined7)param_2[3];
      uStack_79 = (undefined1)((ulong)param_2[3] >> 0x38);
      uStack_58 = param_2[8];
      uStack_60 = param_2[7];
      local_c0 = param_3;
      uStack_b8 = param_4;
      FUN_00822cd8(&local_b0,&local_90,&local_c8);
      if (CONCAT71(uStack_af,local_b0) != -1) {
        local_100._0_7_ = uStack_af;
        local_100._7_1_ = uStack_a8;
        uStack_f8 = uStack_a7;
        uStack_e9 = (undefined1)uStack_98;
        uStack_e8 = (undefined7)((ulong)uStack_98 >> 8);
        uStack_f1 = uStack_a0;
        uStack_f0 = uStack_9f;
        free(param_2);
        uVar4 = 1 << (ulong)(uVar2 & 0x1f);
        uStack_79 = uStack_e9;
        uStack_78 = uStack_e8;
        local_108 = CONCAT71(uStack_e8,uStack_e9);
        if (((uVar4 & 0x7c1f) == 0) && (((uVar4 & 0x3e0) != 0 || ((uVar3 & 0xff00) == 0x100)))) {
          uVar5 = CONCAT71(uStack_f0,uStack_f1);
          if (uVar5 < local_108) {
                    /* try { // try from 008619d4 to 008619e3 has its CatchHandler @ 00861a08 */
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (local_108,uVar5,uVar5,&PTR_s__root__cargo_registry_src_index__00ae6368);
          }
          lVar8 = 0;
          do {
            lVar6 = uVar5 - local_108;
            if (uVar5 - local_108 == lVar8) break;
            pcVar1 = (char *)(CONCAT71(uStack_f8,local_100._7_1_) + local_108 + lVar8);
            lVar6 = lVar8;
            lVar8 = lVar8 + 1;
          } while (*pcVar1 == '\0');
          local_108 = lVar6 + local_108;
        }
        *param_1 = 0xffffffffffffffff;
        param_1[2] = CONCAT71(uStack_f8,local_100._7_1_);
        param_1[1] = CONCAT71((undefined7)local_100,local_b0);
        param_1[4] = local_108;
        param_1[3] = CONCAT71(uStack_f0,uStack_f1);
        return;
      }
    }
    free(param_2);
    *(undefined1 *)(param_1 + 1) = 0x1a;
    *param_1 = 0x800000000000001a;
  }
  else {
                    /* try { // try from 008618bc to 008618ff has its CatchHandler @ 008619e8 */
    uVar5 = (*(code *)param_2[0x18])(param_3,param_4);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0x800000000000001a;
      *(undefined1 *)(param_1 + 1) = 0x1a;
      free(param_2);
      return;
    }
    local_90 = param_2[1];
    uStack_68 = param_2[6];
    local_70 = param_2[5];
    uStack_a8 = (undefined1)param_3;
    uStack_a7 = (undefined7)((ulong)param_3 >> 8);
    uStack_a0 = (undefined1)param_4;
    uStack_9f = (undefined7)((ulong)param_4 >> 8);
    uStack_88 = (undefined7)param_2[2];
    uStack_81 = (undefined1)((ulong)param_2[2] >> 0x38);
    uStack_78 = (undefined7)param_2[4];
    uStack_71 = (undefined1)((ulong)param_2[4] >> 0x38);
    uStack_80 = (undefined7)param_2[3];
    uStack_79 = (undefined1)((ulong)param_2[3] >> 0x38);
    uStack_58 = param_2[8];
    uStack_60 = param_2[7];
    local_b0 = (undefined1)*param_2;
    uStack_af = (undefined7)((ulong)*param_2 >> 8);
    FUN_00822cd8(&local_100,&local_90,&local_b0);
    if (local_100 == -1) {
      *(undefined1 *)(param_1 + 1) = 0x1a;
      uVar7 = 0x800000000000001a;
    }
    else {
      uVar7 = 0xffffffffffffffff;
      param_1[2] = CONCAT17(uStack_f1,uStack_f8);
      param_1[1] = local_100;
      param_1[4] = CONCAT17(uStack_e1,uStack_e8);
      param_1[3] = CONCAT17(uStack_e9,uStack_f0);
    }
    *param_1 = uVar7;
    free(param_2);
  }
  return;
}


// ===== 00861a1c  FUN_00861a1c =====

void FUN_00861a1c(void)

{
                    /* try { // try from 00861a2c to 00861a43 has its CatchHandler @ 00861a48 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002fedb7,0xb3,&PTR_s__root__cargo_registry_src_index__00ae7be0);
}


// ===== 00861a64  FUN_00861a64 =====

void FUN_00861a64(size_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  undefined2 uVar3;
  undefined1 *__dest;
  undefined2 extraout_w1;
  size_t __n;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  size_t local_98;
  size_t local_90;
  size_t sStack_88;
  size_t local_80;
  size_t sStack_78;
  size_t local_70;
  size_t sStack_68;
  
  <rustls::crypto::ring::kx::KxGroup_as_rustls::crypto::SupportedKxGroup>::start(&local_98);
  sVar2 = sStack_88;
  sVar1 = local_90;
  if (local_98 == 0xffffffffffffffff) {
                    /* try { // try from 00861ae0 to 00861b13 has its CatchHandler @ 00861bfc */
    uVar3 = (**(code **)(sStack_88 + 0x48))(local_90);
    auVar5 = (**(code **)(sVar2 + 0x38))(sVar1);
    __n = auVar5._8_8_;
    if ((long)__n < 0) {
      uVar4 = 0;
LAB_00861b08:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar4,__n);
    }
    if (__n == 0) {
      __dest = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar4 = 1;
      __dest = (undefined1 *)FUN_004b25a4(__n,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00861b08;
      memcpy(__dest,auVar5._0_8_,__n);
    }
                    /* try { // try from 00861b64 to 00861b77 has its CatchHandler @ 00861bdc */
    (**(code **)(sVar2 + 0x18))(&local_98,sVar1,param_3,param_4);
    if (local_98 == 0xffffffffffffffff) {
      *param_1 = __n;
      param_1[1] = (size_t)__dest;
      param_1[2] = __n;
      *(undefined2 *)(param_1 + 7) = uVar3;
      param_1[4] = sStack_88;
      param_1[3] = local_90;
      param_1[6] = sStack_78;
      param_1[5] = local_80;
      *(undefined2 *)((long)param_1 + 0x3a) = extraout_w1;
    }
    else {
      *param_1 = 0xffffffffffffffff;
      param_1[1] = local_98;
      param_1[5] = sStack_78;
      param_1[4] = local_80;
      param_1[7] = sStack_68;
      param_1[6] = local_70;
      param_1[3] = sStack_88;
      param_1[2] = local_90;
      if (__n != 0) {
        free(__dest);
      }
    }
  }
  else {
    param_1[2] = local_90;
    param_1[3] = sStack_88;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = local_98;
    param_1[5] = sStack_78;
    param_1[4] = local_80;
    param_1[7] = sStack_68;
    param_1[6] = local_70;
  }
  return;
}


// ===== 00861c18  FUN_00861c18 =====

undefined8 FUN_00861c18(void)

{
  return 1;
}


// ===== 00861c20  FUN_00861c20 =====

void FUN_00861c20(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == -1) || (lVar1 == -2)) {
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar1 != -3) {
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if ((param_1[10] != -1) && (param_1[10] != 0)) {
      free((void *)param_1[0xb]);
    }
    __ptr = (void *)param_1[8];
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if (param_1[7] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00861d24  FUN_00861d24 =====

void FUN_00861d24(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 != -1) {
    FUN_00861ed4();
    return;
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow();
    return;
  }
  return;
}


// ===== 00861d58  FUN_00861d58 =====

void FUN_00861d58(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00861dd8  FUN_00861dd8 =====

void FUN_00861dd8(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00861e60  FUN_00861e60 =====

void FUN_00861e60(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
    return;
  }
  return;
}


// ===== 00861e84  FUN_00861e84 =====

void FUN_00861e84(void *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (param_1 != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)param_1 + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(param_2 + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if ((*(long *)(param_2 + 8) + uVar2 + 0xf & -uVar2) != 0) {
        free(param_1);
        return;
      }
    }
  }
  return;
}


// ===== 00861ed4  FUN_00861ed4 =====

void FUN_00861ed4(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = *param_1;
  lVar8 = uVar7 + 0x7fffffffffffffef;
  if (uVar7 < 0x8000000000000011) {
    lVar8 = 0xb;
  }
  if (lVar8 < 0xb) {
    if (lVar8 < 8) {
      if (lVar8 - 2U < 6) {
        return;
      }
      if ((lVar8 == 0) || (lVar8 == 1)) {
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar8 - 9U < 2) {
        return;
      }
      if (lVar8 == 8) {
        uVar7 = param_1[1];
        if ((long)uVar7 < -0x7fffffffffffffeb) {
          return;
        }
        if (uVar7 == 0xffffffffffffffff) {
          return;
        }
        __ptr = (void *)param_1[2];
        lVar8 = param_1[3] + 1;
        pvVar4 = __ptr;
        while (lVar8 = lVar8 + -1, lVar8 != 0) {
                    /* try { // try from 00861fb4 to 00861fb7 has its CatchHandler @ 00862144 */
          FUN_007ff534(pvVar4);
          pvVar4 = (void *)((long)pvVar4 + 0x70);
        }
        if (uVar7 == 0) {
          return;
        }
        free(__ptr);
        return;
      }
    }
  }
  else if (lVar8 < 0xe) {
    if (lVar8 == 0xb) {
      uVar5 = uVar7 ^ 0x8000000000000000;
      if (-1 < (long)uVar7) {
        uVar5 = 0xd;
      }
      if (uVar5 < 0xd) {
        return;
      }
      if (uVar5 - 0xe < 2) {
        return;
      }
      if (uVar5 == 0xd) {
        if ((((param_1[3] & 1) == 0) && (param_1[4] != 0xffffffffffffffff)) && (param_1[4] != 0)) {
          free((void *)param_1[5]);
        }
                    /* try { // try from 00862034 to 00862037 has its CatchHandler @ 0086212c */
        FUN_00808efc(param_1);
        if (uVar7 == 0) {
          return;
        }
        free((void *)param_1[1]);
        return;
      }
      plVar6 = (long *)param_1[1];
      do {
        bVar3 = *plVar6 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00862098;
    }
    if (lVar8 == 0xc) {
      if (param_1[1] != 4) {
        return;
      }
      plVar6 = (long *)param_1[2];
      do {
        bVar3 = *plVar6 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_00862098;
    }
    if (lVar8 == 0xd) {
      if (param_1[1] == 0) {
        return;
      }
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar8 - 0xeU < 7) {
    return;
  }
  plVar6 = (long *)param_1[1];
  do {
    bVar3 = *plVar6 + -1 == 0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = *plVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00862098:
  if (!bVar3) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow();
  return;
}


// ===== 00862188  FUN_00862188 =====

void FUN_00862188(long *param_1)

{
  long *__ptr;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    free((void *)param_1[4]);
  }
  __ptr = (long *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = 0;
    plVar5 = __ptr;
    do {
      lVar2 = *plVar5;
      if (lVar2 == -2) {
        lVar2 = plVar5[1];
        if (lVar2 != -1) {
          plVar1 = __ptr + lVar4 * 4 + 1;
          goto joined_r0x00862214;
        }
      }
      else {
        plVar1 = plVar5;
        if (lVar2 != -1) {
joined_r0x00862214:
          if (lVar2 != 0) {
            free((void *)plVar1[1]);
          }
        }
      }
      lVar3 = lVar3 + -1;
      plVar5 = plVar5 + 4;
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 00862264  FUN_00862264 =====

void FUN_00862264(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 == -2) {
      param_1 = param_1 + 1;
      lVar1 = *param_1;
      if (lVar1 == -1) {
        return;
      }
    }
    if (lVar1 != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  return;
}


// ===== 00862298  FUN_00862298 =====

void FUN_00862298(long *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  __ptr = (void *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar5[-1] != -1) && (puVar5[-1] != 0)) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
  }
  plVar3 = (long *)param_1[6];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00862324 to 00862327 has its CatchHandler @ 00862360 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 00862390  FUN_00862390 =====

void FUN_00862390(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    free((void *)*param_1);
  }
  if (param_1[6] != 0) {
    free((void *)param_1[5]);
  }
  if (param_1[8] != 0) {
    free((void *)param_1[7]);
  }
  if (param_1[10] != 0) {
    free((void *)param_1[9]);
  }
  if (param_1[0xf] != 0) {
    free((void *)param_1[0xe]);
  }
  if (param_1[0x11] != 0) {
    free((void *)param_1[0x10]);
  }
  if (param_1[0x13] != 0) {
    free((void *)param_1[0x12]);
  }
  if (param_1[0x15] != 0) {
    free((void *)param_1[0x14]);
  }
  if (param_1[0x1a] != 0) {
    free((void *)param_1[0x19]);
  }
  if (param_1[0x1d] != 0) {
    free((void *)param_1[0x1c]);
    return;
  }
  return;
}


// ===== 008624a0  FUN_008624a0 =====

void FUN_008624a0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>>::drop_slow
              ();
    return;
  }
  return;
}


// ===== 008624c4  FUN_008624c4 =====

void FUN_008624c4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<ring::ec::curve25519::ed25519::signing::Ed25519KeyPair>>::
    drop_slow();
    return;
  }
  return;
}


// ===== 008624e8  FUN_008624e8 =====

void FUN_008624e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow();
    return;
  }
  return;
}


// ===== 0086250c  FUN_0086250c =====

void FUN_0086250c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow();
    return;
  }
  return;
}


// ===== 00862530  FUN_00862530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00862530(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *__dest;
  long lVar7;
  long lVar8;
  long lVar9;
  void *__src;
  size_t __n;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_d0;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  size_t sStack_78;
  undefined1 *local_70;
  size_t sStack_68;
  
  uVar6 = _UNK_0029f228;
  uVar5 = _DAT_0029f220;
  plVar12 = (long *)param_1[6];
  lVar10 = *param_1;
  lVar14 = param_1[1];
  lVar2 = param_1[4];
  lVar4 = param_1[5];
  plVar3 = (long *)*param_2;
  lVar11 = param_2[1];
  uVar13 = ((ulong)(param_1[7] - (long)plVar12) >> 3) * -0x5555555555555555;
  lVar7 = param_1[2];
  if (lVar10 == 1) {
    uVar1 = (ulong)(lVar14 != 0);
    if (uVar13 <= (lVar14 != 0)) {
      uVar1 = uVar13;
    }
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      uVar13 = uVar1;
    }
  }
  else if ((*(uint *)(param_1 + 3) & 1) == 0) goto LAB_00862708;
  if (uVar13 != 0) {
    puVar16 = (undefined8 *)(param_2[2] + lVar11 * 0x30);
    local_d0 = 1;
    do {
      lVar9 = lVar14;
      if ((lVar10 == 1) && (lVar9 = 0, lVar14 != 0)) {
        lVar10 = 1;
        lVar8 = lVar7;
        lVar15 = lVar14;
        if (*plVar12 != -1) goto LAB_0086262c;
LAB_008625f0:
        local_70 = (undefined1 *)plVar12[1];
        sStack_68 = plVar12[2];
        sStack_78 = 0xffffffffffffffff;
        lVar14 = lVar9;
      }
      else {
        lVar10 = 0;
        lVar8 = lVar4;
        lVar15 = lVar2;
        if (*plVar12 == -1) goto LAB_008625f0;
LAB_0086262c:
        __n = plVar12[2];
        if ((long)__n < 0) {
          local_d0 = 0;
LAB_00862730:
                    /* try { // try from 00862730 to 0086273b has its CatchHandler @ 00862760 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(local_d0,__n);
        }
        lVar14 = lVar9;
        if (__n == 0) {
          local_70 = &DAT_00000001;
          sStack_68 = 0;
          sStack_78 = __n;
        }
        else {
          __src = (void *)plVar12[1];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          __dest = (undefined1 *)FUN_004b25a4(__n,1);
          if (__dest == (undefined1 *)0x0) goto LAB_00862730;
          memcpy(__dest,__src,__n);
          sStack_78 = __n;
          local_70 = __dest;
          sStack_68 = __n;
        }
      }
      puStack_88 = (undefined8 *)&DAT_00000008;
      local_90 = 0;
      if (lVar15 != 0) {
        local_80 = 0;
        puStack_88 = (undefined8 *)&DAT_00000008;
        local_90 = 0;
                    /* try { // try from 008626b4 to 008626bb has its CatchHandler @ 00862740 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls::msgs::handshake::CertificateExtension>>
        ::grow_one(&local_90);
        puStack_88[1] = uVar6;
        *puStack_88 = uVar5;
        puStack_88[3] = lVar8;
        puStack_88[2] = lVar15;
      }
      local_80 = (ulong)(lVar15 != 0);
      plVar12 = plVar12 + 3;
      lVar11 = lVar11 + 1;
      uVar13 = uVar13 - 1;
      puVar16[1] = puStack_88;
      *puVar16 = local_90;
      puVar16[3] = sStack_78;
      puVar16[2] = local_80;
      puVar16[5] = sStack_68;
      puVar16[4] = local_70;
      puVar16 = puVar16 + 6;
    } while (uVar13 != 0);
  }
LAB_00862708:
  *plVar3 = lVar11;
  return;
}


// ===== 00862768  FUN_00862768 =====

void FUN_00862768(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_178;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar3 = *param_2;
  if (lVar3 == param_2[1]) {
    *param_1 = -3;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    *param_2 = lVar3 + 0x18;
    <webpki::crl::types::[1]::webpki::crl::types::OwnedCertRevocationList>::from_der
              (&local_178,uVar1,uVar2);
    if (local_178 == -1) {
      lVar3 = *param_4;
      if ((lVar3 != -1) && (-1 < lVar3)) {
        if (((*(byte *)(param_4 + 3) & 1) == 0) && ((param_4[4] != -1 && (param_4[4] != 0)))) {
          free((void *)param_4[5]);
        }
        __ptr = (void *)param_4[1];
        lVar4 = param_4[2];
        if (lVar4 != 0) {
          puVar5 = (undefined8 *)((long)__ptr + 8);
          do {
            if (puVar5[-1] != 0) {
              free((void *)*puVar5);
            }
            lVar4 = lVar4 + -1;
            puVar5 = puVar5 + 3;
          } while (lVar4 != 0);
        }
        if (lVar3 != 0) {
          free(__ptr);
        }
      }
      local_178 = -2;
    }
    else {
      param_4 = &local_e0;
      lStack_90 = lStack_120;
      local_98 = local_128;
      lStack_80 = lStack_110;
      local_88 = local_118;
      lStack_70 = lStack_100;
      local_78 = lStack_108;
      lStack_60 = lStack_f0;
      local_68 = local_f8;
      lStack_a0 = lStack_130;
      lStack_a8 = local_138;
      local_58 = local_e8;
    }
    *param_1 = local_178;
    param_4[5] = lStack_148;
    param_4[4] = local_150;
    param_4[1] = lStack_168;
    *param_4 = local_170;
    param_4[3] = lStack_158;
    param_4[2] = lStack_160;
    param_4[6] = local_140;
    param_1[2] = lStack_d8;
    param_1[1] = local_e0;
    param_1[0xc] = local_88;
    param_1[0xb] = lStack_90;
    param_1[0xe] = local_78;
    param_1[0xd] = lStack_80;
    param_1[0x10] = local_68;
    param_1[0xf] = lStack_70;
    param_1[0x12] = local_58;
    param_1[0x11] = lStack_60;
    param_1[4] = lStack_c8;
    param_1[3] = local_d0;
    param_1[6] = lStack_b8;
    param_1[5] = local_c0;
    param_1[8] = lStack_a8;
    param_1[7] = local_b0;
    param_1[10] = local_98;
    param_1[9] = lStack_a0;
  }
  return;
}


// ===== 00862914  FUN_00862914 =====

void FUN_00862914(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 *__ptr;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *param_2;
  if (lVar3 == param_2[1]) {
    *param_1 = -2;
    return;
  }
  lVar4 = *(long *)(lVar3 + 0x10);
  *param_2 = lVar3 + 0x18;
  if (-1 < lVar4) {
    lVar3 = param_2[2];
    lVar1 = param_2[3];
    if (lVar4 == 0) {
      __ptr = &DAT_00000001;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 1;
      __ptr = (undefined1 *)FUN_004b263c(lVar4,1);
      if (__ptr == (undefined1 *)0x0) goto LAB_00862950;
    }
                    /* try { // try from 008629b0 to 008629bf has its CatchHandler @ 00862a28 */
    uVar2 = (**(code **)(lVar1 + 0x20))(lVar3,__ptr,lVar4);
    lVar3 = lVar4;
    if ((uVar2 & 1) != 0) {
      if (lVar4 != 0) {
        free(__ptr);
      }
      if (*param_4 != -1) {
                    /* try { // try from 008629f0 to 008629f7 has its CatchHandler @ 00862a20 */
        FUN_00861ed4(param_4);
      }
      lVar3 = -1;
      *param_4 = -0x7fffffffffffffe0;
    }
    *param_1 = lVar3;
    param_1[1] = (long)__ptr;
    param_1[2] = lVar4;
    return;
  }
  uVar5 = 0;
LAB_00862950:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar5,lVar4);
}


// ===== 00862a48  FUN_00862a48 =====

undefined8 FUN_00862a48(char *param_1,ushort *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*param_1 != '\0') || (*param_3 != 0x8000000000000009)) {
    uVar3 = *param_3 ^ 0x8000000000000000;
    uVar1 = uVar3;
    if (0x16 < uVar3) {
      uVar1 = 0x13;
    }
    if (uVar1 != 0x13) {
      if (uVar1 == 9) {
        return 0xfffffffe;
      }
                    /* WARNING: Could not recover jumptable at 0x00862ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&UNK_00862abc + (ulong)(byte)(&DAT_002fee88)[uVar3] * 4))
                        ((ulong)*param_2 << 0x10);
      return uVar2;
    }
  }
  return 0xffffffff;
}


// ===== 00862ca0  <rustls::conn::connection::rustls::conn::connection::Connection>::process_new_packets =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::rustls::conn::connection::Connection>::process_new_packets */

void __rustcall
<rustls::conn::connection::rustls::conn::connection::Connection>::process_new_packets(long *param_1)

{
  if (*param_1 == 2) {
    FUN_0086b5d0(param_1 + 1,param_1 + 0x81,param_1 + 0x7a);
    return;
  }
  FUN_0086d274(param_1,param_1 + 0x8c,param_1 + 0x85);
  return;
}


// ===== 00862ccc  <rustls::conn::connection::rustls::conn::connection::Connection>::refresh_traffic_keys =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::rustls::conn::connection::Connection>::refresh_traffic_keys */

void __rustcall
<rustls::conn::connection::rustls::conn::connection::Connection>::refresh_traffic_keys
          (undefined8 param_1,long *param_2)

{
  if (*param_2 != 2) {
    if (param_2[0x7d] != -1) {
      FUN_00872f78(param_1,param_2 + 0x7d);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00862d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[0x7f] + 0x30))(param_2[0x7e]);
    return;
  }
  if (param_2[0x72] != -1) {
    FUN_00872f78(param_1,param_2 + 0x72);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00862d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[0x74] + 0x30))(param_2[0x73],param_2 + 1);
  return;
}


// ===== 00862d30  <rustls::conn::connection::rustls::conn::connection::Connection>::dangerous_extract_secrets =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::rustls::conn::connection::Connection>::dangerous_extract_secrets */

void __rustcall
<rustls::conn::connection::rustls::conn::connection::Connection>::dangerous_extract_secrets
          (undefined8 param_1,long *param_2)

{
  undefined8 local_4a0 [144];
  
  local_4a0[0] = 0;
  if (*param_2 == 2) {
    memcpy(local_4a0,param_2 + 1,0x420);
    FUN_0086f310(param_1,local_4a0);
    return;
  }
  memcpy(local_4a0,param_2,0x480);
  FUN_0086f478(param_1,local_4a0);
  return;
}


// ===== 00862da8  <rustls::conn::connection::rustls::conn::connection::Connection>::read_tls =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::rustls::conn::connection::Connection>::read_tls */

void __rustcall
<rustls::conn::connection::rustls::conn::connection::Connection>::read_tls(long *param_1)

{
  if (*param_1 == 2) {
    FUN_00869be0(param_1 + 1);
    return;
  }
  FUN_0086a140();
  return;
}


// ===== 00862dc0  <rustls::conn::connection::rustls::conn::connection::Connection>::write_tls =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::rustls::conn::connection::Connection>::write_tls */

void __rustcall
<rustls::conn::connection::rustls::conn::connection::Connection>::write_tls(long *param_1)

{
  long lVar1;
  
  lVar1 = 8;
  if (*param_1 != 2) {
    lVar1 = 0;
  }
  <rustls::vecbuf::rustls::vecbuf::ChunkVecBuffer>::write_to((long)param_1 + lVar1 + 0x88);
  return;
}


// ===== 00862ddc  <rustls::msgs::codec::rustls::msgs::codec::Reader>::sub =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::rustls::msgs::codec::Reader>::sub */

void __rustcall
<rustls::msgs::codec::rustls::msgs::codec::Reader>::sub
          (undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  if (uVar2 - uVar3 < param_3) {
    *(undefined1 *)(param_1 + 1) = 0xb;
    *param_1 = 1;
    return;
  }
  uVar1 = uVar3 + param_3;
  param_2[2] = uVar1;
  if ((!CARRY8(uVar3,param_3)) && (uVar1 <= uVar2)) {
    lVar4 = *param_2;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = lVar4 + uVar3;
    param_1[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar3,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 00862e48  <rustls::msgs::codec::rustls::msgs::codec::Reader>::rest =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::rustls::msgs::codec::Reader>::rest */

undefined1  [16] __rustcall <rustls::msgs::codec::rustls::msgs::codec::Reader>::rest(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 <= uVar1) {
    param_1[2] = uVar1;
    auVar3._8_8_ = uVar1 - uVar2;
    auVar3._0_8_ = *param_1 + uVar2;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar2,uVar1,uVar1,&PTR_s__root__cargo_registry_src_index__00ae7c28);
}


// ===== 00862e80  <rustls::msgs::codec::rustls::msgs::codec::Reader>::take =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::rustls::msgs::codec::Reader>::take */

long __rustcall
<rustls::msgs::codec::rustls::msgs::codec::Reader>::take(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar2 - uVar3 < param_2) {
    return 0;
  }
  uVar1 = uVar3 + param_2;
  param_1[2] = uVar1;
  if ((!CARRY8(uVar3,param_2)) && (uVar1 <= uVar2)) {
    return *param_1 + uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (uVar3,uVar1,uVar2,&PTR_s__root__cargo_registry_src_index__00ae7c40);
}


// ===== 00862ed4  <rustls::crypto::ring::sign::rustls::crypto::ring::sign::RsaSigningKey>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::rustls::crypto::ring::sign::RsaSigningKey>::new */

void __rustcall
<rustls::crypto::ring::sign::rustls::crypto::ring::sign::RsaSigningKey>::new
          (undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [8];
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined1 *local_140;
  undefined *puStack_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  
  if (*param_2 == 0) {
    <ring::rsa::keypair::ring::rsa::keypair::KeyPair>::from_der(&local_270,param_2[2],param_2[3]);
    local_130 = local_270;
    local_128 = local_268;
    uStack_120 = uStack_260;
    local_118 = local_258;
    uStack_110 = uStack_250;
    local_108 = local_248;
    uStack_100 = uStack_240;
    local_f8 = local_238;
    local_f0 = local_230;
    uStack_e8 = uStack_228;
    local_e0 = local_220;
    uStack_d8 = uStack_218;
    local_d0 = uStack_210;
    uStack_c8 = uStack_208;
    local_c0 = local_200;
    uStack_b8 = uStack_1f8;
    uStack_b0 = uStack_1f0;
    uStack_a8 = uStack_1e8;
    local_a0 = local_1e0;
    uStack_98 = uStack_1d8;
    uStack_90 = uStack_1d0;
    uStack_88 = uStack_1c8;
    local_80 = local_1c0;
    uStack_78 = uStack_1b8;
    local_70 = local_1b0;
    uStack_68 = uStack_1a8;
    local_60 = uStack_1a0;
    uStack_58 = uStack_198;
    local_50 = local_190;
    uStack_48 = uStack_188;
  }
  else {
    if (*param_2 == 1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar6 = (undefined8 *)FUN_004b25a4(0x3a,1);
      uVar5 = _DAT_002fef14;
      uVar4 = _UNK_002fef0c;
      uVar3 = _DAT_002fef04;
      uVar2 = _UNK_002feefc;
      uVar1 = _DAT_002feef4;
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(1,0x3a);
      }
      puVar6[5] = CONCAT62(_DAT_002fef1e,_UNK_002fef1c);
      puVar6[4] = uVar5;
      puVar6[1] = uVar2;
      *puVar6 = uVar1;
      puVar6[3] = uVar4;
      puVar6[2] = uVar3;
      uVar3 = _UNK_002a0418;
      uVar2 = _DAT_002a0410;
      uVar1 = CONCAT26(_UNK_002fef24,_DAT_002fef1e);
      *(undefined8 *)((long)puVar6 + 0x32) = _UNK_002fef26;
      *(undefined8 *)((long)puVar6 + 0x2a) = uVar1;
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_1[2] = puVar6;
      param_1[3] = 0x3a;
      return;
    }
    <ring::rsa::keypair::ring::rsa::keypair::KeyPair>::from_pkcs8(&local_270,param_2[2],param_2[3]);
    local_130 = local_270;
    local_128 = local_268;
    uStack_120 = uStack_260;
    local_118 = local_258;
    uStack_110 = uStack_250;
    local_108 = local_248;
    uStack_100 = uStack_240;
    local_f8 = local_238;
    local_f0 = local_230;
    uStack_e8 = uStack_228;
    local_e0 = local_220;
    uStack_d8 = uStack_218;
    local_d0 = uStack_210;
    uStack_c8 = uStack_208;
    local_c0 = local_200;
    uStack_b8 = uStack_1f8;
    uStack_b0 = uStack_1f0;
    uStack_a8 = uStack_1e8;
    local_a0 = local_1e0;
    uStack_98 = uStack_1d8;
    uStack_90 = uStack_1d0;
    uStack_88 = uStack_1c8;
    local_80 = local_1c0;
    uStack_78 = uStack_1b8;
    local_70 = local_1b0;
    uStack_68 = uStack_1a8;
    local_60 = uStack_1a0;
    uStack_58 = uStack_198;
    local_50 = local_190;
    uStack_48 = uStack_188;
  }
  if (local_130 == 0) {
    local_140 = local_40;
    puStack_138 = PTR_fmt_00b00fe0;
    alloc::fmt::format::format_inner((ulong)local_180 | 8,&DAT_002abcac,&local_140);
    param_1[3] = uStack_168;
    param_1[2] = local_170;
    param_1[5] = uStack_158;
    param_1[4] = local_160;
    param_1[6] = local_150;
    param_1[1] = uStack_178;
    *param_1 = 0x800000000000001e;
    return;
  }
  puStack_138 = (undefined *)0x1;
  local_140 = (undefined1 *)0x1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined8 *)FUN_004b25a4(0x100,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 008630e4 to 008630f3 has its CatchHandler @ 00863104 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x100);
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = puVar6;
  puVar6[0x19] = uStack_78;
  puVar6[0x18] = local_80;
  puVar6[0x1b] = uStack_68;
  puVar6[0x1a] = local_70;
  puVar6[0x1d] = uStack_58;
  puVar6[0x1c] = local_60;
  puVar6[0x1f] = uStack_48;
  puVar6[0x1e] = local_50;
  puVar6[0x11] = uStack_b8;
  puVar6[0x10] = local_c0;
  puVar6[0x13] = uStack_a8;
  puVar6[0x12] = uStack_b0;
  puVar6[0x15] = uStack_98;
  puVar6[0x14] = local_a0;
  puVar6[0x17] = uStack_88;
  puVar6[0x16] = uStack_90;
  puVar6[9] = local_f8;
  puVar6[8] = uStack_100;
  puVar6[0xb] = uStack_e8;
  puVar6[10] = local_f0;
  puVar6[0xd] = uStack_d8;
  puVar6[0xc] = local_e0;
  puVar6[0xf] = uStack_c8;
  puVar6[0xe] = local_d0;
  puVar6[1] = puStack_138;
  *puVar6 = local_140;
  puVar6[3] = local_128;
  puVar6[2] = local_130;
  puVar6[5] = local_118;
  puVar6[4] = uStack_120;
  puVar6[7] = local_108;
  puVar6[6] = uStack_110;
  return;
}


// ===== 00863118  <rustls::conn::connection::[1]::rustls::conn::connection::Reader>::into_first_chunk =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::[1]::rustls::conn::connection::Reader>::into_first_chunk */

void __rustcall
<rustls::conn::connection::[1]::rustls::conn::connection::Reader>::into_first_chunk
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*(long *)(lVar3 + 0x28) != 0) {
    uVar1 = *(ulong *)(lVar3 + 0x30);
    uVar2 = 0;
    if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(lVar3 + 0x20)) {
      uVar2 = *(ulong *)(lVar3 + 0x10);
    }
    lVar3 = *(long *)(lVar3 + 0x18) + (*(ulong *)(lVar3 + 0x20) - uVar2) * 0x18;
    uVar2 = *(ulong *)(lVar3 + 0x10);
    if (uVar1 <= uVar2) {
      *param_1 = *(long *)(lVar3 + 8) + uVar1;
      param_1[1] = uVar2 - uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00ae82d8);
  }
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  if ((*(byte *)((long)param_2 + 9) & 1) != 0) {
    lVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x25,&DAT_002fef2e,0x88);
    *param_1 = 0;
    param_1[1] = lVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xd00000003;
  return;
}


// ===== 008631e8  <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::keys_match =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::keys_match */

void __rustcall
<rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::keys_match
          (undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *__s1;
  size_t __n;
  int iVar3;
  undefined8 uVar4;
  long local_308;
  void *local_300;
  size_t sStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  void *local_210;
  size_t sStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  void *local_190;
  size_t sStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_158;
  void *local_150;
  size_t sStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  (**(code **)(*(long *)(param_2 + 0x38) + 0x28))
            (&local_158,
             *(long *)(param_2 + 0x30) +
             (*(long *)(*(long *)(param_2 + 0x38) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  __n = sStack_148;
  __s1 = local_150;
  lVar1 = local_158;
  if (local_158 == -2) {
    *param_1 = 0x8000000000000025;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = 0x8000000000000015;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    local_158 = -0x7fffffffffffffeb;
                    /* try { // try from 00863274 to 008632a7 has its CatchHandler @ 00863478 */
    FUN_00861ed4(&local_158);
    <webpki::end_entity::EndEntityCert_as_core::convert::TryFrom<&rustls_pki_types::CertificateDer>>
    ::try_from(&local_158,uVar4);
    lVar2 = local_158;
    if (local_158 != -2) {
      local_308 = local_158;
      sStack_188 = sStack_148;
      local_190 = local_150;
      uStack_178 = uStack_138;
      local_180 = local_140;
      uStack_168 = uStack_128;
      local_170 = local_130;
      uStack_240 = uStack_90;
      local_248 = local_98;
      uStack_230 = uStack_80;
      local_238 = local_88;
      uStack_280 = uStack_d0;
      local_288 = local_d8;
      uStack_220 = uStack_70;
      local_228 = local_78;
      uStack_250 = uStack_a0;
      local_258 = local_a8;
      uStack_270 = uStack_c0;
      local_278 = local_c8;
      uStack_260 = uStack_b0;
      local_268 = local_b8;
      local_160 = local_120;
      uStack_2b0 = uStack_100;
      local_2b8 = local_108;
      uStack_2c0 = uStack_110;
      local_2c8 = local_118;
      uStack_2a0 = uStack_f0;
      local_2a8 = local_f8;
      local_218 = local_68;
      uStack_290 = uStack_e0;
      local_298 = local_e8;
      uStack_1a8 = uStack_128;
      local_1b0 = local_130;
      sStack_208 = sStack_148;
      local_210 = local_150;
      uStack_1f8 = uStack_138;
      uStack_200 = local_140;
      uStack_1e8 = uStack_128;
      local_1f0 = local_130;
      local_1e0 = local_120;
      sStack_2f8 = sStack_148;
      local_300 = local_150;
      uStack_2e8 = uStack_138;
      uStack_2f0 = local_140;
      local_2d0 = local_120;
      uStack_2d8 = uStack_128;
      local_2e0 = local_130;
                    /* try { // try from 0086339c to 008633a7 has its CatchHandler @ 00863458 */
      <webpki::cert::webpki::cert::Cert>::subject_public_key_info(&local_158,&local_308);
      if ((__n == sStack_148) && (iVar3 = memcmp(__s1,local_150,__n), iVar3 == 0)) {
        *param_1 = 0xffffffffffffffff;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0x8000000000000025;
      }
      if ((lVar2 != -1) && (lVar2 != 0)) {
        free(local_300);
      }
      if (0 < lVar1) {
        free(__s1);
      }
      if (local_158 == -1) {
        return;
      }
      if (local_158 == 0) {
        return;
      }
      goto LAB_0086341c;
    }
    FUN_00842dbc(&local_190,&local_150);
    param_1[1] = sStack_188;
    *param_1 = local_190;
    param_1[3] = uStack_178;
    param_1[2] = local_180;
    param_1[5] = uStack_168;
    param_1[4] = local_170;
    param_1[6] = local_160;
    local_210 = local_190;
    sStack_208 = sStack_188;
    uStack_200 = local_180;
    uStack_1f8 = uStack_178;
    local_1f0 = local_170;
    uStack_1e8 = uStack_168;
    local_1e0 = local_160;
    local_1b0 = local_170;
    uStack_1a8 = uStack_168;
  }
  local_150 = __s1;
  if (lVar1 < 1) {
    return;
  }
LAB_0086341c:
  free(local_150);
  return;
}


// ===== 0086349c  <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::end_entity_cert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::end_entity_cert */

void __rustcall
<rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::end_entity_cert
          (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    local_48 = 0x8000000000000015;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar1;
    FUN_00861ed4(&local_48);
    return;
  }
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[5] = uStack_20;
  param_1[4] = local_28;
  param_1[6] = local_18;
  param_1[1] = uStack_40;
  *param_1 = 0x8000000000000015;
  return;
}


// ===== 00863508  <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::from_der =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::from_der */

void __rustcall
<rustls::crypto::signer::[1]::rustls::crypto::signer::CertifiedKey>::from_der
          (long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  void *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long local_68;
  byte bStack_60;
  undefined7 uStack_5f;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
                    /* try { // try from 0086352c to 00863533 has its CatchHandler @ 008636bc */
  (**(code **)(*(long *)(param_4 + 0x68) + 0x20))(&local_b0,*(undefined8 *)(param_4 + 0x60));
  if (local_b0 != -1) {
    __ptr = (void *)param_2[1];
    lVar2 = param_2[2];
    param_1[2] = lStack_a8;
    param_1[3] = local_a0;
    *param_1 = -1;
    param_1[1] = local_b0;
    param_1[5] = lStack_90;
    param_1[4] = local_98;
    param_1[7] = lStack_80;
    param_1[6] = local_88;
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar1[-1] != -1) && (puVar1[-1] != 0)) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 3;
      } while (lVar2 != 0);
    }
    if (*param_2 != 0) {
      free(__ptr);
    }
    return;
  }
  local_b0 = *param_2;
  lStack_80 = lStack_a8;
  lStack_78 = local_a0;
  local_98 = -1;
                    /* try { // try from 008635e0 to 008635eb has its CatchHandler @ 008636a8 */
  lStack_a8 = param_2[1];
  local_a0 = param_2[2];
  keys_match(&local_68,&local_b0);
  if (local_68 != -1) {
    if ((local_68 == -0x7fffffffffffffdb) && ((bStack_60 & 1) != 0)) {
      param_1[1] = lStack_a8;
      *param_1 = local_b0;
      param_1[3] = local_98;
      param_1[2] = local_a0;
      param_1[5] = local_88;
      param_1[4] = lStack_90;
      param_1[7] = lStack_78;
      param_1[6] = lStack_80;
      FUN_00861ed4(&local_68);
      return;
    }
    param_1[2] = CONCAT71(uStack_5f,bStack_60);
    param_1[1] = local_68;
    param_1[4] = lStack_50;
    param_1[3] = local_58;
    param_1[6] = lStack_40;
    param_1[5] = local_48;
    param_1[7] = local_38;
    *param_1 = -1;
    FUN_00862298(&local_b0);
    return;
  }
  param_1[1] = lStack_a8;
  *param_1 = local_b0;
  param_1[3] = local_98;
  param_1[2] = local_a0;
  param_1[5] = local_88;
  param_1[4] = lStack_90;
  param_1[7] = lStack_78;
  param_1[6] = lStack_80;
  return;
}


// ===== 008636d0  FUN_008636d0 =====

void FUN_008636d0(undefined8 *param_1,long *param_2,short param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_178;
  void *local_170;
  undefined8 uStack_168;
  long local_160;
  void *local_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_51;
  
  if (*param_2 == 0) {
LAB_0086394c:
    param_3 = -1;
  }
  else {
    if (*param_2 == 1) {
      if (param_3 == 3) {
        ppuVar2 = (undefined **)&UNK_00ae7d00;
      }
      else {
        if (param_3 != 5) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic
                    (&DAT_002fefb6,0x28,&PTR_s__root__cargo_registry_src_index__00ae7d20,param_2[3])
          ;
        }
        ppuVar2 = &PTR_DAT_00ae7d10;
      }
      FUN_0085dd78(&local_178,4,param_2[2],param_2[3],1,0);
                    /* try { // try from 008637dc to 008637eb has its CatchHandler @ 008639b0 */
      FUN_0085dd78(&local_160,0x30,*ppuVar2,ppuVar2[1],local_170,uStack_168);
                    /* try { // try from 008637f0 to 0086380b has its CatchHandler @ 00863994 */
      <ring::ec::suite_b::ecdsa::signing::[1]::ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>::
      from_pkcs8(&local_148,param_4,local_158,uStack_150,&uStack_51,&DAT_00ae7d38);
      if (local_148 == 0) {
        if (local_160 != 0) {
          free(local_158);
        }
        if (local_178 != 0) {
          free(local_170);
        }
        goto LAB_0086394c;
      }
      uStack_198 = uStack_78;
      local_1a0 = local_80;
      uStack_188 = uStack_68;
      local_190 = local_70;
      local_180 = local_60;
      uStack_1d8 = uStack_b8;
      local_1e0 = local_c0;
      uStack_1c8 = uStack_a8;
      local_1d0 = local_b0;
      uStack_1b8 = uStack_98;
      local_1c0 = local_a0;
      uStack_1a8 = uStack_88;
      local_1b0 = local_90;
      uStack_218 = uStack_f8;
      local_220 = local_100;
      uStack_208 = uStack_e8;
      local_210 = local_f0;
      uStack_1f8 = uStack_d8;
      local_200 = local_e0;
      uStack_1e8 = uStack_c8;
      local_1f0 = local_d0;
      uStack_258 = uStack_138;
      local_260 = local_140;
      uStack_248 = uStack_128;
      local_250 = local_130;
      uStack_238 = uStack_118;
      local_240 = local_120;
      uStack_228 = uStack_108;
      local_230 = local_110;
      if (local_160 != 0) {
        free(local_158);
      }
      if (local_178 != 0) {
        free(local_170);
      }
    }
    else {
      <ring::ec::suite_b::ecdsa::signing::[1]::ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>::
      from_pkcs8(&local_148,param_4,param_2[2],param_2[3],&uStack_51,&DAT_00ae7d38);
      if (local_148 == 0) goto LAB_0086394c;
      uStack_198 = uStack_78;
      local_1a0 = local_80;
      uStack_188 = uStack_68;
      local_190 = local_70;
      local_180 = local_60;
      uStack_1d8 = uStack_b8;
      local_1e0 = local_c0;
      uStack_1c8 = uStack_a8;
      local_1d0 = local_b0;
      uStack_1b8 = uStack_98;
      local_1c0 = local_a0;
      uStack_1a8 = uStack_88;
      local_1b0 = local_90;
      uStack_218 = uStack_f8;
      local_220 = local_100;
      uStack_208 = uStack_e8;
      local_210 = local_f0;
      uStack_1f8 = uStack_d8;
      local_200 = local_e0;
      uStack_1e8 = uStack_c8;
      local_1f0 = local_d0;
      uStack_258 = uStack_138;
      local_260 = local_140;
      uStack_248 = uStack_128;
      local_250 = local_130;
      uStack_238 = uStack_118;
      local_240 = local_120;
      uStack_228 = uStack_108;
      local_230 = local_110;
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x100,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x100);
    }
    puVar1[2] = local_148;
    *param_1 = puVar1;
    puVar1[0x1c] = uStack_198;
    puVar1[0x1b] = local_1a0;
    puVar1[0x1e] = uStack_188;
    puVar1[0x1d] = local_190;
    puVar1[0x1a] = uStack_1a8;
    puVar1[0x19] = local_1b0;
    puVar1[0x12] = uStack_1e8;
    puVar1[0x11] = local_1f0;
    puVar1[0x14] = uStack_1d8;
    puVar1[0x13] = local_1e0;
    puVar1[1] = 1;
    *puVar1 = 1;
    puVar1[0x16] = uStack_1c8;
    puVar1[0x15] = local_1d0;
    puVar1[0x18] = uStack_1b8;
    puVar1[0x17] = local_1c0;
    puVar1[0x1f] = local_180;
    puVar1[10] = uStack_228;
    puVar1[9] = local_230;
    puVar1[0xc] = uStack_218;
    puVar1[0xb] = local_220;
    puVar1[0x10] = uStack_1f8;
    puVar1[0xf] = local_200;
    puVar1[0xe] = uStack_208;
    puVar1[0xd] = local_210;
    puVar1[4] = uStack_258;
    puVar1[3] = local_260;
    puVar1[6] = uStack_248;
    puVar1[5] = local_250;
    puVar1[8] = uStack_238;
    puVar1[7] = local_240;
  }
  *(short *)(param_1 + 1) = param_3;
  return;
}


// ===== 008639d0  <rustls::msgs::codec::[6]::rustls::msgs::codec::LengthPrefixedBuffer>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::[6]::rustls::msgs::codec::LengthPrefixedBuffer>::new */

void __rustcall
<rustls::msgs::codec::[6]::rustls::msgs::codec::LengthPrefixedBuffer>::new
          (undefined8 *param_1,byte *param_2,long *param_3)

{
  size_t __n;
  byte bVar1;
  undefined *__src;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = param_3[2];
  bVar1 = *param_2 - 0x15;
  if (*param_2 < 0x15) {
    bVar1 = 2;
  }
  uVar2 = (ulong)bVar1;
  __src = (&PTR_DAT_00ae8048)[uVar2];
  __n = uVar2 + 1;
  lVar4 = lVar3;
  if ((ulong)(*param_3 - lVar3) <= uVar2) {
    FUN_00874c84(param_3,lVar3,__n,1,1);
    lVar4 = param_3[2];
  }
  memcpy((void *)(param_3[1] + lVar4),__src,__n);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  param_3[2] = lVar4 + __n;
  param_1[4] = param_3;
  param_1[5] = lVar3;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  return;
}


// ===== 00863a90  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<dyn Trait<Assoc = X> +
   rustls::server::server_conn::StoresServerSessions>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  __ptr = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = puVar2[2];
  if ((code *)*puVar2 != (code *)0x0) {
                    /* try { // try from 00863abc to 00863ac3 has its CatchHandler @ 00863b30 */
    (*(code *)*puVar2)((long)__ptr + (uVar6 - 1 & 0xfffffffffffffff0) + 0x10);
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if ((uVar6 + puVar2[1] + 0xf & -uVar6) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 00863b48  <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if (*(long *)((long)__ptr + 0x28) != 0) {
    free(*(void **)((long)__ptr + 0x30));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00863bd0  <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
          (undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  void *__ptr;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
    uVar9 = *(ulong *)((long)__ptr + 0x40);
    if (uVar9 != 0) {
      lVar8 = *(long *)((long)__ptr + 0x30);
      uVar6 = *(ulong *)((long)__ptr + 0x28);
      uVar4 = 0;
      if (uVar6 <= *(ulong *)((long)__ptr + 0x38)) {
        uVar4 = uVar6;
      }
      uVar4 = *(ulong *)((long)__ptr + 0x38) - uVar4;
      uVar11 = uVar6 - uVar4;
      lVar1 = 0;
      if (uVar11 <= uVar9) {
        lVar1 = uVar9 - uVar11;
      }
      if (uVar9 <= uVar11) {
        uVar6 = uVar4 + uVar9;
      }
      if (uVar6 != uVar4) {
        lVar10 = 0;
        do {
          lVar7 = lVar10 * 8;
          lVar10 = lVar10 + 1;
          plVar5 = *(long **)(lVar8 + uVar4 * 8 + lVar7);
          do {
            lVar7 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow
                      ();
          }
        } while (lVar10 != uVar6 - uVar4);
      }
      if (uVar11 < uVar9) {
        lVar10 = 0;
        do {
          lVar7 = lVar10 * 8;
          lVar10 = lVar10 + 1;
          plVar5 = *(long **)(lVar8 + lVar7);
          do {
            lVar7 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow
                      ();
          }
        } while (lVar10 != lVar1);
      }
    }
    if (*(long *)((long)__ptr + 0x28) != 0) {
      free(*(void **)((long)__ptr + 0x30));
    }
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar5 = (long *)((long)__ptr + 8);
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00863d2c  <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCacheEntry>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if ((*(long *)((long)__ptr + 0x28) != -1) && (*(long *)((long)__ptr + 0x28) != 0)) {
    free(*(void **)((long)__ptr + 0x30));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00863db4  <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::base::PayloadU16>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00863e20  <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::handshake::CertificateChain>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::handshake::CertificateChain>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::msgs::handshake::CertificateChain>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  undefined8 *puVar5;
  
  __ptr = (void *)*param_1;
  lVar4 = *(long *)((long)__ptr + 0x20);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)((long)__ptr + 0x18) + 8);
    do {
      if ((puVar5[-1] != -1) && (puVar5[-1] != 0)) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00863ee0  <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  undefined8 *puVar5;
  
  __ptr = (void *)*param_1;
  lVar4 = *(long *)((long)__ptr + 0x30);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)((long)__ptr + 0x28) + 8);
    do {
      if (puVar5[-1] != 0) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)((long)__ptr + 0x20) != 0) {
    free(*(void **)((long)__ptr + 0x28));
  }
  plVar3 = *(long **)((long)__ptr + 0xe8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00863f68 to 00863f6b has its CatchHandler @ 008640ec */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0x100);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00863f88 to 00863f8f has its CatchHandler @ 008640e4 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((long)__ptr + 0x100);
  }
  plVar3 = *(long **)((long)__ptr + 0x110);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00863fac to 00863fb3 has its CatchHandler @ 008640dc */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((long)__ptr + 0x110);
  }
  plVar3 = *(long **)((long)__ptr + 0x120);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00863fd0 to 00863fd7 has its CatchHandler @ 008640d4 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((long)__ptr + 0x120);
  }
  plVar3 = *(long **)((long)__ptr + 0x130);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow
              ((long)__ptr + 0x130);
  }
  plVar3 = *(long **)((long)__ptr + 0x138);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00864018 to 0086401f has its CatchHandler @ 008640cc */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((long)__ptr + 0x138);
  }
  if (*(long *)((long)__ptr + 0x38) != 0) {
    free(*(void **)((long)__ptr + 0x40));
  }
  if (*(long *)((long)__ptr + 0x50) != 0) {
    free(*(void **)((long)__ptr + 0x58));
  }
  plVar3 = *(long **)((long)__ptr + 0x148);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
              ((long)__ptr + 0x148);
  }
  FUN_00861c20((long)__ptr + 0x68);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00864240  <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::signer::CertifiedKey>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::signer::CertifiedKey>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::signer::CertifiedKey>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
                    /* try { // try from 00864250 to 00864257 has its CatchHandler @ 008642a0 */
  FUN_00862298((long)__ptr + 0x10);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008642e0  <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::server::server_conn::ServerConfig>>::drop_slow
          (undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  undefined8 *puVar5;
  
  __ptr = (void *)*param_1;
  plVar3 = *(long **)((long)__ptr + 0x68);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0x70);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00864338 to 0086433b has its CatchHandler @ 00864510 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0x80);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0086435c to 0086435f has its CatchHandler @ 00864508 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0x90);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00864380 to 00864383 has its CatchHandler @ 00864500 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  lVar4 = *(long *)((long)__ptr + 0x30);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)((long)__ptr + 0x28) + 8);
    do {
      if (puVar5[-1] != 0) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)((long)__ptr + 0x20) != 0) {
    free(*(void **)((long)__ptr + 0x28));
  }
  plVar3 = *(long **)((long)__ptr + 0xa0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 008643f8 to 008643fb has its CatchHandler @ 008644f8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0xb0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0086441c to 0086441f has its CatchHandler @ 008644f0 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)((long)__ptr + 0xc0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00864440 to 00864443 has its CatchHandler @ 008644e8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  if (*(long *)((long)__ptr + 0x38) != 0) {
    free(*(void **)((long)__ptr + 0x40));
  }
  plVar3 = *(long **)((long)__ptr + 0xd0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow();
  }
  if (*(long *)((long)__ptr + 0x50) != 0) {
    free(*(void **)((long)__ptr + 0x58));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar3 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0086467c  <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  undefined8 *puVar5;
  
  __ptr = (void *)*param_1;
  lVar4 = *(long *)((long)__ptr + 0x20);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)((long)__ptr + 0x18) + 0x20);
    do {
      if ((puVar5[-4] != -1) && (puVar5[-4] != 0)) {
        free((void *)puVar5[-3]);
      }
      if ((puVar5[-1] != -1) && (puVar5[-1] != 0)) {
        free((void *)*puVar5);
      }
      if (((ulong)puVar5[2] < 0xfffffffffffffffe) && (puVar5[2] != 0)) {
        free((void *)puVar5[3]);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 9;
    } while (lVar4 != 0);
  }
  if (*(long *)((long)__ptr + 0x10) != 0) {
    free(*(void **)((long)__ptr + 0x18));
  }
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00864774  <alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<ring::rsa::keypair::KeyPair>>::drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  FUN_00862390((long)__ptr + 0x10);
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 008647d4  <alloc::sync::[n]::alloc::sync::Arc<ring::ec::curve25519::ed25519::signing::Ed25519KeyPair>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<ring::ec::curve25519::ed25519::signing::Ed25519KeyPair>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<ring::ec::curve25519::ed25519::signing::Ed25519KeyPair>>::
drop_slow(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0086480c  <alloc::sync::[n]::alloc::sync::Arc<ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>>::drop_slow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::sync::[n]::alloc::sync::Arc<ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>>::drop_slow
    */

void __rustcall
<alloc::sync::[n]::alloc::sync::Arc<ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>>::drop_slow
          (undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  void *__ptr;
  long lVar4;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00864844  rustls::msgs::codec::put_u16 =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::msgs::codec::put_u16 */

void __rustcall rustls::msgs::codec::put_u16(uint param_1,ushort *param_2,ulong param_3)

{
  if (1 < param_3) {
    *param_2 = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,2,param_3,&PTR_s__root__cargo_registry_src_index__00ae7d90)
  ;
}


// ===== 00864878  rustls::msgs::codec::put_u64 =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::msgs::codec::put_u64 */

void __rustcall rustls::msgs::codec::put_u64(ulong param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  if (7 < param_3) {
    uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *param_2 = uVar1 >> 0x20 | uVar1 << 0x20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,8,param_3,&PTR_s__root__cargo_registry_src_index__00ae7da8)
  ;
}


// ===== 008648a8  rustls::crypto::ring::sign::any_ecdsa_type =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* rustls::crypto::ring::sign::any_ecdsa_type */

void __rustcall rustls::crypto::ring::sign::any_ecdsa_type(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 local_50;
  short sStack_48;
  undefined6 uStack_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_008636d0(&local_50,param_2,3,PTR_ECDSA_P256_SHA256_ASN1_SIGNING_00b00fe8);
  if (sStack_48 == -1) {
    FUN_008636d0(&local_50,param_2,5,PTR_ECDSA_P384_SHA384_ASN1_SIGNING_00b00ff0);
    if (sStack_48 == -1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pcVar8 = (char *)FUN_004b25a4(0x33,1);
      uVar4 = s_ECDSA_private_ke_002ff035._8_8_;
      uVar3 = s_ECDSA_private_ke_002ff035._0_8_;
      uVar2 = s_failed_to_parse_002ff025._8_8_;
      uVar1 = s_failed_to_parse_002ff025._0_8_;
      if (pcVar8 != (char *)0x0) {
        pcVar8[0x2f] = 'S';
        uVar6 = s_y_as_PKCS_8_or_SEC1_002ff045._8_8_;
        uVar5 = s_y_as_PKCS_8_or_SEC1_002ff045._0_8_;
        pcVar8[0x30] = 'E';
        pcVar8[0x31] = 'C';
        pcVar8[0x32] = '1';
        *(undefined8 *)(pcVar8 + 8) = uVar2;
        *(undefined8 *)pcVar8 = uVar1;
        *(undefined8 *)(pcVar8 + 0x18) = uVar4;
        *(undefined8 *)(pcVar8 + 0x10) = uVar3;
        uVar2 = _UNK_0029fe38;
        uVar1 = _DAT_0029fe30;
        *(undefined8 *)(pcVar8 + 0x28) = uVar6;
        *(undefined8 *)(pcVar8 + 0x20) = uVar5;
        param_1[1] = uVar2;
        *param_1 = uVar1;
        param_1[2] = pcVar8;
        param_1[3] = 0x33;
        return;
      }
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,0x33);
    }
    uStack_28 = CONCAT62(uStack_46,sStack_48);
    uStack_38 = 1;
    local_40 = 1;
    uStack_30 = local_50;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar7 = (undefined8 *)FUN_004b25a4(0x20,8);
    if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 008649f0 to 00864a03 has its CatchHandler @ 00864a14 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(&local_40,8,0x20);
    }
  }
  else {
    uStack_28 = CONCAT62(uStack_46,sStack_48);
    uStack_38 = 1;
    local_40 = 1;
    uStack_30 = local_50;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar7 = (undefined8 *)FUN_004b25a4(0x20,8);
    if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 00864908 to 0086491b has its CatchHandler @ 00864a2c */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(&local_40,8,0x20);
    }
  }
  param_1[1] = puVar7;
  param_1[2] = &PTR_FUN_00ae7dc0;
  puVar7[1] = uStack_38;
  *puVar7 = local_40;
  puVar7[3] = uStack_28;
  puVar7[2] = uStack_30;
  *param_1 = 0xffffffffffffffff;
  return;
}


// ===== 00864a5c  rustls::crypto::ring::sign::any_eddsa_type =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustls::crypto::ring::sign::any_eddsa_type */

void __rustcall rustls::crypto::ring::sign::any_eddsa_type(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *local_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 local_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 local_8f;
  undefined8 uStack_87;
  undefined8 local_7f;
  undefined8 uStack_77;
  undefined8 local_6f;
  undefined8 uStack_67;
  undefined8 local_5f;
  undefined8 uStack_57;
  undefined8 local_40 [2];
  undefined8 *local_30;
  undefined *puStack_28;
  
  <ring::ec::curve25519::ed25519::signing::ring::ec::curve25519::ed25519::signing::Ed25519KeyPair>::
  from_pkcs8_maybe_unchecked(&local_b0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10))
  ;
  if ((local_b0 & 1) != 0) {
    local_30 = local_40;
    puStack_28 = PTR_fmt_00b00fe0;
    alloc::fmt::format::format_inner(&local_e0,&DAT_002b4455,&local_30);
    param_1[4] = uStack_c8;
    param_1[3] = uStack_d0;
    param_1[6] = uStack_b8;
    param_1[5] = local_c0;
    param_1[2] = CONCAT62(uStack_d6,uStack_d8);
    param_1[1] = local_e0;
    *param_1 = 0x800000000000001e;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  local_e0 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (local_e0 != (undefined8 *)0x0) {
    local_e0[9] = uStack_77;
    local_e0[8] = local_7f;
    local_e0[0xb] = uStack_67;
    local_e0[10] = local_6f;
    uStack_d8 = 0xb;
    local_e0[0xd] = uStack_57;
    local_e0[0xc] = local_5f;
    puStack_28 = (undefined *)CONCAT62(uStack_d6,0xb);
    local_e0[1] = 1;
    *local_e0 = 1;
    local_e0[3] = CONCAT17(uStack_a0,uStack_a7);
    local_e0[2] = CONCAT17(uStack_a8,uStack_af);
    local_e0[5] = CONCAT17(uStack_90,uStack_97);
    local_e0[4] = CONCAT17(uStack_98,local_9f);
    local_e0[7] = uStack_87;
    local_e0[6] = local_8f;
    uStack_a8 = 1;
    uStack_a7 = 0;
    local_b0 = 1;
    uStack_af = 0;
    uStack_98 = 0xb;
    uStack_97 = (undefined7)((ulong)puStack_28 >> 8);
    uStack_a0 = SUB81(local_e0,0);
    local_9f = (undefined7)((ulong)local_e0 >> 8);
    local_30 = local_e0;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x20,8);
    if (puVar1 != (undefined8 *)0x0) {
      param_1[1] = puVar1;
      param_1[2] = &PTR_FUN_00ae7df8;
      puVar1[1] = CONCAT71(uStack_a7,uStack_a8);
      *puVar1 = CONCAT71(uStack_af,local_b0);
      puVar1[3] = CONCAT71(uStack_97,uStack_98);
      puVar1[2] = CONCAT71(local_9f,uStack_a0);
      *param_1 = 0xffffffffffffffff;
      return;
    }
                    /* try { // try from 00864b9c to 00864bab has its CatchHandler @ 00864bb0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 00864be0  rustls::crypto::ring::sign::any_supported_type =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* rustls::crypto::ring::sign::any_supported_type */

void __rustcall rustls::crypto::ring::sign::any_supported_type(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long local_88;
  long local_80;
  long lStack_78;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  <rustls::crypto::ring::sign::rustls::crypto::ring::sign::RsaSigningKey>::new(&local_88);
  if (local_88 == -1) {
    local_40 = local_80;
    uStack_48 = 1;
    local_50 = 1;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar9 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[2] = local_40;
      param_1[1] = (long)puVar9;
      param_1[2] = (long)&PTR_FUN_00ae7e30;
      puVar9[1] = uStack_48;
      *puVar9 = local_50;
      *param_1 = -1;
      return;
    }
                    /* try { // try from 00864d44 to 00864d53 has its CatchHandler @ 00864d64 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  FUN_00861ed4(&local_88);
  any_ecdsa_type(&local_88,param_2);
  if (local_88 != -1) {
    FUN_00861ed4(&local_88);
    if (*param_2 == 2) {
      any_eddsa_type(&local_88,param_2 + 1);
      if (local_88 == -1) goto LAB_00864d24;
      FUN_00861ed4(&local_88);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar9 = (undefined8 *)FUN_004b25a4(0x33,1);
    uVar6 = _UNK_002ff088;
    uVar5 = _DAT_002ff080;
    uVar4 = _UNK_002ff078;
    uVar3 = _DAT_002ff070;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar9 + 0x2f) = 0x41534464;
      uVar8 = _UNK_002ff098;
      uVar7 = _DAT_002ff090;
      puVar9[1] = uVar4;
      *puVar9 = uVar3;
      puVar9[3] = uVar6;
      puVar9[2] = uVar5;
      lVar2 = _UNK_0029fe38;
      lVar1 = _DAT_0029fe30;
      puVar9[5] = uVar8;
      puVar9[4] = uVar7;
      param_1[1] = lVar2;
      *param_1 = lVar1;
      param_1[2] = (long)puVar9;
      param_1[3] = 0x33;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x33);
  }
LAB_00864d24:
  param_1[2] = lStack_78;
  param_1[1] = local_80;
  *param_1 = local_88;
  return;
}


// ===== 00864da8  FUN_00864da8 =====

undefined8 FUN_00864da8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = getrandom::imp::getrandom_inner(param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


// ===== 00864dd8  <rustls::crypto::signer::SingleCertAndKey_as_core::convert::From<rustls::crypto::signer::CertifiedKey>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::signer::SingleCertAndKey as
   core::convert::From<rustls::crypto::signer::CertifiedKey>>::from */

void __rustcall
<rustls::crypto::signer::SingleCertAndKey_as_core::convert::From<rustls::crypto::signer::CertifiedKey>>
::from(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = param_1[3];
  uVar2 = param_1[2];
  uVar7 = param_1[5];
  uVar6 = param_1[4];
  uVar9 = param_1[7];
  uVar8 = param_1[6];
  uVar5 = param_1[1];
  uVar3 = *param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x50,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = uVar5;
    puVar1[2] = uVar3;
    puVar1[5] = uVar4;
    puVar1[4] = uVar2;
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    puVar1[9] = uVar9;
    puVar1[8] = uVar8;
    puVar1[1] = 1;
    *puVar1 = 1;
    return;
  }
                    /* try { // try from 00864e44 to 00864e53 has its CatchHandler @ 00864e58 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x50);
}


// ===== 00864e70  <u16_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as rustls::msgs::codec::Codec>::read */

void __rustcall <u16_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 2) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002ff0a3;
    *(undefined8 *)(param_1 + 0x10) = 3;
    return;
  }
  param_2[2] = uVar1 + 2;
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 + 2 <= (ulong)param_2[1])) {
    lVar2 = *param_2;
    *param_1 = 0xff;
    *(ushort *)(param_1 + 2) =
         *(ushort *)(lVar2 + uVar1) >> 8 | (ushort)((*(ushort *)(lVar2 + uVar1) & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00864eec  <u16_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u16 as rustls::msgs::codec::Codec>::encode */

void __rustcall <u16_as_rustls::msgs::codec::Codec>::encode(ushort *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = param_2[2];
  uVar1 = *param_1;
  if ((ulong)(*param_2 - lVar2) < 2) {
    FUN_00874c84(param_2,lVar2,2,1,1);
    lVar2 = param_2[2];
  }
  *(ushort *)(param_2[1] + lVar2) = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
  param_2[2] = lVar2 + 2;
  return;
}


// ===== 00864f58  <rustls::crypto::ring::sign::RsaSigningKey_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::RsaSigningKey as core::fmt::Debug>::fmt */

void __rustcall
<rustls::crypto::ring::sign::RsaSigningKey_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [20];
  undefined1 local_14 [4];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_28,param_2,&DAT_002ff0a6,0xd);
  local_14[0] = 1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_28,&DAT_002ff0b3,9,local_14,&DAT_00ae7e68);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00864fb4  <rustls::msgs::fragmenter::Chunker_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::fragmenter::Chunker as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<rustls::msgs::fragmenter::Chunker_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  lVar3 = *param_2;
  uVar6 = uVar4;
  if (lVar3 != 0) {
    uVar6 = uVar2 - uVar4;
  }
  if (uVar6 == 0) {
    *param_1 = 0;
    return;
  }
  uVar6 = param_2[4];
  if (lVar3 == 0) {
    lVar5 = param_2[1];
    uVar1 = uVar4;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    uVar7 = uVar4 - uVar1;
    uVar4 = uVar1;
    lVar8 = lVar5 + uVar1;
  }
  else {
    lVar5 = param_2[1];
    uVar7 = uVar2;
    lVar8 = lVar5;
    if (uVar6 + uVar4 <= uVar2) {
      uVar7 = uVar6 + uVar4;
    }
  }
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  param_1[3] = uVar4;
  param_1[4] = uVar7;
  param_2[1] = lVar8;
  param_2[2] = uVar7;
  param_2[3] = uVar2;
  *param_1 = 1;
  return;
}


// ===== 00865028  FUN_00865028 =====

void FUN_00865028(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = ((long *)*param_1)[1];
                    /* WARNING: Could not recover jumptable at 0x00865044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))
            (*(long *)*param_1 + (*(long *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 00865048  FUN_00865048 =====

void FUN_00865048(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *(long *)*param_1;
  local_18 = lVar1 + 0x28;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_002ff0f7,0xc,&DAT_002bd118,4,lVar1 + 0x10,&PTR_FUN_00ae7f08,&DAT_002ff103,
             3,lVar1 + 0x40,&PTR_FUN_00ae7f28,&DAT_002bd11c,4,&local_18,&DAT_00ae7f48);
  return;
}


// ===== 008650e0  FUN_008650e0 =====

void FUN_008650e0(undefined8 *param_1)

{
  <ring::digest::Algorithm_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 008650e8  FUN_008650e8 =====

void FUN_008650e8(undefined8 *param_1)

{
  <ring::digest::Algorithm_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1);
  return;
}


// ===== 008650f4  <rustls::conn::connection::Reader_as_alloc::io::read::Read>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Reader as alloc::io::read::Read>::read */

bool __rustcall
<rustls::conn::connection::Reader_as_alloc::io::read::Read>::read
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_0086fa1c(*param_1);
  if ((auVar3 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    bVar1 = false;
    if ((param_3 != 0) && (auVar3._8_8_ == 0)) {
      if ((*(byte *)(param_1 + 1) & 1) != 0) {
        return false;
      }
      if ((*(byte *)((long)param_1 + 9) & 1) != 0) {
        lVar2 = <alloc::io::error::core::io::error::Error>::new<&str>(0x25,&DAT_002fef2e,0x88);
        return lVar2 != 0;
      }
      return true;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 008651a0  <rustls::msgs::codec::u24_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::u24 as rustls::msgs::codec::Codec>::read */

void __rustcall
<rustls::msgs::codec::u24_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  uVar2 = param_2[2];
  if (param_2[1] - uVar2 < 3) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002ff0bc;
    *(undefined8 *)(param_1 + 0x10) = 3;
    return;
  }
  param_2[2] = uVar2 + 3;
  if ((uVar2 < 0xfffffffffffffffd) && (uVar2 + 3 <= (ulong)param_2[1])) {
    pbVar1 = (byte *)(*param_2 + uVar2);
    bVar3 = *pbVar1;
    bVar4 = pbVar1[1];
    bVar5 = pbVar1[2];
    *param_1 = 0xff;
    uVar6 = ((uint)bVar3 << 8 | (uint)bVar5 << 0x18) >> 8;
    *(uint *)(param_1 + 4) = (uVar6 | (uint)bVar4 << 0x18) >> 0x10 | uVar6 << 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00865230  <rustls::msgs::codec::u24_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::u24 as rustls::msgs::codec::Codec>::encode */

void __rustcall
<rustls::msgs::codec::u24_as_rustls::msgs::codec::Codec>::encode(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_2[2];
  uVar1 = *param_1;
  if ((ulong)(*param_2 - lVar3) < 3) {
    FUN_00874c84(param_2,lVar3,3,1,1);
    lVar3 = param_2[2];
  }
  uVar2 = uVar1 & 0xff00ff;
  lVar4 = param_2[1];
  *(char *)((ushort *)(lVar4 + lVar3) + 1) = (char)uVar2;
  *(ushort *)(lVar4 + lVar3) =
       (ushort)(byte)(uVar2 >> 0x10) | (ushort)((((uVar1 & 0xff00ff00) >> 8) << 0x10) >> 8);
  param_2[2] = lVar3 + 3;
  return;
}


// ===== 008652ac  <rustls::crypto::ring::sign::RsaSigner_as_rustls::crypto::signer::Signer>::sign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::RsaSigner as rustls::crypto::signer::Signer>::sign */

void __rustcall
<rustls::crypto::ring::sign::RsaSigner_as_rustls::crypto::signer::Signer>::sign
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *__ptr;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uStack_51;
  
  lVar8 = *param_2;
  uVar7 = *(ulong *)(lVar8 + 0xc0);
  uVar6 = uVar7 >> 3;
  if ((uVar7 & 7) != 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar7 == 0) {
    __ptr = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    __ptr = (undefined1 *)FUN_004b263c(uVar6,1);
    if (__ptr == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,uVar6);
    }
  }
                    /* try { // try from 00865314 to 00865337 has its CatchHandler @ 008653d4 */
  iVar4 = <ring::rsa::keypair::[2]::ring::rsa::keypair::KeyPair>::sign
                    (lVar8 + 0x10,param_2[1],param_2[2],&uStack_51,&DAT_00ae7d38,param_3,param_4,
                     __ptr,uVar6);
  if (iVar4 == 0) {
    param_1[2] = __ptr;
    param_1[3] = uVar6;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar6;
  }
  else {
    if (uVar7 != 0) {
      free(__ptr);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar5 = (undefined8 *)FUN_004b25a4(0xe,1);
    uVar3 = _UNK_002a0af8;
    uVar2 = _DAT_002a0af0;
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,0xe);
    }
    uVar1 = CONCAT62(_UNK_002feeee,DAT_002feee6._6_2_);
    *puVar5 = CONCAT26(DAT_002feee6._6_2_,(undefined6)DAT_002feee6);
    *(undefined8 *)((long)puVar5 + 6) = uVar1;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[2] = puVar5;
    param_1[3] = 0xe;
  }
  return;
}


// ===== 008653f4  FUN_008653f4 =====

undefined2 FUN_008653f4(long param_1)

{
  return *(undefined2 *)(param_1 + 0x18);
}


// ===== 00865404  FUN_00865404 =====

void FUN_00865404(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 8;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_002ff0bf,5,&DAT_002ff0c4,10,param_1,&DAT_00ae7e88,&DAT_002ff0ce,0x11,
             &local_18,&DAT_00ae7ea8);
  return;
}


// ===== 00865474  <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Reader as alloc::io::buf_read::BufRead>::consume */

void __rustcall
<rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume(undefined8 *param_1)

{
  FUN_0086f8ec(*param_1);
  return;
}


// ===== 0086547c  <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::fill_buf =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Reader as alloc::io::buf_read::BufRead>::fill_buf */

void __rustcall
<rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::fill_buf
          (long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (*(long *)(lVar3 + 0x28) != 0) {
    uVar1 = *(ulong *)(lVar3 + 0x30);
    uVar2 = 0;
    if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(lVar3 + 0x20)) {
      uVar2 = *(ulong *)(lVar3 + 0x10);
    }
    lVar3 = *(long *)(lVar3 + 0x18) + (*(ulong *)(lVar3 + 0x20) - uVar2) * 0x18;
    uVar2 = *(ulong *)(lVar3 + 0x10);
    if (uVar1 <= uVar2) {
      *param_1 = *(long *)(lVar3 + 8) + uVar1;
      param_1[1] = uVar2 - uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar1,uVar2,uVar2,&PTR_s__root__cargo_registry_src_index__00ae82d8);
  }
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  if (*(char *)((long)param_2 + 9) != '\0') {
    lVar3 = <alloc::io::error::core::io::error::Error>::new<&str>(0x25,&DAT_002fef2e,0x88);
    *param_1 = 0;
    param_1[1] = lVar3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xd00000003;
  return;
}


// ===== 0086554c  <u32_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as rustls::msgs::codec::Codec>::read */

void __rustcall <u32_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 4) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002ff0df;
    *(undefined8 *)(param_1 + 0x10) = 3;
    return;
  }
  param_2[2] = uVar1 + 4;
  if ((uVar1 < 0xfffffffffffffffc) && (uVar1 + 4 <= (ulong)param_2[1])) {
    lVar3 = *param_2;
    *param_1 = 0xff;
    uVar2 = (*(uint *)(lVar3 + uVar1) & 0xff00ff00) >> 8 |
            (*(uint *)(lVar3 + uVar1) & 0xff00ff) << 8;
    *(uint *)(param_1 + 4) = uVar2 >> 0x10 | uVar2 << 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 008655c4  <u32_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u32 as rustls::msgs::codec::Codec>::encode */

void __rustcall <u32_as_rustls::msgs::codec::Codec>::encode(uint *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_2[2];
  uVar1 = *param_1;
  if ((ulong)(*param_2 - lVar2) < 4) {
    FUN_00874c84(param_2,lVar2,4,1,1);
    lVar2 = param_2[2];
  }
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  *(uint *)(param_2[1] + lVar2) = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = lVar2 + 4;
  return;
}


// ===== 00865630  <rustls::crypto::ring::sign::RsaSigner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::RsaSigner as core::fmt::Debug>::fmt */

void __rustcall
<rustls::crypto::ring::sign::RsaSigner_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002ff0e2,9);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002ff0eb,6,param_1 + 0x18,&DAT_00ae7ec8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00865694  FUN_00865694 =====

void FUN_00865694(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
            (param_2,&DAT_002ff0f1,3,&DAT_002ff0c4,10,&local_18,&DAT_00ae7ee8);
  return;
}


// ===== 008656e0  <u64_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as rustls::msgs::codec::Codec>::read */

void __rustcall <u64_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2[2];
  if (param_2[1] - uVar1 < 8) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002ff0f4;
    *(undefined8 *)(param_1 + 0x10) = 3;
    return;
  }
  param_2[2] = uVar1 + 8;
  if ((uVar1 < 0xfffffffffffffff8) && (uVar1 + 8 <= (ulong)param_2[1])) {
    lVar2 = *param_2;
    *param_1 = 0xff;
    uVar1 = (*(ulong *)(lVar2 + uVar1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(lVar2 + uVar1) & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 8) = uVar1 >> 0x20 | uVar1 << 0x20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00865758  <u64_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u64 as rustls::msgs::codec::Codec>::encode */

void __rustcall <u64_as_rustls::msgs::codec::Codec>::encode(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_2[2];
  uVar2 = *param_1;
  if ((ulong)(*param_2 - lVar1) < 8) {
    FUN_00874c84(param_2,lVar1,8,1,1);
    lVar1 = param_2[2];
  }
  uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_2[1] + lVar1) = uVar2 >> 0x20 | uVar2 << 0x20;
  param_2[2] = lVar1 + 8;
  return;
}


// ===== 008657c4  FUN_008657c4 =====

void FUN_008657c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002ff106,0xc,&local_18,&DAT_00ae7f68);
  return;
}


// ===== 00865804  <rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Writer as core::io::write::Write>::write_vectored */

void __rustcall
<rustls::conn::connection::Writer_as_core::io::write::Write>::write_vectored(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086580c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(*param_1);
  return;
}


// ===== 00865810  <rustls::conn::connection::Writer_as_core::io::write::Write>::flush =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Writer as core::io::write::Write>::flush */

void __rustcall
<rustls::conn::connection::Writer_as_core::io::write::Write>::flush(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1);
  return;
}


// ===== 0086581c  <rustls::conn::connection::Writer_as_core::io::write::Write>::write =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::conn::connection::Writer as core::io::write::Write>::write */

void __rustcall
<rustls::conn::connection::Writer_as_core::io::write::Write>::write(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))(*param_1);
  return;
}


// ===== 00865828  <rustls::crypto::ring::sign::EcdsaSigningKey_as_rustls::crypto::signer::SigningKey>::public_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::EcdsaSigningKey as rustls::crypto::signer::SigningKey>::public_key
    */

void __rustcall
<rustls::crypto::ring::sign::EcdsaSigningKey_as_rustls::crypto::signer::SigningKey>::public_key
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long local_60;
  void *local_58;
  long local_50;
  long local_48;
  void *pvStack_40;
  ulong local_38;
  
  if ((short)param_2[1] == 3) {
    puVar1 = &DAT_002ff112;
    uVar2 = 0x13;
  }
  else {
    if ((short)param_2[1] != 5) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_002fefb6,0x28,&PTR_s__root__cargo_registry_src_index__00ae7f88);
    }
    puVar1 = &DAT_0029f610;
    uVar2 = 0x10;
  }
  lVar3 = *param_2;
  FUN_0085dd78(&local_60,0x30,puVar1,uVar2,1,0);
                    /* try { // try from 00865888 to 008658af has its CatchHandler @ 008659b0 */
  auVar4 = <ring::ec::suite_b::ecdsa::signing::PublicKey_as_core::convert::AsRef<[u8]>>::as_ref
                     (lVar3 + 0x90);
  FUN_0085dd78(&local_48,3,&DAT_002a8138,1,auVar4._0_8_,auVar4._8_8_);
  __n = local_38;
  __src = pvStack_40;
  if ((ulong)(local_60 - local_50) < local_38) {
                    /* try { // try from 0086595c to 00865973 has its CatchHandler @ 00865994 */
    FUN_00874c84(&local_60,local_50,local_38,1,1);
    lVar3 = local_50;
  }
  else {
    lVar3 = local_50;
    if (local_38 == 0) goto LAB_008658e0;
  }
  memcpy((void *)((long)local_58 + lVar3),__src,__n);
LAB_008658e0:
  if (local_48 != 0) {
    free(__src);
  }
                    /* try { // try from 008658f8 to 00865913 has its CatchHandler @ 008659b0 */
  FUN_0085dd78(&local_48,0x30,local_58,lVar3 + __n,1,0);
  if (local_60 != 0) {
    free(local_58);
  }
  param_1[1] = (long)pvStack_40;
  *param_1 = local_48;
  param_1[2] = local_38;
  return;
}


// ===== 008659d0  <rustls::crypto::ring::sign::EcdsaSigningKey_as_rustls::crypto::signer::SigningKey>::choose_scheme =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::EcdsaSigningKey as
   rustls::crypto::signer::SigningKey>::choose_scheme */

undefined1  [16] __rustcall
<rustls::crypto::ring::sign::EcdsaSigningKey_as_rustls::crypto::signer::SigningKey>::choose_scheme
          (undefined8 *param_1,short *param_2,long param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_24;
  
  if (param_3 != 0) {
    sVar1 = *(short *)(param_1 + 1);
    puVar6 = (undefined8 *)(param_3 * 4);
    uVar3 = *(undefined4 *)(param_1 + 1);
    if (sVar1 == 0xd) {
      param_2 = param_2 + 1;
      do {
        if ((param_2[-1] == 0xd) && (*param_2 == *(short *)((long)param_1 + 10))) goto LAB_00865a24;
        puVar6 = (undefined8 *)((long)puVar6 + -4);
        param_2 = param_2 + 2;
      } while (puVar6 != (undefined8 *)0x0);
      goto LAB_00865ab4;
    }
    uVar10 = (uint)((long)puVar6 - 4U);
    psVar9 = param_2;
    if ((~uVar10 & 0xc) != 0) {
      lVar7 = -((ulong)((uVar10 >> 2) + 1) & 3);
      psVar8 = param_2;
      do {
        psVar9 = psVar8 + 2;
        if (*psVar8 == sVar1) goto LAB_00865a24;
        bVar5 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        psVar8 = psVar9;
      } while (bVar5);
    }
    if (0xb < (long)puVar6 - 4U) {
      do {
        if ((((*psVar9 == sVar1) || (psVar9[2] == sVar1)) || (psVar9[4] == sVar1)) ||
           (psVar9[6] == sVar1)) goto LAB_00865a24;
        psVar9 = psVar9 + 8;
        puVar6 = (undefined8 *)0x0;
      } while (psVar9 != param_2 + param_3 * 2);
      goto LAB_00865ab4;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00865ab4:
  auVar12._8_8_ = &UNK_00ae7fa0;
  auVar12._0_8_ = puVar6;
  return auVar12;
LAB_00865a24:
  plVar11 = (long *)*param_1;
  do {
    lVar7 = *plVar11;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x865b28);
    (*pcVar4)();
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar6 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* try { // try from 00865b18 to 00865b23 has its CatchHandler @ 00865b28 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x10);
  }
  puVar6[1] = CONCAT44(uStack_24,uVar3);
  *puVar6 = plVar11;
  goto LAB_00865ab4;
}


// ===== 00865b54  FUN_00865b54 =====

undefined1 FUN_00865b54(long param_1)

{
  return (&DAT_002ff164)[*(ushort *)(param_1 + 8)];
}


// ===== 00865b6c  <rustls::crypto::ring::sign::EcdsaSigningKey_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::EcdsaSigningKey as core::fmt::Debug>::fmt */

void __rustcall
<rustls::crypto::ring::sign::EcdsaSigningKey_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002ff125,0xf);
                    /* WARNING: Could not recover jumptable at 0x00865bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00865bb8 + (ulong)(byte)(&DAT_002feeca)[*(ushort *)(param_1 + 8)] * 4))();
  return;
}


// ===== 00865c18  <rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::msgs::codec::LengthPrefixedBuffer as core::ops::drop::Drop>::drop */

void __rustcall
<rustls::msgs::codec::LengthPrefixedBuffer_as_core::ops::drop::Drop>::drop(byte *param_1)

{
  ushort *puVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  cVar4 = *param_1 - 0x15;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (*param_1 < 0x15) {
    cVar4 = '\x02';
  }
  uVar7 = *(ulong *)(lVar2 + 0x10);
  if (cVar4 == '\0') {
    if (uVar3 < uVar7) {
      *(byte *)(*(long *)(lVar2 + 8) + uVar3) = (char)uVar7 + ~(byte)uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar3,uVar7,&PTR_s__root__cargo_registry_src_index__00ae7fd0);
  }
  if (cVar4 != '\x01') {
    if ((uVar3 < 0xfffffffffffffffd) && (uVar3 + 3 <= uVar7)) {
      uVar6 = ((int)uVar7 - (int)uVar3) - 3;
      uVar5 = uVar6 & 0xff00ff;
      puVar1 = (ushort *)(*(long *)(lVar2 + 8) + uVar3);
      *(char *)(puVar1 + 1) = (char)uVar5;
      *puVar1 = (ushort)(byte)(uVar5 >> 0x10) | (ushort)((((uVar6 & 0xff00ff00) >> 8) << 0x10) >> 8)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail();
  }
  if ((uVar3 < 0xfffffffffffffffe) && (uVar3 + 2 <= uVar7)) {
    uVar5 = ((int)uVar7 - (int)uVar3) - 2;
    *(ushort *)(*(long *)(lVar2 + 8) + uVar3) =
         (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00865d0c  <rustls::crypto::ring::sign::EcdsaSigner_as_rustls::crypto::signer::Signer>::sign =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::EcdsaSigner as rustls::crypto::signer::Signer>::sign */

void __rustcall
<rustls::crypto::ring::sign::EcdsaSigner_as_rustls::crypto::signer::Signer>::sign
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *__dest;
  size_t __n;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  <ring::ec::suite_b::ecdsa::signing::[1]::ring::ec::suite_b::ecdsa::signing::EcdsaKeyPair>::sign
            (&local_140,*param_2 + 0x10,&uStack_41,&DAT_00ae7d38,param_3,param_4);
  if (local_140 == 1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined8 *)FUN_004b25a4(0xe,1);
    uVar2 = _UNK_002a0af8;
    uVar4 = _DAT_002a0af0;
    if (puVar3 != (undefined8 *)0x0) {
      uVar1 = CONCAT62(_UNK_002feeee,DAT_002feee6._6_2_);
      *puVar3 = CONCAT26(DAT_002feee6._6_2_,(undefined6)DAT_002feee6);
      *(undefined8 *)((long)puVar3 + 6) = uVar1;
      param_1[1] = uVar2;
      *param_1 = uVar4;
      param_1[2] = puVar3;
      param_1[3] = 0xe;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0xe);
  }
  uStack_98 = uStack_110;
  local_a0 = local_118;
  local_90 = local_108;
  uStack_80 = uStack_f8;
  local_88 = local_100;
  uStack_70 = uStack_e8;
  local_78 = uStack_f0;
  uStack_60 = uStack_d8;
  local_68 = local_e0;
  uStack_50 = uStack_c8;
  local_58 = uStack_d0;
  uStack_b8 = uStack_130;
  local_c0 = local_138;
  local_b0 = local_128;
  uStack_a8 = uStack_120;
  auVar5 = <ring::signature::Signature_as_core::convert::AsRef<[u8]>>::as_ref(&local_c0);
  __n = auVar5._8_8_;
  if ((long)__n < 0) {
    uVar4 = 0;
LAB_00865e00:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar4,__n);
  }
  if (__n == 0) {
    __dest = &DAT_00000001;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar4 = 1;
    __dest = (undefined1 *)FUN_004b25a4(__n,1);
    if (__dest == (undefined1 *)0x0) goto LAB_00865e00;
    memcpy(__dest,auVar5._0_8_,__n);
  }
  param_1[2] = __dest;
  param_1[3] = __n;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = __n;
  return;
}


// ===== 00865e74  FUN_00865e74 =====

undefined2 FUN_00865e74(long param_1)

{
  return *(undefined2 *)(param_1 + 8);
}


// ===== 00865e84  <rustls::crypto::ring::sign::EcdsaSigner_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::EcdsaSigner as core::fmt::Debug>::fmt */

void __rustcall
<rustls::crypto::ring::sign::EcdsaSigner_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,&DAT_002ff134,0xb);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002ff0eb,6,param_1 + 8,&DAT_00ae7ec8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00865ee8  FUN_00865ee8 =====

void FUN_00865ee8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  void *__ptr;
  long lVar5;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0xffffffffffffffff) {
    plVar1 = (long *)((long)__ptr + 8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      uVar2 = *(ulong *)(param_1[1] + 0x10);
      if (uVar2 < 9) {
        uVar2 = 8;
      }
      if ((*(long *)(param_1[1] + 8) + uVar2 + 0xf & -uVar2) != 0) {
        free(__ptr);
        return;
      }
    }
  }
  return;
}


// ===== 00865f44  FUN_00865f44 =====

void FUN_00865f44(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 00865f64  FUN_00865f64 =====

void FUN_00865f64(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00865f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x18))
            (*param_1 + (*(long *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


// ===== 00865f80  FUN_00865f80 =====

void FUN_00865f80(long *param_1)

{
  <rustls::webpki::anchors::RootCertStore_as_core::fmt::Debug>::fmt(*param_1 + 0x10);
  return;
}


// ===== 00865f8c  <u8_as_rustls::msgs::codec::Codec>::read =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as rustls::msgs::codec::Codec>::read */

void __rustcall <u8_as_rustls::msgs::codec::Codec>::read(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_2[2];
  if (param_2[1] == uVar1) {
    *param_1 = 0xc;
    *(undefined **)(param_1 + 8) = &DAT_002ff13f;
    *(undefined8 *)(param_1 + 0x10) = 2;
    return;
  }
  param_2[2] = uVar1 + 1;
  if (uVar1 < (ulong)param_2[1]) {
    lVar2 = *param_2;
    *param_1 = 0xff;
    param_1[1] = *(undefined1 *)(lVar2 + uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail();
}


// ===== 00865ff4  <u8_as_rustls::msgs::codec::Codec>::encode =====

/* WARNING: Unknown calling convention: __rustcall */
/* <u8 as rustls::msgs::codec::Codec>::encode */

void __rustcall <u8_as_rustls::msgs::codec::Codec>::encode(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = param_2[2];
  uVar1 = *param_1;
  if (lVar2 == *param_2) {
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<u8>>::grow_one(param_2);
  }
  *(undefined1 *)(param_2[1] + lVar2) = uVar1;
  param_2[2] = lVar2 + 1;
  return;
}


// ===== 00866044  <rustls::crypto::ring::sign::RsaSigningKey_as_rustls::crypto::signer::SigningKey>::public_key =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::RsaSigningKey as rustls::crypto::signer::SigningKey>::public_key */

void __rustcall
<rustls::crypto::ring::sign::RsaSigningKey_as_rustls::crypto::signer::SigningKey>::public_key
          (long *param_1,long *param_2)

{
  void *__src;
  ulong __n;
  long lVar1;
  long local_60;
  void *local_58;
  long local_50;
  long local_48;
  void *pvStack_40;
  ulong local_38;
  
  lVar1 = *param_2;
  FUN_0085dd78(&local_60,0x30,&DAT_002b7b07,0xd,1,0);
                    /* try { // try from 00866084 to 0086609b has its CatchHandler @ 00866184 */
  FUN_0085dd78(&local_48,3,&DAT_002a8138,1,*(undefined8 *)(lVar1 + 0xf0),
               *(undefined8 *)(lVar1 + 0xf8));
  __n = local_38;
  __src = pvStack_40;
  if ((ulong)(local_60 - local_50) < local_38) {
                    /* try { // try from 00866148 to 0086615f has its CatchHandler @ 00866168 */
    FUN_00874c84(&local_60,local_50,local_38,1,1);
    lVar1 = local_50;
  }
  else {
    lVar1 = local_50;
    if (local_38 == 0) goto LAB_008660cc;
  }
  memcpy((void *)((long)local_58 + lVar1),__src,__n);
LAB_008660cc:
  if (local_48 != 0) {
    free(__src);
  }
                    /* try { // try from 008660e4 to 008660ff has its CatchHandler @ 00866184 */
  FUN_0085dd78(&local_48,0x30,local_58,lVar1 + __n,1,0);
  if (local_60 != 0) {
    free(local_58);
  }
  param_1[1] = (long)pvStack_40;
  *param_1 = local_48;
  param_1[2] = local_38;
  return;
}


// ===== 008661a4  <rustls::crypto::ring::sign::RsaSigningKey_as_rustls::crypto::signer::SigningKey>::choose_scheme =====

/* WARNING: Unknown calling convention: __rustcall */
/* <rustls::crypto::ring::sign::RsaSigningKey as rustls::crypto::signer::SigningKey>::choose_scheme
    */

undefined1  [16] __rustcall
<rustls::crypto::ring::sign::RsaSigningKey_as_rustls::crypto::signer::SigningKey>::choose_scheme
          (undefined8 *param_1,short *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  short *psVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ushort *puVar11;
  undefined *puVar12;
  short *psVar13;
  short *psVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined4 uStack_24;
  
  if (param_3 != 0) {
    uVar8 = param_3 * 4 - 4;
    uVar7 = (uint)uVar8;
    uVar1 = uVar7 >> 2;
    psVar6 = param_2;
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = (ushort *)0x2ff058;
      psVar13 = param_2;
      do {
        psVar6 = psVar13 + 2;
        if (*psVar13 == 10) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar13 = psVar6;
      } while (bVar5);
    }
    psVar13 = param_2 + param_3 * 2;
    if (0xb < uVar8) {
      puVar11 = (ushort *)0x2ff058;
      do {
        if ((((*psVar6 == 10) || (psVar6[2] == 10)) || (psVar6[4] == 10)) || (psVar6[6] == 10))
        goto LAB_00866514;
        psVar6 = psVar6 + 8;
      } while (psVar6 != psVar13);
    }
    psVar6 = param_2;
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = (ushort *)&UNK_002ff05c;
      psVar14 = param_2;
      do {
        psVar6 = psVar14 + 2;
        if (*psVar14 == 9) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar14 = psVar6;
      } while (bVar5);
    }
    if (0xb < uVar8) {
      puVar11 = (ushort *)&UNK_002ff05c;
      do {
        if (((*psVar6 == 9) || (psVar6[2] == 9)) || ((psVar6[4] == 9 || (psVar6[6] == 9))))
        goto LAB_00866514;
        psVar6 = psVar6 + 8;
      } while (psVar6 != psVar13);
    }
    psVar6 = param_2;
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = (ushort *)&UNK_002ff060;
      psVar14 = param_2;
      do {
        psVar6 = psVar14 + 2;
        if (*psVar14 == 8) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar14 = psVar6;
      } while (bVar5);
    }
    if (0xb < uVar8) {
      puVar11 = (ushort *)&UNK_002ff060;
      do {
        if (((*psVar6 == 8) || (psVar6[2] == 8)) || ((psVar6[4] == 8 || (psVar6[6] == 8))))
        goto LAB_00866514;
        psVar6 = psVar6 + 8;
      } while (psVar6 != psVar13);
    }
    psVar6 = param_2;
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = (ushort *)&UNK_002ff064;
      psVar14 = param_2;
      do {
        psVar6 = psVar14 + 2;
        if (*psVar14 == 6) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar14 = psVar6;
      } while (bVar5);
    }
    if (0xb < uVar8) {
      puVar11 = (ushort *)&UNK_002ff064;
      do {
        if ((((*psVar6 == 6) || (psVar6[2] == 6)) || (psVar6[4] == 6)) || (psVar6[6] == 6))
        goto LAB_00866514;
        psVar6 = psVar6 + 8;
      } while (psVar6 != psVar13);
    }
    psVar6 = param_2;
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = (ushort *)&UNK_002ff068;
      psVar14 = param_2;
      do {
        psVar6 = psVar14 + 2;
        if (*psVar14 == 4) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar14 = psVar6;
      } while (bVar5);
    }
    if (0xb < uVar8) {
      puVar11 = (ushort *)&UNK_002ff068;
      do {
        if (((*psVar6 == 4) || (psVar6[2] == 4)) || ((psVar6[4] == 4 || (psVar6[6] == 4))))
        goto LAB_00866514;
        psVar6 = psVar6 + 8;
      } while (psVar6 != psVar13);
    }
    if ((~uVar7 & 0xc) != 0) {
      lVar15 = -((ulong)(uVar1 + 1) & 3);
      puVar11 = &DAT_002ff06c;
      psVar6 = param_2;
      do {
        param_2 = psVar6 + 2;
        if (*psVar6 == 2) goto LAB_00866514;
        bVar5 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        psVar6 = param_2;
      } while (bVar5);
    }
    if (0xb < uVar8) {
      puVar11 = &DAT_002ff06c;
      do {
        if (((*param_2 == 2) || (param_2[2] == 2)) || ((param_2[4] == 2 || (param_2[6] == 2))))
        goto LAB_00866514;
        param_2 = param_2 + 8;
        puVar9 = (undefined8 *)0x0;
      } while (param_2 != psVar13);
      goto LAB_00866598;
    }
  }
  puVar9 = (undefined8 *)0x0;
  goto LAB_00866598;
LAB_00866514:
  plVar16 = (long *)*param_1;
  do {
    lVar15 = *plVar16;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar15 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar15 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x8665e0);
    (*pcVar4)();
  }
  uVar3 = *(undefined4 *)puVar11;
  uVar1 = *puVar11 - 2;
  if ((8 < uVar1) || ((0x1d5U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* try { // try from 008665b4 to 008665cb has its CatchHandler @ 00866604 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_002fefb6,0x28,&PTR_s__root__cargo_registry_src_index__00ae7ce8);
  }
  puVar10 = (&PTR_RSA_PKCS1_SHA256_00ae80a8)[(int)uVar1];
  puVar12 = (&PTR_DAT_00ae8060)[(int)uVar1];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar9 = (undefined8 *)FUN_004b25a4(0x20,8);
  if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 008665d0 to 008665db has its CatchHandler @ 008665e0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x20);
  }
  puVar9[1] = puVar10;
  *puVar9 = plVar16;
  puVar9[3] = CONCAT44(uStack_24,uVar3);
  puVar9[2] = puVar12;
LAB_00866598:
  auVar17._8_8_ = &PTR_FUN_00ae7cb8;
  auVar17._0_8_ = puVar9;
  return auVar17;
}


// ===== 00866634  FUN_00866634 =====

undefined8 FUN_00866634(void)

{
  return 1;
}


// ===== 0086663c  FUN_0086663c =====

undefined8 FUN_0086663c(undefined8 *param_1)

{
  return *param_1;
}


