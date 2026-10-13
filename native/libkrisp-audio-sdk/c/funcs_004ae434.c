// ===== 004ae434  FUN_004ae434 =====

void FUN_004ae434(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "ComputeAsync";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 004ae484 to 004ae48f has its CatchHandler @ 004ae4fc */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 004ae4b0 to 004ae4c7 has its CatchHandler @ 004ae4c8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae500  FUN_004ae500 =====

void FUN_004ae500(undefined8 *param_1)

{
  undefined1 *in_x4;
  
  *in_x4 = 0;
  *param_1 = 0;
  return;
}


// ===== 004ae50c  FUN_004ae50c =====

void FUN_004ae50c(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  uVar2 = *param_3;
  puVar3 = param_3 + 1;
  uVar1 = uVar2 & 1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    puVar4 = (ulong *)*puVar3;
  }
  if (1 < uVar2) {
    uVar2 = uVar2 >> 1;
    puVar4 = puVar4 + uVar2 * 3 + -1;
    do {
      if ((puVar4[-2] & 1) != 0) {
        free((void *)*puVar4);
      }
      uVar2 = uVar2 - 1;
      puVar4 = puVar4 + -3;
    } while (uVar2 != 0);
    uVar1 = *param_3 & 1;
  }
  if (uVar1 != 0) {
    free((void *)*puVar3);
  }
  *param_3 = 0;
  *param_1 = 0;
  return;
}


// ===== 004ae5a8  FUN_004ae5a8 =====

void FUN_004ae5a8(undefined8 *param_1)

{
  undefined1 *in_x3;
  
  *in_x3 = 0;
  *param_1 = 0;
  return;
}


// ===== 004ae5b4  FUN_004ae5b4 =====

void FUN_004ae5b4(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004ae5d8  FUN_004ae5d8 =====

void FUN_004ae5d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4ae5dc);
  (*pcVar1)();
}


// ===== 004ae5dc  FUN_004ae5dc =====

void FUN_004ae5dc(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  param_3 = param_3 - param_2;
  if (0 < param_3) {
    fVar4 = *(float *)(param_1 + 0x18);
    pfVar2 = (float *)(*(long *)(param_1 + 8) + param_2 * 4);
    pfVar1 = (float *)(*(long *)(param_1 + 0x10) + param_2 * 4);
    do {
      fVar3 = *pfVar2;
      if (fVar3 < 0.0 != NAN(fVar3)) {
        fVar3 = expf(fVar3);
        fVar3 = fVar4 * (fVar3 + -1.0);
      }
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 004ae658  FUN_004ae658 =====

undefined1  [16] FUN_004ae658(void)

{
  return ZEXT816(0x41f00000);
}


// ===== 004ae660  FUN_004ae660 =====

void FUN_004ae660(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1fd8;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 3) = uVar4;
  return;
}


// ===== 004ae6a4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004ae6a8  FUN_004ae6a8 =====

void FUN_004ae6a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*param_1 + 0x70))();
  if (lVar2 != 0) {
                    /* try { // try from 004ae6e4 to 004ae6e7 has its CatchHandler @ 004ae710 */
    FUN_00483570();
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ae878  FUN_004ae878 =====

long FUN_004ae878(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 1) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004ae8ec to 004ae8f3 has its CatchHandler @ 004aea04 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004ae8f4 to 004ae913 has its CatchHandler @ 004ae9f4 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = float]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004ae950 to 004ae997 has its CatchHandler @ 004ae998 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aea28  FUN_004aea28 =====

long FUN_004aea28(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 1) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004aea9c to 004aeaa3 has its CatchHandler @ 004aebb4 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004aeaa4 to 004aeac3 has its CatchHandler @ 004aeba4 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = float]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004aeb00 to 004aeb47 has its CatchHandler @ 004aeb48 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aebd8  FUN_004aebd8 =====

void FUN_004aebd8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  bool bVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  lVar3 = tpidr_el0;
  uVar17 = param_3 - param_2;
  lVar13 = *(long *)(lVar3 + 0x28);
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  fVar23 = *(float *)(param_1 + 0x18);
  fVar24 = *(float *)(param_1 + 0x1c);
  uVar22 = lVar2 + param_2 * 4;
  uVar15 = uVar17;
  if (((uVar22 & 3) == 0) &&
     (uVar15 = (ulong)-((uint)uVar22 >> 2) & 3, (long)uVar17 <= (long)uVar15)) {
    uVar15 = uVar17;
  }
  uVar16 = uVar17 - uVar15;
  uVar22 = uVar16 + 3;
  if ((long)uVar15 <= (long)uVar17) {
    uVar22 = uVar16;
  }
  if (0 < (long)uVar15) {
    uVar20 = 0;
    if ((7 < uVar15) && (0x1f < (ulong)(lVar2 - lVar1))) {
      auVar25 = NEON_fmov(0x3f800000,4);
      uVar20 = uVar15 & 0x7ffffffffffffff8;
      lVar19 = param_2 * 4 + 0x10;
      puVar18 = (undefined8 *)(lVar2 + lVar19);
      pfVar11 = (float *)(lVar1 + lVar19);
      uVar12 = uVar20;
      do {
        pfVar14 = pfVar11 + -4;
        pfVar4 = pfVar11 + -3;
        pfVar5 = pfVar11 + -2;
        pfVar6 = pfVar11 + -1;
        fVar27 = *pfVar11;
        pfVar7 = pfVar11 + 1;
        pfVar8 = pfVar11 + 2;
        pfVar9 = pfVar11 + 3;
        uVar12 = uVar12 - 8;
        pfVar11 = pfVar11 + 8;
        auVar28._0_4_ = fVar24 + *pfVar14 * fVar23;
        auVar28._4_4_ = fVar24 + *pfVar4 * fVar23;
        auVar28._8_4_ = fVar24 + *pfVar5 * fVar23;
        auVar28._12_4_ = fVar24 + *pfVar6 * fVar23;
        auVar31._0_4_ = fVar24 + fVar27 * fVar23;
        auVar31._4_4_ = fVar24 + *pfVar7 * fVar23;
        auVar31._8_4_ = fVar24 + *pfVar8 * fVar23;
        auVar31._12_4_ = fVar24 + *pfVar9 * fVar23;
        auVar34 = NEON_fcmgt(auVar28,auVar25,4);
        auVar35 = NEON_fcmgt(auVar31,auVar25,4);
        auVar28 = NEON_bit(auVar28,auVar25,auVar34,1);
        auVar31 = NEON_bit(auVar31,auVar25,auVar35,1);
        auVar35 = NEON_fcmlt(auVar28,0,4);
        auVar36 = NEON_fcmlt(auVar31,0,4);
        auVar34._0_8_ =
             CONCAT17(auVar28[7] & ~auVar35[7],
                      CONCAT16(auVar28[6] & ~auVar35[6],
                               CONCAT15(auVar28[5] & ~auVar35[5],
                                        CONCAT14(auVar28[4] & ~auVar35[4],
                                                 CONCAT13(auVar28[3] & ~auVar35[3],
                                                          CONCAT12(auVar28[2] & ~auVar35[2],
                                                                   CONCAT11(auVar28[1] & ~auVar35[1]
                                                                            ,auVar28[0] &
                                                                             ~auVar35[0])))))));
        auVar34[8] = auVar28[8] & ~auVar35[8];
        auVar34[9] = auVar28[9] & ~auVar35[9];
        auVar34[10] = auVar28[10] & ~auVar35[10];
        auVar34[0xb] = auVar28[0xb] & ~auVar35[0xb];
        auVar34[0xc] = auVar28[0xc] & ~auVar35[0xc];
        auVar34[0xd] = auVar28[0xd] & ~auVar35[0xd];
        auVar34[0xe] = auVar28[0xe] & ~auVar35[0xe];
        auVar34[0xf] = auVar28[0xf] & ~auVar35[0xf];
        auVar35._0_8_ =
             CONCAT17(auVar31[7] & ~auVar36[7],
                      CONCAT16(auVar31[6] & ~auVar36[6],
                               CONCAT15(auVar31[5] & ~auVar36[5],
                                        CONCAT14(auVar31[4] & ~auVar36[4],
                                                 CONCAT13(auVar31[3] & ~auVar36[3],
                                                          CONCAT12(auVar31[2] & ~auVar36[2],
                                                                   CONCAT11(auVar31[1] & ~auVar36[1]
                                                                            ,auVar31[0] &
                                                                             ~auVar36[0])))))));
        auVar35[8] = auVar31[8] & ~auVar36[8];
        auVar35[9] = auVar31[9] & ~auVar36[9];
        auVar35[10] = auVar31[10] & ~auVar36[10];
        auVar35[0xb] = auVar31[0xb] & ~auVar36[0xb];
        auVar35[0xc] = auVar31[0xc] & ~auVar36[0xc];
        auVar35[0xd] = auVar31[0xd] & ~auVar36[0xd];
        auVar35[0xe] = auVar31[0xe] & ~auVar36[0xe];
        auVar35[0xf] = auVar31[0xf] & ~auVar36[0xf];
        puVar18[-1] = auVar34._8_8_;
        puVar18[-2] = auVar34._0_8_;
        puVar18[1] = auVar35._8_8_;
        *puVar18 = auVar35._0_8_;
        puVar18 = puVar18 + 4;
      } while (uVar12 != 0);
      if (uVar15 == uVar20) goto LAB_004aed0c;
    }
    lVar21 = uVar15 - uVar20;
    lVar19 = uVar20 * 4 + param_2 * 4;
    pfVar11 = (float *)(lVar2 + lVar19);
    pfVar14 = (float *)(lVar1 + lVar19);
    do {
      fVar26 = fVar24 + fVar23 * *pfVar14;
      fVar27 = 1.0;
      if (fVar26 == 1.0 || fVar26 < 1.0 != NAN(fVar26)) {
        fVar27 = fVar26;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar27) {
        fVar26 = fVar27;
      }
      lVar21 = lVar21 + -1;
      *pfVar11 = fVar26;
      pfVar11 = pfVar11 + 1;
      pfVar14 = pfVar14 + 1;
    } while (lVar21 != 0);
  }
LAB_004aed0c:
  lVar19 = (uVar22 & 0xfffffffffffffffc) + uVar15;
  if (3 < (long)uVar16) {
    auVar25 = NEON_fmov(0x3f800000,4);
    lVar21 = uVar15 * 4 + param_2 * 4;
    uVar16 = uVar15;
    pfVar11 = (float *)(lVar1 + lVar21);
    puVar18 = (undefined8 *)(lVar2 + lVar21);
    do {
      uVar16 = uVar16 + 4;
      auVar36._0_4_ = fVar24 + *pfVar11 * fVar23;
      auVar36._4_4_ = fVar24 + pfVar11[1] * fVar23;
      auVar36._8_4_ = fVar24 + pfVar11[2] * fVar23;
      auVar36._12_4_ = fVar24 + pfVar11[3] * fVar23;
      auVar28 = NEON_fmin(auVar36,auVar25,4);
      auVar28 = NEON_fmax(auVar28,ZEXT816(0),4);
      puVar18[1] = auVar28._8_8_;
      *puVar18 = auVar28._0_8_;
      pfVar11 = pfVar11 + 4;
      puVar18 = puVar18 + 2;
    } while ((long)uVar16 < lVar19);
  }
  if (lVar19 < (long)uVar17) {
    uVar17 = (param_3 - (uVar22 & 0xfffffffffffffffc)) - (uVar15 + param_2);
    if ((7 < uVar17) && (0x1f < (ulong)(lVar2 - lVar1))) {
      auVar25 = NEON_fmov(0x3f800000,4);
      uVar16 = uVar17 & 0xfffffffffffffff8;
      lVar19 = lVar19 + uVar16;
      lVar21 = ((long)uVar22 >> 2) * 0x10 + uVar15 * 4 + param_2 * 4 + 0x10;
      pfVar11 = (float *)(lVar1 + lVar21);
      puVar18 = (undefined8 *)(lVar2 + lVar21);
      uVar22 = uVar16;
      do {
        pfVar14 = pfVar11 + -4;
        pfVar4 = pfVar11 + -3;
        pfVar5 = pfVar11 + -2;
        pfVar6 = pfVar11 + -1;
        fVar27 = *pfVar11;
        pfVar7 = pfVar11 + 1;
        pfVar8 = pfVar11 + 2;
        pfVar9 = pfVar11 + 3;
        uVar22 = uVar22 - 8;
        pfVar11 = pfVar11 + 8;
        auVar29._0_4_ = fVar24 + *pfVar14 * fVar23;
        auVar29._4_4_ = fVar24 + *pfVar4 * fVar23;
        auVar29._8_4_ = fVar24 + *pfVar5 * fVar23;
        auVar29._12_4_ = fVar24 + *pfVar6 * fVar23;
        auVar32._0_4_ = fVar24 + fVar27 * fVar23;
        auVar32._4_4_ = fVar24 + *pfVar7 * fVar23;
        auVar32._8_4_ = fVar24 + *pfVar8 * fVar23;
        auVar32._12_4_ = fVar24 + *pfVar9 * fVar23;
        auVar28 = NEON_fcmgt(auVar29,auVar25,4);
        auVar34 = NEON_fcmgt(auVar32,auVar25,4);
        auVar28 = NEON_bit(auVar29,auVar25,auVar28,1);
        auVar34 = NEON_bit(auVar32,auVar25,auVar34,1);
        auVar31 = NEON_fcmlt(auVar28,0,4);
        auVar35 = NEON_fcmlt(auVar34,0,4);
        auVar30._0_8_ =
             CONCAT17(auVar28[7] & ~auVar31[7],
                      CONCAT16(auVar28[6] & ~auVar31[6],
                               CONCAT15(auVar28[5] & ~auVar31[5],
                                        CONCAT14(auVar28[4] & ~auVar31[4],
                                                 CONCAT13(auVar28[3] & ~auVar31[3],
                                                          CONCAT12(auVar28[2] & ~auVar31[2],
                                                                   CONCAT11(auVar28[1] & ~auVar31[1]
                                                                            ,auVar28[0] &
                                                                             ~auVar31[0])))))));
        auVar30[8] = auVar28[8] & ~auVar31[8];
        auVar30[9] = auVar28[9] & ~auVar31[9];
        auVar30[10] = auVar28[10] & ~auVar31[10];
        auVar30[0xb] = auVar28[0xb] & ~auVar31[0xb];
        auVar30[0xc] = auVar28[0xc] & ~auVar31[0xc];
        auVar30[0xd] = auVar28[0xd] & ~auVar31[0xd];
        auVar30[0xe] = auVar28[0xe] & ~auVar31[0xe];
        auVar30[0xf] = auVar28[0xf] & ~auVar31[0xf];
        auVar33._0_8_ =
             CONCAT17(auVar34[7] & ~auVar35[7],
                      CONCAT16(auVar34[6] & ~auVar35[6],
                               CONCAT15(auVar34[5] & ~auVar35[5],
                                        CONCAT14(auVar34[4] & ~auVar35[4],
                                                 CONCAT13(auVar34[3] & ~auVar35[3],
                                                          CONCAT12(auVar34[2] & ~auVar35[2],
                                                                   CONCAT11(auVar34[1] & ~auVar35[1]
                                                                            ,auVar34[0] &
                                                                             ~auVar35[0])))))));
        auVar33[8] = auVar34[8] & ~auVar35[8];
        auVar33[9] = auVar34[9] & ~auVar35[9];
        auVar33[10] = auVar34[10] & ~auVar35[10];
        auVar33[0xb] = auVar34[0xb] & ~auVar35[0xb];
        auVar33[0xc] = auVar34[0xc] & ~auVar35[0xc];
        auVar33[0xd] = auVar34[0xd] & ~auVar35[0xd];
        auVar33[0xe] = auVar34[0xe] & ~auVar35[0xe];
        auVar33[0xf] = auVar34[0xf] & ~auVar35[0xf];
        puVar18[-1] = auVar30._8_8_;
        puVar18[-2] = auVar30._0_8_;
        puVar18[1] = auVar33._8_8_;
        *puVar18 = auVar33._0_8_;
        puVar18 = puVar18 + 4;
      } while (uVar22 != 0);
      if (uVar17 == uVar16) goto LAB_004aee50;
    }
    lVar21 = lVar19 * 4 + param_2 * 4;
    param_3 = (lVar19 + param_2) - param_3;
    pfVar11 = (float *)(lVar2 + lVar21);
    pfVar14 = (float *)(lVar1 + lVar21);
    do {
      fVar26 = fVar24 + fVar23 * *pfVar14;
      fVar27 = 1.0;
      if (fVar26 == 1.0 || fVar26 < 1.0 != NAN(fVar26)) {
        fVar27 = fVar26;
      }
      fVar26 = 0.0;
      if (0.0 <= fVar27) {
        fVar26 = fVar27;
      }
      bVar10 = param_3 != -1;
      param_3 = param_3 + 1;
      *pfVar11 = fVar26;
      pfVar11 = pfVar11 + 1;
      pfVar14 = pfVar14 + 1;
    } while (bVar10);
  }
LAB_004aee50:
  if (*(long *)(lVar3 + 0x28) == lVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aee70  FUN_004aee70 =====

undefined1  [16] FUN_004aee70(void)

{
  return ZEXT816(0x3f000000);
}


// ===== 004aee78  FUN_004aee78 =====

void FUN_004aee78(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1f98;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = lVar3;
  return;
}


// ===== 004aeebc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004aeec0  FUN_004aeec0 =====

void FUN_004aeec0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  byte local_a0 [16];
  void *local_90;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  FUN_0058d0b4(param_1 + 1,param_2);
  puVar3 = PTR_DAT_007a2018;
  param_1[4] = 0;
  puVar2 = PTR_DAT_007a1fb0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = (long)(puVar2 + 0x10);
  param_1[3] = 0;
  lVar4 = FUN_0059488c(param_2);
  local_a0[0] = 10;
  local_a0[1] = 0x61;
  local_a0[2] = 0x6c;
  local_a0[3] = 0x70;
  local_a0[4] = 0x68;
  local_a0[5] = 0x61;
  local_a0[6] = 0;
                    /* try { // try from 004aef54 to 004aef67 has its CatchHandler @ 004af0a8 */
  FUN_004b0f40(&local_50,local_a0,lVar4 + 0x140,param_1 + 5);
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  if (local_50 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
                    /* try { // try from 004aefa8 to 004aefc7 has its CatchHandler @ 004af088 */
    FUN_00645c3c(0,&local_50,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                 ,"ElementWiseKernel",0x56);
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004aefd4 to 004aefdb has its CatchHandler @ 004af078 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004aefdc to 004aeffb has its CatchHandler @ 004af068 */
    FUN_0047488c(local_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                 ,0x56,
                 "onnxruntime::ElementWiseKernel<onnxruntime::functors::LeakyRelu<float>>::ElementWiseKernel(const OpKernelInfo &) [F = onnxruntime::functors::LeakyRelu<float>]"
                 ,auStack_b8);
    FUN_00486664(auStack_d0,&local_50);
    FUN_004792b8(uVar5,local_a0,auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004af028 to 004af03f has its CatchHandler @ 004af040 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af10c  FUN_004af10c =====

void FUN_004af10c(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004af130  FUN_004af130 =====

void FUN_004af130(undefined8 *param_1)

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


// ===== 004af170  FUN_004af170 =====

void FUN_004af170(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0 [4];
  long *local_90;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_004ae6a8(param_3,0);
  uVar5 = FUN_0058d3bc(param_3,0,lVar4 + 0x18);
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = FUN_005cabcc(lVar4 + 0x18);
  if (lVar6 != 0) {
    if (lVar6 == 0x7fffffffffffffff) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004af2cc to 004af2d3 has its CatchHandler @ 004af380 */
      FUN_00645c30(&local_d0);
                    /* try { // try from 004af2d4 to 004af2f3 has its CatchHandler @ 004af370 */
      FUN_0047488c(local_b0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                   ,0x61,
                   "virtual Status onnxruntime::ElementWiseKernel<onnxruntime::functors::LeakyRelu<float>>::Compute(OpKernelContext *) const [F = onnxruntime::functors::LeakyRelu<float>]"
                   ,&local_d0);
      FUN_00476720(auStack_e8);
                    /* try { // try from 004af300 to 004af343 has its CatchHandler @ 004af344 */
      FUN_00474a40(uVar5,local_b0,"input_size < std::numeric_limits<std::ptrdiff_t>::max()",
                   auStack_e8);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004af3e4;
    }
    uVar11 = *(undefined4 *)(param_2 + 0x28);
    lVar4 = FUN_004ae878(lVar4);
    lVar7 = FUN_004aea28(uVar5);
    auVar10 = NEON_fmov(0x4010000000000000,8);
    local_c0 = 0x4039000000000000;
    uStack_c8 = auVar10._8_8_;
    local_d0 = auVar10._0_8_;
                    /* try { // try from 004af218 to 004af21f has its CatchHandler @ 004af3c8 */
    local_90 = (long *)FUN_00759c3c(0x28);
    puVar3 = PTR_DAT_007a2020;
    puVar2 = PTR_DAT_007a1fb0;
    local_90[2] = lVar4;
    local_90[3] = lVar7;
    *(undefined4 *)(local_90 + 4) = uVar11;
    *local_90 = (long)(puVar3 + 0x10);
    local_90[1] = (long)(puVar2 + 0x10);
                    /* try { // try from 004af248 to 004af25f has its CatchHandler @ 004af390 */
    FUN_0063c634(uVar9,lVar6,&local_d0,local_b0);
    if (local_90 == local_b0) {
      lVar4 = 0x20;
      plVar8 = local_b0;
    }
    else {
      if (local_90 == (long *)0x0) goto LAB_004af28c;
      lVar4 = 0x28;
      plVar8 = local_90;
    }
    (**(code **)(*plVar8 + lVar4))();
  }
LAB_004af28c:
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_004af3e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af3e8  FUN_004af3e8 =====

void FUN_004af3e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [12];
  bool bVar11;
  float *pfVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [12];
  undefined8 *puVar17;
  ulong uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar14 = param_3 - param_2;
  if (0 < (long)uVar14) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar19 = *(float *)(param_1 + 0x18);
    uVar15 = 0;
    if ((7 < uVar14) && (0x1f < (ulong)(lVar3 - lVar2))) {
      auVar20 = NEON_fmov(0x3f800000,4);
      uVar15 = uVar14 & 0x7ffffffffffffff8;
      lVar1 = param_2 * 4 + 0x10;
      pauVar16 = (undefined1 (*) [12])(lVar2 + lVar1);
      puVar17 = (undefined8 *)(lVar3 + lVar1);
      uVar18 = uVar15;
      do {
        pauVar9 = pauVar16 + -2;
        pauVar10 = pauVar16 + -1;
        fVar22 = (float)((ulong)*(undefined8 *)(*pauVar10 + 4) >> 0x20);
        uVar4 = *(undefined8 *)*(undefined1 (*) [12])(*pauVar9 + 8);
        uVar7 = *(undefined8 *)(*pauVar16 + 8);
        fVar21 = (float)((ulong)uVar7 >> 0x20);
        uVar6 = *(undefined8 *)*pauVar16;
        auVar8 = *pauVar16;
        uVar18 = uVar18 - 8;
        pauVar16 = (undefined1 (*) [12])(pauVar16[2] + 8);
        auVar25._12_4_ = fVar22;
        auVar25._0_12_ = *(undefined1 (*) [12])(*pauVar9 + 8);
        auVar23 = NEON_fcmge(auVar25,0,4);
        auVar5._12_4_ = fVar21;
        auVar5._0_12_ = auVar8;
        auVar25 = NEON_fcmge(auVar5,0,4);
        auVar24._4_4_ = fVar19;
        auVar24._0_4_ = fVar19;
        auVar24._8_4_ = fVar19;
        auVar24._12_4_ = fVar19;
        auVar24 = NEON_bsl(auVar23,auVar20,auVar24,1);
        auVar23._4_4_ = fVar19;
        auVar23._0_4_ = fVar19;
        auVar23._8_4_ = fVar19;
        auVar23._12_4_ = fVar19;
        auVar23 = NEON_bsl(auVar25,auVar20,auVar23,1);
        puVar17[-1] = CONCAT44(fVar22 * auVar24._12_4_,
                               (float)*(undefined8 *)(*pauVar10 + 4) * auVar24._8_4_);
        puVar17[-2] = CONCAT44((float)((ulong)uVar4 >> 0x20) * auVar24._4_4_,
                               (float)uVar4 * auVar24._0_4_);
        puVar17[1] = CONCAT44(fVar21 * auVar23._12_4_,(float)uVar7 * auVar23._8_4_);
        *puVar17 = CONCAT44((float)((ulong)uVar6 >> 0x20) * auVar23._4_4_,
                            (float)uVar6 * auVar23._0_4_);
        puVar17 = puVar17 + 4;
      } while (uVar18 != 0);
      if (uVar14 == uVar15) {
        return;
      }
    }
    lVar1 = uVar15 * 4 + param_2 * 4;
    param_3 = (uVar15 + param_2) - param_3;
    pfVar12 = (float *)(lVar3 + lVar1);
    pfVar13 = (float *)(lVar2 + lVar1);
    do {
      fVar21 = *pfVar13;
      fVar22 = fVar19;
      if (fVar21 < 0.0 == NAN(fVar21)) {
        fVar22 = 1.0;
      }
      bVar11 = param_3 != -1;
      param_3 = param_3 + 1;
      *pfVar12 = fVar21 * fVar22;
      pfVar12 = pfVar12 + 1;
      pfVar13 = pfVar13 + 1;
    } while (bVar11);
  }
  return;
}


// ===== 004af4a8  FUN_004af4a8 =====

undefined1  [16] FUN_004af4a8(void)

{
  return ZEXT816(0x41c80000);
}


// ===== 004af4b0  FUN_004af4b0 =====

void FUN_004af4b0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1fb0;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 3) = uVar4;
  return;
}


// ===== 004af4f4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004af4f8  FUN_004af4f8 =====

void FUN_004af4f8(void)

{
  return;
}


// ===== 004af4fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004af500  FUN_004af500 =====

void FUN_004af500(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  puVar2 = PTR_DAT_007a2020;
  puVar1 = PTR_DAT_007a1fb0;
  lVar5 = *(long *)(param_1 + 0x10);
  plVar3[3] = *(long *)(param_1 + 0x18);
  plVar3[2] = lVar5;
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 4) = uVar4;
  return;
}


// ===== 004af550  FUN_004af550 =====

void FUN_004af550(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_007a2010 + 0x10;
  *param_2 = (long)(PTR_DAT_007a2020 + 0x10);
  param_2[1] = (long)puVar1;
  puVar1 = PTR_DAT_007a1fb0;
  lVar3 = *(long *)(param_1 + 0x10);
  param_2[3] = *(long *)(param_1 + 0x18);
  param_2[2] = lVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}


// ===== 004af590  FUN_004af590 =====

void FUN_004af590(void)

{
  return;
}


// ===== 004af594  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004af598  FUN_004af598 =====

void FUN_004af598(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [12];
  bool bVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [12];
  undefined8 *puVar19;
  ulong uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  lVar12 = *param_2;
  lVar13 = *param_3;
  uVar16 = lVar13 - lVar12;
  if (0 < (long)uVar16) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    fVar21 = *(float *)(param_1 + 0x20);
    uVar17 = 0;
    if ((7 < uVar16) && (0x1f < (ulong)(lVar3 - lVar2))) {
      auVar22 = NEON_fmov(0x3f800000,4);
      uVar17 = uVar16 & 0x7ffffffffffffff8;
      lVar1 = lVar12 * 4 + 0x10;
      pauVar18 = (undefined1 (*) [12])(lVar2 + lVar1);
      puVar19 = (undefined8 *)(lVar3 + lVar1);
      uVar20 = uVar17;
      do {
        pauVar9 = pauVar18 + -2;
        pauVar10 = pauVar18 + -1;
        fVar24 = (float)((ulong)*(undefined8 *)(*pauVar10 + 4) >> 0x20);
        uVar4 = *(undefined8 *)*(undefined1 (*) [12])(*pauVar9 + 8);
        uVar7 = *(undefined8 *)(*pauVar18 + 8);
        fVar23 = (float)((ulong)uVar7 >> 0x20);
        uVar6 = *(undefined8 *)*pauVar18;
        auVar8 = *pauVar18;
        uVar20 = uVar20 - 8;
        pauVar18 = (undefined1 (*) [12])(pauVar18[2] + 8);
        auVar27._12_4_ = fVar24;
        auVar27._0_12_ = *(undefined1 (*) [12])(*pauVar9 + 8);
        auVar25 = NEON_fcmge(auVar27,0,4);
        auVar5._12_4_ = fVar23;
        auVar5._0_12_ = auVar8;
        auVar27 = NEON_fcmge(auVar5,0,4);
        auVar26._4_4_ = fVar21;
        auVar26._0_4_ = fVar21;
        auVar26._8_4_ = fVar21;
        auVar26._12_4_ = fVar21;
        auVar26 = NEON_bsl(auVar25,auVar22,auVar26,1);
        auVar25._4_4_ = fVar21;
        auVar25._0_4_ = fVar21;
        auVar25._8_4_ = fVar21;
        auVar25._12_4_ = fVar21;
        auVar25 = NEON_bsl(auVar27,auVar22,auVar25,1);
        puVar19[-1] = CONCAT44(fVar24 * auVar26._12_4_,
                               (float)*(undefined8 *)(*pauVar10 + 4) * auVar26._8_4_);
        puVar19[-2] = CONCAT44((float)((ulong)uVar4 >> 0x20) * auVar26._4_4_,
                               (float)uVar4 * auVar26._0_4_);
        puVar19[1] = CONCAT44(fVar23 * auVar25._12_4_,(float)uVar7 * auVar25._8_4_);
        *puVar19 = CONCAT44((float)((ulong)uVar6 >> 0x20) * auVar25._4_4_,
                            (float)uVar6 * auVar25._0_4_);
        puVar19 = puVar19 + 4;
      } while (uVar20 != 0);
      if (uVar16 == uVar17) {
        return;
      }
    }
    lVar1 = uVar17 * 4 + lVar12 * 4;
    lVar13 = (uVar17 + lVar12) - lVar13;
    pfVar14 = (float *)(lVar3 + lVar1);
    pfVar15 = (float *)(lVar2 + lVar1);
    do {
      fVar23 = *pfVar15;
      fVar24 = fVar21;
      if (fVar23 < 0.0 == NAN(fVar23)) {
        fVar24 = 1.0;
      }
      bVar11 = lVar13 != -1;
      lVar13 = lVar13 + 1;
      *pfVar14 = fVar23 * fVar24;
      pfVar14 = pfVar14 + 1;
      pfVar15 = pfVar15 + 1;
    } while (bVar11);
  }
  return;
}


// ===== 004af660  FUN_004af660 =====

void FUN_004af660(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004af684  FUN_004af684 =====

void FUN_004af684(undefined8 *param_1)

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


// ===== 004af6c4  FUN_004af6c4 =====

void FUN_004af6c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_004ae6a8(param_3,0);
  uVar3 = FUN_0058d3bc(param_3,0,lVar2 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = FUN_005cabcc(lVar2 + 0x18);
  if (lVar4 != 0) {
    if (lVar4 == 0x7fffffffffffffff) {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004af7f8 to 004af7ff has its CatchHandler @ 004af8ac */
      FUN_00645c30(&local_c0);
                    /* try { // try from 004af800 to 004af81f has its CatchHandler @ 004af89c */
      FUN_0047488c(&local_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                   ,0x61,
                   "virtual Status onnxruntime::ElementWiseKernel<onnxruntime::functors::Relu<float>>::Compute(OpKernelContext *) const [F = onnxruntime::functors::Relu<float>]"
                   ,&local_c0);
      FUN_00476720(auStack_d8);
                    /* try { // try from 004af82c to 004af86f has its CatchHandler @ 004af870 */
      FUN_00474a40(uVar3,&local_a0,"input_size < std::numeric_limits<std::ptrdiff_t>::max()",
                   auStack_d8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004af908;
    }
    uVar5 = FUN_004ae878(lVar2);
    local_88 = FUN_004aea28(uVar3);
    auVar8 = NEON_fmov(0x4010000000000000,8);
    local_b0 = 0x3ff0000000000000;
    local_a0 = PTR_DAT_007a2030 + 0x10;
    uStack_b8 = auVar8._8_8_;
    local_c0 = auVar8._0_8_;
    puStack_98 = PTR_DAT_007a1fa0 + 0x10;
                    /* try { // try from 004af780 to 004af793 has its CatchHandler @ 004af8bc */
    local_90 = uVar5;
    local_80 = &local_a0;
    FUN_0063c634(uVar7,lVar4,&local_c0,&local_a0);
    if (local_80 == &local_a0) {
      lVar2 = 0x20;
      ppuVar6 = &local_a0;
    }
    else {
      if (local_80 == (undefined **)0x0) goto LAB_004af7c0;
      lVar2 = 0x28;
      ppuVar6 = local_80;
    }
    (**(code **)(*ppuVar6 + lVar2))();
  }
LAB_004af7c0:
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004af908:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004af90c  FUN_004af90c =====

void FUN_004af90c(long param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  lVar7 = *(long *)(param_1 + 0x10);
  uVar13 = param_3 - param_2;
  uVar19 = lVar7 + param_2 * 4;
  uVar9 = uVar13;
  if (((uVar19 & 3) == 0) && (uVar9 = (ulong)-((uint)uVar19 >> 2) & 3, (long)uVar13 <= (long)uVar9))
  {
    uVar9 = uVar13;
  }
  uVar12 = uVar13 - uVar9;
  lVar10 = *(long *)(param_1 + 8);
  uVar19 = uVar12 + 3;
  if ((long)uVar9 <= (long)uVar13) {
    uVar19 = uVar12;
  }
  if (0 < (long)uVar9) {
    uVar17 = 0;
    if ((7 < uVar9) && (0x1f < (ulong)(lVar7 - lVar10))) {
      uVar17 = uVar9 & 0x7ffffffffffffff8;
      lVar16 = param_2 * 4 + 0x10;
      pbVar15 = (byte *)(lVar7 + lVar16);
      pauVar14 = (undefined1 (*) [16])(lVar10 + lVar16);
      uVar6 = uVar17;
      do {
        pauVar1 = pauVar14 + -1;
        uVar3 = *(undefined8 *)(pauVar14[-1] + 8);
        bVar21 = (byte)((ulong)uVar3 >> 8);
        bVar22 = (byte)((ulong)uVar3 >> 0x10);
        bVar23 = (byte)((ulong)uVar3 >> 0x18);
        bVar24 = (byte)((ulong)uVar3 >> 0x20);
        bVar25 = (byte)((ulong)uVar3 >> 0x28);
        bVar26 = (byte)((ulong)uVar3 >> 0x30);
        bVar27 = (byte)((ulong)uVar3 >> 0x38);
        uVar2 = *(undefined8 *)*pauVar1;
        auVar29 = *pauVar14;
        uVar6 = uVar6 - 8;
        pauVar14 = pauVar14 + 2;
        auVar28[9] = bVar21;
        auVar28._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar28[10] = bVar22;
        auVar28[0xb] = bVar23;
        auVar28[0xc] = bVar24;
        auVar28[0xd] = bVar25;
        auVar28[0xe] = bVar26;
        auVar28[0xf] = bVar27;
        auVar28 = NEON_fcmlt(auVar28,0,4);
        auVar30 = NEON_fcmlt(auVar29,0,4);
        *(ulong *)(pbVar15 + -8) =
             CONCAT17(bVar27 & ~auVar28[0xf],
                      CONCAT16(bVar26 & ~auVar28[0xe],
                               CONCAT15(bVar25 & ~auVar28[0xd],
                                        CONCAT14(bVar24 & ~auVar28[0xc],
                                                 CONCAT13(bVar23 & ~auVar28[0xb],
                                                          CONCAT12(bVar22 & ~auVar28[10],
                                                                   CONCAT11(bVar21 & ~auVar28[9],
                                                                            (byte)uVar3 &
                                                                            ~auVar28[8])))))));
        *(ulong *)(pbVar15 + -0x10) =
             CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~auVar28[7],
                      CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~auVar28[6],
                               CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~auVar28[5],
                                        CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~auVar28[4],
                                                 CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~auVar28[3]
                                                          ,CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                    ~auVar28[2],
                                                                    CONCAT11((byte)((ulong)uVar2 >>
                                                                                   8) & ~auVar28[1],
                                                                             (byte)uVar2 &
                                                                             ~auVar28[0])))))));
        pbVar15[0x10] = auVar29[8] & ~auVar30[8];
        pbVar15[0x11] = auVar29[9] & ~auVar30[9];
        pbVar15[0x12] = auVar29[10] & ~auVar30[10];
        pbVar15[0x13] = auVar29[0xb] & ~auVar30[0xb];
        pbVar15[0x14] = auVar29[0xc] & ~auVar30[0xc];
        pbVar15[0x15] = auVar29[0xd] & ~auVar30[0xd];
        pbVar15[0x16] = auVar29[0xe] & ~auVar30[0xe];
        pbVar15[0x17] = auVar29[0xf] & ~auVar30[0xf];
        *pbVar15 = auVar29[0] & ~auVar30[0];
        pbVar15[1] = auVar29[1] & ~auVar30[1];
        pbVar15[2] = auVar29[2] & ~auVar30[2];
        pbVar15[3] = auVar29[3] & ~auVar30[3];
        pbVar15[4] = auVar29[4] & ~auVar30[4];
        pbVar15[5] = auVar29[5] & ~auVar30[5];
        pbVar15[6] = auVar29[6] & ~auVar30[6];
        pbVar15[7] = auVar29[7] & ~auVar30[7];
        pbVar15 = pbVar15 + 0x20;
      } while (uVar6 != 0);
      if (uVar9 == uVar17) goto LAB_004af9e0;
    }
    lVar18 = uVar9 - uVar17;
    lVar16 = uVar17 * 4 + param_2 * 4;
    pfVar8 = (float *)(lVar10 + lVar16);
    pfVar11 = (float *)(lVar7 + lVar16);
    do {
      fVar4 = 0.0;
      if (0.0 <= *pfVar8) {
        fVar4 = *pfVar8;
      }
      lVar18 = lVar18 + -1;
      *pfVar11 = fVar4;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar18 != 0);
  }
LAB_004af9e0:
  lVar16 = (uVar19 & 0xfffffffffffffffc) + uVar9;
  if (3 < (long)uVar12) {
    lVar18 = uVar9 * 4 + param_2 * 4;
    pauVar14 = (undefined1 (*) [16])(lVar10 + lVar18);
    puVar20 = (undefined8 *)(lVar7 + lVar18);
    uVar12 = uVar9;
    do {
      uVar12 = uVar12 + 4;
      auVar28 = NEON_fmax(*pauVar14,ZEXT216(0),4);
      puVar20[1] = auVar28._8_8_;
      *puVar20 = auVar28._0_8_;
      pauVar14 = pauVar14 + 1;
      puVar20 = puVar20 + 2;
    } while ((long)uVar12 < lVar16);
  }
  if (lVar16 < (long)uVar13) {
    uVar13 = (param_3 - (uVar19 & 0xfffffffffffffffc)) - (uVar9 + param_2);
    if ((7 < uVar13) && (0x1f < (ulong)(lVar7 - lVar10))) {
      uVar12 = uVar13 & 0xfffffffffffffff8;
      lVar16 = lVar16 + uVar12;
      lVar18 = ((long)uVar19 >> 2) * 0x10 + uVar9 * 4 + param_2 * 4 + 0x10;
      pauVar14 = (undefined1 (*) [16])(lVar10 + lVar18);
      pbVar15 = (byte *)(lVar7 + lVar18);
      uVar19 = uVar12;
      do {
        pauVar1 = pauVar14 + -1;
        uVar3 = *(undefined8 *)(pauVar14[-1] + 8);
        bVar21 = (byte)((ulong)uVar3 >> 8);
        bVar22 = (byte)((ulong)uVar3 >> 0x10);
        bVar23 = (byte)((ulong)uVar3 >> 0x18);
        bVar24 = (byte)((ulong)uVar3 >> 0x20);
        bVar25 = (byte)((ulong)uVar3 >> 0x28);
        bVar26 = (byte)((ulong)uVar3 >> 0x30);
        bVar27 = (byte)((ulong)uVar3 >> 0x38);
        uVar2 = *(undefined8 *)*pauVar1;
        auVar28 = *pauVar14;
        uVar19 = uVar19 - 8;
        pauVar14 = pauVar14 + 2;
        auVar29[9] = bVar21;
        auVar29._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar29[10] = bVar22;
        auVar29[0xb] = bVar23;
        auVar29[0xc] = bVar24;
        auVar29[0xd] = bVar25;
        auVar29[0xe] = bVar26;
        auVar29[0xf] = bVar27;
        auVar29 = NEON_fcmlt(auVar29,0,4);
        auVar30 = NEON_fcmlt(auVar28,0,4);
        *(ulong *)(pbVar15 + -8) =
             CONCAT17(bVar27 & ~auVar29[0xf],
                      CONCAT16(bVar26 & ~auVar29[0xe],
                               CONCAT15(bVar25 & ~auVar29[0xd],
                                        CONCAT14(bVar24 & ~auVar29[0xc],
                                                 CONCAT13(bVar23 & ~auVar29[0xb],
                                                          CONCAT12(bVar22 & ~auVar29[10],
                                                                   CONCAT11(bVar21 & ~auVar29[9],
                                                                            (byte)uVar3 &
                                                                            ~auVar29[8])))))));
        *(ulong *)(pbVar15 + -0x10) =
             CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~auVar29[7],
                      CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~auVar29[6],
                               CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~auVar29[5],
                                        CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~auVar29[4],
                                                 CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~auVar29[3]
                                                          ,CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                    ~auVar29[2],
                                                                    CONCAT11((byte)((ulong)uVar2 >>
                                                                                   8) & ~auVar29[1],
                                                                             (byte)uVar2 &
                                                                             ~auVar29[0])))))));
        pbVar15[0x10] = auVar28[8] & ~auVar30[8];
        pbVar15[0x11] = auVar28[9] & ~auVar30[9];
        pbVar15[0x12] = auVar28[10] & ~auVar30[10];
        pbVar15[0x13] = auVar28[0xb] & ~auVar30[0xb];
        pbVar15[0x14] = auVar28[0xc] & ~auVar30[0xc];
        pbVar15[0x15] = auVar28[0xd] & ~auVar30[0xd];
        pbVar15[0x16] = auVar28[0xe] & ~auVar30[0xe];
        pbVar15[0x17] = auVar28[0xf] & ~auVar30[0xf];
        *pbVar15 = auVar28[0] & ~auVar30[0];
        pbVar15[1] = auVar28[1] & ~auVar30[1];
        pbVar15[2] = auVar28[2] & ~auVar30[2];
        pbVar15[3] = auVar28[3] & ~auVar30[3];
        pbVar15[4] = auVar28[4] & ~auVar30[4];
        pbVar15[5] = auVar28[5] & ~auVar30[5];
        pbVar15[6] = auVar28[6] & ~auVar30[6];
        pbVar15[7] = auVar28[7] & ~auVar30[7];
        pbVar15 = pbVar15 + 0x20;
      } while (uVar19 != 0);
      if (uVar13 == uVar12) {
        return;
      }
    }
    lVar18 = lVar16 * 4 + param_2 * 4;
    param_3 = (lVar16 + param_2) - param_3;
    pfVar8 = (float *)(lVar7 + lVar18);
    pfVar11 = (float *)(lVar10 + lVar18);
    do {
      fVar4 = 0.0;
      if (0.0 <= *pfVar11) {
        fVar4 = *pfVar11;
      }
      bVar5 = param_3 != -1;
      param_3 = param_3 + 1;
      *pfVar8 = fVar4;
      pfVar8 = pfVar8 + 1;
      pfVar11 = pfVar11 + 1;
    } while (bVar5);
  }
  return;
}


// ===== 004afad4  FUN_004afad4 =====

undefined1  [16] FUN_004afad4(void)

{
  return ZEXT816(0x3f800000);
}


// ===== 004afadc  FUN_004afadc =====

void FUN_004afadc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00759c3c(0x18);
  puVar1 = PTR_DAT_007a1fa0;
  lVar3 = *(long *)(param_1 + 8);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 004afb18  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004afb1c  FUN_004afb1c =====

void FUN_004afb1c(void)

{
  return;
}


// ===== 004afb20  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004afb24  FUN_004afb24 =====

void FUN_004afb24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x20);
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a2030 + 0x10;
  puVar2 = PTR_DAT_007a1fa0 + 0x10;
  plVar3[3] = *(long *)(param_1 + 0x18);
  plVar3[2] = lVar4;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar2;
  return;
}


// ===== 004afb6c  FUN_004afb6c =====

void FUN_004afb6c(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_007a2010 + 0x10;
  *param_2 = (long)(PTR_DAT_007a2030 + 0x10);
  param_2[1] = (long)puVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a1fa0 + 0x10;
  param_2[3] = *(long *)(param_1 + 0x18);
  param_2[2] = lVar2;
  param_2[1] = (long)puVar1;
  return;
}


// ===== 004afba4  FUN_004afba4 =====

void FUN_004afba4(void)

{
  return;
}


// ===== 004afba8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004afbac  FUN_004afbac =====

void FUN_004afbac(long param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  byte *pbVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar12 = *param_2;
  lVar13 = *(long *)(param_1 + 0x18);
  lVar14 = *param_3;
  uVar22 = lVar13 + lVar12 * 4;
  uVar18 = lVar14 - lVar12;
  uVar15 = uVar18;
  if (((uVar22 & 3) == 0) &&
     (uVar15 = (ulong)-((uint)uVar22 >> 2) & 3, (long)uVar18 <= (long)uVar15)) {
    uVar15 = uVar18;
  }
  uVar17 = uVar18 - uVar15;
  lVar16 = *(long *)(param_1 + 0x10);
  uVar22 = uVar17 + 3;
  if ((long)uVar15 <= (long)uVar18) {
    uVar22 = uVar17;
  }
  if (0 < (long)uVar15) {
    uVar20 = 0;
    if ((7 < uVar15) && (0x1f < (ulong)(lVar13 - lVar16))) {
      uVar20 = uVar15 & 0x7ffffffffffffff8;
      lVar19 = lVar12 * 4 + 0x10;
      pbVar6 = (byte *)(lVar13 + lVar19);
      pauVar9 = (undefined1 (*) [16])(lVar16 + lVar19);
      uVar11 = uVar20;
      do {
        pauVar1 = pauVar9 + -1;
        uVar3 = *(undefined8 *)(pauVar9[-1] + 8);
        bVar23 = (byte)((ulong)uVar3 >> 8);
        bVar24 = (byte)((ulong)uVar3 >> 0x10);
        bVar25 = (byte)((ulong)uVar3 >> 0x18);
        bVar26 = (byte)((ulong)uVar3 >> 0x20);
        bVar27 = (byte)((ulong)uVar3 >> 0x28);
        bVar28 = (byte)((ulong)uVar3 >> 0x30);
        bVar29 = (byte)((ulong)uVar3 >> 0x38);
        uVar2 = *(undefined8 *)*pauVar1;
        auVar31 = *pauVar9;
        uVar11 = uVar11 - 8;
        pauVar9 = pauVar9 + 2;
        auVar30[9] = bVar23;
        auVar30._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar30[10] = bVar24;
        auVar30[0xb] = bVar25;
        auVar30[0xc] = bVar26;
        auVar30[0xd] = bVar27;
        auVar30[0xe] = bVar28;
        auVar30[0xf] = bVar29;
        auVar30 = NEON_fcmlt(auVar30,0,4);
        auVar32 = NEON_fcmlt(auVar31,0,4);
        *(ulong *)(pbVar6 + -8) =
             CONCAT17(bVar29 & ~auVar30[0xf],
                      CONCAT16(bVar28 & ~auVar30[0xe],
                               CONCAT15(bVar27 & ~auVar30[0xd],
                                        CONCAT14(bVar26 & ~auVar30[0xc],
                                                 CONCAT13(bVar25 & ~auVar30[0xb],
                                                          CONCAT12(bVar24 & ~auVar30[10],
                                                                   CONCAT11(bVar23 & ~auVar30[9],
                                                                            (byte)uVar3 &
                                                                            ~auVar30[8])))))));
        *(ulong *)(pbVar6 + -0x10) =
             CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~auVar30[7],
                      CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~auVar30[6],
                               CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~auVar30[5],
                                        CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~auVar30[4],
                                                 CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~auVar30[3]
                                                          ,CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                    ~auVar30[2],
                                                                    CONCAT11((byte)((ulong)uVar2 >>
                                                                                   8) & ~auVar30[1],
                                                                             (byte)uVar2 &
                                                                             ~auVar30[0])))))));
        pbVar6[0x10] = auVar31[8] & ~auVar32[8];
        pbVar6[0x11] = auVar31[9] & ~auVar32[9];
        pbVar6[0x12] = auVar31[10] & ~auVar32[10];
        pbVar6[0x13] = auVar31[0xb] & ~auVar32[0xb];
        pbVar6[0x14] = auVar31[0xc] & ~auVar32[0xc];
        pbVar6[0x15] = auVar31[0xd] & ~auVar32[0xd];
        pbVar6[0x16] = auVar31[0xe] & ~auVar32[0xe];
        pbVar6[0x17] = auVar31[0xf] & ~auVar32[0xf];
        *pbVar6 = auVar31[0] & ~auVar32[0];
        pbVar6[1] = auVar31[1] & ~auVar32[1];
        pbVar6[2] = auVar31[2] & ~auVar32[2];
        pbVar6[3] = auVar31[3] & ~auVar32[3];
        pbVar6[4] = auVar31[4] & ~auVar32[4];
        pbVar6[5] = auVar31[5] & ~auVar32[5];
        pbVar6[6] = auVar31[6] & ~auVar32[6];
        pbVar6[7] = auVar31[7] & ~auVar32[7];
        pbVar6 = pbVar6 + 0x20;
      } while (uVar11 != 0);
      if (uVar15 == uVar20) goto LAB_004afc88;
    }
    lVar21 = uVar15 - uVar20;
    lVar19 = uVar20 * 4 + lVar12 * 4;
    pfVar7 = (float *)(lVar16 + lVar19);
    pfVar10 = (float *)(lVar13 + lVar19);
    do {
      fVar4 = 0.0;
      if (0.0 <= *pfVar7) {
        fVar4 = *pfVar7;
      }
      lVar21 = lVar21 + -1;
      *pfVar10 = fVar4;
      pfVar7 = pfVar7 + 1;
      pfVar10 = pfVar10 + 1;
    } while (lVar21 != 0);
  }
LAB_004afc88:
  lVar19 = (uVar22 & 0xfffffffffffffffc) + uVar15;
  if (3 < (long)uVar17) {
    lVar21 = uVar15 * 4 + lVar12 * 4;
    puVar8 = (undefined8 *)(lVar13 + lVar21);
    uVar17 = uVar15;
    pauVar9 = (undefined1 (*) [16])(lVar16 + lVar21);
    do {
      uVar17 = uVar17 + 4;
      auVar30 = NEON_fmax(*pauVar9,ZEXT216(0),4);
      puVar8[1] = auVar30._8_8_;
      *puVar8 = auVar30._0_8_;
      puVar8 = puVar8 + 2;
      pauVar9 = pauVar9 + 1;
    } while ((long)uVar17 < lVar19);
  }
  if (lVar19 < (long)uVar18) {
    uVar18 = (lVar14 - (uVar22 & 0xfffffffffffffffc)) - (uVar15 + lVar12);
    if ((7 < uVar18) && (0x1f < (ulong)(lVar13 - lVar16))) {
      uVar17 = uVar18 & 0xfffffffffffffff8;
      lVar19 = lVar19 + uVar17;
      lVar21 = ((long)uVar22 >> 2) * 0x10 + uVar15 * 4 + lVar12 * 4 + 0x10;
      pauVar9 = (undefined1 (*) [16])(lVar16 + lVar21);
      pbVar6 = (byte *)(lVar13 + lVar21);
      uVar22 = uVar17;
      do {
        pauVar1 = pauVar9 + -1;
        uVar3 = *(undefined8 *)(pauVar9[-1] + 8);
        bVar23 = (byte)((ulong)uVar3 >> 8);
        bVar24 = (byte)((ulong)uVar3 >> 0x10);
        bVar25 = (byte)((ulong)uVar3 >> 0x18);
        bVar26 = (byte)((ulong)uVar3 >> 0x20);
        bVar27 = (byte)((ulong)uVar3 >> 0x28);
        bVar28 = (byte)((ulong)uVar3 >> 0x30);
        bVar29 = (byte)((ulong)uVar3 >> 0x38);
        uVar2 = *(undefined8 *)*pauVar1;
        auVar30 = *pauVar9;
        uVar22 = uVar22 - 8;
        pauVar9 = pauVar9 + 2;
        auVar31[9] = bVar23;
        auVar31._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar31[10] = bVar24;
        auVar31[0xb] = bVar25;
        auVar31[0xc] = bVar26;
        auVar31[0xd] = bVar27;
        auVar31[0xe] = bVar28;
        auVar31[0xf] = bVar29;
        auVar31 = NEON_fcmlt(auVar31,0,4);
        auVar32 = NEON_fcmlt(auVar30,0,4);
        *(ulong *)(pbVar6 + -8) =
             CONCAT17(bVar29 & ~auVar31[0xf],
                      CONCAT16(bVar28 & ~auVar31[0xe],
                               CONCAT15(bVar27 & ~auVar31[0xd],
                                        CONCAT14(bVar26 & ~auVar31[0xc],
                                                 CONCAT13(bVar25 & ~auVar31[0xb],
                                                          CONCAT12(bVar24 & ~auVar31[10],
                                                                   CONCAT11(bVar23 & ~auVar31[9],
                                                                            (byte)uVar3 &
                                                                            ~auVar31[8])))))));
        *(ulong *)(pbVar6 + -0x10) =
             CONCAT17((byte)((ulong)uVar2 >> 0x38) & ~auVar31[7],
                      CONCAT16((byte)((ulong)uVar2 >> 0x30) & ~auVar31[6],
                               CONCAT15((byte)((ulong)uVar2 >> 0x28) & ~auVar31[5],
                                        CONCAT14((byte)((ulong)uVar2 >> 0x20) & ~auVar31[4],
                                                 CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~auVar31[3]
                                                          ,CONCAT12((byte)((ulong)uVar2 >> 0x10) &
                                                                    ~auVar31[2],
                                                                    CONCAT11((byte)((ulong)uVar2 >>
                                                                                   8) & ~auVar31[1],
                                                                             (byte)uVar2 &
                                                                             ~auVar31[0])))))));
        pbVar6[0x10] = auVar30[8] & ~auVar32[8];
        pbVar6[0x11] = auVar30[9] & ~auVar32[9];
        pbVar6[0x12] = auVar30[10] & ~auVar32[10];
        pbVar6[0x13] = auVar30[0xb] & ~auVar32[0xb];
        pbVar6[0x14] = auVar30[0xc] & ~auVar32[0xc];
        pbVar6[0x15] = auVar30[0xd] & ~auVar32[0xd];
        pbVar6[0x16] = auVar30[0xe] & ~auVar32[0xe];
        pbVar6[0x17] = auVar30[0xf] & ~auVar32[0xf];
        *pbVar6 = auVar30[0] & ~auVar32[0];
        pbVar6[1] = auVar30[1] & ~auVar32[1];
        pbVar6[2] = auVar30[2] & ~auVar32[2];
        pbVar6[3] = auVar30[3] & ~auVar32[3];
        pbVar6[4] = auVar30[4] & ~auVar32[4];
        pbVar6[5] = auVar30[5] & ~auVar32[5];
        pbVar6[6] = auVar30[6] & ~auVar32[6];
        pbVar6[7] = auVar30[7] & ~auVar32[7];
        pbVar6 = pbVar6 + 0x20;
      } while (uVar22 != 0);
      if (uVar18 == uVar17) {
        return;
      }
    }
    lVar21 = lVar19 * 4 + lVar12 * 4;
    lVar14 = (lVar19 + lVar12) - lVar14;
    pfVar7 = (float *)(lVar13 + lVar21);
    pfVar10 = (float *)(lVar16 + lVar21);
    do {
      fVar4 = 0.0;
      if (0.0 <= *pfVar10) {
        fVar4 = *pfVar10;
      }
      bVar5 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      *pfVar7 = fVar4;
      pfVar7 = pfVar7 + 1;
      pfVar10 = pfVar10 + 1;
    } while (bVar5);
  }
  return;
}


// ===== 004afd7c  FUN_004afd7c =====

long FUN_004afd7c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 0xb) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004afdf0 to 004afdf7 has its CatchHandler @ 004aff08 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004afdf8 to 004afe17 has its CatchHandler @ 004afef8 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = double]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004afe54 to 004afe9b has its CatchHandler @ 004afe9c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004aff2c  FUN_004aff2c =====

long FUN_004aff2c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 0xb) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004affa0 to 004affa7 has its CatchHandler @ 004b00b8 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004affa8 to 004affc7 has its CatchHandler @ 004b00a8 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = double]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b0004 to 004b004b has its CatchHandler @ 004b004c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b00dc  FUN_004b00dc =====

void FUN_004b00dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  *plVar3 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004b0118 to 004b011f has its CatchHandler @ 004b0178 */
  FUN_0058d0b4(plVar3 + 1,param_3);
  puVar2 = PTR_DAT_007a2028;
  plVar3[4] = 0;
  puVar1 = PTR_DAT_007a1fa0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)(puVar1 + 0x10);
  plVar3[3] = 0;
  FUN_0059488c(param_3);
  plVar4 = (long *)*param_4;
  *param_4 = (long)plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b018c  FUN_004b018c =====

void FUN_004b018c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  *plVar3 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004b01c8 to 004b01cf has its CatchHandler @ 004b0228 */
  FUN_0058d0b4(plVar3 + 1,param_3);
  puVar2 = PTR_DAT_007a2028;
  plVar3[4] = 0;
  puVar1 = PTR_DAT_007a1fa0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)(puVar1 + 0x10);
  plVar3[3] = 0;
  FUN_0059488c(param_3);
  plVar4 = (long *)*param_4;
  *param_4 = (long)plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b023c  FUN_004b023c =====

long FUN_004b023c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 6) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004b02b0 to 004b02b7 has its CatchHandler @ 004b03c8 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b02b8 to 004b02d7 has its CatchHandler @ 004b03b8 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = int]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b0314 to 004b035b has its CatchHandler @ 004b035c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b03ec  FUN_004b03ec =====

long FUN_004b03ec(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 6) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004b0460 to 004b0467 has its CatchHandler @ 004b0578 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b0468 to 004b0487 has its CatchHandler @ 004b0568 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = int]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b04c4 to 004b050b has its CatchHandler @ 004b050c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b059c  FUN_004b059c =====

long FUN_004b059c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 10) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004b0610 to 004b0617 has its CatchHandler @ 004b0728 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b0618 to 004b0637 has its CatchHandler @ 004b0718 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = onnxruntime::MLFloat16]",
                 auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b0674 to 004b06bb has its CatchHandler @ 004b06bc */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b074c  FUN_004b074c =====

long FUN_004b074c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 10) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004b07c0 to 004b07c7 has its CatchHandler @ 004b08d8 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b07c8 to 004b07e7 has its CatchHandler @ 004b08c8 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = onnxruntime::MLFloat16]",
                 auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b0824 to 004b086b has its CatchHandler @ 004b086c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b08fc  FUN_004b08fc =====

void FUN_004b08fc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  byte local_a0 [16];
  void *local_90;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  FUN_0058d0b4(param_1 + 1,param_2);
  puVar2 = PTR_DAT_007a2040;
  param_1[4] = 0;
  puVar3 = PTR_DAT_007a2048;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = (long)(puVar3 + 0x10);
  param_1[3] = 0;
  lVar4 = FUN_0059488c(param_2);
  *(undefined4 *)(param_1 + 5) = 2;
  local_a0[0] = 10;
  local_a0[1] = 0x61;
  local_a0[2] = 0x6c;
  local_a0[3] = 0x70;
  local_a0[4] = 0x68;
  local_a0[5] = 0x61;
  local_a0[6] = 0;
                    /* try { // try from 004b0998 to 004b09ab has its CatchHandler @ 004b0aec */
  FUN_004b0f40(&local_50,local_a0,lVar4 + 0x140,(long)param_1 + 0x2c);
  if ((local_a0[0] & 1) != 0) {
    free(local_90);
  }
  if (local_50 == 0) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
  else {
                    /* try { // try from 004b09ec to 004b0a0b has its CatchHandler @ 004b0acc */
    FUN_00645c3c(0,&local_50,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                 ,"ElementWiseKernel",0x56);
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004b0a18 to 004b0a1f has its CatchHandler @ 004b0abc */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b0a20 to 004b0a3f has its CatchHandler @ 004b0aac */
    FUN_0047488c(local_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                 ,0x56,
                 "onnxruntime::ElementWiseKernel<onnxruntime::functors::LeakyRelu<MLFloat16>>::ElementWiseKernel(const OpKernelInfo &) [F = onnxruntime::functors::LeakyRelu<MLFloat16>]"
                 ,auStack_b8);
    FUN_00486664(auStack_d0,&local_50);
    FUN_004792b8(uVar5,local_a0,auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004b0a6c to 004b0a83 has its CatchHandler @ 004b0a84 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b0b50  FUN_004b0b50 =====

void FUN_004b0b50(void)

{
  return;
}


// ===== 004b0b54  FUN_004b0b54 =====

void FUN_004b0b54(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004b0b78  FUN_004b0b78 =====

void FUN_004b0b78(undefined8 *param_1)

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


// ===== 004b0bb8  FUN_004b0bb8 =====

void FUN_004b0bb8(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0 [4];
  long *local_90;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_004ae6a8(param_3,0);
  uVar6 = FUN_0058d3bc(param_3,0,lVar5 + 0x18);
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = FUN_005cabcc(lVar5 + 0x18);
  if (lVar7 != 0) {
    if (lVar7 == 0x7fffffffffffffff) {
      uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 004b0d24 to 004b0d2b has its CatchHandler @ 004b0dd8 */
      FUN_00645c30(&local_d0);
                    /* try { // try from 004b0d2c to 004b0d4b has its CatchHandler @ 004b0dc8 */
      FUN_0047488c(local_b0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                   ,0x61,
                   "virtual Status onnxruntime::ElementWiseKernel<onnxruntime::functors::LeakyRelu<MLFloat16>>::Compute(OpKernelContext *) const [F = onnxruntime::functors::LeakyRelu<MLFloat16>]"
                   ,&local_d0);
      FUN_00476720(auStack_e8);
                    /* try { // try from 004b0d58 to 004b0d9b has its CatchHandler @ 004b0d9c */
      FUN_00474a40(uVar6,local_b0,"input_size < std::numeric_limits<std::ptrdiff_t>::max()",
                   auStack_e8);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b0e3c;
    }
    lVar10 = *(long *)(param_2 + 0x28);
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    lVar5 = FUN_004b059c(lVar5);
    lVar8 = FUN_004b074c(uVar6);
    auVar12 = NEON_fmov(0x4000000000000000,8);
    local_c0 = 0x4000000000000000;
    uStack_c8 = auVar12._8_8_;
    local_d0 = auVar12._0_8_;
                    /* try { // try from 004b0c68 to 004b0c6f has its CatchHandler @ 004b0e20 */
    local_90 = (long *)FUN_00759c3c(0x30);
    puVar4 = PTR_DAT_007a2050;
    puVar3 = PTR_DAT_007a2048;
    local_90[2] = lVar5;
    local_90[3] = lVar8;
    local_90[4] = lVar10;
    *local_90 = (long)(puVar4 + 0x10);
    local_90[1] = (long)(puVar3 + 0x10);
    *(undefined4 *)(local_90 + 5) = uVar1;
                    /* try { // try from 004b0ca4 to 004b0cbb has its CatchHandler @ 004b0de8 */
    FUN_0063c634(uVar11,lVar7,&local_d0,local_b0);
    if (local_90 == local_b0) {
      lVar5 = 0x20;
      plVar9 = local_b0;
    }
    else {
      if (local_90 == (long *)0x0) goto LAB_004b0ce8;
      lVar5 = 0x28;
      plVar9 = local_90;
    }
    (**(code **)(*plVar9 + lVar5))();
  }
LAB_004b0ce8:
  *param_1 = 0;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_004b0e3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b0e40  FUN_004b0e40 =====

void FUN_004b0e40(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *local_60;
  long lStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  param_3 = param_3 - param_2;
  param_2 = param_2 * 2;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  memcpy((void *)(lVar1 + param_2),(void *)(*(long *)(param_1 + 8) + param_2),param_3 * 2);
  lStack_58 = param_1 + 0x18;
  local_60 = PTR_DAT_007a20a8 + 0x10;
  local_50 = 0;
  FUN_00623764(&local_60,lVar1 + param_2,0,0,1,param_3,param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b0ee8  FUN_004b0ee8 =====

undefined1  [16] FUN_004b0ee8(void)

{
  return ZEXT816(0x40000000);
}


// ===== 004b0ef0  FUN_004b0ef0 =====

void FUN_004b0ef0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  puVar2 = PTR_DAT_007a2048;
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  plVar3[2] = *(long *)(param_1 + 0x10);
  plVar3[1] = lVar5;
  plVar3[3] = lVar4;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 4) = uVar1;
  return;
}


// ===== 004b0f3c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b0f40  FUN_004b0f40 =====

void FUN_004b0f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_60 [16];
  void *local_50;
  char *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_004b1084(param_3,param_2);
  if (lVar2 == 0) {
    local_40 = "No attribute with name:\'";
    local_48 = "\'is defined.";
    FUN_00497130(local_60,&local_40,param_2,&local_48);
                    /* try { // try from 004b0fc4 to 004b0fd7 has its CatchHandler @ 004b1054 */
    FUN_0063aa48(param_1,2,1,local_60);
  }
  else {
    if (*(int *)(lVar2 + 0x124) == 1) {
      uVar3 = *(undefined4 *)(lVar2 + 0x120);
      *param_1 = 0;
      *param_4 = uVar3;
      goto LAB_004b102c;
    }
    local_40 = "Attribute name and type don\'t match for \'";
    local_48 = "\'";
    FUN_00497130(local_60,&local_40,param_2,&local_48);
                    /* try { // try from 004b1008 to 004b101b has its CatchHandler @ 004b1050 */
    FUN_0063aa48(param_1,2,1,local_60);
  }
  if ((local_60[0] & 1) != 0) {
    free(local_50);
  }
LAB_004b102c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b1084  FUN_004b1084 =====

long * FUN_004b1084(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004b10cc to 004b10d3 has its CatchHandler @ 004b12d4 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_004b129c:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (uVar8 == plVar9[1]) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_004b12a0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_004b129c;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar8 == uVar10) {
            bVar4 = *(byte *)(plVar9 + 2);
            sVar2 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar9[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                if (bVar4 < 2) break;
                uVar10 = 0;
                while (*(byte *)((long)plVar9 + uVar10 + 0x11) == pbVar3[uVar10]) {
                  uVar10 = uVar10 + 1;
                  if (bVar4 >> 1 == uVar10) goto LAB_004b12a0;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_004b129c;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_004b12a0:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b12d8  FUN_004b12d8 =====

void FUN_004b12d8(void)

{
  return;
}


// ===== 004b12dc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b12e0  FUN_004b12e0 =====

void FUN_004b12e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)FUN_00759c3c(0x30);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_DAT_007a2050 + 0x10;
  puVar2 = PTR_DAT_007a2048 + 0x10;
  plVar4[3] = *(long *)(param_1 + 0x18);
  plVar4[2] = lVar6;
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)puVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  plVar4[4] = lVar5;
  *(undefined4 *)(plVar4 + 5) = uVar3;
  return;
}


// ===== 004b1338  FUN_004b1338 =====

void FUN_004b1338(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_007a2048;
  puVar1 = PTR_DAT_007a2038 + 0x10;
  *param_2 = (long)(PTR_DAT_007a2050 + 0x10);
  param_2[1] = (long)puVar1;
  lVar4 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  param_2[1] = (long)(puVar2 + 0x10);
  param_2[3] = lVar4;
  param_2[2] = lVar3;
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x28);
  param_2[4] = lVar3;
  return;
}


// ===== 004b1380  FUN_004b1380 =====

void FUN_004b1380(void)

{
  return;
}


// ===== 004b1384  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1388  FUN_004b1388 =====

void FUN_004b1388(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *local_60;
  long lStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *param_3 - *param_2;
  lVar4 = *param_2 * 2;
  lVar1 = *(long *)(param_1 + 0x18);
  memcpy((void *)(lVar1 + lVar4),(void *)(*(long *)(param_1 + 0x10) + lVar4),lVar3 * 2);
  lStack_58 = param_1 + 0x20;
  local_60 = PTR_DAT_007a20a8 + 0x10;
  local_50 = 0;
  FUN_00623764(&local_60,lVar1 + lVar4,0,0,1,lVar3,lVar3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b1438  FUN_004b1438 =====

void FUN_004b1438(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x38);
                    /* try { // try from 004b1460 to 004b1467 has its CatchHandler @ 004b1494 */
  FUN_004b08fc(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b14a8  FUN_004b14a8 =====

void FUN_004b14a8(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  param_3 = param_3 - param_2;
  if (0 < param_3) {
    fVar3 = *(float *)(param_1 + 0x18);
    fVar5 = *(float *)(param_1 + 0x1c);
    pfVar2 = (float *)(*(long *)(param_1 + 8) + param_2 * 4);
    pfVar1 = (float *)(*(long *)(param_1 + 0x10) + param_2 * 4);
    do {
      while (fVar4 = *pfVar2, fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) {
        fVar4 = expf(fVar4);
        param_3 = param_3 + -1;
        pfVar2 = pfVar2 + 1;
        *pfVar1 = fVar5 * fVar3 * (fVar4 + -1.0);
        pfVar1 = pfVar1 + 1;
        if (param_3 == 0) {
          return;
        }
      }
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 1;
      *pfVar1 = fVar5 * fVar4;
      pfVar1 = pfVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 004b1540  FUN_004b1540 =====

undefined1  [16] FUN_004b1540(void)

{
  return ZEXT816(0x40800000);
}


// ===== 004b1548  FUN_004b1548 =====

void FUN_004b1548(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1fe8;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = lVar3;
  return;
}


// ===== 004b158c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1590  FUN_004b1590 =====

void FUN_004b1590(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004b15b4  FUN_004b15b4 =====

void FUN_004b15b4(undefined8 *param_1)

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


// ===== 004b15f4  FUN_004b15f4 =====

void FUN_004b15f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_004ae6a8(param_3,0);
  uVar3 = FUN_0058d3bc(param_3,0,lVar2 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = FUN_005cabcc(lVar2 + 0x18);
  if (lVar4 != 0) {
    if (lVar4 == 0x7fffffffffffffff) {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b1728 to 004b172f has its CatchHandler @ 004b17dc */
      FUN_00645c30(&local_c0);
                    /* try { // try from 004b1730 to 004b174f has its CatchHandler @ 004b17cc */
      FUN_0047488c(&local_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                   ,0x61,
                   "virtual Status onnxruntime::ElementWiseKernel<onnxruntime::functors::Sigmoid<float>>::Compute(OpKernelContext *) const [F = onnxruntime::functors::Sigmoid<float>]"
                   ,&local_c0);
      FUN_00476720(auStack_d8);
                    /* try { // try from 004b175c to 004b179f has its CatchHandler @ 004b17a0 */
      FUN_00474a40(uVar3,&local_a0,"input_size < std::numeric_limits<std::ptrdiff_t>::max()",
                   auStack_d8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b1838;
    }
    uVar5 = FUN_004ae878(lVar2);
    local_88 = FUN_004aea28(uVar3);
    auVar8 = NEON_fmov(0x4010000000000000,8);
    local_b0 = 0x4000000000000000;
    local_a0 = PTR_DAT_007a2060 + 0x10;
    uStack_b8 = auVar8._8_8_;
    local_c0 = auVar8._0_8_;
    puStack_98 = PTR_DAT_007a1fb8 + 0x10;
                    /* try { // try from 004b16b0 to 004b16c3 has its CatchHandler @ 004b17ec */
    local_90 = uVar5;
    local_80 = &local_a0;
    FUN_0063c634(uVar7,lVar4,&local_c0,&local_a0);
    if (local_80 == &local_a0) {
      lVar2 = 0x20;
      ppuVar6 = &local_a0;
    }
    else {
      if (local_80 == (undefined **)0x0) goto LAB_004b16f0;
      lVar2 = 0x28;
      ppuVar6 = local_80;
    }
    (**(code **)(*ppuVar6 + lVar2))();
  }
LAB_004b16f0:
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004b1838:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b183c  FUN_004b183c =====

undefined1  [16] FUN_004b183c(void)

{
  return ZEXT816(0x40000000);
}


// ===== 004b1844  FUN_004b1844 =====

void FUN_004b1844(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00759c3c(0x18);
  puVar1 = PTR_DAT_007a1fb8;
  lVar3 = *(long *)(param_1 + 8);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 004b1880  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1884  FUN_004b1884 =====

void FUN_004b1884(void)

{
  return;
}


// ===== 004b1888  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b188c  FUN_004b188c =====

void FUN_004b188c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x20);
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a2060 + 0x10;
  puVar2 = PTR_DAT_007a1fb8 + 0x10;
  plVar3[3] = *(long *)(param_1 + 0x18);
  plVar3[2] = lVar4;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar2;
  return;
}


// ===== 004b18d4  FUN_004b18d4 =====

void FUN_004b18d4(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_007a2010 + 0x10;
  *param_2 = (long)(PTR_DAT_007a2060 + 0x10);
  param_2[1] = (long)puVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a1fb8 + 0x10;
  param_2[3] = *(long *)(param_1 + 0x18);
  param_2[2] = lVar2;
  param_2[1] = (long)puVar1;
  return;
}


// ===== 004b190c  FUN_004b190c =====

void FUN_004b190c(void)

{
  return;
}


// ===== 004b1910  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1914  FUN_004b1914 =====

void FUN_004b1914(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2 * 4;
  FUN_0060b6b8(*(long *)(param_1 + 0x10) + lVar1,*(long *)(param_1 + 0x18) + lVar1,
               *param_3 - *param_2);
  return;
}


// ===== 004b1934  FUN_004b1934 =====

void FUN_004b1934(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  *plVar3 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004b1970 to 004b1977 has its CatchHandler @ 004b19d0 */
  FUN_0058d0b4(plVar3 + 1,param_3);
  puVar2 = PTR_DAT_007a2058;
  plVar3[4] = 0;
  puVar1 = PTR_DAT_007a1fb8;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)(puVar1 + 0x10);
  plVar3[3] = 0;
  FUN_0059488c(param_3);
  plVar4 = (long *)*param_4;
  *param_4 = (long)plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b19e4  FUN_004b19e4 =====

void FUN_004b19e4(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  param_3 = param_3 - param_2;
  if (0 < param_3) {
    pfVar2 = (float *)(*(long *)(param_1 + 8) + param_2 * 4);
    pfVar1 = (float *)(*(long *)(param_1 + 0x10) + param_2 * 4);
    do {
      while (fVar4 = *pfVar2, fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) {
        fVar4 = expf(fVar4);
        fVar4 = log1pf(fVar4);
        param_3 = param_3 + -1;
        pfVar2 = pfVar2 + 1;
        *pfVar1 = fVar4;
        pfVar1 = pfVar1 + 1;
        if (param_3 == 0) {
          return;
        }
      }
      fVar3 = expf(-fVar4);
      fVar3 = log1pf(fVar3);
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 1;
      *pfVar1 = fVar4 + fVar3;
      pfVar1 = pfVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 004b1a74  FUN_004b1a74 =====

undefined1  [16] FUN_004b1a74(void)

{
  return ZEXT816(0x41700000);
}


// ===== 004b1a7c  FUN_004b1a7c =====

void FUN_004b1a7c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00759c3c(0x18);
  puVar1 = PTR_DAT_007a1fa8;
  lVar3 = *(long *)(param_1 + 8);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 004b1ab8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1abc  FUN_004b1abc =====

void FUN_004b1abc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar12 = param_3 - param_2;
  uVar18 = lVar6 + param_2 * 4;
  uVar8 = uVar12;
  if (((uVar18 & 3) == 0) && (uVar8 = (ulong)-((uint)uVar18 >> 2) & 3, (long)uVar12 <= (long)uVar8))
  {
    uVar8 = uVar12;
  }
  uVar11 = uVar12 - uVar8;
  lVar9 = *(long *)(param_1 + 8);
  uVar18 = uVar11 + 3;
  if ((long)uVar8 <= (long)uVar12) {
    uVar18 = uVar11;
  }
  if (0 < (long)uVar8) {
    uVar16 = 0;
    if ((7 < uVar8) && (0x1f < (ulong)(lVar6 - lVar9))) {
      auVar20 = NEON_fmov(0x3f800000,4);
      uVar16 = uVar8 & 0x7ffffffffffffff8;
      lVar15 = param_2 * 4 + 0x10;
      puVar14 = (undefined8 *)(lVar6 + lVar15);
      puVar13 = (undefined8 *)(lVar9 + lVar15);
      uVar5 = uVar16;
      do {
        puVar1 = puVar13 + -2;
        puVar2 = puVar13 + -1;
        puVar3 = puVar13 + 1;
        uVar29 = *puVar13;
        uVar5 = uVar5 - 8;
        puVar13 = puVar13 + 4;
        fVar24 = (float)*puVar1;
        fVar25 = (float)((ulong)*puVar1 >> 0x20);
        fVar26 = (float)*puVar2;
        fVar27 = (float)((ulong)*puVar2 >> 0x20);
        fVar28 = (float)uVar29;
        fVar30 = (float)((ulong)uVar29 >> 0x20);
        fVar31 = (float)*puVar3;
        fVar32 = (float)((ulong)*puVar3 >> 0x20);
        fVar19 = auVar20._0_4_;
        fVar21 = auVar20._4_4_;
        fVar22 = auVar20._8_4_;
        fVar23 = auVar20._12_4_;
        puVar14[-1] = CONCAT44(fVar27 * (fVar23 / (ABS(fVar27) + fVar23)),
                               fVar26 * (fVar22 / (ABS(fVar26) + fVar22)));
        puVar14[-2] = CONCAT44(fVar25 * (fVar21 / (ABS(fVar25) + fVar21)),
                               fVar24 * (fVar19 / (ABS(fVar24) + fVar19)));
        puVar14[1] = CONCAT44(fVar32 * (fVar23 / (ABS(fVar32) + fVar23)),
                              fVar31 * (fVar22 / (ABS(fVar31) + fVar22)));
        *puVar14 = CONCAT44(fVar30 * (fVar21 / (ABS(fVar30) + fVar21)),
                            fVar28 * (fVar19 / (ABS(fVar28) + fVar19)));
        puVar14 = puVar14 + 4;
      } while (uVar5 != 0);
      if (uVar8 == uVar16) goto LAB_004b1bac;
    }
    lVar17 = uVar8 - uVar16;
    lVar15 = uVar16 * 4 + param_2 * 4;
    pfVar7 = (float *)(lVar9 + lVar15);
    pfVar10 = (float *)(lVar6 + lVar15);
    do {
      lVar17 = lVar17 + -1;
      *pfVar10 = *pfVar7 * (1.0 / (ABS(*pfVar7) + 1.0));
      pfVar7 = pfVar7 + 1;
      pfVar10 = pfVar10 + 1;
    } while (lVar17 != 0);
  }
LAB_004b1bac:
  lVar15 = (uVar18 & 0xfffffffffffffffc) + uVar8;
  if (3 < (long)uVar11) {
    auVar20 = NEON_fmov(0x3f800000,4);
    lVar17 = uVar8 * 4 + param_2 * 4;
    puVar13 = (undefined8 *)(lVar9 + lVar17);
    puVar14 = (undefined8 *)(lVar6 + lVar17);
    uVar11 = uVar8;
    do {
      uVar11 = uVar11 + 4;
      fVar19 = (float)*puVar13;
      fVar21 = (float)((ulong)*puVar13 >> 0x20);
      fVar22 = (float)puVar13[1];
      fVar23 = (float)((ulong)puVar13[1] >> 0x20);
      puVar14[1] = CONCAT44(fVar23 * (auVar20._12_4_ / (ABS(fVar23) + auVar20._12_4_)),
                            fVar22 * (auVar20._8_4_ / (ABS(fVar22) + auVar20._8_4_)));
      *puVar14 = CONCAT44(fVar21 * (auVar20._4_4_ / (ABS(fVar21) + auVar20._4_4_)),
                          fVar19 * (auVar20._0_4_ / (ABS(fVar19) + auVar20._0_4_)));
      puVar13 = puVar13 + 2;
      puVar14 = puVar14 + 2;
    } while ((long)uVar11 < lVar15);
  }
  if (lVar15 < (long)uVar12) {
    uVar12 = (param_3 - (uVar18 & 0xfffffffffffffffc)) - (uVar8 + param_2);
    if ((7 < uVar12) && (0x1f < (ulong)(lVar6 - lVar9))) {
      auVar20 = NEON_fmov(0x3f800000,4);
      uVar11 = uVar12 & 0xfffffffffffffff8;
      lVar15 = lVar15 + uVar11;
      lVar17 = ((long)uVar18 >> 2) * 0x10 + uVar8 * 4 + param_2 * 4 + 0x10;
      puVar13 = (undefined8 *)(lVar9 + lVar17);
      puVar14 = (undefined8 *)(lVar6 + lVar17);
      uVar18 = uVar11;
      do {
        puVar1 = puVar13 + -2;
        puVar2 = puVar13 + -1;
        puVar3 = puVar13 + 1;
        uVar29 = *puVar13;
        uVar18 = uVar18 - 8;
        puVar13 = puVar13 + 4;
        fVar24 = (float)*puVar1;
        fVar25 = (float)((ulong)*puVar1 >> 0x20);
        fVar26 = (float)*puVar2;
        fVar27 = (float)((ulong)*puVar2 >> 0x20);
        fVar28 = (float)uVar29;
        fVar30 = (float)((ulong)uVar29 >> 0x20);
        fVar31 = (float)*puVar3;
        fVar32 = (float)((ulong)*puVar3 >> 0x20);
        fVar19 = auVar20._0_4_;
        fVar21 = auVar20._4_4_;
        fVar22 = auVar20._8_4_;
        fVar23 = auVar20._12_4_;
        puVar14[-1] = CONCAT44(fVar27 * (fVar23 / (ABS(fVar27) + fVar23)),
                               fVar26 * (fVar22 / (ABS(fVar26) + fVar22)));
        puVar14[-2] = CONCAT44(fVar25 * (fVar21 / (ABS(fVar25) + fVar21)),
                               fVar24 * (fVar19 / (ABS(fVar24) + fVar19)));
        puVar14[1] = CONCAT44(fVar32 * (fVar23 / (ABS(fVar32) + fVar23)),
                              fVar31 * (fVar22 / (ABS(fVar31) + fVar22)));
        *puVar14 = CONCAT44(fVar30 * (fVar21 / (ABS(fVar30) + fVar21)),
                            fVar28 * (fVar19 / (ABS(fVar28) + fVar19)));
        puVar14 = puVar14 + 4;
      } while (uVar18 != 0);
      if (uVar12 == uVar11) {
        return;
      }
    }
    lVar17 = lVar15 * 4 + param_2 * 4;
    param_3 = (lVar15 + param_2) - param_3;
    pfVar7 = (float *)(lVar6 + lVar17);
    pfVar10 = (float *)(lVar9 + lVar17);
    do {
      bVar4 = param_3 != -1;
      param_3 = param_3 + 1;
      *pfVar7 = *pfVar10 * (1.0 / (ABS(*pfVar10) + 1.0));
      pfVar7 = pfVar7 + 1;
      pfVar10 = pfVar10 + 1;
    } while (bVar4);
  }
  return;
}


// ===== 004b1cc8  FUN_004b1cc8 =====

undefined1  [16] FUN_004b1cc8(void)

{
  return ZEXT816(0x3f800000);
}


// ===== 004b1cd0  FUN_004b1cd0 =====

void FUN_004b1cd0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00759c3c(0x18);
  puVar1 = PTR_DAT_007a1fc0;
  lVar3 = *(long *)(param_1 + 8);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 004b1d0c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b1d10  FUN_004b1d10 =====

void FUN_004b1d10(long *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004b1d34  FUN_004b1d34 =====

void FUN_004b1d34(undefined8 *param_1)

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


// ===== 004b1d74  FUN_004b1d74 =====

void FUN_004b1d74(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_004ae6a8(param_3,0);
  uVar3 = FUN_0058d3bc(param_3,0,lVar2 + 0x18);
  uVar7 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = FUN_005cabcc(lVar2 + 0x18);
  if (lVar4 != 0) {
    if (lVar4 == 0x7fffffffffffffff) {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b1ea8 to 004b1eaf has its CatchHandler @ 004b1f5c */
      FUN_00645c30(&local_c0);
                    /* try { // try from 004b1eb0 to 004b1ecf has its CatchHandler @ 004b1f4c */
      FUN_0047488c(&local_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/element_wise_ranged_transform.h"
                   ,0x61,
                   "virtual Status onnxruntime::ElementWiseKernel<onnxruntime::functors::Tanh<float>>::Compute(OpKernelContext *) const [F = onnxruntime::functors::Tanh<float>]"
                   ,&local_c0);
      FUN_00476720(auStack_d8);
                    /* try { // try from 004b1edc to 004b1f1f has its CatchHandler @ 004b1f20 */
      FUN_00474a40(uVar3,&local_a0,"input_size < std::numeric_limits<std::ptrdiff_t>::max()",
                   auStack_d8);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b1fb8;
    }
    uVar5 = FUN_004ae878(lVar2);
    local_88 = FUN_004aea28(uVar3);
    auVar8 = NEON_fmov(0x4010000000000000,8);
    local_b0 = 0x3ff0000000000000;
    local_a0 = PTR_DAT_007a2070 + 0x10;
    uStack_b8 = auVar8._8_8_;
    local_c0 = auVar8._0_8_;
    puStack_98 = PTR_DAT_007a1fc8 + 0x10;
                    /* try { // try from 004b1e30 to 004b1e43 has its CatchHandler @ 004b1f6c */
    local_90 = uVar5;
    local_80 = &local_a0;
    FUN_0063c634(uVar7,lVar4,&local_c0,&local_a0);
    if (local_80 == &local_a0) {
      lVar2 = 0x20;
      ppuVar6 = &local_a0;
    }
    else {
      if (local_80 == (undefined **)0x0) goto LAB_004b1e70;
      lVar2 = 0x28;
      ppuVar6 = local_80;
    }
    (**(code **)(*ppuVar6 + lVar2))();
  }
LAB_004b1e70:
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004b1fb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b1fbc  FUN_004b1fbc =====

undefined1  [16] FUN_004b1fbc(void)

{
  return ZEXT816(0x3f800000);
}


// ===== 004b1fc4  FUN_004b1fc4 =====

void FUN_004b1fc4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00759c3c(0x18);
  puVar1 = PTR_DAT_007a1fc8;
  lVar3 = *(long *)(param_1 + 8);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


// ===== 004b2000  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2004  FUN_004b2004 =====

void FUN_004b2004(void)

{
  return;
}


// ===== 004b2008  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b200c  FUN_004b200c =====

void FUN_004b200c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x20);
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a2070 + 0x10;
  puVar2 = PTR_DAT_007a1fc8 + 0x10;
  plVar3[3] = *(long *)(param_1 + 0x18);
  plVar3[2] = lVar4;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar2;
  return;
}


// ===== 004b2054  FUN_004b2054 =====

void FUN_004b2054(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_007a2010 + 0x10;
  *param_2 = (long)(PTR_DAT_007a2070 + 0x10);
  param_2[1] = (long)puVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  puVar1 = PTR_DAT_007a1fc8 + 0x10;
  param_2[3] = *(long *)(param_1 + 0x18);
  param_2[2] = lVar2;
  param_2[1] = (long)puVar1;
  return;
}


// ===== 004b208c  FUN_004b208c =====

void FUN_004b208c(void)

{
  return;
}


// ===== 004b2090  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2094  FUN_004b2094 =====

void FUN_004b2094(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_2 * 4;
  FUN_0060b8b0(*(long *)(param_1 + 0x10) + lVar1,*(long *)(param_1 + 0x18) + lVar1,
               *param_3 - *param_2);
  return;
}


// ===== 004b20b4  FUN_004b20b4 =====

void FUN_004b20b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_109;
  long *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  long *plStack_f0;
  long local_e8 [2];
  long local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_b8 [16];
  long local_a8;
  long local_98;
  undefined4 local_90;
  undefined4 local_7c;
  long local_58;
  long local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  puStack_100 = auStack_b8;
  local_d8 = param_3 - param_2;
  local_28 = *(long *)(lVar1 + 0x28);
  local_7c = *(undefined4 *)(param_1 + 0x18);
  local_90 = 0;
  local_e8[0] = *(long *)(param_1 + 0x10) + param_2 * 4;
  local_a8 = *(long *)(param_1 + 8) + param_2 * 4;
  local_38 = 0x3f800000;
  local_108 = local_e8;
  plStack_f0 = &local_d0;
  local_f8 = &uStack_109;
  local_30 = 0;
  local_d0 = local_e8[0];
  lStack_c8 = local_d8;
  local_98 = local_d8;
  local_58 = local_a8;
  local_48 = local_d8;
  local_40 = local_7c;
  FUN_004b21b0(&local_108);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b2160  FUN_004b2160 =====

undefined1  [16] FUN_004b2160(void)

{
  return ZEXT816(0x3f800000);
}


// ===== 004b2168  FUN_004b2168 =====

void FUN_004b2168(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1fe0;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 3) = uVar4;
  return;
}


// ===== 004b21ac  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b21b0  FUN_004b21b0 =====

void FUN_004b21b0(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float __x;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float __x_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined4 uVar42;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  int iVar50;
  int iVar52;
  int iVar53;
  undefined1 auVar51 [16];
  int iVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  uVar17 = *(ulong *)param_1[3];
  uVar1 = ((ulong *)param_1[3])[1];
  uVar9 = uVar1;
  if (((uVar17 & 3) == 0) && (uVar9 = (ulong)-((uint)uVar17 >> 2) & 3, (long)uVar1 <= (long)uVar9))
  {
    uVar9 = uVar1;
  }
  uVar25 = uVar1 - uVar9;
  uVar17 = uVar25 + 3;
  if ((long)uVar9 <= (long)uVar1) {
    uVar17 = uVar25;
  }
  if (0 < (long)uVar9) {
    lVar16 = param_1[1];
    pfVar15 = *(float **)*param_1;
    pauVar13 = *(undefined1 (**) [16])(lVar16 + 0x10);
    pauVar14 = *(undefined1 (**) [16])(lVar16 + 0x60);
    if (uVar9 < 4) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      pauVar26 = (undefined1 (*) [16])(pfVar15 + uVar9);
      if (((pauVar26 <= pauVar13 || *pauVar13 + uVar9 * 4 <= pfVar15) &&
          ((float *)(lVar16 + 0x8cU) <= pfVar15 || pauVar26 <= (undefined1 (*) [16])(lVar16 + 0x28U)
          )) && (*pauVar14 + uVar9 * 4 <= pfVar15 || pauVar26 <= pauVar14)) {
        fVar36 = *(float *)(lVar16 + 0x3c);
        uVar21 = uVar9 & 0x7ffffffffffffffc;
        fVar35 = *(float *)(lVar16 + 0x80);
        uVar42 = *(undefined4 *)(lVar16 + 0x88);
        uVar20 = uVar21;
        pfVar19 = pfVar15;
        pauVar26 = pauVar13;
        pauVar27 = pauVar14;
        do {
          fVar28 = *(float *)(*pauVar27 + 8);
          fVar30 = *(float *)(*pauVar27 + 0xc);
          auVar43._4_4_ = fVar36;
          auVar43._0_4_ = fVar36;
          auVar43._8_4_ = uStack_b8;
          auVar37._4_4_ = fVar36;
          auVar37._0_4_ = fVar36;
          auVar37._8_4_ = uStack_b8;
          auVar37._12_4_ = uStack_b4;
          auVar37 = NEON_fcmgt(auVar37,*pauVar26,4);
          auVar43._12_4_ = uStack_b4;
          auVar37 = NEON_bit(*pauVar26,auVar43,auVar37,1);
          fVar29 = expf(*(float *)(*pauVar27 + 4) / fVar35);
          fVar41 = expf(__x);
          fVar28 = expf(fVar28 / fStack_d8);
          fVar30 = expf(fVar30 / fStack_d4);
          uVar20 = uVar20 - 4;
          auVar6._4_4_ = uVar42;
          auVar6._0_4_ = uVar42;
          auVar6._8_4_ = uStack_f8;
          auVar51._4_4_ = uVar42;
          auVar51._0_4_ = uVar42;
          auVar51._8_4_ = uStack_f8;
          auVar32._0_4_ = fVar36 * (fVar41 - fVar35);
          auVar32._4_4_ = fVar36 * (fVar29 - fVar35);
          auVar32._8_4_ = fStack_c8 * (fVar28 - fStack_e8);
          auVar32._12_4_ = fStack_c4 * (fVar30 - fStack_e4);
          auVar51._12_4_ = uStack_f4;
          auVar43 = NEON_fcmgt(auVar32,auVar51,4);
          auVar6._12_4_ = uStack_f4;
          auVar43 = NEON_bit(auVar32,auVar6,auVar43,1);
          local_b0 = auVar37._0_4_;
          fStack_ac = auVar37._4_4_;
          fStack_a8 = auVar37._8_4_;
          fStack_a4 = auVar37._12_4_;
          pfVar19[4] = fStack_a8 + auVar43._8_4_;
          pfVar19[5] = fStack_a4 + auVar43._12_4_;
          *pfVar19 = local_b0 + auVar43._0_4_;
          pfVar19[1] = fStack_ac + auVar43._4_4_;
          pfVar19 = pfVar19 + 4;
          pauVar26 = pauVar26 + 1;
          pauVar27 = pauVar27 + 1;
        } while (uVar20 != 0);
        if (uVar9 == uVar21) goto LAB_004b2294;
      }
    }
    lVar18 = uVar9 - uVar21;
    pfVar15 = pfVar15 + uVar21;
    pfVar19 = (float *)(*pauVar14 + uVar21 * 4);
    pfVar22 = (float *)(*pauVar13 + uVar21 * 4);
    do {
      fVar35 = *(float *)(lVar16 + 0x3c);
      fVar36 = *(float *)(lVar16 + 0x28);
      if (*(float *)(lVar16 + 0x28) <= *pfVar22) {
        fVar36 = *pfVar22;
      }
      fVar28 = expf(*pfVar19 / *(float *)(lVar16 + 0x78));
      fVar35 = fVar35 * (fVar28 - *(float *)(lVar16 + 0x80));
      fVar28 = *(float *)(lVar16 + 0x88);
      if (fVar35 <= *(float *)(lVar16 + 0x88)) {
        fVar28 = fVar35;
      }
      lVar18 = lVar18 + -1;
      *pfVar15 = fVar36 + fVar28;
      pfVar15 = pfVar15 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar22 = pfVar22 + 1;
    } while (lVar18 != 0);
  }
LAB_004b2294:
  lVar16 = (uVar17 & 0xfffffffffffffffc) + uVar9;
  if (3 < (long)uVar25) {
    auVar31._8_4_ = 0x42b1722d;
    auVar31._0_8_ = 0x42b1722d42b1722d;
    auVar31._12_4_ = 0x42b1722d;
    auVar34._8_4_ = 0xc2b1722d;
    auVar34._0_8_ = 0xc2b1722dc2b1722d;
    auVar34._12_4_ = 0xc2b1722d;
    auVar37 = NEON_fmov(0x3f800000,4);
    lVar18 = uVar9 << 2;
    uVar25 = uVar9;
    do {
      lVar11 = param_1[1];
      uVar25 = uVar25 + 4;
      pfVar15 = (float *)(*(long *)(lVar11 + 0x60) + lVar18);
      fVar36 = (float)*(undefined8 *)(lVar11 + 0x78);
      fVar29 = (float)*(undefined8 *)(lVar11 + 0x80);
      auVar38._0_4_ = *pfVar15 / fVar36;
      auVar38._4_4_ = pfVar15[1] / fVar36;
      auVar38._8_4_ = pfVar15[2] / fVar36;
      auVar38._12_4_ = pfVar15[3] / fVar36;
      auVar43 = NEON_fmin(auVar38,auVar31,4);
      auVar43 = NEON_fmax(auVar43,auVar34,4);
      auVar49._0_4_ = (float)(int)(auVar43._0_4_ * 1.442695 + 0.5);
      auVar49._4_4_ = (float)(int)(auVar43._4_4_ * 1.442695 + 0.5);
      auVar49._8_4_ = (float)(int)(auVar43._8_4_ * 1.442695 + 0.5);
      auVar49._12_4_ = (float)(int)(auVar43._12_4_ * 1.442695 + 0.5);
      auVar7._8_4_ = 0xc38b0000;
      auVar7._0_8_ = 0xc38b0000c38b0000;
      auVar7._12_4_ = 0xc38b0000;
      auVar51 = NEON_fmax(auVar49,auVar7,4);
      fVar41 = auVar43._0_4_ + auVar49._0_4_ * -0.6933594 + auVar49._0_4_ * 0.00021219444;
      fVar46 = auVar43._4_4_ + auVar49._4_4_ * -0.6933594 + auVar49._4_4_ * 0.00021219444;
      fVar47 = auVar43._8_4_ + auVar49._8_4_ * -0.6933594 + auVar49._8_4_ * 0.00021219444;
      fVar48 = auVar43._12_4_ + auVar49._12_4_ * -0.6933594 + auVar49._12_4_ * 0.00021219444;
      auVar8._8_4_ = 0x438b0000;
      auVar8._0_8_ = 0x438b0000438b0000;
      auVar8._12_4_ = 0x438b0000;
      auVar43 = NEON_fmin(auVar51,auVar8,4);
      iVar50 = (int)auVar43._0_4_ >> 2;
      iVar52 = (int)auVar43._4_4_ >> 2;
      iVar53 = (int)auVar43._8_4_ >> 2;
      iVar54 = (int)auVar43._12_4_ >> 2;
      fVar36 = auVar37._0_4_;
      fVar35 = auVar37._4_4_;
      fVar28 = auVar37._8_4_;
      fVar30 = auVar37._12_4_;
      fVar55 = (float)(iVar50 * 0x800000 + (int)fVar36);
      fVar56 = (float)(iVar52 * 0x800000 + (int)fVar35);
      fVar57 = (float)(iVar53 * 0x800000 + (int)fVar28);
      fVar58 = (float)(iVar54 * 0x800000 + (int)fVar30);
      auVar44._0_4_ =
           (fVar41 + fVar36 +
           fVar41 * fVar41 *
           (fVar41 * (fVar41 * 0.041665796 + 0.16666666) + 0.5 +
           fVar41 * fVar41 * fVar41 *
           (fVar41 * (fVar41 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar55 * fVar55 *
           fVar55 * (float)(((int)auVar43._0_4_ + iVar50 * 0x1fd) * 0x800000 + (int)fVar36);
      auVar44._4_4_ =
           (fVar46 + fVar35 +
           fVar46 * fVar46 *
           (fVar46 * (fVar46 * 0.041665796 + 0.16666666) + 0.5 +
           fVar46 * fVar46 * fVar46 *
           (fVar46 * (fVar46 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar56 * fVar56 *
           fVar56 * (float)(((int)auVar43._4_4_ + iVar52 * 0x1fd) * 0x800000 + (int)fVar35);
      auVar44._8_4_ =
           (fVar47 + fVar28 +
           fVar47 * fVar47 *
           (fVar47 * (fVar47 * 0.041665796 + 0.16666666) + 0.5 +
           fVar47 * fVar47 * fVar47 *
           (fVar47 * (fVar47 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar57 * fVar57 *
           fVar57 * (float)(((int)auVar43._8_4_ + iVar53 * 0x1fd) * 0x800000 + (int)fVar28);
      auVar44._12_4_ =
           (fVar48 + fVar30 +
           fVar48 * fVar48 *
           (fVar48 * (fVar48 * 0.041665796 + 0.16666666) + 0.5 +
           fVar48 * fVar48 * fVar48 *
           (fVar48 * (fVar48 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar58 * fVar58 *
           fVar58 * (float)(((int)auVar43._12_4_ + iVar54 * 0x1fd) * 0x800000 + (int)fVar30);
      auVar43 = NEON_fmax(auVar44,auVar38,4);
      fVar36 = *(float *)(lVar11 + 0x3c);
      auVar39._0_4_ = (auVar43._0_4_ - fVar29) * fVar36;
      auVar39._4_4_ = (auVar43._4_4_ - fVar29) * fVar36;
      auVar39._8_4_ = (auVar43._8_4_ - fVar29) * fVar36;
      auVar39._12_4_ = (auVar43._12_4_ - fVar29) * fVar36;
      uVar42 = (undefined4)*(undefined8 *)(lVar11 + 0x28);
      auVar40._4_4_ = uVar42;
      auVar40._0_4_ = uVar42;
      auVar40._8_4_ = uVar42;
      auVar40._12_4_ = uVar42;
      uVar42 = (undefined4)*(undefined8 *)(lVar11 + 0x88);
      auVar45._4_4_ = uVar42;
      auVar45._0_4_ = uVar42;
      auVar45._8_4_ = uVar42;
      auVar45._12_4_ = uVar42;
      auVar51 = NEON_fmax(*(undefined1 (*) [16])(*(long *)(lVar11 + 0x10) + lVar18),auVar40,4);
      auVar43 = NEON_fmin(auVar39,auVar45,4);
      pfVar15 = (float *)(*(long *)*param_1 + lVar18);
      pfVar15[4] = auVar51._8_4_ + auVar43._8_4_;
      pfVar15[5] = auVar51._12_4_ + auVar43._12_4_;
      *pfVar15 = auVar51._0_4_ + auVar43._0_4_;
      pfVar15[1] = auVar51._4_4_ + auVar43._4_4_;
      lVar18 = lVar18 + 0x10;
    } while ((long)uVar25 < lVar16);
  }
  if (lVar16 < (long)uVar1) {
    lVar18 = param_1[1];
    uVar25 = uVar1 - (uVar9 + (uVar17 & 0xfffffffffffffffc));
    lVar11 = *(long *)*param_1;
    lVar23 = *(long *)(lVar18 + 0x10);
    lVar24 = *(long *)(lVar18 + 0x60);
    if (3 < uVar25) {
      lVar12 = uVar1 * 4;
      uVar21 = lVar11 + lVar12;
      lVar10 = ((long)uVar17 >> 2) * 0x10 + uVar9 * 4;
      uVar17 = lVar11 + lVar10;
      if (((uVar21 <= (ulong)(lVar23 + lVar10) || (ulong)(lVar23 + lVar12) <= uVar17) &&
          (lVar18 + 0x8cU <= uVar17 || uVar21 <= lVar18 + 0x28U)) &&
         ((ulong)(lVar24 + lVar12) <= uVar17 || uVar21 <= (ulong)(lVar24 + lVar10))) {
        fVar36 = *(float *)(lVar18 + 0x3c);
        uVar9 = uVar25 & 0xfffffffffffffffc;
        lVar16 = lVar16 + uVar9;
        fVar35 = *(float *)(lVar18 + 0x80);
        uVar42 = *(undefined4 *)(lVar18 + 0x88);
        uVar17 = uVar9;
        lVar12 = lVar24 + lVar10;
        pfVar15 = (float *)(lVar11 + lVar10);
        pauVar13 = (undefined1 (*) [16])(lVar23 + lVar10);
        do {
          fVar28 = *(float *)(lVar12 + 8);
          fVar30 = *(float *)(lVar12 + 0xc);
          auVar3._4_4_ = fVar36;
          auVar3._0_4_ = fVar36;
          auVar3._8_4_ = uStack_b8;
          auVar2._4_4_ = fVar36;
          auVar2._0_4_ = fVar36;
          auVar2._8_4_ = uStack_b8;
          auVar2._12_4_ = uStack_b4;
          auVar37 = NEON_fcmgt(auVar2,*pauVar13,4);
          auVar3._12_4_ = uStack_b4;
          auVar37 = NEON_bit(*pauVar13,auVar3,auVar37,1);
          fVar29 = expf(*(float *)(lVar12 + 4) / fVar35);
          fVar41 = expf(__x_00);
          fVar28 = expf(fVar28 / fStack_d8);
          fVar30 = expf(fVar30 / fStack_d4);
          uVar17 = uVar17 - 4;
          auVar5._4_4_ = uVar42;
          auVar5._0_4_ = uVar42;
          auVar5._8_4_ = uStack_f8;
          auVar4._4_4_ = uVar42;
          auVar4._0_4_ = uVar42;
          auVar4._8_4_ = uStack_f8;
          auVar33._0_4_ = fVar36 * (fVar41 - fVar35);
          auVar33._4_4_ = fVar36 * (fVar29 - fVar35);
          auVar33._8_4_ = fStack_c8 * (fVar28 - fStack_e8);
          auVar33._12_4_ = fStack_c4 * (fVar30 - fStack_e4);
          auVar4._12_4_ = uStack_f4;
          auVar43 = NEON_fcmgt(auVar33,auVar4,4);
          auVar5._12_4_ = uStack_f4;
          auVar43 = NEON_bit(auVar33,auVar5,auVar43,1);
          local_b0 = auVar37._0_4_;
          fStack_ac = auVar37._4_4_;
          fStack_a8 = auVar37._8_4_;
          fStack_a4 = auVar37._12_4_;
          pfVar15[4] = fStack_a8 + auVar43._8_4_;
          pfVar15[5] = fStack_a4 + auVar43._12_4_;
          *pfVar15 = local_b0 + auVar43._0_4_;
          pfVar15[1] = fStack_ac + auVar43._4_4_;
          lVar12 = lVar12 + 0x10;
          pfVar15 = pfVar15 + 4;
          pauVar13 = pauVar13 + 1;
        } while (uVar17 != 0);
        if (uVar25 == uVar9) {
          return;
        }
      }
    }
    lVar10 = lVar16 * 4;
    lVar16 = uVar1 - lVar16;
    pfVar15 = (float *)(lVar24 + lVar10);
    pfVar19 = (float *)(lVar23 + lVar10);
    pfVar22 = (float *)(lVar11 + lVar10);
    do {
      fVar35 = *(float *)(lVar18 + 0x3c);
      fVar36 = *(float *)(lVar18 + 0x28);
      if (*(float *)(lVar18 + 0x28) <= *pfVar19) {
        fVar36 = *pfVar19;
      }
      fVar28 = expf(*pfVar15 / *(float *)(lVar18 + 0x78));
      fVar35 = fVar35 * (fVar28 - *(float *)(lVar18 + 0x80));
      fVar28 = *(float *)(lVar18 + 0x88);
      if (fVar35 <= *(float *)(lVar18 + 0x88)) {
        fVar28 = fVar35;
      }
      lVar16 = lVar16 + -1;
      *pfVar22 = fVar36 + fVar28;
      pfVar15 = pfVar15 + 1;
      pfVar19 = pfVar19 + 1;
      pfVar22 = pfVar22 + 1;
    } while (lVar16 != 0);
  }
  return;
}


// ===== 004b2780  FUN_004b2780 =====

void FUN_004b2780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00759c3c(0x28);
  *plVar3 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004b27bc to 004b27c3 has its CatchHandler @ 004b281c */
  FUN_0058d0b4(plVar3 + 1,param_3);
  puVar2 = PTR_DAT_007a2068;
  plVar3[4] = 0;
  puVar1 = PTR_DAT_007a1fc8;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[2] = (long)(puVar1 + 0x10);
  plVar3[3] = 0;
  FUN_0059488c(param_3);
  plVar4 = (long *)*param_4;
  *param_4 = (long)plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b2830  FUN_004b2830 =====

void FUN_004b2830(long param_1,long param_2,long param_3)

{
  unkbyte9 *pVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte9 Var12;
  bool bVar13;
  undefined4 *puVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  unkbyte9 *pVar19;
  ulong uVar20;
  float fVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = param_3 - param_2;
  if (0 < (long)uVar16) {
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    fVar21 = *(float *)(param_1 + 0x18);
    uVar17 = 0;
    if ((7 < uVar16) && (0x1f < (ulong)(lVar4 - lVar3))) {
      uVar17 = uVar16 & 0x7ffffffffffffff8;
      lVar2 = param_2 * 4 + 0x10;
      puVar18 = (undefined8 *)(lVar4 + lVar2);
      pVar19 = (unkbyte9 *)(lVar3 + lVar2);
      uVar20 = uVar17;
      do {
        pVar1 = pVar19 + -1;
        uVar8 = *(undefined8 *)((long)pVar19 + -8);
        bVar26 = (byte)((ulong)uVar8 >> 8);
        bVar27 = (byte)((ulong)uVar8 >> 0x10);
        bVar28 = (byte)((ulong)uVar8 >> 0x18);
        bVar29 = (byte)((ulong)uVar8 >> 0x20);
        bVar30 = (byte)((ulong)uVar8 >> 0x28);
        bVar31 = (byte)((ulong)uVar8 >> 0x30);
        bVar32 = (byte)((ulong)uVar8 >> 0x38);
        uVar7 = *(undefined8 *)pVar1;
        uVar11 = *(undefined8 *)((long)pVar19 + 8);
        bVar33 = (byte)((ulong)uVar11 >> 8);
        bVar34 = (byte)((ulong)uVar11 >> 0x10);
        bVar35 = (byte)((ulong)uVar11 >> 0x18);
        bVar36 = (byte)((ulong)uVar11 >> 0x20);
        bVar37 = (byte)((ulong)uVar11 >> 0x28);
        bVar38 = (byte)((ulong)uVar11 >> 0x30);
        bVar39 = (byte)((ulong)uVar11 >> 0x38);
        uVar10 = *(undefined8 *)pVar19;
        Var12 = *pVar19;
        uVar20 = uVar20 - 8;
        pVar19 = pVar19 + 2;
        auVar40._4_4_ = fVar21;
        auVar40._0_4_ = fVar21;
        auVar40._8_4_ = fVar21;
        auVar40._12_4_ = fVar21;
        auVar5[9] = bVar26;
        auVar5._0_9_ = *pVar1;
        auVar5[10] = bVar27;
        auVar5[0xb] = bVar28;
        auVar5[0xc] = bVar29;
        auVar5[0xd] = bVar30;
        auVar5[0xe] = bVar31;
        auVar5[0xf] = bVar32;
        auVar40 = NEON_fcmgt(auVar5,auVar40,4);
        auVar41._4_4_ = fVar21;
        auVar41._0_4_ = fVar21;
        auVar41._8_4_ = fVar21;
        auVar41._12_4_ = fVar21;
        auVar9[9] = bVar33;
        auVar9._0_9_ = Var12;
        auVar9[10] = bVar34;
        auVar9[0xb] = bVar35;
        auVar9[0xc] = bVar36;
        auVar9[0xd] = bVar37;
        auVar9[0xe] = bVar38;
        auVar9[0xf] = bVar39;
        auVar41 = NEON_fcmgt(auVar9,auVar41,4);
        puVar18[-1] = CONCAT17(bVar32 & auVar40[0xf],
                               CONCAT16(bVar31 & auVar40[0xe],
                                        CONCAT15(bVar30 & auVar40[0xd],
                                                 CONCAT14(bVar29 & auVar40[0xc],
                                                          CONCAT13(bVar28 & auVar40[0xb],
                                                                   CONCAT12(bVar27 & auVar40[10],
                                                                            CONCAT11(bVar26 & 
                                                  auVar40[9],(byte)uVar8 & auVar40[8])))))));
        puVar18[-2] = CONCAT17((byte)((ulong)uVar7 >> 0x38) & auVar40[7],
                               CONCAT16((byte)((ulong)uVar7 >> 0x30) & auVar40[6],
                                        CONCAT15((byte)((ulong)uVar7 >> 0x28) & auVar40[5],
                                                 CONCAT14((byte)((ulong)uVar7 >> 0x20) & auVar40[4],
                                                          CONCAT13((byte)((ulong)uVar7 >> 0x18) &
                                                                   auVar40[3],
                                                                   CONCAT12((byte)((ulong)uVar7 >>
                                                                                  0x10) & auVar40[2]
                                                                            ,CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) & auVar40[1],(byte)uVar7 & auVar40[0])
                                                  ))))));
        puVar18[1] = CONCAT17(bVar39 & auVar41[0xf],
                              CONCAT16(bVar38 & auVar41[0xe],
                                       CONCAT15(bVar37 & auVar41[0xd],
                                                CONCAT14(bVar36 & auVar41[0xc],
                                                         CONCAT13(bVar35 & auVar41[0xb],
                                                                  CONCAT12(bVar34 & auVar41[10],
                                                                           CONCAT11(bVar33 & auVar41
                                                  [9],(byte)uVar11 & auVar41[8])))))));
        *puVar18 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & auVar41[7],
                            CONCAT16((byte)((ulong)uVar10 >> 0x30) & auVar41[6],
                                     CONCAT15((byte)((ulong)uVar10 >> 0x28) & auVar41[5],
                                              CONCAT14((byte)((ulong)uVar10 >> 0x20) & auVar41[4],
                                                       CONCAT13((byte)((ulong)uVar10 >> 0x18) &
                                                                auVar41[3],
                                                                CONCAT12((byte)((ulong)uVar10 >>
                                                                               0x10) & auVar41[2],
                                                                         CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) & auVar41[1],
                                                  (byte)uVar10 & auVar41[0])))))));
        puVar18 = puVar18 + 4;
      } while (uVar20 != 0);
      if (uVar16 == uVar17) {
        return;
      }
    }
    lVar2 = uVar17 * 4 + param_2 * 4;
    param_3 = (uVar17 + param_2) - param_3;
    puVar14 = (undefined4 *)(lVar4 + lVar2);
    pfVar15 = (float *)(lVar3 + lVar2);
    do {
      fVar6 = *pfVar15;
      uVar22 = SUB41(fVar6,0);
      uVar23 = (undefined1)((uint)fVar6 >> 8);
      uVar24 = (undefined1)((uint)fVar6 >> 0x10);
      uVar25 = (undefined1)((uint)fVar6 >> 0x18);
      if (fVar6 <= fVar21) {
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        uVar25 = 0;
      }
      bVar13 = param_3 != -1;
      param_3 = param_3 + 1;
      *puVar14 = CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22)));
      puVar14 = puVar14 + 1;
      pfVar15 = pfVar15 + 1;
    } while (bVar13);
  }
  return;
}


// ===== 004b28e0  FUN_004b28e0 =====

undefined1  [16] FUN_004b28e0(void)

{
  return ZEXT816(0x3f800000);
}


// ===== 004b28e8  FUN_004b28e8 =====

void FUN_004b28e8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1fd0;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar3;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 3) = uVar4;
  return;
}


// ===== 004b292c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2930  FUN_004b2930 =====

void FUN_004b2930(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 004b2958 to 004b295f has its CatchHandler @ 004b298c */
  FUN_004aeec0(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b29a0  FUN_004b29a0 =====

void FUN_004b29a0(void)

{
  return;
}


// ===== 004b29a4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b29a8  FUN_004b29a8 =====

void FUN_004b29a8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00790e08;
  puVar1[1] = uVar2;
  return;
}


// ===== 004b29e0  FUN_004b29e0 =====

void FUN_004b29e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00790e08;
  param_2[1] = uVar1;
  return;
}


// ===== 004b29f8  FUN_004b29f8 =====

void FUN_004b29f8(void)

{
  return;
}


// ===== 004b29fc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2a00  FUN_004b2a00 =====

void FUN_004b2a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x004b2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  return;
}


// ===== 004b2a14  FUN_004b2a14 =====

void FUN_004b2a14(long param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_3 = param_3 - param_2;
  if (0 < param_3) {
    fVar5 = *(float *)(param_1 + 0x18);
    fVar6 = *(float *)(param_1 + 0x1c);
    pfVar2 = (float *)(*(long *)(param_1 + 8) + param_2 * 4);
    pfVar1 = (float *)(*(long *)(param_1 + 0x10) + param_2 * 4);
    do {
      while( true ) {
        fVar4 = fVar6 * *pfVar2;
        if (fVar4 != 0.0 && fVar4 < 0.0 == NAN(fVar4)) break;
        fVar4 = expf(fVar4);
        fVar4 = logf(fVar4 + 1.0);
        param_3 = param_3 + -1;
        pfVar2 = pfVar2 + 1;
        *pfVar1 = fVar5 * fVar4;
        pfVar1 = pfVar1 + 1;
        if (param_3 == 0) {
          return;
        }
      }
      fVar3 = expf(-(*pfVar2 * fVar6));
      fVar3 = logf(fVar3 + 1.0);
      param_3 = param_3 + -1;
      pfVar2 = pfVar2 + 1;
      *pfVar1 = fVar5 * (fVar4 + fVar3);
      pfVar1 = pfVar1 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 004b2ac8  FUN_004b2ac8 =====

undefined1  [16] FUN_004b2ac8(void)

{
  return ZEXT816(0x41700000);
}


// ===== 004b2ad0  FUN_004b2ad0 =====

void FUN_004b2ad0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1ff0;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = lVar3;
  return;
}


// ===== 004b2b14  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2b18  FUN_004b2b18 =====

void FUN_004b2b18(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uStack_b9;
  long *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  long *local_a0;
  long alStack_98 [2];
  long local_88;
  long local_80;
  long lStack_78;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  long local_48;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  puStack_b0 = auStack_68;
  local_28 = *(long *)(lVar1 + 0x28);
  local_88 = param_3 - param_2;
  local_64 = *(undefined4 *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(param_1 + 0x1c);
  alStack_98[0] = *(long *)(param_1 + 0x10) + param_2 * 4;
  local_48 = *(long *)(param_1 + 8) + param_2 * 4;
  local_b8 = alStack_98;
  local_a8 = &uStack_b9;
  local_a0 = &local_80;
  local_80 = alStack_98[0];
  lStack_78 = local_88;
  local_38 = local_88;
  FUN_004b2c00(&local_b8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b2bac  FUN_004b2bac =====

undefined1  [16] FUN_004b2bac(void)

{
  return ZEXT816(0x40a00000);
}


// ===== 004b2bb4  FUN_004b2bb4 =====

void FUN_004b2bb4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00759c3c(0x20);
  puVar1 = PTR_DAT_007a1ff8;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  plVar2[2] = *(long *)(param_1 + 0x10);
  plVar2[1] = lVar4;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = lVar3;
  return;
}


// ===== 004b2bf8  FUN_004b2bf8 =====

void FUN_004b2bf8(void)

{
  return;
}


// ===== 004b2bfc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b2c00  FUN_004b2c00 =====

void FUN_004b2c00(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar48 [16];
  
  uVar28 = *(ulong *)param_1[3];
  uVar1 = ((ulong *)param_1[3])[1];
  uVar18 = uVar1;
  if (((uVar28 & 3) == 0) && (uVar18 = (ulong)-((uint)uVar28 >> 2) & 3, (long)uVar1 <= (long)uVar18)
     ) {
    uVar18 = uVar1;
  }
  uVar24 = uVar1 - uVar18;
  uVar28 = uVar24 + 3;
  if ((long)uVar18 <= (long)uVar1) {
    uVar28 = uVar24;
  }
  if (0 < (long)uVar18) {
    lVar19 = param_1[1];
    pfVar20 = *(float **)*param_1;
    pfVar22 = *(float **)(lVar19 + 0x20);
    if (uVar18 < 4) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      if ((pfVar20 + uVar18 <= (float *)(lVar19 + 4U) || (float *)(lVar19 + 0x3cU) <= pfVar20) &&
         (pfVar22 + uVar18 <= pfVar20 || pfVar20 + uVar18 <= pfVar22)) {
        fVar30 = *(float *)(lVar19 + 4);
        fVar29 = *(float *)(lVar19 + 0x38);
        uVar25 = uVar18 & 0x7ffffffffffffffc;
        pfVar15 = pfVar22;
        pfVar16 = pfVar20;
        uVar27 = uVar25;
        do {
          uVar27 = uVar27 - 4;
          auVar39._0_4_ = *pfVar15 * fVar29;
          auVar39._4_4_ = pfVar15[1] * fVar29;
          auVar39._8_4_ = pfVar15[2] * fVar29;
          auVar39._12_4_ = pfVar15[3] * fVar29;
          auVar34._8_4_ = 0x40fcf84f;
          auVar34._0_8_ = 0x40fcf84f40fcf84f;
          auVar34._12_4_ = 0x40fcf84f;
          auVar34 = NEON_fcmgt(auVar39,auVar34,4);
          auVar35._8_4_ = 0x40fcf84f;
          auVar35._0_8_ = 0x40fcf84f40fcf84f;
          auVar35._12_4_ = 0x40fcf84f;
          auVar35 = NEON_bsl(auVar34,auVar35,auVar39,1);
          auVar40._0_4_ = ABS(auVar39._0_4_);
          auVar40._4_4_ = ABS(auVar39._4_4_);
          auVar40._8_4_ = ABS(auVar39._8_4_);
          auVar40._12_4_ = ABS(auVar39._12_4_);
          auVar47._8_4_ = 0xc0fcf84f;
          auVar47._0_8_ = 0xc0fcf84fc0fcf84f;
          auVar47._12_4_ = 0xc0fcf84f;
          auVar47 = NEON_fcmgt(auVar47,auVar35,4);
          auVar11._8_4_ = 0x39d1b717;
          auVar11._0_8_ = 0x39d1b71739d1b717;
          auVar11._12_4_ = 0x39d1b717;
          auVar34 = NEON_fcmgt(auVar11,auVar40,4);
          auVar9._8_4_ = 0xc0fcf84f;
          auVar9._0_8_ = 0xc0fcf84fc0fcf84f;
          auVar9._12_4_ = 0xc0fcf84f;
          auVar35 = NEON_bit(auVar35,auVar9,auVar47,1);
          auVar34 = NEON_fcmeq(auVar34,0,4);
          fVar36 = auVar35._0_4_;
          fVar44 = fVar36 * fVar36;
          fVar33 = auVar35._4_4_;
          fVar45 = fVar33 * fVar33;
          fVar37 = auVar35._8_4_;
          fVar49 = fVar37 * fVar37;
          fVar43 = auVar35._12_4_;
          fVar50 = fVar43 * fVar43;
          auVar46._0_4_ =
               (fVar36 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar44 * (fVar44 * (fVar44 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar46._4_4_ =
               (fVar33 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar45 * (fVar45 * (fVar45 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar46._8_4_ =
               (fVar37 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar49 * (fVar49 * (fVar49 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar46._12_4_ =
               (fVar43 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar50 * (fVar50 * (fVar50 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar34 = NEON_bsl(auVar34,auVar46,auVar35,1);
          pfVar16[4] = fVar30 * auVar34._8_4_;
          pfVar16[5] = fVar30 * auVar34._12_4_;
          *pfVar16 = fVar30 * auVar34._0_4_;
          pfVar16[1] = fVar30 * auVar34._4_4_;
          pfVar15 = pfVar15 + 4;
          pfVar16 = pfVar16 + 4;
        } while (uVar27 != 0);
        if (uVar18 == uVar25) goto LAB_004b2d78;
      }
    }
    uVar14 = DAT_001b71f0;
    uVar13 = DAT_001b71a0;
    uVar12 = DAT_001b7168;
    lVar26 = uVar18 - uVar25;
    pfVar20 = pfVar20 + uVar25;
    pfVar22 = pfVar22 + uVar25;
    do {
      fVar29 = *pfVar22 * *(float *)(lVar19 + 0x38);
      fVar30 = 7.905311;
      if (fVar29 == 7.905311 || fVar29 < 7.905311 != NAN(fVar29)) {
        fVar30 = fVar29;
      }
      fVar36 = -7.905311;
      if (-7.905311 <= fVar30) {
        fVar36 = fVar30;
      }
      fVar33 = fVar36 * fVar36;
      fVar30 = -NAN;
      if (0.0004 <= ABS(fVar29)) {
        fVar30 = 0.0;
      }
      fVar29 = (fVar36 * ((((fVar33 * (fVar33 * (fVar33 * -2.7607684e-16 + 2.000188e-13) +
                                      -8.604672e-11) + 5.1222973e-08) * fVar33 + (float)uVar12) *
                           fVar33 + (float)uVar13) * fVar33 + (float)uVar14)) /
               (((fVar33 * 1.1982584e-06 + (float)((ulong)uVar12 >> 0x20)) * fVar33 +
                (float)((ulong)uVar13 >> 0x20)) * fVar33 + (float)((ulong)uVar14 >> 0x20));
      if (fVar30 != 0.0) {
        fVar29 = fVar36;
      }
      lVar26 = lVar26 + -1;
      *pfVar20 = *(float *)(lVar19 + 4) * fVar29;
      pfVar20 = pfVar20 + 1;
      pfVar22 = pfVar22 + 1;
    } while (lVar26 != 0);
  }
LAB_004b2d78:
  lVar19 = (uVar28 & 0xfffffffffffffffc) + uVar18;
  if (3 < (long)uVar24) {
    lVar26 = uVar18 << 2;
    uVar24 = uVar18;
    do {
      lVar23 = param_1[1];
      uVar24 = uVar24 + 4;
      pfVar20 = (float *)(*(long *)(lVar23 + 0x20) + lVar26);
      fVar30 = (float)*(undefined8 *)(lVar23 + 0x38);
      auVar31._0_4_ = *pfVar20 * fVar30;
      auVar31._4_4_ = pfVar20[1] * fVar30;
      auVar31._8_4_ = pfVar20[2] * fVar30;
      auVar31._12_4_ = pfVar20[3] * fVar30;
      auVar2._8_4_ = 0x40fcf84f;
      auVar2._0_8_ = 0x40fcf84f40fcf84f;
      auVar2._12_4_ = 0x40fcf84f;
      auVar34 = NEON_fmin(auVar31,auVar2,4);
      auVar32._0_4_ = ABS(auVar31._0_4_);
      auVar32._4_4_ = ABS(auVar31._4_4_);
      auVar32._8_4_ = ABS(auVar31._8_4_);
      auVar32._12_4_ = ABS(auVar31._12_4_);
      auVar3._8_4_ = 0xc0fcf84f;
      auVar3._0_8_ = 0xc0fcf84fc0fcf84f;
      auVar3._12_4_ = 0xc0fcf84f;
      auVar35 = NEON_fmax(auVar34,auVar3,4);
      auVar4._8_4_ = 0x39d1b717;
      auVar4._0_8_ = 0x39d1b71739d1b717;
      auVar4._12_4_ = 0x39d1b717;
      auVar34 = NEON_fcmgt(auVar4,auVar32,4);
      fVar30 = auVar35._0_4_;
      fVar37 = fVar30 * fVar30;
      fVar29 = auVar35._4_4_;
      fVar43 = fVar29 * fVar29;
      fVar36 = auVar35._8_4_;
      fVar44 = fVar36 * fVar36;
      fVar33 = auVar35._12_4_;
      fVar45 = fVar33 * fVar33;
      auVar38._0_4_ =
           (fVar30 * ((((((fVar37 * -2.7607684e-16 + 2.000188e-13) * fVar37 + -8.604672e-11) *
                         fVar37 + 5.1222973e-08) * fVar37 + 1.48572235e-05) * fVar37 + 0.00063726195
                      ) * fVar37 + 0.0048935246)) /
           (((fVar37 * 1.1982584e-06 + 0.00011853471) * fVar37 + 0.0022684347) * fVar37 +
           0.004893525);
      auVar38._4_4_ =
           (fVar29 * ((((((fVar43 * -2.7607684e-16 + 2.000188e-13) * fVar43 + -8.604672e-11) *
                         fVar43 + 5.1222973e-08) * fVar43 + 1.48572235e-05) * fVar43 + 0.00063726195
                      ) * fVar43 + 0.0048935246)) /
           (((fVar43 * 1.1982584e-06 + 0.00011853471) * fVar43 + 0.0022684347) * fVar43 +
           0.004893525);
      auVar38._8_4_ =
           (fVar36 * ((((((fVar44 * -2.7607684e-16 + 2.000188e-13) * fVar44 + -8.604672e-11) *
                         fVar44 + 5.1222973e-08) * fVar44 + 1.48572235e-05) * fVar44 + 0.00063726195
                      ) * fVar44 + 0.0048935246)) /
           (((fVar44 * 1.1982584e-06 + 0.00011853471) * fVar44 + 0.0022684347) * fVar44 +
           0.004893525);
      auVar38._12_4_ =
           (fVar33 * ((((((fVar45 * -2.7607684e-16 + 2.000188e-13) * fVar45 + -8.604672e-11) *
                         fVar45 + 5.1222973e-08) * fVar45 + 1.48572235e-05) * fVar45 + 0.00063726195
                      ) * fVar45 + 0.0048935246)) /
           (((fVar45 * 1.1982584e-06 + 0.00011853471) * fVar45 + 0.0022684347) * fVar45 +
           0.004893525);
      auVar34 = NEON_bsl(auVar34,auVar35,auVar38,1);
      fVar30 = *(float *)(lVar23 + 4);
      pfVar20 = (float *)(*(long *)*param_1 + lVar26);
      pfVar20[4] = auVar34._8_4_ * fVar30;
      pfVar20[5] = auVar34._12_4_ * fVar30;
      *pfVar20 = auVar34._0_4_ * fVar30;
      pfVar20[1] = auVar34._4_4_ * fVar30;
      lVar26 = lVar26 + 0x10;
    } while ((long)uVar24 < lVar19);
  }
  if (lVar19 < (long)uVar1) {
    lVar26 = param_1[1];
    uVar24 = uVar1 - (uVar18 + (uVar28 & 0xfffffffffffffffc));
    lVar23 = *(long *)*param_1;
    lVar21 = *(long *)(lVar26 + 0x20);
    if (3 < uVar24) {
      lVar17 = ((long)uVar28 >> 2) * 0x10 + uVar18 * 4;
      uVar28 = lVar23 + uVar1 * 4;
      if ((uVar28 <= lVar26 + 4U || lVar26 + 0x3cU <= (ulong)(lVar23 + lVar17)) &&
         (lVar21 + uVar1 * 4 <= (ulong)(lVar23 + lVar17) || uVar28 <= (ulong)(lVar21 + lVar17))) {
        fVar30 = *(float *)(lVar26 + 4);
        fVar29 = *(float *)(lVar26 + 0x38);
        uVar18 = uVar24 & 0xfffffffffffffffc;
        lVar19 = lVar19 + uVar18;
        pfVar20 = (float *)(lVar21 + lVar17);
        pfVar22 = (float *)(lVar23 + lVar17);
        uVar28 = uVar18;
        do {
          uVar28 = uVar28 - 4;
          auVar41._0_4_ = *pfVar20 * fVar29;
          auVar41._4_4_ = pfVar20[1] * fVar29;
          auVar41._8_4_ = pfVar20[2] * fVar29;
          auVar41._12_4_ = pfVar20[3] * fVar29;
          auVar5._8_4_ = 0x40fcf84f;
          auVar5._0_8_ = 0x40fcf84f40fcf84f;
          auVar5._12_4_ = 0x40fcf84f;
          auVar34 = NEON_fcmgt(auVar41,auVar5,4);
          auVar6._8_4_ = 0x40fcf84f;
          auVar6._0_8_ = 0x40fcf84f40fcf84f;
          auVar6._12_4_ = 0x40fcf84f;
          auVar35 = NEON_bsl(auVar34,auVar6,auVar41,1);
          auVar42._0_4_ = ABS(auVar41._0_4_);
          auVar42._4_4_ = ABS(auVar41._4_4_);
          auVar42._8_4_ = ABS(auVar41._8_4_);
          auVar42._12_4_ = ABS(auVar41._12_4_);
          auVar7._8_4_ = 0xc0fcf84f;
          auVar7._0_8_ = 0xc0fcf84fc0fcf84f;
          auVar7._12_4_ = 0xc0fcf84f;
          auVar47 = NEON_fcmgt(auVar7,auVar35,4);
          auVar10._8_4_ = 0x39d1b717;
          auVar10._0_8_ = 0x39d1b71739d1b717;
          auVar10._12_4_ = 0x39d1b717;
          auVar34 = NEON_fcmgt(auVar10,auVar42,4);
          auVar8._8_4_ = 0xc0fcf84f;
          auVar8._0_8_ = 0xc0fcf84fc0fcf84f;
          auVar8._12_4_ = 0xc0fcf84f;
          auVar35 = NEON_bit(auVar35,auVar8,auVar47,1);
          auVar34 = NEON_fcmeq(auVar34,0,4);
          fVar36 = auVar35._0_4_;
          fVar44 = fVar36 * fVar36;
          fVar33 = auVar35._4_4_;
          fVar45 = fVar33 * fVar33;
          fVar37 = auVar35._8_4_;
          fVar49 = fVar37 * fVar37;
          fVar43 = auVar35._12_4_;
          fVar50 = fVar43 * fVar43;
          auVar48._0_4_ =
               (fVar36 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar44 * (fVar44 * (fVar44 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar48._4_4_ =
               (fVar33 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar45 * (fVar45 * (fVar45 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar48._8_4_ =
               (fVar37 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar49 * (fVar49 * (fVar49 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar48._12_4_ =
               (fVar43 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * -2.7607684e-16
                                                                           + 2.000188e-13) +
                                                                 -8.604672e-11) + 5.1222973e-08) +
                                             1.48572235e-05) + 0.00063726195) + 0.0048935246)) /
               (fVar50 * (fVar50 * (fVar50 * 1.1982584e-06 + 0.00011853471) + 0.0022684347) +
               0.004893525);
          auVar34 = NEON_bsl(auVar34,auVar48,auVar35,1);
          pfVar22[4] = fVar30 * auVar34._8_4_;
          pfVar22[5] = fVar30 * auVar34._12_4_;
          *pfVar22 = fVar30 * auVar34._0_4_;
          pfVar22[1] = fVar30 * auVar34._4_4_;
          pfVar20 = pfVar20 + 4;
          pfVar22 = pfVar22 + 4;
        } while (uVar28 != 0);
        if (uVar24 == uVar18) {
          return;
        }
      }
    }
    uVar14 = DAT_001b71f0;
    uVar13 = DAT_001b71a0;
    uVar12 = DAT_001b7168;
    lVar17 = uVar1 - lVar19;
    pfVar20 = (float *)(lVar21 + lVar19 * 4);
    pfVar22 = (float *)(lVar23 + lVar19 * 4);
    do {
      fVar29 = *pfVar20 * *(float *)(lVar26 + 0x38);
      fVar30 = 7.905311;
      if (fVar29 == 7.905311 || fVar29 < 7.905311 != NAN(fVar29)) {
        fVar30 = fVar29;
      }
      fVar36 = -7.905311;
      if (-7.905311 <= fVar30) {
        fVar36 = fVar30;
      }
      fVar33 = fVar36 * fVar36;
      fVar30 = -NAN;
      if (0.0004 <= ABS(fVar29)) {
        fVar30 = 0.0;
      }
      fVar29 = (fVar36 * ((((fVar33 * (fVar33 * (fVar33 * -2.7607684e-16 + 2.000188e-13) +
                                      -8.604672e-11) + 5.1222973e-08) * fVar33 + (float)uVar12) *
                           fVar33 + (float)uVar13) * fVar33 + (float)uVar14)) /
               (((fVar33 * 1.1982584e-06 + (float)((ulong)uVar12 >> 0x20)) * fVar33 +
                (float)((ulong)uVar13 >> 0x20)) * fVar33 + (float)((ulong)uVar14 >> 0x20));
      if (fVar30 != 0.0) {
        fVar29 = fVar36;
      }
      lVar17 = lVar17 + -1;
      *pfVar22 = *(float *)(lVar26 + 4) * fVar29;
      pfVar20 = pfVar20 + 1;
      pfVar22 = pfVar22 + 1;
    } while (lVar17 != 0);
  }
  return;
}


// ===== 004b335c  FUN_004b335c =====

void FUN_004b335c(undefined8 *param_1)

{
  void *pvVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
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
  uVar3 = DAT_001b7148;
  local_88[0x1e] = 0;
  local_88[0xd] = 0;
  local_88[0xc] = 0;
  local_88[0xf] = 0;
  local_88[0xe] = 0;
  puVar4 = local_88 + 0x18;
  local_88[0x19] = 0;
  *puVar4 = 0;
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
  local_88[3] = uVar3;
  *puVar4 = 0;
  *(undefined1 *)(local_88 + 0x15) = 0;
  local_88[0x14] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0xf] = 0;
  local_88[0x17] = puVar4;
  local_88[0x1c] = 0;
  local_88[0x1b] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = local_88 + 0x1b;
                    /* try { // try from 004b33f8 to 004b3417 has its CatchHandler @ 004b354c */
  uVar3 = FUN_0056d184();
  uVar3 = FUN_00583c90(&local_88,&DAT_001e3857,uVar3);
  puVar4 = (undefined8 *)FUN_00578f7c();
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  __src = (void *)*puVar4;
  __n = puVar4[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004b3540 to 004b3547 has its CatchHandler @ 004b3548 */
        uVar3 = FUN_004b631c(&local_a0);
                    /* catch() { ... } // from try @ 004b3430 with catch @ 004b3548
                       catch() { ... } // from try @ 004b3540 with catch @ 004b3548 */
                    /* catch() { ... } // from try @ 004b3454 with catch @ 004b3554 */
        if (local_a0 != (void *)0x0) {
          local_98 = local_a0;
          free(local_a0);
        }
        FUN_004ada18(&local_88);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_004b358c;
    }
                    /* try { // try from 004b3430 to 004b3437 has its CatchHandler @ 004b3548 */
    local_a0 = (void *)FUN_00759c3c(__n);
    pvVar1 = (void *)((long)local_a0 + __n);
    local_90 = pvVar1;
    memcpy(local_a0,__src,__n);
    local_98 = pvVar1;
  }
                    /* try { // try from 004b3454 to 004b349b has its CatchHandler @ 004b3554 */
  uVar3 = FUN_00583ae0(uVar3,&DAT_001db202,&local_a0);
  uVar3 = FUN_00583770(uVar3,&DAT_001d6c73);
  plVar5 = (long *)FUN_00583890(uVar3,&DAT_001c717f);
  *(undefined8 *)(*plVar5 + 0x18) = DAT_001b7130;
  puVar4 = (undefined8 *)FUN_005839b8(plVar5,"CPUExecutionProvider");
  local_80 = PTR_DAT_007a2000;
  local_60 = &local_80;
  uVar3 = *puVar4;
  *puVar4 = 0;
  local_80 = local_80 + 0x10;
  *param_1 = uVar3;
  pcStack_78 = FUN_004b6298;
  param_1[2] = local_80;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004b6298;
  param_1[8] = 0;
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    free(local_a0);
  }
  puVar4 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar4);
    free(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004b358c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b3590  FUN_004b3590 =====

void FUN_004b3590(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *__dest;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long local_118;
  byte local_110 [16];
  void *local_100;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined8 local_d8;
  long lStack_d0;
  ulong local_90;
  char *local_88;
  char *local_80;
  char *pcStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *param_1 = param_3;
  puVar13 = param_1 + 1;
  *puVar13 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar8 = param_1 + 5;
  *puVar8 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  uVar7 = *(long *)(param_2 + 0xd0) - *(long *)(param_2 + 200);
  *(int *)(param_1 + 4) = (int)(uVar7 >> 3);
  if ((uVar7 & 0x7ffffffff) == 0) {
LAB_004b364c:
    param_1[1] = local_e0;
    param_1[3] = lStack_d0;
    param_1[2] = local_d8;
    piVar9 = (int *)((long)param_1 + 0x24);
    *piVar9 = (int)((ulong)(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) >> 3);
    plVar4 = (long *)FUN_005ee3bc(*param_1);
    lVar1 = *plVar4;
    lVar2 = plVar4[1];
    uVar7 = lVar2 - lVar1 >> 3;
    local_90 = uVar7;
    if (uVar7 != (long)*piVar9) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004b37e0 to 004b37e7 has its CatchHandler @ 004b3940 */
      FUN_00645c30(auStack_f8);
                    /* try { // try from 004b37e8 to 004b3807 has its CatchHandler @ 004b3930 */
      FUN_0047488c(&local_e0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                   ,0x88,
                   "onnxruntime::If::Info::Info(const onnxruntime::Node &, const GraphViewer &)",
                   auStack_f8);
      local_80 = " outputs which doesn\'t match the subgraph\'s ";
      pcStack_78 = "\'If\' node has ";
      local_88 = " outputs.";
      FUN_004b64a4(local_110,&pcStack_78,piVar9,&local_80,&local_90,&local_88);
                    /* try { // try from 004b3848 to 004b388f has its CatchHandler @ 004b38c0 */
      FUN_00474a40(uVar5,&local_e0,"num_subgraph_outputs == static_cast<size_t>(num_outputs)",
                   local_110);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b39c4;
    }
    pvVar10 = (void *)param_1[5];
    if ((ulong)((param_1[7] - (long)pvVar10 >> 3) * -0x5555555555555555) < uVar7) {
      local_118 = lVar3;
      if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_004b38a8;
      lVar12 = param_1[6];
                    /* try { // try from 004b36e0 to 004b36e3 has its CatchHandler @ 004b3964 */
      __dest = (void *)FUN_00759c3c(uVar7 * 0x18);
      memcpy(__dest,pvVar10,lVar12 - (long)pvVar10);
      param_1[5] = __dest;
      param_1[6] = (long)__dest + (lVar12 - (long)pvVar10);
      param_1[7] = (void *)((long)__dest + uVar7 * 0x18);
      if (pvVar10 != (void *)0x0) {
        free(pvVar10);
      }
    }
    if (lVar2 != lVar1) {
      uVar11 = 0;
      do {
        while( true ) {
          pbVar6 = (byte *)FUN_005de650(*(undefined8 *)(*plVar4 + uVar11 * 8));
          puVar13 = (undefined8 *)param_1[6];
          if ((undefined8 *)param_1[7] <= puVar13) break;
          if ((*pbVar6 & 1) == 0) {
            uVar14 = *(undefined8 *)(pbVar6 + 8);
            uVar5 = *(undefined8 *)pbVar6;
            puVar13[2] = *(undefined8 *)(pbVar6 + 0x10);
            puVar13[1] = uVar14;
            *puVar13 = uVar5;
          }
          else {
                    /* try { // try from 004b3780 to 004b3787 has its CatchHandler @ 004b396c */
            FUN_002fb36c(puVar13,*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
          }
          param_1[6] = puVar13 + 3;
          uVar11 = uVar11 + 1;
          param_1[6] = puVar13 + 3;
          if (uVar7 <= uVar11) goto LAB_004b37a0;
        }
                    /* try { // try from 004b3728 to 004b3733 has its CatchHandler @ 004b3990 */
        uVar5 = FUN_0034e788(puVar8,pbVar6);
        uVar11 = uVar11 + 1;
        param_1[6] = uVar5;
      } while (uVar11 < uVar7);
    }
LAB_004b37a0:
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
    goto LAB_004b39c4;
  }
  pvVar10 = (void *)((long)(uVar7 * 0x20000000) >> 0x20);
  if (-1 < (long)pvVar10) {
    lVar1 = ((long)pvVar10 - 1U >> 6) + 1;
                    /* try { // try from 004b361c to 004b3637 has its CatchHandler @ 004b3968 */
    local_e0 = FUN_00759c3c(lVar1 * 8);
    local_d8 = 0;
    lStack_d0 = lVar1;
    FUN_004b6330(&local_e0,pvVar10,1);
    if ((void *)*puVar13 != (void *)0x0) {
      free((void *)*puVar13);
      *puVar13 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    goto LAB_004b364c;
  }
  if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_004b39c4;
                    /* try { // try from 004b38a0 to 004b38a7 has its CatchHandler @ 004b3968 */
  FUN_0032600c(&local_e0);
LAB_004b38a8:
  if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_004b39c4;
                    /* try { // try from 004b38b8 to 004b38bf has its CatchHandler @ 004b3964 */
  uVar5 = FUN_00304228(puVar8);
                    /* catch() { ... } // from try @ 004b3848 with catch @ 004b38c0 */
  if ((local_110[0] & 1) == 0) {
    FUN_00474ee8(&local_e0);
    FUN_00303bdc(auStack_f8);
    if ((int)pvVar10 == 0) goto LAB_004b38e0;
LAB_004b3944:
    FUN_00753b60(param_1);
    FUN_00303bdc(puVar8);
    pvVar10 = (void *)*puVar13;
  }
  else {
    free(local_100);
    FUN_00474ee8(&local_e0);
    FUN_00303bdc(auStack_f8);
    if ((int)pvVar10 != 0) goto LAB_004b3944;
LAB_004b38e0:
    FUN_00303bdc(puVar8);
    pvVar10 = (void *)*puVar13;
  }
  if (pvVar10 == (void *)0x0) {
    if (*(long *)(local_118 + 0x28) == local_70) {
LAB_004b3908:
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar5);
    }
  }
  else {
    free(pvVar10);
    if (*(long *)(local_118 + 0x28) == local_70) goto LAB_004b3908;
  }
LAB_004b39c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b39c8  FUN_004b39c8 =====

void FUN_004b39c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined1 auStack_1b0 [24];
  void *local_198 [3];
  byte local_180;
  undefined7 local_17f;
  char cStack_178;
  undefined3 uStack_177;
  undefined1 local_174;
  void *local_170;
  undefined1 auStack_130 [232];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00655b40(auStack_130,0,0);
  local_180 = 0x16;
  local_17f = (undefined7)s_then_branch_001e3859._0_8_;
  cStack_178 = SUB81(s_then_branch_001e3859._0_8_,7);
  _cStack_178 = CONCAT31(0x68636e,cStack_178);
  local_174 = 0;
                    /* try { // try from 004b3a28 to 004b3a3b has its CatchHandler @ 004b3c80 */
  FUN_005951e0(local_198,param_2,&local_180,auStack_130);
  pvVar2 = local_198[0];
  local_198[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
      free(*(void **)((long)pvVar2 + 0x18));
    }
    free(pvVar2);
  }
  if ((local_180 & 1) != 0) {
    free(local_170);
  }
  if (pvVar2 == (void *)0x0) {
    local_180 = 0x16;
    local_17f = (undefined7)s_else_branch_001df35e._0_8_;
    cStack_178 = SUB81(s_else_branch_001df35e._0_8_,7);
    _cStack_178 = CONCAT31(0x68636e,cStack_178);
    local_174 = 0;
                    /* try { // try from 004b3a9c to 004b3aaf has its CatchHandler @ 004b3c7c */
    FUN_005951e0(local_198,param_2,&local_180,auStack_130);
    pvVar2 = local_198[0];
    local_198[0] = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
        free(*(void **)((long)pvVar2 + 0x18));
      }
      free(pvVar2);
    }
    if ((local_180 & 1) != 0) {
      free(local_170);
    }
    if (pvVar2 == (void *)0x0) {
      FUN_0065612c(auStack_130);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b3bac to 004b3bb3 has its CatchHandler @ 004b3c68 */
      FUN_00645c30(local_198);
                    /* try { // try from 004b3bb4 to 004b3bd3 has its CatchHandler @ 004b3c28 */
      FUN_0047488c(&local_180,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                   ,0xbf,"void onnxruntime::If::Init(const OpKernelInfo &)",local_198);
      FUN_00476720(auStack_1b0);
                    /* try { // try from 004b3be0 to 004b3c23 has its CatchHandler @ 004b3c24 */
      FUN_00474a40(uVar3,&local_180,
                   "info.GetAttr<ONNX_NAMESPACE::GraphProto>(\"else_branch\", &proto).IsOK()",
                   auStack_1b0);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b3b24 to 004b3b2b has its CatchHandler @ 004b3c6c */
    FUN_00645c30(local_198);
                    /* try { // try from 004b3b2c to 004b3b4b has its CatchHandler @ 004b3c58 */
    FUN_0047488c(&local_180,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,0xbe,"void onnxruntime::If::Init(const OpKernelInfo &)",local_198);
    FUN_00476720(auStack_1b0);
                    /* try { // try from 004b3b58 to 004b3b9b has its CatchHandler @ 004b3c2c */
    FUN_00474a40(uVar3,&local_180,
                 "info.GetAttr<ONNX_NAMESPACE::GraphProto>(\"then_branch\", &proto).IsOK()",
                 auStack_1b0);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b3cb8  FUN_004b3cb8 =====

/* WARNING: Removing unreachable block (ram,0x004b3fa0) */

void FUN_004b3cb8(long *param_1,long param_2,undefined8 param_3,byte *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *__src;
  long lVar8;
  long lVar9;
  undefined8 *__dest;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  undefined8 uVar19;
  size_t __n;
  undefined8 uVar20;
  long local_118;
  void *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  bVar4 = *param_4;
  uVar16 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar16 = *(ulong *)(param_4 + 8);
  }
  if (uVar16 == 0xb) {
    pbVar10 = *(byte **)(param_4 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar10 = param_4 + 1;
    }
    lVar14 = 0x18;
    if (*(long *)pbVar10 == 0x6172625f6e656874 && *(long *)(pbVar10 + 3) == 0x68636e6172625f6e) {
      lVar14 = 0x10;
    }
  }
  else {
    lVar14 = 0x18;
  }
  if (*(long *)(param_2 + lVar14) != 0) {
    uVar19 = FUN_00753a74(0x88);
                    /* try { // try from 004b43b4 to 004b43bb has its CatchHandler @ 004b455c */
    FUN_00645c30(&local_d8);
                    /* try { // try from 004b43bc to 004b43db has its CatchHandler @ 004b454c */
    FUN_0047488c(&local_c0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,0xca,
                 "virtual common::Status onnxruntime::If::SetupSubgraphExecutionInfo(const SessionState &, const std::string &, const SessionState &)"
                 ,&local_d8);
                    /* try { // try from 004b43dc to 004b43eb has its CatchHandler @ 004b4500 */
    FUN_00479eac(&local_f0,
                 "SetupSubgraphExecutionInfo should only be called once for each subgraph.");
                    /* try { // try from 004b43f0 to 004b4437 has its CatchHandler @ 004b44bc */
    FUN_00474a40(uVar19,&local_c0,"info == nullptr",&local_f0);
    if (*(long *)(lVar7 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar19,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004b4634;
  }
  lVar8 = FUN_0058d108(param_2);
  lVar9 = FUN_00759c3c(0x40);
                    /* try { // try from 004b3d8c to 004b3d97 has its CatchHandler @ 004b45c0 */
  FUN_004b3590(lVar9,lVar8,param_5 + 0xc0);
  pvVar18 = *(void **)(param_2 + lVar14);
  *(long *)(param_2 + lVar14) = lVar9;
  if (pvVar18 != (void *)0x0) {
    pbVar10 = *(byte **)((long)pvVar18 + 0x28);
    if (pbVar10 != (byte *)0x0) {
      pbVar11 = *(byte **)((long)pvVar18 + 0x30);
      pbVar15 = pbVar10;
      if (pbVar11 != pbVar10) {
        do {
          pbVar15 = pbVar11 + -0x18;
          if ((*pbVar15 & 1) != 0) {
            free(*(void **)(pbVar11 + -8));
          }
          pbVar11 = pbVar15;
        } while (pbVar15 != pbVar10);
        pbVar15 = *(byte **)((long)pvVar18 + 0x28);
      }
      *(byte **)((long)pvVar18 + 0x30) = pbVar10;
      free(pbVar15);
    }
    if (*(void **)((long)pvVar18 + 8) != (void *)0x0) {
      free(*(void **)((long)pvVar18 + 8));
    }
    free(pvVar18);
    lVar9 = *(long *)(param_2 + lVar14);
  }
  iVar5 = *(int *)(lVar9 + 0x20);
  local_c0 = (byte *)0x0;
  local_b8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  if (iVar5 == 0) {
    lVar9 = 0;
  }
  else {
    if (iVar5 < 0) {
      if (*(long *)(lVar7 + 0x28) == local_70) {
                    /* try { // try from 004b4448 to 004b444f has its CatchHandler @ 004b45f4 */
        FUN_00304228(&local_c0);
LAB_004b4450:
        if (*(long *)(local_118 + 0x28) == local_70) {
                    /* try { // try from 004b4464 to 004b4483 has its CatchHandler @ 004b4580 */
          FUN_004b66f4(&local_f0);
LAB_004b446c:
          if (*(long *)(local_118 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
        }
      }
      goto LAB_004b4634;
    }
                    /* try { // try from 004b3e30 to 004b3e33 has its CatchHandler @ 004b45f4 */
    local_c0 = (byte *)FUN_00759c3c((long)iVar5 * 0x18);
    iVar6 = *(int *)(lVar9 + 0x20);
    local_b0 = local_c0 + (long)iVar5 * 0x18;
    local_b8 = local_c0;
    if (iVar6 == 0) {
      lVar9 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar19 = *(undefined8 *)(*(long *)(lVar8 + 200) + uVar16 * 8);
        pbVar15 = (byte *)FUN_005de650(uVar19);
        uVar12 = *(ulong *)(pbVar15 + 8);
        pbVar10 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar10 = pbVar15 + 1;
          uVar12 = (ulong)(*pbVar15 >> 1);
        }
                    /* try { // try from 004b3ec8 to 004b3ed7 has its CatchHandler @ 004b4614 */
        FUN_0049e62c(&local_d8,param_5 + 0x208,pbVar10,uVar12,&local_f0);
        pvVar18 = local_d8;
        local_d8 = (void *)0x0;
        if (pvVar18 == (void *)0x0) {
          pbVar15 = (byte *)FUN_005de650(uVar19);
          pbVar10 = local_b8;
          if (local_b8 < local_b0) {
            if ((*pbVar15 & 1) == 0) {
              uVar20 = *(undefined8 *)(pbVar15 + 8);
              uVar19 = *(undefined8 *)pbVar15;
              *(undefined8 *)(local_b8 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
              *(undefined8 *)(local_b8 + 8) = uVar20;
              *(undefined8 *)local_b8 = uVar19;
              local_b8 = local_b8 + 0x18;
            }
            else {
                    /* try { // try from 004b3f4c to 004b3f53 has its CatchHandler @ 004b45e8 */
              FUN_002fb36c(local_b8,*(undefined8 *)(pbVar15 + 0x10),*(undefined8 *)(pbVar15 + 8));
              local_b8 = pbVar10 + 0x18;
            }
          }
          else {
                    /* try { // try from 004b3f34 to 004b3f3f has its CatchHandler @ 004b4610 */
            local_b8 = (byte *)FUN_0034e788(&local_c0,pbVar15);
          }
        }
        else {
          if ((*(byte *)((long)pvVar18 + 8) & 1) != 0) {
            free(*(void **)((long)pvVar18 + 0x18));
          }
          free(pvVar18);
          lVar9 = *(long *)(param_2 + lVar14);
          *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + -1;
          uVar12 = uVar16 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(*(long *)(lVar9 + 8) + uVar12) =
               *(ulong *)(*(long *)(lVar9 + 8) + uVar12) &
               (1L << (uVar16 & 0x3f) ^ 0xffffffffffffffffU);
        }
        uVar16 = uVar16 + 1;
      } while ((long)iVar6 != uVar16);
      lVar9 = (long)local_b8 - (long)local_c0;
      local_f8 = (void *)0x0;
      if (lVar9 == -0x18) goto LAB_004b43a0;
    }
  }
  local_f8 = (void *)0x0;
  if ((local_c0 == (byte *)0x0) && (local_b8 != (byte *)0x0)) {
LAB_004b43a0:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  lVar1 = *(long *)(*(long *)(param_2 + lVar14) + 0x28);
  lVar2 = *(long *)(*(long *)(param_2 + lVar14) + 0x30);
  lVar13 = lVar2 - lVar1;
  if ((lVar13 == -0x18) || ((lVar1 == 0 && (lVar2 != 0)))) goto LAB_004b43a0;
                    /* try { // try from 004b3fe0 to 004b400f has its CatchHandler @ 004b45fc */
  FUN_00581838(param_1,(lVar9 >> 3) * -0x5555555555555555,local_c0,
               (lVar13 >> 3) * -0x5555555555555555,lVar1,param_5 + 0x208,&local_f8);
  if (*param_1 == 0) {
                    /* try { // try from 004b4040 to 004b404b has its CatchHandler @ 004b45fc */
    FUN_005db05c(param_1,param_5,local_f8);
    if (*param_1 == 0) {
      local_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
      local_c8 = 0;
                    /* try { // try from 004b4080 to 004b4097 has its CatchHandler @ 004b4538 */
      FUN_004b75c0(param_1,param_3,&local_c0,&local_d8,0);
      if (*param_1 == 0) {
        lVar14 = *(long *)(param_2 + lVar14);
        local_f0 = (undefined8 *)0x0;
        local_e8 = (undefined8 *)0x0;
        iVar5 = *(int *)(lVar14 + 0x24);
        local_e0 = (undefined8 *)0x0;
        if (iVar5 != 0) {
          if (iVar5 < 0) {
            if (*(long *)(lVar7 + 0x28) == local_70) {
                    /* try { // try from 004b4498 to 004b449f has its CatchHandler @ 004b44a4 */
              uVar19 = FUN_004b66f4(&local_f0);
                    /* catch() { ... } // from try @ 004b41f0 with catch @ 004b4598 */
                    /* catch() { ... } // from try @ 004b42d8 with catch @ 004b44a0 */
              if (local_f0 != (undefined8 *)0x0) {
                local_e8 = local_f0;
                free(local_f0);
              }
              if (local_d8 != (void *)0x0) {
                local_d0 = local_d8;
                free(local_d8);
              }
              FUN_004b46d0(&local_f8);
              FUN_00303bdc(&local_c0);
              if (*(long *)(lVar7 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00755eac(uVar19);
              }
            }
            goto LAB_004b4634;
          }
                    /* try { // try from 004b4188 to 004b418b has its CatchHandler @ 004b44a4 */
          local_f0 = (undefined8 *)FUN_00759c3c((long)iVar5 << 3);
          uVar3 = *(uint *)(lVar14 + 0x24);
          local_e0 = local_f0 + iVar5;
          local_e8 = local_f0;
          if (0 < (int)uVar3) {
            lVar14 = 0;
            local_e8 = local_f0;
            do {
              pbVar15 = (byte *)FUN_005de650(*(undefined8 *)(*(long *)(lVar8 + 0xb0) + lVar14));
              uVar16 = *(ulong *)(pbVar15 + 8);
              pbVar10 = *(byte **)(pbVar15 + 0x10);
              if ((*pbVar15 & 1) == 0) {
                pbVar10 = pbVar15 + 1;
                uVar16 = (ulong)(*pbVar15 >> 1);
              }
                    /* try { // try from 004b41f0 to 004b41f7 has its CatchHandler @ 004b4598 */
              uVar19 = FUN_005dad20(param_3,pbVar10,uVar16);
              __src = local_f0;
              if (local_e8 < local_e0) {
                puVar17 = local_e8 + 1;
                *local_e8 = uVar19;
              }
              else {
                __n = (long)local_e8 - (long)local_f0;
                lVar9 = (long)__n >> 3;
                uVar16 = lVar9 + 1;
                local_118 = lVar7;
                if (uVar16 >> 0x3d != 0) goto LAB_004b4450;
                uVar12 = (long)local_e0 - (long)local_f0 >> 2;
                if (uVar12 <= uVar16) {
                  uVar12 = uVar16;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_e0 - (long)local_f0)) {
                  uVar12 = 0x1fffffffffffffff;
                }
                if (uVar12 == 0) {
                  __dest = (undefined8 *)0x0;
                }
                else {
                  if (uVar12 >> 0x3d != 0) goto LAB_004b446c;
                    /* try { // try from 004b4250 to 004b4253 has its CatchHandler @ 004b4544 */
                  __dest = (undefined8 *)FUN_00759c3c(uVar12 << 3);
                }
                puVar17 = __dest + lVar9 + 1;
                __dest[lVar9] = uVar19;
                memcpy(__dest,__src,__n);
                local_f0 = __dest;
                local_e0 = __dest + uVar12;
                if (__src != (undefined8 *)0x0) {
                  local_e8 = puVar17;
                  free(__src);
                }
              }
              lVar14 = lVar14 + 8;
              local_e8 = puVar17;
            } while ((ulong)uVar3 * 8 - lVar14 != 0);
          }
        }
        if ((((long)local_d0 - (long)local_d8 == -4) ||
            (((local_d8 == (void *)0x0 && (local_d0 != (void *)0x0)) ||
             ((long)local_e8 - (long)local_f0 == -8)))) ||
           ((local_f0 == (undefined8 *)0x0 && (local_e8 != (undefined8 *)0x0)))) goto LAB_004b43a0;
                    /* try { // try from 004b42d8 to 004b42e3 has its CatchHandler @ 004b44a0 */
        FUN_005db4b8(local_f8,(long)local_d0 - (long)local_d8 >> 2,local_d8,
                     (long)local_e8 - (long)local_f0 >> 3);
        bVar4 = *param_4;
        uVar16 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar16 = *(ulong *)(param_4 + 8);
        }
        if (uVar16 == 0xb) {
          pbVar10 = *(byte **)(param_4 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar10 = param_4 + 1;
          }
          if (*(long *)pbVar10 != 0x6172625f6e656874 || *(long *)(pbVar10 + 3) != 0x68636e6172625f6e
             ) goto LAB_004b4340;
          pvVar18 = *(void **)(param_2 + 0x20);
          *(void **)(param_2 + 0x20) = local_f8;
        }
        else {
LAB_004b4340:
          pvVar18 = *(void **)(param_2 + 0x28);
          *(void **)(param_2 + 0x28) = local_f8;
        }
        local_f8 = (void *)0x0;
        if (pvVar18 != (void *)0x0) {
          local_f8 = (void *)0x0;
          FUN_00493250(pvVar18);
          free(pvVar18);
        }
        *param_1 = 0;
        if (local_f0 != (undefined8 *)0x0) {
          local_e8 = local_f0;
          free(local_f0);
        }
      }
      else {
                    /* try { // try from 004b40a0 to 004b40bf has its CatchHandler @ 004b44a8 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                     ,"SetupSubgraphExecutionInfo",0xe9);
      }
      if (local_d8 != (void *)0x0) {
        local_d0 = local_d8;
        free(local_d8);
      }
    }
    else {
                    /* try { // try from 004b4054 to 004b4073 has its CatchHandler @ 004b4548 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                   ,"SetupSubgraphExecutionInfo",0xe5);
    }
  }
  else {
                    /* try { // try from 004b4018 to 004b4037 has its CatchHandler @ 004b4584 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,"SetupSubgraphExecutionInfo",0xe4);
  }
  pvVar18 = local_f8;
  local_f8 = (void *)0x0;
  if (pvVar18 != (void *)0x0) {
    FUN_00493250(pvVar18);
    free(pvVar18);
  }
  pbVar10 = local_c0;
  pbVar15 = local_b8;
  if (local_c0 != (byte *)0x0) {
    while (pbVar11 = pbVar15, pbVar11 != pbVar10) {
      pbVar15 = pbVar11 + -0x18;
      if ((*pbVar15 & 1) != 0) {
        free(*(void **)(pbVar11 + -8));
      }
    }
    local_b8 = pbVar10;
    free(local_c0);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return;
  }
LAB_004b4634:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b4638  FUN_004b4638 =====

void FUN_004b4638(undefined8 *param_1)

{
  byte *pbVar1;
  void *__ptr;
  byte *pbVar2;
  byte *pbVar3;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  pbVar2 = *(byte **)((long)__ptr + 0x28);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)((long)__ptr + 0x30);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          free(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)((long)__ptr + 0x28);
    }
    *(byte **)((long)__ptr + 0x30) = pbVar2;
    free(pbVar3);
  }
  if (*(void **)((long)__ptr + 8) != (void *)0x0) {
    free(*(void **)((long)__ptr + 8));
  }
  free(__ptr);
  return;
}


// ===== 004b46d0  FUN_004b46d0 =====

void FUN_004b46d0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00493250(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004b470c  FUN_004b470c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b470c(ulong *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *__ptr;
  long *plVar11;
  void *pvVar12;
  undefined8 uVar13;
  byte local_f8;
  undefined7 local_f7;
  undefined4 uStack_f0;
  undefined1 local_ec;
  void *local_e8;
  byte local_d8;
  undefined7 uStack_d7;
  void *local_d0;
  void *local_c8;
  byte *local_c0;
  byte *local_b8;
  void *local_a8;
  char *local_90;
  undefined8 *local_88 [2];
  void *local_78;
  undefined8 *local_70 [2];
  void *local_60;
  char *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(param_2 + 0x28) == 0)) {
    uVar13 = FUN_00753a74(0x88);
                    /* try { // try from 004b4afc to 004b4b03 has its CatchHandler @ 004b4d10 */
    FUN_00645c30(local_70);
                    /* try { // try from 004b4b04 to 004b4b23 has its CatchHandler @ 004b4ce8 */
    FUN_0047488c(&local_f8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,0x103,"virtual Status onnxruntime::If::Compute(OpKernelContext *) const",local_70)
    ;
                    /* try { // try from 004b4b24 to 004b4b33 has its CatchHandler @ 004b4c60 */
    FUN_00479eac(local_88,"CreateFeedsFetchesManager must be called prior to execution of graph.");
                    /* try { // try from 004b4b38 to 004b4b7b has its CatchHandler @ 004b4c48 */
    FUN_00474a40(uVar13,&local_f8,"then_feeds_fetches_manager_ && else_feeds_fetches_manager_",
                 local_88);
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar13,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004b4d34;
  }
  lVar6 = FUN_004ae6a8(param_3,0);
  lVar7 = FUN_005cabcc(lVar6 + 0x18);
  if (lVar7 == 1) {
    pcVar8 = (char *)FUN_004b4d38(lVar6);
    cVar1 = *pcVar8;
    uVar13 = *(undefined8 *)(param_3 + 0x40);
    local_ec = 0;
    local_90 = "else_branch";
    if (cVar1 != '\0') {
      local_90 = "then_branch";
    }
    local_f8 = 0x16;
    uStack_f0 = *(undefined4 *)(local_90 + 7);
    local_f7 = (undefined7)*(undefined8 *)local_90;
                    /* try { // try from 004b47b4 to 004b47cb has its CatchHandler @ 004b4cf8 */
    uVar9 = FUN_0058df10(param_3);
    lVar6 = FUN_0059e748(uVar13,uVar9,&local_f8);
    if ((local_f8 & 1) != 0) {
      free(local_e8);
    }
    if (lVar6 == 0) {
      uVar13 = FUN_00753a74(0x88);
                    /* try { // try from 004b4b8c to 004b4b93 has its CatchHandler @ 004b4c44 */
      FUN_00645c30(local_70);
                    /* try { // try from 004b4b94 to 004b4bb3 has its CatchHandler @ 004b4c30 */
      FUN_0047488c(&local_f8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                   ,0x110,"virtual Status onnxruntime::If::Compute(OpKernelContext *) const",
                   local_70);
      local_58 = "\' attribute.";
      pcStack_50 = "Subgraph SessionState was not found for \'";
      FUN_004b6708(local_88,&pcStack_50,&local_90,&local_58);
                    /* try { // try from 004b4be0 to 004b4c23 has its CatchHandler @ 004b4c2c */
      FUN_00474a40(uVar13,&local_f8,"session_state",local_88);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar13,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b4d34;
    }
    lVar7 = 0x18;
    if (cVar1 != '\0') {
      lVar7 = 0x10;
    }
    FUN_004b5704(&local_f8,param_3,lVar6,*(undefined8 *)(param_2 + lVar7));
                    /* try { // try from 004b4808 to 004b4813 has its CatchHandler @ 004b4ca0 */
    FUN_004b4ee8(local_70,&local_f8);
    puVar5 = local_70[0];
    if (local_70[0] == (undefined8 *)0x0) {
      *param_1 = 0;
      if (cVar1 == '\0') {
                    /* try { // try from 004b4a80 to 004b4a8b has its CatchHandler @ 004b4c24 */
        FUN_004b5014(local_88,&local_f8,*(undefined8 *)(param_2 + 0x28));
      }
      else {
                    /* try { // try from 004b496c to 004b4977 has its CatchHandler @ 004b4c28 */
        FUN_004b5014(local_88,&local_f8,*(undefined8 *)(param_2 + 0x20));
      }
      puVar5 = local_70[0];
      local_70[0] = local_88[0];
      local_88[0] = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar5 + 1) & 1) != 0) {
          free((void *)puVar5[3]);
        }
        free(puVar5);
        puVar5 = local_88[0];
        local_88[0] = (undefined8 *)0x0;
        if (puVar5 != (undefined8 *)0x0) {
          if ((*(byte *)(puVar5 + 1) & 1) != 0) {
            free((void *)puVar5[3]);
          }
          free(puVar5);
        }
      }
      *param_1 = (ulong)local_70[0];
    }
    else {
                    /* try { // try from 004b481c to 004b4823 has its CatchHandler @ 004b4c90 */
      puVar10 = (undefined8 *)FUN_00759c3c(0x20);
      *puVar10 = *puVar5;
      if ((*(byte *)(puVar5 + 1) & 1) == 0) {
        uVar9 = puVar5[2];
        uVar13 = puVar5[1];
        puVar10[3] = puVar5[3];
        puVar10[2] = uVar9;
        puVar10[1] = uVar13;
      }
      else {
                    /* try { // try from 004b4980 to 004b4983 has its CatchHandler @ 004b4c34 */
        FUN_002fb36c(puVar10 + 1,puVar5[3],puVar5[2]);
      }
      *param_1 = (ulong)puVar10;
                    /* try { // try from 004b4988 to 004b49a7 has its CatchHandler @ 004b4c80 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                   ,"Compute",0x116);
      puVar5 = local_70[0];
      local_70[0] = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar5 + 1) & 1) != 0) {
          free((void *)puVar5[3]);
        }
        free(puVar5);
      }
    }
    if (local_a8 != (void *)0x0) {
      free(local_a8);
    }
    if (local_c0 != (byte *)0x0) {
      local_b8 = local_c0;
      free(local_c0);
    }
    __ptr = (void *)CONCAT71(uStack_d7,local_d8);
    if (__ptr != (void *)0x0) {
      pvVar12 = local_d0;
      if (local_d0 != __ptr) {
        do {
          plVar11 = *(long **)((long)pvVar12 + -0x10);
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar6 == 0)) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            FUN_0071245c(plVar11);
          }
          pvVar12 = (void *)((long)pvVar12 + -0x20);
        } while (pvVar12 != __ptr);
        __ptr = (void *)CONCAT71(uStack_d7,local_d8);
      }
      goto LAB_004b4a50;
    }
  }
  else {
    FUN_0048a3f4(&local_f8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,0x10a,"Compute");
                    /* try { // try from 004b486c to 004b487b has its CatchHandler @ 004b4cd8 */
    FUN_00475ff4(local_88,&local_f8,0);
    local_58 = "If nodes condition input must have exactly one element";
    pcStack_50 = " ";
    FUN_004a2c0c(local_70,local_88,&pcStack_50,&local_58);
                    /* try { // try from 004b48a4 to 004b48b7 has its CatchHandler @ 004b4cb0 */
    FUN_0063aa48(param_1,2,1,local_70);
    if (((ulong)local_70[0] & 1) != 0) {
      free(local_60);
    }
    pbVar4 = local_c0;
    if (((ulong)local_88[0] & 1) != 0) {
      free(local_78);
      pbVar4 = local_c0;
    }
    local_c0 = pbVar4;
    if (pbVar4 != (byte *)0x0) {
      while (pbVar3 = local_b8, pbVar3 != pbVar4) {
        local_b8 = pbVar3 + -0x18;
        if ((*local_b8 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
      }
      local_b8 = pbVar4;
      free(local_c0);
    }
    if ((local_d8 & 1) != 0) {
      free(local_c8);
    }
    __ptr = local_e8;
    if ((local_f8 & 1) != 0) {
LAB_004b4a50:
      free(__ptr);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004b4d34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b4d38  FUN_004b4d38 =====

long FUN_004b4d38(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 9) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004b4dac to 004b4db3 has its CatchHandler @ 004b4ec4 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004b4db4 to 004b4dd3 has its CatchHandler @ 004b4eb4 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = bool]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004b4e10 to 004b4e57 has its CatchHandler @ 004b4e58 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b4ee8  FUN_004b4ee8 =====

void FUN_004b4ee8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_004b5724(&local_40);
  puVar2 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
                    /* try { // try from 004b4f1c to 004b4f23 has its CatchHandler @ 004b4fec */
    puVar3 = (undefined8 *)FUN_00759c3c(0x20);
    *puVar3 = *puVar2;
    if ((*(byte *)(puVar2 + 1) & 1) == 0) {
      uVar5 = puVar2[2];
      uVar4 = puVar2[1];
      puVar3[3] = puVar2[3];
      puVar3[2] = uVar5;
      puVar3[1] = uVar4;
    }
    else {
                    /* try { // try from 004b4f5c to 004b4f5f has its CatchHandler @ 004b4fcc */
      FUN_002fb36c(puVar3 + 1,puVar2[3],puVar2[2]);
    }
    *param_1 = (long)puVar3;
                    /* try { // try from 004b4f64 to 004b4f83 has its CatchHandler @ 004b4fdc */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,"Initialize",300);
    puVar2 = local_40;
    local_40 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(byte *)(puVar2 + 1) & 1) != 0) {
        free((void *)puVar2[3]);
      }
      free(puVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b5014  FUN_004b5014 =====

void FUN_004b5014(long *param_1,long *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  void *__ptr;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined **local_e0;
  undefined1 uStack_d1;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined **local_a0;
  long *plStack_98;
  undefined4 local_90;
  undefined8 **local_88;
  undefined ***local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_e8 = (undefined8 *)0x0;
  local_e0 = (undefined **)0x0;
  local_f8 = (undefined8 *)0x0;
  local_f0 = (undefined8 *)0x0;
                    /* try { // try from 004b5060 to 004b5067 has its CatchHandler @ 004b55d4 */
  FUN_00485aec(&local_f8,*(ulong *)(param_3 + 0x10) >> 1);
  lVar10 = param_2[2];
  uVar15 = *(ulong *)(lVar10 + 0x10);
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      puVar8 = local_f0;
      if ((*(ulong *)(*(long *)(param_2[2] + 8) + (uVar16 >> 3 & 0x1ffffffffffffff8)) >>
           (uVar16 & 0x3f) & 1) != 0) {
        puVar14 = *(undefined8 **)(*(long *)param_2[3] + uVar16 * 8);
        if (local_f0 < local_e8) {
          *local_f0 = *puVar14;
          lVar10 = puVar14[1];
          local_f0[1] = lVar10;
          if (lVar10 != 0) {
            FUN_00755c20(1,lVar10 + 8);
          }
          local_f0 = puVar8 + 3;
          puVar8[2] = puVar14[2];
        }
        else {
                    /* try { // try from 004b507c to 004b5087 has its CatchHandler @ 004b55e4 */
          local_f0 = (undefined8 *)FUN_00476fb0(&local_f8,puVar14);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar15 != uVar16);
    lVar10 = param_2[2];
  }
  local_110 = (undefined8 *)0x0;
  local_108 = (undefined8 *)0x0;
  local_100 = (undefined8 *)0x0;
  uStack_c8 = 0;
  local_d0 = (void *)0x0;
  uStack_b8 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b0 = 0x3f800000;
                    /* try { // try from 004b5120 to 004b5127 has its CatchHandler @ 004b55dc */
  FUN_00485aec(&local_110,(long)*(int *)(lVar10 + 0x24));
  puVar19 = PTR_DAT_007a10e8;
  if (0 < *(int *)(param_2[2] + 0x24)) {
    lVar10 = 0;
    puVar17 = (undefined *)0x0;
    do {
      puVar8 = local_108;
      lVar12 = param_2[4];
      lVar11 = lVar12 + lVar10;
      if (local_108 < local_100) {
        *local_108 = *(undefined8 *)(lVar11 + 8);
        lVar11 = *(long *)(lVar11 + 0x10);
        local_108[1] = lVar11;
        if (lVar11 != 0) {
          FUN_00755c20(1,lVar11 + 8);
        }
        local_108 = puVar8 + 3;
        puVar8[2] = *(undefined8 *)(lVar12 + lVar10 + 0x18);
      }
      else {
                    /* try { // try from 004b51d4 to 004b51df has its CatchHandler @ 004b55f0 */
        local_108 = (undefined8 *)FUN_00476fb0(&local_110,lVar11 + 8);
      }
      if (*(int *)(param_2[4] + lVar10) == 0) {
                    /* try { // try from 004b51f8 to 004b520f has its CatchHandler @ 004b55ec */
        local_118 = puVar17;
        local_a0 = &local_118;
        lVar11 = FUN_004b6c18(&local_d0,&local_118,puVar19,&local_a0,&uStack_d1);
        local_90 = SUB84(puVar17,0);
        local_a0 = &PTR_FUN_00790f18;
        plStack_98 = param_2;
        local_88 = &local_110;
        local_80 = &local_a0;
        FUN_004b7428(&local_a0,lVar11 + 0x20);
        if (local_80 == &local_a0) {
          pppuVar5 = &local_a0;
          lVar11 = 0x20;
        }
        else {
          if (local_80 == (undefined ***)0x0) goto LAB_004b5174;
          lVar11 = 0x28;
          pppuVar5 = local_80;
        }
        (**(code **)((long)*pppuVar5 + lVar11))();
      }
LAB_004b5174:
      puVar17 = puVar17 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((long)puVar17 < (long)*(int *)(param_2[2] + 0x24));
  }
  puVar8 = local_f8;
  lVar10 = (long)local_f0 - (long)local_f8;
  if ((lVar10 == -0x18) ||
     ((lVar11 = param_2[1], local_f8 == (undefined8 *)0x0 && (local_f0 != (undefined8 *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  plVar6 = (long *)*param_2;
  lVar12 = plVar6[9];
  lVar18 = plVar6[4];
                    /* try { // try from 004b527c to 004b52bb has its CatchHandler @ 004b55e0 */
  uVar7 = (**(code **)(*plVar6 + 0x60))();
  FUN_005de030(&local_a0,lVar11,param_3,(lVar10 >> 3) * -0x5555555555555555,puVar8,&local_110,
               &local_d0,0,lVar12,lVar18,uVar7,0);
  ppuVar4 = local_a0;
  local_e0 = local_a0;
  if (local_a0 == (undefined **)0x0) {
    piVar1 = (int *)param_2[7];
    piVar2 = (int *)param_2[8];
    *param_1 = 0;
    local_e0 = (undefined **)0x0;
    for (; piVar1 != piVar2; piVar1 = piVar1 + 1) {
      if (local_110[(long)*piVar1 * 3] == 0 || (local_110 + (long)*piVar1 * 3)[2] == 0) {
                    /* try { // try from 004b5348 to 004b5373 has its CatchHandler @ 004b55f8 */
        lVar10 = FUN_0058dfd8(*param_2);
        plVar6 = (long *)FUN_0056ba38();
        uVar7 = (**(code **)(*plVar6 + 0x18))();
        FUN_00485c34(lVar10,0,uVar7);
        *(long **)(lVar10 + 0x10) = plVar6;
      }
    }
    piVar2 = (int *)param_2[0xb];
    for (piVar1 = (int *)param_2[10]; piVar1 != piVar2; piVar1 = piVar1 + 1) {
      if (local_110[(long)*piVar1 * 3] == 0 || (local_110 + (long)*piVar1 * 3)[2] == 0) {
                    /* try { // try from 004b53c4 to 004b53ef has its CatchHandler @ 004b55f4 */
        lVar10 = FUN_0058dfd8(*param_2);
        plVar6 = (long *)FUN_0056bb70();
        uVar7 = (**(code **)(*plVar6 + 0x18))();
        FUN_00485c34(lVar10,0,uVar7);
        *(long **)(lVar10 + 0x10) = plVar6;
      }
    }
    local_e0 = (undefined **)0x0;
    *param_1 = 0;
    __ptr = local_d0;
    puVar8 = local_c0;
  }
  else {
                    /* try { // try from 004b52c8 to 004b52cf has its CatchHandler @ 004b55dc */
    puVar8 = (undefined8 *)FUN_00759c3c(0x20);
    *puVar8 = *ppuVar4;
    if (((ulong)ppuVar4[1] & 1) == 0) {
      puVar17 = ppuVar4[2];
      puVar19 = ppuVar4[1];
      puVar8[3] = ppuVar4[3];
      puVar8[2] = puVar17;
      puVar8[1] = puVar19;
    }
    else {
                    /* try { // try from 004b5408 to 004b540b has its CatchHandler @ 004b55b4 */
      FUN_002fb36c(puVar8 + 1,ppuVar4[3],ppuVar4[2]);
    }
    *param_1 = (long)puVar8;
                    /* try { // try from 004b5410 to 004b542f has its CatchHandler @ 004b55c4 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/if.cc"
                 ,"Execute",0x1bb);
    __ptr = local_d0;
    puVar8 = local_c0;
  }
  do {
    if (puVar8 == (undefined8 *)0x0) {
      local_d0 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      puVar14 = local_110;
      puVar8 = local_108;
      if (local_110 != (undefined8 *)0x0) {
        for (; puVar8 != puVar14; puVar8 = puVar8 + -3) {
          plVar6 = (long *)puVar8[-2];
          if ((plVar6 != (long *)0x0) &&
             (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar10 == 0)) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_0071245c(plVar6);
          }
        }
        local_108 = puVar14;
        free(local_110);
      }
      puVar14 = local_f8;
      puVar8 = local_f0;
      if (local_f8 != (undefined8 *)0x0) {
        for (; puVar8 != puVar14; puVar8 = puVar8 + -3) {
          plVar6 = (long *)puVar8[-2];
          if ((plVar6 != (long *)0x0) &&
             (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar10 == 0)) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_0071245c(plVar6);
          }
        }
        local_f0 = puVar14;
        free(local_f8);
      }
      ppuVar4 = local_e0;
      if (local_e0 != (undefined **)0x0) {
        if (((ulong)local_e0[1] & 1) != 0) {
          free(local_e0[3]);
        }
        free(ppuVar4);
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar9 = (long *)puVar8[8];
    plVar6 = puVar8 + 4;
    pvVar13 = (void *)*puVar8;
    local_d0 = __ptr;
    if (plVar9 == plVar6) {
      lVar10 = 0x20;
LAB_004b54ac:
      (**(code **)(*plVar6 + lVar10))();
    }
    else if (plVar9 != (long *)0x0) {
      lVar10 = 0x28;
      plVar6 = plVar9;
      goto LAB_004b54ac;
    }
    free(puVar8);
    __ptr = local_d0;
    puVar8 = (undefined8 *)pvVar13;
  } while( true );
}


// ===== 004b563c  FUN_004b563c =====

void FUN_004b563c(long param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x40) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x28);
    if (pvVar4 == pvVar1) {
      *(void **)(param_1 + 0x28) = pvVar1;
      free(pvVar1);
      return;
    }
    do {
      plVar3 = *(long **)((long)pvVar4 + -0x10);
      if ((plVar3 != (long *)0x0) &&
         (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_0071245c(plVar3);
      }
      pvVar4 = (void *)((long)pvVar4 + -0x20);
    } while (pvVar4 != pvVar1);
    *(void **)(param_1 + 0x28) = pvVar1;
    free(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 004b5704  FUN_004b5704 =====

void FUN_004b5704(long *param_1,long param_2,long param_3,long param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_2 + 0x50;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}


// ===== 004b5724  FUN_004b5724 =====

/* WARNING: Removing unreachable block (ram,0x004b58cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5724(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  void *pvVar28;
  int iVar29;
  long lVar30;
  undefined **ppuVar31;
  undefined8 *puVar32;
  undefined8 *local_f8;
  char *local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  void *local_c0;
  char *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_98;
  void *local_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_c0 = (void *)0x0;
  plVar13 = (long *)FUN_005ee3bc(*(undefined8 *)param_2[2]);
  puVar26 = param_2 + 7;
  pvVar28 = (void *)*puVar26;
  uVar23 = plVar13[1] - *plVar13 >> 3;
  if ((ulong)(param_2[9] - (long)pvVar28 >> 2) < uVar23) {
    puVar27 = puVar26;
    if (uVar23 >> 0x3e == 0) {
      lVar30 = param_2[8];
                    /* try { // try from 004b57a4 to 004b57a7 has its CatchHandler @ 004b5f44 */
      pvVar14 = (void *)FUN_00759c3c(plVar13[1] - *plVar13 >> 1);
      memcpy(pvVar14,pvVar28,lVar30 - (long)pvVar28);
      param_2[7] = pvVar14;
      param_2[8] = (long)pvVar14 + (lVar30 - (long)pvVar28);
      param_2[9] = (void *)((long)pvVar14 + uVar23 * 4);
      if (pvVar28 != (void *)0x0) {
        free(pvVar28);
      }
      goto LAB_004b57d4;
    }
LAB_004b5e90:
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 004b5ea4 to 004b5eab has its CatchHandler @ 004b5f44 */
      uVar17 = FUN_004b6308(puVar27);
                    /* catch() { ... } // from try @ 004b5ddc with catch @ 004b5eac */
                    /* catch() { ... } // from try @ 004b5d88 with catch @ 004b5eb4 */
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
      FUN_00474684(&local_c0);
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar17);
      }
    }
  }
  else {
LAB_004b57d4:
    puVar27 = param_2 + 10;
    pvVar28 = (void *)*puVar27;
    uVar23 = plVar13[1] - *plVar13 >> 3;
    if ((ulong)(param_2[0xc] - (long)pvVar28 >> 2) < uVar23) {
      if (uVar23 >> 0x3e != 0) goto LAB_004b5e90;
      lVar30 = param_2[0xb];
                    /* try { // try from 004b580c to 004b580f has its CatchHandler @ 004b5f44 */
      pvVar14 = (void *)FUN_00759c3c(plVar13[1] - *plVar13 >> 1);
      memcpy(pvVar14,pvVar28,lVar30 - (long)pvVar28);
      param_2[10] = pvVar14;
      param_2[0xb] = (long)pvVar14 + (lVar30 - (long)pvVar28);
      param_2[0xc] = (void *)((long)pvVar14 + uVar23 * 4);
      if (pvVar28 != (void *)0x0) {
        free(pvVar28);
      }
    }
    puVar32 = (undefined8 *)*plVar13;
    puVar4 = (undefined8 *)plVar13[1];
    if (puVar32 != puVar4) {
      iVar29 = 0;
      ppuVar31 = (undefined **)PTR_PTR_007a1f50;
      do {
        lVar30 = FUN_005de664(*puVar32);
        iVar12 = *(int *)(lVar30 + 0x28);
        if (iVar12 == 9) {
          ppuVar21 = *(undefined ***)(*(long *)(lVar30 + 0x20) + 0x18);
          ppuVar2 = ppuVar31;
          if (ppuVar21 != (undefined **)0x0) {
            ppuVar2 = ppuVar21;
          }
          bVar10 = *(int *)(ppuVar2 + 5) == 1;
          if (*(int *)(ppuVar2 + 5) != 4) goto LAB_004b58d4;
          ppuVar21 = ppuVar31;
          if (*(undefined ***)(ppuVar2[4] + 0x18) != (undefined **)0x0) {
            ppuVar21 = *(undefined ***)(ppuVar2[4] + 0x18);
          }
          bVar11 = *(int *)(ppuVar21 + 5) == 1;
LAB_004b58e0:
          if (bVar10) goto LAB_004b59b4;
          bVar1 = false;
          if (iVar12 != 4) {
            bVar1 = (bool)(bVar11 ^ 1);
          }
          if (bVar1) {
                    /* try { // try from 004b5da0 to 004b5da7 has its CatchHandler @ 004b5eb0 */
            local_a0 = (long *)FUN_00759c3c(0x68);
            uVar7 = s_Only_tensors__tensor_sequence__o_001c4055._56_8_;
            uVar6 = s_Only_tensors__tensor_sequence__o_001c4055._48_8_;
            uVar17 = s_Only_tensors__tensor_sequence__o_001c4055._32_8_;
            uStack_a8 = _UNK_002003f8;
            local_b0 = _DAT_002003f0;
            local_a0[5] = s_Only_tensors__tensor_sequence__o_001c4055._40_8_;
            local_a0[4] = uVar17;
            local_a0[7] = uVar7;
            local_a0[6] = uVar6;
            uVar8 = s_Only_tensors__tensor_sequence__o_001c4055._88_8_;
            uVar7 = s_Only_tensors__tensor_sequence__o_001c4055._80_8_;
            uVar6 = s_Only_tensors__tensor_sequence__o_001c4055._72_8_;
            uVar17 = s_Only_tensors__tensor_sequence__o_001c4055._64_8_;
            *(char *)(local_a0 + 0xc) = '\0';
            local_a0[9] = uVar6;
            local_a0[8] = uVar17;
            local_a0[0xb] = uVar8;
            local_a0[10] = uVar7;
            uVar7 = s_Only_tensors__tensor_sequence__o_001c4055._24_8_;
            uVar6 = s_Only_tensors__tensor_sequence__o_001c4055._16_8_;
            uVar17 = s_Only_tensors__tensor_sequence__o_001c4055._0_8_;
            local_a0[1] = s_Only_tensors__tensor_sequence__o_001c4055._8_8_;
            *local_a0 = uVar17;
            local_a0[3] = uVar7;
            local_a0[2] = uVar6;
                    /* try { // try from 004b5ddc to 004b5def has its CatchHandler @ 004b5eac */
            FUN_0063aa48(param_1,2,2,&local_b0);
LAB_004b5df0:
            if ((local_b0 & 1) != 0) {
              free(local_a0);
            }
            goto LAB_004b5e00;
          }
          plVar13 = (long *)*param_2;
                    /* try { // try from 004b5900 to 004b592b has its CatchHandler @ 004b5f54 */
          iVar12 = (**(code **)(*plVar13 + 0x48))(plVar13);
          if (((iVar12 <= iVar29) ||
              (lVar30 = (**(code **)(*plVar13 + 0x80))(plVar13,iVar29), lVar30 == 0)) ||
             (lVar30 = FUN_004b6a5c(), lVar30 == 0)) {
            uVar17 = FUN_005de650(*puVar32);
            local_e0 = "Failed to create output tensor for ";
            FUN_004a0980(&local_b0,&local_e0,uVar17);
                    /* try { // try from 004b5d88 to 004b5d9b has its CatchHandler @ 004b5eb4 */
            FUN_0063aa48(param_1,2,1,&local_b0);
            goto LAB_004b5df0;
          }
                    /* try { // try from 004b5934 to 004b593b has its CatchHandler @ 004b5f48 */
          puVar15 = (undefined8 *)FUN_0058dfd8(*param_2,iVar29);
          local_b0 = CONCAT44(local_b0._4_4_,1);
          uStack_a8 = *puVar15;
          local_a0 = (long *)puVar15[1];
          if (local_a0 != (long *)0x0) {
            FUN_00755c20(1,local_a0 + 1);
          }
          puVar18 = (undefined4 *)param_2[5];
          local_98 = puVar15[2];
          if (puVar18 < (undefined4 *)param_2[6]) {
            *puVar18 = 1;
            *(undefined8 *)(puVar18 + 2) = uStack_a8;
            *(long **)(puVar18 + 4) = local_a0;
            if (local_a0 != (long *)0x0) {
              FUN_00755c20(1,local_a0 + 1);
            }
            *(undefined8 *)(puVar18 + 6) = local_98;
            puVar18 = puVar18 + 8;
          }
          else {
                    /* try { // try from 004b5a70 to 004b5a7b has its CatchHandler @ 004b5f18 */
            puVar18 = (undefined4 *)FUN_004b68a0(param_2 + 4,&local_b0);
          }
          param_2[5] = puVar18;
          plVar13 = local_a0;
joined_r0x004b5d0c:
          if ((plVar13 == (long *)0x0) ||
             (lVar30 = FUN_00755c50(0xffffffffffffffff,plVar13 + 1), lVar30 != 0))
          goto LAB_004b5bc0;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_0071245c(plVar13);
          if (!bVar10) goto LAB_004b5c40;
LAB_004b5bc4:
          piVar3 = (int *)param_2[8];
          if (piVar3 < (int *)param_2[9]) {
            piVar24 = piVar3 + 1;
            *piVar3 = iVar29;
          }
          else {
            pvVar28 = (void *)*puVar26;
            lVar30 = (long)piVar3 - (long)pvVar28 >> 2;
            uVar23 = lVar30 + 1;
            local_f8 = puVar26;
            if (uVar23 >> 0x3e != 0) {
LAB_004b5e58:
              if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 004b5e6c to 004b5e8b has its CatchHandler @ 004b5f50 */
                FUN_004b6308(local_f8);
LAB_004b5e74:
                if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_002f9ee0();
                }
              }
              goto LAB_004b5f7c;
            }
            uVar20 = (long)param_2[9] - (long)pvVar28;
            uVar22 = (long)uVar20 >> 1;
            if (uVar22 <= uVar23) {
              uVar22 = uVar23;
            }
            if (0x7ffffffffffffffb < uVar20) {
              uVar22 = 0x3fffffffffffffff;
            }
            if (uVar22 == 0) {
              pvVar14 = (void *)0x0;
            }
            else {
              if (uVar22 >> 0x3e != 0) goto LAB_004b5e74;
                    /* try { // try from 004b5c18 to 004b5c1b has its CatchHandler @ 004b5f14 */
              pvVar14 = (void *)FUN_00759c3c(uVar22 << 2);
            }
            piVar25 = (int *)((long)pvVar14 + lVar30 * 4);
            piVar24 = piVar25 + 1;
            *piVar25 = iVar29;
            memcpy(pvVar14,pvVar28,(long)piVar3 - (long)pvVar28);
            param_2[7] = pvVar14;
            param_2[8] = piVar24;
            param_2[9] = (void *)((long)pvVar14 + uVar22 * 4);
            if (pvVar28 != (void *)0x0) {
              free(pvVar28);
            }
            ppuVar31 = &PTR_PTR_FUN_007a9f68;
          }
          param_2[8] = piVar24;
        }
        else {
          bVar10 = false;
LAB_004b58d4:
          bVar11 = false;
          if (iVar12 != 1) goto LAB_004b58e0;
LAB_004b59b4:
                    /* try { // try from 004b59b8 to 004b59bb has its CatchHandler @ 004b5f4c */
          lVar30 = FUN_005de688(*puVar32);
          if (lVar30 == 0) {
LAB_004b5b48:
            puVar18 = (undefined4 *)param_2[5];
            local_e0 = (char *)0x0;
            local_d8 = (long *)0x0;
            local_d0 = (long *)0x0;
            local_b0 = local_b0 & 0xffffffff00000000;
            local_a0 = (long *)0x0;
            local_98 = 0;
            uStack_a8 = 0;
            if (puVar18 < (undefined4 *)param_2[6]) {
              *puVar18 = 0;
              puVar19 = puVar18 + 8;
              *(undefined8 *)(puVar18 + 4) = 0;
              *(undefined8 *)(puVar18 + 6) = 0;
              *(undefined8 *)(puVar18 + 2) = 0;
            }
            else {
                    /* try { // try from 004b5b80 to 004b5b8b has its CatchHandler @ 004b5ef8 */
              puVar19 = (undefined4 *)FUN_004b68a0(param_2 + 4,&local_b0);
            }
            plVar9 = local_a0;
            param_2[5] = puVar19;
            plVar13 = local_d8;
            if ((local_a0 != (long *)0x0) &&
               (lVar30 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), plVar13 = local_d8,
               lVar30 == 0)) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              FUN_0071245c(plVar9);
              plVar13 = local_d8;
            }
            goto joined_r0x004b5d0c;
          }
                    /* try { // try from 004b59c0 to 004b59c7 has its CatchHandler @ 004b5f40 */
          FUN_005cf088(&local_b0);
                    /* try { // try from 004b59c8 to 004b59cf has its CatchHandler @ 004b5f28 */
          lVar30 = FUN_005cabcc(&local_b0);
          if (lVar30 < 0) {
            bVar1 = true;
          }
          else {
                    /* try { // try from 004b59dc to 004b59e7 has its CatchHandler @ 004b5f10 */
            lVar16 = FUN_0058d3bc(*param_2,iVar29,&local_b0);
            if (lVar16 == 0) {
              uVar17 = FUN_005de650(*puVar32);
              local_b8 = "Failed to create output tensor for ";
              FUN_004a0980(&local_e0,&local_b8,uVar17);
                    /* try { // try from 004b5ab8 to 004b5acb has its CatchHandler @ 004b5edc */
              FUN_0063aa48(param_1,2,1,&local_e0);
              if (((ulong)local_e0 & 1) != 0) {
                free(local_d0);
              }
              bVar1 = false;
            }
            else {
                    /* try { // try from 004b59f0 to 004b59f7 has its CatchHandler @ 004b5ef4 */
              plVar13 = (long *)FUN_0058dfd8(*param_2,iVar29);
              local_e0 = (char *)CONCAT44(local_e0._4_4_,1);
              local_d8 = (long *)*plVar13;
              local_d0 = (long *)plVar13[1];
              if (local_d0 != (long *)0x0) {
                FUN_00755c20(1,local_d0 + 1);
              }
              puVar18 = (undefined4 *)param_2[5];
              local_c8 = plVar13[2];
              if (puVar18 < (undefined4 *)param_2[6]) {
                *puVar18 = 1;
                *(long **)(puVar18 + 2) = local_d8;
                *(long **)(puVar18 + 4) = local_d0;
                if (local_d0 != (long *)0x0) {
                  FUN_00755c20(1,local_d0 + 1);
                }
                *(long *)(puVar18 + 6) = local_c8;
                puVar18 = puVar18 + 8;
              }
              else {
                    /* try { // try from 004b5ae4 to 004b5aef has its CatchHandler @ 004b5ecc */
                puVar18 = (undefined4 *)FUN_004b68a0(param_2 + 4,&local_e0);
              }
              plVar13 = local_d0;
              param_2[5] = puVar18;
              if ((local_d0 != (long *)0x0) &&
                 (lVar16 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar16 == 0)) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                FUN_0071245c(plVar13);
              }
              bVar1 = true;
              ppuVar31 = (undefined **)PTR_PTR_007a1f50;
            }
          }
          pvVar28 = local_78;
          local_78 = (void *)0x0;
          if (pvVar28 != (void *)0x0) {
            free(pvVar28);
          }
          if (!bVar1) goto LAB_004b5e00;
          if (lVar30 < 0) goto LAB_004b5b48;
LAB_004b5bc0:
          if (bVar10) goto LAB_004b5bc4;
LAB_004b5c40:
          if (bVar11) {
            piVar3 = (int *)param_2[0xb];
            if (piVar3 < (int *)param_2[0xc]) {
              piVar25 = piVar3 + 1;
              *piVar3 = iVar29;
LAB_004b5d50:
              param_2[0xb] = piVar25;
              goto LAB_004b5860;
            }
            pvVar28 = (void *)*puVar27;
            lVar30 = (long)piVar3 - (long)pvVar28 >> 2;
            uVar23 = lVar30 + 1;
            local_f8 = puVar27;
            if (uVar23 >> 0x3e == 0) {
              uVar20 = (long)param_2[0xc] - (long)pvVar28;
              uVar22 = (long)uVar20 >> 1;
              if (uVar22 <= uVar23) {
                uVar22 = uVar23;
              }
              if (0x7ffffffffffffffb < uVar20) {
                uVar22 = 0x3fffffffffffffff;
              }
              if (uVar22 == 0) {
                pvVar14 = (void *)0x0;
LAB_004b5d18:
                piVar24 = (int *)((long)pvVar14 + lVar30 * 4);
                piVar25 = piVar24 + 1;
                *piVar24 = iVar29;
                memcpy(pvVar14,pvVar28,(long)piVar3 - (long)pvVar28);
                param_2[10] = pvVar14;
                param_2[0xb] = piVar25;
                param_2[0xc] = (void *)((long)pvVar14 + uVar22 * 4);
                if (pvVar28 != (void *)0x0) {
                  free(pvVar28);
                }
                ppuVar31 = &PTR_PTR_FUN_007a9f68;
                goto LAB_004b5d50;
              }
              if (uVar22 >> 0x3e == 0) {
                    /* try { // try from 004b5ca4 to 004b5ca7 has its CatchHandler @ 004b5f14 */
                pvVar14 = (void *)FUN_00759c3c(uVar22 << 2);
                goto LAB_004b5d18;
              }
              goto LAB_004b5e74;
            }
            goto LAB_004b5e58;
          }
        }
LAB_004b5860:
        puVar32 = puVar32 + 1;
        iVar29 = iVar29 + 1;
      } while (puVar32 != puVar4);
    }
    *param_1 = 0;
LAB_004b5e00:
    pvVar28 = local_c0;
    if (local_c0 != (void *)0x0) {
      if ((*(byte *)((long)local_c0 + 8) & 1) != 0) {
        free(*(void **)((long)local_c0 + 0x18));
      }
      free(pvVar28);
    }
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
  }
LAB_004b5f7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b5f80  FUN_004b5f80 =====

void FUN_004b5f80(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 004b5fd0  FUN_004b5fd0 =====

void FUN_004b5fd0(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  __ptr = (undefined8 *)param_1[2];
  do {
    if (__ptr == (undefined8 *)0x0) {
      pvVar1 = (void *)*param_1;
      *param_1 = 0;
      if (pvVar1 == (void *)0x0) {
        return;
      }
      free(pvVar1);
      return;
    }
    plVar3 = (long *)__ptr[8];
    plVar2 = __ptr + 4;
    pvVar1 = (void *)*__ptr;
    if (plVar3 == plVar2) {
      lVar4 = 0x20;
LAB_004b6010:
      (**(code **)(*plVar2 + lVar4))();
    }
    else if (plVar3 != (long *)0x0) {
      lVar4 = 0x28;
      plVar2 = plVar3;
      goto LAB_004b6010;
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  } while( true );
}


// ===== 004b605c  FUN_004b605c =====

void FUN_004b605c(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar1 = PTR_DAT_007a2078;
  pvVar3 = (void *)param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00493250(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00493250(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar3 != (void *)0x0) {
    pbVar4 = *(byte **)((long)pvVar3 + 0x28);
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = *(byte **)((long)pvVar3 + 0x30);
      pbVar5 = pbVar4;
      if (pbVar2 != pbVar4) {
        do {
          pbVar5 = pbVar2 + -0x18;
          if ((*pbVar5 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
          pbVar2 = pbVar5;
        } while (pbVar5 != pbVar4);
        pbVar5 = *(byte **)((long)pvVar3 + 0x28);
      }
      *(byte **)((long)pvVar3 + 0x30) = pbVar4;
      free(pbVar5);
    }
    if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
      free(*(void **)((long)pvVar3 + 8));
    }
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[2];
  param_1[2] = 0;
  if (pvVar3 != (void *)0x0) {
    pbVar4 = *(byte **)((long)pvVar3 + 0x28);
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = *(byte **)((long)pvVar3 + 0x30);
      pbVar5 = pbVar4;
      if (pbVar2 != pbVar4) {
        do {
          pbVar5 = pbVar2 + -0x18;
          if ((*pbVar5 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
          pbVar2 = pbVar5;
        } while (pbVar5 != pbVar4);
        pbVar5 = *(byte **)((long)pvVar3 + 0x28);
      }
      *(byte **)((long)pvVar3 + 0x30) = pbVar4;
      free(pbVar5);
    }
    if (*(void **)((long)pvVar3 + 8) != (void *)0x0) {
      free(*(void **)((long)pvVar3 + 8));
    }
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[1];
  *param_1 = (long)&PTR_FUN_007907b0;
  param_1[1] = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  free(pvVar3);
  return;
}


// ===== 004b61c8  FUN_004b61c8 =====

void FUN_004b61c8(void *param_1)

{
  FUN_004b605c();
  free(param_1);
  return;
}


// ===== 004b61ec  FUN_004b61ec =====

void FUN_004b61ec(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  uVar1 = FUN_0058d0b4(param_1 + 1,param_2);
  *param_1 = (long)(PTR_DAT_007a2078 + 0x10);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
                    /* try { // try from 004b6240 to 004b6247 has its CatchHandler @ 004b6258 */
  FUN_004b39c8(uVar1,param_2);
  return;
}


// ===== 004b6298  FUN_004b6298 =====

void FUN_004b6298(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 004b62c0 to 004b62c7 has its CatchHandler @ 004b62f4 */
  FUN_004b61ec(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004b6308  FUN_004b6308 =====

void FUN_004b6308(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004b631c  FUN_004b631c =====

void FUN_004b631c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004b6330  FUN_004b6330 =====

void FUN_004b6330(long *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  size_t __n;
  
  uVar3 = param_1[1];
  uVar4 = uVar3 + param_2;
  param_1[1] = uVar4;
  if ((uVar3 == 0) || (0x3f < (uVar4 - 1 ^ uVar3 - 1))) {
    uVar5 = 0;
    if (0x40 < uVar4) {
      uVar5 = uVar4 - 1 >> 6;
    }
    *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
  }
  if (param_2 != 0) {
    puVar1 = (ulong *)(*param_1 + (uVar3 >> 6) * 8);
    uVar2 = (uint)uVar3 & 0x3f;
    puVar6 = puVar1;
    if ((param_3 & 1) == 0) {
      if ((uVar3 & 0x3f) != 0) {
        uVar5 = (ulong)(0x40 - uVar2);
        uVar4 = uVar5;
        if (param_2 <= uVar5) {
          uVar4 = param_2;
        }
        param_2 = param_2 - uVar4;
        puVar6 = puVar1 + 1;
        *puVar1 = *puVar1 & (0xffffffffffffffffU >> (uVar5 - uVar4 & 0x3f) & -1L << (uVar3 & 0x3f) ^
                            0xffffffffffffffff);
      }
      __n = (param_2 >> 6) * 8;
      if (0x3f < param_2) {
        memset(puVar6,0,__n);
      }
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar4 = puVar6[param_2 >> 6] &
              (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    else {
      if ((uVar3 & 0x3f) != 0) {
        uVar5 = (ulong)(0x40 - uVar2);
        uVar4 = uVar5;
        if (param_2 <= uVar5) {
          uVar4 = param_2;
        }
        param_2 = param_2 - uVar4;
        puVar6 = puVar1 + 1;
        *puVar1 = *puVar1 | 0xffffffffffffffffU >> (uVar5 - uVar4 & 0x3f) & -1L << (uVar3 & 0x3f);
      }
      __n = (param_2 >> 6) * 8;
      if (0x3f < param_2) {
        memset(puVar6,0xff,__n);
      }
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar4 = puVar6[param_2 >> 6] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
    }
    *(ulong *)((long)puVar6 + __n) = uVar4;
  }
  return;
}


// ===== 004b64a4  FUN_004b64a4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b64a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
                    /* try { // try from 004b6520 to 004b652b has its CatchHandler @ 004b6654 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004b6544 to 004b654b has its CatchHandler @ 004b6634 */
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
                    /* try { // try from 004b657c to 004b6587 has its CatchHandler @ 004b6630 */
  FUN_00303e0c(local_178,__s,sVar5);
  FUN_004b6668(local_178,param_3,param_4,param_5,param_6);
                    /* try { // try from 004b65a4 to 004b65af has its CatchHandler @ 004b662c */
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


// ===== 004b6668  FUN_004b6668 =====

void FUN_004b6668(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
                    /* try { // try from 004b668c to 004b668f has its CatchHandler @ 004b66f0 */
  FUN_00717214(param_1,*param_2);
  pcVar2 = (char *)*param_3;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004b66a0 to 004b66ab has its CatchHandler @ 004b66ec */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004b66b0 to 004b66b7 has its CatchHandler @ 004b66e8 */
  FUN_007176ec(param_1,*param_4);
  pcVar2 = (char *)*param_5;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004b66c8 to 004b66d3 has its CatchHandler @ 004b66e4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
  return;
}


// ===== 004b66f4  FUN_004b66f4 =====

void FUN_004b66f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004b6708  FUN_004b6708 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b6708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004b6780 to 004b678b has its CatchHandler @ 004b688c */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004b67a4 to 004b67ab has its CatchHandler @ 004b686c */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_0049e5a0(local_178,param_2,param_3,param_4);
                    /* try { // try from 004b67e4 to 004b67ef has its CatchHandler @ 004b6868 */
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


// ===== 004b68a0  FUN_004b68a0 =====

undefined4 * FUN_004b68a0(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *__ptr;
  undefined4 *puVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  
  __ptr = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  lVar11 = (long)puVar10 - (long)__ptr >> 5;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3b == 0) {
    uVar7 = param_1[2] - (long)__ptr >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)__ptr)) {
      uVar7 = 0x7ffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar5 = 0;
      uVar4 = *(undefined8 *)(param_2 + 2);
      lVar6 = *(long *)(param_2 + 4);
      puVar3 = (undefined4 *)(lVar11 * 0x20);
      *puVar3 = *param_2;
      *(undefined8 *)(puVar3 + 2) = uVar4;
      *(long *)(puVar3 + 4) = lVar6;
    }
    else {
      if (uVar7 >> 0x3b != 0) goto LAB_004b6a44;
      lVar5 = FUN_00759c3c(uVar7 << 5);
      uVar4 = *(undefined8 *)(param_2 + 2);
      lVar6 = *(long *)(param_2 + 4);
      puVar3 = (undefined4 *)(lVar5 + lVar11 * 0x20);
      *puVar3 = *param_2;
      *(undefined8 *)(puVar3 + 2) = uVar4;
      *(long *)(puVar3 + 4) = lVar6;
    }
    if (lVar6 != 0) {
      FUN_00755c20(1,lVar6 + 8);
      __ptr = (undefined4 *)*param_1;
      puVar10 = (undefined4 *)param_1[1];
      lVar11 = (long)puVar10 - (long)__ptr >> 5;
    }
    *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(param_2 + 6);
    puVar8 = __ptr;
    puVar12 = puVar3 + lVar11 * -8;
    if (__ptr != puVar10) {
      do {
        uVar4 = *(undefined8 *)(puVar8 + 2);
        lVar6 = *(long *)(puVar8 + 4);
        *puVar12 = *puVar8;
        *(undefined8 *)(puVar12 + 2) = uVar4;
        *(long *)(puVar12 + 4) = lVar6;
        if (lVar6 != 0) {
          FUN_00755c20(1,lVar6 + 8);
        }
        puVar2 = puVar8 + 8;
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar8 + 6);
        puVar8 = puVar2;
        puVar12 = puVar12 + 8;
      } while (puVar2 != puVar10);
      do {
        plVar9 = *(long **)(__ptr + 4);
        if ((plVar9 != (long *)0x0) &&
           (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          FUN_0071245c(plVar9);
        }
        __ptr = __ptr + 8;
      } while (__ptr != puVar10);
      __ptr = (undefined4 *)*param_1;
    }
    *param_1 = (long)(puVar3 + lVar11 * -8);
    param_1[1] = (long)(puVar3 + 8);
    param_1[2] = lVar5 + uVar7 * 0x20;
    if (__ptr != (undefined4 *)0x0) {
      free(__ptr);
    }
    return puVar3 + 8;
  }
  FUN_004b6a48(param_1);
LAB_004b6a44:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 004b6a48  FUN_004b6a48 =====

void FUN_004b6a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004b6a5c  FUN_004b6a5c =====

void FUN_004b6a5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[2] == 0) || (*(int *)(param_1[2] + 8) != 3)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b6acc to 004b6ad3 has its CatchHandler @ 004b6bf4 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 004b6ad4 to 004b6af3 has its CatchHandler @ 004b6be4 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/ort_value.h"
                 ,0x67,"onnxruntime::TensorSeq *OrtValue::GetMutable()",auStack_a8);
                    /* try { // try from 004b6af8 to 004b6afb has its CatchHandler @ 004b6bc4 */
    local_c8 = FUN_00576cac(param_1[2]);
    local_40 = "Trying to get a TensorSeq, but got: ";
    FUN_004839f8(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 004b6b20 to 004b6b67 has its CatchHandler @ 004b6b68 */
    uVar2 = FUN_00474a40(uVar3,auStack_90,"IsTensorSequence()",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    uVar2 = *param_1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 004b6c18  FUN_004b6c18 =====

long * FUN_004b6c18(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x26;
  undefined2 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  plVar13 = (long *)param_1[1];
  plVar14 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    uVar16 = NEON_cnt(plVar13,1);
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x26 = plVar14;
      if (plVar13 <= plVar14) {
        uVar2 = 0;
        if (plVar13 != (long *)0x0) {
          uVar2 = (ulong)plVar14 / (ulong)plVar13;
        }
        unaff_x26 = (long *)((long)plVar14 - uVar2 * (long)plVar13);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar8, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((long *)plVar12[1] == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_004b6d20;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar13 - 1U) != unaff_x26) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar5 = (long *)plVar12[1];
          if (plVar5 == plVar14) {
            if ((long *)plVar12[2] == plVar14) goto LAB_004b6d20;
          }
          else {
            if (plVar13 <= plVar5) {
              uVar10 = 0;
              if (plVar13 != (long *)0x0) {
                uVar10 = (ulong)plVar5 / (ulong)plVar13;
              }
              plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar13);
            }
            if (plVar5 != unaff_x26) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar1 = param_1 + 2;
  plVar12 = (long *)FUN_00759c3c(0x50);
  lVar9 = param_1[3];
  plVar5 = (long *)*param_4;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  fVar17 = *(float *)(param_1 + 4);
  lVar6 = *plVar5;
  plVar12[8] = 0;
  plVar12[2] = lVar6;
  plVar5 = plVar12;
  if ((plVar13 == (long *)0x0) || (fVar17 * (float)plVar13 < (float)(lVar9 + 1))) {
    if (plVar13 < (long *)0x3) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar7 = (long *)(uVar10 | (long)plVar13 << 1);
    plVar11 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar7 <= plVar11) {
      plVar7 = plVar11;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
                    /* try { // try from 004b6df0 to 004b6e73 has its CatchHandler @ 004b6f64 */
      plVar5 = (long *)FUN_00711ce0(plVar7);
      plVar13 = (long *)param_1[1];
      plVar7 = plVar5;
    }
    if (plVar13 < plVar7) {
LAB_004b6e08:
      plVar5 = (long *)FUN_004b6ff8(param_1,plVar7);
    }
    else if (plVar7 < plVar13) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar13 < (long *)0x3) {
LAB_004b6e70:
        plVar5 = (long *)FUN_00711ce0();
      }
      else {
        uVar16 = NEON_cnt(plVar13,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        if (1 < (CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff)) goto LAB_004b6e70;
        if ((long *)0x1 < plVar5) {
          plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
        }
      }
      if (plVar7 <= plVar5) {
        plVar7 = plVar5;
      }
      if (plVar7 < plVar13) goto LAB_004b6e08;
    }
    plVar13 = (long *)param_1[1];
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar14);
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
      goto joined_r0x004b6ee8;
    }
    if (plVar14 < plVar13) {
      lVar6 = *param_1;
      plVar7 = *(long **)(lVar6 + (long)plVar14 * 8);
      unaff_x26 = plVar14;
      goto joined_r0x004b6ee8;
    }
    uVar10 = 0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (ulong)plVar14 / (ulong)plVar13;
    }
    unaff_x26 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
    if (plVar7 == (long *)0x0) goto LAB_004b6ea4;
LAB_004b6d98:
    *plVar12 = *plVar7;
LAB_004b6f20:
    *plVar7 = (long)plVar12;
  }
  else {
    lVar6 = *param_1;
    plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
joined_r0x004b6ee8:
    if (plVar7 != (long *)0x0) goto LAB_004b6d98;
LAB_004b6ea4:
    lVar9 = *plVar1;
    *plVar1 = (long)plVar12;
    *plVar12 = lVar9;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar1;
    if (*plVar12 != 0) {
      plVar14 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar14 = (long *)((ulong)plVar14 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar14) {
        uVar10 = 0;
        if (plVar13 != (long *)0x0) {
          uVar10 = (ulong)plVar14 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar14 - uVar10 * (long)plVar13);
      }
      plVar7 = (long *)(*param_1 + (long)plVar14 * 8);
      goto LAB_004b6f20;
    }
  }
  uVar16 = 1;
  param_1[3] = param_1[3] + 1;
  lVar4 = *(long *)(lVar4 + 0x28);
joined_r0x004b6d30:
  if (lVar4 != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5,uVar16);
  }
  return plVar12;
LAB_004b6d20:
  uVar16 = 0;
  lVar4 = *(long *)(lVar4 + 0x28);
  plVar5 = param_1;
  goto joined_r0x004b6d30;
}


// ===== 004b6f8c  FUN_004b6f8c =====

void FUN_004b6f8c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    plVar1 = *(long **)((long)__ptr + 0x40);
    plVar2 = (long *)((long)__ptr + 0x20);
    if (plVar1 == plVar2) {
      lVar3 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_004b6fe8;
      lVar3 = 0x28;
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + lVar3))();
  }
LAB_004b6fe8:
  free(__ptr);
  return;
}


// ===== 004b6ff8  FUN_004b6ff8 =====

void FUN_004b6ff8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_004b717c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_004b717c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 004b71d0  FUN_004b71d0 =====

void FUN_004b71d0(void)

{
  return;
}


// ===== 004b71d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b71d8  FUN_004b71d8 =====

void FUN_004b71d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_00790f18;
  puVar1[2] = uVar4;
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
  return;
}


// ===== 004b7218  FUN_004b7218 =====

void FUN_004b7218(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_00790f18;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 004b7238  FUN_004b7238 =====

void FUN_004b7238(void)

{
  return;
}


// ===== 004b723c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004b7240  FUN_004b7240 =====

void FUN_004b7240(undefined8 *param_1,long param_2,undefined8 param_3,int *param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte local_88 [16];
  void *local_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined4 *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  lVar2 = FUN_0058d3bc(*puVar6,*puVar5,param_3);
  if (lVar2 == 0) {
    local_70 = "Failed to create output tensor for If output ";
    FUN_004a0638(local_88,&local_70,puVar5);
                    /* try { // try from 004b7334 to 004b7347 has its CatchHandler @ 004b73f8 */
    FUN_0063aa48(param_1,2,1,local_88);
    if ((local_88[0] & 1) != 0) {
      free(local_78);
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_0058dfd8(*puVar6,*puVar5);
    if (*param_4 == *(int *)(lVar2 + 0x74)) {
      uVar3 = *puVar6;
      lVar2 = puVar6[1];
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      plVar4 = (long *)param_5[1];
      *param_5 = uVar3;
      param_5[1] = lVar2;
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0071245c(plVar4);
      }
      uVar3 = puVar6[2];
      *param_6 = 1;
    }
    else {
      uVar3 = *puVar6;
      lVar2 = puVar6[1];
      param_5 = (undefined8 *)(**(long **)(param_2 + 0x18) + (long)*(int *)(param_2 + 0x10) * 0x18);
      if (lVar2 != 0) {
        FUN_00755c20(1,lVar2 + 8);
      }
      plVar4 = (long *)param_5[1];
      *param_5 = uVar3;
      param_5[1] = lVar2;
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0071245c(plVar4);
      }
      uVar3 = puVar6[2];
    }
    param_5[2] = uVar3;
    *param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7428  FUN_004b7428 =====

void FUN_004b7428(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    plVar3 = (long *)param_2[4];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
                    /* try { // try from 004b7534 to 004b753f has its CatchHandler @ 004b75bc */
        (**(code **)(*param_1 + 0x18))(param_1,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 004b7560 to 004b7567 has its CatchHandler @ 004b75bc */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 004b7588 to 004b7593 has its CatchHandler @ 004b75bc */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
                    /* try { // try from 004b749c to 004b74a7 has its CatchHandler @ 004b75bc */
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_004b75b8;
    }
    if (plVar3 != param_2) {
      param_1[4] = (long)plVar3;
      param_2[4] = (long)plVar2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_004b75b8;
    }
                    /* try { // try from 004b74e0 to 004b74eb has its CatchHandler @ 004b75bc */
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    (**(code **)(*(long *)param_2[4] + 0x20))();
    param_2[4] = param_1[4];
    param_1[4] = (long)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004b75b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b75c0  FUN_004b75c0 =====

void FUN_004b75c0(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,ulong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = param_3[1] - *param_3 >> 3;
  uVar6 = lVar4 * -0x5555555555555555;
  uVar5 = param_4[1] - *param_4 >> 2;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    if (uVar6 < uVar5) {
      param_4[1] = *param_4 + lVar4 * -0x5555555555555554;
    }
  }
  else {
    FUN_004b76b0(param_4,uVar6 - uVar5);
    uVar6 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555;
  }
  if (param_5 < uVar6) {
    lVar4 = param_5 * 0x18;
    do {
      pbVar1 = (byte *)(*param_3 + lVar4);
      uVar5 = *(ulong *)(pbVar1 + 8);
      pbVar2 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar2 = pbVar1 + 1;
        uVar5 = (ulong)(*pbVar1 >> 1);
      }
      puVar3 = (undefined4 *)FUN_005dad20(param_2,pbVar2,uVar5);
      lVar4 = lVar4 + 0x18;
      *(undefined4 *)(*param_4 + param_5 * 4) = *puVar3;
      param_5 = param_5 + 1;
    } while (uVar6 != param_5);
  }
  *param_1 = 0;
  return;
}


// ===== 004b76b0  FUN_004b76b0 =====

void FUN_004b76b0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 2) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 2;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3e != 0) {
      FUN_0047749c(param_1);
LAB_004b77d8:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 1;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar2) {
      uVar3 = 0x3fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3e != 0) goto LAB_004b77d8;
      __dest = (void *)FUN_00759c3c(uVar3 << 2);
    }
    __s = (void *)((long)__dest + lVar4 * 4);
    memset(__s,0,param_2 * 4);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 4);
    param_1[2] = (void *)((long)__dest + uVar3 * 4);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 4);
      __s_00 = (void *)((long)__s_00 + param_2 * 4);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 004b77dc  FUN_004b77dc =====

void FUN_004b77dc(undefined8 *param_1)

{
  void *pvVar1;
  void *__src;
  size_t __n;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
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
  uVar3 = DAT_001b7148;
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
  local_88[3] = uVar3;
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
                    /* try { // try from 004b7878 to 004b78b3 has its CatchHandler @ 004b7a04 */
  uVar3 = FUN_0056dafc();
  uVar3 = FUN_00583c90(&local_88,&DAT_001f41af,uVar3);
  uVar4 = FUN_0056d184();
  uVar3 = FUN_00583c90(uVar3,&DAT_001e3857,uVar4);
  puVar5 = (undefined8 *)FUN_00579e6c();
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  __src = (void *)*puVar5;
  __n = puVar5[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 004b79dc to 004b79e3 has its CatchHandler @ 004b79e4 */
        uVar3 = FUN_004b631c(&local_a0);
                    /* catch() { ... } // from try @ 004b78cc with catch @ 004b79e4
                       catch() { ... } // from try @ 004b79dc with catch @ 004b79e4 */
                    /* catch() { ... } // from try @ 004b78f0 with catch @ 004b79e8 */
        if (local_a0 != (void *)0x0) {
          local_98 = local_a0;
          free(local_a0);
        }
        FUN_004ada18(&local_88);
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_004b7a28;
    }
                    /* try { // try from 004b78cc to 004b78d3 has its CatchHandler @ 004b79e4 */
    local_a0 = (void *)FUN_00759c3c(__n);
    pvVar1 = (void *)((long)local_a0 + __n);
    local_90 = pvVar1;
    memcpy(local_a0,__src,__n);
    local_98 = pvVar1;
  }
                    /* try { // try from 004b78f0 to 004b7937 has its CatchHandler @ 004b79e8 */
  uVar3 = FUN_00583ae0(uVar3,&DAT_001db202,&local_a0);
  uVar3 = FUN_00583770(uVar3,&DAT_001fa730);
  plVar6 = (long *)FUN_00583890(uVar3,&DAT_001c717f);
  *(undefined8 *)(*plVar6 + 0x18) = DAT_001b7058;
  puVar5 = (undefined8 *)FUN_005839b8(plVar6,"CPUExecutionProvider");
  local_80 = PTR_DAT_007a2000;
  local_60 = &local_80;
  uVar3 = *puVar5;
  *puVar5 = 0;
  local_80 = local_80 + 0x10;
  *param_1 = uVar3;
  pcStack_78 = FUN_004bc1fc;
  param_1[2] = local_80;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004bc1fc;
  param_1[8] = 0;
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
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004b7a28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b7a2c  FUN_004b7a2c =====

void FUN_004b7a2c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  void *pvVar21;
  int *piVar22;
  undefined8 uVar23;
  int local_10c;
  byte local_108 [16];
  void *local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [80];
  char *local_88;
  char *local_80;
  char *pcStack_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *param_1 = param_3;
  puVar15 = param_1 + 4;
  param_1[5] = 0;
  *puVar15 = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  puVar11 = param_1 + 10;
  param_1[0xb] = 0;
  *puVar11 = 0;
  uVar12 = param_2[0x11] - param_2[0x10];
  iVar18 = (int)(uVar12 >> 3);
  piVar19 = (int *)((long)param_1 + 0x14);
  *piVar19 = iVar18;
  *(int *)(param_1 + 1) = iVar18 + -2;
  *(int *)((long)param_1 + 0xc) = (int)((ulong)(param_2[0x1a] - param_2[0x19]) >> 3);
  piVar20 = (int *)(param_1 + 2);
  *piVar20 = (int)((ulong)(param_2[0x17] - param_2[0x16]) >> 3);
  puVar1 = param_1 + 7;
  if ((uVar12 >> 3 & 0xffffffff) == 0) {
LAB_004b7b00:
    if (2 < iVar18) {
      lVar4 = 0;
      do {
        uVar5 = FUN_005de664(*(undefined8 *)(param_2[0x10] + lVar4 * 8 + 0x10));
        puVar9 = (undefined8 *)param_1[0xb];
        if (puVar9 < (undefined8 *)param_1[0xc]) {
          puVar16 = puVar9 + 1;
          *puVar9 = uVar5;
        }
        else {
          pvVar21 = (void *)*puVar11;
          lVar17 = (long)puVar9 - (long)pvVar21 >> 3;
          uVar12 = lVar17 + 1;
          if (uVar12 >> 0x3d != 0) {
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 004b7ea8 to 004b7ec7 has its CatchHandler @ 004b8188 */
              FUN_004bce04(puVar11);
LAB_004b7eb0:
              if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_002f9ee0();
              }
            }
            goto LAB_004b8110;
          }
          uVar13 = (long)param_1[0xc] - (long)pvVar21;
          uVar14 = (long)uVar13 >> 2;
          if (uVar14 <= uVar12) {
            uVar14 = uVar12;
          }
          if (0x7ffffffffffffff7 < uVar13) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            pvVar6 = (void *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) goto LAB_004b7eb0;
                    /* try { // try from 004b7b9c to 004b7b9f has its CatchHandler @ 004b8164 */
            pvVar6 = (void *)FUN_00759c3c(uVar14 << 3);
          }
          puVar2 = (undefined8 *)((long)pvVar6 + lVar17 * 8);
          puVar16 = puVar2 + 1;
          *puVar2 = uVar5;
          memcpy(pvVar6,pvVar21,(long)puVar9 - (long)pvVar21);
          param_1[10] = pvVar6;
          param_1[0xb] = puVar16;
          param_1[0xc] = (void *)((long)pvVar6 + uVar14 * 8);
          if (pvVar21 != (void *)0x0) {
            free(pvVar21);
          }
        }
        lVar4 = lVar4 + 1;
        param_1[0xb] = puVar16;
      } while (lVar4 < *(int *)(param_1 + 1));
      param_3 = *param_1;
    }
    plVar7 = (long *)FUN_005ee384(param_3);
    param_2 = (long *)FUN_005ee3bc(*param_1);
    iVar18 = *(int *)((long)param_1 + 0x14);
    uVar12 = (ulong)iVar18;
    if (uVar12 != plVar7[1] - *plVar7 >> 3) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004b7ed4 to 004b7edb has its CatchHandler @ 004b8128 */
      FUN_00645c30(auStack_f0);
                    /* try { // try from 004b7edc to 004b7efb has its CatchHandler @ 004b8114 */
      FUN_0047488c(auStack_d8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,0xb0,
                   "onnxruntime::Loop::Info::Info(const onnxruntime::Node &, const GraphViewer &)",
                   auStack_f0);
      local_88 = (char *)(plVar7[1] - *plVar7 >> 3);
      local_80 = " inputs. Found:";
      pcStack_78 = "Graph in \'body\' attribute of Loop should have ";
      FUN_004bce18(local_108,&pcStack_78,piVar19,&local_80,&local_88);
                    /* try { // try from 004b7f3c to 004b7f83 has its CatchHandler @ 004b8090 */
      FUN_00474a40(uVar5,auStack_d8,
                   "static_cast<size_t>(num_subgraph_inputs) == subgraph_inputs.size()",local_108);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b8110;
    }
    iVar10 = (int)((ulong)(param_2[1] - *param_2) >> 3);
    piVar22 = (int *)(param_1 + 3);
    *piVar22 = iVar10;
    if (iVar10 + -1 != *(int *)(param_1 + 2)) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004b7f94 to 004b7f9b has its CatchHandler @ 004b8124 */
      FUN_00645c30(auStack_f0);
                    /* try { // try from 004b7f9c to 004b7fbb has its CatchHandler @ 004b808c */
      FUN_0047488c(auStack_d8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,0xb6,
                   "onnxruntime::Loop::Info::Info(const onnxruntime::Node &, const GraphViewer &)",
                   auStack_f0);
      local_10c = *piVar20 + 1;
      local_88 = " but has ";
      local_80 = " outputs so the subgraph requires ";
      pcStack_78 = "\'Loop\' node has ";
      FUN_004bd050(local_108,&pcStack_78,piVar20,&local_80,&local_10c,&local_88,piVar22);
                    /* try { // try from 004b800c to 004b8053 has its CatchHandler @ 004b8088 */
      FUN_00474a40(uVar5,auStack_d8,"num_subgraph_outputs - 1 == num_outputs",local_108);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004b8110;
    }
    pvVar21 = (void *)param_1[4];
    if (uVar12 <= (ulong)((param_1[6] - (long)pvVar21 >> 3) * -0x5555555555555555)) {
LAB_004b7cc4:
      if (0 < iVar18) {
        lVar4 = 0;
        do {
          while( true ) {
            pbVar8 = (byte *)FUN_005de650(*(undefined8 *)(*plVar7 + lVar4 * 8));
            puVar9 = (undefined8 *)param_1[5];
            if ((undefined8 *)param_1[6] <= puVar9) break;
            if ((*pbVar8 & 1) == 0) {
              uVar23 = *(undefined8 *)(pbVar8 + 8);
              uVar5 = *(undefined8 *)pbVar8;
              puVar9[2] = *(undefined8 *)(pbVar8 + 0x10);
              puVar9[1] = uVar23;
              *puVar9 = uVar5;
            }
            else {
                    /* try { // try from 004b7d30 to 004b7d37 has its CatchHandler @ 004b8168 */
              FUN_002fb36c(puVar9,*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
            }
            param_1[5] = puVar9 + 3;
            lVar4 = lVar4 + 1;
            param_1[5] = puVar9 + 3;
            if (*(int *)((long)param_1 + 0x14) <= lVar4) goto LAB_004b7d54;
          }
                    /* try { // try from 004b7cd4 to 004b7cdf has its CatchHandler @ 004b8184 */
          uVar5 = FUN_0034e788(puVar15,pbVar8);
          lVar4 = lVar4 + 1;
          param_1[5] = uVar5;
        } while (lVar4 < *(int *)((long)param_1 + 0x14));
      }
LAB_004b7d54:
      pvVar21 = (void *)param_1[7];
      iVar18 = *(int *)(param_1 + 3);
      if ((ulong)((param_1[9] - (long)pvVar21 >> 3) * -0x5555555555555555) < (ulong)(long)iVar18) {
        puVar9 = puVar1;
        if (iVar18 < 0) goto LAB_004b8054;
        lVar4 = param_1[8];
                    /* try { // try from 004b7d94 to 004b7d97 has its CatchHandler @ 004b8148 */
        pvVar6 = (void *)FUN_00759c3c((long)iVar18 * 0x18);
        memcpy(pvVar6,pvVar21,lVar4 - (long)pvVar21);
        param_1[7] = pvVar6;
        param_1[8] = (long)pvVar6 + (lVar4 - (long)pvVar21);
        param_1[9] = (void *)((long)pvVar6 + (long)iVar18 * 0x18);
        if (pvVar21 != (void *)0x0) {
          free(pvVar21);
          iVar18 = *piVar22;
        }
      }
      if (0 < iVar18) {
        lVar4 = 0;
        do {
          while( true ) {
            pbVar8 = (byte *)FUN_005de650(*(undefined8 *)(*param_2 + lVar4 * 8));
            puVar11 = (undefined8 *)param_1[8];
            if ((undefined8 *)param_1[9] <= puVar11) break;
            if ((*pbVar8 & 1) == 0) {
              uVar23 = *(undefined8 *)(pbVar8 + 8);
              uVar5 = *(undefined8 *)pbVar8;
              puVar11[2] = *(undefined8 *)(pbVar8 + 0x10);
              puVar11[1] = uVar23;
              *puVar11 = uVar5;
            }
            else {
                    /* try { // try from 004b7e3c to 004b7e43 has its CatchHandler @ 004b814c */
              FUN_002fb36c(puVar11,*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
            }
            param_1[8] = puVar11 + 3;
            lVar4 = lVar4 + 1;
            param_1[8] = puVar11 + 3;
            if (*(int *)(param_1 + 3) <= lVar4) goto LAB_004b7e60;
          }
                    /* try { // try from 004b7de0 to 004b7deb has its CatchHandler @ 004b8180 */
          uVar5 = FUN_0034e788(puVar1,pbVar8);
          lVar4 = lVar4 + 1;
          param_1[8] = uVar5;
        } while (lVar4 < *(int *)(param_1 + 3));
      }
LAB_004b7e60:
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_004b8110;
    }
    puVar9 = puVar15;
    if (-1 < iVar18) {
      lVar4 = param_1[5];
                    /* try { // try from 004b7c84 to 004b7c87 has its CatchHandler @ 004b8148 */
      pvVar6 = (void *)FUN_00759c3c(uVar12 * 0x18);
      memcpy(pvVar6,pvVar21,lVar4 - (long)pvVar21);
      param_1[4] = pvVar6;
      param_1[5] = (long)pvVar6 + (lVar4 - (long)pvVar21);
      param_1[6] = (void *)((long)pvVar6 + (long)iVar18 * 0x18);
      if (pvVar21 != (void *)0x0) {
        free(pvVar21);
        iVar18 = *piVar19;
      }
      goto LAB_004b7cc4;
    }
LAB_004b8054:
    if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_004b8110;
                    /* try { // try from 004b8068 to 004b806b has its CatchHandler @ 004b8148 */
    FUN_00304228(puVar9);
  }
  else {
    uVar12 = (long)(uVar12 * 0x20000000) >> 0x20;
    if (uVar12 >> 0x3d == 0) {
                    /* try { // try from 004b7aec to 004b7aef has its CatchHandler @ 004b8144 */
      lVar4 = FUN_00759c3c(uVar12 << 3);
      param_1[10] = lVar4;
      param_1[0xb] = lVar4;
      param_1[0xc] = lVar4 + uVar12 * 8;
      goto LAB_004b7b00;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_004b8110;
                    /* try { // try from 004b8080 to 004b8087 has its CatchHandler @ 004b8144 */
  uVar5 = FUN_004bce04(puVar11);
                    /* catch() { ... } // from try @ 004b800c with catch @ 004b8088 */
                    /* catch() { ... } // from try @ 004b7f3c with catch @ 004b8090 */
  if ((local_108[0] & 1) == 0) {
    FUN_00474ee8(auStack_d8);
    FUN_00303bdc(auStack_f0);
    if (iVar18 == 0) goto LAB_004b80d0;
LAB_004b812c:
    FUN_00753b60(param_2);
    pvVar21 = (void *)*puVar11;
  }
  else {
    free(local_f8);
    FUN_00474ee8(auStack_d8);
    FUN_00303bdc(auStack_f0);
    if (iVar18 != 0) goto LAB_004b812c;
LAB_004b80d0:
    pvVar21 = (void *)*puVar11;
  }
  if (pvVar21 != (void *)0x0) {
    param_1[0xb] = pvVar21;
    free(pvVar21);
  }
  FUN_00303bdc(puVar1);
  FUN_00303bdc(puVar15);
  if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar5);
  }
LAB_004b8110:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b819c  FUN_004b819c =====

void FUN_004b819c(long param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_1b8 [24];
  void *local_1a0 [3];
  undefined1 auStack_188 [232];
  undefined8 local_a0;
  code *pcStack_98;
  void *local_90;
  long *local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00655b40(auStack_188,0,0);
  local_a0 = (undefined *)((ulong)local_a0._6_2_ << 0x30);
  local_a0 = (undefined *)CONCAT35(local_a0._5_3_,0x79646f6208);
                    /* try { // try from 004b81f0 to 004b8203 has its CatchHandler @ 004b8394 */
  FUN_005951e0(local_1a0,param_2,&local_a0,auStack_188);
  __ptr = local_1a0[0];
  local_1a0[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if (((ulong)local_a0 & 1) != 0) {
    free(local_90);
  }
  if (__ptr != (void *)0x0) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b82d0 to 004b82d7 has its CatchHandler @ 004b8384 */
    FUN_00645c30(local_1a0);
                    /* try { // try from 004b82d8 to 004b82f7 has its CatchHandler @ 004b8374 */
    FUN_0047488c(&local_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                 ,0x113,"void onnxruntime::Loop::Init(const OpKernelInfo &)",local_1a0);
    FUN_00476720(auStack_1b8);
                    /* try { // try from 004b8304 to 004b8347 has its CatchHandler @ 004b8348 */
    FUN_00474a40(uVar3,&local_a0,"info.GetAttr<ONNX_NAMESPACE::GraphProto>(\"body\", &proto).IsOK()"
                 ,auStack_1b8);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004b83c8;
  }
  local_a0 = PTR_DAT_007a2080 + 0x10;
  pcStack_98 = FUN_004b83cc;
  local_80 = &local_a0;
  FUN_004bc4c8(&local_a0,param_1 + 0x20);
  if (local_80 == &local_a0) {
    lVar4 = 0x20;
    plVar2 = &local_a0;
LAB_004b8288:
    (**(code **)(*plVar2 + lVar4))();
  }
  else if (local_80 != (long *)0x0) {
    lVar4 = 0x28;
    plVar2 = local_80;
    goto LAB_004b8288;
  }
  FUN_0065612c(auStack_188);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_004b83c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b83cc  FUN_004b83cc =====

void FUN_004b83cc(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,ulong param_5)

{
  void *__dest;
  long lVar1;
  long lVar2;
  ulong __n;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte local_98 [16];
  void *local_88;
  char *local_80;
  char *local_78;
  char *pcStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00483570(*param_3);
  __n = FUN_005c8858();
  if ((param_5 == 0xffffffffffffffff) || ((param_4 == 0 && (param_5 != 0)))) {
LAB_004b85b4:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  if (param_3[1] - *param_3 != 0) {
    uVar6 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555;
    if (__n == 0) {
      lVar9 = 0;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      do {
        plVar3 = (long *)FUN_00483570(*param_3 + lVar9);
        lVar5 = FUN_005c8858();
        if (lVar5 != 0) goto LAB_004b854c;
        uVar6 = uVar6 - 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar6 != 0);
    }
    else {
      if (__n == 0xffffffffffffffff) {
        plVar3 = (long *)FUN_00483570();
        lVar9 = FUN_005c8858();
        if (lVar9 == -1) goto LAB_004b85b4;
LAB_004b854c:
        local_78 = " Expected:";
        pcStack_70 = "Inconsistent shape in loop output for output. ";
        local_80 = " Got:";
        FUN_004bc26c(local_98,&pcStack_70,&local_78,lVar2 + 0x18,&local_80,plVar3 + 3);
                    /* try { // try from 004b8588 to 004b859b has its CatchHandler @ 004b85b8 */
        FUN_0063aa48(param_1,2,1,local_98);
        if ((local_98[0] & 1) != 0) {
          free(local_88);
        }
        goto LAB_004b8508;
      }
      lVar9 = 0;
      uVar8 = 0;
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      uVar7 = __n + param_5;
      do {
        plVar3 = (long *)FUN_00483570(*param_3 + lVar9);
        uVar4 = FUN_005c8858();
        if (__n != uVar4) goto LAB_004b854c;
        if (((*plVar3 == 0) || (param_5 < uVar8)) || (uVar7 = uVar7 - __n, uVar7 < __n))
        goto LAB_004b85b4;
        __dest = (void *)(param_4 + uVar8);
        uVar8 = uVar8 + __n;
        uVar6 = uVar6 - 1;
        lVar9 = lVar9 + 0x18;
        memmove(__dest,(void *)(*plVar3 + plVar3[0xf]),__n);
      } while (uVar6 != 0);
    }
  }
  *param_1 = 0;
LAB_004b8508:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b85ec  FUN_004b85ec =====

void FUN_004b85ec(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  void *__ptr;
  long *plVar17;
  size_t sVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  long local_130;
  byte local_118;
  char local_117 [8];
  undefined7 uStack_10f;
  char cStack_108;
  undefined4 uStack_107;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined4 local_fc;
  void *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar17 = (long *)(param_2 + 0x10);
  if (*plVar17 != 0) {
    uVar11 = FUN_00753a74(0x88);
                    /* try { // try from 004b8e7c to 004b8e83 has its CatchHandler @ 004b90b0 */
    FUN_00645c30(&local_d8);
                    /* try { // try from 004b8e84 to 004b8ea3 has its CatchHandler @ 004b9088 */
    FUN_0047488c(&local_c0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                 ,0x122,
                 "virtual common::Status onnxruntime::Loop::SetupSubgraphExecutionInfo(const SessionState &, const std::string &, const SessionState &)"
                 ,&local_d8);
                    /* try { // try from 004b8ea4 to 004b8eb3 has its CatchHandler @ 004b9050 */
    FUN_00479eac(&local_f0,
                 "SetupSubgraphExecutionInfo should only be called once for each subgraph.");
                    /* try { // try from 004b8eb8 to 004b8eff has its CatchHandler @ 004b8ff4 */
    FUN_00474a40(uVar11,&local_c0,"info_ == nullptr",&local_f0);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar11,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004b91a8;
  }
  lVar7 = FUN_0058d108();
  lVar8 = FUN_00759c3c(0x68);
                    /* try { // try from 004b8648 to 004b8653 has its CatchHandler @ 004b9104 */
  FUN_004b7a2c(lVar8,lVar7,param_5 + 0xc0);
  lVar12 = *plVar17;
  *plVar17 = lVar8;
  if (lVar12 != 0) {
    FUN_004bcc14(plVar17);
    lVar8 = *plVar17;
  }
  local_b8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  local_c0 = (byte *)0x0;
  uVar21 = (long)*(int *)(lVar8 + 0xc) + (long)*(int *)(lVar8 + 0x14);
  if (uVar21 == 0) {
    pbVar9 = (byte *)FUN_0034e788(&local_c0,*(undefined8 *)(lVar8 + 0x20));
    lVar8 = *(long *)(*plVar17 + 0x20);
    local_b8 = pbVar9;
    if (pbVar9 < local_b0) goto LAB_004b8750;
LAB_004b8700:
    local_b8 = (byte *)FUN_0034e788(&local_c0,lVar8 + 0x18);
    iVar3 = *(int *)(*plVar17 + 8);
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar21) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 004b8f10 to 004b8f17 has its CatchHandler @ 004b914c */
        FUN_00304228(&local_c0);
LAB_004b8f18:
        if (*(long *)(local_130 + 0x28) == local_70) {
                    /* try { // try from 004b8f2c to 004b8f33 has its CatchHandler @ 004b90fc */
          FUN_004b66f4(&local_f0);
LAB_004b8f34:
          if (*(long *)(local_130 + 0x28) == local_70) {
                    /* try { // try from 004b8f48 to 004b8f4f has its CatchHandler @ 004b90f4 */
            FUN_004b66f4(&local_f0);
LAB_004b8f50:
            if (*(long *)(local_130 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004b8f64 to 004b8f67 has its CatchHandler @ 004b90fc */
              FUN_002f9ee0();
            }
          }
        }
      }
      goto LAB_004b91a8;
    }
                    /* try { // try from 004b86a0 to 004b870b has its CatchHandler @ 004b914c */
    pbVar9 = (byte *)FUN_00759c3c(uVar21 * 0x18);
    local_b0 = pbVar9 + uVar21 * 0x18;
    pbVar13 = *(byte **)(lVar8 + 0x20);
    local_c0 = pbVar9;
    if ((*pbVar13 & 1) == 0) {
      uVar23 = *(undefined8 *)(pbVar13 + 8);
      uVar11 = *(undefined8 *)pbVar13;
      *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(pbVar13 + 0x10);
      *(undefined8 *)(pbVar9 + 8) = uVar23;
      *(undefined8 *)pbVar9 = uVar11;
    }
    else {
      local_b8 = pbVar9;
                    /* try { // try from 004b8728 to 004b872f has its CatchHandler @ 004b909c */
      FUN_002fb36c(pbVar9,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
    }
    pbVar9 = pbVar9 + 0x18;
    lVar8 = *(long *)(*plVar17 + 0x20);
    local_b8 = pbVar9;
    if (local_b0 <= pbVar9) goto LAB_004b8700;
LAB_004b8750:
    if ((*(byte *)(lVar8 + 0x18) & 1) == 0) {
      uVar23 = *(undefined8 *)(lVar8 + 0x20);
      uVar11 = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(pbVar9 + 8) = uVar23;
      *(undefined8 *)pbVar9 = uVar11;
    }
    else {
      local_b8 = pbVar9;
                    /* try { // try from 004b8770 to 004b8777 has its CatchHandler @ 004b9084 */
      FUN_002fb36c(pbVar9,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x20));
    }
    local_b8 = pbVar9 + 0x18;
    iVar3 = *(int *)(*plVar17 + 8);
  }
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      pbVar13 = (byte *)FUN_005de650(*(undefined8 *)(*(long *)(lVar7 + 0x80) + lVar8 * 8 + 0x10));
      pbVar9 = local_b8;
      if (local_b8 < local_b0) {
        if ((*pbVar13 & 1) == 0) {
          uVar23 = *(undefined8 *)(pbVar13 + 8);
          uVar11 = *(undefined8 *)pbVar13;
          *(undefined8 *)(local_b8 + 0x10) = *(undefined8 *)(pbVar13 + 0x10);
          *(undefined8 *)(local_b8 + 8) = uVar23;
          *(undefined8 *)local_b8 = uVar11;
        }
        else {
                    /* try { // try from 004b8800 to 004b8807 has its CatchHandler @ 004b9154 */
          FUN_002fb36c(local_b8,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
        }
        local_b8 = pbVar9 + 0x18;
      }
      else {
                    /* try { // try from 004b879c to 004b87a7 has its CatchHandler @ 004b9184 */
        local_b8 = (byte *)FUN_0034e788(&local_c0,pbVar13);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(*plVar17 + 8));
  }
  puVar2 = *(undefined8 **)(lVar7 + 0xd0);
  for (puVar19 = *(undefined8 **)(lVar7 + 200); puVar19 != puVar2; puVar19 = puVar19 + 1) {
    while (pbVar13 = (byte *)FUN_005de650(*puVar19), pbVar9 = local_b8, local_b8 < local_b0) {
      if ((*pbVar13 & 1) == 0) {
        uVar23 = *(undefined8 *)(pbVar13 + 8);
        uVar11 = *(undefined8 *)pbVar13;
        *(undefined8 *)(local_b8 + 0x10) = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)(local_b8 + 8) = uVar23;
        *(undefined8 *)local_b8 = uVar11;
      }
      else {
                    /* try { // try from 004b8880 to 004b8887 has its CatchHandler @ 004b9150 */
        FUN_002fb36c(local_b8,*(undefined8 *)(pbVar13 + 0x10),*(undefined8 *)(pbVar13 + 8));
      }
      local_b8 = pbVar9 + 0x18;
      puVar19 = puVar19 + 1;
      if (puVar19 == puVar2) goto LAB_004b88a0;
    }
                    /* try { // try from 004b882c to 004b8837 has its CatchHandler @ 004b9180 */
    local_b8 = (byte *)FUN_0034e788(&local_c0,pbVar13);
  }
LAB_004b88a0:
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
                    /* try { // try from 004b88a8 to 004b88bf has its CatchHandler @ 004b9100 */
  FUN_004b75c0(param_1,param_3,&local_c0,&local_d8,2);
  if (*param_1 == 0) {
    lVar8 = *plVar17;
    if (0 < *(int *)(lVar8 + 8)) {
      lVar12 = 0;
      lVar20 = 0x30;
      do {
                    /* try { // try from 004b890c to 004b8917 has its CatchHandler @ 004b9164 */
        FUN_007139b0(local_c0 + lVar20,*(long *)(lVar8 + 0x20) + lVar20);
        lVar8 = *plVar17;
        lVar12 = lVar12 + 1;
        lVar20 = lVar20 + 0x18;
      } while (lVar12 < *(int *)(lVar8 + 8));
    }
    local_f8 = (void *)0x0;
    if (((long)local_b8 - (long)local_c0 == -0x18) ||
       ((local_c0 == (byte *)0x0 && (local_b8 != (byte *)0x0)))) goto LAB_004b8e68;
    lVar12 = *(long *)(lVar8 + 0x38);
    lVar20 = *(long *)(lVar8 + 0x40) - lVar12;
    if ((lVar20 == -0x18) || ((lVar12 == 0 && (*(long *)(lVar8 + 0x40) != 0)))) goto LAB_004b8e68;
                    /* try { // try from 004b8984 to 004b8993 has its CatchHandler @ 004b90d4 */
    FUN_00581838(param_1,((long)local_b8 - (long)local_c0 >> 3) * -0x5555555555555555,local_c0,
                 (lVar20 >> 3) * -0x5555555555555555,lVar12,param_5 + 0x208,&local_f8);
    if (*param_1 == 0) {
                    /* try { // try from 004b89c4 to 004b89cf has its CatchHandler @ 004b90d4 */
      FUN_005db05c(param_1,param_5,local_f8);
      if (*param_1 == 0) {
        local_f0 = (long *)0x0;
        local_e8 = (long *)0x0;
        local_e0 = (long *)0x0;
        iVar3 = *(int *)(*plVar17 + 0x18);
        if (iVar3 != 0) {
          if (-1 < iVar3) {
                    /* try { // try from 004b8a1c to 004b8a1f has its CatchHandler @ 004b8fd4 */
            local_e8 = (long *)FUN_00759c3c((long)iVar3 << 3);
            local_e0 = local_e8 + iVar3;
            goto LAB_004b8a2c;
          }
          if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_004b91a8;
                    /* try { // try from 004b8f90 to 004b8f97 has its CatchHandler @ 004b8fd4 */
          FUN_004b66f4(&local_f0);
LAB_004b8f98:
          if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_004b91a8;
                    /* try { // try from 004b8fac to 004b8fcb has its CatchHandler @ 004b8fd0 */
          FUN_004b66f4(&local_f0);
LAB_004b8fb4:
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_002f9ee0();
          }
          goto LAB_004b91a8;
        }
LAB_004b8a2c:
        plVar16 = *(long **)(param_3 + 0x1f0);
        local_118 = 0x28;
        uStack_107 = 0x72656469;
        uStack_10f = (undefined7)s_CPUExecutionProvider_001d47e8._8_8_;
        cStack_108 = SUB81(s_CPUExecutionProvider_001d47e8._8_8_,7);
        local_117[0] = s_CPUExecutionProvider_001d47e8[0];
        local_117[1] = s_CPUExecutionProvider_001d47e8[1];
        local_117[2] = s_CPUExecutionProvider_001d47e8[2];
        local_117[3] = s_CPUExecutionProvider_001d47e8[3];
        local_117[4] = s_CPUExecutionProvider_001d47e8[4];
        local_117[5] = s_CPUExecutionProvider_001d47e8[5];
        local_117[6] = s_CPUExecutionProvider_001d47e8[6];
        local_117[7] = s_CPUExecutionProvider_001d47e8[7];
        uStack_103 = 0;
                    /* try { // try from 004b8a58 to 004b8a83 has its CatchHandler @ 004b8fdc */
        local_f0 = local_e8;
        lVar8 = FUN_004764cc(plVar16 + 0xb,&local_118);
        plVar16 = *(long **)(*plVar16 + *(long *)(lVar8 + 0x28) * 0x10);
        local_fc = (**(code **)(*plVar16 + 0xb0))(plVar16,0);
        if ((local_118 & 1) != 0) {
          free((void *)CONCAT26(uStack_102,CONCAT15(uStack_103,CONCAT41(uStack_107,cStack_108))));
        }
        plVar16 = local_f0;
        if (local_e8 < local_e0) {
          plVar22 = local_e8 + 1;
          *local_e8 = (long)&local_fc;
        }
        else {
          sVar18 = (long)local_e8 - (long)local_f0;
          lVar8 = (long)sVar18 >> 3;
          uVar21 = lVar8 + 1;
          if (uVar21 >> 0x3d != 0) goto LAB_004b8f98;
          uVar14 = (long)local_e0 - (long)local_f0 >> 2;
          if (uVar14 <= uVar21) {
            uVar14 = uVar21;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_e0 - (long)local_f0)) {
            uVar14 = 0x1fffffffffffffff;
          }
          if (uVar14 == 0) {
            plVar10 = (long *)0x0;
          }
          else {
            if (uVar14 >> 0x3d != 0) goto LAB_004b8fb4;
                    /* try { // try from 004b8afc to 004b8aff has its CatchHandler @ 004b8fd0 */
            plVar10 = (long *)FUN_00759c3c(uVar14 << 3);
          }
          plVar22 = plVar10 + lVar8 + 1;
          plVar10[lVar8] = (long)&local_fc;
          memcpy(plVar10,plVar16,sVar18);
          local_f0 = plVar10;
          local_e0 = plVar10 + uVar14;
          if (plVar16 != (long *)0x0) {
            local_e8 = plVar22;
            free(plVar16);
          }
        }
        uVar21 = (ulong)*(int *)(*plVar17 + 8);
        local_130 = lVar4;
        if (0 < *(int *)(*plVar17 + 8)) {
          lVar8 = 0;
          local_e8 = plVar22;
          do {
            pbVar13 = (byte *)FUN_005de650(*(undefined8 *)
                                            (*(long *)(lVar7 + 0x80) + lVar8 * 8 + 0x10));
            uVar21 = *(ulong *)(pbVar13 + 8);
            pbVar9 = *(byte **)(pbVar13 + 0x10);
            if ((*pbVar13 & 1) == 0) {
              pbVar9 = pbVar13 + 1;
              uVar21 = (ulong)(*pbVar13 >> 1);
            }
                    /* try { // try from 004b8ba0 to 004b8ba7 has its CatchHandler @ 004b912c */
            lVar12 = FUN_005dad20(param_3,pbVar9,uVar21);
            plVar16 = local_f0;
            if (local_e8 < local_e0) {
              plVar22 = local_e8 + 1;
              *local_e8 = lVar12;
            }
            else {
              sVar18 = (long)local_e8 - (long)local_f0;
              lVar20 = (long)sVar18 >> 3;
              uVar21 = lVar20 + 1;
              if (uVar21 >> 0x3d != 0) goto LAB_004b8f18;
              uVar14 = (long)local_e0 - (long)local_f0 >> 2;
              if (uVar14 <= uVar21) {
                uVar14 = uVar21;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_e0 - (long)local_f0)) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                if (uVar14 >> 0x3d != 0) goto LAB_004b8f50;
                    /* try { // try from 004b8c00 to 004b8c03 has its CatchHandler @ 004b90ac */
                plVar10 = (long *)FUN_00759c3c(uVar14 << 3);
              }
              plVar22 = plVar10 + lVar20 + 1;
              plVar10[lVar20] = lVar12;
              memcpy(plVar10,plVar16,sVar18);
              local_f0 = plVar10;
              local_e0 = plVar10 + uVar14;
              if (plVar16 != (long *)0x0) {
                local_e8 = plVar22;
                free(plVar16);
              }
            }
            lVar8 = lVar8 + 1;
            uVar21 = (ulong)*(int *)(*plVar17 + 8);
            local_e8 = plVar22;
          } while (lVar8 < (long)uVar21);
        }
        uVar14 = *(long *)(lVar7 + 0xb8) - *(long *)(lVar7 + 0xb0) >> 3;
        local_e8 = plVar22;
        if (uVar21 < uVar14) {
          do {
            pbVar13 = (byte *)FUN_005de650(*(undefined8 *)(*(long *)(lVar7 + 0xb0) + uVar21 * 8));
            uVar1 = *(ulong *)(pbVar13 + 8);
            pbVar9 = *(byte **)(pbVar13 + 0x10);
            if ((*pbVar13 & 1) == 0) {
              pbVar9 = pbVar13 + 1;
              uVar1 = (ulong)(*pbVar13 >> 1);
            }
                    /* try { // try from 004b8d80 to 004b8d87 has its CatchHandler @ 004b90f8 */
            lVar8 = FUN_005dad20(param_3,pbVar9,uVar1);
            plVar17 = local_f0;
            if (local_e8 < local_e0) {
              plVar16 = local_e8 + 1;
              *local_e8 = lVar8;
            }
            else {
              sVar18 = (long)local_e8 - (long)local_f0;
              lVar12 = (long)sVar18 >> 3;
              uVar1 = lVar12 + 1;
              if (uVar1 >> 0x3d != 0) goto LAB_004b8f34;
              uVar15 = (long)local_e0 - (long)local_f0 >> 2;
              if (uVar15 <= uVar1) {
                uVar15 = uVar1;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_e0 - (long)local_f0)) {
                uVar15 = 0x1fffffffffffffff;
              }
              if (uVar15 == 0) {
                plVar10 = (long *)0x0;
              }
              else {
                if (uVar15 >> 0x3d != 0) {
                  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004b8f7c to 004b8f7f has its CatchHandler @ 004b90f4 */
                    FUN_002f9ee0();
                  }
                  goto LAB_004b91a8;
                }
                    /* try { // try from 004b8de0 to 004b8de3 has its CatchHandler @ 004b9098 */
                plVar10 = (long *)FUN_00759c3c(uVar15 << 3);
              }
              plVar16 = plVar10 + lVar12 + 1;
              plVar10[lVar12] = lVar8;
              memcpy(plVar10,plVar17,sVar18);
              local_f0 = plVar10;
              local_e0 = plVar10 + uVar15;
              if (plVar17 != (long *)0x0) {
                local_e8 = plVar16;
                free(plVar17);
              }
            }
            uVar21 = uVar21 + 1;
            local_e8 = plVar16;
          } while (uVar14 != uVar21);
        }
        if ((((long)local_d0 - (long)local_d8 == -4) ||
            (((local_d8 == (void *)0x0 && (local_d0 != (void *)0x0)) ||
             ((long)local_e8 - (long)local_f0 == -8)))) || (local_f0 == (long *)0x0)) {
LAB_004b8e68:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 004b8c98 to 004b8ca3 has its CatchHandler @ 004b8fcc */
        FUN_005db4b8(local_f8,(long)local_d0 - (long)local_d8 >> 2,local_d8,
                     (long)local_e8 - (long)local_f0 >> 3);
        pvVar6 = local_f8;
        __ptr = *(void **)(param_2 + 0x18);
        local_f8 = (void *)0x0;
        *(void **)(param_2 + 0x18) = pvVar6;
        if (__ptr != (void *)0x0) {
          FUN_00493250(__ptr);
          free(__ptr);
        }
        *param_1 = 0;
        if (local_f0 != (long *)0x0) {
          local_e8 = local_f0;
          free(local_f0);
        }
      }
      else {
                    /* try { // try from 004b89d8 to 004b89f7 has its CatchHandler @ 004b8fd8 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                     ,"SetupSubgraphExecutionInfo",0x14d);
      }
    }
    else {
                    /* try { // try from 004b899c to 004b89bb has its CatchHandler @ 004b9070 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,"SetupSubgraphExecutionInfo",0x14c);
    }
    pvVar6 = local_f8;
    local_f8 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      FUN_00493250(pvVar6);
      free(pvVar6);
    }
  }
  else {
                    /* try { // try from 004b88c8 to 004b88e7 has its CatchHandler @ 004b90e0 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                 ,"SetupSubgraphExecutionInfo",0x141);
  }
  if (local_d8 != (void *)0x0) {
    local_d0 = local_d8;
    free(local_d8);
  }
  pbVar9 = local_c0;
  pbVar13 = local_b8;
  if (local_c0 != (byte *)0x0) {
    while (pbVar5 = pbVar13, pbVar5 != pbVar9) {
      pbVar13 = pbVar5 + -0x18;
      if ((*pbVar13 & 1) != 0) {
        free(*(void **)(pbVar5 + -8));
      }
    }
    local_b8 = pbVar9;
    free(local_c0);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_004b91a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b91ac  FUN_004b91ac =====

void FUN_004b91ac(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte local_f8 [16];
  void *local_e8;
  undefined8 *local_78 [3];
  undefined8 *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  local_f8[0] = 8;
  local_f8[1] = 0x62;
  local_f8[2] = 0x6f;
  local_f8[3] = 100;
  local_f8[4] = 0x79;
  local_f8[5] = 0;
                    /* try { // try from 004b91f8 to 004b920f has its CatchHandler @ 004b9548 */
  uVar3 = FUN_0058df10(param_3);
  lVar4 = FUN_0059e748(uVar6,uVar3,local_f8);
  if ((local_f8[0] & 1) != 0) {
    free(local_e8);
  }
  if (lVar4 == 0) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b938c to 004b9393 has its CatchHandler @ 004b9508 */
    FUN_00645c30(local_60);
                    /* try { // try from 004b9394 to 004b93b3 has its CatchHandler @ 004b94e0 */
    FUN_0047488c(local_f8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                 ,0x172,"virtual Status onnxruntime::Loop::Compute(OpKernelContext *) const",
                 local_60);
                    /* try { // try from 004b93b4 to 004b93c3 has its CatchHandler @ 004b94bc */
    FUN_00479eac(local_78,"Subgraph SessionState was not found for \'body\' attribute.");
                    /* try { // try from 004b93c8 to 004b940b has its CatchHandler @ 004b94a4 */
    FUN_00474a40(uVar3,local_f8,"session_state",local_78);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(param_2 + 0x18) == 0) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004b941c to 004b9423 has its CatchHandler @ 004b9504 */
    FUN_00645c30(local_60);
                    /* try { // try from 004b9424 to 004b9443 has its CatchHandler @ 004b94dc */
    FUN_0047488c(local_f8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                 ,0x173,"virtual Status onnxruntime::Loop::Compute(OpKernelContext *) const",
                 local_60);
                    /* try { // try from 004b9444 to 004b9453 has its CatchHandler @ 004b94a0 */
    FUN_00479eac(local_78,"CreateFeedsFetchesManager must be called prior to execution of graph.");
                    /* try { // try from 004b9458 to 004b949b has its CatchHandler @ 004b949c */
    FUN_00474a40(uVar3,local_f8,"feeds_fetches_manager_",local_78);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    FUN_004ba89c(local_f8,param_3,lVar4,*(undefined8 *)(param_2 + 0x10),param_2 + 0x20);
                    /* try { // try from 004b9248 to 004b9253 has its CatchHandler @ 004b9538 */
    FUN_004b9578(local_60,local_f8);
    puVar2 = local_60[0];
    if (local_60[0] == (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      *param_1 = 0;
                    /* try { // try from 004b9298 to 004b92a3 has its CatchHandler @ 004b9500 */
      FUN_004b9c70(local_78,local_f8,uVar3);
      puVar2 = local_60[0];
      local_60[0] = local_78[0];
      local_78[0] = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          free((void *)puVar2[3]);
        }
        free(puVar2);
        puVar2 = local_78[0];
        local_78[0] = (undefined8 *)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          if ((*(byte *)(puVar2 + 1) & 1) != 0) {
            free((void *)puVar2[3]);
          }
          free(puVar2);
        }
      }
      *param_1 = (long)local_60[0];
    }
    else {
                    /* try { // try from 004b925c to 004b9263 has its CatchHandler @ 004b9528 */
      puVar5 = (undefined8 *)FUN_00759c3c(0x20);
      *puVar5 = *puVar2;
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        uVar6 = puVar2[2];
        uVar3 = puVar2[1];
        puVar5[3] = puVar2[3];
        puVar5[2] = uVar6;
        puVar5[1] = uVar3;
      }
      else {
                    /* try { // try from 004b9304 to 004b9307 has its CatchHandler @ 004b94f0 */
        FUN_002fb36c(puVar5 + 1,puVar2[3],puVar2[2]);
      }
      *param_1 = (long)puVar5;
                    /* try { // try from 004b930c to 004b932b has its CatchHandler @ 004b9518 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,"Compute",0x178);
      puVar2 = local_60[0];
      local_60[0] = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar2 + 1) & 1) != 0) {
          free((void *)puVar2[3]);
        }
        free(puVar2);
      }
    }
    FUN_004ba748(local_f8);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004b9578  FUN_004b9578 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004b9578(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  void *__ptr;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *pvVar16;
  void *pvVar17;
  byte local_100;
  undefined7 uStack_ff;
  char cStack_f8;
  undefined7 uStack_f7;
  char cStack_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  byte local_e0;
  void *local_d0;
  byte *local_c8;
  byte *local_c0;
  uint local_b0 [4];
  void *local_a0;
  char *local_98;
  long *local_90;
  void *local_88;
  void *local_80;
  char *local_78;
  undefined *puStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_80 = (void *)0x0;
                    /* try { // try from 004b95b4 to 004b95bb has its CatchHandler @ 004b9c44 */
  lVar8 = FUN_004ae6a8(*param_2,0);
                    /* try { // try from 004b95c4 to 004b95ef has its CatchHandler @ 004b9c48 */
  lVar9 = FUN_004ae6a8(*param_2,1);
  if ((lVar8 == 0) || (lVar10 = FUN_005cabcc(lVar8 + 0x18), lVar10 == 1)) {
    if ((lVar9 != 0) && (lVar8 = FUN_005cabcc(lVar9 + 0x18), lVar8 != 1)) {
      local_98 = "\'Loop\' input \'cond\' should be a scalar tensor. Got shape of ";
      FUN_004bd33c(&local_100,&local_98,lVar9 + 0x18);
                    /* try { // try from 004b987c to 004b988f has its CatchHandler @ 004b9c20 */
      FUN_0063aa48(param_1,2,1,&local_100);
      goto LAB_004b9b18;
    }
    plVar11 = (long *)FUN_005ee384(*(undefined8 *)param_2[2]);
                    /* try { // try from 004b9610 to 004b9623 has its CatchHandler @ 004b9c40 */
    lVar8 = FUN_005de688(*(undefined8 *)*plVar11);
    if (lVar8 == 0) {
                    /* try { // try from 004b9894 to 004b98af has its CatchHandler @ 004b9c00 */
      FUN_0048a3f4(&local_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,0x1a7,"Initialize");
                    /* try { // try from 004b98b0 to 004b98bf has its CatchHandler @ 004b9bf0 */
      FUN_00475ff4(local_b0,&local_100,0);
      uVar12 = FUN_005de650(*(undefined8 *)*plVar11);
      local_78 = "Loop subgraph input 0 has unknown shape: ";
      puStack_70 = &DAT_001bc0af;
      FUN_004bd4f4(&local_98,local_b0,&puStack_70,&local_78,uVar12);
                    /* try { // try from 004b98f8 to 004b990b has its CatchHandler @ 004b9bc8 */
      FUN_0063aa48(param_1,2,1,&local_98);
      if (((ulong)local_98 & 1) != 0) {
        free(local_88);
      }
      pbVar4 = local_c8;
      if ((local_b0[0] & 1) != 0) {
        free(local_a0);
        pbVar4 = local_c8;
      }
      local_c8 = pbVar4;
      if (pbVar4 != (byte *)0x0) {
        while (pbVar5 = local_c0, pbVar5 != pbVar4) {
          local_c0 = pbVar5 + -0x18;
          if ((*local_c0 & 1) != 0) {
            free(*(void **)(pbVar5 + -8));
          }
        }
LAB_004b9b00:
        free(local_c8);
      }
LAB_004b9b08:
      if ((local_e0 & 1) != 0) {
        free(local_d0);
      }
      goto LAB_004b9b18;
    }
    lVar8 = FUN_005de688(*(undefined8 *)(*plVar11 + 8));
    if (lVar8 == 0) {
                    /* try { // try from 004b9928 to 004b9943 has its CatchHandler @ 004b9bc4 */
      FUN_0048a3f4(&local_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                   ,0x1a9,"Initialize");
                    /* try { // try from 004b9944 to 004b9953 has its CatchHandler @ 004b9bc0 */
      FUN_00475ff4(local_b0,&local_100,0);
      uVar12 = FUN_005de650(*(undefined8 *)(*plVar11 + 8));
      local_78 = "Loop subgraph input 1 has unknown shape: ";
      puStack_70 = &DAT_001bc0af;
      FUN_004bd4f4(&local_98,local_b0,&puStack_70,&local_78,uVar12);
                    /* try { // try from 004b998c to 004b999f has its CatchHandler @ 004b9bbc */
      FUN_0063aa48(param_1,2,1,&local_98);
      if (((ulong)local_98 & 1) != 0) {
        free(local_88);
      }
      pbVar4 = local_c8;
      if ((local_b0[0] & 1) != 0) {
        free(local_a0);
        pbVar4 = local_c8;
      }
      local_c8 = pbVar4;
      if (pbVar4 != (byte *)0x0) {
        while (pbVar5 = local_c0, pbVar5 != pbVar4) {
          local_c0 = pbVar5 + -0x18;
          if ((*local_c0 & 1) != 0) {
            free(*(void **)(pbVar5 + -8));
          }
        }
        goto LAB_004b9b00;
      }
      goto LAB_004b9b08;
    }
                    /* try { // try from 004b9630 to 004b9633 has its CatchHandler @ 004b9c1c */
    lVar8 = FUN_005de688(*(undefined8 *)*plVar11);
    iVar1 = *(int *)(lVar8 + 0x18);
                    /* try { // try from 004b9640 to 004b9643 has its CatchHandler @ 004b9c18 */
    lVar8 = FUN_005de688(*(undefined8 *)(*plVar11 + 8));
    lVar9 = param_2[1];
    iVar2 = *(int *)(lVar8 + 0x18);
    plVar11 = *(long **)(lVar9 + 0x1f0);
    local_100 = 0x28;
    uStack_ef = 0x72656469;
    uStack_f7 = (undefined7)s_CPUExecutionProvider_001d47e8._8_8_;
    cStack_f0 = SUB81(s_CPUExecutionProvider_001d47e8._8_8_,7);
    uStack_ff = (undefined7)s_CPUExecutionProvider_001d47e8._0_8_;
    cStack_f8 = SUB81(s_CPUExecutionProvider_001d47e8._0_8_,7);
    uStack_eb = 0;
                    /* try { // try from 004b9678 to 004b96a3 has its CatchHandler @ 004b9c28 */
    lVar8 = FUN_004764cc(plVar11 + 0xb,&local_100);
    plVar11 = *(long **)(*plVar11 + *(long *)(lVar8 + 0x28) * 0x10);
    local_b0[0] = (**(code **)(*plVar11 + 0xb0))(plVar11,0);
    FUN_005990d4(&local_98,lVar9,local_b0);
    if ((local_100 & 1) != 0) {
      free((void *)CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT41(uStack_ef,cStack_f0))));
    }
                    /* try { // try from 004b96d0 to 004b96df has its CatchHandler @ 004b9c08 */
    FUN_004bac04(&local_100,&local_98,0,iVar1 != 0);
    uVar12 = CONCAT71(uStack_ff,local_100);
    lVar8 = CONCAT71(uStack_f7,cStack_f8);
    if (lVar8 != 0) {
      FUN_00755c20(1,lVar8 + 8);
    }
    plVar11 = (long *)param_2[7];
    param_2[6] = uVar12;
    param_2[7] = lVar8;
    if ((plVar11 != (long *)0x0) &&
       (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
    plVar11 = (long *)CONCAT71(uStack_f7,cStack_f8);
    param_2[8] = CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT41(uStack_ef,cStack_f0)));
    if ((plVar11 != (long *)0x0) &&
       (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
                    /* try { // try from 004b9768 to 004b9773 has its CatchHandler @ 004b9c04 */
    FUN_004badc4(&local_100,&local_98,*(undefined1 *)(param_2 + 4),iVar2 != 0);
    uVar12 = CONCAT71(uStack_ff,local_100);
    lVar8 = CONCAT71(uStack_f7,cStack_f8);
    if (lVar8 != 0) {
      FUN_00755c20(1,lVar8 + 8);
    }
    plVar11 = (long *)param_2[10];
    param_2[9] = uVar12;
    param_2[10] = lVar8;
    if ((plVar11 != (long *)0x0) &&
       (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
    plVar11 = (long *)CONCAT71(uStack_f7,cStack_f8);
    param_2[0xb] = CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT41(uStack_ef,cStack_f0)));
    if ((plVar11 != (long *)0x0) &&
       (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN_0071245c(plVar11);
    }
    lVar8 = param_2[0xc];
    lVar9 = (long)param_2[0xd] - lVar8 >> 3;
    uVar13 = (long)*(int *)(param_2[2] + 0x10) - (long)*(int *)(param_2[2] + 8);
    bVar7 = uVar13 < (ulong)(lVar9 * -0x5555555555555555);
    lVar9 = uVar13 + lVar9 * 0x5555555555555555;
    if (bVar7 || lVar9 == 0) {
      if (bVar7) {
        puVar14 = (undefined8 *)(lVar8 + uVar13 * 0x18);
        puVar15 = (undefined8 *)param_2[0xd];
        while (puVar6 = puVar15, puVar6 != puVar14) {
          puVar15 = puVar6 + -3;
          pvVar16 = (void *)*puVar15;
          if (pvVar16 != (void *)0x0) {
            pvVar17 = (void *)puVar6[-2];
            __ptr = pvVar16;
            if (pvVar17 != pvVar16) {
              do {
                plVar11 = *(long **)((long)pvVar17 + -0x10);
                if ((plVar11 != (long *)0x0) &&
                   (lVar8 = FUN_00755c50(0xffffffffffffffff,plVar11 + 1), lVar8 == 0)) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  FUN_0071245c(plVar11);
                }
                pvVar17 = (void *)((long)pvVar17 + -0x18);
              } while (pvVar17 != pvVar16);
              __ptr = (void *)*puVar15;
            }
            puVar6[-2] = pvVar16;
            free(__ptr);
          }
        }
        param_2[0xd] = puVar14;
      }
    }
    else {
                    /* try { // try from 004b9824 to 004b9827 has its CatchHandler @ 004b9bb8 */
      FUN_004bd6b8(param_2 + 0xc,lVar9);
    }
    pvVar16 = local_80;
    local_80 = (void *)0x0;
    *param_1 = pvVar16;
    if (local_90 == (long *)0x0) goto LAB_004b9b28;
    lVar8 = FUN_00755c50(0xffffffffffffffff,local_90 + 1);
    if (lVar8 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      FUN_0071245c(local_90);
    }
    pvVar16 = local_80;
    if (local_80 == (void *)0x0) goto LAB_004b9b28;
    if ((*(byte *)((long)local_80 + 8) & 1) != 0) {
      free(*(void **)((long)local_80 + 0x18));
    }
  }
  else {
    local_98 = "\'Loop\' input \'M\' should be a scalar tensor. Got shape of ";
    FUN_004bd33c(&local_100,&local_98,lVar8 + 0x18);
                    /* try { // try from 004b9848 to 004b985b has its CatchHandler @ 004b9c24 */
    FUN_0063aa48(param_1,2,1,&local_100);
LAB_004b9b18:
    if ((local_100 & 1) == 0) goto LAB_004b9b28;
    pvVar16 = (void *)CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT41(uStack_ef,cStack_f0)));
  }
  free(pvVar16);
LAB_004b9b28:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004b9c70  FUN_004b9c70 =====

void FUN_004b9c70(long *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  void *pvVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *pbVar8;
  ulong *__src;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong *__dest;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong *puVar22;
  ulong uVar23;
  size_t __n;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  undefined8 uVar29;
  undefined8 *local_290 [2];
  void *local_280;
  byte local_270;
  void *local_260;
  byte *local_258;
  byte *local_250;
  ulong *local_240;
  ulong *local_238;
  ulong *local_230;
  long *local_228;
  long *local_220;
  undefined8 local_218;
  void *local_210;
  void *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  void *local_1f0;
  ulong *puStack_1e8;
  undefined8 *local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  void *local_1b8;
  undefined1 auStack_180 [272];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_200 = 0;
  local_1f8 = (undefined8 *)0x0;
  local_210 = (void *)0x0;
  local_208 = (void *)0x0;
  local_228 = (long *)0x0;
  local_220 = (long *)0x0;
  local_218 = 0;
                    /* try { // try from 004b9cbc to 004b9cc3 has its CatchHandler @ 004ba680 */
  FUN_004baf88(param_2,&local_210);
                    /* try { // try from 004b9cc4 to 004b9ccf has its CatchHandler @ 004ba6ac */
  FUN_0047dea4(param_2 + 6);
  plVar9 = (long *)FUN_004bb758();
  lVar16 = *plVar9;
  if (lVar16 < param_2[3]) {
    do {
                    /* try { // try from 004b9d18 to 004b9d43 has its CatchHandler @ 004ba6e4 */
      FUN_0047dea4(param_2 + 9);
      pcVar10 = (char *)FUN_004bb908();
      lVar16 = *plVar9;
      if (*pcVar10 == '\0') break;
      if (lVar16 != 0) {
        FUN_004bb180(param_2,&local_228,&local_210);
        plVar11 = local_228;
        for (plVar25 = local_220; plVar25 != plVar11; plVar25 = plVar25 + -3) {
          plVar24 = (long *)plVar25[-2];
          if ((plVar24 != (long *)0x0) &&
             (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar24 + 1), lVar16 == 0)) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            FUN_0071245c(plVar24);
          }
        }
        local_220 = plVar11;
      }
      pvVar5 = local_210;
      lVar16 = (long)local_208 - (long)local_210;
      if ((lVar16 == -0x18) ||
         ((lVar26 = param_2[1], local_210 == (void *)0x0 && (local_208 != (void *)0x0))))
      goto LAB_004ba5bc;
      plVar11 = (long *)*param_2;
      local_1d0 = 0x3f800000;
      lVar27 = plVar11[9];
      lVar18 = plVar11[4];
      puStack_1e8 = (ulong *)0x0;
      local_1f0 = (void *)0x0;
      uStack_1d8 = 0;
      local_1e0 = (undefined8 *)0x0;
                    /* try { // try from 004b9dcc to 004b9e0b has its CatchHandler @ 004ba6d0 */
      uVar12 = (**(code **)(*plVar11 + 0x60))();
      FUN_005de030(local_290,lVar26,param_3,(lVar16 >> 3) * -0x5555555555555555,pvVar5,&local_228,
                   &local_1f0,0,lVar27,lVar18,uVar12,1);
      puVar13 = local_1f8;
      local_1f8 = local_290[0];
      local_290[0] = (undefined8 *)0x0;
      pvVar5 = local_1f0;
      puVar14 = local_1e0;
      if (puVar13 != (undefined8 *)0x0) {
        if ((*(byte *)(puVar13 + 1) & 1) != 0) {
          free((void *)puVar13[3]);
        }
        free(puVar13);
        puVar13 = local_290[0];
        local_290[0] = (undefined8 *)0x0;
        pvVar5 = local_1f0;
        puVar14 = local_1e0;
        if (puVar13 != (undefined8 *)0x0) {
          if ((*(byte *)(puVar13 + 1) & 1) != 0) {
            free((void *)puVar13[3]);
          }
          free(puVar13);
          pvVar5 = local_1f0;
          puVar14 = local_1e0;
        }
      }
      while (puVar14 != (undefined8 *)0x0) {
        plVar25 = (long *)puVar14[8];
        plVar11 = puVar14 + 4;
        pvVar19 = (void *)*puVar14;
        local_1f0 = pvVar5;
        if (plVar25 == plVar11) {
          lVar16 = 0x20;
LAB_004b9edc:
          (**(code **)(*plVar11 + lVar16))();
        }
        else if (plVar25 != (long *)0x0) {
          lVar16 = 0x28;
          plVar11 = plVar25;
          goto LAB_004b9edc;
        }
        free(puVar14);
        pvVar5 = local_1f0;
        puVar14 = (undefined8 *)pvVar19;
      }
      local_1f0 = (void *)0x0;
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      puVar14 = local_1f8;
      plVar11 = local_228;
      if (local_1f8 != (undefined8 *)0x0) {
                    /* try { // try from 004ba3c8 to 004ba3cf has its CatchHandler @ 004ba6ac */
        puVar13 = (undefined8 *)FUN_00759c3c(0x20);
        *puVar13 = *puVar14;
        if ((*(byte *)(puVar14 + 1) & 1) == 0) {
          uVar29 = puVar14[2];
          uVar12 = puVar14[1];
          puVar13[3] = puVar14[3];
          puVar13[2] = uVar29;
          puVar13[1] = uVar12;
        }
        else {
                    /* try { // try from 004ba470 to 004ba473 has its CatchHandler @ 004ba62c */
          FUN_002fb36c(puVar13 + 1,puVar14[3],puVar14[2]);
        }
        *param_1 = (long)puVar13;
                    /* try { // try from 004ba478 to 004ba497 has its CatchHandler @ 004ba650 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                     ,"Execute",0x205);
        goto LAB_004ba498;
      }
      *param_1 = 0;
      lVar16 = *local_228;
      lVar26 = local_228[1];
      if (lVar26 != 0) {
        FUN_00755c20(1,lVar26 + 8);
      }
      plVar25 = (long *)param_2[10];
      param_2[9] = lVar16;
      param_2[10] = lVar26;
      if ((plVar25 != (long *)0x0) &&
         (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar25 + 1), lVar16 == 0)) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        FUN_0071245c(plVar25);
      }
      param_2[0xb] = plVar11[2];
      lVar16 = *plVar9 + 1;
      *plVar9 = lVar16;
    } while (lVar16 < param_2[3]);
  }
  puVar14 = (undefined8 *)param_2[2];
  iVar15 = *(int *)(puVar14 + 1);
  if (lVar16 == 0) {
    if (0 < iVar15) {
      uVar23 = 0;
      lVar16 = 0x30;
      do {
                    /* try { // try from 004ba060 to 004ba073 has its CatchHandler @ 004ba6c4 */
        FUN_004bbab8(param_1,param_2,(long)local_210 + lVar16,uVar23 & 0xffffffff,*plVar9,
                     *(undefined8 *)(puVar14[10] + uVar23 * 8));
        if (*param_1 != 0) {
                    /* try { // try from 004ba420 to 004ba43f has its CatchHandler @ 004ba648 */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                       ,"Execute",0x25f);
          goto LAB_004ba498;
        }
        puVar14 = (undefined8 *)param_2[2];
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x18;
      } while ((long)uVar23 < (long)*(int *)(puVar14 + 1));
    }
    plVar9 = (long *)FUN_005ee3bc(*puVar14);
    iVar15 = *(int *)(param_2[2] + 8);
    uVar23 = (long)iVar15;
    if (iVar15 < *(int *)(param_2[2] + 0x10)) {
      do {
        uVar1 = uVar23 + 1;
        if ((ulong)(plVar9[1] - *plVar9 >> 3) <= uVar1) {
          if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 004ba608 to 004ba60f has its CatchHandler @ 004ba6c0 */
            FUN_004bdd60(plVar9);
LAB_004ba610:
            if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 004ba624 to 004ba62b has its CatchHandler @ 004ba678 */
                    /* WARNING: Subroutine does not return */
              FUN_0034e528(&local_240);
            }
          }
          goto LAB_004ba744;
        }
                    /* try { // try from 004ba0f8 to 004ba0fb has its CatchHandler @ 004ba6bc */
        lVar16 = FUN_005de688(*(undefined8 *)(*plVar9 + uVar1 * 8));
        local_240 = (ulong *)0x0;
        local_238 = (ulong *)0x0;
        local_230 = (ulong *)0x0;
        if (lVar16 == 0) {
          uVar20 = 1;
LAB_004ba214:
                    /* try { // try from 004ba218 to 004ba21b has its CatchHandler @ 004ba6a4 */
          local_240 = (ulong *)FUN_00759c3c(uVar20 << 3);
          local_230 = local_240 + uVar20;
          local_238 = local_240 + 1;
          *local_240 = 0;
          if (lVar16 == 0) goto LAB_004ba134;
LAB_004ba230:
                    /* try { // try from 004ba230 to 004ba23b has its CatchHandler @ 004ba69c */
          FUN_005cf088(&local_1f0,lVar16);
          if ((local_1f0 == (void *)0xffffffffffffffff) ||
             ((local_1f0 != (void *)0x0 && (puStack_1e8 == (ulong *)0x0)))) goto LAB_004ba5bc;
          if (local_1f0 != (void *)0x0) {
            if (puStack_1e8 == (ulong *)0x0) {
LAB_004ba5bc:
                    /* WARNING: Subroutine does not return */
              FUN_004839bc();
            }
            puVar3 = puStack_1e8 + (long)local_1f0;
            lVar16 = (long)local_1f0 << 3;
            puVar22 = puStack_1e8;
            do {
              __src = local_240;
              if (puVar3 <= puVar22) goto LAB_004ba5bc;
              uVar20 = *puVar22 & ((long)*puVar22 >> 0x3f ^ 0xffffffffffffffffU);
              if (local_238 < local_230) {
                puVar28 = local_238 + 1;
                *local_238 = uVar20;
              }
              else {
                __n = (long)local_238 - (long)local_240;
                lVar26 = (long)__n >> 3;
                uVar2 = lVar26 + 1;
                if (uVar2 >> 0x3d != 0) {
                  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 004ba5d4 to 004ba5f3 has its CatchHandler @ 004ba6ec */
                    /* WARNING: Subroutine does not return */
                    FUN_0034e528(&local_240);
                  }
                  goto LAB_004ba744;
                }
                uVar17 = (long)local_230 - (long)local_240 >> 2;
                if (uVar17 <= uVar2) {
                  uVar17 = uVar2;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_230 - (long)local_240)) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  __dest = (ulong *)0x0;
                }
                else {
                  if (uVar17 >> 0x3d != 0) {
                    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                      FUN_002f9ee0();
                    }
                    goto LAB_004ba744;
                  }
                    /* try { // try from 004ba2e4 to 004ba2e7 has its CatchHandler @ 004ba6e0 */
                  __dest = (ulong *)FUN_00759c3c(uVar17 << 3);
                }
                puVar28 = __dest + lVar26 + 1;
                __dest[lVar26] = uVar20;
                memcpy(__dest,__src,__n);
                local_240 = __dest;
                local_230 = __dest + uVar17;
                if (__src != (ulong *)0x0) {
                  local_238 = puVar28;
                  free(__src);
                }
              }
              lVar16 = lVar16 + -8;
              puVar22 = puVar22 + 1;
              local_238 = puVar28;
            } while (lVar16 != 0);
          }
          pvVar5 = local_1b8;
          local_1b8 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            free(pvVar5);
          }
        }
        else {
          uVar20 = (long)*(int *)(lVar16 + 0x18) + 1;
          if ((long)*(int *)(lVar16 + 0x18) != -1) {
            if (uVar20 >> 0x3d != 0) goto LAB_004ba610;
            goto LAB_004ba214;
          }
                    /* try { // try from 004ba118 to 004ba11f has its CatchHandler @ 004ba670 */
          local_240 = (ulong *)FUN_00759c3c(8);
          local_238 = local_240 + 1;
          *local_240 = 0;
          local_230 = local_238;
          if (lVar16 != 0) goto LAB_004ba230;
LAB_004ba134:
          puVar7 = PTR_s_onnxruntime_007a9878;
          lVar16 = *(long *)(*param_2 + 0x20);
          if (*(int *)(lVar16 + 0x20) < 3) {
                    /* try { // try from 004ba154 to 004ba16f has its CatchHandler @ 004ba668 */
            FUN_0048a3f4(local_290,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                         ,0x279,"Execute");
                    /* try { // try from 004ba170 to 004ba18b has its CatchHandler @ 004ba660 */
            FUN_0048a554(&local_1f0,lVar16,2,puVar7,0,local_290);
                    /* try { // try from 004ba18c to 004ba1bb has its CatchHandler @ 004ba684 */
            uVar12 = FUN_00303e0c(auStack_180,
                                  "Loop had zero iterations and the shape of subgraph output ",0x3a)
            ;
            uVar12 = FUN_00717214(uVar12,uVar1 & 0xffffffff);
            FUN_00303e0c(uVar12," was not found. Defaulting to a rank 1 shape of {0}.",0x34);
            FUN_00637fac(&local_1f0);
            pbVar8 = local_258;
            pbVar21 = local_250;
            if (local_258 != (byte *)0x0) {
              while (pbVar6 = pbVar21, pbVar6 != pbVar8) {
                pbVar21 = pbVar6 + -0x18;
                if ((*pbVar21 & 1) != 0) {
                  free(*(void **)(pbVar6 + -8));
                }
              }
              local_250 = pbVar8;
              free(local_258);
            }
            if ((local_270 & 1) != 0) {
              free(local_260);
            }
            if (((ulong)local_290[0] & 1) != 0) {
              free(local_280);
            }
          }
        }
        if (((long)local_238 - (long)local_240 == -8) ||
           ((lVar16 = *param_2, local_240 == (ulong *)0x0 && (local_238 != (ulong *)0x0))))
        goto LAB_004ba5bc;
                    /* try { // try from 004ba358 to 004ba363 has its CatchHandler @ 004ba6b4 */
        FUN_005ca9a8(&local_1f0,(long)local_238 - (long)local_240 >> 3);
                    /* try { // try from 004ba364 to 004ba373 has its CatchHandler @ 004ba6b0 */
        FUN_0058d3bc(lVar16,uVar23 & 0xffffffff,&local_1f0);
        pvVar5 = local_1b8;
        local_1b8 = (void *)0x0;
        if (pvVar5 != (void *)0x0) {
          free(pvVar5);
        }
        if (local_240 != (ulong *)0x0) {
          local_238 = local_240;
          free(local_240);
        }
        uVar23 = uVar1;
      } while ((long)uVar1 < (long)*(int *)(param_2[2] + 0x10));
    }
  }
  else {
    if (0 < iVar15) {
      uVar23 = 0;
      lVar16 = 0x18;
      do {
                    /* try { // try from 004b9f44 to 004b9f57 has its CatchHandler @ 004ba6cc */
        FUN_004bbab8(param_1,param_2,(long)local_228 + lVar16,uVar23 & 0xffffffff,*plVar9,
                     *(undefined8 *)(puVar14[10] + uVar23 * 8));
        if (*param_1 != 0) {
                    /* try { // try from 004ba3fc to 004ba41b has its CatchHandler @ 004ba64c */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                       ,"Execute",0x251);
          goto LAB_004ba498;
        }
        puVar14 = (undefined8 *)param_2[2];
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x18;
        iVar15 = *(int *)(puVar14 + 1);
      } while ((long)uVar23 < (long)iVar15);
    }
    if (iVar15 < *(int *)(puVar14 + 2)) {
      uVar23 = (ulong)iVar15;
      lVar16 = (uVar23 + (long)iVar15 * 2) * 8;
      do {
        plVar9 = local_228;
        lVar26 = param_2[0xc] + (long)*(int *)(puVar14 + 1) * -0x18 + lVar16;
        puVar14 = *(undefined8 **)(lVar26 + 8);
        if (puVar14 < *(undefined8 **)(lVar26 + 0x10)) {
          *puVar14 = *(undefined8 *)((long)local_228 + lVar16 + 0x18);
          lVar18 = *(long *)((long)local_228 + lVar16 + 0x20);
          puVar14[1] = lVar18;
          if (lVar18 != 0) {
            FUN_00755c20(1,lVar18 + 8);
          }
          puVar13 = puVar14 + 3;
          puVar14[2] = *(undefined8 *)((long)plVar9 + lVar16 + 0x28);
        }
        else {
                    /* try { // try from 004b9ff4 to 004ba017 has its CatchHandler @ 004ba6c8 */
          puVar13 = (undefined8 *)FUN_00476fb0(lVar26,(long)local_228 + lVar16 + 0x18);
        }
        *(undefined8 **)(lVar26 + 8) = puVar13;
        FUN_004bb47c(param_1,param_2,lVar26,uVar23 & 0xffffffff);
        if (*param_1 != 0) {
                    /* try { // try from 004ba444 to 004ba467 has its CatchHandler @ 004ba638 */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                       ,"Execute",0x259);
          goto LAB_004ba498;
        }
        puVar14 = (undefined8 *)param_2[2];
        uVar23 = uVar23 + 1;
        lVar16 = lVar16 + 0x18;
      } while ((long)uVar23 < (long)*(int *)(puVar14 + 2));
    }
  }
  puVar14 = local_1f8;
  local_1f8 = (undefined8 *)0x0;
  *param_1 = (long)puVar14;
LAB_004ba498:
  plVar11 = local_228;
  plVar9 = local_220;
  if (local_228 != (long *)0x0) {
    for (; plVar9 != plVar11; plVar9 = plVar9 + -3) {
      plVar25 = (long *)plVar9[-2];
      if ((plVar25 != (long *)0x0) &&
         (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar25 + 1), lVar16 == 0)) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        FUN_0071245c(plVar25);
      }
    }
    local_220 = plVar11;
    free(local_228);
  }
  pvVar19 = local_210;
  pvVar5 = local_208;
  if (local_210 != (void *)0x0) {
    for (; pvVar5 != pvVar19; pvVar5 = (void *)((long)pvVar5 + -0x18)) {
      plVar9 = *(long **)((long)pvVar5 + -0x10);
      if ((plVar9 != (long *)0x0) &&
         (lVar16 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar16 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
    }
    local_208 = pvVar19;
    free(local_210);
  }
  puVar14 = local_1f8;
  if (local_1f8 != (undefined8 *)0x0) {
    if ((*(byte *)(local_1f8 + 1) & 1) != 0) {
      free((void *)local_1f8[3]);
    }
    free(puVar14);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_004ba744:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ba748  FUN_004ba748 =====

void FUN_004ba748(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    puVar1 = puVar4;
    if (puVar5 != puVar4) {
      do {
        puVar1 = puVar5 + -3;
        pvVar6 = (void *)*puVar1;
        if (pvVar6 != (void *)0x0) {
          pvVar7 = (void *)puVar5[-2];
          __ptr = pvVar6;
          if (pvVar7 != pvVar6) {
            do {
              plVar3 = *(long **)((long)pvVar7 + -0x10);
              if ((plVar3 != (long *)0x0) &&
                 (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
                FUN_0071245c(plVar3);
              }
              pvVar7 = (void *)((long)pvVar7 + -0x18);
            } while (pvVar7 != pvVar6);
            __ptr = (void *)*puVar1;
          }
          puVar5[-2] = pvVar6;
          free(__ptr);
        }
        puVar5 = puVar1;
      } while (puVar1 != puVar4);
      puVar1 = *(undefined8 **)(param_1 + 0x60);
    }
    *(undefined8 **)(param_1 + 0x68) = puVar4;
    free(puVar1);
  }
  plVar3 = *(long **)(param_1 + 0x50);
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    plVar3 = *(long **)(param_1 + 0x38);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    plVar3 = *(long **)(param_1 + 0x38);
  }
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 004ba89c  FUN_004ba89c =====

void FUN_004ba89c(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[5] = param_2 + 0x50;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_5;
                    /* try { // try from 004ba8dc to 004ba8ef has its CatchHandler @ 004ba948 */
  lVar1 = FUN_004ae6a8(param_2,0);
  if (lVar1 == 0) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    plVar2 = (long *)FUN_004ba96c();
    lVar1 = *plVar2;
  }
  param_1[3] = lVar1;
                    /* try { // try from 004ba900 to 004ba913 has its CatchHandler @ 004ba944 */
  lVar1 = FUN_004ae6a8(param_2,1);
  if (lVar1 != 0) {
    puVar3 = (undefined1 *)FUN_004b4d38();
    *(undefined1 *)(param_1 + 4) = *puVar3;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ===== 004ba96c  FUN_004ba96c =====

long FUN_004ba96c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 7) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004ba9e0 to 004ba9e7 has its CatchHandler @ 004baaf8 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004ba9e8 to 004baa07 has its CatchHandler @ 004baae8 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xd2,"const T *onnxruntime::Tensor::Data() const [T = long]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004baa44 to 004baa8b has its CatchHandler @ 004baa8c */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bab1c  FUN_004bab1c =====

void FUN_004bab1c(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar5 != puVar4) {
    do {
      puVar2 = puVar5 + -3;
      pvVar6 = (void *)*puVar2;
      if (pvVar6 != (void *)0x0) {
        pvVar7 = (void *)puVar5[-2];
        __ptr = pvVar6;
        if (pvVar7 != pvVar6) {
          do {
            plVar3 = *(long **)((long)pvVar7 + -0x10);
            if ((plVar3 != (long *)0x0) &&
               (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              FUN_0071245c(plVar3);
            }
            pvVar7 = (void *)((long)pvVar7 + -0x18);
          } while (pvVar7 != pvVar6);
          __ptr = (void *)*puVar2;
        }
        puVar5[-2] = pvVar6;
        free(__ptr);
      }
      puVar5 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  free(puVar2);
  return;
}


// ===== 004bac04  FUN_004bac04 =====

void FUN_004bac04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
    __ptr_00 = (undefined8 *)0x0;
  }
  else {
    __ptr_00 = (undefined8 *)FUN_00759c3c(8);
    puVar5 = __ptr_00 + 1;
    *__ptr_00 = 1;
  }
  if (((long)puVar5 - (long)__ptr_00 == -8) ||
     ((__ptr_00 == (undefined8 *)0x0 && (puVar5 != (undefined8 *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 004bac70 to 004bac7f has its CatchHandler @ 004bad60 */
  FUN_005ca9a8(auStack_88,(long)puVar5 - (long)__ptr_00 >> 3,__ptr_00);
                    /* try { // try from 004bac80 to 004bac83 has its CatchHandler @ 004bad58 */
  uVar3 = FUN_00578044();
  local_98 = *param_2;
  local_90 = (long *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_90 != (long *)0x0) {
    FUN_00755c20(1,local_90 + 1);
  }
                    /* try { // try from 004bacac to 004bacbb has its CatchHandler @ 004bad48 */
  FUN_005c8610(uVar3,auStack_88,&local_98,param_1);
  plVar2 = local_90;
  if ((local_90 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
                    /* try { // try from 004bacec to 004bacf7 has its CatchHandler @ 004bad6c */
  FUN_0047dea4(param_1);
  puVar5 = (undefined8 *)FUN_004bb758();
  __ptr = local_50;
  local_50 = (void *)0x0;
  *puVar5 = param_3;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (undefined8 *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004badc4  FUN_004badc4 =====

void FUN_004badc4(undefined8 *param_1,undefined8 *param_2,byte param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
    __ptr_00 = (undefined8 *)0x0;
  }
  else {
    __ptr_00 = (undefined8 *)FUN_00759c3c(8);
    puVar6 = __ptr_00 + 1;
    *__ptr_00 = 1;
  }
  if (((long)puVar6 - (long)__ptr_00 == -8) ||
     ((__ptr_00 == (undefined8 *)0x0 && (puVar6 != (undefined8 *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 004bae30 to 004bae3f has its CatchHandler @ 004baf24 */
  FUN_005ca9a8(auStack_88,(long)puVar6 - (long)__ptr_00 >> 3,__ptr_00);
                    /* try { // try from 004bae40 to 004bae43 has its CatchHandler @ 004baf1c */
  uVar3 = FUN_00577f3c();
  local_98 = *param_2;
  local_90 = (long *)param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_90 != (long *)0x0) {
    FUN_00755c20(1,local_90 + 1);
  }
                    /* try { // try from 004bae6c to 004bae7b has its CatchHandler @ 004baf0c */
  FUN_005c8610(uVar3,auStack_88,&local_98,param_1);
  plVar2 = local_90;
  if ((local_90 != (long *)0x0) &&
     (lVar4 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
                    /* try { // try from 004baeac to 004baeb7 has its CatchHandler @ 004baf30 */
  FUN_0047dea4(param_1);
  pbVar5 = (byte *)FUN_004bb908();
  __ptr = local_50;
  local_50 = (void *)0x0;
  *pbVar5 = param_3 & 1;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (undefined8 *)0x0) {
    free(__ptr_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004baf88  FUN_004baf88 =====

void FUN_004baf88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  FUN_00485aec(param_2,(long)*(int *)(param_1[2] + 0xc) + (long)*(int *)(param_1[2] + 0x14));
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
    lVar4 = param_1[7];
    *puVar2 = param_1[6];
    puVar2[1] = lVar4;
    if (lVar4 != 0) {
      FUN_00755c20(1,lVar4 + 8);
    }
    puVar2[2] = param_1[8];
    puVar2 = puVar2 + 3;
    *(undefined8 **)(param_2 + 8) = puVar2;
    if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
LAB_004bb040:
      lVar4 = param_1[10];
      *puVar2 = param_1[9];
      puVar2[1] = lVar4;
      if (lVar4 != 0) {
        FUN_00755c20(1,lVar4 + 8);
      }
      puVar1 = puVar2 + 3;
      puVar2[2] = param_1[0xb];
      lVar4 = param_1[2];
      *(undefined8 **)(param_2 + 8) = puVar1;
      iVar6 = *(int *)(lVar4 + 0x14);
      goto joined_r0x004bb018;
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_00476fb0(param_2,param_1 + 6);
    *(undefined8 **)(param_2 + 8) = puVar2;
    if (puVar2 < *(undefined8 **)(param_2 + 0x10)) goto LAB_004bb040;
  }
  puVar1 = (undefined8 *)FUN_00476fb0(param_2,param_1 + 9);
  lVar4 = param_1[2];
  *(undefined8 **)(param_2 + 8) = puVar1;
  iVar6 = *(int *)(lVar4 + 0x14);
joined_r0x004bb018:
  if (2 < iVar6) {
    iVar6 = 2;
    do {
      puVar3 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x70))((long *)*param_1,iVar6);
      puVar2 = *(undefined8 **)(param_2 + 8);
      if (puVar2 < *(undefined8 **)(param_2 + 0x10)) {
        lVar4 = puVar3[1];
        *puVar2 = *puVar3;
        puVar2[1] = lVar4;
        if (lVar4 != 0) {
          FUN_00755c20(1,lVar4 + 8);
        }
        puVar1 = puVar2 + 3;
        puVar2[2] = puVar3[2];
      }
      else {
        puVar1 = (undefined8 *)FUN_00476fb0(param_2,puVar3);
      }
      lVar4 = param_1[2];
      iVar6 = iVar6 + 1;
      *(undefined8 **)(param_2 + 8) = puVar1;
    } while (iVar6 < *(int *)(lVar4 + 0x14));
  }
  puVar2 = *(undefined8 **)param_1[5];
  puVar3 = (undefined8 *)((undefined8 *)param_1[5])[1];
  do {
    if (puVar2 == puVar3) {
      return;
    }
    while (puVar5 = (undefined8 *)*puVar2, puVar1 < *(undefined8 **)(param_2 + 0x10)) {
      lVar4 = puVar5[1];
      *puVar1 = *puVar5;
      puVar1[1] = lVar4;
      if (lVar4 != 0) {
        FUN_00755c20(1,lVar4 + 8);
      }
      puVar1[2] = puVar5[2];
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 1;
      *(undefined8 **)(param_2 + 8) = puVar1;
      if (puVar2 == puVar3) {
        return;
      }
    }
    puVar1 = (undefined8 *)FUN_00476fb0(param_2,puVar5);
    puVar2 = puVar2 + 1;
    *(undefined8 **)(param_2 + 8) = puVar1;
  } while( true );
}


// ===== 004bb180  FUN_004bb180 =====

void FUN_004bb180(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  if (1 < *(int *)(lVar6 + 0x14)) {
    lVar8 = 0;
    lVar9 = 1;
    do {
      lVar10 = *param_2;
      lVar11 = *param_3;
      puVar4 = (undefined8 *)(lVar10 + lVar8);
      uVar5 = *puVar4;
      lVar6 = puVar4[1];
      if (lVar6 != 0) {
        FUN_00755c20(1,lVar6 + 8);
      }
      lVar1 = lVar11 + lVar8;
      plVar7 = *(long **)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      *(long *)(lVar1 + 0x20) = lVar6;
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar6 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      lVar6 = *(long *)(param_1 + 0x10);
      lVar10 = lVar10 + lVar8;
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + lVar8;
      lVar8 = lVar8 + 0x18;
      iVar2 = *(int *)(lVar6 + 0x14);
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x10);
    } while (lVar9 < iVar2);
  }
  lVar9 = (long)*(int *)(lVar6 + 8);
  if (*(int *)(lVar6 + 8) < *(int *)(lVar6 + 0x10)) {
    lVar8 = lVar9 * 0x18;
    do {
      lVar10 = *param_2 + lVar8;
      lVar11 = *(long *)(lVar10 + 0x28);
      if ((lVar11 == 0) || (*(int *)(lVar11 + 8) != 2)) {
        uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004bb354 to 004bb35b has its CatchHandler @ 004bb45c */
        FUN_00645c30(auStack_d0);
                    /* try { // try from 004bb35c to 004bb37b has its CatchHandler @ 004bb44c */
        FUN_0047488c(auStack_b8,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                     ,0x1d6,
                     "void onnxruntime::LoopImpl::SaveOutputsAndUpdateFeeds(const std::vector<OrtValue> &, std::vector<OrtValue> &)"
                     ,auStack_d0);
                    /* try { // try from 004bb37c to 004bb38b has its CatchHandler @ 004bb42c */
        FUN_00479eac(auStack_e8,"All scan outputs MUST be tensors");
                    /* try { // try from 004bb390 to 004bb3d3 has its CatchHandler @ 004bb3d4 */
        FUN_00474a40(uVar5,auStack_b8,"last_outputs[j + 1].IsTensor()",auStack_e8);
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_004bb478;
      }
      lVar1 = *(long *)(param_1 + 0x60) + (long)*(int *)(lVar6 + 8) * -0x18 + lVar8;
      puVar4 = *(undefined8 **)(lVar1 + 8);
      if (puVar4 < *(undefined8 **)(lVar1 + 0x10)) {
        lVar6 = *(long *)(*param_2 + lVar8 + 0x20);
        *puVar4 = *(undefined8 *)(lVar10 + 0x18);
        puVar4[1] = lVar6;
        if (lVar6 != 0) {
          FUN_00755c20(1,lVar6 + 8);
          lVar11 = *(long *)(lVar10 + 0x28);
        }
        puVar4[2] = lVar11;
        puVar4 = puVar4 + 3;
      }
      else {
        puVar4 = (undefined8 *)FUN_00476fb0(lVar1,lVar10 + 0x18);
      }
      lVar6 = *(long *)(param_1 + 0x10);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x18;
      *(undefined8 **)(lVar1 + 8) = puVar4;
    } while (lVar9 < *(int *)(lVar6 + 0x10));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_004bb478:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bb47c  FUN_004bb47c =====

void FUN_004bb47c(long *param_1,undefined8 *param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [56];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00483570(*param_3);
  lVar5 = *(long *)(lVar3 + 0x18);
  if ((lVar5 == -1) || ((lVar3 = *(long *)(lVar3 + 0x20), lVar5 != 0 && (lVar3 == 0))))
  goto LAB_004bb68c;
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e8 = (long *)0x0;
  lVar6 = (param_3[1] - *param_3 >> 3) * -0x5555555555555555;
  uVar1 = lVar6 + 1;
  if (lVar6 == -1) {
                    /* try { // try from 004bb500 to 004bb507 has its CatchHandler @ 004bb6bc */
    local_f8 = (long *)FUN_00759c3c(8);
    local_f0 = local_f8 + 1;
    *local_f8 = -1;
    local_e8 = local_f0;
LAB_004bb53c:
    lStack_d8 = lVar3 + lVar5 * 8;
    local_e0 = lVar3;
    local_d0 = lStack_d8;
    local_c8 = lVar3;
    lStack_c0 = lStack_d8;
    local_b8 = lVar3;
    FUN_004bdb64(auStack_a8,&local_b0,&local_c8,&local_e0,&local_f8);
    if (((long)local_f0 - (long)local_f8 == -8) ||
       ((local_f8 == (long *)0x0 && (local_f0 != (long *)0x0)))) {
LAB_004bb68c:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
                    /* try { // try from 004bb584 to 004bb58f has its CatchHandler @ 004bb6e0 */
    FUN_005ca9a8(auStack_a8,(long)local_f0 - (long)local_f8 >> 3);
                    /* try { // try from 004bb594 to 004bb59f has its CatchHandler @ 004bb6dc */
    plVar4 = (long *)FUN_0058d3bc(*param_2,param_4,auStack_a8);
                    /* try { // try from 004bb5b0 to 004bb613 has its CatchHandler @ 004bb700 */
    lVar3 = (**(code **)(*(long *)*param_2 + 0x60))();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar3 + 8);
    }
    lVar5 = param_2[0xf];
    lVar6 = *plVar4;
    lVar7 = plVar4[0xf];
    local_b0 = FUN_005c8858(plVar4);
    plVar4 = *(long **)(lVar5 + 0x20);
    local_e0 = lVar6 + lVar7;
    local_c8 = lVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x30))(param_1,plVar4,&local_c8,param_3,&local_e0,&local_b0);
      if (*param_1 != 0) {
                    /* try { // try from 004bb61c to 004bb63b has its CatchHandler @ 004bb6cc */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                     ,"ConcatenateLoopOutput",0x1ea);
      }
      __ptr = local_70;
      local_70 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if (local_f8 != (long *)0x0) {
        local_f0 = local_f8;
        free(local_f8);
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_004bb754;
    }
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_004bb754;
                    /* try { // try from 004bb6a0 to 004bb6a3 has its CatchHandler @ 004bb700 */
    FUN_0030be88();
  }
  else if (uVar1 >> 0x3d == 0) {
                    /* try { // try from 004bb528 to 004bb56b has its CatchHandler @ 004bb6f0 */
    local_f8 = (long *)FUN_00759c3c(uVar1 * 8);
    local_e8 = local_f8 + uVar1;
    local_f0 = local_f8 + 1;
    *local_f8 = lVar6;
    goto LAB_004bb53c;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004bb6b4 to 004bb6bb has its CatchHandler @ 004bb6f0 */
                    /* WARNING: Subroutine does not return */
    FUN_0034e528(&local_f8);
  }
LAB_004bb754:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bb758  FUN_004bb758 =====

long FUN_004bb758(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 7) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004bb7cc to 004bb7d3 has its CatchHandler @ 004bb8e4 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004bb7d4 to 004bb7f3 has its CatchHandler @ 004bb8d4 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = long]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004bb830 to 004bb877 has its CatchHandler @ 004bb878 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bb908  FUN_004bb908 =====

long FUN_004bb908(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  undefined *local_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1[0xb] + 0x18) == 9) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return *param_1 + param_1[0xf];
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004bb97c to 004bb983 has its CatchHandler @ 004bba94 */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004bb984 to 004bb9a3 has its CatchHandler @ 004bba84 */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xbe,"T *onnxruntime::Tensor::MutableData() [T = bool]",auStack_b8);
    local_48 = &DAT_001f1ce2;
    pcStack_40 = "Tensor type mismatch. ";
    local_50 = &DAT_001d41e9;
    FUN_00484ef4(auStack_d0,&pcStack_40,&local_48,&local_50,param_1 + 0xb);
                    /* try { // try from 004bb9e0 to 004bba27 has its CatchHandler @ 004bba28 */
    FUN_00474a40(uVar2,auStack_a0,"utils::IsPrimitiveDataType<T>(dtype_)",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bbab8  FUN_004bbab8 =====

void FUN_004bbab8(long *param_1,undefined8 *param_2,long *param_3,int param_4,long param_5,
                 long param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *__ptr;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  void *pvVar14;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined1 auStack_e8 [116];
  undefined1 auStack_74 [12];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_6 + 0x28) == 9) {
    if ((*param_3 == 0) || (lVar11 = param_3[2], lVar11 == 0)) {
      FUN_004bdd74(param_1,param_6,*param_2,param_4);
      if (*param_1 != 0) {
                    /* try { // try from 004bbb24 to 004bbb43 has its CatchHandler @ 004bc048 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                     ,"operator()",0x219);
        goto LAB_004bbfe8;
      }
    }
    else {
LAB_004bbb50:
      if (*(int *)(lVar11 + 8) == 3) {
        if (param_4 < 0) {
joined_r0x004bbd50:
          puVar8 = (undefined8 *)0x0;
        }
        else {
          plVar5 = (long *)*param_2;
          iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
          if ((iVar3 <= param_4) ||
             (lVar11 = (**(code **)(*plVar5 + 0x80))(plVar5,param_4), lVar11 == 0))
          goto joined_r0x004bbd50;
          puVar8 = (undefined8 *)FUN_004b6a5c();
        }
        if (param_5 == 0) {
          puVar9 = (undefined8 *)FUN_0048537c();
          FUN_00485950(puVar8,*puVar9);
          FUN_00485aec(puVar8 + 1,((long)(puVar9[2] - puVar9[1]) >> 3) * -0x5555555555555555);
          local_f8 = 0;
          local_f0 = (long *)0x0;
                    /* try { // try from 004bbd98 to 004bbda3 has its CatchHandler @ 004bc040 */
          (**(code **)(*(long *)*param_2 + 0x50))(param_1,(long *)*param_2,&local_f8);
          if (*param_1 == 0) {
            lVar4 = puVar9[2];
            for (lVar11 = puVar9[1]; lVar11 != lVar4; lVar11 = lVar11 + 0x18) {
                    /* try { // try from 004bbe14 to 004bbe27 has its CatchHandler @ 004bc068 */
              lVar6 = FUN_00483570(lVar11);
              uVar7 = *(undefined8 *)(lVar6 + 0x58);
              lVar6 = FUN_00483570(lVar11);
              local_108 = local_f8;
              local_100 = local_f0;
              if (local_f0 != (long *)0x0) {
                FUN_00755c20(1,local_f0 + 1);
              }
                    /* try { // try from 004bbe44 to 004bbe57 has its CatchHandler @ 004bc058 */
              FUN_005c80c8(auStack_e8,uVar7,lVar6 + 0x18,&local_108);
              plVar5 = local_100;
              if ((local_100 != (long *)0x0) &&
                 (lVar6 = FUN_00755c50(0xffffffffffffffff,local_100 + 1), lVar6 == 0)) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                FUN_0071245c(plVar5);
              }
              uVar7 = *(undefined8 *)(param_2[1] + 0x550);
                    /* try { // try from 004bbe90 to 004bbf43 has its CatchHandler @ 004bc070 */
              lVar6 = FUN_00483570(lVar11);
              plVar5 = (long *)FUN_0056ac0c(uVar7,lVar6 + 0x74,auStack_74);
              lVar6 = (**(code **)(*(long *)*param_2 + 0x60))();
              if (lVar6 == 0) {
                uVar7 = FUN_00483570(lVar11);
                (**(code **)(*plVar5 + 0x18))(param_1,plVar5,uVar7,auStack_e8);
                if (*param_1 != 0) {
                    /* try { // try from 004bbf84 to 004bbfa3 has its CatchHandler @ 004bc018 */
                  FUN_00645c3c(0,param_1,
                               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                               ,"operator()",0x243);
                  goto LAB_004bbfa4;
                }
              }
              else {
                uVar7 = FUN_00483570(lVar11);
                uVar10 = (**(code **)(*(long *)*param_2 + 0x60))();
                (**(code **)(*plVar5 + 0x20))(param_1,plVar5,uVar7,auStack_e8,uVar10);
                if (*param_1 != 0) {
                    /* try { // try from 004bbf60 to 004bbf7f has its CatchHandler @ 004bc01c */
                  FUN_00645c3c(0,param_1,
                               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                               ,"operator()",0x241);
LAB_004bbfa4:
                  FUN_005c8ce4(auStack_e8);
                  bVar2 = false;
                  goto LAB_004bbfb0;
                }
              }
              *param_1 = 0;
              FUN_004bc660(puVar8,auStack_e8);
              FUN_005c8ce4(auStack_e8);
            }
            bVar2 = true;
          }
          else {
                    /* try { // try from 004bbdac to 004bbdcb has its CatchHandler @ 004bc02c */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                         ,"operator()",0x238);
            bVar2 = false;
          }
LAB_004bbfb0:
          plVar5 = local_f0;
          if ((local_f0 != (long *)0x0) &&
             (lVar11 = FUN_00755c50(0xffffffffffffffff,local_f0 + 1), lVar11 == 0)) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            FUN_0071245c(plVar5);
          }
          if (!bVar2) goto LAB_004bbfe8;
        }
        else {
          puVar9 = (undefined8 *)FUN_004b6a5c(param_3);
          puVar12 = puVar8 + 1;
          pvVar13 = (void *)*puVar12;
          *puVar8 = *puVar9;
          if (pvVar13 != (void *)0x0) {
            pvVar14 = (void *)puVar8[2];
            __ptr = pvVar13;
            if (pvVar14 != pvVar13) {
              do {
                plVar5 = *(long **)((long)pvVar14 + -0x10);
                if ((plVar5 != (long *)0x0) &&
                   (lVar11 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar11 == 0)) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                  FUN_0071245c(plVar5);
                }
                pvVar14 = (void *)((long)pvVar14 + -0x18);
              } while (pvVar14 != pvVar13);
              __ptr = (void *)*puVar12;
            }
            puVar8[2] = pvVar13;
            free(__ptr);
            *puVar12 = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
          }
          uVar7 = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar8[1] = uVar7;
          puVar8[3] = puVar9[3];
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
        }
      }
      else if (*(int *)(lVar11 + 8) == 2) {
        lVar11 = FUN_00483570(param_3);
        lVar4 = FUN_0058d3bc(*param_2,param_4,lVar11 + 0x18);
        plVar5 = (long *)FUN_0056ac0c(*(undefined8 *)(param_2[1] + 0x550),lVar11 + 0x74,lVar4 + 0x74
                                     );
        lVar6 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2);
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x18))(param_1,plVar5,lVar11,lVar4);
          if (*param_1 != 0) {
                    /* try { // try from 004bbd24 to 004bbd43 has its CatchHandler @ 004bc03c */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                         ,"operator()",0x229);
            goto LAB_004bbfe8;
          }
        }
        else {
          uVar7 = (**(code **)(*(long *)*param_2 + 0x60))();
          (**(code **)(*plVar5 + 0x20))(param_1,plVar5,lVar11,lVar4,uVar7);
          if (*param_1 != 0) {
                    /* try { // try from 004bbbf8 to 004bbc17 has its CatchHandler @ 004bc044 */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/controlflow/loop.cc"
                         ,"operator()",0x227);
            goto LAB_004bbfe8;
          }
        }
      }
    }
  }
  else {
    lVar11 = param_3[2];
    if (lVar11 != 0) goto LAB_004bbb50;
  }
  *param_1 = 0;
LAB_004bbfe8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 004bc0a0  FUN_004bc0a0 =====

void FUN_004bc0a0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  plVar1 = (long *)param_1[8];
  plVar2 = param_1 + 4;
  *param_1 = (long)(PTR_DAT_007a2088 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004bc0f0;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_004bc0f0:
  pvVar4 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00493250(pvVar4);
    free(pvVar4);
  }
  lVar3 = param_1[2];
  param_1[2] = 0;
  if (lVar3 != 0) {
    FUN_004bcc14();
  }
  pvVar4 = (void *)param_1[1];
  *param_1 = (long)&PTR_FUN_007907b0;
  param_1[1] = 0;
  if (pvVar4 != (void *)0x0) {
    free(pvVar4);
    return;
  }
  return;
}


// ===== 004bc150  FUN_004bc150 =====

void FUN_004bc150(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  plVar1 = (long *)param_1[8];
  plVar2 = param_1 + 4;
  *param_1 = (long)(PTR_DAT_007a2088 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004bc1a0;
    lVar3 = 0x28;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_004bc1a0:
  pvVar4 = (void *)param_1[3];
  param_1[3] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00493250(pvVar4);
    free(pvVar4);
  }
  lVar3 = param_1[2];
  param_1[2] = 0;
  if (lVar3 != 0) {
    FUN_004bcc14();
  }
  pvVar4 = (void *)param_1[1];
  *param_1 = (long)&PTR_FUN_007907b0;
  param_1[1] = 0;
  if (pvVar4 != (void *)0x0) {
    free(pvVar4);
  }
  free(param_1);
  return;
}


// ===== 004bc1fc  FUN_004bc1fc =====

void FUN_004bc1fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 004bc224 to 004bc22b has its CatchHandler @ 004bc258 */
  FUN_004bccec(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004bc26c  FUN_004bc26c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004bc26c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
                    /* try { // try from 004bc2e8 to 004bc2f3 has its CatchHandler @ 004bc41c */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004bc30c to 004bc313 has its CatchHandler @ 004bc3fc */
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
                    /* try { // try from 004bc344 to 004bc34f has its CatchHandler @ 004bc3f8 */
  FUN_00303e0c(local_178,__s,sVar5);
  FUN_004bc430(local_178,param_3,param_4,param_5,param_6);
                    /* try { // try from 004bc36c to 004bc377 has its CatchHandler @ 004bc3f4 */
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


// ===== 004bc430  FUN_004bc430 =====

void FUN_004bc430(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bc464 to 004bc46f has its CatchHandler @ 004bc4c4 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bc470 to 004bc47b has its CatchHandler @ 004bc4c0 */
  FUN_005cb4e4(param_1,param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bc48c to 004bc497 has its CatchHandler @ 004bc4bc */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bc498 to 004bc4a3 has its CatchHandler @ 004bc4b8 */
  FUN_005cb4e4(param_1,param_5);
  return;
}


// ===== 004bc4c8  FUN_004bc4c8 =====

void FUN_004bc4c8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    plVar3 = (long *)param_2[4];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
                    /* try { // try from 004bc5d4 to 004bc5df has its CatchHandler @ 004bc65c */
        (**(code **)(*param_1 + 0x18))(param_1,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 004bc600 to 004bc607 has its CatchHandler @ 004bc65c */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 004bc628 to 004bc633 has its CatchHandler @ 004bc65c */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
                    /* try { // try from 004bc53c to 004bc547 has its CatchHandler @ 004bc65c */
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_004bc658;
    }
    if (plVar3 != param_2) {
      param_1[4] = (long)plVar3;
      param_2[4] = (long)plVar2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_004bc658;
    }
                    /* try { // try from 004bc580 to 004bc58b has its CatchHandler @ 004bc65c */
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    (**(code **)(*(long *)param_2[4] + 0x20))();
    param_2[4] = param_1[4];
    param_1[4] = (long)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004bc658:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc660  FUN_004bc660 =====

void FUN_004bc660(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_2 + 0x58);
  if (*(int *)(lVar4 + 8) != 6) {
    lVar4 = 0;
  }
  if (*param_1 == lVar4) {
    local_88 = 0;
    local_80 = (long *)0x0;
    local_78 = 0;
                    /* try { // try from 004bc6ac to 004bc6c3 has its CatchHandler @ 004bc84c */
    FUN_005c87f0(param_2,&local_88);
    FUN_004bc86c(param_1,&local_88);
    plVar2 = local_80;
    if ((local_80 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_80 + 1), lVar4 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004bc724 to 004bc72b has its CatchHandler @ 004bc82c */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004bc72c to 004bc74b has its CatchHandler @ 004bc81c */
    FUN_0047488c(&local_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/TensorSeq.h"
                 ,0x5f,"void onnxruntime::TensorSeq::Add(Tensor &&)",auStack_a0);
                    /* try { // try from 004bc74c to 004bc75b has its CatchHandler @ 004bc7fc */
    FUN_00479eac(auStack_b8,"TensorSeq: tensor to be added has a different data type.");
                    /* try { // try from 004bc760 to 004bc7a3 has its CatchHandler @ 004bc7a4 */
    FUN_00474a40(uVar3,&local_88,"IsSameDataType(tensor)",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bc86c  FUN_004bc86c =====

void FUN_004bc86c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00483570(param_2);
  lVar3 = *(long *)(lVar3 + 0x58);
  if (*(int *)(lVar3 + 8) != 6) {
    lVar3 = 0;
  }
  if (*param_1 == lVar3) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 < (undefined8 *)param_1[3]) {
      lVar3 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = lVar3;
      if (lVar3 != 0) {
        FUN_00755c20(1,lVar3 + 8);
      }
      puVar4 = puVar1 + 3;
      puVar1[2] = param_2[2];
    }
    else {
      puVar4 = (undefined8 *)FUN_004bca54(param_1 + 1,param_2);
    }
    param_1[2] = (long)puVar4;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 004bc92c to 004bc933 has its CatchHandler @ 004bca34 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004bc934 to 004bc953 has its CatchHandler @ 004bca24 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/TensorSeq.h"
                 ,0x59,"void onnxruntime::TensorSeq::Add(OrtValue &&)",auStack_a0);
                    /* try { // try from 004bc954 to 004bc963 has its CatchHandler @ 004bca04 */
    FUN_00479eac(auStack_b8,"TensorSeq: tensor to be added has a different data type.");
                    /* try { // try from 004bc968 to 004bc9ab has its CatchHandler @ 004bc9ac */
    FUN_00474a40(uVar5,auStack_88,"IsSameDataType(tensor.Get<Tensor>())",auStack_b8);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bca54  FUN_004bca54 =====

undefined8 * FUN_004bca54(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *__ptr;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  __ptr = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar9 - (long)__ptr;
  lVar4 = lVar10 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar5 = param_1[2] - (long)__ptr >> 3;
    uVar6 = lVar5 * 0x5555555555555556;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_004bcc10;
      lVar3 = FUN_00759c3c(uVar6 * 0x18);
      lVar5 = param_2[1];
      puVar11 = (undefined8 *)(lVar3 + lVar4 * 8);
      *puVar11 = *param_2;
      puVar11[1] = lVar5;
    }
    if (lVar5 != 0) {
      FUN_00755c20(1,lVar5 + 8);
      __ptr = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)param_1[1];
      lVar10 = (long)puVar9 - (long)__ptr;
    }
    puVar11[2] = param_2[2];
    puVar7 = (undefined8 *)((long)puVar11 - lVar10);
    puVar12 = __ptr;
    if (__ptr != puVar9) {
      do {
        lVar4 = puVar12[1];
        *puVar7 = *puVar12;
        puVar7[1] = lVar4;
        if (lVar4 != 0) {
          FUN_00755c20(1,lVar4 + 8);
        }
        puVar2 = puVar12 + 3;
        puVar7[2] = puVar12[2];
        puVar7 = puVar7 + 3;
        puVar12 = puVar2;
      } while (puVar2 != puVar9);
      do {
        plVar8 = (long *)__ptr[1];
        if ((plVar8 != (long *)0x0) &&
           (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar4 == 0)) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0071245c(plVar8);
        }
        __ptr = __ptr + 3;
      } while (__ptr != puVar9);
      __ptr = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar11 - lVar10;
    param_1[1] = (long)(puVar11 + 3);
    param_1[2] = lVar3 + uVar6 * 0x18;
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    return puVar11 + 3;
  }
  FUN_00477170(param_1);
LAB_004bcc10:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 004bcc14  FUN_004bcc14 =====

void FUN_004bcc14(undefined8 param_1,void *param_2)

{
  void *__ptr;
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  __ptr = *(void **)((long)param_2 + 0x50);
  if (__ptr != (void *)0x0) {
    *(void **)((long)param_2 + 0x58) = __ptr;
    free(__ptr);
  }
  pbVar2 = *(byte **)((long)param_2 + 0x38);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)((long)param_2 + 0x40);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          free(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)((long)param_2 + 0x38);
    }
    *(byte **)((long)param_2 + 0x40) = pbVar2;
    free(pbVar3);
  }
  pbVar2 = *(byte **)((long)param_2 + 0x20);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)((long)param_2 + 0x28);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          free(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)((long)param_2 + 0x20);
    }
    *(byte **)((long)param_2 + 0x28) = pbVar2;
    free(pbVar3);
  }
  free(param_2);
  return;
}


// ===== 004bccec  FUN_004bccec =====

void FUN_004bccec(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  FUN_0058d0b4(param_1 + 1,param_2);
  puVar1 = PTR_DAT_007a2088;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
                    /* try { // try from 004bcd48 to 004bcd53 has its CatchHandler @ 004bcd68 */
  FUN_004b819c(param_1,param_2);
  return;
}


// ===== 004bce04  FUN_004bce04 =====

void FUN_004bce04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004bce18  FUN_004bce18 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004bce18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

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
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004bce94 to 004bce9f has its CatchHandler @ 004bcfa4 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004bceb8 to 004bcebf has its CatchHandler @ 004bcf84 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004bcfb8(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 004bcefc to 004bcf07 has its CatchHandler @ 004bcf80 */
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


// ===== 004bcfb8  FUN_004bcfb8 =====

void FUN_004bcfb8(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bcfec to 004bcff7 has its CatchHandler @ 004bd04c */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bcffc to 004bd003 has its CatchHandler @ 004bd048 */
  FUN_00717214(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bd014 to 004bd01f has its CatchHandler @ 004bd044 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bd024 to 004bd02b has its CatchHandler @ 004bd040 */
  FUN_007176ec(param_1,*param_5);
  return;
}


// ===== 004bd050  FUN_004bd050 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004bd050(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004bd0d0 to 004bd0db has its CatchHandler @ 004bd210 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004bd0f4 to 004bd0fb has its CatchHandler @ 004bd1f0 */
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
                    /* try { // try from 004bd12c to 004bd137 has its CatchHandler @ 004bd1ec */
  FUN_00303e0c(local_178,__s,sVar5);
                    /* try { // try from 004bd13c to 004bd143 has its CatchHandler @ 004bd1e8 */
  FUN_00717214(local_178,*param_3);
  FUN_004bd224(local_178,param_4,param_5,param_6,param_7);
                    /* try { // try from 004bd15c to 004bd167 has its CatchHandler @ 004bd1e4 */
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


// ===== 004bd224  FUN_004bd224 =====

void FUN_004bd224(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bd258 to 004bd263 has its CatchHandler @ 004bd2b8 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bd268 to 004bd26f has its CatchHandler @ 004bd2b4 */
  FUN_00717214(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004bd280 to 004bd28b has its CatchHandler @ 004bd2b0 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004bd290 to 004bd297 has its CatchHandler @ 004bd2ac */
  FUN_00717214(param_1,*param_5);
  return;
}


// ===== 004bd2bc  FUN_004bd2bc =====

void FUN_004bd2bc(void)

{
  return;
}


// ===== 004bd2c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004bd2c4  FUN_004bd2c4 =====

void FUN_004bd2c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00790fb8;
  puVar1[1] = uVar2;
  return;
}


// ===== 004bd2fc  FUN_004bd2fc =====

void FUN_004bd2fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00790fb8;
  param_2[1] = uVar1;
  return;
}


// ===== 004bd314  FUN_004bd314 =====

void FUN_004bd314(void)

{
  return;
}


// ===== 004bd318  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004bd31c  FUN_004bd31c =====

void FUN_004bd31c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x004bd338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(*param_2,param_3,*param_4,*param_5);
  return;
}


// ===== 004bd33c  FUN_004bd33c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004bd33c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004bd3b0 to 004bd3bb has its CatchHandler @ 004bd4e0 */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 004bd3d4 to 004bd3db has its CatchHandler @ 004bd4c0 */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 004bd410 to 004bd41b has its CatchHandler @ 004bd4bc */
  FUN_00303e0c(local_170,__s,sVar5);
                    /* try { // try from 004bd41c to 004bd427 has its CatchHandler @ 004bd4b8 */
  FUN_005cb4e4(local_170,param_3);
                    /* try { // try from 004bd428 to 004bd433 has its CatchHandler @ 004bd4b4 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd4f4  FUN_004bd4f4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004bd4f4(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
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
  
  puVar6 = PTR_PTR_007a1e48;
  puVar5 = PTR_DAT_007a1e40;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar8 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004bd570 to 004bd57b has its CatchHandler @ 004bd6a4 */
  FUN_00715fc0((long)local_178 + lVar8,local_178 + 1);
  local_178[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar8) = 0xffffffff;
                    /* try { // try from 004bd594 to 004bd59b has its CatchHandler @ 004bd684 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_110 = 0x10;
  pbVar3 = *(byte **)(param_2 + 0x10);
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  bVar7 = (*param_2 & 1) == 0;
  if (bVar7) {
    pbVar3 = param_2 + 1;
  }
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uVar2 = (ulong)(*param_2 >> 1);
  if (!bVar7) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 004bd5d4 to 004bd5db has its CatchHandler @ 004bd680 */
  FUN_00303e0c(local_178,pbVar3,uVar2);
  FUN_004a3c2c(local_178,param_3,param_4,param_5);
                    /* try { // try from 004bd5f4 to 004bd5ff has its CatchHandler @ 004bd67c */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar6;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar6 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd6b8  FUN_004bd6b8 =====

void FUN_004bd6b8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t __n;
  undefined8 *puVar10;
  void *pvVar11;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = param_1 + 2;
  pvVar8 = (void *)param_1[1];
  if ((ulong)((*plVar7 - (long)pvVar8 >> 3) * -0x5555555555555555) < param_2) {
    lVar5 = (long)pvVar8 - *param_1 >> 3;
    uVar4 = lVar5 * -0x5555555555555555 + param_2;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_004bd930;
      FUN_004bdb50(param_1);
LAB_004bd8f8:
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_004bd930;
    }
    lVar3 = *plVar7 - *param_1 >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    local_60 = plVar7;
    if (uVar6 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar6) goto LAB_004bd8f8;
      local_80 = (void *)FUN_00759c3c(uVar6 * 0x18);
    }
    puVar9 = (undefined8 *)((long)local_80 + lVar5 * 8);
    local_68 = (void *)((long)local_80 + uVar6 * 0x18);
    uVar4 = (param_2 * 0x18 - 0x18) / 0x18;
    local_78 = puVar9;
    memset(puVar9,0,uVar4 * 0x18 + 0x18);
    local_70 = puVar9 + uVar4 * 3 + 3;
                    /* try { // try from 004bd80c to 004bd817 has its CatchHandler @ 004bd90c */
    FUN_004bd934(param_1,&local_80);
    puVar9 = local_78;
    while (puVar2 = local_70, puVar2 != puVar9) {
      puVar10 = puVar2 + -3;
      pvVar8 = (void *)*puVar10;
      local_70 = puVar10;
      if (pvVar8 != (void *)0x0) {
        pvVar11 = (void *)puVar2[-2];
        __ptr = pvVar8;
        if (pvVar11 != pvVar8) {
          do {
            plVar7 = *(long **)((long)pvVar11 + -0x10);
            if ((plVar7 != (long *)0x0) &&
               (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar5 == 0)) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              FUN_0071245c(plVar7);
            }
            pvVar11 = (void *)((long)pvVar11 + -0x18);
          } while (pvVar11 != pvVar8);
          __ptr = (void *)*puVar10;
        }
        puVar2[-2] = pvVar8;
        free(__ptr);
      }
    }
    local_70 = puVar2;
    if (local_80 != (void *)0x0) {
      free(local_80);
    }
  }
  else {
    if (param_2 != 0) {
      __n = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      memset(pvVar8,0,__n);
      pvVar8 = (void *)((long)pvVar8 + __n);
    }
    param_1[1] = (long)pvVar8;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_004bd930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bd934  FUN_004bd934 =====

void FUN_004bd934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  void *pvVar10;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar4 = puVar1;
  puVar6 = puVar8;
  if (puVar2 != puVar8) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      uVar5 = *puVar6;
      puVar4[1] = puVar6[1];
      *puVar4 = uVar5;
      puVar4[2] = puVar6[2];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6 = puVar6 + 3;
      puVar4 = puVar4 + 3;
    } while (puVar6 != puVar2);
    do {
      pvVar9 = (void *)*puVar8;
      if (pvVar9 != (void *)0x0) {
        pvVar10 = (void *)puVar8[1];
        __ptr = pvVar9;
        if (pvVar10 != pvVar9) {
          do {
            plVar7 = *(long **)((long)pvVar10 + -0x10);
            if ((plVar7 != (long *)0x0) &&
               (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar3 == 0)) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              FUN_0071245c(plVar7);
            }
            pvVar10 = (void *)((long)pvVar10 + -0x18);
          } while (pvVar10 != pvVar9);
          __ptr = (void *)*puVar8;
        }
        puVar8[1] = pvVar9;
        free(__ptr);
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar2);
  }
  param_2[1] = puVar1;
  uVar5 = *param_1;
  *param_1 = puVar1;
  param_1[1] = uVar5;
  param_2[1] = uVar5;
  uVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar5;
  uVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar5;
  *param_2 = param_2[1];
  return;
}


// ===== 004bda6c  FUN_004bda6c =====

void FUN_004bda6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)param_1[2];
  while (puVar2 = puVar5, puVar2 != puVar1) {
    puVar5 = puVar2 + -3;
    pvVar6 = (void *)*puVar5;
    param_1[2] = puVar5;
    if (pvVar6 != (void *)0x0) {
      pvVar7 = (void *)puVar2[-2];
      __ptr = pvVar6;
      if (pvVar7 != pvVar6) {
        do {
          plVar4 = *(long **)((long)pvVar7 + -0x10);
          if ((plVar4 != (long *)0x0) &&
             (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            FUN_0071245c(plVar4);
          }
          pvVar7 = (void *)((long)pvVar7 + -0x18);
        } while (pvVar7 != pvVar6);
        __ptr = (void *)*puVar5;
      }
      puVar2[-2] = pvVar6;
      free(__ptr);
      puVar5 = (undefined8 *)param_1[2];
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  free((void *)*param_1);
  return;
}


// ===== 004bdb50  FUN_004bdb50 =====

void FUN_004bdb50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004bdb64  FUN_004bdb64 =====

void FUN_004bdb64(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_3;
  local_40 = param_5;
  if ((uVar3 == *param_4) && (uVar4 = param_3[1], uVar4 == param_4[1])) {
    uVar2 = param_3[2];
    while( true ) {
      if (uVar2 == param_4[2]) {
        uVar4 = *param_3;
        uVar3 = param_3[2];
        param_1[1] = param_3[1];
        *param_1 = uVar4;
        param_1[2] = uVar3;
        param_1[3] = local_40;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if ((((uVar3 == 0) || (uVar4 == 0)) || (uVar2 < uVar3)) || (uVar4 <= uVar2)) break;
      FUN_004bdc64(&local_40);
      uVar3 = *param_3;
      if (((uVar3 == 0) || (uVar2 = param_3[2], uVar2 == 0)) ||
         ((uVar4 = param_3[1], uVar4 == 0 || (uVar4 <= uVar2)))) break;
      uVar5 = *param_4;
      uVar2 = uVar2 + 8;
      param_3[2] = uVar2;
      if ((uVar3 != uVar5) || (uVar4 != param_4[1])) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 004bdc64  FUN_004bdc64 =====

long * FUN_004bdc64(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  long lVar7;
  undefined8 *puVar8;
  
  puVar6 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)puVar6[1];
  if (puVar3 < (undefined8 *)puVar6[2]) {
    puVar8 = puVar3 + 1;
    *puVar3 = *param_2;
  }
  else {
    __src = (void *)*puVar6;
    lVar7 = (long)puVar3 - (long)__src >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(puVar6);
    }
    uVar4 = (long)puVar6[2] - (long)__src;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      __dest = (void *)FUN_00759c3c(uVar5 << 3);
    }
    puVar2 = (undefined8 *)((long)__dest + lVar7 * 8);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    memcpy(__dest,__src,(long)puVar3 - (long)__src);
    *puVar6 = __dest;
    puVar6[1] = puVar8;
    puVar6[2] = (void *)((long)__dest + uVar5 * 8);
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  puVar6[1] = puVar8;
  return param_1;
}


// ===== 004bdd60  FUN_004bdd60 =====

void FUN_004bdd60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0030b908("vector");
}


// ===== 004bdd74  FUN_004bdd74 =====

void FUN_004bdd74(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  byte local_50;
  char local_4f [8];
  undefined7 uStack_47;
  char cStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_2 + 0x28) == 9) {
    ppuVar6 = *(undefined ***)(*(long *)(param_2 + 0x20) + 0x18);
    ppuVar1 = &PTR_PTR_FUN_007a9f68;
    if (ppuVar6 != (undefined **)0x0) {
      ppuVar1 = ppuVar6;
    }
    if (*(int *)(ppuVar1 + 5) == 4) {
      ppuVar6 = &PTR_PTR_FUN_007a9f68;
      if (*(undefined ***)(ppuVar1[4] + 0x18) != (undefined **)0x0) {
        ppuVar6 = *(undefined ***)(ppuVar1[4] + 0x18);
      }
      if (*(int *)(ppuVar6 + 5) != 1) goto LAB_004bde48;
      lVar3 = FUN_0058dfd8(param_3,param_4);
      plVar4 = (long *)FUN_0056bb70();
    }
    else {
      if (*(int *)(ppuVar1 + 5) != 1) goto LAB_004bde48;
      lVar3 = FUN_0058dfd8(param_3,param_4);
      plVar4 = (long *)FUN_0056ba38();
    }
    uVar5 = (**(code **)(*plVar4 + 0x18))();
    FUN_00485c34(lVar3,0,uVar5);
    *(long **)(lVar3 + 0x10) = plVar4;
    *param_1 = 0;
  }
  else {
LAB_004bde48:
    local_50 = 0x20;
    uStack_3f = 0;
    uStack_47 = (undefined7)s_Unsupported_type_001bf791._8_8_;
    cStack_40 = SUB81(s_Unsupported_type_001bf791._8_8_,7);
    local_4f = (char  [8])s_Unsupported_type_001bf791._0_8_;
                    /* try { // try from 004bde64 to 004bde77 has its CatchHandler @ 004bdeac */
    FUN_0063aa48(param_1,2,2,&local_50);
    if ((local_50 & 1) != 0) {
      free((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,cStack_40)));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bdedc  FUN_004bdedc =====

undefined8 FUN_004bdedc(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
                    /* try { // try from 004bdef8 to 004bdeff has its CatchHandler @ 004bdf30 */
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  *puVar1 = &DAT_001fa69d;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = param_2;
  *(undefined4 *)(puVar1 + 2) = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *param_3 = puVar1;
  return 0;
}


// ===== 004bdf34  FUN_004bdf34 =====

void FUN_004bdf34(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
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
                    /* try { // try from 004bdfcc to 004bdfe3 has its CatchHandler @ 004be0c8 */
  uVar2 = FUN_0056ce5c();
  uVar3 = FUN_0056dafc();
  local_90 = (undefined8 *)FUN_00759c3c(0x10);
  local_88 = local_90 + 2;
  *local_90 = uVar2;
  local_90[1] = uVar3;
                    /* try { // try from 004bdff4 to 004be037 has its CatchHandler @ 004be0d0 */
  puStack_80 = local_88;
  uVar2 = FUN_00583ae0(&local_78,&DAT_001baece,&local_90);
  uVar2 = FUN_00583770(uVar2,"Range");
  plVar4 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar4 + 0x18) = 0xb;
  puVar5 = (undefined8 *)FUN_005839b8(plVar4,"CPUExecutionProvider");
  local_70 = PTR_DAT_007a2000;
  local_50 = &local_70;
  uVar2 = *puVar5;
  *puVar5 = 0;
  local_70 = local_70 + 0x10;
  *param_1 = uVar2;
  pcStack_68 = FUN_004be4d0;
  param_1[2] = local_70;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004be4d0;
  param_1[8] = 0;
  if (local_90 != (undefined8 *)0x0) {
    local_88 = local_90;
    free(local_90);
  }
  puVar5 = local_78;
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


// ===== 004be10c  FUN_004be10c =====

void FUN_004be10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint local_78 [4];
  void *local_68;
  long local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_3;
  lVar2 = FUN_004be304(param_3,0);
  lVar3 = FUN_004be304(param_3,1);
  local_60 = FUN_004ae6a8(param_3,2);
  if ((*(long *)(lVar2 + 0x18) == 0) ||
     ((*(long *)(lVar2 + 0x18) == 1 && (**(long **)(lVar2 + 0x20) == 1)))) {
    if ((*(long *)(lVar3 + 0x18) == 0) ||
       ((*(long *)(lVar3 + 0x18) == 1 && (**(long **)(lVar3 + 0x20) == 1)))) {
      if (local_60 != 0) {
        if ((*(long *)(local_60 + 0x18) != 0) &&
           ((*(long *)(local_60 + 0x18) != 1 || (**(long **)(local_60 + 0x20) != 1)))) {
          local_50 = "delta in Range operator should be scalar like tensor, yet got shape:";
          FUN_004bd33c(local_78,&local_50);
                    /* try { // try from 004be280 to 004be293 has its CatchHandler @ 004be2cc */
          FUN_0063aa48(param_1,2,2,local_78);
          goto LAB_004be294;
        }
      }
      local_78[0] = *(uint *)(*(long *)(lVar2 + 0x58) + 0x18);
      FUN_004be73c(param_1,local_78,&local_58,lVar2,lVar3,&local_60);
      goto LAB_004be2a4;
    }
    local_50 = "limit in Range operator should be scalar like tensor, yet got shape:";
    FUN_004bd33c(local_78,&local_50);
                    /* try { // try from 004be250 to 004be263 has its CatchHandler @ 004be2d0 */
    FUN_0063aa48(param_1,2,2,local_78);
  }
  else {
    local_50 = "start in Range operator should be scalar like tensor, yet got shape:";
    FUN_004bd33c(local_78,&local_50);
                    /* try { // try from 004be220 to 004be233 has its CatchHandler @ 004be2d4 */
    FUN_0063aa48(param_1,2,2,local_78);
  }
LAB_004be294:
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
LAB_004be2a4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004be304  FUN_004be304 =====

void FUN_004be304(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [84];
  undefined4 local_4c;
  char *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c = param_2;
  lVar2 = FUN_004ae6a8();
  if (lVar2 == 0) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004be364 to 004be36b has its CatchHandler @ 004be46c */
    FUN_00645c30(auStack_b8);
                    /* try { // try from 004be36c to 004be38b has its CatchHandler @ 004be45c */
    FUN_0047488c(auStack_a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/op_kernel_context.h"
                 ,0x32,
                 "const T &onnxruntime::OpKernelContext::RequiredInput(int) const [T = onnxruntime::Tensor]"
                 ,auStack_b8);
    local_48 = " is not present.";
    pcStack_40 = "Required input at index ";
    FUN_004be564(auStack_d0,&pcStack_40,&local_4c,&local_48);
                    /* try { // try from 004be3b8 to 004be3ff has its CatchHandler @ 004be400 */
    FUN_00474a40(uVar3,auStack_a0,"input_ptr",auStack_d0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004be490  FUN_004be490 =====

void FUN_004be490(undefined8 *param_1)

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


// ===== 004be4d0  FUN_004be4d0 =====

void FUN_004be4d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x10);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004be50c to 004be513 has its CatchHandler @ 004be550 */
  FUN_0058d0b4(plVar1 + 1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00791000;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004be564  FUN_004be564 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004be564(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
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
                    /* try { // try from 004be5dc to 004be5e7 has its CatchHandler @ 004be728 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004be600 to 004be607 has its CatchHandler @ 004be708 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004be638 to 004be643 has its CatchHandler @ 004be704 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 004be648 to 004be64f has its CatchHandler @ 004be700 */
  FUN_00717214(local_178,*param_3);
  pcVar7 = (char *)*param_4;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004be660 to 004be66b has its CatchHandler @ 004be6fc */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 004be66c to 004be677 has its CatchHandler @ 004be6f8 */
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


// ===== 004be73c  FUN_004be73c =====

void FUN_004be73c(long *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *__ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_69;
  undefined4 local_68 [2];
  long local_60;
  undefined8 *local_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68[0] = *param_2;
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
                    /* try { // try from 004be780 to 004be79b has its CatchHandler @ 004be890 */
  FUN_004be8b8(local_68,&uStack_49,param_3,param_4,param_5,param_6);
                    /* try { // try from 004be79c to 004be7b7 has its CatchHandler @ 004be88c */
  FUN_004be994(local_68,&uStack_69,param_3,param_4,param_5,param_6);
  if (local_60 == 0) {
                    /* try { // try from 004be7c8 to 004be7e3 has its CatchHandler @ 004be888 */
    FUN_004beeb8(&uStack_49,local_68[0],&local_58);
  }
  __ptr = local_58;
  if (local_58 == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_00759c3c(0x20);
    *puVar2 = *__ptr;
    if ((*(byte *)(__ptr + 1) & 1) == 0) {
      uVar3 = __ptr[3];
      uVar5 = __ptr[2];
      uVar4 = __ptr[1];
      *param_1 = (long)puVar2;
      puVar2[3] = uVar3;
      puVar2[2] = uVar5;
      puVar2[1] = uVar4;
    }
    else {
                    /* try { // try from 004be824 to 004be827 has its CatchHandler @ 004be878 */
      FUN_002fb36c(puVar2 + 1,__ptr[3],__ptr[2]);
      __ptr = local_58;
      *param_1 = (long)puVar2;
      local_58 = (undefined8 *)0x0;
      if (__ptr == (undefined8 *)0x0) goto LAB_004be850;
    }
    local_58 = (undefined8 *)0x0;
    if ((*(byte *)(__ptr + 1) & 1) != 0) {
      free((void *)__ptr[3]);
    }
    free(__ptr);
  }
LAB_004be850:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004be8b8  FUN_004be8b8 =====

undefined8
FUN_004be8b8(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  void *pvVar2;
  void *__ptr;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == 6) {
    FUN_004beab4(&local_40,param_2,*param_3,param_4,param_5,*param_6);
    pvVar2 = local_40;
    __ptr = *(void **)(param_1 + 4);
    local_40 = (void *)0x0;
    *(void **)(param_1 + 4) = pvVar2;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      pvVar2 = local_40;
      local_40 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
      }
    }
    *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004be994  FUN_004be994 =====

undefined8
FUN_004be994(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  void *pvVar2;
  void *__ptr;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 == 7) {
    FUN_004becb8(&local_40,param_2,*param_3,param_4,param_5,*param_6);
    pvVar2 = local_40;
    __ptr = *(void **)(param_1 + 4);
    local_40 = (void *)0x0;
    *(void **)(param_1 + 4) = pvVar2;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
      pvVar2 = local_40;
      local_40 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        if ((*(byte *)((long)pvVar2 + 8) & 1) != 0) {
          free(*(void **)((long)pvVar2 + 0x18));
        }
        free(pvVar2);
      }
    }
    *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bea70  FUN_004bea70 =====

void FUN_004bea70(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 004beab4  FUN_004beab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004beab4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *__ptr;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  piVar5 = (int *)FUN_004b023c(param_4);
  iVar15 = *piVar5;
  piVar5 = (int *)FUN_004b023c(param_5);
  iVar12 = *piVar5;
  if (param_6 == 0) {
    iVar10 = 1;
  }
  else {
    piVar5 = (int *)FUN_004b023c(param_6);
    iVar10 = *piVar5;
    if (iVar10 == 0) {
      local_80 = (char *)FUN_00759c3c(0x30);
      uVar4 = s_delta_in_Range_operator_can_not_b_001dd2d3._32_8_;
      uVar3 = s_delta_in_Range_operator_can_not_b_001dd2d3._24_8_;
      uVar14 = s_delta_in_Range_operator_can_not_b_001dd2d3._16_8_;
      uVar13 = s_delta_in_Range_operator_can_not_b_001dd2d3._0_8_;
      uStack_88 = _UNK_002008f8;
      local_90 = _DAT_002008f0;
      *(undefined8 *)(local_80 + 8) = s_delta_in_Range_operator_can_not_b_001dd2d3._8_8_;
      *(undefined8 *)local_80 = uVar13;
      *(undefined8 *)(local_80 + 0x18) = uVar3;
      *(undefined8 *)(local_80 + 0x10) = uVar14;
      *(undefined8 *)(local_80 + 0x20) = uVar4;
      local_80[0x28] = '\0';
                    /* try { // try from 004beb48 to 004beb5b has its CatchHandler @ 004bec70 */
      FUN_0063aa48(param_1,2,2,&local_90);
      if ((local_90 & 1) != 0) {
        free(local_80);
      }
      goto LAB_004bec48;
    }
  }
  uVar11 = (ulong)((double)(iVar12 - iVar15) / (double)iVar10);
  local_98 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_005ca9a8(&local_90,1,&local_98);
                    /* try { // try from 004beba0 to 004bebb3 has its CatchHandler @ 004bec88 */
  FUN_0058d3bc(param_3,0,&local_90);
  piVar5 = (int *)FUN_004b03ec();
  __ptr = local_58;
  if (0 < (long)uVar11) {
    if (uVar11 < 8) {
      uVar6 = 0;
      iVar12 = iVar15;
    }
    else {
      iVar1 = iVar10 * 4;
      uVar6 = uVar11 & 0x7ffffffffffffff8;
      iVar12 = iVar15 + iVar10 * (int)uVar6;
      piVar8 = piVar5 + 4;
      uVar13 = CONCAT44(iVar15 + iVar10 * (int)((ulong)_DAT_002002e0 >> 0x20),
                        iVar15 + iVar10 * (int)_DAT_002002e0);
      uVar14 = CONCAT44(iVar15 + iVar10 * (int)((ulong)_UNK_002002e8 >> 0x20),
                        iVar15 + iVar10 * (int)_UNK_002002e8);
      piVar5 = piVar5 + uVar6;
      uVar9 = uVar6;
      do {
        iVar15 = (int)uVar13 + iVar1;
        iVar16 = (int)((ulong)uVar13 >> 0x20) + iVar1;
        iVar17 = (int)uVar14 + iVar1;
        iVar18 = (int)((ulong)uVar14 >> 0x20) + iVar1;
        uVar9 = uVar9 - 8;
        *(undefined8 *)(piVar8 + -2) = uVar14;
        *(undefined8 *)(piVar8 + -4) = uVar13;
        *(ulong *)(piVar8 + 2) = CONCAT44(iVar18,iVar17);
        *(ulong *)piVar8 = CONCAT44(iVar16,iVar15);
        uVar13 = CONCAT44(iVar16 + iVar1,iVar15 + iVar1);
        uVar14 = CONCAT44(iVar18 + iVar1,iVar17 + iVar1);
        piVar8 = piVar8 + 8;
      } while (uVar9 != 0);
      if (uVar6 == uVar11) goto LAB_004bec34;
    }
    lVar7 = uVar11 - uVar6;
    do {
      lVar7 = lVar7 + -1;
      *piVar5 = iVar12;
      iVar12 = iVar12 + iVar10;
      piVar5 = piVar5 + 1;
    } while (lVar7 != 0);
  }
LAB_004bec34:
  *param_1 = 0;
  local_58 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
LAB_004bec48:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004becb8  FUN_004becb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004becb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *__ptr;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)FUN_004ba96c(param_4);
  lVar14 = *plVar6;
  plVar6 = (long *)FUN_004ba96c(param_5);
  lVar12 = *plVar6;
  if (param_6 == 0) {
    lVar11 = 1;
  }
  else {
    plVar6 = (long *)FUN_004ba96c(param_6);
    lVar11 = *plVar6;
    if (lVar11 == 0) {
      local_80 = (char *)FUN_00759c3c(0x30);
      uVar5 = s_delta_in_Range_operator_can_not_b_001dd2d3._32_8_;
      uVar4 = s_delta_in_Range_operator_can_not_b_001dd2d3._24_8_;
      uVar3 = s_delta_in_Range_operator_can_not_b_001dd2d3._16_8_;
      uVar2 = s_delta_in_Range_operator_can_not_b_001dd2d3._0_8_;
      uStack_88 = _UNK_002008f8;
      local_90 = _DAT_002008f0;
      *(undefined8 *)(local_80 + 8) = s_delta_in_Range_operator_can_not_b_001dd2d3._8_8_;
      *(undefined8 *)local_80 = uVar2;
      *(undefined8 *)(local_80 + 0x18) = uVar4;
      *(undefined8 *)(local_80 + 0x10) = uVar3;
      *(undefined8 *)(local_80 + 0x20) = uVar5;
      local_80[0x28] = '\0';
                    /* try { // try from 004bed4c to 004bed5f has its CatchHandler @ 004bee70 */
      FUN_0063aa48(param_1,2,2,&local_90);
      if ((local_90 & 1) != 0) {
        free(local_80);
      }
      goto LAB_004bee48;
    }
  }
  uVar13 = (ulong)((double)(lVar12 - lVar14) / (double)lVar11);
  local_98 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
  FUN_005ca9a8(&local_90,1,&local_98);
                    /* try { // try from 004beda4 to 004bedb7 has its CatchHandler @ 004bee88 */
  FUN_0058d3bc(param_3,0,&local_90);
  plVar6 = (long *)FUN_004bb758();
  __ptr = local_58;
  if (0 < (long)uVar13) {
    if (uVar13 < 4) {
      uVar8 = 0;
      lVar12 = lVar14;
    }
    else {
      uVar8 = uVar13 & 0x7ffffffffffffffc;
      lVar12 = lVar14 + uVar8 * lVar11;
      lVar7 = lVar11 * 2;
      plVar9 = plVar6 + 2;
      lVar15 = lVar14 + lVar11;
      plVar6 = plVar6 + uVar8;
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 4;
        plVar9[-1] = lVar15;
        plVar9[-2] = lVar14;
        plVar9[1] = lVar15 + lVar7;
        *plVar9 = lVar14 + lVar7;
        lVar14 = lVar14 + lVar7 + lVar7;
        lVar15 = lVar15 + lVar7 + lVar7;
        plVar9 = plVar9 + 4;
      } while (uVar10 != 0);
      if (uVar8 == uVar13) goto LAB_004bee34;
    }
    lVar14 = uVar13 - uVar8;
    do {
      lVar14 = lVar14 + -1;
      *plVar6 = lVar12;
      lVar12 = lVar12 + lVar11;
      plVar6 = plVar6 + 1;
    } while (lVar14 != 0);
  }
LAB_004bee34:
  *param_1 = 0;
  local_58 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
LAB_004bee48:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004beeb8  FUN_004beeb8 =====

void FUN_004beeb8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [84];
  undefined4 local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_54 = param_2;
  uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004beeec to 004beef3 has its CatchHandler @ 004bf090 */
  FUN_00645c30(auStack_c0);
                    /* try { // try from 004beef4 to 004bef13 has its CatchHandler @ 004bf034 */
  FUN_0047488c(auStack_a8,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/data_types_internal.h"
               ,0x13e,
               "void onnxruntime::utils::mltype_dispatcher_internal::UnsupportedTypeDefaultPolicy<onnxruntime::common::Status>::operator()(int32_t, Ret &) const [Ret = onnxruntime::common::Status]"
               ,auStack_c0);
  local_50 = "Unsupported data type: ";
  FUN_004a0638(auStack_d8,&local_50,&local_54);
                    /* try { // try from 004bef30 to 004bef43 has its CatchHandler @ 004bf030 */
  FUN_00474a40(uVar2,auStack_a8,0,auStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 004bef54 to 004bef6b has its CatchHandler @ 004bef6c */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf0b8  FUN_004bf0b8 =====

void FUN_004bf0b8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined *local_80;
  code *pcStack_78;
  undefined **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_88[0x1e] = 0;
  local_88[0xd] = 0;
  local_88[0xc] = 0;
  local_88[0xf] = 0;
  local_88[0xe] = 0;
  puVar6 = local_88 + 0x18;
  local_88[0x19] = 0;
  *puVar6 = 0;
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
  local_88[3] = uVar2;
  *puVar6 = 0;
  *(undefined1 *)(local_88 + 0x15) = 0;
  local_88[0x14] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0xf] = 0;
  local_88[0x17] = puVar6;
  local_88[0x1c] = 0;
  local_88[0x1b] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = local_88 + 0x1b;
                    /* try { // try from 004bf154 to 004bf17f has its CatchHandler @ 004bf284 */
  uVar2 = FUN_00583d4c(&local_88,0,0);
  uVar3 = FUN_0056cff0();
  uVar4 = FUN_0056dafc();
  local_a0 = (undefined8 *)FUN_00759c3c(0x10);
  local_98 = local_a0 + 2;
  *local_a0 = uVar3;
  local_a0[1] = uVar4;
  puStack_90 = local_98;
                    /* try { // try from 004bf190 to 004bf1d3 has its CatchHandler @ 004bf268 */
  uVar2 = FUN_00583ae0(uVar2,&DAT_001baece,&local_a0);
  uVar2 = FUN_00583770(uVar2,&DAT_001cec68);
  plVar5 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar5 + 0x18) = 0xd;
  puVar6 = (undefined8 *)FUN_005839b8(plVar5,"CPUExecutionProvider");
  local_80 = PTR_DAT_007a2000;
  local_60 = &local_80;
  uVar2 = *puVar6;
  *puVar6 = 0;
  local_80 = local_80 + 0x10;
  *param_1 = uVar2;
  pcStack_78 = FUN_004bf3ec;
  param_1[2] = local_80;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004bf3ec;
  param_1[8] = 0;
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    free(local_a0);
  }
  puVar6 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar6);
    free(puVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf2ac  FUN_004bf2ac =====

void FUN_004bf2ac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  int local_58 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_004ae6a8(param_3,0);
  uVar3 = FUN_004ae6a8(param_3,1);
  uVar4 = FUN_004ae6a8(param_3,2);
  uVar5 = FUN_0058d3bc(param_3,0,lVar2 + 0x18);
  local_50 = 0;
  local_58[0] = *(int *)(*(long *)(lVar2 + 0x58) + 0x18);
  if (local_58[0] == 1) {
    FUN_004bf604(&uStack_59,lVar2,uVar3,uVar4);
  }
  else {
    if (local_58[0] != 7) goto LAB_004bf374;
    FUN_004bfe44(&uStack_5a,lVar2,uVar3,uVar4,uVar5,*(undefined8 *)(param_3 + 0x18));
  }
  local_50 = 1;
LAB_004bf374:
  FUN_004bf480(local_58);
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf3ac  FUN_004bf3ac =====

void FUN_004bf3ac(undefined8 *param_1)

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


// ===== 004bf3ec  FUN_004bf3ec =====

void FUN_004bf3ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00759c3c(0x10);
  *plVar1 = (long)(PTR_DAT_007a2008 + 0x10);
                    /* try { // try from 004bf428 to 004bf42f has its CatchHandler @ 004bf46c */
  FUN_0058d0b4(plVar1 + 1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = (long)plVar1;
  *plVar1 = (long)&PTR_FUN_00791050;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004bf480  FUN_004bf480 =====

void FUN_004bf480(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 1) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 004bf4e4 to 004bf4eb has its CatchHandler @ 004bf5e0 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 004bf4ec to 004bf50b has its CatchHandler @ 004bf5d0 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/data_types_internal.h"
                 ,0x135,
                 "void onnxruntime::utils::mltype_dispatcher_internal::CallableDispatchableHelper::CheckCalledOnce() const"
                 ,auStack_a8);
    local_40 = "Unsupported data type: ";
    FUN_004a0638(auStack_c0,&local_40,param_1);
                    /* try { // try from 004bf52c to 004bf573 has its CatchHandler @ 004bf574 */
    FUN_00474a40(uVar2,auStack_90,"called_ == 1",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf604  FUN_004bf604 =====

void FUN_004bf604(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [24];
  long local_b8 [3];
  long *local_a0;
  long *plStack_98;
  undefined8 *local_90;
  undefined4 *puStack_88;
  undefined4 *local_80;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = 0x7f7fffff;
  local_4c = 0xff7fffff;
  local_48 = param_5;
  uStack_40 = param_2;
  if (param_3 != 0) {
    if ((*(long *)(param_3 + 0x18) != 0) &&
       ((*(long *)(param_3 + 0x18) != 1 || (**(long **)(param_3 + 0x20) != 1)))) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004bf72c to 004bf733 has its CatchHandler @ 004bf8d4 */
      FUN_00645c30(local_b8);
                    /* try { // try from 004bf734 to 004bf753 has its CatchHandler @ 004bf8c0 */
      FUN_0047488c(&local_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/clip.cc"
                   ,0x6b,
                   "void onnxruntime::Clip::ComputeImpl<float>::operator()(const Tensor *, const Tensor *, const Tensor *, Tensor *, concurrency::ThreadPool *) const [T = float]"
                   ,local_b8);
                    /* try { // try from 004bf754 to 004bf763 has its CatchHandler @ 004bf89c */
      FUN_00479eac(auStack_d0,"min should be a scalar.");
                    /* try { // try from 004bf768 to 004bf7ab has its CatchHandler @ 004bf844 */
      FUN_00474a40(uVar4,&local_a0,"min->Shape().IsScalar()",auStack_d0);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004bf8f0;
    }
    puVar3 = (undefined4 *)FUN_004ae878(param_3);
    local_4c = *puVar3;
  }
  if (param_4 != 0) {
    if ((*(long *)(param_4 + 0x18) != 0) &&
       ((*(long *)(param_4 + 0x18) != 1 || (**(long **)(param_4 + 0x20) != 1)))) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004bf7bc to 004bf7c3 has its CatchHandler @ 004bf8d0 */
      FUN_00645c30(local_b8);
                    /* try { // try from 004bf7c4 to 004bf7e3 has its CatchHandler @ 004bf8bc */
      FUN_0047488c(&local_a0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/clip.cc"
                   ,0x6f,
                   "void onnxruntime::Clip::ComputeImpl<float>::operator()(const Tensor *, const Tensor *, const Tensor *, Tensor *, concurrency::ThreadPool *) const [T = float]"
                   ,local_b8);
                    /* try { // try from 004bf7e4 to 004bf7f3 has its CatchHandler @ 004bf840 */
      FUN_00479eac(auStack_d0,"max should be a scalar.");
                    /* try { // try from 004bf7f8 to 004bf83b has its CatchHandler @ 004bf83c */
      FUN_00474a40(uVar4,&local_a0,"max->Shape().IsScalar()",auStack_d0);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004bf8f0;
    }
    puVar3 = (undefined4 *)FUN_004ae878(param_4);
    local_50 = *puVar3;
  }
  local_b8[0] = FUN_005cabcc(param_5 + 0x18);
  local_a0 = local_b8;
  plStack_98 = &local_48;
  lVar1 = local_b8[0] + 0x7ffe;
  if (local_b8[0] + 0x3fff < 0 == SCARRY8(local_b8[0],0x3fff)) {
    lVar1 = local_b8[0] + 0x3fff;
  }
  puStack_88 = &local_4c;
  local_90 = &uStack_40;
  local_80 = &local_50;
  FUN_004bf8f4(param_6,(lVar1 << 0x12) >> 0x20,&local_a0,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004bf8f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bf8f4  FUN_004bf8f4 =====

void FUN_004bf8f4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined1 *puStack_68;
  long *local_60;
  undefined8 uStack_58;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = param_4;
  lStack_78 = param_2;
  if (param_1 == 0) {
    if (0 < param_2) {
      lVar4 = 0;
      do {
        FUN_004bfaa8(param_3,lVar4);
        lVar4 = lVar4 + 1;
      } while (param_2 != lVar4);
    }
  }
  else if (0 < param_2) {
    if (param_2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_004bfaa8(param_3,0);
        return;
      }
      goto LAB_004bfaa4;
    }
    if (param_4 < 1) {
      iVar2 = FUN_0063bb14();
      local_80 = param_2;
      if (iVar2 <= param_2) {
        local_80 = (long)iVar2;
      }
      if (1 < local_80) goto LAB_004bf9d8;
    }
    else if (1 < param_4) {
LAB_004bf9d8:
      local_60 = &lStack_78;
      local_70 = PTR_DAT_007a20d0 + 0x10;
                    /* try { // try from 004bf9fc to 004bfa07 has its CatchHandler @ 004bfa58 */
      puStack_68 = (undefined1 *)&local_80;
      uStack_58 = param_3;
      local_50 = &local_70;
      FUN_0063bf7c(param_1,local_80,&local_70);
      if (local_50 == &local_70) {
        lVar4 = 0x20;
        ppuVar3 = &local_70;
      }
      else {
        if (local_50 == (undefined **)0x0) goto LAB_004bfa34;
        lVar4 = 0x28;
        ppuVar3 = local_50;
      }
      (**(code **)(*ppuVar3 + lVar4))();
      goto LAB_004bfa34;
    }
    lVar4 = 0;
    do {
      FUN_004bfaa8(param_3,lVar4);
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
LAB_004bfa34:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004bfaa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004bfaa8  FUN_004bfaa8 =====

void FUN_004bfaa8(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  ulong uVar3;
  uint uVar4;
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
  long lVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  float *pfVar25;
  ulong uVar26;
  float *pfVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar23 = *(long *)*param_1 + param_2 * -0x4000;
  uVar3 = uVar23;
  if (0x3fff < (long)uVar23) {
    uVar3 = 0x4000;
  }
  if ((long)uVar23 < 0) {
    plVar21 = (long *)FUN_00753a74(8);
    *plVar21 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar21,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  lVar19 = FUN_004ae878(*(undefined8 *)param_1[2]);
  fVar33 = *(float *)param_1[3];
  fVar34 = *(float *)param_1[4];
  uVar20 = FUN_004aea28(*(undefined8 *)param_1[1]);
  uVar23 = uVar3;
  if (((uVar20 & 3) == 0) && (uVar23 = (ulong)-((uint)uVar20 >> 2) & 3, uVar3 <= uVar23)) {
    uVar23 = uVar3;
  }
  lVar28 = uVar3 - uVar23;
  iVar2 = (int)lVar28 + ((uint)(int)(short)lVar28 >> 0x1d & 3);
  uVar4 = iVar2 * 0x10000 >> 0x12;
  uVar26 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  if (uVar23 != 0) {
    uVar29 = 0;
    if ((7 < uVar23) && (0x1f < uVar20 - lVar19)) {
      uVar32 = param_2 << 0x10 | 0x10;
      uVar29 = uVar23 & 0xfffffffffffffff8;
      puVar31 = (undefined8 *)(uVar20 + uVar32);
      pauVar24 = (undefined1 (*) [16])(lVar19 + uVar32);
      uVar32 = uVar29;
      do {
        pauVar1 = pauVar24 + -1;
        auVar10 = *pauVar24;
        uVar32 = uVar32 - 8;
        pauVar24 = pauVar24 + 2;
        auVar37._4_4_ = fVar33;
        auVar37._0_4_ = fVar33;
        auVar37._8_4_ = fVar33;
        auVar37._12_4_ = fVar33;
        auVar37 = NEON_fcmgt(auVar37,*pauVar1,4);
        auVar39._4_4_ = fVar33;
        auVar39._0_4_ = fVar33;
        auVar39._8_4_ = fVar33;
        auVar39._12_4_ = fVar33;
        auVar39 = NEON_fcmgt(auVar39,auVar10,4);
        auVar38._4_4_ = fVar33;
        auVar38._0_4_ = fVar33;
        auVar38._8_4_ = fVar33;
        auVar38._12_4_ = fVar33;
        auVar37 = NEON_bit(*pauVar1,auVar38,auVar37,1);
        auVar40._4_4_ = fVar33;
        auVar40._0_4_ = fVar33;
        auVar40._8_4_ = fVar33;
        auVar40._12_4_ = fVar33;
        auVar39 = NEON_bit(auVar10,auVar40,auVar39,1);
        auVar10._4_4_ = fVar34;
        auVar10._0_4_ = fVar34;
        auVar10._8_4_ = fVar34;
        auVar10._12_4_ = fVar34;
        auVar38 = NEON_fcmgt(auVar37,auVar10,4);
        auVar11._4_4_ = fVar34;
        auVar11._0_4_ = fVar34;
        auVar11._8_4_ = fVar34;
        auVar11._12_4_ = fVar34;
        auVar40 = NEON_fcmgt(auVar39,auVar11,4);
        auVar12._4_4_ = fVar34;
        auVar12._0_4_ = fVar34;
        auVar12._8_4_ = fVar34;
        auVar12._12_4_ = fVar34;
        auVar37 = NEON_bit(auVar37,auVar12,auVar38,1);
        auVar13._4_4_ = fVar34;
        auVar13._0_4_ = fVar34;
        auVar13._8_4_ = fVar34;
        auVar13._12_4_ = fVar34;
        auVar39 = NEON_bit(auVar39,auVar13,auVar40,1);
        puVar31[-1] = auVar37._8_8_;
        puVar31[-2] = auVar37._0_8_;
        puVar31[1] = auVar39._8_8_;
        *puVar31 = auVar39._0_8_;
        puVar31 = puVar31 + 4;
      } while (uVar32 != 0);
      if (uVar23 == uVar29) goto LAB_004bfc04;
    }
    lVar22 = param_2 * 0x10000 + uVar29 * 4;
    lVar30 = uVar23 - uVar29;
    pfVar25 = (float *)(lVar19 + lVar22);
    pfVar27 = (float *)(uVar20 + lVar22);
    do {
      fVar35 = fVar33;
      if (fVar33 <= *pfVar25) {
        fVar35 = *pfVar25;
      }
      fVar36 = fVar34;
      if (fVar35 <= fVar34) {
        fVar36 = fVar35;
      }
      lVar30 = lVar30 + -1;
      *pfVar27 = fVar36;
      pfVar25 = pfVar25 + 1;
      pfVar27 = pfVar27 + 1;
    } while (lVar30 != 0);
  }
LAB_004bfc04:
  lVar22 = uVar26 + uVar23;
  if (3 < lVar28) {
    lVar28 = param_2 * 0x10000 + uVar23 * 4;
    pauVar24 = (undefined1 (*) [16])(lVar19 + lVar28);
    puVar31 = (undefined8 *)(uVar20 + lVar28);
    uVar29 = uVar23;
    do {
      uVar29 = uVar29 + 4;
      auVar5._4_4_ = fVar33;
      auVar5._0_4_ = fVar33;
      auVar5._8_4_ = fVar33;
      auVar5._12_4_ = fVar33;
      auVar37 = NEON_fmax(*pauVar24,auVar5,4);
      auVar14._4_4_ = fVar34;
      auVar14._0_4_ = fVar34;
      auVar14._8_4_ = fVar34;
      auVar14._12_4_ = fVar34;
      auVar37 = NEON_fmin(auVar37,auVar14,4);
      puVar31[1] = auVar37._8_8_;
      *puVar31 = auVar37._0_8_;
      pauVar24 = pauVar24 + 1;
      puVar31 = puVar31 + 2;
    } while ((long)uVar29 < lVar22);
  }
  if (lVar22 < (long)uVar3) {
    uVar26 = uVar3 - (uVar23 + uVar26);
    if ((7 < uVar26) && (0x1f < uVar20 - lVar19)) {
      uVar29 = uVar26 & 0xfffffffffffffff8;
      lVar22 = lVar22 + uVar29;
      lVar28 = param_2 * 0x10000 + ((long)((ulong)(uint)(int)(short)iVar2 << 0x20) >> 0x22) * 0x10 +
               uVar23 * 4 + 0x10;
      pauVar24 = (undefined1 (*) [16])(lVar19 + lVar28);
      puVar31 = (undefined8 *)(uVar20 + lVar28);
      uVar23 = uVar29;
      do {
        pauVar1 = pauVar24 + -1;
        auVar37 = *pauVar24;
        uVar23 = uVar23 - 8;
        pauVar24 = pauVar24 + 2;
        auVar6._4_4_ = fVar33;
        auVar6._0_4_ = fVar33;
        auVar6._8_4_ = fVar33;
        auVar6._12_4_ = fVar33;
        auVar39 = NEON_fcmgt(auVar6,*pauVar1,4);
        auVar7._4_4_ = fVar33;
        auVar7._0_4_ = fVar33;
        auVar7._8_4_ = fVar33;
        auVar7._12_4_ = fVar33;
        auVar38 = NEON_fcmgt(auVar7,auVar37,4);
        auVar8._4_4_ = fVar33;
        auVar8._0_4_ = fVar33;
        auVar8._8_4_ = fVar33;
        auVar8._12_4_ = fVar33;
        auVar39 = NEON_bit(*pauVar1,auVar8,auVar39,1);
        auVar9._4_4_ = fVar33;
        auVar9._0_4_ = fVar33;
        auVar9._8_4_ = fVar33;
        auVar9._12_4_ = fVar33;
        auVar38 = NEON_bit(auVar37,auVar9,auVar38,1);
        auVar15._4_4_ = fVar34;
        auVar15._0_4_ = fVar34;
        auVar15._8_4_ = fVar34;
        auVar15._12_4_ = fVar34;
        auVar37 = NEON_fcmgt(auVar39,auVar15,4);
        auVar16._4_4_ = fVar34;
        auVar16._0_4_ = fVar34;
        auVar16._8_4_ = fVar34;
        auVar16._12_4_ = fVar34;
        auVar40 = NEON_fcmgt(auVar38,auVar16,4);
        auVar17._4_4_ = fVar34;
        auVar17._0_4_ = fVar34;
        auVar17._8_4_ = fVar34;
        auVar17._12_4_ = fVar34;
        auVar37 = NEON_bit(auVar39,auVar17,auVar37,1);
        auVar18._4_4_ = fVar34;
        auVar18._0_4_ = fVar34;
        auVar18._8_4_ = fVar34;
        auVar18._12_4_ = fVar34;
        auVar39 = NEON_bit(auVar38,auVar18,auVar40,1);
        puVar31[-1] = auVar37._8_8_;
        puVar31[-2] = auVar37._0_8_;
        puVar31[1] = auVar39._8_8_;
        *puVar31 = auVar39._0_8_;
        puVar31 = puVar31 + 4;
      } while (uVar23 != 0);
      if (uVar26 == uVar29) {
        return;
      }
    }
    lVar28 = param_2 * 0x10000 + lVar22 * 4;
    lVar22 = uVar3 - lVar22;
    pfVar25 = (float *)(lVar19 + lVar28);
    pfVar27 = (float *)(uVar20 + lVar28);
    do {
      fVar35 = fVar33;
      if (fVar33 <= *pfVar25) {
        fVar35 = *pfVar25;
      }
      fVar36 = fVar34;
      if (fVar35 <= fVar34) {
        fVar36 = fVar35;
      }
      lVar22 = lVar22 + -1;
      *pfVar27 = fVar36;
      pfVar25 = pfVar25 + 1;
      pfVar27 = pfVar27 + 1;
    } while (lVar22 != 0);
  }
  return;
}


// ===== 004bfd54  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004bfd58  FUN_004bfd58 =====

void FUN_004bfd58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_007910a0;
  puVar1[3] = uVar2;
  return;
}


// ===== 004bfd9c  FUN_004bfd9c =====

void FUN_004bfd9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_007910a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 004bfdc0  FUN_004bfdc0 =====

void FUN_004bfdc0(void)

{
  return;
}


// ===== 004bfdc4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004bfdc8  FUN_004bfdc8 =====

void FUN_004bfdc8(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = **(long **)(param_1 + 8);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = **(long **)(param_1 + 0x10) / lVar2;
  }
  lVar3 = **(long **)(param_1 + 0x10) - lVar1 * lVar2;
  lVar4 = *param_2;
  lVar6 = (lVar1 + 1) * lVar4;
  lVar5 = lVar3 + lVar1 * lVar4;
  lVar2 = lVar5 + lVar1;
  if (lVar4 < lVar3) {
    lVar5 = lVar6;
    lVar2 = lVar6 + lVar1 + 1;
  }
  for (; lVar5 < lVar2; lVar5 = lVar5 + 1) {
    FUN_004bfaa8(*(undefined8 *)(param_1 + 0x18),lVar5);
  }
  return;
}


// ===== 004bfe44  FUN_004bfe44 =====

void FUN_004bfe44(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [24];
  long local_c0 [3];
  long *local_a8;
  long *plStack_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = 0x7fffffffffffffff;
  local_50 = 0x8000000000000000;
  local_48 = param_5;
  uStack_40 = param_2;
  if (param_3 != 0) {
    if ((*(long *)(param_3 + 0x18) != 0) &&
       ((*(long *)(param_3 + 0x18) != 1 || (**(long **)(param_3 + 0x20) != 1)))) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004bff6c to 004bff73 has its CatchHandler @ 004c0114 */
      FUN_00645c30(local_c0);
                    /* try { // try from 004bff74 to 004bff93 has its CatchHandler @ 004c0100 */
      FUN_0047488c(&local_a8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/clip.cc"
                   ,0x6b,
                   "void onnxruntime::Clip::ComputeImpl<long>::operator()(const Tensor *, const Tensor *, const Tensor *, Tensor *, concurrency::ThreadPool *) const [T = long]"
                   ,local_c0);
                    /* try { // try from 004bff94 to 004bffa3 has its CatchHandler @ 004c00dc */
      FUN_00479eac(auStack_d8,"min should be a scalar.");
                    /* try { // try from 004bffa8 to 004bffeb has its CatchHandler @ 004c0084 */
      FUN_00474a40(uVar4,&local_a8,"min->Shape().IsScalar()",auStack_d8);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004c0130;
    }
    puVar3 = (undefined8 *)FUN_004ba96c(param_3);
    local_50 = *puVar3;
  }
  if (param_4 != 0) {
    if ((*(long *)(param_4 + 0x18) != 0) &&
       ((*(long *)(param_4 + 0x18) != 1 || (**(long **)(param_4 + 0x20) != 1)))) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004bfffc to 004c0003 has its CatchHandler @ 004c0110 */
      FUN_00645c30(local_c0);
                    /* try { // try from 004c0004 to 004c0023 has its CatchHandler @ 004c00fc */
      FUN_0047488c(&local_a8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/clip.cc"
                   ,0x6f,
                   "void onnxruntime::Clip::ComputeImpl<long>::operator()(const Tensor *, const Tensor *, const Tensor *, Tensor *, concurrency::ThreadPool *) const [T = long]"
                   ,local_c0);
                    /* try { // try from 004c0024 to 004c0033 has its CatchHandler @ 004c0080 */
      FUN_00479eac(auStack_d8,"max should be a scalar.");
                    /* try { // try from 004c0038 to 004c007b has its CatchHandler @ 004c007c */
      FUN_00474a40(uVar4,&local_a8,"max->Shape().IsScalar()",auStack_d8);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004c0130;
    }
    puVar3 = (undefined8 *)FUN_004ba96c(param_4);
    local_58 = *puVar3;
  }
  local_c0[0] = FUN_005cabcc(param_5 + 0x18);
  local_a8 = local_c0;
  plStack_a0 = &local_48;
  lVar1 = local_c0[0] + 0x7ffe;
  if (local_c0[0] + 0x3fff < 0 == SCARRY8(local_c0[0],0x3fff)) {
    lVar1 = local_c0[0] + 0x3fff;
  }
  puStack_90 = &local_50;
  local_98 = &uStack_40;
  local_88 = &local_58;
  FUN_004c0134(param_6,(lVar1 << 0x12) >> 0x20,&local_a8,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_004c0130:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0134  FUN_004c0134 =====

void FUN_004c0134(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  long lVar4;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined1 *puStack_68;
  long *local_60;
  undefined8 uStack_58;
  undefined **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = param_4;
  lStack_78 = param_2;
  if (param_1 == 0) {
    if (0 < param_2) {
      lVar4 = 0;
      do {
        FUN_004c02e8(param_3,lVar4);
        lVar4 = lVar4 + 1;
      } while (param_2 != lVar4);
    }
  }
  else if (0 < param_2) {
    if (param_2 == 1) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_004c02e8(param_3,0);
        return;
      }
      goto LAB_004c02e4;
    }
    if (param_4 < 1) {
      iVar2 = FUN_0063bb14();
      local_80 = param_2;
      if (iVar2 <= param_2) {
        local_80 = (long)iVar2;
      }
      if (1 < local_80) goto LAB_004c0218;
    }
    else if (1 < param_4) {
LAB_004c0218:
      local_60 = &lStack_78;
      local_70 = PTR_DAT_007a20d8 + 0x10;
                    /* try { // try from 004c023c to 004c0247 has its CatchHandler @ 004c0298 */
      puStack_68 = (undefined1 *)&local_80;
      uStack_58 = param_3;
      local_50 = &local_70;
      FUN_0063bf7c(param_1,local_80,&local_70);
      if (local_50 == &local_70) {
        lVar4 = 0x20;
        ppuVar3 = &local_70;
      }
      else {
        if (local_50 == (undefined **)0x0) goto LAB_004c0274;
        lVar4 = 0x28;
        ppuVar3 = local_50;
      }
      (**(code **)(*ppuVar3 + lVar4))();
      goto LAB_004c0274;
    }
    lVar4 = 0;
    do {
      FUN_004c02e8(param_3,lVar4);
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
  }
LAB_004c0274:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004c02e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c02e8  FUN_004c02e8 =====

void FUN_004c02e8(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
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
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar22 = *(long *)*param_1 + param_2 * -0x4000;
  uVar3 = uVar22;
  if (0x3fff < (long)uVar22) {
    uVar3 = 0x4000;
  }
  if ((long)uVar22 < 0) {
    plVar20 = (long *)FUN_00753a74(8);
    *plVar20 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar20,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
  }
  lVar18 = FUN_004ba96c(*(undefined8 *)param_1[2]);
  lVar31 = *(long *)param_1[3];
  lVar32 = *(long *)param_1[4];
  uVar19 = FUN_004bb758(*(undefined8 *)param_1[1]);
  uVar22 = uVar19 >> 3 & 1;
  if (uVar3 <= uVar22) {
    uVar22 = uVar3;
  }
  if ((uVar19 & 7) != 0) {
    uVar22 = uVar3;
  }
  uVar26 = (uint)(uVar3 - uVar22);
  iVar2 = uVar26 + ((uVar26 & 0x8000) >> 0xf);
  uVar26 = iVar2 * 0x10000 >> 0x11;
  uVar24 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar26 << 1;
  if (uVar22 != 0) {
    uVar27 = 0;
    if ((3 < uVar22) && (0x1f < uVar19 - lVar18)) {
      uVar30 = param_2 << 0x11 | 0x10;
      uVar27 = uVar22 & 0x7ffc;
      puVar29 = (undefined8 *)(uVar19 + uVar30);
      pauVar23 = (undefined1 (*) [16])(lVar18 + uVar30);
      uVar30 = uVar27;
      do {
        pauVar1 = pauVar23 + -1;
        auVar10 = *pauVar23;
        uVar30 = uVar30 - 4;
        pauVar23 = pauVar23 + 2;
        auVar33._8_8_ = lVar31;
        auVar33._0_8_ = lVar31;
        auVar33 = NEON_cmgt(*pauVar1,auVar33,8);
        auVar35._8_8_ = lVar31;
        auVar35._0_8_ = lVar31;
        auVar35 = NEON_cmgt(auVar10,auVar35,8);
        auVar34._8_8_ = lVar31;
        auVar34._0_8_ = lVar31;
        auVar33 = NEON_bif(*pauVar1,auVar34,auVar33,1);
        auVar36._8_8_ = lVar31;
        auVar36._0_8_ = lVar31;
        auVar35 = NEON_bif(auVar10,auVar36,auVar35,1);
        auVar10._8_8_ = lVar32;
        auVar10._0_8_ = lVar32;
        auVar34 = NEON_cmgt(auVar33,auVar10,8);
        auVar11._8_8_ = lVar32;
        auVar11._0_8_ = lVar32;
        auVar36 = NEON_cmgt(auVar35,auVar11,8);
        auVar12._8_8_ = lVar32;
        auVar12._0_8_ = lVar32;
        auVar33 = NEON_bit(auVar33,auVar12,auVar34,1);
        auVar13._8_8_ = lVar32;
        auVar13._0_8_ = lVar32;
        auVar35 = NEON_bit(auVar35,auVar13,auVar36,1);
        puVar29[-1] = auVar33._8_8_;
        puVar29[-2] = auVar33._0_8_;
        puVar29[1] = auVar35._8_8_;
        *puVar29 = auVar35._0_8_;
        puVar29 = puVar29 + 4;
      } while (uVar30 != 0);
      if (uVar22 == uVar27) goto LAB_004c042c;
    }
    lVar21 = param_2 * 0x20000 + uVar27 * 8;
    lVar28 = uVar22 - uVar27;
    plVar20 = (long *)(lVar18 + lVar21);
    plVar25 = (long *)(uVar19 + lVar21);
    do {
      lVar21 = *plVar20;
      if (*plVar20 <= lVar31) {
        lVar21 = lVar31;
      }
      lVar4 = lVar32;
      if (lVar21 <= lVar32) {
        lVar4 = lVar21;
      }
      lVar28 = lVar28 + -1;
      *plVar25 = lVar4;
      plVar20 = plVar20 + 1;
      plVar25 = plVar25 + 1;
    } while (lVar28 != 0);
  }
LAB_004c042c:
  lVar21 = uVar24 + uVar22;
  if (1 < (long)(uVar3 - uVar22)) {
    lVar28 = param_2 * 0x20000 + uVar22 * 8;
    plVar20 = (long *)(lVar18 + lVar28);
    plVar25 = (long *)(uVar19 + lVar28);
    uVar27 = uVar22;
    do {
      uVar27 = uVar27 + 2;
      lVar28 = *plVar20;
      if (*plVar20 <= lVar31) {
        lVar28 = lVar31;
      }
      lVar4 = plVar20[1];
      if (plVar20[1] <= lVar31) {
        lVar4 = lVar31;
      }
      lVar5 = lVar32;
      if (lVar28 <= lVar32) {
        lVar5 = lVar28;
      }
      lVar28 = lVar32;
      if (lVar4 <= lVar32) {
        lVar28 = lVar4;
      }
      plVar25[1] = lVar28;
      *plVar25 = lVar5;
      plVar20 = plVar20 + 2;
      plVar25 = plVar25 + 2;
    } while ((long)uVar27 < lVar21);
  }
  if (lVar21 < (long)uVar3) {
    uVar24 = uVar3 - (uVar22 + uVar24);
    if ((3 < uVar24) && (0x1f < uVar19 - lVar18)) {
      uVar27 = uVar24 & 0xfffffffffffffffc;
      lVar21 = lVar21 + uVar27;
      lVar28 = param_2 * 0x20000 + ((long)((ulong)(uint)(int)(short)iVar2 << 0x20) >> 0x21) * 0x10 +
               uVar22 * 8 + 0x10;
      pauVar23 = (undefined1 (*) [16])(lVar18 + lVar28);
      puVar29 = (undefined8 *)(uVar19 + lVar28);
      uVar22 = uVar27;
      do {
        pauVar1 = pauVar23 + -1;
        auVar33 = *pauVar23;
        uVar22 = uVar22 - 4;
        pauVar23 = pauVar23 + 2;
        auVar6._8_8_ = lVar31;
        auVar6._0_8_ = lVar31;
        auVar35 = NEON_cmgt(*pauVar1,auVar6,8);
        auVar7._8_8_ = lVar31;
        auVar7._0_8_ = lVar31;
        auVar34 = NEON_cmgt(auVar33,auVar7,8);
        auVar8._8_8_ = lVar31;
        auVar8._0_8_ = lVar31;
        auVar35 = NEON_bif(*pauVar1,auVar8,auVar35,1);
        auVar9._8_8_ = lVar31;
        auVar9._0_8_ = lVar31;
        auVar34 = NEON_bif(auVar33,auVar9,auVar34,1);
        auVar14._8_8_ = lVar32;
        auVar14._0_8_ = lVar32;
        auVar33 = NEON_cmgt(auVar35,auVar14,8);
        auVar15._8_8_ = lVar32;
        auVar15._0_8_ = lVar32;
        auVar36 = NEON_cmgt(auVar34,auVar15,8);
        auVar16._8_8_ = lVar32;
        auVar16._0_8_ = lVar32;
        auVar33 = NEON_bit(auVar35,auVar16,auVar33,1);
        auVar17._8_8_ = lVar32;
        auVar17._0_8_ = lVar32;
        auVar35 = NEON_bit(auVar34,auVar17,auVar36,1);
        puVar29[-1] = auVar33._8_8_;
        puVar29[-2] = auVar33._0_8_;
        puVar29[1] = auVar35._8_8_;
        *puVar29 = auVar35._0_8_;
        puVar29 = puVar29 + 4;
      } while (uVar22 != 0);
      if (uVar24 == uVar27) {
        return;
      }
    }
    lVar28 = param_2 * 0x20000 + lVar21 * 8;
    lVar21 = uVar3 - lVar21;
    plVar20 = (long *)(lVar18 + lVar28);
    plVar25 = (long *)(uVar19 + lVar28);
    do {
      lVar18 = *plVar20;
      if (*plVar20 <= lVar31) {
        lVar18 = lVar31;
      }
      lVar28 = lVar32;
      if (lVar18 <= lVar32) {
        lVar28 = lVar18;
      }
      lVar21 = lVar21 + -1;
      *plVar25 = lVar28;
      plVar20 = plVar20 + 1;
      plVar25 = plVar25 + 1;
    } while (lVar21 != 0);
  }
  return;
}


// ===== 004c059c  FUN_004c059c =====

void FUN_004c059c(void)

{
  return;
}


// ===== 004c05a0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c05a4  FUN_004c05a4 =====

void FUN_004c05a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x20);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  *puVar1 = &PTR_FUN_007910e8;
  puVar1[3] = uVar2;
  return;
}


// ===== 004c05e8  FUN_004c05e8 =====

void FUN_004c05e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_007910e8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


// ===== 004c060c  FUN_004c060c =====

void FUN_004c060c(void)

{
  return;
}


// ===== 004c0610  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c0614  FUN_004c0614 =====

void FUN_004c0614(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = **(long **)(param_1 + 8);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = **(long **)(param_1 + 0x10) / lVar2;
  }
  lVar3 = **(long **)(param_1 + 0x10) - lVar1 * lVar2;
  lVar4 = *param_2;
  lVar6 = (lVar1 + 1) * lVar4;
  lVar5 = lVar3 + lVar1 * lVar4;
  lVar2 = lVar5 + lVar1;
  if (lVar4 < lVar3) {
    lVar5 = lVar6;
    lVar2 = lVar6 + lVar1 + 1;
  }
  for (; lVar5 < lVar2; lVar5 = lVar5 + 1) {
    FUN_004c02e8(*(undefined8 *)(param_1 + 0x18),lVar5);
  }
  return;
}


// ===== 004c0690  FUN_004c0690 =====

void FUN_004c0690(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined *local_80;
  code *pcStack_78;
  undefined **local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88 = (undefined8 *)FUN_00759c3c(0xf8);
  uVar2 = DAT_001b7148;
  local_88[0x1e] = 0;
  local_88[0xd] = 0;
  local_88[0xc] = 0;
  local_88[0xf] = 0;
  local_88[0xe] = 0;
  puVar7 = local_88 + 0x18;
  local_88[0x19] = 0;
  *puVar7 = 0;
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
  local_88[3] = uVar2;
  *puVar7 = 0;
  *(undefined1 *)(local_88 + 0x15) = 0;
  local_88[0x14] = 0;
  local_88[0x13] = 0;
  local_88[0x12] = 0;
  local_88[0x11] = 0;
  local_88[0x10] = 0;
  local_88[0xf] = 0;
  local_88[0x17] = puVar7;
  local_88[0x1c] = 0;
  local_88[0x1b] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = local_88 + 0x1b;
                    /* try { // try from 004c072c to 004c0747 has its CatchHandler @ 004c0868 */
  uVar2 = FUN_0056cff0();
  uVar3 = FUN_0056dc90();
  uVar4 = FUN_0056dafc();
  uVar5 = FUN_0056ce5c();
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
                    /* try { // try from 004c0754 to 004c075b has its CatchHandler @ 004c0848 */
  local_a0 = (undefined8 *)FUN_00759c3c(0x20);
  local_98 = local_a0 + 4;
  *local_a0 = uVar2;
  local_a0[1] = uVar3;
  local_a0[2] = uVar4;
  local_a0[3] = uVar5;
                    /* try { // try from 004c0770 to 004c07b3 has its CatchHandler @ 004c084c */
  local_90 = local_98;
  uVar2 = FUN_00583ae0(&local_88,&DAT_001baece,&local_a0);
  uVar2 = FUN_00583770(uVar2,"Einsum");
  plVar6 = (long *)FUN_00583890(uVar2,&DAT_001c717f);
  *(undefined4 *)(*plVar6 + 0x18) = 0xc;
  puVar7 = (undefined8 *)FUN_005839b8(plVar6,"CPUExecutionProvider");
  local_80 = PTR_DAT_007a2000;
  local_60 = &local_80;
  uVar2 = *puVar7;
  *puVar7 = 0;
  local_80 = local_80 + 0x10;
  *param_1 = uVar2;
  pcStack_78 = FUN_004c22e4;
  param_1[2] = local_80;
  param_1[6] = param_1 + 2;
  param_1[3] = FUN_004c22e4;
  param_1[8] = 0;
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    free(local_a0);
  }
  puVar7 = local_88;
  local_88 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_004ac87c(puVar7);
    free(puVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0890  FUN_004c0890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c0890(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  void *__ptr;
  int iVar8;
  undefined8 uVar9;
  char *__dest;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  size_t __n;
  undefined8 local_c0;
  long *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  void *local_98;
  undefined8 local_90;
  long *local_88;
  char *local_80;
  char *pcStack_78;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar8 = (**(code **)(*param_3 + 0x38))(param_3);
  if (iVar8 == 0) {
    local_70 = (char *)FUN_00759c3c(0x30);
    uVar4 = s_Einsum_op__There_must_be_atleast_001c1d3a._16_8_;
    uVar3 = s_Einsum_op__There_must_be_atleast_001c1d3a._0_8_;
    uVar9 = CONCAT62(s_Einsum_op__There_must_be_atleast_001c1d3a._26_6_,
                     s_Einsum_op__There_must_be_atleast_001c1d3a._24_2_);
    pcStack_78 = _UNK_00200118;
    local_80 = _DAT_00200110;
    *(undefined8 *)(local_70 + 8) = s_Einsum_op__There_must_be_atleast_001c1d3a._8_8_;
    *(undefined8 *)local_70 = uVar3;
    *(undefined8 *)(local_70 + 0x18) = uVar9;
    *(undefined8 *)(local_70 + 0x10) = uVar4;
    uVar3 = s_Einsum_op__There_must_be_atleast_001c1d3a._34_8_;
    uVar9 = CONCAT26(s_Einsum_op__There_must_be_atleast_001c1d3a._32_2_,
                     s_Einsum_op__There_must_be_atleast_001c1d3a._26_6_);
    local_70[0x2a] = '\0';
    *(undefined8 *)(local_70 + 0x22) = uVar3;
    *(undefined8 *)(local_70 + 0x1a) = uVar9;
                    /* try { // try from 004c0a98 to 004c0aab has its CatchHandler @ 004c0c1c */
    FUN_0063aa48(param_1,2,2,&local_80);
    pcVar10 = local_70;
    if (((ulong)local_80 & 1) != 0) {
LAB_004c0b8c:
      free(pcVar10);
    }
  }
  else {
    local_80 = (char *)0x0;
    pcStack_78 = (char *)0x0;
    local_70 = (char *)0x0;
    if (iVar8 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004c0c04 to 004c0c0b has its CatchHandler @ 004c0c6c */
        uVar9 = FUN_004c2e1c(&local_80);
                    /* catch() { ... } // from try @ 004c0ae4 with catch @ 004c0c0c */
        FUN_00478198(&local_c0);
        FUN_00474684(&local_98);
        FUN_00478198(&local_90);
        if (local_80 != (char *)0x0) {
          pcStack_78 = local_80;
          free(local_80);
        }
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar9);
        }
      }
      goto LAB_004c0ca4;
    }
                    /* try { // try from 004c08fc to 004c08ff has its CatchHandler @ 004c0c6c */
    local_80 = (char *)FUN_00759c3c((long)iVar8 << 3);
    local_70 = local_80 + (long)iVar8 * 8;
    iVar14 = 0;
    pcStack_78 = local_80;
    do {
                    /* try { // try from 004c092c to 004c0993 has its CatchHandler @ 004c0c74 */
      uVar9 = FUN_004ae6a8(param_3,iVar14);
      pcVar10 = local_80;
      if (pcStack_78 < local_70) {
        pcVar13 = pcStack_78 + 8;
        *(undefined8 *)pcStack_78 = uVar9;
      }
      else {
        __n = (long)pcStack_78 - (long)local_80;
        lVar12 = (long)__n >> 3;
        uVar1 = lVar12 + 1;
        if (uVar1 >> 0x3d != 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 004c0bd4 to 004c0bf3 has its CatchHandler @ 004c0c70 */
            FUN_004c2e1c(&local_80);
LAB_004c0bdc:
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_002f9ee0();
            }
          }
          goto LAB_004c0ca4;
        }
        uVar11 = (long)local_70 - (long)local_80 >> 2;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          __dest = (char *)0x0;
        }
        else {
          if (uVar11 >> 0x3d != 0) goto LAB_004c0bdc;
          __dest = (char *)FUN_00759c3c(uVar11 << 3);
        }
        pcVar13 = __dest + lVar12 * 8 + 8;
        *(undefined8 *)(__dest + lVar12 * 8) = uVar9;
        memcpy(__dest,pcVar10,__n);
        local_80 = __dest;
        local_70 = __dest + uVar11 * 8;
        if (pcVar10 != (char *)0x0) {
          free(pcVar10);
        }
      }
      iVar14 = iVar14 + 1;
      pcStack_78 = pcVar13;
    } while (iVar8 != iVar14);
    local_90 = 0;
    local_88 = (long *)0x0;
                    /* try { // try from 004c09e0 to 004c09ef has its CatchHandler @ 004c0c5c */
    (**(code **)(*param_3 + 0x50))(&local_98,param_3,&local_90);
    if (local_98 == (void *)0x0) {
      lVar12 = param_3[3];
      local_c0 = local_90;
      local_b8 = local_88;
      if (local_88 != (long *)0x0) {
        FUN_00755c20(1,local_88 + 1);
      }
                    /* try { // try from 004c0ae4 to 004c0afb has its CatchHandler @ 004c0c0c */
      (**(code **)(*param_2 + 0x40))(param_1,param_2,param_3,&local_80,&local_c0,lVar12);
      plVar7 = local_b8;
      if ((local_b8 != (long *)0x0) &&
         (lVar12 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar12 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
    }
    else {
                    /* try { // try from 004c0a00 to 004c0a07 has its CatchHandler @ 004c0c4c */
      local_a0 = (char *)FUN_00759c3c(0x48);
      uVar5 = s_There_was_a_problem_acquiring_te_001e7bba._48_8_;
      uVar4 = s_There_was_a_problem_acquiring_te_001e7bba._32_8_;
      uVar9 = CONCAT35(s_There_was_a_problem_acquiring_te_001e7bba._61_3_,
                       s_There_was_a_problem_acquiring_te_001e7bba._56_5_);
      uVar3 = CONCAT53(s_There_was_a_problem_acquiring_te_001e7bba._64_5_,
                       s_There_was_a_problem_acquiring_te_001e7bba._61_3_);
      uStack_a8 = _UNK_00200268;
      local_b0 = _DAT_00200260;
      *(undefined8 *)(local_a0 + 0x28) = s_There_was_a_problem_acquiring_te_001e7bba._40_8_;
      *(undefined8 *)(local_a0 + 0x20) = uVar4;
      *(undefined8 *)(local_a0 + 0x38) = uVar9;
      *(undefined8 *)(local_a0 + 0x30) = uVar5;
      uVar6 = s_There_was_a_problem_acquiring_te_001e7bba._24_8_;
      uVar5 = s_There_was_a_problem_acquiring_te_001e7bba._16_8_;
      uVar4 = s_There_was_a_problem_acquiring_te_001e7bba._8_8_;
      uVar9 = s_There_was_a_problem_acquiring_te_001e7bba._0_8_;
      *(undefined8 *)(local_a0 + 0x3d) = uVar3;
      local_a0[0x45] = '\0';
      *(undefined8 *)(local_a0 + 8) = uVar4;
      *(undefined8 *)local_a0 = uVar9;
      *(undefined8 *)(local_a0 + 0x18) = uVar6;
      *(undefined8 *)(local_a0 + 0x10) = uVar5;
                    /* try { // try from 004c0a3c to 004c0a4f has its CatchHandler @ 004c0c34 */
      FUN_0063aa48(param_1,2,6,&local_b0);
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
    }
    __ptr = local_98;
    local_98 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x18));
      }
      free(__ptr);
    }
    plVar7 = local_88;
    if ((local_88 != (long *)0x0) &&
       (lVar12 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar12 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0071245c(plVar7);
    }
    if (local_80 != (char *)0x0) {
      pcStack_78 = local_80;
      pcVar10 = local_80;
      goto LAB_004c0b8c;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_004c0ca4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c0ca8  FUN_004c0ca8 =====

void FUN_004c0ca8(long *param_1,long param_2,undefined *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  char **ppcVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_750;
  long *local_748;
  undefined *local_740;
  undefined *puStack_738;
  undefined **local_720;
  undefined *local_710;
  undefined *puStack_708;
  undefined **local_6f0;
  char *local_6e0;
  undefined *puStack_6d8;
  char **local_6c0;
  undefined *local_6b0;
  undefined *local_6a8;
  long *local_6a0;
  undefined8 local_698;
  undefined **local_690;
  long local_680 [4];
  long *local_660;
  long local_650 [4];
  long *local_630;
  long local_620 [4];
  long *local_600;
  long local_5f0 [4];
  long *local_5d0;
  undefined8 local_5c0;
  char *local_5b0;
  undefined *puStack_5a8;
  char **local_590;
  undefined *apuStack_580 [163];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_750 = *param_5;
  local_748 = (long *)param_5[1];
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  if (local_748 != (long *)0x0) {
    FUN_00755c20(1,local_748 + 1);
  }
                    /* try { // try from 004c0d04 to 004c0d1b has its CatchHandler @ 004c1b30 */
  FUN_004c82ec(apuStack_580,uVar10,param_4,&local_750,0);
  plVar9 = local_748;
  if ((local_748 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_748 + 1), lVar6 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
  }
  puVar5 = PTR_thunk_FUN_0054ed58_007a2108;
  puVar4 = PTR_DAT_007a2100;
  local_690 = &local_6b0;
  local_6b0 = PTR_DAT_007a20f0 + 0x10;
  local_6a8 = PTR_FUN_007a20f8;
  local_5b0 = PTR_DAT_007a2100 + 0x10;
  puStack_5a8 = PTR_thunk_FUN_0054ed58_007a2108;
                    /* try { // try from 004c0d8c to 004c0d9b has its CatchHandler @ 004c1ac0 */
  local_590 = &local_5b0;
  FUN_004cb19c(apuStack_580,&local_6b0,&local_5b0);
  if (local_590 == &local_5b0) {
    lVar6 = 0x20;
    ppcVar8 = &local_5b0;
LAB_004c0dbc:
    (**(code **)(*ppcVar8 + lVar6))();
  }
  else if (local_590 != (char **)0x0) {
    lVar6 = 0x28;
    ppcVar8 = local_590;
    goto LAB_004c0dbc;
  }
  if (local_690 == &local_6b0) {
    lVar6 = 0x20;
    ppuVar7 = &local_6b0;
LAB_004c0dec:
    (**(code **)(*ppuVar7 + lVar6))();
  }
  else if (local_690 != (undefined **)0x0) {
    lVar6 = 0x28;
    ppuVar7 = local_690;
    goto LAB_004c0dec;
  }
                    /* try { // try from 004c0df8 to 004c0e03 has its CatchHandler @ 004c1ab8 */
  FUN_004c853c(param_1,apuStack_580);
  if (*param_1 != 0) {
                    /* try { // try from 004c0e0c to 004c0e2b has its CatchHandler @ 004c1aa8 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum.cc"
                 ,"DeviceCompute",0x37);
    goto LAB_004c0e2c;
  }
  local_710 = *(undefined **)(*(long *)*param_4 + 0x58);
  iVar2 = *(int *)(local_710 + 0x18);
  if (iVar2 < 7) {
    if (iVar2 == 1) {
      puVar1 = (undefined *)*param_5;
      plVar9 = (long *)param_5[1];
      if (plVar9 == (long *)0x0) {
        local_6a0 = (long *)0x0;
        local_6a8 = puVar1;
      }
      else {
        FUN_00755c20(1,plVar9 + 1);
        local_6a8 = puVar1;
        local_6a0 = plVar9;
        FUN_00755c20(1,plVar9 + 1);
      }
      local_690 = apuStack_580;
      local_660 = (long *)0x0;
      local_630 = (long *)0x0;
      local_600 = (long *)0x0;
      local_5d0 = (long *)0x0;
      local_5c0 = 0;
      local_6b0 = param_3;
      local_698 = param_6;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
      local_5b0 = puVar4 + 0x10;
      local_590 = &local_5b0;
      puStack_5a8 = puVar5;
      local_6e0 = PTR_DAT_007a2158 + 0x10;
      puStack_6d8 = PTR_FUN_007a2160;
      local_6c0 = &local_6e0;
      local_710 = PTR_DAT_007a2120 + 0x10;
      puStack_708 = PTR_FUN_007a2168;
      local_6f0 = &local_710;
      local_740 = PTR_DAT_007a2130 + 0x10;
      puStack_738 = PTR_FUN_007a2138;
                    /* try { // try from 004c1234 to 004c124b has its CatchHandler @ 004c1820 */
      local_720 = &local_740;
      FUN_004cc2c8(&local_6b0,&local_5b0,&local_6e0,&local_710,&local_740);
      if (local_720 == &local_740) {
        lVar6 = 0x20;
        ppuVar7 = &local_740;
LAB_004c14cc:
        (**(code **)(*ppuVar7 + lVar6))();
      }
      else if (local_720 != (undefined **)0x0) {
        lVar6 = 0x28;
        ppuVar7 = local_720;
        goto LAB_004c14cc;
      }
      if (local_6f0 == &local_710) {
        lVar6 = 0x20;
        ppuVar7 = &local_710;
LAB_004c152c:
        (**(code **)(*ppuVar7 + lVar6))();
      }
      else if (local_6f0 != (undefined **)0x0) {
        lVar6 = 0x28;
        ppuVar7 = local_6f0;
        goto LAB_004c152c;
      }
      if (local_6c0 == &local_6e0) {
        lVar6 = 0x20;
        ppcVar8 = &local_6e0;
LAB_004c158c:
        (**(code **)(*ppcVar8 + lVar6))();
      }
      else if (local_6c0 != (char **)0x0) {
        lVar6 = 0x28;
        ppcVar8 = local_6c0;
        goto LAB_004c158c;
      }
      if (local_590 == &local_5b0) {
        lVar6 = 0x20;
        ppcVar8 = &local_5b0;
LAB_004c15ec:
        (**(code **)(*ppcVar8 + lVar6))();
      }
      else if (local_590 != (char **)0x0) {
        lVar6 = 0x28;
        ppcVar8 = local_590;
        goto LAB_004c15ec;
      }
                    /* try { // try from 004c15f8 to 004c1607 has its CatchHandler @ 004c1738 */
      FUN_004cc53c(param_1,&local_6b0);
    }
    else {
      if (iVar2 != 6) {
LAB_004c0eec:
        local_5b0 = "Einsum op: An implementation for the input type ";
        local_6e0 = " is not supported yet";
        FUN_004c3430(&local_6b0,&local_5b0,&local_710,&local_6e0);
                    /* try { // try from 004c0f1c to 004c0f2f has its CatchHandler @ 004c1a90 */
        FUN_0063aa48(param_1,2,9,&local_6b0);
        if (((ulong)local_6b0 & 1) != 0) {
          free(local_6a0);
        }
        goto LAB_004c0e2c;
      }
      puVar1 = (undefined *)*param_5;
      plVar9 = (long *)param_5[1];
      if (plVar9 == (long *)0x0) {
        local_6a0 = (long *)0x0;
        local_6a8 = puVar1;
      }
      else {
        FUN_00755c20(1,plVar9 + 1);
        local_6a8 = puVar1;
        local_6a0 = plVar9;
        FUN_00755c20(1,plVar9 + 1);
      }
      local_690 = apuStack_580;
      local_660 = (long *)0x0;
      local_630 = (long *)0x0;
      local_600 = (long *)0x0;
      local_5d0 = (long *)0x0;
      local_5c0 = 0;
      local_6b0 = param_3;
      local_698 = param_6;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
      local_5b0 = puVar4 + 0x10;
      local_590 = &local_5b0;
      puStack_5a8 = puVar5;
      local_6e0 = PTR_DAT_007a2110 + 0x10;
      puStack_6d8 = PTR_FUN_007a2118;
      local_6c0 = &local_6e0;
      local_710 = PTR_DAT_007a2120 + 0x10;
      puStack_708 = PTR_FUN_007a2128;
      local_6f0 = &local_710;
      local_740 = PTR_DAT_007a2130 + 0x10;
      puStack_738 = PTR_FUN_007a2138;
                    /* try { // try from 004c1054 to 004c106b has its CatchHandler @ 004c19c0 */
      local_720 = &local_740;
      FUN_004cf7f8(&local_6b0,&local_5b0,&local_6e0,&local_710,&local_740);
      if (local_720 == &local_740) {
        lVar6 = 0x20;
        ppuVar7 = &local_740;
LAB_004c135c:
        (**(code **)(*ppuVar7 + lVar6))();
      }
      else if (local_720 != (undefined **)0x0) {
        lVar6 = 0x28;
        ppuVar7 = local_720;
        goto LAB_004c135c;
      }
      if (local_6f0 == &local_710) {
        lVar6 = 0x20;
        ppuVar7 = &local_710;
LAB_004c13bc:
        (**(code **)(*ppuVar7 + lVar6))();
      }
      else if (local_6f0 != (undefined **)0x0) {
        lVar6 = 0x28;
        ppuVar7 = local_6f0;
        goto LAB_004c13bc;
      }
      if (local_6c0 == &local_6e0) {
        lVar6 = 0x20;
        ppcVar8 = &local_6e0;
LAB_004c141c:
        (**(code **)(*ppcVar8 + lVar6))();
      }
      else if (local_6c0 != (char **)0x0) {
        lVar6 = 0x28;
        ppcVar8 = local_6c0;
        goto LAB_004c141c;
      }
      if (local_590 == &local_5b0) {
        lVar6 = 0x20;
        ppcVar8 = &local_5b0;
LAB_004c147c:
        (**(code **)(*ppcVar8 + lVar6))();
      }
      else if (local_590 != (char **)0x0) {
        lVar6 = 0x28;
        ppcVar8 = local_590;
        goto LAB_004c147c;
      }
                    /* try { // try from 004c1488 to 004c1497 has its CatchHandler @ 004c1748 */
      FUN_004cfa6c(param_1,&local_6b0);
    }
  }
  else if (iVar2 == 7) {
    puVar1 = (undefined *)*param_5;
    plVar9 = (long *)param_5[1];
    if (plVar9 == (long *)0x0) {
      local_6a0 = (long *)0x0;
      local_6a8 = puVar1;
    }
    else {
      FUN_00755c20(1,plVar9 + 1);
      local_6a8 = puVar1;
      local_6a0 = plVar9;
      FUN_00755c20(1,plVar9 + 1);
    }
    local_690 = apuStack_580;
    local_660 = (long *)0x0;
    local_630 = (long *)0x0;
    local_600 = (long *)0x0;
    local_5d0 = (long *)0x0;
    local_5c0 = 0;
    local_6b0 = param_3;
    local_698 = param_6;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_0071245c(plVar9);
    }
    local_5b0 = puVar4 + 0x10;
    local_590 = &local_5b0;
    puStack_5a8 = puVar5;
    local_6e0 = PTR_DAT_007a2170 + 0x10;
    puStack_6d8 = PTR_FUN_007a2178;
    local_6c0 = &local_6e0;
    local_710 = PTR_DAT_007a2120 + 0x10;
    puStack_708 = PTR_FUN_007a2180;
    local_6f0 = &local_710;
    local_740 = PTR_DAT_007a2130 + 0x10;
    puStack_738 = PTR_FUN_007a2138;
                    /* try { // try from 004c1324 to 004c133b has its CatchHandler @ 004c1750 */
    local_720 = &local_740;
    FUN_004d61e0(&local_6b0,&local_5b0,&local_6e0,&local_710,&local_740);
    if (local_720 == &local_740) {
      lVar6 = 0x20;
      ppuVar7 = &local_740;
LAB_004c14fc:
      (**(code **)(*ppuVar7 + lVar6))();
    }
    else if (local_720 != (undefined **)0x0) {
      lVar6 = 0x28;
      ppuVar7 = local_720;
      goto LAB_004c14fc;
    }
    if (local_6f0 == &local_710) {
      lVar6 = 0x20;
      ppuVar7 = &local_710;
LAB_004c155c:
      (**(code **)(*ppuVar7 + lVar6))();
    }
    else if (local_6f0 != (undefined **)0x0) {
      lVar6 = 0x28;
      ppuVar7 = local_6f0;
      goto LAB_004c155c;
    }
    if (local_6c0 == &local_6e0) {
      lVar6 = 0x20;
      ppcVar8 = &local_6e0;
LAB_004c15bc:
      (**(code **)(*ppcVar8 + lVar6))();
    }
    else if (local_6c0 != (char **)0x0) {
      lVar6 = 0x28;
      ppcVar8 = local_6c0;
      goto LAB_004c15bc;
    }
    if (local_590 == &local_5b0) {
      lVar6 = 0x20;
      ppcVar8 = &local_5b0;
LAB_004c1614:
      (**(code **)(*ppcVar8 + lVar6))();
    }
    else if (local_590 != (char **)0x0) {
      lVar6 = 0x28;
      ppcVar8 = local_590;
      goto LAB_004c1614;
    }
                    /* try { // try from 004c1620 to 004c162f has its CatchHandler @ 004c1730 */
    FUN_004d6454(param_1,&local_6b0);
  }
  else {
    if (iVar2 != 0xb) goto LAB_004c0eec;
    puVar1 = (undefined *)*param_5;
    plVar9 = (long *)param_5[1];
    if (plVar9 == (long *)0x0) {
      local_6a0 = (long *)0x0;
      local_6a8 = puVar1;
    }
    else {
      FUN_00755c20(1,plVar9 + 1);
      local_6a8 = puVar1;
      local_6a0 = plVar9;
      FUN_00755c20(1,plVar9 + 1);
    }
    local_690 = apuStack_580;
    local_660 = (long *)0x0;
    local_630 = (long *)0x0;
    local_600 = (long *)0x0;
    local_5d0 = (long *)0x0;
    local_5c0 = 0;
    local_6b0 = param_3;
    local_698 = param_6;
    if ((plVar9 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar9 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_0071245c(plVar9);
    }
    local_5b0 = puVar4 + 0x10;
    local_590 = &local_5b0;
    puStack_5a8 = puVar5;
    local_6e0 = PTR_DAT_007a2140 + 0x10;
    puStack_6d8 = PTR_FUN_007a2148;
    local_6c0 = &local_6e0;
    local_710 = PTR_DAT_007a2120 + 0x10;
    puStack_708 = PTR_FUN_007a2150;
    local_6f0 = &local_710;
    local_740 = PTR_DAT_007a2130 + 0x10;
    puStack_738 = PTR_FUN_007a2138;
                    /* try { // try from 004c1144 to 004c115b has its CatchHandler @ 004c18f0 */
    local_720 = &local_740;
    FUN_004d2cec(&local_6b0,&local_5b0,&local_6e0,&local_710,&local_740);
    if (local_720 == &local_740) {
      lVar6 = 0x20;
      ppuVar7 = &local_740;
LAB_004c138c:
      (**(code **)(*ppuVar7 + lVar6))();
    }
    else if (local_720 != (undefined **)0x0) {
      lVar6 = 0x28;
      ppuVar7 = local_720;
      goto LAB_004c138c;
    }
    if (local_6f0 == &local_710) {
      lVar6 = 0x20;
      ppuVar7 = &local_710;
LAB_004c13ec:
      (**(code **)(*ppuVar7 + lVar6))();
    }
    else if (local_6f0 != (undefined **)0x0) {
      lVar6 = 0x28;
      ppuVar7 = local_6f0;
      goto LAB_004c13ec;
    }
    if (local_6c0 == &local_6e0) {
      lVar6 = 0x20;
      ppcVar8 = &local_6e0;
LAB_004c144c:
      (**(code **)(*ppcVar8 + lVar6))();
    }
    else if (local_6c0 != (char **)0x0) {
      lVar6 = 0x28;
      ppcVar8 = local_6c0;
      goto LAB_004c144c;
    }
    if (local_590 == &local_5b0) {
      lVar6 = 0x20;
      ppcVar8 = &local_5b0;
LAB_004c14a4:
      (**(code **)(*ppcVar8 + lVar6))();
    }
    else if (local_590 != (char **)0x0) {
      lVar6 = 0x28;
      ppcVar8 = local_590;
      goto LAB_004c14a4;
    }
                    /* try { // try from 004c14b0 to 004c14bf has its CatchHandler @ 004c1740 */
    FUN_004d2f60(param_1,&local_6b0);
  }
  plVar9 = local_5f0;
  if (local_5d0 == plVar9) {
    lVar6 = 0x20;
LAB_004c1654:
    (**(code **)(*plVar9 + lVar6))();
  }
  else if (local_5d0 != (long *)0x0) {
    lVar6 = 0x28;
    plVar9 = local_5d0;
    goto LAB_004c1654;
  }
  plVar9 = local_620;
  if (local_600 == plVar9) {
    lVar6 = 0x20;
LAB_004c1688:
    (**(code **)(*plVar9 + lVar6))();
  }
  else if (local_600 != (long *)0x0) {
    lVar6 = 0x28;
    plVar9 = local_600;
    goto LAB_004c1688;
  }
  plVar9 = local_650;
  if (local_630 == plVar9) {
    lVar6 = 0x20;
LAB_004c16bc:
    (**(code **)(*plVar9 + lVar6))();
  }
  else if (local_630 != (long *)0x0) {
    lVar6 = 0x28;
    plVar9 = local_630;
    goto LAB_004c16bc;
  }
  plVar9 = local_680;
  if (local_660 == plVar9) {
    lVar6 = 0x20;
LAB_004c16f0:
    (**(code **)(*plVar9 + lVar6))();
  }
  else if (local_660 != (long *)0x0) {
    lVar6 = 0x28;
    plVar9 = local_660;
    goto LAB_004c16f0;
  }
  plVar9 = local_6a0;
  if ((local_6a0 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_6a0 + 1), lVar6 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0071245c(plVar9);
  }
LAB_004c0e2c:
  FUN_004c1fa8(apuStack_580);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c1b58  FUN_004c1b58 =====

void FUN_004c1b58(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  plVar3 = (long *)(param_1 + 0xc0);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1b8c:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1b8c;
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar3 = (long *)(param_1 + 0x90);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1bbc:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1bbc;
  }
  plVar1 = *(long **)(param_1 + 0x80);
  plVar3 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1bec:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1bec;
  }
  plVar1 = *(long **)(param_1 + 0x50);
  plVar3 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004c1c28;
    lVar2 = 0x28;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2))();
LAB_004c1c28:
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 004c1c6c  FUN_004c1c6c =====

void FUN_004c1c6c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  plVar3 = (long *)(param_1 + 0xc0);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1ca0:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1ca0;
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar3 = (long *)(param_1 + 0x90);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1cd0:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1cd0;
  }
  plVar1 = *(long **)(param_1 + 0x80);
  plVar3 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1d00:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1d00;
  }
  plVar1 = *(long **)(param_1 + 0x50);
  plVar3 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004c1d3c;
    lVar2 = 0x28;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2))();
LAB_004c1d3c:
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 004c1d80  FUN_004c1d80 =====

void FUN_004c1d80(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  plVar3 = (long *)(param_1 + 0xc0);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1db4:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1db4;
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar3 = (long *)(param_1 + 0x90);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1de4:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1de4;
  }
  plVar1 = *(long **)(param_1 + 0x80);
  plVar3 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1e14:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1e14;
  }
  plVar1 = *(long **)(param_1 + 0x50);
  plVar3 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004c1e50;
    lVar2 = 0x28;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2))();
LAB_004c1e50:
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 004c1e94  FUN_004c1e94 =====

void FUN_004c1e94(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  plVar3 = (long *)(param_1 + 0xc0);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1ec8:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1ec8;
  }
  plVar1 = *(long **)(param_1 + 0xb0);
  plVar3 = (long *)(param_1 + 0x90);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1ef8:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1ef8;
  }
  plVar1 = *(long **)(param_1 + 0x80);
  plVar3 = (long *)(param_1 + 0x60);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
LAB_004c1f28:
    (**(code **)(*plVar3 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    plVar3 = plVar1;
    goto LAB_004c1f28;
  }
  plVar1 = *(long **)(param_1 + 0x50);
  plVar3 = (long *)(param_1 + 0x30);
  if (plVar1 == plVar3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_004c1f64;
    lVar2 = 0x28;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2))();
LAB_004c1f64:
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 004c1fa8  FUN_004c1fa8 =====

void FUN_004c1fa8(byte *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  void *pvVar11;
  
  pbVar1 = *(byte **)(param_1 + 0x4f0);
  pbVar10 = param_1 + 0x4d0;
  if (pbVar1 == pbVar10) {
    lVar5 = 0x20;
LAB_004c1fe0:
    (**(code **)(*(long *)pbVar10 + lVar5))();
  }
  else if (pbVar1 != (byte *)0x0) {
    lVar5 = 0x28;
    pbVar10 = pbVar1;
    goto LAB_004c1fe0;
  }
  pbVar1 = *(byte **)(param_1 + 0x4c0);
  pbVar10 = param_1 + 0x4a0;
  if (pbVar1 == pbVar10) {
    lVar5 = 0x20;
  }
  else {
    if (pbVar1 == (byte *)0x0) goto LAB_004c201c;
    lVar5 = 0x28;
    pbVar10 = pbVar1;
  }
  (**(code **)(*(long *)pbVar10 + lVar5))();
LAB_004c201c:
  plVar8 = *(long **)(param_1 + 0x490);
  if ((plVar8 != (long *)0x0) && (lVar5 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar5 == 0))
  {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  pvVar2 = *(void **)(param_1 + 0x470);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x478) = pvVar2;
    free(pvVar2);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x458);
  if (puVar9 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x460);
    puVar3 = puVar9;
    if (puVar6 != puVar9) {
      do {
        puVar3 = puVar6 + -3;
        pvVar2 = (void *)*puVar3;
        if (pvVar2 != (void *)0x0) {
          puVar6[-2] = pvVar2;
          free(pvVar2);
        }
        puVar6 = puVar3;
      } while (puVar3 != puVar9);
      puVar3 = *(undefined8 **)(param_1 + 0x458);
    }
    *(undefined8 **)(param_1 + 0x460) = puVar9;
    free(puVar3);
  }
  if ((param_1[0x420] & 1) != 0) {
    free(*(void **)(param_1 + 0x428));
  }
  pvVar2 = *(void **)(param_1 + 0x408);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x410) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x3f0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x3f8) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x90);
  if (pvVar2 != (void *)0x0) {
    pvVar11 = *(void **)(param_1 + 0x98);
    pvVar4 = pvVar2;
    if (pvVar11 != pvVar2) {
      do {
        pvVar4 = *(void **)((long)pvVar11 + -8);
        *(undefined8 *)((long)pvVar11 + -8) = 0;
        if (pvVar4 != (void *)0x0) {
          free(pvVar4);
        }
        pvVar11 = (void *)((long)pvVar11 + -0x40);
      } while (pvVar11 != pvVar2);
      pvVar4 = *(void **)(param_1 + 0x90);
    }
    *(void **)(param_1 + 0x98) = pvVar2;
    free(pvVar4);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x80);
    puVar3 = puVar9;
    if (puVar6 != puVar9) {
      do {
        puVar6 = puVar6 + -1;
        pvVar2 = (void *)*puVar6;
        *puVar6 = 0;
        if (pvVar2 != (void *)0x0) {
          FUN_005c8ce4(pvVar2);
          free(pvVar2);
        }
      } while (puVar6 != puVar9);
      puVar3 = *(undefined8 **)(param_1 + 0x78);
    }
    *(undefined8 **)(param_1 + 0x80) = puVar9;
    free(puVar3);
  }
  if ((param_1[0x48] & 1) != 0) {
    free(*(void **)(param_1 + 0x58));
  }
  pbVar10 = *(byte **)(param_1 + 0x30);
  if (pbVar10 != (byte *)0x0) {
    pbVar7 = *(byte **)(param_1 + 0x38);
    pbVar1 = pbVar10;
    if (pbVar7 != pbVar10) {
      do {
        pbVar1 = pbVar7 + -0x18;
        if ((*pbVar1 & 1) != 0) {
          free(*(void **)(pbVar7 + -8));
        }
        pbVar7 = pbVar1;
      } while (pbVar1 != pbVar10);
      pbVar1 = *(byte **)(param_1 + 0x30);
    }
    *(byte **)(param_1 + 0x38) = pbVar10;
    free(pbVar1);
  }
  if ((param_1[0x18] & 1) != 0) {
    free(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 004c2208  FUN_004c2208 =====

void FUN_004c2208(long *param_1)

{
  undefined *puVar1;
  void *__ptr;
  long lVar2;
  
  puVar1 = PTR_DAT_007a2188;
  lVar2 = param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (lVar2 != 0) {
    FUN_004c2d54();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[4]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = (long)&PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 004c2278  FUN_004c2278 =====

void FUN_004c2278(long *param_1)

{
  undefined *puVar1;
  void *__ptr;
  long lVar2;
  
  puVar1 = PTR_DAT_007a2188;
  lVar2 = param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (lVar2 != 0) {
    FUN_004c2d54();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    free((void *)param_1[4]);
  }
  __ptr = (void *)param_1[1];
  *param_1 = (long)&PTR_FUN_007907b0;
  param_1[1] = 0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 004c22e4  FUN_004c22e4 =====

void FUN_004c22e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00759c3c(0x30);
                    /* try { // try from 004c230c to 004c2313 has its CatchHandler @ 004c2340 */
  FUN_004c2354(lVar1,param_3);
  plVar2 = (long *)*param_4;
  *param_4 = lVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *param_1 = 0;
  return;
}


// ===== 004c2354  FUN_004c2354 =====

void FUN_004c2354(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_d8 [24];
  void *local_c0 [3];
  byte local_a8 [16];
  void *local_98;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a2008 + 0x10);
  FUN_0058d0b4(param_1 + 1,param_2);
  local_a8[0] = 0x10;
  local_a8[9] = 0;
  local_a8[1] = 0x65;
  local_a8[2] = 0x71;
  local_a8[3] = 0x75;
  local_a8[4] = 0x61;
  local_a8[5] = 0x74;
  local_a8[6] = 0x69;
  local_a8[7] = 0x6f;
  local_a8[8] = 0x6e;
  *param_1 = (long)(PTR_DAT_007a2188 + 0x10);
  plVar5 = param_1 + 2;
  param_1[3] = 0;
  *plVar5 = 0;
  param_1[5] = 0;
  param_1[4] = 0;
                    /* try { // try from 004c23e0 to 004c23f3 has its CatchHandler @ 004c2578 */
  FUN_00595058(local_c0,param_2,local_a8,plVar5);
  __ptr = local_c0[0];
  local_c0[0] = (void *)0x0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x18));
    }
    free(__ptr);
  }
  if ((local_a8[0] & 1) != 0) {
    free(local_98);
  }
  if (__ptr == (void *)0x0) {
                    /* try { // try from 004c242c to 004c2433 has its CatchHandler @ 004c2570 */
    lVar2 = FUN_00759c3c(0x68);
                    /* try { // try from 004c2434 to 004c243f has its CatchHandler @ 004c2564 */
    FUN_004c2608(lVar2,plVar5);
    lVar4 = param_1[5];
    param_1[5] = lVar2;
    if (lVar4 != 0) {
      FUN_004c2d54(param_1 + 5);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c248c to 004c2493 has its CatchHandler @ 004c2554 */
    FUN_00645c30(local_c0);
                    /* try { // try from 004c2494 to 004c24b3 has its CatchHandler @ 004c2544 */
    FUN_0047488c(local_a8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum.h"
                 ,0x13,"onnxruntime::Einsum::Einsum(const OpKernelInfo &)",local_c0);
                    /* try { // try from 004c24b4 to 004c24c3 has its CatchHandler @ 004c2524 */
    FUN_00479eac(auStack_d8,"Missing \'equation\' attribute");
                    /* try { // try from 004c24c8 to 004c250b has its CatchHandler @ 004c250c */
    FUN_00474a40(uVar3,local_a8,"info.GetAttr<std::string>(\"equation\", &equation_).IsOK()",
                 auStack_d8);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c2608  FUN_004c2608 =====

void FUN_004c2608(byte *param_1)

{
  byte *pbVar1;
  size_t sVar2;
  ulong __n;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *__dest;
  ulong *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  size_t sVar19;
  size_t sVar20;
  byte bVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 *local_90;
  ulong local_80;
  ulong uStack_78;
  byte *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  param_1[0x60] = 0;
  pbVar13 = param_1 + 0x30;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* try { // try from 004c265c to 004c265f has its CatchHandler @ 004c2c84 */
  FUN_007139b0();
  bVar5 = *param_1;
  sVar19 = *(size_t *)(param_1 + 8);
  pbVar10 = *(byte **)(param_1 + 0x10);
  pbVar1 = param_1 + 1;
  sVar20 = (size_t)(bVar5 >> 1);
  bVar21 = bVar5 & 1;
  sVar2 = sVar19;
  pbVar17 = pbVar10;
  if ((bVar5 & 1) == 0) {
    sVar2 = sVar20;
    pbVar17 = param_1 + 1;
  }
  pbVar18 = pbVar17 + sVar2;
  pbVar9 = (byte *)memchr(pbVar17,0x20,sVar2);
  pbVar14 = pbVar18;
  if (pbVar9 != (byte *)0x0) {
    pbVar14 = pbVar9;
  }
  if ((pbVar14 != pbVar18) && (pbVar9 = pbVar14 + 1, pbVar9 != pbVar18)) {
    pbVar17 = pbVar17 + ~(ulong)pbVar14 + sVar2;
    pbVar10 = pbVar14;
    do {
      pbVar14 = pbVar10;
      if (*pbVar9 != 0x20) {
        pbVar14 = pbVar10 + 1;
        *pbVar10 = *pbVar9;
      }
      pbVar17 = pbVar17 + -1;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar14;
    } while (pbVar17 != (byte *)0x0);
    sVar19 = *(size_t *)(param_1 + 8);
    pbVar10 = *(byte **)(param_1 + 0x10);
    sVar20 = (size_t)(*param_1 >> 1);
    bVar21 = *param_1 & 1;
  }
  pbVar17 = pbVar1;
  if (bVar21 != 0) {
    sVar20 = sVar19;
    pbVar17 = pbVar10;
  }
                    /* try { // try from 004c2704 to 004c270b has its CatchHandler @ 004c2c74 */
  FUN_007135f0(param_1,(long)pbVar14 - (long)pbVar17,pbVar17 + (sVar20 - (long)pbVar14));
  uVar16 = (ulong)(*param_1 >> 1);
  pbVar17 = pbVar1;
  if ((*param_1 & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8);
    pbVar17 = *(byte **)(param_1 + 0x10);
  }
  if (1 < (long)uVar16) {
    pbVar10 = pbVar17;
    uVar15 = uVar16;
    while (pbVar10 = (byte *)memchr(pbVar10,0x2d,uVar15 - 1), pbVar10 != (byte *)0x0) {
      if (*(short *)pbVar10 == 0x3e2d) {
        if ((pbVar10 != pbVar17 + uVar16) &&
           (uVar15 = (long)pbVar10 - (long)pbVar17, uVar15 != 0xffffffffffffffff)) {
          if (uVar15 <= uVar16) {
            uVar16 = uVar15;
          }
          if (0xfffffffffffffff7 < uVar16) {
            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 004c2be8 to 004c2bef has its CatchHandler @ 004c2c28 */
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_80);
            }
            goto LAB_004c2d50;
          }
          if (uVar16 < 0x17) {
            pbVar18 = (byte *)((ulong)&local_80 | 1);
            local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar16 << 1));
            if (pbVar10 != pbVar17) goto LAB_004c2abc;
          }
          else {
            uVar3 = (uVar16 & 0x7ffffffffffffff8) + 8;
            if ((uVar16 | 7) != 0x17) {
              uVar3 = uVar16 | 7;
            }
                    /* try { // try from 004c2aa4 to 004c2aab has its CatchHandler @ 004c2c28 */
            pbVar18 = (byte *)FUN_00759c3c(uVar3 + 1);
            local_80 = uVar3 + 1 | 1;
            uStack_78 = uVar16;
            local_70 = pbVar18;
LAB_004c2abc:
            memmove(pbVar18,pbVar17,uVar16);
          }
          pbVar18[uVar16] = 0;
          if ((param_1[0x18] & 1) != 0) {
            free(*(void **)(param_1 + 0x28));
          }
          bVar21 = *param_1;
          uVar15 = uVar15 + 2;
          *(ulong *)(param_1 + 0x20) = uStack_78;
          *(ulong *)(param_1 + 0x18) = local_80;
          uVar16 = (ulong)(bVar21 >> 1);
          if ((bVar21 & 1) != 0) {
            uVar16 = *(ulong *)(param_1 + 8);
          }
          *(byte **)(param_1 + 0x28) = local_70;
          uVar3 = uVar16 - uVar15;
          if (uVar16 < uVar15) {
            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 004c2c04 to 004c2c27 has its CatchHandler @ 004c2c38 */
                    /* WARNING: Subroutine does not return */
              FUN_0030b8f4(&local_80);
            }
            goto LAB_004c2d50;
          }
          if ((bVar21 & 1) != 0) {
            pbVar1 = *(byte **)(param_1 + 0x10);
          }
          if (0xfffffffffffffff7 < uVar3) {
            if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_002fb400(&local_80);
            }
            goto LAB_004c2d50;
          }
          if (uVar3 < 0x17) {
            pbVar17 = (byte *)((ulong)&local_80 | 1);
            local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar3 << 1));
            if (uVar16 != uVar15) goto LAB_004c2b78;
          }
          else {
            uVar16 = (uVar3 & 0xfffffffffffffff8) + 8;
            if ((uVar3 | 7) != 0x17) {
              uVar16 = uVar3 | 7;
            }
                    /* try { // try from 004c2b60 to 004c2b67 has its CatchHandler @ 004c2c38 */
            pbVar17 = (byte *)FUN_00759c3c(uVar16 + 1);
            local_80 = uVar16 + 1 | 1;
            uStack_78 = uVar3;
            local_70 = pbVar17;
LAB_004c2b78:
            memmove(pbVar17,pbVar1 + uVar15,uVar3);
          }
          pbVar17[uVar3] = 0;
          if ((param_1[0x48] & 1) != 0) {
            free(*(void **)(param_1 + 0x58));
          }
          param_1[0x60] = 1;
          *(ulong *)(param_1 + 0x50) = uStack_78;
          *(ulong *)(param_1 + 0x48) = local_80;
          *(byte **)(param_1 + 0x58) = local_70;
          goto LAB_004c27c0;
        }
        break;
      }
      pbVar10 = pbVar10 + 1;
      uVar15 = (long)(pbVar17 + uVar16) - (long)pbVar10;
      if ((long)uVar15 < 2) break;
    }
  }
                    /* try { // try from 004c27b4 to 004c27bf has its CatchHandler @ 004c2c64 */
  FUN_007139b0(param_1 + 0x18,param_1);
LAB_004c27c0:
  uVar15 = 2;
  local_80 = CONCAT53(local_80._3_5_,0x2c02);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (undefined1 *)0x0;
  uVar16 = uStack_78;
  do {
    pbVar10 = local_70;
    bVar21 = param_1[0x18];
    uVar3 = *(ulong *)(param_1 + 0x20);
    pbVar17 = *(byte **)(param_1 + 0x28);
    bVar7 = (bVar21 & 1) != 0;
    pbVar1 = param_1 + 0x19;
    if (bVar7) {
      pbVar1 = pbVar17;
    }
    __n = (ulong)(bVar21 >> 1);
    if (bVar7) {
      __n = uVar3;
    }
    pbVar18 = (byte *)((ulong)&local_80 | 1);
    sVar2 = uVar15 >> 1;
    if ((uVar15 & 1) != 0) {
      pbVar18 = local_70;
      sVar2 = uVar16;
    }
    if (sVar2 != 0) {
      if ((long)sVar2 <= (long)__n) {
        bVar5 = *pbVar18;
        pbVar14 = pbVar1;
        uVar16 = __n;
        while( true ) {
          if ((0xfffffffffffffffe < uVar16 - sVar2) ||
             (pbVar14 = (byte *)memchr(pbVar14,(uint)bVar5,(uVar16 - sVar2) + 1),
             pbVar14 == (byte *)0x0)) goto LAB_004c29bc;
          iVar8 = memcmp(pbVar14,pbVar18,sVar2);
          if (iVar8 == 0) break;
          pbVar14 = pbVar14 + 1;
          uVar16 = (long)(pbVar1 + __n) - (long)pbVar14;
          if ((long)uVar16 < (long)sVar2) goto LAB_004c29bc;
        }
        if ((pbVar14 != pbVar1 + __n) &&
           (uVar22 = (long)pbVar14 - (long)pbVar1, uVar22 != 0xffffffffffffffff)) goto LAB_004c28a4;
      }
LAB_004c29bc:
      puVar4 = *(undefined8 **)(param_1 + 0x38);
      if (puVar4 < *(undefined8 **)(param_1 + 0x40)) {
        if ((bVar21 & 1) == 0) {
          uVar23 = *(undefined8 *)(param_1 + 0x20);
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          puVar4[2] = *(undefined8 *)(param_1 + 0x28);
          puVar4[1] = uVar23;
          *puVar4 = uVar12;
        }
        else {
                    /* try { // try from 004c2a04 to 004c2a17 has its CatchHandler @ 004c2c48 */
          FUN_002fb36c(puVar4,pbVar17,uVar3);
        }
        *(undefined8 **)(param_1 + 0x38) = puVar4 + 3;
        *(undefined8 **)(param_1 + 0x38) = puVar4 + 3;
      }
      else {
                    /* try { // try from 004c29e4 to 004c29ef has its CatchHandler @ 004c2c5c */
        uVar12 = FUN_0034e788(pbVar13,param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x38) = uVar12;
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
      if ((uVar15 & 1) == 0) {
        if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_004c2d50;
      }
      else {
        free(pbVar10);
        if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_004c2d50;
      }
      return;
    }
    uVar22 = 0;
LAB_004c28a4:
    if (uVar22 <= __n) {
      __n = uVar22;
    }
    if (0xfffffffffffffff7 < __n) {
      if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 004c2bcc to 004c2bd3 has its CatchHandler @ 004c2c94 */
                    /* WARNING: Subroutine does not return */
        FUN_002fb400(&local_b8);
      }
LAB_004c2d50:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (__n < 0x17) {
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
      __dest = (undefined1 *)((ulong)&local_b8 | 1);
      if (__n != 0) goto LAB_004c296c;
      *(undefined1 *)((ulong)&local_b8 | 1) = 0;
    }
    else {
      uVar16 = (__n & 0xfffffffffffffff8) + 8;
      if ((__n | 7) != 0x17) {
        uVar16 = __n | 7;
      }
                    /* try { // try from 004c2954 to 004c295b has its CatchHandler @ 004c2c60 */
      __dest = (undefined1 *)FUN_00759c3c(uVar16 + 1);
      local_b8 = uVar16 + 1 | 1;
      uStack_b0 = __n;
      local_a8 = __dest;
LAB_004c296c:
      memmove(__dest,pbVar1,__n);
      __dest[__n] = 0;
    }
    if ((local_a0 & 1) != 0) {
      free(local_90);
    }
    uVar16 = uStack_78;
    uVar15 = local_80 & 0xff;
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    uVar3 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      uVar3 = uStack_78;
    }
                    /* try { // try from 004c2904 to 004c2913 has its CatchHandler @ 004c2c98 */
    FUN_007135f0(param_1 + 0x18,0,uVar3 + uVar22);
    puVar11 = *(ulong **)(param_1 + 0x38);
    if (puVar11 < *(ulong **)(param_1 + 0x40)) {
      if ((local_a0 & 1) == 0) {
        puVar11[2] = (ulong)local_90;
        puVar11[1] = uStack_98;
        *puVar11 = local_a0;
      }
      else {
                    /* try { // try from 004c29a0 to 004c29a7 has its CatchHandler @ 004c2c4c */
        FUN_002fb36c(puVar11,local_90,uStack_98);
      }
      puVar11 = puVar11 + 3;
      *(ulong **)(param_1 + 0x38) = puVar11;
    }
    else {
                    /* try { // try from 004c298c to 004c2997 has its CatchHandler @ 004c2c98 */
      puVar11 = (ulong *)FUN_0034e788(pbVar13,&local_a0);
    }
    *(ulong **)(param_1 + 0x38) = puVar11;
  } while( true );
}


// ===== 004c2d54  FUN_004c2d54 =====

void FUN_004c2d54(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 == (byte *)0x0) {
    return;
  }
  if ((param_2[0x48] & 1) != 0) {
    free(*(void **)(param_2 + 0x58));
  }
  pbVar3 = *(byte **)(param_2 + 0x30);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(param_2 + 0x38);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          free(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(param_2 + 0x30);
    }
    *(byte **)(param_2 + 0x38) = pbVar3;
    free(pbVar4);
  }
  if ((param_2[0x18] & 1) == 0) {
    bVar1 = *param_2;
  }
  else {
    free(*(void **)(param_2 + 0x28));
    bVar1 = *param_2;
  }
  if ((bVar1 & 1) != 0) {
    free(*(void **)(param_2 + 0x10));
    free(param_2);
    return;
  }
  free(param_2);
  return;
}


// ===== 004c2e1c  FUN_004c2e1c =====

void FUN_004c2e1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 004c2e30  FUN_004c2e30 =====

void FUN_004c2e30(void)

{
  return;
}


// ===== 004c2e34  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c2e38  FUN_004c2e38 =====

void FUN_004c2e38(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00791188;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c2e70  FUN_004c2e70 =====

void FUN_004c2e70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00791188;
  param_2[1] = uVar1;
  return;
}


// ===== 004c2e88  FUN_004c2e88 =====

void FUN_004c2e88(void)

{
  return;
}


// ===== 004c2e8c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c2e90  FUN_004c2e90 =====

void FUN_004c2e90(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_40;
  long *plStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar6 = *(code **)(param_1 + 8);
  uVar4 = *param_3;
  uVar5 = *param_4;
  plStack_38 = (long *)param_5[1];
  local_40 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
                    /* try { // try from 004c2ecc to 004c2ed7 has its CatchHandler @ 004c2f28 */
  (*pcVar6)(param_2,uVar4,uVar5,&local_40,*param_6);
  plVar2 = plStack_38;
  if ((plStack_38 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_38 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c2f50  FUN_004c2f50 =====

void FUN_004c2f50(void)

{
  return;
}


// ===== 004c2f54  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c2f58  FUN_004c2f58 =====

void FUN_004c2f58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_007911d0;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c2f90  FUN_004c2f90 =====

void FUN_004c2f90(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_007911d0;
  param_2[1] = uVar1;
  return;
}


// ===== 004c2fa8  FUN_004c2fa8 =====

void FUN_004c2fa8(void)

{
  return;
}


// ===== 004c2fac  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c2fb0  FUN_004c2fb0 =====

void FUN_004c2fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x004c2fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,*param_5,*param_6);
  return;
}


// ===== 004c2fd0  FUN_004c2fd0 =====

void FUN_004c2fd0(void)

{
  return;
}


// ===== 004c2fd4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c2fd8  FUN_004c2fd8 =====

void FUN_004c2fd8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00791218;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c3010  FUN_004c3010 =====

void FUN_004c3010(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00791218;
  param_2[1] = uVar1;
  return;
}


// ===== 004c3028  FUN_004c3028 =====

void FUN_004c3028(void)

{
  return;
}


// ===== 004c302c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3030  FUN_004c3030 =====

void FUN_004c3030(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
                    /* WARNING: Could not recover jumptable at 0x004c307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*param_2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9);
  return;
}


// ===== 004c3080  FUN_004c3080 =====

void FUN_004c3080(void)

{
  return;
}


// ===== 004c3084  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3088  FUN_004c3088 =====

void FUN_004c3088(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00791260;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c30c0  FUN_004c30c0 =====

void FUN_004c30c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00791260;
  param_2[1] = uVar1;
  return;
}


// ===== 004c30d8  FUN_004c30d8 =====

void FUN_004c30d8(void)

{
  return;
}


// ===== 004c30dc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c30e0  FUN_004c30e0 =====

void FUN_004c30e0(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 local_40;
  long *plStack_38;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  pcVar7 = *(code **)(param_1 + 8);
  uVar3 = *param_4;
  plStack_38 = (long *)param_5[1];
  local_40 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
                    /* try { // try from 004c3124 to 004c312f has its CatchHandler @ 004c3180 */
  (*pcVar7)(param_2,uVar1,uVar2,uVar3,&local_40,*param_6,*param_7,*param_8);
  plVar5 = plStack_38;
  if ((plStack_38 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_38 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c31a8  FUN_004c31a8 =====

void FUN_004c31a8(void)

{
  return;
}


// ===== 004c31ac  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c31b0  FUN_004c31b0 =====

void FUN_004c31b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_007912a8;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c31e8  FUN_004c31e8 =====

void FUN_004c31e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_007912a8;
  param_2[1] = uVar1;
  return;
}


// ===== 004c3200  FUN_004c3200 =====

void FUN_004c3200(void)

{
  return;
}


// ===== 004c3204  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3208  FUN_004c3208 =====

void FUN_004c3208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x004c321c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,*param_4);
  return;
}


// ===== 004c3220  FUN_004c3220 =====

void FUN_004c3220(void)

{
  return;
}


// ===== 004c3224  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3228  FUN_004c3228 =====

void FUN_004c3228(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_007912f0;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c3260  FUN_004c3260 =====

void FUN_004c3260(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_007912f0;
  param_2[1] = uVar1;
  return;
}


// ===== 004c3278  FUN_004c3278 =====

void FUN_004c3278(void)

{
  return;
}


// ===== 004c327c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3280  FUN_004c3280 =====

void FUN_004c3280(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
                    /* WARNING: Could not recover jumptable at 0x004c32cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*param_2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9);
  return;
}


// ===== 004c32d0  FUN_004c32d0 =====

void FUN_004c32d0(void)

{
  return;
}


// ===== 004c32d4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c32d8  FUN_004c32d8 =====

void FUN_004c32d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00791338;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c3310  FUN_004c3310 =====

void FUN_004c3310(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00791338;
  param_2[1] = uVar1;
  return;
}


// ===== 004c3328  FUN_004c3328 =====

void FUN_004c3328(void)

{
  return;
}


// ===== 004c332c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3330  FUN_004c3330 =====

void FUN_004c3330(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
                    /* WARNING: Could not recover jumptable at 0x004c337c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*param_2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9);
  return;
}


// ===== 004c3380  FUN_004c3380 =====

void FUN_004c3380(void)

{
  return;
}


// ===== 004c3384  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c3388  FUN_004c3388 =====

void FUN_004c3388(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00791380;
  puVar1[1] = uVar2;
  return;
}


// ===== 004c33c0  FUN_004c33c0 =====

void FUN_004c33c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00791380;
  param_2[1] = uVar1;
  return;
}


// ===== 004c33d8  FUN_004c33d8 =====

void FUN_004c33d8(void)

{
  return;
}


// ===== 004c33dc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 004c33e0  FUN_004c33e0 =====

void FUN_004c33e0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9)

{
                    /* WARNING: Could not recover jumptable at 0x004c342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (*param_2,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,*param_9);
  return;
}


// ===== 004c3430  FUN_004c3430 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004c3430(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *pcVar7;
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
                    /* try { // try from 004c34a8 to 004c34b3 has its CatchHandler @ 004c35f4 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004c34cc to 004c34d3 has its CatchHandler @ 004c35d4 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  pcVar7 = (char *)*param_2;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004c3504 to 004c350f has its CatchHandler @ 004c35d0 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 004c3514 to 004c351b has its CatchHandler @ 004c35cc */
  FUN_0057a134(local_178,*param_3);
  pcVar7 = (char *)*param_4;
  sVar5 = strlen(pcVar7);
                    /* try { // try from 004c352c to 004c3537 has its CatchHandler @ 004c35c8 */
  FUN_00303e0c(local_178,pcVar7,sVar5);
                    /* try { // try from 004c3538 to 004c3543 has its CatchHandler @ 004c35c4 */
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


// ===== 004c3608  FUN_004c3608 =====

void FUN_004c3608(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,int param_9,int param_10,int param_11,
                 undefined8 param_12)

{
  if (param_8 != 0) {
    do {
      FUN_005f37b4((long)param_9,(long)param_11,(long)param_10,param_2,param_3,param_4,param_12);
      param_8 = param_8 + -1;
      param_4 = param_4 + param_7 * 4;
      param_3 = param_3 + param_6 * 4;
      param_2 = param_2 + param_5 * 4;
    } while (param_8 != 0);
  }
  *param_1 = 0;
  return;
}


// ===== 004c36c0  FUN_004c36c0 =====

void FUN_004c36c0(undefined8 *param_1,long param_2,long *param_3,long param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 local_178 [3];
  long local_160;
  undefined8 local_158 [3];
  long local_140 [10];
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  void *local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  long lStack_90;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x58) == *(long *)(param_4 + 0x58)) {
    if ((*param_3 == 3) && (*param_5 == 3)) {
      plVar5 = (long *)param_3[1];
      plVar6 = (long *)param_5[1];
      pvVar8 = (void *)*plVar5;
      if (pvVar8 == (void *)*plVar6) {
        lVar9 = plVar5[2];
        if (lVar9 == plVar6[1]) {
          lVar7 = plVar5[1];
          lVar10 = plVar6[2];
          local_a8 = 6;
                    /* try { // try from 004c3770 to 004c3783 has its CatchHandler @ 004c3c68 */
          local_140[0] = *(long *)(param_2 + 0x58);
          local_a0 = pvVar8;
          local_98 = lVar7;
          lStack_90 = lVar10;
          FUN_004c3cac(param_1,local_140,&local_a8,param_6);
                    /* try { // try from 004c3784 to 004c378b has its CatchHandler @ 004c3c64 */
          lVar2 = FUN_004ae878(param_2);
                    /* try { // try from 004c378c to 004c3797 has its CatchHandler @ 004c3c60 */
          uVar3 = FUN_004ae878(param_4);
                    /* try { // try from 004c37a0 to 004c37a3 has its CatchHandler @ 004c3c5c */
          local_178[0] = FUN_004aea28(*param_1);
          local_b0 = (char *)(lVar7 * lVar9);
          plVar5 = *(long **)(param_9 + 0x20);
          local_b8 = lVar10 * lVar9;
          local_c0 = lVar10 * lVar7;
          local_158[0] = uVar3;
          local_140[0] = lVar2;
          local_f0 = param_8;
          local_e8 = param_7;
          lStack_e0 = lVar10;
          local_d8 = lVar9;
          lStack_d0 = lVar7;
          local_c8 = pvVar8;
          if (plVar5 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) != local_70) goto LAB_004c3ca8;
                    /* try { // try from 004c3ad4 to 004c3ad7 has its CatchHandler @ 004c3c70 */
            FUN_0030be88();
          }
          else {
                    /* try { // try from 004c37e0 to 004c3823 has its CatchHandler @ 004c3c70 */
            (**(code **)(*plVar5 + 0x30))
                      (&local_160,plVar5,local_140,local_158,local_178,&local_b0,&local_b8,&local_c0
                       ,&local_c8,&lStack_d0,&local_d8,&lStack_e0,&local_e8,&local_f0);
            if (local_160 == 0) {
              if ((local_a8 & 1) != 0) {
                free(local_a0);
              }
              if (*(long *)(lVar1 + 0x28) == local_70) {
                return;
              }
              goto LAB_004c3ca8;
            }
          }
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c3ae4 to 004c3aeb has its CatchHandler @ 004c3c28 */
          FUN_00645c30(local_158);
                    /* try { // try from 004c3aec to 004c3b0b has its CatchHandler @ 004c3bfc */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x156,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = float]"
                       ,local_158);
          local_b8 = CONCAT44(local_b8._4_4_,2);
          local_c0 = CONCAT44(local_c0._4_4_,1);
          uVar4 = FUN_0063afd8(&local_160);
          local_b0 = "Einsum op: Exception during MatMul operation: ";
          FUN_004c80bc(local_178,&local_b8,&local_c0,&local_b0,uVar4);
          FUN_004792b8(uVar3,local_140,local_178);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004c3b6c to 004c3b83 has its CatchHandler @ 004c3bd4 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c3a38 to 004c3a3f has its CatchHandler @ 004c3c40 */
          FUN_00645c30(&local_a8);
                    /* try { // try from 004c3a40 to 004c3a5f has its CatchHandler @ 004c3c0c */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x138,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = float]"
                       ,&local_a8);
                    /* try { // try from 004c3a60 to 004c3a6f has its CatchHandler @ 004c3b88 */
          FUN_00479eac(local_158,"Incompatible matrix dimensions for matMul");
                    /* try { // try from 004c3a74 to 004c3abb has its CatchHandler @ 004c3b84 */
          FUN_00474a40(uVar3,local_140,"input_shape_1_override[2] == input_shape_2_override[1]",
                       local_158);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
      }
      else {
        uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c39a4 to 004c39ab has its CatchHandler @ 004c3c44 */
        FUN_00645c30(&local_a8);
                    /* try { // try from 004c39ac to 004c39cb has its CatchHandler @ 004c3c10 */
        FUN_0047488c(local_140,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                     ,0x137,
                     "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = float]"
                     ,&local_a8);
                    /* try { // try from 004c39cc to 004c39db has its CatchHandler @ 004c3b90 */
        FUN_00479eac(local_158,"Batch dimension should match for MatMul;");
                    /* try { // try from 004c39e0 to 004c3a27 has its CatchHandler @ 004c3b8c */
        FUN_00474a40(uVar3,local_140,"input_shape_1_override[0] == input_shape_2_override[0]",
                     local_158);
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
    }
    else {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c3910 to 004c3917 has its CatchHandler @ 004c3c48 */
      FUN_00645c30(&local_a8);
                    /* try { // try from 004c3918 to 004c3937 has its CatchHandler @ 004c3c14 */
      FUN_0047488c(local_140,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                   ,0x136,
                   "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = float]"
                   ,&local_a8);
                    /* try { // try from 004c3938 to 004c3947 has its CatchHandler @ 004c3b98 */
      FUN_00479eac(local_158,"Only 1 batch dimension is allowed for MatMul");
                    /* try { // try from 004c394c to 004c3993 has its CatchHandler @ 004c3b94 */
      FUN_00474a40(uVar3,local_140,
                   "input_shape_1_override.size() == 3 && input_shape_2_override.size() == 3",
                   local_158);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c387c to 004c3883 has its CatchHandler @ 004c3c4c */
    FUN_00645c30(&local_a8);
                    /* try { // try from 004c3884 to 004c38a3 has its CatchHandler @ 004c3c18 */
    FUN_0047488c(local_140,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x135,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = float]"
                 ,&local_a8);
                    /* try { // try from 004c38a4 to 004c38b3 has its CatchHandler @ 004c3bb4 */
    FUN_00479eac(local_158,"Data types of the inputs must match for MatMul");
                    /* try { // try from 004c38b8 to 004c38ff has its CatchHandler @ 004c3b9c */
    FUN_00474a40(uVar3,local_140,"input_1.DataType() == input_2.DataType()",local_158);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_004c3ca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c3cac  FUN_004c3cac =====

void FUN_004c3cac(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_98;
  long *local_90;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00759c3c(0x80);
  uVar6 = *param_3;
  uVar7 = *param_2;
  puVar1 = param_3 + 1;
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)param_3[1];
  }
  if ((1 < uVar6) && (puVar1 == (ulong *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 004c3d10 to 004c3d17 has its CatchHandler @ 004c3dd4 */
  FUN_005ca9a8(auStack_88,uVar6 >> 1);
  local_98 = *param_4;
  local_90 = (long *)param_4[1];
  if (local_90 != (long *)0x0) {
    FUN_00755c20(1,local_90 + 1);
  }
                    /* try { // try from 004c3d30 to 004c3d43 has its CatchHandler @ 004c3db4 */
  FUN_005c80c8(uVar4,uVar7,auStack_88,&local_98);
  plVar3 = local_90;
  *param_1 = uVar4;
  if ((local_90 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_90 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  __ptr = local_50;
  local_50 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c3dfc  FUN_004c3dfc =====

void FUN_004c3dfc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_005c8ce4(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 004c3e38  FUN_004c3e38 =====

void FUN_004c3e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *param_6;
  local_60 = (long *)param_6[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
                    /* try { // try from 004c3ea4 to 004c3eb7 has its CatchHandler @ 004c3f14 */
  FUN_00510150(param_1,param_2,param_3,param_4,&local_68,param_8,param_5 & 1,param_7);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c3f3c  FUN_004c3f3c =====

void FUN_004c3f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a8 = *param_6;
  local_a0 = (long *)param_6[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  plVar2 = *(long **)(param_9 + 0x20);
  local_7c[0] = 1;
  local_98 = param_8;
  local_90 = param_7;
  uStack_88 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 004c4058 to 004c405b has its CatchHandler @ 004c405c */
      uVar4 = FUN_0030be88();
                    /* catch() { ... } // from try @ 004c3fc8 with catch @ 004c405c
                       catch() { ... } // from try @ 004c4058 with catch @ 004c405c */
      FUN_00478198(&local_a8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 004c3fc8 to 004c3fe7 has its CatchHandler @ 004c405c */
    (**(code **)(*plVar2 + 0x30))
              (param_1,plVar2,param_2,&local_78,local_7c,&local_a8,&uStack_88,&local_90,&local_98);
    plVar2 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c4084  FUN_004c4084 =====

void FUN_004c4084(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,int param_9,int param_10,int param_11,
                 undefined8 param_12)

{
  if (param_8 != 0) {
    do {
      FUN_005f365c((long)param_9,(long)param_11,(long)param_10,param_2,param_3,param_4,param_12);
      param_8 = param_8 + -1;
      param_4 = param_4 + param_7 * 4;
      param_3 = param_3 + param_6 * 4;
      param_2 = param_2 + param_5 * 4;
    } while (param_8 != 0);
  }
  *param_1 = 0;
  return;
}


// ===== 004c413c  FUN_004c413c =====

void FUN_004c413c(undefined8 *param_1,long param_2,long *param_3,long param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 local_178 [3];
  long local_160;
  undefined8 local_158 [3];
  long local_140 [10];
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  void *local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  long lStack_90;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x58) == *(long *)(param_4 + 0x58)) {
    if ((*param_3 == 3) && (*param_5 == 3)) {
      plVar5 = (long *)param_3[1];
      plVar6 = (long *)param_5[1];
      pvVar8 = (void *)*plVar5;
      if (pvVar8 == (void *)*plVar6) {
        lVar9 = plVar5[2];
        if (lVar9 == plVar6[1]) {
          lVar7 = plVar5[1];
          lVar10 = plVar6[2];
          local_a8 = 6;
                    /* try { // try from 004c41ec to 004c41ff has its CatchHandler @ 004c46e4 */
          local_140[0] = *(long *)(param_2 + 0x58);
          local_a0 = pvVar8;
          local_98 = lVar7;
          lStack_90 = lVar10;
          FUN_004c3cac(param_1,local_140,&local_a8,param_6);
                    /* try { // try from 004c4200 to 004c4207 has its CatchHandler @ 004c46e0 */
          lVar2 = FUN_004b023c(param_2);
                    /* try { // try from 004c4208 to 004c4213 has its CatchHandler @ 004c46dc */
          uVar3 = FUN_004b023c(param_4);
                    /* try { // try from 004c421c to 004c421f has its CatchHandler @ 004c46d8 */
          local_178[0] = FUN_004b03ec(*param_1);
          local_b0 = (char *)(lVar7 * lVar9);
          plVar5 = *(long **)(param_9 + 0x20);
          local_b8 = lVar10 * lVar9;
          local_c0 = lVar10 * lVar7;
          local_158[0] = uVar3;
          local_140[0] = lVar2;
          local_f0 = param_8;
          local_e8 = param_7;
          lStack_e0 = lVar10;
          local_d8 = lVar9;
          lStack_d0 = lVar7;
          local_c8 = pvVar8;
          if (plVar5 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) != local_70) goto LAB_004c4724;
                    /* try { // try from 004c4550 to 004c4553 has its CatchHandler @ 004c46ec */
            FUN_0030be88();
          }
          else {
                    /* try { // try from 004c425c to 004c429f has its CatchHandler @ 004c46ec */
            (**(code **)(*plVar5 + 0x30))
                      (&local_160,plVar5,local_140,local_158,local_178,&local_b0,&local_b8,&local_c0
                       ,&local_c8,&lStack_d0,&local_d8,&lStack_e0,&local_e8,&local_f0);
            if (local_160 == 0) {
              if ((local_a8 & 1) != 0) {
                free(local_a0);
              }
              if (*(long *)(lVar1 + 0x28) == local_70) {
                return;
              }
              goto LAB_004c4724;
            }
          }
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4560 to 004c4567 has its CatchHandler @ 004c46a4 */
          FUN_00645c30(local_158);
                    /* try { // try from 004c4568 to 004c4587 has its CatchHandler @ 004c4678 */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x156,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = int]"
                       ,local_158);
          local_b8 = CONCAT44(local_b8._4_4_,2);
          local_c0 = CONCAT44(local_c0._4_4_,1);
          uVar4 = FUN_0063afd8(&local_160);
          local_b0 = "Einsum op: Exception during MatMul operation: ";
          FUN_004c80bc(local_178,&local_b8,&local_c0,&local_b0,uVar4);
          FUN_004792b8(uVar3,local_140,local_178);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004c45e8 to 004c45ff has its CatchHandler @ 004c4650 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c44b4 to 004c44bb has its CatchHandler @ 004c46bc */
          FUN_00645c30(&local_a8);
                    /* try { // try from 004c44bc to 004c44db has its CatchHandler @ 004c4688 */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x138,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = int]"
                       ,&local_a8);
                    /* try { // try from 004c44dc to 004c44eb has its CatchHandler @ 004c4604 */
          FUN_00479eac(local_158,"Incompatible matrix dimensions for matMul");
                    /* try { // try from 004c44f0 to 004c4537 has its CatchHandler @ 004c4600 */
          FUN_00474a40(uVar3,local_140,"input_shape_1_override[2] == input_shape_2_override[1]",
                       local_158);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
      }
      else {
        uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4420 to 004c4427 has its CatchHandler @ 004c46c0 */
        FUN_00645c30(&local_a8);
                    /* try { // try from 004c4428 to 004c4447 has its CatchHandler @ 004c468c */
        FUN_0047488c(local_140,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                     ,0x137,
                     "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = int]"
                     ,&local_a8);
                    /* try { // try from 004c4448 to 004c4457 has its CatchHandler @ 004c460c */
        FUN_00479eac(local_158,"Batch dimension should match for MatMul;");
                    /* try { // try from 004c445c to 004c44a3 has its CatchHandler @ 004c4608 */
        FUN_00474a40(uVar3,local_140,"input_shape_1_override[0] == input_shape_2_override[0]",
                     local_158);
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
    }
    else {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c438c to 004c4393 has its CatchHandler @ 004c46c4 */
      FUN_00645c30(&local_a8);
                    /* try { // try from 004c4394 to 004c43b3 has its CatchHandler @ 004c4690 */
      FUN_0047488c(local_140,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                   ,0x136,
                   "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = int]"
                   ,&local_a8);
                    /* try { // try from 004c43b4 to 004c43c3 has its CatchHandler @ 004c4614 */
      FUN_00479eac(local_158,"Only 1 batch dimension is allowed for MatMul");
                    /* try { // try from 004c43c8 to 004c440f has its CatchHandler @ 004c4610 */
      FUN_00474a40(uVar3,local_140,
                   "input_shape_1_override.size() == 3 && input_shape_2_override.size() == 3",
                   local_158);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c42f8 to 004c42ff has its CatchHandler @ 004c46c8 */
    FUN_00645c30(&local_a8);
                    /* try { // try from 004c4300 to 004c431f has its CatchHandler @ 004c4694 */
    FUN_0047488c(local_140,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x135,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = int]"
                 ,&local_a8);
                    /* try { // try from 004c4320 to 004c432f has its CatchHandler @ 004c4630 */
    FUN_00479eac(local_158,"Data types of the inputs must match for MatMul");
                    /* try { // try from 004c4334 to 004c437b has its CatchHandler @ 004c4618 */
    FUN_00474a40(uVar3,local_140,"input_1.DataType() == input_2.DataType()",local_158);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_004c4724:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c4728  FUN_004c4728 =====

void FUN_004c4728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *param_6;
  local_60 = (long *)param_6[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
                    /* try { // try from 004c4794 to 004c47a7 has its CatchHandler @ 004c4804 */
  FUN_00512f00(param_1,param_2,param_3,param_4,&local_68,param_8,param_5 & 1,param_7);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c482c  FUN_004c482c =====

void FUN_004c482c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a8 = *param_6;
  local_a0 = (long *)param_6[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  plVar2 = *(long **)(param_9 + 0x20);
  local_7c[0] = 1;
  local_98 = param_8;
  local_90 = param_7;
  uStack_88 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 004c4948 to 004c494b has its CatchHandler @ 004c494c */
      uVar4 = FUN_0030be88();
                    /* catch() { ... } // from try @ 004c48b8 with catch @ 004c494c
                       catch() { ... } // from try @ 004c4948 with catch @ 004c494c */
      FUN_00478198(&local_a8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 004c48b8 to 004c48d7 has its CatchHandler @ 004c494c */
    (**(code **)(*plVar2 + 0x30))
              (param_1,plVar2,param_2,&local_78,local_7c,&local_a8,&uStack_88,&local_90,&local_98);
    plVar2 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c4974  FUN_004c4974 =====

void FUN_004c4974(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,int param_9,int param_10,int param_11,
                 undefined8 param_12)

{
  if (param_8 != 0) {
    do {
      FUN_005f383c((long)param_9,(long)param_11,(long)param_10,param_2,param_3,param_4,param_12);
      param_8 = param_8 + -1;
      param_4 = param_4 + param_7 * 8;
      param_3 = param_3 + param_6 * 8;
      param_2 = param_2 + param_5 * 8;
    } while (param_8 != 0);
  }
  *param_1 = 0;
  return;
}


// ===== 004c4a2c  FUN_004c4a2c =====

void FUN_004c4a2c(undefined8 *param_1,long param_2,long *param_3,long param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 local_178 [3];
  long local_160;
  undefined8 local_158 [3];
  long local_140 [10];
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  void *local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  long lStack_90;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x58) == *(long *)(param_4 + 0x58)) {
    if ((*param_3 == 3) && (*param_5 == 3)) {
      plVar5 = (long *)param_3[1];
      plVar6 = (long *)param_5[1];
      pvVar8 = (void *)*plVar5;
      if (pvVar8 == (void *)*plVar6) {
        lVar9 = plVar5[2];
        if (lVar9 == plVar6[1]) {
          lVar7 = plVar5[1];
          lVar10 = plVar6[2];
          local_a8 = 6;
                    /* try { // try from 004c4adc to 004c4aef has its CatchHandler @ 004c4fd4 */
          local_140[0] = *(long *)(param_2 + 0x58);
          local_a0 = pvVar8;
          local_98 = lVar7;
          lStack_90 = lVar10;
          FUN_004c3cac(param_1,local_140,&local_a8,param_6);
                    /* try { // try from 004c4af0 to 004c4af7 has its CatchHandler @ 004c4fd0 */
          lVar2 = FUN_004afd7c(param_2);
                    /* try { // try from 004c4af8 to 004c4b03 has its CatchHandler @ 004c4fcc */
          uVar3 = FUN_004afd7c(param_4);
                    /* try { // try from 004c4b0c to 004c4b0f has its CatchHandler @ 004c4fc8 */
          local_178[0] = FUN_004aff2c(*param_1);
          local_b0 = (char *)(lVar7 * lVar9);
          plVar5 = *(long **)(param_9 + 0x20);
          local_b8 = lVar10 * lVar9;
          local_c0 = lVar10 * lVar7;
          local_158[0] = uVar3;
          local_140[0] = lVar2;
          local_f0 = param_8;
          local_e8 = param_7;
          lStack_e0 = lVar10;
          local_d8 = lVar9;
          lStack_d0 = lVar7;
          local_c8 = pvVar8;
          if (plVar5 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) != local_70) goto LAB_004c5014;
                    /* try { // try from 004c4e40 to 004c4e43 has its CatchHandler @ 004c4fdc */
            FUN_0030be88();
          }
          else {
                    /* try { // try from 004c4b4c to 004c4b8f has its CatchHandler @ 004c4fdc */
            (**(code **)(*plVar5 + 0x30))
                      (&local_160,plVar5,local_140,local_158,local_178,&local_b0,&local_b8,&local_c0
                       ,&local_c8,&lStack_d0,&local_d8,&lStack_e0,&local_e8,&local_f0);
            if (local_160 == 0) {
              if ((local_a8 & 1) != 0) {
                free(local_a0);
              }
              if (*(long *)(lVar1 + 0x28) == local_70) {
                return;
              }
              goto LAB_004c5014;
            }
          }
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4e50 to 004c4e57 has its CatchHandler @ 004c4f94 */
          FUN_00645c30(local_158);
                    /* try { // try from 004c4e58 to 004c4e77 has its CatchHandler @ 004c4f68 */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x156,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = double]"
                       ,local_158);
          local_b8 = CONCAT44(local_b8._4_4_,2);
          local_c0 = CONCAT44(local_c0._4_4_,1);
          uVar4 = FUN_0063afd8(&local_160);
          local_b0 = "Einsum op: Exception during MatMul operation: ";
          FUN_004c80bc(local_178,&local_b8,&local_c0,&local_b0,uVar4);
          FUN_004792b8(uVar3,local_140,local_178);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004c4ed8 to 004c4eef has its CatchHandler @ 004c4f40 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4da4 to 004c4dab has its CatchHandler @ 004c4fac */
          FUN_00645c30(&local_a8);
                    /* try { // try from 004c4dac to 004c4dcb has its CatchHandler @ 004c4f78 */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x138,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = double]"
                       ,&local_a8);
                    /* try { // try from 004c4dcc to 004c4ddb has its CatchHandler @ 004c4ef4 */
          FUN_00479eac(local_158,"Incompatible matrix dimensions for matMul");
                    /* try { // try from 004c4de0 to 004c4e27 has its CatchHandler @ 004c4ef0 */
          FUN_00474a40(uVar3,local_140,"input_shape_1_override[2] == input_shape_2_override[1]",
                       local_158);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
      }
      else {
        uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4d10 to 004c4d17 has its CatchHandler @ 004c4fb0 */
        FUN_00645c30(&local_a8);
                    /* try { // try from 004c4d18 to 004c4d37 has its CatchHandler @ 004c4f7c */
        FUN_0047488c(local_140,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                     ,0x137,
                     "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = double]"
                     ,&local_a8);
                    /* try { // try from 004c4d38 to 004c4d47 has its CatchHandler @ 004c4efc */
        FUN_00479eac(local_158,"Batch dimension should match for MatMul;");
                    /* try { // try from 004c4d4c to 004c4d93 has its CatchHandler @ 004c4ef8 */
        FUN_00474a40(uVar3,local_140,"input_shape_1_override[0] == input_shape_2_override[0]",
                     local_158);
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
    }
    else {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4c7c to 004c4c83 has its CatchHandler @ 004c4fb4 */
      FUN_00645c30(&local_a8);
                    /* try { // try from 004c4c84 to 004c4ca3 has its CatchHandler @ 004c4f80 */
      FUN_0047488c(local_140,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                   ,0x136,
                   "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = double]"
                   ,&local_a8);
                    /* try { // try from 004c4ca4 to 004c4cb3 has its CatchHandler @ 004c4f04 */
      FUN_00479eac(local_158,"Only 1 batch dimension is allowed for MatMul");
                    /* try { // try from 004c4cb8 to 004c4cff has its CatchHandler @ 004c4f00 */
      FUN_00474a40(uVar3,local_140,
                   "input_shape_1_override.size() == 3 && input_shape_2_override.size() == 3",
                   local_158);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c4be8 to 004c4bef has its CatchHandler @ 004c4fb8 */
    FUN_00645c30(&local_a8);
                    /* try { // try from 004c4bf0 to 004c4c0f has its CatchHandler @ 004c4f84 */
    FUN_0047488c(local_140,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x135,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = double]"
                 ,&local_a8);
                    /* try { // try from 004c4c10 to 004c4c1f has its CatchHandler @ 004c4f20 */
    FUN_00479eac(local_158,"Data types of the inputs must match for MatMul");
                    /* try { // try from 004c4c24 to 004c4c6b has its CatchHandler @ 004c4f08 */
    FUN_00474a40(uVar3,local_140,"input_1.DataType() == input_2.DataType()",local_158);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_004c5014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5018  FUN_004c5018 =====

void FUN_004c5018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *param_6;
  local_60 = (long *)param_6[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
                    /* try { // try from 004c5084 to 004c5097 has its CatchHandler @ 004c50f4 */
  FUN_0051427c(param_1,param_2,param_3,param_4,&local_68,param_8,param_5 & 1,param_7);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c511c  FUN_004c511c =====

void FUN_004c511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a8 = *param_6;
  local_a0 = (long *)param_6[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  plVar2 = *(long **)(param_9 + 0x20);
  local_7c[0] = 1;
  local_98 = param_8;
  local_90 = param_7;
  uStack_88 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 004c5238 to 004c523b has its CatchHandler @ 004c523c */
      uVar4 = FUN_0030be88();
                    /* catch() { ... } // from try @ 004c51a8 with catch @ 004c523c
                       catch() { ... } // from try @ 004c5238 with catch @ 004c523c */
      FUN_00478198(&local_a8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 004c51a8 to 004c51c7 has its CatchHandler @ 004c523c */
    (**(code **)(*plVar2 + 0x30))
              (param_1,plVar2,param_2,&local_78,local_7c,&local_a8,&uStack_88,&local_90,&local_98);
    plVar2 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5264  FUN_004c5264 =====

void FUN_004c5264(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,int param_9,int param_10,int param_11,
                 undefined8 param_12)

{
  if (param_8 != 0) {
    do {
      FUN_005f36c8((long)param_9,(long)param_11,(long)param_10,param_2,param_3,param_4,param_12);
      param_8 = param_8 + -1;
      param_4 = param_4 + param_7 * 8;
      param_3 = param_3 + param_6 * 8;
      param_2 = param_2 + param_5 * 8;
    } while (param_8 != 0);
  }
  *param_1 = 0;
  return;
}


// ===== 004c531c  FUN_004c531c =====

void FUN_004c531c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *param_6;
  local_60 = (long *)param_6[1];
  if (local_60 != (long *)0x0) {
    FUN_00755c20(1,local_60 + 1);
  }
                    /* try { // try from 004c5388 to 004c539b has its CatchHandler @ 004c53f8 */
  FUN_00515ab4(param_1,param_2,param_3,param_4,&local_68,param_8,param_5 & 1,param_7);
  plVar2 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5420  FUN_004c5420 =====

void FUN_004c5420(undefined8 *param_1,long param_2,long *param_3,long param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  undefined8 local_178 [3];
  long local_160;
  undefined8 local_158 [3];
  long local_140 [10];
  undefined8 local_f0;
  undefined8 local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  void *local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  ulong local_a8;
  void *local_a0;
  long local_98;
  long lStack_90;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x58) == *(long *)(param_4 + 0x58)) {
    if ((*param_3 == 3) && (*param_5 == 3)) {
      plVar5 = (long *)param_3[1];
      plVar6 = (long *)param_5[1];
      pvVar8 = (void *)*plVar5;
      if (pvVar8 == (void *)*plVar6) {
        lVar9 = plVar5[2];
        if (lVar9 == plVar6[1]) {
          lVar7 = plVar5[1];
          lVar10 = plVar6[2];
          local_a8 = 6;
                    /* try { // try from 004c54d0 to 004c54e3 has its CatchHandler @ 004c59c8 */
          local_140[0] = *(long *)(param_2 + 0x58);
          local_a0 = pvVar8;
          local_98 = lVar7;
          lStack_90 = lVar10;
          FUN_004c3cac(param_1,local_140,&local_a8,param_6);
                    /* try { // try from 004c54e4 to 004c54eb has its CatchHandler @ 004c59c4 */
          lVar2 = FUN_004ba96c(param_2);
                    /* try { // try from 004c54ec to 004c54f7 has its CatchHandler @ 004c59c0 */
          uVar3 = FUN_004ba96c(param_4);
                    /* try { // try from 004c5500 to 004c5503 has its CatchHandler @ 004c59bc */
          local_178[0] = FUN_004bb758(*param_1);
          local_b0 = (char *)(lVar7 * lVar9);
          plVar5 = *(long **)(param_9 + 0x20);
          local_b8 = lVar10 * lVar9;
          local_c0 = lVar10 * lVar7;
          local_158[0] = uVar3;
          local_140[0] = lVar2;
          local_f0 = param_8;
          local_e8 = param_7;
          lStack_e0 = lVar10;
          local_d8 = lVar9;
          lStack_d0 = lVar7;
          local_c8 = pvVar8;
          if (plVar5 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) != local_70) goto LAB_004c5a08;
                    /* try { // try from 004c5834 to 004c5837 has its CatchHandler @ 004c59d0 */
            FUN_0030be88();
          }
          else {
                    /* try { // try from 004c5540 to 004c5583 has its CatchHandler @ 004c59d0 */
            (**(code **)(*plVar5 + 0x30))
                      (&local_160,plVar5,local_140,local_158,local_178,&local_b0,&local_b8,&local_c0
                       ,&local_c8,&lStack_d0,&local_d8,&lStack_e0,&local_e8,&local_f0);
            if (local_160 == 0) {
              if ((local_a8 & 1) != 0) {
                free(local_a0);
              }
              if (*(long *)(lVar1 + 0x28) == local_70) {
                return;
              }
              goto LAB_004c5a08;
            }
          }
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c5844 to 004c584b has its CatchHandler @ 004c5988 */
          FUN_00645c30(local_158);
                    /* try { // try from 004c584c to 004c586b has its CatchHandler @ 004c595c */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x156,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = long]"
                       ,local_158);
          local_b8 = CONCAT44(local_b8._4_4_,2);
          local_c0 = CONCAT44(local_c0._4_4_,1);
          uVar4 = FUN_0063afd8(&local_160);
          local_b0 = "Einsum op: Exception during MatMul operation: ";
          FUN_004c80bc(local_178,&local_b8,&local_c0,&local_b0,uVar4);
          FUN_004792b8(uVar3,local_140,local_178);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 004c58cc to 004c58e3 has its CatchHandler @ 004c5934 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c5798 to 004c579f has its CatchHandler @ 004c59a0 */
          FUN_00645c30(&local_a8);
                    /* try { // try from 004c57a0 to 004c57bf has its CatchHandler @ 004c596c */
          FUN_0047488c(local_140,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                       ,0x138,
                       "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = long]"
                       ,&local_a8);
                    /* try { // try from 004c57c0 to 004c57cf has its CatchHandler @ 004c58e8 */
          FUN_00479eac(local_158,"Incompatible matrix dimensions for matMul");
                    /* try { // try from 004c57d4 to 004c581b has its CatchHandler @ 004c58e4 */
          FUN_00474a40(uVar3,local_140,"input_shape_1_override[2] == input_shape_2_override[1]",
                       local_158);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
      }
      else {
        uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c5704 to 004c570b has its CatchHandler @ 004c59a4 */
        FUN_00645c30(&local_a8);
                    /* try { // try from 004c570c to 004c572b has its CatchHandler @ 004c5970 */
        FUN_0047488c(local_140,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                     ,0x137,
                     "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = long]"
                     ,&local_a8);
                    /* try { // try from 004c572c to 004c573b has its CatchHandler @ 004c58f0 */
        FUN_00479eac(local_158,"Batch dimension should match for MatMul;");
                    /* try { // try from 004c5740 to 004c5787 has its CatchHandler @ 004c58ec */
        FUN_00474a40(uVar3,local_140,"input_shape_1_override[0] == input_shape_2_override[0]",
                     local_158);
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
    }
    else {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c5670 to 004c5677 has its CatchHandler @ 004c59a8 */
      FUN_00645c30(&local_a8);
                    /* try { // try from 004c5678 to 004c5697 has its CatchHandler @ 004c5974 */
      FUN_0047488c(local_140,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                   ,0x136,
                   "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = long]"
                   ,&local_a8);
                    /* try { // try from 004c5698 to 004c56a7 has its CatchHandler @ 004c58f8 */
      FUN_00479eac(local_158,"Only 1 batch dimension is allowed for MatMul");
                    /* try { // try from 004c56ac to 004c56f3 has its CatchHandler @ 004c58f4 */
      FUN_00474a40(uVar3,local_140,
                   "input_shape_1_override.size() == 3 && input_shape_2_override.size() == 3",
                   local_158);
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c55dc to 004c55e3 has its CatchHandler @ 004c59ac */
    FUN_00645c30(&local_a8);
                    /* try { // try from 004c55e4 to 004c5603 has its CatchHandler @ 004c5978 */
    FUN_0047488c(local_140,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x135,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::MatMul(const Tensor &, const gsl::span<const int64_t> &, const Tensor &, const gsl::span<const int64_t> &, AllocatorPtr, concurrency::ThreadPool *, void *, const DeviceHelpers::MatMul<T> &) [T = long]"
                 ,&local_a8);
                    /* try { // try from 004c5604 to 004c5613 has its CatchHandler @ 004c5914 */
    FUN_00479eac(local_158,"Data types of the inputs must match for MatMul");
                    /* try { // try from 004c5618 to 004c565f has its CatchHandler @ 004c58fc */
    FUN_00474a40(uVar3,local_140,"input_1.DataType() == input_2.DataType()",local_158);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_004c5a08:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5a0c  FUN_004c5a0c =====

void FUN_004c5a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a8 = *param_6;
  local_a0 = (long *)param_6[1];
  if (local_a0 != (long *)0x0) {
    FUN_00755c20(1,local_a0 + 1);
  }
  plVar2 = *(long **)(param_9 + 0x20);
  local_7c[0] = 1;
  local_98 = param_8;
  local_90 = param_7;
  uStack_88 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 004c5b28 to 004c5b2b has its CatchHandler @ 004c5b2c */
      uVar4 = FUN_0030be88();
                    /* catch() { ... } // from try @ 004c5a98 with catch @ 004c5b2c
                       catch() { ... } // from try @ 004c5b28 with catch @ 004c5b2c */
      FUN_00478198(&local_a8);
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar4);
      }
    }
  }
  else {
                    /* try { // try from 004c5a98 to 004c5ab7 has its CatchHandler @ 004c5b2c */
    (**(code **)(*plVar2 + 0x30))
              (param_1,plVar2,param_2,&local_78,local_7c,&local_a8,&uStack_88,&local_90,&local_98);
    plVar2 = local_a0;
    if ((local_a0 != (long *)0x0) &&
       (lVar3 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5b54  FUN_004c5b54 =====

void FUN_004c5b54(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [80];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_005c8858(param_3);
  lVar3 = FUN_005c8858(param_2);
  if (lVar2 == lVar3) {
    lVar3 = *param_3;
    lVar2 = param_3[0xf];
    lVar5 = *param_2;
    lVar6 = param_2[0xf];
    __n = FUN_005c8858(param_2);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      memcpy((void *)(lVar3 + lVar2),(void *)(lVar5 + lVar6),__n);
      *param_1 = 0;
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 004c5c08 to 004c5c0f has its CatchHandler @ 004c5d10 */
    FUN_00645c30(auStack_c0);
                    /* try { // try from 004c5c10 to 004c5c2f has its CatchHandler @ 004c5d00 */
    FUN_0047488c(auStack_a8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x13,
                 "Status onnxruntime::EinsumOp::DeviceHelpers::CpuDeviceHelpers::DataCopy(const Tensor &, Tensor &, void *)"
                 ,auStack_c0);
                    /* try { // try from 004c5c30 to 004c5c3f has its CatchHandler @ 004c5ce0 */
    FUN_00479eac(auStack_d8,
                 "Einsum op: The candidate output does not match the actual output\'s shape");
                    /* try { // try from 004c5c44 to 004c5c87 has its CatchHandler @ 004c5c88 */
    FUN_00474a40(uVar4,auStack_a8,"output.SizeInBytes() == input.SizeInBytes()",auStack_d8);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5d30  thunk_FUN_0054ed58 =====

void thunk_FUN_0054ed58(undefined8 *param_1,ulong *param_2,long param_3,long param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *__ptr_00;
  void *pvStack_b8;
  long lStack_b0;
  long lStack_a8;
  void *pvStack_a0;
  undefined *puStack_98;
  char *pcStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  long lStack_80;
  void *pvStack_78;
  void *pvStack_50;
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  lStack_a8 = *(long *)(param_3 + 0x58);
  lStack_b0 = *(long *)(param_4 + 0x58);
  pvStack_a0 = (void *)0x0;
  if (lStack_a8 == lStack_b0) {
    plVar1 = (long *)(param_3 + 0x18);
    if (param_5 != (long *)0x0) {
      plVar1 = param_5;
    }
    if ((*plVar1 == -1) || ((*plVar1 != 0 && (plVar1[1] == 0)))) {
LAB_0054ef9c:
                    /* WARNING: Subroutine does not return */
      FUN_004839bc();
    }
    FUN_005ca9a8(&bStack_88);
    uVar6 = CONCAT71(uStack_87,bStack_88);
    if ((uVar6 == 0xffffffffffffffff) || ((uVar6 != 0 && (lStack_80 == 0)))) goto LAB_0054ef9c;
    uVar5 = *param_2;
    if (uVar5 == 0) {
LAB_0054eea4:
      FUN_004eea94(param_3,param_4);
      __ptr_00 = (void *)0x0;
      *param_1 = 0;
      bVar3 = true;
      __ptr = pvStack_50;
    }
    else {
      bVar3 = false;
      uVar7 = 0;
      uVar9 = 0;
      do {
        uVar8 = *(ulong *)(param_2[1] + uVar7 * 8);
        if (uVar6 <= uVar8) goto LAB_0054ef9c;
        if ((*(long *)(lStack_80 + uVar8 * 8) != 1) && (bVar4 = uVar8 < uVar9, uVar9 = uVar8, bVar4)
           ) break;
        uVar7 = uVar7 + 1;
        bVar3 = uVar5 <= uVar7;
      } while (uVar5 != uVar7);
      if (bVar3) goto LAB_0054eea4;
      puStack_98 = (undefined *)0x0;
      pcStack_90 = (char *)0x0;
      uVar6 = FUN_005d8058(uVar5,param_2[1],&pcStack_90,&puStack_98);
      if (((uVar6 & 1) == 0) || (*(int *)(*(long *)(param_3 + 0x58) + 0x18) == 8)) {
        FUN_0054f000(&pvStack_b8,param_2,param_3,param_4,param_5);
        pvStack_a0 = pvStack_b8;
        __ptr_00 = pvStack_b8;
      }
      else {
        FUN_005d8048(*param_2,param_2[1],param_3,param_4,pcStack_90,puStack_98,param_5,0);
        __ptr_00 = (void *)0x0;
      }
      bVar3 = false;
      __ptr = pvStack_50;
    }
    pvStack_50 = (void *)0x0;
    if (__ptr != (void *)0x0) {
      pvStack_50 = (void *)0x0;
      free(__ptr);
    }
    if (bVar3) {
      pvStack_a0 = (void *)0x0;
      if (__ptr_00 != (void *)0x0) {
        if ((*(byte *)((long)__ptr_00 + 8) & 1) != 0) {
          free(*(void **)((long)__ptr_00 + 0x18));
        }
        free(__ptr_00);
      }
      goto LAB_0054eef8;
    }
  }
  else {
    puStack_98 = &DAT_001d2b0a;
    pcStack_90 = "Mismatched data types between input and output Tensors. ";
    FUN_0055155c(&bStack_88,&pcStack_90,&lStack_a8,&puStack_98,&lStack_b0);
    FUN_0063aa48(&pvStack_b8,2,1,&bStack_88);
    __ptr_00 = pvStack_b8;
    pvStack_b8 = (void *)0x0;
    if ((bStack_88 & 1) != 0) {
      free(pvStack_78);
    }
  }
  *param_1 = __ptr_00;
LAB_0054eef8:
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c5d34  FUN_004c5d34 =====

void FUN_004c5d34(long *param_1,void *param_2,char *param_3,char *param_4,undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  void *pvVar7;
  void *pvVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  ulong uVar19;
  ulong uVar20;
  size_t __n;
  char *pcVar21;
  long lVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined *local_188;
  long *local_180;
  undefined *local_178;
  long *local_170;
  undefined *local_168;
  long *local_160;
  undefined *local_158;
  long *local_150;
  char *local_148;
  void *local_140;
  void *local_138;
  void *local_130;
  void *local_128;
  char *local_120;
  char *pcStack_118;
  char *local_110;
  char *local_108;
  undefined *local_100;
  undefined8 ****local_f8 [3];
  undefined **local_e0;
  void *local_c0 [7];
  void *local_88;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pcVar21 = *(char **)((long)param_2 + 0x18);
  local_120 = param_4;
  pcStack_118 = param_3;
  if ((pcVar21 == (char *)0xffffffffffffffff) ||
     ((lVar22 = *(long *)((long)param_2 + 0x20), pcVar21 != (char *)0x0 && (lVar22 == 0))))
  goto LAB_004c6384;
  if ((param_3 == param_4) || ((long)pcVar21 < 2)) {
LAB_004c63c4:
    uVar11 = FUN_00753a74(0x88);
                    /* try { // try from 004c63d4 to 004c63db has its CatchHandler @ 004c6688 */
    FUN_00645c30(&local_100);
                    /* try { // try from 004c63dc to 004c63fb has its CatchHandler @ 004c6604 */
    FUN_0047488c(local_c0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0xa5,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::DeviceHelpers::CpuDeviceHelpers::Diagonal(const Tensor &, int64_t, int64_t, AllocatorPtr, void *)"
                 ,&local_100);
    local_148 = "Cannot parse the diagonal elements along dims ";
    local_110 = " for input shape ";
    local_108 = " and ";
    FUN_004c7e50(&local_138,&local_148,&pcStack_118,&local_108,&local_120,&local_110,
                 (ulong *)((long)param_2 + 0x18));
                    /* try { // try from 004c6440 to 004c6487 has its CatchHandler @ 004c65a8 */
    FUN_00474a40(uVar11,local_c0,
                 "rank >= 2 && dim_1 != dim_2 && input_dims[onnxruntime::narrow<size_t>(dim_1)] == input_dims[onnxruntime::narrow<size_t>(dim_2)]"
                 ,&local_138);
    if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar11,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004c6684;
  }
  if ((long)param_3 < 0) {
LAB_004c6388:
    if (*(long *)(lVar3 + 0x28) == local_70) {
      plVar10 = (long *)FUN_00753a74(8);
      *plVar10 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar10,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    goto LAB_004c6684;
  }
  if (pcVar21 <= param_3) goto LAB_004c6384;
  if ((long)param_4 < 0) goto LAB_004c6388;
  if (pcVar21 <= param_4) goto LAB_004c6384;
  if (*(long *)(lVar22 + (long)param_3 * 8) != *(long *)(lVar22 + (long)param_4 * 8))
  goto LAB_004c63c4;
  *param_1 = 0;
  pcVar1 = param_3;
  if (param_3 <= param_4) {
    pcVar1 = param_4;
  }
  pcVar2 = param_3;
  if (param_4 <= param_3) {
    pcVar2 = param_4;
  }
  pcVar12 = pcVar21 + -2;
  if (((pcVar21 == (char *)0x2) || ((pcVar21 + -1 == param_3 && (pcVar12 == param_4)))) ||
     ((pcVar12 == param_3 && (pcVar21 + -1 == param_4)))) {
    local_188 = *param_5;
    local_180 = (long *)param_5[1];
    if (local_180 != (long *)0x0) {
      FUN_00755c20(1,local_180 + 1);
    }
                    /* try { // try from 004c5e18 to 004c5e2b has its CatchHandler @ 004c6614 */
    FUN_004c6b2c(local_c0,param_2,0,&local_188);
    pvVar8 = local_c0[0];
    plVar10 = local_180;
    local_c0[0] = (void *)0x0;
    *param_1 = (long)pvVar8;
    if ((local_180 != (long *)0x0) &&
       (lVar22 = FUN_00755c50(0xffffffffffffffff,local_180 + 1), lVar22 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0071245c(plVar10);
    }
  }
  else {
    local_138 = (void *)0x0;
    local_130 = (void *)0x0;
    local_128 = (void *)0x0;
    if ((ulong)pcVar21 >> 0x3d != 0) {
      if (*(long *)(lVar3 + 0x28) != local_70) goto LAB_004c6684;
                    /* try { // try from 004c6498 to 004c649f has its CatchHandler @ 004c6590 */
      uVar11 = FUN_00368664(&local_138);
                    /* catch() { ... } // from try @ 004c615c with catch @ 004c64a0 */
      if (local_e0 == param_5) {
        lVar22 = 0x20;
        ppuVar9 = &local_100;
LAB_004c64c4:
        (**(code **)(*ppuVar9 + lVar22))(ppuVar9);
      }
      else if (local_e0 != (undefined **)0x0) {
        lVar22 = 0x28;
        ppuVar9 = local_e0;
        goto LAB_004c64c4;
      }
      FUN_00478198(&local_178);
      pvVar8 = local_88;
      local_88 = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        free(pvVar8);
      }
      free(param_2);
      FUN_004c3dfc(&local_108);
      if (local_138 != (void *)0x0) {
        free(local_138);
      }
      FUN_004c3dfc(param_1);
      if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar11);
      }
      goto LAB_004c6684;
    }
    __n = (long)pcVar21 << 3;
                    /* try { // try from 004c5e84 to 004c5e8b has its CatchHandler @ 004c6590 */
    pvVar7 = (void *)FUN_00759c3c(__n);
    pvVar8 = (void *)((long)pvVar7 + (long)pcVar21 * 8);
    local_138 = pvVar7;
    local_128 = pvVar8;
    memset(pvVar7,0,__n);
    bVar5 = pcVar2 != pcVar12;
    bVar6 = pcVar1 == pcVar12;
    pcVar12 = (char *)0x0;
    lVar14 = -8;
    if (!bVar5 || !bVar6) {
      lVar14 = -0x10;
    }
    lVar13 = -0x10;
    if (!bVar5 || !bVar6) {
      lVar13 = -8;
    }
    *(char **)((long)pvVar8 + lVar14) = pcVar2;
    *(char **)((long)pvVar8 + lVar13) = pcVar1;
    lVar14 = 0;
    do {
      lVar13 = lVar14;
      if ((pcVar2 != pcVar12) && (pcVar1 != pcVar12)) {
        lVar13 = lVar14 + 1;
        *(char **)((long)pvVar7 + lVar14 * 8) = pcVar12;
      }
      pcVar12 = pcVar12 + 1;
      lVar14 = lVar13;
    } while (pcVar21 != pcVar12);
                    /* try { // try from 004c5f18 to 004c5f27 has its CatchHandler @ 004c6584 */
    local_130 = pvVar8;
    FUN_005ca9a8(local_c0,pcVar21,lVar22);
    local_148 = (char *)(((long)pcVar21 << 3) >> 3);
    if (pcVar21 == (char *)0x1fffffffffffffff) goto LAB_004c6384;
    local_158 = *param_5;
    local_150 = (long *)param_5[1];
    local_140 = pvVar7;
    if (local_150 != (long *)0x0) {
      FUN_00755c20(1,local_150 + 1);
    }
    puVar4 = PTR_DAT_007a2100;
    local_100 = PTR_DAT_007a2100 + 0x10;
    local_f8[0] = (undefined8 ****)PTR_thunk_FUN_0054ed58_007a2108;
                    /* try { // try from 004c5f80 to 004c5f9f has its CatchHandler @ 004c6528 */
    local_e0 = &local_100;
    FUN_004c66ac(&local_108,param_2,local_c0,&local_148,&local_158,0,&local_100);
    if (local_e0 == &local_100) {
      lVar22 = 0x20;
      ppuVar9 = &local_100;
LAB_004c5fc8:
      (**(code **)(*ppuVar9 + lVar22))();
    }
    else if (local_e0 != (undefined **)0x0) {
      lVar22 = 0x28;
      ppuVar9 = local_e0;
      goto LAB_004c5fc8;
    }
    plVar10 = local_150;
    if ((local_150 != (long *)0x0) &&
       (lVar22 = FUN_00755c50(0xffffffffffffffff,local_150 + 1), lVar22 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0071245c(plVar10);
    }
    pvVar8 = local_88;
    local_88 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
    }
    pcVar2 = local_108;
    local_168 = *param_5;
    local_160 = (long *)param_5[1];
    if (local_160 != (long *)0x0) {
      FUN_00755c20(1,local_160 + 1);
    }
                    /* try { // try from 004c6030 to 004c6043 has its CatchHandler @ 004c6508 */
    FUN_004c6b2c(local_c0,pcVar2,bVar5 && bVar6,&local_168);
    pvVar8 = local_c0[0];
    pvVar7 = (void *)*param_1;
    local_c0[0] = (void *)0x0;
    *param_1 = (long)pvVar8;
    if (pvVar7 != (void *)0x0) {
      FUN_005c8ce4(pvVar7);
      free(pvVar7);
      pvVar8 = local_c0[0];
      local_c0[0] = (void *)0x0;
      if (pvVar8 != (void *)0x0) {
        FUN_005c8ce4(pvVar8);
        free(pvVar8);
      }
    }
    plVar10 = local_160;
    if ((local_160 != (long *)0x0) &&
       (lVar22 = FUN_00755c50(0xffffffffffffffff,local_160 + 1), lVar22 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0071245c(plVar10);
    }
                    /* try { // try from 004c60b4 to 004c60bb has its CatchHandler @ 004c6500 */
    pvVar8 = (void *)FUN_00759c3c(__n);
    memset(pvVar8,0,__n);
    if (local_138 != local_130) {
      lVar22 = 0;
      lVar14 = 0;
      do {
        lVar22 = lVar22 + 8;
        *(long *)((long)pvVar8 + *(long *)((long)local_138 + lVar14 * 8) * 8) = lVar14;
        lVar14 = lVar14 + 1;
      } while ((void *)((long)local_138 + lVar22) != local_130);
    }
    pvVar7 = (void *)*param_1;
    if ((*(long *)((long)pvVar7 + 0x18) == -1) ||
       ((*(long *)((long)pvVar7 + 0x18) != 0 && (*(long *)((long)pvVar7 + 0x20) == 0))))
    goto LAB_004c6384;
                    /* try { // try from 004c611c to 004c6123 has its CatchHandler @ 004c64f0 */
    FUN_005ca9a8(local_c0);
    local_178 = *param_5;
    local_170 = (long *)param_5[1];
    local_148 = pcVar21;
    local_140 = pvVar8;
    if (local_170 != (long *)0x0) {
      FUN_00755c20(1,local_170 + 1);
    }
    local_100 = puVar4 + 0x10;
    local_e0 = &local_100;
    local_f8[0] = (undefined8 ****)PTR_thunk_FUN_0054ed58_007a2108;
                    /* try { // try from 004c615c to 004c617b has its CatchHandler @ 004c64a0 */
    FUN_004c66ac(&local_110,pvVar7,local_c0,&local_148,&local_178,0,&local_100);
    pcVar21 = local_110;
    local_110 = (char *)0x0;
    *param_1 = (long)pcVar21;
    FUN_005c8ce4(pvVar7);
    free(pvVar7);
    pcVar21 = local_110;
    local_110 = (char *)0x0;
    if (pcVar21 != (char *)0x0) {
      FUN_005c8ce4(pcVar21);
      free(pcVar21);
    }
    if (local_e0 == &local_100) {
      lVar22 = 0x20;
      ppuVar9 = &local_100;
LAB_004c61d8:
      (**(code **)(*ppuVar9 + lVar22))();
    }
    else if (local_e0 != (undefined **)0x0) {
      lVar22 = 0x28;
      ppuVar9 = local_e0;
      goto LAB_004c61d8;
    }
    plVar10 = local_170;
    if ((local_170 != (long *)0x0) &&
       (lVar22 = FUN_00755c50(0xffffffffffffffff,local_170 + 1), lVar22 == 0)) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_0071245c(plVar10);
    }
    pvVar7 = local_88;
    local_88 = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      free(pvVar7);
    }
    free(pvVar8);
    pcVar21 = local_108;
    local_108 = (char *)0x0;
    if (pcVar21 != (char *)0x0) {
      FUN_005c8ce4(pcVar21);
      free(pcVar21);
    }
    if (local_138 != (void *)0x0) {
      free(local_138);
    }
  }
  lVar22 = *param_1;
                    /* try { // try from 004c6258 to 004c6267 has its CatchHandler @ 004c6660 */
  FUN_004c7138(&local_100,lVar22 + 0x18);
  pppppuVar16 = local_f8;
  if (((ulong)local_100 & 1) != 0) {
    pppppuVar16 = (undefined8 *****)local_f8[0];
  }
  uVar19 = ((ulong)local_100 >> 1) - (long)(pcVar1 + 1);
  if (uVar19 != 0) {
    pppppuVar15 = pppppuVar16 + (long)(pcVar1 + 1);
    if (uVar19 < 4) {
      uVar17 = 0;
    }
    else {
      uVar17 = uVar19 & 0xfffffffffffffffc;
      pppppuVar15 = pppppuVar15 + uVar17;
      pppppuVar18 = pppppuVar16 + (long)(pcVar1 + 2);
      uVar20 = uVar17;
      do {
        ppppuVar23 = pppppuVar18[-1];
        ppppuVar24 = pppppuVar18[1];
        uVar20 = uVar20 - 4;
        pppppuVar18[-1] = *pppppuVar18;
        pppppuVar18[-2] = ppppuVar23;
        pppppuVar18[1] = pppppuVar18[2];
        *pppppuVar18 = ppppuVar24;
        pppppuVar18 = pppppuVar18 + 4;
      } while (uVar20 != 0);
      if (uVar19 == uVar17) goto LAB_004c6300;
    }
    pcVar21 = pcVar1 + (uVar17 - ((ulong)local_100 >> 1));
    pppppuVar16 = pppppuVar16 + (long)(pcVar1 + uVar17);
    do {
      pcVar21 = pcVar21 + 1;
      *pppppuVar16 = *pppppuVar15;
      pppppuVar15 = pppppuVar15 + 1;
      pppppuVar16 = pppppuVar16 + 1;
    } while (pcVar21 != (char *)0xffffffffffffffff);
  }
LAB_004c6300:
  uVar19 = (ulong)local_100 & 1;
  local_100 = local_100 + -2;
  pppppuVar16 = local_f8;
  if (uVar19 != 0) {
    pppppuVar16 = (undefined8 *****)local_f8[0];
  }
  if ((local_100 < (undefined *)0x2) || (pppppuVar16 != (undefined8 *****)0x0)) {
                    /* try { // try from 004c6320 to 004c6327 has its CatchHandler @ 004c6644 */
    FUN_005ca9a8(local_c0,(ulong)local_100 >> 1);
                    /* try { // try from 004c6328 to 004c6333 has its CatchHandler @ 004c6628 */
    FUN_004c7238(lVar22,local_c0);
    pvVar8 = local_88;
    local_88 = (void *)0x0;
    if (pvVar8 != (void *)0x0) {
      free(pvVar8);
    }
    if (((ulong)local_100 & 1) != 0) {
      free(local_f8[0]);
    }
    if (*(long *)(lVar3 + 0x28) == local_70) {
      return;
    }
LAB_004c6684:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_004c6384:
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 004c66ac  FUN_004c66ac =====

void FUN_004c66ac(undefined8 *param_1,long param_2,ulong *param_3,ulong *param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  void *__ptr;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [24];
  undefined8 local_160 [3];
  long local_148;
  undefined8 *local_140 [10];
  char *local_f0;
  undefined8 auStack_e8 [7];
  void *local_b0;
  ulong local_a8;
  undefined8 **local_a0;
  ulong local_98;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  uVar8 = *param_3;
  if (uVar8 != *param_4) {
    uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 004c68c0 to 004c68c7 has its CatchHandler @ 004c6abc */
    FUN_00645c30(auStack_e8);
                    /* try { // try from 004c68c8 to 004c68e7 has its CatchHandler @ 004c6a94 */
    FUN_0047488c(local_140,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x118,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::Transpose(const Tensor &, const TensorShape &, const gsl::span<const size_t> &, AllocatorPtr, void *, const DeviceHelpers::Transpose &)"
                 ,auStack_e8);
                    /* try { // try from 004c68e8 to 004c68f7 has its CatchHandler @ 004c6a3c */
    FUN_00479eac(&local_a8,"Length of permutation must match the rank of the input to be permutated"
                );
                    /* try { // try from 004c68fc to 004c6943 has its CatchHandler @ 004c6a24 */
    FUN_00474a40(uVar6,local_140,"input_rank == permutation.size()",&local_a8);
    if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004c6b28;
  }
  local_a8 = 0;
  if (uVar8 < 7) {
    if (uVar8 != 0) goto LAB_004c673c;
  }
  else {
    uVar2 = uVar8;
    if (uVar8 < 0xd) {
      uVar2 = 0xc;
    }
    if (uVar8 >> 0x3d != 0) {
      if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c695c to 004c695f has its CatchHandler @ 004c6af8 */
        FUN_002f9ee0();
      }
      goto LAB_004c6b28;
    }
                    /* try { // try from 004c672c to 004c672f has its CatchHandler @ 004c6af8 */
    local_a0 = (undefined8 **)FUN_00759c3c(uVar2 << 3);
    local_a8 = 1;
    local_98 = uVar2;
LAB_004c673c:
    puVar10 = (ulong *)param_4[1];
    if (puVar10 == (ulong *)0x0) goto LAB_004c68b0;
    puVar1 = puVar10 + uVar8;
    lVar9 = uVar8 << 3;
    do {
      if ((puVar1 <= puVar10) || (*param_3 <= *puVar10)) goto LAB_004c68b0;
      local_140[0] = *(undefined8 **)(param_3[1] + *puVar10 * 8);
      uVar8 = 6;
      if ((local_a8 & 1) != 0) {
        uVar8 = local_98;
      }
      if (local_a8 >> 1 == uVar8) {
                    /* try { // try from 004c67c4 to 004c67cf has its CatchHandler @ 004c6a20 */
        FUN_004c7d34(&local_a8,local_140);
      }
      else {
        pppuVar3 = &local_a0;
        if ((local_a8 & 1) != 0) {
          pppuVar3 = (undefined8 ***)local_a0;
        }
        pppuVar3[local_a8 >> 1] = (undefined8 **)local_140[0];
        local_a8 = local_a8 + 2;
      }
      lVar9 = lVar9 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  local_140[0] = *(undefined8 **)(param_2 + 0x58);
                    /* try { // try from 004c67e0 to 004c67f7 has its CatchHandler @ 004c6ad4 */
  FUN_004c3cac(param_1,local_140,&local_a8,param_5);
  if ((*param_3 == 0xffffffffffffffff) || ((*param_3 != 0 && (param_3[1] == 0)))) {
LAB_004c68b0:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 004c6810 to 004c681b has its CatchHandler @ 004c6acc */
  FUN_005ca9a8(auStack_e8);
  plVar5 = *(long **)(param_7 + 0x20);
  local_160[0] = param_6;
  local_140[0] = auStack_e8;
  if (plVar5 == (long *)0x0) {
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_004c6b28;
                    /* try { // try from 004c6974 to 004c6977 has its CatchHandler @ 004c6ad8 */
    FUN_0030be88();
  }
  else {
                    /* try { // try from 004c683c to 004c6853 has its CatchHandler @ 004c6ad8 */
    (**(code **)(*plVar5 + 0x30))(&local_148,plVar5,param_4,param_2,*param_1,local_140,local_160);
    __ptr = local_b0;
    if (local_148 == 0) {
      local_b0 = (void *)0x0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      if ((local_a8 & 1) != 0) {
        free(local_a0);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return;
      }
      goto LAB_004c6b28;
    }
  }
  uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 004c6984 to 004c698b has its CatchHandler @ 004c6aa4 */
  FUN_00645c30(local_160);
                    /* try { // try from 004c698c to 004c69ab has its CatchHandler @ 004c6a84 */
  FUN_0047488c(local_140,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
               ,0x12a,
               "std::unique_ptr<Tensor> onnxruntime::EinsumOp::Transpose(const Tensor &, const TensorShape &, const gsl::span<const size_t> &, AllocatorPtr, void *, const DeviceHelpers::Transpose &)"
               ,local_160);
  local_180 = 1;
  uStack_17c = 2;
  uVar7 = FUN_0063afd8(&local_148);
  local_f0 = "Einsum op: Transpose failed: ";
  FUN_004c80bc(auStack_178,&uStack_17c,&local_180,&local_f0,uVar7);
  FUN_004792b8(uVar6,local_140,auStack_178);
  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 004c6a08 to 004c6a1f has its CatchHandler @ 004c6a5c */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
LAB_004c6b28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c6b2c  FUN_004c6b2c =====

void FUN_004c6b2c(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long lVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  long local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 *local_100 [10];
  char *local_b0;
  ulong local_a8;
  undefined8 **local_a0;
  ulong local_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar3 = param_2[3];
  if ((uVar3 == 0xffffffffffffffff) ||
     (((puVar18 = (undefined8 *)param_2[4], uVar3 != 0 && (puVar18 == (undefined8 *)0x0)) ||
      (uVar3 < 2)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  lVar15 = uVar3 - 2;
  plVar14 = puVar18 + (uVar3 - 1);
  if (puVar18[lVar15] != *plVar14) {
    uVar20 = FUN_00753a74(0x88);
                    /* try { // try from 004c6f18 to 004c6f1f has its CatchHandler @ 004c70f0 */
    FUN_00645c30(&local_a8);
                    /* try { // try from 004c6f20 to 004c6f3f has its CatchHandler @ 004c70e0 */
    FUN_0047488c(local_100,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x71,
                 "std::unique_ptr<Tensor> onnxruntime::EinsumOp::DeviceHelpers::CpuDeviceHelpers::DiagonalInnermostDims(const Tensor &, bool, AllocatorPtr)"
                 ,&local_a8);
                    /* try { // try from 004c6f40 to 004c6f4f has its CatchHandler @ 004c70a8 */
    FUN_00479eac(auStack_118,
                 "The innermost dims should have the same dim value to parse the diagonal elements")
    ;
                    /* try { // try from 004c6f54 to 004c6f9b has its CatchHandler @ 004c7090 */
    FUN_00474a40(uVar20,local_100,"input_dims[rank - 2] == input_dims[rank - 1]",auStack_118);
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar20,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_004c7134;
  }
  local_a8 = 0;
  lVar17 = *(long *)(param_2[0xb] + 0x10);
  if (uVar3 < 7) {
    if (lVar15 != 0) goto LAB_004c6be8;
    lVar16 = 1;
  }
  else {
    uVar5 = uVar3 >> 0x3d;
    if (uVar3 < 0xd) {
      uVar3 = 0xc;
    }
    if (uVar5 != 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c6fb0 to 004c6fb3 has its CatchHandler @ 004c7104 */
        FUN_002f9ee0();
      }
      goto LAB_004c7134;
    }
                    /* try { // try from 004c6bd8 to 004c6bdb has its CatchHandler @ 004c7104 */
    local_a0 = (undefined8 **)FUN_00759c3c(uVar3 << 3);
    local_a8 = 1;
    local_98 = uVar3;
LAB_004c6be8:
    lVar16 = 1;
    do {
      ppuVar13 = (undefined8 **)*puVar18;
      uVar3 = 6;
      if ((local_a8 & 1) != 0) {
        uVar3 = local_98;
      }
      local_100[0] = ppuVar13;
      if (local_a8 >> 1 == uVar3) {
                    /* try { // try from 004c6c40 to 004c6c4b has its CatchHandler @ 004c7054 */
        FUN_004c78bc(&local_a8,local_100);
      }
      else {
        pppuVar4 = &local_a0;
        if ((local_a8 & 1) != 0) {
          pppuVar4 = (undefined8 ***)local_a0;
        }
        pppuVar4[local_a8 >> 1] = ppuVar13;
        local_a8 = local_a8 + 2;
      }
      lVar16 = (long)ppuVar13 * lVar16;
      lVar15 = lVar15 + -1;
      puVar18 = puVar18 + 1;
    } while (lVar15 != 0);
  }
  pppuVar4 = &local_a0;
  if ((param_3 & 1) == 0) {
    uVar3 = 6;
    if ((local_a8 & 1) != 0) {
      uVar3 = local_98;
    }
    if (local_a8 >> 1 == uVar3) {
                    /* try { // try from 004c6ed8 to 004c6ef7 has its CatchHandler @ 004c7050 */
      FUN_004c78bc(&local_a8,plVar14);
    }
    else {
      pppuVar1 = &local_a0;
      if ((local_a8 & 1) != 0) {
        pppuVar1 = (undefined8 ***)local_a0;
      }
      pppuVar1[local_a8 >> 1] = (undefined8 **)*plVar14;
      local_a8 = local_a8 + 2;
    }
    uVar5 = local_a8 >> 1;
    uVar3 = 6;
    if ((local_a8 & 1) != 0) {
      uVar3 = local_98;
    }
    local_100[0] = (undefined8 *)0x1;
    if (uVar5 != uVar3) {
      if ((local_a8 & 1) != 0) {
        pppuVar4 = (undefined8 ***)local_a0;
      }
      ppuVar13 = (undefined8 **)0x1;
      goto LAB_004c6d54;
    }
                    /* try { // try from 004c6efc to 004c6f07 has its CatchHandler @ 004c7048 */
    FUN_004c7d34(&local_a8,local_100);
  }
  else {
    uVar3 = 6;
    if ((local_a8 & 1) != 0) {
      uVar3 = local_98;
    }
    local_100[0] = (undefined8 *)0x1;
    if (local_a8 >> 1 == uVar3) {
                    /* try { // try from 004c6ec4 to 004c6ecf has its CatchHandler @ 004c704c */
      FUN_004c7d34(&local_a8,local_100);
    }
    else {
      pppuVar1 = &local_a0;
      if ((local_a8 & 1) != 0) {
        pppuVar1 = (undefined8 ***)local_a0;
      }
      pppuVar1[local_a8 >> 1] = (undefined8 **)0x1;
      local_a8 = local_a8 + 2;
    }
    uVar5 = local_a8 >> 1;
    uVar3 = 6;
    if ((local_a8 & 1) != 0) {
      uVar3 = local_98;
    }
    if (uVar5 == uVar3) {
      FUN_004c78bc(&local_a8,plVar14);
    }
    else {
      if ((local_a8 & 1) != 0) {
        pppuVar4 = (undefined8 ***)local_a0;
      }
      ppuVar13 = (undefined8 **)*plVar14;
LAB_004c6d54:
      pppuVar4[uVar5] = ppuVar13;
      local_a8 = local_a8 + 2;
    }
  }
  local_100[0] = (undefined8 *)param_2[0xb];
  lVar15 = *plVar14;
                    /* try { // try from 004c6d70 to 004c6d83 has its CatchHandler @ 004c7100 */
  FUN_004c7778(param_1,local_100,&local_a8,param_4);
  if (lVar17 == 4) {
    if ((0 < lVar16) && (0 < lVar15)) {
      lVar17 = 0;
      lVar9 = *(long *)*param_1;
      lVar11 = ((long *)*param_1)[0xf];
      lVar6 = 0;
      puVar10 = (undefined4 *)(*param_2 + param_2[0xf]);
      lVar12 = lVar15;
      puVar8 = puVar10;
      do {
        do {
          uVar19 = *puVar10;
          lVar12 = lVar12 + -1;
          puVar10 = puVar10 + lVar15 + 1;
          *(undefined4 *)(lVar9 + lVar11 + lVar17 * 4) = uVar19;
          lVar17 = lVar17 + 1;
        } while (lVar12 != 0);
        lVar6 = lVar6 + 1;
        puVar10 = puVar8 + lVar15 * lVar15;
        lVar12 = lVar15;
        puVar8 = puVar10;
      } while (lVar6 != lVar16);
    }
  }
  else {
    if (lVar17 != 8) {
      uVar20 = FUN_00753a74(0x88);
                    /* try { // try from 004c6fc0 to 004c6fc7 has its CatchHandler @ 004c70c8 */
      FUN_00645c30(auStack_118);
                    /* try { // try from 004c6fc8 to 004c6fe7 has its CatchHandler @ 004c7080 */
      FUN_0047488c(local_100,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                   ,0x99,
                   "std::unique_ptr<Tensor> onnxruntime::EinsumOp::DeviceHelpers::CpuDeviceHelpers::DiagonalInnermostDims(const Tensor &, bool, AllocatorPtr)"
                   ,auStack_118);
      local_138 = param_2[0xb];
      local_b0 = "Einsum op: Unsupported data type for Diagonal ";
      FUN_004c79d8(auStack_130,&local_b0,&local_138);
      FUN_004792b8(uVar20,local_100,auStack_130);
      if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c7030 to 004c7047 has its CatchHandler @ 004c7058 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar20,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_004c7134;
    }
    if ((0 < lVar16) && (0 < lVar15)) {
      lVar17 = 0;
      lVar9 = *(long *)*param_1;
      lVar11 = ((long *)*param_1)[0xf];
      lVar6 = 0;
      puVar18 = (undefined8 *)(*param_2 + param_2[0xf]);
      lVar12 = lVar15;
      puVar7 = puVar18;
      do {
        do {
          uVar20 = *puVar18;
          lVar12 = lVar12 + -1;
          puVar18 = puVar18 + lVar15 + 1;
          *(undefined8 *)(lVar9 + lVar11 + lVar17 * 8) = uVar20;
          lVar17 = lVar17 + 1;
        } while (lVar12 != 0);
        lVar6 = lVar6 + 1;
        puVar18 = puVar7 + lVar15 * lVar15;
        lVar12 = lVar15;
        puVar7 = puVar18;
      } while (lVar6 != lVar16);
    }
  }
  if ((local_a8 & 1) != 0) {
    free(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_004c7134:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7138  FUN_004c7138 =====

void FUN_004c7138(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_60;
  long lStack_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *param_2;
  if ((uVar4 == 0xffffffffffffffff) || ((uVar5 = param_2[1], uVar4 != 0 && (uVar5 == 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  *param_1 = 0;
  if (6 < uVar4) {
    uVar1 = uVar4;
    if (uVar4 < 0xd) {
      uVar1 = 0xc;
    }
    if (uVar4 >> 0x3d != 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_004c7234;
    }
                    /* try { // try from 004c719c to 004c7207 has its CatchHandler @ 004c7208 */
    uVar3 = FUN_00759c3c(uVar1 << 3);
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    *param_1 = 1;
  }
  lStack_58 = uVar5 + uVar4 * 8;
  local_60 = uVar5;
  local_50 = uVar5;
  FUN_004c7b90(param_1,&local_60,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_004c7234:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7238  FUN_004c7238 =====

void FUN_004c7238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  byte local_e0;
  undefined3 local_df;
  undefined1 uStack_dc;
  undefined3 uStack_db;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [80];
  undefined3 local_60;
  undefined1 uStack_5d;
  undefined3 uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_005cabcc(param_1 + 0x18);
  lVar5 = FUN_005cabcc(param_2);
  if (lVar4 == lVar5) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
      FUN_005caa64(param_1 + 0x18,param_2);
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 004c72c4 to 004c72cb has its CatchHandler @ 004c7598 */
    FUN_00645c30(auStack_c8);
                    /* try { // try from 004c72cc to 004c72eb has its CatchHandler @ 004c7588 */
    FUN_0047488c(auStack_b0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/tensor.h"
                 ,0xfd,"void onnxruntime::Tensor::Reshape(const TensorShape &)",auStack_c8);
                    /* try { // try from 004c72ec to 004c72fb has its CatchHandler @ 004c7568 */
    FUN_005cabcc(param_1 + 0x18);
    FUN_007148c0(auStack_148);
                    /* try { // try from 004c72fc to 004c730f has its CatchHandler @ 004c7538 */
    puVar7 = (undefined8 *)FUN_00713170(auStack_148,0,"Tensor size (");
    local_120 = puVar7[2];
    uStack_128 = puVar7[1];
    local_130 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 004c7328 to 004c7337 has its CatchHandler @ 004c7514 */
    puVar7 = (undefined8 *)FUN_00713bdc(&local_130,") != new size (");
    local_100 = puVar7[2];
    uStack_108 = puVar7[1];
    local_110 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 004c7350 to 004c735f has its CatchHandler @ 004c74f0 */
    FUN_005cabcc(param_2);
    FUN_007148c0(auStack_160);
                    /* try { // try from 004c7360 to 004c736f has its CatchHandler @ 004c74cc */
    FUN_002fdadc(auStack_f8,&local_110,auStack_160);
                    /* try { // try from 004c7370 to 004c737f has its CatchHandler @ 004c74a8 */
    pbVar8 = (byte *)FUN_00713bdc(auStack_f8,&DAT_001d047f);
    uVar1 = *(undefined8 *)(pbVar8 + 8);
    uVar2 = *(undefined8 *)(pbVar8 + 0x10);
    pbVar8[8] = 0;
    pbVar8[9] = 0;
    pbVar8[10] = 0;
    pbVar8[0xb] = 0;
    pbVar8[0xc] = 0;
    pbVar8[0xd] = 0;
    pbVar8[0xe] = 0;
    pbVar8[0xf] = 0;
    pbVar8[0x10] = 0;
    pbVar8[0x11] = 0;
    pbVar8[0x12] = 0;
    pbVar8[0x13] = 0;
    pbVar8[0x14] = 0;
    pbVar8[0x15] = 0;
    pbVar8[0x16] = 0;
    pbVar8[0x17] = 0;
    local_60 = (undefined3)*(undefined4 *)(pbVar8 + 1);
    uStack_5d = (undefined1)*(undefined4 *)(pbVar8 + 4);
    uStack_5c = (undefined3)((uint)*(undefined4 *)(pbVar8 + 4) >> 8);
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    if ((*pbVar8 & 1) == 0) {
      _local_df = CONCAT13(uStack_5d,local_60);
      uStack_db = uStack_5c;
      local_e0 = *pbVar8;
      local_d8 = uVar1;
      uStack_d0 = uVar2;
    }
    else {
                    /* try { // try from 004c73c4 to 004c73cf has its CatchHandler @ 004c7418 */
      FUN_002fb36c(&local_e0,uVar2);
    }
                    /* try { // try from 004c73d4 to 004c7417 has its CatchHandler @ 004c7424 */
    FUN_00474a40(uVar6,auStack_b0,"shape_.Size() == new_shape.Size()",&local_e0);
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c75b8  FUN_004c75b8 =====

void FUN_004c75b8(ulong param_1,ulong *param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_2 == param_1) {
    if (param_1 != 0) {
      lVar4 = 0;
      lVar5 = param_1 - 1;
      do {
        bVar2 = lVar4 != *(long *)(param_2[1] + lVar4 * 8);
        param_1 = (ulong)bVar2;
        if (bVar2) break;
        bVar2 = lVar5 != lVar4;
        lVar4 = lVar4 + 1;
      } while (bVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 004c7644 to 004c764b has its CatchHandler @ 004c7754 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 004c764c to 004c766b has its CatchHandler @ 004c7744 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_auxiliary_ops.cc"
                 ,0x100,
                 "bool onnxruntime::EinsumOp::IsTransposeRequired(size_t, const gsl::span<const size_t> &)"
                 ,auStack_a0);
                    /* try { // try from 004c766c to 004c767b has its CatchHandler @ 004c7724 */
    FUN_00479eac(auStack_b8,"The rank of the input must match permutation size for Transpose");
                    /* try { // try from 004c7680 to 004c76c7 has its CatchHandler @ 004c76c8 */
    param_1 = FUN_00474a40(uVar3,auStack_88,"input_rank == permutation.size()",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 004c7778  FUN_004c7778 =====

void FUN_004c7778(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_a0;
  long *plStack_98;
  undefined1 auStack_88 [56];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00759c3c(0x80);
  uVar6 = *param_3;
  uVar7 = *param_2;
  puVar1 = param_3 + 1;
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)param_3[1];
  }
  if ((1 < uVar6) && (puVar1 == (ulong *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
                    /* try { // try from 004c77dc to 004c77e3 has its CatchHandler @ 004c7894 */
  FUN_005ca9a8(auStack_88,uVar6 >> 1);
  plStack_98 = (long *)param_4[1];
  local_a0 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
                    /* try { // try from 004c77f0 to 004c7803 has its CatchHandler @ 004c7874 */
  FUN_005c80c8(uVar4,uVar7,auStack_88,&local_a0);
  plVar3 = plStack_98;
  *param_1 = uVar4;
  if ((plStack_98 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,plStack_98 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  __ptr = local_50;
  local_50 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c78bc  FUN_004c78bc =====

undefined8 * FUN_004c78bc(ulong *param_1,undefined8 *param_2)

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
  uVar2 = 0xc;
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
      if (uVar12 == uVar5) goto LAB_004c7998;
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
LAB_004c7998:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 004c79d8  FUN_004c79d8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004c79d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 004c7a4c to 004c7a57 has its CatchHandler @ 004c7b7c */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 004c7a70 to 004c7a77 has its CatchHandler @ 004c7b5c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 004c7aac to 004c7ab7 has its CatchHandler @ 004c7b58 */
  FUN_00303e0c(local_170,__s,sVar5);
                    /* try { // try from 004c7abc to 004c7ac3 has its CatchHandler @ 004c7b54 */
  FUN_0057a134(local_170,*param_3);
                    /* try { // try from 004c7ac4 to 004c7acf has its CatchHandler @ 004c7b50 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c7b90  FUN_004c7b90 =====

void FUN_004c7b90(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar1 = param_1 + 1;
  uVar2 = 6;
  if ((*param_1 & 1) != 0) {
    puVar1 = (ulong *)param_1[1];
    uVar2 = param_1[2];
  }
  if (uVar2 < param_3) {
    uVar2 = uVar2 * 2;
    if (uVar2 < param_3 || uVar2 - param_3 == 0) {
      uVar2 = param_3;
    }
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    puVar1 = (ulong *)FUN_00759c3c(uVar2 << 3);
    puVar4 = (ulong *)*param_2;
    puVar8 = puVar1;
    uVar3 = param_3;
  }
  else {
    uVar2 = *param_1 >> 1;
    uVar3 = 0;
    if (uVar2 <= param_3) {
      uVar3 = param_3 - uVar2;
    }
    uVar6 = uVar2;
    if (param_3 <= uVar2) {
      uVar6 = param_3;
    }
    if (uVar6 != 0) {
      puVar8 = (ulong *)*param_2;
      if (puVar8 == (ulong *)0x0) goto LAB_004c7d2c;
      puVar5 = (ulong *)param_2[1];
      puVar4 = puVar1;
      do {
        if (((puVar5 == (ulong *)0x0) || (puVar7 = (ulong *)param_2[2], puVar7 < puVar8)) ||
           (puVar5 <= puVar7)) goto LAB_004c7d2c;
        *puVar4 = *puVar7;
        puVar7 = (ulong *)param_2[2];
        if (((puVar7 == (ulong *)0x0) || (puVar5 = (ulong *)param_2[1], puVar5 == (ulong *)0x0)) ||
           (puVar5 <= puVar7)) goto LAB_004c7d2c;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        param_2[2] = puVar7 + 1;
      } while (uVar6 != 0);
    }
    if (param_3 <= uVar2) {
      uVar3 = *param_1;
      goto LAB_004c7d10;
    }
    puVar1 = puVar1 + uVar2;
    uVar2 = 0;
    puVar4 = (ulong *)*param_2;
    puVar8 = (ulong *)0x0;
  }
  if (puVar4 == (ulong *)0x0) {
LAB_004c7d2c:
                    /* WARNING: Subroutine does not return */
    FUN_004839bc();
  }
  puVar5 = (ulong *)param_2[1];
  do {
    if (((puVar5 == (ulong *)0x0) || (puVar7 = (ulong *)param_2[2], puVar7 < puVar4)) ||
       (puVar5 <= puVar7)) goto LAB_004c7d2c;
    *puVar1 = *puVar7;
    puVar7 = (ulong *)param_2[2];
    if (((puVar7 == (ulong *)0x0) || (puVar5 = (ulong *)param_2[1], puVar5 == (ulong *)0x0)) ||
       (puVar5 <= puVar7)) goto LAB_004c7d2c;
    uVar3 = uVar3 - 1;
    puVar1 = puVar1 + 1;
    param_2[2] = puVar7 + 1;
  } while (uVar3 != 0);
  uVar3 = *param_1;
  if (puVar8 != (ulong *)0x0) {
    if ((uVar3 & 1) != 0) {
      free((void *)param_1[1]);
      uVar3 = *param_1;
    }
    uVar3 = uVar3 | 1;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar2;
  }
LAB_004c7d10:
  *param_1 = uVar3 & 1 | param_3 << 1;
  return;
}


// ===== 004c7d34  FUN_004c7d34 =====

undefined8 * FUN_004c7d34(ulong *param_1,undefined8 *param_2)

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
  uVar2 = 0xc;
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
      if (uVar12 == uVar5) goto LAB_004c7e10;
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
LAB_004c7e10:
  if ((uVar11 & 1) != 0) {
    free(__ptr);
    uVar11 = *param_1;
  }
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  *param_1 = (uVar11 | 1) + 2;
  return puVar1;
}


// ===== 004c7e50  FUN_004c7e50 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004c7e50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004c7ed0 to 004c7edb has its CatchHandler @ 004c8010 */
  FUN_00715fc0((long)local_178 + lVar6,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar6) = 0xffffffff;
                    /* try { // try from 004c7ef4 to 004c7efb has its CatchHandler @ 004c7ff0 */
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
                    /* try { // try from 004c7f2c to 004c7f37 has its CatchHandler @ 004c7fec */
  FUN_00303e0c(local_178,__s,sVar5);
                    /* try { // try from 004c7f3c to 004c7f43 has its CatchHandler @ 004c7fe8 */
  FUN_0071755c(local_178,*param_3);
  FUN_004c8024(local_178,param_4,param_5,param_6,param_7);
                    /* try { // try from 004c7f5c to 004c7f67 has its CatchHandler @ 004c7fe4 */
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


// ===== 004c8024  FUN_004c8024 =====

void FUN_004c8024(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004c8058 to 004c8063 has its CatchHandler @ 004c80b8 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004c8068 to 004c806f has its CatchHandler @ 004c80b4 */
  FUN_0071755c(param_1,*param_3);
  pcVar2 = (char *)*param_4;
  sVar1 = strlen(pcVar2);
                    /* try { // try from 004c8080 to 004c808b has its CatchHandler @ 004c80b0 */
  FUN_00303e0c(param_1,pcVar2,sVar1);
                    /* try { // try from 004c808c to 004c8097 has its CatchHandler @ 004c80ac */
  FUN_005cb4e4(param_1,param_5);
  return;
}


// ===== 004c80bc  FUN_004c80bc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_004c80bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

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
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar5 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 004c8138 to 004c8143 has its CatchHandler @ 004c8248 */
  FUN_00715fc0((long)local_178 + lVar5,local_178 + 1);
  local_178[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar5) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar5) = 0xffffffff;
                    /* try { // try from 004c815c to 004c8163 has its CatchHandler @ 004c8228 */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = puVar1;
  FUN_004c825c(local_178,param_2,param_3,param_4,param_5);
                    /* try { // try from 004c81a0 to 004c81ab has its CatchHandler @ 004c8224 */
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


// ===== 004c825c  FUN_004c825c =====

void FUN_004c825c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
                 byte *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  char *__s;
  
                    /* try { // try from 004c8280 to 004c8283 has its CatchHandler @ 004c82e8 */
  FUN_00717214(param_1,*param_2);
                    /* try { // try from 004c8288 to 004c828f has its CatchHandler @ 004c82e4 */
  FUN_00717214(param_1,*param_3);
  __s = (char *)*param_4;
  sVar3 = strlen(__s);
                    /* try { // try from 004c82a0 to 004c82ab has its CatchHandler @ 004c82e0 */
  FUN_00303e0c(param_1,__s,sVar3);
  uVar1 = *(ulong *)(param_5 + 8);
  pbVar2 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar2 = param_5 + 1;
    uVar1 = (ulong)(*param_5 >> 1);
  }
                    /* try { // try from 004c82c4 to 004c82cb has its CatchHandler @ 004c82dc */
  FUN_00303e0c(param_1,pbVar2,uVar1);
  return;
}


// ===== 004c82ec  FUN_004c82ec =====

void FUN_004c82ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  FUN_004c83e8();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  lVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x488) = *param_4;
  *(long *)(param_1 + 0x490) = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x500) = param_5;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x250) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x260) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x270) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x288) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x280) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x298) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x308) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x300) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x318) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x310) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x328) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 800) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x338) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x330) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x348) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x358) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x350) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x368) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x360) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x378) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x370) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x388) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x380) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x398) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x390) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3a8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3a0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 1000) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}


// ===== 004c83e8  FUN_004c83e8 =====

void FUN_004c83e8(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    bVar1 = param_2[0x18];
  }
  else {
    FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    bVar1 = param_2[0x18];
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[4] = uVar3;
    param_1[3] = uVar2;
  }
  else {
                    /* try { // try from 004c8428 to 004c842f has its CatchHandler @ 004c84f0 */
    FUN_002fb36c(param_1 + 3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
                    /* try { // try from 004c8480 to 004c8487 has its CatchHandler @ 004c8500 */
  FUN_00475d88(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
               (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x5555555555555555);
  if ((param_2[0x48] & 1) != 0) {
                    /* try { // try from 004c84c0 to 004c84c7 has its CatchHandler @ 004c84e0 */
    FUN_002fb36c(param_1 + 9,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50));
    *(byte *)(param_1 + 0xc) = param_2[0x60];
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = uVar3;
  param_1[9] = uVar2;
  *(byte *)(param_1 + 0xc) = param_2[0x60];
  return;
}


// ===== 004c853c  FUN_004c853c =====

void FUN_004c853c(long *param_1,undefined8 param_2)

{
  FUN_004c86cc();
  if (*param_1 == 0) {
    FUN_004c92d8(param_1,param_2);
    if (*param_1 == 0) {
      FUN_004c9d50(param_1,param_2);
      if (*param_1 == 0) {
        FUN_004c9ffc(param_1,param_2);
        if (*param_1 == 0) {
          FUN_004ca638(param_1,param_2);
          if (*param_1 != 0) {
                    /* try { // try from 004c863c to 004c865b has its CatchHandler @ 004c8668 */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                         ,&DAT_001f1d64,0x1e);
          }
        }
        else {
                    /* try { // try from 004c8604 to 004c8623 has its CatchHandler @ 004c867c */
          FUN_00645c3c(0,param_1,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                       ,&DAT_001f1d64,0x1c);
        }
      }
      else {
                    /* try { // try from 004c85cc to 004c85eb has its CatchHandler @ 004c8690 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                     ,&DAT_001f1d64,0x1a);
      }
    }
    else {
                    /* try { // try from 004c8594 to 004c85b3 has its CatchHandler @ 004c86a4 */
      FUN_00645c3c(0,param_1,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                   ,&DAT_001f1d64,0x18);
    }
  }
  else {
                    /* try { // try from 004c855c to 004c857b has its CatchHandler @ 004c86b8 */
    FUN_00645c3c(0,param_1,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                 ,&DAT_001f1d64,0x16);
  }
  return;
}


// ===== 004c86cc  FUN_004c86cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c86cc(undefined8 *param_1,long param_2)

{
  char **ppcVar1;
  char **ppcVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *pvVar14;
  char *pcVar15;
  undefined8 uVar16;
  long *plVar17;
  bool bVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  char *pcVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  void *pvVar31;
  long *plVar32;
  size_t sVar33;
  char *pcVar34;
  long lVar35;
  long *plVar36;
  long lVar37;
  byte *pbVar38;
  char **local_118;
  byte *local_100;
  ulong local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  ulong local_c0;
  long local_b8;
  char *local_b0;
  char *pcStack_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *pcStack_88;
  char *local_80;
  char *local_78;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if ((*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x5555555555555555 -
      ((*(long **)(param_2 + 0x70))[1] - **(long **)(param_2 + 0x70) >> 3) == 0) {
    local_b8 = 0;
    FUN_004cb2f8(param_2 + 0x458);
    pvVar31 = *(void **)(param_2 + 0x3f0);
    if ((ulong)(*(long *)(param_2 + 0x400) - (long)pvVar31) < 0x50) {
      sVar33 = *(long *)(param_2 + 0x3f8) - (long)pvVar31;
      pvVar14 = (void *)FUN_00759c3c(0x50);
      memcpy(pvVar14,pvVar31,sVar33);
      *(void **)(param_2 + 0x3f0) = pvVar14;
      *(size_t *)(param_2 + 0x3f8) = (long)pvVar14 + sVar33;
      *(long *)(param_2 + 0x400) = (long)pvVar14 + 0x50;
      if (pvVar31 != (void *)0x0) {
        free(pvVar31);
      }
    }
    pvVar31 = *(void **)(param_2 + 0x408);
    if ((ulong)(*(long *)(param_2 + 0x418) - (long)pvVar31) < 0x50) {
      sVar33 = *(long *)(param_2 + 0x410) - (long)pvVar31;
      pvVar14 = (void *)FUN_00759c3c(0x50);
      memcpy(pvVar14,pvVar31,sVar33);
      *(void **)(param_2 + 0x408) = pvVar14;
      *(size_t *)(param_2 + 0x410) = (long)pvVar14 + sVar33;
      *(long *)(param_2 + 0x418) = (long)pvVar14 + 0x50;
      if (pvVar31 != (void *)0x0) {
        free(pvVar31);
      }
    }
    local_100 = *(byte **)(param_2 + 0x30);
    pbVar7 = *(byte **)(param_2 + 0x38);
    if (local_100 != pbVar7) {
      ppcVar1 = (char **)(param_2 + 0x3f0);
      ppcVar2 = (char **)(param_2 + 0x408);
      lVar3 = param_2 + 0xb0;
      lVar4 = param_2 + 0x250;
      do {
        if (local_b8 < 0) {
          plVar17 = (long *)FUN_00753a74(8);
          *plVar17 = (long)(PTR_DAT_007a1ef8 + 0x10);
          if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar17,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
          }
          goto LAB_004c92d4;
        }
        lVar28 = *(long *)(**(long **)(param_2 + 0x70) + local_b8 * 8);
        uVar25 = *(ulong *)(lVar28 + 0x18);
        if ((uVar25 == 0xffffffffffffffff) ||
           (lVar19 = *(long *)(lVar28 + 0x20), uVar25 != 0 && lVar19 == 0)) {
LAB_004c9120:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
        local_c0 = 0;
        local_b0 = (char *)0x0;
        pcStack_a8 = (char *)0x0;
        local_a0 = (char *)0x0;
        if (uVar25 != 0) {
          if (uVar25 >> 0x3d != 0) {
            if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 004c9204 to 004c920b has its CatchHandler @ 004c9274 */
                    /* WARNING: Subroutine does not return */
              FUN_0034e528(&local_b0);
            }
            goto LAB_004c92d4;
          }
                    /* try { // try from 004c8868 to 004c886f has its CatchHandler @ 004c9278 */
          pcStack_a8 = (char *)FUN_00759c3c(uVar25 << 3);
          local_a0 = pcStack_a8 + uVar25 * 8;
        }
        uVar30 = *(ulong *)(local_100 + 8);
        pbVar38 = *(byte **)(local_100 + 0x10);
        if ((*local_100 & 1) == 0) {
          pbVar38 = local_100 + 1;
          uVar30 = (ulong)(*local_100 >> 1);
        }
        local_b0 = pcStack_a8;
        if (uVar30 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          bVar18 = false;
          lVar37 = 0;
          pbVar5 = pbVar38 + uVar30;
          pcVar34 = pcStack_a8;
          do {
            bVar8 = *pbVar38;
            if (bVar8 == 0x2e) {
              if (2 < lVar37) {
                local_78 = "Found a \'.\' not part of an ellipsis in input: ";
                FUN_004cb848(&local_e0,&local_78,&local_b8);
                    /* try { // try from 004c8ebc to 004c8ecf has its CatchHandler @ 004c9254 */
                FUN_0063aa48(param_1,2,2,&local_e0);
                goto joined_r0x004c8f0c;
              }
              lVar37 = lVar37 + 1;
              if (lVar37 == 3) {
                uVar30 = (ulong)(*local_100 >> 1);
                if ((*local_100 & 1) != 0) {
                  uVar30 = *(ulong *)(local_100 + 8);
                }
                lVar37 = (uVar25 - uVar30) + 3;
                if (lVar37 < 0) {
                    /* try { // try from 004c8fb4 to 004c8fbb has its CatchHandler @ 004c9248 */
                  local_d0 = (char *)FUN_00759c3c(0x68);
                  uStack_d8 = _UNK_00200188;
                  local_e0 = _DAT_00200180;
                  uVar12 = s_Einsum_subscripts_string_contain_001d6e73._56_8_;
                  uVar11 = s_Einsum_subscripts_string_contain_001d6e73._48_8_;
                  uVar10 = s_Einsum_subscripts_string_contain_001d6e73._40_8_;
                  uVar16 = s_Einsum_subscripts_string_contain_001d6e73._32_8_;
                  local_d0[0x60] = 'u';
                  local_d0[0x61] = 't';
                  local_d0[0x62] = '\0';
                  *(undefined8 *)(local_d0 + 0x28) = uVar10;
                  *(undefined8 *)(local_d0 + 0x20) = uVar16;
                  *(undefined8 *)(local_d0 + 0x38) = uVar12;
                  *(undefined8 *)(local_d0 + 0x30) = uVar11;
                  uVar11 = s_Einsum_subscripts_string_contain_001d6e73._88_8_;
                  uVar10 = s_Einsum_subscripts_string_contain_001d6e73._80_8_;
                  uVar16 = s_Einsum_subscripts_string_contain_001d6e73._64_8_;
                  *(undefined8 *)(local_d0 + 0x48) =
                       s_Einsum_subscripts_string_contain_001d6e73._72_8_;
                  *(undefined8 *)(local_d0 + 0x40) = uVar16;
                  *(undefined8 *)(local_d0 + 0x58) = uVar11;
                  *(undefined8 *)(local_d0 + 0x50) = uVar10;
                  uVar11 = s_Einsum_subscripts_string_contain_001d6e73._24_8_;
                  uVar10 = s_Einsum_subscripts_string_contain_001d6e73._16_8_;
                  uVar16 = s_Einsum_subscripts_string_contain_001d6e73._0_8_;
                  *(undefined8 *)(local_d0 + 8) = s_Einsum_subscripts_string_contain_001d6e73._8_8_;
                  *(undefined8 *)local_d0 = uVar16;
                  *(undefined8 *)(local_d0 + 0x18) = uVar11;
                  *(undefined8 *)(local_d0 + 0x10) = uVar10;
                    /* try { // try from 004c8ff8 to 004c900b has its CatchHandler @ 004c9240 */
                  FUN_0063aa48(param_1,2,2,&local_e0);
                  goto joined_r0x004c8f0c;
                }
                if (lVar37 == 0) {
                  lVar37 = 3;
                  bVar18 = false;
                }
                else {
                  if (*(long *)(param_2 + 0x68) == 0) {
                    *(long *)(param_2 + 0x68) = lVar37;
                  }
                  else if (*(long *)(param_2 + 0x68) != lVar37) {
                    /* try { // try from 004c9010 to 004c9017 has its CatchHandler @ 004c923c */
                    local_d0 = (char *)FUN_00759c3c(0x48);
                    uVar12 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._48_8_;
                    uVar11 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._32_8_;
                    uVar16 = CONCAT35(s_Ellipsis_must_indicate_a_fixed_n_001fa802._61_3_,
                                      s_Ellipsis_must_indicate_a_fixed_n_001fa802._56_5_);
                    uVar10 = CONCAT53(s_Ellipsis_must_indicate_a_fixed_n_001fa802._64_5_,
                                      s_Ellipsis_must_indicate_a_fixed_n_001fa802._61_3_);
                    uStack_d8 = _UNK_00200268;
                    local_e0 = _DAT_00200260;
                    *(undefined8 *)(local_d0 + 0x28) =
                         s_Ellipsis_must_indicate_a_fixed_n_001fa802._40_8_;
                    *(undefined8 *)(local_d0 + 0x20) = uVar11;
                    *(undefined8 *)(local_d0 + 0x38) = uVar16;
                    *(undefined8 *)(local_d0 + 0x30) = uVar12;
                    uVar13 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._24_8_;
                    uVar12 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._16_8_;
                    uVar11 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._8_8_;
                    uVar16 = s_Ellipsis_must_indicate_a_fixed_n_001fa802._0_8_;
                    *(undefined8 *)(local_d0 + 0x3d) = uVar10;
                    local_d0[0x45] = '\0';
                    *(undefined8 *)(local_d0 + 8) = uVar11;
                    *(undefined8 *)local_d0 = uVar16;
                    *(undefined8 *)(local_d0 + 0x18) = uVar13;
                    *(undefined8 *)(local_d0 + 0x10) = uVar12;
                    /* try { // try from 004c904c to 004c905f has its CatchHandler @ 004c9238 */
                    FUN_0063aa48(param_1,2,2,&local_e0);
                    goto joined_r0x004c8f0c;
                  }
                  uVar30 = 0;
                  pcVar15 = pcVar34;
                  do {
                    pcVar26 = local_b0;
                    if (pcVar15 < local_a0) {
                      pcVar34 = pcVar15 + 8;
                      pcVar15[0] = '4';
                      pcVar15[1] = '\0';
                      pcVar15[2] = '\0';
                      pcVar15[3] = '\0';
                      pcVar15[4] = '\0';
                      pcVar15[5] = '\0';
                      pcVar15[6] = '\0';
                      pcVar15[7] = '\0';
                    }
                    else {
                      sVar33 = (long)pcVar15 - (long)local_b0;
                      lVar37 = (long)sVar33 >> 3;
                      uVar29 = lVar37 + 1;
                      if (uVar29 >> 0x3d != 0) {
                        if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 004c9138 to 004c9157 has its CatchHandler @ 004c92a4 */
                    /* WARNING: Subroutine does not return */
                          FUN_0034e528(&local_b0);
                        }
                        goto LAB_004c92d4;
                      }
                      uVar27 = (long)local_a0 - (long)local_b0 >> 2;
                      if (uVar27 <= uVar29) {
                        uVar27 = uVar29;
                      }
                      if (0x7ffffffffffffff7 < (ulong)((long)local_a0 - (long)local_b0)) {
                        uVar27 = 0x1fffffffffffffff;
                      }
                      if (uVar27 == 0) {
                        pcVar15 = (char *)0x0;
                      }
                      else {
                        if (uVar27 >> 0x3d != 0) {
                          if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                            FUN_002f9ee0();
                          }
                          goto LAB_004c92d4;
                        }
                    /* try { // try from 004c8b00 to 004c8b03 has its CatchHandler @ 004c92a0 */
                        pcVar15 = (char *)FUN_00759c3c(uVar27 << 3);
                      }
                      pcVar6 = pcVar15 + lVar37 * 8;
                      pcVar34 = pcVar6 + 8;
                      pcVar6[0] = '4';
                      pcVar6[1] = '\0';
                      pcVar6[2] = '\0';
                      pcVar6[3] = '\0';
                      pcVar6[4] = '\0';
                      pcVar6[5] = '\0';
                      pcVar6[6] = '\0';
                      pcVar6[7] = '\0';
                      memcpy(pcVar15,pcVar26,sVar33);
                      local_b0 = pcVar15;
                      local_a0 = pcVar15 + uVar27 * 8;
                      if (pcVar26 != (char *)0x0) {
                        pcStack_a8 = pcVar34;
                        free(pcVar26);
                      }
                    }
                    uVar30 = uVar30 + 1;
                    pcVar15 = pcVar34;
                    pcStack_a8 = pcVar34;
                  } while (uVar30 < *(ulong *)(param_2 + 0x68));
                  bVar18 = false;
                  lVar37 = 3;
                  uVar29 = local_c0 + *(ulong *)(param_2 + 0x68);
                  local_c0 = uVar29;
                }
              }
              else {
                bVar18 = true;
              }
            }
            else {
              if (bVar18) {
                local_78 = "Found \'.\' not part of an ellipsis in input: ";
                FUN_004cb848(&local_e0,&local_78,&local_b8);
                    /* try { // try from 004c8e88 to 004c8e9b has its CatchHandler @ 004c9258 */
                FUN_0063aa48(param_1,2,2,&local_e0);
                goto joined_r0x004c8f0c;
              }
              if (bVar8 - 0x61 < 0x1a) {
                lVar20 = -0x61;
              }
              else {
                if (0x19 < bVar8 - 0x41) {
                    /* try { // try from 004c8f58 to 004c8f5f has its CatchHandler @ 004c924c */
                  local_d0 = (char *)FUN_00759c3c(0x60);
                  uVar11 = s_The_only_subscript_labels_allowe_001b885a._56_8_;
                  uVar10 = s_The_only_subscript_labels_allowe_001b885a._48_8_;
                  uVar16 = s_The_only_subscript_labels_allowe_001b885a._32_8_;
                  uStack_d8 = _UNK_00200a08;
                  local_e0 = _DAT_00200a00;
                  *(undefined8 *)(local_d0 + 0x28) =
                       s_The_only_subscript_labels_allowe_001b885a._40_8_;
                  *(undefined8 *)(local_d0 + 0x20) = uVar16;
                  *(undefined8 *)(local_d0 + 0x38) = uVar11;
                  *(undefined8 *)(local_d0 + 0x30) = uVar10;
                  uVar12 = s_The_only_subscript_labels_allowe_001b885a._85_8_;
                  uVar11 = s_The_only_subscript_labels_allowe_001b885a._64_8_;
                  uVar16 = CONCAT35(s_The_only_subscript_labels_allowe_001b885a._77_3_,
                                    s_The_only_subscript_labels_allowe_001b885a._72_5_);
                  uVar10 = CONCAT53(s_The_only_subscript_labels_allowe_001b885a._80_5_,
                                    s_The_only_subscript_labels_allowe_001b885a._77_3_);
                  local_d0[0x5d] = '\0';
                  *(undefined8 *)(local_d0 + 0x48) = uVar16;
                  *(undefined8 *)(local_d0 + 0x40) = uVar11;
                  *(undefined8 *)(local_d0 + 0x55) = uVar12;
                  *(undefined8 *)(local_d0 + 0x4d) = uVar10;
                  uVar11 = s_The_only_subscript_labels_allowe_001b885a._24_8_;
                  uVar10 = s_The_only_subscript_labels_allowe_001b885a._16_8_;
                  uVar16 = s_The_only_subscript_labels_allowe_001b885a._0_8_;
                  *(undefined8 *)(local_d0 + 8) = s_The_only_subscript_labels_allowe_001b885a._8_8_;
                  *(undefined8 *)local_d0 = uVar16;
                  *(undefined8 *)(local_d0 + 0x18) = uVar11;
                  *(undefined8 *)(local_d0 + 0x10) = uVar10;
                    /* try { // try from 004c8f9c to 004c8faf has its CatchHandler @ 004c9244 */
                  FUN_0063aa48(param_1,2,2,&local_e0);
                  goto joined_r0x004c8f0c;
                }
                lVar20 = -0x27;
              }
              if (uVar25 <= uVar29) goto LAB_004c9120;
              lVar20 = lVar20 + (ulong)bVar8;
              lVar35 = *(long *)(lVar19 + uVar29 * 8);
              if (*(long *)(lVar3 + lVar20 * 8) == 0) {
                lVar21 = *(long *)(param_2 + 0xa8);
                *(long *)(param_2 + 0xa8) = lVar21 + 1;
                *(long *)(lVar4 + lVar20 * 8) = lVar21;
                plVar17 = *(long **)(param_2 + 0x410);
                if (plVar17 < *(long **)(param_2 + 0x418)) {
                  *plVar17 = lVar35;
                  plVar36 = *(long **)(param_2 + 0x3f8);
                  plVar22 = *(long **)(param_2 + 0x400);
                  *(long **)(param_2 + 0x410) = plVar17 + 1;
                  if (plVar36 < plVar22) {
LAB_004c8a0c:
                    plVar17 = plVar36 + 1;
                    *plVar36 = local_b8;
                  }
                  else {
LAB_004c8bb8:
                    pcVar34 = *ppcVar1;
                    lVar35 = (long)plVar36 - (long)pcVar34 >> 3;
                    uVar30 = lVar35 + 1;
                    local_118 = ppcVar1;
                    if (uVar30 >> 0x3d != 0) goto LAB_004c9214;
                    uVar27 = (long)plVar22 - (long)pcVar34 >> 2;
                    if (uVar27 <= uVar30) {
                      uVar27 = uVar30;
                    }
                    if (0x7ffffffffffffff7 < (ulong)((long)plVar22 - (long)pcVar34)) {
                      uVar27 = 0x1fffffffffffffff;
                    }
                    if (uVar27 == 0) {
                      pvVar31 = (void *)0x0;
                    }
                    else {
                      if (uVar27 >> 0x3d != 0) goto LAB_004c9198;
                    /* try { // try from 004c8c04 to 004c8c07 has its CatchHandler @ 004c9294 */
                      pvVar31 = (void *)FUN_00759c3c(uVar27 << 3);
                    }
                    plVar22 = (long *)((long)pvVar31 + lVar35 * 8);
                    plVar17 = plVar22 + 1;
                    *plVar22 = local_b8;
                    memcpy(pvVar31,pcVar34,(long)plVar36 - (long)pcVar34);
                    *(void **)(param_2 + 0x3f0) = pvVar31;
                    *(long **)(param_2 + 0x3f8) = plVar17;
                    *(void **)(param_2 + 0x400) = (void *)((long)pvVar31 + uVar27 * 8);
                    if (pcVar34 != (char *)0x0) {
                      free(pcVar34);
                    }
                  }
                  *(long **)(param_2 + 0x3f8) = plVar17;
                  pcVar15 = pcStack_a8;
                  goto LAB_004c8c5c;
                }
                pcVar34 = *ppcVar2;
                lVar21 = (long)plVar17 - (long)pcVar34 >> 3;
                uVar30 = lVar21 + 1;
                local_118 = ppcVar2;
                if (uVar30 >> 0x3d == 0) {
                  uVar23 = (long)*(long **)(param_2 + 0x418) - (long)pcVar34;
                  uVar27 = (long)uVar23 >> 2;
                  if (uVar27 <= uVar30) {
                    uVar27 = uVar30;
                  }
                  if (0x7ffffffffffffff7 < uVar23) {
                    uVar27 = 0x1fffffffffffffff;
                  }
                  if (uVar27 == 0) {
                    pvVar31 = (void *)0x0;
LAB_004c8b68:
                    plVar22 = (long *)((long)pvVar31 + lVar21 * 8);
                    plVar32 = plVar22 + 1;
                    *plVar22 = lVar35;
                    memcpy(pvVar31,pcVar34,(long)plVar17 - (long)pcVar34);
                    *(void **)(param_2 + 0x408) = pvVar31;
                    *(long **)(param_2 + 0x410) = plVar32;
                    *(void **)(param_2 + 0x418) = (void *)((long)pvVar31 + uVar27 * 8);
                    if (pcVar34 != (char *)0x0) {
                      free(pcVar34);
                    }
                    plVar36 = *(long **)(param_2 + 0x3f8);
                    plVar22 = *(long **)(param_2 + 0x400);
                    *(long **)(param_2 + 0x410) = plVar32;
                    if (plVar36 < plVar22) goto LAB_004c8a0c;
                    goto LAB_004c8bb8;
                  }
                  if (uVar27 >> 0x3d == 0) {
                    /* try { // try from 004c8a64 to 004c8a67 has its CatchHandler @ 004c9294 */
                    pvVar31 = (void *)FUN_00759c3c(uVar27 << 3);
                    goto LAB_004c8b68;
                  }
LAB_004c9198:
                  if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c91ac to 004c91af has its CatchHandler @ 004c929c */
                    FUN_002f9ee0();
                  }
                }
                else {
LAB_004c9214:
                  if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 004c9228 to 004c922f has its CatchHandler @ 004c929c */
                    /* WARNING: Subroutine does not return */
                    FUN_0034e528(local_118);
                  }
                }
                goto LAB_004c92d4;
              }
              lVar21 = *(long *)(lVar4 + lVar20 * 8);
              if (lVar21 < 0) {
                plVar17 = (long *)FUN_00753a74(8);
                *plVar17 = (long)(PTR_DAT_007a1ef8 + 0x10);
                if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 004c9184 to 004c9197 has its CatchHandler @ 004c9298 */
                    /* WARNING: Subroutine does not return */
                  FUN_00753c5c(plVar17,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
                }
                goto LAB_004c92d4;
              }
              lVar21 = lVar21 * 8;
              *(long *)(*ppcVar1 + lVar21) = local_b8;
              pcVar26 = *ppcVar2;
              pcVar15 = pcVar34;
              if (*(long *)(pcVar26 + lVar21) != lVar35) {
                if (*(long *)(pcVar26 + lVar21) == 1) {
                  *(long *)(pcVar26 + lVar21) = lVar35;
                }
                else if (lVar35 != 1) {
                  local_80 = " is incompatible in the dimension ";
                  local_78 = 
                  "Einsum operands could not be broadcast together. Please check input shapes/equation provided.Input shape of operand "
                  ;
                  local_90 = "Another operand has a dim value of ";
                  pcStack_88 = ". The shape is: ";
                  local_98 = " in the same dimension";
                  FUN_004cba00(&local_e0,&local_78,&local_b8,&local_80,&local_c0,&pcStack_88,
                               lVar28 + 0x18,&local_90,pcVar26 + lVar21,&local_98);
                    /* try { // try from 004c9108 to 004c911b has its CatchHandler @ 004c9230 */
                  FUN_0063aa48(param_1,2,2,&local_e0);
                  goto joined_r0x004c8f0c;
                }
              }
LAB_004c8c5c:
              pcVar26 = local_b0;
              *(long *)(lVar3 + lVar20 * 8) = *(long *)(lVar3 + lVar20 * 8) + 1;
              if (pcVar15 < local_a0) {
                pcVar34 = pcVar15 + 8;
                *(undefined8 *)pcVar15 = *(undefined8 *)(lVar4 + lVar20 * 8);
                uVar29 = local_c0;
              }
              else {
                sVar33 = (long)pcVar15 - (long)local_b0;
                lVar35 = (long)sVar33 >> 3;
                uVar30 = lVar35 + 1;
                if (uVar30 >> 0x3d != 0) {
                  local_118 = &local_b0;
                  goto LAB_004c9214;
                }
                uVar27 = (long)local_a0 - (long)local_b0 >> 2;
                if (uVar27 <= uVar30) {
                  uVar27 = uVar30;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_a0 - (long)local_b0)) {
                  uVar27 = 0x1fffffffffffffff;
                }
                if (uVar27 == 0) {
                  pcVar15 = (char *)0x0;
                }
                else {
                  if (uVar27 >> 0x3d != 0) goto LAB_004c9198;
                    /* try { // try from 004c8cf0 to 004c8cf3 has its CatchHandler @ 004c9294 */
                  pcVar15 = (char *)FUN_00759c3c(uVar27 << 3);
                }
                pcVar34 = pcVar15 + lVar35 * 8 + 8;
                *(undefined8 *)(pcVar15 + lVar35 * 8) = *(undefined8 *)(lVar4 + lVar20 * 8);
                memcpy(pcVar15,pcVar26,sVar33);
                local_b0 = pcVar15;
                local_a0 = pcVar15 + uVar27 * 8;
                if (pcVar26 != (char *)0x0) {
                  pcStack_a8 = pcVar34;
                  free(pcVar26);
                }
              }
              uVar29 = uVar29 + 1;
              pcStack_a8 = pcVar34;
              local_c0 = uVar29;
              if (uVar25 < uVar29) {
                local_78 = 
                "Einsum subscripts string contains too many subscript labels when compared to the rank of the input "
                ;
                FUN_004cb848(&local_e0,&local_78,&local_b8);
                    /* try { // try from 004c8ef0 to 004c8f03 has its CatchHandler @ 004c9250 */
                FUN_0063aa48(param_1,2,2,&local_e0);
                goto joined_r0x004c8f0c;
              }
              bVar18 = false;
            }
            pbVar38 = pbVar38 + 1;
          } while (pbVar38 != pbVar5);
        }
        if ((*(long *)(param_2 + 0x68) == 0) && (uVar29 != uVar25)) {
          local_78 = 
          "Einsum subscripts does not contain enough subscript labels and there is no ellipsis for input "
          ;
          FUN_004cb848(&local_e0,&local_78,&local_b8);
                    /* try { // try from 004c9080 to 004c9093 has its CatchHandler @ 004c9234 */
          FUN_0063aa48(param_1,2,2,&local_e0);
joined_r0x004c8f0c:
          if ((local_e0 & 1) != 0) {
            free(local_d0);
          }
          if (local_b0 == (char *)0x0) goto LAB_004c8f28;
          pcStack_a8 = local_b0;
          pcVar34 = local_b0;
          goto LAB_004c8f24;
        }
        puVar24 = *(undefined8 **)(param_2 + 0x460);
        if (puVar24 < *(undefined8 **)(param_2 + 0x468)) {
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[1] = pcStack_a8;
          *puVar24 = local_b0;
          puVar24[2] = local_a0;
          local_b8 = local_b8 + 1;
          *(undefined8 **)(param_2 + 0x460) = puVar24 + 3;
        }
        else {
                    /* try { // try from 004c8dbc to 004c8dc7 has its CatchHandler @ 004c9270 */
          uVar16 = FUN_004cbd20(param_2 + 0x458,&local_b0);
          *(undefined8 *)(param_2 + 0x460) = uVar16;
          local_b8 = local_b8 + 1;
          if (local_b0 != (char *)0x0) {
            pcStack_a8 = local_b0;
            free(local_b0);
          }
        }
        local_100 = local_100 + 0x18;
      } while (local_100 != pbVar7);
    }
    *param_1 = 0;
  }
  else {
    local_a0 = (char *)FUN_00759c3c(0x58);
    pcStack_a8 = _UNK_00200938;
    local_b0 = _DAT_00200930;
    local_a0[0x50] = 's';
    uVar13 = s_Number_of_subscripts_in_the_inpu_001c41bf._72_8_;
    uVar12 = s_Number_of_subscripts_in_the_inpu_001c41bf._64_8_;
    uVar11 = s_Number_of_subscripts_in_the_inpu_001c41bf._56_8_;
    uVar10 = s_Number_of_subscripts_in_the_inpu_001c41bf._48_8_;
    uVar16 = s_Number_of_subscripts_in_the_inpu_001c41bf._32_8_;
    local_a0[0x51] = '\0';
    *(undefined8 *)(local_a0 + 0x28) = s_Number_of_subscripts_in_the_inpu_001c41bf._40_8_;
    *(undefined8 *)(local_a0 + 0x20) = uVar16;
    *(undefined8 *)(local_a0 + 0x38) = uVar11;
    *(undefined8 *)(local_a0 + 0x30) = uVar10;
    *(undefined8 *)(local_a0 + 0x48) = uVar13;
    *(undefined8 *)(local_a0 + 0x40) = uVar12;
    uVar11 = s_Number_of_subscripts_in_the_inpu_001c41bf._24_8_;
    uVar10 = s_Number_of_subscripts_in_the_inpu_001c41bf._16_8_;
    uVar16 = s_Number_of_subscripts_in_the_inpu_001c41bf._0_8_;
    *(undefined8 *)(local_a0 + 8) = s_Number_of_subscripts_in_the_inpu_001c41bf._8_8_;
    *(undefined8 *)local_a0 = uVar16;
    *(undefined8 *)(local_a0 + 0x18) = uVar11;
    *(undefined8 *)(local_a0 + 0x10) = uVar10;
                    /* try { // try from 004c8e48 to 004c8e5b has its CatchHandler @ 004c927c */
    FUN_0063aa48(param_1,2,2,&local_b0);
    pcVar34 = local_a0;
    if (((ulong)local_b0 & 1) != 0) {
LAB_004c8f24:
      free(pcVar34);
    }
  }
LAB_004c8f28:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
LAB_004c92d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c92d8  FUN_004c92d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c92d8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  void *pvVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  size_t sVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  ulong local_110;
  undefined8 uStack_108;
  char *local_100;
  ulong *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar17 = *(long *)(param_2 + 0x68);
  if (lVar17 != 0) {
    lVar9 = 0;
    uVar23 = *(long *)(param_2 + 0xa8) + lVar17;
    *(ulong *)(param_2 + 0xa8) = uVar23;
    do {
      lVar12 = *(long *)(param_2 + 0x250 + lVar9);
      if (lVar12 != -1) {
        *(long *)(param_2 + 0x250 + lVar9) = lVar12 + lVar17;
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != 0x1a0);
    if ((long)uVar23 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
        plVar24 = (long *)FUN_00753a74(8);
        *plVar24 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(plVar24,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
      }
      goto LAB_004c9d4c;
    }
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    if (uVar23 == 0) {
      pvVar18 = (void *)0x0;
      pvVar5 = (void *)0x0;
      pvVar6 = *(void **)(param_2 + 0x3f0);
      lVar9 = *(long *)(param_2 + 0x3f8) - (long)pvVar6;
      if (lVar9 != 0) goto LAB_004c939c;
LAB_004c9408:
      if (pvVar6 != (void *)0x0) goto LAB_004c9454;
      *(void **)(param_2 + 0x3f0) = pvVar5;
      *(void **)(param_2 + 0x3f8) = pvVar18;
      *(void **)(param_2 + 0x400) = pvVar18;
    }
    else {
      if (uVar23 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c9bc8 to 004c9bcf has its CatchHandler @ 004c9c3c */
                    /* WARNING: Subroutine does not return */
          FUN_0034e528(&local_88);
        }
        goto LAB_004c9d4c;
      }
                    /* try { // try from 004c9370 to 004c9377 has its CatchHandler @ 004c9c3c */
      pvVar5 = (void *)FUN_00759c3c(uVar23 * 8);
      pvVar18 = (void *)((long)pvVar5 + uVar23 * 8);
      memset(pvVar5,0xff,uVar23 * 8);
      pvVar6 = *(void **)(param_2 + 0x3f0);
      lVar9 = *(long *)(param_2 + 0x3f8) - (long)pvVar6;
      if (lVar9 == 0) goto LAB_004c9408;
LAB_004c939c:
      uVar10 = lVar9 >> 3;
      uVar23 = uVar10;
      if (uVar10 < 2) {
        uVar23 = 1;
      }
      if ((uVar10 < 8) || ((ulong)((long)pvVar5 + (lVar17 * 8 - (long)pvVar6)) < 0x20)) {
        uVar10 = 0;
LAB_004c93c8:
        lVar9 = uVar23 - uVar10;
        puVar11 = (undefined8 *)((long)pvVar6 + uVar10 * 8);
        puVar13 = (undefined8 *)((long)pvVar5 + uVar10 * 8 + lVar17 * 8);
        do {
          lVar9 = lVar9 + -1;
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar9 != 0);
      }
      else {
        uVar10 = uVar23 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)((long)pvVar6 + 0x10);
        puVar13 = (undefined8 *)((long)pvVar5 + lVar17 * 8 + 0x10);
        uVar19 = uVar10;
        do {
          puVar3 = puVar11 + -1;
          uVar8 = puVar11[-2];
          uVar26 = puVar11[1];
          uVar25 = *puVar11;
          uVar19 = uVar19 - 4;
          puVar11 = puVar11 + 4;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar8;
          puVar13[1] = uVar26;
          *puVar13 = uVar25;
          puVar13 = puVar13 + 4;
        } while (uVar19 != 0);
        if (uVar23 != uVar10) goto LAB_004c93c8;
      }
LAB_004c9454:
      *(void **)(param_2 + 0x3f8) = pvVar6;
      free(pvVar6);
      uVar23 = *(ulong *)(param_2 + 0xa8);
      *(void **)(param_2 + 0x3f0) = pvVar5;
      *(void **)(param_2 + 0x3f8) = pvVar18;
      *(void **)(param_2 + 0x400) = pvVar18;
      local_80 = 0;
      local_78 = 0;
      local_88 = 0;
      if ((long)uVar23 < 0) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
          plVar24 = (long *)FUN_00753a74(8);
          *plVar24 = (long)(PTR_DAT_007a1ef8 + 0x10);
                    /* try { // try from 004c9ba4 to 004c9bb7 has its CatchHandler @ 004c9c20 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar24,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_004c9d4c;
      }
    }
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    if (uVar23 == 0) {
      pvVar18 = (void *)0x0;
      pvVar5 = (void *)0x0;
      pvVar6 = *(void **)(param_2 + 0x408);
      lVar17 = *(long *)(param_2 + 0x410) - (long)pvVar6;
      if (lVar17 != 0) goto LAB_004c94c0;
LAB_004c9534:
      if (pvVar6 != (void *)0x0) goto LAB_004c956c;
    }
    else {
      if (uVar23 >> 0x3d != 0) {
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c9be0 to 004c9be7 has its CatchHandler @ 004c9c28 */
                    /* WARNING: Subroutine does not return */
          FUN_0034e528(&local_a0);
        }
        goto LAB_004c9d4c;
      }
                    /* try { // try from 004c9490 to 004c9497 has its CatchHandler @ 004c9c28 */
      pvVar5 = (void *)FUN_00759c3c(uVar23 << 3);
      pvVar18 = (void *)((long)pvVar5 + uVar23 * 8);
      memset(pvVar5,0xff,uVar23 << 3);
      pvVar6 = *(void **)(param_2 + 0x408);
      lVar17 = *(long *)(param_2 + 0x410) - (long)pvVar6;
      if (lVar17 == 0) goto LAB_004c9534;
LAB_004c94c0:
      uVar10 = lVar17 >> 3;
      lVar17 = *(long *)(param_2 + 0x68);
      uVar23 = uVar10;
      if (uVar10 < 2) {
        uVar23 = 1;
      }
      if ((uVar10 < 8) || ((ulong)((long)pvVar5 + (lVar17 * 8 - (long)pvVar6)) < 0x20)) {
        uVar10 = 0;
LAB_004c94f0:
        lVar9 = uVar23 - uVar10;
        puVar11 = (undefined8 *)((long)pvVar5 + uVar10 * 8 + lVar17 * 8);
        puVar13 = (undefined8 *)((long)pvVar6 + uVar10 * 8);
        do {
          lVar9 = lVar9 + -1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar9 != 0);
      }
      else {
        uVar10 = uVar23 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)((long)pvVar6 + 0x10);
        puVar13 = (undefined8 *)((long)pvVar5 + lVar17 * 8 + 0x10);
        uVar19 = uVar10;
        do {
          puVar3 = puVar11 + -1;
          uVar8 = puVar11[-2];
          uVar26 = puVar11[1];
          uVar25 = *puVar11;
          uVar19 = uVar19 - 4;
          puVar11 = puVar11 + 4;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar8;
          puVar13[1] = uVar26;
          *puVar13 = uVar25;
          puVar13 = puVar13 + 4;
        } while (uVar19 != 0);
        if (uVar23 != uVar10) goto LAB_004c94f0;
      }
LAB_004c956c:
      *(void **)(param_2 + 0x410) = pvVar6;
      free(pvVar6);
      *(undefined8 *)(param_2 + 0x408) = 0;
      *(undefined8 *)(param_2 + 0x410) = 0;
      *(undefined8 *)(param_2 + 0x418) = 0;
    }
    lVar17 = *(long *)(param_2 + 0x458);
    *(void **)(param_2 + 0x408) = pvVar5;
    *(void **)(param_2 + 0x410) = pvVar18;
    *(void **)(param_2 + 0x418) = pvVar18;
    local_98 = 0;
    local_90 = 0;
    local_a0 = 0;
    if (*(long *)(param_2 + 0x460) != lVar17) {
      uVar23 = 0;
      do {
        local_b8 = (ulong *)0x0;
        local_b0 = (ulong *)0x0;
        plVar24 = (long *)(lVar17 + uVar23 * 0x18);
        local_a8 = (ulong *)0x0;
        lVar17 = plVar24[1] - *plVar24;
        if (lVar17 == 0) {
          lVar17 = *(long *)(**(long **)(param_2 + 0x70) + uVar23 * 8);
          uVar10 = *(ulong *)(lVar17 + 0x18);
        }
        else {
          if (lVar17 < 0) {
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c9b38 to 004c9b3f has its CatchHandler @ 004c9c78 */
                    /* WARNING: Subroutine does not return */
              FUN_0034e528(&local_b8);
            }
            goto LAB_004c9d4c;
          }
                    /* try { // try from 004c960c to 004c9613 has its CatchHandler @ 004c9c7c */
          local_b8 = (ulong *)FUN_00759c3c(lVar17);
          local_a8 = (ulong *)((long)local_b8 + lVar17);
          lVar17 = *(long *)(**(long **)(param_2 + 0x70) + uVar23 * 8);
          uVar10 = *(ulong *)(lVar17 + 0x18);
        }
        local_b0 = local_b8;
        if ((uVar10 == 0xffffffffffffffff) ||
           (lVar17 = *(long *)(lVar17 + 0x20), local_b0 = local_b8, uVar10 != 0 && lVar17 == 0)) {
LAB_004c99a4:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
        pvVar18 = (void *)*plVar24;
        if ((void *)plVar24[1] == pvVar18) {
          uVar19 = 0;
          pvVar18 = (void *)plVar24[1];
          local_b0 = local_b8;
        }
        else {
          uVar16 = 0;
          uVar19 = 0;
          local_b0 = local_b8;
LAB_004c96ac:
          do {
            while( true ) {
              puVar20 = local_b8;
              lVar9 = *(long *)((long)pvVar18 + uVar19 * 8);
              if (lVar9 != 0x34) break;
              if (*(ulong *)(param_2 + 0x68) <= uVar16) {
                uVar8 = FUN_00753a74(0x88);
                    /* try { // try from 004c99b4 to 004c99bb has its CatchHandler @ 004c9d04 */
                FUN_00645c30(auStack_128);
                    /* try { // try from 004c99bc to 004c99db has its CatchHandler @ 004c9ce8 */
                FUN_0047488c(&local_110,
                             "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                             ,0x10a,
                             "Status onnxruntime::EinsumComputePreprocessor::PostProcessBroadcastedDims()"
                             ,auStack_128);
                FUN_00476720(auStack_140);
                    /* try { // try from 004c99e8 to 004c9a2f has its CatchHandler @ 004c9c80 */
                FUN_00474a40(uVar8,&local_110,"num_broadcasted_indices < num_of_ellipsis_dims_",
                             auStack_140);
                if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                  FUN_00753c5c(uVar8,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
                }
                goto LAB_004c9d4c;
              }
              if (local_b0 < local_a8) {
                puVar21 = local_b0 + 1;
                *local_b0 = uVar16;
              }
              else {
                sVar22 = (long)local_b0 - (long)local_b8;
                lVar9 = (long)sVar22 >> 3;
                uVar1 = lVar9 + 1;
                if (uVar1 >> 0x3d != 0) {
                  if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c9a48 to 004c9a4f has its CatchHandler @ 004c9d24 */
                    /* WARNING: Subroutine does not return */
                    FUN_0034e528(&local_b8);
                  }
                  goto LAB_004c9d4c;
                }
                uVar15 = (long)local_a8 - (long)local_b8 >> 2;
                if (uVar15 <= uVar1) {
                  uVar15 = uVar1;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_a8 - (long)local_b8)) {
                  uVar15 = 0x1fffffffffffffff;
                }
                if (uVar15 == 0) {
                  puVar7 = (ulong *)0x0;
                }
                else {
                  if (uVar15 >> 0x3d != 0) {
                    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c9a80 to 004c9a83 has its CatchHandler @ 004c9d24 */
                      FUN_002f9ee0();
                    }
                    goto LAB_004c9d4c;
                  }
                    /* try { // try from 004c979c to 004c979f has its CatchHandler @ 004c9d00 */
                  puVar7 = (ulong *)FUN_00759c3c(uVar15 << 3);
                }
                puVar21 = puVar7 + lVar9 + 1;
                puVar7[lVar9] = uVar16;
                memcpy(puVar7,puVar20,sVar22);
                local_b8 = puVar7;
                local_a8 = puVar7 + uVar15;
                if (puVar20 != (ulong *)0x0) {
                  local_b0 = puVar21;
                  free(puVar20);
                }
              }
              *(ulong *)(*(long *)(param_2 + 0x3f0) + uVar16 * 8) = uVar23;
              lVar9 = *(long *)(*(long *)(param_2 + 0x408) + uVar16 * 8);
              local_b0 = puVar21;
              if (lVar9 == -1) {
                if (uVar10 <= uVar19) goto LAB_004c99a4;
                lVar12 = *(long *)(lVar17 + uVar19 * 8);
LAB_004c98b0:
                *(long *)(*(long *)(param_2 + 0x408) + uVar16 * 8) = lVar12;
              }
              else {
                if (uVar10 <= uVar19) goto LAB_004c99a4;
                lVar12 = *(long *)(lVar17 + uVar19 * 8);
                if (lVar9 != lVar12) {
                  if (lVar9 == 1) goto LAB_004c98b0;
                  if (lVar12 != 1) {
                    /* try { // try from 004c9930 to 004c9937 has its CatchHandler @ 004c9c0c */
                    local_100 = (char *)FUN_00759c3c(0x40);
                    uVar26 = s_The_broadcasted_dimensions_of_th_001c826e._24_8_;
                    uVar25 = s_The_broadcasted_dimensions_of_th_001c826e._16_8_;
                    uVar8 = s_The_broadcasted_dimensions_of_th_001c826e._0_8_;
                    uStack_108 = _UNK_00200398;
                    local_110 = _DAT_00200390;
                    *(undefined8 *)(local_100 + 8) =
                         s_The_broadcasted_dimensions_of_th_001c826e._8_8_;
                    *(undefined8 *)local_100 = uVar8;
                    *(undefined8 *)(local_100 + 0x18) = uVar26;
                    *(undefined8 *)(local_100 + 0x10) = uVar25;
                    uVar4 = s_The_broadcasted_dimensions_of_th_001c826e._49_8_;
                    uVar26 = s_The_broadcasted_dimensions_of_th_001c826e._32_8_;
                    uVar8 = CONCAT71(s_The_broadcasted_dimensions_of_th_001c826e._41_7_,
                                     s_The_broadcasted_dimensions_of_th_001c826e[0x28]);
                    uVar25 = CONCAT17(s_The_broadcasted_dimensions_of_th_001c826e[0x30],
                                      s_The_broadcasted_dimensions_of_th_001c826e._41_7_);
                    local_100[0x39] = '\0';
                    *(undefined8 *)(local_100 + 0x28) = uVar8;
                    *(undefined8 *)(local_100 + 0x20) = uVar26;
                    *(undefined8 *)(local_100 + 0x31) = uVar4;
                    *(undefined8 *)(local_100 + 0x29) = uVar25;
                    /* try { // try from 004c996c to 004c997f has its CatchHandler @ 004c9be8 */
                    FUN_0063aa48(param_1,2,2,&local_110);
                    if ((local_110 & 1) != 0) {
                      free(local_100);
                    }
                    if (local_b8 != (ulong *)0x0) {
                      local_b0 = local_b8;
                      free(local_b8);
                    }
                    goto LAB_004c9900;
                  }
                }
              }
              uVar16 = uVar16 + 1;
              pvVar18 = (void *)*plVar24;
              uVar19 = uVar19 + 1;
              if ((ulong)(plVar24[1] - (long)pvVar18 >> 3) <= uVar19) goto LAB_004c98d4;
            }
            uVar1 = *(ulong *)(param_2 + 0x68) + lVar9;
            if (local_a8 <= local_b0) {
              sVar22 = (long)local_b0 - (long)local_b8;
              lVar9 = (long)sVar22 >> 3;
              uVar15 = lVar9 + 1;
              if (uVar15 >> 0x3d != 0) {
                if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004c9a64 to 004c9a6b has its CatchHandler @ 004c9d20 */
                    /* WARNING: Subroutine does not return */
                  FUN_0034e528(&local_b8);
                }
                goto LAB_004c9d4c;
              }
              uVar14 = (long)local_a8 - (long)local_b8 >> 2;
              if (uVar14 <= uVar15) {
                uVar14 = uVar15;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)local_a8 - (long)local_b8)) {
                uVar14 = 0x1fffffffffffffff;
              }
              if (uVar14 == 0) {
                puVar7 = (ulong *)0x0;
              }
              else {
                if (uVar14 >> 0x3d != 0) {
                  if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c9a98 to 004c9a9b has its CatchHandler @ 004c9d20 */
                    FUN_002f9ee0();
                  }
                  goto LAB_004c9d4c;
                }
                    /* try { // try from 004c9740 to 004c9743 has its CatchHandler @ 004c9cfc */
                puVar7 = (ulong *)FUN_00759c3c(uVar14 << 3);
              }
              puVar21 = puVar7 + lVar9 + 1;
              puVar7[lVar9] = uVar1;
              memcpy(puVar7,puVar20,sVar22);
              local_b8 = puVar7;
              local_a8 = puVar7 + uVar14;
              if (puVar20 != (ulong *)0x0) {
                local_b0 = puVar21;
                free(puVar20);
              }
              pvVar18 = (void *)*plVar24;
              uVar19 = uVar19 + 1;
              local_b0 = puVar21;
              if ((ulong)(plVar24[1] - (long)pvVar18 >> 3) <= uVar19) break;
              goto LAB_004c96ac;
            }
            puVar20 = local_b0 + 1;
            *local_b0 = uVar1;
            pvVar18 = (void *)*plVar24;
            uVar19 = uVar19 + 1;
            local_b0 = puVar20;
          } while (uVar19 < (ulong)(plVar24[1] - (long)pvVar18 >> 3));
        }
LAB_004c98d4:
        if (uVar19 != uVar10) {
          uVar8 = FUN_00753a74(0x88);
                    /* try { // try from 004c9aa8 to 004c9aaf has its CatchHandler @ 004c9c74 */
          FUN_00645c30(auStack_128);
                    /* try { // try from 004c9ab0 to 004c9acf has its CatchHandler @ 004c9c70 */
          FUN_0047488c(&local_110,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/providers/cpu/math/einsum_utils/einsum_compute_preprocessor.cc"
                       ,0x126,
                       "Status onnxruntime::EinsumComputePreprocessor::PostProcessBroadcastedDims()"
                       ,auStack_128);
          FUN_00476720(auStack_140);
                    /* try { // try from 004c9adc to 004c9b23 has its CatchHandler @ 004c9c6c */
          FUN_00474a40(uVar8,&local_110,"dim_iter == rank",auStack_140);
          if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar8,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_004c9d4c;
        }
        if (pvVar18 != (void *)0x0) {
          plVar24[1] = (long)pvVar18;
          free(pvVar18);
          *plVar24 = 0;
          plVar24[1] = 0;
          plVar24[2] = 0;
        }
        uVar23 = uVar23 + 1;
        *plVar24 = (long)local_b8;
        plVar24[1] = (long)local_b0;
        plVar24[2] = (long)local_a8;
        lVar17 = *(long *)(param_2 + 0x458);
      } while (uVar23 < (ulong)((*(long *)(param_2 + 0x460) - lVar17 >> 3) * -0x5555555555555555));
    }
  }
  *param_1 = 0;
LAB_004c9900:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_004c9d4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9d50  FUN_004c9d50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9d50(undefined8 *param_1,long param_2)

{
  short *psVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  bool bVar10;
  void *__s;
  short *psVar11;
  ulong uVar12;
  long lVar13;
  char cVar14;
  char local_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 local_178;
  ulong local_170 [2];
  char *local_160;
  undefined **appuStack_158 [8];
  byte local_118;
  void *local_108;
  undefined1 auStack_f0 [152];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_2 + 0x60) == '\0') {
    FUN_00303c58(local_170);
    if (*(long *)(param_2 + 0x68) != 0) {
                    /* try { // try from 004c9e10 to 004c9e23 has its CatchHandler @ 004c9fb4 */
      FUN_00303e0c(&local_160,&DAT_001cec6d,3);
    }
    lVar13 = 0;
    cVar14 = '\0';
    do {
      if (*(long *)(param_2 + 0xb0 + lVar13) == 1) {
        local_188 = cVar14 + 'a';
                    /* try { // try from 004c9e58 to 004c9e67 has its CatchHandler @ 004c9fd4 */
        FUN_00303e0c(&local_160,&local_188,1);
      }
      lVar13 = lVar13 + 8;
      cVar14 = cVar14 + '\x01';
    } while (lVar13 != 0x1a0);
                    /* try { // try from 004c9e70 to 004c9e7b has its CatchHandler @ 004c9fd0 */
    FUN_00718470(&local_188,appuStack_158);
    if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
      free(*(void **)(param_2 + 0x58));
    }
    puVar9 = PTR_PTR_007a10f0;
    *param_1 = 0;
    *(undefined8 *)(param_2 + 0x58) = local_178;
    local_170[0] = *(ulong *)puVar9;
    *(undefined8 *)(param_2 + 0x50) = uStack_180;
    *(ulong *)(param_2 + 0x48) = CONCAT71(uStack_187,local_188);
    pcVar3 = *(char **)(puVar9 + 0x48);
    *(undefined8 *)((long)local_170 + *(long *)(local_170[0] - 0x18)) =
         *(undefined8 *)(puVar9 + 0x40);
    appuStack_158[0] = &PTR_FUN_0079be30;
    local_160 = pcVar3;
    if ((local_118 & 1) != 0) {
      free(local_108);
    }
    FUN_00716098(appuStack_158);
    FUN_00717d80(local_170,puVar9 + 8);
    thunk_FUN_00715e00(auStack_f0);
  }
  else if (*(long *)(param_2 + 0x68) == 0) {
LAB_004c9f18:
    *param_1 = 0;
  }
  else {
    bVar10 = (*(byte *)(param_2 + 0x48) & 1) != 0;
    uVar12 = (ulong)(*(byte *)(param_2 + 0x48) >> 1);
    if (bVar10) {
      uVar12 = *(ulong *)(param_2 + 0x50);
    }
    pvVar2 = (void *)(param_2 + 0x49);
    if (bVar10) {
      pvVar2 = *(void **)(param_2 + 0x58);
    }
    if (2 < (long)uVar12) {
      psVar1 = (short *)((long)pvVar2 + uVar12);
      __s = pvVar2;
      while (psVar11 = (short *)memchr(__s,0x2e,uVar12 - 2), psVar11 != (short *)0x0) {
        if (*psVar11 == 0x2e2e && (char)psVar11[1] == '.') {
          if ((psVar11 != psVar1) && ((long)psVar11 - (long)pvVar2 != -1)) goto LAB_004c9f18;
          break;
        }
        __s = (void *)((long)psVar11 + 1);
        uVar12 = (long)psVar1 - (long)__s;
        if ((long)uVar12 < 3) break;
      }
    }
    local_160 = (char *)FUN_00759c3c(0x60);
    uVar7 = s_Inputs_have_ellipses_in_them_but_001dd3eb._56_8_;
    uVar6 = s_Inputs_have_ellipses_in_them_but_001dd3eb._48_8_;
    uVar5 = s_Inputs_have_ellipses_in_them_but_001dd3eb._32_8_;
    local_170[1] = _UNK_002007a8;
    local_170[0] = _DAT_002007a0;
    *(undefined8 *)(local_160 + 0x28) = s_Inputs_have_ellipses_in_them_but_001dd3eb._40_8_;
    *(undefined8 *)(local_160 + 0x20) = uVar5;
    *(undefined8 *)(local_160 + 0x38) = uVar7;
    *(undefined8 *)(local_160 + 0x30) = uVar6;
    uVar8 = s_Inputs_have_ellipses_in_them_but_001dd3eb._83_8_;
    uVar7 = s_Inputs_have_ellipses_in_them_but_001dd3eb._64_8_;
    uVar5 = CONCAT53(s_Inputs_have_ellipses_in_them_but_001dd3eb._75_5_,
                     s_Inputs_have_ellipses_in_them_but_001dd3eb._72_3_);
    uVar6 = CONCAT35(s_Inputs_have_ellipses_in_them_but_001dd3eb._80_3_,
                     s_Inputs_have_ellipses_in_them_but_001dd3eb._75_5_);
    local_160[0x5b] = '\0';
    *(undefined8 *)(local_160 + 0x48) = uVar5;
    *(undefined8 *)(local_160 + 0x40) = uVar7;
    *(undefined8 *)(local_160 + 0x53) = uVar8;
    *(undefined8 *)(local_160 + 0x4b) = uVar6;
    uVar7 = s_Inputs_have_ellipses_in_them_but_001dd3eb._24_8_;
    uVar6 = s_Inputs_have_ellipses_in_them_but_001dd3eb._16_8_;
    uVar5 = s_Inputs_have_ellipses_in_them_but_001dd3eb._0_8_;
    *(undefined8 *)(local_160 + 8) = s_Inputs_have_ellipses_in_them_but_001dd3eb._8_8_;
    *(undefined8 *)local_160 = uVar5;
    *(undefined8 *)(local_160 + 0x18) = uVar7;
    *(undefined8 *)(local_160 + 0x10) = uVar6;
                    /* try { // try from 004c9f64 to 004c9f77 has its CatchHandler @ 004c9fb8 */
    FUN_0063aa48(param_1,2,2,local_170);
    if ((local_170[0] & 1) != 0) {
      free(local_160);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004c9ffc  FUN_004c9ffc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c9ffc(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  byte *pbVar24;
  long lVar25;
  long alStack_518 [93];
  ulong local_230;
  undefined8 uStack_228;
  char *local_220;
  long local_210 [54];
  
  lVar4 = tpidr_el0;
  local_210[0x34] = *(long *)(lVar4 + 0x28);
  uVar15 = *(ulong *)(param_2 + 0xa8);
  if ((long)uVar15 < 0) {
    if (*(long *)(lVar4 + 0x28) == *(long *)(lVar4 + 0x28)) {
      plVar11 = (long *)FUN_00753a74(8);
      *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
LAB_004ca5e0:
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(plVar11,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
    }
    goto LAB_004ca634;
  }
  local_210[0] = -1;
  uVar18 = *(long *)(param_2 + 0x478) - *(long *)(param_2 + 0x470) >> 3;
  if (uVar15 < uVar18 || uVar15 - uVar18 == 0) {
    if (uVar15 < uVar18) {
      *(ulong *)(param_2 + 0x478) = *(long *)(param_2 + 0x470) + uVar15 * 8;
    }
  }
  else {
    FUN_004cbeac(param_2 + 0x470,uVar15 - uVar18,local_210);
  }
  uVar18 = *(ulong *)(param_2 + 0x420);
  puVar1 = (ulong *)(param_2 + 0x420);
  plVar11 = (long *)(param_2 + 0x428);
  uVar15 = 6;
  if ((uVar18 & 1) != 0) {
    uVar15 = *(ulong *)(param_2 + 0x430);
  }
  local_210[1] = 0;
  local_210[0] = 0;
  local_210[3] = 0;
  local_210[2] = 0;
  local_210[5] = 0;
  local_210[4] = 0;
  local_210[7] = 0;
  local_210[6] = 0;
  local_210[9] = 0;
  local_210[8] = 0;
  local_210[0xb] = 0;
  local_210[10] = 0;
  local_210[0xd] = 0;
  local_210[0xc] = 0;
  local_210[0xf] = 0;
  local_210[0xe] = 0;
  local_210[0x11] = 0;
  local_210[0x10] = 0;
  local_210[0x13] = 0;
  local_210[0x12] = 0;
  local_210[0x15] = 0;
  local_210[0x14] = 0;
  local_210[0x17] = 0;
  local_210[0x16] = 0;
  local_210[0x19] = 0;
  local_210[0x18] = 0;
  local_210[0x1b] = 0;
  local_210[0x1a] = 0;
  local_210[0x1d] = 0;
  local_210[0x1c] = 0;
  local_210[0x1f] = 0;
  local_210[0x1e] = 0;
  local_210[0x21] = 0;
  local_210[0x20] = 0;
  local_210[0x23] = 0;
  local_210[0x22] = 0;
  local_210[0x25] = 0;
  local_210[0x24] = 0;
  local_210[0x27] = 0;
  local_210[0x26] = 0;
  local_210[0x29] = 0;
  local_210[0x28] = 0;
  local_210[0x2b] = 0;
  local_210[0x2a] = 0;
  local_210[0x2d] = 0;
  local_210[0x2c] = 0;
  local_210[0x2f] = 0;
  local_210[0x2e] = 0;
  local_210[0x31] = 0;
  local_210[0x30] = 0;
  local_210[0x33] = 0;
  local_210[0x32] = 0;
  if (uVar15 < 10) {
    uVar15 = uVar15 * 2;
    plVar23 = *(long **)(param_2 + 0x428);
    if (uVar15 < 0xb) {
      uVar15 = 10;
    }
    lVar10 = FUN_00759c3c(uVar15 << 3);
    if (1 < uVar18) {
      uVar13 = uVar18 >> 1;
      uVar16 = 0;
      plVar19 = plVar11;
      if ((uVar18 & 1) != 0) {
        plVar19 = plVar23;
      }
      plVar20 = plVar19;
      if ((7 < uVar18) && (0x1f < (ulong)(lVar10 - (long)plVar19))) {
        uVar16 = uVar13 & 0x7ffffffffffffffc;
        plVar21 = (long *)(lVar10 + 0x10);
        plVar20 = plVar19 + uVar16;
        plVar19 = plVar19 + 2;
        uVar22 = uVar16;
        do {
          plVar5 = plVar19 + -1;
          lVar14 = plVar19[-2];
          lVar17 = plVar19[1];
          lVar25 = *plVar19;
          uVar22 = uVar22 - 4;
          plVar19 = plVar19 + 4;
          plVar21[-1] = *plVar5;
          plVar21[-2] = lVar14;
          plVar21[1] = lVar17;
          *plVar21 = lVar25;
          plVar21 = plVar21 + 4;
        } while (uVar22 != 0);
        if (uVar13 == uVar16) goto LAB_004ca16c;
      }
      lVar14 = uVar13 - uVar16;
      plVar19 = (long *)(lVar10 + uVar16 * 8);
      do {
        lVar14 = lVar14 + -1;
        *plVar19 = *plVar20;
        plVar20 = plVar20 + 1;
        plVar19 = plVar19 + 1;
      } while (lVar14 != 0);
    }
LAB_004ca16c:
    if ((uVar18 & 1) != 0) {
      free(plVar23);
      uVar18 = *puVar1;
    }
    *(long *)(param_2 + 0x428) = lVar10;
    *(ulong *)(param_2 + 0x430) = uVar15;
    *(ulong *)(param_2 + 0x420) = uVar18 | 1;
  }
  uVar15 = (ulong)(*(byte *)(param_2 + 0x48) >> 1);
  pbVar24 = (byte *)(param_2 + 0x49);
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    uVar15 = *(ulong *)(param_2 + 0x50);
    pbVar24 = *(byte **)(param_2 + 0x58);
  }
  if (uVar15 != 0) {
    bVar12 = false;
    lVar10 = 0;
    pbVar2 = pbVar24 + uVar15;
    lVar14 = 0;
    do {
      bVar3 = *pbVar24;
      if (bVar3 != 0x2e) {
        if (bVar12) {
          local_220 = (char *)FUN_00759c3c(0x48);
          uStack_228 = _UNK_00200578;
          local_230 = _DAT_00200570;
          local_220[0x42] = '\0';
          local_220[0x40] = 'e';
          uVar8 = s_Found_____not_part_of_an_ellipsi_001e9f58._24_8_;
          uVar7 = s_Found_____not_part_of_an_ellipsi_001e9f58._16_8_;
          uVar6 = s_Found_____not_part_of_an_ellipsi_001e9f58._0_8_;
          local_220[0x41] = 'd';
          *(undefined8 *)(local_220 + 8) = s_Found_____not_part_of_an_ellipsi_001e9f58._8_8_;
          *(undefined8 *)local_220 = uVar6;
          *(undefined8 *)(local_220 + 0x18) = uVar8;
          *(undefined8 *)(local_220 + 0x10) = uVar7;
          uVar8 = s_Found_____not_part_of_an_ellipsi_001e9f58._56_8_;
          uVar7 = s_Found_____not_part_of_an_ellipsi_001e9f58._48_8_;
          uVar6 = s_Found_____not_part_of_an_ellipsi_001e9f58._32_8_;
          *(undefined8 *)(local_220 + 0x28) = s_Found_____not_part_of_an_ellipsi_001e9f58._40_8_;
          *(undefined8 *)(local_220 + 0x20) = uVar6;
          *(undefined8 *)(local_220 + 0x38) = uVar8;
          *(undefined8 *)(local_220 + 0x30) = uVar7;
                    /* try { // try from 004ca3dc to 004ca3ef has its CatchHandler @ 004ca604 */
          FUN_0063aa48(param_1,2,2,&local_230);
        }
        else {
          if (bVar3 - 0x61 < 0x1a) {
            lVar25 = (ulong)bVar3 - 0x61;
            lVar17 = local_210[lVar25];
          }
          else {
            if (0x19 < bVar3 - 0x41) {
              local_220 = (char *)FUN_00759c3c(0x60);
              uVar8 = s_The_only_subscript_labels_allowe_001b885a._56_8_;
              uVar7 = s_The_only_subscript_labels_allowe_001b885a._48_8_;
              uVar6 = s_The_only_subscript_labels_allowe_001b885a._32_8_;
              uStack_228 = _UNK_00200a08;
              local_230 = _DAT_00200a00;
              *(undefined8 *)(local_220 + 0x28) = s_The_only_subscript_labels_allowe_001b885a._40_8_
              ;
              *(undefined8 *)(local_220 + 0x20) = uVar6;
              *(undefined8 *)(local_220 + 0x38) = uVar8;
              *(undefined8 *)(local_220 + 0x30) = uVar7;
              uVar9 = s_The_only_subscript_labels_allowe_001b885a._85_8_;
              uVar8 = s_The_only_subscript_labels_allowe_001b885a._64_8_;
              uVar6 = CONCAT35(s_The_only_subscript_labels_allowe_001b885a._77_3_,
                               s_The_only_subscript_labels_allowe_001b885a._72_5_);
              uVar7 = CONCAT53(s_The_only_subscript_labels_allowe_001b885a._80_5_,
                               s_The_only_subscript_labels_allowe_001b885a._77_3_);
              local_220[0x5d] = '\0';
              *(undefined8 *)(local_220 + 0x48) = uVar6;
              *(undefined8 *)(local_220 + 0x40) = uVar8;
              *(undefined8 *)(local_220 + 0x55) = uVar9;
              *(undefined8 *)(local_220 + 0x4d) = uVar7;
              uVar8 = s_The_only_subscript_labels_allowe_001b885a._24_8_;
              uVar7 = s_The_only_subscript_labels_allowe_001b885a._16_8_;
              uVar6 = s_The_only_subscript_labels_allowe_001b885a._0_8_;
              *(undefined8 *)(local_220 + 8) = s_The_only_subscript_labels_allowe_001b885a._8_8_;
              *(undefined8 *)local_220 = uVar6;
              *(undefined8 *)(local_220 + 0x18) = uVar8;
              *(undefined8 *)(local_220 + 0x10) = uVar7;
                    /* try { // try from 004ca530 to 004ca543 has its CatchHandler @ 004ca5f4 */
              FUN_0063aa48(param_1,2,2,&local_230);
              goto LAB_004ca544;
            }
            lVar25 = (ulong)bVar3 - 0x27;
            lVar17 = local_210[lVar25];
          }
          if (lVar17 == 0) {
            lVar17 = *(long *)(param_2 + 0x250 + lVar25 * 8);
            local_210[lVar25] = 1;
            if (lVar17 != -1) {
              if (-1 < lVar17) {
                uVar18 = *(ulong *)(param_2 + 0x420);
                uVar15 = 6;
                if ((uVar18 & 1) != 0) {
                  uVar15 = *(ulong *)(param_2 + 0x430);
                }
                if (uVar18 >> 1 == uVar15) {
                  FUN_004c78bc(puVar1);
                }
                else {
                  plVar23 = plVar11;
                  if ((uVar18 & 1) != 0) {
                    plVar23 = (long *)*plVar11;
                  }
                  plVar23[uVar18 >> 1] = *(long *)(*(long *)(param_2 + 0x408) + lVar17 * 8);
                  *puVar1 = *puVar1 + 2;
                }
                lVar25 = lVar14 + 1;
                bVar12 = false;
                *(undefined8 *)(*(long *)(param_2 + 0x3f0) + lVar17 * 8) = 0xffffffffffffffff;
                *(long *)(*(long *)(param_2 + 0x470) + lVar17 * 8) = lVar14;
                goto LAB_004ca1d8;
              }
              plVar11 = (long *)FUN_00753a74(8);
              *plVar11 = (long)(PTR_DAT_007a1ef8 + 0x10);
              if (*(long *)(lVar4 + 0x28) == local_210[0x34]) goto LAB_004ca5e0;
              goto LAB_004ca634;
            }
            local_220 = (char *)FUN_00759c3c(0x40);
            uVar8 = s_Output_subscript_contains_letter_001b88b8._24_8_;
            uVar7 = s_Output_subscript_contains_letter_001b88b8._16_8_;
            uVar6 = s_Output_subscript_contains_letter_001b88b8._0_8_;
            uStack_228 = _UNK_002006d8;
            local_230 = _DAT_002006d0;
            *(undefined8 *)(local_220 + 8) = s_Output_subscript_contains_letter_001b88b8._8_8_;
            *(undefined8 *)local_220 = uVar6;
            *(undefined8 *)(local_220 + 0x18) = uVar8;
            *(undefined8 *)(local_220 + 0x10) = uVar7;
            uVar8 = s_Output_subscript_contains_letter_001b88b8._48_8_;
            uVar7 = s_Output_subscript_contains_letter_001b88b8._40_8_;
            uVar6 = s_Output_subscript_contains_letter_001b88b8._32_8_;
            local_220[0x38] = '\0';
            *(undefined8 *)(local_220 + 0x28) = uVar7;
            *(undefined8 *)(local_220 + 0x20) = uVar6;
            *(undefined8 *)(local_220 + 0x30) = uVar8;
                    /* try { // try from 004ca4d4 to 004ca4e7 has its CatchHandler @ 004ca5f8 */
            FUN_0063aa48(param_1,2,2,&local_230);
          }
          else {
            local_220 = (char *)FUN_00759c3c(0x30);
            uVar8 = s_Output_subscript_contains_repeat_001e39e7._16_8_;
            uVar7 = s_Output_subscript_contains_repeat_001e39e7._0_8_;
            uVar6 = CONCAT62(s_Output_subscript_contains_repeat_001e39e7._26_6_,
                             s_Output_subscript_contains_repeat_001e39e7._24_2_);
            uStack_228 = _UNK_00200118;
            local_230 = _DAT_00200110;
            *(undefined8 *)(local_220 + 8) = s_Output_subscript_contains_repeat_001e39e7._8_8_;
            *(undefined8 *)local_220 = uVar7;
            *(undefined8 *)(local_220 + 0x18) = uVar6;
            *(undefined8 *)(local_220 + 0x10) = uVar8;
            uVar7 = s_Output_subscript_contains_repeat_001e39e7._34_8_;
            uVar6 = CONCAT26(s_Output_subscript_contains_repeat_001e39e7._32_2_,
                             s_Output_subscript_contains_repeat_001e39e7._26_6_);
            local_220[0x2a] = '\0';
            *(undefined8 *)(local_220 + 0x22) = uVar7;
            *(undefined8 *)(local_220 + 0x1a) = uVar6;
                    /* try { // try from 004ca480 to 004ca493 has its CatchHandler @ 004ca5fc */
            FUN_0063aa48(param_1,2,2,&local_230);
          }
        }
LAB_004ca544:
        if ((local_230 & 1) != 0) {
          free(local_220);
        }
        goto LAB_004ca558;
      }
      if (2 < lVar10) {
        local_220 = (char *)FUN_00759c3c(0x48);
        uStack_228 = _UNK_00200aa8;
        local_230 = _DAT_00200aa0;
        local_220[0x44] = '\0';
        local_220[0x40] = 'i';
        uVar8 = s_Found_a_____not_part_of_an_ellip_001db2ce._24_8_;
        uVar7 = s_Found_a_____not_part_of_an_ellip_001db2ce._16_8_;
        uVar6 = s_Found_a_____not_part_of_an_ellip_001db2ce._0_8_;
        local_220[0x41] = 'd';
        local_220[0x42] = 'e';
        local_220[0x43] = 'd';
        *(undefined8 *)(local_220 + 8) = s_Found_a_____not_part_of_an_ellip_001db2ce._8_8_;
        *(undefined8 *)local_220 = uVar6;
        *(undefined8 *)(local_220 + 0x18) = uVar8;
        *(undefined8 *)(local_220 + 0x10) = uVar7;
        uVar8 = s_Found_a_____not_part_of_an_ellip_001db2ce._56_8_;
        uVar7 = s_Found_a_____not_part_of_an_ellip_001db2ce._48_8_;
        uVar6 = s_Found_a_____not_part_of_an_ellip_001db2ce._32_8_;
        *(undefined8 *)(local_220 + 0x28) = s_Found_a_____not_part_of_an_ellip_001db2ce._40_8_;
        *(undefined8 *)(local_220 + 0x20) = uVar6;
        *(undefined8 *)(local_220 + 0x38) = uVar8;
        *(undefined8 *)(local_220 + 0x30) = uVar7;
                    /* try { // try from 004ca434 to 004ca447 has its CatchHandler @ 004ca600 */
        FUN_0063aa48(param_1,2,2,&local_230);
        goto LAB_004ca544;
      }
      lVar10 = lVar10 + 1;
      lVar25 = lVar14;
      if (lVar10 == 3) {
        if (*(long *)(param_2 + 0x68) == 0) {
          lVar10 = 3;
          bVar12 = false;
        }
        else {
          uVar15 = 0;
          do {
            uVar13 = *(ulong *)(param_2 + 0x420);
            uVar18 = 6;
            if ((uVar13 & 1) != 0) {
              uVar18 = *(ulong *)(param_2 + 0x430);
            }
            if (uVar13 >> 1 == uVar18) {
              FUN_004c78bc(puVar1);
            }
            else {
              plVar23 = plVar11;
              if ((uVar13 & 1) != 0) {
                plVar23 = (long *)*plVar11;
              }
              plVar23[uVar13 >> 1] = *(undefined8 *)(*(long *)(param_2 + 0x408) + uVar15 * 8);
              *puVar1 = *puVar1 + 2;
            }
            lVar10 = uVar15 * 8;
            uVar15 = uVar15 + 1;
            *(undefined8 *)(*(long *)(param_2 + 0x3f0) + lVar10) = 0xffffffffffffffff;
            *(long *)(*(long *)(param_2 + 0x470) + lVar10) = lVar14;
            lVar14 = lVar14 + 1;
          } while (uVar15 < *(ulong *)(param_2 + 0x68));
          bVar12 = false;
          lVar10 = 3;
          lVar25 = lVar14;
        }
      }
      else {
        bVar12 = true;
      }
LAB_004ca1d8:
      pbVar24 = pbVar24 + 1;
      lVar14 = lVar25;
    } while (pbVar24 != pbVar2);
  }
  *param_1 = 0;
LAB_004ca558:
  if (*(long *)(lVar4 + 0x28) == local_210[0x34]) {
    return;
  }
LAB_004ca634:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004ca638  FUN_004ca638 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca638(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  long *plVar12;
  void *__dest;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  void *pvVar24;
  ulong uVar25;
  long *plVar26;
  size_t sVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long local_178;
  undefined8 local_160;
  long *local_158;
  long local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  undefined8 local_128;
  long *local_120;
  void *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  void *local_f8;
  ulong local_f0;
  long *plStack_e8;
  char *local_e0;
  void *local_b8;
  ulong local_a8;
  undefined8 *******local_a0;
  ulong uStack_98;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  puVar19 = (undefined8 *)(param_2 + 0x78);
  pvVar24 = (void *)*puVar19;
  plVar20 = *(long **)(param_2 + 0x70);
  uVar25 = plVar20[1] - *plVar20;
  if ((ulong)(*(long *)(param_2 + 0x88) - (long)pvVar24) < uVar25) {
    if ((long)uVar25 < 0) {
      if (*(long *)(lVar2 + 0x28) == local_70) {
        uVar13 = FUN_004cc064(puVar19);
                    /* catch() { ... } // from try @ 004caea0 with catch @ 004cb020 */
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        FUN_004c3dfc(&local_f8);
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar13);
        }
      }
      goto LAB_004cb124;
    }
    sVar27 = *(long *)(param_2 + 0x80) - (long)pvVar24;
    pvVar9 = (void *)FUN_00759c3c(uVar25);
    memcpy(pvVar9,pvVar24,sVar27);
    *(void **)(param_2 + 0x78) = pvVar9;
    *(size_t *)(param_2 + 0x80) = (long)pvVar9 + sVar27;
    *(ulong *)(param_2 + 0x88) = (long)pvVar9 + uVar25;
    if (pvVar24 != (void *)0x0) {
      free(pvVar24);
      plVar20 = *(long **)(param_2 + 0x70);
    }
  }
  FUN_004cb408(param_2 + 0x90,plVar20[1] - *plVar20 >> 3);
  plVar20 = (long *)**(long **)(param_2 + 0x70);
  plVar1 = (long *)(*(long **)(param_2 + 0x70))[1];
  if (plVar20 != plVar1) {
    local_178 = 0;
    do {
      local_f8 = (void *)0x0;
      uVar25 = *(ulong *)(*plVar20 + 0x18);
      if ((uVar25 == 0xffffffffffffffff) ||
         ((lVar28 = *(long *)(*plVar20 + 0x20), uVar25 != 0 && (lVar28 == 0)))) goto LAB_004caec8;
      plVar22 = (long *)(*(long *)(param_2 + 0x458) + local_178 * 0x18);
      lVar16 = *plVar22;
      lVar29 = plVar22[1];
      uVar14 = lVar29 - lVar16 >> 3;
      if (uVar25 != uVar14) {
                    /* try { // try from 004cae5c to 004cae63 has its CatchHandler @ 004cb034 */
        local_e0 = (char *)FUN_00759c3c(0x58);
        plStack_e8 = _UNK_00200258;
        local_f0 = _DAT_00200250;
        uVar5 = s_Rank_of_the_input_must_match_num_001e18d3._56_8_;
        uVar4 = s_Rank_of_the_input_must_match_num_001e18d3._48_8_;
        uVar3 = s_Rank_of_the_input_must_match_num_001e18d3._40_8_;
        uVar13 = s_Rank_of_the_input_must_match_num_001e18d3._32_8_;
        local_e0[0x50] = 'u';
        uVar7 = s_Rank_of_the_input_must_match_num_001e18d3._72_8_;
        uVar6 = s_Rank_of_the_input_must_match_num_001e18d3._64_8_;
        local_e0[0x51] = 't';
        local_e0[0x52] = '\0';
        *(undefined8 *)(local_e0 + 0x28) = uVar3;
        *(undefined8 *)(local_e0 + 0x20) = uVar13;
        *(undefined8 *)(local_e0 + 0x38) = uVar5;
        *(undefined8 *)(local_e0 + 0x30) = uVar4;
        *(undefined8 *)(local_e0 + 0x48) = uVar7;
        *(undefined8 *)(local_e0 + 0x40) = uVar6;
        uVar4 = s_Rank_of_the_input_must_match_num_001e18d3._24_8_;
        uVar3 = s_Rank_of_the_input_must_match_num_001e18d3._16_8_;
        uVar13 = s_Rank_of_the_input_must_match_num_001e18d3._0_8_;
        *(undefined8 *)(local_e0 + 8) = s_Rank_of_the_input_must_match_num_001e18d3._8_8_;
        *(undefined8 *)local_e0 = uVar13;
        *(undefined8 *)(local_e0 + 0x18) = uVar4;
        *(undefined8 *)(local_e0 + 0x10) = uVar3;
                    /* try { // try from 004caea0 to 004caeb3 has its CatchHandler @ 004cb020 */
        FUN_0063aa48(param_1,2,2,&local_f0);
        if ((local_f0 & 1) != 0) {
          free(local_e0);
        }
        goto LAB_004cae28;
      }
      uVar21 = *(ulong *)(param_2 + 0xa8);
      if ((long)uVar21 < 0) {
        plVar20 = (long *)FUN_00753a74(8);
        *plVar20 = (long)(PTR_DAT_007a1ef8 + 0x10);
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004caf84 to 004caf97 has its CatchHandler @ 004cb0b8 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar20,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
        }
        goto LAB_004cb124;
      }
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_100 = (long *)0x0;
      if (uVar21 == 0) {
        local_a8 = 0;
        if (lVar16 != lVar29) goto LAB_004ca854;
      }
      else {
        if (uVar21 >> 0x3d != 0) {
          if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004cafac to 004cafb3 has its CatchHandler @ 004cb09c */
                    /* WARNING: Subroutine does not return */
            FUN_0034e528(&local_110);
          }
          goto LAB_004cb124;
        }
                    /* try { // try from 004ca784 to 004ca78b has its CatchHandler @ 004cb094 */
        local_110 = (long *)FUN_00759c3c(uVar21 << 3);
        plVar11 = local_110 + uVar21;
        local_100 = plVar11;
        memset(local_110,0xff,uVar21 << 3);
        local_a8 = 0;
        pppppppuVar10 = &local_a0;
        local_108 = plVar11;
        if (6 < uVar21) {
          uVar30 = uVar21;
          if (uVar21 < 0xd) {
            uVar30 = 0xc;
          }
                    /* try { // try from 004ca7cc to 004ca7cf has its CatchHandler @ 004cb03c */
          pppppppuVar10 = (undefined8 *******)FUN_00759c3c(uVar30 << 3);
          local_a8 = 1;
          local_a0 = pppppppuVar10;
          uStack_98 = uVar30;
        }
        if (uVar21 < 4) {
          uVar15 = 0;
LAB_004ca828:
          lVar16 = uVar21 - uVar15;
          pppppppuVar10 = pppppppuVar10 + uVar15;
          do {
            lVar16 = lVar16 + -1;
            *pppppppuVar10 = (undefined8 ******)0x1;
            pppppppuVar10 = pppppppuVar10 + 1;
          } while (lVar16 != 0);
        }
        else {
          uVar15 = uVar21 & 0x1ffffffffffffffc;
          pppppppuVar18 = pppppppuVar10 + 2;
          uVar30 = uVar15;
          do {
            uVar30 = uVar30 - 4;
            pppppppuVar18[-1] = (undefined8 ******)0x1;
            pppppppuVar18[-2] = (undefined8 ******)0x1;
            pppppppuVar18[1] = (undefined8 ******)0x1;
            *pppppppuVar18 = (undefined8 ******)0x1;
            pppppppuVar18 = pppppppuVar18 + 4;
          } while (uVar30 != 0);
          if (uVar21 != uVar15) goto LAB_004ca828;
        }
        lVar16 = *plVar22;
        lVar29 = plVar22[1];
        local_a8 = local_a8 + uVar21 * 2;
        if (lVar16 != lVar29) {
LAB_004ca854:
          lVar23 = 0;
          uVar21 = 0;
          plVar22 = (long *)0x0;
          do {
            pvVar24 = local_f8;
            lVar17 = *(long *)(lVar16 + uVar21 * 8);
            if (lVar17 < 0) {
LAB_004caecc:
              plVar20 = (long *)FUN_00753a74(8);
              *plVar20 = (long)(PTR_DAT_007a1ef8 + 0x10);
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004caef8 to 004caf0b has its CatchHandler @ 004cb144 */
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(plVar20,PTR_PTR_007a1f00,PTR_FUN_007a11e0);
              }
              goto LAB_004cb124;
            }
            uVar30 = local_110[lVar17];
            if (uVar30 == 0xffffffffffffffff) {
              local_110[lVar17] = (long)plVar22;
              if (uVar25 <= uVar21) goto LAB_004caec8;
              lVar17 = *(long *)(lVar16 + uVar21 * 8);
              if (lVar17 < 0) goto LAB_004caecc;
              plVar22 = (long *)((long)plVar22 + 1);
              pppppppuVar10 = &local_a0;
              if ((local_a8 & 1) != 0) {
                pppppppuVar10 = local_a0;
              }
              pppppppuVar10[lVar17] = *(undefined8 *******)(lVar28 + uVar21 * 8);
            }
            else {
              if (local_f8 == (void *)0x0) {
                local_128 = *(undefined8 *)(param_2 + 0x488);
                local_120 = *(long **)(param_2 + 0x490);
                pvVar9 = *(void **)(**(long **)(param_2 + 0x70) + local_178 * 8);
              }
              else {
                local_128 = *(undefined8 *)(param_2 + 0x488);
                local_120 = *(long **)(param_2 + 0x490);
                pvVar9 = local_f8;
              }
              if (local_120 != (long *)0x0) {
                FUN_00755c20(1,local_120 + 1);
              }
              local_150 = *(long *)(param_2 + 0x500);
              plVar11 = *(long **)(param_2 + 0x4c0);
              local_f0 = uVar30;
              local_140 = plVar22;
              if (plVar11 == (long *)0x0) {
                if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_004cb124;
                    /* try { // try from 004caf20 to 004caf23 has its CatchHandler @ 004cb12c */
                FUN_0030be88();
                goto LAB_004caf24;
              }
                    /* try { // try from 004ca8d8 to 004ca8f3 has its CatchHandler @ 004cb128 */
              (**(code **)(*plVar11 + 0x30))
                        (&local_118,plVar11,pvVar9,&local_f0,&local_140,&local_128,&local_150);
              local_f8 = local_118;
              local_118 = (void *)0x0;
              if (pvVar24 != (void *)0x0) {
                FUN_005c8ce4(pvVar24);
                free(pvVar24);
                pvVar24 = local_118;
                local_118 = (void *)0x0;
                if (pvVar24 != (void *)0x0) {
                  FUN_005c8ce4(pvVar24);
                  free(pvVar24);
                }
              }
              plVar11 = local_120;
              if ((local_120 != (long *)0x0) &&
                 (lVar17 = FUN_00755c50(0xffffffffffffffff,local_120 + 1), lVar17 == 0)) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                FUN_0071245c(plVar11);
              }
            }
            lVar23 = lVar23 + 8;
            uVar21 = uVar21 + 1;
          } while (lVar16 + lVar23 != lVar29);
        }
      }
      local_140 = (long *)0x0;
      local_138 = (long *)0x0;
      local_130 = (long *)0x0;
      plVar11 = local_110;
      plVar12 = local_138;
      plVar8 = local_138;
      plVar22 = local_108;
      if (uVar25 != 0) {
        if (uVar25 >> 0x3d == 0) {
                    /* try { // try from 004ca9dc to 004ca9df has its CatchHandler @ 004cb0c0 */
          local_138 = (long *)FUN_00759c3c(uVar25 << 3);
          local_130 = local_138 + uVar25;
          plVar11 = local_110;
          plVar12 = local_138;
          plVar8 = local_138;
          plVar22 = local_108;
          goto LAB_004caa10;
        }
        if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004cafc8 to 004cb003 has its CatchHandler @ 004cb0c4 */
          FUN_00368664(&local_140);
LAB_004cafd0:
          if (*(long *)(lVar2 + 0x28) == local_70) {
            FUN_004cc064(puVar19);
LAB_004cafec:
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_002f9ee0();
            }
          }
        }
        goto LAB_004cb124;
      }
LAB_004caa10:
      for (; local_140 = plVar8, pvVar24 = local_f8, plVar8 = local_140, plVar11 != plVar22;
          plVar11 = plVar11 + 1) {
        lVar28 = *plVar11;
        plVar26 = plVar12;
        if (lVar28 != -1) {
          if (plVar12 < local_130) {
            plVar26 = plVar12 + 1;
            *plVar12 = lVar28;
            local_138 = plVar26;
          }
          else {
            sVar27 = (long)plVar12 - (long)local_140;
            lVar16 = (long)sVar27 >> 3;
            uVar21 = lVar16 + 1;
            if (uVar21 >> 0x3d != 0) goto LAB_004caf24;
            uVar30 = (long)local_130 - (long)local_140 >> 2;
            if (uVar30 <= uVar21) {
              uVar30 = uVar21;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_130 - (long)local_140)) {
              uVar30 = 0x1fffffffffffffff;
            }
            if (uVar30 == 0) {
              plVar12 = (long *)0x0;
            }
            else {
              if (uVar30 >> 0x3d != 0) goto LAB_004caf40;
                    /* try { // try from 004caa78 to 004caa7b has its CatchHandler @ 004cb0c8 */
              plVar12 = (long *)FUN_00759c3c(uVar30 << 3);
            }
            plVar26 = plVar12 + lVar16 + 1;
            plVar12[lVar16] = lVar28;
            memcpy(plVar12,plVar8,sVar27);
            local_140 = plVar12;
            local_138 = plVar26;
            local_130 = plVar12 + uVar30;
            if (plVar8 != (long *)0x0) {
              free(plVar8);
              local_138 = plVar26;
            }
          }
        }
        plVar12 = plVar26;
        plVar8 = local_140;
      }
      if (local_f8 == (void *)0x0) {
        lVar16 = *(long *)(**(long **)(param_2 + 0x70) + local_178 * 8);
        lVar28 = *(long *)(lVar16 + 0x18);
        if (lVar28 == -1) goto LAB_004caec8;
        if (lVar28 != 0) {
          lVar16 = *(long *)(lVar16 + 0x20);
          goto joined_r0x004cab04;
        }
      }
      else {
        lVar28 = *(long *)((long)local_f8 + 0x18);
        if (lVar28 == -1) goto LAB_004caec8;
        if (lVar28 != 0) {
          lVar16 = *(long *)((long)local_f8 + 0x20);
joined_r0x004cab04:
          if (lVar16 == 0) goto LAB_004caec8;
        }
      }
      local_f0 = (long)plVar12 - (long)local_140 >> 3;
      if (((long)plVar12 - (long)local_140 == -8) ||
         ((plStack_e8 = local_140, local_140 == (long *)0x0 && (plVar12 != (long *)0x0))))
      goto LAB_004caec8;
                    /* try { // try from 004cab2c to 004cab33 has its CatchHandler @ 004cb0b4 */
      uVar21 = FUN_004c75b8(lVar28,&local_f0);
      if ((uVar21 & 1) != 0) {
        if (pvVar24 == (void *)0x0) {
          pvVar9 = *(void **)(**(long **)(param_2 + 0x70) + local_178 * 8);
          lVar28 = *(long *)((long)pvVar9 + 0x18);
          if (lVar28 == -1) goto LAB_004caec8;
          lVar16 = *(long *)((long)pvVar9 + 0x20);
        }
        else {
          lVar28 = *(long *)((long)pvVar24 + 0x18);
          if (lVar28 == -1) goto LAB_004caec8;
          lVar16 = *(long *)((long)pvVar24 + 0x20);
          pvVar9 = pvVar24;
        }
        if ((lVar28 != 0) && (lVar16 == 0)) goto LAB_004caec8;
                    /* try { // try from 004cab80 to 004cab87 has its CatchHandler @ 004cb074 */
        FUN_005ca9a8(&local_f0);
        local_150 = (long)local_138 - (long)local_140 >> 3;
        if (((long)local_138 - (long)local_140 == -8) ||
           ((local_148 = local_140, local_140 == (long *)0x0 && (local_138 != (long *)0x0))))
        goto LAB_004caec8;
        local_160 = *(undefined8 *)(param_2 + 0x488);
        local_158 = *(long **)(param_2 + 0x490);
        if (local_158 != (long *)0x0) {
          FUN_00755c20(1,local_158 + 1);
        }
                    /* try { // try from 004cabcc to 004cabe7 has its CatchHandler @ 004cb04c */
        FUN_004c66ac(&local_118,pvVar9,&local_f0,&local_150,&local_160,
                     *(undefined8 *)(param_2 + 0x500),param_2 + 0x4d0);
        local_f8 = local_118;
        local_118 = (void *)0x0;
        if (pvVar24 != (void *)0x0) {
          FUN_005c8ce4(pvVar24);
          free(pvVar24);
          pvVar24 = local_118;
          local_118 = (void *)0x0;
          if (pvVar24 != (void *)0x0) {
            FUN_005c8ce4(pvVar24);
            free(pvVar24);
          }
        }
        plVar22 = local_158;
        pvVar9 = local_b8;
        if ((local_158 != (long *)0x0) &&
           (lVar28 = FUN_00755c50(0xffffffffffffffff,local_158 + 1), pvVar9 = local_b8, lVar28 == 0)
           ) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          FUN_0071245c(plVar22);
          pvVar9 = local_b8;
        }
        local_b8 = (void *)0x0;
        pvVar24 = local_f8;
        if (pvVar9 != (void *)0x0) {
          local_b8 = (void *)0x0;
          free(pvVar9);
          pvVar24 = local_f8;
        }
      }
      if (pvVar24 != (void *)0x0) {
        pppppppuVar10 = &local_a0;
        if ((local_a8 & 1) != 0) {
          pppppppuVar10 = local_a0;
        }
        if ((1 < local_a8) && (pppppppuVar10 == (undefined8 *******)0x0)) goto LAB_004caec8;
                    /* try { // try from 004cac74 to 004cac7b has its CatchHandler @ 004cb090 */
        FUN_005ca9a8(&local_f0,local_a8 >> 1);
                    /* try { // try from 004cac7c to 004cac87 has its CatchHandler @ 004cb078 */
        FUN_004c7238(pvVar24,&local_f0);
        pvVar9 = local_b8;
        local_b8 = (void *)0x0;
        if (pvVar9 != (void *)0x0) {
          free(pvVar9);
        }
      }
      plVar22 = *(long **)(param_2 + 0x80);
      if (plVar22 < *(long **)(param_2 + 0x88)) {
        local_f8 = (void *)0x0;
        plVar12 = plVar22 + 1;
        *plVar22 = (long)pvVar24;
      }
      else {
        pvVar9 = (void *)*puVar19;
        lVar28 = (long)plVar22 - (long)pvVar9 >> 3;
        uVar21 = lVar28 + 1;
        if (uVar21 >> 0x3d != 0) goto LAB_004cafd0;
        uVar15 = (long)*(long **)(param_2 + 0x88) - (long)pvVar9;
        uVar30 = (long)uVar15 >> 2;
        if (uVar30 <= uVar21) {
          uVar30 = uVar21;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar30 = 0x1fffffffffffffff;
        }
        if (uVar30 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3d != 0) goto LAB_004cafec;
                    /* try { // try from 004cacfc to 004cacff has its CatchHandler @ 004cb0c0 */
          __dest = (void *)FUN_00759c3c(uVar30 << 3);
        }
        plVar11 = (long *)((long)__dest + lVar28 * 8);
        local_f8 = (void *)0x0;
        plVar12 = plVar11 + 1;
        *plVar11 = (long)pvVar24;
        memcpy(__dest,pvVar9,(long)plVar22 - (long)pvVar9);
        *(void **)(param_2 + 0x78) = __dest;
        *(long **)(param_2 + 0x80) = plVar12;
        *(void **)(param_2 + 0x88) = (void *)((long)__dest + uVar30 * 8);
        if (pvVar9 != (void *)0x0) {
          free(pvVar9);
        }
      }
      uVar21 = *(ulong *)(param_2 + 0x98);
      *(long **)(param_2 + 0x80) = plVar12;
      if (uVar21 < *(ulong *)(param_2 + 0xa0)) {
        pppppppuVar10 = &local_a0;
        if ((local_a8 & 1) != 0) {
          pppppppuVar10 = local_a0;
        }
        if ((1 < local_a8) && (pppppppuVar10 == (undefined8 *******)0x0)) {
LAB_004caec8:
                    /* WARNING: Subroutine does not return */
          FUN_004839bc();
        }
                    /* try { // try from 004cad70 to 004cad77 has its CatchHandler @ 004cb068 */
        FUN_005ca9a8(uVar21,local_a8 >> 1);
        lVar28 = uVar21 + 0x40;
        *(long *)(param_2 + 0x98) = lVar28;
      }
      else {
                    /* try { // try from 004cad84 to 004cad8f has its CatchHandler @ 004cb0c0 */
        lVar28 = FUN_004cc0ec(param_2 + 0x90,&local_a8);
      }
      *(long *)(param_2 + 0x98) = lVar28;
      if (local_140 != (long *)0x0) {
        local_138 = local_140;
        free(local_140);
      }
      if ((local_a8 & 1) != 0) {
        free(local_a0);
      }
      if (local_110 != (long *)0x0) {
        free(local_110);
      }
      if (uVar25 != uVar14) goto LAB_004cae28;
      plVar20 = plVar20 + 1;
      local_178 = local_178 + 1;
    } while (plVar20 != plVar1);
  }
  *param_1 = 0;
LAB_004cae28:
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
  goto LAB_004cb124;
LAB_004caf24:
  if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 004caf38 to 004caf57 has its CatchHandler @ 004cb0cc */
    FUN_00368664(&local_140);
LAB_004caf40:
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
LAB_004cb124:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb164  FUN_004cb164 =====

long FUN_004cb164(long param_1)

{
  return param_1 + 0x420;
}


// ===== 004cb16c  FUN_004cb16c =====

long FUN_004cb16c(long param_1)

{
  return param_1 + 0x78;
}


// ===== 004cb174  FUN_004cb174 =====

undefined8 FUN_004cb174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}


// ===== 004cb17c  FUN_004cb17c =====

long FUN_004cb17c(long param_1)

{
  return param_1 + 0x90;
}


// ===== 004cb184  FUN_004cb184 =====

long FUN_004cb184(long param_1)

{
  return param_1 + 0x3f0;
}


// ===== 004cb18c  FUN_004cb18c =====

long FUN_004cb18c(long param_1)

{
  return param_1 + 0x470;
}


// ===== 004cb194  FUN_004cb194 =====

undefined8 FUN_004cb194(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}


// ===== 004cb19c  FUN_004cb19c =====

void FUN_004cb19c(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = local_70;
  plVar2 = local_70;
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)param_2[4];
  if (plVar4 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (plVar4 == param_2) {
    (**(code **)(*param_2 + 0x18))(param_2,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_004cb504(local_70,param_1 + 0x4a0);
  if (local_50 == local_70) {
    lVar5 = 0x20;
LAB_004cb240:
    (**(code **)(*plVar2 + lVar5))();
  }
  else if (local_50 != (long *)0x0) {
    lVar5 = 0x28;
    plVar2 = local_50;
    goto LAB_004cb240;
  }
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (plVar2 == param_3) {
    local_50 = local_70;
    (**(code **)(*param_3 + 0x18))(param_3,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_004cb69c(local_70,param_1 + 0x4d0);
  if (local_50 == local_70) {
    lVar5 = 0x20;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_004cb2d0;
    lVar5 = 0x28;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar5))();
LAB_004cb2d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb2f8  FUN_004cb2f8 =====

void FUN_004cb2f8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long alStack_f0 [5];
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  
  puVar12 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((param_1[2] - (long)puVar12 >> 3) * -0x5555555555555555)) {
    return;
  }
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    puVar13 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 0x18);
    lVar1 = (long)puVar13 - (long)puVar12;
    puVar9 = puVar2;
    puVar5 = puVar12;
    if (lVar1 != 0) {
      do {
        uVar15 = *puVar5;
        puVar9[1] = puVar5[1];
        *puVar9 = uVar15;
        puVar9[2] = puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
        puVar9 = puVar9 + 3;
      } while (puVar5 != puVar13);
      do {
        pvVar3 = (void *)*puVar12;
        if (pvVar3 != (void *)0x0) {
          puVar12[1] = pvVar3;
          free(pvVar3);
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != puVar13);
      puVar12 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2 + lVar1;
    param_1[2] = (long)(puVar2 + param_2 * 3);
    if (puVar12 == (undefined8 *)0x0) {
      return;
    }
    free(puVar12);
    return;
  }
  auVar16 = FUN_004cb834(param_1);
  uVar7 = auVar16._8_8_;
  plVar4 = auVar16._0_8_;
  pcStack_88 = FUN_004cb408;
  pvVar3 = (void *)*plVar4;
  if (uVar7 <= (ulong)(plVar4[2] - (long)pvVar3 >> 6)) {
    return;
  }
  if (uVar7 >> 0x3a == 0) {
    pvVar14 = (void *)plVar4[1];
    puStack_90 = &stack0xffffffffffffffc0;
    puVar5 = (undefined8 *)FUN_00759c3c(uVar7 * 0x40);
    lVar1 = (long)pvVar14 - (long)pvVar3;
    puVar12 = puVar5;
    pvVar6 = pvVar3;
    if (lVar1 != 0) {
      do {
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[6] = 0;
        FUN_005cab64(puVar12,pvVar6);
        pvVar6 = (void *)((long)pvVar6 + 0x40);
        puVar12 = puVar12 + 8;
      } while (pvVar6 != pvVar14);
      do {
        pvVar6 = *(void **)((long)pvVar3 + 0x38);
        *(undefined8 *)((long)pvVar3 + 0x38) = 0;
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
        }
        pvVar3 = (void *)((long)pvVar3 + 0x40);
      } while (pvVar3 != pvVar14);
      pvVar3 = (void *)*plVar4;
    }
    *plVar4 = (long)puVar5;
    plVar4[1] = (long)puVar5 + lVar1;
    plVar4[2] = (long)(puVar5 + uVar7 * 8);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    free(pvVar3);
    return;
  }
  puStack_90 = &stack0xffffffffffffffc0;
  auVar16 = FUN_004cc078(plVar4);
  plVar8 = auVar16._8_8_;
  plVar4 = auVar16._0_8_;
  pcStack_b8 = FUN_004cb504;
  lVar1 = tpidr_el0;
  lStack_c8 = *(long *)(lVar1 + 0x28);
  puStack_c0 = (undefined1 *)&puStack_90;
  if (plVar8 != plVar4) {
    plVar10 = (long *)plVar4[4];
    plVar11 = (long *)plVar8[4];
    if (plVar10 == plVar4) {
      if (plVar11 == plVar8) {
        puStack_c0 = (undefined1 *)&puStack_90;
        (**(code **)(*plVar4 + 0x18))(plVar4,alStack_f0);
        (**(code **)(*(long *)plVar4[4] + 0x20))();
        plVar4[4] = 0;
        (**(code **)(*(long *)plVar8[4] + 0x18))((long *)plVar8[4],plVar4);
        (**(code **)(*(long *)plVar8[4] + 0x20))();
        plVar8[4] = 0;
        plVar4[4] = (long)plVar4;
        (**(code **)(alStack_f0[0] + 0x18))(alStack_f0,plVar8);
        (**(code **)(alStack_f0[0] + 0x20))(alStack_f0);
        plVar8[4] = (long)plVar8;
        if (*(long *)(lVar1 + 0x28) == lStack_c8) {
          return;
        }
      }
      else {
        puStack_c0 = (undefined1 *)&puStack_90;
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar8);
        (**(code **)(*(long *)plVar4[4] + 0x20))();
        plVar4[4] = plVar8[4];
        plVar8[4] = (long)plVar8;
        if (*(long *)(lVar1 + 0x28) == lStack_c8) {
          return;
        }
      }
      goto LAB_004cb694;
    }
    if (plVar11 != plVar8) {
      plVar4[4] = (long)plVar11;
      plVar8[4] = (long)plVar10;
      puStack_c0 = (undefined1 *)&puStack_90;
      if (*(long *)(lVar1 + 0x28) == lStack_c8) {
        return;
      }
      goto LAB_004cb694;
    }
    puStack_c0 = (undefined1 *)&puStack_90;
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar4);
    (**(code **)(*(long *)plVar8[4] + 0x20))();
    plVar8[4] = plVar4[4];
    plVar4[4] = (long)plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_c8) {
    return;
  }
LAB_004cb694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb408  FUN_004cb408 =====

void FUN_004cb408(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  void *__ptr;
  undefined8 *puVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  long alStack_b0 [5];
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  __ptr = (void *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)__ptr >> 6)) {
    return;
  }
  if (param_2 >> 0x3a == 0) {
    pvVar9 = (void *)param_1[1];
    puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 0x40);
    lVar1 = (long)pvVar9 - (long)__ptr;
    puVar8 = puVar2;
    pvVar3 = __ptr;
    if (lVar1 != 0) {
      do {
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[7] = 0;
        puVar8[6] = 0;
        FUN_005cab64(puVar8,pvVar3);
        pvVar3 = (void *)((long)pvVar3 + 0x40);
        puVar8 = puVar8 + 8;
      } while (pvVar3 != pvVar9);
      do {
        pvVar3 = *(void **)((long)__ptr + 0x38);
        *(undefined8 *)((long)__ptr + 0x38) = 0;
        if (pvVar3 != (void *)0x0) {
          free(pvVar3);
        }
        __ptr = (void *)((long)__ptr + 0x40);
      } while (__ptr != pvVar9);
      __ptr = (void *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2 + lVar1;
    param_1[2] = (long)(puVar2 + param_2 * 8);
    if (__ptr == (void *)0x0) {
      return;
    }
    free(__ptr);
    return;
  }
  auVar10 = FUN_004cc078(param_1);
  plVar5 = auVar10._8_8_;
  plVar4 = auVar10._0_8_;
  pcStack_78 = FUN_004cb504;
  lVar1 = tpidr_el0;
  lStack_88 = *(long *)(lVar1 + 0x28);
  puStack_80 = &stack0xffffffffffffffb0;
  if (plVar5 != plVar4) {
    plVar6 = (long *)plVar4[4];
    plVar7 = (long *)plVar5[4];
    if (plVar6 == plVar4) {
      if (plVar7 == plVar5) {
        puStack_80 = &stack0xffffffffffffffb0;
        (**(code **)(*plVar4 + 0x18))(plVar4,alStack_b0);
        (**(code **)(*(long *)plVar4[4] + 0x20))();
        plVar4[4] = 0;
        (**(code **)(*(long *)plVar5[4] + 0x18))((long *)plVar5[4],plVar4);
        (**(code **)(*(long *)plVar5[4] + 0x20))();
        plVar5[4] = 0;
        plVar4[4] = (long)plVar4;
        (**(code **)(alStack_b0[0] + 0x18))(alStack_b0,plVar5);
        (**(code **)(alStack_b0[0] + 0x20))(alStack_b0);
        plVar5[4] = (long)plVar5;
        if (*(long *)(lVar1 + 0x28) == lStack_88) {
          return;
        }
      }
      else {
        puStack_80 = &stack0xffffffffffffffb0;
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar5);
        (**(code **)(*(long *)plVar4[4] + 0x20))();
        plVar4[4] = plVar5[4];
        plVar5[4] = (long)plVar5;
        if (*(long *)(lVar1 + 0x28) == lStack_88) {
          return;
        }
      }
      goto LAB_004cb694;
    }
    if (plVar7 != plVar5) {
      plVar4[4] = (long)plVar7;
      plVar5[4] = (long)plVar6;
      puStack_80 = &stack0xffffffffffffffb0;
      if (*(long *)(lVar1 + 0x28) == lStack_88) {
        return;
      }
      goto LAB_004cb694;
    }
    puStack_80 = &stack0xffffffffffffffb0;
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar4);
    (**(code **)(*(long *)plVar5[4] + 0x20))();
    plVar5[4] = plVar4[4];
    plVar4[4] = (long)plVar4;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_88) {
    return;
  }
LAB_004cb694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb504  FUN_004cb504 =====

void FUN_004cb504(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    plVar3 = (long *)param_2[4];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
                    /* try { // try from 004cb610 to 004cb61b has its CatchHandler @ 004cb698 */
        (**(code **)(*param_1 + 0x18))(param_1,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 004cb63c to 004cb643 has its CatchHandler @ 004cb698 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 004cb664 to 004cb66f has its CatchHandler @ 004cb698 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
                    /* try { // try from 004cb578 to 004cb583 has its CatchHandler @ 004cb698 */
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_004cb694;
    }
    if (plVar3 != param_2) {
      param_1[4] = (long)plVar3;
      param_2[4] = (long)plVar2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_004cb694;
    }
                    /* try { // try from 004cb5bc to 004cb5c7 has its CatchHandler @ 004cb698 */
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    (**(code **)(*(long *)param_2[4] + 0x20))();
    param_2[4] = param_1[4];
    param_1[4] = (long)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004cb694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 004cb69c  FUN_004cb69c =====

void FUN_004cb69c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    plVar3 = (long *)param_2[4];
    if (plVar2 == param_1) {
      if (plVar3 == param_2) {
                    /* try { // try from 004cb7a8 to 004cb7b3 has its CatchHandler @ 004cb830 */
        (**(code **)(*param_1 + 0x18))(param_1,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 004cb7d4 to 004cb7db has its CatchHandler @ 004cb830 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 004cb7fc to 004cb807 has its CatchHandler @ 004cb830 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      else {
                    /* try { // try from 004cb710 to 004cb71b has its CatchHandler @ 004cb830 */
        (**(code **)(*param_1 + 0x18))(param_1,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
        param_2[4] = (long)param_2;
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
      }
      goto LAB_004cb82c;
    }
    if (plVar3 != param_2) {
      param_1[4] = (long)plVar3;
      param_2[4] = (long)plVar2;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_004cb82c;
    }
                    /* try { // try from 004cb754 to 004cb75f has its CatchHandler @ 004cb830 */
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    (**(code **)(*(long *)param_2[4] + 0x20))();
    param_2[4] = param_1[4];
    param_1[4] = (long)param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_004cb82c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


