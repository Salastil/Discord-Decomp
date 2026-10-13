// ===== 0051be64  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051be68  FUN_0051be68 =====

void FUN_0051be68(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_00792948;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}


// ===== 0051beac  FUN_0051beac =====

void FUN_0051beac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00792948;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 0051bed0  FUN_0051bed0 =====

void FUN_0051bed0(void)

{
  return;
}


// ===== 0051bed4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051bed8  FUN_0051bed8 =====

void FUN_0051bed8(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [12];
  long lVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long lVar11;
  undefined1 (*pauVar12) [12];
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  
  lVar16 = *(long *)(param_1 + 0x20);
  if (1 < lVar16) {
    lVar17 = *param_2;
    lVar18 = *param_3;
    uVar4 = lVar18 - lVar17;
    if (uVar4 != 0 && lVar17 <= lVar18) {
      lVar19 = *(long *)(param_1 + 0x18);
      lVar23 = lVar17 * 4;
      lVar2 = *(long *)(param_1 + 8);
      lVar3 = *(long *)(param_1 + 0x10);
      lVar20 = lVar19 * 4;
      lVar21 = lVar2 + lVar20;
      uVar1 = lVar21 + lVar23;
      uVar22 = uVar4 & 0xfffffffffffffffc;
      pauVar7 = (undefined1 (*) [12])(lVar2 + lVar23 + lVar20);
      lVar8 = 1;
      do {
        lVar10 = lVar17;
        pauVar9 = (undefined1 (*) [16])(lVar3 + lVar23);
        pauVar12 = pauVar7;
        uVar14 = uVar22;
        if (uVar4 < 4 ||
            ((undefined1 (*) [16])(lVar3 + lVar23) <
             (undefined1 (*) [16])
             (lVar2 + (lVar19 + lVar18 + lVar19 * (lVar16 + 0x3ffffffffffffffe)) * 4) &&
             uVar1 < (ulong)(lVar3 + lVar18 * 4) || lVar20 < 0)) {
LAB_0051c00c:
          lVar11 = lVar18 - lVar10;
          pfVar13 = (float *)(lVar21 + lVar10 * 4);
          pfVar15 = (float *)(lVar3 + lVar10 * 4);
          do {
            if (*pfVar15 < *pfVar13) {
              *pfVar15 = *pfVar13;
            }
            lVar11 = lVar11 + -1;
            pfVar13 = pfVar13 + 1;
            pfVar15 = pfVar15 + 1;
          } while (lVar11 != 0);
        }
        else {
          do {
            uVar6 = *(undefined8 *)(*pauVar12 + 8);
            uVar24 = (undefined4)((ulong)uVar6 >> 0x20);
            uVar5 = *(undefined8 *)*pauVar12;
            auVar25._12_4_ = uVar24;
            auVar25._0_12_ = *pauVar12;
            auVar25 = NEON_fcmgt(auVar25,*pauVar9,4);
            if ((auVar25 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              *(int *)*pauVar9 = (int)uVar5;
            }
            if ((auVar25 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
              *(int *)(*pauVar9 + 4) = (int)((ulong)uVar5 >> 0x20);
            }
            if ((auVar25 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
              *(int *)(*pauVar9 + 8) = (int)uVar6;
            }
            if ((auVar25 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0) {
              *(undefined4 *)(*pauVar9 + 0xc) = uVar24;
            }
            uVar14 = uVar14 - 4;
            pauVar9 = pauVar9 + 1;
            pauVar12 = (undefined1 (*) [12])(pauVar12[1] + 4);
          } while (uVar14 != 0);
          lVar10 = lVar17 + uVar22;
          if (uVar4 != uVar22) goto LAB_0051c00c;
        }
        lVar8 = lVar8 + 1;
        pauVar7 = (undefined1 (*) [12])(*pauVar7 + lVar20);
        lVar21 = lVar21 + lVar20;
      } while (lVar8 != lVar16);
    }
  }
  return;
}


// ===== 0051c04c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051c050  FUN_0051c050 =====

void FUN_0051c050(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  *puVar1 = &PTR_FUN_00792990;
  puVar1[6] = uVar3;
  puVar1[5] = uVar2;
  return;
}


// ===== 0051c09c  FUN_0051c09c =====

void FUN_0051c09c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_00792990;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar1;
  param_2[4] = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  return;
}


// ===== 0051c0c8  FUN_0051c0c8 =====

void FUN_0051c0c8(void)

{
  return;
}


// ===== 0051c0cc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051c0d0  FUN_0051c0d0 =====

void FUN_0051c0d0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_0051c0e0(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 0051c0e0  FUN_0051c0e0 =====

void FUN_0051c0e0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack_d1;
  long *local_d0;
  long *plStack_c8;
  undefined1 *local_c0;
  long *local_b8;
  long alStack_b0 [2];
  long local_a0;
  long local_98;
  long lStack_90;
  long local_80;
  long local_78;
  long lStack_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 < param_3) {
    do {
      if ((ulong)param_1[1] < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      lVar3 = *(long *)(param_1[2] + 0x10);
      if (((lVar3 < 0) || (lVar5 = *(long *)(param_1[2] + 8), lVar5 < 0)) ||
         (lVar4 = param_1[4], lVar4 < 0)) {
        plVar2 = (long *)FUN_00753a74(8);
        *plVar2 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar2,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_0051c20c;
      }
      alStack_b0[0] = param_1[5] + lVar4 * param_2 * 4;
      local_80 = *param_1 + param_1[3] * param_2 * 4;
      local_d0 = alStack_b0;
      plStack_c8 = &local_80;
      local_c0 = &uStack_d1;
      local_b8 = &local_98;
      local_a0 = lVar4;
      local_98 = alStack_b0[0];
      lStack_90 = lVar4;
      local_78 = lVar3;
      lStack_70 = lVar5;
      FUN_0051c210(&local_d0);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0051c20c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051c210  FUN_0051c210 =====

void FUN_0051c210(undefined8 *param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  float *pfVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar27 = *(ulong *)param_1[3];
  uVar1 = ((ulong *)param_1[3])[1];
  uVar16 = uVar1;
  if (((uVar27 & 3) == 0) && (uVar16 = (ulong)-((uint)uVar27 >> 2) & 3, (long)uVar1 <= (long)uVar16)
     ) {
    uVar16 = uVar1;
  }
  uVar18 = uVar1 - uVar16;
  uVar27 = uVar18 + 3;
  if ((long)uVar16 <= (long)uVar1) {
    uVar27 = uVar18;
  }
  if (0 < (long)uVar16) {
    plVar23 = (long *)param_1[1];
    lVar28 = plVar23[2];
    lVar21 = *(long *)*param_1;
    pfVar20 = (float *)*plVar23;
    if (lVar28 < 2) {
      uVar25 = 0;
      if ((7 < uVar16) && (0x1f < (ulong)(lVar21 - (long)pfVar20))) {
        uVar25 = uVar16 & 0x7ffffffffffffff8;
        pauVar15 = (undefined1 (*) [16])(pfVar20 + 4);
        puVar24 = (undefined8 *)(lVar21 + 0x10);
        uVar13 = uVar25;
        do {
          uVar4 = *(undefined8 *)pauVar15[-1];
          pauVar8 = pauVar15 + -1;
          auVar32 = *pauVar15;
          uVar13 = uVar13 - 8;
          pauVar15 = pauVar15 + 2;
          puVar24[-1] = *(undefined8 *)(*pauVar8 + 8);
          puVar24[-2] = uVar4;
          puVar24[1] = auVar32._8_8_;
          *puVar24 = auVar32._0_8_;
          puVar24 = puVar24 + 4;
        } while (uVar13 != 0);
        if (uVar16 == uVar25) goto LAB_0051c320;
      }
      lVar28 = uVar16 - uVar25;
      pfVar20 = pfVar20 + uVar25;
      pfVar12 = (float *)(lVar21 + uVar25 * 4);
      do {
        lVar28 = lVar28 + -1;
        *pfVar12 = *pfVar20;
        pfVar20 = pfVar20 + 1;
        pfVar12 = pfVar12 + 1;
      } while (lVar28 != 0);
    }
    else {
      uVar25 = 0;
      pfVar12 = pfVar20;
      do {
        lVar26 = lVar28 + -1;
        pfVar14 = pfVar12;
        fVar3 = pfVar20[uVar25];
        do {
          pfVar14 = pfVar14 + plVar23[1];
          fVar2 = *pfVar14;
          if (*pfVar14 <= fVar3) {
            fVar2 = fVar3;
          }
          lVar26 = lVar26 + -1;
          fVar3 = fVar2;
        } while (lVar26 != 0);
        *(float *)(lVar21 + uVar25 * 4) = fVar2;
        uVar25 = uVar25 + 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar25 != uVar16);
    }
  }
LAB_0051c320:
  uVar25 = (uVar27 & 0xfffffffffffffffc) + uVar16;
  if (3 < (long)uVar18) {
    lVar21 = uVar16 << 2;
    uVar18 = uVar16;
    do {
      plVar23 = (long *)param_1[1];
      lVar28 = plVar23[2];
      if (lVar28 == 0) {
        auVar32 = ZEXT816(0);
      }
      else {
        lVar26 = *plVar23;
        lVar30 = plVar23[1];
        uVar13 = lVar28 - 1U & 0xfffffffffffffffc;
        auVar32 = *(undefined1 (*) [16])(lVar26 + uVar18 * 4);
        if ((long)uVar13 < 2) {
          lVar31 = 1;
          lVar29 = lVar28 + -1;
          if (lVar29 != 0 && 0 < lVar28) goto LAB_0051c3f0;
        }
        else {
          pauVar15 = (undefined1 (*) [16])(lVar26 + lVar21);
          lVar31 = 1;
          do {
            puVar9 = *pauVar15;
            puVar10 = *pauVar15;
            lVar31 = lVar31 + 4;
            puVar11 = *pauVar15;
            pauVar15 = pauVar15 + lVar30;
            auVar33 = NEON_fmax(*(undefined1 (*) [16])(puVar9 + lVar30 * 4),
                                *(undefined1 (*) [16])(puVar10 + lVar30 * 8),4);
            auVar34 = NEON_fmax(*(undefined1 (*) [16])(puVar11 + lVar30 * 0xc),*pauVar15,4);
            auVar33 = NEON_fmax(auVar33,auVar34,4);
            auVar32 = NEON_fmax(auVar32,auVar33,4);
          } while (lVar31 < (long)uVar13);
          lVar31 = uVar13 + 1;
          lVar29 = lVar28 - lVar31;
          if (lVar29 != 0 && lVar31 <= lVar28) {
LAB_0051c3f0:
            lVar26 = lVar26 + lVar31 * lVar30 * 4;
            do {
              pauVar15 = (undefined1 (*) [16])(lVar26 + lVar21);
              lVar29 = lVar29 + -1;
              lVar26 = lVar26 + lVar30 * 4;
              auVar32 = NEON_fmax(auVar32,*pauVar15,4);
            } while (lVar29 != 0);
          }
        }
      }
      lVar28 = uVar18 * 4;
      uVar18 = uVar18 + 4;
      lVar21 = lVar21 + 0x10;
      puVar24 = (undefined8 *)(*(long *)*param_1 + lVar28);
      puVar24[1] = auVar32._8_8_;
      *puVar24 = auVar32._0_8_;
    } while ((long)uVar18 < (long)uVar25);
  }
  if ((long)uVar25 < (long)uVar1) {
    plVar23 = (long *)param_1[1];
    lVar26 = plVar23[2];
    lVar28 = *(long *)*param_1;
    lVar21 = *plVar23;
    if (lVar26 < 2) {
      uVar18 = uVar1 - (uVar16 + (uVar27 & 0xfffffffffffffffc));
      if ((7 < uVar18) && (0x1f < (ulong)(lVar28 - lVar21))) {
        uVar13 = uVar18 & 0xfffffffffffffff8;
        uVar25 = uVar25 + uVar13;
        lVar26 = ((long)uVar27 >> 2) * 0x10 + uVar16 * 4 + 0x10;
        puVar22 = (undefined8 *)(lVar28 + lVar26);
        puVar24 = (undefined8 *)(lVar21 + lVar26);
        uVar27 = uVar13;
        do {
          uVar4 = puVar24[-2];
          puVar5 = puVar24 + -1;
          uVar6 = *puVar24;
          uVar7 = puVar24[1];
          uVar27 = uVar27 - 8;
          puVar24 = puVar24 + 4;
          puVar22[-1] = *puVar5;
          puVar22[-2] = uVar4;
          puVar22[1] = uVar7;
          *puVar22 = uVar6;
          puVar22 = puVar22 + 4;
        } while (uVar27 != 0);
        if (uVar18 == uVar13) {
          return;
        }
      }
      lVar26 = uVar1 - uVar25;
      puVar17 = (undefined4 *)(lVar28 + uVar25 * 4);
      puVar19 = (undefined4 *)(lVar21 + uVar25 * 4);
      do {
        lVar26 = lVar26 + -1;
        *puVar17 = *puVar19;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar26 != 0);
    }
    else {
      pfVar20 = (float *)(lVar21 + ((long)uVar27 >> 2) * 0x10 + uVar16 * 4);
      do {
        lVar30 = lVar26 + -1;
        pfVar12 = pfVar20;
        fVar3 = *(float *)(lVar21 + uVar25 * 4);
        do {
          pfVar12 = pfVar12 + plVar23[1];
          fVar2 = *pfVar12;
          if (*pfVar12 <= fVar3) {
            fVar2 = fVar3;
          }
          lVar30 = lVar30 + -1;
          fVar3 = fVar2;
        } while (lVar30 != 0);
        *(float *)(lVar28 + uVar25 * 4) = fVar2;
        uVar25 = uVar25 + 1;
        pfVar20 = pfVar20 + 1;
      } while (uVar25 != uVar1);
    }
  }
  return;
}


// ===== 0051c50c  FUN_0051c50c =====

void FUN_0051c50c(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  double local_138;
  double dStack_130;
  double local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f0 [4];
  long *local_d0 [2];
  long local_c0 [4];
  long *local_a0 [2];
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_004ae878();
  lStack_118 = FUN_004aea28(param_3);
  if ((*param_2 == 0) || (*param_2 < 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar7 = (long *)param_2[1];
  plVar5 = (long *)param_5[4];
  local_110 = *plVar7;
  lVar2 = plVar7[1];
  lStack_108 = plVar7[2];
  dStack_130 = (double)(lVar2 * 4);
  local_100 = lVar2 * lStack_108;
  lVar9 = lVar2 * 4 * local_110 * lStack_108;
  plVar7 = local_f0;
  local_138 = (double)lVar9;
  local_128 = (double)(lVar9 * 6);
  local_120 = lVar4;
  if (plVar5 == (long *)0x0) {
    local_d0[0] = (long *)0x0;
    plVar5 = (long *)param_6[4];
    if (plVar5 != (long *)0x0) goto LAB_0051c628;
    local_a0[0] = (long *)0x0;
  }
  else if (plVar5 == param_5) {
    local_d0[0] = plVar7;
    (**(code **)(*param_5 + 0x18))(param_5,plVar7);
    plVar5 = (long *)param_6[4];
    local_a0[0] = plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0051c628;
  }
  else {
    local_d0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_6[4];
    if (plVar5 == (long *)0x0) {
      local_a0[0] = (long *)0x0;
    }
    else {
LAB_0051c628:
      local_a0[0] = local_c0;
      if (plVar5 == param_6) {
        (**(code **)(*param_6 + 0x18))(param_6,local_a0[0]);
      }
      else {
                    /* try { // try from 0051c638 to 0051c65b has its CatchHandler @ 0051c7f4 */
        local_a0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  plVar5 = local_c0;
  local_70 = (long *)0x0;
                    /* try { // try from 0051c660 to 0051c667 has its CatchHandler @ 0051c864 */
  plVar6 = (long *)FUN_00759c3c(0xa0);
  puVar1 = PTR_DAT_007a24c0 + 0x10;
  plVar6[3] = lStack_118;
  plVar6[2] = local_120;
  plVar6[5] = lStack_108;
  plVar6[4] = local_110;
  *plVar6 = (long)puVar1;
  plVar6[6] = local_100;
  if (local_d0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0xc);
LAB_0051c6b0:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_d0[0] != plVar7) {
      plVar6[0xc] = (long)local_d0[0];
      pplVar8 = local_d0;
      goto LAB_0051c6b0;
    }
    plVar6[0xc] = (long)(plVar6 + 8);
                    /* try { // try from 0051c6c8 to 0051c6cf has its CatchHandler @ 0051c7f0 */
    (**(code **)(local_f0[0] + 0x18))(plVar7);
  }
  if (local_a0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0x12);
LAB_0051c6f4:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_a0[0] != plVar5) {
      plVar6[0x12] = (long)local_a0[0];
      pplVar8 = local_a0;
      goto LAB_0051c6f4;
    }
    plVar6[0x12] = (long)(plVar6 + 0xe);
                    /* try { // try from 0051c70c to 0051c713 has its CatchHandler @ 0051c7ec */
    (**(code **)(local_c0[0] + 0x18))(plVar5);
  }
                    /* try { // try from 0051c718 to 0051c72f has its CatchHandler @ 0051c82c */
  local_70 = plVar6;
  FUN_0063c634(param_4,lVar2,&local_138,local_90);
  if (local_70 == local_90) {
    lVar4 = 0x20;
    plVar6 = local_90;
LAB_0051c750:
    (**(code **)(*plVar6 + lVar4))();
  }
  else if (local_70 != (long *)0x0) {
    lVar4 = 0x28;
    plVar6 = local_70;
    goto LAB_0051c750;
  }
  if (local_a0[0] == plVar5) {
    lVar4 = 0x20;
LAB_0051c77c:
    (**(code **)(*plVar5 + lVar4))(plVar5);
  }
  else if (local_a0[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar5 = local_a0[0];
    goto LAB_0051c77c;
  }
  if (local_d0[0] == plVar7) {
    lVar4 = 0x20;
  }
  else {
    if (local_d0[0] == (long *)0x0) goto LAB_0051c7bc;
    lVar4 = 0x28;
    plVar7 = local_d0[0];
  }
  (**(code **)(*plVar7 + lVar4))(plVar7);
LAB_0051c7bc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0051c88c  FUN_0051c88c =====

void FUN_0051c88c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051c8cc;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051c8cc:
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051c8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051c920  FUN_0051c920 =====

void FUN_0051c920(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24c0 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051c970;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051c970:
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0051c9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051c998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0051c9c4  FUN_0051c9c4 =====

void FUN_0051c9c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24c0 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051ca08:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051ca08;
  }
  plVar1 = (long *)param_1[0xc];
  plVar2 = param_1 + 8;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051ca44;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051ca44:
  free(param_1);
  return;
}


// ===== 0051ca54  FUN_0051ca54 =====

undefined8 * FUN_0051ca54(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar5;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  plVar2 = *(long **)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_007929d8;
  puVar1[6] = uVar4;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x40)) {
      lVar3 = *plVar2;
      puVar1[0xc] = puVar1 + 8;
      (**(code **)(lVar3 + 0x18))(plVar2,puVar1 + 8);
      goto LAB_0051cad4;
    }
                    /* try { // try from 0051cab4 to 0051cad3 has its CatchHandler @ 0051cb78 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0xc] = plVar2;
LAB_0051cad4:
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x70)) {
      lVar3 = *plVar2;
      puVar1[0x12] = puVar1 + 0xe;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0051caf0 to 0051cb1f has its CatchHandler @ 0051cb34 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0x12] = plVar2;
  return puVar1;
}


// ===== 0051cb8c  FUN_0051cb8c =====

void FUN_0051cb8c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_2 = (long)(PTR_DAT_007a24c0 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  param_2[6] = *(long *)(param_1 + 0x30);
  param_2[3] = lVar5;
  param_2[2] = lVar4;
  param_2[5] = lVar3;
  param_2[4] = lVar2;
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    param_2[0xc] = 0;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051cc40;
    }
  }
  else if (plVar1 == (long *)(param_1 + 0x40)) {
    param_2[0xc] = (long)(param_2 + 8);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),param_2 + 8);
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) goto LAB_0051cc40;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xc] = lVar2;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051cc40;
    }
  }
  if (plVar1 == (long *)(param_1 + 0x70)) {
    param_2[0x12] = (long)(param_2 + 0xe);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    return;
  }
                    /* try { // try from 0051cc3c to 0051cc6b has its CatchHandler @ 0051cc7c */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
LAB_0051cc40:
  param_2[0x12] = (long)plVar1;
  return;
}


// ===== 0051ccb8  FUN_0051ccb8 =====

void FUN_0051ccb8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051ccf8;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051ccf8:
  plVar1 = *(long **)(param_1 + 0x60);
  plVar2 = (long *)(param_1 + 0x40);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051cd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051cd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051cd4c  FUN_0051cd4c =====

void FUN_0051cd4c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x90);
  plVar2 = (long *)((long)param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051cd80:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051cd80;
  }
  plVar1 = *(long **)((long)param_1 + 0x60);
  plVar2 = (long *)((long)param_1 + 0x40);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051cdbc;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051cdbc:
  free(param_1);
  return;
}


// ===== 0051cdcc  FUN_0051cdcc =====

void FUN_0051cdcc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (lVar3 < lVar4) {
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      lVar5 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) * lVar3 * 4;
      local_50 = lVar5;
      if (plVar2 == (long *)0x0) {
LAB_0051cec8:
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_0030be88();
        }
        goto LAB_0051cedc;
      }
      uVar7 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 4) = uVar7;
      if (0 < *(long *)(param_1 + 0x20)) {
        lVar6 = 0;
        do {
          local_58 = *(undefined8 *)(param_1 + 0x28);
          plVar2 = *(long **)(param_1 + 0x90);
          local_50 = lVar5;
          if (plVar2 == (long *)0x0) goto LAB_0051cec8;
          (**(code **)(*plVar2 + 0x30))
                    (plVar2,*(long *)(param_1 + 0x18) + lVar3 * 4,&local_50,&local_58);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + *(long *)(param_1 + 0x30) * 4;
        } while (lVar6 < *(long *)(param_1 + 0x20));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051cedc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051cee0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051cee4  FUN_0051cee4 =====

void FUN_0051cee4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00792a20;
  return;
}


// ===== 0051cf0c  FUN_0051cf0c =====

void FUN_0051cf0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00792a20;
  return;
}


// ===== 0051cf20  FUN_0051cf20 =====

void FUN_0051cf20(void)

{
  return;
}


// ===== 0051cf24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051cf28  FUN_0051cf28 =====

undefined4 FUN_0051cf28(undefined8 param_1,undefined8 *param_2)

{
  return *(undefined4 *)*param_2;
}


// ===== 0051cf34  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051cf38  FUN_0051cf38 =====

void FUN_0051cf38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00792a68;
  return;
}


// ===== 0051cf60  FUN_0051cf60 =====

void FUN_0051cf60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00792a68;
  return;
}


// ===== 0051cf74  FUN_0051cf74 =====

void FUN_0051cf74(void)

{
  return;
}


// ===== 0051cf78  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051cf7c  FUN_0051cf7c =====

void FUN_0051cf7c(long param_1)

{
  FUN_0051cf84(param_1 + 8);
  return;
}


// ===== 0051cf84  FUN_0051cf84 =====

void FUN_0051cf84(undefined8 param_1,float *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  
  uVar5 = *param_4;
  if ((long)uVar5 < 0) {
    plVar4 = (long *)FUN_00753a74(8);
    *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  pfVar7 = (float *)*param_3;
  uVar8 = uVar5;
  if ((((ulong)pfVar7 & 3) == 0) && (uVar8 = (ulong)-((uint)pfVar7 >> 2) & 3, uVar5 <= uVar8)) {
    uVar8 = uVar5;
  }
  uVar14 = uVar5 - uVar8;
  uVar13 = uVar14 + 3;
  uVar3 = uVar14 + 7;
  if ((long)uVar8 <= (long)uVar5) {
    uVar13 = uVar14;
    uVar3 = uVar14;
  }
  if (uVar14 + 3 < 7) {
    fVar12 = *pfVar7;
    if (1 < uVar5) {
      lVar6 = uVar5 - 1;
      fVar16 = fVar12;
      do {
        pfVar7 = pfVar7 + 1;
        fVar12 = *pfVar7;
        if (*pfVar7 <= fVar16) {
          fVar12 = fVar16;
        }
        lVar6 = lVar6 + -1;
        fVar16 = fVar12;
      } while (lVar6 != 0);
    }
  }
  else {
    pauVar11 = (undefined1 (*) [16])(pfVar7 + uVar8);
    auVar15 = *pauVar11;
    if (7 < (long)uVar14) {
      auVar17 = pauVar11[1];
      lVar6 = (uVar3 & 0xfffffffffffffff8) + uVar8;
      if (0xf < uVar14) {
        lVar10 = uVar8 + 8;
        pauVar11 = pauVar11 + 3;
        do {
          pauVar1 = pauVar11 + -1;
          auVar2 = *pauVar11;
          lVar10 = lVar10 + 8;
          pauVar11 = pauVar11 + 2;
          auVar15 = NEON_fmax(auVar15,*pauVar1,4);
          auVar17 = NEON_fmax(auVar17,auVar2,4);
        } while (lVar10 < lVar6);
      }
      auVar15 = NEON_fmax(auVar15,auVar17,4);
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar13 & 0xfffffffffffffffc)) {
        auVar15 = NEON_fmax(auVar15,*(undefined1 (*) [16])(pfVar7 + lVar6),4);
      }
    }
    auVar17 = NEON_ext(auVar15,auVar15,8,1);
    lVar6 = (uVar13 & 0xfffffffffffffffc) + uVar8;
    uVar18 = NEON_fcmgt(auVar17._0_8_,auVar15._0_8_,4);
    uVar13 = NEON_bit(auVar15._0_8_,auVar17._0_8_,uVar18,1);
    fVar12 = (float)(uVar13 >> 0x20);
    uVar14 = (ulong)(uint)fVar12;
    if (fVar12 <= (float)uVar13) {
      uVar14 = uVar13 & 0xffffffff;
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar14;
    pfVar9 = pfVar7;
    if (0 < (long)uVar8) {
      do {
        fVar12 = *pfVar9;
        if (*pfVar9 <= auVar15._0_4_) {
          fVar12 = auVar15._0_4_;
        }
        auVar15 = ZEXT416((uint)fVar12);
        uVar8 = uVar8 - 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar8 != 0);
    }
    while (fVar12 = auVar15._0_4_, lVar6 < (long)uVar5) {
      pfVar9 = pfVar7 + lVar6;
      lVar6 = lVar6 + 1;
      auVar15 = ZEXT416((uint)*pfVar9);
      if (*pfVar9 <= fVar12) {
        auVar15 = ZEXT416((uint)fVar12);
      }
    }
  }
  fVar16 = *param_2;
  if (fVar12 != fVar16 && fVar12 < fVar16 == (NAN(fVar12) || NAN(fVar16))) {
    *param_2 = fVar12;
  }
  return;
}


// ===== 0051d0fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051d100  FUN_0051d100 =====

void FUN_0051d100(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792ab0;
  puVar1[1] = uVar2;
  return;
}


// ===== 0051d138  FUN_0051d138 =====

void FUN_0051d138(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792ab0;
  param_2[1] = uVar1;
  return;
}


// ===== 0051d150  FUN_0051d150 =====

void FUN_0051d150(void)

{
  return;
}


// ===== 0051d154  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0051d158  FUN_0051d158 =====

void FUN_0051d158(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_0051d168(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 0051d168  FUN_0051d168 =====

void FUN_0051d168(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  
  lVar9 = *param_1;
  lVar6 = *(long *)(lVar9 + 0x10);
  lVar14 = *(long *)(lVar6 + 0xf0);
  lVar11 = 0;
  if (lVar14 != 0) {
    lVar11 = param_2 / lVar14;
  }
  if (lVar11 < 0) {
LAB_0051d538:
    plVar8 = (long *)FUN_00753a74(8);
    *plVar8 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar8,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  plVar15 = (long *)(lVar6 + 0xc0);
  uVar13 = *(ulong *)(lVar6 + 0xb8);
  plVar8 = plVar15;
  if ((uVar13 & 1) != 0) {
    plVar8 = (long *)*plVar15;
  }
  lVar7 = param_3 - param_2;
  if (lVar7 != 0 && param_2 <= param_3) {
    lVar19 = param_2 - lVar11 * lVar14;
    lVar16 = *(long *)(lVar6 + 0xf8);
    uVar12 = *(ulong *)(lVar6 + 0x70);
    lVar4 = *(long *)(lVar9 + 0x18);
    lVar5 = *(long *)(lVar9 + 0x20);
    plVar1 = (long *)(lVar6 + 0x78);
    uVar10 = uVar12 >> 1;
    lVar18 = plVar8[lVar11] + lVar16 * lVar19;
    uVar17 = uVar13 >> 1;
    if ((uVar12 & 1) == 0) {
      lVar21 = *(long *)(lVar6 + 0x78);
      if (uVar12 < 2) {
        puVar20 = (undefined4 *)(lVar5 + param_2 * 4);
        do {
          lVar19 = lVar19 + 1;
          *puVar20 = *(undefined4 *)(lVar4 + lVar21 * 4 + lVar18 * 4);
          if (lVar19 < lVar14) {
            lVar18 = lVar18 + lVar16;
          }
          else {
            lVar6 = lVar11 + 1;
            if (lVar6 < (long)uVar17) {
              if (lVar11 + 1 < 0 != SCARRY8(lVar11,1)) goto LAB_0051d538;
              lVar19 = 0;
              plVar8 = plVar15;
              if ((uVar13 & 1) != 0) {
                plVar8 = (long *)*plVar15;
              }
              lVar18 = plVar8[lVar6];
              lVar11 = lVar6;
            }
            else {
              lVar19 = 0;
              lVar11 = lVar6;
            }
          }
          lVar7 = lVar7 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar7 != 0);
      }
      else {
        lVar9 = *(long *)(lVar9 + 8);
        if (lVar9 < 1) {
          lVar4 = lVar4 + lVar21 * 4;
          puVar20 = (undefined4 *)(lVar5 + param_2 * 4);
          if ((uVar13 & 1) == 0) {
            do {
              while( true ) {
                lVar19 = lVar19 + 1;
                *puVar20 = *(undefined4 *)(lVar4 + lVar18 * 4);
                if (lVar19 < lVar14) break;
                lVar6 = lVar11 + 1;
                if (lVar6 < (long)uVar17) {
                  if (lVar11 + 1 < 0 != SCARRY8(lVar11,1)) goto LAB_0051d538;
                  lVar18 = plVar15[lVar6];
                }
                lVar19 = 0;
                lVar7 = lVar7 + -1;
                puVar20 = puVar20 + 1;
                lVar11 = lVar6;
                if (lVar7 == 0) {
                  return;
                }
              }
              lVar18 = lVar18 + lVar16;
              lVar7 = lVar7 + -1;
              puVar20 = puVar20 + 1;
            } while (lVar7 != 0);
          }
          else {
            do {
              lVar19 = lVar19 + 1;
              *puVar20 = *(undefined4 *)(lVar4 + lVar18 * 4);
              if (lVar19 < lVar14) {
                lVar18 = lVar18 + lVar16;
              }
              else {
                lVar6 = lVar11 + 1;
                if (lVar6 < (long)uVar17) {
                  if (lVar11 + 1 < 0 != SCARRY8(lVar11,1)) goto LAB_0051d538;
                  lVar19 = 0;
                  lVar18 = *(long *)(*plVar15 + lVar6 * 8);
                  lVar11 = lVar6;
                }
                else {
                  lVar19 = 0;
                  lVar11 = lVar6;
                }
              }
              lVar7 = lVar7 + -1;
              puVar20 = puVar20 + 1;
            } while (lVar7 != 0);
          }
        }
        else {
          lVar7 = *(long *)(lVar6 + 0xb0);
          do {
            lVar3 = lVar4 + lVar18 * 4;
            fVar24 = *(float *)(lVar3 + lVar21 * 4);
            plVar8 = plVar1;
            do {
              lVar22 = 0;
              fVar23 = fVar24;
              do {
                fVar24 = *(float *)(lVar3 + *plVar8 * 4 + lVar22 * 4);
                lVar22 = lVar22 + lVar7;
                if (fVar24 == fVar23 || fVar24 < fVar23 != (NAN(fVar24) || NAN(fVar23))) {
                  fVar24 = fVar23;
                }
                fVar23 = fVar24;
              } while (lVar22 < lVar9);
              plVar8 = plVar8 + 1;
            } while (plVar8 != (long *)(lVar6 + 0x78) + uVar10);
            lVar19 = lVar19 + 1;
            *(float *)(lVar5 + param_2 * 4) = fVar24;
            if (lVar19 < lVar14) {
              lVar18 = lVar18 + lVar16;
            }
            else {
              lVar3 = lVar11 + 1;
              if (lVar3 < (long)uVar17) {
                if (lVar11 + 1 < 0 != SCARRY8(lVar11,1)) goto LAB_0051d538;
                lVar19 = 0;
                plVar8 = plVar15;
                if ((uVar13 & 1) != 0) {
                  plVar8 = (long *)*plVar15;
                }
                lVar18 = plVar8[lVar3];
                lVar11 = lVar3;
              }
              else {
                lVar19 = 0;
                lVar11 = lVar3;
              }
            }
            param_2 = param_2 + 1;
          } while (param_2 != param_3);
        }
      }
    }
    else if ((uVar13 & 1) == 0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar1;
          lVar7 = lVar4 + lVar18 * 4;
          fVar24 = *(float *)(lVar7 + *plVar8 * 4);
          if ((1 < uVar12) && (0 < *(long *)(lVar9 + 8))) {
            plVar2 = plVar8 + uVar10;
            do {
              lVar21 = 0;
              fVar23 = fVar24;
              do {
                fVar24 = *(float *)(lVar7 + *plVar8 * 4 + lVar21 * 4);
                lVar21 = lVar21 + *(long *)(lVar6 + 0xb0);
                if (fVar24 == fVar23 || fVar24 < fVar23 != (NAN(fVar24) || NAN(fVar23))) {
                  fVar24 = fVar23;
                }
                fVar23 = fVar24;
              } while (lVar21 < *(long *)(lVar9 + 8));
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar2);
          }
          lVar19 = lVar19 + 1;
          *(float *)(lVar5 + param_2 * 4) = fVar24;
          if (lVar19 < lVar14) break;
          lVar7 = lVar11 + 1;
          if (lVar7 < (long)uVar17) {
            if (lVar11 + 1 < 0 != SCARRY8(lVar11,1)) goto LAB_0051d538;
            lVar18 = plVar15[lVar7];
          }
          lVar19 = 0;
          param_2 = param_2 + 1;
          lVar11 = lVar7;
          if (param_2 == param_3) {
            return;
          }
        }
        lVar18 = lVar18 + lVar16;
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    else {
      do {
        plVar8 = (long *)*plVar1;
        lVar7 = lVar4 + lVar18 * 4;
        fVar24 = *(float *)(lVar7 + *plVar8 * 4);
        if ((1 < uVar12) && (0 < *(long *)(lVar9 + 8))) {
          plVar2 = plVar8 + uVar10;
          do {
            lVar21 = 0;
            fVar23 = fVar24;
            do {
              fVar24 = *(float *)(lVar7 + *plVar8 * 4 + lVar21 * 4);
              lVar21 = lVar21 + *(long *)(lVar6 + 0xb0);
              if (fVar24 == fVar23 || fVar24 < fVar23 != (NAN(fVar24) || NAN(fVar23))) {
                fVar24 = fVar23;
              }
              fVar23 = fVar24;
            } while (lVar21 < *(long *)(lVar9 + 8));
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar2);
        }
        lVar19 = lVar19 + 1;
        *(float *)(lVar5 + param_2 * 4) = fVar24;
        if (lVar19 < lVar14) {
          lVar18 = lVar18 + lVar16;
        }
        else {
          lVar7 = lVar11 + 1;
          if (lVar7 < (long)uVar17) {
            if (lVar11 == -2 || lVar11 + 2 < 0 != SCARRY8(lVar11,2)) goto LAB_0051d538;
            lVar19 = 0;
            lVar18 = *(long *)(*plVar15 + lVar7 * 8);
            lVar11 = lVar7;
          }
          else {
            lVar19 = 0;
            lVar11 = lVar7;
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 0051d564  FUN_0051d564 =====

void FUN_0051d564(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  double local_138;
  double dStack_130;
  double local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f0 [4];
  long *local_d0 [2];
  long local_c0 [4];
  long *local_a0 [2];
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_004b023c();
  lStack_118 = FUN_004b03ec(param_3);
  if ((*param_2 == 0) || (*param_2 < 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar7 = (long *)param_2[1];
  plVar5 = (long *)param_5[4];
  local_110 = *plVar7;
  lVar2 = plVar7[1];
  lStack_108 = plVar7[2];
  dStack_130 = (double)(lVar2 * 4);
  local_100 = lVar2 * lStack_108;
  lVar9 = lVar2 * 4 * local_110 * lStack_108;
  plVar7 = local_f0;
  local_138 = (double)lVar9;
  local_128 = (double)(lVar9 * 6);
  local_120 = lVar4;
  if (plVar5 == (long *)0x0) {
    local_d0[0] = (long *)0x0;
    plVar5 = (long *)param_6[4];
    if (plVar5 != (long *)0x0) goto LAB_0051d680;
    local_a0[0] = (long *)0x0;
  }
  else if (plVar5 == param_5) {
    local_d0[0] = plVar7;
    (**(code **)(*param_5 + 0x18))(param_5,plVar7);
    plVar5 = (long *)param_6[4];
    local_a0[0] = plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0051d680;
  }
  else {
    local_d0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_6[4];
    if (plVar5 == (long *)0x0) {
      local_a0[0] = (long *)0x0;
    }
    else {
LAB_0051d680:
      local_a0[0] = local_c0;
      if (plVar5 == param_6) {
        (**(code **)(*param_6 + 0x18))(param_6,local_a0[0]);
      }
      else {
                    /* try { // try from 0051d690 to 0051d6b3 has its CatchHandler @ 0051d84c */
        local_a0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  plVar5 = local_c0;
  local_70 = (long *)0x0;
                    /* try { // try from 0051d6b8 to 0051d6bf has its CatchHandler @ 0051d8bc */
  plVar6 = (long *)FUN_00759c3c(0xa0);
  puVar1 = PTR_DAT_007a24c8 + 0x10;
  plVar6[3] = lStack_118;
  plVar6[2] = local_120;
  plVar6[5] = lStack_108;
  plVar6[4] = local_110;
  *plVar6 = (long)puVar1;
  plVar6[6] = local_100;
  if (local_d0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0xc);
LAB_0051d708:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_d0[0] != plVar7) {
      plVar6[0xc] = (long)local_d0[0];
      pplVar8 = local_d0;
      goto LAB_0051d708;
    }
    plVar6[0xc] = (long)(plVar6 + 8);
                    /* try { // try from 0051d720 to 0051d727 has its CatchHandler @ 0051d848 */
    (**(code **)(local_f0[0] + 0x18))(plVar7);
  }
  if (local_a0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0x12);
LAB_0051d74c:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_a0[0] != plVar5) {
      plVar6[0x12] = (long)local_a0[0];
      pplVar8 = local_a0;
      goto LAB_0051d74c;
    }
    plVar6[0x12] = (long)(plVar6 + 0xe);
                    /* try { // try from 0051d764 to 0051d76b has its CatchHandler @ 0051d844 */
    (**(code **)(local_c0[0] + 0x18))(plVar5);
  }
                    /* try { // try from 0051d770 to 0051d787 has its CatchHandler @ 0051d884 */
  local_70 = plVar6;
  FUN_0063c634(param_4,lVar2,&local_138,local_90);
  if (local_70 == local_90) {
    lVar4 = 0x20;
    plVar6 = local_90;
LAB_0051d7a8:
    (**(code **)(*plVar6 + lVar4))();
  }
  else if (local_70 != (long *)0x0) {
    lVar4 = 0x28;
    plVar6 = local_70;
    goto LAB_0051d7a8;
  }
  if (local_a0[0] == plVar5) {
    lVar4 = 0x20;
LAB_0051d7d4:
    (**(code **)(*plVar5 + lVar4))(plVar5);
  }
  else if (local_a0[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar5 = local_a0[0];
    goto LAB_0051d7d4;
  }
  if (local_d0[0] == plVar7) {
    lVar4 = 0x20;
  }
  else {
    if (local_d0[0] == (long *)0x0) goto LAB_0051d814;
    lVar4 = 0x28;
    plVar7 = local_d0[0];
  }
  (**(code **)(*plVar7 + lVar4))(plVar7);
LAB_0051d814:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0051d8e4  FUN_0051d8e4 =====

void FUN_0051d8e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051d924;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051d924:
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051d968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051d94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051d978  FUN_0051d978 =====

void FUN_0051d978(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24c8 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051d9c8;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051d9c8:
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0051da0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0051da1c  FUN_0051da1c =====

void FUN_0051da1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24c8 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051da60:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051da60;
  }
  plVar1 = (long *)param_1[0xc];
  plVar2 = param_1 + 8;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051da9c;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051da9c:
  free(param_1);
  return;
}


// ===== 0051daac  FUN_0051daac =====

undefined8 * FUN_0051daac(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar5;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  plVar2 = *(long **)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_00792af8;
  puVar1[6] = uVar4;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x40)) {
      lVar3 = *plVar2;
      puVar1[0xc] = puVar1 + 8;
      (**(code **)(lVar3 + 0x18))(plVar2,puVar1 + 8);
      goto LAB_0051db2c;
    }
                    /* try { // try from 0051db0c to 0051db2b has its CatchHandler @ 0051dbd0 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0xc] = plVar2;
LAB_0051db2c:
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x70)) {
      lVar3 = *plVar2;
      puVar1[0x12] = puVar1 + 0xe;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0051db48 to 0051db77 has its CatchHandler @ 0051db8c */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0x12] = plVar2;
  return puVar1;
}


// ===== 0051dbe4  FUN_0051dbe4 =====

void FUN_0051dbe4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_2 = (long)(PTR_DAT_007a24c8 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  param_2[6] = *(long *)(param_1 + 0x30);
  param_2[3] = lVar5;
  param_2[2] = lVar4;
  param_2[5] = lVar3;
  param_2[4] = lVar2;
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    param_2[0xc] = 0;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051dc98;
    }
  }
  else if (plVar1 == (long *)(param_1 + 0x40)) {
    param_2[0xc] = (long)(param_2 + 8);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),param_2 + 8);
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) goto LAB_0051dc98;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xc] = lVar2;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051dc98;
    }
  }
  if (plVar1 == (long *)(param_1 + 0x70)) {
    param_2[0x12] = (long)(param_2 + 0xe);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    return;
  }
                    /* try { // try from 0051dc94 to 0051dcc3 has its CatchHandler @ 0051dcd4 */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
LAB_0051dc98:
  param_2[0x12] = (long)plVar1;
  return;
}


// ===== 0051dd10  FUN_0051dd10 =====

void FUN_0051dd10(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051dd50;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051dd50:
  plVar1 = *(long **)(param_1 + 0x60);
  plVar2 = (long *)(param_1 + 0x40);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051dd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051dd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051dda4  FUN_0051dda4 =====

void FUN_0051dda4(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x90);
  plVar2 = (long *)((long)param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051ddd8:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051ddd8;
  }
  plVar1 = *(long **)((long)param_1 + 0x60);
  plVar2 = (long *)((long)param_1 + 0x40);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051de14;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051de14:
  free(param_1);
  return;
}


// ===== 0051de24  FUN_0051de24 =====

void FUN_0051de24(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  lVar5 = *param_3;
  if (lVar4 < lVar5) {
    do {
      plVar3 = *(long **)(param_1 + 0x60);
      lVar6 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) * lVar4 * 4;
      local_50 = lVar6;
      if (plVar3 == (long *)0x0) {
LAB_0051df20:
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_0030be88();
        }
        goto LAB_0051df34;
      }
      uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
      *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar4 * 4) = uVar2;
      if (0 < *(long *)(param_1 + 0x20)) {
        lVar7 = 0;
        do {
          local_58 = *(undefined8 *)(param_1 + 0x28);
          plVar3 = *(long **)(param_1 + 0x90);
          local_50 = lVar6;
          if (plVar3 == (long *)0x0) goto LAB_0051df20;
          (**(code **)(*plVar3 + 0x30))
                    (plVar3,*(long *)(param_1 + 0x18) + lVar4 * 4,&local_50,&local_58);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + *(long *)(param_1 + 0x30) * 4;
        } while (lVar7 < *(long *)(param_1 + 0x20));
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051df34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051df38  FUN_0051df38 =====

void FUN_0051df38(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  double local_138;
  double dStack_130;
  double local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f0 [4];
  long *local_d0 [2];
  long local_c0 [4];
  long *local_a0 [2];
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_004ba96c();
  lStack_118 = FUN_004bb758(param_3);
  if ((*param_2 == 0) || (*param_2 < 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar7 = (long *)param_2[1];
  plVar5 = (long *)param_5[4];
  local_110 = *plVar7;
  lVar2 = plVar7[1];
  lStack_108 = plVar7[2];
  dStack_130 = (double)(lVar2 * 8);
  local_100 = lVar2 * lStack_108;
  lVar9 = lVar2 * 8 * local_110 * lStack_108;
  plVar7 = local_f0;
  local_138 = (double)lVar9;
  local_128 = (double)(lVar9 * 6);
  local_120 = lVar4;
  if (plVar5 == (long *)0x0) {
    local_d0[0] = (long *)0x0;
    plVar5 = (long *)param_6[4];
    if (plVar5 != (long *)0x0) goto LAB_0051e054;
    local_a0[0] = (long *)0x0;
  }
  else if (plVar5 == param_5) {
    local_d0[0] = plVar7;
    (**(code **)(*param_5 + 0x18))(param_5,plVar7);
    plVar5 = (long *)param_6[4];
    local_a0[0] = plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0051e054;
  }
  else {
    local_d0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_6[4];
    if (plVar5 == (long *)0x0) {
      local_a0[0] = (long *)0x0;
    }
    else {
LAB_0051e054:
      local_a0[0] = local_c0;
      if (plVar5 == param_6) {
        (**(code **)(*param_6 + 0x18))(param_6,local_a0[0]);
      }
      else {
                    /* try { // try from 0051e064 to 0051e087 has its CatchHandler @ 0051e220 */
        local_a0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  plVar5 = local_c0;
  local_70 = (long *)0x0;
                    /* try { // try from 0051e08c to 0051e093 has its CatchHandler @ 0051e290 */
  plVar6 = (long *)FUN_00759c3c(0xa0);
  puVar1 = PTR_DAT_007a24d0 + 0x10;
  plVar6[3] = lStack_118;
  plVar6[2] = local_120;
  plVar6[5] = lStack_108;
  plVar6[4] = local_110;
  *plVar6 = (long)puVar1;
  plVar6[6] = local_100;
  if (local_d0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0xc);
LAB_0051e0dc:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_d0[0] != plVar7) {
      plVar6[0xc] = (long)local_d0[0];
      pplVar8 = local_d0;
      goto LAB_0051e0dc;
    }
    plVar6[0xc] = (long)(plVar6 + 8);
                    /* try { // try from 0051e0f4 to 0051e0fb has its CatchHandler @ 0051e21c */
    (**(code **)(local_f0[0] + 0x18))(plVar7);
  }
  if (local_a0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0x12);
LAB_0051e120:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_a0[0] != plVar5) {
      plVar6[0x12] = (long)local_a0[0];
      pplVar8 = local_a0;
      goto LAB_0051e120;
    }
    plVar6[0x12] = (long)(plVar6 + 0xe);
                    /* try { // try from 0051e138 to 0051e13f has its CatchHandler @ 0051e218 */
    (**(code **)(local_c0[0] + 0x18))(plVar5);
  }
                    /* try { // try from 0051e144 to 0051e15b has its CatchHandler @ 0051e258 */
  local_70 = plVar6;
  FUN_0063c634(param_4,lVar2,&local_138,local_90);
  if (local_70 == local_90) {
    lVar4 = 0x20;
    plVar6 = local_90;
LAB_0051e17c:
    (**(code **)(*plVar6 + lVar4))();
  }
  else if (local_70 != (long *)0x0) {
    lVar4 = 0x28;
    plVar6 = local_70;
    goto LAB_0051e17c;
  }
  if (local_a0[0] == plVar5) {
    lVar4 = 0x20;
LAB_0051e1a8:
    (**(code **)(*plVar5 + lVar4))(plVar5);
  }
  else if (local_a0[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar5 = local_a0[0];
    goto LAB_0051e1a8;
  }
  if (local_d0[0] == plVar7) {
    lVar4 = 0x20;
  }
  else {
    if (local_d0[0] == (long *)0x0) goto LAB_0051e1e8;
    lVar4 = 0x28;
    plVar7 = local_d0[0];
  }
  (**(code **)(*plVar7 + lVar4))(plVar7);
LAB_0051e1e8:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0051e2b8  FUN_0051e2b8 =====

void FUN_0051e2b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051e2f8;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051e2f8:
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051e34c  FUN_0051e34c =====

void FUN_0051e34c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24d0 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051e39c;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051e39c:
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0051e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051e3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0051e3f0  FUN_0051e3f0 =====

void FUN_0051e3f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24d0 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051e434:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051e434;
  }
  plVar1 = (long *)param_1[0xc];
  plVar2 = param_1 + 8;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051e470;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051e470:
  free(param_1);
  return;
}


// ===== 0051e480  FUN_0051e480 =====

undefined8 * FUN_0051e480(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar5;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  plVar2 = *(long **)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_00792b40;
  puVar1[6] = uVar4;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x40)) {
      lVar3 = *plVar2;
      puVar1[0xc] = puVar1 + 8;
      (**(code **)(lVar3 + 0x18))(plVar2,puVar1 + 8);
      goto LAB_0051e500;
    }
                    /* try { // try from 0051e4e0 to 0051e4ff has its CatchHandler @ 0051e5a4 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0xc] = plVar2;
LAB_0051e500:
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x70)) {
      lVar3 = *plVar2;
      puVar1[0x12] = puVar1 + 0xe;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0051e51c to 0051e54b has its CatchHandler @ 0051e560 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0x12] = plVar2;
  return puVar1;
}


// ===== 0051e5b8  FUN_0051e5b8 =====

void FUN_0051e5b8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_2 = (long)(PTR_DAT_007a24d0 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  param_2[6] = *(long *)(param_1 + 0x30);
  param_2[3] = lVar5;
  param_2[2] = lVar4;
  param_2[5] = lVar3;
  param_2[4] = lVar2;
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    param_2[0xc] = 0;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051e66c;
    }
  }
  else if (plVar1 == (long *)(param_1 + 0x40)) {
    param_2[0xc] = (long)(param_2 + 8);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),param_2 + 8);
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) goto LAB_0051e66c;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xc] = lVar2;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051e66c;
    }
  }
  if (plVar1 == (long *)(param_1 + 0x70)) {
    param_2[0x12] = (long)(param_2 + 0xe);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    return;
  }
                    /* try { // try from 0051e668 to 0051e697 has its CatchHandler @ 0051e6a8 */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
LAB_0051e66c:
  param_2[0x12] = (long)plVar1;
  return;
}


// ===== 0051e6e4  FUN_0051e6e4 =====

void FUN_0051e6e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051e724;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051e724:
  plVar1 = *(long **)(param_1 + 0x60);
  plVar2 = (long *)(param_1 + 0x40);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051e768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051e778  FUN_0051e778 =====

void FUN_0051e778(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x90);
  plVar2 = (long *)((long)param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051e7ac:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051e7ac;
  }
  plVar1 = *(long **)((long)param_1 + 0x60);
  plVar2 = (long *)((long)param_1 + 0x40);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051e7e8;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051e7e8:
  free(param_1);
  return;
}


// ===== 0051e7f8  FUN_0051e7f8 =====

void FUN_0051e7f8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_2;
  lVar5 = *param_3;
  if (lVar4 < lVar5) {
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      lVar6 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) * lVar4 * 8;
      local_50 = lVar6;
      if (plVar2 == (long *)0x0) {
LAB_0051e8f4:
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_0030be88();
        }
        goto LAB_0051e908;
      }
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4 * 8) = uVar3;
      if (0 < *(long *)(param_1 + 0x20)) {
        lVar7 = 0;
        do {
          local_58 = *(undefined8 *)(param_1 + 0x28);
          plVar2 = *(long **)(param_1 + 0x90);
          local_50 = lVar6;
          if (plVar2 == (long *)0x0) goto LAB_0051e8f4;
          (**(code **)(*plVar2 + 0x30))
                    (plVar2,*(long *)(param_1 + 0x18) + lVar4 * 8,&local_50,&local_58);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + *(long *)(param_1 + 0x30) * 8;
        } while (lVar7 < *(long *)(param_1 + 0x20));
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051e908:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051e90c  FUN_0051e90c =====

void FUN_0051e90c(undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  double local_138;
  double dStack_130;
  double local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f0 [4];
  long *local_d0 [2];
  long local_c0 [4];
  long *local_a0 [2];
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_004afd7c();
  lStack_118 = FUN_004aff2c(param_3);
  if ((*param_2 == 0) || (*param_2 < 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar7 = (long *)param_2[1];
  plVar5 = (long *)param_5[4];
  local_110 = *plVar7;
  lVar2 = plVar7[1];
  lStack_108 = plVar7[2];
  dStack_130 = (double)(lVar2 * 8);
  local_100 = lVar2 * lStack_108;
  lVar9 = lVar2 * 8 * local_110 * lStack_108;
  plVar7 = local_f0;
  local_138 = (double)lVar9;
  local_128 = (double)(lVar9 * 6);
  local_120 = lVar4;
  if (plVar5 == (long *)0x0) {
    local_d0[0] = (long *)0x0;
    plVar5 = (long *)param_6[4];
    if (plVar5 != (long *)0x0) goto LAB_0051ea28;
    local_a0[0] = (long *)0x0;
  }
  else if (plVar5 == param_5) {
    local_d0[0] = plVar7;
    (**(code **)(*param_5 + 0x18))(param_5,plVar7);
    plVar5 = (long *)param_6[4];
    local_a0[0] = plVar5;
    if (plVar5 != (long *)0x0) goto LAB_0051ea28;
  }
  else {
    local_d0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
    plVar5 = (long *)param_6[4];
    if (plVar5 == (long *)0x0) {
      local_a0[0] = (long *)0x0;
    }
    else {
LAB_0051ea28:
      local_a0[0] = local_c0;
      if (plVar5 == param_6) {
        (**(code **)(*param_6 + 0x18))(param_6,local_a0[0]);
      }
      else {
                    /* try { // try from 0051ea38 to 0051ea5b has its CatchHandler @ 0051ebf4 */
        local_a0[0] = (long *)(**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  plVar5 = local_c0;
  local_70 = (long *)0x0;
                    /* try { // try from 0051ea60 to 0051ea67 has its CatchHandler @ 0051ec64 */
  plVar6 = (long *)FUN_00759c3c(0xa0);
  puVar1 = PTR_DAT_007a24d8 + 0x10;
  plVar6[3] = lStack_118;
  plVar6[2] = local_120;
  plVar6[5] = lStack_108;
  plVar6[4] = local_110;
  *plVar6 = (long)puVar1;
  plVar6[6] = local_100;
  if (local_d0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0xc);
LAB_0051eab0:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_d0[0] != plVar7) {
      plVar6[0xc] = (long)local_d0[0];
      pplVar8 = local_d0;
      goto LAB_0051eab0;
    }
    plVar6[0xc] = (long)(plVar6 + 8);
                    /* try { // try from 0051eac8 to 0051eacf has its CatchHandler @ 0051ebf0 */
    (**(code **)(local_f0[0] + 0x18))(plVar7);
  }
  if (local_a0[0] == (long *)0x0) {
    pplVar8 = (long **)(plVar6 + 0x12);
LAB_0051eaf4:
    *pplVar8 = (long *)0x0;
  }
  else {
    if (local_a0[0] != plVar5) {
      plVar6[0x12] = (long)local_a0[0];
      pplVar8 = local_a0;
      goto LAB_0051eaf4;
    }
    plVar6[0x12] = (long)(plVar6 + 0xe);
                    /* try { // try from 0051eb0c to 0051eb13 has its CatchHandler @ 0051ebec */
    (**(code **)(local_c0[0] + 0x18))(plVar5);
  }
                    /* try { // try from 0051eb18 to 0051eb2f has its CatchHandler @ 0051ec2c */
  local_70 = plVar6;
  FUN_0063c634(param_4,lVar2,&local_138,local_90);
  if (local_70 == local_90) {
    lVar4 = 0x20;
    plVar6 = local_90;
LAB_0051eb50:
    (**(code **)(*plVar6 + lVar4))();
  }
  else if (local_70 != (long *)0x0) {
    lVar4 = 0x28;
    plVar6 = local_70;
    goto LAB_0051eb50;
  }
  if (local_a0[0] == plVar5) {
    lVar4 = 0x20;
LAB_0051eb7c:
    (**(code **)(*plVar5 + lVar4))(plVar5);
  }
  else if (local_a0[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar5 = local_a0[0];
    goto LAB_0051eb7c;
  }
  if (local_d0[0] == plVar7) {
    lVar4 = 0x20;
  }
  else {
    if (local_d0[0] == (long *)0x0) goto LAB_0051ebbc;
    lVar4 = 0x28;
    plVar7 = local_d0[0];
  }
  (**(code **)(*plVar7 + lVar4))(plVar7);
LAB_0051ebbc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0051ec8c  FUN_0051ec8c =====

void FUN_0051ec8c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar2 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051eccc;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051eccc:
  plVar1 = *(long **)(param_1 + 0x50);
  plVar2 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051ecf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051ed20  FUN_0051ed20 =====

void FUN_0051ed20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24d8 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051ed70;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051ed70:
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0051edb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051ed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))();
    return;
  }
  return;
}


// ===== 0051edc4  FUN_0051edc4 =====

void FUN_0051edc4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[0x12];
  plVar2 = param_1 + 0xe;
  *param_1 = (long)(PTR_DAT_007a24d8 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051ee08:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051ee08;
  }
  plVar1 = (long *)param_1[0xc];
  plVar2 = param_1 + 8;
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051ee44;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051ee44:
  free(param_1);
  return;
}


// ===== 0051ee54  FUN_0051ee54 =====

undefined8 * FUN_0051ee54(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = uVar5;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  plVar2 = *(long **)(param_1 + 0x60);
  *puVar1 = &PTR_FUN_00792b88;
  puVar1[6] = uVar4;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x40)) {
      lVar3 = *plVar2;
      puVar1[0xc] = puVar1 + 8;
      (**(code **)(lVar3 + 0x18))(plVar2,puVar1 + 8);
      goto LAB_0051eed4;
    }
                    /* try { // try from 0051eeb4 to 0051eed3 has its CatchHandler @ 0051ef78 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0xc] = plVar2;
LAB_0051eed4:
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x70)) {
      lVar3 = *plVar2;
      puVar1[0x12] = puVar1 + 0xe;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0051eef0 to 0051ef1f has its CatchHandler @ 0051ef34 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[0x12] = plVar2;
  return puVar1;
}


// ===== 0051ef8c  FUN_0051ef8c =====

void FUN_0051ef8c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_2 = (long)(PTR_DAT_007a24d8 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x20);
  param_2[6] = *(long *)(param_1 + 0x30);
  param_2[3] = lVar5;
  param_2[2] = lVar4;
  param_2[5] = lVar3;
  param_2[4] = lVar2;
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 == (long *)0x0) {
    param_2[0xc] = 0;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051f040;
    }
  }
  else if (plVar1 == (long *)(param_1 + 0x40)) {
    param_2[0xc] = (long)(param_2 + 8);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),param_2 + 8);
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) goto LAB_0051f040;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    param_2[0xc] = lVar2;
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto LAB_0051f040;
    }
  }
  if (plVar1 == (long *)(param_1 + 0x70)) {
    param_2[0x12] = (long)(param_2 + 0xe);
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))();
    return;
  }
                    /* try { // try from 0051f03c to 0051f06b has its CatchHandler @ 0051f07c */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x10))();
LAB_0051f040:
  param_2[0x12] = (long)plVar1;
  return;
}


// ===== 0051f0b8  FUN_0051f0b8 =====

void FUN_0051f0b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x90);
  plVar2 = (long *)(param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051f0f8;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051f0f8:
  plVar1 = *(long **)(param_1 + 0x60);
  plVar2 = (long *)(param_1 + 0x40);
  if (plVar1 == plVar2) {
                    /* WARNING: Could not recover jumptable at 0x0051f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2);
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0051f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}


// ===== 0051f14c  FUN_0051f14c =====

void FUN_0051f14c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x90);
  plVar2 = (long *)((long)param_1 + 0x70);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
LAB_0051f180:
    (**(code **)(*plVar2 + lVar3))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar3 = 0x28;
    plVar2 = plVar1;
    goto LAB_0051f180;
  }
  plVar1 = *(long **)((long)param_1 + 0x60);
  plVar2 = (long *)((long)param_1 + 0x40);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0051f1bc;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_0051f1bc:
  free(param_1);
  return;
}


// ===== 0051f1cc  FUN_0051f1cc =====

void FUN_0051f1cc(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  lVar4 = *param_3;
  if (lVar3 < lVar4) {
    do {
      plVar2 = *(long **)(param_1 + 0x60);
      lVar5 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) * lVar3 * 8;
      local_50 = lVar5;
      if (plVar2 == (long *)0x0) {
LAB_0051f2c8:
        if (*(long *)(lVar1 + 0x28) == local_48) {
          FUN_0030be88();
        }
        goto LAB_0051f2dc;
      }
      uVar7 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3 * 8) = uVar7;
      if (0 < *(long *)(param_1 + 0x20)) {
        lVar6 = 0;
        do {
          local_58 = *(undefined8 *)(param_1 + 0x28);
          plVar2 = *(long **)(param_1 + 0x90);
          local_50 = lVar5;
          if (plVar2 == (long *)0x0) goto LAB_0051f2c8;
          (**(code **)(*plVar2 + 0x30))
                    (plVar2,*(long *)(param_1 + 0x18) + lVar3 * 8,&local_50,&local_58);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + *(long *)(param_1 + 0x30) * 8;
        } while (lVar6 < *(long *)(param_1 + 0x20));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0051f2dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051f2e0  FUN_0051f2e0 =====

void FUN_0051f2e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x50);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 0051f320 to 0051f327 has its CatchHandler @ 0051f3a4 */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 0051f328 to 0051f33b has its CatchHandler @ 0051f37c */
  FUN_00524e44(plVar1 + 2,param_3,0,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_007928b0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 0051f3b8  FUN_0051f3b8 =====

void FUN_0051f3b8(undefined8 *param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[3]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0051f404  FUN_0051f404 =====

void FUN_0051f404(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(param_2 + 0x10);
  local_38 = uVar2 >> 1;
  lStack_30 = param_2 + 0x18;
  if ((uVar2 & 1) != 0) {
    lStack_30 = *(long *)(param_2 + 0x18);
  }
  if ((1 < uVar2) && (lStack_30 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_0051f490(param_3,&local_38,*(undefined1 *)(param_2 + 0x48),*(undefined1 *)(param_2 + 0x49));
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0051f490  FUN_0051f490 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0051f490(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  char local_244 [4];
  undefined1 auStack_240 [56];
  void *local_208;
  ulong local_200;
  void *local_1f8;
  void *local_1c8;
  void *local_1c0;
  ulong local_190;
  void *local_188;
  undefined8 local_158;
  undefined8 local_150;
  ulong local_148;
  void *local_140;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 *******local_f8 [6];
  ulong local_c8;
  undefined8 *******local_c0 [6];
  ulong local_90;
  undefined8 *******local_88 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0051f878(param_1,*param_2,param_2[1],param_3 != 0);
  if ((uVar4 & 1) == 0) {
    local_90 = 0;
    local_c8 = 0;
    local_100 = 0;
                    /* try { // try from 0051f4f0 to 0051f543 has its CatchHandler @ 0051f830 */
    uVar4 = FUN_00519fa8(param_1,param_2,param_3,param_4 & 1,local_244,&local_90,&local_c8,
                         &local_100,0x3c,PTR_FUN_007a2500,PTR_FUN_007a24f8,PTR_FUN_007a24f0,
                         PTR_FUN_007a24e8);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0051f594 to 0051f59f has its CatchHandler @ 0051f820 */
      lVar5 = FUN_004ae6a8(param_1,0);
      pppppppuVar1 = local_c0;
      if ((local_c8 & 1) != 0) {
        pppppppuVar1 = local_c0[0];
      }
      if ((1 < local_c8) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_0051f75c;
                    /* try { // try from 0051f5c8 to 0051f5cf has its CatchHandler @ 0051f810 */
      FUN_005ca9a8(&local_200,local_c8 >> 1);
                    /* try { // try from 0051f5d0 to 0051f5df has its CatchHandler @ 0051f7c0 */
      uVar6 = FUN_0058d3bc(param_1,0,&local_200);
      pvVar3 = local_1c8;
      local_1c8 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      if (local_244[0] == '@') {
                    /* try { // try from 0051f600 to 0051f607 has its CatchHandler @ 0051f7b0 */
        lVar7 = FUN_005cabcc(lVar5 + 0x18);
        if (lVar7 == 1) {
                    /* try { // try from 0051f610 to 0051f617 has its CatchHandler @ 0051f770 */
          pfVar8 = (float *)FUN_004ae878(lVar5);
                    /* try { // try from 0051f618 to 0051f623 has its CatchHandler @ 0051f760 */
          pfVar9 = (float *)FUN_004aea28(uVar6);
          *pfVar9 = *pfVar8 + 0.0;
        }
        else {
                    /* try { // try from 0051f710 to 0051f71b has its CatchHandler @ 0051f7b0 */
          FUN_00511654(lVar5 + 0x18,param_3);
        }
      }
      else {
        local_200 = 0;
        local_1c8 = (void *)0x0;
        local_190 = 0;
        pppppppuVar1 = local_88;
        if ((local_90 & 1) != 0) {
          pppppppuVar1 = local_88[0];
        }
        local_150 = 0;
        local_148 = 0;
        local_158 = 0;
        local_110 = 0;
        uStack_108 = 0;
        if ((1 < local_90) && (pppppppuVar1 == (undefined8 *******)0x0)) {
LAB_0051f75c:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 0051f698 to 0051f69f has its CatchHandler @ 0051f798 */
        FUN_005ca9a8(auStack_240,local_90 >> 1);
        pppppppuVar1 = local_f8;
        if ((local_100 & 1) != 0) {
          pppppppuVar1 = local_f8[0];
        }
        if ((1 < local_100) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_0051f75c;
                    /* try { // try from 0051f6c8 to 0051f6db has its CatchHandler @ 0051f780 */
        FUN_0051fe84(uVar6,auStack_240,lVar5,local_100 >> 1,pppppppuVar1,
                     *(undefined8 *)(param_1 + 0x18),&local_200);
        pvVar3 = local_208;
        local_208 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        if ((local_148 & 1) != 0) {
          free(local_140);
        }
        if ((local_190 & 1) != 0) {
          free(local_188);
        }
        if (((ulong)local_1c8 & 1) != 0) {
          free(local_1c0);
        }
        if ((local_200 & 1) != 0) {
          free(local_1f8);
        }
      }
    }
    if ((local_100 & 1) != 0) {
      free(local_f8[0]);
    }
    if ((local_c8 & 1) != 0) {
      free(local_c0[0]);
    }
    if ((local_90 & 1) != 0) {
      free(local_88[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0051f878  FUN_0051f878 =====

void FUN_0051f878(long *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_120 [24];
  ulong *local_108;
  ulong *local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 **local_e8;
  ulong local_e0;
  undefined8 *local_b8 [7];
  void *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_1,0);
  lVar6 = FUN_005cabcc(lVar5 + 0x18);
  if (lVar6 == 0) {
    local_108 = (ulong *)0x0;
    local_100 = (ulong *)0x0;
    local_f8 = 0;
                    /* try { // try from 0051f8e0 to 0051f8e7 has its CatchHandler @ 0051fe2c */
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar4 == 2) {
      if (param_2 != 0) {
        uVar10 = FUN_00753a74(0x88);
                    /* try { // try from 0051fd20 to 0051fd27 has its CatchHandler @ 0051fdf4 */
        FUN_00645c30(&local_f0);
                    /* try { // try from 0051fd28 to 0051fd47 has its CatchHandler @ 0051fde4 */
        FUN_0047488c(local_b8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_ops.cc"
                     ,0x35a,
                     "bool onnxruntime::check_and_reduce_empty_set_input(OpKernelContext *, const gsl::span<const int64_t>, bool) [AGG = onnxruntime::ReduceAggregatorMean<float>]"
                     ,&local_f0);
                    /* try { // try from 0051fd48 to 0051fd57 has its CatchHandler @ 0051fdc4 */
        FUN_00479eac(auStack_120,
                     "Axes input and attribute should not both be present for reduction.");
                    /* try { // try from 0051fd5c to 0051fd9f has its CatchHandler @ 0051fdac */
        plVar9 = (long *)FUN_00474a40(uVar10,local_b8,"axes.empty()",auStack_120);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar10,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0051fe80;
      }
                    /* try { // try from 0051f8f4 to 0051f8ff has its CatchHandler @ 0051fe14 */
      lVar7 = FUN_004ae6a8(param_1,1);
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0051fcd4;
      lVar13 = **(long **)(lVar7 + 0x20);
                    /* try { // try from 0051f910 to 0051f913 has its CatchHandler @ 0051fe0c */
      lVar7 = FUN_004ba96c();
                    /* try { // try from 0051f920 to 0051f92b has its CatchHandler @ 0051fe04 */
      FUN_0051a524(&local_108,local_108,lVar7,lVar7 + lVar13 * 8,lVar13);
    }
    else {
      uVar15 = (long)local_100 - (long)local_108 >> 3;
      if (param_2 < uVar15 || param_2 - uVar15 == 0) {
        if (param_2 < uVar15) {
          local_100 = local_108 + param_2;
        }
      }
      else {
                    /* try { // try from 0051f944 to 0051f94b has its CatchHandler @ 0051fe2c */
        FUN_004ffdcc(&local_108,param_2 - uVar15);
      }
      if (param_3 == (ulong *)0x0) {
        if (param_2 != 0) goto LAB_0051fcd4;
      }
      else if (param_2 != 0) {
        lVar7 = param_2 << 3;
        puVar11 = local_108;
        puVar14 = param_3;
        do {
          if (param_3 + param_2 <= puVar14) goto LAB_0051fcd4;
          lVar7 = lVar7 + -8;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar7 != 0);
      }
    }
    uVar15 = *(ulong *)(lVar5 + 0x18);
    if ((uVar15 == 0xffffffffffffffff) || ((uVar15 != 0 && (*(long *)(lVar5 + 0x20) == 0)))) {
LAB_0051fcd4:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if ((long)uVar15 < 0) {
      plVar9 = (long *)FUN_00753a74(8);
      *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0051fd00 to 0051fd13 has its CatchHandler @ 0051fe24 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_0051fe80;
    }
    local_f0 = 0;
    if (uVar15 != 0) {
      if ((param_4 & 1) == 0) {
        if (local_108 != local_100) {
          uVar12 = 0;
          do {
            puVar11 = local_108;
            if (local_108 != local_100) {
              do {
                if (*puVar11 == uVar12) {
                  if (puVar11 != local_100) goto LAB_0051fad0;
                  break;
                }
                puVar11 = puVar11 + 1;
              } while (puVar11 != local_100);
              if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_0051fcd4;
              local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
              uVar1 = 6;
              if ((local_f0 & 1) != 0) {
                uVar1 = local_e0;
              }
              if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 0051fb54 to 0051fb5f has its CatchHandler @ 0051fda0 */
                FUN_004c7d34(&local_f0,local_b8);
              }
              else {
                pppuVar2 = &local_e8;
                if ((local_f0 & 1) != 0) {
                  pppuVar2 = (undefined8 ***)local_e8;
                }
                pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
                local_f0 = local_f0 + 2;
              }
            }
LAB_0051fad0:
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar15);
        }
      }
      else {
        uVar12 = 0;
        do {
          puVar11 = local_108;
          if (local_108 == local_100) {
LAB_0051f9fc:
            local_b8[0] = (undefined8 **)0x1;
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 != uVar1) {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)0x1;
              goto LAB_0051fa74;
            }
                    /* try { // try from 0051fa90 to 0051fa9b has its CatchHandler @ 0051fda8 */
            FUN_004c7d34(&local_f0,local_b8);
          }
          else {
            do {
              if (*puVar11 == uVar12) {
                if (puVar11 != local_100) goto LAB_0051f9fc;
                break;
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != local_100);
            if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_0051fcd4;
            local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 0051faa0 to 0051faab has its CatchHandler @ 0051fda4 */
              FUN_004c7d34(&local_f0,local_b8);
            }
            else {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
LAB_0051fa74:
              local_f0 = local_f0 + 2;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
    }
    pppuVar2 = &local_e8;
    if ((local_f0 & 1) != 0) {
      pppuVar2 = (undefined8 ***)local_e8;
    }
    if ((1 < local_f0) && (pppuVar2 == (undefined8 ***)0x0)) goto LAB_0051fcd4;
                    /* try { // try from 0051fb88 to 0051fb8f has its CatchHandler @ 0051fe1c */
    FUN_005ca9a8(local_b8,local_f0 >> 1);
                    /* try { // try from 0051fb90 to 0051fbc3 has its CatchHandler @ 0051fe34 */
    lVar5 = FUN_0058d3bc(param_1,0,local_b8);
    lVar7 = FUN_005cabcc(local_b8);
    if (lVar7 != 0) {
      pvVar8 = (void *)FUN_004aea28(lVar5);
      uVar12 = FUN_005cabcc(lVar5 + 0x18);
      uVar15 = uVar12;
      if ((((ulong)pvVar8 & 3) == 0) &&
         (uVar15 = (ulong)-((uint)pvVar8 >> 2) & 3, (long)uVar12 <= (long)uVar15)) {
        uVar15 = uVar12;
      }
      uVar16 = uVar12 - uVar15;
      uVar1 = uVar16 + 3;
      if (-1 < (long)uVar16) {
        uVar1 = uVar16;
      }
      if (0 < (long)uVar15) {
        memset(pvVar8,0,uVar15 << 2);
      }
      lVar5 = (uVar1 & 0xfffffffffffffffc) + uVar15;
      if (3 < (long)uVar16) {
        lVar7 = lVar5;
        if (lVar5 <= (long)(uVar15 + 4)) {
          lVar7 = uVar15 + 4;
        }
        memset((void *)((long)pvVar8 + uVar15 * 4),0,
               (lVar7 + ~uVar15 & 0x3ffffffffffffffc) * 4 + 0x10);
      }
      if (lVar5 < (long)uVar12) {
        memset((void *)((long)pvVar8 + uVar15 * 4 + ((long)uVar1 >> 2) * 0x10),0,
               ((long)uVar16 % 4) * 4);
      }
    }
    pvVar8 = local_80;
    local_80 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
    }
    if ((local_f0 & 1) != 0) {
      free(local_e8);
    }
    if (local_108 != (ulong *)0x0) {
      local_100 = local_108;
      free(local_108);
    }
  }
  plVar9 = (long *)(ulong)(lVar6 == 0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0051fe80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar9);
}


// ===== 0051fe84  FUN_0051fe84 =====

void FUN_0051fe84(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  float *pfVar7;
  void *__ptr;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  double local_120 [3];
  long local_108;
  long lStack_100;
  long local_f8;
  float *pfStack_f0;
  float *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  undefined **local_c0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar14 = *(long *)(param_1 + 0x18);
  if ((lVar14 == -1) || ((lVar14 != 0 && (*(long *)(param_1 + 0x20) == 0)))) {
LAB_005202ec:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_005ca9a8(auStack_a8,lVar14);
                    /* try { // try from 0051fef0 to 0051fef7 has its CatchHandler @ 005203d0 */
  pfVar8 = (float *)FUN_004ae878(param_3);
                    /* try { // try from 0051fef8 to 0051ff03 has its CatchHandler @ 005203bc */
  pfVar9 = (float *)FUN_004aea28(param_1);
                    /* try { // try from 0051ff04 to 0051ff2b has its CatchHandler @ 005203e4 */
  uVar10 = FUN_005cabcc(auStack_a8);
  if ((param_4 == 0) || (lVar14 = *param_2, param_4 == lVar14)) {
    FUN_005199dc(uVar10);
                    /* try { // try from 0051ff2c to 0051ff33 has its CatchHandler @ 005203a8 */
    uVar11 = FUN_005cabcc(param_2);
    if ((long)uVar11 < 0) {
      plVar13 = (long *)FUN_00753a74(8);
      *plVar13 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00520318 to 0052032b has its CatchHandler @ 00520394 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar13,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00520408;
    }
    uVar15 = uVar11;
    if ((((ulong)pfVar8 & 3) == 0) && (uVar15 = (ulong)-((uint)pfVar8 >> 2) & 3, uVar11 <= uVar15))
    {
      uVar15 = uVar11;
    }
    uVar18 = uVar11 - uVar15;
    uVar16 = uVar18 + 3;
    uVar20 = uVar18 + 7;
    if ((long)uVar15 <= (long)uVar11) {
      uVar16 = uVar18;
      uVar20 = uVar18;
    }
    if (uVar18 + 3 < 7) {
      fVar22 = *pfVar8;
      if (1 < uVar11) {
        if (uVar11 < 9) {
          uVar16 = 1;
        }
        else {
          pfVar17 = pfVar8 + 5;
          uVar18 = uVar11 - 1 & 0xfffffffffffffff8;
          uVar16 = uVar18 | 1;
          uVar15 = uVar18;
          do {
            pfVar1 = pfVar17 + -4;
            pfVar4 = pfVar17 + -3;
            pfVar6 = pfVar17 + -2;
            pfVar7 = pfVar17 + -1;
            pfVar3 = pfVar17 + 2;
            uVar10 = *(undefined8 *)pfVar17;
            uVar15 = uVar15 - 8;
            pfVar17 = pfVar17 + 8;
            fVar22 = fVar22 + *pfVar1 + *pfVar4 + *pfVar6 + *pfVar7 + (float)uVar10 +
                     (float)((ulong)uVar10 >> 0x20) + (float)*(undefined8 *)pfVar3 +
                     (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          } while (uVar15 != 0);
          if (uVar11 - 1 == uVar18) goto LAB_005202a0;
        }
        lVar14 = uVar11 - uVar16;
        pfVar8 = pfVar8 + uVar16;
        do {
          lVar14 = lVar14 + -1;
          fVar22 = fVar22 + *pfVar8;
          pfVar8 = pfVar8 + 1;
        } while (lVar14 != 0);
      }
    }
    else {
      pfVar17 = pfVar8 + uVar15;
      uVar19 = uVar16 & 0xfffffffffffffffc;
      fVar24 = (float)*(undefined8 *)(pfVar17 + 2);
      fVar25 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
      fVar22 = (float)*(undefined8 *)pfVar17;
      fVar23 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
      if (7 < (long)uVar18) {
        fVar26 = pfVar17[4];
        fVar28 = pfVar17[5];
        fVar29 = pfVar17[6];
        fVar30 = pfVar17[7];
        lVar14 = (uVar20 & 0xfffffffffffffff8) + uVar15;
        if (0xf < uVar18) {
          lVar21 = uVar15 + 8;
          pfVar17 = pfVar17 + 0xc;
          do {
            pfVar1 = pfVar17 + -4;
            pfVar3 = pfVar17 + -2;
            pfVar4 = pfVar17 + 2;
            uVar10 = *(undefined8 *)pfVar17;
            lVar21 = lVar21 + 8;
            pfVar17 = pfVar17 + 8;
            fVar22 = fVar22 + (float)*(undefined8 *)pfVar1;
            fVar23 = fVar23 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
            fVar24 = fVar24 + (float)*(undefined8 *)pfVar3;
            fVar25 = fVar25 + (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
            fVar26 = fVar26 + (float)uVar10;
            fVar28 = fVar28 + (float)((ulong)uVar10 >> 0x20);
            fVar29 = fVar29 + (float)*(undefined8 *)pfVar4;
            fVar30 = fVar30 + (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
          } while (lVar21 < lVar14);
        }
        fVar22 = fVar26 + fVar22;
        fVar23 = fVar28 + fVar23;
        fVar24 = fVar29 + fVar24;
        fVar25 = fVar30 + fVar25;
        if ((long)(uVar20 & 0xfffffffffffffff8) < (long)uVar19) {
          pfVar17 = pfVar8 + lVar14;
          fVar22 = fVar22 + *pfVar17;
          fVar23 = fVar23 + pfVar17[1];
          fVar24 = fVar24 + pfVar17[2];
          fVar25 = fVar25 + pfVar17[3];
        }
      }
      auVar27._4_4_ = fVar23;
      auVar27._0_4_ = fVar22;
      auVar27._8_4_ = fVar24;
      auVar27._12_4_ = fVar25;
      auVar5._4_4_ = fVar23;
      auVar5._0_4_ = fVar22;
      auVar5._8_4_ = fVar24;
      auVar5._12_4_ = fVar25;
      auVar27 = NEON_ext(auVar27,auVar5,8,1);
      lVar14 = uVar19 + uVar15;
      fVar22 = fVar22 + auVar27._0_4_ + fVar23 + auVar27._4_4_;
      if (0 < (long)uVar15) {
        if (uVar15 < 8) {
          uVar20 = 0;
        }
        else {
          uVar20 = uVar15 & 0x7ffffffffffffff8;
          pfVar17 = pfVar8 + 4;
          uVar18 = uVar20;
          do {
            pfVar1 = pfVar17 + -4;
            pfVar4 = pfVar17 + -3;
            pfVar6 = pfVar17 + -2;
            pfVar7 = pfVar17 + -1;
            pfVar3 = pfVar17 + 2;
            uVar10 = *(undefined8 *)pfVar17;
            uVar18 = uVar18 - 8;
            pfVar17 = pfVar17 + 8;
            fVar22 = fVar22 + *pfVar1 + *pfVar4 + *pfVar6 + *pfVar7 + (float)uVar10 +
                     (float)((ulong)uVar10 >> 0x20) + (float)*(undefined8 *)pfVar3 +
                     (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          } while (uVar18 != 0);
          if (uVar15 == uVar20) goto LAB_0052016c;
        }
        lVar21 = uVar15 - uVar20;
        pfVar17 = pfVar8 + uVar20;
        do {
          lVar21 = lVar21 + -1;
          fVar22 = fVar22 + *pfVar17;
          pfVar17 = pfVar17 + 1;
        } while (lVar21 != 0);
      }
LAB_0052016c:
      if (lVar14 < (long)uVar11) {
        uVar18 = uVar11 - (uVar15 + uVar19);
        if (7 < uVar18) {
          uVar20 = uVar18 & 0xfffffffffffffff8;
          lVar14 = lVar14 + uVar20;
          pfVar17 = pfVar8 + uVar15 + ((long)uVar16 >> 2) * 4 + 4;
          uVar15 = uVar20;
          do {
            pfVar1 = pfVar17 + -4;
            pfVar4 = pfVar17 + -3;
            pfVar6 = pfVar17 + -2;
            pfVar7 = pfVar17 + -1;
            pfVar3 = pfVar17 + 2;
            uVar10 = *(undefined8 *)pfVar17;
            uVar15 = uVar15 - 8;
            pfVar17 = pfVar17 + 8;
            fVar22 = fVar22 + *pfVar1 + *pfVar4 + *pfVar6 + *pfVar7 + (float)uVar10 +
                     (float)((ulong)uVar10 >> 0x20) + (float)*(undefined8 *)pfVar3 +
                     (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          } while (uVar15 != 0);
          if (uVar18 == uVar20) goto LAB_005202a0;
        }
        do {
          pfVar17 = pfVar8 + lVar14;
          lVar14 = lVar14 + 1;
          fVar22 = fVar22 + *pfVar17;
        } while (lVar14 < (long)uVar11);
      }
    }
LAB_005202a0:
    *pfVar9 = fVar22 / (float)(long)uVar11;
  }
  else {
    if ((lVar14 == -1) || ((lVar14 != 0 && (param_2[1] == 0)))) goto LAB_005202ec;
                    /* try { // try from 0052002c to 0052006b has its CatchHandler @ 005203e4 */
    uVar11 = FUN_00518644(param_7,lVar14,param_2[1],param_4,param_5);
    if (((uVar11 & 1) != 0) ||
       ((FUN_00518cac(param_2,param_4,param_5,param_7), *(long *)(param_7 + 0xa8) != 0 &&
        (*(long *)(param_7 + 0xf0) != 0)))) {
      FUN_005187a4(param_7);
      local_120[1] = 4.0;
      plStack_d8 = &local_108;
      local_108 = (*(ulong *)(param_7 + 0x70) >> 1) * *(long *)(param_7 + 0xa8);
      local_e0 = PTR_DAT_007a2508 + 0x10;
      lStack_100 = *(long *)(param_7 + 0xb0) * *(long *)(param_7 + 0xa8);
      local_120[0] = (double)(local_108 * 4);
      local_120[2] = (double)(local_108 * 0x18);
                    /* try { // try from 005200cc to 005200df has its CatchHandler @ 0052032c */
      local_f8 = param_7;
      pfStack_f0 = pfVar8;
      local_e8 = pfVar9;
      local_c0 = &local_e0;
      FUN_0063c634(param_6,uVar10,local_120,&local_e0);
      if (local_c0 == &local_e0) {
        lVar14 = 0x20;
        ppuVar12 = &local_e0;
      }
      else {
        if (local_c0 == (undefined **)0x0) goto LAB_005202ac;
        lVar14 = 0x28;
        ppuVar12 = local_c0;
      }
      (**(code **)(*ppuVar12 + lVar14))();
    }
  }
LAB_005202ac:
  __ptr = local_70;
  local_70 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00520408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052040c  FUN_0052040c =====

void FUN_0052040c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  
  FUN_00511a1c();
  pfVar1 = (float *)FUN_004aea28(param_3);
  if (*param_2 == 0) {
LAB_005204c4:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  lVar2 = *(long *)param_2[1];
  if (lVar2 != 0) {
    if (*param_2 == 1) goto LAB_005204c4;
    fVar8 = (float)((long *)param_2[1])[1];
    uVar4 = lVar2 - 1U & 0x3fffffffffffffff;
    pfVar3 = pfVar1;
    if (6 < uVar4) {
      uVar4 = uVar4 + 1;
      pfVar6 = pfVar1 + 4;
      uVar5 = uVar4 & 0x7ffffffffffffff8;
      pfVar3 = pfVar1 + uVar5;
      uVar7 = uVar5;
      do {
        uVar7 = uVar7 - 8;
        *(ulong *)(pfVar6 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + -2) / fVar8);
        *(ulong *)(pfVar6 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + -4) / fVar8);
        *(ulong *)(pfVar6 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + 2) / fVar8);
        *(ulong *)pfVar6 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) / fVar8,
                      (float)*(undefined8 *)pfVar6 / fVar8);
        pfVar6 = pfVar6 + 8;
      } while (uVar7 != 0);
      if (uVar4 == uVar5) {
        return;
      }
    }
    do {
      pfVar6 = pfVar3 + 1;
      *pfVar3 = *pfVar3 / fVar8;
      pfVar3 = pfVar6;
    } while (pfVar6 != pfVar1 + lVar2);
  }
  return;
}


// ===== 005204c8  FUN_005204c8 =====

void FUN_005204c8(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  
  FUN_00511db4();
  pfVar1 = (float *)FUN_004aea28(param_3);
  if (*param_2 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  lVar2 = ((long *)param_2[1])[1];
  if (lVar2 != 0) {
    fVar8 = (float)*(long *)param_2[1];
    uVar4 = lVar2 - 1U & 0x3fffffffffffffff;
    pfVar3 = pfVar1;
    if (6 < uVar4) {
      uVar4 = uVar4 + 1;
      pfVar6 = pfVar1 + 4;
      uVar5 = uVar4 & 0x7ffffffffffffff8;
      pfVar3 = pfVar1 + uVar5;
      uVar7 = uVar5;
      do {
        uVar7 = uVar7 - 8;
        *(ulong *)(pfVar6 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + -2) / fVar8);
        *(ulong *)(pfVar6 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + -4) / fVar8);
        *(ulong *)(pfVar6 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20) / fVar8,
                      (float)*(undefined8 *)(pfVar6 + 2) / fVar8);
        *(ulong *)pfVar6 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) / fVar8,
                      (float)*(undefined8 *)pfVar6 / fVar8);
        pfVar6 = pfVar6 + 8;
      } while (uVar7 != 0);
      if (uVar4 == uVar5) {
        return;
      }
    }
    do {
      pfVar6 = pfVar3 + 1;
      *pfVar3 = *pfVar3 / fVar8;
      pfVar3 = pfVar6;
    } while (pfVar6 != pfVar1 + lVar2);
  }
  return;
}


// ===== 00520580  FUN_00520580 =====

void FUN_00520580(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  float fVar14;
  
  FUN_005121a4();
  if (2 < *param_2) {
    lVar13 = *(long *)(param_2[1] + 0x10);
    lVar3 = FUN_004aea28(param_3);
    if (1 < *param_2) {
      lVar6 = *(long *)param_2[1];
      if (0 < lVar6) {
        lVar7 = 0;
        puVar10 = (undefined8 *)(lVar3 + 0x10);
        fVar14 = (float)((long *)param_2[1])[1];
        uVar8 = lVar13 - 1U & 0x3fffffffffffffff;
        uVar1 = uVar8 + 1;
        uVar9 = uVar1 & 0x7ffffffffffffff8;
        do {
          if (lVar13 != 0) {
            pfVar2 = (float *)(lVar3 + lVar7 * lVar13 * 4);
            pfVar11 = pfVar2;
            if (6 < uVar8) {
              pfVar11 = pfVar2 + uVar9;
              uVar4 = uVar9;
              puVar5 = puVar10;
              do {
                uVar4 = uVar4 - 8;
                puVar5[-1] = CONCAT44((float)((ulong)puVar5[-1] >> 0x20) / fVar14,
                                      (float)puVar5[-1] / fVar14);
                puVar5[-2] = CONCAT44((float)((ulong)puVar5[-2] >> 0x20) / fVar14,
                                      (float)puVar5[-2] / fVar14);
                puVar5[1] = CONCAT44((float)((ulong)puVar5[1] >> 0x20) / fVar14,
                                     (float)puVar5[1] / fVar14);
                *puVar5 = CONCAT44((float)((ulong)*puVar5 >> 0x20) / fVar14,(float)*puVar5 / fVar14)
                ;
                puVar5 = puVar5 + 4;
              } while (uVar4 != 0);
              if (uVar1 == uVar9) goto LAB_00520604;
            }
            do {
              pfVar12 = pfVar11 + 1;
              *pfVar11 = *pfVar11 / fVar14;
              pfVar11 = pfVar12;
            } while (pfVar12 != pfVar2 + lVar13);
          }
LAB_00520604:
          lVar7 = lVar7 + 1;
          puVar10 = (undefined8 *)((long)puVar10 + lVar13 * 4);
        } while (lVar7 != lVar6);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 0052068c  FUN_0052068c =====

void FUN_0052068c(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  undefined *local_a0 [4];
  long *local_80;
  undefined *local_70 [4];
  undefined **local_50;
  long local_38;
  
  local_80 = (long *)local_a0;
  ppuVar2 = local_a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = local_70;
  local_70[0] = PTR_DAT_007a2360 + 0x10;
  local_a0[0] = PTR_DAT_007a2368 + 0x10;
                    /* try { // try from 005206e4 to 005206ef has its CatchHandler @ 00520810 */
  FUN_0051c50c();
  if ((undefined **)local_80 == local_a0) {
    lVar4 = 0x20;
LAB_00520710:
    (**(code **)((long)*ppuVar2 + lVar4))();
  }
  else if (local_80 != (long *)0x0) {
    lVar4 = 0x28;
    ppuVar2 = (undefined **)local_80;
    goto LAB_00520710;
  }
  if (local_50 == local_70) {
    lVar4 = 0x20;
    ppuVar2 = local_70;
LAB_00520740:
    (**(code **)(*ppuVar2 + lVar4))();
  }
  else if (local_50 != (undefined **)0x0) {
    lVar4 = 0x28;
    ppuVar2 = local_50;
    goto LAB_00520740;
  }
  pfVar3 = (float *)FUN_004aea28(param_3);
  if ((*param_2 == 0) || (*param_2 < 3)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar5 = (long *)param_2[1];
  lVar4 = plVar5[1];
  if (lVar4 != 0) {
    fVar11 = (float)(plVar5[2] * *plVar5);
    uVar7 = lVar4 - 1U & 0x3fffffffffffffff;
    pfVar6 = pfVar3;
    if (6 < uVar7) {
      uVar7 = uVar7 + 1;
      pfVar9 = pfVar3 + 4;
      uVar8 = uVar7 & 0x7ffffffffffffff8;
      pfVar6 = pfVar3 + uVar8;
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 8;
        *(ulong *)(pfVar9 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20) / fVar11,
                      (float)*(undefined8 *)(pfVar9 + -2) / fVar11);
        *(ulong *)(pfVar9 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + -4) >> 0x20) / fVar11,
                      (float)*(undefined8 *)(pfVar9 + -4) / fVar11);
        *(ulong *)(pfVar9 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) / fVar11,
                      (float)*(undefined8 *)(pfVar9 + 2) / fVar11);
        *(ulong *)pfVar9 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) / fVar11,
                      (float)*(undefined8 *)pfVar9 / fVar11);
        pfVar9 = pfVar9 + 8;
      } while (uVar10 != 0);
      if (uVar7 == uVar8) goto LAB_005207e8;
    }
    do {
      pfVar9 = pfVar6 + 1;
      *pfVar6 = *pfVar6 / fVar11;
      pfVar6 = pfVar9;
    } while (pfVar9 != pfVar3 + lVar4);
  }
LAB_005207e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00520890  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00520894  FUN_00520894 =====

void FUN_00520894(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792c20;
  puVar1[1] = uVar2;
  return;
}


// ===== 005208cc  FUN_005208cc =====

void FUN_005208cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792c20;
  param_2[1] = uVar1;
  return;
}


// ===== 005208e4  FUN_005208e4 =====

void FUN_005208e4(void)

{
  return;
}


// ===== 005208e8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005208ec  FUN_005208ec =====

void FUN_005208ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005208fc(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005208fc  FUN_005208fc =====

void FUN_005208fc(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  
  param_1 = (long *)*param_1;
  lVar10 = param_1[2];
  lVar17 = *(long *)(lVar10 + 0xf0);
  lVar20 = 0;
  if (lVar17 != 0) {
    lVar20 = param_2 / lVar17;
  }
  if (-1 < lVar20) {
    plVar21 = (long *)(lVar10 + 0xc0);
    uVar15 = *(ulong *)(lVar10 + 0xb8);
    plVar11 = plVar21;
    if ((uVar15 & 1) != 0) {
      plVar11 = (long *)*plVar21;
    }
    lVar16 = param_3 - param_2;
    if (lVar16 != 0 && param_2 <= param_3) {
      lVar19 = param_2 - lVar20 * lVar17;
      lVar23 = *(long *)(lVar10 + 0xf8);
      uVar13 = *(ulong *)(lVar10 + 0x70);
      plVar2 = (long *)(lVar10 + 0x78);
      fVar28 = (float)*param_1;
      lVar4 = param_1[3];
      lVar5 = param_1[4];
      uVar12 = uVar13 >> 1;
      lVar24 = plVar11[lVar20] + lVar23 * lVar19;
      uVar18 = uVar15 >> 1;
      if ((uVar13 & 1) != 0) {
        if ((uVar15 & 1) != 0) {
LAB_00520ccc:
          do {
            fVar29 = 0.0;
            if ((1 < uVar13) && (uVar15 = param_1[1], 0 < (long)uVar15)) {
              uVar14 = *(ulong *)(lVar10 + 0xb0);
              plVar11 = (long *)*plVar2;
              plVar3 = plVar11 + uVar12;
              uVar25 = uVar14;
              if ((long)uVar14 <= (long)uVar15) {
                uVar25 = uVar15;
              }
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = (uVar25 - 1) / uVar14;
              }
              uVar6 = uVar6 + 1;
              uVar25 = uVar6 & 0xfffffffffffffff8;
              do {
                if (uVar6 < 8 || uVar14 != 1) {
                  lVar16 = 0;
LAB_00520da0:
                  do {
                    lVar7 = lVar16 * 4;
                    lVar16 = lVar16 + uVar14;
                    fVar29 = fVar29 + *(float *)(lVar4 + lVar24 * 4 + *plVar11 * 4 + lVar7);
                  } while (lVar16 < (long)uVar15);
                }
                else {
                  puVar27 = (undefined8 *)(lVar4 + 0x10 + lVar24 * 4 + *plVar11 * 4);
                  uVar26 = uVar25;
                  do {
                    puVar1 = puVar27 + -2;
                    puVar8 = puVar27 + -1;
                    puVar9 = puVar27 + 1;
                    uVar30 = *puVar27;
                    uVar26 = uVar26 - 8;
                    puVar27 = puVar27 + 4;
                    fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                             (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                             (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                             (float)((ulong)*puVar9 >> 0x20);
                  } while (uVar26 != 0);
                  lVar16 = uVar25 * uVar14;
                  if (uVar6 != uVar25) goto LAB_00520da0;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar3);
            }
            lVar19 = lVar19 + 1;
            *(float *)(lVar5 + param_2 * 4) = fVar29 / fVar28;
            if (lVar17 <= lVar19) {
              lVar16 = lVar20 + 1;
              if (lVar16 < (long)uVar18) {
                if (lVar20 == -2 || lVar20 + 2 < 0 != SCARRY8(lVar20,2)) goto LAB_005209d0;
                lVar24 = *(long *)(*plVar21 + lVar16 * 8);
              }
              lVar19 = 0;
              param_2 = param_2 + 1;
              lVar20 = lVar16;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_00520ccc;
            }
            lVar24 = lVar24 + lVar23;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
LAB_00520a20:
        do {
          fVar29 = 0.0;
          if ((1 < uVar13) && (uVar15 = param_1[1], 0 < (long)uVar15)) {
            uVar14 = *(ulong *)(lVar10 + 0xb0);
            plVar11 = (long *)*plVar2;
            plVar3 = plVar11 + uVar12;
            uVar25 = uVar14;
            if ((long)uVar14 <= (long)uVar15) {
              uVar25 = uVar15;
            }
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = (uVar25 - 1) / uVar14;
            }
            uVar6 = uVar6 + 1;
            uVar25 = uVar6 & 0xfffffffffffffff8;
            do {
              if (uVar6 < 8 || uVar14 != 1) {
                lVar16 = 0;
LAB_00520af4:
                do {
                  lVar7 = lVar16 * 4;
                  lVar16 = lVar16 + uVar14;
                  fVar29 = fVar29 + *(float *)(lVar4 + lVar24 * 4 + *plVar11 * 4 + lVar7);
                } while (lVar16 < (long)uVar15);
              }
              else {
                puVar27 = (undefined8 *)(lVar4 + 0x10 + lVar24 * 4 + *plVar11 * 4);
                uVar26 = uVar25;
                do {
                  puVar1 = puVar27 + -2;
                  puVar8 = puVar27 + -1;
                  puVar9 = puVar27 + 1;
                  uVar30 = *puVar27;
                  uVar26 = uVar26 - 8;
                  puVar27 = puVar27 + 4;
                  fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                           (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                           (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                           (float)((ulong)*puVar9 >> 0x20);
                } while (uVar26 != 0);
                lVar16 = uVar25 * uVar14;
                if (uVar6 != uVar25) goto LAB_00520af4;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar3);
          }
          lVar19 = lVar19 + 1;
          *(float *)(lVar5 + param_2 * 4) = fVar29 / fVar28;
          if (lVar17 <= lVar19) {
            lVar16 = lVar20 + 1;
            if (lVar16 < (long)uVar18) {
              if (lVar20 + 1 < 0 != SCARRY8(lVar20,1)) goto LAB_005209d0;
              lVar24 = plVar21[lVar16];
            }
            lVar19 = 0;
            param_2 = param_2 + 1;
            lVar20 = lVar16;
            if (param_2 == param_3) {
              return;
            }
            goto LAB_00520a20;
          }
          lVar24 = lVar24 + lVar23;
          param_2 = param_2 + 1;
          if (param_2 == param_3) {
            return;
          }
        } while( true );
      }
      if (uVar13 < 2) {
        pfVar22 = (float *)(lVar5 + param_2 * 4);
        do {
          lVar19 = lVar19 + 1;
          *pfVar22 = 0.0 / fVar28;
          lVar10 = lVar20;
          if (lVar17 <= lVar19) {
            lVar10 = lVar20 + 1;
            lVar19 = 0;
            if ((lVar10 < (long)uVar18) && (lVar20 + 1 < 0 != SCARRY8(lVar20,1))) goto LAB_005209d0;
          }
          lVar20 = lVar10;
          lVar16 = lVar16 + -1;
          pfVar22 = pfVar22 + 1;
        } while (lVar16 != 0);
      }
      else {
        uVar13 = param_1[1];
        if (0 < (long)uVar13) {
          uVar14 = *(ulong *)(lVar10 + 0xb0);
          uVar25 = uVar14;
          if ((long)uVar14 <= (long)uVar13) {
            uVar25 = uVar13;
          }
          uVar6 = 0;
          if (uVar14 != 0) {
            uVar6 = (uVar25 - 1) / uVar14;
          }
          uVar6 = uVar6 + 1;
          uVar25 = uVar6 & 0xfffffffffffffff8;
LAB_00520bb0:
          do {
            fVar29 = 0.0;
            plVar11 = plVar2;
            do {
              if (uVar6 < 8 || uVar14 != 1) {
                lVar16 = 0;
LAB_00520c40:
                do {
                  lVar7 = lVar16 * 4;
                  lVar16 = lVar16 + uVar14;
                  fVar29 = fVar29 + *(float *)(lVar4 + lVar24 * 4 + *plVar11 * 4 + lVar7);
                } while (lVar16 < (long)uVar13);
              }
              else {
                puVar27 = (undefined8 *)(lVar4 + 0x10 + lVar24 * 4 + *plVar11 * 4);
                uVar26 = uVar25;
                do {
                  puVar1 = puVar27 + -2;
                  puVar8 = puVar27 + -1;
                  puVar9 = puVar27 + 1;
                  uVar30 = *puVar27;
                  uVar26 = uVar26 - 8;
                  puVar27 = puVar27 + 4;
                  fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                           (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                           (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                           (float)((ulong)*puVar9 >> 0x20);
                } while (uVar26 != 0);
                lVar16 = uVar25 * uVar14;
                if (uVar6 != uVar25) goto LAB_00520c40;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != (long *)(lVar10 + uVar12 * 8 + 0x78));
            lVar19 = lVar19 + 1;
            *(float *)(lVar5 + param_2 * 4) = fVar29 / fVar28;
            if (lVar17 <= lVar19) {
              lVar16 = lVar20 + 1;
              if (lVar16 < (long)uVar18) {
                if (lVar20 + 1 < 0 != SCARRY8(lVar20,1)) goto LAB_005209d0;
                plVar11 = plVar21;
                if ((uVar15 & 1) != 0) {
                  plVar11 = (long *)*plVar21;
                }
                lVar24 = plVar11[lVar16];
              }
              lVar19 = 0;
              param_2 = param_2 + 1;
              lVar20 = lVar16;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_00520bb0;
            }
            lVar24 = lVar24 + lVar23;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
        pfVar22 = (float *)(lVar5 + param_2 * 4);
        if ((uVar15 & 1) == 0) {
          do {
            lVar19 = lVar19 + 1;
            *pfVar22 = 0.0 / fVar28;
            lVar10 = lVar20;
            if (lVar17 <= lVar19) {
              lVar10 = lVar20 + 1;
              lVar19 = 0;
              if ((lVar10 < (long)uVar18) && (lVar20 + 1 < 0 != SCARRY8(lVar20,1)))
              goto LAB_005209d0;
            }
            lVar20 = lVar10;
            lVar16 = lVar16 + -1;
            pfVar22 = pfVar22 + 1;
          } while (lVar16 != 0);
        }
        else {
          do {
            lVar19 = lVar19 + 1;
            *pfVar22 = 0.0 / fVar28;
            lVar10 = lVar20;
            if (lVar17 <= lVar19) {
              lVar10 = lVar20 + 1;
              lVar19 = 0;
              if ((lVar10 < (long)uVar18) && (lVar20 + 1 < 0 != SCARRY8(lVar20,1)))
              goto LAB_005209d0;
            }
            lVar20 = lVar10;
            lVar16 = lVar16 + -1;
            pfVar22 = pfVar22 + 1;
          } while (lVar16 != 0);
        }
      }
    }
    return;
  }
LAB_005209d0:
  plVar11 = (long *)FUN_00753a74(8);
  *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 00520eb4  FUN_00520eb4 =====

void FUN_00520eb4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x50);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 00520ef4 to 00520efb has its CatchHandler @ 00520f78 */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 00520efc to 00520f0f has its CatchHandler @ 00520f50 */
  FUN_00524e44(plVar1 + 2,param_3,0,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00792bd0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00520f8c  FUN_00520f8c =====

void FUN_00520f8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x50);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 00520fcc to 00520fd3 has its CatchHandler @ 00521050 */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 00520fd4 to 00520fe7 has its CatchHandler @ 00521028 */
  FUN_00524e44(plVar1 + 2,param_3,0,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00792bd0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00521064  FUN_00521064 =====

void FUN_00521064(undefined8 *param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[3]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005210b0  FUN_005210b0 =====

void FUN_005210b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(param_2 + 0x10);
  local_38 = uVar2 >> 1;
  lStack_30 = param_2 + 0x18;
  if ((uVar2 & 1) != 0) {
    lStack_30 = *(long *)(param_2 + 0x18);
  }
  if ((1 < uVar2) && (lStack_30 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_0052113c(param_3,&local_38,*(undefined1 *)(param_2 + 0x48),*(undefined1 *)(param_2 + 0x49));
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052113c  FUN_0052113c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0052113c(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char local_244 [4];
  undefined1 auStack_240 [56];
  void *local_208;
  ulong local_200;
  void *local_1f8;
  void *local_1c8;
  void *local_1c0;
  ulong local_190;
  void *local_188;
  undefined8 local_158;
  undefined8 local_150;
  ulong local_148;
  void *local_140;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 *******local_f8 [6];
  ulong local_c8;
  undefined8 *******local_c0 [6];
  ulong local_90;
  undefined8 *******local_88 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00521518(param_1,*param_2,param_2[1],param_3 != 0);
  if ((uVar4 & 1) == 0) {
    local_90 = 0;
    local_c8 = 0;
    local_100 = 0;
                    /* try { // try from 0052119c to 005211eb has its CatchHandler @ 005214d0 */
    uVar4 = FUN_00519fa8(param_1,param_2,param_3,param_4 & 1,local_244,&local_90,&local_c8,
                         &local_100,0,PTR_FUN_007a2448,PTR_FUN_007a2450,PTR_FUN_007a2458,
                         PTR_FUN_007a2460);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0052123c to 00521247 has its CatchHandler @ 005214c0 */
      lVar5 = FUN_004ae6a8(param_1,0);
      pppppppuVar1 = local_c0;
      if ((local_c8 & 1) != 0) {
        pppppppuVar1 = local_c0[0];
      }
      if ((1 < local_c8) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_005213fc;
                    /* try { // try from 00521270 to 00521277 has its CatchHandler @ 005214b0 */
      FUN_005ca9a8(&local_200,local_c8 >> 1);
                    /* try { // try from 00521278 to 00521287 has its CatchHandler @ 00521460 */
      uVar6 = FUN_0058d3bc(param_1,0,&local_200);
      pvVar3 = local_1c8;
      local_1c8 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      if (local_244[0] == '@') {
                    /* try { // try from 005212a8 to 005212af has its CatchHandler @ 00521450 */
        lVar7 = FUN_005cabcc(lVar5 + 0x18);
        if (lVar7 == 1) {
                    /* try { // try from 005212b8 to 005212bf has its CatchHandler @ 00521410 */
          puVar8 = (undefined8 *)FUN_004ba96c(lVar5);
                    /* try { // try from 005212c0 to 005212cb has its CatchHandler @ 00521400 */
          puVar9 = (undefined8 *)FUN_004bb758(uVar6);
          *puVar9 = *puVar8;
        }
        else {
                    /* try { // try from 005213b0 to 005213bb has its CatchHandler @ 00521450 */
          FUN_00511654(lVar5 + 0x18,param_3);
        }
      }
      else {
        local_200 = 0;
        local_1c8 = (void *)0x0;
        local_190 = 0;
        pppppppuVar1 = local_88;
        if ((local_90 & 1) != 0) {
          pppppppuVar1 = local_88[0];
        }
        local_150 = 0;
        local_148 = 0;
        local_158 = 0;
        local_110 = 0;
        uStack_108 = 0;
        if ((1 < local_90) && (pppppppuVar1 == (undefined8 *******)0x0)) {
LAB_005213fc:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 00521338 to 0052133f has its CatchHandler @ 00521438 */
        FUN_005ca9a8(auStack_240,local_90 >> 1);
        pppppppuVar1 = local_f8;
        if ((local_100 & 1) != 0) {
          pppppppuVar1 = local_f8[0];
        }
        if ((1 < local_100) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_005213fc;
                    /* try { // try from 00521368 to 0052137b has its CatchHandler @ 00521420 */
        FUN_00521ae8(uVar6,auStack_240,lVar5,local_100 >> 1,pppppppuVar1,
                     *(undefined8 *)(param_1 + 0x18),&local_200);
        pvVar3 = local_208;
        local_208 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        if ((local_148 & 1) != 0) {
          free(local_140);
        }
        if ((local_190 & 1) != 0) {
          free(local_188);
        }
        if (((ulong)local_1c8 & 1) != 0) {
          free(local_1c0);
        }
        if ((local_200 & 1) != 0) {
          free(local_1f8);
        }
      }
    }
    if ((local_100 & 1) != 0) {
      free(local_f8[0]);
    }
    if ((local_c8 & 1) != 0) {
      free(local_c0[0]);
    }
    if ((local_90 & 1) != 0) {
      free(local_88[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00521518  FUN_00521518 =====

void FUN_00521518(long *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  void *__ptr;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_128 [24];
  ulong *local_110;
  ulong *local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 ***local_f0;
  ulong local_e8;
  undefined8 **local_c0 [7];
  void *local_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_1,0);
  lVar6 = FUN_005cabcc(lVar5 + 0x18);
  if (lVar6 == 0) {
    local_110 = (ulong *)0x0;
    local_108 = (ulong *)0x0;
    local_100 = 0;
                    /* try { // try from 00521580 to 00521587 has its CatchHandler @ 00521a90 */
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar4 == 2) {
      if (param_2 != 0) {
        uVar10 = FUN_00753a74(0x88);
                    /* try { // try from 00521988 to 0052198f has its CatchHandler @ 00521a58 */
        FUN_00645c30(&local_f8);
                    /* try { // try from 00521990 to 005219af has its CatchHandler @ 00521a48 */
        FUN_0047488c(local_c0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_ops.cc"
                     ,0x35a,
                     "bool onnxruntime::check_and_reduce_empty_set_input(OpKernelContext *, const gsl::span<const int64_t>, bool) [AGG = onnxruntime::ReduceAggregatorProd<long>]"
                     ,&local_f8);
                    /* try { // try from 005219b0 to 005219bf has its CatchHandler @ 00521a28 */
        FUN_00479eac(auStack_128,
                     "Axes input and attribute should not both be present for reduction.");
                    /* try { // try from 005219c4 to 00521a07 has its CatchHandler @ 00521a10 */
        plVar9 = (long *)FUN_00474a40(uVar10,local_c0,"axes.empty()",auStack_128);
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar10,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_00521ae4;
      }
                    /* try { // try from 00521594 to 0052159f has its CatchHandler @ 00521a78 */
      lVar7 = FUN_004ae6a8(param_1,1);
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0052193c;
      lVar16 = **(long **)(lVar7 + 0x20);
                    /* try { // try from 005215b0 to 005215b3 has its CatchHandler @ 00521a70 */
      lVar7 = FUN_004ba96c();
                    /* try { // try from 005215c0 to 005215cb has its CatchHandler @ 00521a68 */
      FUN_0051a524(&local_110,local_110,lVar7,lVar7 + lVar16 * 8,lVar16);
    }
    else {
      uVar18 = (long)local_108 - (long)local_110 >> 3;
      if (param_2 < uVar18 || param_2 - uVar18 == 0) {
        if (param_2 < uVar18) {
          local_108 = local_110 + param_2;
        }
      }
      else {
                    /* try { // try from 005215e4 to 005215eb has its CatchHandler @ 00521a90 */
        FUN_004ffdcc(&local_110,param_2 - uVar18);
      }
      if (param_3 == (ulong *)0x0) {
        if (param_2 != 0) goto LAB_0052193c;
      }
      else if (param_2 != 0) {
        lVar7 = param_2 << 3;
        puVar11 = local_110;
        puVar17 = param_3;
        do {
          if (param_3 + param_2 <= puVar17) goto LAB_0052193c;
          lVar7 = lVar7 + -8;
          *puVar11 = *puVar17;
          puVar11 = puVar11 + 1;
          puVar17 = puVar17 + 1;
        } while (lVar7 != 0);
      }
    }
    uVar18 = *(ulong *)(lVar5 + 0x18);
    if ((uVar18 == 0xffffffffffffffff) || ((uVar18 != 0 && (*(long *)(lVar5 + 0x20) == 0)))) {
LAB_0052193c:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if ((long)uVar18 < 0) {
      plVar9 = (long *)FUN_00753a74(8);
      *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 00521968 to 0052197b has its CatchHandler @ 00521a88 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00521ae4;
    }
    local_f8 = 0;
    if (uVar18 != 0) {
      uVar19 = 0;
      do {
        puVar11 = local_110;
        if (local_110 == local_108) {
LAB_005216c4:
          if ((param_4 & 1) != 0) {
            local_c0[0] = (undefined8 ***)0x1;
            uVar8 = 6;
            if ((local_f8 & 1) != 0) {
              uVar8 = local_e8;
            }
            if (local_f8 >> 1 != uVar8) {
              ppppuVar2 = &local_f0;
              if ((local_f8 & 1) != 0) {
                ppppuVar2 = (undefined8 ****)local_f0;
              }
              ppppuVar2[local_f8 >> 1] = (undefined8 ***)0x1;
              goto LAB_0052167c;
            }
                    /* try { // try from 00521740 to 0052174b has its CatchHandler @ 00521a08 */
            FUN_004c7d34(&local_f8,local_c0);
          }
        }
        else {
          do {
            if (*puVar11 == uVar19) {
              if (puVar11 != local_108) goto LAB_005216c4;
              break;
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != local_108);
          if (*(ulong *)(lVar5 + 0x18) <= uVar19) goto LAB_0052193c;
          local_c0[0] = *(undefined8 ***)(*(long *)(lVar5 + 0x20) + uVar19 * 8);
          uVar8 = 6;
          if ((local_f8 & 1) != 0) {
            uVar8 = local_e8;
          }
          if (local_f8 >> 1 == uVar8) {
                    /* try { // try from 00521730 to 0052173b has its CatchHandler @ 00521a0c */
            FUN_004c7d34(&local_f8,local_c0);
          }
          else {
            ppppuVar2 = &local_f0;
            if ((local_f8 & 1) != 0) {
              ppppuVar2 = (undefined8 ****)local_f0;
            }
            ppppuVar2[local_f8 >> 1] = (undefined8 ***)local_c0[0];
LAB_0052167c:
            local_f8 = local_f8 + 2;
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar18);
    }
    ppppuVar2 = &local_f0;
    if ((local_f8 & 1) != 0) {
      ppppuVar2 = (undefined8 ****)local_f0;
    }
    if ((1 < local_f8) && (ppppuVar2 == (undefined8 ****)0x0)) goto LAB_0052193c;
                    /* try { // try from 00521780 to 00521787 has its CatchHandler @ 00521a80 */
    FUN_005ca9a8(local_c0,local_f8 >> 1);
                    /* try { // try from 00521788 to 005217bb has its CatchHandler @ 00521a98 */
    lVar5 = FUN_0058d3bc(param_1,0,local_c0);
    lVar7 = FUN_005cabcc(local_c0);
    if (lVar7 != 0) {
      uVar19 = FUN_004bb758(lVar5);
      uVar8 = FUN_005cabcc(lVar5 + 0x18);
      uVar18 = uVar19 >> 3 & 1;
      if ((long)uVar8 <= (long)uVar18) {
        uVar18 = uVar8;
      }
      if ((uVar19 & 7) != 0) {
        uVar18 = uVar8;
      }
      uVar14 = uVar8 - uVar18;
      uVar1 = uVar14;
      if ((long)uVar8 < (long)uVar18) {
        uVar1 = uVar14 + 1;
      }
      if (0 < (long)uVar18) {
        if (uVar18 < 4) {
          uVar15 = 0;
        }
        else {
          puVar13 = (undefined8 *)(uVar19 + 0x10);
          uVar15 = uVar18 & 0x7ffffffffffffffc;
          uVar12 = uVar15;
          do {
            uVar12 = uVar12 - 4;
            puVar13[-1] = 1;
            puVar13[-2] = 1;
            puVar13[1] = 1;
            *puVar13 = 1;
            puVar13 = puVar13 + 4;
          } while (uVar12 != 0);
          if (uVar18 == uVar15) goto LAB_00521838;
        }
        lVar5 = uVar18 - uVar15;
        puVar13 = (undefined8 *)(uVar19 + uVar15 * 8);
        do {
          lVar5 = lVar5 + -1;
          *puVar13 = 1;
          puVar13 = puVar13 + 1;
        } while (lVar5 != 0);
      }
LAB_00521838:
      lVar5 = (uVar1 & 0xfffffffffffffffe) + uVar18;
      if (1 < (long)uVar14) {
        puVar13 = (undefined8 *)(uVar19 + uVar18 * 8);
        uVar14 = uVar18;
        do {
          uVar14 = uVar14 + 2;
          puVar13[1] = 1;
          *puVar13 = 1;
          puVar13 = puVar13 + 2;
        } while ((long)uVar14 < lVar5);
      }
      if (lVar5 < (long)uVar8) {
        uVar14 = uVar8 - (uVar18 + (uVar1 & 0xfffffffffffffffe));
        if (3 < uVar14) {
          uVar12 = uVar14 & 0xfffffffffffffffc;
          lVar5 = lVar5 + uVar12;
          puVar13 = (undefined8 *)(((long)uVar1 >> 1) * 0x10 + uVar18 * 8 + uVar19 + 0x10);
          uVar18 = uVar12;
          do {
            uVar18 = uVar18 - 4;
            puVar13[-1] = 1;
            puVar13[-2] = 1;
            puVar13[1] = 1;
            *puVar13 = 1;
            puVar13 = puVar13 + 4;
          } while (uVar18 != 0);
          if (uVar14 == uVar12) goto LAB_005218d4;
        }
        lVar7 = uVar8 - lVar5;
        puVar13 = (undefined8 *)(uVar19 + lVar5 * 8);
        do {
          lVar7 = lVar7 + -1;
          *puVar13 = 1;
          puVar13 = puVar13 + 1;
        } while (lVar7 != 0);
      }
    }
LAB_005218d4:
    __ptr = local_88;
    local_88 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if ((local_f8 & 1) != 0) {
      free(local_f0);
    }
    if (local_110 != (ulong *)0x0) {
      local_108 = local_110;
      free(local_110);
    }
  }
  plVar9 = (long *)(ulong)(lVar6 == 0);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_00521ae4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar9);
}


// ===== 00521ae8  FUN_00521ae8 =====

void FUN_00521ae8(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  void *__ptr;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  double local_120 [3];
  long local_108;
  long lStack_100;
  long local_f8;
  long *plStack_f0;
  long *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  undefined **local_c0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar12 = *(long *)(param_1 + 0x18);
  if ((lVar12 == -1) || ((lVar12 != 0 && (*(long *)(param_1 + 0x20) == 0)))) {
LAB_00521f48:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_005ca9a8(auStack_a8,lVar12);
                    /* try { // try from 00521b54 to 00521b5b has its CatchHandler @ 0052202c */
  plVar6 = (long *)FUN_004ba96c(param_3);
                    /* try { // try from 00521b5c to 00521b67 has its CatchHandler @ 00522018 */
  plVar7 = (long *)FUN_004bb758(param_1);
                    /* try { // try from 00521b68 to 00521b8f has its CatchHandler @ 00522040 */
  uVar8 = FUN_005cabcc(auStack_a8);
  if ((param_4 == 0) || (lVar12 = *param_2, param_4 == lVar12)) {
    FUN_005199dc(uVar8);
                    /* try { // try from 00521b90 to 00521b97 has its CatchHandler @ 00522004 */
    uVar9 = FUN_005cabcc(param_2);
    if ((long)uVar9 < 0) {
      plVar6 = (long *)FUN_00753a74(8);
      *plVar6 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00521f74 to 00521f87 has its CatchHandler @ 00521ff0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar6,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00522064;
    }
    if (uVar9 == 0) {
      lVar12 = 1;
    }
    else {
      uVar20 = (ulong)plVar6 >> 3 & 1;
      if (((ulong)plVar6 & 7) != 0) {
        uVar20 = uVar9;
      }
      uVar13 = uVar9 - uVar20;
      uVar17 = uVar13;
      uVar5 = uVar13;
      if ((long)uVar9 < (long)uVar20) {
        uVar17 = uVar13 + 3;
        uVar5 = uVar13 + 1;
      }
      if (uVar13 + 1 < 3) {
        lVar12 = *plVar6;
        uVar20 = uVar9 - 1;
        if (uVar20 != 0) {
          if (uVar9 < 3) {
            uVar13 = 1;
          }
          else {
            uVar13 = uVar20 | 1;
            lVar14 = 1;
            uVar17 = uVar20 & 0xfffffffffffffffe;
            plVar19 = plVar6;
            do {
              uVar17 = uVar17 - 2;
              lVar12 = plVar19[1] * lVar12;
              lVar14 = plVar19[2] * lVar14;
              plVar19 = plVar19 + 2;
            } while (uVar17 != 0);
            lVar12 = lVar14 * lVar12;
            if (uVar20 == (uVar20 & 0xfffffffffffffffe)) goto LAB_00521ee0;
          }
          lVar14 = uVar9 - uVar13;
          plVar6 = plVar6 + uVar13;
          do {
            lVar14 = lVar14 + -1;
            lVar12 = *plVar6 * lVar12;
            plVar6 = plVar6 + 1;
          } while (lVar14 != 0);
        }
      }
      else {
        plVar19 = plVar6 + uVar20;
        uVar16 = uVar5 & 0xfffffffffffffffe;
        lVar14 = plVar19[1];
        lVar12 = *plVar19;
        if ((long)uVar13 < 4) {
LAB_00521d90:
          lVar12 = lVar12 * lVar14;
        }
        else {
          lVar11 = plVar19[3];
          lVar21 = plVar19[2];
          lVar15 = (uVar17 & 0xfffffffffffffffc) + uVar20;
          if (7 < uVar13) {
            lVar18 = uVar20 + 4;
            plVar19 = plVar19 + 6;
            do {
              plVar1 = plVar19 + -2;
              plVar3 = plVar19 + -1;
              plVar4 = plVar19 + 1;
              lVar22 = *plVar19;
              lVar18 = lVar18 + 4;
              plVar19 = plVar19 + 4;
              lVar12 = *plVar1 * lVar12;
              lVar14 = *plVar3 * lVar14;
              lVar21 = lVar22 * lVar21;
              lVar11 = *plVar4 * lVar11;
            } while (lVar18 < lVar15);
          }
          if ((long)(uVar17 & 0xfffffffffffffffc) < (long)uVar16) {
            lVar12 = plVar6[lVar15] * lVar12 * lVar21;
            lVar14 = (plVar6 + lVar15)[1] * lVar14 * lVar11;
            goto LAB_00521d90;
          }
          lVar12 = lVar12 * lVar21 * lVar14 * lVar11;
        }
        if (0 < (long)uVar20) {
          if (uVar20 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar20 & 0x7ffffffffffffffe;
            plVar19 = plVar6 + 1;
            lVar14 = 1;
            uVar17 = uVar13;
            do {
              plVar1 = plVar19 + -1;
              lVar15 = *plVar19;
              uVar17 = uVar17 - 2;
              plVar19 = plVar19 + 2;
              lVar12 = *plVar1 * lVar12;
              lVar14 = lVar15 * lVar14;
            } while (uVar17 != 0);
            lVar12 = lVar14 * lVar12;
            if (uVar20 == uVar13) goto LAB_00521e18;
          }
          lVar14 = uVar20 - uVar13;
          plVar19 = plVar6 + uVar13;
          do {
            lVar14 = lVar14 + -1;
            lVar12 = *plVar19 * lVar12;
            plVar19 = plVar19 + 1;
          } while (lVar14 != 0);
        }
LAB_00521e18:
        lVar14 = uVar16 + uVar20;
        if (lVar14 < (long)uVar9) {
          uVar17 = uVar9 - (uVar20 + uVar16);
          if (1 < uVar17) {
            uVar13 = uVar17 & 0xfffffffffffffffe;
            lVar14 = lVar14 + uVar13;
            plVar19 = plVar6 + uVar20 + ((long)uVar5 >> 1) * 2 + 1;
            lVar15 = 1;
            uVar20 = uVar13;
            do {
              plVar1 = plVar19 + -1;
              lVar11 = *plVar19;
              uVar20 = uVar20 - 2;
              plVar19 = plVar19 + 2;
              lVar12 = *plVar1 * lVar12;
              lVar15 = lVar11 * lVar15;
            } while (uVar20 != 0);
            lVar12 = lVar15 * lVar12;
            if (uVar17 == uVar13) goto LAB_00521ee0;
          }
          do {
            plVar19 = plVar6 + lVar14;
            lVar14 = lVar14 + 1;
            lVar12 = *plVar19 * lVar12;
          } while (lVar14 < (long)uVar9);
        }
      }
    }
LAB_00521ee0:
    *plVar7 = lVar12;
  }
  else {
    if ((lVar12 == -1) || ((lVar12 != 0 && (param_2[1] == 0)))) goto LAB_00521f48;
                    /* try { // try from 00521bf8 to 00521c37 has its CatchHandler @ 00522040 */
    uVar9 = FUN_00518644(param_7,lVar12,param_2[1],param_4,param_5);
    if (((uVar9 & 1) != 0) ||
       ((FUN_00518cac(param_2,param_4,param_5,param_7), *(long *)(param_7 + 0xa8) != 0 &&
        (*(long *)(param_7 + 0xf0) != 0)))) {
      FUN_005187a4(param_7);
      local_120[1] = 8.0;
      plStack_d8 = &local_108;
      local_108 = (*(ulong *)(param_7 + 0x70) >> 1) * *(long *)(param_7 + 0xa8);
      local_e0 = PTR_DAT_007a2518 + 0x10;
      lStack_100 = *(long *)(param_7 + 0xb0) * *(long *)(param_7 + 0xa8);
      local_120[0] = (double)(local_108 * 8);
      local_120[2] = (double)(local_108 * 0x30);
                    /* try { // try from 00521c98 to 00521cab has its CatchHandler @ 00521f88 */
      local_f8 = param_7;
      plStack_f0 = plVar6;
      local_e8 = plVar7;
      local_c0 = &local_e0;
      FUN_0063c634(param_6,uVar8,local_120,&local_e0);
      if (local_c0 == &local_e0) {
        lVar12 = 0x20;
        ppuVar10 = &local_e0;
      }
      else {
        if (local_c0 == (undefined **)0x0) goto LAB_00521ee4;
        lVar12 = 0x28;
        ppuVar10 = local_c0;
      }
      (**(code **)(*ppuVar10 + lVar12))();
    }
  }
LAB_00521ee4:
  __ptr = local_70;
  local_70 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00522064:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00522068  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0052206c  FUN_0052206c =====

void FUN_0052206c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792cb8;
  puVar1[1] = uVar2;
  return;
}


// ===== 005220a4  FUN_005220a4 =====

void FUN_005220a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792cb8;
  param_2[1] = uVar1;
  return;
}


// ===== 005220bc  FUN_005220bc =====

void FUN_005220bc(void)

{
  return;
}


// ===== 005220c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005220c4  FUN_005220c4 =====

void FUN_005220c4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005220d4(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005220d4  FUN_005220d4 =====

void FUN_005220d4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  
  lVar13 = *param_1;
  lVar14 = *(long *)(lVar13 + 0x10);
  lVar15 = *(long *)(lVar14 + 0xf0);
  lVar7 = 0;
  if (lVar15 != 0) {
    lVar7 = param_2 / lVar15;
  }
  if (-1 < lVar7) {
    if (param_2 < param_3) {
      lVar15 = param_2 - lVar7 * lVar15;
      plVar9 = (long *)(lVar14 + 0xc0);
      plVar8 = plVar9;
      if ((*(byte *)(lVar14 + 0xb8) & 1) != 0) {
        plVar8 = *(long **)(lVar14 + 0xc0);
      }
      lVar16 = plVar8[lVar7] + *(long *)(lVar14 + 0xf8) * lVar15;
      lVar3 = *(long *)(lVar13 + 0x18);
      lVar4 = *(long *)(lVar13 + 0x20);
      do {
        uVar12 = *(ulong *)(lVar14 + 0x70);
        plVar8 = (long *)(lVar14 + 0x78);
        if ((uVar12 & 1) != 0) {
          plVar8 = *(long **)(lVar14 + 0x78);
        }
        if ((uVar12 < 2) || (uVar10 = *(ulong *)(lVar13 + 8), (long)uVar10 < 1)) {
          lVar17 = 1;
        }
        else {
          uVar11 = *(ulong *)(lVar14 + 0xb0);
          lVar17 = 1;
          plVar2 = plVar8 + (uVar12 >> 1);
          uVar12 = uVar11;
          if ((long)uVar11 <= (long)uVar10) {
            uVar12 = uVar10;
          }
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = (uVar12 - 1) / uVar11;
          }
          uVar6 = uVar6 + 1;
          uVar12 = uVar6 & 0xfffffffffffffffe;
          do {
            if (uVar6 < 2 || uVar11 != 1) {
              lVar20 = 0;
LAB_00522214:
              do {
                lVar5 = lVar20 * 8;
                lVar20 = lVar20 + uVar11;
                lVar17 = *(long *)(lVar3 + lVar16 * 8 + *plVar8 * 8 + lVar5) * lVar17;
              } while (lVar20 < (long)uVar10);
            }
            else {
              plVar18 = (long *)(lVar3 + 8 + lVar16 * 8 + *plVar8 * 8);
              lVar20 = 1;
              uVar19 = uVar12;
              do {
                plVar1 = plVar18 + -1;
                lVar5 = *plVar18;
                uVar19 = uVar19 - 2;
                plVar18 = plVar18 + 2;
                lVar17 = *plVar1 * lVar17;
                lVar20 = lVar5 * lVar20;
              } while (uVar19 != 0);
              lVar17 = lVar20 * lVar17;
              lVar20 = uVar12 * uVar11;
              if (uVar6 != uVar12) goto LAB_00522214;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar2);
        }
        *(long *)(lVar4 + param_2 * 8) = lVar17;
        lVar15 = lVar15 + 1;
        if (lVar15 < *(long *)(lVar14 + 0xf0)) {
          lVar16 = *(long *)(lVar14 + 0xf8) + lVar16;
        }
        else {
          lVar17 = lVar7 + 1;
          if (lVar17 < (long)(*(ulong *)(lVar14 + 0xb8) >> 1)) {
            if (lVar7 == -2 || lVar7 + 2 < 0 != SCARRY8(lVar7,2)) goto LAB_0052229c;
            lVar15 = 0;
            plVar8 = plVar9;
            if ((*(ulong *)(lVar14 + 0xb8) & 1) != 0) {
              plVar8 = (long *)*plVar9;
            }
            lVar16 = plVar8[lVar17];
            lVar7 = lVar17;
          }
          else {
            lVar15 = 0;
            lVar7 = lVar17;
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    return;
  }
LAB_0052229c:
  plVar9 = (long *)FUN_00753a74(8);
  *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 005222c8  FUN_005222c8 =====

void FUN_005222c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x50);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 00522308 to 0052230f has its CatchHandler @ 0052238c */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 00522310 to 00522323 has its CatchHandler @ 00522364 */
  FUN_00524e44(plVar1 + 2,param_3,0,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00792c68;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 005223a0  FUN_005223a0 =====

void FUN_005223a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 005223c8 to 005223cf has its CatchHandler @ 005223fc */
  FUN_0050fc54(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00522410  FUN_00522410 =====

void FUN_00522410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 00522438 to 0052243f has its CatchHandler @ 0052246c */
  FUN_005155c0(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00522480  FUN_00522480 =====

void FUN_00522480(undefined8 *param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[3]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005224cc  FUN_005224cc =====

void FUN_005224cc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong local_38;
  long lStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lStack_30 = param_2 + 0x18;
  if (*(char *)(param_2 + 0x4a) == '\0') {
    uVar1 = *(ulong *)(param_2 + 0x10);
    local_38 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      lStack_30 = *(long *)(param_2 + 0x18);
    }
    if ((1 < uVar1) && (lStack_30 == 0)) goto LAB_005225a0;
    FUN_00522d54(param_3,&local_38,*(undefined1 *)(param_2 + 0x48),0);
    *param_1 = 0;
    if (*(long *)(lVar2 + 0x28) != local_28) goto LAB_0052259c;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    local_38 = uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      lStack_30 = *(long *)(param_2 + 0x18);
    }
    if ((1 < uVar1) && (lStack_30 == 0)) {
LAB_005225a0:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    FUN_00522980(param_3,&local_38,*(undefined1 *)(param_2 + 0x48),0);
    *param_1 = 0;
    if (*(long *)(lVar2 + 0x28) != local_28) {
LAB_0052259c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


// ===== 005225a4  FUN_005225a4 =====

void FUN_005225a4(ulong *param_1,undefined8 param_2,void *param_3,char param_4)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  void *local_e0 [3];
  void *local_c8 [3];
  byte local_b0;
  undefined8 local_af;
  char cStack_a7;
  undefined6 uStack_a6;
  char cStack_a0;
  undefined2 uStack_9f;
  undefined2 uStack_9d;
  undefined1 uStack_9b;
  undefined2 uStack_9a;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  local_b0 = 8;
  local_af = CONCAT35(local_af._5_3_,0x73697861);
                    /* try { // try from 005225f8 to 0052260b has its CatchHandler @ 00522940 */
  FUN_00594f20(local_e0,param_2,&local_b0,local_c8);
  pvVar6 = local_e0[0];
  local_e0[0] = (void *)0x0;
  local_60 = local_c8[0];
  if (pvVar6 != (void *)0x0) {
    if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar6 + 0x18));
    }
    free(pvVar6);
    local_60 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    free((void *)CONCAT26(uStack_9a,
                          CONCAT15(uStack_9b,CONCAT23(uStack_9d,CONCAT21(uStack_9f,cStack_a0)))));
  }
  uVar8 = *param_1;
  uVar1 = 6;
  if ((uVar8 & 1) != 0) {
    uVar1 = param_1[2];
  }
  if (uVar8 >> 1 == uVar1) {
                    /* try { // try from 0052284c to 00522857 has its CatchHandler @ 005228e0 */
    FUN_004c78bc(param_1,&local_60);
  }
  else {
    puVar2 = param_1 + 1;
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)param_1[1];
    }
    puVar2[uVar8 >> 1] = (ulong)local_60;
    *param_1 = *param_1 + 2;
  }
  local_60 = (void *)0x1;
  pvVar6 = param_3;
  if (param_4 == '\0') {
    cStack_a7 = '\0';
    local_b0 = 0x10;
    local_af._0_1_ = 'k';
    local_af._1_1_ = 'e';
    local_af._2_1_ = 'e';
    local_af._3_1_ = 'p';
    local_af._4_1_ = 'd';
    local_af._5_1_ = 'i';
    local_af._6_1_ = 'm';
    local_af._7_1_ = 's';
                    /* try { // try from 005226c4 to 005226d7 has its CatchHandler @ 00522934 */
    FUN_00594f20(local_c8,param_2,&local_b0,&local_60);
    pvVar9 = local_c8[0];
    local_c8[0] = (void *)0x0;
    if (pvVar9 != (void *)0x0) {
      if ((*(byte *)((long)pvVar9 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar9 + 0x18));
      }
      free(pvVar9);
    }
    if ((local_b0 & 1) != 0) {
      free((void *)CONCAT26(uStack_9a,
                            CONCAT15(uStack_9b,CONCAT23(uStack_9d,CONCAT21(uStack_9f,cStack_a0)))));
    }
    pvVar6 = local_60;
    if (pvVar9 != (void *)0x0) {
      uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 00522868 to 0052286f has its CatchHandler @ 00522924 */
      FUN_00645c30(local_c8);
                    /* try { // try from 00522870 to 0052288f has its CatchHandler @ 00522914 */
      FUN_0047488c(&local_b0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_kernel_base.h"
                   ,0x19,
                   "onnxruntime::ReduceKernelBase<false>::ReduceKernelBase(const OpKernelInfo &, optional<int64_t>) [allow_multi_axes = false]"
                   ,local_c8);
      FUN_00476720(local_e0);
                    /* try { // try from 0052289c to 005228df has its CatchHandler @ 005228e8 */
      FUN_00474a40(uVar7,&local_b0,"info.GetAttr(\"keepdims\", &keepdims).IsOK()",local_e0);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0052297c;
    }
  }
  local_60 = pvVar6;
  uVar5 = s_noop_with_empty_axes_001c441a._8_8_;
  uVar7 = s_noop_with_empty_axes_001c441a._0_8_;
  local_b0 = 0x28;
  *(bool *)(param_1 + 7) = local_60 == (void *)0x1;
  uVar4 = s_noop_with_empty_axes_001c441a._0_8_;
  uStack_9f = 0x7861;
  uStack_9d = 0x7365;
  cStack_a7 = (char)uVar5;
  uStack_a6 = SUB86(uVar5,1);
  cStack_a0 = SUB81(uVar5,7);
  s_noop_with_empty_axes_001c441a[0] = (char)uVar7;
  s_noop_with_empty_axes_001c441a[1] = SUB81(uVar7,1);
  s_noop_with_empty_axes_001c441a[2] = SUB81(uVar7,2);
  s_noop_with_empty_axes_001c441a[3] = SUB81(uVar7,3);
  s_noop_with_empty_axes_001c441a[4] = SUB81(uVar7,4);
  s_noop_with_empty_axes_001c441a[5] = SUB81(uVar7,5);
  s_noop_with_empty_axes_001c441a[6] = SUB81(uVar7,6);
  s_noop_with_empty_axes_001c441a[7] = SUB81(uVar7,7);
  local_af._0_1_ = s_noop_with_empty_axes_001c441a[0];
  local_af._1_1_ = s_noop_with_empty_axes_001c441a[1];
  local_af._2_1_ = s_noop_with_empty_axes_001c441a[2];
  local_af._3_1_ = s_noop_with_empty_axes_001c441a[3];
  local_af._4_1_ = s_noop_with_empty_axes_001c441a[4];
  local_af._5_1_ = s_noop_with_empty_axes_001c441a[5];
  local_af._6_1_ = s_noop_with_empty_axes_001c441a[6];
  local_af._7_1_ = s_noop_with_empty_axes_001c441a[7];
  uStack_9b = 0;
                    /* try { // try from 00522748 to 0052275b has its CatchHandler @ 0052293c */
  s_noop_with_empty_axes_001c441a._0_8_ = uVar4;
  FUN_00594f20(local_e0,param_2,&local_b0,local_c8);
  pvVar6 = local_e0[0];
  local_e0[0] = (void *)0x0;
  pvVar9 = local_c8[0];
  if (pvVar6 != (void *)0x0) {
    if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar6 + 0x18));
    }
    free(pvVar6);
    pvVar9 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    free((void *)CONCAT26(uStack_9a,
                          CONCAT15(uStack_9b,CONCAT23(uStack_9d,CONCAT21(uStack_9f,cStack_a0)))));
  }
  uVar5 = s_select_last_index_001f01e0._8_8_;
  uVar7 = s_select_last_index_001f01e0._0_8_;
  local_b0 = 0x22;
  *(bool *)((long)param_1 + 0x39) = pvVar9 == (void *)0x1;
  uVar4 = s_select_last_index_001f01e0._0_8_;
  cStack_a7 = (char)uVar5;
  uStack_a6 = SUB86(uVar5,1);
  cStack_a0 = SUB81(uVar5,7);
  s_select_last_index_001f01e0[0] = (char)uVar7;
  s_select_last_index_001f01e0[1] = SUB81(uVar7,1);
  s_select_last_index_001f01e0[2] = SUB81(uVar7,2);
  s_select_last_index_001f01e0[3] = SUB81(uVar7,3);
  s_select_last_index_001f01e0[4] = SUB81(uVar7,4);
  s_select_last_index_001f01e0[5] = SUB81(uVar7,5);
  s_select_last_index_001f01e0[6] = SUB81(uVar7,6);
  s_select_last_index_001f01e0[7] = SUB81(uVar7,7);
  local_af._0_1_ = s_select_last_index_001f01e0[0];
  local_af._1_1_ = s_select_last_index_001f01e0[1];
  local_af._2_1_ = s_select_last_index_001f01e0[2];
  local_af._3_1_ = s_select_last_index_001f01e0[3];
  local_af._4_1_ = s_select_last_index_001f01e0[4];
  local_af._5_1_ = s_select_last_index_001f01e0[5];
  local_af._6_1_ = s_select_last_index_001f01e0[6];
  local_af._7_1_ = s_select_last_index_001f01e0[7];
  uStack_9f = 0x78;
                    /* try { // try from 005227c4 to 005227d7 has its CatchHandler @ 00522938 */
  s_select_last_index_001f01e0._0_8_ = uVar4;
  FUN_00594f20(local_e0,param_2,&local_b0,local_c8);
  pvVar6 = local_e0[0];
  local_e0[0] = (void *)0x0;
  pvVar9 = local_c8[0];
  if (pvVar6 != (void *)0x0) {
    if ((*(byte *)((long)pvVar6 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar6 + 0x18));
    }
    free(pvVar6);
    pvVar9 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    free((void *)CONCAT26(uStack_9a,
                          CONCAT15(uStack_9b,CONCAT23(uStack_9d,CONCAT21(uStack_9f,cStack_a0)))));
  }
  *(bool *)((long)param_1 + 0x3a) = pvVar9 != (void *)0x0;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_0052297c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00522980  FUN_00522980 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00522980(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  char local_244 [4];
  undefined1 auStack_240 [56];
  void *local_208;
  ulong local_200;
  void *local_1f8;
  void *local_1c8;
  void *local_1c0;
  ulong local_190;
  void *local_188;
  undefined8 local_158;
  undefined8 local_150;
  ulong local_148;
  void *local_140;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 *******local_f8 [6];
  ulong local_c8;
  undefined8 *******local_c0 [6];
  ulong local_90;
  undefined8 *******local_88 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00523128(param_1,*param_2,param_2[1],param_3 != 0);
  if ((uVar4 & 1) == 0) {
    local_90 = 0;
    local_c8 = 0;
    local_100 = 0;
                    /* try { // try from 005229e0 to 00522a2f has its CatchHandler @ 00522d0c */
    uVar4 = FUN_00519fa8(param_1,param_2,param_3,param_4 & 1,local_244,&local_90,&local_c8,
                         &local_100,0,PTR_FUN_007a2448,PTR_FUN_007a2450,PTR_FUN_007a2458,
                         PTR_FUN_007a2460);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 00522a80 to 00522a8b has its CatchHandler @ 00522cfc */
      lVar5 = FUN_004ae6a8(param_1,0);
      pppppppuVar1 = local_c0;
      if ((local_c8 & 1) != 0) {
        pppppppuVar1 = local_c0[0];
      }
      if ((1 < local_c8) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_00522c38;
                    /* try { // try from 00522ab4 to 00522abb has its CatchHandler @ 00522cec */
      FUN_005ca9a8(&local_200,local_c8 >> 1);
                    /* try { // try from 00522abc to 00522acb has its CatchHandler @ 00522c9c */
      uVar6 = FUN_0058d3bc(param_1,0,&local_200);
      pvVar3 = local_1c8;
      local_1c8 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      if (local_244[0] == '@') {
                    /* try { // try from 00522aec to 00522af3 has its CatchHandler @ 00522c8c */
        lVar7 = FUN_005cabcc(lVar5 + 0x18);
        if (lVar7 == 1) {
                    /* try { // try from 00522afc to 00522b03 has its CatchHandler @ 00522c4c */
          FUN_004ae878(lVar5);
                    /* try { // try from 00522b04 to 00522b0b has its CatchHandler @ 00522c3c */
          puVar8 = (undefined8 *)FUN_004bb758(uVar6);
          *puVar8 = 0;
        }
        else {
                    /* try { // try from 00522bec to 00522bf7 has its CatchHandler @ 00522c8c */
          FUN_00511654(lVar5 + 0x18,param_3);
        }
      }
      else {
        local_200 = 0;
        local_1c8 = (void *)0x0;
        local_190 = 0;
        pppppppuVar1 = local_88;
        if ((local_90 & 1) != 0) {
          pppppppuVar1 = local_88[0];
        }
        local_150 = 0;
        local_148 = 0;
        local_158 = 0;
        local_110 = 0;
        uStack_108 = 0;
        if ((1 < local_90) && (pppppppuVar1 == (undefined8 *******)0x0)) {
LAB_00522c38:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 00522b74 to 00522b7b has its CatchHandler @ 00522c74 */
        FUN_005ca9a8(auStack_240,local_90 >> 1);
        pppppppuVar1 = local_f8;
        if ((local_100 & 1) != 0) {
          pppppppuVar1 = local_f8[0];
        }
        if ((1 < local_100) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_00522c38;
                    /* try { // try from 00522ba4 to 00522bb7 has its CatchHandler @ 00522c5c */
        FUN_00523714(uVar6,auStack_240,lVar5,local_100 >> 1,pppppppuVar1,
                     *(undefined8 *)(param_1 + 0x18),&local_200);
        pvVar3 = local_208;
        local_208 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        if ((local_148 & 1) != 0) {
          free(local_140);
        }
        if ((local_190 & 1) != 0) {
          free(local_188);
        }
        if (((ulong)local_1c8 & 1) != 0) {
          free(local_1c0);
        }
        if ((local_200 & 1) != 0) {
          free(local_1f8);
        }
      }
    }
    if ((local_100 & 1) != 0) {
      free(local_f8[0]);
    }
    if ((local_c8 & 1) != 0) {
      free(local_c0[0]);
    }
    if ((local_90 & 1) != 0) {
      free(local_88[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00522d54  FUN_00522d54 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00522d54(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  char local_244 [4];
  undefined1 auStack_240 [56];
  void *local_208;
  ulong local_200;
  void *local_1f8;
  void *local_1c8;
  void *local_1c0;
  ulong local_190;
  void *local_188;
  undefined8 local_158;
  undefined8 local_150;
  ulong local_148;
  void *local_140;
  undefined8 local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 *******local_f8 [6];
  ulong local_c8;
  undefined8 *******local_c0 [6];
  ulong local_90;
  undefined8 *******local_88 [6];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00523c20(param_1,*param_2,param_2[1],param_3 != 0);
  if ((uVar4 & 1) == 0) {
    local_90 = 0;
    local_c8 = 0;
    local_100 = 0;
                    /* try { // try from 00522db4 to 00522e03 has its CatchHandler @ 005230e0 */
    uVar4 = FUN_00519fa8(param_1,param_2,param_3,param_4 & 1,local_244,&local_90,&local_c8,
                         &local_100,0,PTR_FUN_007a2448,PTR_FUN_007a2450,PTR_FUN_007a2458,
                         PTR_FUN_007a2460);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 00522e54 to 00522e5f has its CatchHandler @ 005230d0 */
      lVar5 = FUN_004ae6a8(param_1,0);
      pppppppuVar1 = local_c0;
      if ((local_c8 & 1) != 0) {
        pppppppuVar1 = local_c0[0];
      }
      if ((1 < local_c8) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_0052300c;
                    /* try { // try from 00522e88 to 00522e8f has its CatchHandler @ 005230c0 */
      FUN_005ca9a8(&local_200,local_c8 >> 1);
                    /* try { // try from 00522e90 to 00522e9f has its CatchHandler @ 00523070 */
      uVar6 = FUN_0058d3bc(param_1,0,&local_200);
      pvVar3 = local_1c8;
      local_1c8 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        free(pvVar3);
      }
      if (local_244[0] == '@') {
                    /* try { // try from 00522ec0 to 00522ec7 has its CatchHandler @ 00523060 */
        lVar7 = FUN_005cabcc(lVar5 + 0x18);
        if (lVar7 == 1) {
                    /* try { // try from 00522ed0 to 00522ed7 has its CatchHandler @ 00523020 */
          FUN_004ae878(lVar5);
                    /* try { // try from 00522ed8 to 00522edf has its CatchHandler @ 00523010 */
          puVar8 = (undefined8 *)FUN_004bb758(uVar6);
          *puVar8 = 0;
        }
        else {
                    /* try { // try from 00522fc0 to 00522fcb has its CatchHandler @ 00523060 */
          FUN_00511654(lVar5 + 0x18,param_3);
        }
      }
      else {
        local_200 = 0;
        local_1c8 = (void *)0x0;
        local_190 = 0;
        pppppppuVar1 = local_88;
        if ((local_90 & 1) != 0) {
          pppppppuVar1 = local_88[0];
        }
        local_150 = 0;
        local_148 = 0;
        local_158 = 0;
        local_110 = 0;
        uStack_108 = 0;
        if ((1 < local_90) && (pppppppuVar1 == (undefined8 *******)0x0)) {
LAB_0052300c:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 00522f48 to 00522f4f has its CatchHandler @ 00523048 */
        FUN_005ca9a8(auStack_240,local_90 >> 1);
        pppppppuVar1 = local_f8;
        if ((local_100 & 1) != 0) {
          pppppppuVar1 = local_f8[0];
        }
        if ((1 < local_100) && (pppppppuVar1 == (undefined8 *******)0x0)) goto LAB_0052300c;
                    /* try { // try from 00522f78 to 00522f8b has its CatchHandler @ 00523030 */
        FUN_0052420c(uVar6,auStack_240,lVar5,local_100 >> 1,pppppppuVar1,
                     *(undefined8 *)(param_1 + 0x18),&local_200);
        pvVar3 = local_208;
        local_208 = (void *)0x0;
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        if ((local_148 & 1) != 0) {
          free(local_140);
        }
        if ((local_190 & 1) != 0) {
          free(local_188);
        }
        if (((ulong)local_1c8 & 1) != 0) {
          free(local_1c0);
        }
        if ((local_200 & 1) != 0) {
          free(local_1f8);
        }
      }
    }
    if ((local_100 & 1) != 0) {
      free(local_f8[0]);
    }
    if ((local_c8 & 1) != 0) {
      free(local_c0[0]);
    }
    if ((local_90 & 1) != 0) {
      free(local_88[0]);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00523128  FUN_00523128 =====

void FUN_00523128(long *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  void *__ptr;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *local_120;
  ulong *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  ulong local_f0;
  undefined8 **local_e8;
  ulong local_e0;
  undefined8 *local_b8 [7];
  void *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_1,0);
  lVar6 = FUN_005cabcc(lVar5 + 0x18);
  if (lVar6 == 0) {
    local_120 = (ulong *)0x0;
    local_118 = (ulong *)0x0;
    local_110 = 0;
                    /* try { // try from 00523190 to 00523197 has its CatchHandler @ 005236bc */
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar4 == 2) {
      if (param_2 != 0) {
        uVar10 = FUN_00753a74(0x88);
                    /* try { // try from 00523568 to 0052356f has its CatchHandler @ 0052363c */
        FUN_00645c30(&local_f0);
                    /* try { // try from 00523570 to 0052358f has its CatchHandler @ 0052362c */
        FUN_0047488c(local_b8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_ops.cc"
                     ,0x35a,
                     "bool onnxruntime::check_and_reduce_empty_set_input(OpKernelContext *, const gsl::span<const int64_t>, bool) [AGG = onnxruntime::ReduceAggregatorArgMaxLastIndex<float>]"
                     ,&local_f0);
                    /* try { // try from 00523590 to 0052359f has its CatchHandler @ 0052360c */
        FUN_00479eac(auStack_108,
                     "Axes input and attribute should not both be present for reduction.");
                    /* try { // try from 005235a4 to 005235e7 has its CatchHandler @ 005235f4 */
        plVar8 = (long *)FUN_00474a40(uVar10,local_b8,"axes.empty()",auStack_108);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar10,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_00523710;
      }
                    /* try { // try from 005231a4 to 005231af has its CatchHandler @ 0052369c */
      lVar7 = FUN_004ae6a8(param_1,1);
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_005234c4;
      lVar13 = **(long **)(lVar7 + 0x20);
                    /* try { // try from 005231c0 to 005231c3 has its CatchHandler @ 00523694 */
      lVar7 = FUN_004ba96c();
                    /* try { // try from 005231d0 to 005231db has its CatchHandler @ 0052368c */
      FUN_0051a524(&local_120,local_120,lVar7,lVar7 + lVar13 * 8,lVar13);
    }
    else {
      uVar15 = (long)local_118 - (long)local_120 >> 3;
      if (param_2 < uVar15 || param_2 - uVar15 == 0) {
        if (param_2 < uVar15) {
          local_118 = local_120 + param_2;
        }
      }
      else {
                    /* try { // try from 005231f4 to 005231fb has its CatchHandler @ 005236bc */
        FUN_004ffdcc(&local_120,param_2 - uVar15);
      }
      if (param_3 == (ulong *)0x0) {
        if (param_2 != 0) goto LAB_005234c4;
      }
      else if (param_2 != 0) {
        lVar7 = param_2 << 3;
        puVar11 = local_120;
        puVar14 = param_3;
        do {
          if (param_3 + param_2 <= puVar14) goto LAB_005234c4;
          lVar7 = lVar7 + -8;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar7 != 0);
      }
    }
    uVar15 = *(ulong *)(lVar5 + 0x18);
    if ((uVar15 == 0xffffffffffffffff) || ((uVar15 != 0 && (*(long *)(lVar5 + 0x20) == 0)))) {
LAB_005234c4:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if ((long)uVar15 < 0) {
      plVar8 = (long *)FUN_00753a74(8);
      *plVar8 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 005234f0 to 00523503 has its CatchHandler @ 005236b4 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar8,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00523710;
    }
    local_f0 = 0;
    if (uVar15 != 0) {
      if ((param_4 & 1) == 0) {
        if (local_120 != local_118) {
          uVar12 = 0;
          do {
            puVar11 = local_120;
            if (local_120 != local_118) {
              do {
                if (*puVar11 == uVar12) {
                  if (puVar11 != local_118) goto LAB_00523380;
                  break;
                }
                puVar11 = puVar11 + 1;
              } while (puVar11 != local_118);
              if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_005234c4;
              local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
              uVar1 = 6;
              if ((local_f0 & 1) != 0) {
                uVar1 = local_e0;
              }
              if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 00523404 to 0052340f has its CatchHandler @ 005235e8 */
                FUN_004c7d34(&local_f0,local_b8);
              }
              else {
                pppuVar2 = &local_e8;
                if ((local_f0 & 1) != 0) {
                  pppuVar2 = (undefined8 ***)local_e8;
                }
                pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
                local_f0 = local_f0 + 2;
              }
            }
LAB_00523380:
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar15);
        }
      }
      else {
        uVar12 = 0;
        do {
          puVar11 = local_120;
          if (local_120 == local_118) {
LAB_005232ac:
            local_b8[0] = (undefined8 **)0x1;
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 != uVar1) {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)0x1;
              goto LAB_00523324;
            }
                    /* try { // try from 00523340 to 0052334b has its CatchHandler @ 005235f0 */
            FUN_004c7d34(&local_f0,local_b8);
          }
          else {
            do {
              if (*puVar11 == uVar12) {
                if (puVar11 != local_118) goto LAB_005232ac;
                break;
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != local_118);
            if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_005234c4;
            local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 00523350 to 0052335b has its CatchHandler @ 005235ec */
              FUN_004c7d34(&local_f0,local_b8);
            }
            else {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
LAB_00523324:
              local_f0 = local_f0 + 2;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
    }
    pppuVar2 = &local_e8;
    if ((local_f0 & 1) != 0) {
      pppuVar2 = (undefined8 ***)local_e8;
    }
    if ((1 < local_f0) && (pppuVar2 == (undefined8 ***)0x0)) goto LAB_005234c4;
                    /* try { // try from 00523438 to 0052343f has its CatchHandler @ 005236a4 */
    FUN_005ca9a8(local_b8,local_f0 >> 1);
                    /* try { // try from 00523440 to 00523457 has its CatchHandler @ 005236c4 */
    FUN_0058d3bc(param_1,0,local_b8);
    lVar5 = FUN_005cabcc(local_b8);
    __ptr = local_80;
    if (lVar5 != 0) {
      plVar9 = (long *)FUN_00753a74(0x10);
      FUN_00476720(auStack_108);
                    /* try { // try from 00523518 to 00523523 has its CatchHandler @ 00523688 */
      plVar8 = (long *)FUN_0071259c(plVar9,auStack_108);
      *plVar9 = (long)(PTR_DAT_007a1ed8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00523544 to 0052355b has its CatchHandler @ 0052364c */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar9,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
      }
      goto LAB_00523710;
    }
    local_80 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if ((local_f0 & 1) != 0) {
      free(local_e8);
    }
    if (local_120 != (ulong *)0x0) {
      local_118 = local_120;
      free(local_120);
    }
  }
  plVar8 = (long *)(ulong)(lVar6 == 0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00523710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


// ===== 00523714  FUN_00523714 =====

void FUN_00523714(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  void *pvVar2;
  float *pfVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  double local_120;
  undefined8 local_118;
  double local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  float *pfStack_f0;
  long *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  undefined **local_c0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x18);
  if ((lVar8 != -1) && ((lVar8 == 0 || (*(long *)(param_1 + 0x20) != 0)))) {
    FUN_005ca9a8(auStack_a8,lVar8);
                    /* try { // try from 00523780 to 00523787 has its CatchHandler @ 005239e8 */
    pfVar3 = (float *)FUN_004ae878(param_3);
                    /* try { // try from 00523788 to 00523793 has its CatchHandler @ 005239d4 */
    plVar4 = (long *)FUN_004bb758(param_1);
                    /* try { // try from 00523794 to 005237bb has its CatchHandler @ 005239fc */
    uVar5 = FUN_005cabcc(auStack_a8);
    if ((param_4 == 0) || (lVar8 = *param_2, param_4 == lVar8)) {
      FUN_005199dc(uVar5);
                    /* try { // try from 005237bc to 005237c3 has its CatchHandler @ 005239c0 */
      lVar8 = FUN_005cabcc(param_2);
      pvVar2 = local_70;
      if (lVar8 < 1) {
        *plVar4 = 0;
      }
      else {
        fVar11 = *pfVar3;
        lVar9 = 0;
        lVar10 = 0;
        do {
          fVar12 = pfVar3[lVar10];
          if (fVar12 < fVar11 == (NAN(fVar12) || NAN(fVar11))) {
            lVar9 = lVar10;
            fVar11 = fVar12;
          }
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        *plVar4 = lVar9;
      }
    }
    else {
      if ((lVar8 == -1) || ((lVar8 != 0 && (param_2[1] == 0)))) goto LAB_00523954;
                    /* try { // try from 0052381c to 0052385b has its CatchHandler @ 005239fc */
      uVar6 = FUN_00518644(param_7,lVar8,param_2[1],param_4,param_5);
      if (((uVar6 & 1) != 0) ||
         ((FUN_00518cac(param_2,param_4,param_5,param_7), pvVar2 = local_70,
          *(long *)(param_7 + 0xa8) != 0 && (*(long *)(param_7 + 0xf0) != 0)))) {
        FUN_005187a4(param_7);
        local_118 = 0x4010000000000000;
        plStack_d8 = &local_108;
        local_108 = (*(ulong *)(param_7 + 0x70) >> 1) * *(long *)(param_7 + 0xa8);
        local_e0 = PTR_DAT_007a2528 + 0x10;
        lStack_100 = *(long *)(param_7 + 0xb0) * *(long *)(param_7 + 0xa8);
        local_120 = (double)(local_108 * 4);
        local_110 = (double)(local_108 * 0x18);
                    /* try { // try from 005238bc to 005238cf has its CatchHandler @ 00523958 */
        local_f8 = param_7;
        pfStack_f0 = pfVar3;
        local_e8 = plVar4;
        local_c0 = &local_e0;
        FUN_0063c634(param_6,uVar5,&local_120,&local_e0);
        if (local_c0 == &local_e0) {
          lVar8 = 0x20;
          ppuVar7 = &local_e0;
        }
        else {
          pvVar2 = local_70;
          if (local_c0 == (undefined **)0x0) goto joined_r0x0052394c;
          lVar8 = 0x28;
          ppuVar7 = local_c0;
        }
        (**(code **)(*ppuVar7 + lVar8))();
        pvVar2 = local_70;
      }
    }
joined_r0x0052394c:
    local_70 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      local_70 = (void *)0x0;
      free(pvVar2);
    }
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00523954:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00523a24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00523a28  FUN_00523a28 =====

void FUN_00523a28(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792d50;
  puVar1[1] = uVar2;
  return;
}


// ===== 00523a60  FUN_00523a60 =====

void FUN_00523a60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792d50;
  param_2[1] = uVar1;
  return;
}


// ===== 00523a78  FUN_00523a78 =====

void FUN_00523a78(void)

{
  return;
}


// ===== 00523a7c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00523a80  FUN_00523a80 =====

void FUN_00523a80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00523a90(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00523a90  FUN_00523a90 =====

long * FUN_00523a90(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  lVar8 = *param_1;
  lVar9 = *(long *)(lVar8 + 0x10);
  lVar10 = *(long *)(lVar9 + 0xf0);
  lVar12 = 0;
  if (lVar10 != 0) {
    lVar12 = param_2 / lVar10;
  }
  if (lVar12 < 0) {
LAB_00523bf4:
    plVar6 = (long *)FUN_00753a74(8);
    *plVar6 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (param_2 < param_3) {
    lVar10 = param_2 - lVar12 * lVar10;
    plVar6 = (long *)(lVar9 + 0xc0);
    plVar13 = plVar6;
    if ((*(byte *)(lVar9 + 0xb8) & 1) != 0) {
      plVar13 = *(long **)(lVar9 + 0xc0);
    }
    lVar11 = plVar13[lVar12] + *(long *)(lVar9 + 0xf8) * lVar10;
    lVar3 = *(long *)(lVar8 + 0x18);
    lVar5 = *(long *)(lVar8 + 0x20);
    do {
      uVar4 = *(ulong *)(lVar9 + 0x70);
      plVar13 = (long *)(lVar9 + 0x78);
      if ((uVar4 & 1) != 0) {
        plVar13 = *(long **)(lVar9 + 0x78);
      }
      if ((uVar4 < 2) || (*(long *)(lVar8 + 8) < 1)) {
        param_1 = (long *)0x0;
        *(undefined8 *)(lVar5 + param_2 * 8) = 0;
        if (*(long *)(lVar9 + 0xf0) <= lVar10 + 1) goto LAB_00523bb0;
LAB_00523aec:
        lVar10 = lVar10 + 1;
        lVar11 = *(long *)(lVar9 + 0xf8) + lVar11;
      }
      else {
        lVar1 = lVar3 + lVar11 * 4;
        param_1 = (long *)0x0;
        plVar7 = (long *)0x0;
        fVar15 = *(float *)(lVar1 + *plVar13 * 4);
        plVar2 = plVar13 + (uVar4 >> 1);
        do {
          lVar14 = 0;
          do {
            fVar16 = *(float *)(lVar1 + *plVar13 * 4 + lVar14 * 4);
            lVar14 = lVar14 + *(long *)(lVar9 + 0xb0);
            if (fVar16 < fVar15 == (NAN(fVar16) || NAN(fVar15))) {
              param_1 = plVar7;
              fVar15 = fVar16;
            }
            plVar7 = (long *)((long)plVar7 + 1);
          } while (lVar14 < *(long *)(lVar8 + 8));
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar2);
        *(long **)(lVar5 + param_2 * 8) = param_1;
        if (lVar10 + 1 < *(long *)(lVar9 + 0xf0)) goto LAB_00523aec;
LAB_00523bb0:
        lVar1 = lVar12 + 1;
        if (lVar1 < (long)(*(ulong *)(lVar9 + 0xb8) >> 1)) {
          if (lVar12 == -2 || lVar12 + 2 < 0 != SCARRY8(lVar12,2)) goto LAB_00523bf4;
          lVar10 = 0;
          plVar13 = plVar6;
          if ((*(ulong *)(lVar9 + 0xb8) & 1) != 0) {
            plVar13 = (long *)*plVar6;
          }
          lVar11 = plVar13[lVar1];
          lVar12 = lVar1;
        }
        else {
          lVar10 = 0;
          lVar12 = lVar1;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_1;
}


// ===== 00523c20  FUN_00523c20 =====

void FUN_00523c20(long *param_1,ulong param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  void *__ptr;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *local_120;
  ulong *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  ulong local_f0;
  undefined8 **local_e8;
  ulong local_e0;
  undefined8 *local_b8 [7];
  void *local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_1,0);
  lVar6 = FUN_005cabcc(lVar5 + 0x18);
  if (lVar6 == 0) {
    local_120 = (ulong *)0x0;
    local_118 = (ulong *)0x0;
    local_110 = 0;
                    /* try { // try from 00523c88 to 00523c8f has its CatchHandler @ 005241b4 */
    iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar4 == 2) {
      if (param_2 != 0) {
        uVar10 = FUN_00753a74(0x88);
                    /* try { // try from 00524060 to 00524067 has its CatchHandler @ 00524134 */
        FUN_00645c30(&local_f0);
                    /* try { // try from 00524068 to 00524087 has its CatchHandler @ 00524124 */
        FUN_0047488c(local_b8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_ops.cc"
                     ,0x35a,
                     "bool onnxruntime::check_and_reduce_empty_set_input(OpKernelContext *, const gsl::span<const int64_t>, bool) [AGG = onnxruntime::ReduceAggregatorArgMax<float>]"
                     ,&local_f0);
                    /* try { // try from 00524088 to 00524097 has its CatchHandler @ 00524104 */
        FUN_00479eac(auStack_108,
                     "Axes input and attribute should not both be present for reduction.");
                    /* try { // try from 0052409c to 005240df has its CatchHandler @ 005240ec */
        plVar8 = (long *)FUN_00474a40(uVar10,local_b8,"axes.empty()",auStack_108);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar10,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_00524208;
      }
                    /* try { // try from 00523c9c to 00523ca7 has its CatchHandler @ 00524194 */
      lVar7 = FUN_004ae6a8(param_1,1);
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_00523fbc;
      lVar13 = **(long **)(lVar7 + 0x20);
                    /* try { // try from 00523cb8 to 00523cbb has its CatchHandler @ 0052418c */
      lVar7 = FUN_004ba96c();
                    /* try { // try from 00523cc8 to 00523cd3 has its CatchHandler @ 00524184 */
      FUN_0051a524(&local_120,local_120,lVar7,lVar7 + lVar13 * 8,lVar13);
    }
    else {
      uVar15 = (long)local_118 - (long)local_120 >> 3;
      if (param_2 < uVar15 || param_2 - uVar15 == 0) {
        if (param_2 < uVar15) {
          local_118 = local_120 + param_2;
        }
      }
      else {
                    /* try { // try from 00523cec to 00523cf3 has its CatchHandler @ 005241b4 */
        FUN_004ffdcc(&local_120,param_2 - uVar15);
      }
      if (param_3 == (ulong *)0x0) {
        if (param_2 != 0) goto LAB_00523fbc;
      }
      else if (param_2 != 0) {
        lVar7 = param_2 << 3;
        puVar11 = local_120;
        puVar14 = param_3;
        do {
          if (param_3 + param_2 <= puVar14) goto LAB_00523fbc;
          lVar7 = lVar7 + -8;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar7 != 0);
      }
    }
    uVar15 = *(ulong *)(lVar5 + 0x18);
    if ((uVar15 == 0xffffffffffffffff) || ((uVar15 != 0 && (*(long *)(lVar5 + 0x20) == 0)))) {
LAB_00523fbc:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    if ((long)uVar15 < 0) {
      plVar8 = (long *)FUN_00753a74(8);
      *plVar8 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00523fe8 to 00523ffb has its CatchHandler @ 005241ac */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar8,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00524208;
    }
    local_f0 = 0;
    if (uVar15 != 0) {
      if ((param_4 & 1) == 0) {
        if (local_120 != local_118) {
          uVar12 = 0;
          do {
            puVar11 = local_120;
            if (local_120 != local_118) {
              do {
                if (*puVar11 == uVar12) {
                  if (puVar11 != local_118) goto LAB_00523e78;
                  break;
                }
                puVar11 = puVar11 + 1;
              } while (puVar11 != local_118);
              if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_00523fbc;
              local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
              uVar1 = 6;
              if ((local_f0 & 1) != 0) {
                uVar1 = local_e0;
              }
              if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 00523efc to 00523f07 has its CatchHandler @ 005240e0 */
                FUN_004c7d34(&local_f0,local_b8);
              }
              else {
                pppuVar2 = &local_e8;
                if ((local_f0 & 1) != 0) {
                  pppuVar2 = (undefined8 ***)local_e8;
                }
                pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
                local_f0 = local_f0 + 2;
              }
            }
LAB_00523e78:
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar15);
        }
      }
      else {
        uVar12 = 0;
        do {
          puVar11 = local_120;
          if (local_120 == local_118) {
LAB_00523da4:
            local_b8[0] = (undefined8 **)0x1;
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 != uVar1) {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)0x1;
              goto LAB_00523e1c;
            }
                    /* try { // try from 00523e38 to 00523e43 has its CatchHandler @ 005240e8 */
            FUN_004c7d34(&local_f0,local_b8);
          }
          else {
            do {
              if (*puVar11 == uVar12) {
                if (puVar11 != local_118) goto LAB_00523da4;
                break;
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != local_118);
            if (*(ulong *)(lVar5 + 0x18) <= uVar12) goto LAB_00523fbc;
            local_b8[0] = *(undefined8 **)(*(long *)(lVar5 + 0x20) + uVar12 * 8);
            uVar1 = 6;
            if ((local_f0 & 1) != 0) {
              uVar1 = local_e0;
            }
            if (local_f0 >> 1 == uVar1) {
                    /* try { // try from 00523e48 to 00523e53 has its CatchHandler @ 005240e4 */
              FUN_004c7d34(&local_f0,local_b8);
            }
            else {
              pppuVar2 = &local_e8;
              if ((local_f0 & 1) != 0) {
                pppuVar2 = (undefined8 ***)local_e8;
              }
              pppuVar2[local_f0 >> 1] = (undefined8 **)local_b8[0];
LAB_00523e1c:
              local_f0 = local_f0 + 2;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar15);
      }
    }
    pppuVar2 = &local_e8;
    if ((local_f0 & 1) != 0) {
      pppuVar2 = (undefined8 ***)local_e8;
    }
    if ((1 < local_f0) && (pppuVar2 == (undefined8 ***)0x0)) goto LAB_00523fbc;
                    /* try { // try from 00523f30 to 00523f37 has its CatchHandler @ 0052419c */
    FUN_005ca9a8(local_b8,local_f0 >> 1);
                    /* try { // try from 00523f38 to 00523f4f has its CatchHandler @ 005241bc */
    FUN_0058d3bc(param_1,0,local_b8);
    lVar5 = FUN_005cabcc(local_b8);
    __ptr = local_80;
    if (lVar5 != 0) {
      plVar9 = (long *)FUN_00753a74(0x10);
      FUN_00476720(auStack_108);
                    /* try { // try from 00524010 to 0052401b has its CatchHandler @ 00524180 */
      plVar8 = (long *)FUN_0071259c(plVar9,auStack_108);
      *plVar9 = (long)(PTR_DAT_007a1ed8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0052403c to 00524053 has its CatchHandler @ 00524144 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar9,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
      }
      goto LAB_00524208;
    }
    local_80 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    if ((local_f0 & 1) != 0) {
      free(local_e8);
    }
    if (local_120 != (ulong *)0x0) {
      local_118 = local_120;
      free(local_120);
    }
  }
  plVar8 = (long *)(ulong)(lVar6 == 0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00524208:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar8);
}


// ===== 0052420c  FUN_0052420c =====

void FUN_0052420c(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
  void *pvVar2;
  float *pfVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  double local_120;
  undefined8 local_118;
  double local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  float *pfStack_f0;
  long *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  undefined **local_c0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x18);
  if ((lVar8 == -1) || ((lVar8 != 0 && (*(long *)(param_1 + 0x20) == 0)))) {
LAB_0052445c:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  FUN_005ca9a8(auStack_a8,lVar8);
                    /* try { // try from 00524278 to 0052427f has its CatchHandler @ 00524540 */
  pfVar3 = (float *)FUN_004ae878(param_3);
                    /* try { // try from 00524280 to 0052428b has its CatchHandler @ 0052452c */
  plVar4 = (long *)FUN_004bb758(param_1);
                    /* try { // try from 0052428c to 005242b3 has its CatchHandler @ 00524554 */
  uVar5 = FUN_005cabcc(auStack_a8);
  if ((param_4 == 0) || (lVar8 = *param_2, param_4 == lVar8)) {
    FUN_005199dc(uVar5);
                    /* try { // try from 005242b4 to 005242bb has its CatchHandler @ 00524518 */
    lVar8 = FUN_005cabcc(param_2);
    if (lVar8 < 0) {
      plVar4 = (long *)FUN_00753a74(8);
      *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00524488 to 0052449b has its CatchHandler @ 00524504 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00524578;
    }
    pvVar2 = local_70;
    if (lVar8 == 0) {
      *plVar4 = -1;
    }
    else {
      if (lVar8 == 1) {
        lVar9 = 0;
      }
      else {
        fVar12 = *pfVar3;
        lVar11 = 1;
        lVar10 = 0;
        do {
          fVar13 = pfVar3[lVar11];
          lVar9 = lVar11;
          if (fVar13 == fVar12 || fVar13 < fVar12 != (NAN(fVar13) || NAN(fVar12))) {
            lVar9 = lVar10;
            fVar13 = fVar12;
          }
          fVar12 = fVar13;
          lVar11 = lVar11 + 1;
          lVar10 = lVar9;
        } while (lVar8 != lVar11);
      }
      *plVar4 = lVar9;
    }
  }
  else {
    if ((lVar8 == -1) || ((lVar8 != 0 && (param_2[1] == 0)))) goto LAB_0052445c;
                    /* try { // try from 005242e8 to 00524327 has its CatchHandler @ 00524554 */
    uVar6 = FUN_00518644(param_7,lVar8,param_2[1],param_4,param_5);
    if (((uVar6 & 1) != 0) ||
       ((FUN_00518cac(param_2,param_4,param_5,param_7), pvVar2 = local_70,
        *(long *)(param_7 + 0xa8) != 0 && (*(long *)(param_7 + 0xf0) != 0)))) {
      FUN_005187a4(param_7);
      local_118 = 0x4010000000000000;
      plStack_d8 = &local_108;
      local_108 = (*(ulong *)(param_7 + 0x70) >> 1) * *(long *)(param_7 + 0xa8);
      local_e0 = PTR_DAT_007a2530 + 0x10;
      lStack_100 = *(long *)(param_7 + 0xb0) * *(long *)(param_7 + 0xa8);
      local_120 = (double)(local_108 * 4);
      local_110 = (double)(local_108 * 0x18);
                    /* try { // try from 00524388 to 0052439b has its CatchHandler @ 0052449c */
      local_f8 = param_7;
      pfStack_f0 = pfVar3;
      local_e8 = plVar4;
      local_c0 = &local_e0;
      FUN_0063c634(param_6,uVar5,&local_120,&local_e0);
      if (local_c0 == &local_e0) {
        lVar8 = 0x20;
        ppuVar7 = &local_e0;
      }
      else {
        pvVar2 = local_70;
        if (local_c0 == (undefined **)0x0) goto joined_r0x00524454;
        lVar8 = 0x28;
        ppuVar7 = local_c0;
      }
      (**(code **)(*ppuVar7 + lVar8))();
      pvVar2 = local_70;
    }
  }
joined_r0x00524454:
  local_70 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    local_70 = (void *)0x0;
    free(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00524578:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052457c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00524580  FUN_00524580 =====

void FUN_00524580(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792d98;
  puVar1[1] = uVar2;
  return;
}


// ===== 005245b8  FUN_005245b8 =====

void FUN_005245b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792d98;
  param_2[1] = uVar1;
  return;
}


// ===== 005245d0  FUN_005245d0 =====

void FUN_005245d0(void)

{
  return;
}


// ===== 005245d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005245d8  FUN_005245d8 =====

void FUN_005245d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005245e8(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005245e8  FUN_005245e8 =====

long * FUN_005245e8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  lVar9 = *param_1;
  lVar10 = *(long *)(lVar9 + 0x10);
  lVar11 = *(long *)(lVar10 + 0xf0);
  lVar13 = 0;
  if (lVar11 != 0) {
    lVar13 = param_2 / lVar11;
  }
  if (lVar13 < 0) {
LAB_0052474c:
    plVar7 = (long *)FUN_00753a74(8);
    *plVar7 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar7,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (param_2 < param_3) {
    lVar11 = param_2 - lVar13 * lVar11;
    plVar7 = (long *)(lVar10 + 0xc0);
    plVar14 = plVar7;
    if ((*(byte *)(lVar10 + 0xb8) & 1) != 0) {
      plVar14 = *(long **)(lVar10 + 0xc0);
    }
    lVar12 = plVar14[lVar13] + *(long *)(lVar10 + 0xf8) * lVar11;
    lVar3 = *(long *)(lVar9 + 0x18);
    lVar5 = *(long *)(lVar9 + 0x20);
    do {
      uVar4 = *(ulong *)(lVar10 + 0x70);
      plVar14 = (long *)(lVar10 + 0x78);
      if ((uVar4 & 1) != 0) {
        plVar14 = *(long **)(lVar10 + 0x78);
      }
      if ((uVar4 < 2) || (*(long *)(lVar9 + 8) < 1)) {
        param_1 = (long *)0x0;
        *(undefined8 *)(lVar5 + param_2 * 8) = 0;
        if (*(long *)(lVar10 + 0xf0) <= lVar11 + 1) goto LAB_00524708;
LAB_00524644:
        lVar11 = lVar11 + 1;
        lVar12 = *(long *)(lVar10 + 0xf8) + lVar12;
      }
      else {
        lVar1 = lVar3 + lVar12 * 4;
        param_1 = (long *)0x0;
        plVar8 = (long *)0x0;
        fVar16 = *(float *)(lVar1 + *plVar14 * 4);
        plVar2 = plVar14 + (uVar4 >> 1);
        do {
          lVar15 = 0;
          plVar6 = param_1;
          do {
            fVar17 = *(float *)(lVar1 + *plVar14 * 4 + lVar15 * 4);
            lVar15 = lVar15 + *(long *)(lVar10 + 0xb0);
            param_1 = plVar8;
            if (fVar17 == fVar16 || fVar17 < fVar16 != (NAN(fVar17) || NAN(fVar16))) {
              param_1 = plVar6;
              fVar17 = fVar16;
            }
            fVar16 = fVar17;
            plVar8 = (long *)((long)plVar8 + 1);
            plVar6 = param_1;
          } while (lVar15 < *(long *)(lVar9 + 8));
          plVar14 = plVar14 + 1;
        } while (plVar14 != plVar2);
        *(long **)(lVar5 + param_2 * 8) = param_1;
        if (lVar11 + 1 < *(long *)(lVar10 + 0xf0)) goto LAB_00524644;
LAB_00524708:
        lVar1 = lVar13 + 1;
        if (lVar1 < (long)(*(ulong *)(lVar10 + 0xb8) >> 1)) {
          if (lVar13 == -2 || lVar13 + 2 < 0 != SCARRY8(lVar13,2)) goto LAB_0052474c;
          lVar11 = 0;
          plVar14 = plVar7;
          if ((*(ulong *)(lVar10 + 0xb8) & 1) != 0) {
            plVar14 = (long *)*plVar7;
          }
          lVar12 = plVar14[lVar1];
          lVar13 = lVar1;
        }
        else {
          lVar11 = 0;
          lVar13 = lVar1;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_1;
}


// ===== 00524778  FUN_00524778 =====

void FUN_00524778(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x50);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 005247b8 to 005247bf has its CatchHandler @ 0052483c */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 005247c0 to 005247d3 has its CatchHandler @ 00524814 */
  FUN_005225a4(plVar1 + 2,param_3,0,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00792d00;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00524850  FUN_00524850 =====

void FUN_00524850(undefined8 *param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[3]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 005248a0  FUN_005248a0 =====

bool FUN_005248a0(ulong *param_1,ulong *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = (long *)*param_1;
  if ((plVar1 == (long *)*param_2) && (plVar5 = (long *)param_1[1], plVar5 == (long *)param_2[1])) {
    if (plVar1 == (long *)0x0) {
      plVar2 = (long *)param_1[2];
      plVar4 = (long *)param_2[2];
      if (plVar2 != plVar4) {
        if (((*param_3 != *param_4) || (param_3[1] != param_4[1])) || (param_3[2] != param_4[2]))
        goto LAB_00524980;
LAB_005249c4:
        if (plVar2 != plVar4) {
          return false;
        }
      }
LAB_005249d8:
      if ((*param_3 == *param_4) && (param_3[1] == param_4[1])) {
        return param_3[2] == param_4[2];
      }
    }
    else {
      while( true ) {
        plVar2 = (long *)param_1[2];
        plVar4 = (long *)param_2[2];
        if (plVar2 == plVar4) goto LAB_005249d8;
        plVar6 = (long *)*param_3;
        if ((plVar6 != (long *)*param_4) ||
           (plVar7 = (long *)param_3[1], plVar7 != (long *)param_4[1])) break;
        plVar8 = (long *)param_3[2];
        if (plVar8 == (long *)param_4[2]) goto LAB_005249c4;
        if (((((plVar5 == (long *)0x0) || (plVar2 < plVar1)) || (plVar5 <= plVar2)) ||
            ((plVar6 == (long *)0x0 || (plVar7 == (long *)0x0)))) ||
           ((plVar8 < plVar6 || (plVar7 <= plVar8)))) break;
        if (*plVar2 != *plVar8) {
          return false;
        }
        param_1[2] = (ulong)(plVar2 + 1);
        uVar3 = param_3[2];
        if (((uVar3 == 0) || (param_3[1] == 0)) || ((ulong)param_3[1] <= uVar3)) break;
        param_3[2] = uVar3 + 8;
        plVar5 = (long *)param_1[1];
        if (plVar5 != (long *)param_2[1]) break;
      }
    }
  }
LAB_00524980:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 00524a10  FUN_00524a10 =====

ulong FUN_00524a10(ulong *param_1,ulong param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  uVar7 = param_1[2];
  uVar3 = (uVar4 >> 0xc ^ param_2 >> 7) & uVar7;
  uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
          0x8080808080808080;
  if (uVar5 == 0) {
    lVar6 = 8;
    do {
      uVar3 = uVar3 + lVar6;
      lVar6 = lVar6 + 8;
      uVar3 = uVar3 & uVar7;
      uVar5 = *(ulong *)(uVar4 + uVar3) & (*(ulong *)(uVar4 + uVar3) << 7 ^ 0xffffffffffffffff) &
              0x8080808080808080;
    } while (uVar5 == 0);
  }
  uVar5 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar7;
  if ((*(long *)(uVar4 - 8) == 0) && (*(char *)(uVar4 + uVar3) != -2)) {
    FUN_00524c84();
    uVar3 = FUN_0049f7dc(param_1,uVar7,param_2);
    uVar4 = *param_1;
  }
  uVar5 = param_1[3];
  cVar1 = *(char *)(uVar4 + uVar3);
  bVar2 = (byte)param_2 & 0x7f;
  *(byte *)(uVar4 + uVar3) = bVar2;
  param_1[3] = uVar5 + 2;
  *(ulong *)(uVar4 - 8) = *(long *)(uVar4 - 8) - (ulong)(cVar1 == -0x80);
  *(byte *)(uVar4 + (param_1[2] & uVar3 - 7) + (param_1[2] & 7)) = bVar2;
  return uVar3;
}


// ===== 00524b14  FUN_00524b14 =====

void FUN_00524b14(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong local_50;
  ulong local_48;
  byte local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_50 = *param_1;
  uVar1 = param_1[1];
  local_48 = param_1[2];
  param_1[2] = param_2;
  local_40 = (byte)param_1[3] & 1;
  uVar6 = FUN_00524d24(&local_50,param_1,uVar1);
  puVar5 = PTR_LOOP_007a1f58;
  if (((uVar6 & 1) == 0) && (local_48 != 0)) {
    uVar7 = param_1[1];
    uVar6 = 0;
    do {
      if (-1 < *(char *)(local_50 + uVar6)) {
        uVar10 = param_1[2];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = puVar5 + *(long *)(uVar1 + uVar6 * 8);
        uVar9 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                (long)(puVar5 + *(long *)(uVar1 + uVar6 * 8)) * -0x622015f714c7d297;
        uVar8 = *param_1;
        uVar11 = (uVar9 >> 7 ^ uVar8 >> 0xc) & uVar10;
        uVar12 = *(ulong *)(uVar8 + uVar11) & (*(ulong *)(uVar8 + uVar11) << 7 ^ 0xffffffffffffffff)
                 & 0x8080808080808080;
        if (uVar12 == 0) {
          lVar13 = 8;
          do {
            uVar11 = uVar11 + lVar13;
            lVar13 = lVar13 + 8;
            uVar11 = uVar11 & uVar10;
            uVar12 = *(ulong *)(uVar8 + uVar11) &
                     (*(ulong *)(uVar8 + uVar11) << 7 ^ 0xffffffffffffffff) & 0x8080808080808080;
          } while (uVar12 == 0);
        }
        uVar12 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        bVar2 = (byte)uVar9 & 0x7f;
        uVar11 = uVar11 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar10;
        *(byte *)(uVar8 + uVar11) = bVar2;
        *(byte *)(uVar8 + (uVar11 - 7 & uVar10) + (uVar10 & 7)) = bVar2;
        *(undefined8 *)(uVar7 + uVar11 * 8) = *(undefined8 *)(uVar1 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_48);
    lVar13 = -9;
    if (local_40 == 0) {
      lVar13 = -8;
    }
    free((void *)(local_50 + lVar13));
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00524c84  FUN_00524c84 =====

void FUN_00524c84(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((uVar2 < 9) ||
     (uVar3 = (*(ulong *)(param_1 + 0x18) & 0xffffffffffffffe) * 0x10,
     uVar2 * 0x19 <= uVar3 && uVar3 + uVar2 * -0x19 != 0)) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      FUN_00524b14(param_1,uVar2 << 1 | 1);
      return;
    }
  }
  else {
    FUN_00648380(param_1,PTR_DAT_007a2538,auStack_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00524d24  FUN_00524d24 =====

bool FUN_00524d24(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *__s;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[2];
  plVar2 = (long *)FUN_00759c3c(uVar4 + 0x17 + uVar4 * 8 & 0xfffffffffffffff8);
  uVar5 = param_2[3];
  lVar1 = 6;
  if (uVar4 != 7) {
    lVar1 = uVar4 - (uVar4 >> 3);
  }
  uVar3 = param_1[1];
  __s = plVar2 + 1;
  *plVar2 = lVar1 - (uVar5 >> 1);
  *param_2 = __s;
  param_2[1] = (long)plVar2 + (uVar4 + 0x17 & 0xfffffffffffffff8);
  if ((uVar3 == 0) || (uVar4 >= 9 || uVar3 >= uVar4)) {
    memset(__s,0x80,uVar4 + 8);
    *(undefined1 *)((long)__s + uVar4) = 0xff;
  }
  else {
    FUN_0064874c(param_1,param_2,param_3,8);
    lVar1 = -9;
    if ((char)param_1[2] == '\0') {
      lVar1 = -8;
    }
    free((void *)(*param_1 + lVar1));
    uVar5 = param_2[3];
  }
  param_2[3] = uVar5 & 0xfffffffffffffffe;
  return uVar4 < 9 && uVar3 < uVar4;
}


// ===== 00524e08  FUN_00524e08 =====

ulong FUN_00524e08(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = PTR_LOOP_007a1f58 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (long)(PTR_LOOP_007a1f58 + *param_2) * -0x622015f714c7d297;
}


// ===== 00524e38  FUN_00524e38 =====

void FUN_00524e38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  return;
}


// ===== 00524e44  FUN_00524e44 =====

void FUN_00524e44(ulong *param_1,undefined8 param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  void *local_118;
  void *local_110;
  undefined8 local_108;
  ulong local_100 [2];
  void *local_f0;
  void *local_e8;
  void *local_e0;
  void *local_d0;
  long lStack_c8;
  void *local_c0;
  byte local_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  char cStack_af;
  undefined6 uStack_ae;
  char cStack_a8;
  undefined2 uStack_a7;
  undefined2 uStack_a5;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  local_100[0] = CONCAT26(local_100[0]._6_2_,0x7365786108);
  local_118 = (void *)0x0;
  local_110 = (void *)0x0;
  local_108 = 0;
                    /* try { // try from 00524ea4 to 00524eb7 has its CatchHandler @ 0052526c */
  FUN_00525358(&local_e8,param_2,local_100,&local_118);
  pvVar4 = local_e8;
  lVar8 = (long)local_e0 - (long)local_e8;
  if ((lVar8 == -8) || ((local_e8 == (void *)0x0 && (local_e0 != (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  uVar7 = lVar8 >> 3;
  local_b8 = 0;
  uStack_b7 = 0;
  if (6 < uVar7) {
    uVar1 = uVar7;
    if (uVar7 < 0xd) {
      uVar1 = 0xc;
    }
    if (uVar7 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0052517c to 0052517f has its CatchHandler @ 0052527c */
        FUN_002f9ee0();
      }
      goto LAB_00525304;
    }
                    /* try { // try from 00524ef8 to 00524f27 has its CatchHandler @ 0052527c */
    uVar5 = FUN_00759c3c(uVar1 << 3);
    cStack_b0 = (char)uVar5;
    cStack_af = (char)((ulong)uVar5 >> 8);
    uStack_ae = (undefined6)((ulong)uVar5 >> 0x10);
    cStack_a8 = (char)uVar1;
    uStack_a7 = (undefined2)(uVar1 >> 8);
    uStack_a5 = (undefined2)(uVar1 >> 0x18);
    uStack_a3 = (undefined1)(uVar1 >> 0x28);
    uStack_a2 = (undefined2)(uVar1 >> 0x30);
    local_b8 = 1;
  }
  uStack_b7 = 0;
  lStack_c8 = (long)pvVar4 + lVar8;
  local_c0 = pvVar4;
  local_d0 = pvVar4;
  FUN_004c7b90(&local_b8,&local_d0,uVar7);
  if ((ulong *)&local_b8 == param_1) {
    if ((*param_1 & 1) != 0) {
      free((void *)CONCAT62(uStack_ae,CONCAT11(cStack_af,cStack_b0)));
    }
  }
  else {
    if ((*param_1 & 1) != 0) {
      free((void *)param_1[1]);
    }
    uVar7 = CONCAT71(uStack_b7,local_b8);
    local_b8 = 0;
    uStack_b7 = 0;
    *param_1 = uVar7;
    param_1[2] = CONCAT26(uStack_a2,
                          CONCAT15(uStack_a3,CONCAT23(uStack_a5,CONCAT21(uStack_a7,cStack_a8))));
    param_1[1] = CONCAT62(uStack_ae,CONCAT11(cStack_af,cStack_b0));
    param_1[4] = uStack_98;
    param_1[3] = local_a0;
    param_1[6] = uStack_88;
    param_1[5] = local_90;
  }
  if (local_e8 != (void *)0x0) {
    local_e0 = local_e8;
    free(local_e8);
  }
  if (local_118 != (void *)0x0) {
    local_110 = local_118;
    free(local_118);
  }
  if ((local_100[0] & 1) != 0) {
    free(local_f0);
  }
  local_100[0] = 1;
  uVar7 = param_3;
  if (param_4 == '\0') {
    cStack_af = '\0';
    local_b8 = 0x10;
    uStack_b7 = 0x6d69647065656b;
    cStack_b0 = 's';
                    /* try { // try from 00524fcc to 00524fdf has its CatchHandler @ 00525250 */
    FUN_00594f20(&local_d0,param_2,&local_b8,local_100);
    pvVar4 = local_d0;
    local_d0 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar4 + 0x18));
      }
      free(pvVar4);
    }
    if ((local_b8 & 1) != 0) {
      free((void *)CONCAT26(uStack_a2,
                            CONCAT15(uStack_a3,CONCAT23(uStack_a5,CONCAT21(uStack_a7,cStack_a8)))));
    }
    uVar7 = local_100[0];
    if (pvVar4 != (void *)0x0) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 0052518c to 00525193 has its CatchHandler @ 00525240 */
      FUN_00645c30(&local_d0);
                    /* try { // try from 00525194 to 005251b3 has its CatchHandler @ 00525230 */
      FUN_0047488c(&local_b8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/reduction/reduction_kernel_base.h"
                   ,0x19,
                   "onnxruntime::ReduceKernelBase<true>::ReduceKernelBase(const OpKernelInfo &, optional<int64_t>) [allow_multi_axes = true]"
                   ,&local_d0);
      FUN_00476720(&local_e8);
                    /* try { // try from 005251c0 to 00525203 has its CatchHandler @ 00525204 */
      FUN_00474a40(uVar5,&local_b8,"info.GetAttr(\"keepdims\", &keepdims).IsOK()",&local_e8);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00525304;
    }
  }
  local_100[0] = uVar7;
  uVar3 = s_noop_with_empty_axes_001c441a._8_8_;
  uVar5 = s_noop_with_empty_axes_001c441a._0_8_;
  local_b8 = 0x28;
  *(bool *)(param_1 + 7) = local_100[0] == 1;
  uStack_a7 = 0x7861;
  uStack_a5 = 0x7365;
  cStack_af = (char)uVar3;
  uStack_ae = SUB86(uVar3,1);
  cStack_a8 = SUB81(uVar3,7);
  uStack_b7 = (undefined7)uVar5;
  cStack_b0 = SUB81(uVar5,7);
  uStack_a3 = 0;
                    /* try { // try from 00525050 to 00525063 has its CatchHandler @ 00525258 */
  FUN_00594f20(&local_e8,param_2,&local_b8,&local_d0);
  pvVar4 = local_e8;
  local_e8 = (void *)0x0;
  pvVar6 = local_d0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
    pvVar6 = (void *)0x0;
  }
  if ((local_b8 & 1) != 0) {
    free((void *)CONCAT26(uStack_a2,
                          CONCAT15(uStack_a3,CONCAT23(uStack_a5,CONCAT21(uStack_a7,cStack_a8)))));
  }
  uVar3 = s_select_last_index_001f01e0._8_8_;
  uVar5 = s_select_last_index_001f01e0._0_8_;
  local_b8 = 0x22;
  *(bool *)((long)param_1 + 0x39) = pvVar6 == (void *)0x1;
  cStack_af = (char)uVar3;
  uStack_ae = SUB86(uVar3,1);
  cStack_a8 = SUB81(uVar3,7);
  uStack_b7 = (undefined7)uVar5;
  cStack_b0 = SUB81(uVar5,7);
  uStack_a7 = 0x78;
                    /* try { // try from 005250cc to 005250df has its CatchHandler @ 00525254 */
  FUN_00594f20(&local_e8,param_2,&local_b8,&local_d0);
  pvVar4 = local_e8;
  local_e8 = (void *)0x0;
  pvVar6 = local_d0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
    pvVar6 = (void *)0x0;
  }
  if ((local_b8 & 1) != 0) {
    free((void *)CONCAT26(uStack_a2,
                          CONCAT15(uStack_a3,CONCAT23(uStack_a5,CONCAT21(uStack_a7,cStack_a8)))));
  }
  *(bool *)((long)param_1 + 0x3a) = pvVar6 != (void *)0x0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00525304:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00525308  FUN_00525308 =====

void FUN_00525308(undefined8 *param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[3]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00525358  FUN_00525358 =====

void FUN_00525358(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  void *__src;
  size_t __n;
  long lVar1;
  void **ppvVar2;
  void *__ptr;
  void *pvVar3;
  void *__ptr_00;
  void *local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = 0;
                    /* try { // try from 00525390 to 0052539f has its CatchHandler @ 0052546c */
  FUN_00595584(&local_78,param_2,param_3,&local_70);
  __ptr_00 = local_70;
  __ptr = local_78;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar3 = (void *)*param_4;
  *param_1 = 0;
  __src = local_70;
  ppvVar2 = &local_68;
  if (local_78 != (void *)0x0) {
    __src = pvVar3;
    ppvVar2 = (void **)(param_4 + 1);
  }
  __n = (long)*ppvVar2 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00525464 to 0052546b has its CatchHandler @ 00525474 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(param_1);
      }
      goto LAB_005254bc;
    }
                    /* try { // try from 005253d0 to 005253d7 has its CatchHandler @ 00525474 */
    pvVar3 = (void *)FUN_00759c3c(__n);
    *param_1 = pvVar3;
    param_1[2] = (long)pvVar3 + __n;
    memcpy(pvVar3,__src,__n);
    param_1[1] = (long)pvVar3 + __n;
  }
  local_78 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    __ptr_00 = local_70;
  }
  if (__ptr_00 != (void *)0x0) {
    local_68 = __ptr_00;
    free(__ptr_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_005254bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005254c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005254c4  FUN_005254c4 =====

void FUN_005254c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_00792e00;
  puVar1[3] = uVar2;
  return;
}


// ===== 00525508  FUN_00525508 =====

void FUN_00525508(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00792e00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0052552c  FUN_0052552c =====

void FUN_0052552c(void)

{
  return;
}


// ===== 00525530  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525534  FUN_00525534 =====

void FUN_00525534(long param_1)

{
  FUN_0052553c(param_1 + 8);
  return;
}


// ===== 0052553c  FUN_0052553c =====

void FUN_0052553c(ulong *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  float *pfVar7;
  float *pfVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined8 uVar37;
  
  lVar19 = *param_2;
  lVar20 = *param_3;
  if (lVar20 - lVar19 != 0 && lVar19 <= lVar20) {
    uVar21 = param_1[1];
    if ((long)uVar21 < 0) {
      plVar9 = (long *)FUN_00753a74(8);
      *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    uVar22 = param_1[2];
    if (uVar21 == 0) {
      memset((void *)(uVar22 + lVar19 * 4),0,(lVar20 - lVar19) * 4);
      return;
    }
    uVar23 = *param_1;
    uVar25 = uVar21 - 1 & 0xfffffffffffffff8;
    lVar26 = uVar21 * 4;
    lVar24 = uVar23 + uVar21 * lVar19 * 4;
    puVar10 = (undefined8 *)(lVar24 + 0x10);
    puVar11 = (undefined8 *)(lVar24 + 0x14);
    do {
      pfVar2 = (float *)(uVar23 + lVar19 * uVar21 * 4);
      uVar12 = uVar21;
      if (((uVar23 & 3) == 0) && (uVar12 = (ulong)-((uint)pfVar2 >> 2) & 3, uVar21 <= uVar12)) {
        uVar12 = uVar21;
      }
      uVar17 = uVar21 - uVar12;
      uVar1 = uVar17 + 3;
      uVar15 = uVar17 + 7;
      if ((long)uVar12 <= (long)uVar21) {
        uVar1 = uVar17;
        uVar15 = uVar17;
      }
      if (uVar17 + 3 < 7) {
        fVar28 = *pfVar2;
        if (uVar21 != 1) {
          uVar12 = uVar25;
          puVar14 = puVar11;
          if (uVar21 < 9) {
            uVar12 = 1;
          }
          else {
            do {
              uVar12 = uVar12 - 8;
              fVar28 = fVar28 + *(float *)(puVar14 + -2) + *(float *)((long)puVar14 + -0xc) +
                       *(float *)(puVar14 + -1) + *(float *)((long)puVar14 + -4) + (float)*puVar14 +
                       (float)((ulong)*puVar14 >> 0x20) + (float)puVar14[1] +
                       (float)((ulong)puVar14[1] >> 0x20);
              puVar14 = puVar14 + 4;
            } while (uVar12 != 0);
            uVar12 = uVar25 | 1;
            if (uVar21 - 1 == uVar25) goto LAB_00525598;
          }
          do {
            uVar1 = uVar12 + 1;
            fVar28 = fVar28 + *(float *)(lVar24 + uVar12 * 4);
            uVar12 = uVar1;
          } while (uVar21 != uVar1);
        }
      }
      else {
        pfVar4 = pfVar2 + uVar12;
        uVar16 = uVar1 & 0xfffffffffffffffc;
        fVar30 = (float)*(undefined8 *)(pfVar4 + 2);
        fVar31 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
        fVar28 = (float)*(undefined8 *)pfVar4;
        fVar29 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
        if (7 < (long)uVar17) {
          fVar32 = pfVar4[4];
          fVar34 = pfVar4[5];
          fVar35 = pfVar4[6];
          fVar36 = pfVar4[7];
          lVar18 = (uVar15 & 0xfffffffffffffff8) + uVar12;
          if (0xf < uVar17) {
            lVar27 = uVar12 << 2;
            lVar13 = uVar12 + 8;
            do {
              lVar3 = lVar24 + lVar27;
              lVar13 = lVar13 + 8;
              lVar27 = lVar27 + 0x20;
              fVar28 = fVar28 + (float)*(undefined8 *)(lVar3 + 0x20);
              fVar29 = fVar29 + (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
              fVar30 = fVar30 + (float)*(undefined8 *)(lVar3 + 0x28);
              fVar31 = fVar31 + (float)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
              fVar32 = fVar32 + (float)*(undefined8 *)(lVar3 + 0x30);
              fVar34 = fVar34 + (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
              fVar35 = fVar35 + (float)*(undefined8 *)(lVar3 + 0x38);
              fVar36 = fVar36 + (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
            } while (lVar13 < lVar18);
          }
          fVar28 = fVar32 + fVar28;
          fVar29 = fVar34 + fVar29;
          fVar30 = fVar35 + fVar30;
          fVar31 = fVar36 + fVar31;
          if ((long)(uVar15 & 0xfffffffffffffff8) < (long)uVar16) {
            pfVar2 = pfVar2 + lVar18;
            fVar28 = fVar28 + *pfVar2;
            fVar29 = fVar29 + pfVar2[1];
            fVar30 = fVar30 + pfVar2[2];
            fVar31 = fVar31 + pfVar2[3];
          }
        }
        auVar33._4_4_ = fVar29;
        auVar33._0_4_ = fVar28;
        auVar33._8_4_ = fVar30;
        auVar33._12_4_ = fVar31;
        auVar6._4_4_ = fVar29;
        auVar6._0_4_ = fVar28;
        auVar6._8_4_ = fVar30;
        auVar6._12_4_ = fVar31;
        auVar33 = NEON_ext(auVar33,auVar6,8,1);
        fVar28 = fVar28 + auVar33._0_4_ + fVar29 + auVar33._4_4_;
        if (0 < (long)uVar12) {
          if (7 < uVar12) {
            uVar17 = uVar12 & 0x7ffffffffffffff8;
            uVar15 = uVar17;
            puVar14 = puVar10;
            do {
              pfVar2 = (float *)(puVar14 + -2);
              pfVar4 = (float *)((long)puVar14 + -0xc);
              pfVar7 = (float *)(puVar14 + -1);
              pfVar8 = (float *)((long)puVar14 + -4);
              puVar5 = puVar14 + 1;
              uVar37 = *puVar14;
              uVar15 = uVar15 - 8;
              puVar14 = puVar14 + 4;
              fVar28 = fVar28 + *pfVar2 + *pfVar4 + *pfVar7 + *pfVar8 + (float)uVar37 +
                       (float)((ulong)uVar37 >> 0x20) + (float)*puVar5 +
                       (float)((ulong)*puVar5 >> 0x20);
              if (uVar15 == 0) goto LAB_00525770;
            } while( true );
          }
          uVar17 = 0;
          do {
            lVar18 = uVar17 * 4;
            uVar17 = uVar17 + 1;
            fVar28 = fVar28 + *(float *)(lVar24 + lVar18);
LAB_00525770:
          } while (uVar12 != uVar17);
        }
        lVar18 = uVar16 + uVar12;
        if (lVar18 < (long)uVar21) {
          uVar17 = uVar21 - (uVar12 + uVar16);
          if (7 < uVar17) {
            uVar15 = uVar17 & 0xfffffffffffffff8;
            lVar18 = lVar18 + uVar15;
            lVar13 = ((long)uVar1 >> 2) * 0x10 + uVar12 * 4;
            uVar12 = uVar15;
            do {
              pfVar2 = (float *)(lVar24 + lVar13);
              uVar12 = uVar12 - 8;
              pfVar4 = (float *)((long)puVar10 + lVar13);
              lVar13 = lVar13 + 0x20;
              fVar28 = fVar28 + *pfVar2 + pfVar2[1] + pfVar2[2] + pfVar2[3] + *pfVar4 + pfVar4[1] +
                       pfVar4[2] + pfVar4[3];
            } while (uVar12 != 0);
            if (uVar17 == uVar15) goto LAB_00525598;
          }
          do {
            lVar13 = lVar18 * 4;
            lVar18 = lVar18 + 1;
            fVar28 = fVar28 + *(float *)(lVar24 + lVar13);
          } while (lVar18 < (long)uVar21);
        }
      }
LAB_00525598:
      *(float *)(uVar22 + lVar19 * 4) = fVar28;
      lVar19 = lVar19 + 1;
      lVar24 = lVar24 + lVar26;
      puVar10 = (undefined8 *)((long)puVar10 + lVar26);
      puVar11 = (undefined8 *)((long)puVar11 + lVar26);
    } while (lVar19 != lVar20);
  }
  return;
}


// ===== 00525870  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525874  FUN_00525874 =====

void FUN_00525874(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_00792e48;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}


// ===== 005258b8  FUN_005258b8 =====

void FUN_005258b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00792e48;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 005258dc  FUN_005258dc =====

void FUN_005258dc(void)

{
  return;
}


// ===== 005258e0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005258e4  FUN_005258e4 =====

void FUN_005258e4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (1 < *(long *)(param_1 + 0x20)) {
    lVar16 = *param_2;
    lVar17 = *param_3;
    lVar15 = 0;
    lVar20 = 1;
    lVar21 = 4;
    lVar18 = lVar16 * 4;
    uVar19 = lVar17 - lVar16;
    lVar1 = lVar18 + 0x10;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar22 = lVar5 + lVar18;
      uVar6 = uVar19;
      if (((uVar22 & 3) == 0) &&
         (uVar6 = (ulong)-((uint)uVar22 >> 2) & 3, (long)uVar19 <= (long)uVar6)) {
        uVar6 = uVar19;
      }
      uVar2 = uVar19 - uVar6;
      lVar7 = *(long *)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x18);
      uVar11 = uVar2 + 3;
      if ((long)uVar6 <= (long)uVar19) {
        uVar11 = uVar2;
      }
      lVar13 = lVar15 * 4 + 4;
      if (0 < (long)uVar6) {
        if ((uVar6 < 8) ||
           ((uVar22 < lVar7 + lVar18 + lVar9 * lVar13 + uVar6 * 4 &&
            ((ulong)(lVar7 + lVar9 * lVar20 * 4 + lVar18) < lVar5 + lVar18 + uVar6 * 4)))) {
          uVar22 = 0;
        }
        else {
          puVar24 = (undefined8 *)(lVar7 + lVar1 + lVar9 * lVar21);
          puVar14 = (undefined8 *)(lVar5 + lVar1);
          uVar22 = uVar6 & 0x7ffffffffffffff8;
          uVar25 = uVar22;
          do {
            uVar25 = uVar25 - 8;
            puVar3 = puVar24 + -1;
            uVar26 = puVar24[-2];
            uVar28 = puVar24[1];
            uVar27 = *puVar24;
            puVar24 = puVar24 + 4;
            puVar14[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                                   (float)((ulong)puVar14[-1] >> 0x20),
                                   (float)*puVar3 + (float)puVar14[-1]);
            puVar14[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                   (float)((ulong)puVar14[-2] >> 0x20),
                                   (float)uVar26 + (float)puVar14[-2]);
            puVar14[1] = CONCAT44((float)((ulong)uVar28 >> 0x20) +
                                  (float)((ulong)puVar14[1] >> 0x20),
                                  (float)uVar28 + (float)puVar14[1]);
            *puVar14 = CONCAT44((float)((ulong)uVar27 >> 0x20) + (float)((ulong)*puVar14 >> 0x20),
                                (float)uVar27 + (float)*puVar14);
            puVar14 = puVar14 + 4;
          } while (uVar25 != 0);
          if (uVar6 == uVar22) goto LAB_005259fc;
        }
        lVar23 = uVar6 - uVar22;
        pfVar8 = (float *)(lVar7 + lVar18 + uVar22 * 4 + lVar9 * lVar21);
        pfVar10 = (float *)(lVar5 + lVar18 + uVar22 * 4);
        do {
          lVar23 = lVar23 + -1;
          *pfVar10 = *pfVar8 + *pfVar10;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        } while (lVar23 != 0);
      }
LAB_005259fc:
      lVar23 = (uVar11 & 0xfffffffffffffffc) + uVar6;
      if (3 < (long)uVar2) {
        puVar24 = (undefined8 *)(lVar7 + lVar18 + uVar6 * 4 + lVar9 * lVar21);
        puVar14 = (undefined8 *)(lVar5 + lVar18 + uVar6 * 4);
        uVar22 = uVar6;
        do {
          uVar26 = *puVar24;
          uVar22 = uVar22 + 4;
          puVar14[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                (float)((ulong)puVar14[1] >> 0x20),
                                (float)puVar24[1] + (float)puVar14[1]);
          *puVar14 = CONCAT44((float)((ulong)uVar26 >> 0x20) + (float)((ulong)*puVar14 >> 0x20),
                              (float)uVar26 + (float)*puVar14);
          puVar24 = puVar24 + 2;
          puVar14 = puVar14 + 2;
        } while ((long)uVar22 < lVar23);
      }
      if (lVar23 < (long)uVar19) {
        uVar22 = lVar17 - (lVar16 + uVar6 + (uVar11 & 0xfffffffffffffffc));
        if (7 < uVar22) {
          lVar13 = lVar9 * lVar13;
          lVar12 = ((long)uVar11 >> 2) * 0x10;
          if (((ulong)(lVar7 + lVar17 * 4 + lVar13) <= lVar5 + lVar18 + lVar12 + uVar6 * 4) ||
             ((ulong)(lVar5 + lVar17 * 4) <= lVar7 + lVar18 + lVar12 + uVar6 * 4 + lVar13)) {
            lVar12 = lVar12 + uVar6 * 4;
            uVar11 = uVar22 & 0xfffffffffffffff8;
            lVar23 = lVar23 + uVar11;
            puVar14 = (undefined8 *)(lVar5 + lVar1 + lVar12);
            puVar24 = (undefined8 *)(lVar7 + lVar1 + lVar12 + lVar9 * lVar21);
            uVar6 = uVar11;
            do {
              uVar6 = uVar6 - 8;
              puVar3 = puVar24 + -1;
              uVar26 = puVar24[-2];
              uVar28 = puVar24[1];
              uVar27 = *puVar24;
              puVar24 = puVar24 + 4;
              puVar14[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                                     (float)((ulong)puVar14[-1] >> 0x20),
                                     (float)*puVar3 + (float)puVar14[-1]);
              puVar14[-2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                     (float)((ulong)puVar14[-2] >> 0x20),
                                     (float)uVar26 + (float)puVar14[-2]);
              puVar14[1] = CONCAT44((float)((ulong)uVar28 >> 0x20) +
                                    (float)((ulong)puVar14[1] >> 0x20),
                                    (float)uVar28 + (float)puVar14[1]);
              *puVar14 = CONCAT44((float)((ulong)uVar27 >> 0x20) + (float)((ulong)*puVar14 >> 0x20),
                                  (float)uVar27 + (float)*puVar14);
              puVar14 = puVar14 + 4;
            } while (uVar6 != 0);
            if (uVar22 == uVar11) goto LAB_00525928;
          }
        }
        lVar13 = (lVar16 - lVar17) + lVar23;
        pfVar8 = (float *)(lVar7 + lVar18 + lVar23 * 4 + lVar9 * lVar21);
        pfVar10 = (float *)(lVar5 + lVar18 + lVar23 * 4);
        do {
          bVar4 = lVar13 != -1;
          lVar13 = lVar13 + 1;
          *pfVar10 = *pfVar8 + *pfVar10;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        } while (bVar4);
      }
LAB_00525928:
      lVar20 = lVar20 + 1;
      lVar15 = lVar15 + 1;
      lVar21 = lVar21 + 4;
    } while (lVar20 < *(long *)(param_1 + 0x20));
  }
  return;
}


// ===== 00525b84  FUN_00525b84 =====

void FUN_00525b84(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2380 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[2] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00525bac  FUN_00525bac =====

void FUN_00525bac(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_00792e90;
  if (__ptr != (void *)0x0) {
    param_1[2] = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00525bf0  FUN_00525bf0 =====

long * FUN_00525bf0(long param_1)

{
  size_t __n;
  undefined *puVar1;
  long *__ptr;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  __ptr = (long *)FUN_00759c3c(0x58);
  puVar1 = PTR_DAT_007a2380;
  pvVar4 = *(void **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar5 = __ptr + 1;
  *plVar5 = 0;
  __ptr[2] = 0;
  __ptr[3] = 0;
  __n = lVar3 - (long)pvVar4;
  *__ptr = (long)(puVar1 + 0x10);
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00525c94 to 00525c9b has its CatchHandler @ 00525c9c */
      uVar2 = FUN_002febf0(plVar5);
                    /* catch() { ... } // from try @ 00525c40 with catch @ 00525c9c
                       catch() { ... } // from try @ 00525c94 with catch @ 00525c9c */
      pvVar4 = (void *)*plVar5;
      if (pvVar4 != (void *)0x0) {
        __ptr[2] = (long)pvVar4;
        free(pvVar4);
      }
      free(__ptr);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 00525c40 to 00525c47 has its CatchHandler @ 00525c9c */
    __dest = (void *)FUN_00759c3c(__n);
    __ptr[1] = (long)__dest;
    __ptr[3] = (long)__dest + __n;
    memcpy(__dest,pvVar4,__n);
    __ptr[2] = (long)__dest + __n;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x30);
  lVar10 = *(long *)(param_1 + 0x48);
  lVar9 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x50);
  __ptr[5] = *(long *)(param_1 + 0x28);
  __ptr[4] = lVar6;
  __ptr[7] = lVar8;
  __ptr[6] = lVar7;
  __ptr[9] = lVar10;
  __ptr[8] = lVar9;
  __ptr[10] = lVar3;
  return __ptr;
}


// ===== 00525cc4  FUN_00525cc4 =====

void FUN_00525cc4(long param_1,long *param_2)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  param_2[3] = 0;
  plVar4 = param_2 + 1;
  *plVar4 = 0;
  puVar1 = PTR_DAT_007a2380;
  param_2[2] = 0;
  pvVar3 = *(void **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  *param_2 = (long)(puVar1 + 0x10);
  __n = lVar5 - (long)pvVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00525d60 to 00525d67 has its CatchHandler @ 00525d68 */
      uVar2 = FUN_002febf0(plVar4);
                    /* catch() { ... } // from try @ 00525d10 with catch @ 00525d68
                       catch() { ... } // from try @ 00525d60 with catch @ 00525d68 */
      pvVar3 = (void *)*plVar4;
      if (pvVar3 != (void *)0x0) {
        param_2[2] = (long)pvVar3;
        free(pvVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 00525d10 to 00525d17 has its CatchHandler @ 00525d68 */
    __dest = (void *)FUN_00759c3c(__n);
    param_2[1] = (long)__dest;
    param_2[2] = (long)__dest;
    param_2[3] = (long)__dest + __n;
    memcpy(__dest,pvVar3,__n);
    param_2[2] = (long)__dest + __n;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  lVar9 = *(long *)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x20);
  param_2[10] = *(long *)(param_1 + 0x50);
  param_2[7] = lVar10;
  param_2[6] = lVar9;
  param_2[9] = lVar6;
  param_2[8] = lVar5;
  param_2[5] = lVar8;
  param_2[4] = lVar7;
  return;
}


// ===== 00525d88  FUN_00525d88 =====

void FUN_00525d88(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00525da0  FUN_00525da0 =====

void FUN_00525da0(void *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)((long)param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)((long)param_1 + 0x10) = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00525dd4  FUN_00525dd4 =====

void FUN_00525dd4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if (lVar1 < lVar2) {
    do {
      if (*(ulong *)(param_1 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      FUN_005f37b4(1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),
                   *(undefined8 *)(param_1 + 8),
                   *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38) * lVar1 * 4,
                   *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40) * lVar1 * 4,0);
      lVar1 = lVar1 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 00525e58  FUN_00525e58 =====

void FUN_00525e58(void)

{
  return;
}


// ===== 00525e5c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525e60  FUN_00525e60 =====

void FUN_00525e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00792ed8;
  return;
}


// ===== 00525e88  FUN_00525e88 =====

void FUN_00525e88(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00792ed8;
  return;
}


// ===== 00525e9c  FUN_00525e9c =====

void FUN_00525e9c(void)

{
  return;
}


// ===== 00525ea0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525ea4  FUN_00525ea4 =====

undefined1  [16] FUN_00525ea4(void)

{
  return ZEXT816(0);
}


// ===== 00525eac  FUN_00525eac =====

void FUN_00525eac(void)

{
  return;
}


// ===== 00525eb0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525eb4  FUN_00525eb4 =====

void FUN_00525eb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00792f20;
  return;
}


// ===== 00525edc  FUN_00525edc =====

void FUN_00525edc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00792f20;
  return;
}


// ===== 00525ef0  FUN_00525ef0 =====

void FUN_00525ef0(void)

{
  return;
}


// ===== 00525ef4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00525ef8  FUN_00525ef8 =====

void FUN_00525ef8(undefined8 param_1,float *param_2,ulong *param_3,ulong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined8 uVar27;
  
  uVar8 = *param_4;
  if ((long)uVar8 < 0) {
    plVar7 = (long *)FUN_00753a74(8);
    *plVar7 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar7,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (uVar8 == 0) {
    *param_2 = *param_2 + 0.0;
    return;
  }
  pfVar10 = (float *)*param_3;
  uVar11 = (ulong)-((uint)pfVar10 >> 2) & 3;
  if (uVar8 <= uVar11) {
    uVar11 = uVar8;
  }
  uVar17 = uVar8;
  if (((ulong)pfVar10 & 3) == 0) {
    uVar17 = uVar11;
  }
  uVar12 = uVar8 - uVar17;
  uVar11 = uVar12 + 3;
  uVar14 = uVar12 + 7;
  if ((long)uVar17 <= (long)uVar8) {
    uVar11 = uVar12;
    uVar14 = uVar12;
  }
  if (uVar12 + 3 < 7) {
    fVar18 = *pfVar10;
    uVar11 = uVar8 - 1;
    if (uVar11 != 0) {
      if (uVar8 < 9) {
        uVar12 = 1;
      }
      else {
        uVar14 = uVar11 & 0xfffffffffffffff8;
        pfVar13 = pfVar10 + 5;
        uVar12 = uVar14 | 1;
        uVar17 = uVar14;
        do {
          pfVar1 = pfVar13 + -4;
          pfVar3 = pfVar13 + -3;
          pfVar5 = pfVar13 + -2;
          pfVar6 = pfVar13 + -1;
          pfVar2 = pfVar13 + 2;
          uVar27 = *(undefined8 *)pfVar13;
          uVar17 = uVar17 - 8;
          pfVar13 = pfVar13 + 8;
          fVar18 = fVar18 + *pfVar1 + *pfVar3 + *pfVar5 + *pfVar6 + (float)uVar27 +
                   (float)((ulong)uVar27 >> 0x20) + (float)*(undefined8 *)pfVar2 +
                   (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
        } while (uVar17 != 0);
        if (uVar11 == uVar14) goto LAB_00526114;
      }
      lVar9 = uVar8 - uVar12;
      pfVar10 = pfVar10 + uVar12;
      do {
        lVar9 = lVar9 + -1;
        fVar18 = fVar18 + *pfVar10;
        pfVar10 = pfVar10 + 1;
      } while (lVar9 != 0);
    }
    goto LAB_00526114;
  }
  pfVar13 = pfVar10 + uVar17;
  uVar15 = uVar11 & 0xfffffffffffffffc;
  fVar20 = (float)*(undefined8 *)(pfVar13 + 2);
  fVar21 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20);
  fVar18 = (float)*(undefined8 *)pfVar13;
  fVar19 = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
  if (7 < (long)uVar12) {
    fVar22 = pfVar13[4];
    fVar24 = pfVar13[5];
    fVar25 = pfVar13[6];
    fVar26 = pfVar13[7];
    lVar9 = (uVar14 & 0xfffffffffffffff8) + uVar17;
    if (0xf < uVar12) {
      lVar16 = uVar17 + 8;
      pfVar13 = pfVar13 + 0xc;
      do {
        pfVar1 = pfVar13 + -4;
        pfVar2 = pfVar13 + -2;
        pfVar3 = pfVar13 + 2;
        uVar27 = *(undefined8 *)pfVar13;
        lVar16 = lVar16 + 8;
        pfVar13 = pfVar13 + 8;
        fVar18 = fVar18 + (float)*(undefined8 *)pfVar1;
        fVar19 = fVar19 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
        fVar20 = fVar20 + (float)*(undefined8 *)pfVar2;
        fVar21 = fVar21 + (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
        fVar22 = fVar22 + (float)uVar27;
        fVar24 = fVar24 + (float)((ulong)uVar27 >> 0x20);
        fVar25 = fVar25 + (float)*(undefined8 *)pfVar3;
        fVar26 = fVar26 + (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
      } while (lVar16 < lVar9);
    }
    fVar18 = fVar22 + fVar18;
    fVar19 = fVar24 + fVar19;
    fVar20 = fVar25 + fVar20;
    fVar21 = fVar26 + fVar21;
    if ((long)(uVar14 & 0xfffffffffffffff8) < (long)uVar15) {
      pfVar13 = pfVar10 + lVar9;
      fVar18 = fVar18 + *pfVar13;
      fVar19 = fVar19 + pfVar13[1];
      fVar20 = fVar20 + pfVar13[2];
      fVar21 = fVar21 + pfVar13[3];
    }
  }
  auVar23._4_4_ = fVar19;
  auVar23._0_4_ = fVar18;
  auVar23._8_4_ = fVar20;
  auVar23._12_4_ = fVar21;
  auVar4._4_4_ = fVar19;
  auVar4._0_4_ = fVar18;
  auVar4._8_4_ = fVar20;
  auVar4._12_4_ = fVar21;
  auVar23 = NEON_ext(auVar23,auVar4,8,1);
  lVar9 = uVar15 + uVar17;
  fVar18 = fVar18 + auVar23._0_4_ + fVar19 + auVar23._4_4_;
  if (0 < (long)uVar17) {
    if (uVar17 < 8) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar17 & 0x7ffffffffffffff8;
      pfVar13 = pfVar10 + 4;
      uVar12 = uVar14;
      do {
        pfVar1 = pfVar13 + -4;
        pfVar3 = pfVar13 + -3;
        pfVar5 = pfVar13 + -2;
        pfVar6 = pfVar13 + -1;
        pfVar2 = pfVar13 + 2;
        uVar27 = *(undefined8 *)pfVar13;
        uVar12 = uVar12 - 8;
        pfVar13 = pfVar13 + 8;
        fVar18 = fVar18 + *pfVar1 + *pfVar3 + *pfVar5 + *pfVar6 + (float)uVar27 +
                 (float)((ulong)uVar27 >> 0x20) + (float)*(undefined8 *)pfVar2 +
                 (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      } while (uVar12 != 0);
      if (uVar17 == uVar14) goto LAB_00526078;
    }
    lVar16 = uVar17 - uVar14;
    pfVar13 = pfVar10 + uVar14;
    do {
      lVar16 = lVar16 + -1;
      fVar18 = fVar18 + *pfVar13;
      pfVar13 = pfVar13 + 1;
    } while (lVar16 != 0);
  }
LAB_00526078:
  if (lVar9 < (long)uVar8) {
    uVar12 = uVar8 - (uVar17 + uVar15);
    if (7 < uVar12) {
      uVar14 = uVar12 & 0xfffffffffffffff8;
      lVar9 = lVar9 + uVar14;
      pfVar13 = pfVar10 + uVar17 + ((long)uVar11 >> 2) * 4 + 4;
      uVar11 = uVar14;
      do {
        pfVar1 = pfVar13 + -4;
        pfVar3 = pfVar13 + -3;
        pfVar5 = pfVar13 + -2;
        pfVar6 = pfVar13 + -1;
        pfVar2 = pfVar13 + 2;
        uVar27 = *(undefined8 *)pfVar13;
        uVar11 = uVar11 - 8;
        pfVar13 = pfVar13 + 8;
        fVar18 = fVar18 + *pfVar1 + *pfVar3 + *pfVar5 + *pfVar6 + (float)uVar27 +
                 (float)((ulong)uVar27 >> 0x20) + (float)*(undefined8 *)pfVar2 +
                 (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
      } while (uVar11 != 0);
      if (uVar12 == uVar14) goto LAB_00526114;
    }
    do {
      pfVar13 = pfVar10 + lVar9;
      lVar9 = lVar9 + 1;
      fVar18 = fVar18 + *pfVar13;
    } while (lVar9 < (long)uVar8);
  }
LAB_00526114:
  *param_2 = fVar18 + *param_2;
  return;
}


// ===== 005261d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005261d4  FUN_005261d4 =====

void FUN_005261d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00792f68;
  puVar1[1] = uVar2;
  return;
}


// ===== 0052620c  FUN_0052620c =====

void FUN_0052620c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00792f68;
  param_2[1] = uVar1;
  return;
}


// ===== 00526224  FUN_00526224 =====

void FUN_00526224(void)

{
  return;
}


// ===== 00526228  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0052622c  FUN_0052622c =====

void FUN_0052622c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_0052623c(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 0052623c  FUN_0052623c =====

void FUN_0052623c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined8 uVar30;
  
  lVar12 = *param_1;
  lVar10 = *(long *)(lVar12 + 0x10);
  lVar18 = *(long *)(lVar10 + 0xf0);
  lVar21 = 0;
  if (lVar18 != 0) {
    lVar21 = param_2 / lVar18;
  }
  if (-1 < lVar21) {
    plVar22 = (long *)(lVar10 + 0xc0);
    uVar16 = *(ulong *)(lVar10 + 0xb8);
    plVar11 = plVar22;
    if ((uVar16 & 1) != 0) {
      plVar11 = (long *)*plVar22;
    }
    lVar17 = param_3 - param_2;
    if (lVar17 != 0 && param_2 <= param_3) {
      lVar20 = param_2 - lVar21 * lVar18;
      lVar24 = *(long *)(lVar10 + 0xf8);
      uVar14 = *(ulong *)(lVar10 + 0x70);
      lVar4 = *(long *)(lVar12 + 0x18);
      lVar5 = *(long *)(lVar12 + 0x20);
      plVar2 = (long *)(lVar10 + 0x78);
      uVar13 = uVar14 >> 1;
      lVar25 = plVar11[lVar21] + lVar24 * lVar20;
      uVar19 = uVar16 >> 1;
      if ((uVar14 & 1) != 0) {
        if ((uVar16 & 1) != 0) {
LAB_005265f4:
          do {
            fVar29 = 0.0;
            if ((1 < uVar14) && (uVar16 = *(ulong *)(lVar12 + 8), 0 < (long)uVar16)) {
              uVar15 = *(ulong *)(lVar10 + 0xb0);
              plVar11 = (long *)*plVar2;
              plVar3 = plVar11 + uVar13;
              uVar26 = uVar15;
              if ((long)uVar15 <= (long)uVar16) {
                uVar26 = uVar16;
              }
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = (uVar26 - 1) / uVar15;
              }
              uVar6 = uVar6 + 1;
              uVar26 = uVar6 & 0xfffffffffffffff8;
              do {
                if (uVar6 < 8 || uVar15 != 1) {
                  lVar17 = 0;
LAB_005266c8:
                  do {
                    lVar7 = lVar17 * 4;
                    lVar17 = lVar17 + uVar15;
                    fVar29 = fVar29 + *(float *)(lVar4 + lVar25 * 4 + *plVar11 * 4 + lVar7);
                  } while (lVar17 < (long)uVar16);
                }
                else {
                  puVar28 = (undefined8 *)(lVar4 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                  uVar27 = uVar26;
                  do {
                    puVar1 = puVar28 + -2;
                    puVar8 = puVar28 + -1;
                    puVar9 = puVar28 + 1;
                    uVar30 = *puVar28;
                    uVar27 = uVar27 - 8;
                    puVar28 = puVar28 + 4;
                    fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                             (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                             (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                             (float)((ulong)*puVar9 >> 0x20);
                  } while (uVar27 != 0);
                  lVar17 = uVar26 * uVar15;
                  if (uVar6 != uVar26) goto LAB_005266c8;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar3);
            }
            lVar20 = lVar20 + 1;
            *(float *)(lVar5 + param_2 * 4) = fVar29;
            if (lVar18 <= lVar20) {
              lVar17 = lVar21 + 1;
              if (lVar17 < (long)uVar19) {
                if (lVar21 == -2 || lVar21 + 2 < 0 != SCARRY8(lVar21,2)) goto LAB_00526300;
                lVar25 = *(long *)(*plVar22 + lVar17 * 8);
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar17;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_005265f4;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
LAB_00526350:
        do {
          fVar29 = 0.0;
          if ((1 < uVar14) && (uVar16 = *(ulong *)(lVar12 + 8), 0 < (long)uVar16)) {
            uVar15 = *(ulong *)(lVar10 + 0xb0);
            plVar11 = (long *)*plVar2;
            plVar3 = plVar11 + uVar13;
            uVar26 = uVar15;
            if ((long)uVar15 <= (long)uVar16) {
              uVar26 = uVar16;
            }
            uVar6 = 0;
            if (uVar15 != 0) {
              uVar6 = (uVar26 - 1) / uVar15;
            }
            uVar6 = uVar6 + 1;
            uVar26 = uVar6 & 0xfffffffffffffff8;
            do {
              if (uVar6 < 8 || uVar15 != 1) {
                lVar17 = 0;
LAB_00526424:
                do {
                  lVar7 = lVar17 * 4;
                  lVar17 = lVar17 + uVar15;
                  fVar29 = fVar29 + *(float *)(lVar4 + lVar25 * 4 + *plVar11 * 4 + lVar7);
                } while (lVar17 < (long)uVar16);
              }
              else {
                puVar28 = (undefined8 *)(lVar4 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                uVar27 = uVar26;
                do {
                  puVar1 = puVar28 + -2;
                  puVar8 = puVar28 + -1;
                  puVar9 = puVar28 + 1;
                  uVar30 = *puVar28;
                  uVar27 = uVar27 - 8;
                  puVar28 = puVar28 + 4;
                  fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                           (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                           (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                           (float)((ulong)*puVar9 >> 0x20);
                } while (uVar27 != 0);
                lVar17 = uVar26 * uVar15;
                if (uVar6 != uVar26) goto LAB_00526424;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar3);
          }
          lVar20 = lVar20 + 1;
          *(float *)(lVar5 + param_2 * 4) = fVar29;
          if (lVar18 <= lVar20) {
            lVar17 = lVar21 + 1;
            if (lVar17 < (long)uVar19) {
              if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00526300;
              lVar25 = plVar22[lVar17];
            }
            lVar20 = 0;
            param_2 = param_2 + 1;
            lVar21 = lVar17;
            if (param_2 == param_3) {
              return;
            }
            goto LAB_00526350;
          }
          lVar25 = lVar25 + lVar24;
          param_2 = param_2 + 1;
          if (param_2 == param_3) {
            return;
          }
        } while( true );
      }
      if (uVar14 < 2) {
        puVar23 = (undefined4 *)(lVar5 + param_2 * 4);
        do {
          lVar20 = lVar20 + 1;
          *puVar23 = 0;
          lVar10 = lVar21;
          if (lVar18 <= lVar20) {
            lVar10 = lVar21 + 1;
            lVar20 = 0;
            if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1))) goto LAB_00526300;
          }
          lVar21 = lVar10;
          lVar17 = lVar17 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar14 = *(ulong *)(lVar12 + 8);
        if (0 < (long)uVar14) {
          uVar15 = *(ulong *)(lVar10 + 0xb0);
          uVar26 = uVar15;
          if ((long)uVar15 <= (long)uVar14) {
            uVar26 = uVar14;
          }
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = (uVar26 - 1) / uVar15;
          }
          uVar6 = uVar6 + 1;
          uVar26 = uVar6 & 0xfffffffffffffff8;
LAB_005264dc:
          do {
            fVar29 = 0.0;
            plVar11 = plVar2;
            do {
              if (uVar6 < 8 || uVar15 != 1) {
                lVar12 = 0;
LAB_0052656c:
                do {
                  lVar17 = lVar12 * 4;
                  lVar12 = lVar12 + uVar15;
                  fVar29 = fVar29 + *(float *)(lVar4 + lVar25 * 4 + *plVar11 * 4 + lVar17);
                } while (lVar12 < (long)uVar14);
              }
              else {
                puVar28 = (undefined8 *)(lVar4 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                uVar27 = uVar26;
                do {
                  puVar1 = puVar28 + -2;
                  puVar8 = puVar28 + -1;
                  puVar9 = puVar28 + 1;
                  uVar30 = *puVar28;
                  uVar27 = uVar27 - 8;
                  puVar28 = puVar28 + 4;
                  fVar29 = fVar29 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) +
                           (float)*puVar8 + (float)((ulong)*puVar8 >> 0x20) + (float)uVar30 +
                           (float)((ulong)uVar30 >> 0x20) + (float)*puVar9 +
                           (float)((ulong)*puVar9 >> 0x20);
                } while (uVar27 != 0);
                lVar12 = uVar26 * uVar15;
                if (uVar6 != uVar26) goto LAB_0052656c;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != (long *)(lVar10 + uVar13 * 8 + 0x78));
            lVar20 = lVar20 + 1;
            *(float *)(lVar5 + param_2 * 4) = fVar29;
            if (lVar18 <= lVar20) {
              lVar12 = lVar21 + 1;
              if (lVar12 < (long)uVar19) {
                if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00526300;
                plVar11 = plVar22;
                if ((uVar16 & 1) != 0) {
                  plVar11 = (long *)*plVar22;
                }
                lVar25 = plVar11[lVar12];
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar12;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_005264dc;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
        puVar23 = (undefined4 *)(lVar5 + param_2 * 4);
        if ((uVar16 & 1) == 0) {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar18 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00526300;
            }
            lVar21 = lVar10;
            lVar17 = lVar17 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar17 != 0);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar18 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00526300;
            }
            lVar21 = lVar10;
            lVar17 = lVar17 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar17 != 0);
        }
      }
    }
    return;
  }
LAB_00526300:
  plVar11 = (long *)FUN_00753a74(8);
  *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 005267d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005267d4  FUN_005267d4 =====

void FUN_005267d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_00792fb0;
  puVar1[3] = uVar2;
  return;
}


// ===== 00526818  FUN_00526818 =====

void FUN_00526818(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00792fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 0052683c  FUN_0052683c =====

void FUN_0052683c(void)

{
  return;
}


// ===== 00526840  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00526844  FUN_00526844 =====

void FUN_00526844(long param_1)

{
  FUN_0052684c(param_1 + 8);
  return;
}


// ===== 0052684c  FUN_0052684c =====

void FUN_0052684c(ulong *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  lVar19 = *param_2;
  lVar20 = *param_3;
  if (lVar20 - lVar19 != 0 && lVar19 <= lVar20) {
    uVar21 = param_1[1];
    if ((long)uVar21 < 0) {
      plVar9 = (long *)FUN_00753a74(8);
      *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    uVar22 = param_1[2];
    if (uVar21 == 0) {
      memset((void *)(uVar22 + lVar19 * 4),0,(lVar20 - lVar19) * 4);
      return;
    }
    uVar23 = *param_1;
    uVar25 = uVar21 - 1 & 0xfffffffffffffff8;
    lVar26 = uVar21 * 4;
    lVar24 = uVar23 + uVar21 * lVar19 * 4;
    puVar10 = (undefined8 *)(lVar24 + 0x10);
    puVar11 = (undefined8 *)(lVar24 + 0x14);
    do {
      piVar3 = (int *)(uVar23 + lVar19 * uVar21 * 4);
      uVar12 = uVar21;
      if (((uVar23 & 3) == 0) && (uVar12 = (ulong)-((uint)piVar3 >> 2) & 3, uVar21 <= uVar12)) {
        uVar12 = uVar21;
      }
      uVar17 = uVar21 - uVar12;
      uVar2 = uVar17 + 3;
      uVar14 = uVar17 + 7;
      if ((long)uVar12 <= (long)uVar21) {
        uVar2 = uVar17;
        uVar14 = uVar17;
      }
      if (uVar17 + 3 < 7) {
        iVar28 = *piVar3;
        if (uVar21 != 1) {
          if (uVar21 < 9) {
            uVar12 = 1;
          }
          else {
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            uVar12 = uVar25;
            puVar15 = puVar11;
            auVar33 = ZEXT816(0);
            do {
              puVar1 = puVar15 + -2;
              puVar6 = puVar15 + -1;
              puVar7 = puVar15 + 1;
              uVar40 = *puVar15;
              uVar12 = uVar12 - 8;
              puVar15 = puVar15 + 4;
              iVar28 = (int)*puVar1 + iVar28;
              iVar29 = (int)((ulong)*puVar1 >> 0x20) + iVar29;
              iVar30 = (int)*puVar6 + iVar30;
              iVar31 = (int)((ulong)*puVar6 >> 0x20) + iVar31;
              auVar36._0_4_ = (int)uVar40 + auVar33._0_4_;
              auVar36._4_4_ = (int)((ulong)uVar40 >> 0x20) + auVar33._4_4_;
              auVar36._8_4_ = (int)*puVar7 + auVar33._8_4_;
              auVar36._12_4_ = (int)((ulong)*puVar7 >> 0x20) + auVar33._12_4_;
              auVar33 = auVar36;
            } while (uVar12 != 0);
            iVar28 = auVar36._0_4_ + iVar28 + auVar36._4_4_ + iVar29 +
                     auVar36._8_4_ + iVar30 + auVar36._12_4_ + iVar31;
            uVar12 = uVar25 | 1;
            if (uVar21 - 1 == uVar25) goto LAB_005268a8;
          }
          do {
            uVar2 = uVar12 + 1;
            iVar28 = *(int *)(lVar24 + uVar12 * 4) + iVar28;
            uVar12 = uVar2;
          } while (uVar21 != uVar2);
        }
      }
      else {
        piVar4 = piVar3 + uVar12;
        uVar16 = uVar2 & 0xfffffffffffffffc;
        iVar30 = (int)*(undefined8 *)(piVar4 + 2);
        iVar31 = (int)((ulong)*(undefined8 *)(piVar4 + 2) >> 0x20);
        iVar28 = (int)*(undefined8 *)piVar4;
        iVar29 = (int)((ulong)*(undefined8 *)piVar4 >> 0x20);
        if (7 < (long)uVar17) {
          iVar32 = piVar4[4];
          iVar37 = piVar4[5];
          iVar38 = piVar4[6];
          iVar39 = piVar4[7];
          lVar18 = (uVar14 & 0xfffffffffffffff8) + uVar12;
          if (0xf < uVar17) {
            lVar27 = uVar12 << 2;
            lVar13 = uVar12 + 8;
            do {
              lVar5 = lVar24 + lVar27;
              lVar13 = lVar13 + 8;
              lVar27 = lVar27 + 0x20;
              iVar28 = (int)*(undefined8 *)(lVar5 + 0x20) + iVar28;
              iVar29 = (int)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) + iVar29;
              iVar30 = (int)*(undefined8 *)(lVar5 + 0x28) + iVar30;
              iVar31 = (int)((ulong)*(undefined8 *)(lVar5 + 0x28) >> 0x20) + iVar31;
              iVar32 = (int)*(undefined8 *)(lVar5 + 0x30) + iVar32;
              iVar37 = (int)((ulong)*(undefined8 *)(lVar5 + 0x30) >> 0x20) + iVar37;
              iVar38 = (int)*(undefined8 *)(lVar5 + 0x38) + iVar38;
              iVar39 = (int)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) + iVar39;
            } while (lVar13 < lVar18);
          }
          iVar28 = iVar28 + iVar32;
          iVar29 = iVar29 + iVar37;
          iVar30 = iVar30 + iVar38;
          iVar31 = iVar31 + iVar39;
          if ((long)(uVar14 & 0xfffffffffffffff8) < (long)uVar16) {
            piVar3 = piVar3 + lVar18;
            iVar28 = *piVar3 + iVar28;
            iVar29 = piVar3[1] + iVar29;
            iVar30 = piVar3[2] + iVar30;
            iVar31 = piVar3[3] + iVar31;
          }
        }
        auVar33._4_4_ = iVar29;
        auVar33._0_4_ = iVar28;
        auVar33._8_4_ = iVar30;
        auVar33._12_4_ = iVar31;
        auVar8._4_4_ = iVar29;
        auVar8._0_4_ = iVar28;
        auVar8._8_4_ = iVar30;
        auVar8._12_4_ = iVar31;
        auVar33 = NEON_ext(auVar33,auVar8,8,1);
        iVar28 = iVar28 + auVar33._0_4_ + iVar29 + auVar33._4_4_;
        if (0 < (long)uVar12) {
          if (uVar12 < 8) {
            uVar17 = 0;
          }
          else {
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            uVar17 = uVar12 & 0x7ffffffffffffff8;
            uVar14 = uVar17;
            puVar15 = puVar10;
            auVar33 = ZEXT816(0);
            do {
              puVar1 = puVar15 + -2;
              puVar6 = puVar15 + -1;
              puVar7 = puVar15 + 1;
              uVar40 = *puVar15;
              uVar14 = uVar14 - 8;
              puVar15 = puVar15 + 4;
              iVar28 = (int)*puVar1 + iVar28;
              iVar29 = (int)((ulong)*puVar1 >> 0x20) + iVar29;
              iVar30 = (int)*puVar6 + iVar30;
              iVar31 = (int)((ulong)*puVar6 >> 0x20) + iVar31;
              auVar34._0_4_ = (int)uVar40 + auVar33._0_4_;
              auVar34._4_4_ = (int)((ulong)uVar40 >> 0x20) + auVar33._4_4_;
              auVar34._8_4_ = (int)*puVar7 + auVar33._8_4_;
              auVar34._12_4_ = (int)((ulong)*puVar7 >> 0x20) + auVar33._12_4_;
              auVar33 = auVar34;
            } while (uVar14 != 0);
            iVar28 = auVar34._0_4_ + iVar28 + auVar34._4_4_ + iVar29 +
                     auVar34._8_4_ + iVar30 + auVar34._12_4_ + iVar31;
            if (uVar12 == uVar17) goto LAB_00526a04;
          }
          do {
            lVar18 = uVar17 * 4;
            uVar17 = uVar17 + 1;
            iVar28 = *(int *)(lVar24 + lVar18) + iVar28;
          } while (uVar12 != uVar17);
        }
LAB_00526a04:
        lVar18 = uVar16 + uVar12;
        if (lVar18 < (long)uVar21) {
          uVar17 = uVar21 - (uVar12 + uVar16);
          if (7 < uVar17) {
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            uVar14 = uVar17 & 0xfffffffffffffff8;
            lVar18 = lVar18 + uVar14;
            lVar13 = ((long)uVar2 >> 2) * 0x10 + uVar12 * 4;
            uVar12 = uVar14;
            auVar33 = ZEXT816(0);
            do {
              uVar41 = ((undefined8 *)(lVar24 + lVar13))[1];
              uVar40 = *(undefined8 *)(lVar24 + lVar13);
              uVar43 = ((undefined8 *)((long)puVar10 + lVar13))[1];
              uVar42 = *(undefined8 *)((long)puVar10 + lVar13);
              uVar12 = uVar12 - 8;
              lVar13 = lVar13 + 0x20;
              iVar28 = (int)uVar40 + iVar28;
              iVar29 = (int)((ulong)uVar40 >> 0x20) + iVar29;
              iVar30 = (int)uVar41 + iVar30;
              iVar31 = (int)((ulong)uVar41 >> 0x20) + iVar31;
              auVar35._0_4_ = (int)uVar42 + auVar33._0_4_;
              auVar35._4_4_ = (int)((ulong)uVar42 >> 0x20) + auVar33._4_4_;
              auVar35._8_4_ = (int)uVar43 + auVar33._8_4_;
              auVar35._12_4_ = (int)((ulong)uVar43 >> 0x20) + auVar33._12_4_;
              auVar33 = auVar35;
            } while (uVar12 != 0);
            iVar28 = auVar35._0_4_ + iVar28 + auVar35._4_4_ + iVar29 +
                     auVar35._8_4_ + iVar30 + auVar35._12_4_ + iVar31;
            if (uVar17 == uVar14) goto LAB_005268a8;
          }
          do {
            lVar13 = lVar18 * 4;
            lVar18 = lVar18 + 1;
            iVar28 = *(int *)(lVar24 + lVar13) + iVar28;
          } while (lVar18 < (long)uVar21);
        }
      }
LAB_005268a8:
      *(int *)(uVar22 + lVar19 * 4) = iVar28;
      lVar19 = lVar19 + 1;
      lVar24 = lVar24 + lVar26;
      puVar10 = (undefined8 *)((long)puVar10 + lVar26);
      puVar11 = (undefined8 *)((long)puVar11 + lVar26);
    } while (lVar19 != lVar20);
  }
  return;
}


// ===== 00526b40  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00526b44  FUN_00526b44 =====

void FUN_00526b44(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_00792ff8;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}


// ===== 00526b88  FUN_00526b88 =====

void FUN_00526b88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00792ff8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 00526bac  FUN_00526bac =====

void FUN_00526bac(void)

{
  return;
}


// ===== 00526bb0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00526bb4  FUN_00526bb4 =====

void FUN_00526bb4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (1 < *(long *)(param_1 + 0x20)) {
    lVar16 = *param_2;
    lVar17 = *param_3;
    lVar15 = 0;
    lVar20 = 1;
    lVar21 = 4;
    lVar18 = lVar16 * 4;
    uVar19 = lVar17 - lVar16;
    lVar1 = lVar18 + 0x10;
    do {
      lVar5 = *(long *)(param_1 + 0x10);
      uVar22 = lVar5 + lVar18;
      uVar6 = uVar19;
      if (((uVar22 & 3) == 0) &&
         (uVar6 = (ulong)-((uint)uVar22 >> 2) & 3, (long)uVar19 <= (long)uVar6)) {
        uVar6 = uVar19;
      }
      uVar2 = uVar19 - uVar6;
      lVar7 = *(long *)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x18);
      uVar11 = uVar2 + 3;
      if ((long)uVar6 <= (long)uVar19) {
        uVar11 = uVar2;
      }
      lVar13 = lVar15 * 4 + 4;
      if (0 < (long)uVar6) {
        if ((uVar6 < 8) ||
           ((uVar22 < lVar7 + lVar18 + lVar9 * lVar13 + uVar6 * 4 &&
            ((ulong)(lVar7 + lVar9 * lVar20 * 4 + lVar18) < lVar5 + lVar18 + uVar6 * 4)))) {
          uVar22 = 0;
        }
        else {
          puVar24 = (undefined8 *)(lVar7 + lVar1 + lVar9 * lVar21);
          puVar14 = (undefined8 *)(lVar5 + lVar1);
          uVar22 = uVar6 & 0x7ffffffffffffff8;
          uVar25 = uVar22;
          do {
            uVar25 = uVar25 - 8;
            puVar3 = puVar24 + -1;
            uVar26 = puVar24[-2];
            uVar28 = puVar24[1];
            uVar27 = *puVar24;
            puVar24 = puVar24 + 4;
            puVar14[-1] = CONCAT44((int)((ulong)puVar14[-1] >> 0x20) + (int)((ulong)*puVar3 >> 0x20)
                                   ,(int)puVar14[-1] + (int)*puVar3);
            puVar14[-2] = CONCAT44((int)((ulong)puVar14[-2] >> 0x20) + (int)((ulong)uVar26 >> 0x20),
                                   (int)puVar14[-2] + (int)uVar26);
            puVar14[1] = CONCAT44((int)((ulong)puVar14[1] >> 0x20) + (int)((ulong)uVar28 >> 0x20),
                                  (int)puVar14[1] + (int)uVar28);
            *puVar14 = CONCAT44((int)((ulong)*puVar14 >> 0x20) + (int)((ulong)uVar27 >> 0x20),
                                (int)*puVar14 + (int)uVar27);
            puVar14 = puVar14 + 4;
          } while (uVar25 != 0);
          if (uVar6 == uVar22) goto LAB_00526ccc;
        }
        lVar23 = uVar6 - uVar22;
        piVar8 = (int *)(lVar7 + lVar18 + uVar22 * 4 + lVar9 * lVar21);
        piVar10 = (int *)(lVar5 + lVar18 + uVar22 * 4);
        do {
          lVar23 = lVar23 + -1;
          *piVar10 = *piVar10 + *piVar8;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (lVar23 != 0);
      }
LAB_00526ccc:
      lVar23 = (uVar11 & 0xfffffffffffffffc) + uVar6;
      if (3 < (long)uVar2) {
        puVar24 = (undefined8 *)(lVar7 + lVar18 + uVar6 * 4 + lVar9 * lVar21);
        puVar14 = (undefined8 *)(lVar5 + lVar18 + uVar6 * 4);
        uVar22 = uVar6;
        do {
          uVar26 = *puVar24;
          uVar22 = uVar22 + 4;
          puVar14[1] = CONCAT44((int)((ulong)puVar14[1] >> 0x20) + (int)((ulong)puVar24[1] >> 0x20),
                                (int)puVar14[1] + (int)puVar24[1]);
          *puVar14 = CONCAT44((int)((ulong)*puVar14 >> 0x20) + (int)((ulong)uVar26 >> 0x20),
                              (int)*puVar14 + (int)uVar26);
          puVar24 = puVar24 + 2;
          puVar14 = puVar14 + 2;
        } while ((long)uVar22 < lVar23);
      }
      if (lVar23 < (long)uVar19) {
        uVar22 = lVar17 - (lVar16 + uVar6 + (uVar11 & 0xfffffffffffffffc));
        if (7 < uVar22) {
          lVar13 = lVar9 * lVar13;
          lVar12 = ((long)uVar11 >> 2) * 0x10;
          if (((ulong)(lVar7 + lVar17 * 4 + lVar13) <= lVar5 + lVar18 + lVar12 + uVar6 * 4) ||
             ((ulong)(lVar5 + lVar17 * 4) <= lVar7 + lVar18 + lVar12 + uVar6 * 4 + lVar13)) {
            lVar12 = lVar12 + uVar6 * 4;
            uVar11 = uVar22 & 0xfffffffffffffff8;
            lVar23 = lVar23 + uVar11;
            puVar14 = (undefined8 *)(lVar5 + lVar1 + lVar12);
            puVar24 = (undefined8 *)(lVar7 + lVar1 + lVar12 + lVar9 * lVar21);
            uVar6 = uVar11;
            do {
              uVar6 = uVar6 - 8;
              puVar3 = puVar24 + -1;
              uVar26 = puVar24[-2];
              uVar28 = puVar24[1];
              uVar27 = *puVar24;
              puVar24 = puVar24 + 4;
              puVar14[-1] = CONCAT44((int)((ulong)puVar14[-1] >> 0x20) +
                                     (int)((ulong)*puVar3 >> 0x20),(int)puVar14[-1] + (int)*puVar3);
              puVar14[-2] = CONCAT44((int)((ulong)puVar14[-2] >> 0x20) +
                                     (int)((ulong)uVar26 >> 0x20),(int)puVar14[-2] + (int)uVar26);
              puVar14[1] = CONCAT44((int)((ulong)puVar14[1] >> 0x20) + (int)((ulong)uVar28 >> 0x20),
                                    (int)puVar14[1] + (int)uVar28);
              *puVar14 = CONCAT44((int)((ulong)*puVar14 >> 0x20) + (int)((ulong)uVar27 >> 0x20),
                                  (int)*puVar14 + (int)uVar27);
              puVar14 = puVar14 + 4;
            } while (uVar6 != 0);
            if (uVar22 == uVar11) goto LAB_00526bf8;
          }
        }
        lVar13 = (lVar16 - lVar17) + lVar23;
        piVar8 = (int *)(lVar7 + lVar18 + lVar23 * 4 + lVar9 * lVar21);
        piVar10 = (int *)(lVar5 + lVar18 + lVar23 * 4);
        do {
          bVar4 = lVar13 != -1;
          lVar13 = lVar13 + 1;
          *piVar10 = *piVar10 + *piVar8;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
        } while (bVar4);
      }
LAB_00526bf8:
      lVar20 = lVar20 + 1;
      lVar15 = lVar15 + 1;
      lVar21 = lVar21 + 4;
    } while (lVar20 < *(long *)(param_1 + 0x20));
  }
  return;
}


// ===== 00526e54  FUN_00526e54 =====

void FUN_00526e54(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a23b0 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[2] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00526e7c  FUN_00526e7c =====

void FUN_00526e7c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_00793040;
  if (__ptr != (void *)0x0) {
    param_1[2] = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00526ec0  FUN_00526ec0 =====

long * FUN_00526ec0(long param_1)

{
  size_t __n;
  undefined *puVar1;
  long *__ptr;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  __ptr = (long *)FUN_00759c3c(0x58);
  puVar1 = PTR_DAT_007a23b0;
  pvVar4 = *(void **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar5 = __ptr + 1;
  *plVar5 = 0;
  __ptr[2] = 0;
  __ptr[3] = 0;
  __n = lVar3 - (long)pvVar4;
  *__ptr = (long)(puVar1 + 0x10);
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00526f64 to 00526f6b has its CatchHandler @ 00526f6c */
      uVar2 = FUN_004b6308(plVar5);
                    /* catch() { ... } // from try @ 00526f10 with catch @ 00526f6c
                       catch() { ... } // from try @ 00526f64 with catch @ 00526f6c */
      pvVar4 = (void *)*plVar5;
      if (pvVar4 != (void *)0x0) {
        __ptr[2] = (long)pvVar4;
        free(pvVar4);
      }
      free(__ptr);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 00526f10 to 00526f17 has its CatchHandler @ 00526f6c */
    __dest = (void *)FUN_00759c3c(__n);
    __ptr[1] = (long)__dest;
    __ptr[3] = (long)__dest + __n;
    memcpy(__dest,pvVar4,__n);
    __ptr[2] = (long)__dest + __n;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x30);
  lVar10 = *(long *)(param_1 + 0x48);
  lVar9 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x50);
  __ptr[5] = *(long *)(param_1 + 0x28);
  __ptr[4] = lVar6;
  __ptr[7] = lVar8;
  __ptr[6] = lVar7;
  __ptr[9] = lVar10;
  __ptr[8] = lVar9;
  __ptr[10] = lVar3;
  return __ptr;
}


// ===== 00526f94  FUN_00526f94 =====

void FUN_00526f94(long param_1,long *param_2)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  param_2[3] = 0;
  plVar4 = param_2 + 1;
  *plVar4 = 0;
  puVar1 = PTR_DAT_007a23b0;
  param_2[2] = 0;
  pvVar3 = *(void **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  *param_2 = (long)(puVar1 + 0x10);
  __n = lVar5 - (long)pvVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00527030 to 00527037 has its CatchHandler @ 00527038 */
      uVar2 = FUN_004b6308(plVar4);
                    /* catch() { ... } // from try @ 00526fe0 with catch @ 00527038
                       catch() { ... } // from try @ 00527030 with catch @ 00527038 */
      pvVar3 = (void *)*plVar4;
      if (pvVar3 != (void *)0x0) {
        param_2[2] = (long)pvVar3;
        free(pvVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 00526fe0 to 00526fe7 has its CatchHandler @ 00527038 */
    __dest = (void *)FUN_00759c3c(__n);
    param_2[1] = (long)__dest;
    param_2[2] = (long)__dest;
    param_2[3] = (long)__dest + __n;
    memcpy(__dest,pvVar3,__n);
    param_2[2] = (long)__dest + __n;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  lVar9 = *(long *)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x20);
  param_2[10] = *(long *)(param_1 + 0x50);
  param_2[7] = lVar10;
  param_2[6] = lVar9;
  param_2[9] = lVar6;
  param_2[8] = lVar5;
  param_2[5] = lVar8;
  param_2[4] = lVar7;
  return;
}


// ===== 00527058  FUN_00527058 =====

void FUN_00527058(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00527070  FUN_00527070 =====

void FUN_00527070(void *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)((long)param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)((long)param_1 + 0x10) = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005270a4  FUN_005270a4 =====

void FUN_005270a4(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if (lVar1 < lVar2) {
    do {
      if (*(ulong *)(param_1 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      FUN_005f365c(1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),
                   *(undefined8 *)(param_1 + 8),
                   *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38) * lVar1 * 4,
                   *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40) * lVar1 * 4,0);
      lVar1 = lVar1 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 00527128  FUN_00527128 =====

void FUN_00527128(void)

{
  return;
}


// ===== 0052712c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527130  FUN_00527130 =====

void FUN_00527130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00793088;
  return;
}


// ===== 00527158  FUN_00527158 =====

void FUN_00527158(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00793088;
  return;
}


// ===== 0052716c  FUN_0052716c =====

void FUN_0052716c(void)

{
  return;
}


// ===== 00527170  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527174  FUN_00527174 =====

undefined8 FUN_00527174(void)

{
  return 0;
}


// ===== 0052717c  FUN_0052717c =====

void FUN_0052717c(void)

{
  return;
}


// ===== 00527180  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527184  FUN_00527184 =====

void FUN_00527184(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_007930d0;
  return;
}


// ===== 005271ac  FUN_005271ac =====

void FUN_005271ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_007930d0;
  return;
}


// ===== 005271c0  FUN_005271c0 =====

void FUN_005271c0(void)

{
  return;
}


// ===== 005271c4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005271c8  FUN_005271c8 =====

void FUN_005271c8(undefined8 param_1,int *param_2,undefined8 *param_3,ulong *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  undefined1 auVar21 [16];
  int iVar24;
  undefined8 uVar25;
  
  uVar6 = *param_4;
  if ((long)uVar6 < 0) {
    plVar5 = (long *)FUN_00753a74(8);
    *plVar5 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar5,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (uVar6 == 0) {
    *param_2 = *param_2;
    return;
  }
  piVar8 = (int *)*param_3;
  uVar9 = uVar6;
  if ((((ulong)piVar8 & 3) == 0) && (uVar9 = (ulong)-((uint)piVar8 >> 2) & 3, uVar6 <= uVar9)) {
    uVar9 = uVar6;
  }
  uVar10 = uVar6 - uVar9;
  uVar14 = uVar10 + 3;
  uVar12 = uVar10 + 7;
  if ((long)uVar9 <= (long)uVar6) {
    uVar14 = uVar10;
    uVar12 = uVar10;
  }
  if (uVar10 + 3 < 7) {
    iVar16 = *piVar8;
    uVar9 = uVar6 - 1;
    if (uVar9 != 0) {
      if (uVar6 < 9) {
        uVar10 = 1;
      }
      else {
        iVar17 = 0;
        iVar18 = 0;
        iVar19 = 0;
        iVar20 = 0;
        iVar22 = 0;
        iVar23 = 0;
        iVar24 = 0;
        uVar12 = uVar9 & 0xfffffffffffffff8;
        uVar10 = uVar12 | 1;
        piVar11 = piVar8 + 5;
        uVar14 = uVar12;
        do {
          piVar1 = piVar11 + -4;
          piVar2 = piVar11 + -2;
          piVar3 = piVar11 + 2;
          uVar25 = *(undefined8 *)piVar11;
          uVar14 = uVar14 - 8;
          piVar11 = piVar11 + 8;
          iVar16 = (int)*(undefined8 *)piVar1 + iVar16;
          iVar17 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar17;
          iVar18 = (int)*(undefined8 *)piVar2 + iVar18;
          iVar19 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar19;
          iVar20 = (int)uVar25 + iVar20;
          iVar22 = (int)((ulong)uVar25 >> 0x20) + iVar22;
          iVar23 = (int)*(undefined8 *)piVar3 + iVar23;
          iVar24 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar24;
        } while (uVar14 != 0);
        iVar16 = iVar20 + iVar16 + iVar22 + iVar17 + iVar23 + iVar18 + iVar24 + iVar19;
        if (uVar9 == uVar12) goto LAB_005273b8;
      }
      lVar7 = uVar6 - uVar10;
      piVar8 = piVar8 + uVar10;
      do {
        lVar7 = lVar7 + -1;
        iVar16 = *piVar8 + iVar16;
        piVar8 = piVar8 + 1;
      } while (lVar7 != 0);
    }
    goto LAB_005273b8;
  }
  piVar11 = piVar8 + uVar9;
  uVar13 = uVar14 & 0xfffffffffffffffc;
  iVar18 = (int)*(undefined8 *)(piVar11 + 2);
  iVar19 = (int)((ulong)*(undefined8 *)(piVar11 + 2) >> 0x20);
  iVar16 = (int)*(undefined8 *)piVar11;
  iVar17 = (int)((ulong)*(undefined8 *)piVar11 >> 0x20);
  if (7 < (long)uVar10) {
    iVar20 = piVar11[4];
    iVar22 = piVar11[5];
    iVar23 = piVar11[6];
    iVar24 = piVar11[7];
    lVar7 = (uVar12 & 0xfffffffffffffff8) + uVar9;
    if (0xf < uVar10) {
      lVar15 = uVar9 + 8;
      piVar11 = piVar11 + 0xc;
      do {
        piVar1 = piVar11 + -4;
        piVar2 = piVar11 + -2;
        piVar3 = piVar11 + 2;
        uVar25 = *(undefined8 *)piVar11;
        lVar15 = lVar15 + 8;
        piVar11 = piVar11 + 8;
        iVar16 = (int)*(undefined8 *)piVar1 + iVar16;
        iVar17 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar17;
        iVar18 = (int)*(undefined8 *)piVar2 + iVar18;
        iVar19 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar19;
        iVar20 = (int)uVar25 + iVar20;
        iVar22 = (int)((ulong)uVar25 >> 0x20) + iVar22;
        iVar23 = (int)*(undefined8 *)piVar3 + iVar23;
        iVar24 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar24;
      } while (lVar15 < lVar7);
    }
    iVar16 = iVar16 + iVar20;
    iVar17 = iVar17 + iVar22;
    iVar18 = iVar18 + iVar23;
    iVar19 = iVar19 + iVar24;
    if ((long)(uVar12 & 0xfffffffffffffff8) < (long)uVar13) {
      piVar11 = piVar8 + lVar7;
      iVar16 = *piVar11 + iVar16;
      iVar17 = piVar11[1] + iVar17;
      iVar18 = piVar11[2] + iVar18;
      iVar19 = piVar11[3] + iVar19;
    }
  }
  auVar21._4_4_ = iVar17;
  auVar21._0_4_ = iVar16;
  auVar21._8_4_ = iVar18;
  auVar21._12_4_ = iVar19;
  auVar4._4_4_ = iVar17;
  auVar4._0_4_ = iVar16;
  auVar4._8_4_ = iVar18;
  auVar4._12_4_ = iVar19;
  auVar21 = NEON_ext(auVar21,auVar4,8,1);
  lVar7 = uVar13 + uVar9;
  iVar16 = iVar16 + auVar21._0_4_ + iVar17 + auVar21._4_4_;
  if (0 < (long)uVar9) {
    if (uVar9 < 8) {
      uVar12 = 0;
    }
    else {
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      uVar12 = uVar9 & 0x7ffffffffffffff8;
      piVar11 = piVar8 + 4;
      uVar10 = uVar12;
      do {
        piVar1 = piVar11 + -4;
        piVar2 = piVar11 + -2;
        piVar3 = piVar11 + 2;
        uVar25 = *(undefined8 *)piVar11;
        uVar10 = uVar10 - 8;
        piVar11 = piVar11 + 8;
        iVar16 = (int)*(undefined8 *)piVar1 + iVar16;
        iVar17 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar17;
        iVar18 = (int)*(undefined8 *)piVar2 + iVar18;
        iVar19 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar19;
        iVar20 = (int)uVar25 + iVar20;
        iVar22 = (int)((ulong)uVar25 >> 0x20) + iVar22;
        iVar23 = (int)*(undefined8 *)piVar3 + iVar23;
        iVar24 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar24;
      } while (uVar10 != 0);
      iVar16 = iVar20 + iVar16 + iVar22 + iVar17 + iVar23 + iVar18 + iVar24 + iVar19;
      if (uVar9 == uVar12) goto LAB_00527334;
    }
    lVar15 = uVar9 - uVar12;
    piVar11 = piVar8 + uVar12;
    do {
      lVar15 = lVar15 + -1;
      iVar16 = *piVar11 + iVar16;
      piVar11 = piVar11 + 1;
    } while (lVar15 != 0);
  }
LAB_00527334:
  if (lVar7 < (long)uVar6) {
    uVar10 = uVar6 - (uVar9 + uVar13);
    if (7 < uVar10) {
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar20 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      uVar12 = uVar10 & 0xfffffffffffffff8;
      lVar7 = lVar7 + uVar12;
      piVar11 = piVar8 + uVar9 + ((long)uVar14 >> 2) * 4 + 4;
      uVar9 = uVar12;
      do {
        piVar1 = piVar11 + -4;
        piVar2 = piVar11 + -2;
        piVar3 = piVar11 + 2;
        uVar25 = *(undefined8 *)piVar11;
        uVar9 = uVar9 - 8;
        piVar11 = piVar11 + 8;
        iVar16 = (int)*(undefined8 *)piVar1 + iVar16;
        iVar17 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar17;
        iVar18 = (int)*(undefined8 *)piVar2 + iVar18;
        iVar19 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar19;
        iVar20 = (int)uVar25 + iVar20;
        iVar22 = (int)((ulong)uVar25 >> 0x20) + iVar22;
        iVar23 = (int)*(undefined8 *)piVar3 + iVar23;
        iVar24 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar24;
      } while (uVar9 != 0);
      iVar16 = iVar20 + iVar16 + iVar22 + iVar17 + iVar23 + iVar18 + iVar24 + iVar19;
      if (uVar10 == uVar12) goto LAB_005273b8;
    }
    do {
      piVar11 = piVar8 + lVar7;
      lVar7 = lVar7 + 1;
      iVar16 = *piVar11 + iVar16;
    } while (lVar7 < (long)uVar6);
  }
LAB_005273b8:
  *param_2 = *param_2 + iVar16;
  return;
}


// ===== 0052745c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527460  FUN_00527460 =====

void FUN_00527460(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00793118;
  puVar1[1] = uVar2;
  return;
}


// ===== 00527498  FUN_00527498 =====

void FUN_00527498(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00793118;
  param_2[1] = uVar1;
  return;
}


// ===== 005274b0  FUN_005274b0 =====

void FUN_005274b0(void)

{
  return;
}


// ===== 005274b4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005274b8  FUN_005274b8 =====

void FUN_005274b8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005274c8(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005274c8  FUN_005274c8 =====

void FUN_005274c8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined8 uVar37;
  
  lVar12 = *param_1;
  lVar10 = *(long *)(lVar12 + 0x10);
  lVar17 = *(long *)(lVar10 + 0xf0);
  lVar21 = 0;
  if (lVar17 != 0) {
    lVar21 = param_2 / lVar17;
  }
  if (-1 < lVar21) {
    plVar22 = (long *)(lVar10 + 0xc0);
    uVar15 = *(ulong *)(lVar10 + 0xb8);
    plVar11 = plVar22;
    if ((uVar15 & 1) != 0) {
      plVar11 = (long *)*plVar22;
    }
    lVar16 = param_3 - param_2;
    if (lVar16 != 0 && param_2 <= param_3) {
      lVar20 = param_2 - lVar21 * lVar17;
      lVar24 = *(long *)(lVar10 + 0xf8);
      uVar13 = *(ulong *)(lVar10 + 0x70);
      lVar5 = *(long *)(lVar12 + 0x18);
      lVar6 = *(long *)(lVar12 + 0x20);
      plVar3 = (long *)(lVar10 + 0x78);
      lVar25 = plVar11[lVar21] + lVar24 * lVar20;
      uVar18 = uVar13 >> 1;
      uVar19 = uVar15 >> 1;
      if ((uVar13 & 1) != 0) {
        if ((uVar15 & 1) != 0) {
LAB_0052785c:
          do {
            if ((uVar13 < 2) || (uVar15 = *(ulong *)(lVar12 + 8), (long)uVar15 < 1)) {
              iVar29 = 0;
            }
            else {
              uVar14 = *(ulong *)(lVar10 + 0xb0);
              plVar11 = (long *)*plVar3;
              iVar29 = 0;
              uVar26 = uVar14;
              if ((long)uVar14 <= (long)uVar15) {
                uVar26 = uVar15;
              }
              uVar7 = 0;
              if (uVar14 != 0) {
                uVar7 = (uVar26 - 1) / uVar14;
              }
              uVar7 = uVar7 + 1;
              uVar26 = uVar7 & 0xfffffffffffffff8;
              plVar4 = plVar11 + uVar18;
              do {
                if (uVar7 < 8 || uVar14 != 1) {
                  lVar16 = 0;
LAB_0052791c:
                  do {
                    lVar1 = lVar16 * 4;
                    lVar16 = lVar16 + uVar14;
                    iVar29 = *(int *)(lVar5 + lVar25 * 4 + *plVar11 * 4 + lVar1) + iVar29;
                  } while (lVar16 < (long)uVar15);
                }
                else {
                  iVar31 = 0;
                  iVar32 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  iVar35 = 0;
                  iVar36 = 0;
                  puVar27 = (undefined8 *)(lVar5 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                  iVar30 = 0;
                  uVar28 = uVar26;
                  do {
                    puVar2 = puVar27 + -2;
                    puVar8 = puVar27 + -1;
                    puVar9 = puVar27 + 1;
                    uVar37 = *puVar27;
                    uVar28 = uVar28 - 8;
                    puVar27 = puVar27 + 4;
                    iVar29 = (int)*puVar2 + iVar29;
                    iVar30 = (int)((ulong)*puVar2 >> 0x20) + iVar30;
                    iVar31 = (int)*puVar8 + iVar31;
                    iVar32 = (int)((ulong)*puVar8 >> 0x20) + iVar32;
                    iVar33 = (int)uVar37 + iVar33;
                    iVar34 = (int)((ulong)uVar37 >> 0x20) + iVar34;
                    iVar35 = (int)*puVar9 + iVar35;
                    iVar36 = (int)((ulong)*puVar9 >> 0x20) + iVar36;
                  } while (uVar28 != 0);
                  iVar29 = iVar33 + iVar29 + iVar34 + iVar30 + iVar35 + iVar31 + iVar36 + iVar32;
                  lVar16 = uVar26 * uVar14;
                  if (uVar7 != uVar26) goto LAB_0052791c;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar4);
            }
            lVar20 = lVar20 + 1;
            *(int *)(lVar6 + param_2 * 4) = iVar29;
            if (lVar17 <= lVar20) {
              lVar16 = lVar21 + 1;
              if (lVar16 < (long)uVar19) {
                if (lVar21 == -2 || lVar21 + 2 < 0 != SCARRY8(lVar21,2)) goto LAB_00527590;
                lVar25 = *(long *)(*plVar22 + lVar16 * 8);
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar16;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_0052785c;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
LAB_005275e0:
        do {
          if ((uVar13 < 2) || (uVar15 = *(ulong *)(lVar12 + 8), (long)uVar15 < 1)) {
            iVar29 = 0;
          }
          else {
            uVar14 = *(ulong *)(lVar10 + 0xb0);
            plVar11 = (long *)*plVar3;
            iVar29 = 0;
            uVar26 = uVar14;
            if ((long)uVar14 <= (long)uVar15) {
              uVar26 = uVar15;
            }
            plVar4 = plVar11 + uVar18;
            uVar7 = 0;
            if (uVar14 != 0) {
              uVar7 = (uVar26 - 1) / uVar14;
            }
            uVar7 = uVar7 + 1;
            uVar26 = uVar7 & 0xfffffffffffffff8;
            do {
              if (uVar7 < 8 || uVar14 != 1) {
                lVar16 = 0;
LAB_005276a0:
                do {
                  lVar1 = lVar16 * 4;
                  lVar16 = lVar16 + uVar14;
                  iVar29 = *(int *)(lVar5 + lVar25 * 4 + *plVar11 * 4 + lVar1) + iVar29;
                } while (lVar16 < (long)uVar15);
              }
              else {
                iVar31 = 0;
                iVar32 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar35 = 0;
                iVar36 = 0;
                puVar27 = (undefined8 *)(lVar5 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                iVar30 = 0;
                uVar28 = uVar26;
                do {
                  puVar2 = puVar27 + -2;
                  puVar8 = puVar27 + -1;
                  puVar9 = puVar27 + 1;
                  uVar37 = *puVar27;
                  uVar28 = uVar28 - 8;
                  puVar27 = puVar27 + 4;
                  iVar29 = (int)*puVar2 + iVar29;
                  iVar30 = (int)((ulong)*puVar2 >> 0x20) + iVar30;
                  iVar31 = (int)*puVar8 + iVar31;
                  iVar32 = (int)((ulong)*puVar8 >> 0x20) + iVar32;
                  iVar33 = (int)uVar37 + iVar33;
                  iVar34 = (int)((ulong)uVar37 >> 0x20) + iVar34;
                  iVar35 = (int)*puVar9 + iVar35;
                  iVar36 = (int)((ulong)*puVar9 >> 0x20) + iVar36;
                } while (uVar28 != 0);
                iVar29 = iVar33 + iVar29 + iVar34 + iVar30 + iVar35 + iVar31 + iVar36 + iVar32;
                lVar16 = uVar26 * uVar14;
                if (uVar7 != uVar26) goto LAB_005276a0;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar4);
          }
          lVar20 = lVar20 + 1;
          *(int *)(lVar6 + param_2 * 4) = iVar29;
          if (lVar17 <= lVar20) {
            lVar16 = lVar21 + 1;
            if (lVar16 < (long)uVar19) {
              if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00527590;
              lVar25 = plVar22[lVar16];
            }
            lVar20 = 0;
            param_2 = param_2 + 1;
            lVar21 = lVar16;
            if (param_2 == param_3) {
              return;
            }
            goto LAB_005275e0;
          }
          lVar25 = lVar25 + lVar24;
          param_2 = param_2 + 1;
          if (param_2 == param_3) {
            return;
          }
        } while( true );
      }
      if (uVar13 < 2) {
        puVar23 = (undefined4 *)(lVar6 + param_2 * 4);
        do {
          lVar20 = lVar20 + 1;
          *puVar23 = 0;
          lVar10 = lVar21;
          if (lVar17 <= lVar20) {
            lVar10 = lVar21 + 1;
            lVar20 = 0;
            if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1))) goto LAB_00527590;
          }
          lVar21 = lVar10;
          lVar16 = lVar16 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar16 != 0);
      }
      else {
        uVar13 = *(ulong *)(lVar12 + 8);
        if (0 < (long)uVar13) {
          uVar14 = *(ulong *)(lVar10 + 0xb0);
          uVar26 = uVar14;
          if ((long)uVar14 <= (long)uVar13) {
            uVar26 = uVar13;
          }
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = (uVar26 - 1) / uVar14;
          }
          uVar7 = uVar7 + 1;
          uVar26 = uVar7 & 0xfffffffffffffff8;
LAB_00527760:
          do {
            iVar29 = 0;
            plVar11 = plVar3;
            do {
              if (uVar7 < 8 || uVar14 != 1) {
                lVar12 = 0;
LAB_005277d8:
                do {
                  lVar16 = lVar12 * 4;
                  lVar12 = lVar12 + uVar14;
                  iVar29 = *(int *)(lVar5 + lVar25 * 4 + *plVar11 * 4 + lVar16) + iVar29;
                } while (lVar12 < (long)uVar13);
              }
              else {
                iVar31 = 0;
                iVar32 = 0;
                iVar33 = 0;
                iVar34 = 0;
                iVar35 = 0;
                iVar36 = 0;
                iVar30 = 0;
                puVar27 = (undefined8 *)(lVar5 + 0x10 + lVar25 * 4 + *plVar11 * 4);
                uVar28 = uVar26;
                do {
                  puVar2 = puVar27 + -2;
                  puVar8 = puVar27 + -1;
                  puVar9 = puVar27 + 1;
                  uVar37 = *puVar27;
                  uVar28 = uVar28 - 8;
                  puVar27 = puVar27 + 4;
                  iVar29 = (int)*puVar2 + iVar29;
                  iVar30 = (int)((ulong)*puVar2 >> 0x20) + iVar30;
                  iVar31 = (int)*puVar8 + iVar31;
                  iVar32 = (int)((ulong)*puVar8 >> 0x20) + iVar32;
                  iVar33 = (int)uVar37 + iVar33;
                  iVar34 = (int)((ulong)uVar37 >> 0x20) + iVar34;
                  iVar35 = (int)*puVar9 + iVar35;
                  iVar36 = (int)((ulong)*puVar9 >> 0x20) + iVar36;
                } while (uVar28 != 0);
                iVar29 = iVar33 + iVar29 + iVar34 + iVar30 + iVar35 + iVar31 + iVar36 + iVar32;
                lVar12 = uVar26 * uVar14;
                if (uVar7 != uVar26) goto LAB_005277d8;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != (long *)(lVar10 + uVar18 * 8 + 0x78));
            lVar20 = lVar20 + 1;
            *(int *)(lVar6 + param_2 * 4) = iVar29;
            if (lVar17 <= lVar20) {
              lVar12 = lVar21 + 1;
              if (lVar12 < (long)uVar19) {
                if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00527590;
                plVar11 = plVar22;
                if ((uVar15 & 1) != 0) {
                  plVar11 = (long *)*plVar22;
                }
                lVar25 = plVar11[lVar12];
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar12;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_00527760;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
        puVar23 = (undefined4 *)(lVar6 + param_2 * 4);
        if ((uVar15 & 1) == 0) {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar17 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00527590;
            }
            lVar21 = lVar10;
            lVar16 = lVar16 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar16 != 0);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar17 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00527590;
            }
            lVar21 = lVar10;
            lVar16 = lVar16 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar16 != 0);
        }
      }
    }
    return;
  }
LAB_00527590:
  plVar11 = (long *)FUN_00753a74(8);
  *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 00527a28  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527a2c  FUN_00527a2c =====

void FUN_00527a2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_00793160;
  puVar1[3] = uVar2;
  return;
}


// ===== 00527a70  FUN_00527a70 =====

void FUN_00527a70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00793160;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00527a94  FUN_00527a94 =====

void FUN_00527a94(void)

{
  return;
}


// ===== 00527a98  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527a9c  FUN_00527a9c =====

void FUN_00527a9c(long param_1)

{
  FUN_00527aa4(param_1 + 8);
  return;
}


// ===== 00527aa4  FUN_00527aa4 =====

void FUN_00527aa4(ulong *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  long *plVar6;
  double *pdVar7;
  double *pdVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar16 = *param_2;
  lVar17 = *param_3;
  if (lVar17 - lVar16 != 0 && lVar16 <= lVar17) {
    uVar18 = param_1[1];
    if ((long)uVar18 < 0) {
      plVar6 = (long *)FUN_00753a74(8);
      *plVar6 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar6,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    uVar19 = param_1[2];
    if (uVar18 == 0) {
      memset((void *)(uVar19 + lVar16 * 8),0,(lVar17 - lVar16) * 8);
      return;
    }
    uVar20 = *param_1;
    uVar22 = uVar18 - 1 & 0xfffffffffffffffc;
    lVar21 = uVar20 + uVar18 * lVar16 * 8;
    pdVar7 = (double *)(lVar21 + 0x10);
    pdVar8 = (double *)(lVar21 + 0x18);
    do {
      pdVar11 = (double *)(uVar20 + lVar16 * uVar18 * 8);
      uVar9 = (ulong)pdVar11 >> 3 & 1;
      if ((uVar20 & 7) != 0) {
        uVar9 = uVar18;
      }
      uVar14 = uVar18 - uVar9;
      uVar1 = uVar14;
      uVar12 = uVar14;
      if ((long)uVar18 < (long)uVar9) {
        uVar1 = uVar14 + 1;
        uVar12 = uVar14 + 3;
      }
      if (uVar14 + 1 < 3) {
        dVar24 = *pdVar11;
        if (uVar18 != 1) {
          uVar9 = uVar22;
          pdVar11 = pdVar8;
          if (uVar18 < 5) {
            uVar9 = 1;
          }
          else {
            do {
              uVar9 = uVar9 - 4;
              dVar24 = dVar24 + pdVar11[-2] + pdVar11[-1] + *pdVar11 + pdVar11[1];
              pdVar11 = pdVar11 + 4;
            } while (uVar9 != 0);
            uVar9 = uVar22 | 1;
            if (uVar18 - 1 == uVar22) goto LAB_00527b00;
          }
          do {
            uVar1 = uVar9 + 1;
            dVar24 = dVar24 + *(double *)(lVar21 + uVar9 * 8);
            uVar9 = uVar1;
          } while (uVar18 != uVar1);
        }
      }
      else {
        pdVar3 = pdVar11 + uVar9;
        uVar13 = uVar1 & 0xfffffffffffffffe;
        dVar25 = pdVar3[1];
        dVar24 = *pdVar3;
        if (3 < (long)uVar14) {
          dVar27 = pdVar3[3];
          dVar26 = pdVar3[2];
          lVar15 = (uVar12 & 0xfffffffffffffffc) + uVar9;
          if (7 < uVar14) {
            lVar23 = uVar9 << 3;
            lVar10 = uVar9 + 4;
            do {
              lVar2 = lVar21 + lVar23;
              lVar10 = lVar10 + 4;
              lVar23 = lVar23 + 0x20;
              dVar24 = dVar24 + *(double *)(lVar2 + 0x20);
              dVar25 = dVar25 + *(double *)(lVar2 + 0x28);
              dVar26 = dVar26 + *(double *)(lVar2 + 0x30);
              dVar27 = dVar27 + *(double *)(lVar2 + 0x38);
            } while (lVar10 < lVar15);
          }
          dVar24 = dVar26 + dVar24;
          dVar25 = dVar27 + dVar25;
          if ((long)(uVar12 & 0xfffffffffffffffc) < (long)uVar13) {
            dVar24 = dVar24 + pdVar11[lVar15];
            dVar25 = dVar25 + (pdVar11 + lVar15)[1];
          }
        }
        dVar24 = dVar24 + dVar25;
        if (0 < (long)uVar9) {
          if (3 < uVar9) {
            uVar14 = uVar9 & 0x7ffffffffffffffc;
            uVar12 = uVar14;
            pdVar11 = pdVar7;
            do {
              pdVar3 = pdVar11 + -2;
              pdVar4 = pdVar11 + -1;
              pdVar5 = pdVar11 + 1;
              dVar25 = *pdVar11;
              uVar12 = uVar12 - 4;
              pdVar11 = pdVar11 + 4;
              dVar24 = dVar24 + *pdVar3 + *pdVar4 + dVar25 + *pdVar5;
              if (uVar12 == 0) goto LAB_00527c84;
            } while( true );
          }
          uVar14 = 0;
          do {
            lVar15 = uVar14 * 8;
            uVar14 = uVar14 + 1;
            dVar24 = dVar24 + *(double *)(lVar21 + lVar15);
LAB_00527c84:
          } while (uVar9 != uVar14);
        }
        lVar15 = uVar13 + uVar9;
        if (lVar15 < (long)uVar18) {
          uVar14 = uVar18 - (uVar9 + uVar13);
          if (3 < uVar14) {
            uVar12 = uVar14 & 0xfffffffffffffffc;
            lVar15 = lVar15 + uVar12;
            lVar10 = ((long)uVar1 >> 1) * 0x10 + uVar9 * 8;
            uVar9 = uVar12;
            do {
              pdVar11 = (double *)(lVar21 + lVar10);
              uVar9 = uVar9 - 4;
              pdVar3 = (double *)((long)pdVar7 + lVar10);
              lVar10 = lVar10 + 0x20;
              dVar24 = dVar24 + *pdVar11 + pdVar11[1] + *pdVar3 + pdVar3[1];
            } while (uVar9 != 0);
            if (uVar14 == uVar12) goto LAB_00527b00;
          }
          do {
            lVar10 = lVar15 * 8;
            lVar15 = lVar15 + 1;
            dVar24 = dVar24 + *(double *)(lVar21 + lVar10);
          } while (lVar15 < (long)uVar18);
        }
      }
LAB_00527b00:
      *(double *)(uVar19 + lVar16 * 8) = dVar24;
      lVar16 = lVar16 + 1;
      lVar21 = lVar21 + uVar18 * 8;
      pdVar7 = pdVar7 + uVar18;
      pdVar8 = pdVar8 + uVar18;
    } while (lVar16 != lVar17);
  }
  return;
}


// ===== 00527d64  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527d68  FUN_00527d68 =====

void FUN_00527d68(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_007931a8;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}


// ===== 00527dac  FUN_00527dac =====

void FUN_00527dac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_007931a8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 00527dd0  FUN_00527dd0 =====

void FUN_00527dd0(void)

{
  return;
}


// ===== 00527dd4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00527dd8  FUN_00527dd8 =====

void FUN_00527dd8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  double *pdVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  double *pdVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  double *pdVar22;
  ulong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  if (1 < *(long *)(param_1 + 0x20)) {
    lVar14 = *param_2;
    lVar15 = *param_3;
    lVar13 = 0;
    lVar18 = 1;
    lVar19 = 8;
    lVar16 = lVar14 * 8;
    uVar17 = lVar15 - lVar14;
    lVar1 = lVar16 + 0x10;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      lVar12 = lVar13 * 8 + 8;
      uVar20 = lVar2 + lVar16;
      uVar7 = uVar20 >> 3 & 1;
      if ((long)uVar17 <= (long)uVar7) {
        uVar7 = uVar17;
      }
      if ((uVar20 & 7) != 0) {
        uVar7 = uVar17;
      }
      lVar8 = *(long *)(param_1 + 8);
      uVar4 = uVar17 - uVar7;
      uVar10 = uVar4;
      if ((long)uVar17 < (long)uVar7) {
        uVar10 = uVar4 + 1;
      }
      if (0 < (long)uVar7) {
        if ((uVar7 < 4) ||
           ((uVar20 < lVar8 + lVar16 + lVar3 * lVar12 + uVar7 * 8 &&
            ((ulong)(lVar8 + lVar3 * lVar18 * 8 + lVar16) < lVar2 + lVar16 + uVar7 * 8)))) {
          uVar20 = 0;
        }
        else {
          pdVar22 = (double *)(lVar8 + lVar1 + lVar3 * lVar19);
          pdVar9 = (double *)(lVar2 + lVar1);
          uVar20 = uVar7 & 0x7ffffffffffffffc;
          uVar23 = uVar20;
          do {
            uVar23 = uVar23 - 4;
            pdVar5 = pdVar22 + -1;
            dVar24 = pdVar22[-2];
            dVar26 = pdVar22[1];
            dVar25 = *pdVar22;
            pdVar22 = pdVar22 + 4;
            pdVar9[-1] = *pdVar5 + pdVar9[-1];
            pdVar9[-2] = dVar24 + pdVar9[-2];
            pdVar9[1] = dVar26 + pdVar9[1];
            *pdVar9 = dVar25 + *pdVar9;
            pdVar9 = pdVar9 + 4;
          } while (uVar23 != 0);
          if (uVar7 == uVar20) goto LAB_00527ee0;
        }
        lVar21 = uVar7 - uVar20;
        pdVar22 = (double *)(lVar8 + lVar16 + uVar20 * 8 + lVar3 * lVar19);
        pdVar9 = (double *)(lVar2 + lVar16 + uVar20 * 8);
        do {
          lVar21 = lVar21 + -1;
          *pdVar9 = *pdVar22 + *pdVar9;
          pdVar22 = pdVar22 + 1;
          pdVar9 = pdVar9 + 1;
        } while (lVar21 != 0);
      }
LAB_00527ee0:
      lVar21 = (uVar10 & 0xfffffffffffffffe) + uVar7;
      if (1 < (long)uVar4) {
        pdVar22 = (double *)(lVar8 + lVar16 + uVar7 * 8 + lVar3 * lVar19);
        pdVar9 = (double *)(lVar2 + lVar16 + uVar7 * 8);
        uVar20 = uVar7;
        do {
          dVar24 = *pdVar22;
          uVar20 = uVar20 + 2;
          pdVar9[1] = pdVar22[1] + pdVar9[1];
          *pdVar9 = dVar24 + *pdVar9;
          pdVar22 = pdVar22 + 2;
          pdVar9 = pdVar9 + 2;
        } while ((long)uVar20 < lVar21);
      }
      if (lVar21 < (long)uVar17) {
        uVar20 = lVar15 - (lVar14 + uVar7 + (uVar10 & 0xfffffffffffffffe));
        if (5 < uVar20) {
          lVar12 = lVar3 * lVar12;
          lVar11 = ((long)uVar10 >> 1) * 0x10;
          if (((ulong)(lVar8 + lVar15 * 8 + lVar12) <= lVar2 + lVar16 + lVar11 + uVar7 * 8) ||
             ((ulong)(lVar2 + lVar15 * 8) <= lVar8 + lVar16 + lVar11 + uVar7 * 8 + lVar12)) {
            lVar11 = lVar11 + uVar7 * 8;
            uVar10 = uVar20 & 0xfffffffffffffffc;
            lVar21 = lVar21 + uVar10;
            pdVar9 = (double *)(lVar2 + lVar1 + lVar11);
            pdVar22 = (double *)(lVar8 + lVar1 + lVar11 + lVar3 * lVar19);
            uVar7 = uVar10;
            do {
              uVar7 = uVar7 - 4;
              pdVar5 = pdVar22 + -1;
              dVar24 = pdVar22[-2];
              dVar26 = pdVar22[1];
              dVar25 = *pdVar22;
              pdVar22 = pdVar22 + 4;
              pdVar9[-1] = *pdVar5 + pdVar9[-1];
              pdVar9[-2] = dVar24 + pdVar9[-2];
              pdVar9[1] = dVar26 + pdVar9[1];
              *pdVar9 = dVar25 + *pdVar9;
              pdVar9 = pdVar9 + 4;
            } while (uVar7 != 0);
            if (uVar20 == uVar10) goto LAB_00527e1c;
          }
        }
        lVar12 = (lVar14 - lVar15) + lVar21;
        pdVar22 = (double *)(lVar8 + lVar16 + lVar21 * 8 + lVar3 * lVar19);
        pdVar9 = (double *)(lVar2 + lVar16 + lVar21 * 8);
        do {
          bVar6 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          *pdVar9 = *pdVar22 + *pdVar9;
          pdVar22 = pdVar22 + 1;
          pdVar9 = pdVar9 + 1;
        } while (bVar6);
      }
LAB_00527e1c:
      lVar18 = lVar18 + 1;
      lVar13 = lVar13 + 1;
      lVar19 = lVar19 + 8;
    } while (lVar18 < *(long *)(param_1 + 0x20));
  }
  return;
}


// ===== 00528068  FUN_00528068 =====

void FUN_00528068(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a23e0 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[2] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00528090  FUN_00528090 =====

void FUN_00528090(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007931f0;
  if (__ptr != (void *)0x0) {
    param_1[2] = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005280d4  FUN_005280d4 =====

long * FUN_005280d4(long param_1)

{
  size_t __n;
  undefined *puVar1;
  long *__ptr;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  __ptr = (long *)FUN_00759c3c(0x58);
  puVar1 = PTR_DAT_007a23e0;
  pvVar4 = *(void **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar5 = __ptr + 1;
  *plVar5 = 0;
  __ptr[2] = 0;
  __ptr[3] = 0;
  __n = lVar3 - (long)pvVar4;
  *__ptr = (long)(puVar1 + 0x10);
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00528178 to 0052817f has its CatchHandler @ 00528180 */
      uVar2 = FUN_00349cc4(plVar5);
                    /* catch() { ... } // from try @ 00528124 with catch @ 00528180
                       catch() { ... } // from try @ 00528178 with catch @ 00528180 */
      pvVar4 = (void *)*plVar5;
      if (pvVar4 != (void *)0x0) {
        __ptr[2] = (long)pvVar4;
        free(pvVar4);
      }
      free(__ptr);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 00528124 to 0052812b has its CatchHandler @ 00528180 */
    __dest = (void *)FUN_00759c3c(__n);
    __ptr[1] = (long)__dest;
    __ptr[3] = (long)__dest + __n;
    memcpy(__dest,pvVar4,__n);
    __ptr[2] = (long)__dest + __n;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x38);
  lVar7 = *(long *)(param_1 + 0x30);
  lVar10 = *(long *)(param_1 + 0x48);
  lVar9 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x50);
  __ptr[5] = *(long *)(param_1 + 0x28);
  __ptr[4] = lVar6;
  __ptr[7] = lVar8;
  __ptr[6] = lVar7;
  __ptr[9] = lVar10;
  __ptr[8] = lVar9;
  __ptr[10] = lVar3;
  return __ptr;
}


// ===== 005281a8  FUN_005281a8 =====

void FUN_005281a8(long param_1,long *param_2)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  param_2[3] = 0;
  plVar4 = param_2 + 1;
  *plVar4 = 0;
  puVar1 = PTR_DAT_007a23e0;
  param_2[2] = 0;
  pvVar3 = *(void **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  *param_2 = (long)(puVar1 + 0x10);
  __n = lVar5 - (long)pvVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00528244 to 0052824b has its CatchHandler @ 0052824c */
      uVar2 = FUN_00349cc4(plVar4);
                    /* catch() { ... } // from try @ 005281f4 with catch @ 0052824c
                       catch() { ... } // from try @ 00528244 with catch @ 0052824c */
      pvVar3 = (void *)*plVar4;
      if (pvVar3 != (void *)0x0) {
        param_2[2] = (long)pvVar3;
        free(pvVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar2);
    }
                    /* try { // try from 005281f4 to 005281fb has its CatchHandler @ 0052824c */
    __dest = (void *)FUN_00759c3c(__n);
    param_2[1] = (long)__dest;
    param_2[2] = (long)__dest;
    param_2[3] = (long)__dest + __n;
    memcpy(__dest,pvVar3,__n);
    param_2[2] = (long)__dest + __n;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  lVar9 = *(long *)(param_1 + 0x30);
  lVar6 = *(long *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x40);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x20);
  param_2[10] = *(long *)(param_1 + 0x50);
  param_2[7] = lVar10;
  param_2[6] = lVar9;
  param_2[9] = lVar6;
  param_2[8] = lVar5;
  param_2[5] = lVar8;
  param_2[4] = lVar7;
  return;
}


// ===== 0052826c  FUN_0052826c =====

void FUN_0052826c(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00528284  FUN_00528284 =====

void FUN_00528284(void *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)((long)param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)((long)param_1 + 0x10) = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005282b8  FUN_005282b8 =====

void FUN_005282b8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if (lVar1 < lVar2) {
    do {
      if (*(ulong *)(param_1 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      FUN_005f383c(1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),
                   *(undefined8 *)(param_1 + 8),
                   *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38) * lVar1 * 8,
                   *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40) * lVar1 * 8,0);
      lVar1 = lVar1 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 0052833c  FUN_0052833c =====

void FUN_0052833c(void)

{
  return;
}


// ===== 00528340  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528344  FUN_00528344 =====

void FUN_00528344(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00793238;
  return;
}


// ===== 0052836c  FUN_0052836c =====

void FUN_0052836c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00793238;
  return;
}


// ===== 00528380  FUN_00528380 =====

void FUN_00528380(void)

{
  return;
}


// ===== 00528384  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528388  FUN_00528388 =====

undefined1  [16] FUN_00528388(void)

{
  return ZEXT816(0);
}


// ===== 00528390  FUN_00528390 =====

void FUN_00528390(void)

{
  return;
}


// ===== 00528394  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528398  FUN_00528398 =====

void FUN_00528398(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00793280;
  return;
}


// ===== 005283c0  FUN_005283c0 =====

void FUN_005283c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00793280;
  return;
}


// ===== 005283d4  FUN_005283d4 =====

void FUN_005283d4(void)

{
  return;
}


// ===== 005283d8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005283dc  FUN_005283dc =====

void FUN_005283dc(undefined8 param_1,double *param_2,ulong *param_3,ulong *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  double *pdVar7;
  ulong uVar8;
  double *pdVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  uVar5 = *param_4;
  if ((long)uVar5 < 0) {
    plVar4 = (long *)FUN_00753a74(8);
    *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (uVar5 == 0) {
    *param_2 = *param_2 + 0.0;
    return;
  }
  pdVar7 = (double *)*param_3;
  uVar13 = (ulong)pdVar7 >> 3 & 1;
  if (((ulong)pdVar7 & 7) != 0) {
    uVar13 = uVar5;
  }
  uVar8 = uVar5 - uVar13;
  uVar14 = uVar8;
  uVar10 = uVar8;
  if ((long)uVar5 < (long)uVar13) {
    uVar14 = uVar8 + 1;
    uVar10 = uVar8 + 3;
  }
  if (uVar8 + 1 < 3) {
    dVar15 = *pdVar7;
    uVar13 = uVar5 - 1;
    if (uVar13 != 0) {
      if (uVar5 < 5) {
        uVar8 = 1;
      }
      else {
        uVar10 = uVar13 & 0xfffffffffffffffc;
        pdVar9 = pdVar7 + 3;
        uVar8 = uVar10 | 1;
        uVar14 = uVar10;
        do {
          pdVar1 = pdVar9 + -2;
          pdVar2 = pdVar9 + -1;
          pdVar3 = pdVar9 + 1;
          dVar16 = *pdVar9;
          uVar14 = uVar14 - 4;
          pdVar9 = pdVar9 + 4;
          dVar15 = dVar15 + *pdVar1 + *pdVar2 + dVar16 + *pdVar3;
        } while (uVar14 != 0);
        if (uVar13 == uVar10) goto LAB_005285a4;
      }
      lVar6 = uVar5 - uVar8;
      pdVar7 = pdVar7 + uVar8;
      do {
        lVar6 = lVar6 + -1;
        dVar15 = dVar15 + *pdVar7;
        pdVar7 = pdVar7 + 1;
      } while (lVar6 != 0);
    }
    goto LAB_005285a4;
  }
  pdVar9 = pdVar7 + uVar13;
  uVar11 = uVar14 & 0xfffffffffffffffe;
  dVar16 = pdVar9[1];
  dVar15 = *pdVar9;
  if (3 < (long)uVar8) {
    dVar18 = pdVar9[3];
    dVar17 = pdVar9[2];
    lVar6 = (uVar10 & 0xfffffffffffffffc) + uVar13;
    if (7 < uVar8) {
      lVar12 = uVar13 + 4;
      pdVar9 = pdVar9 + 6;
      do {
        pdVar1 = pdVar9 + -2;
        pdVar2 = pdVar9 + -1;
        pdVar3 = pdVar9 + 1;
        dVar19 = *pdVar9;
        lVar12 = lVar12 + 4;
        pdVar9 = pdVar9 + 4;
        dVar15 = dVar15 + *pdVar1;
        dVar16 = dVar16 + *pdVar2;
        dVar17 = dVar17 + dVar19;
        dVar18 = dVar18 + *pdVar3;
      } while (lVar12 < lVar6);
    }
    dVar15 = dVar17 + dVar15;
    dVar16 = dVar18 + dVar16;
    if ((long)(uVar10 & 0xfffffffffffffffc) < (long)uVar11) {
      dVar15 = dVar15 + pdVar7[lVar6];
      dVar16 = dVar16 + (pdVar7 + lVar6)[1];
    }
  }
  dVar15 = dVar15 + dVar16;
  lVar6 = uVar11 + uVar13;
  if (0 < (long)uVar13) {
    if (uVar13 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar13 & 0x7ffffffffffffffc;
      pdVar9 = pdVar7 + 2;
      uVar8 = uVar10;
      do {
        pdVar1 = pdVar9 + -2;
        pdVar2 = pdVar9 + -1;
        pdVar3 = pdVar9 + 1;
        dVar16 = *pdVar9;
        uVar8 = uVar8 - 4;
        pdVar9 = pdVar9 + 4;
        dVar15 = dVar15 + *pdVar1 + *pdVar2 + dVar16 + *pdVar3;
      } while (uVar8 != 0);
      if (uVar13 == uVar10) goto LAB_00528528;
    }
    lVar12 = uVar13 - uVar10;
    pdVar9 = pdVar7 + uVar10;
    do {
      lVar12 = lVar12 + -1;
      dVar15 = dVar15 + *pdVar9;
      pdVar9 = pdVar9 + 1;
    } while (lVar12 != 0);
  }
LAB_00528528:
  if (lVar6 < (long)uVar5) {
    uVar8 = uVar5 - (uVar13 + uVar11);
    if (3 < uVar8) {
      uVar10 = uVar8 & 0xfffffffffffffffc;
      lVar6 = lVar6 + uVar10;
      pdVar9 = pdVar7 + uVar13 + ((long)uVar14 >> 1) * 2 + 2;
      uVar13 = uVar10;
      do {
        pdVar1 = pdVar9 + -2;
        pdVar2 = pdVar9 + -1;
        pdVar3 = pdVar9 + 1;
        dVar16 = *pdVar9;
        uVar13 = uVar13 - 4;
        pdVar9 = pdVar9 + 4;
        dVar15 = dVar15 + *pdVar1 + *pdVar2 + dVar16 + *pdVar3;
      } while (uVar13 != 0);
      if (uVar8 == uVar10) goto LAB_005285a4;
    }
    do {
      pdVar9 = pdVar7 + lVar6;
      lVar6 = lVar6 + 1;
      dVar15 = dVar15 + *pdVar9;
    } while (lVar6 < (long)uVar5);
  }
LAB_005285a4:
  *param_2 = dVar15 + *param_2;
  return;
}


// ===== 00528640  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528644  FUN_00528644 =====

void FUN_00528644(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_007932c8;
  puVar1[1] = uVar2;
  return;
}


// ===== 0052867c  FUN_0052867c =====

void FUN_0052867c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_007932c8;
  param_2[1] = uVar1;
  return;
}


// ===== 00528694  FUN_00528694 =====

void FUN_00528694(void)

{
  return;
}


// ===== 00528698  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0052869c  FUN_0052869c =====

void FUN_0052869c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005286ac(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005286ac  FUN_005286ac =====

void FUN_005286ac(long *param_1,long param_2,long param_3)

{
  double *pdVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  double *pdVar28;
  double dVar29;
  double dVar30;
  
  lVar12 = *param_1;
  lVar10 = *(long *)(lVar12 + 0x10);
  lVar18 = *(long *)(lVar10 + 0xf0);
  lVar21 = 0;
  if (lVar18 != 0) {
    lVar21 = param_2 / lVar18;
  }
  if (-1 < lVar21) {
    plVar22 = (long *)(lVar10 + 0xc0);
    uVar16 = *(ulong *)(lVar10 + 0xb8);
    plVar11 = plVar22;
    if ((uVar16 & 1) != 0) {
      plVar11 = (long *)*plVar22;
    }
    lVar17 = param_3 - param_2;
    if (lVar17 != 0 && param_2 <= param_3) {
      lVar20 = param_2 - lVar21 * lVar18;
      lVar24 = *(long *)(lVar10 + 0xf8);
      uVar14 = *(ulong *)(lVar10 + 0x70);
      lVar4 = *(long *)(lVar12 + 0x18);
      lVar5 = *(long *)(lVar12 + 0x20);
      plVar2 = (long *)(lVar10 + 0x78);
      uVar13 = uVar14 >> 1;
      lVar25 = plVar11[lVar21] + lVar24 * lVar20;
      uVar19 = uVar16 >> 1;
      if ((uVar14 & 1) != 0) {
        if ((uVar16 & 1) != 0) {
LAB_00528a24:
          do {
            dVar29 = 0.0;
            if ((1 < uVar14) && (uVar16 = *(ulong *)(lVar12 + 8), 0 < (long)uVar16)) {
              uVar15 = *(ulong *)(lVar10 + 0xb0);
              plVar11 = (long *)*plVar2;
              plVar3 = plVar11 + uVar13;
              uVar26 = uVar15;
              if ((long)uVar15 <= (long)uVar16) {
                uVar26 = uVar16;
              }
              uVar6 = 0;
              if (uVar15 != 0) {
                uVar6 = (uVar26 - 1) / uVar15;
              }
              uVar6 = uVar6 + 1;
              uVar26 = uVar6 & 0xfffffffffffffffc;
              do {
                if (uVar6 < 4 || uVar15 != 1) {
                  lVar17 = 0;
LAB_00528ad8:
                  do {
                    lVar7 = lVar17 * 8;
                    lVar17 = lVar17 + uVar15;
                    dVar29 = dVar29 + *(double *)(lVar4 + lVar25 * 8 + *plVar11 * 8 + lVar7);
                  } while (lVar17 < (long)uVar16);
                }
                else {
                  pdVar28 = (double *)(lVar4 + 0x10 + lVar25 * 8 + *plVar11 * 8);
                  uVar27 = uVar26;
                  do {
                    pdVar1 = pdVar28 + -2;
                    pdVar8 = pdVar28 + -1;
                    pdVar9 = pdVar28 + 1;
                    dVar30 = *pdVar28;
                    uVar27 = uVar27 - 4;
                    pdVar28 = pdVar28 + 4;
                    dVar29 = dVar29 + *pdVar1 + *pdVar8 + dVar30 + *pdVar9;
                  } while (uVar27 != 0);
                  lVar17 = uVar26 * uVar15;
                  if (uVar6 != uVar26) goto LAB_00528ad8;
                }
                plVar11 = plVar11 + 1;
              } while (plVar11 != plVar3);
            }
            lVar20 = lVar20 + 1;
            *(double *)(lVar5 + param_2 * 8) = dVar29;
            if (lVar18 <= lVar20) {
              lVar17 = lVar21 + 1;
              if (lVar17 < (long)uVar19) {
                if (lVar21 == -2 || lVar21 + 2 < 0 != SCARRY8(lVar21,2)) goto LAB_00528770;
                lVar25 = *(long *)(*plVar22 + lVar17 * 8);
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar17;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_00528a24;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
LAB_005287c0:
        do {
          dVar29 = 0.0;
          if ((1 < uVar14) && (uVar16 = *(ulong *)(lVar12 + 8), 0 < (long)uVar16)) {
            uVar15 = *(ulong *)(lVar10 + 0xb0);
            plVar11 = (long *)*plVar2;
            plVar3 = plVar11 + uVar13;
            uVar26 = uVar15;
            if ((long)uVar15 <= (long)uVar16) {
              uVar26 = uVar16;
            }
            uVar6 = 0;
            if (uVar15 != 0) {
              uVar6 = (uVar26 - 1) / uVar15;
            }
            uVar6 = uVar6 + 1;
            uVar26 = uVar6 & 0xfffffffffffffffc;
            do {
              if (uVar6 < 4 || uVar15 != 1) {
                lVar17 = 0;
LAB_00528874:
                do {
                  lVar7 = lVar17 * 8;
                  lVar17 = lVar17 + uVar15;
                  dVar29 = dVar29 + *(double *)(lVar4 + lVar25 * 8 + *plVar11 * 8 + lVar7);
                } while (lVar17 < (long)uVar16);
              }
              else {
                pdVar28 = (double *)(lVar4 + 0x10 + lVar25 * 8 + *plVar11 * 8);
                uVar27 = uVar26;
                do {
                  pdVar1 = pdVar28 + -2;
                  pdVar8 = pdVar28 + -1;
                  pdVar9 = pdVar28 + 1;
                  dVar30 = *pdVar28;
                  uVar27 = uVar27 - 4;
                  pdVar28 = pdVar28 + 4;
                  dVar29 = dVar29 + *pdVar1 + *pdVar8 + dVar30 + *pdVar9;
                } while (uVar27 != 0);
                lVar17 = uVar26 * uVar15;
                if (uVar6 != uVar26) goto LAB_00528874;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar3);
          }
          lVar20 = lVar20 + 1;
          *(double *)(lVar5 + param_2 * 8) = dVar29;
          if (lVar18 <= lVar20) {
            lVar17 = lVar21 + 1;
            if (lVar17 < (long)uVar19) {
              if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00528770;
              lVar25 = plVar22[lVar17];
            }
            lVar20 = 0;
            param_2 = param_2 + 1;
            lVar21 = lVar17;
            if (param_2 == param_3) {
              return;
            }
            goto LAB_005287c0;
          }
          lVar25 = lVar25 + lVar24;
          param_2 = param_2 + 1;
          if (param_2 == param_3) {
            return;
          }
        } while( true );
      }
      if (uVar14 < 2) {
        puVar23 = (undefined8 *)(lVar5 + param_2 * 8);
        do {
          lVar20 = lVar20 + 1;
          *puVar23 = 0;
          lVar10 = lVar21;
          if (lVar18 <= lVar20) {
            lVar10 = lVar21 + 1;
            lVar20 = 0;
            if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1))) goto LAB_00528770;
          }
          lVar21 = lVar10;
          lVar17 = lVar17 + -1;
          puVar23 = puVar23 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar14 = *(ulong *)(lVar12 + 8);
        if (0 < (long)uVar14) {
          uVar15 = *(ulong *)(lVar10 + 0xb0);
          uVar26 = uVar15;
          if ((long)uVar15 <= (long)uVar14) {
            uVar26 = uVar14;
          }
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = (uVar26 - 1) / uVar15;
          }
          uVar6 = uVar6 + 1;
          uVar26 = uVar6 & 0xfffffffffffffffc;
LAB_0052892c:
          do {
            dVar29 = 0.0;
            plVar11 = plVar2;
            do {
              if (uVar6 < 4 || uVar15 != 1) {
                lVar12 = 0;
LAB_0052899c:
                do {
                  lVar17 = lVar12 * 8;
                  lVar12 = lVar12 + uVar15;
                  dVar29 = dVar29 + *(double *)(lVar4 + lVar25 * 8 + *plVar11 * 8 + lVar17);
                } while (lVar12 < (long)uVar14);
              }
              else {
                pdVar28 = (double *)(lVar4 + 0x10 + lVar25 * 8 + *plVar11 * 8);
                uVar27 = uVar26;
                do {
                  pdVar1 = pdVar28 + -2;
                  pdVar8 = pdVar28 + -1;
                  pdVar9 = pdVar28 + 1;
                  dVar30 = *pdVar28;
                  uVar27 = uVar27 - 4;
                  pdVar28 = pdVar28 + 4;
                  dVar29 = dVar29 + *pdVar1 + *pdVar8 + dVar30 + *pdVar9;
                } while (uVar27 != 0);
                lVar12 = uVar26 * uVar15;
                if (uVar6 != uVar26) goto LAB_0052899c;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != (long *)(lVar10 + uVar13 * 8 + 0x78));
            lVar20 = lVar20 + 1;
            *(double *)(lVar5 + param_2 * 8) = dVar29;
            if (lVar18 <= lVar20) {
              lVar12 = lVar21 + 1;
              if (lVar12 < (long)uVar19) {
                if (lVar21 + 1 < 0 != SCARRY8(lVar21,1)) goto LAB_00528770;
                plVar11 = plVar22;
                if ((uVar16 & 1) != 0) {
                  plVar11 = (long *)*plVar22;
                }
                lVar25 = plVar11[lVar12];
              }
              lVar20 = 0;
              param_2 = param_2 + 1;
              lVar21 = lVar12;
              if (param_2 == param_3) {
                return;
              }
              goto LAB_0052892c;
            }
            lVar25 = lVar25 + lVar24;
            param_2 = param_2 + 1;
            if (param_2 == param_3) {
              return;
            }
          } while( true );
        }
        puVar23 = (undefined8 *)(lVar5 + param_2 * 8);
        if ((uVar16 & 1) == 0) {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar18 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00528770;
            }
            lVar21 = lVar10;
            lVar17 = lVar17 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar17 != 0);
        }
        else {
          do {
            lVar20 = lVar20 + 1;
            *puVar23 = 0;
            lVar10 = lVar21;
            if (lVar18 <= lVar20) {
              lVar10 = lVar21 + 1;
              lVar20 = 0;
              if ((lVar10 < (long)uVar19) && (lVar21 + 1 < 0 != SCARRY8(lVar21,1)))
              goto LAB_00528770;
            }
            lVar21 = lVar10;
            lVar17 = lVar17 + -1;
            puVar23 = puVar23 + 1;
          } while (lVar17 != 0);
        }
      }
    }
    return;
  }
LAB_00528770:
  plVar11 = (long *)FUN_00753a74(8);
  *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 00528be0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528be4  FUN_00528be4 =====

void FUN_00528be4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_00793310;
  puVar1[3] = uVar2;
  return;
}


// ===== 00528c28  FUN_00528c28 =====

void FUN_00528c28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00793310;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 00528c4c  FUN_00528c4c =====

void FUN_00528c4c(void)

{
  return;
}


// ===== 00528c50  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528c54  FUN_00528c54 =====

void FUN_00528c54(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar12 = *param_2;
  lVar13 = *param_3;
  if (lVar12 < lVar13) {
    lVar14 = *(long *)(param_1 + 8);
    lVar15 = *(long *)(param_1 + 0x18);
    lVar16 = lVar12 << 3;
    do {
      uVar17 = *(ulong *)(param_1 + 0x10);
      if ((long)uVar17 < 0) {
        plVar9 = (long *)FUN_00753a74(8);
        *plVar9 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar9,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      if (uVar17 == 0) {
        lVar5 = 0;
      }
      else {
        plVar9 = (long *)(lVar14 + uVar17 * lVar12 * 8);
        uVar6 = (ulong)plVar9 >> 3 & 1;
        if (((ulong)plVar9 & 7) != 0) {
          uVar6 = uVar17;
        }
        uVar4 = uVar17 - uVar6;
        uVar10 = uVar4;
        uVar7 = uVar4;
        if ((long)uVar17 < (long)uVar6) {
          uVar10 = uVar4 + 1;
          uVar7 = uVar4 + 3;
        }
        if (uVar4 + 1 < 3) {
          lVar5 = *plVar9;
          uVar6 = uVar17 - 1;
          if (uVar6 != 0) {
            if (uVar17 < 5) {
              uVar4 = 1;
            }
            else {
              lVar18 = 0;
              plVar9 = (long *)(lVar14 + 0x18 + uVar17 * lVar16);
              lVar19 = 0;
              lVar21 = 0;
              uVar7 = uVar6 & 0xfffffffffffffffc;
              uVar4 = uVar7 | 1;
              uVar10 = uVar7;
              do {
                plVar11 = plVar9 + -2;
                plVar1 = plVar9 + -1;
                plVar2 = plVar9 + 1;
                lVar20 = *plVar9;
                uVar10 = uVar10 - 4;
                plVar9 = plVar9 + 4;
                lVar5 = *plVar11 + lVar5;
                lVar18 = *plVar1 + lVar18;
                lVar19 = lVar20 + lVar19;
                lVar21 = *plVar2 + lVar21;
              } while (uVar10 != 0);
              lVar5 = lVar19 + lVar5 + lVar21 + lVar18;
              if (uVar6 == uVar7) goto LAB_00528c8c;
            }
            lVar18 = uVar17 - uVar4;
            plVar9 = (long *)(lVar14 + uVar17 * lVar16 + uVar4 * 8);
            do {
              lVar18 = lVar18 + -1;
              lVar5 = *plVar9 + lVar5;
              plVar9 = plVar9 + 1;
            } while (lVar18 != 0);
          }
        }
        else {
          plVar11 = plVar9 + uVar6;
          uVar8 = uVar10 & 0xfffffffffffffffe;
          lVar19 = plVar11[1];
          lVar18 = *plVar11;
          if (3 < (long)uVar4) {
            lVar20 = plVar11[3];
            lVar21 = plVar11[2];
            lVar5 = (uVar7 & 0xfffffffffffffffc) + uVar6;
            if (7 < uVar4) {
              lVar23 = uVar6 + 4;
              plVar11 = (long *)(lVar14 + 0x30 + uVar17 * lVar16 + uVar6 * 8);
              do {
                plVar1 = plVar11 + -2;
                plVar2 = plVar11 + -1;
                plVar3 = plVar11 + 1;
                lVar22 = *plVar11;
                lVar23 = lVar23 + 4;
                plVar11 = plVar11 + 4;
                lVar18 = *plVar1 + lVar18;
                lVar19 = *plVar2 + lVar19;
                lVar21 = lVar22 + lVar21;
                lVar20 = *plVar3 + lVar20;
              } while (lVar23 < lVar5);
            }
            lVar18 = lVar18 + lVar21;
            lVar19 = lVar19 + lVar20;
            if ((long)(uVar7 & 0xfffffffffffffffc) < (long)uVar8) {
              lVar18 = plVar9[lVar5] + lVar18;
              lVar19 = (plVar9 + lVar5)[1] + lVar19;
            }
          }
          lVar5 = lVar18 + lVar19;
          if (0 < (long)uVar6) {
            if (uVar6 < 4) {
              uVar7 = 0;
            }
            else {
              plVar9 = (long *)(lVar14 + 0x10 + uVar17 * lVar16);
              uVar7 = uVar6 & 0x7ffffffffffffffc;
              lVar18 = lVar18 + lVar19;
              lVar19 = 0;
              lVar21 = 0;
              lVar5 = 0;
              uVar4 = uVar7;
              do {
                plVar11 = plVar9 + -2;
                plVar1 = plVar9 + -1;
                plVar2 = plVar9 + 1;
                lVar20 = *plVar9;
                uVar4 = uVar4 - 4;
                plVar9 = plVar9 + 4;
                lVar18 = *plVar11 + lVar18;
                lVar5 = *plVar1 + lVar5;
                lVar19 = lVar20 + lVar19;
                lVar21 = *plVar2 + lVar21;
              } while (uVar4 != 0);
              lVar5 = lVar19 + lVar18 + lVar21 + lVar5;
              if (uVar6 == uVar7) goto LAB_00528dec;
            }
            lVar18 = uVar6 - uVar7;
            plVar9 = (long *)(lVar14 + uVar17 * lVar16 + uVar7 * 8);
            do {
              lVar18 = lVar18 + -1;
              lVar5 = *plVar9 + lVar5;
              plVar9 = plVar9 + 1;
            } while (lVar18 != 0);
          }
LAB_00528dec:
          lVar18 = uVar8 + uVar6;
          if (lVar18 < (long)uVar17) {
            uVar4 = uVar17 - (uVar6 + uVar8);
            if (3 < uVar4) {
              lVar19 = 0;
              lVar21 = 0;
              lVar20 = 0;
              uVar7 = uVar4 & 0xfffffffffffffffc;
              lVar18 = lVar18 + uVar7;
              plVar9 = (long *)(lVar14 + 0x10 +
                               uVar17 * lVar16 + ((long)uVar10 >> 1) * 0x10 + uVar6 * 8);
              uVar6 = uVar7;
              do {
                plVar11 = plVar9 + -2;
                plVar1 = plVar9 + -1;
                plVar2 = plVar9 + 1;
                lVar23 = *plVar9;
                uVar6 = uVar6 - 4;
                plVar9 = plVar9 + 4;
                lVar5 = *plVar11 + lVar5;
                lVar19 = *plVar1 + lVar19;
                lVar21 = lVar23 + lVar21;
                lVar20 = *plVar2 + lVar20;
              } while (uVar6 != 0);
              lVar5 = lVar21 + lVar5 + lVar20 + lVar19;
              if (uVar4 == uVar7) goto LAB_00528c8c;
            }
            do {
              lVar19 = lVar18 * 8;
              lVar18 = lVar18 + 1;
              lVar5 = *(long *)(lVar14 + uVar17 * lVar16 + lVar19) + lVar5;
            } while (lVar18 < (long)uVar17);
          }
        }
      }
LAB_00528c8c:
      *(long *)(lVar15 + lVar12 * 8) = lVar5;
      lVar12 = lVar12 + 1;
      lVar16 = lVar16 + 8;
    } while (lVar12 != lVar13);
  }
  return;
}


// ===== 00528f1c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528f20  FUN_00528f20 =====

void FUN_00528f20(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x28);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_00793358;
  puVar1[4] = uVar4;
  puVar1[3] = uVar3;
  return;
}


// ===== 00528f64  FUN_00528f64 =====

void FUN_00528f64(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_00793358;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar1;
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  return;
}


// ===== 00528f88  FUN_00528f88 =====

void FUN_00528f88(void)

{
  return;
}


// ===== 00528f8c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00528f90  FUN_00528f90 =====

void FUN_00528f90(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  
  if (1 < *(long *)(param_1 + 0x20)) {
    lVar14 = *param_2;
    lVar15 = *param_3;
    lVar13 = 0;
    lVar18 = 1;
    lVar19 = 8;
    lVar16 = lVar14 * 8;
    uVar17 = lVar15 - lVar14;
    lVar1 = lVar16 + 0x10;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      lVar12 = lVar13 * 8 + 8;
      uVar20 = lVar2 + lVar16;
      uVar7 = uVar20 >> 3 & 1;
      if ((long)uVar17 <= (long)uVar7) {
        uVar7 = uVar17;
      }
      if ((uVar20 & 7) != 0) {
        uVar7 = uVar17;
      }
      lVar8 = *(long *)(param_1 + 8);
      uVar4 = uVar17 - uVar7;
      uVar10 = uVar4;
      if ((long)uVar17 < (long)uVar7) {
        uVar10 = uVar4 + 1;
      }
      if (0 < (long)uVar7) {
        if ((uVar7 < 4) ||
           ((uVar20 < lVar8 + lVar16 + lVar3 * lVar12 + uVar7 * 8 &&
            ((ulong)(lVar8 + lVar3 * lVar18 * 8 + lVar16) < lVar2 + lVar16 + uVar7 * 8)))) {
          uVar20 = 0;
        }
        else {
          plVar22 = (long *)(lVar8 + lVar1 + lVar3 * lVar19);
          plVar9 = (long *)(lVar2 + lVar1);
          uVar20 = uVar7 & 0x7ffffffffffffffc;
          uVar23 = uVar20;
          do {
            uVar23 = uVar23 - 4;
            plVar5 = plVar22 + -1;
            lVar21 = plVar22[-2];
            lVar24 = plVar22[1];
            lVar11 = *plVar22;
            plVar22 = plVar22 + 4;
            plVar9[-1] = plVar9[-1] + *plVar5;
            plVar9[-2] = plVar9[-2] + lVar21;
            plVar9[1] = plVar9[1] + lVar24;
            *plVar9 = *plVar9 + lVar11;
            plVar9 = plVar9 + 4;
          } while (uVar23 != 0);
          if (uVar7 == uVar20) goto LAB_00529098;
        }
        lVar21 = uVar7 - uVar20;
        plVar22 = (long *)(lVar8 + lVar16 + uVar20 * 8 + lVar3 * lVar19);
        plVar9 = (long *)(lVar2 + lVar16 + uVar20 * 8);
        do {
          lVar21 = lVar21 + -1;
          *plVar9 = *plVar9 + *plVar22;
          plVar22 = plVar22 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar21 != 0);
      }
LAB_00529098:
      lVar21 = (uVar10 & 0xfffffffffffffffe) + uVar7;
      if (1 < (long)uVar4) {
        plVar22 = (long *)(lVar8 + lVar16 + uVar7 * 8 + lVar3 * lVar19);
        plVar9 = (long *)(lVar2 + lVar16 + uVar7 * 8);
        uVar20 = uVar7;
        do {
          lVar11 = *plVar22;
          uVar20 = uVar20 + 2;
          plVar9[1] = plVar9[1] + plVar22[1];
          *plVar9 = *plVar9 + lVar11;
          plVar22 = plVar22 + 2;
          plVar9 = plVar9 + 2;
        } while ((long)uVar20 < lVar21);
      }
      if (lVar21 < (long)uVar17) {
        uVar20 = lVar15 - (lVar14 + uVar7 + (uVar10 & 0xfffffffffffffffe));
        if (5 < uVar20) {
          lVar12 = lVar3 * lVar12;
          lVar11 = ((long)uVar10 >> 1) * 0x10;
          if (((ulong)(lVar8 + lVar15 * 8 + lVar12) <= lVar2 + lVar16 + lVar11 + uVar7 * 8) ||
             ((ulong)(lVar2 + lVar15 * 8) <= lVar8 + lVar16 + lVar11 + uVar7 * 8 + lVar12)) {
            lVar11 = lVar11 + uVar7 * 8;
            uVar10 = uVar20 & 0xfffffffffffffffc;
            lVar21 = lVar21 + uVar10;
            plVar9 = (long *)(lVar2 + lVar1 + lVar11);
            plVar22 = (long *)(lVar8 + lVar1 + lVar11 + lVar3 * lVar19);
            uVar7 = uVar10;
            do {
              uVar7 = uVar7 - 4;
              plVar5 = plVar22 + -1;
              lVar12 = plVar22[-2];
              lVar24 = plVar22[1];
              lVar11 = *plVar22;
              plVar22 = plVar22 + 4;
              plVar9[-1] = plVar9[-1] + *plVar5;
              plVar9[-2] = plVar9[-2] + lVar12;
              plVar9[1] = plVar9[1] + lVar24;
              *plVar9 = *plVar9 + lVar11;
              plVar9 = plVar9 + 4;
            } while (uVar7 != 0);
            if (uVar20 == uVar10) goto LAB_00528fd4;
          }
        }
        lVar12 = (lVar14 - lVar15) + lVar21;
        plVar22 = (long *)(lVar8 + lVar16 + lVar21 * 8 + lVar3 * lVar19);
        plVar9 = (long *)(lVar2 + lVar16 + lVar21 * 8);
        do {
          bVar6 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          *plVar9 = *plVar9 + *plVar22;
          plVar22 = plVar22 + 1;
          plVar9 = plVar9 + 1;
        } while (bVar6);
      }
LAB_00528fd4:
      lVar18 = lVar18 + 1;
      lVar13 = lVar13 + 1;
      lVar19 = lVar19 + 8;
    } while (lVar18 < *(long *)(param_1 + 0x20));
  }
  return;
}


// ===== 00529220  FUN_00529220 =====

void FUN_00529220(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2438 + 0x10);
  if (__ptr != (void *)0x0) {
    param_1[2] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00529248  FUN_00529248 =====

void FUN_00529248(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007933a0;
  if (__ptr != (void *)0x0) {
    param_1[2] = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0052928c  FUN_0052928c =====

long * FUN_0052928c(long param_1)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar2 = (long *)FUN_00759c3c(0x58);
  puVar1 = PTR_DAT_007a2438;
  __src = *(void **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  __n = lVar3 - (long)__src;
  *plVar2 = (long)(puVar1 + 0x10);
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00529330 to 00529337 has its CatchHandler @ 00529338 */
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(plVar2 + 1);
    }
                    /* try { // try from 005292dc to 005292e3 has its CatchHandler @ 00529338 */
    __dest = (void *)FUN_00759c3c(__n);
    plVar2[1] = (long)__dest;
    plVar2[3] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    plVar2[2] = (long)__dest + __n;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x48);
  lVar7 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x50);
  plVar2[5] = *(long *)(param_1 + 0x28);
  plVar2[4] = lVar4;
  plVar2[7] = lVar6;
  plVar2[6] = lVar5;
  plVar2[9] = lVar8;
  plVar2[8] = lVar7;
  plVar2[10] = lVar3;
  return plVar2;
}


// ===== 00529360  FUN_00529360 =====

void FUN_00529360(long param_1,long *param_2)

{
  void *__src;
  size_t __n;
  undefined *puVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_2[3] = 0;
  param_2[1] = 0;
  puVar1 = PTR_DAT_007a2438;
  param_2[2] = 0;
  __src = *(void **)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  *param_2 = (long)(puVar1 + 0x10);
  __n = lVar2 - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 005293fc to 00529403 has its CatchHandler @ 00529404 */
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(param_2 + 1);
    }
                    /* try { // try from 005293ac to 005293b3 has its CatchHandler @ 00529404 */
    __dest = (void *)FUN_00759c3c(__n);
    param_2[1] = (long)__dest;
    param_2[2] = (long)__dest;
    param_2[3] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_2[2] = (long)__dest + __n;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x20);
  param_2[10] = *(long *)(param_1 + 0x50);
  param_2[7] = lVar7;
  param_2[6] = lVar6;
  param_2[9] = lVar3;
  param_2[8] = lVar2;
  param_2[5] = lVar5;
  param_2[4] = lVar4;
  return;
}


// ===== 00529424  FUN_00529424 =====

void FUN_00529424(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x10) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 0052943c  FUN_0052943c =====

void FUN_0052943c(void *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)((long)param_1 + 8);
  if (__ptr != (void *)0x0) {
    *(void **)((long)param_1 + 0x10) = __ptr;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00529470  FUN_00529470 =====

void FUN_00529470(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if (lVar1 < lVar2) {
    do {
      if (*(ulong *)(param_1 + 0x28) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      FUN_005f36c8(1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),
                   *(undefined8 *)(param_1 + 8),
                   *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x38) * lVar1 * 8,
                   *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40) * lVar1 * 8,0);
      lVar1 = lVar1 + 1;
    } while (lVar2 != lVar1);
  }
  return;
}


// ===== 005294f4  FUN_005294f4 =====

void FUN_005294f4(void)

{
  return;
}


// ===== 005294f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005294fc  FUN_005294fc =====

void FUN_005294fc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_007933e8;
  return;
}


// ===== 00529524  FUN_00529524 =====

void FUN_00529524(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_007933e8;
  return;
}


// ===== 00529538  FUN_00529538 =====

void FUN_00529538(void)

{
  return;
}


// ===== 0052953c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00529540  FUN_00529540 =====

undefined8 FUN_00529540(void)

{
  return 0;
}


// ===== 00529548  FUN_00529548 =====

void FUN_00529548(void)

{
  return;
}


// ===== 0052954c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00529550  FUN_00529550 =====

void FUN_00529550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = &PTR_FUN_00793430;
  return;
}


// ===== 00529578  FUN_00529578 =====

void FUN_00529578(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00793430;
  return;
}


// ===== 0052958c  FUN_0052958c =====

void FUN_0052958c(void)

{
  return;
}


// ===== 00529590  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00529594  FUN_00529594 =====

void FUN_00529594(undefined8 param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar4 = *param_4;
  if ((long)uVar4 < 0) {
    plVar6 = (long *)FUN_00753a74(8);
    *plVar6 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar6,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  if (uVar4 == 0) {
    *param_2 = *param_2;
    return;
  }
  plVar6 = (long *)*param_3;
  uVar12 = (ulong)plVar6 >> 3 & 1;
  if (((ulong)plVar6 & 7) != 0) {
    uVar12 = uVar4;
  }
  uVar7 = uVar4 - uVar12;
  uVar13 = uVar7;
  uVar9 = uVar7;
  if ((long)uVar4 < (long)uVar12) {
    uVar13 = uVar7 + 1;
    uVar9 = uVar7 + 3;
  }
  if (uVar7 + 1 < 3) {
    lVar11 = *plVar6;
    uVar12 = uVar4 - 1;
    if (uVar12 != 0) {
      if (uVar4 < 5) {
        uVar7 = 1;
      }
      else {
        lVar5 = 0;
        lVar14 = 0;
        lVar16 = 0;
        uVar9 = uVar12 & 0xfffffffffffffffc;
        uVar7 = uVar9 | 1;
        plVar8 = plVar6 + 3;
        uVar13 = uVar9;
        do {
          plVar1 = plVar8 + -2;
          plVar2 = plVar8 + -1;
          plVar3 = plVar8 + 1;
          lVar15 = *plVar8;
          uVar13 = uVar13 - 4;
          plVar8 = plVar8 + 4;
          lVar11 = *plVar1 + lVar11;
          lVar5 = *plVar2 + lVar5;
          lVar14 = lVar15 + lVar14;
          lVar16 = *plVar3 + lVar16;
        } while (uVar13 != 0);
        lVar11 = lVar14 + lVar11 + lVar16 + lVar5;
        if (uVar12 == uVar9) goto LAB_00529770;
      }
      lVar5 = uVar4 - uVar7;
      plVar6 = plVar6 + uVar7;
      do {
        lVar5 = lVar5 + -1;
        lVar11 = *plVar6 + lVar11;
        plVar6 = plVar6 + 1;
      } while (lVar5 != 0);
    }
    goto LAB_00529770;
  }
  plVar8 = plVar6 + uVar12;
  uVar10 = uVar13 & 0xfffffffffffffffe;
  lVar14 = plVar8[1];
  lVar5 = *plVar8;
  if (3 < (long)uVar7) {
    lVar15 = plVar8[3];
    lVar16 = plVar8[2];
    lVar11 = (uVar9 & 0xfffffffffffffffc) + uVar12;
    if (7 < uVar7) {
      lVar18 = uVar12 + 4;
      plVar8 = plVar8 + 6;
      do {
        plVar1 = plVar8 + -2;
        plVar2 = plVar8 + -1;
        plVar3 = plVar8 + 1;
        lVar17 = *plVar8;
        lVar18 = lVar18 + 4;
        plVar8 = plVar8 + 4;
        lVar5 = *plVar1 + lVar5;
        lVar14 = *plVar2 + lVar14;
        lVar16 = lVar17 + lVar16;
        lVar15 = *plVar3 + lVar15;
      } while (lVar18 < lVar11);
    }
    lVar5 = lVar5 + lVar16;
    lVar14 = lVar14 + lVar15;
    if ((long)(uVar9 & 0xfffffffffffffffc) < (long)uVar10) {
      lVar5 = plVar6[lVar11] + lVar5;
      lVar14 = (plVar6 + lVar11)[1] + lVar14;
    }
  }
  lVar11 = lVar5 + lVar14;
  lVar16 = uVar10 + uVar12;
  if (0 < (long)uVar12) {
    if (uVar12 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar12 & 0x7ffffffffffffffc;
      plVar8 = plVar6 + 2;
      lVar5 = lVar5 + lVar14;
      lVar14 = 0;
      lVar15 = 0;
      lVar11 = 0;
      uVar7 = uVar9;
      do {
        plVar1 = plVar8 + -2;
        plVar2 = plVar8 + -1;
        plVar3 = plVar8 + 1;
        lVar18 = *plVar8;
        uVar7 = uVar7 - 4;
        plVar8 = plVar8 + 4;
        lVar5 = *plVar1 + lVar5;
        lVar11 = *plVar2 + lVar11;
        lVar14 = lVar18 + lVar14;
        lVar15 = *plVar3 + lVar15;
      } while (uVar7 != 0);
      lVar11 = lVar14 + lVar5 + lVar15 + lVar11;
      if (uVar12 == uVar9) goto LAB_005296ec;
    }
    lVar5 = uVar12 - uVar9;
    plVar8 = plVar6 + uVar9;
    do {
      lVar5 = lVar5 + -1;
      lVar11 = *plVar8 + lVar11;
      plVar8 = plVar8 + 1;
    } while (lVar5 != 0);
  }
LAB_005296ec:
  if (lVar16 < (long)uVar4) {
    uVar7 = uVar4 - (uVar12 + uVar10);
    if (3 < uVar7) {
      lVar5 = 0;
      lVar14 = 0;
      lVar15 = 0;
      uVar9 = uVar7 & 0xfffffffffffffffc;
      lVar16 = lVar16 + uVar9;
      plVar8 = plVar6 + uVar12 + ((long)uVar13 >> 1) * 2 + 2;
      uVar12 = uVar9;
      do {
        plVar1 = plVar8 + -2;
        plVar2 = plVar8 + -1;
        plVar3 = plVar8 + 1;
        lVar18 = *plVar8;
        uVar12 = uVar12 - 4;
        plVar8 = plVar8 + 4;
        lVar11 = *plVar1 + lVar11;
        lVar5 = *plVar2 + lVar5;
        lVar14 = lVar18 + lVar14;
        lVar15 = *plVar3 + lVar15;
      } while (uVar12 != 0);
      lVar11 = lVar14 + lVar11 + lVar15 + lVar5;
      if (uVar7 == uVar9) goto LAB_00529770;
    }
    do {
      plVar8 = plVar6 + lVar16;
      lVar16 = lVar16 + 1;
      lVar11 = *plVar8 + lVar11;
    } while (lVar16 < (long)uVar4);
  }
LAB_00529770:
  *param_2 = *param_2 + lVar11;
  return;
}


// ===== 00529814  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00529818  FUN_00529818 =====

void FUN_00529818(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00793478;
  puVar1[1] = uVar2;
  return;
}


// ===== 00529850  FUN_00529850 =====

void FUN_00529850(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00793478;
  param_2[1] = uVar1;
  return;
}


// ===== 00529868  FUN_00529868 =====

void FUN_00529868(void)

{
  return;
}


// ===== 0052986c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00529870  FUN_00529870 =====

void FUN_00529870(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00529880(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00529880  FUN_00529880 =====

void FUN_00529880(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar14 = *param_1;
  lVar15 = *(long *)(lVar14 + 0x10);
  lVar16 = *(long *)(lVar15 + 0xf0);
  lVar8 = 0;
  if (lVar16 != 0) {
    lVar8 = param_2 / lVar16;
  }
  if (-1 < lVar8) {
    if (param_2 < param_3) {
      lVar16 = param_2 - lVar8 * lVar16;
      plVar10 = (long *)(lVar15 + 0xc0);
      plVar9 = plVar10;
      if ((*(byte *)(lVar15 + 0xb8) & 1) != 0) {
        plVar9 = *(long **)(lVar15 + 0xc0);
      }
      lVar17 = plVar9[lVar8] + *(long *)(lVar15 + 0xf8) * lVar16;
      lVar3 = *(long *)(lVar14 + 0x18);
      lVar4 = *(long *)(lVar14 + 0x20);
      do {
        uVar13 = *(ulong *)(lVar15 + 0x70);
        plVar9 = (long *)(lVar15 + 0x78);
        if ((uVar13 & 1) != 0) {
          plVar9 = *(long **)(lVar15 + 0x78);
        }
        if ((uVar13 < 2) || (uVar11 = *(ulong *)(lVar14 + 8), (long)uVar11 < 1)) {
          lVar18 = 0;
        }
        else {
          uVar12 = *(ulong *)(lVar15 + 0xb0);
          lVar18 = 0;
          plVar2 = plVar9 + (uVar13 >> 1);
          uVar13 = uVar12;
          if ((long)uVar12 <= (long)uVar11) {
            uVar13 = uVar11;
          }
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = (uVar13 - 1) / uVar12;
          }
          uVar5 = uVar5 + 1;
          uVar13 = uVar5 & 0xfffffffffffffffc;
          do {
            if (uVar5 < 4 || uVar12 != 1) {
              lVar21 = 0;
LAB_005299cc:
              do {
                lVar22 = lVar21 * 8;
                lVar21 = lVar21 + uVar12;
                lVar18 = *(long *)(lVar3 + lVar17 * 8 + *plVar9 * 8 + lVar22) + lVar18;
              } while (lVar21 < (long)uVar11);
            }
            else {
              lVar21 = 0;
              lVar22 = 0;
              lVar23 = 0;
              plVar19 = (long *)(lVar3 + 0x10 + lVar17 * 8 + *plVar9 * 8);
              uVar20 = uVar13;
              do {
                plVar1 = plVar19 + -2;
                plVar6 = plVar19 + -1;
                plVar7 = plVar19 + 1;
                lVar24 = *plVar19;
                uVar20 = uVar20 - 4;
                plVar19 = plVar19 + 4;
                lVar18 = *plVar1 + lVar18;
                lVar21 = *plVar6 + lVar21;
                lVar22 = lVar24 + lVar22;
                lVar23 = *plVar7 + lVar23;
              } while (uVar20 != 0);
              lVar18 = lVar22 + lVar18 + lVar23 + lVar21;
              lVar21 = uVar13 * uVar12;
              if (uVar5 != uVar13) goto LAB_005299cc;
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar2);
        }
        *(long *)(lVar4 + param_2 * 8) = lVar18;
        lVar16 = lVar16 + 1;
        if (lVar16 < *(long *)(lVar15 + 0xf0)) {
          lVar17 = *(long *)(lVar15 + 0xf8) + lVar17;
        }
        else {
          lVar18 = lVar8 + 1;
          if (lVar18 < (long)(*(ulong *)(lVar15 + 0xb8) >> 1)) {
            if (lVar8 == -2 || lVar8 + 2 < 0 != SCARRY8(lVar8,2)) goto LAB_00529a50;
            lVar16 = 0;
            plVar9 = plVar10;
            if ((*(ulong *)(lVar15 + 0xb8) & 1) != 0) {
              plVar9 = (long *)*plVar10;
            }
            lVar17 = plVar9[lVar18];
            lVar8 = lVar18;
          }
          else {
            lVar16 = 0;
            lVar8 = lVar18;
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 != param_3);
    }
    return;
  }
LAB_00529a50:
  plVar10 = (long *)FUN_00753a74(8);
  *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
}


// ===== 00529a7c  FUN_00529a7c =====

void FUN_00529a7c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*param_1 + 0x70))();
  if (lVar2 != 0) {
                    /* try { // try from 00529ab8 to 00529abb has its CatchHandler @ 00529ae4 */
    FUN_0048537c();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529c4c  FUN_00529c4c =====

void FUN_00529c4c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  undefined8 *local_88;
  undefined *local_80;
  code *pcStack_78;
  undefined **local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_88 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar6 = DAT_001b7148;
  local_88[0x1e] = 0;
  local_88[0xd] = 0;
  local_88[0xc] = 0;
  local_88[0xf] = 0;
  local_88[0xe] = 0;
  puVar5 = local_88 + 0x18;
  local_88[0x19] = 0;
  *puVar5 = 0;
  *(undefined4 *)(local_88 + 0xe) = 0x3f800000;
  local_88[1] = 0;
  *local_88 = 0;
  local_88[3] = 0;
  local_88[2] = 0;
  local_88[5] = 0;
  local_88[4] = 0;
  local_88[7] = 0;
  local_88[6] = 0;
  local_88[9] = 0;
  local_88[8] = 0;
  local_88[0xb] = 0;
  local_88[10] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x15] = 0;
  local_88[0x14] = 0;
  local_88[0x17] = 0;
  local_88[0x16] = 0;
  local_88[0x1b] = 0;
  local_88[0x1a] = 0;
  local_88[0x1d] = 0;
  local_88[0x1c] = 0;
  local_88[3] = uVar6;
  *puVar5 = 0;
  *(undefined1 *)(local_88 + 0x15) = 0;
  local_88[0x14] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0xf] = 0;
  local_88[0x17] = puVar5;
  local_88[0x1c] = 0;
  local_88[0x1b] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = local_88 + 0x1b;
                    /* try { // try from 00529ce8 to 00529ceb has its CatchHandler @ 00529f00 */
  puVar5 = (undefined8 *)FUN_00578870();
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  pvVar2 = (void *)*puVar5;
  sVar3 = puVar5[1] - (long)pvVar2;
  if (sVar3 == 0) {
LAB_00529d28:
                    /* try { // try from 00529d28 to 00529d43 has its CatchHandler @ 00529f40 */
    uVar6 = FUN_00583ae0(&local_88,&DAT_001cabab,&local_a0);
    puVar5 = (undefined8 *)FUN_00578164();
    local_b8 = (void *)0x0;
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    pvVar2 = (void *)*puVar5;
    sVar3 = puVar5[1] - (long)pvVar2;
    if (sVar3 != 0) {
      if ((long)sVar3 < 0) goto LAB_00529ed8;
                    /* try { // try from 00529d5c to 00529d63 has its CatchHandler @ 00529f08 */
      local_b8 = (void *)FUN_00759c3c(sVar3);
      pvVar1 = (void *)((long)local_b8 + sVar3);
      local_b0 = local_b8;
      local_a8 = pvVar1;
      memcpy(local_b8,pvVar2,sVar3);
      local_b0 = pvVar1;
    }
                    /* try { // try from 00529d80 to 00529d93 has its CatchHandler @ 00529ef8 */
    uVar6 = FUN_00583ae0(uVar6,&DAT_001baece,&local_b8);
                    /* try { // try from 00529d94 to 00529da3 has its CatchHandler @ 00529f38 */
    uVar7 = FUN_0056ce5c();
    uVar8 = FUN_0056dafc();
    local_d0 = (undefined8 *)0x0;
    local_c8 = (undefined8 *)0x0;
    local_c0 = (undefined8 *)0x0;
                    /* try { // try from 00529db0 to 00529db7 has its CatchHandler @ 00529ef0 */
    local_d0 = (undefined8 *)FUN_00759c3c(0x10);
    local_c8 = local_d0 + 2;
    *local_d0 = uVar7;
    local_d0[1] = uVar8;
    local_c0 = local_c8;
                    /* try { // try from 00529dc8 to 00529e0b has its CatchHandler @ 00529f48 */
    uVar6 = FUN_00583ae0(uVar6,&DAT_001f41af,&local_d0);
    uVar6 = FUN_00583770(uVar6,"SequenceAt");
    plVar9 = (long *)FUN_00583890(uVar6,&DAT_001c717f);
    *(undefined4 *)(*plVar9 + 0x18) = 0xb;
    puVar5 = (undefined8 *)FUN_005839b8(plVar9,"CPUExecutionProvider");
    local_80 = PTR_DAT_007a2000;
    local_60 = &local_80;
    uVar6 = *puVar5;
    *puVar5 = 0;
    local_80 = local_80 + 0x10;
    *param_1 = uVar6;
    pcStack_78 = FUN_0052bd44;
    param_1[2] = local_80;
    param_1[6] = param_1 + 2;
    param_1[3] = FUN_0052bd44;
    param_1[8] = 0;
    if (local_d0 != (undefined8 *)0x0) {
      local_c8 = local_d0;
      free(local_d0);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      free(local_a0);
    }
    puVar5 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_004ac87c(puVar5);
      free(puVar5);
    }
    if (*(long *)(lVar4 + 0x28) == local_48) {
      return;
    }
  }
  else {
    if (-1 < (long)sVar3) {
                    /* try { // try from 00529d04 to 00529d0b has its CatchHandler @ 00529f20 */
      local_a0 = (void *)FUN_00759c3c(sVar3);
      pvVar1 = (void *)((long)local_a0 + sVar3);
      local_90 = pvVar1;
      memcpy(local_a0,pvVar2,sVar3);
      local_98 = pvVar1;
      goto LAB_00529d28;
    }
    if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_00529fa0;
                    /* try { // try from 00529ed0 to 00529ed7 has its CatchHandler @ 00529f20 */
    FUN_004b631c(&local_a0);
LAB_00529ed8:
    if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00529ee8 to 00529eef has its CatchHandler @ 00529f08 */
      uVar6 = FUN_004b631c(&local_b8);
                    /* catch() { ... } // from try @ 00529db0 with catch @ 00529ef0 */
      if (local_b8 != (void *)0x0) {
        local_b0 = local_b8;
        free(local_b8);
      }
      if (local_a0 != (void *)0x0) {
        local_98 = local_a0;
        free(local_a0);
      }
      FUN_004ada18(&local_88);
      if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar6);
      }
    }
  }
LAB_00529fa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00529fa4  FUN_00529fa4 =====

void FUN_00529fa4(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  char *local_98;
  char *pcStack_90;
  byte local_88 [16];
  void *local_78;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00529a7c(param_3,0);
  FUN_004ae6a8(param_3,1);
  local_a8 = FUN_0052a1fc();
  lVar7 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 8) >> 3;
  lVar8 = lVar7 * -0x5555555555555555;
  bVar2 = local_a8 + lVar7 * -0x5555555555555555 < 0 ==
          SBORROW8(local_a8,lVar7 * 0x5555555555555555);
  if (-1 < local_a8) {
    bVar2 = local_a8 < lVar8;
  }
  if (bVar2) {
    if ((local_a8 < 0) && (lVar8 + local_a8 < 0)) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        plVar6 = (long *)FUN_00753a74(8,lVar8 + local_a8);
        *plVar6 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar6,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_0052a1f8;
    }
    FUN_00485538(lVar3);
    lVar3 = FUN_00483570();
    if ((*(long *)(lVar3 + 0x18) == -1) ||
       ((*(long *)(lVar3 + 0x18) != 0 && (*(long *)(lVar3 + 0x20) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    FUN_005ca9a8(local_88);
                    /* try { // try from 0052a070 to 0052a07f has its CatchHandler @ 0052a1b4 */
    uVar4 = FUN_0058d3bc(param_3,0,local_88);
    __ptr = local_50;
    local_50 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    uVar5 = FUN_00594884(*(undefined8 *)(param_2 + 8));
    FUN_0056ac80(param_1,uVar5,lVar3,uVar4);
    if (*param_1 != 0) {
                    /* try { // try from 0052a0b4 to 0052a0d3 has its CatchHandler @ 0052a1a4 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                   ,"Compute",0x66);
    }
  }
  else {
    local_98 = ") specified for sequence of size (";
    pcStack_90 = "Invalid sequence index (";
    local_a0 = &DAT_001d047f;
    local_b0 = lVar8;
    FUN_0052be48(local_88,&pcStack_90,&local_a8,&local_98,&local_b0,&local_a0);
                    /* try { // try from 0052a118 to 0052a12b has its CatchHandler @ 0052a1cc */
    FUN_0063aa48(param_1,2,2,local_88);
    if ((local_88[0] & 1) != 0) {
      free(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0052a1f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a1fc  FUN_0052a1fc =====

void FUN_0052a1fc(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [84];
  int local_34;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = *(int *)(*(long *)(param_1 + 0x58) + 0x18);
  if (local_34 == 7) {
    plVar4 = (long *)FUN_004ba96c();
    lVar3 = *plVar4;
  }
  else {
    if (local_34 != 6) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 0052a278 to 0052a27f has its CatchHandler @ 0052a330 */
      FUN_00645c30(auStack_a0);
                    /* try { // try from 0052a280 to 0052a29f has its CatchHandler @ 0052a320 */
      FUN_0047488c(auStack_88,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                   ,0x45,"int64_t onnxruntime::GetSeqIdx(const Tensor &)",auStack_a0);
      local_30 = "Unsupported data type: ";
      FUN_004a0638(auStack_b8,&local_30,&local_34);
      lVar3 = FUN_004792b8(uVar5,auStack_88,auStack_b8);
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0052a2e0 to 0052a2f7 has its CatchHandler @ 0052a2f8 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0052a358;
    }
    piVar2 = (int *)FUN_004b023c();
    lVar3 = (long)*piVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_0052a358:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 0052a35c  FUN_0052a35c =====

void FUN_0052a35c(undefined8 *param_1)

{
  void *pvVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined *local_90;
  code *pcStack_88;
  undefined **local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_98 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar3 = DAT_001b7148;
  local_98[0x1e] = 0;
  local_98[0xd] = 0;
  local_98[0xc] = 0;
  local_98[0xf] = 0;
  local_98[0xe] = 0;
  puVar9 = local_98 + 0x18;
  local_98[0x19] = 0;
  *puVar9 = 0;
  *(undefined4 *)(local_98 + 0xe) = 0x3f800000;
  local_98[1] = 0;
  *local_98 = 0;
  local_98[3] = 0;
  local_98[2] = 0;
  local_98[5] = 0;
  local_98[4] = 0;
  local_98[7] = 0;
  local_98[6] = 0;
  local_98[9] = 0;
  local_98[8] = 0;
  local_98[0xb] = 0;
  local_98[10] = 0;
  local_98[0x11] = 0;
  local_98[0x10] = 0;
  local_98[0x13] = 0;
  local_98[0x12] = 0;
  local_98[0x15] = 0;
  local_98[0x14] = 0;
  local_98[0x17] = 0;
  local_98[0x16] = 0;
  local_98[0x1b] = 0;
  local_98[0x1a] = 0;
  local_98[0x1d] = 0;
  local_98[0x1c] = 0;
  local_98[3] = uVar3;
  *puVar9 = 0;
  *(undefined1 *)(local_98 + 0x15) = 0;
  local_98[0x14] = 0;
  local_98[0x13] = 0;
  local_98[0x12] = 0;
  local_98[0x11] = 0;
  local_98[0x10] = 0;
  local_98[0xf] = 0;
  local_98[0x17] = puVar9;
  local_98[0x1c] = 0;
  local_98[0x1b] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = local_98 + 0x1b;
                    /* try { // try from 0052a3fc to 0052a433 has its CatchHandler @ 0052a65c */
  uVar3 = FUN_0056cff0();
  uVar4 = FUN_0056e14c();
  uVar5 = FUN_0056dc90();
  uVar6 = FUN_0056ce5c();
  uVar7 = FUN_0056dafc();
  uVar8 = FUN_0056d318();
  local_b0 = (undefined8 *)FUN_00759c3c(0x30);
  local_a8 = local_b0 + 6;
  *local_b0 = uVar3;
  local_b0[1] = uVar4;
  local_b0[2] = uVar5;
  local_b0[3] = uVar6;
  local_b0[4] = uVar7;
  local_b0[5] = uVar8;
                    /* try { // try from 0052a44c to 0052a467 has its CatchHandler @ 0052a610 */
  puStack_a0 = local_a8;
  uVar3 = FUN_00583ae0(&local_98,&DAT_001baece,&local_b0);
  puVar9 = (undefined8 *)FUN_00578870();
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  __src = (void *)*puVar9;
  __n = puVar9[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0052a5f0 to 0052a5f7 has its CatchHandler @ 0052a5f8 */
        uVar3 = FUN_004b631c(&local_c8);
                    /* catch() { ... } // from try @ 0052a480 with catch @ 0052a5f8
                       catch() { ... } // from try @ 0052a5f0 with catch @ 0052a5f8 */
        if (local_c8 != (void *)0x0) {
          local_c0 = local_c8;
          free(local_c8);
        }
        if (local_b0 != (undefined8 *)0x0) {
          local_a8 = local_b0;
          free(local_b0);
        }
        FUN_004ada18(&local_98);
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_0052a680;
    }
                    /* try { // try from 0052a480 to 0052a487 has its CatchHandler @ 0052a5f8 */
    local_c8 = (void *)FUN_00759c3c(__n);
    pvVar1 = (void *)((long)local_c8 + __n);
    local_c0 = local_c8;
    local_b8 = pvVar1;
    memcpy(local_c8,__src,__n);
    local_c0 = pvVar1;
  }
                    /* try { // try from 0052a4a4 to 0052a4d3 has its CatchHandler @ 0052a634 */
  uVar3 = FUN_00583ae0(uVar3,&DAT_001cabab,&local_c8);
  uVar4 = FUN_0056ce5c();
  uVar5 = FUN_0056dafc();
  local_e0 = (undefined8 *)FUN_00759c3c(0x10);
  local_d8 = local_e0 + 2;
  *local_e0 = uVar4;
  local_e0[1] = uVar5;
  puStack_d0 = local_d8;
                    /* try { // try from 0052a4e4 to 0052a527 has its CatchHandler @ 0052a618 */
  uVar3 = FUN_00583ae0(uVar3,&DAT_001f41af,&local_e0);
  uVar3 = FUN_00583770(uVar3,"SplitToSequence");
  plVar10 = (long *)FUN_00583890(uVar3,&DAT_001c717f);
  *(undefined4 *)(*plVar10 + 0x18) = 0xb;
  puVar9 = (undefined8 *)FUN_005839b8(plVar10,"CPUExecutionProvider");
  local_90 = PTR_DAT_007a2000;
  local_70 = &local_90;
  uVar3 = *puVar9;
  *puVar9 = 0;
  local_90 = local_90 + 0x10;
  *param_1 = uVar3;
  pcStack_88 = FUN_0052bdd8;
  param_1[2] = local_90;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_0052bdd8;
  param_1[8] = 0;
  if (local_e0 != (undefined8 *)0x0) {
    local_d8 = local_e0;
    free(local_e0);
  }
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    free(local_c8);
  }
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    free(local_b0);
  }
  puVar9 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar9);
    free(puVar9);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_0052a680:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a684  FUN_0052a684 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052a684(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  byte local_70;
  undefined8 local_6f;
  undefined1 local_67;
  void *local_60;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  FUN_0058d0b4(param_1 + 1,param_2);
  puVar3 = PTR_DAT_007a2540;
  lVar2 = _UNK_002003a8;
  lVar5 = _DAT_002003a0;
  param_1[4] = 1;
  local_70 = 8;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[3] = lVar2;
  param_1[2] = lVar5;
  local_6f = CONCAT35(local_6f._5_3_,0x73697861);
                    /* try { // try from 0052a708 to 0052a71b has its CatchHandler @ 0052a7fc */
  FUN_00594f20(&local_58,param_2,&local_70,&local_50);
  pvVar4 = local_58;
  local_58 = (void *)0x0;
  lVar5 = local_50;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
    lVar5 = 0;
  }
  param_1[2] = lVar5;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  local_67 = 0;
  local_70 = 0x10;
  local_6f = 0x736d69647065656b;
                    /* try { // try from 0052a77c to 0052a78f has its CatchHandler @ 0052a7f8 */
  FUN_00594f20(&local_58,param_2,&local_70,&local_50);
  pvVar4 = local_58;
  local_58 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    if ((*(byte *)((long)pvVar4 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar4 + 0x18));
    }
    free(pvVar4);
    local_50 = 1;
  }
  param_1[3] = local_50;
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052a860  FUN_0052a860 =====

void FUN_0052a860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_004ae6a8(param_3,0);
  uVar2 = FUN_004ae6a8(param_3,1);
  FUN_0052a8bc(param_1,param_2,param_3,uVar1,uVar2);
  return;
}


// ===== 0052a8bc  FUN_0052a8bc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0052a8bc(long *param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  long *******ppppppplVar15;
  size_t __n;
  int iVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  ulong uVar20;
  long *******ppppppplVar21;
  int *piVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long *******ppppppplVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long *******ppppppplVar34;
  long lVar35;
  long *******ppppppplVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  void *__dest;
  void *pvVar43;
  long lVar44;
  void *pvVar45;
  void *pvVar46;
  long lVar47;
  long ******pppppplVar48;
  long ******pppppplVar49;
  long ******pppppplVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  long *local_208;
  int local_1fc;
  char local_1f8 [4];
  int local_1f4;
  undefined8 local_1f0;
  ulong local_1e8;
  long local_1e0;
  char *local_1d8;
  undefined8 *******local_1d0;
  ulong local_1c8;
  undefined1 auStack_1a0 [56];
  void *local_168;
  long ******local_160 [15];
  long local_e8;
  byte local_e0;
  undefined7 uStack_df;
  undefined8 *******local_d8 [6];
  ulong local_a8;
  long *******local_a0;
  ulong local_98;
  long local_70;
  
  lVar14 = tpidr_el0;
  local_70 = *(long *)(lVar14 + 0x28);
  local_1e8 = *(ulong *)(param_2 + 0x10);
  local_1f0 = 0;
  local_1f4 = 0;
  local_1e0 = 0;
  iVar4 = *(int *)(param_4[0xb] + 0x18);
  uVar39 = *(ulong *)(param_4[0xb] + 0x10);
  local_1f8[0] = '\0';
  local_1fc = 0;
  local_a8 = 0;
  if (param_5 == 0) {
    lVar28 = 0x7fffffff;
    uVar25 = 0;
  }
  else if (*(long *)(param_5 + 0x18) == 0) {
    iVar19 = *(int *)(*(long *)(param_5 + 0x58) + 0x18);
    if (iVar19 == 7) {
                    /* try { // try from 0052aba4 to 0052abab has its CatchHandler @ 0052b6f0 */
      plVar24 = (long *)FUN_004ba96c(param_5);
      lVar28 = *plVar24;
    }
    else {
      if (iVar19 != 6) {
        uVar25 = FUN_00753a74(0x88);
                    /* try { // try from 0052b548 to 0052b54f has its CatchHandler @ 0052b620 */
        FUN_00645c30(auStack_1a0);
                    /* try { // try from 0052b550 to 0052b56f has its CatchHandler @ 0052b614 */
        FUN_0047488c(local_160,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                     ,0x1a7,"int64_t onnxruntime::GetScalarSplitInput(const Tensor &)",auStack_1a0);
                    /* try { // try from 0052b574 to 0052b577 has its CatchHandler @ 0052b5e8 */
        local_210 = FUN_00576cac(*(undefined8 *)(param_5 + 0x58));
        local_1d8 = "Invalid data type for split tensor ";
        FUN_004839f8(&local_e0,&local_1d8,&local_210);
        FUN_004792b8(uVar25,local_160,&local_e0);
        if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* try { // try from 0052b5bc to 0052b5d3 has its CatchHandler @ 0052b5e4 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar25,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0052b7a0;
      }
                    /* try { // try from 0052aad0 to 0052aae7 has its CatchHandler @ 0052b6f0 */
      piVar22 = (int *)FUN_004b023c(param_5);
      lVar28 = (long)*piVar22;
    }
    if (lVar28 < 1) {
      uVar25 = FUN_00753a74(0x88);
                    /* try { // try from 0052b420 to 0052b427 has its CatchHandler @ 0052b628 */
      FUN_00645c30(auStack_1a0);
                    /* try { // try from 0052b428 to 0052b447 has its CatchHandler @ 0052b61c */
      FUN_0047488c(local_160,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                   ,0x1ce,
                   "Status onnxruntime::SplitToSequence::ComputeImpl(OpKernelContext &, const Tensor &, const Tensor *) const"
                   ,auStack_1a0);
                    /* try { // try from 0052b448 to 0052b457 has its CatchHandler @ 0052b610 */
      FUN_00479eac(&local_e0,"Split should be > 0");
                    /* try { // try from 0052b45c to 0052b4a3 has its CatchHandler @ 0052b60c */
      FUN_00474a40(uVar25,local_160,"split_scalar > 0",&local_e0);
      if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar25,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0052b7a0;
    }
    uVar25 = 1;
  }
  else {
                    /* try { // try from 0052a93c to 0052aa3b has its CatchHandler @ 0052b6f0 */
    uVar20 = FUN_005cabcc();
    uVar1 = local_a8;
    if ((long)uVar20 < 0) {
      if (*(long *)(lVar14 + 0x28) == local_70) {
        plVar24 = (long *)FUN_00753a74(8);
        *plVar24 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* try { // try from 0052b3e8 to 0052b413 has its CatchHandler @ 0052b6f0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar24,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_0052b7a0;
    }
    ppppppplVar29 = (long *******)&local_a0;
    uVar26 = 6;
    if ((local_a8 & 1) != 0) {
      ppppppplVar29 = local_a0;
      uVar26 = local_98;
    }
    if (uVar26 < uVar20) {
      uVar26 = uVar26 * 2;
      if (uVar26 < uVar20 || uVar26 - uVar20 == 0) {
        uVar26 = uVar20;
      }
      if (uVar26 >> 0x3d != 0) {
        if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_002f9ee0();
        }
        goto LAB_0052b7a0;
      }
      ppppppplVar21 = (long *******)FUN_00759c3c(uVar26 << 3);
      if (1 < uVar1) {
        uVar27 = uVar1 >> 1;
        uVar31 = 0;
        if ((7 < uVar1) && (0x1f < (ulong)((long)ppppppplVar21 - (long)ppppppplVar29))) {
          uVar31 = uVar27 & 0x7ffffffffffffffc;
          ppppppplVar34 = ppppppplVar21 + 2;
          ppppppplVar36 = ppppppplVar29 + 2;
          ppppppplVar29 = ppppppplVar29 + uVar31;
          uVar33 = uVar31;
          do {
            ppppppplVar15 = ppppppplVar36 + -1;
            pppppplVar48 = ppppppplVar36[-2];
            pppppplVar50 = ppppppplVar36[1];
            pppppplVar49 = *ppppppplVar36;
            uVar33 = uVar33 - 4;
            ppppppplVar36 = ppppppplVar36 + 4;
            ppppppplVar34[-1] = *ppppppplVar15;
            ppppppplVar34[-2] = pppppplVar48;
            ppppppplVar34[1] = pppppplVar50;
            *ppppppplVar34 = pppppplVar49;
            ppppppplVar34 = ppppppplVar34 + 4;
          } while (uVar33 != 0);
          if (uVar27 == uVar31) goto LAB_0052aa04;
        }
        lVar28 = uVar27 - uVar31;
        ppppppplVar34 = ppppppplVar21 + uVar31;
        do {
          lVar28 = lVar28 + -1;
          *ppppppplVar34 = *ppppppplVar29;
          ppppppplVar34 = ppppppplVar34 + 1;
          ppppppplVar29 = ppppppplVar29 + 1;
        } while (lVar28 != 0);
      }
LAB_0052aa04:
      if ((uVar1 & 1) != 0) {
        free(local_a0);
      }
      local_a8 = uVar1 | 1;
      local_a0 = ppppppplVar21;
      local_98 = uVar26;
    }
    iVar19 = *(int *)(*(long *)(param_5 + 0x58) + 0x18);
    if (iVar19 == 7) {
      auVar52 = FUN_004ba96c(param_5);
      uVar25 = auVar52._8_8_;
      if (uVar20 != 0) {
        lVar28 = uVar20 << 3;
        do {
          uVar25 = auVar52._8_8_;
          puVar23 = auVar52._0_8_;
          uVar1 = 6;
          if ((local_a8 & 1) != 0) {
            uVar1 = local_98;
          }
          if (local_a8 >> 1 == uVar1) {
                    /* try { // try from 0052ab40 to 0052ab53 has its CatchHandler @ 0052b5d4 */
            FUN_004c78bc(&local_a8,puVar23);
            uVar25 = extraout_x1_00;
          }
          else {
            ppppppplVar29 = (long *******)&local_a0;
            if ((local_a8 & 1) != 0) {
              ppppppplVar29 = local_a0;
            }
            ppppppplVar29[local_a8 >> 1] = (long ******)*puVar23;
            local_a8 = local_a8 + 2;
          }
          lVar28 = lVar28 + -8;
          auVar52._8_8_ = uVar25;
          auVar52._0_8_ = puVar23 + 1;
        } while (lVar28 != 0);
      }
    }
    else {
      if (iVar19 != 6) {
        uVar25 = FUN_00753a74(0x88);
                    /* try { // try from 0052b4b0 to 0052b4b7 has its CatchHandler @ 0052b624 */
        FUN_00645c30(auStack_1a0);
                    /* try { // try from 0052b4b8 to 0052b4d7 has its CatchHandler @ 0052b618 */
        FUN_0047488c(local_160,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                     ,0x1b6,
                     "void onnxruntime::GetSplitSizesInput(const Tensor &, InlinedVector<int64_t> &)"
                     ,auStack_1a0);
                    /* try { // try from 0052b4dc to 0052b4df has its CatchHandler @ 0052b608 */
        local_210 = FUN_00576cac(*(undefined8 *)(param_5 + 0x58));
        local_1d8 = "Invalid data type for split tensor ";
        FUN_004839f8(&local_e0,&local_1d8,&local_210);
        FUN_004792b8(uVar25,local_160,&local_e0);
        if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* try { // try from 0052b524 to 0052b53b has its CatchHandler @ 0052b5ec */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar25,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0052b7a0;
      }
      auVar51 = FUN_004b023c(param_5);
      uVar25 = auVar51._8_8_;
      if (uVar20 != 0) {
        lVar28 = uVar20 << 2;
        do {
          uVar25 = auVar51._8_8_;
          piVar22 = auVar51._0_8_;
          local_160[0] = (long ******)(long)*piVar22;
          uVar1 = 6;
          if ((local_a8 & 1) != 0) {
            uVar1 = local_98;
          }
          if (local_a8 >> 1 == uVar1) {
                    /* try { // try from 0052aa9c to 0052aaa7 has its CatchHandler @ 0052b5d8 */
            FUN_004c7d34(&local_a8,local_160);
            uVar25 = extraout_x1;
          }
          else {
            ppppppplVar29 = (long *******)&local_a0;
            if ((local_a8 & 1) != 0) {
              ppppppplVar29 = local_a0;
            }
            ppppppplVar29[local_a8 >> 1] = local_160[0];
            local_a8 = local_a8 + 2;
          }
          lVar28 = lVar28 + -4;
          auVar51._8_8_ = uVar25;
          auVar51._0_8_ = piVar22 + 1;
        } while (lVar28 != 0);
      }
    }
    ppppppplVar29 = (long *******)&local_a0;
    if ((local_a8 & 1) != 0) {
      ppppppplVar29 = local_a0;
    }
    if (local_a8 < 2) {
      uVar25 = 0;
      lVar28 = 0x7fffffff;
    }
    else {
      lVar28 = 0x7fffffff;
      lVar44 = (local_a8 >> 1) << 3;
      do {
        if ((long)*ppppppplVar29 < 0) {
          uVar25 = FUN_00753a74(0x88,uVar25,0x7fffffff);
                    /* try { // try from 0052b2dc to 0052b2e3 has its CatchHandler @ 0052b6f8 */
          FUN_00645c30(auStack_1a0);
                    /* try { // try from 0052b2e4 to 0052b303 has its CatchHandler @ 0052b69c */
          FUN_0047488c(local_160,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                       ,0x1d3,
                       "Status onnxruntime::SplitToSequence::ComputeImpl(OpKernelContext &, const Tensor &, const Tensor *) const"
                       ,auStack_1a0);
                    /* try { // try from 0052b304 to 0052b313 has its CatchHandler @ 0052b668 */
          FUN_00479eac(&local_e0,"Invalid value in \'split\' input. All values must be >= 0");
                    /* try { // try from 0052b318 to 0052b35f has its CatchHandler @ 0052b650 */
          FUN_00474a40(uVar25,local_160,
                       "std::all_of(split_sizes.cbegin(), split_sizes.cend(), [](int64_t value) { return value >= 0; })"
                       ,&local_e0);
          if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar25,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_0052b7a0;
        }
        lVar44 = lVar44 + -8;
        ppppppplVar29 = ppppppplVar29 + 1;
      } while (lVar44 != 0);
      uVar25 = 0;
    }
  }
                    /* try { // try from 0052abc4 to 0052abff has its CatchHandler @ 0052b694 */
  uVar1 = local_a8;
  FUN_0052b7a4(param_1,param_2,param_4 + 3,lVar28,uVar25,&local_1e0,&local_1e8,(long)&local_1f0 + 4,
               &local_1f0,&local_1f4,local_1f8,&local_1fc,&local_a8);
  if (*param_1 == 0) {
                    /* try { // try from 0052ac38 to 0052ac87 has its CatchHandler @ 0052b698 */
    iVar19 = (**(code **)(*param_3 + 0x48))();
    if ((iVar19 < 1) || (lVar28 = (**(code **)(*param_3 + 0x80))(param_3,0), lVar28 == 0)) {
      lVar28 = 0;
    }
    else {
      lVar28 = FUN_004b6a5c();
    }
    FUN_00485950(lVar28,param_4[0xb]);
    FUN_00485aec(lVar28 + 8,local_1e0);
                    /* try { // try from 0052ac88 to 0052ac97 has its CatchHandler @ 0052b63c */
    FUN_004c7138(&local_e0,param_4 + 3);
    if (0 < local_1e0) {
      lVar44 = 0;
      lVar32 = *param_4;
      lVar35 = param_4[0xf];
      uVar20 = 0;
      do {
        if ((local_1f8[0] == '\0') || (iVar19 = local_1fc, local_1e0 + -1 != lVar44)) {
          ppppppplVar29 = (long *******)&local_a0;
          if ((local_a8 & 1) != 0) {
            ppppppplVar29 = local_a0;
          }
          iVar19 = (int)ppppppplVar29[lVar44];
          if (ppppppplVar29[lVar44] == (long ******)(long)iVar19) goto LAB_0052ad38;
LAB_0052b364:
          plVar24 = (long *)FUN_00753a74(8);
          *plVar24 = (long)(PTR_DAT_007a1ef8 + 0x10);
          if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* try { // try from 0052b390 to 0052b3a3 has its CatchHandler @ 0052b73c */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar24,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
          }
          goto LAB_0052b7a0;
        }
LAB_0052ad38:
        if ((long)local_1e8 < 0) goto LAB_0052b364;
        pppppppuVar3 = local_d8;
        if ((local_e0 & 1) != 0) {
          pppppppuVar3 = local_d8[0];
        }
        pppppppuVar3[local_1e8] = (undefined8 ******)(long)iVar19;
        local_210 = 0;
        local_208 = (long *)0x0;
                    /* try { // try from 0052ad68 to 0052ad73 has its CatchHandler @ 0052b734 */
        (**(code **)(*param_3 + 0x50))(param_1,param_3,&local_210);
        if (*param_1 != 0) {
                    /* try { // try from 0052b278 to 0052b297 has its CatchHandler @ 0052b62c */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                       ,"ComputeImpl",0x1f9);
          plVar24 = local_208;
          if ((local_208 != (long *)0x0) &&
             (lVar28 = FUN_00755c50(0xffffffffffffffff,local_208 + 1), lVar28 == 0)) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            FUN_0071245c(plVar24);
          }
          goto LAB_0052b224;
        }
        lVar42 = param_4[0xb];
        pppppppuVar3 = local_d8;
        if ((local_e0 & 1) != 0) {
          pppppppuVar3 = local_d8[0];
        }
        if ((1 < CONCAT71(uStack_df,local_e0)) && (pppppppuVar3 == (undefined8 *******)0x0)) {
LAB_0052b2cc:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 0052ada4 to 0052adab has its CatchHandler @ 0052b70c */
        FUN_005ca9a8(auStack_1a0,CONCAT71(uStack_df,local_e0) >> 1);
        local_220 = local_210;
        local_218 = local_208;
        if (local_208 != (long *)0x0) {
          FUN_00755c20(1,local_208 + 1);
        }
                    /* try { // try from 0052adc4 to 0052add7 has its CatchHandler @ 0052b714 */
        FUN_005c80c8(local_160,lVar42,auStack_1a0,&local_220);
        plVar24 = local_218;
        pvVar43 = local_168;
        if ((local_218 != (long *)0x0) &&
           (lVar42 = FUN_00755c50(0xffffffffffffffff,local_218 + 1), pvVar43 = local_168,
           lVar42 == 0)) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0071245c(plVar24);
          pvVar43 = local_168;
        }
        local_168 = (void *)0x0;
        if (pvVar43 != (void *)0x0) {
          local_168 = (void *)0x0;
          free(pvVar43);
        }
        lVar40 = local_e8;
        pppppplVar48 = local_160[0];
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar20;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar39;
        iVar17 = local_1f0._4_4_;
        lVar42 = (long)local_1f0._4_4_;
        if (SUB168(auVar6 * auVar10,8) == 0) {
          lVar30 = uVar20 * uVar39;
        }
        else {
                    /* try { // try from 0052ae24 to 0052ae27 has its CatchHandler @ 0052b6ec */
          FUN_00485180();
          lVar30 = 0;
        }
        lVar37 = local_1f0;
        iVar16 = local_1f4;
        uVar26 = (ulong)local_1f4;
        uVar27 = (ulong)local_1f0._4_4_;
        __dest = (void *)((long)pppppplVar48 + lVar40);
        iVar5 = local_1f4 * iVar19;
        pvVar43 = (void *)(lVar32 + lVar35 + lVar30);
        if (iVar4 == 8) {
          if (local_1f0._4_4_ == iVar5) {
            if (local_1f0._4_4_ * iVar17 != 0) {
              lVar42 = (long)(local_1f0._4_4_ * iVar17) * 0x18;
              do {
                    /* try { // try from 0052ae78 to 0052ae83 has its CatchHandler @ 0052b74c */
                FUN_007139b0(__dest,pvVar43);
                lVar42 = lVar42 + -0x18;
                pvVar43 = (void *)((long)pvVar43 + 0x18);
                __dest = (void *)((long)__dest + 0x18);
              } while (lVar42 != 0);
            }
          }
          else if ((iVar17 != 0) && (iVar5 != 0)) {
            lVar40 = 0;
            lVar37 = 0;
            lVar30 = 0;
            do {
              pvVar45 = (void *)((long)pvVar43 + lVar30 * 0x18);
              pvVar46 = (void *)((long)__dest + lVar37 * 0x18);
              lVar47 = (long)iVar5 * 0x18;
              do {
                    /* try { // try from 0052aef4 to 0052aeff has its CatchHandler @ 0052b750 */
                FUN_007139b0(pvVar46,pvVar45);
                lVar47 = lVar47 + -0x18;
                pvVar45 = (void *)((long)pvVar45 + 0x18);
                pvVar46 = (void *)((long)pvVar46 + 0x18);
              } while (lVar47 != 0);
              lVar40 = lVar40 + 1;
              lVar30 = lVar30 + uVar27;
              lVar37 = lVar37 + iVar5;
            } while (lVar40 != lVar42);
          }
        }
        else if (local_1f0._4_4_ == iVar5) {
          memcpy(__dest,pvVar43,uVar39 * lVar42 * uVar27);
        }
        else {
          if (iVar5 < 0) {
                    /* try { // try from 0052af30 to 0052af4f has its CatchHandler @ 0052b690 */
            FUN_00485180();
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (long)iVar5;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar39;
          uVar31 = (long)iVar5 * uVar39;
          bVar18 = SUB168(auVar7 * auVar11,8) != 0;
          __n = uVar31;
          if (bVar18) {
            FUN_00485180();
            __n = 0;
          }
          if (lVar37 < 0) {
                    /* try { // try from 0052af94 to 0052afa7 has its CatchHandler @ 0052b68c */
            FUN_00485180();
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar27;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar39;
          if (SUB168(auVar8 * auVar12,8) == 0) {
            uVar27 = uVar27 * uVar39;
          }
          else {
            FUN_00485180();
            uVar27 = 0;
          }
          if (iVar5 < 0) {
                    /* try { // try from 0052afbc to 0052afc7 has its CatchHandler @ 0052b688 */
            FUN_00485180();
          }
          if (bVar18) {
            FUN_00485180();
            uVar31 = 0;
          }
          if (iVar17 != 0) {
            uVar38 = 0;
            uVar33 = 0;
            do {
              memcpy((void *)((long)__dest + uVar38),(void *)((long)pvVar43 + uVar33),__n);
              uVar41 = uVar33 + uVar27;
              if (CARRY8(uVar33,uVar27)) {
                    /* try { // try from 0052b000 to 0052b01f has its CatchHandler @ 0052b748 */
                FUN_00485180();
                uVar41 = uVar33;
                if (CARRY8(uVar38,uVar31)) goto LAB_0052b01c;
LAB_0052afdc:
                uVar38 = uVar38 + uVar31;
              }
              else {
                uVar33 = uVar41;
                if (!CARRY8(uVar38,uVar31)) goto LAB_0052afdc;
LAB_0052b01c:
                FUN_00485180();
                uVar41 = uVar33;
              }
              lVar42 = lVar42 + -1;
              uVar33 = uVar41;
            } while (lVar42 != 0);
          }
        }
        if (iVar19 < 0) {
                    /* try { // try from 0052b03c to 0052b083 has its CatchHandler @ 0052b744 */
          FUN_00485180();
        }
        if ((iVar16 < 0) && (iVar19 != 0)) {
          FUN_00485180();
        }
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (undefined8 ******)(long)iVar19;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar26;
        if (SUB168(auVar9 * auVar13,8) == 0) {
          uVar27 = (long)iVar19 * (long)iVar16;
          uVar26 = uVar27 + uVar20;
          if (CARRY8(uVar27,uVar20)) {
            FUN_00485180();
            uVar26 = uVar20;
          }
        }
        else {
          FUN_00485180();
          uVar26 = uVar20;
        }
        if ((uVar1 < 2) && (*(long *)(param_2 + 0x18) == 0)) {
          uVar27 = CONCAT71(uStack_df,local_e0);
          local_1d8 = (char *)0x0;
          uVar31 = uVar27 >> 1;
          uVar20 = uVar31 - 1;
          if (6 < uVar20) {
            uVar33 = uVar20 >> 0x3d;
            if (uVar20 < 0xd) {
              uVar20 = 0xc;
            }
            if (uVar33 != 0) {
              if (*(long *)(lVar14 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0052b3b8 to 0052b3bb has its CatchHandler @ 0052b6b4 */
                FUN_002f9ee0();
              }
              goto LAB_0052b7a0;
            }
                    /* try { // try from 0052b0c8 to 0052b0cb has its CatchHandler @ 0052b6ac */
            local_1d0 = (undefined8 *******)FUN_00759c3c(uVar20 << 3);
            local_1d8 = (char *)0x1;
            local_1c8 = uVar20;
          }
          if (1 < uVar27) {
            lVar42 = 0;
            uVar20 = 0;
            do {
              if (uVar20 != local_1e8) {
                pppppppuVar3 = local_d8;
                if ((local_e0 & 1) != 0) {
                  pppppppuVar3 = local_d8[0];
                }
                uVar27 = 6;
                if (((ulong)local_1d8 & 1) != 0) {
                  uVar27 = local_1c8;
                }
                if ((ulong)local_1d8 >> 1 == uVar27) {
                    /* try { // try from 0052b160 to 0052b16b has its CatchHandler @ 0052b5dc */
                  FUN_004c78bc(&local_1d8,(long)pppppppuVar3 + lVar42);
                }
                else {
                  pppppppuVar2 = &local_1d0;
                  if (((ulong)local_1d8 & 1) != 0) {
                    pppppppuVar2 = local_1d0;
                  }
                  pppppppuVar2[(ulong)local_1d8 >> 1] =
                       *(undefined8 *******)((long)pppppppuVar3 + lVar42);
                  local_1d8 = local_1d8 + 2;
                }
              }
              uVar20 = uVar20 + 1;
              lVar42 = lVar42 + 8;
            } while (uVar31 != uVar20);
          }
          pppppppuVar3 = &local_1d0;
          if (((ulong)local_1d8 & 1) != 0) {
            pppppppuVar3 = local_1d0;
          }
          if (((char *)0x1 < local_1d8) && (pppppppuVar3 == (undefined8 *******)0x0))
          goto LAB_0052b2cc;
                    /* try { // try from 0052b190 to 0052b197 has its CatchHandler @ 0052b6bc */
          FUN_005ca9a8(auStack_1a0,(ulong)local_1d8 >> 1);
                    /* try { // try from 0052b198 to 0052b1a3 has its CatchHandler @ 0052b6c4 */
          FUN_004c7238(local_160,auStack_1a0);
          pvVar43 = local_168;
          local_168 = (void *)0x0;
          if (pvVar43 != (void *)0x0) {
            free(pvVar43);
          }
          if (((ulong)local_1d8 & 1) != 0) {
            free(local_1d0);
          }
        }
                    /* try { // try from 0052b1c4 to 0052b1cf has its CatchHandler @ 0052b708 */
        FUN_004bc660(lVar28,local_160);
        FUN_005c8ce4(local_160);
        plVar24 = local_208;
        if ((local_208 != (long *)0x0) &&
           (lVar42 = FUN_00755c50(0xffffffffffffffff,local_208 + 1), lVar42 == 0)) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          FUN_0071245c(plVar24);
        }
        lVar44 = lVar44 + 1;
        uVar20 = uVar26;
      } while (lVar44 < local_1e0);
    }
    *param_1 = 0;
LAB_0052b224:
    if ((local_e0 & 1) != 0) {
      free(local_d8[0]);
    }
  }
  else {
                    /* try { // try from 0052ac08 to 0052ac27 has its CatchHandler @ 0052b640 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/sequence/sequence_ops.cc"
                 ,"ComputeImpl",0x1e5);
  }
  if ((local_a8 & 1) != 0) {
    free(local_a0);
  }
  if (*(long *)(lVar14 + 0x28) == local_70) {
    return;
  }
LAB_0052b7a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052b7a4  FUN_0052b7a4 =====

void FUN_0052b7a4(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4,ulong param_5,
                 ulong *param_6,ulong *param_7,int *param_8,int *param_9,undefined4 *param_10,
                 undefined1 *param_11,int *param_12,ulong *param_13)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined8 ****ppppuVar12;
  void *pvVar13;
  ulong *puVar14;
  undefined8 *****pppppuVar15;
  ulong *puVar16;
  ulong uVar17;
  void *pvVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  void *pvVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  void *local_c8;
  void *local_c0;
  undefined *local_b8;
  char *local_b0;
  char *pcStack_a8;
  ulong local_a0;
  undefined8 ****local_98;
  void *pvStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar23 = *param_3;
  if ((uVar23 == 0xffffffffffffffff) || ((uVar21 = param_3[1], uVar23 != 0 && (uVar21 == 0)))) {
LAB_0052bc34:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  uVar8 = FUN_00500578(*(undefined8 *)(param_2 + 0x10),uVar23);
  *param_7 = uVar8;
  if ((long)uVar8 < 0) goto LAB_0052bc38;
  if (uVar23 <= uVar8) goto LAB_0052bc34;
  pvVar22 = *(void **)(uVar21 + uVar8 * 8);
  local_c0 = pvVar22;
  lVar9 = FUN_005cac90(param_3);
  if ((lVar9 == (int)lVar9) && (*param_8 = (int)lVar9, -1 < (long)*param_7)) {
    lVar9 = FUN_005caed0(param_3);
    if (lVar9 == (int)lVar9) {
      *param_9 = (int)lVar9;
      uVar21 = *param_7;
      if (uVar21 + 1 == uVar23) {
        lVar9 = 1;
      }
      else {
        if (((long)uVar21 < 0) && (FUN_00485180(), uVar21 == 0xffffffffffffffff)) {
          FUN_00485180();
        }
        lVar9 = FUN_005caed0(param_3,uVar21 + 1);
        if (lVar9 != (int)lVar9) goto LAB_0052bc38;
      }
      *param_10 = (int)lVar9;
      if ((param_5 & 1) == 0) {
        uVar23 = *param_13;
        if (uVar23 < 2) {
          *param_6 = (ulong)pvVar22;
          local_a0 = 0;
          if (pvVar22 < (void *)0x7) {
            if (pvVar22 != (void *)0x0) {
              pppppuVar10 = &local_98;
              ppppuVar12 = *(undefined8 *****)(param_2 + 0x20);
              if ((void *)0x3 < pvVar22) goto LAB_0052baa0;
LAB_0052ba00:
              pvVar13 = (void *)0x0;
LAB_0052bac8:
              lVar9 = (long)pvVar22 - (long)pvVar13;
              pppppuVar10 = pppppuVar10 + (long)pvVar13;
              do {
                lVar9 = lVar9 + -1;
                *pppppuVar10 = ppppuVar12;
                pppppuVar10 = pppppuVar10 + 1;
              } while (lVar9 != 0);
              goto LAB_0052badc;
            }
            bVar2 = (byte)*param_13;
            uVar23 = 0;
          }
          else {
            if ((ulong)pvVar22 >> 0x3d != 0) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
              goto LAB_0052bcc0;
            }
            pvVar18 = pvVar22;
            if (pvVar22 < (void *)0xd) {
              pvVar18 = (void *)0xc;
            }
            pppppuVar10 = (undefined8 *****)FUN_00759c3c((long)pvVar18 << 3);
            local_a0 = 1;
            ppppuVar12 = *(undefined8 *****)(param_2 + 0x20);
            local_98 = pppppuVar10;
            pvStack_90 = pvVar18;
            if (pvVar22 < (void *)0x4) goto LAB_0052ba00;
LAB_0052baa0:
            pvVar13 = (void *)((ulong)pvVar22 & 0xfffffffffffffffc);
            pppppuVar15 = pppppuVar10 + 2;
            pvVar18 = pvVar13;
            do {
              pvVar18 = (void *)((long)pvVar18 - 4);
              pppppuVar15[-1] = ppppuVar12;
              pppppuVar15[-2] = ppppuVar12;
              pppppuVar15[1] = ppppuVar12;
              *pppppuVar15 = ppppuVar12;
              pppppuVar15 = pppppuVar15 + 4;
            } while (pvVar18 != (void *)0x0);
            if (pvVar22 != pvVar13) goto LAB_0052bac8;
LAB_0052badc:
            bVar2 = (byte)*param_13;
            uVar23 = local_a0 + (long)pvVar22 * 2;
          }
          if ((bVar2 & 1) != 0) {
            free((void *)param_13[1]);
          }
          *param_13 = uVar23;
          param_13[2] = (ulong)pvStack_90;
          param_13[1] = (ulong)local_98;
          param_13[4] = uStack_80;
          param_13[3] = local_88;
          param_13[6] = uStack_70;
          param_13[5] = local_78;
          goto LAB_0052bb80;
        }
        uVar21 = uVar23 >> 1;
        puVar14 = param_13 + 1;
        if ((uVar23 & 1) != 0) {
          puVar14 = (ulong *)param_13[1];
        }
        uVar23 = uVar21 - 1 & 0x1fffffffffffffff;
        if (uVar23 < 3) {
          local_c8 = (void *)0x0;
          puVar16 = puVar14;
LAB_0052bb5c:
          do {
            puVar19 = puVar16 + 1;
            local_c8 = (void *)(*puVar16 + (long)local_c8);
            puVar16 = puVar19;
          } while (puVar19 != puVar14 + uVar21);
        }
        else {
          uVar23 = uVar23 + 1;
          lVar9 = 0;
          lVar24 = 0;
          lVar25 = 0;
          lVar26 = 0;
          uVar17 = uVar23 & 0x3ffffffffffffffc;
          puVar19 = puVar14 + 2;
          puVar16 = puVar14 + uVar17;
          uVar8 = uVar17;
          do {
            puVar1 = puVar19 + -2;
            puVar5 = puVar19 + -1;
            puVar6 = puVar19 + 1;
            uVar20 = *puVar19;
            uVar8 = uVar8 - 4;
            puVar19 = puVar19 + 4;
            lVar9 = *puVar1 + lVar9;
            lVar24 = *puVar5 + lVar24;
            lVar25 = uVar20 + lVar25;
            lVar26 = *puVar6 + lVar26;
          } while (uVar8 != 0);
          local_c8 = (void *)(lVar25 + lVar9 + lVar26 + lVar24);
          if (uVar23 != uVar17) goto LAB_0052bb5c;
        }
        if (local_c8 == pvVar22) {
          *param_6 = uVar21;
          goto LAB_0052bb80;
        }
        local_b0 = ") != split_dim_size (";
        pcStack_a8 = "split_size_sum (";
        local_b8 = &DAT_001d047f;
        FUN_0052c00c(&local_a0,&pcStack_a8,&local_c8,&local_b0,&local_c0,&local_b8);
                    /* try { // try from 0052bbf8 to 0052bc0b has its CatchHandler @ 0052bc90 */
        FUN_0063aa48(param_1,2,2,&local_a0);
        if ((local_a0 & 1) != 0) {
          free(pvStack_90);
        }
      }
      else {
        uVar23 = 0;
        if (param_4 != 0) {
          uVar23 = (long)pvVar22 / (long)param_4;
        }
        iVar3 = (int)pvVar22 - (int)uVar23 * (int)param_4;
        *param_12 = iVar3;
        *param_6 = uVar23;
        uVar21 = uVar23;
        if (iVar3 != 0) {
          uVar21 = uVar23 + 1;
          *param_11 = 1;
          *param_6 = uVar21;
        }
        if (((long)uVar21 < 0) || (FUN_004ed958(param_13), (long)uVar23 < 0)) goto LAB_0052bc38;
        uVar21 = *param_13;
        puVar14 = (ulong *)param_13[1];
        uVar8 = uVar21 & 1;
        if (uVar23 != 0) {
          puVar19 = param_13 + 1;
          if (uVar8 != 0) {
            puVar19 = puVar14;
          }
          puVar14 = puVar19;
          uVar21 = uVar23;
          if (uVar23 < 4) {
LAB_0052b94c:
            *puVar14 = param_4;
            if ((1 < uVar21) && (puVar14[1] = param_4, uVar21 - 3 < 0xfffffffffffffffe)) {
              puVar14[2] = param_4;
            }
          }
          else {
            uVar17 = uVar23 & 0x7ffffffffffffffc;
            uVar21 = uVar23 & 3;
            puVar14 = puVar19 + uVar17;
            puVar19 = puVar19 + 2;
            uVar8 = uVar17;
            do {
              uVar8 = uVar8 - 4;
              puVar19[-1] = param_4;
              puVar19[-2] = param_4;
              puVar19[1] = param_4;
              *puVar19 = param_4;
              puVar19 = puVar19 + 4;
            } while (uVar8 != 0);
            if (uVar23 != uVar17) goto LAB_0052b94c;
          }
          uVar21 = *param_13;
          puVar14 = (ulong *)param_13[1];
          uVar8 = uVar21 & 1;
        }
        puVar19 = param_13 + 1;
        if (uVar8 != 0) {
          puVar19 = puVar14;
        }
        puVar14 = puVar19 + uVar23;
        uVar21 = (long)puVar19 + ((uVar21 >> 1) * 8 - (long)puVar14);
        uVar23 = (long)uVar21 >> 3;
        if (0 < (long)uVar23) {
          uVar8 = (ulong)*param_12;
          if (3 < uVar23) {
            uVar20 = uVar23 & 0x7ffffffffffffffc;
            puVar19 = puVar14 + 2;
            uVar17 = uVar20;
            do {
              uVar17 = uVar17 - 4;
              puVar19[-1] = uVar8;
              puVar19[-2] = uVar8;
              puVar19[1] = uVar8;
              *puVar19 = uVar8;
              puVar19 = puVar19 + 4;
            } while (uVar17 != 0);
            bVar7 = uVar23 == uVar20;
            puVar14 = puVar14 + uVar20;
            uVar23 = uVar21 >> 3 & 3;
            if (bVar7) goto LAB_0052bb80;
          }
          *puVar14 = uVar8;
          if ((1 < uVar23) && (puVar14[1] = uVar8, uVar23 - 3 < 0xfffffffffffffffe)) {
            puVar14[2] = uVar8;
          }
        }
LAB_0052bb80:
        *param_1 = 0;
      }
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
      goto LAB_0052bcc0;
    }
  }
LAB_0052bc38:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    plVar11 = (long *)FUN_00753a74(8);
    *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
LAB_0052bcc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052bcc4  FUN_0052bcc4 =====

void FUN_0052bcc4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0052bd04  FUN_0052bd04 =====

void FUN_0052bd04(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0052bd44  FUN_0052bd44 =====

void FUN_0052bd44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x10);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 0052bd80 to 0052bd87 has its CatchHandler @ 0052bdc4 */
  FUN_0058d0b4(plVar1 + 1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00793510;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 0052bdd8  FUN_0052bdd8 =====

void FUN_0052bdd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x28);
                    /* try { // try from 0052be00 to 0052be07 has its CatchHandler @ 0052be34 */
  FUN_0052a684(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 0052be48  FUN_0052be48 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0052be48(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0052bec4 to 0052becf has its CatchHandler @ 0052bff8 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 0052bee8 to 0052beef has its CatchHandler @ 0052bfd8 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 0052bf20 to 0052bf2b has its CatchHandler @ 0052bfd4 */
  FUN_00303e0c(local_178,__s,sVar5);
  FUN_004a2858(local_178,param_3,param_4,param_5,param_6);
                    /* try { // try from 0052bf48 to 0052bf53 has its CatchHandler @ 0052bfd0 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c00c  FUN_0052c00c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0052c00c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 0052c088 to 0052c093 has its CatchHandler @ 0052c1bc */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 0052c0ac to 0052c0b3 has its CatchHandler @ 0052c19c */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 0052c0e4 to 0052c0ef has its CatchHandler @ 0052c198 */
  FUN_00303e0c(local_178,__s,sVar5);
  FUN_0052c1d0(local_178,param_3,param_4,param_5,param_6);
                    /* try { // try from 0052c10c to 0052c117 has its CatchHandler @ 0052c194 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c1d0  FUN_0052c1d0 =====

void FUN_0052c1d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
                    /* try { // try from 0052c1f4 to 0052c1f7 has its CatchHandler @ 0052c258 */
  FUN_0071787c(param_1,*param_2);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 0052c208 to 0052c213 has its CatchHandler @ 0052c254 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 0052c218 to 0052c21f has its CatchHandler @ 0052c250 */
  FUN_0071755c(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 0052c230 to 0052c23b has its CatchHandler @ 0052c24c */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 0052c25c  FUN_0052c25c =====

void FUN_0052c25c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined *local_90;
  code *pcStack_88;
  undefined **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_98[0x1e] = 0;
  local_98[0xd] = 0;
  local_98[0xc] = 0;
  local_98[0xf] = 0;
  local_98[0xe] = 0;
  puVar9 = local_98 + 0x18;
  local_98[0x19] = 0;
  *puVar9 = 0;
  *(undefined4 *)(local_98 + 0xe) = 0x3f800000;
  local_98[1] = 0;
  *local_98 = 0;
  local_98[3] = 0;
  local_98[2] = 0;
  local_98[5] = 0;
  local_98[4] = 0;
  local_98[7] = 0;
  local_98[6] = 0;
  local_98[9] = 0;
  local_98[8] = 0;
  local_98[0xb] = 0;
  local_98[10] = 0;
  local_98[0x11] = 0;
  local_98[0x10] = 0;
  local_98[0x13] = 0;
  local_98[0x12] = 0;
  local_98[0x15] = 0;
  local_98[0x14] = 0;
  local_98[0x17] = 0;
  local_98[0x16] = 0;
  local_98[0x1b] = 0;
  local_98[0x1a] = 0;
  local_98[0x1d] = 0;
  local_98[0x1c] = 0;
  local_98[3] = uVar2;
  *puVar9 = 0;
  *(undefined1 *)(local_98 + 0x15) = 0;
  local_98[0x14] = 0;
  local_98[0x13] = 0;
  local_98[0x12] = 0;
  local_98[0x11] = 0;
  local_98[0x10] = 0;
  local_98[0xf] = 0;
  local_98[0x17] = puVar9;
  local_98[0x1c] = 0;
  local_98[0x1b] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = local_98 + 0x1b;
                    /* try { // try from 0052c2fc to 0052c32b has its CatchHandler @ 0052c4ec */
  uVar2 = FUN_0056d184();
  uVar3 = FUN_0056ce5c();
  uVar4 = FUN_0056dafc();
  uVar5 = FUN_0056cff0();
  uVar6 = FUN_0056e14c();
  local_b0 = (undefined8 *)FUN_00759c3c(0x28);
  local_a8 = local_b0 + 5;
  *local_b0 = uVar2;
  local_b0[1] = uVar3;
  local_b0[2] = uVar4;
  local_b0[3] = uVar5;
  local_b0[4] = uVar6;
                    /* try { // try from 0052c344 to 0052c38b has its CatchHandler @ 0052c50c */
  puStack_a0 = local_a8;
  uVar2 = FUN_00583ae0(&local_98,&DAT_001db320,&local_b0);
  uVar3 = FUN_0056d184();
  uVar4 = FUN_0056ce5c();
  uVar5 = FUN_0056dafc();
  uVar6 = FUN_0056cff0();
  uVar7 = FUN_0056e14c();
  local_c8 = (undefined8 *)FUN_00759c3c(0x28);
  local_c0 = local_c8 + 5;
  *local_c8 = uVar3;
  local_c8[1] = uVar4;
  local_c8[2] = uVar5;
  local_c8[3] = uVar6;
  local_c8[4] = uVar7;
                    /* try { // try from 0052c3a4 to 0052c3f7 has its CatchHandler @ 0052c4a0 */
  puStack_b8 = local_c0;
  uVar2 = FUN_00583ae0(uVar2,&DAT_001c8310,&local_c8);
  uVar2 = FUN_00583d4c(uVar2,0,0);
  uVar2 = FUN_00583770(uVar2,&DAT_001f2165);
  plVar8 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined8 *)(*plVar8 + 0x18) = DAT_001b7068;
  puVar9 = (undefined8 *)FUN_005839b8(plVar8,"CPUExecutionProvider");
  local_90 = PTR_DAT_007a2000;
  local_70 = &local_90;
  uVar2 = *puVar9;
  *puVar9 = 0;
  local_90 = local_90 + 0x10;
  *param_1 = uVar2;
  pcStack_88 = FUN_0052e6cc;
  param_1[2] = local_90;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_0052e6cc;
  param_1[8] = 0;
  if (local_c8 != (undefined8 *)0x0) {
    local_c0 = local_c8;
    free(local_c8);
  }
  if (local_b0 != (undefined8 *)0x0) {
    local_a8 = local_b0;
    free(local_b0);
  }
  puVar9 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar9);
    free(puVar9);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c53c  FUN_0052c53c =====

void FUN_0052c53c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 uVar4;
  void *local_d8 [3];
  long local_c0 [3];
  byte local_a8;
  undefined8 local_a7;
  undefined1 local_9f;
  void *local_98;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FUN_00759c3c(0x18);
  *plVar3 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 0052c588 to 0052c58f has its CatchHandler @ 0052c8d4 */
  FUN_0058d0b4(plVar3 + 1,param_2);
  *plVar3 = (long)&PTR_FUN_00793560;
  local_a8 = 4;
  local_a7 = CONCAT53(local_a7._3_5_,0x6f74);
                    /* try { // try from 0052c5b0 to 0052c5c3 has its CatchHandler @ 0052c8bc */
  FUN_00594f20(&local_58,param_2,&local_a8,&local_50);
  if ((local_a8 & 1) != 0) {
    free(local_98);
  }
  if (local_58 == (void *)0x0) {
    local_a8 = 0x10;
    *(int *)(plVar3 + 2) = (int)local_50;
    local_9f = 0;
    local_a7 = 0x6574617275746173;
                    /* try { // try from 0052c604 to 0052c617 has its CatchHandler @ 0052c850 */
    FUN_00594f20(local_d8,param_2,&local_a8,local_c0);
    pvVar2 = local_d8[0];
    local_d8[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar2 + 0x18));
      }
      free(pvVar2);
      local_c0[0] = 1;
    }
    if ((local_a8 & 1) != 0) {
      free(local_98);
    }
    pvVar2 = local_58;
    if ((local_c0[0] == 0) && (3 < local_50 - 0x11U)) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0052c760 to 0052c767 has its CatchHandler @ 0052c83c */
      FUN_00645c30(local_c0);
                    /* try { // try from 0052c768 to 0052c787 has its CatchHandler @ 0052c828 */
      FUN_0047488c(&local_a8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/cast_op.cc"
                   ,0x13e,"onnxruntime::(anonymous namespace)::Cast::Cast(const OpKernelInfo &)",
                   local_c0);
                    /* try { // try from 0052c788 to 0052c797 has its CatchHandler @ 0052c7ec */
      FUN_00479eac(local_d8,"Attribute saturate is only used for cast to float 8 types.");
      FUN_004792b8(uVar4,&local_a8,local_d8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0052c7b8 to 0052c7cf has its CatchHandler @ 0052c7d0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
    else {
      local_58 = (void *)0x0;
      *(bool *)((long)plVar3 + 0x14) = local_c0[0] == 1;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
      }
      *param_1 = plVar3;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
  else {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0052c6d0 to 0052c6d7 has its CatchHandler @ 0052c840 */
    FUN_00645c30(local_c0);
                    /* try { // try from 0052c6d8 to 0052c6f7 has its CatchHandler @ 0052c82c */
    FUN_0047488c(&local_a8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/cast_op.cc"
                 ,0x135,"onnxruntime::(anonymous namespace)::Cast::Cast(const OpKernelInfo &)",
                 local_c0);
                    /* try { // try from 0052c6f8 to 0052c707 has its CatchHandler @ 0052c808 */
    FUN_00479eac(local_d8,"Attribute to is not set.");
                    /* try { // try from 0052c70c to 0052c74f has its CatchHandler @ 0052c7f0 */
    FUN_00474a40(uVar4,&local_a8,"status.IsOK()",local_d8);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052c8f4  FUN_0052c8f4 =====

void FUN_0052c8f4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0052c934  FUN_0052c934 =====

/* WARNING: Removing unreachable block (ram,0x0052e20c) */
/* WARNING: Removing unreachable block (ram,0x0052d924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052c934(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined1 param_5 [16],undefined1 param_6 [16],
                 undefined1 param_7 [16],undefined1 param_8 [16],undefined1 param_9 [16],
                 long param_10,undefined8 param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  float fVar12;
  int iVar13;
  undefined1 auVar14 [16];
  uint6 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  uint6 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [13];
  undefined1 auVar29 [13];
  undefined1 auVar30 [13];
  uint3 uVar31;
  uint3 uVar32;
  uint3 uVar33;
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  int iVar37;
  float *pfVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  float *pfVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [14];
  long lVar56;
  undefined8 uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  byte *pbVar61;
  ulong uVar62;
  undefined1 (*pauVar63) [16];
  ulong *puVar64;
  undefined1 *puVar65;
  ushort *puVar66;
  ushort *puVar67;
  long *plVar68;
  int *piVar69;
  ulong uVar70;
  ulong uVar71;
  char *pcVar72;
  float *pfVar73;
  long lVar74;
  ulong *puVar75;
  uint *puVar76;
  undefined8 *puVar77;
  undefined4 *puVar78;
  undefined2 *puVar79;
  undefined1 (*pauVar80) [16];
  ushort *puVar81;
  long lVar82;
  byte *pbVar83;
  undefined8 *puVar84;
  long lVar85;
  long *plVar86;
  int *piVar87;
  undefined1 *puVar88;
  undefined2 uVar89;
  ushort *puVar90;
  ushort uVar91;
  int iVar92;
  byte bVar94;
  ushort uVar93;
  byte bVar95;
  undefined1 uVar96;
  byte bVar97;
  byte bVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined7 uVar103;
  undefined8 uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined4 uVar119;
  float fVar120;
  ulong uVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  ulong uVar149;
  undefined1 auVar150 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [12];
  undefined1 auVar159 [12];
  undefined1 auVar160 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float fVar174;
  uint uVar175;
  ulong uVar176;
  undefined1 auVar178 [12];
  undefined1 auVar179 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar189 [16];
  int iVar194;
  undefined1 uVar195;
  uint uVar196;
  uint uVar197;
  undefined1 auVar191 [16];
  uint uVar198;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  uint uVar199;
  uint uVar200;
  ulong uVar201;
  uint uVar218;
  undefined1 auVar202 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  uint uVar216;
  uint uVar220;
  undefined1 auVar213 [16];
  uint uVar217;
  uint uVar219;
  uint uVar221;
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  uint uVar222;
  ulong uVar223;
  uint uVar237;
  undefined1 in_q16 [16];
  undefined1 auVar224 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  uint uVar236;
  uint uVar238;
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
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
  undefined1 auVar261 [12];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar273 [16];
  undefined1 auVar262 [12];
  undefined1 auVar275 [16];
  undefined1 auVar263 [12];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [12];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
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
  uint5 uVar302;
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  int local_98 [2];
  long local_90;
  int local_88 [2];
  long local_80;
  long local_78;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar124 [16];
  undefined1 auVar130 [16];
  undefined1 auVar125 [16];
  undefined1 auVar131 [16];
  undefined1 auVar126 [16];
  undefined1 auVar132 [16];
  undefined1 auVar127 [16];
  undefined1 auVar133 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar177 [12];
  undefined1 auVar188 [16];
  undefined1 auVar190 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar272 [16];
  undefined1 auVar274 [16];
  undefined1 auVar276 [16];
  undefined1 auVar284 [16];
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar56 = FUN_004ae6a8(param_11,0);
  uVar57 = FUN_0058d3bc(param_11,0,lVar56 + 0x18);
  lVar58 = FUN_005cabcc(lVar56 + 0x18);
  if (lVar58 == 0) goto LAB_0052e4ac;
  iVar92 = *(int *)(param_10 + 0x10);
  iVar194 = *(int *)(*(long *)(lVar56 + 0x58) + 0x18);
  if (iVar194 == iVar92) {
    FUN_004eea94(lVar56,uVar57);
    goto LAB_0052e4ac;
  }
  if (*(char *)(param_10 + 0x14) == '\0') {
    if (3 < iVar92 - 0x11U) goto LAB_0052e4ac;
    local_90 = 0;
    if (iVar194 < 7) {
      if ((iVar194 == 1) || (local_98[0] = iVar194, iVar194 == 6)) goto LAB_0052cb48;
    }
    else if ((iVar194 == 7) || ((iVar194 == 10 || (local_98[0] = iVar194, iVar194 == 9)))) {
LAB_0052cb48:
      local_80 = 0;
      local_98[0] = iVar194;
      local_88[0] = iVar92;
      FUN_004bf480(local_88);
      local_90 = 1;
    }
  }
  else {
    lVar58 = 0;
    local_90 = 0;
    if (iVar194 == 9) {
      local_80 = 0;
      if (iVar92 == 6) {
        local_98[0] = iVar194;
        local_88[0] = iVar92;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar58 = FUN_004b4d38(lVar56);
        lVar60 = FUN_004b03ec(uVar57);
        auVar233 = _DAT_00200ab0;
        auVar292 = _DAT_002007c0;
        auVar287 = _DAT_00200580;
        auVar254 = _DAT_002000f0;
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
            auVar292 = param_4;
          }
          else {
            if (uVar59 < 0x20) {
              uVar62 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7fffffffffffffe0;
              pauVar63 = (undefined1 (*) [16])(lVar58 + 0x10);
              puVar77 = (undefined8 *)(lVar60 + 0x40);
              uVar62 = uVar70;
              do {
                auVar258 = pauVar63[-1];
                auVar251 = *pauVar63;
                uVar62 = uVar62 - 0x20;
                pauVar63 = pauVar63 + 2;
                auVar260 = a64_TBL(ZEXT816(0),auVar258,auVar254);
                auVar279 = a64_TBL(ZEXT816(0),auVar258,auVar292);
                in_q16 = a64_TBL(ZEXT816(0),auVar258,auVar233);
                param_6 = a64_TBL(ZEXT816(0),auVar258,auVar287);
                auVar294 = a64_TBL(ZEXT816(0),auVar251,auVar254);
                puVar77[-3] = auVar279._8_8_;
                puVar77[-4] = auVar279._0_8_;
                puVar77[-1] = auVar260._8_8_;
                puVar77[-2] = auVar260._0_8_;
                param_8 = a64_TBL(ZEXT816(0),auVar251,auVar292);
                param_9 = a64_TBL(ZEXT816(0),auVar251,auVar233);
                auVar258 = a64_TBL(ZEXT816(0),auVar251,auVar287);
                puVar77[-7] = param_6._8_8_;
                puVar77[-8] = param_6._0_8_;
                puVar77[-5] = in_q16._8_8_;
                puVar77[-6] = in_q16._0_8_;
                puVar77[5] = param_8._8_8_;
                puVar77[4] = param_8._0_8_;
                puVar77[7] = auVar294._8_8_;
                puVar77[6] = auVar294._0_8_;
                puVar77[1] = auVar258._8_8_;
                *puVar77 = auVar258._0_8_;
                puVar77[3] = param_9._8_8_;
                puVar77[2] = param_9._0_8_;
                puVar77 = puVar77 + 0x10;
              } while (uVar62 != 0);
              param_4 = auVar292;
              if (uVar59 == uVar70) goto LAB_0052cd2c;
              uVar62 = uVar70;
              if ((uVar59 & 0x18) == 0) goto LAB_0052cd10;
            }
            auVar287 = _DAT_00200ab0;
            auVar254 = _DAT_00200580;
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            lVar82 = uVar62 - uVar70;
            puVar64 = (ulong *)(lVar58 + uVar62);
            puVar77 = (undefined8 *)(lVar60 + uVar62 * 4);
            do {
              auVar122._0_8_ = *puVar64;
              auVar122._8_8_ = 0;
              lVar82 = lVar82 + 8;
              auVar233 = a64_TBL(ZEXT816(0),auVar122,auVar287);
              auVar292 = a64_TBL(ZEXT816(0),auVar122,auVar254);
              puVar77[1] = auVar292._8_8_;
              *puVar77 = auVar292._0_8_;
              puVar77[3] = auVar233._8_8_;
              puVar77[2] = auVar233._0_8_;
              puVar64 = puVar64 + 1;
              puVar77 = puVar77 + 4;
            } while (lVar82 != 0);
            param_4 = auVar292;
            if (uVar59 == uVar70) goto LAB_0052cd2c;
          }
LAB_0052cd10:
          lVar82 = uVar59 - uVar70;
          pbVar61 = (byte *)(lVar58 + uVar70);
          puVar76 = (uint *)(lVar60 + uVar70 * 4);
          do {
            lVar82 = lVar82 + -1;
            *puVar76 = (uint)*pbVar61;
            pbVar61 = pbVar61 + 1;
            puVar76 = puVar76 + 1;
            param_4 = auVar292;
          } while (lVar82 != 0);
        }
LAB_0052cd2c:
        lVar58 = 1;
        local_80 = 1;
LAB_0052cd3c:
        if (iVar92 != 1) goto LAB_0052d2e0;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar60 = FUN_004b4d38(lVar56);
        lVar82 = FUN_004aea28(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            if (uVar59 < 0x20) {
              uVar62 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7fffffffffffffe0;
              puVar77 = (undefined8 *)(lVar82 + 0x40);
              pauVar63 = (undefined1 (*) [16])(lVar60 + 0x10);
              uVar62 = uVar70;
              do {
                pauVar80 = pauVar63 + -1;
                auVar254 = *pauVar63;
                uVar62 = uVar62 - 0x20;
                pauVar63 = pauVar63 + 2;
                auVar287 = NEON_cmtst(*pauVar80,*pauVar80,1);
                auVar254 = NEON_cmtst(auVar254,auVar254,1);
                auVar292 = NEON_ext(auVar287,auVar287,8,1);
                auVar47._1_13_ = param_6._3_13_;
                auVar47[0] = auVar287[5];
                auVar152._0_4_ = auVar47._0_4_ << 0x10;
                auVar152._5_11_ = param_6._5_11_;
                auVar152[4] = auVar287[6];
                auVar154._7_9_ = param_6._7_9_;
                auVar154._0_6_ = auVar152._0_6_;
                auVar154[6] = auVar287[7];
                auVar150._2_14_ = auVar154._2_14_;
                auVar150[1] = 1;
                auVar150[0] = auVar287[4];
                auVar151._4_12_ = auVar154._4_12_;
                auVar151._0_3_ = auVar150._0_3_;
                auVar151[3] = 0;
                auVar153._6_10_ = auVar154._6_10_;
                auVar153._0_5_ = auVar151._0_5_;
                auVar153[5] = 1;
                auVar48._1_13_ = auVar287._3_13_;
                auVar48[0] = auVar287[1];
                auVar108._0_4_ = auVar48._0_4_ << 0x10;
                auVar108._5_11_ = auVar287._5_11_;
                auVar108[4] = auVar287[2];
                auVar110._7_9_ = auVar287._7_9_;
                auVar110._0_6_ = auVar108._0_6_;
                auVar110[6] = auVar287[3];
                auVar106._2_14_ = auVar110._2_14_;
                auVar106[0] = auVar287[0];
                auVar106[1] = 1;
                auVar107._4_12_ = auVar110._4_12_;
                auVar107._0_3_ = auVar106._0_3_;
                auVar107[3] = 0;
                auVar109._6_10_ = auVar110._6_10_;
                auVar109._0_5_ = auVar107._0_5_;
                auVar109[5] = 1;
                auVar287 = NEON_ext(auVar254,auVar254,8,1);
                auVar49._1_13_ = param_8._3_13_;
                auVar49[0] = auVar254[5];
                auVar181._0_4_ = auVar49._0_4_ << 0x10;
                auVar181._5_11_ = param_8._5_11_;
                auVar181[4] = auVar254[6];
                auVar183._7_9_ = param_8._7_9_;
                auVar183._0_6_ = auVar181._0_6_;
                auVar183[6] = auVar254[7];
                auVar179._2_14_ = auVar183._2_14_;
                auVar179[1] = 1;
                auVar179[0] = auVar254[4];
                auVar180._4_12_ = auVar183._4_12_;
                auVar180._0_3_ = auVar179._0_3_;
                auVar180[3] = 0;
                auVar182._6_10_ = auVar183._6_10_;
                auVar182._0_5_ = auVar180._0_5_;
                auVar182[5] = 1;
                auVar50._1_13_ = auVar254._3_13_;
                auVar50[0] = auVar254[1];
                auVar125._0_4_ = auVar50._0_4_ << 0x10;
                auVar125._5_11_ = auVar254._5_11_;
                auVar125[4] = auVar254[2];
                auVar127._7_9_ = auVar254._7_9_;
                auVar127._0_6_ = auVar125._0_6_;
                auVar127[6] = auVar254[3];
                auVar123._2_14_ = auVar127._2_14_;
                auVar123[0] = auVar254[0];
                auVar123[1] = 1;
                auVar124._4_12_ = auVar127._4_12_;
                auVar124._0_3_ = auVar123._0_3_;
                auVar124[3] = 0;
                auVar126._6_10_ = auVar127._6_10_;
                auVar126._0_5_ = auVar124._0_5_;
                auVar126[5] = 1;
                auVar51._1_13_ = param_9._3_13_;
                auVar51[0] = auVar292[5];
                auVar204._0_4_ = auVar51._0_4_ << 0x10;
                auVar204._5_11_ = param_9._5_11_;
                auVar204[4] = auVar292[6];
                auVar206._7_9_ = param_9._7_9_;
                auVar206._0_6_ = auVar204._0_6_;
                auVar206[6] = auVar292[7];
                auVar202._2_14_ = auVar206._2_14_;
                auVar202[1] = 1;
                auVar202[0] = auVar292[4];
                auVar203._4_12_ = auVar206._4_12_;
                auVar203._0_3_ = auVar202._0_3_;
                auVar203[3] = 0;
                auVar205._6_10_ = auVar206._6_10_;
                auVar205._0_5_ = auVar203._0_5_;
                auVar205[5] = 1;
                uVar149 = (ulong)auVar153._0_7_ & 0x1000100010001;
                auVar52._1_13_ = auVar292._3_13_;
                auVar52[0] = auVar292[1];
                auVar143._0_4_ = auVar52._0_4_ << 0x10;
                auVar143._5_11_ = auVar292._5_11_;
                auVar143[4] = auVar292[2];
                auVar145._7_9_ = auVar292._7_9_;
                auVar145._0_6_ = auVar143._0_6_;
                auVar145[6] = auVar292[3];
                auVar141._2_14_ = auVar145._2_14_;
                auVar141[0] = auVar292[0];
                auVar141[1] = 1;
                auVar142._4_12_ = auVar145._4_12_;
                auVar142._0_3_ = auVar141._0_3_;
                auVar142[3] = 0;
                auVar144._6_10_ = auVar145._6_10_;
                auVar144._0_5_ = auVar142._0_5_;
                auVar144[5] = 1;
                uVar71 = (ulong)auVar109._0_7_ & 0x1000100010001;
                auVar53._1_13_ = in_q16._3_13_;
                auVar53[0] = auVar287[5];
                auVar226._0_4_ = auVar53._0_4_ << 0x10;
                auVar226._5_11_ = in_q16._5_11_;
                auVar226[4] = auVar287[6];
                auVar228._7_9_ = in_q16._7_9_;
                auVar228._0_6_ = auVar226._0_6_;
                auVar228[6] = auVar287[7];
                auVar224._2_14_ = auVar228._2_14_;
                auVar224[1] = 1;
                auVar224[0] = auVar287[4];
                auVar225._4_12_ = auVar228._4_12_;
                auVar225._0_3_ = auVar224._0_3_;
                auVar225[3] = 0;
                auVar227._6_10_ = auVar228._6_10_;
                auVar227._0_5_ = auVar225._0_5_;
                auVar227[5] = 1;
                auVar54._1_13_ = auVar287._3_13_;
                auVar54[0] = auVar287[1];
                auVar162._0_4_ = auVar54._0_4_ << 0x10;
                auVar162._5_11_ = auVar287._5_11_;
                auVar162[4] = auVar287[2];
                auVar164._7_9_ = auVar287._7_9_;
                auVar164._0_6_ = auVar162._0_6_;
                auVar164[6] = auVar287[3];
                auVar160._2_14_ = auVar164._2_14_;
                auVar160[0] = auVar287[0];
                auVar160[1] = 1;
                auVar161._4_12_ = auVar164._4_12_;
                auVar161._0_3_ = auVar160._0_3_;
                auVar161[3] = 0;
                auVar163._6_10_ = auVar164._6_10_;
                auVar163._0_5_ = auVar161._0_5_;
                auVar163[5] = 1;
                uVar176 = (ulong)auVar182._0_7_ & 0x1000100010001;
                uVar121 = (ulong)auVar126._0_7_ & 0x1000100010001;
                auVar155._2_2_ = 0;
                auVar155._0_2_ = (ushort)uVar149;
                auVar155._4_2_ = (short)(uVar149 >> 0x10);
                auVar155._6_2_ = 0;
                auVar155._8_2_ = (short)(uVar149 >> 0x20);
                auVar155._10_2_ = 0;
                auVar155._12_2_ = (short)(uVar149 >> 0x30);
                auVar155._14_2_ = 0;
                auVar111._2_2_ = 0;
                auVar111._0_2_ = (ushort)uVar71;
                auVar111._4_2_ = (short)(uVar71 >> 0x10);
                auVar111._6_2_ = 0;
                auVar111._8_2_ = (short)(uVar71 >> 0x20);
                auVar111._10_2_ = 0;
                auVar111._12_2_ = (short)(uVar71 >> 0x30);
                auVar111._14_2_ = 0;
                uVar201 = (ulong)auVar205._0_7_ & 0x1000100010001;
                uVar71 = (ulong)auVar144._0_7_ & 0x1000100010001;
                uVar223 = (ulong)auVar227._0_7_ & 0x1000100010001;
                uVar149 = (ulong)auVar163._0_7_ & 0x1000100010001;
                auVar184._2_2_ = 0;
                auVar184._0_2_ = (ushort)uVar176;
                auVar184._4_2_ = (short)(uVar176 >> 0x10);
                auVar184._6_2_ = 0;
                auVar184._8_2_ = (short)(uVar176 >> 0x20);
                auVar184._10_2_ = 0;
                auVar184._12_2_ = (short)(uVar176 >> 0x30);
                auVar184._14_2_ = 0;
                auVar292 = NEON_ucvtf(auVar155,4);
                auVar128._2_2_ = 0;
                auVar128._0_2_ = (ushort)uVar121;
                auVar128._4_2_ = (short)(uVar121 >> 0x10);
                auVar128._6_2_ = 0;
                auVar128._8_2_ = (short)(uVar121 >> 0x20);
                auVar128._10_2_ = 0;
                auVar128._12_2_ = (short)(uVar121 >> 0x30);
                auVar128._14_2_ = 0;
                auVar254 = NEON_ucvtf(auVar111,4);
                auVar207._2_2_ = 0;
                auVar207._0_2_ = (ushort)uVar201;
                auVar207._4_2_ = (short)(uVar201 >> 0x10);
                auVar207._6_2_ = 0;
                auVar207._8_2_ = (short)(uVar201 >> 0x20);
                auVar207._10_2_ = 0;
                auVar207._12_2_ = (short)(uVar201 >> 0x30);
                auVar207._14_2_ = 0;
                auVar146._2_2_ = 0;
                auVar146._0_2_ = (ushort)uVar71;
                auVar146._4_2_ = (short)(uVar71 >> 0x10);
                auVar146._6_2_ = 0;
                auVar146._8_2_ = (short)(uVar71 >> 0x20);
                auVar146._10_2_ = 0;
                auVar146._12_2_ = (short)(uVar71 >> 0x30);
                auVar146._14_2_ = 0;
                in_q16._2_2_ = 0;
                in_q16._0_2_ = (ushort)uVar223;
                in_q16._4_2_ = (short)(uVar223 >> 0x10);
                in_q16._6_2_ = 0;
                in_q16._8_2_ = (short)(uVar223 >> 0x20);
                in_q16._10_2_ = 0;
                in_q16._12_2_ = (short)(uVar223 >> 0x30);
                in_q16._14_2_ = 0;
                auVar165._2_2_ = 0;
                auVar165._0_2_ = (ushort)uVar149;
                auVar165._4_2_ = (short)(uVar149 >> 0x10);
                auVar165._6_2_ = 0;
                auVar165._8_2_ = (short)(uVar149 >> 0x20);
                auVar165._10_2_ = 0;
                auVar165._12_2_ = (short)(uVar149 >> 0x30);
                auVar165._14_2_ = 0;
                param_8 = NEON_ucvtf(auVar184,4);
                param_4 = NEON_ucvtf(auVar128,4);
                param_9 = NEON_ucvtf(auVar207,4);
                auVar287 = NEON_ucvtf(auVar146,4);
                puVar77[-7] = auVar254._8_8_;
                puVar77[-8] = auVar254._0_8_;
                puVar77[-5] = auVar292._8_8_;
                puVar77[-6] = auVar292._0_8_;
                auVar254 = NEON_ucvtf(in_q16,4);
                param_6 = NEON_ucvtf(auVar165,4);
                puVar77[1] = param_4._8_8_;
                *puVar77 = param_4._0_8_;
                puVar77[3] = param_8._8_8_;
                puVar77[2] = param_8._0_8_;
                puVar77[-3] = auVar287._8_8_;
                puVar77[-4] = auVar287._0_8_;
                puVar77[-1] = param_9._8_8_;
                puVar77[-2] = param_9._0_8_;
                puVar77[5] = param_6._8_8_;
                puVar77[4] = param_6._0_8_;
                puVar77[7] = auVar254._8_8_;
                puVar77[6] = auVar254._0_8_;
                puVar77 = puVar77 + 0x10;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052d444;
              uVar62 = uVar70;
              if ((uVar59 & 0x18) == 0) goto LAB_0052d418;
            }
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            lVar85 = uVar62 - uVar70;
            puVar77 = (undefined8 *)(lVar82 + uVar62 * 4);
            puVar84 = (undefined8 *)(lVar60 + uVar62);
            do {
              lVar85 = lVar85 + 8;
              uVar104 = NEON_cmtst(*puVar84,*puVar84,1);
              auVar55._1_13_ = param_4._3_13_;
              auVar55[0] = (char)((ulong)uVar104 >> 0x28);
              auVar131._0_4_ = auVar55._0_4_ << 0x10;
              auVar131._5_11_ = param_4._5_11_;
              auVar131[4] = (char)((ulong)uVar104 >> 0x30);
              auVar133._7_9_ = param_4._7_9_;
              auVar133._0_6_ = auVar131._0_6_;
              auVar133[6] = (char)((ulong)uVar104 >> 0x38);
              auVar129._2_14_ = auVar133._2_14_;
              auVar129[1] = 1;
              auVar129[0] = (char)((ulong)uVar104 >> 0x20);
              auVar130._4_12_ = auVar133._4_12_;
              auVar130._0_3_ = auVar129._0_3_;
              auVar130[3] = 0;
              auVar132._6_10_ = auVar133._6_10_;
              auVar132._0_5_ = auVar130._0_5_;
              auVar132[5] = 1;
              uVar96 = (undefined1)((ulong)uVar104 >> 0x18);
              uVar103 = CONCAT16(uVar96,(uint6)CONCAT14((char)((ulong)uVar104 >> 0x10),
                                                        ((uint)((ulong)uVar104 >> 8) & 0xff) << 0x10
                                                       ));
              uVar71 = (ulong)auVar132._0_7_ & 0x1000100010001;
              uVar62 = (ulong)CONCAT16(uVar96,CONCAT15(1,(int5)CONCAT34((int3)((uint7)uVar103 >>
                                                                              0x20),
                                                                        (uint)(uint3)CONCAT52((int5)
                                                  ((uint7)uVar103 >> 0x10),CONCAT11(1,(char)uVar104)
                                                  )))) & 0x1000100010001;
              auVar134._2_2_ = 0;
              auVar134._0_2_ = (ushort)uVar71;
              auVar134._4_2_ = (short)(uVar71 >> 0x10);
              auVar134._6_2_ = 0;
              auVar134._8_2_ = (short)(uVar71 >> 0x20);
              auVar134._10_2_ = 0;
              auVar134._12_2_ = (short)(uVar71 >> 0x30);
              auVar134._14_2_ = 0;
              auVar112._2_2_ = 0;
              auVar112._0_2_ = (ushort)uVar62;
              auVar112._4_2_ = (short)(uVar62 >> 0x10);
              auVar112._6_2_ = 0;
              auVar112._8_2_ = (short)(uVar62 >> 0x20);
              auVar112._10_2_ = 0;
              auVar112._12_2_ = (short)(uVar62 >> 0x30);
              auVar112._14_2_ = 0;
              param_4 = NEON_ucvtf(auVar134,4);
              auVar254 = NEON_ucvtf(auVar112,4);
              puVar77[1] = auVar254._8_8_;
              *puVar77 = auVar254._0_8_;
              puVar77[3] = param_4._8_8_;
              puVar77[2] = param_4._0_8_;
              puVar77 = puVar77 + 4;
              puVar84 = puVar84 + 1;
            } while (lVar85 != 0);
            if (uVar59 == uVar70) goto LAB_0052d444;
          }
LAB_0052d418:
          lVar85 = uVar59 - uVar70;
          pcVar72 = (char *)(lVar60 + uVar70);
          puVar78 = (undefined4 *)(lVar82 + uVar70 * 4);
          do {
            uVar119 = 0x3f800000;
            if (*pcVar72 == '\0') {
              uVar119 = 0;
            }
            lVar85 = lVar85 + -1;
            *puVar78 = uVar119;
            pcVar72 = pcVar72 + 1;
            puVar78 = puVar78 + 1;
          } while (lVar85 != 0);
        }
LAB_0052d444:
        local_80 = lVar58 + 1;
      }
      else {
        local_98[0] = iVar194;
        local_88[0] = iVar92;
        if (iVar92 != 7) goto LAB_0052cd3c;
        local_80 = 0;
        local_90 = 0;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        pbVar61 = (byte *)FUN_004b4d38(lVar56);
        puVar64 = (ulong *)FUN_004bb758(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            if (uVar59 < 0x10) {
              uVar62 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7ffffffffffffff0;
              uVar62 = uVar70;
              pbVar83 = pbVar61;
              puVar75 = puVar64;
              do {
                bVar94 = pbVar83[1];
                bVar95 = pbVar83[3];
                bVar97 = pbVar83[5];
                bVar98 = pbVar83[7];
                bVar44 = pbVar83[9];
                bVar45 = pbVar83[0xb];
                bVar46 = pbVar83[0xf];
                uVar62 = uVar62 - 0x10;
                uVar149 = CONCAT35(0,CONCAT14(pbVar83[0xd],(uint)pbVar83[0xc]));
                auVar29[8] = pbVar83[0xe];
                auVar29._0_8_ = uVar149;
                auVar29._9_3_ = 0;
                auVar29[0xc] = bVar46;
                uVar121 = CONCAT26(0,(uint6)CONCAT14(bVar44,(uint)CONCAT12(bVar44,(ushort)pbVar83[8]
                                                                          )) & 0xffff0000ffff);
                auVar35[8] = pbVar83[10];
                auVar35._0_8_ = uVar121;
                auVar35._9_3_ = 0;
                auVar35[0xc] = bVar45;
                uVar176 = CONCAT35(0,CONCAT14(bVar97,(uint)pbVar83[4]));
                auVar30[8] = pbVar83[6];
                auVar30._0_8_ = uVar176;
                auVar30._9_3_ = 0;
                auVar30[0xc] = bVar98;
                uVar71 = CONCAT26(0,(uint6)CONCAT14(bVar94,(uint)CONCAT12(bVar94,(ushort)*pbVar83))
                                    & 0xffff0000ffff);
                auVar36[8] = pbVar83[2];
                auVar36._0_8_ = uVar71;
                auVar36._9_3_ = 0;
                auVar36[0xc] = bVar95;
                puVar75[0xd] = (ulong)pbVar83[0xd];
                puVar75[0xc] = uVar149 & 0xffffffff;
                puVar75[0xf] = (ulong)bVar46;
                puVar75[0xe] = (ulong)auVar29._8_5_ & 0xffffffff;
                puVar75[9] = (ulong)bVar44;
                puVar75[8] = uVar121 & 0xffffffff;
                puVar75[0xb] = (ulong)bVar45;
                puVar75[10] = (ulong)auVar35._8_5_ & 0xffffffff;
                puVar75[5] = (ulong)bVar97;
                puVar75[4] = uVar176 & 0xffffffff;
                puVar75[7] = (ulong)bVar98;
                puVar75[6] = (ulong)auVar30._8_5_ & 0xffffffff;
                puVar75[1] = (ulong)bVar94;
                *puVar75 = uVar71 & 0xffffffff;
                puVar75[3] = (ulong)bVar95;
                puVar75[2] = (ulong)auVar36._8_5_ & 0xffffffff;
                pbVar83 = pbVar83 + 0x10;
                puVar75 = puVar75 + 0x10;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052d2d0;
              uVar62 = uVar70;
              if (((uint)uVar59 >> 3 & 1) == 0) goto LAB_0052d2b4;
            }
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            lVar58 = uVar62 - uVar70;
            puVar75 = puVar64 + uVar62;
            pbVar83 = pbVar61 + uVar62;
            do {
              uVar104 = *(undefined8 *)pbVar83;
              lVar58 = lVar58 + 8;
              bVar94 = (byte)((ulong)uVar104 >> 8);
              bVar95 = (byte)((ulong)uVar104 >> 0x18);
              bVar97 = (byte)((ulong)uVar104 >> 0x28);
              bVar98 = (byte)((ulong)uVar104 >> 0x38);
              uVar71 = CONCAT35(0,CONCAT14(bVar97,(uint)(byte)((ulong)uVar104 >> 0x20)));
              auVar28[8] = (char)((ulong)uVar104 >> 0x30);
              auVar28._0_8_ = uVar71;
              auVar28._9_3_ = 0;
              auVar28[0xc] = bVar98;
              uVar62 = CONCAT26(0,(uint6)CONCAT14(bVar94,(uint)CONCAT12(bVar94,(ushort)(byte)uVar104
                                                                       )) & 0xffff0000ffff);
              auVar34[8] = (char)((ulong)uVar104 >> 0x10);
              auVar34._0_8_ = uVar62;
              auVar34._9_3_ = 0;
              auVar34[0xc] = bVar95;
              puVar75[5] = (ulong)bVar97;
              puVar75[4] = uVar71 & 0xffffffff;
              puVar75[7] = (ulong)bVar98;
              puVar75[6] = (ulong)auVar28._8_5_ & 0xffffffff;
              puVar75[1] = (ulong)bVar94;
              *puVar75 = uVar62 & 0xffffffff;
              puVar75[3] = (ulong)bVar95;
              puVar75[2] = (ulong)auVar34._8_5_ & 0xffffffff;
              puVar75 = puVar75 + 8;
              pbVar83 = pbVar83 + 8;
            } while (lVar58 != 0);
            if (uVar59 == uVar70) goto LAB_0052d2d0;
          }
LAB_0052d2b4:
          lVar58 = uVar59 - uVar70;
          pbVar61 = pbVar61 + uVar70;
          puVar64 = puVar64 + uVar70;
          do {
            lVar58 = lVar58 + -1;
            *puVar64 = (ulong)*pbVar61;
            pbVar61 = pbVar61 + 1;
            puVar64 = puVar64 + 1;
          } while (lVar58 != 0);
        }
LAB_0052d2d0:
        lVar58 = 1;
        local_80 = lVar58;
LAB_0052d2e0:
        if (iVar92 == 10) {
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          uVar62 = FUN_004b4d38(lVar56);
          uVar70 = FUN_004b074c(uVar57);
          if (0 < (long)uVar59) {
            if ((uVar59 < 8) || ((uVar70 < uVar62 + uVar59 && (uVar62 < uVar70 + uVar59 * 2)))) {
              uVar71 = 0;
            }
            else {
              if (uVar59 < 0x20) {
                uVar121 = 0;
              }
              else {
                uVar71 = uVar59 & 0x7fffffffffffffe0;
                pauVar63 = (undefined1 (*) [16])(uVar62 + 0x10);
                puVar65 = (undefined1 *)(uVar70 + 0x20);
                uVar121 = uVar71;
                do {
                  pauVar80 = pauVar63 + -1;
                  auVar254 = *pauVar63;
                  uVar121 = uVar121 - 0x20;
                  pauVar63 = pauVar63 + 2;
                  auVar287 = NEON_cmeq(*pauVar80,0,1);
                  auVar254 = NEON_cmeq(auVar254,0,1);
                  auVar116._0_8_ =
                       CONCAT17(~(auVar287[3] >> 7),
                                (uint7)(CONCAT15(~(auVar287[2] >> 7),
                                                 (uint5)(CONCAT13(~(auVar287[1] >> 7),
                                                                  (uint3)(~(auVar287[0] >> 7) & 0x3c
                                                                         ) << 8) & 0x3cffffff)) &
                                       0x3cffffffffff)) & 0x3cffffffffffffff;
                  auVar116[8] = 0;
                  auVar116[9] = ~(auVar287[4] >> 7) & 0x3c;
                  auVar116[10] = 0;
                  auVar116[0xb] = ~(auVar287[5] >> 7) & 0x3c;
                  auVar116[0xc] = 0;
                  auVar116[0xd] = ~(auVar287[6] >> 7) & 0x3c;
                  auVar116[0xe] = 0;
                  auVar116[0xf] = ~(auVar287[7] >> 7) & 0x3c;
                  *(long *)(puVar65 + -0x18) = auVar116._8_8_;
                  *(ulong *)(puVar65 + -0x20) = auVar116._0_8_;
                  *puVar65 = 0;
                  puVar65[1] = ~(auVar287[0xc] >> 7) & 0x3c;
                  puVar65[2] = 0;
                  puVar65[3] = ~(auVar287[0xd] >> 7) & 0x3c;
                  puVar65[4] = 0;
                  puVar65[5] = ~(auVar287[0xe] >> 7) & 0x3c;
                  puVar65[6] = 0;
                  puVar65[7] = ~(auVar287[0xf] >> 7) & 0x3c;
                  puVar65[-0x10] = 0;
                  puVar65[-0xf] = ~(auVar287[8] >> 7) & 0x3c;
                  puVar65[-0xe] = 0;
                  puVar65[-0xd] = ~(auVar287[9] >> 7) & 0x3c;
                  puVar65[-0xc] = 0;
                  puVar65[-0xb] = ~(auVar287[10] >> 7) & 0x3c;
                  puVar65[-10] = 0;
                  puVar65[-9] = ~(auVar287[0xb] >> 7) & 0x3c;
                  puVar65[0x10] = 0;
                  puVar65[0x11] = ~(auVar254[4] >> 7) & 0x3c;
                  puVar65[0x12] = 0;
                  puVar65[0x13] = ~(auVar254[5] >> 7) & 0x3c;
                  puVar65[0x14] = 0;
                  puVar65[0x15] = ~(auVar254[6] >> 7) & 0x3c;
                  puVar65[0x16] = 0;
                  puVar65[0x17] = ~(auVar254[7] >> 7) & 0x3c;
                  *puVar65 = 0;
                  puVar65[1] = ~(auVar254[0] >> 7) & 0x3c;
                  puVar65[2] = 0;
                  puVar65[3] = ~(auVar254[1] >> 7) & 0x3c;
                  puVar65[4] = 0;
                  puVar65[5] = ~(auVar254[2] >> 7) & 0x3c;
                  puVar65[6] = 0;
                  puVar65[7] = ~(auVar254[3] >> 7) & 0x3c;
                  puVar65[0x20] = 0;
                  puVar65[0x21] = ~(auVar254[0xc] >> 7) & 0x3c;
                  puVar65[0x22] = 0;
                  puVar65[0x23] = ~(auVar254[0xd] >> 7) & 0x3c;
                  puVar65[0x24] = 0;
                  puVar65[0x25] = ~(auVar254[0xe] >> 7) & 0x3c;
                  puVar65[0x26] = 0;
                  puVar65[0x27] = ~(auVar254[0xf] >> 7) & 0x3c;
                  puVar65[0x10] = 0;
                  puVar65[0x11] = ~(auVar254[8] >> 7) & 0x3c;
                  puVar65[0x12] = 0;
                  puVar65[0x13] = ~(auVar254[9] >> 7) & 0x3c;
                  puVar65[0x14] = 0;
                  puVar65[0x15] = ~(auVar254[10] >> 7) & 0x3c;
                  puVar65[0x16] = 0;
                  puVar65[0x17] = ~(auVar254[0xb] >> 7) & 0x3c;
                  puVar65 = puVar65 + 0x40;
                } while (uVar121 != 0);
                if (uVar59 == uVar71) goto LAB_0052d4c8;
                uVar121 = uVar71;
                if ((uVar59 & 0x18) == 0) goto LAB_0052d4a0;
              }
              uVar71 = uVar59 & 0x7ffffffffffffff8;
              lVar60 = uVar121 - uVar71;
              puVar64 = (ulong *)(uVar70 + uVar121 * 2);
              puVar77 = (undefined8 *)(uVar62 + uVar121);
              do {
                uVar104 = *puVar77;
                lVar60 = lVar60 + 8;
                auVar117[1] = 0;
                auVar117[0] = (byte)uVar104;
                auVar117[2] = (char)((ulong)uVar104 >> 8);
                auVar117[3] = 0;
                auVar117[4] = (char)((ulong)uVar104 >> 0x10);
                auVar117[5] = 0;
                auVar117[6] = (char)((ulong)uVar104 >> 0x18);
                auVar117[7] = 0;
                auVar117[8] = (char)((ulong)uVar104 >> 0x20);
                auVar117[9] = 0;
                auVar117[10] = (char)((ulong)uVar104 >> 0x28);
                auVar117[0xb] = 0;
                auVar117[0xc] = (char)((ulong)uVar104 >> 0x30);
                auVar117[0xd] = 0;
                auVar117[0xe] = (char)((ulong)uVar104 >> 0x38);
                auVar117[0xf] = 0;
                auVar254 = NEON_cmeq(auVar117,0,2);
                auVar118._0_8_ =
                     CONCAT17(~auVar254[7],
                              (uint7)(CONCAT15(~auVar254[5],
                                               (uint5)(CONCAT13(~auVar254[3],
                                                                (uint3)(~auVar254[1] & 0x3c) << 8) &
                                                      0x3cffffff)) & 0x3cffffffffff)) &
                     0x3cffffffffffffff;
                auVar118[8] = 0;
                auVar118[9] = ~auVar254[9] & 0x3c;
                auVar118[10] = 0;
                auVar118[0xb] = ~auVar254[0xb] & 0x3c;
                auVar118[0xc] = 0;
                auVar118[0xd] = ~auVar254[0xd] & 0x3c;
                auVar118[0xe] = 0;
                auVar118[0xf] = ~auVar254[0xf] & 0x3c;
                puVar64[1] = auVar118._8_8_;
                *puVar64 = auVar118._0_8_;
                puVar64 = puVar64 + 2;
                puVar77 = puVar77 + 1;
              } while (lVar60 != 0);
              if (uVar59 == uVar71) goto LAB_0052d4c8;
            }
LAB_0052d4a0:
            lVar60 = uVar59 - uVar71;
            pcVar72 = (char *)(uVar62 + uVar71);
            puVar79 = (undefined2 *)(uVar70 + uVar71 * 2);
            do {
              uVar89 = 0;
              if (*pcVar72 != '\0') {
                uVar89 = 0x3c00;
              }
              lVar60 = lVar60 + -1;
              *puVar79 = uVar89;
              pcVar72 = pcVar72 + 1;
              puVar79 = puVar79 + 1;
            } while (lVar60 != 0);
          }
LAB_0052d4c8:
          local_80 = lVar58 + 1;
        }
      }
      FUN_004bf480(local_88);
      iVar92 = *(int *)(param_10 + 0x10);
      lVar58 = 1;
      local_90 = 1;
LAB_0052d4ec:
      if (iVar194 != 7) goto LAB_0052d030;
      lVar60 = 0;
      local_80 = 0;
      local_88[0] = iVar92;
      if (iVar92 == 9) {
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        pauVar63 = (undefined1 (*) [16])FUN_004ba96c(lVar56);
        puVar64 = (ulong *)FUN_004bb908(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            if (uVar59 < 0x10) {
              uVar62 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7ffffffffffffff0;
              uVar62 = uVar70;
              pauVar80 = pauVar63;
              puVar75 = puVar64;
              do {
                uVar62 = uVar62 - 0x10;
                auVar254 = NEON_cmeq(pauVar80[7],0,8);
                auVar287 = NEON_cmeq(pauVar80[6],0,8);
                auVar233 = NEON_cmeq(pauVar80[3],0,8);
                auVar251 = NEON_cmeq(pauVar80[5],0,8);
                auVar258 = NEON_cmeq(pauVar80[4],0,8);
                auVar292 = NEON_cmeq(pauVar80[2],0,8);
                auVar279 = NEON_cmeq(pauVar80[1],0,8);
                auVar260 = NEON_cmeq(*pauVar80,0,8);
                auVar115._0_8_ =
                     CONCAT17(~auVar233[8],
                              CONCAT16(~auVar233[0],
                                       CONCAT15(~auVar292[8],
                                                CONCAT14(~auVar292[0],
                                                         CONCAT13(~auVar279[8],
                                                                  CONCAT12(~auVar279[0],
                                                                           CONCAT11(~auVar260[8],
                                                                                    ~auVar260[0]))))
                                               ))) & 0x101010101010101;
                auVar115[8] = ~auVar258[0] & 1;
                auVar115[9] = ~auVar258[8] & 1;
                auVar115[10] = ~auVar251[0] & 1;
                auVar115[0xb] = ~auVar251[8] & 1;
                auVar115[0xc] = ~auVar287[0] & 1;
                auVar115[0xd] = ~auVar287[8] & 1;
                auVar115[0xe] = ~auVar254[0] & 1;
                auVar115[0xf] = ~auVar254[8] & 1;
                puVar75[1] = auVar115._8_8_;
                *puVar75 = auVar115._0_8_;
                pauVar80 = pauVar80 + 8;
                puVar75 = puVar75 + 2;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052dabc;
              uVar62 = uVar70;
              if (((uint)uVar59 >> 3 & 1) == 0) goto LAB_0052da98;
            }
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            lVar60 = uVar62 - uVar70;
            pauVar80 = (undefined1 (*) [16])(*pauVar63 + uVar62 * 8);
            puVar75 = (ulong *)((long)puVar64 + uVar62);
            do {
              lVar60 = lVar60 + 8;
              auVar254 = NEON_cmeq(pauVar80[3],0,8);
              auVar287 = NEON_cmeq(pauVar80[2],0,8);
              auVar233 = NEON_cmeq(pauVar80[1],0,8);
              auVar292 = NEON_cmeq(*pauVar80,0,8);
              *puVar75 = CONCAT17(~auVar254[8],
                                  CONCAT16(~auVar254[0],
                                           CONCAT15(~auVar287[8],
                                                    CONCAT14(~auVar287[0],
                                                             CONCAT13(~auVar233[8],
                                                                      CONCAT12(~auVar233[0],
                                                                               CONCAT11(~auVar292[8]
                                                                                        ,~auVar292[0
                                                  ]))))))) & 0x101010101010101;
              pauVar80 = pauVar80 + 4;
              puVar75 = puVar75 + 1;
            } while (lVar60 != 0);
            if (uVar59 == uVar70) goto LAB_0052dabc;
          }
LAB_0052da98:
          lVar60 = uVar59 - uVar70;
          lVar82 = (long)puVar64 + uVar70;
          plVar68 = (long *)(*pauVar63 + uVar70 * 8);
          do {
            lVar60 = lVar60 + -1;
            *(bool *)lVar82 = *plVar68 != 0;
            lVar82 = lVar82 + 1;
            plVar68 = plVar68 + 1;
          } while (lVar60 != 0);
        }
LAB_0052dabc:
        lVar60 = 1;
        local_80 = 1;
LAB_0052dacc:
        if (iVar92 != 1) goto LAB_0052d654;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar82 = FUN_004ba96c(lVar56);
        lVar85 = FUN_004aea28(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            puVar77 = (undefined8 *)(lVar85 + 0x10);
            pauVar63 = (undefined1 (*) [16])(lVar82 + 0x20);
            uVar62 = uVar70;
            do {
              uVar62 = uVar62 - 8;
              auVar254 = NEON_scvtf(pauVar63[-2],8);
              auVar292 = NEON_scvtf(pauVar63[-1],8);
              auVar287 = NEON_scvtf(*pauVar63,8);
              auVar233 = NEON_scvtf(pauVar63[1],8);
              puVar77[-1] = CONCAT44((float)auVar292._8_8_,(float)auVar292._0_8_);
              puVar77[-2] = CONCAT44((float)auVar254._8_8_,(float)auVar254._0_8_);
              puVar77[1] = CONCAT44((float)auVar233._8_8_,(float)auVar233._0_8_);
              *puVar77 = CONCAT44((float)auVar287._8_8_,(float)auVar287._0_8_);
              puVar77 = puVar77 + 4;
              pauVar63 = pauVar63 + 4;
            } while (uVar62 != 0);
            if (uVar59 == uVar70) goto LAB_0052db7c;
          }
          lVar74 = uVar59 - uVar70;
          plVar68 = (long *)(lVar82 + uVar70 * 8);
          pfVar73 = (float *)(lVar85 + uVar70 * 4);
          do {
            lVar74 = lVar74 + -1;
            *pfVar73 = (float)*plVar68;
            plVar68 = plVar68 + 1;
            pfVar73 = pfVar73 + 1;
          } while (lVar74 != 0);
        }
LAB_0052db7c:
        local_80 = lVar60 + 1;
      }
      else {
        if (iVar92 != 6) goto LAB_0052dacc;
        local_80 = 0;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar60 = FUN_004ba96c(lVar56);
        lVar82 = FUN_004b03ec(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            puVar77 = (undefined8 *)(lVar82 + 0x10);
            pauVar63 = (undefined1 (*) [16])(lVar60 + 0x20);
            uVar62 = uVar70;
            do {
              uVar62 = uVar62 - 8;
              auVar100._0_8_ =
                   CONCAT44(*(undefined4 *)(pauVar63[-2] + 8),*(undefined4 *)pauVar63[-2]);
              auVar100._8_4_ = *(undefined4 *)pauVar63[-1];
              auVar100._12_4_ = *(undefined4 *)(pauVar63[-1] + 8);
              auVar113._0_8_ = CONCAT44(SUB164(*pauVar63,8),SUB164(*pauVar63,0));
              auVar113._8_4_ = *(undefined4 *)pauVar63[1];
              auVar113._12_4_ = *(undefined4 *)(pauVar63[1] + 8);
              puVar77[-1] = auVar100._8_8_;
              puVar77[-2] = auVar100._0_8_;
              puVar77[1] = auVar113._8_8_;
              *puVar77 = auVar113._0_8_;
              puVar77 = puVar77 + 4;
              pauVar63 = pauVar63 + 4;
            } while (uVar62 != 0);
            if (uVar59 == uVar70) goto LAB_0052d644;
          }
          lVar85 = uVar59 - uVar70;
          puVar77 = (undefined8 *)(lVar60 + uVar70 * 8);
          puVar78 = (undefined4 *)(lVar82 + uVar70 * 4);
          do {
            lVar85 = lVar85 + -1;
            *puVar78 = (int)*puVar77;
            puVar77 = puVar77 + 1;
            puVar78 = puVar78 + 1;
          } while (lVar85 != 0);
        }
LAB_0052d644:
        lVar60 = 1;
        local_80 = lVar60;
LAB_0052d654:
        if (iVar92 == 10) {
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          pauVar63 = (undefined1 (*) [16])FUN_004ba96c(lVar56);
          puVar65 = (undefined1 *)FUN_004b074c(uVar57);
          if (0 < (long)uVar59) {
            if ((uVar59 < 8) ||
               ((puVar65 < *pauVar63 + uVar59 * 8 &&
                (pauVar63 < (undefined1 (*) [16])(puVar65 + uVar59 * 2))))) {
              uVar62 = 0;
            }
            else {
              auVar102._8_4_ = 0xf000000;
              auVar102._0_8_ = 0xf0000000f000000;
              auVar102._12_4_ = 0xf000000;
              auVar157._8_2_ = 0x7c00;
              auVar157._0_8_ = 0x7c007c007c007c00;
              auVar157._10_2_ = 0x7c00;
              auVar157._12_2_ = 0x7c00;
              auVar157._14_2_ = 0x7c00;
              auVar148._8_4_ = 0x7f800000;
              auVar148._0_8_ = 0x7f8000007f800000;
              auVar148._12_4_ = 0x7f800000;
              auVar167._8_2_ = 0x7e00;
              auVar167._0_8_ = 0x7e007e007e007e00;
              auVar167._10_2_ = 0x7e00;
              auVar167._12_2_ = 0x7e00;
              auVar167._14_2_ = 0x7e00;
              auVar209._8_4_ = 0x38800000;
              auVar209._0_8_ = 0x3880000038800000;
              auVar209._12_4_ = 0x38800000;
              uVar62 = uVar59 & 0x7ffffffffffffff8;
              uVar70 = uVar62;
              puVar88 = puVar65;
              pauVar80 = pauVar63;
              do {
                auVar254 = *pauVar80;
                pauVar3 = pauVar80 + 1;
                uVar70 = uVar70 - 8;
                pauVar2 = pauVar80 + 2;
                pauVar4 = pauVar80 + 3;
                pauVar80 = pauVar80 + 4;
                auVar254 = NEON_scvtf(auVar254,8);
                auVar292 = NEON_scvtf(*pauVar3,8);
                auVar287 = NEON_scvtf(*pauVar2,8);
                auVar233 = NEON_scvtf(*pauVar4,8);
                auVar269._0_4_ = ABS((float)auVar254._0_8_);
                auVar269._4_4_ = ABS((float)auVar254._8_8_);
                auVar269._8_4_ = ABS((float)auVar292._0_8_);
                auVar269._12_4_ = ABS((float)auVar292._8_8_);
                auVar283._0_4_ = ABS((float)auVar287._0_8_);
                auVar283._4_4_ = ABS((float)auVar287._8_8_);
                auVar283._8_4_ = ABS((float)auVar233._0_8_);
                auVar283._12_4_ = ABS((float)auVar233._8_8_);
                auVar251 = NEON_cmhi(auVar269,auVar148,4);
                auVar258 = NEON_cmhi(auVar283,auVar148,4);
                auVar279 = NEON_cmhi(auVar209,auVar269,4);
                auVar270._0_4_ = (int)auVar269._0_4_ + -0x38800000;
                auVar270._4_4_ = (int)auVar269._4_4_ + -0x38800000;
                auVar270._8_4_ = (int)auVar269._8_4_ + -0x38800000;
                auVar270._12_4_ = (int)auVar269._12_4_ + -0x38800000;
                auVar260 = NEON_cmhi(auVar209,auVar283,4);
                uVar71 = CONCAT17((char)((uint)(float)auVar292._8_8_ >> 0x18),
                                  (uint7)(CONCAT15((char)((uint)(float)auVar292._0_8_ >> 0x18),
                                                   (uint5)(CONCAT13((char)((uint)(float)auVar254.
                                                  _8_8_ >> 0x18),
                                                  (uint3)(ushort)(((ushort)((uint)(float)auVar254.
                                                  _0_8_ >> 0x18) & 0x80) << 8)) & 0x8000ffff)) &
                                         0x8000ffffffff)) & 0x8000ffffffffffff;
                auVar291._2_2_ = auVar251._4_2_;
                auVar291._0_2_ = auVar251._0_2_;
                auVar291._4_2_ = auVar251._8_2_;
                auVar291._6_2_ = auVar251._12_2_;
                auVar291._8_2_ = auVar258._0_2_;
                auVar291._10_2_ = auVar258._4_2_;
                auVar291._12_2_ = auVar258._8_2_;
                auVar291._14_2_ = auVar258._12_2_;
                auVar297._0_4_ = (int)auVar283._0_4_ + -0x38800000;
                auVar297._4_4_ = (int)auVar283._4_4_ + -0x38800000;
                auVar297._8_4_ = (int)auVar283._8_4_ + -0x38800000;
                auVar297._12_4_ = (int)auVar283._12_4_ + -0x38800000;
                uVar302 = CONCAT14((char)((uint)auVar283._4_4_ >> 0xd),
                                   (uint)((byte)((uint)auVar283._0_4_ >> 0xd) & 1)) & 0x1ff00ffff;
                auVar254 = NEON_cmhi(auVar102,auVar270,4);
                auVar301._2_2_ = auVar279._4_2_;
                auVar301._0_2_ = auVar279._0_2_;
                auVar301._4_2_ = auVar279._8_2_;
                auVar301._6_2_ = auVar279._12_2_;
                auVar301._8_2_ = auVar260._0_2_;
                auVar301._10_2_ = auVar260._4_2_;
                auVar301._12_2_ = auVar260._8_2_;
                auVar301._14_2_ = auVar260._12_2_;
                uVar15 = CONCAT15((char)((uint)(auVar283._4_4_ + 0.5) >> 8),
                                  CONCAT14(SUB41(auVar283._4_4_ + 0.5,0),auVar283._0_4_ + 0.5)) &
                         0xffff0000ffff;
                uVar20 = CONCAT15((char)((uint)(auVar269._4_4_ + 0.5) >> 8),
                                  CONCAT14(SUB41(auVar269._4_4_ + 0.5,0),auVar269._0_4_ + 0.5)) &
                         0xffff0000ffff;
                auVar306._2_2_ = (short)(uVar20 >> 0x20);
                auVar306._0_2_ = (short)uVar20;
                auVar306._4_2_ = SUB42(auVar269._8_4_ + 0.5,0);
                auVar306._6_2_ = SUB42(auVar269._12_4_ + 0.5,0);
                auVar306._8_2_ = (short)uVar15;
                auVar306._10_2_ = (short)(uVar15 >> 0x20);
                auVar306._12_2_ = SUB42(auVar283._8_4_ + 0.5,0);
                auVar306._14_2_ = SUB42(auVar283._12_4_ + 0.5,0);
                auVar258 = NEON_cmhi(auVar102,auVar297,4);
                auVar292 = NEON_bsl(auVar291,auVar167,auVar157,1);
                uVar31 = (uint3)((int)auVar269._4_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar269._4_4_ >> 0xd) & 1) >> 0xd);
                uVar32 = (uint3)((int)auVar269._8_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar269._8_4_ >> 0xd) & 1) >> 0xd);
                uVar33 = (uint3)((int)auVar269._12_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar269._12_4_ >> 0xd) & 1) >> 0xd);
                auVar271._0_8_ =
                     CONCAT26(auVar254._12_2_,
                              CONCAT24(auVar254._8_2_,CONCAT22(auVar254._4_2_,auVar254._0_2_)));
                auVar271._8_2_ = auVar258._0_2_;
                auVar271._10_2_ = auVar258._4_2_;
                auVar271._12_2_ = auVar258._8_2_;
                auVar271._14_2_ = auVar258._12_2_;
                auVar254 = NEON_bit(auVar292,auVar306,auVar301,1);
                uVar175 = (uint)((int)auVar283._0_4_ + 0x8000fff + (int)uVar302) >> 0xd;
                uVar196 = (int)auVar283._4_4_ + 0x8000fff + (uint)(byte)(uVar302 >> 0x20) >> 0xd;
                uVar197 = (int)auVar283._8_4_ + 0x8000fff +
                          (uint)((byte)((uint)auVar283._8_4_ >> 0xd) & 1) >> 0xd;
                uVar199 = (int)auVar283._12_4_ + 0x8000fff +
                          (uint)((byte)((uint)auVar283._12_4_ >> 0xd) & 1) >> 0xd;
                auVar253._8_8_ = auVar271._8_8_;
                auVar253._0_8_ = auVar271._0_8_;
                auVar10[2] = (char)uVar31;
                auVar10._0_2_ =
                     (short)((int)auVar269._0_4_ + 0x8000fff +
                             (uint)((byte)((uint)auVar269._0_4_ >> 0xd) & 1) >> 0xd);
                auVar10[3] = (char)(uVar31 >> 8);
                auVar10[4] = (char)uVar32;
                auVar10[5] = (char)(uVar32 >> 8);
                auVar10[6] = (char)uVar33;
                auVar10[7] = (char)(uVar33 >> 8);
                auVar10[8] = (char)uVar175;
                auVar10[9] = (char)(uVar175 >> 8);
                auVar10[10] = (char)uVar196;
                auVar10[0xb] = (char)(uVar196 >> 8);
                auVar10[0xc] = (char)uVar197;
                auVar10[0xd] = (char)(uVar197 >> 8);
                auVar10[0xe] = (char)uVar199;
                auVar10[0xf] = (char)(uVar199 >> 8);
                auVar254 = NEON_bsl(auVar253,auVar10,auVar254,1);
                puVar88[0x10] = auVar254[8];
                puVar88[0x11] = auVar254[9] | (byte)((uint)(float)auVar287._0_8_ >> 0x18) & 0x80;
                puVar88[0x12] = auVar254[10];
                puVar88[0x13] = auVar254[0xb] | (byte)((uint)(float)auVar287._8_8_ >> 0x18) & 0x80;
                puVar88[0x14] = auVar254[0xc];
                puVar88[0x15] = auVar254[0xd] | (byte)((uint)(float)auVar233._0_8_ >> 0x18) & 0x80;
                puVar88[0x16] = auVar254[0xe];
                puVar88[0x17] = auVar254[0xf] | (byte)((uint)(float)auVar233._8_8_ >> 0x18) & 0x80;
                *puVar88 = auVar254[0];
                puVar88[1] = auVar254[1] | (byte)(uVar71 >> 8);
                puVar88[2] = auVar254[2];
                puVar88[3] = auVar254[3] | (byte)(uVar71 >> 0x18);
                puVar88[4] = auVar254[4];
                puVar88[5] = auVar254[5] | (byte)(uVar71 >> 0x28);
                puVar88[6] = auVar254[6];
                puVar88[7] = auVar254[7] | (byte)(uVar71 >> 0x38);
                puVar88 = puVar88 + 0x10;
              } while (uVar70 != 0);
              if (uVar59 == uVar62) goto LAB_0052dc5c;
            }
            lVar82 = uVar59 - uVar62;
            plVar68 = (long *)(*pauVar63 + uVar62 * 8);
            puVar66 = (ushort *)(puVar65 + uVar62 * 2);
            do {
              fVar120 = ABS((float)*plVar68);
              uVar93 = (ushort)((int)fVar120 + 0x8000fff + ((uint)fVar120 >> 0xd & 1) >> 0xd);
              if ((uint)fVar120 >> 0x17 < 0x71) {
                uVar93 = SUB42(fVar120 + 0.5,0);
              }
              uVar91 = 0x7e00;
              if ((uint)fVar120 < 0x7f800001) {
                uVar91 = 0x7c00;
              }
              if (0x477fffff < (uint)fVar120) {
                uVar93 = uVar91;
              }
              lVar82 = lVar82 + -1;
              *puVar66 = uVar93 | (ushort)(((uint)(float)*plVar68 >> 0x1f) << 0xf);
              plVar68 = plVar68 + 1;
              puVar66 = puVar66 + 1;
            } while (lVar82 != 0);
          }
LAB_0052dc5c:
          local_80 = lVar60 + 1;
        }
      }
      FUN_004bf480(local_88);
      iVar92 = *(int *)(param_10 + 0x10);
      lVar58 = lVar58 + 1;
      local_90 = lVar58;
    }
    else {
      local_98[0] = iVar194;
      if (iVar194 != 6) goto LAB_0052d4ec;
      local_90 = 0;
      lVar58 = 0;
      local_80 = 0;
      if (iVar92 == 9) {
        local_88[0] = iVar92;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar58 = FUN_004b023c(lVar56);
        lVar60 = FUN_004bb908(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            if (uVar59 < 0x20) {
              uVar62 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7fffffffffffffe0;
              puVar64 = (ulong *)(lVar60 + 0x10);
              pauVar63 = (undefined1 (*) [16])(lVar58 + 0x40);
              uVar62 = uVar70;
              do {
                uVar62 = uVar62 - 0x20;
                auVar254 = NEON_cmeq(pauVar63[-1],0,2);
                auVar292 = NEON_cmeq(pauVar63[-2],0,2);
                auVar233 = NEON_cmeq(pauVar63[-3],0,2);
                auVar287 = NEON_cmeq(pauVar63[-4],0,2);
                auVar251 = NEON_cmeq(pauVar63[3],0,2);
                auVar258 = NEON_cmeq(pauVar63[2],0,2);
                auVar279 = NEON_cmeq(pauVar63[1],0,2);
                auVar260 = NEON_cmeq(*pauVar63,0,2);
                auVar287._0_8_ =
                     CONCAT17(~auVar233[0xc],
                              CONCAT16(~auVar233[8],
                                       CONCAT15(~auVar233[4],
                                                CONCAT14(~auVar233[0],
                                                         CONCAT13(~auVar287[0xc],
                                                                  CONCAT12(~auVar287[8],
                                                                           CONCAT11(~auVar287[4],
                                                                                    ~auVar287[0]))))
                                               ))) & 0x101010101010101;
                auVar287[8] = ~auVar292[0] & 1;
                auVar287[9] = ~auVar292[4] & 1;
                auVar287[10] = ~auVar292[8] & 1;
                auVar287[0xb] = ~auVar292[0xc] & 1;
                auVar287[0xc] = ~auVar254[0] & 1;
                auVar287[0xd] = ~auVar254[4] & 1;
                auVar287[0xe] = ~auVar254[8] & 1;
                auVar287[0xf] = ~auVar254[0xc] & 1;
                auVar254._0_8_ =
                     CONCAT17(~auVar279[0xc],
                              CONCAT16(~auVar279[8],
                                       CONCAT15(~auVar279[4],
                                                CONCAT14(~auVar279[0],
                                                         CONCAT13(~auVar260[0xc],
                                                                  CONCAT12(~auVar260[8],
                                                                           CONCAT11(~auVar260[4],
                                                                                    ~auVar260[0]))))
                                               ))) & 0x101010101010101;
                auVar254[8] = ~auVar258[0] & 1;
                auVar254[9] = ~auVar258[4] & 1;
                auVar254[10] = ~auVar258[8] & 1;
                auVar254[0xb] = ~auVar258[0xc] & 1;
                auVar254[0xc] = ~auVar251[0] & 1;
                auVar254[0xd] = ~auVar251[4] & 1;
                auVar254[0xe] = ~auVar251[8] & 1;
                auVar254[0xf] = ~auVar251[0xc] & 1;
                puVar64[-1] = auVar287._8_8_;
                puVar64[-2] = auVar287._0_8_;
                puVar64[1] = auVar254._8_8_;
                *puVar64 = auVar254._0_8_;
                puVar64 = puVar64 + 4;
                pauVar63 = pauVar63 + 8;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052ce7c;
              uVar62 = uVar70;
              if ((uVar59 & 0x18) == 0) goto LAB_0052ce58;
            }
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            lVar82 = uVar62 - uVar70;
            pauVar63 = (undefined1 (*) [16])(lVar58 + uVar62 * 4);
            puVar64 = (ulong *)(lVar60 + uVar62);
            do {
              lVar82 = lVar82 + 8;
              auVar287 = NEON_cmeq(pauVar63[1],0,2);
              auVar254 = NEON_cmeq(*pauVar63,0,2);
              *puVar64 = CONCAT17(~auVar287[0xc],
                                  CONCAT16(~auVar287[8],
                                           CONCAT15(~auVar287[4],
                                                    CONCAT14(~auVar287[0],
                                                             CONCAT13(~auVar254[0xc],
                                                                      CONCAT12(~auVar254[8],
                                                                               CONCAT11(~auVar254[4]
                                                                                        ,~auVar254[0
                                                  ]))))))) & 0x101010101010101;
              pauVar63 = pauVar63 + 2;
              puVar64 = puVar64 + 1;
            } while (lVar82 != 0);
            if (uVar59 == uVar70) goto LAB_0052ce7c;
          }
LAB_0052ce58:
          lVar82 = uVar59 - uVar70;
          lVar60 = lVar60 + uVar70;
          piVar69 = (int *)(lVar58 + uVar70 * 4);
          do {
            lVar82 = lVar82 + -1;
            *(bool *)lVar60 = *piVar69 != 0;
            lVar60 = lVar60 + 1;
            piVar69 = piVar69 + 1;
          } while (lVar82 != 0);
        }
LAB_0052ce7c:
        lVar58 = 1;
        local_80 = 1;
LAB_0052ce8c:
        if (iVar92 != 1) goto LAB_0052cc50;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar60 = FUN_004b023c(lVar56);
        lVar82 = FUN_004aea28(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            puVar77 = (undefined8 *)(lVar82 + 0x10);
            pauVar63 = (undefined1 (*) [16])(lVar60 + 0x10);
            uVar62 = uVar70;
            do {
              pauVar80 = pauVar63 + -1;
              auVar254 = *pauVar63;
              uVar62 = uVar62 - 8;
              pauVar63 = pauVar63 + 2;
              auVar287 = NEON_scvtf(*pauVar80,4);
              auVar254 = NEON_scvtf(auVar254,4);
              puVar77[-1] = auVar287._8_8_;
              puVar77[-2] = auVar287._0_8_;
              puVar77[1] = auVar254._8_8_;
              *puVar77 = auVar254._0_8_;
              puVar77 = puVar77 + 4;
            } while (uVar62 != 0);
            if (uVar59 == uVar70) goto LAB_0052cf28;
          }
          lVar85 = uVar59 - uVar70;
          piVar69 = (int *)(lVar60 + uVar70 * 4);
          pfVar73 = (float *)(lVar82 + uVar70 * 4);
          do {
            lVar85 = lVar85 + -1;
            *pfVar73 = (float)*piVar69;
            piVar69 = piVar69 + 1;
            pfVar73 = pfVar73 + 1;
          } while (lVar85 != 0);
        }
LAB_0052cf28:
        local_80 = lVar58 + 1;
      }
      else {
        local_88[0] = iVar92;
        if (iVar92 != 7) goto LAB_0052ce8c;
        local_80 = 0;
        local_90 = 0;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        lVar58 = FUN_004b023c(lVar56);
        lVar60 = FUN_004bb758(uVar57);
        if (0 < (long)uVar59) {
          if (uVar59 < 8) {
            uVar70 = 0;
          }
          else {
            uVar70 = uVar59 & 0x7ffffffffffffff8;
            pauVar63 = (undefined1 (*) [16])(lVar58 + 0x10);
            plVar68 = (long *)(lVar60 + 0x20);
            uVar62 = uVar70;
            do {
              iVar11 = *(int *)pauVar63[-1];
              pauVar80 = pauVar63 + -1;
              iVar13 = *(int *)(pauVar63[-1] + 8);
              iVar37 = *(int *)(pauVar63[-1] + 0xc);
              auVar254 = *pauVar63;
              uVar62 = uVar62 - 8;
              pauVar63 = pauVar63 + 2;
              plVar68[-3] = (long)*(int *)(*pauVar80 + 4);
              plVar68[-4] = (long)iVar11;
              plVar68[-1] = (long)iVar37;
              plVar68[-2] = (long)iVar13;
              plVar68[1] = (long)auVar254._4_4_;
              *plVar68 = (long)auVar254._0_4_;
              plVar68[3] = (long)auVar254._12_4_;
              plVar68[2] = (long)auVar254._8_4_;
              plVar68 = plVar68 + 8;
            } while (uVar62 != 0);
            if (uVar59 == uVar70) goto LAB_0052cc40;
          }
          lVar82 = uVar59 - uVar70;
          piVar69 = (int *)(lVar58 + uVar70 * 4);
          plVar68 = (long *)(lVar60 + uVar70 * 8);
          do {
            lVar82 = lVar82 + -1;
            *plVar68 = (long)*piVar69;
            piVar69 = piVar69 + 1;
            plVar68 = plVar68 + 1;
          } while (lVar82 != 0);
        }
LAB_0052cc40:
        lVar58 = 1;
        local_80 = lVar58;
LAB_0052cc50:
        if (iVar92 == 10) {
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          pauVar63 = (undefined1 (*) [16])FUN_004b023c(lVar56);
          puVar65 = (undefined1 *)FUN_004b074c(uVar57);
          if (0 < (long)uVar59) {
            if ((uVar59 < 8) ||
               ((puVar65 < *pauVar63 + uVar59 * 4 &&
                (pauVar63 < (undefined1 (*) [16])(puVar65 + uVar59 * 2))))) {
              uVar62 = 0;
            }
            else {
              auVar292._8_4_ = 0xf000000;
              auVar292._0_8_ = 0xf0000000f000000;
              auVar292._12_4_ = 0xf000000;
              auVar258._8_2_ = 0x7c00;
              auVar258._0_8_ = 0x7c007c007c007c00;
              auVar258._10_2_ = 0x7c00;
              auVar258._12_2_ = 0x7c00;
              auVar258._14_2_ = 0x7c00;
              auVar233._8_4_ = 0x7f800000;
              auVar233._0_8_ = 0x7f8000007f800000;
              auVar233._12_4_ = 0x7f800000;
              auVar251._8_2_ = 0x7e00;
              auVar251._0_8_ = 0x7e007e007e007e00;
              auVar251._10_2_ = 0x7e00;
              auVar251._12_2_ = 0x7e00;
              auVar251._14_2_ = 0x7e00;
              auVar260._8_4_ = 0x38800000;
              auVar260._0_8_ = 0x3880000038800000;
              auVar260._12_4_ = 0x38800000;
              uVar62 = uVar59 & 0x7ffffffffffffff8;
              uVar70 = uVar62;
              puVar88 = puVar65;
              pauVar80 = pauVar63;
              do {
                uVar70 = uVar70 - 8;
                auVar254 = NEON_scvtf(*pauVar80,4);
                auVar287 = NEON_scvtf(pauVar80[1],4);
                auVar264._0_4_ = ABS(auVar254._0_4_);
                auVar264._4_4_ = ABS(auVar254._4_4_);
                auVar264._8_4_ = ABS(auVar254._8_4_);
                auVar264._12_4_ = ABS(auVar254._12_4_);
                auVar281._0_4_ = ABS(auVar287._0_4_);
                auVar281._4_4_ = ABS(auVar287._4_4_);
                auVar281._8_4_ = ABS(auVar287._8_4_);
                auVar281._12_4_ = ABS(auVar287._12_4_);
                auVar279 = NEON_cmhi(auVar281,auVar233,4);
                auVar294 = NEON_cmhi(auVar264,auVar233,4);
                auVar303 = NEON_cmhi(auVar260,auVar264,4);
                auVar265._0_4_ = (int)auVar264._0_4_ + -0x38800000;
                auVar265._4_4_ = (int)auVar264._4_4_ + -0x38800000;
                auVar265._8_4_ = (int)auVar264._8_4_ + -0x38800000;
                auVar265._12_4_ = (int)auVar264._12_4_ + -0x38800000;
                auVar289._2_2_ = auVar294._4_2_;
                auVar289._0_2_ = auVar294._0_2_;
                auVar289._4_2_ = auVar294._8_2_;
                auVar289._6_2_ = auVar294._12_2_;
                auVar289._8_2_ = auVar279._0_2_;
                auVar289._10_2_ = auVar279._4_2_;
                auVar289._12_2_ = auVar279._8_2_;
                auVar289._14_2_ = auVar279._12_2_;
                auVar295._0_4_ = (int)auVar281._0_4_ + -0x38800000;
                auVar295._4_4_ = (int)auVar281._4_4_ + -0x38800000;
                auVar295._8_4_ = (int)auVar281._8_4_ + -0x38800000;
                auVar295._12_4_ = (int)auVar281._12_4_ + -0x38800000;
                auVar279 = NEON_cmhi(auVar260,auVar281,4);
                uVar71 = CONCAT17(auVar254[0xf],
                                  (uint7)(CONCAT15(auVar254[0xb],
                                                   (uint5)(CONCAT13(auVar254[7],
                                                                    (uint3)(ushort)((auVar254._2_2_
                                                                                     >> 8 & 0x80) <<
                                                                                   8)) & 0x8000ffff)
                                                  ) & 0x8000ffffffff)) & 0x8000ffffffffffff;
                uVar302 = CONCAT14((char)((uint)auVar281._4_4_ >> 0xd),
                                   (uint)((byte)((uint)auVar281._0_4_ >> 0xd) & 1)) & 0x1ff00ffff;
                auVar254 = NEON_cmhi(auVar292,auVar265,4);
                auVar294 = NEON_cmhi(auVar292,auVar295,4);
                auVar299._2_2_ = auVar303._4_2_;
                auVar299._0_2_ = auVar303._0_2_;
                auVar299._4_2_ = auVar303._8_2_;
                auVar299._6_2_ = auVar303._12_2_;
                auVar299._8_2_ = auVar279._0_2_;
                auVar299._10_2_ = auVar279._4_2_;
                auVar299._12_2_ = auVar279._8_2_;
                auVar299._14_2_ = auVar279._12_2_;
                uVar15 = CONCAT15((char)((uint)(auVar281._4_4_ + 0.5) >> 8),
                                  CONCAT14(SUB41(auVar281._4_4_ + 0.5,0),auVar281._0_4_ + 0.5)) &
                         0xffff0000ffff;
                uVar20 = CONCAT15((char)((uint)(auVar264._4_4_ + 0.5) >> 8),
                                  CONCAT14(SUB41(auVar264._4_4_ + 0.5,0),auVar264._0_4_ + 0.5)) &
                         0xffff0000ffff;
                auVar304._2_2_ = (short)(uVar20 >> 0x20);
                auVar304._0_2_ = (short)uVar20;
                auVar304._4_2_ = SUB42(auVar264._8_4_ + 0.5,0);
                auVar304._6_2_ = SUB42(auVar264._12_4_ + 0.5,0);
                auVar304._8_2_ = (short)uVar15;
                auVar304._10_2_ = (short)(uVar15 >> 0x20);
                auVar304._12_2_ = SUB42(auVar281._8_4_ + 0.5,0);
                auVar304._14_2_ = SUB42(auVar281._12_4_ + 0.5,0);
                auVar279 = NEON_bsl(auVar289,auVar251,auVar258,1);
                auVar303._0_8_ =
                     CONCAT26(auVar254._12_2_,
                              CONCAT24(auVar254._8_2_,CONCAT22(auVar254._4_2_,auVar254._0_2_)));
                auVar303._8_2_ = auVar294._0_2_;
                auVar303._10_2_ = auVar294._4_2_;
                auVar303._12_2_ = auVar294._8_2_;
                auVar303._14_2_ = auVar294._12_2_;
                uVar31 = (uint3)((int)auVar264._4_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar264._4_4_ >> 0xd) & 1) >> 0xd);
                uVar32 = (uint3)((int)auVar264._8_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar264._8_4_ >> 0xd) & 1) >> 0xd);
                uVar33 = (uint3)((int)auVar264._12_4_ + 0x8000fff +
                                 (uint)((byte)((uint)auVar264._12_4_ >> 0xd) & 1) >> 0xd);
                auVar254 = NEON_bit(auVar279,auVar304,auVar299,1);
                uVar175 = (uint)((int)auVar281._0_4_ + 0x8000fff + (int)uVar302) >> 0xd;
                uVar196 = (int)auVar281._4_4_ + 0x8000fff + (uint)(byte)(uVar302 >> 0x20) >> 0xd;
                uVar197 = (int)auVar281._8_4_ + 0x8000fff +
                          (uint)((byte)((uint)auVar281._8_4_ >> 0xd) & 1) >> 0xd;
                uVar199 = (int)auVar281._12_4_ + 0x8000fff +
                          (uint)((byte)((uint)auVar281._12_4_ >> 0xd) & 1) >> 0xd;
                auVar294._8_8_ = auVar303._8_8_;
                auVar294._0_8_ = auVar303._0_8_;
                auVar279[2] = (char)uVar31;
                auVar279._0_2_ =
                     (short)((int)auVar264._0_4_ + 0x8000fff +
                             (uint)((byte)((uint)auVar264._0_4_ >> 0xd) & 1) >> 0xd);
                auVar279[3] = (char)(uVar31 >> 8);
                auVar279[4] = (char)uVar32;
                auVar279[5] = (char)(uVar32 >> 8);
                auVar279[6] = (char)uVar33;
                auVar279[7] = (char)(uVar33 >> 8);
                auVar279[8] = (char)uVar175;
                auVar279[9] = (char)(uVar175 >> 8);
                auVar279[10] = (char)uVar196;
                auVar279[0xb] = (char)(uVar196 >> 8);
                auVar279[0xc] = (char)uVar197;
                auVar279[0xd] = (char)(uVar197 >> 8);
                auVar279[0xe] = (char)uVar199;
                auVar279[0xf] = (char)(uVar199 >> 8);
                auVar254 = NEON_bsl(auVar294,auVar279,auVar254,1);
                puVar88[0x10] = auVar254[8];
                puVar88[0x11] = auVar254[9] | auVar287[3] & 0x80;
                puVar88[0x12] = auVar254[10];
                puVar88[0x13] = auVar254[0xb] | auVar287[7] & 0x80;
                puVar88[0x14] = auVar254[0xc];
                puVar88[0x15] = auVar254[0xd] | auVar287[0xb] & 0x80;
                puVar88[0x16] = auVar254[0xe];
                puVar88[0x17] = auVar254[0xf] | auVar287[0xf] & 0x80;
                *puVar88 = auVar254[0];
                puVar88[1] = auVar254[1] | (byte)(uVar71 >> 8);
                puVar88[2] = auVar254[2];
                puVar88[3] = auVar254[3] | (byte)(uVar71 >> 0x18);
                puVar88[4] = auVar254[4];
                puVar88[5] = auVar254[5] | (byte)(uVar71 >> 0x28);
                puVar88[6] = auVar254[6];
                puVar88[7] = auVar254[7] | (byte)(uVar71 >> 0x38);
                puVar88 = puVar88 + 0x10;
                pauVar80 = pauVar80 + 2;
              } while (uVar70 != 0);
              if (uVar59 == uVar62) goto LAB_0052d008;
            }
            lVar60 = uVar59 - uVar62;
            piVar69 = (int *)(*pauVar63 + uVar62 * 4);
            puVar66 = (ushort *)(puVar65 + uVar62 * 2);
            do {
              fVar120 = ABS((float)*piVar69);
              uVar93 = (ushort)((int)fVar120 + 0x8000fff + ((uint)fVar120 >> 0xd & 1) >> 0xd);
              if ((uint)fVar120 >> 0x17 < 0x71) {
                uVar93 = SUB42(fVar120 + 0.5,0);
              }
              uVar91 = 0x7e00;
              if ((uint)fVar120 < 0x7f800001) {
                uVar91 = 0x7c00;
              }
              if (0x477fffff < (uint)fVar120) {
                uVar93 = uVar91;
              }
              lVar60 = lVar60 + -1;
              *puVar66 = uVar93 | (ushort)(((uint)(float)*piVar69 >> 0x1f) << 0xf);
              piVar69 = piVar69 + 1;
              puVar66 = puVar66 + 1;
            } while (lVar60 != 0);
          }
LAB_0052d008:
          local_80 = lVar58 + 1;
        }
      }
      FUN_004bf480(local_88);
      iVar92 = *(int *)(param_10 + 0x10);
      lVar58 = 1;
      local_90 = lVar58;
LAB_0052d030:
      if (iVar194 == 1) {
        lVar60 = 0;
        local_80 = 0;
        local_88[0] = iVar92;
        if (iVar92 == 9) {
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          lVar60 = FUN_004ae878(lVar56);
          lVar82 = FUN_004bb908(uVar57);
          if (0 < (long)uVar59) {
            if (uVar59 < 8) {
              uVar70 = 0;
            }
            else {
              if (uVar59 < 0x20) {
                uVar62 = 0;
              }
              else {
                uVar70 = uVar59 & 0x7fffffffffffffe0;
                puVar64 = (ulong *)(lVar82 + 0x10);
                pauVar63 = (undefined1 (*) [16])(lVar60 + 0x40);
                uVar62 = uVar70;
                do {
                  uVar62 = uVar62 - 0x20;
                  auVar254 = NEON_fcmeq(pauVar63[-1],0,4);
                  auVar287 = NEON_fcmeq(pauVar63[-2],0,4);
                  auVar233 = NEON_fcmeq(pauVar63[-3],0,4);
                  auVar292 = NEON_fcmeq(pauVar63[-4],0,4);
                  auVar251 = NEON_fcmeq(pauVar63[3],0,4);
                  auVar258 = NEON_fcmeq(pauVar63[2],0,4);
                  auVar279 = NEON_fcmeq(pauVar63[1],0,4);
                  auVar260 = NEON_fcmeq(*pauVar63,0,4);
                  auVar114._0_8_ =
                       CONCAT17(~auVar233[0xc],
                                CONCAT16(~auVar233[8],
                                         CONCAT15(~auVar233[4],
                                                  CONCAT14(~auVar233[0],
                                                           CONCAT13(~auVar292[0xc],
                                                                    CONCAT12(~auVar292[8],
                                                                             CONCAT11(~auVar292[4],
                                                                                      ~auVar292[0]))
                                                                   ))))) & 0x101010101010101;
                  auVar114[8] = ~auVar287[0] & 1;
                  auVar114[9] = ~auVar287[4] & 1;
                  auVar114[10] = ~auVar287[8] & 1;
                  auVar114[0xb] = ~auVar287[0xc] & 1;
                  auVar114[0xc] = ~auVar254[0] & 1;
                  auVar114[0xd] = ~auVar254[4] & 1;
                  auVar114[0xe] = ~auVar254[8] & 1;
                  auVar114[0xf] = ~auVar254[0xc] & 1;
                  auVar135._0_8_ =
                       CONCAT17(~auVar279[0xc],
                                CONCAT16(~auVar279[8],
                                         CONCAT15(~auVar279[4],
                                                  CONCAT14(~auVar279[0],
                                                           CONCAT13(~auVar260[0xc],
                                                                    CONCAT12(~auVar260[8],
                                                                             CONCAT11(~auVar260[4],
                                                                                      ~auVar260[0]))
                                                                   ))))) & 0x101010101010101;
                  auVar135[8] = ~auVar258[0] & 1;
                  auVar135[9] = ~auVar258[4] & 1;
                  auVar135[10] = ~auVar258[8] & 1;
                  auVar135[0xb] = ~auVar258[0xc] & 1;
                  auVar135[0xc] = ~auVar251[0] & 1;
                  auVar135[0xd] = ~auVar251[4] & 1;
                  auVar135[0xe] = ~auVar251[8] & 1;
                  auVar135[0xf] = ~auVar251[0xc] & 1;
                  puVar64[-1] = auVar114._8_8_;
                  puVar64[-2] = auVar114._0_8_;
                  puVar64[1] = auVar135._8_8_;
                  *puVar64 = auVar135._0_8_;
                  puVar64 = puVar64 + 4;
                  pauVar63 = pauVar63 + 8;
                } while (uVar62 != 0);
                if (uVar59 == uVar70) goto LAB_0052d760;
                uVar62 = uVar70;
                if ((uVar59 & 0x18) == 0) goto LAB_0052d73c;
              }
              uVar70 = uVar59 & 0x7ffffffffffffff8;
              lVar85 = uVar62 - uVar70;
              pauVar63 = (undefined1 (*) [16])(lVar60 + uVar62 * 4);
              puVar64 = (ulong *)(lVar82 + uVar62);
              do {
                lVar85 = lVar85 + 8;
                auVar287 = NEON_fcmeq(pauVar63[1],0,4);
                auVar254 = NEON_fcmeq(*pauVar63,0,4);
                *puVar64 = CONCAT17(~auVar287[0xc],
                                    CONCAT16(~auVar287[8],
                                             CONCAT15(~auVar287[4],
                                                      CONCAT14(~auVar287[0],
                                                               CONCAT13(~auVar254[0xc],
                                                                        CONCAT12(~auVar254[8],
                                                                                 CONCAT11(~auVar254[
                                                  4],~auVar254[0]))))))) & 0x101010101010101;
                pauVar63 = pauVar63 + 2;
                puVar64 = puVar64 + 1;
              } while (lVar85 != 0);
              if (uVar59 == uVar70) goto LAB_0052d760;
            }
LAB_0052d73c:
            lVar85 = uVar59 - uVar70;
            lVar82 = lVar82 + uVar70;
            pfVar73 = (float *)(lVar60 + uVar70 * 4);
            do {
              lVar85 = lVar85 + -1;
              *(bool *)lVar82 = *pfVar73 != 0.0;
              lVar82 = lVar82 + 1;
              pfVar73 = pfVar73 + 1;
            } while (lVar85 != 0);
          }
LAB_0052d760:
          lVar60 = 1;
          local_80 = 1;
LAB_0052d770:
          if (iVar92 != 7) goto LAB_0052d144;
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          lVar56 = FUN_004ae878(lVar56);
          lVar82 = FUN_004bb758(uVar57);
          if (0 < (long)uVar59) {
            if (uVar59 < 8) {
              uVar70 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7ffffffffffffff8;
              pauVar63 = (undefined1 (*) [16])(lVar56 + 0x10);
              plVar68 = (long *)(lVar82 + 0x20);
              uVar62 = uVar70;
              do {
                fVar120 = *(float *)pauVar63[-1];
                pauVar80 = pauVar63 + -1;
                fVar174 = *(float *)(pauVar63[-1] + 8);
                fVar12 = *(float *)(pauVar63[-1] + 0xc);
                auVar254 = *pauVar63;
                uVar62 = uVar62 - 8;
                pauVar63 = pauVar63 + 2;
                plVar68[-3] = (long)*(float *)(*pauVar80 + 4);
                plVar68[-4] = (long)fVar120;
                plVar68[-1] = (long)fVar12;
                plVar68[-2] = (long)fVar174;
                plVar68[1] = (long)auVar254._4_4_;
                *plVar68 = (long)auVar254._0_4_;
                plVar68[3] = (long)auVar254._12_4_;
                plVar68[2] = (long)auVar254._8_4_;
                plVar68 = plVar68 + 8;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052d820;
            }
            lVar85 = uVar59 - uVar70;
            pfVar73 = (float *)(lVar56 + uVar70 * 4);
            plVar68 = (long *)(lVar82 + uVar70 * 8);
            do {
              lVar85 = lVar85 + -1;
              *plVar68 = (long)*pfVar73;
              pfVar73 = pfVar73 + 1;
              plVar68 = plVar68 + 1;
            } while (lVar85 != 0);
          }
LAB_0052d820:
          local_80 = lVar60 + 1;
        }
        else {
          if (iVar92 != 6) goto LAB_0052d770;
          local_80 = 0;
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          lVar60 = FUN_004ae878(lVar56);
          lVar82 = FUN_004b03ec(uVar57);
          if (0 < (long)uVar59) {
            if (uVar59 < 8) {
              uVar70 = 0;
            }
            else {
              uVar70 = uVar59 & 0x7ffffffffffffff8;
              puVar77 = (undefined8 *)(lVar82 + 0x10);
              pfVar73 = (float *)(lVar60 + 0x10);
              uVar62 = uVar70;
              do {
                pfVar1 = pfVar73 + -4;
                pfVar38 = pfVar73 + -3;
                pfVar39 = pfVar73 + -2;
                pfVar40 = pfVar73 + -1;
                fVar120 = *pfVar73;
                pfVar41 = pfVar73 + 1;
                pfVar42 = pfVar73 + 2;
                pfVar43 = pfVar73 + 3;
                uVar62 = uVar62 - 8;
                pfVar73 = pfVar73 + 8;
                auVar99._0_8_ = CONCAT44((int)*pfVar38,(int)*pfVar1);
                auVar99._8_4_ = (int)*pfVar39;
                auVar99._12_4_ = (int)*pfVar40;
                auVar105._0_8_ = CONCAT44((int)*pfVar41,(int)fVar120);
                auVar105._8_4_ = (int)*pfVar42;
                auVar105._12_4_ = (int)*pfVar43;
                puVar77[-1] = auVar99._8_8_;
                puVar77[-2] = auVar99._0_8_;
                puVar77[1] = auVar105._8_8_;
                *puVar77 = auVar105._0_8_;
                puVar77 = puVar77 + 4;
              } while (uVar62 != 0);
              if (uVar59 == uVar70) goto LAB_0052d134;
            }
            lVar85 = uVar59 - uVar70;
            pfVar73 = (float *)(lVar60 + uVar70 * 4);
            piVar69 = (int *)(lVar82 + uVar70 * 4);
            do {
              lVar85 = lVar85 + -1;
              *piVar69 = (int)*pfVar73;
              pfVar73 = pfVar73 + 1;
              piVar69 = piVar69 + 1;
            } while (lVar85 != 0);
          }
LAB_0052d134:
          lVar60 = 1;
          local_80 = lVar60;
LAB_0052d144:
          if (iVar92 == 10) {
            uVar59 = FUN_005cabcc(lVar56 + 0x18);
            pauVar63 = (undefined1 (*) [16])FUN_004ae878(lVar56);
            puVar65 = (undefined1 *)FUN_004b074c(uVar57);
            if (0 < (long)uVar59) {
              if ((uVar59 < 8) ||
                 ((puVar65 < *pauVar63 + uVar59 * 4 &&
                  (pauVar63 < (undefined1 (*) [16])(puVar65 + uVar59 * 2))))) {
                uVar62 = 0;
              }
              else {
                auVar101._8_4_ = 0xf000000;
                auVar101._0_8_ = 0xf0000000f000000;
                auVar101._12_4_ = 0xf000000;
                auVar156._8_2_ = 0x7c00;
                auVar156._0_8_ = 0x7c007c007c007c00;
                auVar156._10_2_ = 0x7c00;
                auVar156._12_2_ = 0x7c00;
                auVar156._14_2_ = 0x7c00;
                auVar147._8_4_ = 0x7f800000;
                auVar147._0_8_ = 0x7f8000007f800000;
                auVar147._12_4_ = 0x7f800000;
                auVar166._8_2_ = 0x7e00;
                auVar166._0_8_ = 0x7e007e007e007e00;
                auVar166._10_2_ = 0x7e00;
                auVar166._12_2_ = 0x7e00;
                auVar166._14_2_ = 0x7e00;
                auVar208._8_4_ = 0x38800000;
                auVar208._0_8_ = 0x3880000038800000;
                auVar208._12_4_ = 0x38800000;
                uVar62 = uVar59 & 0x7ffffffffffffff8;
                uVar70 = uVar62;
                puVar88 = puVar65;
                pauVar80 = pauVar63;
                do {
                  auVar254 = *pauVar80;
                  auVar287 = pauVar80[1];
                  uVar70 = uVar70 - 8;
                  auVar266._0_4_ = ABS(auVar254._0_4_);
                  auVar266._4_4_ = ABS(auVar254._4_4_);
                  auVar266._8_4_ = ABS(auVar254._8_4_);
                  auVar266._12_4_ = ABS(auVar254._12_4_);
                  auVar282._0_4_ = ABS(auVar287._0_4_);
                  auVar282._4_4_ = ABS(auVar287._4_4_);
                  auVar282._8_4_ = ABS(auVar287._8_4_);
                  auVar282._12_4_ = ABS(auVar287._12_4_);
                  auVar292 = NEON_cmhi(auVar282,auVar147,4);
                  auVar233 = NEON_cmhi(auVar266,auVar147,4);
                  auVar258 = NEON_cmhi(auVar208,auVar266,4);
                  auVar267._0_4_ = (int)auVar266._0_4_ + -0x38800000;
                  auVar267._4_4_ = (int)auVar266._4_4_ + -0x38800000;
                  auVar267._8_4_ = (int)auVar266._8_4_ + -0x38800000;
                  auVar267._12_4_ = (int)auVar266._12_4_ + -0x38800000;
                  auVar290._2_2_ = auVar233._4_2_;
                  auVar290._0_2_ = auVar233._0_2_;
                  auVar290._4_2_ = auVar233._8_2_;
                  auVar290._6_2_ = auVar233._12_2_;
                  auVar290._8_2_ = auVar292._0_2_;
                  auVar290._10_2_ = auVar292._4_2_;
                  auVar290._12_2_ = auVar292._8_2_;
                  auVar290._14_2_ = auVar292._12_2_;
                  auVar296._0_4_ = (int)auVar282._0_4_ + -0x38800000;
                  auVar296._4_4_ = (int)auVar282._4_4_ + -0x38800000;
                  auVar296._8_4_ = (int)auVar282._8_4_ + -0x38800000;
                  auVar296._12_4_ = (int)auVar282._12_4_ + -0x38800000;
                  auVar292 = NEON_cmhi(auVar208,auVar282,4);
                  uVar71 = CONCAT17(auVar254[0xf],
                                    (uint7)(CONCAT15(auVar254[0xb],
                                                     (uint5)(CONCAT13(auVar254[7],
                                                                      (uint3)(ushort)((auVar254.
                                                  _2_2_ >> 8 & 0x80) << 8)) & 0x8000ffff)) &
                                           0x8000ffffffff)) & 0x8000ffffffffffff;
                  uVar302 = CONCAT14((char)((uint)auVar282._4_4_ >> 0xd),
                                     (uint)((byte)((uint)auVar282._0_4_ >> 0xd) & 1)) & 0x1ff00ffff;
                  auVar254 = NEON_cmhi(auVar101,auVar267,4);
                  auVar233 = NEON_cmhi(auVar101,auVar296,4);
                  auVar300._2_2_ = auVar258._4_2_;
                  auVar300._0_2_ = auVar258._0_2_;
                  auVar300._4_2_ = auVar258._8_2_;
                  auVar300._6_2_ = auVar258._12_2_;
                  auVar300._8_2_ = auVar292._0_2_;
                  auVar300._10_2_ = auVar292._4_2_;
                  auVar300._12_2_ = auVar292._8_2_;
                  auVar300._14_2_ = auVar292._12_2_;
                  uVar15 = CONCAT15((char)((uint)(auVar282._4_4_ + 0.5) >> 8),
                                    CONCAT14(SUB41(auVar282._4_4_ + 0.5,0),auVar282._0_4_ + 0.5)) &
                           0xffff0000ffff;
                  uVar20 = CONCAT15((char)((uint)(auVar266._4_4_ + 0.5) >> 8),
                                    CONCAT14(SUB41(auVar266._4_4_ + 0.5,0),auVar266._0_4_ + 0.5)) &
                           0xffff0000ffff;
                  auVar305._2_2_ = (short)(uVar20 >> 0x20);
                  auVar305._0_2_ = (short)uVar20;
                  auVar305._4_2_ = SUB42(auVar266._8_4_ + 0.5,0);
                  auVar305._6_2_ = SUB42(auVar266._12_4_ + 0.5,0);
                  auVar305._8_2_ = (short)uVar15;
                  auVar305._10_2_ = (short)(uVar15 >> 0x20);
                  auVar305._12_2_ = SUB42(auVar282._8_4_ + 0.5,0);
                  auVar305._14_2_ = SUB42(auVar282._12_4_ + 0.5,0);
                  auVar292 = NEON_bsl(auVar290,auVar166,auVar156,1);
                  auVar268._0_8_ =
                       CONCAT26(auVar254._12_2_,
                                CONCAT24(auVar254._8_2_,CONCAT22(auVar254._4_2_,auVar254._0_2_)));
                  auVar268._8_2_ = auVar233._0_2_;
                  auVar268._10_2_ = auVar233._4_2_;
                  auVar268._12_2_ = auVar233._8_2_;
                  auVar268._14_2_ = auVar233._12_2_;
                  uVar31 = (uint3)((int)auVar266._4_4_ + 0x8000fff +
                                   (uint)((byte)((uint)auVar266._4_4_ >> 0xd) & 1) >> 0xd);
                  uVar32 = (uint3)((int)auVar266._8_4_ + 0x8000fff +
                                   (uint)((byte)((uint)auVar266._8_4_ >> 0xd) & 1) >> 0xd);
                  uVar33 = (uint3)((int)auVar266._12_4_ + 0x8000fff +
                                   (uint)((byte)((uint)auVar266._12_4_ >> 0xd) & 1) >> 0xd);
                  auVar254 = NEON_bit(auVar292,auVar305,auVar300,1);
                  uVar175 = (uint)((int)auVar282._0_4_ + 0x8000fff + (int)uVar302) >> 0xd;
                  uVar196 = (int)auVar282._4_4_ + 0x8000fff + (uint)(byte)(uVar302 >> 0x20) >> 0xd;
                  uVar197 = (int)auVar282._8_4_ + 0x8000fff +
                            (uint)((byte)((uint)auVar282._8_4_ >> 0xd) & 1) >> 0xd;
                  uVar199 = (int)auVar282._12_4_ + 0x8000fff +
                            (uint)((byte)((uint)auVar282._12_4_ >> 0xd) & 1) >> 0xd;
                  auVar252._8_8_ = auVar268._8_8_;
                  auVar252._0_8_ = auVar268._0_8_;
                  auVar9[2] = (char)uVar31;
                  auVar9._0_2_ = (short)((int)auVar266._0_4_ + 0x8000fff +
                                         (uint)((byte)((uint)auVar266._0_4_ >> 0xd) & 1) >> 0xd);
                  auVar9[3] = (char)(uVar31 >> 8);
                  auVar9[4] = (char)uVar32;
                  auVar9[5] = (char)(uVar32 >> 8);
                  auVar9[6] = (char)uVar33;
                  auVar9[7] = (char)(uVar33 >> 8);
                  auVar9[8] = (char)uVar175;
                  auVar9[9] = (char)(uVar175 >> 8);
                  auVar9[10] = (char)uVar196;
                  auVar9[0xb] = (char)(uVar196 >> 8);
                  auVar9[0xc] = (char)uVar197;
                  auVar9[0xd] = (char)(uVar197 >> 8);
                  auVar9[0xe] = (char)uVar199;
                  auVar9[0xf] = (char)(uVar199 >> 8);
                  auVar254 = NEON_bsl(auVar252,auVar9,auVar254,1);
                  puVar88[0x10] = auVar254[8];
                  puVar88[0x11] = auVar254[9] | auVar287[3] & 0x80;
                  puVar88[0x12] = auVar254[10];
                  puVar88[0x13] = auVar254[0xb] | auVar287[7] & 0x80;
                  puVar88[0x14] = auVar254[0xc];
                  puVar88[0x15] = auVar254[0xd] | auVar287[0xb] & 0x80;
                  puVar88[0x16] = auVar254[0xe];
                  puVar88[0x17] = auVar254[0xf] | auVar287[0xf] & 0x80;
                  *puVar88 = auVar254[0];
                  puVar88[1] = auVar254[1] | (byte)(uVar71 >> 8);
                  puVar88[2] = auVar254[2];
                  puVar88[3] = auVar254[3] | (byte)(uVar71 >> 0x18);
                  puVar88[4] = auVar254[4];
                  puVar88[5] = auVar254[5] | (byte)(uVar71 >> 0x28);
                  puVar88[6] = auVar254[6];
                  puVar88[7] = auVar254[7] | (byte)(uVar71 >> 0x38);
                  puVar88 = puVar88 + 0x10;
                  pauVar80 = pauVar80 + 2;
                } while (uVar70 != 0);
                if (uVar59 == uVar62) goto LAB_0052d8fc;
              }
              lVar56 = uVar59 - uVar62;
              pfVar73 = (float *)(*pauVar63 + uVar62 * 4);
              puVar66 = (ushort *)(puVar65 + uVar62 * 2);
              do {
                fVar120 = ABS(*pfVar73);
                uVar93 = (ushort)((int)fVar120 + 0x8000fff + ((uint)fVar120 >> 0xd & 1) >> 0xd);
                if ((uint)fVar120 >> 0x17 < 0x71) {
                  uVar93 = SUB42(fVar120 + 0.5,0);
                }
                uVar91 = 0x7e00;
                if ((uint)fVar120 < 0x7f800001) {
                  uVar91 = 0x7c00;
                }
                if (0x477fffff < (uint)fVar120) {
                  uVar93 = uVar91;
                }
                lVar56 = lVar56 + -1;
                *puVar66 = uVar93 | (ushort)(((uint)*pfVar73 >> 0x1f) << 0xf);
                pfVar73 = pfVar73 + 1;
                puVar66 = puVar66 + 1;
              } while (lVar56 != 0);
            }
LAB_0052d8fc:
            local_80 = lVar60 + 1;
          }
        }
        FUN_004bf480(local_88);
        local_90 = lVar58 + 1;
        goto LAB_0052e4a4;
      }
    }
    if (iVar194 == 10) {
      lVar60 = 0;
      local_80 = 0;
      local_88[0] = iVar92;
      if (iVar92 == 9) {
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        puVar66 = (ushort *)FUN_004b059c(lVar56);
        puVar67 = (ushort *)FUN_004bb908(uVar57);
        if (0 < (long)uVar59) {
          if ((uVar59 < 8) ||
             ((puVar67 < puVar66 + uVar59 && (puVar66 < (ushort *)((long)puVar67 + uVar59))))) {
            uVar62 = 0;
          }
          else {
            if (uVar59 < 0x10) {
              uVar70 = 0;
            }
            else {
              auVar140._8_4_ = 0xf800000;
              auVar140._0_8_ = 0xf8000000f800000;
              auVar140._12_4_ = 0xf800000;
              uVar62 = uVar59 & 0x7ffffffffffffff0;
              uVar70 = uVar62;
              puVar81 = puVar67;
              puVar90 = puVar66;
              do {
                uVar70 = uVar70 - 0x10;
                uVar200 = (uint)puVar90[4] << 0xd;
                uVar217 = (uint)puVar90[5] << 0xd;
                uVar219 = (uint)puVar90[6] << 0xd;
                uVar221 = (uint)puVar90[7] << 0xd;
                uVar175 = (uint)*puVar90 << 0xd;
                uVar196 = (uint)puVar90[1] << 0xd;
                uVar197 = (uint)puVar90[2] << 0xd;
                uVar199 = (uint)puVar90[3] << 0xd;
                uVar222 = (uint)puVar90[0xc] << 0xd;
                uVar236 = (uint)puVar90[0xd] << 0xd;
                uVar237 = (uint)puVar90[0xe] << 0xd;
                uVar238 = (uint)puVar90[0xf] << 0xd;
                uVar216 = (uint)puVar90[8] << 0xd;
                uVar218 = (uint)puVar90[9] << 0xd;
                uVar220 = (uint)puVar90[10] << 0xd;
                uVar198 = (uint)puVar90[0xb] << 0xd;
                auVar243._0_8_ =
                     CONCAT17((char)(uVar196 >> 0x18),
                              CONCAT16((char)(uVar196 >> 0x10),
                                       (uint6)((uVar175 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar243._8_2_ = 0;
                auVar243[10] = (byte)(uVar197 >> 0x10) & 0x80;
                auVar243[0xb] = (byte)(uVar197 >> 0x18) & 0xf;
                auVar243._12_2_ = 0;
                auVar243[0xe] = (byte)(uVar199 >> 0x10) & 0x80;
                auVar243[0xf] = (byte)(uVar199 >> 0x18) & 0xf;
                auVar250._0_8_ =
                     CONCAT17((char)(uVar217 >> 0x18),
                              CONCAT16((char)(uVar217 >> 0x10),
                                       (uint6)((uVar200 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar250._8_2_ = 0;
                auVar250[10] = (byte)(uVar219 >> 0x10) & 0x80;
                auVar250[0xb] = (byte)(uVar219 >> 0x18) & 0xf;
                auVar250._12_2_ = 0;
                auVar250[0xe] = (byte)(uVar221 >> 0x10) & 0x80;
                auVar250[0xf] = (byte)(uVar221 >> 0x18) & 0xf;
                auVar259._0_8_ =
                     CONCAT17((char)(uVar218 >> 0x18),
                              CONCAT16((char)(uVar218 >> 0x10),
                                       (uint6)((uVar216 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar259._8_2_ = 0;
                auVar259[10] = (byte)(uVar220 >> 0x10) & 0x80;
                auVar259[0xb] = (byte)(uVar220 >> 0x18) & 0xf;
                auVar259._12_2_ = 0;
                auVar259[0xe] = (byte)(uVar198 >> 0x10) & 0x80;
                auVar259[0xf] = (byte)(uVar198 >> 0x18) & 0xf;
                auVar278._0_8_ =
                     CONCAT17((char)(uVar236 >> 0x18),
                              CONCAT16((char)(uVar236 >> 0x10),
                                       (uint6)((uVar222 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar278._8_2_ = 0;
                auVar278[10] = (byte)(uVar237 >> 0x10) & 0x80;
                auVar278[0xb] = (byte)(uVar237 >> 0x18) & 0xf;
                auVar278._12_2_ = 0;
                auVar278[0xe] = (byte)(uVar238 >> 0x10) & 0x80;
                auVar278[0xf] = (byte)(uVar238 >> 0x18) & 0xf;
                uVar149 = CONCAT44(uVar236,uVar222) & 0xefffffffefffffff;
                uVar71 = CONCAT44(uVar196,uVar175) & 0xefffffffefffffff;
                uVar121 = CONCAT44(uVar218,uVar216) & 0xefffffffefffffff;
                auVar292 = NEON_cmeq(auVar250,auVar140,4);
                auVar258 = NEON_cmeq(auVar243,auVar140,4);
                auVar254 = NEON_cmeq(auVar278,auVar140,4);
                auVar287 = NEON_cmeq(auVar259,auVar140,4);
                auVar298._0_4_ = (int)uVar149 + 0x38000000;
                auVar298._4_4_ = (int)(uVar149 >> 0x20) + 0x38000000;
                auVar298._8_4_ = (uVar237 & 0xefffffff) + 0x38000000;
                auVar298._12_4_ = (uVar238 & 0xefffffff) + 0x38000000;
                iVar194 = (uVar217 & 0xefffffff) + 0x38000000;
                iVar11 = (uVar219 & 0xefffffff) + 0x38000000;
                iVar13 = (uVar221 & 0xefffffff) + 0x38000000;
                auVar288._0_4_ = (int)uVar71 + 0x38000000;
                auVar288._4_4_ = (int)(uVar71 >> 0x20) + 0x38000000;
                auVar288._8_4_ = (uVar197 & 0xefffffff) + 0x38000000;
                auVar288._12_4_ = (uVar199 & 0xefffffff) + 0x38000000;
                auVar293._0_4_ = (int)uVar121 + 0x38000000;
                auVar293._4_4_ = (int)(uVar121 >> 0x20) + 0x38000000;
                auVar293._8_4_ = (uVar220 & 0xefffffff) + 0x38000000;
                auVar293._12_4_ = (uVar198 & 0xefffffff) + 0x38000000;
                auVar234._0_8_ = CONCAT44(uVar236,uVar222) | 0x7000000070000000;
                auVar234._8_4_ = uVar237 | 0x70000000;
                auVar234._12_4_ = uVar238 | 0x70000000;
                auVar192._0_8_ = CONCAT44(uVar218,uVar216) | 0x7000000070000000;
                auVar192._8_4_ = uVar220 | 0x70000000;
                auVar192._12_4_ = uVar198 | 0x70000000;
                auVar214._0_8_ = CONCAT44(uVar217,uVar200) | 0x7000000070000000;
                auVar214._8_4_ = uVar219 | 0x70000000;
                auVar214._12_4_ = uVar221 | 0x70000000;
                auVar172._0_8_ = CONCAT44(uVar196,uVar175) | 0x7000000070000000;
                auVar172._8_4_ = uVar197 | 0x70000000;
                auVar172._12_4_ = uVar199 | 0x70000000;
                fVar21 = (float)(uVar196 | 0x38800000) + -6.1035156e-05;
                fVar22 = (float)(uVar197 | 0x38800000) + -6.1035156e-05;
                fVar23 = (float)(uVar199 | 0x38800000) + -6.1035156e-05;
                fVar16 = (float)(uVar217 | 0x38800000) + -6.1035156e-05;
                fVar17 = (float)(uVar219 | 0x38800000) + -6.1035156e-05;
                fVar18 = (float)(uVar221 | 0x38800000) + -6.1035156e-05;
                fVar120 = (float)(uVar218 | 0x38800000) + -6.1035156e-05;
                fVar174 = (float)(uVar220 | 0x38800000) + -6.1035156e-05;
                fVar12 = (float)(uVar198 | 0x38800000) + -6.1035156e-05;
                fVar25 = (float)(uVar236 | 0x38800000) + -6.1035156e-05;
                fVar26 = (float)(uVar237 | 0x38800000) + -6.1035156e-05;
                fVar27 = (float)(uVar238 | 0x38800000) + -6.1035156e-05;
                auVar279 = NEON_cmeq(auVar278,0,2);
                auVar233 = NEON_bif(auVar234,auVar298,auVar254,1);
                auVar8[4] = 0;
                auVar8._0_4_ = (uVar200 & 0xefffffff) + 0x38000000;
                auVar8[5] = (char)((uint)iVar194 >> 8);
                auVar8[6] = (char)((uint)iVar194 >> 0x10);
                auVar8[7] = (char)((uint)iVar194 >> 0x18);
                auVar8[8] = 0;
                auVar8[9] = (char)((uint)iVar11 >> 8);
                auVar8[10] = (char)((uint)iVar11 >> 0x10);
                auVar8[0xb] = (char)((uint)iVar11 >> 0x18);
                auVar8[0xc] = 0;
                auVar8[0xd] = (char)((uint)iVar13 >> 8);
                auVar8[0xe] = (char)((uint)iVar13 >> 0x10);
                auVar8[0xf] = (char)((uint)iVar13 >> 0x18);
                auVar292 = NEON_bif(auVar214,auVar8,auVar292,1);
                auVar287 = NEON_bif(auVar192,auVar293,auVar287,1);
                auVar254 = NEON_bif(auVar172,auVar288,auVar258,1);
                auVar258 = NEON_cmeq(auVar243,0,2);
                auVar251 = NEON_cmeq(auVar250,0,2);
                auVar260 = NEON_cmeq(auVar259,0,2);
                auVar24[4] = SUB41(fVar25,0);
                auVar24._0_4_ = (float)(uVar222 | 0x38800000) + -6.1035156e-05;
                auVar24[5] = (char)((uint)fVar25 >> 8);
                auVar24[6] = (char)((uint)fVar25 >> 0x10);
                auVar24[7] = (char)((uint)fVar25 >> 0x18);
                auVar24[8] = SUB41(fVar26,0);
                auVar24[9] = (char)((uint)fVar26 >> 8);
                auVar24[10] = (char)((uint)fVar26 >> 0x10);
                auVar24[0xb] = (char)((uint)fVar26 >> 0x18);
                auVar24[0xc] = SUB41(fVar27,0);
                auVar24[0xd] = (char)((uint)fVar27 >> 8);
                auVar24[0xe] = (char)((uint)fVar27 >> 0x10);
                auVar24[0xf] = (char)((uint)fVar27 >> 0x18);
                auVar233 = NEON_bit(auVar233,auVar24,auVar279,1);
                auVar14[4] = SUB41(fVar16,0);
                auVar14._0_4_ = (float)(uVar200 | 0x38800000) + -6.1035156e-05;
                auVar14[5] = (char)((uint)fVar16 >> 8);
                auVar14[6] = (char)((uint)fVar16 >> 0x10);
                auVar14[7] = (char)((uint)fVar16 >> 0x18);
                auVar14[8] = SUB41(fVar17,0);
                auVar14[9] = (char)((uint)fVar17 >> 8);
                auVar14[10] = (char)((uint)fVar17 >> 0x10);
                auVar14[0xb] = (char)((uint)fVar17 >> 0x18);
                auVar14[0xc] = SUB41(fVar18,0);
                auVar14[0xd] = (char)((uint)fVar18 >> 8);
                auVar14[0xe] = (char)((uint)fVar18 >> 0x10);
                auVar14[0xf] = (char)((uint)fVar18 >> 0x18);
                auVar292 = NEON_bit(auVar292,auVar14,auVar251,1);
                auVar6[4] = SUB41(fVar120,0);
                auVar6._0_4_ = (float)(uVar216 | 0x38800000) + -6.1035156e-05;
                auVar6[5] = (char)((uint)fVar120 >> 8);
                auVar6[6] = (char)((uint)fVar120 >> 0x10);
                auVar6[7] = (char)((uint)fVar120 >> 0x18);
                auVar6[8] = SUB41(fVar174,0);
                auVar6[9] = (char)((uint)fVar174 >> 8);
                auVar6[10] = (char)((uint)fVar174 >> 0x10);
                auVar6[0xb] = (char)((uint)fVar174 >> 0x18);
                auVar6[0xc] = SUB41(fVar12,0);
                auVar6[0xd] = (char)((uint)fVar12 >> 8);
                auVar6[0xe] = (char)((uint)fVar12 >> 0x10);
                auVar6[0xf] = (char)((uint)fVar12 >> 0x18);
                auVar287 = NEON_bit(auVar287,auVar6,auVar260,1);
                auVar19[4] = SUB41(fVar21,0);
                auVar19._0_4_ = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
                auVar19[5] = (char)((uint)fVar21 >> 8);
                auVar19[6] = (char)((uint)fVar21 >> 0x10);
                auVar19[7] = (char)((uint)fVar21 >> 0x18);
                auVar19[8] = SUB41(fVar22,0);
                auVar19[9] = (char)((uint)fVar22 >> 8);
                auVar19[10] = (char)((uint)fVar22 >> 0x10);
                auVar19[0xb] = (char)((uint)fVar22 >> 0x18);
                auVar19[0xc] = SUB41(fVar23,0);
                auVar19[0xd] = (char)((uint)fVar23 >> 8);
                auVar19[0xe] = (char)((uint)fVar23 >> 0x10);
                auVar19[0xf] = (char)((uint)fVar23 >> 0x18);
                auVar254 = NEON_bit(auVar254,auVar19,auVar258,1);
                auVar235._0_8_ = auVar233._0_8_ & 0x7fffffff7fffffff;
                auVar235._8_4_ = auVar233._8_4_ & 0x7fffffff;
                auVar235._12_4_ = auVar233._12_4_ & 0x7fffffff;
                auVar215._0_8_ = auVar292._0_8_ & 0x7fffffff7fffffff;
                auVar215._8_4_ = auVar292._8_4_ & 0x7fffffff;
                auVar215._12_4_ = auVar292._12_4_ & 0x7fffffff;
                auVar173._0_8_ = auVar254._0_8_ & 0x7fffffff7fffffff;
                auVar173._8_4_ = auVar254._8_4_ & 0x7fffffff;
                auVar173._12_4_ = auVar254._12_4_ & 0x7fffffff;
                auVar193._0_8_ = auVar287._0_8_ & 0x7fffffff7fffffff;
                auVar193._8_4_ = auVar287._8_4_ & 0x7fffffff;
                auVar193._12_4_ = auVar287._12_4_ & 0x7fffffff;
                auVar233 = NEON_cmeq(auVar235,0,2);
                auVar292 = NEON_cmeq(auVar215,0,2);
                auVar287 = NEON_cmeq(auVar193,0,2);
                auVar254 = NEON_cmeq(auVar173,0,2);
                *(byte *)(puVar81 + 8) = ~auVar287[0] & 1;
                *(byte *)((long)puVar81 + 0x11) = ~auVar287[4] & 1;
                *(byte *)(puVar81 + 9) = ~auVar287[8] & 1;
                *(byte *)((long)puVar81 + 0x13) = ~auVar287[0xc] & 1;
                *(byte *)(puVar81 + 10) = ~auVar233[0] & 1;
                *(byte *)((long)puVar81 + 0x15) = ~auVar233[4] & 1;
                *(byte *)(puVar81 + 0xb) = ~auVar233[8] & 1;
                *(byte *)((long)puVar81 + 0x17) = ~auVar233[0xc] & 1;
                *(byte *)puVar81 = ~auVar254[0] & 1;
                *(byte *)((long)puVar81 + 1) = ~auVar254[4] & 1;
                *(byte *)(puVar81 + 1) = ~auVar254[8] & 1;
                *(byte *)((long)puVar81 + 3) = ~auVar254[0xc] & 1;
                *(byte *)(puVar81 + 2) = ~auVar292[0] & 1;
                *(byte *)((long)puVar81 + 5) = ~auVar292[4] & 1;
                *(byte *)(puVar81 + 3) = ~auVar292[8] & 1;
                *(byte *)((long)puVar81 + 7) = ~auVar292[0xc] & 1;
                puVar81 = puVar81 + 8;
                puVar90 = puVar90 + 0x10;
              } while (uVar70 != 0);
              if (uVar59 == uVar62) goto LAB_0052dd70;
              uVar70 = uVar62;
              if (((uint)uVar59 >> 3 & 1) == 0) goto LAB_0052dcec;
            }
            auVar136._8_4_ = 0xf800000;
            auVar136._0_8_ = 0xf8000000f800000;
            auVar136._12_4_ = 0xf800000;
            uVar62 = uVar59 & 0x7ffffffffffffff8;
            lVar60 = uVar70 - uVar62;
            puVar81 = puVar66 + uVar70;
            puVar64 = (ulong *)((long)puVar67 + uVar70);
            do {
              lVar60 = lVar60 + 8;
              uVar216 = (uint)*puVar81 << 0xd;
              iVar194 = (uint)puVar81[1] << 0xd;
              uVar218 = (uint)puVar81[2] << 0xd;
              uVar220 = (uint)puVar81[3] << 0xd;
              uVar175 = (uint)puVar81[4] << 0xd;
              uVar196 = (uint)puVar81[5] << 0xd;
              uVar197 = (uint)puVar81[6] << 0xd;
              uVar199 = (uint)puVar81[7] << 0xd;
              uVar96 = (undefined1)((uint)iVar194 >> 0x10);
              uVar195 = (undefined1)((uint)iVar194 >> 0x18);
              auVar210._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,(uint6)((uVar216 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar210._8_2_ = 0;
              bVar94 = (byte)(uVar218 >> 0x10);
              auVar210[10] = bVar94 & 0x80;
              bVar95 = (byte)(uVar218 >> 0x18);
              auVar210[0xb] = bVar95 & 0xf;
              auVar210._12_2_ = 0;
              bVar97 = (byte)(uVar220 >> 0x10);
              auVar210[0xe] = bVar97 & 0x80;
              bVar98 = (byte)(uVar220 >> 0x18);
              auVar210[0xf] = bVar98 & 0xf;
              auVar229._0_8_ =
                   CONCAT17((char)(uVar196 >> 0x18),
                            CONCAT16((char)(uVar196 >> 0x10),
                                     (uint6)((uVar175 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar229._8_2_ = 0;
              auVar229[10] = (byte)(uVar197 >> 0x10) & 0x80;
              auVar229[0xb] = (byte)(uVar197 >> 0x18) & 0xf;
              auVar229._12_2_ = 0;
              auVar229[0xe] = (byte)(uVar199 >> 0x10) & 0x80;
              auVar229[0xf] = (byte)(uVar199 >> 0x18) & 0xf;
              auVar280._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,CONCAT15((char)((uint)iVar194 >> 8),
                                                             (uint5)*puVar81 << 0xd))) |
                   0x3880000038800000;
              auVar280[8] = 0;
              auVar280[9] = (char)(uVar218 >> 8);
              auVar280[10] = bVar94 | 0x80;
              auVar280[0xb] = bVar95 | 0x38;
              auVar284[0xc] = 0;
              auVar284._0_12_ = auVar280;
              auVar284[0xd] = (char)(uVar220 >> 8);
              auVar284[0xe] = bVar97 | 0x80;
              auVar284[0xf] = bVar98 | 0x38;
              auVar168._0_8_ = CONCAT44(uVar196,uVar175) | 0x7000000070000000;
              auVar168._8_4_ = uVar197 | 0x70000000;
              auVar168._12_4_ = uVar199 | 0x70000000;
              auVar185._0_8_ = CONCAT44(iVar194,uVar216) | 0x7000000070000000;
              auVar185._8_4_ = uVar218 | 0x70000000;
              auVar185._12_4_ = uVar220 | 0x70000000;
              uVar70 = CONCAT44(iVar194,uVar216) & 0xefffffffefffffff;
              uVar71 = CONCAT44(uVar196,uVar175) & 0xefffffffefffffff;
              auVar287 = NEON_cmeq(auVar210,auVar136,4);
              auVar254 = NEON_cmeq(auVar229,auVar136,4);
              auVar285._0_4_ = (float)auVar280._0_8_ + -6.1035156e-05;
              auVar285._4_4_ = (float)(auVar280._0_8_ >> 0x20) + -6.1035156e-05;
              auVar285._8_4_ = auVar280._8_4_ + -6.1035156e-05;
              auVar285._12_4_ = auVar284._12_4_ + -6.1035156e-05;
              fVar120 = (float)(uVar196 | 0x38800000) + -6.1035156e-05;
              fVar174 = (float)(uVar197 | 0x38800000) + -6.1035156e-05;
              fVar12 = (float)(uVar199 | 0x38800000) + -6.1035156e-05;
              auVar292 = NEON_cmeq(auVar210,0,2);
              auVar233 = NEON_cmeq(auVar229,0,2);
              auVar244._0_4_ = (int)uVar71 + 0x38000000;
              auVar244._4_4_ = (int)(uVar71 >> 0x20) + 0x38000000;
              auVar244._8_4_ = (uVar197 & 0xefffffff) + 0x38000000;
              auVar244._12_4_ = (uVar199 & 0xefffffff) + 0x38000000;
              auVar239._0_4_ = (int)uVar70 + 0x38000000;
              auVar239._4_4_ = (int)(uVar70 >> 0x20) + 0x38000000;
              auVar239._8_4_ = (uVar218 & 0xefffffff) + 0x38000000;
              auVar239._12_4_ = (uVar220 & 0xefffffff) + 0x38000000;
              auVar287 = NEON_bif(auVar185,auVar239,auVar287,1);
              auVar254 = NEON_bif(auVar168,auVar244,auVar254,1);
              auVar7[4] = SUB41(fVar120,0);
              auVar7._0_4_ = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
              auVar7[5] = (char)((uint)fVar120 >> 8);
              auVar7[6] = (char)((uint)fVar120 >> 0x10);
              auVar7[7] = (char)((uint)fVar120 >> 0x18);
              auVar7[8] = SUB41(fVar174,0);
              auVar7[9] = (char)((uint)fVar174 >> 8);
              auVar7[10] = (char)((uint)fVar174 >> 0x10);
              auVar7[0xb] = (char)((uint)fVar174 >> 0x18);
              auVar7[0xc] = SUB41(fVar12,0);
              auVar7[0xd] = (char)((uint)fVar12 >> 8);
              auVar7[0xe] = (char)((uint)fVar12 >> 0x10);
              auVar7[0xf] = (char)((uint)fVar12 >> 0x18);
              auVar254 = NEON_bit(auVar254,auVar7,auVar233,1);
              auVar287 = NEON_bit(auVar287,auVar285,auVar292,1);
              auVar186._0_8_ = auVar287._0_8_ & 0x7fffffff7fffffff;
              auVar186._8_4_ = auVar287._8_4_ & 0x7fffffff;
              auVar186._12_4_ = auVar287._12_4_ & 0x7fffffff;
              auVar169._0_8_ = auVar254._0_8_ & 0x7fffffff7fffffff;
              auVar169._8_4_ = auVar254._8_4_ & 0x7fffffff;
              auVar169._12_4_ = auVar254._12_4_ & 0x7fffffff;
              auVar254 = NEON_cmeq(auVar169,0,2);
              auVar287 = NEON_cmeq(auVar186,0,2);
              *puVar64 = CONCAT17(~auVar254[0xc],
                                  CONCAT16(~auVar254[8],
                                           CONCAT15(~auVar254[4],
                                                    CONCAT14(~auVar254[0],
                                                             CONCAT13(~auVar287[0xc],
                                                                      CONCAT12(~auVar287[8],
                                                                               CONCAT11(~auVar287[4]
                                                                                        ,~auVar287[0
                                                  ]))))))) & 0x101010101010101;
              puVar81 = puVar81 + 8;
              puVar64 = puVar64 + 1;
            } while (lVar60 != 0);
            if (uVar59 == uVar62) goto LAB_0052dd70;
          }
LAB_0052dcec:
          lVar60 = uVar59 - uVar62;
          puVar66 = puVar66 + uVar62;
          lVar82 = (long)puVar67 + uVar62;
          do {
            while( true ) {
              uVar175 = (uint)*puVar66 << 0xd;
              if ((uVar175 & 0xf800000) != 0xf800000) break;
              lVar60 = lVar60 + -1;
              *(bool *)lVar82 = (uVar175 | 0x70000000) != 0;
              puVar66 = puVar66 + 1;
              lVar82 = lVar82 + 1;
              if (lVar60 == 0) goto LAB_0052dd70;
            }
            fVar120 = (float)((uVar175 & 0xfffe000) + 0x38000000);
            if ((uVar175 & 0xf800000) == 0) {
              fVar120 = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
            }
            lVar60 = lVar60 + -1;
            *(bool *)lVar82 = ABS(fVar120) != 0.0;
            puVar66 = puVar66 + 1;
            lVar82 = lVar82 + 1;
          } while (lVar60 != 0);
        }
LAB_0052dd70:
        lVar60 = 1;
        local_80 = 1;
LAB_0052dd80:
        if (iVar92 != 7) goto LAB_0052e2e8;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        pauVar63 = (undefined1 (*) [16])FUN_004b059c(lVar56);
        plVar68 = (long *)FUN_004bb758(uVar57);
        if (0 < (long)uVar59) {
          if ((uVar59 < 8) ||
             ((plVar68 < *pauVar63 + uVar59 * 2 &&
              (pauVar63 < (undefined1 (*) [16])(plVar68 + uVar59))))) {
            uVar62 = 0;
          }
          else {
            auVar137._8_4_ = 0xf800000;
            auVar137._0_8_ = 0xf8000000f800000;
            auVar137._12_4_ = 0xf800000;
            uVar62 = uVar59 & 0x7ffffffffffffff8;
            uVar70 = uVar62;
            plVar86 = plVar68;
            pauVar80 = pauVar63;
            do {
              auVar254 = *pauVar80;
              uVar70 = uVar70 - 8;
              uVar93 = auVar254._8_2_;
              uVar175 = (uint)uVar93 << 0xd;
              iVar194 = (uint)auVar254._10_2_ << 0xd;
              uVar196 = (uint)auVar254._12_2_ << 0xd;
              uVar197 = (uint)auVar254._14_2_ << 0xd;
              uVar199 = (uint)auVar254._0_2_ << 0xd;
              uVar216 = (uint)auVar254._2_2_ << 0xd;
              uVar218 = (uint)auVar254._4_2_ << 0xd;
              uVar220 = (uint)auVar254._6_2_ << 0xd;
              uVar96 = (undefined1)((uint)iVar194 >> 0x10);
              uVar195 = (undefined1)((uint)iVar194 >> 0x18);
              auVar240._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,(uint6)((uVar175 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar240._8_2_ = 0;
              bVar94 = (byte)(uVar196 >> 0x10);
              auVar240[10] = bVar94 & 0x80;
              bVar95 = (byte)(uVar196 >> 0x18);
              auVar240[0xb] = bVar95 & 0xf;
              auVar240._12_2_ = 0;
              bVar97 = (byte)(uVar197 >> 0x10);
              auVar240[0xe] = bVar97 & 0x80;
              bVar98 = (byte)(uVar197 >> 0x18);
              auVar240[0xf] = bVar98 & 0xf;
              auVar255._0_8_ =
                   CONCAT17((char)(uVar216 >> 0x18),
                            CONCAT16((char)(uVar216 >> 0x10),
                                     (uint6)((uVar199 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar255._8_2_ = 0;
              auVar255[10] = (byte)(uVar218 >> 0x10) & 0x80;
              auVar255[0xb] = (byte)(uVar218 >> 0x18) & 0xf;
              auVar255._12_2_ = 0;
              auVar255[0xe] = (byte)(uVar220 >> 0x10) & 0x80;
              auVar255[0xf] = (byte)(uVar220 >> 0x18) & 0xf;
              auVar261._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,CONCAT15((char)((uint)iVar194 >> 8),
                                                             (uint5)uVar93 << 0xd))) |
                   0x3880000038800000;
              auVar261[8] = 0;
              auVar261[9] = (char)(uVar196 >> 8);
              auVar261[10] = bVar94 | 0x80;
              auVar261[0xb] = bVar95 | 0x38;
              auVar272[0xc] = 0;
              auVar272._0_12_ = auVar261;
              auVar272[0xd] = (char)(uVar197 >> 8);
              auVar272[0xe] = bVar97 | 0x80;
              auVar272[0xf] = bVar98 | 0x38;
              auVar187._0_8_ = CONCAT44(iVar194,uVar175) | 0x7000000070000000;
              auVar187._8_4_ = uVar196 | 0x70000000;
              auVar187._12_4_ = uVar197 | 0x70000000;
              auVar211._0_8_ = CONCAT44(uVar216,uVar199) | 0x7000000070000000;
              auVar211._8_4_ = uVar218 | 0x70000000;
              auVar211._12_4_ = uVar220 | 0x70000000;
              uVar71 = CONCAT44(iVar194,uVar175) & 0xefffffffefffffff;
              uVar121 = CONCAT44(uVar216,uVar199) & 0xefffffffefffffff;
              auVar287 = NEON_cmeq(auVar240,auVar137,4);
              auVar292 = NEON_cmeq(auVar255,auVar137,4);
              auVar273._0_4_ = (float)auVar261._0_8_ + -6.1035156e-05;
              auVar273._4_4_ = (float)(auVar261._0_8_ >> 0x20) + -6.1035156e-05;
              auVar273._8_4_ = auVar261._8_4_ + -6.1035156e-05;
              auVar273._12_4_ = auVar272._12_4_ + -6.1035156e-05;
              auVar230._0_4_ = (int)uVar71 + 0x38000000;
              auVar230._4_4_ = (int)(uVar71 >> 0x20) + 0x38000000;
              auVar230._8_4_ = (uVar196 & 0xefffffff) + 0x38000000;
              auVar230._12_4_ = (uVar197 & 0xefffffff) + 0x38000000;
              auVar245._0_4_ = (int)uVar121 + 0x38000000;
              auVar245._4_4_ = (int)(uVar121 >> 0x20) + 0x38000000;
              auVar245._8_4_ = (uVar218 & 0xefffffff) + 0x38000000;
              auVar245._12_4_ = (uVar220 & 0xefffffff) + 0x38000000;
              auVar287 = NEON_bif(auVar187,auVar230,auVar287,1);
              auVar286._0_4_ = (float)(uVar199 | 0x38800000) + -6.1035156e-05;
              auVar286._4_4_ = (float)(uVar216 | 0x38800000) + -6.1035156e-05;
              auVar286._8_4_ = (float)(uVar218 | 0x38800000) + -6.1035156e-05;
              auVar286._12_4_ = (float)(uVar220 | 0x38800000) + -6.1035156e-05;
              auVar292 = NEON_bif(auVar211,auVar245,auVar292,1);
              auVar233 = NEON_cmeq(auVar240,0,2);
              auVar258 = NEON_cmeq(auVar255,0,2);
              auVar287 = NEON_bit(auVar287,auVar273,auVar233,1);
              auVar292 = NEON_bit(auVar292,auVar286,auVar258,1);
              uVar121 = CONCAT17((short)auVar254._10_2_ >> 0xf,
                                 (uint7)(((byte)((short)uVar93 >> 0xf) & 0x80) << 0x18)) &
                        0x8000ffffffffffff;
              uVar71 = CONCAT17((short)auVar254._2_2_ >> 0xf,
                                (uint7)(((byte)((short)auVar254._0_2_ >> 0xf) & 0x80) << 0x18)) &
                       0x8000ffffffffffff;
              fVar174 = (float)CONCAT13(auVar287[3] | (byte)(uVar121 >> 0x18),auVar287._0_3_);
              auVar177._0_8_ =
                   CONCAT17(auVar287[7] | (byte)(uVar121 >> 0x38),
                            CONCAT16(auVar287[6],CONCAT15(auVar287[5],CONCAT14(auVar287[4],fVar174))
                                    ));
              auVar177[8] = auVar287[8];
              auVar177[9] = auVar287[9];
              auVar177[10] = auVar287[10];
              auVar177[0xb] = auVar287[0xb] | (byte)((short)auVar254._12_2_ >> 0xf) & 0x80;
              auVar188[0xc] = auVar287[0xc];
              auVar188._0_12_ = auVar177;
              auVar188[0xd] = auVar287[0xd];
              auVar188[0xe] = auVar287[0xe];
              auVar188[0xf] = auVar287[0xf] | (byte)((short)auVar254._14_2_ >> 0xf) & 0x80;
              fVar120 = (float)CONCAT13(auVar292[3] | (byte)(uVar71 >> 0x18),auVar292._0_3_);
              auVar158._0_8_ =
                   CONCAT17(auVar292[7] | (byte)(uVar71 >> 0x38),
                            CONCAT16(auVar292[6],CONCAT15(auVar292[5],CONCAT14(auVar292[4],fVar120))
                                    ));
              auVar158[8] = auVar292[8];
              auVar158[9] = auVar292[9];
              auVar158[10] = auVar292[10];
              auVar158[0xb] = auVar292[0xb] | (byte)((short)auVar254._4_2_ >> 0xf) & 0x80;
              auVar170[0xc] = auVar292[0xc];
              auVar170._0_12_ = auVar158;
              auVar170[0xd] = auVar292[0xd];
              auVar170[0xe] = auVar292[0xe];
              auVar170[0xf] = auVar292[0xf] | auVar254[7] >> 7 & 0x80U;
              plVar86[5] = (long)(float)((ulong)auVar177._0_8_ >> 0x20);
              plVar86[4] = (long)fVar174;
              plVar86[7] = (long)auVar188._12_4_;
              plVar86[6] = (long)auVar177._8_4_;
              plVar86[1] = (long)(float)((ulong)auVar158._0_8_ >> 0x20);
              *plVar86 = (long)fVar120;
              plVar86[3] = (long)auVar170._12_4_;
              plVar86[2] = (long)auVar158._8_4_;
              plVar86 = plVar86 + 8;
              pauVar80 = pauVar80 + 1;
            } while (uVar70 != 0);
            if (uVar59 == uVar62) goto LAB_0052e1fc;
          }
          lVar56 = uVar59 - uVar62;
          puVar66 = (ushort *)(*pauVar63 + uVar62 * 2);
          plVar68 = plVar68 + uVar62;
          do {
            uVar175 = (uint)*puVar66 << 0xd;
            if ((uVar175 & 0xf800000) == 0xf800000) {
              fVar120 = (float)(uVar175 | 0x70000000);
            }
            else {
              fVar120 = (float)((uVar175 & 0xfffe000) + 0x38000000);
              if ((uVar175 & 0xf800000) == 0) {
                fVar120 = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
              }
            }
            lVar56 = lVar56 + -1;
            *plVar68 = (long)(float)((uint)fVar120 | (int)(short)*puVar66 & 0x80000000U);
            puVar66 = puVar66 + 1;
            plVar68 = plVar68 + 1;
          } while (lVar56 != 0);
        }
LAB_0052e1fc:
        local_80 = lVar60 + 1;
      }
      else {
        if (iVar92 != 6) goto LAB_0052dd80;
        local_80 = 0;
        uVar59 = FUN_005cabcc(lVar56 + 0x18);
        pauVar63 = (undefined1 (*) [16])FUN_004b059c(lVar56);
        piVar69 = (int *)FUN_004b03ec(uVar57);
        if (0 < (long)uVar59) {
          if ((uVar59 < 8) ||
             ((piVar69 < *pauVar63 + uVar59 * 2 &&
              (pauVar63 < (undefined1 (*) [16])(piVar69 + uVar59))))) {
            uVar62 = 0;
          }
          else {
            auVar138._8_4_ = 0xf800000;
            auVar138._0_8_ = 0xf8000000f800000;
            auVar138._12_4_ = 0xf800000;
            uVar62 = uVar59 & 0x7ffffffffffffff8;
            uVar70 = uVar62;
            piVar87 = piVar69;
            pauVar80 = pauVar63;
            do {
              auVar254 = *pauVar80;
              uVar70 = uVar70 - 8;
              uVar93 = auVar254._8_2_;
              uVar175 = (uint)uVar93 << 0xd;
              iVar194 = (uint)auVar254._10_2_ << 0xd;
              uVar196 = (uint)auVar254._12_2_ << 0xd;
              uVar197 = (uint)auVar254._14_2_ << 0xd;
              uVar199 = (uint)auVar254._0_2_ << 0xd;
              uVar216 = (uint)auVar254._2_2_ << 0xd;
              uVar218 = (uint)auVar254._4_2_ << 0xd;
              uVar220 = (uint)auVar254._6_2_ << 0xd;
              uVar96 = (undefined1)((uint)iVar194 >> 0x10);
              uVar195 = (undefined1)((uint)iVar194 >> 0x18);
              auVar246._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,(uint6)((uVar175 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar246._8_2_ = 0;
              bVar94 = (byte)(uVar196 >> 0x10);
              auVar246[10] = bVar94 & 0x80;
              bVar95 = (byte)(uVar196 >> 0x18);
              auVar246[0xb] = bVar95 & 0xf;
              auVar246._12_2_ = 0;
              bVar97 = (byte)(uVar197 >> 0x10);
              auVar246[0xe] = bVar97 & 0x80;
              bVar98 = (byte)(uVar197 >> 0x18);
              auVar246[0xf] = bVar98 & 0xf;
              auVar256._0_8_ =
                   CONCAT17((char)(uVar216 >> 0x18),
                            CONCAT16((char)(uVar216 >> 0x10),
                                     (uint6)((uVar199 >> 0x10 & 0xf80) << 0x10))) &
                   0xf8000ffffffffff;
              auVar256._8_2_ = 0;
              auVar256[10] = (byte)(uVar218 >> 0x10) & 0x80;
              auVar256[0xb] = (byte)(uVar218 >> 0x18) & 0xf;
              auVar256._12_2_ = 0;
              auVar256[0xe] = (byte)(uVar220 >> 0x10) & 0x80;
              auVar256[0xf] = (byte)(uVar220 >> 0x18) & 0xf;
              auVar262._0_8_ =
                   CONCAT17(uVar195,CONCAT16(uVar96,CONCAT15((char)((uint)iVar194 >> 8),
                                                             (uint5)uVar93 << 0xd))) |
                   0x3880000038800000;
              auVar262[8] = 0;
              auVar262[9] = (char)(uVar196 >> 8);
              auVar262[10] = bVar94 | 0x80;
              auVar262[0xb] = bVar95 | 0x38;
              auVar274[0xc] = 0;
              auVar274._0_12_ = auVar262;
              auVar274[0xd] = (char)(uVar197 >> 8);
              auVar274[0xe] = bVar97 | 0x80;
              auVar274[0xf] = bVar98 | 0x38;
              auVar189._0_8_ = CONCAT44(iVar194,uVar175) | 0x7000000070000000;
              auVar189._8_4_ = uVar196 | 0x70000000;
              auVar189._12_4_ = uVar197 | 0x70000000;
              auVar212._0_8_ = CONCAT44(uVar216,uVar199) | 0x7000000070000000;
              auVar212._8_4_ = uVar218 | 0x70000000;
              auVar212._12_4_ = uVar220 | 0x70000000;
              uVar71 = CONCAT44(iVar194,uVar175) & 0xefffffffefffffff;
              uVar121 = CONCAT44(uVar216,uVar199) & 0xefffffffefffffff;
              auVar287 = NEON_cmeq(auVar246,auVar138,4);
              auVar292 = NEON_cmeq(auVar256,auVar138,4);
              auVar275._0_4_ = (float)auVar262._0_8_ + -6.1035156e-05;
              auVar275._4_4_ = (float)(auVar262._0_8_ >> 0x20) + -6.1035156e-05;
              auVar275._8_4_ = auVar262._8_4_ + -6.1035156e-05;
              auVar275._12_4_ = auVar274._12_4_ + -6.1035156e-05;
              auVar258 = NEON_cmeq(auVar256,0,2);
              auVar231._0_4_ = (int)uVar71 + 0x38000000;
              auVar231._4_4_ = (int)(uVar71 >> 0x20) + 0x38000000;
              auVar231._8_4_ = (uVar196 & 0xefffffff) + 0x38000000;
              auVar231._12_4_ = (uVar197 & 0xefffffff) + 0x38000000;
              auVar241._0_4_ = (int)uVar121 + 0x38000000;
              auVar241._4_4_ = (int)(uVar121 >> 0x20) + 0x38000000;
              auVar241._8_4_ = (uVar218 & 0xefffffff) + 0x38000000;
              auVar241._12_4_ = (uVar220 & 0xefffffff) + 0x38000000;
              auVar287 = NEON_bif(auVar189,auVar231,auVar287,1);
              auVar233 = NEON_cmeq(auVar246,0,2);
              auVar247._0_4_ = (float)(uVar199 | 0x38800000) + -6.1035156e-05;
              auVar247._4_4_ = (float)(uVar216 | 0x38800000) + -6.1035156e-05;
              auVar247._8_4_ = (float)(uVar218 | 0x38800000) + -6.1035156e-05;
              auVar247._12_4_ = (float)(uVar220 | 0x38800000) + -6.1035156e-05;
              auVar292 = NEON_bif(auVar212,auVar241,auVar292,1);
              auVar287 = NEON_bit(auVar287,auVar275,auVar233,1);
              uVar121 = CONCAT17((short)auVar254._10_2_ >> 0xf,
                                 (uint7)(((byte)((short)uVar93 >> 0xf) & 0x80) << 0x18)) &
                        0x8000ffffffffffff;
              uVar71 = CONCAT17((short)auVar254._2_2_ >> 0xf,
                                (uint7)(((byte)((short)auVar254._0_2_ >> 0xf) & 0x80) << 0x18)) &
                       0x8000ffffffffffff;
              auVar292 = NEON_bit(auVar292,auVar247,auVar258,1);
              fVar174 = (float)CONCAT13(auVar287[3] | (byte)(uVar121 >> 0x18),auVar287._0_3_);
              auVar178._0_8_ =
                   CONCAT17(auVar287[7] | (byte)(uVar121 >> 0x38),
                            CONCAT16(auVar287[6],CONCAT15(auVar287[5],CONCAT14(auVar287[4],fVar174))
                                    ));
              auVar178[8] = auVar287[8];
              auVar178[9] = auVar287[9];
              auVar178[10] = auVar287[10];
              auVar178[0xb] = auVar287[0xb] | (byte)((short)auVar254._12_2_ >> 0xf) & 0x80;
              auVar190[0xc] = auVar287[0xc];
              auVar190._0_12_ = auVar178;
              auVar190[0xd] = auVar287[0xd];
              auVar190[0xe] = auVar287[0xe];
              auVar190[0xf] = auVar287[0xf] | (byte)((short)auVar254._14_2_ >> 0xf) & 0x80;
              fVar120 = (float)CONCAT13(auVar292[3] | (byte)(uVar71 >> 0x18),auVar292._0_3_);
              auVar159._0_8_ =
                   CONCAT17(auVar292[7] | (byte)(uVar71 >> 0x38),
                            CONCAT16(auVar292[6],CONCAT15(auVar292[5],CONCAT14(auVar292[4],fVar120))
                                    ));
              auVar159[8] = auVar292[8];
              auVar159[9] = auVar292[9];
              auVar159[10] = auVar292[10];
              auVar159[0xb] = auVar292[0xb] | (byte)((short)auVar254._4_2_ >> 0xf) & 0x80;
              auVar171[0xc] = auVar292[0xc];
              auVar171._0_12_ = auVar159;
              auVar171[0xd] = auVar292[0xd];
              auVar171[0xe] = auVar292[0xe];
              auVar171[0xf] = auVar292[0xf] | auVar254[7] >> 7 & 0x80U;
              piVar87[4] = (int)auVar159._8_4_;
              piVar87[5] = (int)auVar171._12_4_;
              *piVar87 = (int)fVar120;
              piVar87[1] = (int)(float)((ulong)auVar159._0_8_ >> 0x20);
              piVar87[8] = (int)auVar178._8_4_;
              piVar87[9] = (int)auVar190._12_4_;
              piVar87[4] = (int)fVar174;
              piVar87[5] = (int)(float)((ulong)auVar178._0_8_ >> 0x20);
              piVar87 = piVar87 + 8;
              pauVar80 = pauVar80 + 1;
            } while (uVar70 != 0);
            if (uVar59 == uVar62) goto LAB_0052e2d8;
          }
          lVar60 = uVar59 - uVar62;
          puVar66 = (ushort *)(*pauVar63 + uVar62 * 2);
          piVar69 = piVar69 + uVar62;
          do {
            uVar175 = (uint)*puVar66 << 0xd;
            if ((uVar175 & 0xf800000) == 0xf800000) {
              fVar120 = (float)(uVar175 | 0x70000000);
            }
            else {
              fVar120 = (float)((uVar175 & 0xfffe000) + 0x38000000);
              if ((uVar175 & 0xf800000) == 0) {
                fVar120 = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
              }
            }
            lVar60 = lVar60 + -1;
            *piVar69 = (int)(float)((uint)fVar120 | (int)(short)*puVar66 & 0x80000000U);
            puVar66 = puVar66 + 1;
            piVar69 = piVar69 + 1;
          } while (lVar60 != 0);
        }
LAB_0052e2d8:
        lVar60 = 1;
        local_80 = lVar60;
LAB_0052e2e8:
        if (iVar92 == 1) {
          uVar59 = FUN_005cabcc(lVar56 + 0x18);
          pauVar63 = (undefined1 (*) [16])FUN_004b059c(lVar56);
          puVar65 = (undefined1 *)FUN_004aea28(uVar57);
          if (0 < (long)uVar59) {
            if ((uVar59 < 8) ||
               ((puVar65 < *pauVar63 + uVar59 * 2 &&
                (pauVar63 < (undefined1 (*) [16])(puVar65 + uVar59 * 4))))) {
              uVar62 = 0;
            }
            else {
              auVar139._8_4_ = 0xf800000;
              auVar139._0_8_ = 0xf8000000f800000;
              auVar139._12_4_ = 0xf800000;
              uVar62 = uVar59 & 0x7ffffffffffffff8;
              uVar70 = uVar62;
              puVar88 = puVar65;
              pauVar80 = pauVar63;
              do {
                auVar254 = *pauVar80;
                uVar70 = uVar70 - 8;
                uVar93 = auVar254._8_2_;
                uVar175 = (uint)uVar93 << 0xd;
                iVar194 = (uint)auVar254._10_2_ << 0xd;
                uVar196 = (uint)auVar254._12_2_ << 0xd;
                uVar197 = (uint)auVar254._14_2_ << 0xd;
                uVar199 = (uint)auVar254._0_2_ << 0xd;
                uVar216 = (uint)auVar254._2_2_ << 0xd;
                uVar218 = (uint)auVar254._4_2_ << 0xd;
                uVar220 = (uint)auVar254._6_2_ << 0xd;
                uVar96 = (undefined1)((uint)iVar194 >> 0x10);
                uVar195 = (undefined1)((uint)iVar194 >> 0x18);
                auVar248._0_8_ =
                     CONCAT17(uVar195,CONCAT16(uVar96,(uint6)((uVar175 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar248._8_2_ = 0;
                bVar94 = (byte)(uVar196 >> 0x10);
                auVar248[10] = bVar94 & 0x80;
                bVar95 = (byte)(uVar196 >> 0x18);
                auVar248[0xb] = bVar95 & 0xf;
                auVar248._12_2_ = 0;
                bVar97 = (byte)(uVar197 >> 0x10);
                auVar248[0xe] = bVar97 & 0x80;
                bVar98 = (byte)(uVar197 >> 0x18);
                auVar248[0xf] = bVar98 & 0xf;
                auVar257._0_8_ =
                     CONCAT17((char)(uVar216 >> 0x18),
                              CONCAT16((char)(uVar216 >> 0x10),
                                       (uint6)((uVar199 >> 0x10 & 0xf80) << 0x10))) &
                     0xf8000ffffffffff;
                auVar257._8_2_ = 0;
                auVar257[10] = (byte)(uVar218 >> 0x10) & 0x80;
                auVar257[0xb] = (byte)(uVar218 >> 0x18) & 0xf;
                auVar257._12_2_ = 0;
                auVar257[0xe] = (byte)(uVar220 >> 0x10) & 0x80;
                auVar257[0xf] = (byte)(uVar220 >> 0x18) & 0xf;
                auVar263._0_8_ =
                     CONCAT17(uVar195,CONCAT16(uVar96,CONCAT15((char)((uint)iVar194 >> 8),
                                                               (uint5)uVar93 << 0xd))) |
                     0x3880000038800000;
                auVar263[8] = 0;
                auVar263[9] = (char)(uVar196 >> 8);
                auVar263[10] = bVar94 | 0x80;
                auVar263[0xb] = bVar95 | 0x38;
                auVar276[0xc] = 0;
                auVar276._0_12_ = auVar263;
                auVar276[0xd] = (char)(uVar197 >> 8);
                auVar276[0xe] = bVar97 | 0x80;
                auVar276[0xf] = bVar98 | 0x38;
                auVar191._0_8_ = CONCAT44(iVar194,uVar175) | 0x7000000070000000;
                auVar191._8_4_ = uVar196 | 0x70000000;
                auVar191._12_4_ = uVar197 | 0x70000000;
                auVar213._0_8_ = CONCAT44(uVar216,uVar199) | 0x7000000070000000;
                auVar213._8_4_ = uVar218 | 0x70000000;
                auVar213._12_4_ = uVar220 | 0x70000000;
                uVar71 = CONCAT44(iVar194,uVar175) & 0xefffffffefffffff;
                uVar121 = CONCAT44(uVar216,uVar199) & 0xefffffffefffffff;
                auVar287 = NEON_cmeq(auVar248,auVar139,4);
                auVar292 = NEON_cmeq(auVar257,auVar139,4);
                auVar277._0_4_ = (float)auVar263._0_8_ + -6.1035156e-05;
                auVar277._4_4_ = (float)(auVar263._0_8_ >> 0x20) + -6.1035156e-05;
                auVar277._8_4_ = auVar263._8_4_ + -6.1035156e-05;
                auVar277._12_4_ = auVar276._12_4_ + -6.1035156e-05;
                auVar258 = NEON_cmeq(auVar257,0,2);
                auVar232._0_4_ = (int)uVar71 + 0x38000000;
                auVar232._4_4_ = (int)(uVar71 >> 0x20) + 0x38000000;
                auVar232._8_4_ = (uVar196 & 0xefffffff) + 0x38000000;
                auVar232._12_4_ = (uVar197 & 0xefffffff) + 0x38000000;
                auVar242._0_4_ = (int)uVar121 + 0x38000000;
                auVar242._4_4_ = (int)(uVar121 >> 0x20) + 0x38000000;
                auVar242._8_4_ = (uVar218 & 0xefffffff) + 0x38000000;
                auVar242._12_4_ = (uVar220 & 0xefffffff) + 0x38000000;
                auVar287 = NEON_bif(auVar191,auVar232,auVar287,1);
                auVar233 = NEON_cmeq(auVar248,0,2);
                auVar249._0_4_ = (float)(uVar199 | 0x38800000) + -6.1035156e-05;
                auVar249._4_4_ = (float)(uVar216 | 0x38800000) + -6.1035156e-05;
                auVar249._8_4_ = (float)(uVar218 | 0x38800000) + -6.1035156e-05;
                auVar249._12_4_ = (float)(uVar220 | 0x38800000) + -6.1035156e-05;
                auVar292 = NEON_bif(auVar213,auVar242,auVar292,1);
                auVar287 = NEON_bit(auVar287,auVar277,auVar233,1);
                uVar121 = CONCAT17((short)auVar254._10_2_ >> 0xf,
                                   (uint7)(((byte)((short)uVar93 >> 0xf) & 0x80) << 0x18)) &
                          0x8000ffffffffffff;
                uVar71 = CONCAT17((short)auVar254._2_2_ >> 0xf,
                                  (uint7)(((byte)((short)auVar254._0_2_ >> 0xf) & 0x80) << 0x18)) &
                         0x8000ffffffffffff;
                auVar292 = NEON_bit(auVar292,auVar249,auVar258,1);
                puVar88[0x10] = auVar292[8];
                puVar88[0x11] = auVar292[9];
                puVar88[0x12] = auVar292[10];
                puVar88[0x13] = auVar292[0xb] | (byte)((short)auVar254._4_2_ >> 0xf) & 0x80;
                puVar88[0x14] = auVar292[0xc];
                puVar88[0x15] = auVar292[0xd];
                puVar88[0x16] = auVar292[0xe];
                puVar88[0x17] = auVar292[0xf] | auVar254[7] >> 7 & 0x80U;
                *puVar88 = auVar292[0];
                puVar88[1] = auVar292[1];
                puVar88[2] = auVar292[2];
                puVar88[3] = auVar292[3] | (byte)(uVar71 >> 0x18);
                puVar88[4] = auVar292[4];
                puVar88[5] = auVar292[5];
                puVar88[6] = auVar292[6];
                puVar88[7] = auVar292[7] | (byte)(uVar71 >> 0x38);
                puVar88[0x20] = auVar287[8];
                puVar88[0x21] = auVar287[9];
                puVar88[0x22] = auVar287[10];
                puVar88[0x23] = auVar287[0xb] | (byte)((short)auVar254._12_2_ >> 0xf) & 0x80;
                puVar88[0x24] = auVar287[0xc];
                puVar88[0x25] = auVar287[0xd];
                puVar88[0x26] = auVar287[0xe];
                puVar88[0x27] = auVar287[0xf] | (byte)((short)auVar254._14_2_ >> 0xf) & 0x80;
                puVar88[0x10] = auVar287[0];
                puVar88[0x11] = auVar287[1];
                puVar88[0x12] = auVar287[2];
                puVar88[0x13] = auVar287[3] | (byte)(uVar121 >> 0x18);
                puVar88[0x14] = auVar287[4];
                puVar88[0x15] = auVar287[5];
                puVar88[0x16] = auVar287[6];
                puVar88[0x17] = auVar287[7] | (byte)(uVar121 >> 0x38);
                puVar88 = puVar88 + 0x20;
                pauVar80 = pauVar80 + 1;
              } while (uVar70 != 0);
              if (uVar59 == uVar62) goto LAB_0052e48c;
            }
            lVar56 = uVar59 - uVar62;
            puVar66 = (ushort *)(*pauVar63 + uVar62 * 2);
            puVar76 = (uint *)(puVar65 + uVar62 * 4);
            do {
              while( true ) {
                uVar93 = *puVar66;
                uVar175 = (uint)uVar93 << 0xd;
                if ((uVar175 & 0xf800000) != 0xf800000) break;
                lVar56 = lVar56 + -1;
                *puVar76 = uVar175 | 0x70000000 | (int)(short)uVar93 & 0x80000000U;
                puVar66 = puVar66 + 1;
                puVar76 = puVar76 + 1;
                if (lVar56 == 0) goto LAB_0052e48c;
              }
              fVar120 = (float)((uVar175 & 0xfffe000) + 0x38000000);
              if ((uVar175 & 0xf800000) == 0) {
                fVar120 = (float)(uVar175 | 0x38800000) + -6.1035156e-05;
              }
              lVar56 = lVar56 + -1;
              *puVar76 = (uint)fVar120 | (int)(short)uVar93 & 0x80000000U;
              puVar66 = puVar66 + 1;
              puVar76 = puVar76 + 1;
            } while (lVar56 != 0);
          }
LAB_0052e48c:
          local_80 = lVar60 + 1;
        }
      }
      FUN_004bf480(local_88);
      local_90 = lVar58 + 1;
    }
  }
LAB_0052e4a4:
  FUN_004bf480(local_98);
LAB_0052e4ac:
  *param_1 = 0;
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e6cc  FUN_0052e6cc =====

void FUN_0052e6cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0052c53c(&local_40);
  plVar2 = (long *)*param_4;
  *param_4 = local_40;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e744  FUN_0052e744 =====

void FUN_0052e744(undefined8 *param_1)

{
  void *pvVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  void *local_a0;
  void *local_98;
  void *local_90;
  undefined8 *local_88;
  undefined *local_80;
  code *pcStack_78;
  undefined **local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_88 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar4 = DAT_001b7148;
  local_88[0x1e] = 0;
  local_88[0xd] = 0;
  local_88[0xc] = 0;
  local_88[0xf] = 0;
  local_88[0xe] = 0;
  puVar3 = local_88 + 0x18;
  local_88[0x19] = 0;
  *puVar3 = 0;
  *(undefined4 *)(local_88 + 0xe) = 0x3f800000;
  local_88[1] = 0;
  *local_88 = 0;
  local_88[3] = 0;
  local_88[2] = 0;
  local_88[5] = 0;
  local_88[4] = 0;
  local_88[7] = 0;
  local_88[6] = 0;
  local_88[9] = 0;
  local_88[8] = 0;
  local_88[0xb] = 0;
  local_88[10] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x15] = 0;
  local_88[0x14] = 0;
  local_88[0x17] = 0;
  local_88[0x16] = 0;
  local_88[0x1b] = 0;
  local_88[0x1a] = 0;
  local_88[0x1d] = 0;
  local_88[0x1c] = 0;
  local_88[3] = uVar4;
  *puVar3 = 0;
  *(undefined1 *)(local_88 + 0x15) = 0;
  local_88[0x14] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0xf] = 0;
  local_88[0x17] = puVar3;
  local_88[0x1c] = 0;
  local_88[0x1b] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = local_88 + 0x1b;
                    /* try { // try from 0052e7e0 to 0052e7e3 has its CatchHandler @ 0052e910 */
  puVar3 = (undefined8 *)FUN_00578164();
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  __src = (void *)*puVar3;
  __n = puVar3[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0052e908 to 0052e90f has its CatchHandler @ 0052e918 */
        uVar4 = FUN_004b631c(&local_a0);
                    /* catch() { ... } // from try @ 0052e7e0 with catch @ 0052e910 */
        FUN_004ada18(&local_88);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar4);
        }
      }
      goto LAB_0052e954;
    }
                    /* try { // try from 0052e7fc to 0052e803 has its CatchHandler @ 0052e918 */
    local_a0 = (void *)FUN_00759c3c(__n);
    pvVar1 = (void *)((long)local_a0 + __n);
    local_90 = pvVar1;
    memcpy(local_a0,__src,__n);
    local_98 = pvVar1;
  }
                    /* try { // try from 0052e820 to 0052e863 has its CatchHandler @ 0052e91c */
  uVar4 = FUN_00583ae0(&local_88,&DAT_001baece,&local_a0);
  uVar4 = FUN_00583770(uVar4,"Concat");
  plVar5 = (long *)FUN_00583890(uVar4,&DAT_001c717f);
  *(undefined4 *)(*plVar5 + 0x18) = 0xd;
  puVar3 = (undefined8 *)FUN_005839b8(plVar5,"CPUExecutionProvider");
  local_80 = PTR_DAT_007a2000;
  local_60 = &local_80;
  uVar4 = *puVar3;
  *puVar3 = 0;
  local_80 = local_80 + 0x10;
  *param_1 = uVar4;
  pcStack_78 = FUN_005306ac;
  param_1[2] = local_80;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_005306ac;
  param_1[8] = 0;
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    free(local_a0);
  }
  puVar3 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar3);
    free(puVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0052e954:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052e958  FUN_0052e958 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0052e958(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,
                 ulong *param_5)

{
  undefined *puVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  void *__ptr;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 ******ppppppuVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 *******pppppppuVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong *__ptr_00;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  char *local_208 [2];
  void *local_1f8;
  char *local_1f0 [2];
  void *local_1e0;
  undefined8 ******local_1d8;
  ulong local_1d0;
  undefined8 ******local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  char *local_1b0;
  char *pcStack_1a8;
  undefined8 ******local_1a0 [2];
  void *local_190;
  void *local_168;
  undefined *local_160;
  undefined8 *******local_158;
  undefined8 *******pppppppuStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  void *pvStack_130;
  char *local_128;
  undefined8 *******local_120;
  undefined *local_118;
  undefined *local_f8;
  undefined8 *******local_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined *local_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 local_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  void *pvStack_90;
  byte *local_88;
  byte *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar13 = *param_4;
  if (1 < uVar13) {
    puVar22 = (undefined *)(uVar13 >> 1);
    local_f8 = (undefined *)0x0;
    local_1b8 = 0;
    local_128 = (char *)0x0;
    if (0xb < uVar13) {
      puVar19 = puVar22;
      if (puVar22 < (undefined *)0xb) {
        puVar19 = (undefined *)0xa;
      }
      if (uVar13 >> 0x3e != 0) {
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0052f758 to 0052f75b has its CatchHandler @ 0052fa34 */
          FUN_002f9ee0();
        }
        goto LAB_0052fb04;
      }
                    /* try { // try from 0052ea94 to 0052ea97 has its CatchHandler @ 0052fa34 */
      local_120 = (undefined8 *******)FUN_00759c3c((long)puVar19 << 3);
      local_128 = (char *)0x1;
      local_118 = puVar19;
    }
    puVar19 = (undefined *)0x0;
    puVar12 = puVar22;
    if (puVar22 < (undefined *)0x2) {
      puVar12 = (undefined *)0x1;
    }
    do {
      puVar15 = param_4 + 1;
      if ((*param_4 & 1) != 0) {
        puVar15 = (ulong *)param_4[1];
      }
      uVar13 = puVar15[(long)puVar19];
      if (uVar13 == 0) {
        uVar9 = FUN_00753a74(0x88);
                    /* try { // try from 0052f5ec to 0052f5f3 has its CatchHandler @ 0052fa98 */
        FUN_00645c30(local_1a0);
                    /* try { // try from 0052f5f4 to 0052f613 has its CatchHandler @ 0052fa88 */
        FUN_0047488c(&local_c0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                     ,0x4a,
                     "Status onnxruntime::ConcatBase::PrepareForCompute(OpKernelContext *, const InlinedTensorsVector &, Prepare &) const"
                     ,local_1a0);
                    /* try { // try from 0052f614 to 0052f623 has its CatchHandler @ 0052fa50 */
        FUN_00479eac(&local_160,"input count mismatch");
                    /* try { // try from 0052f628 to 0052f66f has its CatchHandler @ 0052fa38 */
        FUN_00474a40(uVar9,&local_c0,"input != nullptr",&local_160);
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar9,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_0052fb04;
      }
                    /* try { // try from 0052eae0 to 0052eae7 has its CatchHandler @ 0052faa8 */
      local_1a0[0] = (undefined8 ******)FUN_005cabcc(uVar13 + 0x18);
      if (0 < (long)local_1a0[0]) {
                    /* try { // try from 0052eb50 to 0052eb5b has its CatchHandler @ 0052f978 */
        FUN_004c7138(&local_c0,uVar13 + 0x18);
        if (((ulong)local_f8 & 1) != 0) {
          free(local_f0);
        }
        uStack_d8 = CONCAT71(uStack_9f,bStack_a0);
        uVar13 = (ulong)local_c0 >> 1;
        local_f8 = local_c0;
        pppppppuStack_e8 = pppppppuStack_b0;
        local_f0 = pppppppuStack_b8;
        uStack_e0 = local_a8;
        pvStack_c8 = pvStack_90;
        local_d0 = local_98;
        local_1b8 = uVar13;
        if ((puVar19 != (undefined *)(long)(int)puVar19) || ((int)puVar19 < 0)) {
          plVar10 = (long *)FUN_00753a74(8);
          *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0052f838 to 0052f84b has its CatchHandler @ 0052f97c */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
          }
          goto LAB_0052fb04;
        }
        puVar1 = (undefined *)0x5;
        if (((ulong)local_128 & 1) != 0) {
          puVar1 = local_118;
        }
        if ((undefined *)((ulong)local_128 >> 1) == puVar1) {
                    /* try { // try from 0052f5d0 to 0052f5db has its CatchHandler @ 0052f97c */
          FUN_004eddfc(&local_128,local_1a0);
        }
        else {
          pppppppuVar17 = &local_120;
          if (((ulong)local_128 & 1) != 0) {
            pppppppuVar17 = local_120;
          }
          pppppppuVar17[(long)((ulong)local_128 >> 1)] = local_1a0[0];
          local_128 = local_128 + 2;
        }
        goto LAB_0052ec84;
      }
      local_c0 = (undefined *)0x0;
      puVar1 = (undefined *)0x5;
      if (((ulong)local_128 & 1) != 0) {
        puVar1 = local_118;
      }
      if ((undefined *)((ulong)local_128 >> 1) == puVar1) {
                    /* try { // try from 0052eb40 to 0052eb4b has its CatchHandler @ 0052f8f0 */
        FUN_004edce0(&local_128,&local_c0);
      }
      else {
        pppppppuVar17 = &local_120;
        if (((ulong)local_128 & 1) != 0) {
          pppppppuVar17 = local_120;
        }
        pppppppuVar17[(long)((ulong)local_128 >> 1)] = (undefined8 ******)0x0;
        local_128 = local_128 + 2;
      }
      puVar19 = puVar19 + 1;
    } while (puVar12 != puVar19);
    puVar15 = param_4 + 1;
    if ((*param_4 & 1) != 0) {
      puVar15 = (ulong *)param_4[1];
    }
                    /* try { // try from 0052ec3c to 0052ec47 has its CatchHandler @ 0052f938 */
    FUN_004c7138(&local_c0,*puVar15 + 0x18);
    if (((ulong)local_f8 & 1) != 0) {
      free(local_f0);
    }
    puVar19 = (undefined *)0x0;
    uStack_d8 = CONCAT71(uStack_9f,bStack_a0);
    uVar13 = (ulong)local_c0 >> 1;
    local_f8 = local_c0;
    pppppppuStack_e8 = pppppppuStack_b0;
    local_f0 = pppppppuStack_b8;
    uStack_e0 = local_a8;
    pvStack_c8 = pvStack_90;
    local_d0 = local_98;
    local_1b8 = uVar13;
LAB_0052ec84:
    if (((ulong)*(byte *)(param_2 + 1) == 0) && (uVar13 == 0)) {
                    /* try { // try from 0052ec90 to 0052ecab has its CatchHandler @ 0052f974 */
      FUN_0048a3f4(&local_c0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                   ,0x68,"PrepareForCompute");
                    /* try { // try from 0052ecac to 0052ecbf has its CatchHandler @ 0052f964 */
      FUN_00475ff4(&local_160,&local_c0,0);
      local_1f0[0] = " ";
      local_208[0] = "Cannot concatenate scalars";
      FUN_004a2c0c(local_1a0,&local_160,local_1f0,local_208);
                    /* try { // try from 0052ecf0 to 0052ed03 has its CatchHandler @ 0052f93c */
      FUN_0063aa48(param_1,2,1,local_1a0);
      if (((ulong)local_1a0[0] & 1) != 0) {
        free(local_190);
      }
      pbVar4 = local_88;
      if (((ulong)local_160 & 1) != 0) {
        free(pppppppuStack_150);
        pbVar4 = local_88;
      }
      local_88 = pbVar4;
      if (pbVar4 != (byte *)0x0) {
        while (pbVar5 = local_80, pbVar5 != pbVar4) {
          local_80 = pbVar5 + -0x18;
          if ((*local_80 & 1) != 0) {
            free(*(void **)(pbVar5 + -8));
          }
        }
        goto LAB_0052f0d4;
      }
      goto LAB_0052f0dc;
    }
    lVar21 = uVar13 + *(byte *)(param_2 + 1);
    if (lVar21 < 0) {
      plVar10 = (long *)FUN_00753a74(8,lVar21);
      *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0052f878 to 0052f88b has its CatchHandler @ 0052f988 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_0052fb04;
    }
                    /* try { // try from 0052ed2c to 0052ed2f has its CatchHandler @ 0052f988 */
    uVar6 = FUN_00500578(*param_2);
    puVar19 = puVar19 + 1;
    param_5[0x13] = uVar6;
    if (puVar19 < puVar22) {
      do {
        puVar15 = param_4 + 1;
        if ((*param_4 & 1) != 0) {
          puVar15 = (ulong *)param_4[1];
        }
        uVar6 = puVar15[(long)puVar19];
        if (uVar6 == 0) {
          uVar9 = FUN_00753a74(0x88);
                    /* try { // try from 0052f6c0 to 0052f6c7 has its CatchHandler @ 0052f984 */
          FUN_00645c30(local_1a0);
                    /* try { // try from 0052f6c8 to 0052f6e7 has its CatchHandler @ 0052f92c */
          FUN_0047488c(&local_c0,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                       ,0x73,
                       "Status onnxruntime::ConcatBase::PrepareForCompute(OpKernelContext *, const InlinedTensorsVector &, Prepare &) const"
                       ,local_1a0);
                    /* try { // try from 0052f6e8 to 0052f6f7 has its CatchHandler @ 0052f90c */
          FUN_00479eac(&local_160,"input count mismatch");
                    /* try { // try from 0052f6fc to 0052f743 has its CatchHandler @ 0052f908 */
          FUN_00474a40(uVar9,&local_c0,"input != nullptr",&local_160);
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar9,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_0052fb04;
        }
        uVar20 = *(ulong *)(uVar6 + 0x18);
        if ((uVar20 == 0xffffffffffffffff) ||
           (lVar21 = *(long *)(uVar6 + 0x20), uVar20 != 0 && lVar21 == 0)) goto LAB_0052f5cc;
                    /* try { // try from 0052ed90 to 0052ed93 has its CatchHandler @ 0052f9e0 */
        lVar7 = FUN_005cabcc();
        if (lVar7 == 0) {
          local_c0 = (undefined *)0x0;
          puVar1 = (undefined *)0x5;
          if (((ulong)local_128 & 1) != 0) {
            puVar1 = local_118;
          }
          if ((undefined *)((ulong)local_128 >> 1) == puVar1) {
                    /* try { // try from 0052eef4 to 0052eeff has its CatchHandler @ 0052f8e4 */
            FUN_004edce0(&local_128,&local_c0);
          }
          else {
            pppppppuVar17 = &local_120;
            if (((ulong)local_128 & 1) != 0) {
              pppppppuVar17 = local_120;
            }
            pppppppuVar17[(long)((ulong)local_128 >> 1)] = (undefined8 ******)0x0;
LAB_0052ee78:
            local_128 = local_128 + 2;
          }
        }
        else {
          local_1c0 = uVar20;
          if (uVar20 != uVar13) {
            uVar9 = FUN_00753a74(0x88);
                    /* try { // try from 0052f768 to 0052f76f has its CatchHandler @ 0052f934 */
            FUN_00645c30(local_1a0);
                    /* try { // try from 0052f770 to 0052f78f has its CatchHandler @ 0052f918 */
            FUN_0047488c(&local_c0,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                         ,0x8d,
                         "Status onnxruntime::ConcatBase::PrepareForCompute(OpKernelContext *, const InlinedTensorsVector &, Prepare &) const"
                         ,local_1a0);
            local_1f0[0] = 
            "Ranks of input data are different, cannot concatenate them. expected rank: ";
            local_208[0] = " got: ";
            FUN_004774b0(&local_160,local_1f0,&local_1b8,local_208,&local_1c0);
                    /* try { // try from 0052f7c4 to 0052f80b has its CatchHandler @ 0052f914 */
            FUN_00474a40(uVar9,&local_c0,"input_rank == reference_rank",&local_160);
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar9,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
            }
            goto LAB_0052fb04;
          }
          local_1d0 = 0;
          local_1c8 = (undefined8 ******)0x1;
          if (uVar13 != 0) {
            pppppppuVar17 = &local_f0;
            if (((ulong)local_f8 & 1) != 0) {
              pppppppuVar17 = local_f0;
            }
            if (*(char *)(param_2 + 1) == '\0') {
              do {
                if (uVar13 == local_1d0) goto LAB_0052f5cc;
                local_1d8 = *(undefined8 *******)(lVar21 + local_1d0 * 8);
                local_1c8 = (undefined8 ******)((long)local_1c8 * (long)local_1d8);
                if ((param_5[0x13] != local_1d0) && (local_1d8 != pppppppuVar17[local_1d0]))
                goto LAB_0052efac;
                local_1d0 = local_1d0 + 1;
              } while (uVar13 != local_1d0);
            }
            else {
              do {
                if (uVar13 == local_1d0) goto LAB_0052f5cc;
                local_1d8 = *(undefined8 *******)(lVar21 + local_1d0 * 8);
                local_1c8 = (undefined8 ******)((long)local_1c8 * (long)local_1d8);
                if (local_1d8 != pppppppuVar17[local_1d0]) goto LAB_0052efac;
                local_1d0 = local_1d0 + 1;
              } while (uVar13 != local_1d0);
            }
          }
          puVar1 = (undefined *)0x5;
          if (((ulong)local_128 & 1) != 0) {
            puVar1 = local_118;
          }
          if ((undefined *)((ulong)local_128 >> 1) != puVar1) {
            pppppppuVar17 = &local_120;
            if (((ulong)local_128 & 1) != 0) {
              pppppppuVar17 = local_120;
            }
            pppppppuVar17[(long)((ulong)local_128 >> 1)] = local_1c8;
            goto LAB_0052ee78;
          }
                    /* try { // try from 0052eee4 to 0052eeef has its CatchHandler @ 0052f8e8 */
          FUN_004eddfc(&local_128,&local_1c8);
        }
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar22);
    }
    local_160 = (undefined *)0x0;
    if ((undefined *)0x1 < local_f8) {
      if (((ulong)local_f8 & 1) == 0) {
        local_160 = local_f8;
        pvStack_130 = pvStack_c8;
        local_138 = local_d0;
        pppppppuStack_150 = pppppppuStack_e8;
        local_158 = local_f0;
        uStack_140 = uStack_d8;
        local_148 = uStack_e0;
      }
      else {
                    /* try { // try from 0052f0fc to 0052f107 has its CatchHandler @ 0052f8f4 */
        FUN_004daf20(&local_160,&local_f8);
      }
    }
    uVar13 = param_5[0x13];
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      ppppppuVar11 = (undefined8 ******)0x0;
      puVar15 = param_4 + 1;
      if ((*param_4 & 1) != 0) {
        puVar15 = (ulong *)param_4[1];
      }
      do {
        if (*(ulong *)(*puVar15 + 0x18) <= uVar13) goto LAB_0052f5cc;
        lVar21 = *(long *)(*(long *)(*puVar15 + 0x20) + uVar13 * 8);
        if (lVar21 < 0) {
          plVar10 = (long *)FUN_00753a74(8);
          *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0052f6a0 to 0052f6b3 has its CatchHandler @ 0052fa70 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
          }
          goto LAB_0052fb04;
        }
        puVar12 = puVar12 + -1;
        ppppppuVar11 = (undefined8 ******)(lVar21 + (long)ppppppuVar11);
        puVar15 = puVar15 + 1;
      } while (puVar12 != (undefined *)0x0);
      if ((long)ppppppuVar11 < 0) {
        plVar10 = (long *)FUN_00753a74(8);
        *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0052f8d0 to 0052f8e3 has its CatchHandler @ 0052f904 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_0052fb04;
      }
      pppppppuVar17 = &local_158;
      if (((ulong)local_160 & 1) != 0) {
        pppppppuVar17 = local_158;
      }
      pppppppuVar17[param_5[0x13]] = ppppppuVar11;
    }
    else {
      pppppppuVar17 = &local_158;
      if (((ulong)local_160 & 1) != 0) {
        pppppppuVar17 = local_158;
      }
                    /* try { // try from 0052f130 to 0052f13f has its CatchHandler @ 0052f910 */
      local_c0 = puVar22;
      FUN_00530a08(&local_160,pppppppuVar17 + uVar13,&local_c0,1);
    }
    pppppppuVar17 = &local_158;
    if (((ulong)local_160 & 1) != 0) {
      pppppppuVar17 = local_158;
    }
    if (((undefined *)0x1 < local_160) && (pppppppuVar17 == (undefined8 *******)0x0)) {
LAB_0052f5cc:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
                    /* try { // try from 0052f1cc to 0052f1d3 has its CatchHandler @ 0052f928 */
    FUN_005ca9a8(local_1a0,(ulong)local_160 >> 1);
                    /* try { // try from 0052f1d4 to 0052f1ef has its CatchHandler @ 0052f980 */
    uVar13 = FUN_0058d3bc(param_3,0,local_1a0);
    param_5[0x12] = uVar13;
    uVar6 = FUN_005cabcc(local_1a0);
    uVar13 = local_1b8;
    param_5[0x10] = uVar6;
    if (uVar6 != 0) {
      param_5[0x11] = 1;
      uVar6 = local_1b8 + *(byte *)(param_2 + 1);
      if (param_5[0x13] < uVar6) {
        pppppppuVar17 = &local_158;
        if (((ulong)local_160 & 1) != 0) {
          pppppppuVar17 = local_158;
        }
        uVar20 = 1;
        do {
          lVar21 = uVar6 - 1;
          uVar6 = uVar6 - 1;
          uVar20 = uVar20 * (long)pppppppuVar17[lVar21];
          param_5[0x11] = uVar20;
        } while (param_5[0x13] < uVar6);
      }
      uVar6 = *param_5;
      puVar16 = param_5 + 1;
      __ptr_00 = (ulong *)*puVar16;
      puVar15 = puVar16;
      puVar19 = (undefined *)0x5;
      if ((uVar6 & 1) != 0) {
        puVar15 = __ptr_00;
        puVar19 = (undefined *)param_5[2];
      }
      if (puVar19 < puVar22) {
        puVar19 = (undefined *)((long)puVar19 * 2);
        if (puVar19 < puVar22 || (long)puVar19 - (long)puVar22 == 0) {
          puVar19 = puVar22;
        }
        if ((undefined *)0xaaaaaaaaaaaaaaa < puVar19) {
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0052f8a0 to 0052f8a3 has its CatchHandler @ 0052f930 */
            FUN_002f9ee0();
          }
          goto LAB_0052fb04;
        }
                    /* try { // try from 0052f29c to 0052f29f has its CatchHandler @ 0052f930 */
        puVar8 = (ulong *)FUN_00759c3c((long)puVar19 * 0x18);
        if (1 < uVar6) {
          uVar20 = uVar6 >> 1;
          puVar14 = puVar8;
          do {
            uVar23 = puVar15[1];
            uVar18 = *puVar15;
            uVar20 = uVar20 - 1;
            puVar14[2] = puVar15[2];
            puVar14[1] = uVar23;
            *puVar14 = uVar18;
            puVar14 = puVar14 + 3;
            puVar15 = puVar15 + 3;
          } while (uVar20 != 0);
        }
        if ((uVar6 & 1) != 0) {
          free(__ptr_00);
          uVar6 = *param_5;
        }
        param_5[1] = (ulong)puVar8;
        param_5[2] = (ulong)puVar19;
        *param_5 = uVar6 | 1;
      }
      puVar19 = (undefined *)0x0;
      if (puVar22 < (undefined *)0x2) {
        puVar22 = (undefined *)0x1;
      }
      do {
        puVar15 = param_4 + 1;
        if ((*param_4 & 1) != 0) {
          puVar15 = (ulong *)param_4[1];
        }
        puVar12 = (undefined *)puVar15[(long)puVar19];
        lVar21 = *(long *)(param_5[0x12] + 0x58);
        lVar7 = *(long *)(puVar12 + 0x58);
        if (lVar7 == lVar21) {
          uVar6 = *(ulong *)(puVar12 + 0x18);
          if ((uVar6 == 0xffffffffffffffff) || (uVar6 != 0 && *(long *)(puVar12 + 0x20) == 0))
          goto LAB_0052f5cc;
          if (param_5[0x13] < uVar13) {
            pppppppuVar17 = (undefined8 *******)0x1;
            uVar20 = uVar13;
            do {
              uVar18 = uVar20 - 1;
              if (uVar6 <= uVar18) goto LAB_0052f5cc;
              pppppppuVar17 =
                   (undefined8 *******)
                   (*(long *)(*(long *)(puVar12 + 0x20) + -8 + uVar20 * 8) * (long)pppppppuVar17);
              uVar20 = uVar18;
            } while (param_5[0x13] < uVar18);
          }
          else {
            pppppppuVar17 = (undefined8 *******)0x1;
          }
          uVar6 = *param_5;
          local_c0 = puVar12;
          pppppppuStack_b8 = pppppppuVar17;
          pppppppuVar2 = &local_120;
          if (((ulong)local_128 & 1) != 0) {
            pppppppuVar2 = local_120;
          }
          uVar20 = 5;
          if ((uVar6 & 1) != 0) {
            uVar20 = param_5[2];
          }
          pppppppuStack_b0 = (undefined8 *******)pppppppuVar2[(long)puVar19];
          if (uVar6 >> 1 == uVar20) {
                    /* try { // try from 0052f51c to 0052f527 has its CatchHandler @ 0052f8ec */
            FUN_00530e4c(param_5,&local_c0);
          }
          else {
            puVar15 = puVar16;
            if ((uVar6 & 1) != 0) {
              puVar15 = (ulong *)param_5[1];
            }
            puVar15 = puVar15 + (uVar6 >> 1) * 3;
            puVar15[2] = (ulong)pppppppuVar2[(long)puVar19];
            puVar15[1] = (ulong)pppppppuVar17;
            *puVar15 = (ulong)puVar12;
            *param_5 = *param_5 + 2;
          }
        }
        else {
                    /* try { // try from 0052f320 to 0052f33b has its CatchHandler @ 0052f9ec */
          FUN_0048a3f4(&local_c0,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                       ,0xd4,"PrepareForCompute");
                    /* try { // try from 0052f33c to 0052f34b has its CatchHandler @ 0052f9e4 */
          FUN_00475ff4(local_208,&local_c0,0);
          local_1b0 = "Data type mismatch";
          pcStack_1a8 = " ";
          FUN_004a2c0c(local_1f0,local_208,&pcStack_1a8,&local_1b0);
                    /* try { // try from 0052f374 to 0052f387 has its CatchHandler @ 0052f9f4 */
          FUN_0063aa48(param_1,2,1,local_1f0);
          if (((ulong)local_1f0[0] & 1) != 0) {
            free(local_1e0);
          }
          pbVar4 = local_88;
          if (((ulong)local_208[0] & 1) != 0) {
            free(local_1f8);
            pbVar4 = local_88;
          }
          local_88 = pbVar4;
          if (pbVar4 != (byte *)0x0) {
            while (pbVar5 = local_80, pbVar5 != pbVar4) {
              local_80 = pbVar5 + -0x18;
              if ((*local_80 & 1) != 0) {
                free(*(void **)(pbVar5 + -8));
              }
            }
            local_80 = pbVar4;
            free(local_88);
          }
          if ((bStack_a0 & 1) != 0) {
            free(pvStack_90);
          }
          if (((ulong)local_c0 & 1) != 0) {
            free(pppppppuStack_b0);
          }
        }
        if (lVar7 != lVar21) goto LAB_0052f558;
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar22);
      if ((*param_5 & 1) != 0) {
        puVar16 = (ulong *)param_5[1];
      }
      *(bool *)(param_5 + 0x14) = *(int *)(*(long *)(*puVar16 + 0x58) + 0x18) == 8;
    }
    *param_1 = 0;
LAB_0052f558:
    __ptr = local_168;
    local_168 = (void *)0x0;
    pppppppuVar17 = local_158;
    puVar22 = local_160;
    if (__ptr != (void *)0x0) {
      free(__ptr);
      pppppppuVar17 = local_158;
      puVar22 = local_160;
    }
    goto joined_r0x0052f0f0;
  }
  FUN_0048a3f4(&local_c0,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
               ,0x3c,"PrepareForCompute");
                    /* try { // try from 0052e9b0 to 0052e9bf has its CatchHandler @ 0052f9b8 */
  FUN_00475ff4(&local_f8,&local_c0,0);
  local_160 = &DAT_001bc0af;
  local_128 = "Must have 1 or more inputs";
  FUN_004a2c0c(local_1a0,&local_f8,&local_160,&local_128);
                    /* try { // try from 0052e9ec to 0052e9ff has its CatchHandler @ 0052f98c */
  FUN_0063aa48(param_1,2,1,local_1a0);
  if (((ulong)local_1a0[0] & 1) != 0) {
    free(local_190);
  }
  pbVar4 = local_88;
  if (((ulong)local_f8 & 1) != 0) {
    free(pppppppuStack_e8);
    pbVar4 = local_88;
  }
  local_88 = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    while (pbVar5 = local_80, pbVar5 != pbVar4) {
      local_80 = pbVar5 + -0x18;
      if ((*local_80 & 1) != 0) {
        free(*(void **)(pbVar5 + -8));
      }
    }
    free(local_88);
  }
  pppppppuVar17 = pppppppuStack_b0;
  puVar22 = local_c0;
  if ((bStack_a0 & 1) != 0) {
    free(pvStack_90);
    pppppppuVar17 = pppppppuStack_b0;
    puVar22 = local_c0;
  }
  goto joined_r0x0052f590;
LAB_0052efac:
                    /* try { // try from 0052efac to 0052efc7 has its CatchHandler @ 0052f924 */
  FUN_0048a3f4(&local_c0,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
               ,0x9d,"PrepareForCompute");
                    /* try { // try from 0052efc8 to 0052efdb has its CatchHandler @ 0052f920 */
  FUN_00475ff4(&local_160,&local_c0,0);
  local_1f0[0] = " ";
  pppppppuVar17 = &local_f0;
  if (((ulong)local_f8 & 1) != 0) {
    pppppppuVar17 = local_f0;
  }
  local_208[0] = "Non concat axis dimensions must match: Axis ";
  local_1b0 = " and ";
  pcStack_1a8 = " has mismatched dimensions of ";
  FUN_00530780(local_1a0,&local_160,local_1f0,local_208,&local_1d0,&pcStack_1a8,&local_1d8,
               &local_1b0,pppppppuVar17 + local_1d0);
                    /* try { // try from 0052f048 to 0052f05b has its CatchHandler @ 0052f91c */
  FUN_0063aa48(param_1,2,1,local_1a0);
  if (((ulong)local_1a0[0] & 1) != 0) {
    free(local_190);
  }
  pbVar4 = local_88;
  if (((ulong)local_160 & 1) != 0) {
    free(pppppppuStack_150);
    pbVar4 = local_88;
  }
  local_88 = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    while (pbVar5 = local_80, pbVar5 != pbVar4) {
      local_80 = pbVar5 + -0x18;
      if ((*local_80 & 1) != 0) {
        free(*(void **)(pbVar5 + -8));
      }
    }
LAB_0052f0d4:
    free(local_88);
  }
LAB_0052f0dc:
  pppppppuVar17 = pppppppuStack_b0;
  puVar22 = local_c0;
  if ((bStack_a0 & 1) != 0) {
    free(pvStack_90);
    pppppppuVar17 = pppppppuStack_b0;
    puVar22 = local_c0;
  }
joined_r0x0052f0f0:
  if (((ulong)puVar22 & 1) != 0) {
    free(pppppppuVar17);
  }
  pppppppuVar17 = local_f0;
  puVar22 = local_f8;
  if (((ulong)local_128 & 1) != 0) {
    free(local_120);
    pppppppuVar17 = local_f0;
    puVar22 = local_f8;
  }
joined_r0x0052f590:
  if (((ulong)puVar22 & 1) != 0) {
    free(pppppppuVar17);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_0052fb04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052fb08  FUN_0052fb08 =====

void FUN_0052fb08(long *param_1,long param_2,ulong *param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  ulong *puVar5;
  undefined8 ***pppuVar6;
  char cVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *local_120;
  byte local_118 [8];
  void *local_110;
  ulong local_e0;
  undefined8 **local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 **local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar16 = *param_3;
  FUN_0056a36c(&local_a8,param_3[0x12]);
  local_e0 = local_a8;
  if (*(char *)(param_2 + 8) == '\0') {
    local_a8 = 0;
    uStack_d0 = uStack_98;
    local_d8 = local_a0;
    uStack_c0 = uStack_88;
    local_c8 = local_90;
    uStack_b0 = uStack_78;
    local_b8 = local_80;
  }
  else {
    uVar13 = param_3[0x13];
    local_e0 = 0;
    uVar12 = local_a8 >> 1;
    uVar14 = uVar12 - 1;
    if (6 < uVar14) {
      if (uVar14 >> 0x3d != 0) {
        if (*(long *)(lVar8 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0052feb0 to 0052feb3 has its CatchHandler @ 0052fef4 */
          FUN_002f9ee0();
        }
        goto LAB_0052ff54;
      }
      uVar2 = uVar14;
      if (uVar14 < 0xd) {
        uVar2 = 0xc;
      }
                    /* try { // try from 0052fb9c to 0052fb9f has its CatchHandler @ 0052fef4 */
      local_d8 = (undefined8 **)FUN_00759c3c(uVar2 << 3);
      uStack_d0 = uVar2;
      local_e0 = 1;
    }
    if (uVar14 != 0) {
      uVar14 = 1;
      do {
        uVar2 = uVar14 - 1;
        if (uVar13 <= uVar14 - 1) {
          uVar2 = uVar14;
        }
        pppuVar6 = &local_a0;
        if ((local_a8 & 1) != 0) {
          pppuVar6 = (undefined8 ***)local_a0;
        }
        uVar3 = 6;
        if ((local_e0 & 1) != 0) {
          uVar3 = uStack_d0;
        }
        if (local_e0 >> 1 == uVar3) {
                    /* try { // try from 0052fc34 to 0052fc3b has its CatchHandler @ 0052feb4 */
          FUN_004c78bc(&local_e0);
        }
        else {
          pppuVar4 = &local_d8;
          if ((local_e0 & 1) != 0) {
            pppuVar4 = (undefined8 ***)local_d8;
          }
          pppuVar4[local_e0 >> 1] = pppuVar6[uVar2];
          local_e0 = local_e0 + 2;
        }
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
    }
  }
  if (0 < (int)(uVar16 >> 1)) {
    uVar16 = uVar16 >> 1 & 0x7fffffff;
    lVar19 = 0;
    lVar15 = 0;
    do {
      puVar5 = param_3 + 1;
      if ((*param_3 & 1) != 0) {
        puVar5 = (ulong *)param_3[1];
      }
      pbVar1 = (byte *)((long)puVar5 + lVar19);
      if (*(long *)(pbVar1 + 0x10) != 0) {
        uVar12 = param_3[0x12];
        lVar17 = *(long *)pbVar1;
        uVar18 = *(undefined8 *)(param_4 + 0x18);
                    /* try { // try from 0052fcf0 to 0052fcfb has its CatchHandler @ 0052fefc */
        FUN_0056a36c(local_118,lVar17);
                    /* try { // try from 0052fcfc to 0052fd23 has its CatchHandler @ 0052ff04 */
        FUN_0052ff58(&local_120,uVar18,uVar12,lVar15,&local_e0,lVar17 + 0x18,lVar17,0,local_118);
        if ((local_118[0] & 1) != 0) {
          free(local_110);
        }
        puVar9 = local_120;
        if (local_120 != (undefined8 *)0x0) {
                    /* try { // try from 0052fe0c to 0052fe13 has its CatchHandler @ 0052fee4 */
          puVar10 = (undefined8 *)FUN_00759c3c(0x20);
          *puVar10 = *puVar9;
          if ((*(byte *)(puVar9 + 1) & 1) == 0) {
            uVar20 = puVar9[2];
            uVar18 = puVar9[1];
            puVar10[3] = puVar9[3];
            puVar10[2] = uVar20;
            puVar10[1] = uVar18;
          }
          else {
                    /* try { // try from 0052fe48 to 0052fe4b has its CatchHandler @ 0052fec4 */
            FUN_002fb36c(puVar10 + 1,puVar9[3],puVar9[2]);
          }
          *param_1 = (long)puVar10;
                    /* try { // try from 0052fe50 to 0052fe6f has its CatchHandler @ 0052fed4 */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concat.cc"
                       ,"ComputeImpl",0x113);
          puVar9 = local_120;
          local_120 = (undefined8 *)0x0;
          if (puVar9 != (undefined8 *)0x0) {
            if ((*(byte *)(puVar9 + 1) & 1) != 0) {
              free((void *)puVar9[3]);
            }
            free(puVar9);
          }
          goto LAB_0052fd98;
        }
        cVar7 = *(char *)(param_2 + 8);
        *param_1 = 0;
        if (cVar7 == '\0') {
          uVar12 = param_3[0x13];
          if (*(ulong *)(*(long *)pbVar1 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_004839bc();
          }
          pppuVar6 = &local_d8;
          if ((local_e0 & 1) != 0) {
            pppuVar6 = (undefined8 ***)local_d8;
          }
          ppuVar11 = (undefined8 **)
                     ((long)pppuVar6[uVar12] *
                     *(long *)(*(long *)(*(long *)pbVar1 + 0x20) + uVar12 * 8));
        }
        else {
          pppuVar6 = &local_a0;
          if ((local_a8 & 1) != 0) {
            pppuVar6 = (undefined8 ***)local_a0;
          }
          ppuVar11 = pppuVar6[param_3[0x13]];
        }
        lVar15 = (long)ppuVar11 + lVar15;
      }
      uVar16 = uVar16 - 1;
      lVar19 = lVar19 + 0x18;
    } while (uVar16 != 0);
  }
  *param_1 = 0;
LAB_0052fd98:
  if ((local_e0 & 1) != 0) {
    free(local_d8);
  }
  if ((local_a8 & 1) == 0) {
    if (*(long *)(lVar8 + 0x28) == local_70) {
      return;
    }
  }
  else {
    free(local_a0);
    if (*(long *)(lVar8 + 0x28) == local_70) {
      return;
    }
  }
LAB_0052ff54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0052ff58  FUN_0052ff58 =====

void FUN_0052ff58(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,long *param_7,long param_8,undefined8 param_9
                 )

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_b8 [3];
  char *local_a0 [3];
  byte local_88 [16];
  void *local_78;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = param_3[0xb];
  if (lVar3 != param_7[0xb]) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00530094 to 0053009b has its CatchHandler @ 0053015c */
    FUN_00645c30(local_a0);
                    /* try { // try from 0053009c to 005300bb has its CatchHandler @ 0053014c */
    FUN_0047488c(local_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0x10d,
                 "Status onnxruntime::DispatchStridedCopy(concurrency::ThreadPool *, Tensor &, std::ptrdiff_t, const TensorShapeVector &, const TensorShape &, const Tensor &, std::ptrdiff_t, const TensorShapeVector &) [EnabledDataTypes = onnxruntime::TypeList<int, long, float>]"
                 ,local_a0);
                    /* try { // try from 005300bc to 005300cb has its CatchHandler @ 0053012c */
    FUN_00479eac(local_b8,"src and dst types must match");
                    /* try { // try from 005300d0 to 00530113 has its CatchHandler @ 00530114 */
    FUN_00474a40(uVar2,local_88,"dst.DataType() == src.DataType()",local_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_00530198;
  }
  if (*(int *)(lVar3 + 0x18) == 8) {
LAB_0052ffe4:
    local_a0[0] = "Unsupported input data type of ";
    local_b8[0] = lVar3;
    FUN_004c79d8(local_88,local_a0,local_b8);
                    /* try { // try from 00530004 to 00530017 has its CatchHandler @ 0053016c */
    FUN_0063aa48(param_1,2,1,local_88);
    if ((local_88[0] & 1) != 0) {
      free(local_78);
    }
  }
  else {
    if (*(long *)(lVar3 + 0x10) == 8) {
      FUN_00531dd4(param_2,*param_3 + param_3[0xf] + param_4 * 8,param_5,param_6,
                   *param_7 + param_7[0xf] + param_8 * 8,param_9);
    }
    else {
      if (*(long *)(lVar3 + 0x10) != 4) goto LAB_0052ffe4;
      FUN_00530f40(param_2,*param_3 + param_3[0xf] + param_4 * 4,param_5,param_6,
                   *param_7 + param_7[0xf] + param_8 * 4,param_9);
    }
    *param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00530198:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053019c  FUN_0053019c =====

void FUN_0053019c(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  void *local_148;
  undefined8 *local_140;
  void *local_138;
  long local_c0;
  ulong local_98;
  undefined8 **local_90;
  ulong local_88;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = FUN_0058d108();
  uVar2 = **(uint **)(lVar5 + 0x98);
  local_98 = 0;
  if (5 < uVar2) {
    uVar7 = uVar2;
    if (uVar2 < 0xb) {
      uVar7 = 10;
    }
    if ((int)uVar7 < 0) {
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00530380 to 00530383 has its CatchHandler @ 005303d4 */
        FUN_002f9ee0();
      }
      goto LAB_00530408;
    }
                    /* try { // try from 00530204 to 00530207 has its CatchHandler @ 005303d4 */
    local_90 = (undefined8 **)FUN_00759c3c((long)(int)uVar7 << 3);
    local_98 = 1;
    local_88 = (long)(int)uVar7;
  }
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
                    /* try { // try from 0053022c to 0053028b has its CatchHandler @ 005303e4 */
      local_140 = (undefined8 *)FUN_004ae6a8(param_3,uVar7);
      uVar6 = local_98 >> 1;
      uVar3 = 5;
      if ((local_98 & 1) != 0) {
        uVar3 = local_88;
      }
      if (uVar6 == uVar3) {
        FUN_00532b10(&local_98,&local_140);
      }
      else {
        uVar3 = local_98 & 1;
        local_98 = local_98 + 2;
        pppuVar1 = &local_90;
        if (uVar3 != 0) {
          pppuVar1 = (undefined8 ***)local_90;
        }
        pppuVar1[uVar6] = (undefined8 **)local_140;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  local_140 = (undefined8 **)0x0;
                    /* try { // try from 00530294 to 005302ab has its CatchHandler @ 00530394 */
  FUN_0052e958(&local_148,param_2 + 0x10,param_3,&local_98,&local_140);
  if (local_148 == (void *)0x0) {
    if (local_c0 == 0) {
      *param_1 = 0;
    }
    else {
                    /* try { // try from 0053032c to 0053033f has its CatchHandler @ 00530384 */
      FUN_0052fb08(param_1,param_2 + 0x10,&local_140,param_3);
      __ptr = local_148;
      local_148 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
          free(*(void **)((long)__ptr + 0x18));
        }
        free(__ptr);
      }
    }
  }
  else {
    *param_1 = (long)local_148;
  }
  if (((ulong)local_140 & 1) != 0) {
    free(local_138);
  }
  if ((local_98 & 1) == 0) {
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_90);
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
LAB_00530408:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053040c  FUN_0053040c =====

void FUN_0053040c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0053044c  FUN_0053044c =====

void FUN_0053044c(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *local_c8 [3];
  void *local_b0 [3];
  byte local_98;
  undefined8 local_97;
  undefined1 local_8f;
  void *local_88;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 8) = 0;
  local_98 = 8;
  local_97 = CONCAT35(local_97._5_3_,0x73697861);
                    /* try { // try from 00530498 to 005304ab has its CatchHandler @ 0053067c */
  FUN_00594f20(local_b0,param_2,&local_98,param_1);
  pvVar2 = local_b0[0];
  local_b0[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar2 + 0x18));
    }
    free(pvVar2);
  }
  if ((local_98 & 1) != 0) {
    free(local_88);
  }
  if (pvVar2 == (void *)0x0) {
    *(byte *)(param_1 + 9) = param_3 & 1;
    if ((param_3 & 1) != 0) {
      local_8f = 0;
      local_98 = 0x10;
      local_97 = 0x736978615f77656e;
                    /* try { // try from 00530510 to 00530523 has its CatchHandler @ 00530668 */
      FUN_00594f20(local_c8,param_2,&local_98,local_b0);
      pvVar2 = local_c8[0];
      local_c8[0] = (void *)0x0;
      pvVar4 = local_b0[0];
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
        pvVar4 = (void *)0x0;
      }
      *(bool *)(param_1 + 8) = pvVar4 != (void *)0x0;
      if ((local_98 & 1) != 0) {
        free(local_88);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 005305a0 to 005305a7 has its CatchHandler @ 0053066c */
    FUN_00645c30(local_b0);
                    /* try { // try from 005305a8 to 005305c7 has its CatchHandler @ 00530658 */
    FUN_0047488c(&local_98,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/tensor/concatbase.h"
                 ,0x24,"onnxruntime::ConcatBase::ConcatBase(const OpKernelInfo &, bool)",local_b0);
                    /* try { // try from 005305c8 to 005305d7 has its CatchHandler @ 00530638 */
    FUN_00479eac(local_c8,"Must have valid \'axis\' attribute");
                    /* try { // try from 005305dc to 0053061f has its CatchHandler @ 00530620 */
    FUN_00474a40(uVar3,&local_98,"false",local_c8);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005306ac  FUN_005306ac =====

void FUN_005306ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x20);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 005306ec to 005306f3 has its CatchHandler @ 0053076c */
  FUN_0058d0b4(plVar1 + 1,param_3);
                    /* try { // try from 005306f4 to 00530703 has its CatchHandler @ 00530744 */
  FUN_0053044c(plVar1 + 2,param_3,0);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_007935b0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00530780  FUN_00530780 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00530780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 00530804 to 0053080f has its CatchHandler @ 00530920 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 00530828 to 0053082f has its CatchHandler @ 00530900 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  local_110 = 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_178[1] = puVar1;
  FUN_00530934(local_178,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
                    /* try { // try from 00530878 to 00530883 has its CatchHandler @ 005308fc */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_178[1] = puVar1;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar4 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00530934  FUN_00530934 =====

void FUN_00530934(undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00530984 to 00530987 has its CatchHandler @ 00530a04 */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  pcVar4 = (char *)*param_3;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 00530998 to 005309a3 has its CatchHandler @ 00530a00 */
  FUN_00303e0c(param_1,pcVar4,sVar3);
  pcVar4 = (char *)*param_4;
  sVar3 = strlen(pcVar4);
                    /* try { // try from 005309b4 to 005309bf has its CatchHandler @ 005309fc */
  FUN_00303e0c(param_1,pcVar4,sVar3);
                    /* try { // try from 005309c4 to 005309cb has its CatchHandler @ 005309f8 */
  FUN_007176ec(param_1,*param_5);
  FUN_004edc48(param_1,param_6,param_7,param_8,param_9);
  return;
}


// ===== 00530a08  FUN_00530a08 =====

long FUN_00530a08(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar14 = *param_1;
  puVar11 = (ulong *)param_1[1];
  bVar2 = (uVar14 & 1) != 0;
  uVar17 = uVar14 >> 1;
  puVar8 = param_1 + 1;
  if (bVar2) {
    puVar8 = puVar11;
  }
  uVar4 = 6;
  if (bVar2) {
    uVar4 = param_1[2];
  }
  lVar16 = (long)param_2 - (long)puVar8;
  uVar13 = uVar17 + param_4;
  uVar15 = lVar16 >> 3;
  uVar12 = uVar15 + param_4;
  if (uVar13 <= uVar4) {
    uVar14 = uVar12;
    if (uVar12 <= uVar17) {
      uVar14 = uVar17;
    }
    puVar11 = puVar8 + uVar14;
    uVar4 = uVar13 - uVar14;
    if (uVar4 != 0) {
      puVar3 = puVar8 + (uVar14 - param_4);
      if (uVar4 < 4 || (param_4 & 0x1ffffffffffffffc) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4 & 0xfffffffffffffffc;
        puVar3 = puVar3 + uVar5;
        uVar15 = uVar5;
        puVar7 = puVar11;
        do {
          puVar10 = puVar7 + -param_4;
          uVar15 = uVar15 - 4;
          uVar9 = *puVar10;
          uVar19 = puVar10[3];
          uVar18 = puVar10[2];
          puVar7[1] = puVar10[1];
          *puVar7 = uVar9;
          puVar7[3] = uVar19;
          puVar7[2] = uVar18;
          puVar7 = puVar7 + 4;
        } while (uVar15 != 0);
        if (uVar4 == uVar5) goto LAB_00530c78;
      }
      lVar6 = ((param_4 + uVar17) - uVar5) - uVar14;
      puVar7 = puVar8 + uVar14 + uVar5;
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_00530c78:
    if (puVar8 + uVar12 <= puVar11 + -1) {
      puVar11 = puVar11 + -1;
      do {
        puVar3 = puVar11 + -1;
        *puVar11 = *(ulong *)((long)puVar11 + lVar16 + uVar12 * -8);
        puVar11 = puVar3;
      } while (puVar8 + uVar12 <= puVar3);
    }
    if (uVar13 != uVar14) {
      uVar12 = 0;
      if ((3 < uVar4) && (0x1f < (ulong)((long)param_2 - (long)param_3))) {
        uVar12 = uVar4 & 0xfffffffffffffffc;
        puVar11 = param_2 + 2;
        puVar3 = param_3 + 2;
        param_3 = param_3 + uVar12;
        uVar15 = uVar12;
        do {
          puVar7 = puVar3 + -1;
          uVar5 = puVar3[-2];
          uVar18 = puVar3[1];
          uVar9 = *puVar3;
          uVar15 = uVar15 - 4;
          puVar3 = puVar3 + 4;
          puVar11[-1] = *puVar7;
          puVar11[-2] = uVar5;
          puVar11[1] = uVar18;
          *puVar11 = uVar9;
          puVar11 = puVar11 + 4;
        } while (uVar15 != 0);
        if (uVar4 == uVar12) goto LAB_00530d18;
      }
      lVar6 = ((param_4 + uVar17) - uVar12) - uVar14;
      puVar11 = param_3;
      puVar3 = param_2 + uVar12;
      do {
        param_3 = puVar11 + 1;
        lVar6 = lVar6 + -1;
        *puVar3 = *puVar11;
        puVar11 = param_3;
        puVar3 = puVar3 + 1;
      } while (lVar6 != 0);
    }
LAB_00530d18:
    if (param_4 != uVar4) {
      uVar12 = param_4 - (uVar13 - uVar14);
      if ((uVar12 < 10) || ((long)param_2 + (uVar13 * 8 - (long)(param_3 + uVar14)) < 0x20)) {
        uVar13 = 0;
        puVar11 = param_3;
      }
      else {
        uVar13 = uVar12 & 0xfffffffffffffffc;
        puVar11 = param_3 + uVar13;
        param_3 = param_3 + 2;
        puVar3 = param_2 + uVar4 + 2;
        uVar15 = uVar13;
        do {
          puVar7 = param_3 + -1;
          uVar5 = param_3[-2];
          uVar18 = param_3[1];
          uVar9 = *param_3;
          uVar15 = uVar15 - 4;
          param_3 = param_3 + 4;
          puVar3[-1] = *puVar7;
          puVar3[-2] = uVar5;
          puVar3[1] = uVar18;
          *puVar3 = uVar9;
          puVar3 = puVar3 + 4;
        } while (uVar15 != 0);
        if (uVar12 == uVar13) goto LAB_00530d6c;
      }
      lVar6 = (uVar13 + uVar17) - uVar14;
      puVar3 = param_2 + uVar13 + uVar4;
      do {
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
        *puVar3 = *puVar11;
        puVar3 = puVar3 + 1;
        puVar11 = puVar11 + 1;
      } while (bVar2);
    }
LAB_00530d6c:
    uVar14 = *param_1 + param_4 * 2;
    goto LAB_00530d74;
  }
  uVar4 = uVar4 * 2;
  if (uVar4 < uVar13 || uVar4 - uVar13 == 0) {
    uVar4 = uVar13;
  }
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  puVar3 = (ulong *)FUN_00759c3c(uVar4 << 3);
  if (param_4 != 0) {
    if ((param_4 < 8) ||
       ((ulong)(((long)puVar3 + (long)param_2) - ((long)puVar8 + (long)param_3)) < 0x20)) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_4 & 0xfffffffffffffffc;
      puVar7 = param_3 + 2;
      param_3 = param_3 + uVar5;
      puVar10 = (ulong *)((long)puVar3 + lVar16 + 0x10);
      uVar9 = uVar5;
      do {
        puVar1 = puVar7 + -1;
        uVar18 = puVar7[-2];
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        uVar9 = uVar9 - 4;
        puVar7 = puVar7 + 4;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar18;
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10 = puVar10 + 4;
      } while (uVar9 != 0);
      if (uVar5 == param_4) goto LAB_00530ae8;
    }
    lVar6 = param_4 - uVar5;
    puVar7 = (ulong *)((long)puVar3 + (long)param_2 + (uVar5 * 8 - (long)puVar8));
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_00530ae8:
  if (puVar8 != param_2) {
    uVar5 = 0;
    param_2 = puVar8;
    if ((3 < uVar15) && (0x1f < (ulong)((long)puVar3 - (long)puVar8))) {
      uVar5 = uVar15 & 0xfffffffffffffffc;
      puVar7 = puVar3 + 2;
      puVar10 = puVar8 + 2;
      param_2 = puVar8 + uVar5;
      uVar9 = uVar5;
      do {
        puVar8 = puVar10 + -1;
        uVar18 = puVar10[-2];
        uVar20 = puVar10[1];
        uVar19 = *puVar10;
        uVar9 = uVar9 - 4;
        puVar10 = puVar10 + 4;
        puVar7[-1] = *puVar8;
        puVar7[-2] = uVar18;
        puVar7[1] = uVar20;
        *puVar7 = uVar19;
        puVar7 = puVar7 + 4;
      } while (uVar9 != 0);
      if (uVar15 == uVar5) goto LAB_00530b5c;
    }
    lVar6 = uVar15 - uVar5;
    puVar8 = puVar3 + uVar5;
    puVar7 = param_2;
    do {
      param_2 = puVar7 + 1;
      lVar6 = lVar6 + -1;
      *puVar8 = *puVar7;
      puVar8 = puVar8 + 1;
      puVar7 = param_2;
    } while (lVar6 != 0);
  }
LAB_00530b5c:
  uVar5 = uVar17 - uVar15;
  if (uVar5 != 0) {
    if ((uVar5 < 8) || ((long)puVar3 + (uVar12 * 8 - (long)param_2) < 0x20)) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 & 0xfffffffffffffffc;
      puVar8 = puVar3 + uVar12 + 2;
      puVar7 = param_2 + 2;
      param_2 = param_2 + uVar9;
      uVar18 = uVar9;
      do {
        puVar10 = puVar7 + -1;
        uVar19 = puVar7[-2];
        uVar21 = puVar7[1];
        uVar20 = *puVar7;
        uVar18 = uVar18 - 4;
        puVar7 = puVar7 + 4;
        puVar8[-1] = *puVar10;
        puVar8[-2] = uVar19;
        puVar8[1] = uVar21;
        *puVar8 = uVar20;
        puVar8 = puVar8 + 4;
      } while (uVar18 != 0);
      if (uVar5 == uVar9) goto LAB_00530bb4;
    }
    lVar6 = (uVar9 + uVar15) - uVar17;
    puVar8 = puVar3 + uVar12 + uVar9;
    do {
      bVar2 = lVar6 != -1;
      lVar6 = lVar6 + 1;
      *puVar8 = *param_2;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    } while (bVar2);
  }
LAB_00530bb4:
  if ((uVar14 & 1) != 0) {
    free(puVar11);
  }
  uVar14 = uVar13 * 2 | 1;
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar4;
  puVar8 = puVar3;
LAB_00530d74:
  *param_1 = uVar14;
  return (long)puVar8 + lVar16;
}


// ===== 00530e4c  FUN_00530e4c =====

ulong * FUN_00530e4c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *__ptr;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar7 = *param_1;
  uVar1 = 10;
  if ((uVar7 & 1) != 0) {
    uVar1 = param_1[2] << 1;
  }
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  __ptr = (ulong *)param_1[1];
  uVar8 = uVar7 >> 1;
  puVar2 = (ulong *)FUN_00759c3c(uVar1 * 0x18);
  uVar9 = *param_2;
  puVar6 = puVar2 + uVar8 * 3;
  uVar3 = param_2[2];
  puVar6[1] = param_2[1];
  *puVar6 = uVar9;
  puVar6[2] = uVar3;
  if (1 < uVar7) {
    puVar4 = param_1 + 1;
    puVar5 = puVar2;
    if ((uVar7 & 1) != 0) {
      puVar4 = __ptr;
    }
    do {
      uVar9 = puVar4[1];
      uVar3 = *puVar4;
      uVar8 = uVar8 - 1;
      puVar5[2] = puVar4[2];
      puVar5[1] = uVar9;
      *puVar5 = uVar3;
      puVar4 = puVar4 + 3;
      puVar5 = puVar5 + 3;
    } while (uVar8 != 0);
  }
  if ((uVar7 & 1) != 0) {
    free(__ptr);
    uVar7 = *param_1;
  }
  param_1[1] = (ulong)puVar2;
  param_1[2] = uVar1;
  *param_1 = (uVar7 | 1) + 2;
  return puVar6;
}


// ===== 00530f40  FUN_00530f40 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00530f40(undefined8 param_1,ulong ***param_2,ulong *param_3,undefined8 param_4,
                 ulong ***param_5,ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong ****ppppuVar4;
  undefined8 uVar5;
  ulong **ppuVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  ulong ***pppuVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_198 [24];
  undefined8 ***local_180;
  undefined8 ***pppuStack_178;
  undefined8 local_170;
  ulong ***local_160;
  undefined8 uStack_158;
  ulong ****local_140;
  ulong **local_110;
  long *******local_108;
  long ******apppppplStack_100 [5];
  ulong **local_d8;
  long *******local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong **local_a0;
  long *******local_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ppuVar6 = (ulong **)*param_3;
  local_a0 = (ulong **)0x0;
  if ((ulong **)0x1 < ppuVar6) {
    if (((ulong)ppuVar6 & 1) == 0) {
      uStack_80 = param_3[4];
      uStack_88 = param_3[3];
      uStack_70 = param_3[6];
      local_78 = param_3[5];
      uStack_90 = SUB168(*(undefined1 (*) [16])(param_3 + 1),8);
      local_98 = SUB168(*(undefined1 (*) [16])(param_3 + 1),0);
      local_a0 = ppuVar6;
    }
    else {
                    /* try { // try from 00530fb4 to 00530fbf has its CatchHandler @ 0053141c */
      FUN_004daf20(&local_a0,param_3);
    }
  }
  ppuVar6 = (ulong **)*param_6;
  local_d8 = (ulong **)0x0;
  if ((ulong **)0x1 < ppuVar6) {
    if (((ulong)ppuVar6 & 1) == 0) {
      uStack_b8 = param_6[4];
      local_c0 = param_6[3];
      uStack_a8 = param_6[6];
      local_b0 = param_6[5];
      uStack_c8 = SUB168(*(undefined1 (*) [16])(param_6 + 1),8);
      local_d0 = SUB168(*(undefined1 (*) [16])(param_6 + 1),0);
      local_d8 = ppuVar6;
    }
    else {
                    /* try { // try from 00530ff4 to 00530fff has its CatchHandler @ 0053140c */
      FUN_004daf20(&local_d8,param_6);
    }
  }
                    /* try { // try from 00531000 to 0053100b has its CatchHandler @ 0053149c */
  FUN_004c7138(&local_110,param_4);
  local_180 = &local_a0;
  pppuStack_178 = &local_d8;
  local_160 = (ulong ***)&local_180;
  uStack_158 = 2;
                    /* try { // try from 00531024 to 0053102f has its CatchHandler @ 00531484 */
  FUN_0056a444(&local_160,&local_110);
  if ((((ulong)local_a0 >> 1 != (ulong)local_d8 >> 1) ||
      (CONCAT71(local_110._1_7_,(byte)local_110) < 2)) ||
     ((ulong)local_a0 >> 1 != CONCAT71(local_110._1_7_,(byte)local_110) >> 1)) {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00531298 to 0053129f has its CatchHandler @ 00531474 */
    FUN_00645c30(&local_180);
                    /* try { // try from 005312a0 to 005312bf has its CatchHandler @ 00531460 */
    FUN_0047488c(&local_160,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0x7b,
                 "void onnxruntime::StridedCopy(concurrency::ThreadPool *, T *, const TensorShapeVector &, const TensorShape &, const T *, const TensorShapeVector &) [T = unsigned int]"
                 ,&local_180);
                    /* try { // try from 005312c0 to 005312cf has its CatchHandler @ 005313ec */
    FUN_00479eac(auStack_198,"src and dst must have same shape and not be rank 0.");
                    /* try { // try from 005312d4 to 00531317 has its CatchHandler @ 005313d4 */
    FUN_00474a40(uVar5,&local_160,
                 "dst_strides.size() == src_strides.size() && src_strides.size() == copy_shape.size() && !copy_shape.empty()"
                 ,auStack_198);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_005314d8;
  }
                    /* try { // try from 0053105c to 00531063 has its CatchHandler @ 00531470 */
  lVar3 = FUN_005cabcc(param_4);
  if (lVar3 < 0) {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00531328 to 0053132f has its CatchHandler @ 0053145c */
    FUN_00645c30(&local_180);
                    /* try { // try from 00531330 to 0053134f has its CatchHandler @ 005313d0 */
    FUN_0047488c(&local_160,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0x7f,
                 "void onnxruntime::StridedCopy(concurrency::ThreadPool *, T *, const TensorShapeVector &, const TensorShape &, const T *, const TensorShapeVector &) [T = unsigned int]"
                 ,&local_180);
                    /* try { // try from 00531350 to 0053135f has its CatchHandler @ 005313cc */
    FUN_00479eac(auStack_198,"copy shape must have non-negative size");
                    /* try { // try from 00531364 to 005313a7 has its CatchHandler @ 005313c8 */
    FUN_00474a40(uVar5,&local_160,"total_num_elements_to_copy >= 0",auStack_198);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_005314d8;
  }
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      *(undefined4 *)param_2 = *(undefined4 *)param_5;
    }
    else {
      pppuVar9 = (ulong ***)(CONCAT71(local_110._1_7_,(byte)local_110) >> 1);
      if (CONCAT71(local_110._1_7_,(byte)local_110) < 6) {
        ppppppplVar7 = (long *******)&local_d0;
        if (((ulong)local_d8 & 1) != 0) {
          ppppppplVar7 = local_d0;
        }
        if (ppppppplVar7[(long)pppuVar9 + -1] != (long ******)0x1) goto LAB_00531104;
        ppppppplVar8 = (long *******)&local_98;
        if (((ulong)local_a0 & 1) != 0) {
          ppppppplVar8 = local_98;
        }
        if (ppppppplVar8[(long)pppuVar9 + -1] != (long ******)0x1) goto LAB_00531104;
        if (pppuVar9 == (ulong ***)0x2) {
          pppppplVar11 = *ppppppplVar8;
          pppppplVar10 = *ppppppplVar7;
          ppppppplVar7 = apppppplStack_100;
          ppppppplVar8 = local_108 + 1;
        }
        else {
          pppppplVar10 = (long ******)0x0;
          pppppplVar11 = (long ******)0x0;
          ppppppplVar7 = (long *******)&local_108;
          ppppppplVar8 = local_108;
        }
        auVar13 = NEON_fmov(0x4010000000000000,8);
        if (((byte)local_110 & 1) != 0) {
          ppppppplVar7 = ppppppplVar8;
        }
        pppppplVar12 = *ppppppplVar7;
        local_170 = 0x3ff0000000000000;
        pppuStack_178 = auVar13._8_8_;
        local_180 = auVar13._0_8_;
                    /* try { // try from 005311ac to 005311b3 has its CatchHandler @ 005313c4 */
        local_140 = (ulong ****)FUN_00759c3c(0x30);
        puVar2 = PTR_DAT_007a2560;
        local_140[2] = (ulong ***)pppppplVar11;
        local_140[3] = param_2;
        local_140[4] = param_5;
        local_140[5] = (ulong ***)pppppplVar12;
        *local_140 = (ulong ***)(puVar2 + 0x10);
        local_140[1] = (ulong ***)pppppplVar10;
                    /* try { // try from 005311d0 to 005311e7 has its CatchHandler @ 005313a8 */
        FUN_0063c634(param_1,lVar3,&local_180,&local_160);
        if (local_140 != &local_160) goto LAB_00531170;
LAB_005311f4:
        lVar3 = 0x20;
        ppppuVar4 = &local_160;
      }
      else {
LAB_00531104:
        auVar13 = NEON_fmov(0x4010000000000000,8);
        local_170 = 0x3ff0000000000000;
        pppuStack_178 = auVar13._8_8_;
        local_180 = auVar13._0_8_;
                    /* try { // try from 00531118 to 0053111f has its CatchHandler @ 00531458 */
        local_140 = (ulong ****)FUN_00759c3c(0x38);
        puVar2 = PTR_DAT_007a2558;
        local_140[2] = &local_a0;
        local_140[3] = param_2;
        local_140[6] = pppuVar9;
        *local_140 = (ulong ***)(puVar2 + 0x10);
        local_140[1] = &local_110;
        local_140[4] = param_5;
        local_140[5] = &local_d8;
                    /* try { // try from 0053114c to 00531163 has its CatchHandler @ 0053142c */
        FUN_0063c634(param_1,lVar3,&local_180,&local_160);
        if (local_140 == &local_160) goto LAB_005311f4;
LAB_00531170:
        if (local_140 == (ulong ****)0x0) goto LAB_00531208;
        lVar3 = 0x28;
        ppppuVar4 = local_140;
      }
      (**(code **)((long)*ppppuVar4 + lVar3))();
    }
  }
LAB_00531208:
  if (((byte)local_110 & 1) != 0) {
    free(local_108);
  }
  if (((ulong)local_d8 & 1) != 0) {
    free(local_d0);
  }
  if (((ulong)local_a0 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
LAB_005314d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005314dc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005314e0  FUN_005314e0 =====

void FUN_005314e0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a2560;
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[4] = lVar6;
  plVar2[3] = lVar5;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[5] = lVar3;
  return;
}


// ===== 0053152c  FUN_0053152c =====

void FUN_0053152c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00793600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 00531558  FUN_00531558 =====

void FUN_00531558(void)

{
  return;
}


// ===== 0053155c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00531560  FUN_00531560 =====

void FUN_00531560(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00531570(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00531570  FUN_00531570 =====

void FUN_00531570(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [80];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = param_1[4];
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = param_2 / lVar5;
  }
  lVar6 = param_2 - lVar2 * lVar5;
  lVar8 = lVar6 + param_1[1] * lVar2;
  lVar7 = lVar6 + *param_1 * lVar2;
  if (lVar6 != 0) {
    lVar1 = param_3 - param_2;
    if (lVar5 - lVar6 <= param_3 - param_2) {
      lVar1 = lVar5 - lVar6;
    }
    memcpy((void *)(param_1[2] + lVar8 * 4),(void *)(param_1[3] + lVar7 * 4),lVar1 << 2);
    param_2 = lVar1 + param_2;
    lVar8 = param_1[1] * (lVar2 + 1);
    lVar5 = param_1[4];
    lVar7 = *param_1 * (lVar2 + 1);
  }
  if (param_2 < param_3 - lVar5) {
    do {
      memcpy((void *)(param_1[2] + lVar8 * 4),(void *)(param_1[3] + lVar7 * 4),lVar5 << 2);
      lVar5 = param_1[4];
      param_2 = lVar5 + param_2;
      lVar8 = param_1[1] + lVar8;
      lVar7 = *param_1 + lVar7;
    } while (param_2 < param_3 - lVar5);
  }
  if (param_3 < param_2) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0053168c to 00531693 has its CatchHandler @ 0053176c */
    FUN_00645c30(auStack_c0);
                    /* try { // try from 00531694 to 005316b3 has its CatchHandler @ 0053175c */
    FUN_0047488c(auStack_a8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0xc0,
                 "auto onnxruntime::StridedCopy(concurrency::ThreadPool *, unsigned int *, const TensorShapeVector &, const TensorShape &, const unsigned int *, const TensorShapeVector &)::(anonymous class)::operator()(std::ptrdiff_t, std::ptrdiff_t) const"
                 ,auStack_c0);
    FUN_00476720(auStack_d8);
                    /* try { // try from 005316c0 to 00531703 has its CatchHandler @ 00531704 */
    FUN_00474a40(uVar4,auStack_a8,"last >= first",auStack_d8);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_58) {
    memcpy((void *)(param_1[2] + lVar8 * 4),(void *)(param_1[3] + lVar7 * 4),(param_3 - param_2) * 4
          );
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0053178c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00531790  FUN_00531790 =====

void FUN_00531790(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  *puVar1 = &PTR_FUN_00793648;
  puVar1[6] = uVar3;
  puVar1[5] = uVar2;
  return;
}


// ===== 005317dc  FUN_005317dc =====

void FUN_005317dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_00793648;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar1;
  param_2[4] = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  return;
}


// ===== 00531808  FUN_00531808 =====

void FUN_00531808(void)

{
  return;
}


// ===== 0053180c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00531810  FUN_00531810 =====

void FUN_00531810(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00531820(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00531820  FUN_00531820 =====

void FUN_00531820(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *__dest;
  undefined8 uVar7;
  undefined4 *__src;
  byte *pbVar8;
  undefined8 ****ppppuVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [80];
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  byte local_b0;
  undefined8 ***local_a8 [6];
  byte *local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  FUN_00531c84(&local_d0,*param_1,param_2,param_3);
  pbVar12 = (byte *)param_1[1] + 8;
  pbVar13 = (byte *)param_1[4] + 8;
  if ((*(byte *)param_1[1] & 1) != 0) {
    pbVar12 = *(byte **)pbVar12;
  }
  if ((*(byte *)param_1[4] & 1) != 0) {
    pbVar13 = *(byte **)pbVar13;
  }
  ppppuVar18 = local_a8;
  if ((local_b0 & 1) != 0) {
    ppppuVar18 = (undefined8 ****)local_a8[0];
  }
  lVar24 = (local_c8 - (long)ppppuVar18[local_d0 + -1]) + local_c0;
  if (lStack_b8 <= lVar24) {
    lVar24 = lStack_b8;
  }
  lVar24 = lVar24 - local_c0;
  if (0 < lVar24) {
    lVar19 = param_1[5] * 8 + -8;
    lVar14 = *(long *)(pbVar12 + lVar19);
    lVar17 = *(long *)(pbVar13 + lVar19);
    lVar19 = local_d0;
    do {
      uVar15 = param_1[5];
      if (uVar15 == 0) {
        lVar23 = 0;
        lVar21 = 0;
      }
      else {
        ppppuVar18 = local_a8;
        if ((local_b0 & 1) != 0) {
          ppppuVar18 = (undefined8 ****)local_a8[0];
        }
        pbVar12 = (byte *)param_1[1] + 8;
        pbVar13 = (byte *)param_1[4] + 8;
        if ((*(byte *)param_1[1] & 1) != 0) {
          pbVar12 = *(byte **)pbVar12;
        }
        if ((*(byte *)param_1[4] & 1) != 0) {
          pbVar13 = *(byte **)pbVar13;
        }
        if (uVar15 == 1) {
          uVar20 = 0;
          lVar21 = 0;
          lVar23 = 0;
        }
        else {
          uVar20 = uVar15 & 0xfffffffffffffffe;
          lVar22 = 0;
          lVar21 = 0;
          lVar16 = 0;
          lVar23 = 0;
          pbVar8 = pbVar13 + 8;
          ppppuVar9 = ppppuVar18 + 1;
          pbVar10 = pbVar12 + 8;
          uVar11 = uVar20;
          do {
            pbVar1 = pbVar10 + -8;
            lVar3 = *(long *)pbVar10;
            uVar11 = uVar11 - 2;
            ppppuVar2 = ppppuVar9 + -1;
            pppuVar4 = *ppppuVar9;
            ppppuVar9 = ppppuVar9 + 2;
            pbVar10 = pbVar10 + 0x10;
            lVar16 = lVar16 + *(long *)pbVar1 * (long)*ppppuVar2;
            lVar23 = lVar23 + lVar3 * (long)pppuVar4;
            pbVar1 = pbVar8 + -8;
            lVar3 = *(long *)pbVar8;
            pbVar8 = pbVar8 + 0x10;
            lVar22 = lVar22 + *(long *)pbVar1 * (long)*ppppuVar2;
            lVar21 = lVar21 + lVar3 * (long)pppuVar4;
          } while (uVar11 != 0);
          lVar21 = lVar21 + lVar22;
          lVar23 = lVar23 + lVar16;
          if (uVar15 == uVar20) goto LAB_00531a34;
        }
        lVar16 = uVar15 - uVar20;
        ppppuVar18 = ppppuVar18 + uVar20;
        pbVar12 = pbVar12 + uVar20 * 8;
        pbVar13 = pbVar13 + uVar20 * 8;
        do {
          lVar16 = lVar16 + -1;
          lVar23 = lVar23 + *(long *)pbVar12 * (long)*ppppuVar18;
          lVar21 = lVar21 + *(long *)pbVar13 * (long)*ppppuVar18;
          ppppuVar18 = ppppuVar18 + 1;
          pbVar12 = pbVar12 + 8;
          pbVar13 = pbVar13 + 8;
        } while (lVar16 != 0);
      }
LAB_00531a34:
      __dest = (undefined4 *)(param_1[2] + lVar23 * 4);
      __src = (undefined4 *)(param_1[3] + lVar21 * 4);
      lVar21 = lVar24;
      if (lVar14 == 1 && lVar17 == 1) {
        memcpy(__dest,__src,lVar24 << 2);
        lVar19 = local_d0;
      }
      else {
        do {
          uVar5 = *__src;
          lVar21 = lVar21 + -1;
          __src = __src + lVar17;
          *__dest = uVar5;
          __dest = __dest + lVar14;
        } while (lVar21 != 0);
      }
      local_c0 = local_c0 + lVar24;
      ppppuVar18 = local_a8;
      if ((local_b0 & 1) != 0) {
        ppppuVar18 = (undefined8 ****)local_a8[0];
      }
      ppppuVar18[lVar19 + -1] = (undefined8 ***)((long)ppppuVar18[lVar19 + -1] + lVar24);
      pbVar12 = local_78;
      if (local_d0 == 1) {
        lVar19 = 1;
      }
      else {
        pbVar13 = local_78 + 8;
        lVar24 = local_d0;
        do {
          ppppuVar18 = local_a8;
          if ((local_b0 & 1) != 0) {
            ppppuVar18 = (undefined8 ****)local_a8[0];
          }
          pbVar8 = pbVar13;
          if ((*pbVar12 & 1) != 0) {
            pbVar8 = *(byte **)(pbVar12 + 8);
          }
          lVar19 = local_d0;
          if ((long)ppppuVar18[lVar24 + -1] < *(long *)(pbVar8 + lVar24 * 8 + -8)) break;
          ppppuVar18[lVar24 + -1] = (undefined8 ***)0x0;
          ppppuVar18 = local_a8;
          if ((local_b0 & 1) != 0) {
            ppppuVar18 = (undefined8 ****)local_a8[0];
          }
          lVar21 = lVar24 + -1;
          ppppuVar18[lVar24 + -2] = (undefined8 ***)((long)ppppuVar18[lVar24 + -2] + 1);
          lVar24 = lVar21;
        } while (lVar21 != 1);
      }
      ppppuVar18 = local_a8;
      if ((local_b0 & 1) != 0) {
        ppppuVar18 = (undefined8 ****)local_a8[0];
      }
      lVar21 = (local_c8 - (long)ppppuVar18[lVar19 + -1]) + local_c0;
      if (lStack_b8 <= lVar21) {
        lVar21 = lStack_b8;
      }
      lVar24 = lVar21 - local_c0;
    } while (lVar24 != 0 && local_c0 <= lVar21);
  }
  if (local_c0 == param_3) {
    if ((local_b0 & 1) != 0) {
      free(local_a8[0]);
    }
    if (*(long *)(lVar6 + 0x28) == local_70) {
      return;
    }
  }
  else {
    uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 00531b6c to 00531b73 has its CatchHandler @ 00531c54 */
    FUN_00645c30(auStack_138);
                    /* try { // try from 00531b74 to 00531b93 has its CatchHandler @ 00531c44 */
    FUN_0047488c(auStack_120,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0xe3,
                 "auto onnxruntime::StridedCopy(concurrency::ThreadPool *, unsigned int *, const TensorShapeVector &, const TensorShape &, const unsigned int *, const TensorShapeVector &)::(anonymous class)::operator()(std::ptrdiff_t, std::ptrdiff_t) const"
                 ,auStack_138);
    FUN_00476720(auStack_150);
                    /* try { // try from 00531ba0 to 00531be3 has its CatchHandler @ 00531be4 */
    FUN_00474a40(uVar7,auStack_120,"counter.current_offset == last",auStack_150);
    if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00531c84  FUN_00531c84 =====

void FUN_00531c84(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *param_2;
  uVar6 = uVar7 >> 1;
  *param_1 = uVar6;
  puVar5 = param_2 + 1;
  puVar1 = puVar5;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)*puVar5;
  }
  uVar2 = puVar1[uVar6 - 1];
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  if (uVar7 < 0xe) {
    if (uVar7 < 2) {
      param_1[4] = 0;
      param_1[0xb] = (ulong)param_2;
      return;
    }
    uVar2 = 0;
    puVar1 = param_1 + 5;
  }
  else {
    if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00531db4 to 00531db7 has its CatchHandler @ 00531db8 */
      FUN_002f9ee0();
    }
    uVar2 = uVar6;
    if (uVar6 < 0xd) {
      uVar2 = 0xc;
    }
                    /* try { // try from 00531cf8 to 00531cfb has its CatchHandler @ 00531db8 */
    puVar1 = (ulong *)FUN_00759c3c(uVar2 << 3);
    param_1[5] = (ulong)puVar1;
    param_1[6] = uVar2;
    uVar2 = 1;
    param_1[4] = 1;
  }
  memset(puVar1,0,uVar6 << 3);
  param_1[0xb] = (ulong)param_2;
  param_1[4] = uVar2 | uVar7 & 0xfffffffffffffffe;
  lVar3 = uVar6 - 1;
  do {
    lVar4 = lVar3 + -1;
    puVar1 = puVar5;
    if ((*param_2 & 1) != 0) {
      puVar1 = (ulong *)param_2[1];
    }
    uVar6 = puVar1[lVar3];
    puVar1 = param_1 + 5;
    if ((param_1[4] & 1) != 0) {
      puVar1 = (ulong *)param_1[5];
    }
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = (long)param_3 / (long)uVar6;
    }
    puVar1[lVar3] = param_3 - uVar7 * uVar6;
    lVar3 = lVar4;
    param_3 = uVar7;
  } while (lVar4 != -1);
  return;
}


// ===== 00531dd4  FUN_00531dd4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00531dd4(undefined8 param_1,ulong ***param_2,ulong *param_3,undefined8 param_4,
                 ulong ***param_5,ulong *param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong ****ppppuVar4;
  undefined8 uVar5;
  ulong **ppuVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  ulong ***pppuVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_198 [24];
  undefined8 ***local_180;
  undefined8 ***pppuStack_178;
  undefined8 local_170;
  ulong ***local_160;
  undefined8 uStack_158;
  ulong ****local_140;
  ulong **local_110;
  long *******local_108;
  long ******apppppplStack_100 [5];
  ulong **local_d8;
  long *******local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong **local_a0;
  long *******local_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  ppuVar6 = (ulong **)*param_3;
  local_a0 = (ulong **)0x0;
  if ((ulong **)0x1 < ppuVar6) {
    if (((ulong)ppuVar6 & 1) == 0) {
      uStack_80 = param_3[4];
      uStack_88 = param_3[3];
      uStack_70 = param_3[6];
      local_78 = param_3[5];
      uStack_90 = SUB168(*(undefined1 (*) [16])(param_3 + 1),8);
      local_98 = SUB168(*(undefined1 (*) [16])(param_3 + 1),0);
      local_a0 = ppuVar6;
    }
    else {
                    /* try { // try from 00531e48 to 00531e53 has its CatchHandler @ 005322b0 */
      FUN_004daf20(&local_a0,param_3);
    }
  }
  ppuVar6 = (ulong **)*param_6;
  local_d8 = (ulong **)0x0;
  if ((ulong **)0x1 < ppuVar6) {
    if (((ulong)ppuVar6 & 1) == 0) {
      uStack_b8 = param_6[4];
      local_c0 = param_6[3];
      uStack_a8 = param_6[6];
      local_b0 = param_6[5];
      uStack_c8 = SUB168(*(undefined1 (*) [16])(param_6 + 1),8);
      local_d0 = SUB168(*(undefined1 (*) [16])(param_6 + 1),0);
      local_d8 = ppuVar6;
    }
    else {
                    /* try { // try from 00531e88 to 00531e93 has its CatchHandler @ 005322a0 */
      FUN_004daf20(&local_d8,param_6);
    }
  }
                    /* try { // try from 00531e94 to 00531e9f has its CatchHandler @ 00532330 */
  FUN_004c7138(&local_110,param_4);
  local_180 = &local_a0;
  pppuStack_178 = &local_d8;
  local_160 = (ulong ***)&local_180;
  uStack_158 = 2;
                    /* try { // try from 00531eb8 to 00531ec3 has its CatchHandler @ 00532318 */
  FUN_0056a444(&local_160,&local_110);
  if ((((ulong)local_a0 >> 1 != (ulong)local_d8 >> 1) ||
      (CONCAT71(local_110._1_7_,(byte)local_110) < 2)) ||
     ((ulong)local_a0 >> 1 != CONCAT71(local_110._1_7_,(byte)local_110) >> 1)) {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 0053212c to 00532133 has its CatchHandler @ 00532308 */
    FUN_00645c30(&local_180);
                    /* try { // try from 00532134 to 00532153 has its CatchHandler @ 005322f4 */
    FUN_0047488c(&local_160,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0x7b,
                 "void onnxruntime::StridedCopy(concurrency::ThreadPool *, T *, const TensorShapeVector &, const TensorShape &, const T *, const TensorShapeVector &) [T = unsigned long]"
                 ,&local_180);
                    /* try { // try from 00532154 to 00532163 has its CatchHandler @ 00532280 */
    FUN_00479eac(auStack_198,"src and dst must have same shape and not be rank 0.");
                    /* try { // try from 00532168 to 005321ab has its CatchHandler @ 00532268 */
    FUN_00474a40(uVar5,&local_160,
                 "dst_strides.size() == src_strides.size() && src_strides.size() == copy_shape.size() && !copy_shape.empty()"
                 ,auStack_198);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_0053236c;
  }
                    /* try { // try from 00531ef0 to 00531ef7 has its CatchHandler @ 00532304 */
  lVar3 = FUN_005cabcc(param_4);
  if (lVar3 < 0) {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 005321bc to 005321c3 has its CatchHandler @ 005322f0 */
    FUN_00645c30(&local_180);
                    /* try { // try from 005321c4 to 005321e3 has its CatchHandler @ 00532264 */
    FUN_0047488c(&local_160,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0x7f,
                 "void onnxruntime::StridedCopy(concurrency::ThreadPool *, T *, const TensorShapeVector &, const TensorShape &, const T *, const TensorShapeVector &) [T = unsigned long]"
                 ,&local_180);
                    /* try { // try from 005321e4 to 005321f3 has its CatchHandler @ 00532260 */
    FUN_00479eac(auStack_198,"copy shape must have non-negative size");
                    /* try { // try from 005321f8 to 0053223b has its CatchHandler @ 0053225c */
    FUN_00474a40(uVar5,&local_160,"total_num_elements_to_copy >= 0",auStack_198);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_0053236c;
  }
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      *param_2 = *param_5;
    }
    else {
      pppuVar9 = (ulong ***)(CONCAT71(local_110._1_7_,(byte)local_110) >> 1);
      if (CONCAT71(local_110._1_7_,(byte)local_110) < 6) {
        ppppppplVar7 = (long *******)&local_d0;
        if (((ulong)local_d8 & 1) != 0) {
          ppppppplVar7 = local_d0;
        }
        if (ppppppplVar7[(long)pppuVar9 + -1] != (long ******)0x1) goto LAB_00531f98;
        ppppppplVar8 = (long *******)&local_98;
        if (((ulong)local_a0 & 1) != 0) {
          ppppppplVar8 = local_98;
        }
        if (ppppppplVar8[(long)pppuVar9 + -1] != (long ******)0x1) goto LAB_00531f98;
        if (pppuVar9 == (ulong ***)0x2) {
          pppppplVar11 = *ppppppplVar8;
          pppppplVar10 = *ppppppplVar7;
          ppppppplVar7 = apppppplStack_100;
          ppppppplVar8 = local_108 + 1;
        }
        else {
          pppppplVar10 = (long ******)0x0;
          pppppplVar11 = (long ******)0x0;
          ppppppplVar7 = (long *******)&local_108;
          ppppppplVar8 = local_108;
        }
        auVar13 = NEON_fmov(0x4020000000000000,8);
        if (((byte)local_110 & 1) != 0) {
          ppppppplVar7 = ppppppplVar8;
        }
        pppppplVar12 = *ppppppplVar7;
        local_170 = 0x3ff0000000000000;
        pppuStack_178 = auVar13._8_8_;
        local_180 = auVar13._0_8_;
                    /* try { // try from 00532040 to 00532047 has its CatchHandler @ 00532258 */
        local_140 = (ulong ****)FUN_00759c3c(0x30);
        puVar2 = PTR_DAT_007a2570;
        local_140[2] = (ulong ***)pppppplVar11;
        local_140[3] = param_2;
        local_140[4] = param_5;
        local_140[5] = (ulong ***)pppppplVar12;
        *local_140 = (ulong ***)(puVar2 + 0x10);
        local_140[1] = (ulong ***)pppppplVar10;
                    /* try { // try from 00532064 to 0053207b has its CatchHandler @ 0053223c */
        FUN_0063c634(param_1,lVar3,&local_180,&local_160);
        if (local_140 != &local_160) goto LAB_00532004;
LAB_00532088:
        lVar3 = 0x20;
        ppppuVar4 = &local_160;
      }
      else {
LAB_00531f98:
        auVar13 = NEON_fmov(0x4020000000000000,8);
        local_170 = 0x3ff0000000000000;
        pppuStack_178 = auVar13._8_8_;
        local_180 = auVar13._0_8_;
                    /* try { // try from 00531fac to 00531fb3 has its CatchHandler @ 005322ec */
        local_140 = (ulong ****)FUN_00759c3c(0x38);
        puVar2 = PTR_DAT_007a2568;
        local_140[2] = &local_a0;
        local_140[3] = param_2;
        local_140[6] = pppuVar9;
        *local_140 = (ulong ***)(puVar2 + 0x10);
        local_140[1] = &local_110;
        local_140[4] = param_5;
        local_140[5] = &local_d8;
                    /* try { // try from 00531fe0 to 00531ff7 has its CatchHandler @ 005322c0 */
        FUN_0063c634(param_1,lVar3,&local_180,&local_160);
        if (local_140 == &local_160) goto LAB_00532088;
LAB_00532004:
        if (local_140 == (ulong ****)0x0) goto LAB_0053209c;
        lVar3 = 0x28;
        ppppuVar4 = local_140;
      }
      (**(code **)((long)*ppppuVar4 + lVar3))();
    }
  }
LAB_0053209c:
  if (((byte)local_110 & 1) != 0) {
    free(local_108);
  }
  if (((ulong)local_d8 & 1) != 0) {
    free(local_d0);
  }
  if (((ulong)local_a0 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_98);
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
LAB_0053236c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00532370  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00532374  FUN_00532374 =====

void FUN_00532374(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a2570;
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[4] = lVar6;
  plVar2[3] = lVar5;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[5] = lVar3;
  return;
}


// ===== 005323c0  FUN_005323c0 =====

void FUN_005323c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00793690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 005323ec  FUN_005323ec =====

void FUN_005323ec(void)

{
  return;
}


// ===== 005323f0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005323f4  FUN_005323f4 =====

void FUN_005323f4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00532404(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00532404  FUN_00532404 =====

void FUN_00532404(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [80];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = param_1[4];
  lVar2 = 0;
  if (lVar5 != 0) {
    lVar2 = param_2 / lVar5;
  }
  lVar6 = param_2 - lVar2 * lVar5;
  lVar8 = lVar6 + param_1[1] * lVar2;
  lVar7 = lVar6 + *param_1 * lVar2;
  if (lVar6 != 0) {
    lVar1 = param_3 - param_2;
    if (lVar5 - lVar6 <= param_3 - param_2) {
      lVar1 = lVar5 - lVar6;
    }
    memcpy((void *)(param_1[2] + lVar8 * 8),(void *)(param_1[3] + lVar7 * 8),lVar1 << 3);
    param_2 = lVar1 + param_2;
    lVar8 = param_1[1] * (lVar2 + 1);
    lVar5 = param_1[4];
    lVar7 = *param_1 * (lVar2 + 1);
  }
  if (param_2 < param_3 - lVar5) {
    do {
      memcpy((void *)(param_1[2] + lVar8 * 8),(void *)(param_1[3] + lVar7 * 8),lVar5 << 3);
      lVar5 = param_1[4];
      param_2 = lVar5 + param_2;
      lVar8 = param_1[1] + lVar8;
      lVar7 = *param_1 + lVar7;
    } while (param_2 < param_3 - lVar5);
  }
  if (param_3 < param_2) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00532520 to 00532527 has its CatchHandler @ 00532600 */
    FUN_00645c30(auStack_c0);
                    /* try { // try from 00532528 to 00532547 has its CatchHandler @ 005325f0 */
    FUN_0047488c(auStack_a8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0xc0,
                 "auto onnxruntime::StridedCopy(concurrency::ThreadPool *, unsigned long *, const TensorShapeVector &, const TensorShape &, const unsigned long *, const TensorShapeVector &)::(anonymous class)::operator()(std::ptrdiff_t, std::ptrdiff_t) const"
                 ,auStack_c0);
    FUN_00476720(auStack_d8);
                    /* try { // try from 00532554 to 00532597 has its CatchHandler @ 00532598 */
    FUN_00474a40(uVar4,auStack_a8,"last >= first",auStack_d8);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_58) {
    memcpy((void *)(param_1[2] + lVar8 * 8),(void *)(param_1[3] + lVar7 * 8),(param_3 - param_2) * 8
          );
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00532620  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00532624  FUN_00532624 =====

void FUN_00532624(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x38);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  *puVar1 = &PTR_FUN_007936d8;
  puVar1[6] = uVar3;
  puVar1[5] = uVar2;
  return;
}


// ===== 00532670  FUN_00532670 =====

void FUN_00532670(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_007936d8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar1;
  param_2[4] = uVar3;
  param_2[3] = uVar2;
  param_2[2] = uVar5;
  param_2[1] = uVar4;
  return;
}


// ===== 0053269c  FUN_0053269c =====

void FUN_0053269c(void)

{
  return;
}


// ===== 005326a0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005326a4  FUN_005326a4 =====

void FUN_005326a4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_005326b4(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005326b4  FUN_005326b4 =====

void FUN_005326b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  undefined8 *__dest;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *__src;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [80];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  byte local_a8;
  undefined8 ***local_a0 [6];
  byte *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00531c84(&local_c8,*param_1,param_2,param_3);
  pbVar10 = (byte *)param_1[1] + 8;
  pbVar16 = (byte *)param_1[4] + 8;
  if ((*(byte *)param_1[1] & 1) != 0) {
    pbVar10 = *(byte **)pbVar10;
  }
  if ((*(byte *)param_1[4] & 1) != 0) {
    pbVar16 = *(byte **)pbVar16;
  }
  ppppuVar14 = local_a0;
  if ((local_a8 & 1) != 0) {
    ppppuVar14 = (undefined8 ****)local_a0[0];
  }
  lVar22 = (local_c0 - (long)ppppuVar14[local_c8 + -1]) + local_b8;
  if (local_b0 <= lVar22) {
    lVar22 = local_b0;
  }
  lVar22 = lVar22 - local_b8;
  if (0 < lVar22) {
    lVar11 = param_1[5] * 8 + -8;
    lVar15 = *(long *)(pbVar10 + lVar11);
    lVar11 = *(long *)(pbVar16 + lVar11);
    do {
      uVar12 = param_1[5];
      if (uVar12 == 0) {
        lVar19 = 0;
        lVar18 = 0;
      }
      else {
        ppppuVar14 = local_a0;
        if ((local_a8 & 1) != 0) {
          ppppuVar14 = (undefined8 ****)local_a0[0];
        }
        pbVar10 = (byte *)param_1[1] + 8;
        pbVar16 = (byte *)param_1[4] + 8;
        if ((*(byte *)param_1[1] & 1) != 0) {
          pbVar10 = *(byte **)pbVar10;
        }
        if ((*(byte *)param_1[4] & 1) != 0) {
          pbVar16 = *(byte **)pbVar16;
        }
        if (uVar12 == 1) {
          uVar17 = 0;
          lVar18 = 0;
          lVar19 = 0;
        }
        else {
          uVar17 = uVar12 & 0xfffffffffffffffe;
          lVar13 = 0;
          lVar18 = 0;
          lVar20 = 0;
          lVar19 = 0;
          pbVar21 = pbVar16 + 8;
          ppppuVar6 = ppppuVar14 + 1;
          pbVar8 = pbVar10 + 8;
          uVar9 = uVar17;
          do {
            pbVar1 = pbVar8 + -8;
            lVar3 = *(long *)pbVar8;
            uVar9 = uVar9 - 2;
            ppppuVar2 = ppppuVar6 + -1;
            pppuVar4 = *ppppuVar6;
            ppppuVar6 = ppppuVar6 + 2;
            pbVar8 = pbVar8 + 0x10;
            lVar20 = lVar20 + *(long *)pbVar1 * (long)*ppppuVar2;
            lVar19 = lVar19 + lVar3 * (long)pppuVar4;
            pbVar1 = pbVar21 + -8;
            lVar3 = *(long *)pbVar21;
            pbVar21 = pbVar21 + 0x10;
            lVar13 = lVar13 + *(long *)pbVar1 * (long)*ppppuVar2;
            lVar18 = lVar18 + lVar3 * (long)pppuVar4;
          } while (uVar9 != 0);
          lVar18 = lVar18 + lVar13;
          lVar19 = lVar19 + lVar20;
          if (uVar12 == uVar17) goto LAB_005328c8;
        }
        lVar13 = uVar12 - uVar17;
        ppppuVar14 = ppppuVar14 + uVar17;
        pbVar10 = pbVar10 + uVar17 * 8;
        pbVar16 = pbVar16 + uVar17 * 8;
        do {
          lVar13 = lVar13 + -1;
          lVar19 = lVar19 + *(long *)pbVar10 * (long)*ppppuVar14;
          lVar18 = lVar18 + *(long *)pbVar16 * (long)*ppppuVar14;
          ppppuVar14 = ppppuVar14 + 1;
          pbVar10 = pbVar10 + 8;
          pbVar16 = pbVar16 + 8;
        } while (lVar13 != 0);
      }
LAB_005328c8:
      __dest = (undefined8 *)(param_1[2] + lVar19 * 8);
      __src = (undefined8 *)(param_1[3] + lVar18 * 8);
      lVar18 = lVar22;
      if (lVar15 == 1 && lVar11 == 1) {
        memcpy(__dest,__src,lVar22 << 3);
      }
      else {
        do {
          uVar7 = *__src;
          lVar18 = lVar18 + -1;
          __src = __src + lVar11;
          *__dest = uVar7;
          __dest = __dest + lVar15;
        } while (lVar18 != 0);
      }
      ppppuVar14 = local_a0;
      if ((local_a8 & 1) != 0) {
        ppppuVar14 = (undefined8 ****)local_a0[0];
      }
      local_b8 = local_b8 + lVar22;
      ppppuVar14[local_c8 + -1] = (undefined8 ***)((long)ppppuVar14[local_c8 + -1] + lVar22);
      pbVar10 = local_70;
      if (local_c8 != 1) {
        pbVar16 = local_70 + 8;
        lVar22 = local_c8;
        do {
          ppppuVar14 = local_a0;
          if ((local_a8 & 1) != 0) {
            ppppuVar14 = (undefined8 ****)local_a0[0];
          }
          pbVar21 = pbVar16;
          if ((*pbVar10 & 1) != 0) {
            pbVar21 = *(byte **)(pbVar10 + 8);
          }
          if ((long)ppppuVar14[lVar22 + -1] < *(long *)(pbVar21 + lVar22 * 8 + -8)) break;
          ppppuVar14[lVar22 + -1] = (undefined8 ***)0x0;
          ppppuVar14 = local_a0;
          if ((local_a8 & 1) != 0) {
            ppppuVar14 = (undefined8 ****)local_a0[0];
          }
          lVar18 = lVar22 + -1;
          ppppuVar14[lVar22 + -2] = (undefined8 ***)((long)ppppuVar14[lVar22 + -2] + 1);
          lVar22 = lVar18;
        } while (lVar18 != 1);
      }
      ppppuVar14 = local_a0;
      if ((local_a8 & 1) != 0) {
        ppppuVar14 = (undefined8 ****)local_a0[0];
      }
      lVar18 = (local_c0 - (long)ppppuVar14[local_c8 + -1]) + local_b8;
      if (local_b0 <= lVar18) {
        lVar18 = local_b0;
      }
      lVar22 = lVar18 - local_b8;
    } while (lVar22 != 0 && local_b8 <= lVar18);
  }
  if (local_b8 == param_3) {
    if ((local_a8 & 1) != 0) {
      free(local_a0[0]);
    }
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
  }
  else {
    uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 005329f8 to 005329ff has its CatchHandler @ 00532ae0 */
    FUN_00645c30(auStack_130);
                    /* try { // try from 00532a00 to 00532a1f has its CatchHandler @ 00532ad0 */
    FUN_0047488c(auStack_118,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/copy.h"
                 ,0xe3,
                 "auto onnxruntime::StridedCopy(concurrency::ThreadPool *, unsigned long *, const TensorShapeVector &, const TensorShape &, const unsigned long *, const TensorShapeVector &)::(anonymous class)::operator()(std::ptrdiff_t, std::ptrdiff_t) const"
                 ,auStack_130);
    FUN_00476720(auStack_148);
                    /* try { // try from 00532a2c to 00532a6f has its CatchHandler @ 00532a70 */
    FUN_00474a40(uVar7,auStack_118,"counter.current_offset == last",auStack_148);
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00532b10  FUN_00532b10 =====

undefined8 * FUN_00532b10(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *__ptr;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar11 = *param_1;
  uVar2 = 10;
  if ((uVar11 & 1) != 0) {
    uVar2 = param_1[2] << 1;
  }
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  __ptr = (ulong *)param_1[1];
  uVar12 = uVar11 >> 1;
  uVar4 = FUN_00759c3c(uVar2 << 3);
  puVar1 = (undefined8 *)(uVar4 + uVar12 * 8);
  *puVar1 = *param_2;
  if (1 < uVar11) {
    uVar5 = 0;
    puVar7 = param_1 + 1;
    if ((uVar11 & 1) != 0) {
      puVar7 = __ptr;
    }
    puVar8 = puVar7;
    if ((7 < uVar11) && (0x1f < uVar4 - (long)puVar7)) {
      uVar5 = uVar12 & 0x7ffffffffffffffc;
      puVar9 = (ulong *)(uVar4 + 0x10);
      puVar8 = puVar7 + uVar5;
      puVar7 = puVar7 + 2;
      uVar10 = uVar5;
      do {
        puVar3 = puVar7 + -1;
        uVar13 = puVar7[-2];
        uVar15 = puVar7[1];
        uVar14 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar13;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + 4;
      } while (uVar10 != 0);
      if (uVar12 == uVar5) goto LAB_00532bec;
    }
    lVar6 = uVar12 - uVar5;
    puVar7 = (ulong *)(uVar4 + uVar5 * 8);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_00532bec:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 00532c2c  FUN_00532c2c =====

void FUN_00532c2c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar5 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar5 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar5 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar5;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 00532cc4 to 00532d0b has its CatchHandler @ 00532d8c */
  uVar2 = FUN_0056cff0();
  uVar2 = FUN_00583c90(&local_78,&DAT_001baece,uVar2);
  uVar2 = FUN_00583770(uVar2,"Expand");
  plVar3 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar3 + 0x18) = 0xd;
  puVar4 = (undefined8 *)FUN_005839b8(plVar3,"CPUExecutionProvider");
  puVar5 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar4;
  *puVar4 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_005340e4;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_005340e4;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar5);
    free(puVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00532db4  FUN_00532db4 =====

void FUN_00532db4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *local_78;
  undefined *local_70;
  code *pcStack_68;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_78[0x1e] = 0;
  local_78[0xd] = 0;
  local_78[0xc] = 0;
  local_78[0xf] = 0;
  local_78[0xe] = 0;
  puVar5 = local_78 + 0x18;
  local_78[0x19] = 0;
  *puVar5 = 0;
  *(undefined4 *)(local_78 + 0xe) = 0x3f800000;
  local_78[1] = 0;
  *local_78 = 0;
  local_78[3] = 0;
  local_78[2] = 0;
  local_78[5] = 0;
  local_78[4] = 0;
  local_78[7] = 0;
  local_78[6] = 0;
  local_78[9] = 0;
  local_78[8] = 0;
  local_78[0xb] = 0;
  local_78[10] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x15] = 0;
  local_78[0x14] = 0;
  local_78[0x17] = 0;
  local_78[0x16] = 0;
  local_78[0x1b] = 0;
  local_78[0x1a] = 0;
  local_78[0x1d] = 0;
  local_78[0x1c] = 0;
  local_78[3] = uVar2;
  *puVar5 = 0;
  *(undefined1 *)(local_78 + 0x15) = 0;
  local_78[0x14] = 0;
  local_78[0x13] = 0;
  local_78[0x12] = 0;
  local_78[0x11] = 0;
  local_78[0x10] = 0;
  local_78[0xf] = 0;
  local_78[0x17] = puVar5;
  local_78[0x1c] = 0;
  local_78[0x1b] = 0;
  local_78[0x19] = 0;
  local_78[0x1a] = local_78 + 0x1b;
                    /* try { // try from 00532e4c to 00532e93 has its CatchHandler @ 00532f14 */
  uVar2 = FUN_0056dafc();
  uVar2 = FUN_00583c90(&local_78,&DAT_001baece,uVar2);
  uVar2 = FUN_00583770(uVar2,"Expand");
  plVar3 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar3 + 0x18) = 0xd;
  puVar4 = (undefined8 *)FUN_005839b8(plVar3,"CPUExecutionProvider");
  puVar5 = local_78;
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar4;
  *puVar4 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_00534fcc;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_00534fcc;
  param_1[8] = 0;
  local_78 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar5);
    free(puVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00532f3c  FUN_00532f3c =====

void FUN_00532f3c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00532f7c  FUN_00532f7c =====

void FUN_00532f7c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  void *__s;
  void *__s_00;
  ulong uVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  void **local_1b0;
  void **ppvStack_1a8;
  ulong *local_1a0;
  void **ppvStack_198;
  undefined4 **local_190;
  ulong local_188;
  ulong local_180;
  long local_178;
  void *local_170;
  void *local_168;
  void *local_160;
  ulong local_158;
  void *local_150;
  void *local_148;
  void *local_140;
  ulong local_138;
  undefined4 *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined4 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  long local_f0 [4];
  long *local_d0;
  byte local_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  undefined7 uStack_af;
  char cStack_a8;
  undefined4 uStack_a7;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_3,0);
  local_110 = (undefined4 *)FUN_004ae878();
  uVar20 = *(ulong *)(lVar5 + 0x18);
  if ((uVar20 == 0xffffffffffffffff) ||
     ((plVar21 = *(long **)(lVar5 + 0x20), uVar20 != 0 && (plVar21 == (long *)0x0))))
  goto LAB_0053359c;
  lVar5 = FUN_004ae6a8(param_3,1);
  pvVar6 = (void *)FUN_004ba96c();
  lVar5 = FUN_005cabcc(lVar5 + 0x18);
  local_120 = (long *)0x0;
  local_118 = (long *)0x0;
  local_128 = (long *)0x0;
  if (lVar5 == 0) {
    plVar7 = (long *)0x0;
    uVar10 = uVar20;
    if (uVar20 != 0) {
LAB_0053304c:
      local_b8 = 1;
      uStack_b7 = 0;
                    /* try { // try from 00533054 to 00533063 has its CatchHandler @ 00533770 */
      FUN_005339b8(&local_128,plVar7,uVar10,&local_b8);
      plVar7 = local_128;
    }
  }
  else {
    if (lVar5 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00533630 to 00533637 has its CatchHandler @ 005337b4 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(&local_128);
      }
      goto LAB_00533880;
    }
                    /* try { // try from 00533014 to 0053301b has its CatchHandler @ 005337b4 */
    plVar7 = (long *)FUN_00759c3c(lVar5 * 8);
    plVar11 = plVar7 + lVar5;
    local_128 = plVar7;
    local_118 = plVar11;
    memcpy(plVar7,pvVar6,lVar5 * 8);
    uVar8 = (long)plVar11 - (long)plVar7 >> 3;
    uVar10 = uVar20 - uVar8;
    local_120 = plVar11;
    if (uVar8 <= uVar20 && uVar10 != 0) goto LAB_0053304c;
  }
  if ((uVar20 != 0) && (local_120 != plVar7)) {
    if (plVar21 == (long *)0x0) goto LAB_0053359c;
    lVar5 = uVar20 << 3;
    plVar11 = local_120;
    do {
      plVar11 = plVar11 + -1;
      if ((((long *)((long)plVar21 + lVar5) <= plVar21) ||
          (plVar13 = (long *)((long)plVar21 + lVar5) + -1, plVar13 < plVar21)) ||
         (plVar21 + uVar20 <= plVar13)) goto LAB_0053359c;
      lVar12 = *plVar13;
      if (lVar12 != *plVar11) {
        if (*plVar11 == 1) {
          *plVar11 = lVar12;
          plVar7 = local_128;
        }
        else if (lVar12 != 1) {
          local_b8 = 0x28;
          uStack_a7 = 0x65706168;
          uStack_af = (undefined7)s_invalid_expand_shape_001d9296._8_8_;
          cStack_a8 = SUB81(s_invalid_expand_shape_001d9296._8_8_,7);
          uStack_b7 = (undefined7)s_invalid_expand_shape_001d9296._0_8_;
          cStack_b0 = SUB81(s_invalid_expand_shape_001d9296._0_8_,7);
          uStack_a3 = 0;
                    /* try { // try from 00533474 to 00533487 has its CatchHandler @ 00533714 */
          FUN_0063aa48(param_1,2,2,&local_b8);
          if ((local_b8 & 1) != 0) {
            free((void *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,cStack_a8))));
          }
          goto LAB_00533840;
        }
      }
      lVar5 = lVar5 + -8;
    } while ((lVar5 != 0) && (plVar11 != plVar7));
  }
  if (((long)local_120 - (long)plVar7 == -8) ||
     ((local_120 != (long *)0x0 && (plVar7 == (long *)0x0)))) {
LAB_0053359c:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 0053311c to 0053312f has its CatchHandler @ 00533798 */
  FUN_005ca9a8(&local_b8,(long)local_120 - (long)plVar7 >> 3,plVar7);
                    /* try { // try from 00533130 to 0053313f has its CatchHandler @ 00533794 */
  FUN_0058d3bc(param_3,0,&local_b8);
                    /* try { // try from 00533140 to 00533147 has its CatchHandler @ 00533790 */
  local_130 = (undefined4 *)FUN_004aea28();
  plVar7 = local_128;
  uVar8 = (long)local_120 - (long)local_128 >> 3;
  uVar10 = uVar20;
  if ((long)uVar20 <= (long)uVar8) {
    uVar10 = uVar8;
  }
  local_138 = uVar10;
  if (uVar10 == 0) {
    *local_130 = *local_110;
    *param_1 = 0;
  }
  else {
    if ((long)uVar10 < 0) {
      plVar21 = (long *)FUN_00753a74(8);
      *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00533664 to 00533677 has its CatchHandler @ 005337a0 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00533880;
    }
    __n = uVar10 << 3;
    if (0x1fffffffffffffff < (long)uVar20) {
      __n = 0xffffffffffffffff;
    }
                    /* try { // try from 00533178 to 0053317f has its CatchHandler @ 005337a0 */
    __s = (void *)thunk_FUN_00759c3c(__n);
    memset(__s,0,__n);
    local_140 = __s;
                    /* try { // try from 00533194 to 0053319b has its CatchHandler @ 00533784 */
    __s_00 = (void *)thunk_FUN_00759c3c(__n);
    memset(__s_00,0,__n);
    local_148 = __s_00;
                    /* try { // try from 005331b0 to 005331b7 has its CatchHandler @ 00533778 */
    pvVar6 = (void *)thunk_FUN_00759c3c(__n);
    memset(pvVar6,0,__n);
    uVar9 = uVar8 - 1;
    uVar16 = uVar10;
    local_158 = uVar10;
    local_150 = pvVar6;
    if (0 < (long)uVar8) {
      lVar5 = 1;
      lVar12 = 1;
      lVar14 = 1;
      uVar8 = uVar10;
      do {
        if (0 < (long)uVar20) {
          lVar15 = plVar21[uVar20 - 1];
          if (lVar15 != 0) goto LAB_00533218;
LAB_0053328c:
          *param_1 = 0;
          goto LAB_005338f8;
        }
        lVar15 = 1;
LAB_00533218:
        lVar17 = plVar7[uVar9];
        if (lVar17 == 0) goto LAB_0053328c;
        lVar12 = lVar15 * lVar12;
        lVar5 = lVar17 * lVar5;
        if ((1 < lVar17 && lVar15 == 1) || (uVar16 = uVar8, uVar9 == 0)) {
          uVar16 = uVar8 - 1;
          local_158 = uVar16;
          if ((long)uVar8 < 1) {
            plVar21 = (long *)FUN_00753a74(8);
            *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 005335cc to 005335df has its CatchHandler @ 00533808 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
            }
            goto LAB_00533880;
          }
          lVar15 = 0;
          if (lVar12 != 0) {
            lVar15 = lVar5 / lVar12;
          }
          lVar18 = uVar16 * 8;
          *(long *)((long)__s + lVar18) = lVar12;
          *(long *)((long)__s_00 + lVar18) = lVar5;
          lVar17 = 0;
          if (lVar14 != 0) {
            lVar17 = lVar15 / lVar14;
          }
          *(long *)((long)pvVar6 + lVar18) = lVar17;
          lVar14 = lVar17 * lVar14;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar16;
        uVar20 = uVar20 - 1;
      } while (uVar9 < 0xfffffffffffffffe);
      if ((long)uVar16 < 0) {
        plVar21 = (long *)FUN_00753a74(8);
        *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00533700 to 00533713 has its CatchHandler @ 00533730 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_00533880;
      }
    }
    lVar5 = *(long *)((long)__s + uVar10 * 8 + -8);
    uVar20 = 0;
    if (lVar5 != 0) {
      uVar20 = *(long *)((long)__s + uVar16 * 8) / lVar5;
    }
    if ((long)uVar20 < 0) {
      plVar21 = (long *)FUN_00753a74(8);
      *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 005336a4 to 005336b7 has its CatchHandler @ 00533754 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00533880;
    }
    local_170 = (void *)0x0;
    local_168 = (void *)0x0;
    local_160 = (void *)0x0;
    if (uVar20 != 0) {
      if (uVar20 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 005336cc to 005336d3 has its CatchHandler @ 00533758 */
                    /* WARNING: Subroutine does not return */
          FUN_0034e528(&local_170);
        }
        goto LAB_00533880;
      }
                    /* try { // try from 005332cc to 005332d3 has its CatchHandler @ 00533758 */
      local_170 = (void *)FUN_00759c3c(uVar20 << 3);
      pvVar6 = (void *)((long)local_170 + uVar20 * 8);
      local_160 = pvVar6;
      memset(local_170,0,uVar20 << 3);
      local_168 = pvVar6;
    }
    local_180 = lVar5 << 2;
    local_178 = lVar5;
                    /* try { // try from 005332fc to 005332ff has its CatchHandler @ 005337d0 */
    iVar4 = FUN_0063bb14(*(undefined8 *)(param_3 + 0x18));
    uVar10 = local_180;
    lVar5 = 0;
    if ((long)iVar4 != 0) {
      lVar5 = (long)uVar20 / (long)iVar4;
    }
    if (lVar5 < 5) {
      uVar10 = local_138;
      if (uVar20 == 0) goto LAB_00533884;
      uVar10 = 0;
      do {
        if ((long)(local_158 + 1) < (long)local_138) {
          if ((long)(local_158 + 1) < 0 != SCARRY8(local_158,1)) {
            plVar21 = (long *)FUN_00753a74(8);
            *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 0053360c to 0053361f has its CatchHandler @ 005337d0 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
            }
            goto LAB_00533880;
          }
          lVar12 = 0;
          lVar14 = ~local_158 + local_138;
          plVar21 = (long *)((long)local_148 + local_158 * 8);
          plVar7 = (long *)((long)local_140 + local_158 * 8);
          lVar15 = local_178 * uVar10;
          do {
            plVar7 = plVar7 + 1;
            plVar21 = plVar21 + 1;
            lVar18 = *plVar7;
            lVar14 = lVar14 + -1;
            lVar17 = 0;
            if (lVar18 != 0) {
              lVar17 = lVar15 / lVar18;
            }
            lVar12 = lVar12 + *plVar21 * lVar17;
            lVar15 = lVar15 - lVar17 * lVar18;
          } while (lVar14 != 0);
        }
        else {
          lVar12 = 0;
        }
        memcpy(local_130 + lVar12,local_110 + local_178 * uVar10,local_180);
        *(long *)((long)local_170 + uVar10 * 8) = lVar12;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar20);
    }
    else {
      uVar19 = *(undefined8 *)(param_3 + 0x18);
                    /* try { // try from 00533318 to 0053331f has its CatchHandler @ 00533750 */
      local_d0 = (long *)FUN_00759c3c(0x50);
      puVar2 = PTR_DAT_007a2580;
      local_d0[2] = (long)&local_158;
      local_d0[3] = (long)&local_138;
      local_1a0 = (ulong *)(double)uVar10;
      local_1b0 = (void **)0x0;
      ppvStack_1a8 = (void **)0x0;
      *local_d0 = (long)(puVar2 + 0x10);
      local_d0[1] = (long)&local_178;
      local_d0[4] = (long)&local_140;
      local_d0[5] = (long)&local_148;
      local_d0[6] = (long)&local_130;
      local_d0[7] = (long)&local_110;
      local_d0[8] = (long)&local_180;
      local_d0[9] = (long)&local_170;
                    /* try { // try from 00533374 to 0053338b has its CatchHandler @ 00533734 */
      FUN_0063c634(uVar19,uVar20,&local_1b0,local_f0);
      if (local_d0 == local_f0) {
        lVar12 = 0x20;
        plVar21 = local_f0;
      }
      else {
        if (local_d0 == (long *)0x0) goto LAB_005334b8;
        lVar12 = 0x28;
        plVar21 = local_d0;
      }
      (**(code **)(*plVar21 + lVar12))();
    }
LAB_005334b8:
    local_188 = local_138 - 1;
    if ((long)local_158 < (long)local_138) {
      if (lVar5 < 0x15) {
        do {
          local_1b0 = &local_170;
          ppvStack_1a8 = &local_148;
          local_1a0 = &local_188;
          ppvStack_198 = &local_150;
          local_190 = &local_130;
                    /* try { // try from 005338b8 to 005338c7 has its CatchHandler @ 00533924 */
          FUN_00533e20(&local_1b0,0,uVar20);
          uVar10 = local_188;
LAB_00533884:
          local_188 = uVar10 - 1;
        } while ((long)local_158 < (long)uVar10);
      }
      else {
        puVar2 = PTR_DAT_007a2588 + 0x10;
        do {
          uVar10 = local_180;
          uVar19 = *(undefined8 *)(param_3 + 0x18);
          local_1b0 = &local_170;
          ppvStack_1a8 = &local_148;
          local_1a0 = &local_188;
          ppvStack_198 = &local_150;
          local_190 = &local_130;
                    /* try { // try from 0053353c to 00533543 has its CatchHandler @ 005337d4 */
          local_d0 = (long *)FUN_00759c3c(0x30);
          *local_d0 = (long)puVar2;
          local_d0[5] = (long)local_190;
          local_d0[2] = (long)ppvStack_1a8;
          local_d0[1] = (long)local_1b0;
          local_f8 = (double)uVar10;
          local_d0[4] = (long)ppvStack_198;
          local_d0[3] = (long)local_1a0;
          local_108 = 0;
          uStack_100 = 0;
                    /* try { // try from 0053356c to 0053357f has its CatchHandler @ 005337d8 */
          FUN_0063c634(uVar19,uVar20,&local_108,local_f0);
          if (local_d0 == local_f0) {
            plVar21 = local_f0;
            lVar5 = 0x20;
LAB_00533504:
            (**(code **)(*plVar21 + lVar5))();
          }
          else if (local_d0 != (long *)0x0) {
            lVar5 = 0x28;
            plVar21 = local_d0;
            goto LAB_00533504;
          }
          uVar10 = local_188 - 1;
          bVar1 = (long)local_158 < (long)local_188;
          local_188 = uVar10;
        } while (bVar1);
      }
    }
    *param_1 = 0;
    if (local_170 != (void *)0x0) {
      local_168 = local_170;
      free(local_170);
    }
    pvVar6 = local_150;
    local_150 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
LAB_005338f8:
      local_150 = (void *)0x0;
      free(pvVar6);
    }
    pvVar6 = local_148;
    local_148 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    pvVar6 = local_140;
    local_140 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
  }
  pvVar6 = local_80;
  local_80 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    free(pvVar6);
  }
LAB_00533840:
  if (local_128 != (long *)0x0) {
    local_120 = local_128;
    free(local_128);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_00533880:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005339b8  FUN_005339b8 =====

undefined8 * FUN_005339b8(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  void *__dest;
  ulong uVar4;
  size_t __n;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void *__src;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_3 == 0) {
    return param_2;
  }
  puVar6 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar6 >> 3) < param_3) {
    __src = (void *)*param_1;
    uVar9 = param_3 + ((long)puVar6 - (long)__src >> 3);
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(param_1);
    }
    uVar4 = param_1[2] - (long)__src;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      __dest = (void *)FUN_00759c3c(uVar7 << 3);
    }
    uVar9 = param_3 - 1 & 0x1fffffffffffffff;
    uVar5 = *param_4;
    puVar1 = (undefined8 *)((long)__dest + ((long)param_2 - (long)__src >> 3) * 8);
    puVar8 = puVar1 + param_3;
    puVar11 = puVar1;
    if (2 < uVar9) {
      uVar9 = uVar9 + 1;
      puVar11 = puVar1 + 2;
      uVar12 = uVar9 & 0x3ffffffffffffffc;
      uVar4 = uVar12;
      do {
        uVar4 = uVar4 - 4;
        puVar11[-1] = uVar5;
        puVar11[-2] = uVar5;
        puVar11[1] = uVar5;
        *puVar11 = uVar5;
        puVar11 = puVar11 + 4;
      } while (uVar4 != 0);
      puVar11 = puVar1 + uVar12;
      if (uVar9 == uVar12) goto LAB_00533b90;
    }
    do {
      puVar10 = puVar11 + 1;
      *puVar11 = uVar5;
      puVar11 = puVar10;
    } while (puVar10 != puVar8);
LAB_00533b90:
    memcpy(puVar8,param_2,(long)puVar6 - (long)param_2);
    param_1[1] = param_2;
    memcpy(__dest,__src,(long)param_2 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (long)puVar8 + ((long)puVar6 - (long)param_2);
    param_1[2] = (void *)((long)__dest + uVar7 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
    return puVar1;
  }
  uVar9 = (long)puVar6 - (long)param_2 >> 3;
  if (param_3 < uVar9 || param_3 - uVar9 == 0) {
    puVar8 = puVar6 + -param_3;
    puVar1 = puVar6;
    uVar9 = param_3;
  }
  else {
    puVar1 = puVar6 + (param_3 - uVar9);
    uVar7 = (param_3 * 8 - ((long)puVar6 - (long)param_2)) - 8;
    uVar5 = *param_4;
    puVar8 = puVar6;
    if (uVar7 < 0x18) {
LAB_00533ab4:
      do {
        puVar11 = puVar8 + 1;
        *puVar8 = uVar5;
        puVar8 = puVar11;
      } while (puVar11 != puVar1);
    }
    else {
      puVar8 = puVar6 + 2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar12 = uVar7 & 0x3ffffffffffffffc;
      uVar4 = uVar12;
      do {
        uVar4 = uVar4 - 4;
        puVar8[-1] = uVar5;
        puVar8[-2] = uVar5;
        puVar8[1] = uVar5;
        *puVar8 = uVar5;
        puVar8 = puVar8 + 4;
      } while (uVar4 != 0);
      puVar8 = puVar6 + uVar12;
      if (uVar7 != uVar12) goto LAB_00533ab4;
    }
    param_1[1] = puVar1;
    if (puVar6 == param_2) {
      return param_2;
    }
    puVar8 = puVar1 + -param_3;
  }
  puVar11 = puVar1;
  if (puVar8 < puVar6) {
    puVar11 = puVar6;
    if (puVar6 <= puVar8 + 1) {
      puVar11 = puVar8 + 1;
    }
    uVar7 = (long)puVar11 + param_3 * 8 + ~(ulong)puVar1;
    puVar10 = puVar1;
    if ((0x37 < uVar7) && (0x1f < param_3 * 8)) {
      puVar10 = puVar1 + 2;
      uVar7 = (uVar7 >> 3) + 1;
      uVar12 = uVar7 & 0x3ffffffffffffffc;
      puVar11 = puVar1 + uVar12;
      puVar13 = puVar8 + 2;
      uVar4 = uVar12;
      do {
        puVar2 = puVar13 + -1;
        uVar5 = puVar13[-2];
        uVar15 = puVar13[1];
        uVar14 = *puVar13;
        uVar4 = uVar4 - 4;
        puVar13 = puVar13 + 4;
        puVar10[-1] = *puVar2;
        puVar10[-2] = uVar5;
        puVar10[1] = uVar15;
        *puVar10 = uVar14;
        puVar10 = puVar10 + 4;
      } while (uVar4 != 0);
      puVar10 = puVar11;
      puVar8 = puVar8 + uVar12;
      if (uVar7 == uVar12) goto LAB_00533c4c;
    }
    do {
      puVar13 = puVar8 + 1;
      puVar11 = puVar10 + 1;
      *puVar10 = *puVar8;
      puVar10 = puVar11;
      puVar8 = puVar13;
    } while (puVar13 < puVar6);
  }
LAB_00533c4c:
  param_1[1] = puVar11;
  if (puVar1 != param_2 + param_3) {
    __n = (long)puVar1 - (long)(param_2 + param_3);
    memmove((void *)((long)puVar1 - __n),param_2,__n);
    puVar11 = (undefined8 *)param_1[1];
  }
  if (puVar11 <= param_4 || param_4 < param_2) {
    param_3 = 0;
  }
  uVar5 = param_4[param_3];
  puVar6 = param_2;
  if (3 < uVar9) {
    uVar4 = uVar9 & 0xfffffffffffffffc;
    puVar6 = param_2 + 2;
    uVar7 = uVar4;
    do {
      uVar7 = uVar7 - 4;
      puVar6[-1] = uVar5;
      puVar6[-2] = uVar5;
      puVar6[1] = uVar5;
      *puVar6 = uVar5;
      puVar6 = puVar6 + 4;
    } while (uVar7 != 0);
    bVar3 = uVar9 == uVar4;
    puVar6 = param_2 + uVar4;
    uVar9 = uVar9 & 3;
    if (bVar3) {
      return param_2;
    }
  }
  do {
    uVar9 = uVar9 - 1;
    *puVar6 = uVar5;
    puVar6 = puVar6 + 1;
  } while (uVar9 != 0);
  return param_2;
}


// ===== 00533d0c  FUN_00533d0c =====

void FUN_00533d0c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = param_2;
  if (param_2 < param_3) {
    do {
      lVar3 = *(long *)param_1[1];
      lVar4 = lVar3 + 1;
      if (lVar4 < *(long *)param_1[2]) {
        lVar9 = 0;
        lVar5 = *(long *)*param_1 * lVar8;
        do {
          if (lVar3 == -2 || lVar3 + 2 < 0 != SCARRY8(lVar3,2)) goto LAB_00533df4;
          lVar7 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          lVar6 = *(long *)(*(long *)param_1[3] + lVar7);
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar5 / lVar6;
          }
          lVar9 = lVar9 + *(long *)(*(long *)param_1[4] + lVar7) * lVar1;
          lVar5 = lVar5 - lVar1 * lVar6;
        } while (*(long *)param_1[2] != lVar4);
      }
      else {
        lVar9 = 0;
      }
      memcpy((void *)(*(long *)param_1[5] + lVar9 * 4),
             (void *)(*(long *)param_1[6] + *(long *)*param_1 * lVar8 * 4),*(size_t *)param_1[7]);
      if (param_2 < 0) {
LAB_00533df4:
        plVar2 = (long *)FUN_00753a74(8);
        *plVar2 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar2,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      *(long *)(*(long *)param_1[8] + lVar8 * 8) = lVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_3);
  }
  return;
}


// ===== 00533e20  FUN_00533e20 =====

void FUN_00533e20(undefined8 *param_1,long param_2,long param_3)

{
  void *__src;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  if (param_2 < param_3) {
    do {
      lVar5 = *(long *)param_1[2];
      if (lVar5 < 0) goto LAB_00533f70;
      lVar7 = *(long *)(*(long *)*param_1 + param_2 * 8);
      lVar6 = *(long *)(*(long *)param_1[1] + lVar5 * 8);
      lVar3 = 0;
      if (lVar6 != 0) {
        lVar3 = lVar7 / lVar6;
      }
      if (lVar7 == lVar3 * lVar6) {
        lVar5 = *(long *)(*(long *)param_1[3] + lVar5 * 8);
        uVar8 = 0;
        if (lVar5 != 0) {
          uVar8 = lVar6 / lVar5;
        }
        sVar9 = uVar8 * 4;
        if ((long)uVar8 < 0) {
          FUN_00485180();
LAB_00533eb4:
          FUN_00485180();
          __n = 0;
        }
        else {
          __n = sVar9;
          if (uVar8 >> 0x3e != 0) goto LAB_00533eb4;
        }
        if (*(long *)param_1[2] < 0) {
LAB_00533f70:
          plVar4 = (long *)FUN_00753a74(8);
          *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        __src = (void *)(*(long *)param_1[4] + lVar7 * 4);
        pvVar1 = (void *)((long)__src + *(long *)(*(long *)param_1[1] + *(long *)param_1[2] * 8) * 4
                         );
        __dest = (void *)((long)__src + sVar9);
        for (pvVar2 = (void *)((long)((long)__src + sVar9) + sVar9); pvVar2 <= pvVar1;
            pvVar2 = (void *)((long)pvVar2 + lVar5)) {
          memcpy(__dest,__src,__n);
          lVar5 = uVar8 * 8;
          uVar8 = uVar8 << 1;
          __n = __n << 1;
          __dest = pvVar2;
        }
        while (__dest < pvVar1) {
          while (pvVar2 = (void *)((long)__dest + uVar8 * 4), pvVar1 < pvVar2) {
            uVar8 = (long)uVar8 >> 1;
            __n = __n >> 1;
            if (pvVar1 <= __dest) goto LAB_00533e50;
          }
          memcpy(__dest,__src,__n);
          __dest = pvVar2;
        }
      }
LAB_00533e50:
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00533f9c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00533fa0  FUN_00533fa0 =====

void FUN_00533fa0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = uVar6;
  puVar1[5] = uVar5;
  *puVar1 = &PTR_FUN_00793770;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = uVar4;
  puVar1[7] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[9] = uVar2;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  return;
}


// ===== 00533ffc  FUN_00533ffc =====

void FUN_00533ffc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_00793770;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar2;
  param_2[7] = uVar1;
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  return;
}


// ===== 00534038  FUN_00534038 =====

void FUN_00534038(void)

{
  return;
}


// ===== 0053403c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00534040  FUN_00534040 =====

void FUN_00534040(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00533d0c(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00534050  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00534054  FUN_00534054 =====

void FUN_00534054(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a2588;
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[4] = lVar6;
  plVar2[3] = lVar5;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[5] = lVar3;
  return;
}


// ===== 005340a0  FUN_005340a0 =====

void FUN_005340a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_007937b8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


// ===== 005340cc  FUN_005340cc =====

void FUN_005340cc(void)

{
  return;
}


// ===== 005340d0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005340d4  FUN_005340d4 =====

void FUN_005340d4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00533e20(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 005340e4  FUN_005340e4 =====

void FUN_005340e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x10);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 00534120 to 00534127 has its CatchHandler @ 00534164 */
  FUN_0058d0b4(plVar1 + 1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00793720;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 00534178  FUN_00534178 =====

void FUN_00534178(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 005341b8  FUN_005341b8 =====

void FUN_005341b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  void *__s;
  void *__s_00;
  ulong uVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  void **local_1b0;
  void **ppvStack_1a8;
  ulong *local_1a0;
  void **ppvStack_198;
  undefined8 **local_190;
  ulong local_188;
  ulong local_180;
  long local_178;
  void *local_170;
  void *local_168;
  void *local_160;
  ulong local_158;
  void *local_150;
  void *local_148;
  void *local_140;
  ulong local_138;
  undefined8 *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  long local_f0 [4];
  long *local_d0;
  byte local_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  undefined7 uStack_af;
  char cStack_a8;
  undefined4 uStack_a7;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_004ae6a8(param_3,0);
  local_110 = (undefined8 *)FUN_004ba96c();
  uVar20 = *(ulong *)(lVar5 + 0x18);
  if ((uVar20 == 0xffffffffffffffff) ||
     ((plVar21 = *(long **)(lVar5 + 0x20), uVar20 != 0 && (plVar21 == (long *)0x0))))
  goto LAB_005347d8;
  lVar5 = FUN_004ae6a8(param_3,1);
  pvVar6 = (void *)FUN_004ba96c();
  lVar5 = FUN_005cabcc(lVar5 + 0x18);
  local_120 = (long *)0x0;
  local_118 = (long *)0x0;
  local_128 = (long *)0x0;
  if (lVar5 == 0) {
    plVar7 = (long *)0x0;
    uVar10 = uVar20;
    if (uVar20 != 0) {
LAB_00534288:
      local_b8 = 1;
      uStack_b7 = 0;
                    /* try { // try from 00534290 to 0053429f has its CatchHandler @ 005349ac */
      FUN_005339b8(&local_128,plVar7,uVar10,&local_b8);
      plVar7 = local_128;
    }
  }
  else {
    if (lVar5 < 0) {
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 0053486c to 00534873 has its CatchHandler @ 005349f0 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(&local_128);
      }
      goto LAB_00534abc;
    }
                    /* try { // try from 00534250 to 00534257 has its CatchHandler @ 005349f0 */
    plVar7 = (long *)FUN_00759c3c(lVar5 * 8);
    plVar11 = plVar7 + lVar5;
    local_128 = plVar7;
    local_118 = plVar11;
    memcpy(plVar7,pvVar6,lVar5 * 8);
    uVar8 = (long)plVar11 - (long)plVar7 >> 3;
    uVar10 = uVar20 - uVar8;
    local_120 = plVar11;
    if (uVar8 <= uVar20 && uVar10 != 0) goto LAB_00534288;
  }
  if ((uVar20 != 0) && (local_120 != plVar7)) {
    if (plVar21 == (long *)0x0) goto LAB_005347d8;
    lVar5 = uVar20 << 3;
    plVar11 = local_120;
    do {
      plVar11 = plVar11 + -1;
      if ((((long *)((long)plVar21 + lVar5) <= plVar21) ||
          (plVar13 = (long *)((long)plVar21 + lVar5) + -1, plVar13 < plVar21)) ||
         (plVar21 + uVar20 <= plVar13)) goto LAB_005347d8;
      lVar12 = *plVar13;
      if (lVar12 != *plVar11) {
        if (*plVar11 == 1) {
          *plVar11 = lVar12;
          plVar7 = local_128;
        }
        else if (lVar12 != 1) {
          local_b8 = 0x28;
          uStack_a7 = 0x65706168;
          uStack_af = (undefined7)s_invalid_expand_shape_001d9296._8_8_;
          cStack_a8 = SUB81(s_invalid_expand_shape_001d9296._8_8_,7);
          uStack_b7 = (undefined7)s_invalid_expand_shape_001d9296._0_8_;
          cStack_b0 = SUB81(s_invalid_expand_shape_001d9296._0_8_,7);
          uStack_a3 = 0;
                    /* try { // try from 005346b0 to 005346c3 has its CatchHandler @ 00534950 */
          FUN_0063aa48(param_1,2,2,&local_b8);
          if ((local_b8 & 1) != 0) {
            free((void *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,cStack_a8))));
          }
          goto LAB_00534a7c;
        }
      }
      lVar5 = lVar5 + -8;
    } while ((lVar5 != 0) && (plVar11 != plVar7));
  }
  if (((long)local_120 - (long)plVar7 == -8) ||
     ((local_120 != (long *)0x0 && (plVar7 == (long *)0x0)))) {
LAB_005347d8:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 00534358 to 0053436b has its CatchHandler @ 005349d4 */
  FUN_005ca9a8(&local_b8,(long)local_120 - (long)plVar7 >> 3,plVar7);
                    /* try { // try from 0053436c to 0053437b has its CatchHandler @ 005349d0 */
  FUN_0058d3bc(param_3,0,&local_b8);
                    /* try { // try from 0053437c to 00534383 has its CatchHandler @ 005349cc */
  local_130 = (undefined8 *)FUN_004bb758();
  plVar7 = local_128;
  uVar8 = (long)local_120 - (long)local_128 >> 3;
  uVar10 = uVar20;
  if ((long)uVar20 <= (long)uVar8) {
    uVar10 = uVar8;
  }
  local_138 = uVar10;
  if (uVar10 == 0) {
    *local_130 = *local_110;
    *param_1 = 0;
  }
  else {
    if ((long)uVar10 < 0) {
      plVar21 = (long *)FUN_00753a74(8);
      *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 005348a0 to 005348b3 has its CatchHandler @ 005349dc */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00534abc;
    }
    __n = uVar10 << 3;
    if (0x1fffffffffffffff < (long)uVar20) {
      __n = 0xffffffffffffffff;
    }
                    /* try { // try from 005343b4 to 005343bb has its CatchHandler @ 005349dc */
    __s = (void *)thunk_FUN_00759c3c(__n);
    memset(__s,0,__n);
    local_140 = __s;
                    /* try { // try from 005343d0 to 005343d7 has its CatchHandler @ 005349c0 */
    __s_00 = (void *)thunk_FUN_00759c3c(__n);
    memset(__s_00,0,__n);
    local_148 = __s_00;
                    /* try { // try from 005343ec to 005343f3 has its CatchHandler @ 005349b4 */
    pvVar6 = (void *)thunk_FUN_00759c3c(__n);
    memset(pvVar6,0,__n);
    uVar9 = uVar8 - 1;
    uVar16 = uVar10;
    local_158 = uVar10;
    local_150 = pvVar6;
    if (0 < (long)uVar8) {
      lVar5 = 1;
      lVar12 = 1;
      lVar14 = 1;
      uVar8 = uVar10;
      do {
        if (0 < (long)uVar20) {
          lVar15 = plVar21[uVar20 - 1];
          if (lVar15 != 0) goto LAB_00534454;
LAB_005344c8:
          *param_1 = 0;
          goto LAB_00534b34;
        }
        lVar15 = 1;
LAB_00534454:
        lVar17 = plVar7[uVar9];
        if (lVar17 == 0) goto LAB_005344c8;
        lVar12 = lVar15 * lVar12;
        lVar5 = lVar17 * lVar5;
        if ((1 < lVar17 && lVar15 == 1) || (uVar16 = uVar8, uVar9 == 0)) {
          uVar16 = uVar8 - 1;
          local_158 = uVar16;
          if ((long)uVar8 < 1) {
            plVar21 = (long *)FUN_00753a74(8);
            *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00534808 to 0053481b has its CatchHandler @ 00534a44 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
            }
            goto LAB_00534abc;
          }
          lVar15 = 0;
          if (lVar12 != 0) {
            lVar15 = lVar5 / lVar12;
          }
          lVar18 = uVar16 * 8;
          *(long *)((long)__s + lVar18) = lVar12;
          *(long *)((long)__s_00 + lVar18) = lVar5;
          lVar17 = 0;
          if (lVar14 != 0) {
            lVar17 = lVar15 / lVar14;
          }
          *(long *)((long)pvVar6 + lVar18) = lVar17;
          lVar14 = lVar17 * lVar14;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar16;
        uVar20 = uVar20 - 1;
      } while (uVar9 < 0xfffffffffffffffe);
      if ((long)uVar16 < 0) {
        plVar21 = (long *)FUN_00753a74(8);
        *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 0053493c to 0053494f has its CatchHandler @ 0053496c */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_00534abc;
      }
    }
    lVar5 = *(long *)((long)__s + uVar10 * 8 + -8);
    uVar20 = 0;
    if (lVar5 != 0) {
      uVar20 = *(long *)((long)__s + uVar16 * 8) / lVar5;
    }
    if ((long)uVar20 < 0) {
      plVar21 = (long *)FUN_00753a74(8);
      *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
      if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 005348e0 to 005348f3 has its CatchHandler @ 00534990 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_00534abc;
    }
    local_170 = (void *)0x0;
    local_168 = (void *)0x0;
    local_160 = (void *)0x0;
    if (uVar20 != 0) {
      if (uVar20 >> 0x3d != 0) {
        if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00534908 to 0053490f has its CatchHandler @ 00534994 */
                    /* WARNING: Subroutine does not return */
          FUN_0034e528(&local_170);
        }
        goto LAB_00534abc;
      }
                    /* try { // try from 00534508 to 0053450f has its CatchHandler @ 00534994 */
      local_170 = (void *)FUN_00759c3c(uVar20 << 3);
      pvVar6 = (void *)((long)local_170 + uVar20 * 8);
      local_160 = pvVar6;
      memset(local_170,0,uVar20 << 3);
      local_168 = pvVar6;
    }
    local_180 = lVar5 << 3;
    local_178 = lVar5;
                    /* try { // try from 00534538 to 0053453b has its CatchHandler @ 00534a0c */
    iVar4 = FUN_0063bb14(*(undefined8 *)(param_3 + 0x18));
    uVar10 = local_180;
    lVar5 = 0;
    if ((long)iVar4 != 0) {
      lVar5 = (long)uVar20 / (long)iVar4;
    }
    if (lVar5 < 5) {
      uVar10 = local_138;
      if (uVar20 == 0) goto LAB_00534ac0;
      uVar10 = 0;
      do {
        if ((long)(local_158 + 1) < (long)local_138) {
          if ((long)(local_158 + 1) < 0 != SCARRY8(local_158,1)) {
            plVar21 = (long *)FUN_00753a74(8);
            *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* try { // try from 00534848 to 0053485b has its CatchHandler @ 00534a0c */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
            }
            goto LAB_00534abc;
          }
          lVar12 = 0;
          lVar14 = ~local_158 + local_138;
          plVar21 = (long *)((long)local_148 + local_158 * 8);
          plVar7 = (long *)((long)local_140 + local_158 * 8);
          lVar15 = local_178 * uVar10;
          do {
            plVar7 = plVar7 + 1;
            plVar21 = plVar21 + 1;
            lVar18 = *plVar7;
            lVar14 = lVar14 + -1;
            lVar17 = 0;
            if (lVar18 != 0) {
              lVar17 = lVar15 / lVar18;
            }
            lVar12 = lVar12 + *plVar21 * lVar17;
            lVar15 = lVar15 - lVar17 * lVar18;
          } while (lVar14 != 0);
        }
        else {
          lVar12 = 0;
        }
        memcpy(local_130 + lVar12,local_110 + local_178 * uVar10,local_180);
        *(long *)((long)local_170 + uVar10 * 8) = lVar12;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar20);
    }
    else {
      uVar19 = *(undefined8 *)(param_3 + 0x18);
                    /* try { // try from 00534554 to 0053455b has its CatchHandler @ 0053498c */
      local_d0 = (long *)FUN_00759c3c(0x50);
      puVar2 = PTR_DAT_007a2598;
      local_d0[2] = (long)&local_158;
      local_d0[3] = (long)&local_138;
      local_1a0 = (ulong *)(double)uVar10;
      local_1b0 = (void **)0x0;
      ppvStack_1a8 = (void **)0x0;
      *local_d0 = (long)(puVar2 + 0x10);
      local_d0[1] = (long)&local_178;
      local_d0[4] = (long)&local_140;
      local_d0[5] = (long)&local_148;
      local_d0[6] = (long)&local_130;
      local_d0[7] = (long)&local_110;
      local_d0[8] = (long)&local_180;
      local_d0[9] = (long)&local_170;
                    /* try { // try from 005345b0 to 005345c7 has its CatchHandler @ 00534970 */
      FUN_0063c634(uVar19,uVar20,&local_1b0,local_f0);
      if (local_d0 == local_f0) {
        lVar12 = 0x20;
        plVar21 = local_f0;
      }
      else {
        if (local_d0 == (long *)0x0) goto LAB_005346f4;
        lVar12 = 0x28;
        plVar21 = local_d0;
      }
      (**(code **)(*plVar21 + lVar12))();
    }
LAB_005346f4:
    local_188 = local_138 - 1;
    if ((long)local_158 < (long)local_138) {
      if (lVar5 < 0x15) {
        do {
          local_1b0 = &local_170;
          ppvStack_1a8 = &local_148;
          local_1a0 = &local_188;
          ppvStack_198 = &local_150;
          local_190 = &local_130;
                    /* try { // try from 00534af4 to 00534b03 has its CatchHandler @ 00534b60 */
          FUN_00534d08(&local_1b0,0,uVar20);
          uVar10 = local_188;
LAB_00534ac0:
          local_188 = uVar10 - 1;
        } while ((long)local_158 < (long)uVar10);
      }
      else {
        puVar2 = PTR_DAT_007a25a0 + 0x10;
        do {
          uVar10 = local_180;
          uVar19 = *(undefined8 *)(param_3 + 0x18);
          local_1b0 = &local_170;
          ppvStack_1a8 = &local_148;
          local_1a0 = &local_188;
          ppvStack_198 = &local_150;
          local_190 = &local_130;
                    /* try { // try from 00534778 to 0053477f has its CatchHandler @ 00534a10 */
          local_d0 = (long *)FUN_00759c3c(0x30);
          *local_d0 = (long)puVar2;
          local_d0[5] = (long)local_190;
          local_d0[2] = (long)ppvStack_1a8;
          local_d0[1] = (long)local_1b0;
          local_f8 = (double)uVar10;
          local_d0[4] = (long)ppvStack_198;
          local_d0[3] = (long)local_1a0;
          local_108 = 0;
          uStack_100 = 0;
                    /* try { // try from 005347a8 to 005347bb has its CatchHandler @ 00534a14 */
          FUN_0063c634(uVar19,uVar20,&local_108,local_f0);
          if (local_d0 == local_f0) {
            plVar21 = local_f0;
            lVar5 = 0x20;
LAB_00534740:
            (**(code **)(*plVar21 + lVar5))();
          }
          else if (local_d0 != (long *)0x0) {
            lVar5 = 0x28;
            plVar21 = local_d0;
            goto LAB_00534740;
          }
          uVar10 = local_188 - 1;
          bVar1 = (long)local_158 < (long)local_188;
          local_188 = uVar10;
        } while (bVar1);
      }
    }
    *param_1 = 0;
    if (local_170 != (void *)0x0) {
      local_168 = local_170;
      free(local_170);
    }
    pvVar6 = local_150;
    local_150 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
LAB_00534b34:
      local_150 = (void *)0x0;
      free(pvVar6);
    }
    pvVar6 = local_148;
    local_148 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    pvVar6 = local_140;
    local_140 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
  }
  pvVar6 = local_80;
  local_80 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    free(pvVar6);
  }
LAB_00534a7c:
  if (local_128 != (long *)0x0) {
    local_120 = local_128;
    free(local_128);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_00534abc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00534bf4  FUN_00534bf4 =====

void FUN_00534bf4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = param_2;
  if (param_2 < param_3) {
    do {
      lVar3 = *(long *)param_1[1];
      lVar4 = lVar3 + 1;
      if (lVar4 < *(long *)param_1[2]) {
        lVar9 = 0;
        lVar5 = *(long *)*param_1 * lVar8;
        do {
          if (lVar3 == -2 || lVar3 + 2 < 0 != SCARRY8(lVar3,2)) goto LAB_00534cdc;
          lVar7 = lVar4 * 8;
          lVar4 = lVar4 + 1;
          lVar6 = *(long *)(*(long *)param_1[3] + lVar7);
          lVar1 = 0;
          if (lVar6 != 0) {
            lVar1 = lVar5 / lVar6;
          }
          lVar9 = lVar9 + *(long *)(*(long *)param_1[4] + lVar7) * lVar1;
          lVar5 = lVar5 - lVar1 * lVar6;
        } while (*(long *)param_1[2] != lVar4);
      }
      else {
        lVar9 = 0;
      }
      memcpy((void *)(*(long *)param_1[5] + lVar9 * 8),
             (void *)(*(long *)param_1[6] + *(long *)*param_1 * lVar8 * 8),*(size_t *)param_1[7]);
      if (param_2 < 0) {
LAB_00534cdc:
        plVar2 = (long *)FUN_00753a74(8);
        *plVar2 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar2,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      *(long *)(*(long *)param_1[8] + lVar8 * 8) = lVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_3);
  }
  return;
}


// ===== 00534d08  FUN_00534d08 =====

void FUN_00534d08(undefined8 *param_1,long param_2,long param_3)

{
  void *__src;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  long lVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  
  if (param_2 < param_3) {
    do {
      lVar5 = *(long *)param_1[2];
      if (lVar5 < 0) goto LAB_00534e58;
      lVar7 = *(long *)(*(long *)*param_1 + param_2 * 8);
      lVar6 = *(long *)(*(long *)param_1[1] + lVar5 * 8);
      lVar3 = 0;
      if (lVar6 != 0) {
        lVar3 = lVar7 / lVar6;
      }
      if (lVar7 == lVar3 * lVar6) {
        lVar5 = *(long *)(*(long *)param_1[3] + lVar5 * 8);
        uVar8 = 0;
        if (lVar5 != 0) {
          uVar8 = lVar6 / lVar5;
        }
        sVar9 = uVar8 * 8;
        if ((long)uVar8 < 0) {
          FUN_00485180();
LAB_00534d9c:
          FUN_00485180();
          __n = 0;
        }
        else {
          __n = sVar9;
          if (uVar8 >> 0x3d != 0) goto LAB_00534d9c;
        }
        if (*(long *)param_1[2] < 0) {
LAB_00534e58:
          plVar4 = (long *)FUN_00753a74(8);
          *plVar4 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar4,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        __src = (void *)(*(long *)param_1[4] + lVar7 * 8);
        pvVar1 = (void *)((long)__src + *(long *)(*(long *)param_1[1] + *(long *)param_1[2] * 8) * 8
                         );
        __dest = (void *)((long)__src + sVar9);
        for (pvVar2 = (void *)((long)((long)__src + sVar9) + sVar9); pvVar2 <= pvVar1;
            pvVar2 = (void *)((long)pvVar2 + lVar5)) {
          memcpy(__dest,__src,__n);
          lVar5 = uVar8 * 0x10;
          uVar8 = uVar8 << 1;
          __n = __n << 1;
          __dest = pvVar2;
        }
        while (__dest < pvVar1) {
          while (pvVar2 = (void *)((long)__dest + uVar8 * 8), pvVar1 < pvVar2) {
            uVar8 = (long)uVar8 >> 1;
            __n = __n >> 1;
            if (pvVar1 <= __dest) goto LAB_00534d38;
          }
          memcpy(__dest,__src,__n);
          __dest = pvVar2;
        }
      }
LAB_00534d38:
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00534e84  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00534e88  FUN_00534e88 =====

void FUN_00534e88(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = uVar6;
  puVar1[5] = uVar5;
  *puVar1 = &PTR_FUN_00793850;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1[8] = uVar4;
  puVar1[7] = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[9] = uVar2;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  return;
}


// ===== 00534ee4  FUN_00534ee4 =====

void FUN_00534ee4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_00793850;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar2;
  param_2[7] = uVar1;
  param_2[6] = uVar6;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  return;
}


// ===== 00534f20  FUN_00534f20 =====

void FUN_00534f20(void)

{
  return;
}


// ===== 00534f24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00534f28  FUN_00534f28 =====

void FUN_00534f28(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_00534bf4(param_1 + 8,*param_2,*param_3);
  return;
}


// ===== 00534f38  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00534f3c  FUN_00534f3c =====

void FUN_00534f3c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a25a0;
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x28);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  plVar2[4] = lVar6;
  plVar2[3] = lVar5;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[5] = lVar3;
  return;
}


// ===== 00534f88  FUN_00534f88 =====

void FUN_00534f88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_00793898;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  return;
}


