// ===== 0036ebac  FUN_0036ebac =====

void FUN_0036ebac(void)

{
  return;
}


// ===== 0036ebb0  FUN_0036ebb0 =====

void FUN_0036ebb0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar5 = (ulong *)*param_1;
  puVar7 = (ulong *)param_1[1];
  uVar10 = (long)puVar7 - (long)puVar5;
  if (uVar10 < (ulong)(param_2[1] - *param_2)) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036ed50 to 0036ed5f has its CatchHandler @ 0036ee20 */
    FUN_002fd2b0(auStack_50,"Tensor::calcOffset: out of range access.");
                    /* try { // try from 0036ed64 to 0036ed9b has its CatchHandler @ 0036ee10 */
    lVar2 = FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*param_2 == param_2[1]) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036edac to 0036edbb has its CatchHandler @ 0036ee0c */
    FUN_002fd2b0(auStack_50,"Tensor::calcOffset: access by empty indices.");
                    /* try { // try from 0036edc0 to 0036edf7 has its CatchHandler @ 0036edfc */
    lVar2 = FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    plVar9 = param_1 + 3;
    if (*plVar9 == param_1[4]) {
      if (puVar7 == puVar5) {
        *(undefined8 *)(*plVar9 + -8) = 1;
        puVar5 = puVar7;
      }
      else {
                    /* try { // try from 0036ec14 to 0036ec1b has its CatchHandler @ 0036edf8 */
        FUN_00368538(plVar9);
        puVar5 = (ulong *)*param_1;
        uVar10 = param_1[1] - (long)puVar5;
        *(undefined8 *)(param_1[4] + -8) = 1;
      }
      lVar2 = (long)uVar10 >> 3;
      if (lVar2 != 1) {
        lVar8 = *plVar9;
        lVar6 = *(long *)(lVar8 + lVar2 * 8 + -8);
        do {
          lVar4 = lVar2 + -1;
          lVar6 = puVar5[lVar2 + -1] * lVar6;
          *(long *)(lVar8 + -0x10 + lVar2 * 8) = lVar6;
          lVar2 = lVar4;
        } while (lVar4 != 1);
      }
    }
    puVar7 = (ulong *)*param_2;
    lVar2 = 0;
    if (param_2[1] - (long)puVar7 != 0) {
      uVar10 = param_2[1] - (long)puVar7 >> 3;
      plVar9 = (long *)*plVar9;
      if (uVar10 < 2) {
        uVar10 = 1;
      }
      do {
        if (*puVar5 < *puVar7) {
          uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036ecf4 to 0036ed03 has its CatchHandler @ 0036ee40 */
          FUN_002fd2b0(auStack_50,"Tensor::calcOffset: out of range access.");
                    /* try { // try from 0036ed08 to 0036ed3f has its CatchHandler @ 0036ee24 */
          lVar2 = FUN_00374cf0(uVar3,auStack_50);
          if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar3,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
          }
          goto LAB_0036ee64;
        }
        uVar10 = uVar10 - 1;
        lVar2 = lVar2 + *plVar9 * *puVar7;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
LAB_0036ee64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0036ee68  FUN_0036ee68 =====

undefined4 FUN_0036ee68(float param_1,float param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0.0) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036eed4 to 0036eee3 has its CatchHandler @ 0036ef48 */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::torchRemainder: b == 0");
                    /* try { // try from 0036eee8 to 0036ef23 has its CatchHandler @ 0036ef24 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar3 = NEON_fmadd(-param_2,(int)(param_1 / param_2),param_1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036ef74  FUN_0036ef74 =====

float FUN_0036ef74(undefined8 param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == (float *)0x0) {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 0036f078 to 0036f087 has its CatchHandler @ 0036f15c */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorMean: nullptr passed as argument");
                    /* try { // try from 0036f08c to 0036f0c7 has its CatchHandler @ 0036f140 */
    FUN_00374ee0(uVar6,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036f184;
  }
  if (param_3 == 0) {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 0036f0dc to 0036f0eb has its CatchHandler @ 0036f13c */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorMean: size 0 passed as argument");
                    /* try { // try from 0036f0f0 to 0036f12b has its CatchHandler @ 0036f12c */
    FUN_00374ee0(uVar6,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036f184;
  }
  fVar5 = 0.0;
  uVar8 = param_3 - 1 & 0x3fffffffffffffff;
  pfVar7 = param_2;
  if (uVar8 < 7) {
LAB_0036f020:
    do {
      pfVar10 = pfVar7 + 1;
      fVar5 = fVar5 + *pfVar7;
      pfVar7 = pfVar10;
    } while (pfVar10 != param_2 + param_3);
  }
  else {
    uVar8 = uVar8 + 1;
    pfVar10 = param_2 + 4;
    uVar9 = uVar8 & 0x7ffffffffffffff8;
    pfVar7 = param_2 + uVar9;
    uVar11 = uVar9;
    do {
      pfVar1 = pfVar10 + -4;
      pfVar3 = pfVar10 + -2;
      pfVar4 = pfVar10 + 2;
      uVar6 = *(undefined8 *)pfVar10;
      uVar11 = uVar11 - 8;
      pfVar10 = pfVar10 + 8;
      fVar5 = fVar5 + (float)*(undefined8 *)pfVar1 + (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
              (float)*(undefined8 *)pfVar3 + (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) +
              (float)uVar6 + (float)((ulong)uVar6 >> 0x20) + (float)*(undefined8 *)pfVar4 +
              (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
    } while (uVar11 != 0);
    if (uVar8 != uVar9) goto LAB_0036f020;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return fVar5 / (float)param_3;
  }
LAB_0036f184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f188  FUN_0036f188 =====

void FUN_0036f188(undefined8 param_1,float *param_2,long param_3,float *param_4)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) {
    uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 0036f2a4 to 0036f2b3 has its CatchHandler @ 0036f318 */
    FUN_002fd2b0(auStack_80,"NonOptimizedVectorExtOps::vectorExponent: nullptr passed as argument");
                    /* try { // try from 0036f2b8 to 0036f2f3 has its CatchHandler @ 0036f2f4 */
    FUN_00374ee0(uVar9,auStack_80);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar9,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036f340;
  }
  if (param_3 != 0) {
    uVar2 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar3 = param_2;
    if ((uVar2 != 0) && (7 < (ulong)((long)param_4 - (long)param_2))) {
      uVar2 = uVar2 + 1;
      uVar4 = uVar2 & 0x7ffffffffffffffe;
      pfVar3 = param_4;
      uVar5 = uVar4;
      pfVar6 = param_2;
      do {
        uVar9 = *(undefined8 *)pfVar6;
        fVar7 = expf((float)((ulong)uVar9 >> 0x20));
        fVar8 = expf((float)uVar9);
        uVar5 = uVar5 - 2;
        *(ulong *)pfVar3 = CONCAT44(fVar7,fVar8);
        pfVar3 = pfVar3 + 2;
        pfVar6 = pfVar6 + 2;
      } while (uVar5 != 0);
      param_4 = param_4 + uVar4;
      pfVar3 = param_2 + uVar4;
      if (uVar2 == uVar4) goto LAB_0036f264;
    }
    do {
      pfVar6 = pfVar3 + 1;
      fVar7 = expf(*pfVar3);
      *param_4 = fVar7;
      param_4 = param_4 + 1;
      pfVar3 = pfVar6;
    } while (pfVar6 != param_2 + param_3);
  }
LAB_0036f264:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0036f340:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f344  FUN_0036f344 =====

void FUN_0036f344(undefined8 param_1,float *param_2,long param_3,float *param_4)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  float __x;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float __x_00;
  float local_78;
  float fStack_74;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036f478 to 0036f487 has its CatchHandler @ 0036f4e8 */
    FUN_002fd2b0(auStack_70,
                 "NonOptimizedVectorExtOps::vectorExponent: (complex) nullptr passed as argument");
                    /* try { // try from 0036f48c to 0036f4c3 has its CatchHandler @ 0036f4c4 */
    FUN_00374ee0(uVar3,auStack_70);
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if (param_3 != 0) {
      pfVar1 = param_2 + param_3 * 2;
      do {
        __x = *param_2;
        __x_00 = param_2[1];
        if (__x_00 == 0.0) {
          __x = expf(__x);
          auVar6._8_4_ = 0x7fffffff;
          auVar6._0_8_ = 0x7fffffff7fffffff;
          auVar6._12_4_ = 0x7fffffff;
          auVar6 = NEON_bif(ZEXT816(0),ZEXT416((uint)__x_00),auVar6,1);
          fVar4 = auVar6._0_4_;
        }
        else {
          if (ABS(__x) == INFINITY) {
            fVar5 = ABS(__x_00);
            if (0.0 <= __x) {
              if ((fVar5 >= INFINITY) && (fVar5 == INFINITY || fVar5 < INFINITY != NAN(fVar5))) {
                fVar4 = NAN;
                if (fVar5 != INFINITY) {
                  fVar4 = __x_00;
                }
                goto LAB_0036f3ac;
              }
            }
            else {
              fVar4 = __x_00;
              if (fVar5 >= INFINITY) {
                fVar4 = 1.0;
              }
              if (fVar5 == INFINITY || fVar5 < INFINITY != NAN(fVar5)) {
                __x_00 = fVar4;
              }
            }
          }
          fVar4 = expf(__x);
          sincosf(__x_00,&fStack_74,&local_78);
          __x = fVar4 * local_78;
          fVar4 = fVar4 * fStack_74;
        }
LAB_0036f3ac:
        param_2 = param_2 + 2;
        *param_4 = __x;
        param_4[1] = fVar4;
        param_4 = param_4 + 2;
      } while (param_2 != pfVar1);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f510  FUN_0036f510 =====

void FUN_0036f510(undefined8 param_1,float *param_2,long param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  float *pfVar4;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036f58c to 0036f59b has its CatchHandler @ 0036f5fc */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorAngle: nullptr passed as argument");
                    /* try { // try from 0036f5a0 to 0036f5d7 has its CatchHandler @ 0036f5d8 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if (param_3 != 0) {
      pfVar3 = param_2;
      do {
        pfVar4 = pfVar3 + 2;
        fVar5 = atan2f(pfVar3[1],*pfVar3);
        *param_4 = fVar5;
        param_4 = param_4 + 1;
        pfVar3 = pfVar4;
      } while (pfVar4 != param_2 + param_3 * 2);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f624  FUN_0036f624 =====

void FUN_0036f624(float param_1,undefined8 param_2,float *param_3,long param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (float *)0x0) || (param_5 == (float *)0x0)) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036f710 to 0036f71f has its CatchHandler @ 0036f784 */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorPlusalpha: nullptr passed as argument")
    ;
                    /* try { // try from 0036f724 to 0036f75f has its CatchHandler @ 0036f760 */
    FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036f7ac;
  }
  if (param_4 != 0) {
    uVar4 = param_4 - 1U & 0x3fffffffffffffff;
    pfVar5 = param_3;
    if ((6 < uVar4) && (0x1f < (ulong)((long)param_5 - (long)param_3))) {
      uVar4 = uVar4 + 1;
      pfVar5 = param_3 + 4;
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      pfVar7 = param_5 + 4;
      param_5 = param_5 + uVar6;
      uVar8 = uVar6;
      do {
        pfVar2 = pfVar5 + -2;
        uVar3 = *(undefined8 *)(pfVar5 + -4);
        uVar10 = *(undefined8 *)(pfVar5 + 2);
        uVar9 = *(undefined8 *)pfVar5;
        uVar8 = uVar8 - 8;
        pfVar5 = pfVar5 + 8;
        *(ulong *)(pfVar7 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) + param_1,
                      (float)*(undefined8 *)pfVar2 + param_1);
        *(ulong *)(pfVar7 + -4) =
             CONCAT44((float)((ulong)uVar3 >> 0x20) + param_1,(float)uVar3 + param_1);
        *(ulong *)(pfVar7 + 2) =
             CONCAT44((float)((ulong)uVar10 >> 0x20) + param_1,(float)uVar10 + param_1);
        *(ulong *)pfVar7 = CONCAT44((float)((ulong)uVar9 >> 0x20) + param_1,(float)uVar9 + param_1);
        pfVar7 = pfVar7 + 8;
      } while (uVar8 != 0);
      pfVar5 = param_3 + uVar6;
      if (uVar4 == uVar6) goto LAB_0036f6dc;
    }
    do {
      pfVar7 = pfVar5 + 1;
      *param_5 = *pfVar5 + param_1;
      param_5 = param_5 + 1;
      pfVar5 = pfVar7;
    } while (pfVar7 != param_3 + param_4);
  }
LAB_0036f6dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036f7ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f7b0  FUN_0036f7b0 =====

void FUN_0036f7b0(float param_1,undefined8 param_2,float *param_3,long param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (float *)0x0) || (param_5 == (float *)0x0)) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0036f898 to 0036f8a7 has its CatchHandler @ 0036f90c */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorMulScalar: nullptr passed as argument")
    ;
                    /* try { // try from 0036f8ac to 0036f8e7 has its CatchHandler @ 0036f8e8 */
    FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036f934;
  }
  if (param_4 != 0) {
    uVar4 = param_4 - 1U & 0x3fffffffffffffff;
    pfVar5 = param_3;
    if ((6 < uVar4) && (0x1f < (ulong)((long)param_5 - (long)param_3))) {
      uVar4 = uVar4 + 1;
      pfVar5 = param_3 + 4;
      pfVar7 = param_5 + 4;
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      param_5 = param_5 + uVar6;
      uVar8 = uVar6;
      do {
        pfVar2 = pfVar5 + -2;
        uVar3 = *(undefined8 *)(pfVar5 + -4);
        uVar10 = *(undefined8 *)(pfVar5 + 2);
        uVar9 = *(undefined8 *)pfVar5;
        uVar8 = uVar8 - 8;
        pfVar5 = pfVar5 + 8;
        *(ulong *)(pfVar7 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar2 * param_1);
        *(ulong *)(pfVar7 + -4) =
             CONCAT44((float)((ulong)uVar3 >> 0x20) * param_1,(float)uVar3 * param_1);
        *(ulong *)(pfVar7 + 2) =
             CONCAT44((float)((ulong)uVar10 >> 0x20) * param_1,(float)uVar10 * param_1);
        *(ulong *)pfVar7 = CONCAT44((float)((ulong)uVar9 >> 0x20) * param_1,(float)uVar9 * param_1);
        pfVar7 = pfVar7 + 8;
      } while (uVar8 != 0);
      pfVar5 = param_3 + uVar6;
      if (uVar4 == uVar6) goto LAB_0036f864;
    }
    do {
      pfVar7 = pfVar5 + 1;
      *param_5 = *pfVar5 * param_1;
      param_5 = param_5 + 1;
      pfVar5 = pfVar7;
    } while (pfVar7 != param_3 + param_4);
  }
LAB_0036f864:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036f934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036f938  FUN_0036f938 =====

void FUN_0036f938(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 == (undefined8 *)0x0) || (param_4 == (undefined8 *)0x0)) ||
     (param_5 == (undefined8 *)0x0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036fa78 to 0036fa87 has its CatchHandler @ 0036faec */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorPlusVector: nullptr passed as argument"
                );
                    /* try { // try from 0036fa8c to 0036fac7 has its CatchHandler @ 0036fac8 */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036fb14;
  }
  if (param_3 != 0) {
    uVar3 = param_3 - 1U & 0x1fffffffffffffff;
    puVar4 = param_2;
    if (6 < uVar3) {
      if ((param_5 + param_3 <= param_2 || param_2 + param_3 <= param_5) &&
         (param_4 + param_3 <= param_5 || param_5 + param_3 <= param_4)) {
        uVar3 = uVar3 + 1;
        pfVar7 = (float *)(param_5 + 4);
        uVar6 = uVar3 & 0x3ffffffffffffff8;
        param_5 = param_5 + uVar6;
        pfVar8 = (float *)(param_4 + 4);
        pfVar9 = (float *)(param_2 + 4);
        uVar10 = uVar6;
        do {
          fVar14 = pfVar9[1];
          fVar11 = pfVar9[2];
          fVar15 = pfVar9[3];
          fVar12 = pfVar9[4];
          fVar16 = pfVar9[5];
          fVar13 = pfVar9[6];
          fVar17 = pfVar9[7];
          uVar10 = uVar10 - 8;
          fVar21 = pfVar8[1];
          fVar18 = pfVar8[2];
          fVar22 = pfVar8[3];
          fVar19 = pfVar8[4];
          fVar23 = pfVar8[5];
          fVar20 = pfVar8[6];
          fVar24 = pfVar8[7];
          fVar25 = pfVar9[-8];
          fVar29 = pfVar9[-7];
          fVar26 = pfVar9[-6];
          fVar30 = pfVar9[-5];
          fVar27 = pfVar9[-4];
          fVar31 = pfVar9[-3];
          fVar28 = pfVar9[-2];
          fVar32 = pfVar9[-1];
          fVar33 = pfVar8[-8];
          fVar37 = pfVar8[-7];
          fVar34 = pfVar8[-6];
          fVar38 = pfVar8[-5];
          fVar35 = pfVar8[-4];
          fVar39 = pfVar8[-3];
          fVar36 = pfVar8[-2];
          fVar40 = pfVar8[-1];
          *pfVar7 = *pfVar9 + *pfVar8;
          pfVar7[1] = fVar14 + fVar21;
          pfVar7[2] = fVar11 + fVar18;
          pfVar7[3] = fVar15 + fVar22;
          pfVar7[4] = fVar12 + fVar19;
          pfVar7[5] = fVar16 + fVar23;
          pfVar7[6] = fVar13 + fVar20;
          pfVar7[7] = fVar17 + fVar24;
          pfVar7[-8] = fVar25 + fVar33;
          pfVar7[-7] = fVar29 + fVar37;
          pfVar7[-6] = fVar26 + fVar34;
          pfVar7[-5] = fVar30 + fVar38;
          pfVar7[-4] = fVar27 + fVar35;
          pfVar7[-3] = fVar31 + fVar39;
          pfVar7[-2] = fVar28 + fVar36;
          pfVar7[-1] = fVar32 + fVar40;
          pfVar7 = pfVar7 + 0x10;
          pfVar8 = pfVar8 + 0x10;
          pfVar9 = pfVar9 + 0x10;
        } while (uVar10 != 0);
        puVar4 = param_2 + uVar6;
        param_4 = param_4 + uVar6;
        if (uVar3 == uVar6) goto LAB_0036f99c;
      }
    }
    do {
      puVar5 = puVar4 + 1;
      *param_5 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + (float)((ulong)*param_4 >> 0x20),
                          (float)*puVar4 + (float)*param_4);
      param_5 = param_5 + 1;
      puVar4 = puVar5;
      param_4 = param_4 + 1;
    } while (puVar5 != param_2 + param_3);
  }
LAB_0036f99c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036fb14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fb18  FUN_0036fb18 =====

void FUN_0036fb18(undefined8 param_1,short *param_2,long param_3,float *param_4,float *param_5)

{
  long lVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  undefined8 uVar17;
  ulong uVar18;
  short *psVar19;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auStack_50 [24];
  long local_38;
  short *psVar20;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 == (short *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
    uVar17 = FUN_00753a74(0x20);
                    /* try { // try from 0036fc48 to 0036fc57 has its CatchHandler @ 0036fcbc */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorMulVector: nullptr passed as argument")
    ;
                    /* try { // try from 0036fc5c to 0036fc97 has its CatchHandler @ 0036fc98 */
    FUN_00374ee0(uVar17,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar17,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036fce4;
  }
  if (param_3 != 0) {
    uVar18 = param_3 - 1U & 0x7fffffffffffffff;
    psVar19 = param_2;
    if ((0xe < uVar18) && (0x3f < (ulong)((long)param_5 - (long)param_4))) {
      uVar18 = uVar18 + 1;
      psVar19 = param_2 + 8;
      pfVar22 = param_4 + 8;
      uVar21 = uVar18 & 0xfffffffffffffff0;
      pfVar23 = param_5 + 8;
      param_5 = param_5 + uVar21;
      param_4 = param_4 + uVar21;
      uVar24 = uVar21;
      do {
        psVar20 = psVar19 + -8;
        psVar2 = psVar19 + -7;
        psVar3 = psVar19 + -6;
        psVar4 = psVar19 + -5;
        psVar5 = psVar19 + -4;
        psVar6 = psVar19 + -3;
        psVar7 = psVar19 + -2;
        psVar8 = psVar19 + -1;
        sVar9 = *psVar19;
        psVar10 = psVar19 + 1;
        psVar11 = psVar19 + 2;
        psVar12 = psVar19 + 3;
        psVar13 = psVar19 + 4;
        psVar14 = psVar19 + 5;
        psVar15 = psVar19 + 6;
        psVar16 = psVar19 + 7;
        uVar24 = uVar24 - 0x10;
        uVar31 = *(undefined8 *)(pfVar22 + -2);
        uVar17 = *(undefined8 *)(pfVar22 + -4);
        psVar19 = psVar19 + 0x10;
        auVar28._0_4_ = (int)*psVar5;
        auVar28._4_4_ = (int)*psVar6;
        auVar28._8_4_ = (int)*psVar7;
        auVar28._12_4_ = (int)*psVar8;
        auVar25._0_4_ = (int)*psVar20;
        auVar25._4_4_ = (int)*psVar2;
        auVar25._8_4_ = (int)*psVar3;
        auVar25._12_4_ = (int)*psVar4;
        auVar29._0_4_ = (int)*psVar13;
        auVar29._4_4_ = (int)*psVar14;
        auVar29._8_4_ = (int)*psVar15;
        auVar29._12_4_ = (int)*psVar16;
        auVar27._0_4_ = (int)sVar9;
        auVar27._4_4_ = (int)*psVar10;
        auVar27._8_4_ = (int)*psVar11;
        auVar27._12_4_ = (int)*psVar12;
        auVar28 = NEON_scvtf(auVar28,4);
        auVar25 = NEON_scvtf(auVar25,4);
        auVar29 = NEON_scvtf(auVar29,4);
        auVar27 = NEON_scvtf(auVar27,4);
        auVar26._0_8_ =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + -8) >> 0x20) * auVar25._4_4_,
                      (float)*(undefined8 *)(pfVar22 + -8) * auVar25._0_4_);
        auVar26._8_4_ = (float)*(undefined8 *)(pfVar22 + -6) * auVar25._8_4_;
        auVar26._12_4_ = (float)((ulong)*(undefined8 *)(pfVar22 + -6) >> 0x20) * auVar25._12_4_;
        uVar34 = *(undefined8 *)(pfVar22 + 2);
        uVar33 = *(undefined8 *)pfVar22;
        uVar32 = *(undefined8 *)(pfVar22 + 6);
        uVar30 = *(undefined8 *)(pfVar22 + 4);
        *(long *)(pfVar23 + -6) = auVar26._8_8_;
        *(undefined8 *)(pfVar23 + -8) = auVar26._0_8_;
        *pfVar23 = (float)uVar31 * auVar28._8_4_;
        pfVar23[1] = (float)((ulong)uVar31 >> 0x20) * auVar28._12_4_;
        pfVar23[-4] = (float)uVar17 * auVar28._0_4_;
        pfVar23[-3] = (float)((ulong)uVar17 >> 0x20) * auVar28._4_4_;
        pfVar23[4] = (float)uVar34 * auVar27._8_4_;
        pfVar23[5] = (float)((ulong)uVar34 >> 0x20) * auVar27._12_4_;
        *pfVar23 = (float)uVar33 * auVar27._0_4_;
        pfVar23[1] = (float)((ulong)uVar33 >> 0x20) * auVar27._4_4_;
        pfVar23[8] = (float)uVar32 * auVar29._8_4_;
        pfVar23[9] = (float)((ulong)uVar32 >> 0x20) * auVar29._12_4_;
        pfVar23[4] = (float)uVar30 * auVar29._0_4_;
        pfVar23[5] = (float)((ulong)uVar30 >> 0x20) * auVar29._4_4_;
        pfVar22 = pfVar22 + 0x10;
        pfVar23 = pfVar23 + 0x10;
      } while (uVar24 != 0);
      psVar19 = param_2 + uVar21;
      if (uVar18 == uVar21) goto LAB_0036fc14;
    }
    do {
      psVar20 = psVar19 + 1;
      *param_5 = *param_4 * (float)(int)*psVar19;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      psVar19 = psVar20;
    } while (psVar20 != param_2 + param_3);
  }
LAB_0036fc14:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_0036fce4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fce8  FUN_0036fce8 =====

void FUN_0036fce8(undefined8 param_1,float *param_2,long param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0036fe2c to 0036fe3b has its CatchHandler @ 0036fea0 */
    FUN_002fd2b0(auStack_50,"NonOptimizedVectorExtOps::vectorMulVector: nullptr passed as argument")
    ;
                    /* try { // try from 0036fe40 to 0036fe7b has its CatchHandler @ 0036fe7c */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0036fec8;
  }
  if (param_3 != 0) {
    uVar7 = param_3 - 1;
    uVar5 = uVar7 & 0x1fffffffffffffff;
    pfVar6 = param_2;
    if (10 < uVar5) {
      if ((param_5 + uVar7 * 2 + 2 <= param_2 || param_2 + uVar7 * 2 + 2 <= param_5) &&
         (param_4 + uVar5 + 1 <= param_5 || param_5 + uVar7 * 2 + 2 <= param_4)) {
        pfVar6 = param_5 + 8;
        uVar8 = uVar5 + 1 & 0x3ffffffffffffff8;
        param_5 = param_5 + uVar8 * 2;
        pfVar9 = param_4 + 4;
        pfVar10 = param_2 + 8;
        uVar7 = uVar8;
        do {
          fVar18 = pfVar10[1];
          fVar12 = pfVar10[2];
          fVar19 = pfVar10[3];
          fVar14 = pfVar10[4];
          fVar20 = pfVar10[5];
          fVar16 = pfVar10[6];
          fVar21 = pfVar10[7];
          uVar7 = uVar7 - 8;
          fVar26 = pfVar10[-8];
          fVar30 = pfVar10[-7];
          fVar27 = pfVar10[-6];
          fVar31 = pfVar10[-5];
          fVar28 = pfVar10[-4];
          fVar32 = pfVar10[-3];
          fVar29 = pfVar10[-2];
          fVar33 = pfVar10[-1];
          fVar22 = (float)*(undefined8 *)pfVar9;
          fVar23 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          fVar24 = (float)*(undefined8 *)(pfVar9 + 2);
          fVar25 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
          pfVar1 = pfVar9 + -4;
          pfVar3 = pfVar9 + -2;
          pfVar9 = pfVar9 + 8;
          fVar11 = (float)*(undefined8 *)pfVar1;
          fVar13 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
          fVar15 = (float)*(undefined8 *)pfVar3;
          fVar17 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
          *pfVar6 = *pfVar10 * fVar22;
          pfVar6[1] = fVar18 * fVar22;
          pfVar6[2] = fVar12 * fVar23;
          pfVar6[3] = fVar19 * fVar23;
          pfVar6[4] = fVar14 * fVar24;
          pfVar6[5] = fVar20 * fVar24;
          pfVar6[6] = fVar16 * fVar25;
          pfVar6[7] = fVar21 * fVar25;
          pfVar6[-8] = fVar26 * fVar11;
          pfVar6[-7] = fVar30 * fVar11;
          pfVar6[-6] = fVar27 * fVar13;
          pfVar6[-5] = fVar31 * fVar13;
          pfVar6[-4] = fVar28 * fVar15;
          pfVar6[-3] = fVar32 * fVar15;
          pfVar6[-2] = fVar29 * fVar17;
          pfVar6[-1] = fVar33 * fVar17;
          pfVar6 = pfVar6 + 0x10;
          pfVar10 = pfVar10 + 0x10;
        } while (uVar7 != 0);
        pfVar6 = param_2 + uVar8 * 2;
        param_4 = param_4 + uVar8;
        if (uVar5 + 1 == uVar8) goto LAB_0036fd4c;
      }
    }
    do {
      pfVar9 = pfVar6 + 2;
      *(ulong *)param_5 =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar6 >> 0x20) * *param_4,
                    (float)*(undefined8 *)pfVar6 * *param_4);
      param_5 = param_5 + 2;
      pfVar6 = pfVar9;
      param_4 = param_4 + 1;
    } while (pfVar9 != param_2 + param_3 * 2);
  }
LAB_0036fd4c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0036fec8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fecc  FUN_0036fecc =====

void FUN_0036fecc(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4,
                 long param_5,long param_6,undefined4 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((param_4 == 0) || (param_6 == 0)) || (param_7 == (undefined4 *)0x0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0036ff64 to 0036ff73 has its CatchHandler @ 0036ffd4 */
    FUN_002fd2b0(auStack_60,"NonOptimizedVectorExtOps::vectorMulVector: nullptr passed as argument")
    ;
                    /* try { // try from 0036ff78 to 0036ffaf has its CatchHandler @ 0036ffb0 */
    FUN_00374ee0(uVar2,auStack_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if (param_5 != 0) {
      param_5 = param_5 << 3;
      do {
        uVar3 = FUN_0031fa70(param_4,param_6);
        param_5 = param_5 + -8;
        param_4 = param_4 + 8;
        param_6 = param_6 + 8;
        *param_7 = uVar3;
        param_7[1] = param_2;
        param_7 = param_7 + 2;
      } while (param_5 != 0);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0036fffc  FUN_0036fffc =====

void FUN_0036fffc(undefined8 param_1,long param_2,ulong param_3,long param_4,long param_5,
                 long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  float *pfVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((param_2 == 0) || (param_4 == 0)) || (param_5 == 0)) || (param_6 == 0)) {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00370140 to 0037014f has its CatchHandler @ 003701b4 */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::vectorSymmetricSumWithCoefficient: nullptr passed as argument"
                );
                    /* try { // try from 00370154 to 0037018f has its CatchHandler @ 00370190 */
    FUN_00374ee0(uVar6,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003701dc;
  }
  if (param_3 != 0) {
    if (param_3 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (((0x1f < (ulong)(param_6 - param_4)) && (0x1f < (ulong)(param_6 - param_2))) &&
         (0x1f < (ulong)(param_6 - param_5))) {
        auVar19 = NEON_fmov(0x3f800000,4);
        uVar7 = param_3 & 0xfffffffffffffff8;
        puVar10 = (undefined8 *)(param_4 + 0x10);
        puVar12 = (undefined8 *)(param_2 + 0x10);
        puVar14 = (undefined8 *)(param_5 + 0x10);
        puVar17 = (undefined8 *)(param_6 + 0x10);
        uVar18 = uVar7;
        do {
          puVar1 = puVar10 + -2;
          puVar3 = puVar10 + -1;
          puVar4 = puVar10 + 1;
          uVar6 = *puVar10;
          puVar10 = puVar10 + 4;
          puVar5 = puVar14 + -1;
          uVar29 = puVar14[-2];
          uVar32 = puVar14[1];
          uVar30 = *puVar14;
          uVar18 = uVar18 - 8;
          puVar14 = puVar14 + 4;
          fVar21 = (float)*puVar1;
          fVar22 = (float)((ulong)*puVar1 >> 0x20);
          fVar23 = (float)*puVar3;
          fVar24 = (float)((ulong)*puVar3 >> 0x20);
          fVar25 = (float)uVar6;
          fVar26 = (float)((ulong)uVar6 >> 0x20);
          fVar27 = (float)*puVar4;
          fVar28 = (float)((ulong)*puVar4 >> 0x20);
          puVar1 = puVar12 + -1;
          uVar6 = puVar12[-2];
          uVar33 = puVar12[1];
          uVar31 = *puVar12;
          puVar12 = puVar12 + 4;
          puVar17[-1] = CONCAT44((auVar19._12_4_ - fVar24) * (float)((ulong)*puVar5 >> 0x20) +
                                 (float)((ulong)*puVar1 >> 0x20) * fVar24,
                                 (auVar19._8_4_ - fVar23) * (float)*puVar5 + (float)*puVar1 * fVar23
                                );
          puVar17[-2] = CONCAT44((auVar19._4_4_ - fVar22) * (float)((ulong)uVar29 >> 0x20) +
                                 (float)((ulong)uVar6 >> 0x20) * fVar22,
                                 (auVar19._0_4_ - fVar21) * (float)uVar29 + (float)uVar6 * fVar21);
          puVar17[1] = CONCAT44((auVar19._12_4_ - fVar28) * (float)((ulong)uVar32 >> 0x20) +
                                (float)((ulong)uVar33 >> 0x20) * fVar28,
                                (auVar19._8_4_ - fVar27) * (float)uVar32 + (float)uVar33 * fVar27);
          *puVar17 = CONCAT44((auVar19._4_4_ - fVar26) * (float)((ulong)uVar30 >> 0x20) +
                              (float)((ulong)uVar31 >> 0x20) * fVar26,
                              (auVar19._0_4_ - fVar25) * (float)uVar30 + (float)uVar31 * fVar25);
          puVar17 = puVar17 + 4;
        } while (uVar18 != 0);
        if (uVar7 == param_3) goto LAB_0037007c;
      }
    }
    lVar15 = uVar7 * 4;
    lVar8 = param_3 - uVar7;
    puVar9 = (undefined4 *)(param_6 + lVar15);
    pfVar11 = (float *)(param_5 + lVar15);
    puVar13 = (undefined4 *)(param_2 + lVar15);
    pfVar16 = (float *)(param_4 + lVar15);
    do {
      lVar8 = lVar8 + -1;
      uVar20 = NEON_fmadd(*pfVar16,*puVar13,(1.0 - *pfVar16) * *pfVar11);
      *puVar9 = uVar20;
      puVar9 = puVar9 + 1;
      pfVar11 = pfVar11 + 1;
      puVar13 = puVar13 + 1;
      pfVar16 = pfVar16 + 1;
    } while (lVar8 != 0);
  }
LAB_0037007c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_003701dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003701e0  FUN_003701e0 =====

void FUN_003701e0(float param_1,undefined8 param_2,undefined4 *param_3,long param_4,float *param_5,
                 undefined4 *param_6)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == (undefined4 *)0x0) || (param_5 == (float *)0x0)) ||
     (param_6 == (undefined4 *)0x0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00370308 to 00370317 has its CatchHandler @ 0037037c */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::vectorSymmetricSumWithCoefficient: nullptr passed as argument"
                );
                    /* try { // try from 0037031c to 00370357 has its CatchHandler @ 00370358 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003703a4;
  }
  if (param_4 != 0) {
    uVar5 = param_4 - 1U & 0x3fffffffffffffff;
    fVar13 = 1.0 - param_1;
    puVar6 = param_3;
    if (((6 < uVar5) && (0x1f < (ulong)((long)param_6 - (long)param_3))) &&
       (0x1f < (ulong)((long)param_6 - (long)param_5))) {
      uVar5 = uVar5 + 1;
      puVar9 = (undefined8 *)(param_3 + 4);
      uVar8 = uVar5 & 0x7ffffffffffffff8;
      pfVar10 = param_5 + 4;
      puVar11 = (undefined8 *)(param_6 + 4);
      param_6 = param_6 + uVar8;
      param_5 = param_5 + uVar8;
      uVar12 = uVar8;
      do {
        pfVar2 = pfVar10 + -2;
        uVar4 = *(undefined8 *)(pfVar10 + -4);
        uVar16 = *(undefined8 *)(pfVar10 + 2);
        uVar15 = *(undefined8 *)pfVar10;
        uVar12 = uVar12 - 8;
        puVar3 = puVar9 + -1;
        uVar17 = puVar9[-2];
        uVar19 = puVar9[1];
        uVar18 = *puVar9;
        puVar9 = puVar9 + 4;
        pfVar10 = pfVar10 + 8;
        puVar11[-1] = CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * fVar13 +
                               (float)((ulong)*puVar3 >> 0x20) * param_1,
                               (float)*(undefined8 *)pfVar2 * fVar13 + (float)*puVar3 * param_1);
        puVar11[-2] = CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar13 +
                               (float)((ulong)uVar17 >> 0x20) * param_1,
                               (float)uVar4 * fVar13 + (float)uVar17 * param_1);
        puVar11[1] = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar13 +
                              (float)((ulong)uVar19 >> 0x20) * param_1,
                              (float)uVar16 * fVar13 + (float)uVar19 * param_1);
        *puVar11 = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar13 +
                            (float)((ulong)uVar18 >> 0x20) * param_1,
                            (float)uVar15 * fVar13 + (float)uVar18 * param_1);
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
      puVar6 = param_3 + uVar8;
      if (uVar5 == uVar8) goto LAB_00370254;
    }
    do {
      puVar7 = puVar6 + 1;
      uVar14 = NEON_fmadd(param_1,*puVar6,fVar13 * *param_5);
      *param_6 = uVar14;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
      puVar6 = puVar7;
    } while (puVar7 != param_3 + param_4);
  }
LAB_00370254:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003703a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003703a8  FUN_003703a8 =====

void FUN_003703a8(undefined8 param_1,float *param_2,long param_3,float *param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003704cc to 003704db has its CatchHandler @ 00370540 */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::vectorMulBySymmetricCoefficient: nullptr passed as argument"
                );
                    /* try { // try from 003704e0 to 0037051b has its CatchHandler @ 0037051c */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00370568;
  }
  if (param_3 != 0) {
    uVar5 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar6 = param_2;
    if (((6 < uVar5) && (0x1f < (ulong)((long)param_5 - (long)param_2))) &&
       (0x1f < (ulong)((long)param_5 - (long)param_4))) {
      uVar5 = uVar5 + 1;
      auVar11 = NEON_fmov(0x3f800000,4);
      pfVar6 = param_2 + 4;
      uVar7 = uVar5 & 0x7ffffffffffffff8;
      pfVar8 = param_4 + 4;
      pfVar9 = param_5 + 4;
      param_5 = param_5 + uVar7;
      param_4 = param_4 + uVar7;
      uVar10 = uVar7;
      do {
        pfVar2 = pfVar8 + -2;
        uVar4 = *(undefined8 *)(pfVar8 + -4);
        uVar13 = *(undefined8 *)(pfVar8 + 2);
        uVar12 = *(undefined8 *)pfVar8;
        uVar10 = uVar10 - 8;
        pfVar3 = pfVar6 + -2;
        uVar14 = *(undefined8 *)(pfVar6 + -4);
        uVar16 = *(undefined8 *)(pfVar6 + 2);
        uVar15 = *(undefined8 *)pfVar6;
        pfVar6 = pfVar6 + 8;
        pfVar8 = pfVar8 + 8;
        *(ulong *)(pfVar9 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) *
                      (auVar11._12_4_ - (float)((ulong)*(undefined8 *)pfVar2 >> 0x20)),
                      (float)*(undefined8 *)pfVar3 * (auVar11._8_4_ - (float)*(undefined8 *)pfVar2))
        ;
        *(ulong *)(pfVar9 + -4) =
             CONCAT44((float)((ulong)uVar14 >> 0x20) *
                      (auVar11._4_4_ - (float)((ulong)uVar4 >> 0x20)),
                      (float)uVar14 * (auVar11._0_4_ - (float)uVar4));
        *(ulong *)(pfVar9 + 2) =
             CONCAT44((float)((ulong)uVar16 >> 0x20) *
                      (auVar11._12_4_ - (float)((ulong)uVar13 >> 0x20)),
                      (float)uVar16 * (auVar11._8_4_ - (float)uVar13));
        *(ulong *)pfVar9 =
             CONCAT44((float)((ulong)uVar15 >> 0x20) *
                      (auVar11._4_4_ - (float)((ulong)uVar12 >> 0x20)),
                      (float)uVar15 * (auVar11._0_4_ - (float)uVar12));
        pfVar9 = pfVar9 + 8;
      } while (uVar10 != 0);
      pfVar6 = param_2 + uVar7;
      if (uVar5 == uVar7) goto LAB_00370418;
    }
    do {
      pfVar8 = pfVar6 + 1;
      *param_5 = *pfVar6 * (1.0 - *param_4);
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      pfVar6 = pfVar8;
    } while (pfVar8 != param_2 + param_3);
  }
LAB_00370418:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00370568:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037056c  FUN_0037056c =====

void FUN_0037056c(float param_1,undefined8 param_2,float *param_3,long param_4,float *param_5)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (float *)0x0) || (param_5 == (float *)0x0)) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0037065c to 0037066b has its CatchHandler @ 003706d0 */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::vectorMulBySymmetricCoefficient: nullptr passed as argument"
                );
                    /* try { // try from 00370670 to 003706ab has its CatchHandler @ 003706ac */
    FUN_00374ee0(uVar3,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003706f8;
  }
  if (param_4 != 0) {
    uVar4 = param_4 - 1U & 0x3fffffffffffffff;
    param_1 = 1.0 - param_1;
    pfVar5 = param_3;
    if ((6 < uVar4) && (0x1f < (ulong)((long)param_5 - (long)param_3))) {
      uVar4 = uVar4 + 1;
      pfVar5 = param_3 + 4;
      pfVar7 = param_5 + 4;
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      param_5 = param_5 + uVar6;
      uVar8 = uVar6;
      do {
        pfVar2 = pfVar5 + -2;
        uVar3 = *(undefined8 *)(pfVar5 + -4);
        uVar10 = *(undefined8 *)(pfVar5 + 2);
        uVar9 = *(undefined8 *)pfVar5;
        uVar8 = uVar8 - 8;
        pfVar5 = pfVar5 + 8;
        *(ulong *)(pfVar7 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar2 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar2 * param_1);
        *(ulong *)(pfVar7 + -4) =
             CONCAT44((float)((ulong)uVar3 >> 0x20) * param_1,(float)uVar3 * param_1);
        *(ulong *)(pfVar7 + 2) =
             CONCAT44((float)((ulong)uVar10 >> 0x20) * param_1,(float)uVar10 * param_1);
        *(ulong *)pfVar7 = CONCAT44((float)((ulong)uVar9 >> 0x20) * param_1,(float)uVar9 * param_1);
        pfVar7 = pfVar7 + 8;
      } while (uVar8 != 0);
      pfVar5 = param_3 + uVar6;
      if (uVar4 == uVar6) goto LAB_00370628;
    }
    do {
      pfVar7 = pfVar5 + 1;
      *param_5 = param_1 * *pfVar5;
      param_5 = param_5 + 1;
      pfVar5 = pfVar7;
    } while (pfVar7 != param_3 + param_4);
  }
LAB_00370628:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003706f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003706fc  FUN_003706fc =====

void FUN_003706fc(undefined8 param_1,float *param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  unkbyte9 Var6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_50 [24];
  long local_38;
  float *pfVar10;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (undefined4 *)0x0)) {
    uVar7 = FUN_00753a74(0x20);
                    /* try { // try from 003707f4 to 00370803 has its CatchHandler @ 00370868 */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::affectVectorByRelu: nullptr passed as argument");
                    /* try { // try from 00370808 to 00370843 has its CatchHandler @ 00370844 */
    FUN_00374ee0(uVar7,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar7,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00370890;
  }
  if (param_3 != 0) {
    uVar8 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar9 = param_2;
    if ((6 < uVar8) && (0x1f < (ulong)((long)param_4 - (long)param_2))) {
      uVar8 = uVar8 + 1;
      pfVar9 = param_2 + 4;
      puVar12 = (undefined8 *)(param_4 + 4);
      uVar11 = uVar8 & 0x7ffffffffffffff8;
      param_4 = param_4 + uVar11;
      uVar13 = uVar11;
      do {
        pfVar10 = pfVar9 + -4;
        uVar2 = *(undefined8 *)(pfVar9 + -2);
        bVar14 = (byte)((ulong)uVar2 >> 8);
        bVar15 = (byte)((ulong)uVar2 >> 0x10);
        bVar16 = (byte)((ulong)uVar2 >> 0x18);
        bVar17 = (byte)((ulong)uVar2 >> 0x20);
        bVar18 = (byte)((ulong)uVar2 >> 0x28);
        bVar19 = (byte)((ulong)uVar2 >> 0x30);
        bVar20 = (byte)((ulong)uVar2 >> 0x38);
        uVar7 = *(undefined8 *)pfVar10;
        uVar5 = *(undefined8 *)(pfVar9 + 2);
        bVar25 = (byte)((ulong)uVar5 >> 8);
        bVar26 = (byte)((ulong)uVar5 >> 0x10);
        bVar27 = (byte)((ulong)uVar5 >> 0x18);
        bVar28 = (byte)((ulong)uVar5 >> 0x20);
        bVar29 = (byte)((ulong)uVar5 >> 0x28);
        bVar30 = (byte)((ulong)uVar5 >> 0x30);
        bVar31 = (byte)((ulong)uVar5 >> 0x38);
        uVar4 = *(undefined8 *)pfVar9;
        Var6 = *(unkbyte9 *)pfVar9;
        uVar13 = uVar13 - 8;
        pfVar9 = pfVar9 + 8;
        auVar32[9] = bVar14;
        auVar32._0_9_ = *(unkbyte9 *)pfVar10;
        auVar32[10] = bVar15;
        auVar32[0xb] = bVar16;
        auVar32[0xc] = bVar17;
        auVar32[0xd] = bVar18;
        auVar32[0xe] = bVar19;
        auVar32[0xf] = bVar20;
        auVar32 = NEON_fcmlt(auVar32,0,4);
        auVar33[9] = bVar25;
        auVar33._0_9_ = Var6;
        auVar33[10] = bVar26;
        auVar33[0xb] = bVar27;
        auVar33[0xc] = bVar28;
        auVar33[0xd] = bVar29;
        auVar33[0xe] = bVar30;
        auVar33[0xf] = bVar31;
        auVar33 = NEON_fcmlt(auVar33,0,4);
        puVar12[-1] = CONCAT17(bVar20 & ~auVar32[0xf],
                               CONCAT16(bVar19 & ~auVar32[0xe],
                                        CONCAT15(bVar18 & ~auVar32[0xd],
                                                 CONCAT14(bVar17 & ~auVar32[0xc],
                                                          CONCAT13(bVar16 & ~auVar32[0xb],
                                                                   CONCAT12(bVar15 & ~auVar32[10],
                                                                            CONCAT11(bVar14 & ~
                                                  auVar32[9],(byte)uVar2 & ~auVar32[8])))))));
        puVar12[-2] = CONCAT17((byte)((ulong)uVar7 >> 0x38) & ~auVar32[7],
                               CONCAT16((byte)((ulong)uVar7 >> 0x30) & ~auVar32[6],
                                        CONCAT15((byte)((ulong)uVar7 >> 0x28) & ~auVar32[5],
                                                 CONCAT14((byte)((ulong)uVar7 >> 0x20) & ~auVar32[4]
                                                          ,CONCAT13((byte)((ulong)uVar7 >> 0x18) &
                                                                    ~auVar32[3],
                                                                    CONCAT12((byte)((ulong)uVar7 >>
                                                                                   0x10) &
                                                                             ~auVar32[2],
                                                                             CONCAT11((byte)((ulong)
                                                  uVar7 >> 8) & ~auVar32[1],
                                                  (byte)uVar7 & ~auVar32[0])))))));
        puVar12[1] = CONCAT17(bVar31 & ~auVar33[0xf],
                              CONCAT16(bVar30 & ~auVar33[0xe],
                                       CONCAT15(bVar29 & ~auVar33[0xd],
                                                CONCAT14(bVar28 & ~auVar33[0xc],
                                                         CONCAT13(bVar27 & ~auVar33[0xb],
                                                                  CONCAT12(bVar26 & ~auVar33[10],
                                                                           CONCAT11(bVar25 & ~
                                                  auVar33[9],(byte)uVar5 & ~auVar33[8])))))));
        *puVar12 = CONCAT17((byte)((ulong)uVar4 >> 0x38) & ~auVar33[7],
                            CONCAT16((byte)((ulong)uVar4 >> 0x30) & ~auVar33[6],
                                     CONCAT15((byte)((ulong)uVar4 >> 0x28) & ~auVar33[5],
                                              CONCAT14((byte)((ulong)uVar4 >> 0x20) & ~auVar33[4],
                                                       CONCAT13((byte)((ulong)uVar4 >> 0x18) &
                                                                ~auVar33[3],
                                                                CONCAT12((byte)((ulong)uVar4 >> 0x10
                                                                               ) & ~auVar33[2],
                                                                         CONCAT11((byte)((ulong)
                                                  uVar4 >> 8) & ~auVar33[1],
                                                  (byte)uVar4 & ~auVar33[0])))))));
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      pfVar9 = param_2 + uVar11;
      if (uVar8 == uVar11) goto LAB_003707c0;
    }
    do {
      pfVar10 = pfVar9 + 1;
      fVar3 = *pfVar9;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      if (0.0 <= fVar3) {
        uVar21 = SUB41(fVar3,0);
        uVar22 = (undefined1)((uint)fVar3 >> 8);
        uVar23 = (undefined1)((uint)fVar3 >> 0x10);
        uVar24 = (undefined1)((uint)fVar3 >> 0x18);
      }
      *param_4 = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
      param_4 = param_4 + 1;
      pfVar9 = pfVar10;
    } while (pfVar10 != param_2 + param_3);
  }
LAB_003707c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00370890:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370894  FUN_00370894 =====

void FUN_00370894(undefined8 param_1,float *param_2,long param_3,float *param_4,float *param_5)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  float *pfVar13;
  ulong uVar14;
  undefined1 (*pauVar15) [16];
  float *pfVar16;
  ulong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) || (param_5 == (float *)0x0)) {
    uVar11 = FUN_00753a74(0x20);
                    /* try { // try from 003709c4 to 003709d3 has its CatchHandler @ 00370a38 */
    FUN_002fd2b0(auStack_50,
                 "NonOptimizedVectorExtOps::affectVecAByReluAddVecB: nullptr passed as argument");
                    /* try { // try from 003709d8 to 00370a13 has its CatchHandler @ 00370a14 */
    FUN_00374ee0(uVar11,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar11,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00370a60;
  }
  if (param_3 != 0) {
    uVar12 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar13 = param_2;
    if (((6 < uVar12) && (0x1f < (ulong)((long)param_5 - (long)param_2))) &&
       (0x1f < (ulong)((long)param_5 - (long)param_4))) {
      uVar12 = uVar12 + 1;
      pauVar15 = (undefined1 (*) [16])(param_2 + 4);
      uVar14 = uVar12 & 0x7ffffffffffffff8;
      pfVar13 = param_4 + 4;
      pfVar16 = param_5 + 4;
      param_5 = param_5 + uVar14;
      param_4 = param_4 + uVar14;
      uVar17 = uVar14;
      do {
        pauVar1 = pauVar15 + -1;
        auVar3 = *pauVar15;
        uVar17 = uVar17 - 8;
        pauVar15 = pauVar15 + 2;
        auVar20 = NEON_fcmlt(*pauVar1,0,4);
        auVar21 = NEON_fcmlt(auVar3,0,4);
        auVar19._8_4_ = 0x80000000;
        auVar19._0_8_ = 0x8000000080000000;
        auVar19._12_4_ = 0x80000000;
        auVar19 = NEON_bit(*pauVar1,auVar19,auVar20,1);
        auVar20._8_4_ = 0x80000000;
        auVar20._0_8_ = 0x8000000080000000;
        auVar20._12_4_ = 0x80000000;
        auVar20 = NEON_bit(auVar3,auVar20,auVar21,1);
        fVar18 = pfVar13[-4];
        fVar4 = pfVar13[-3];
        pfVar5 = pfVar13 + -2;
        fVar6 = pfVar13[-1];
        fVar7 = *pfVar13;
        fVar8 = pfVar13[1];
        fVar9 = pfVar13[2];
        fVar10 = pfVar13[3];
        pfVar13 = pfVar13 + 8;
        *pfVar16 = *pfVar5 + auVar19._8_4_;
        pfVar16[1] = fVar6 + auVar19._12_4_;
        pfVar16[-4] = fVar18 + auVar19._0_4_;
        pfVar16[-3] = fVar4 + auVar19._4_4_;
        pfVar16[4] = fVar9 + auVar20._8_4_;
        pfVar16[5] = fVar10 + auVar20._12_4_;
        *pfVar16 = fVar7 + auVar20._0_4_;
        pfVar16[1] = fVar8 + auVar20._4_4_;
        pfVar16 = pfVar16 + 8;
      } while (uVar17 != 0);
      pfVar13 = param_2 + uVar14;
      if (uVar12 == uVar14) goto LAB_00370908;
    }
    do {
      pfVar16 = pfVar13 + 1;
      fVar18 = -0.0;
      if (0.0 <= *pfVar13) {
        fVar18 = *pfVar13;
      }
      *param_5 = *param_4 + fVar18;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      pfVar13 = pfVar16;
    } while (pfVar16 != param_2 + param_3);
  }
LAB_00370908:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00370a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370a64  FUN_00370a64 =====

void FUN_00370a64(undefined8 param_1,float *param_2,long param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00370c08 to 00370c17 has its CatchHandler @ 00370c78 */
    FUN_002fd2b0(auStack_90,
                 "NonOptimizedVectorExtOps::affectVectorBySigmoid: nullptr passed as argument");
                    /* try { // try from 00370c1c to 00370c53 has its CatchHandler @ 00370c54 */
    FUN_00374ee0(uVar5,auStack_90);
    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00370c9c;
  }
  if (param_3 != 0) {
    uVar6 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar7 = param_2;
    if ((2 < uVar6) && (0xf < (ulong)((long)param_4 - (long)param_2))) {
      uVar6 = uVar6 + 1;
      auVar16 = NEON_fmov(0x3ff0000000000000,8);
      uVar8 = uVar6 & 0x7ffffffffffffffc;
      dVar17 = auVar16._8_8_;
      dVar15 = auVar16._0_8_;
      pfVar7 = param_4;
      uVar9 = uVar8;
      pfVar10 = param_2;
      do {
        fVar2 = *pfVar10;
        fVar3 = pfVar10[1];
        fVar4 = pfVar10[2];
        dVar11 = exp(0.0 - (double)pfVar10[3]);
        dVar12 = exp(0.0 - (double)fVar4);
        dVar13 = exp(0.0 - (double)fVar3);
        dVar14 = exp(0.0 - (double)fVar2);
        uVar9 = uVar9 - 4;
        *(ulong *)(pfVar7 + 2) =
             CONCAT44((float)(dVar17 / (dVar11 + dVar17)),(float)(dVar15 / (dVar12 + dVar15)));
        *(ulong *)pfVar7 =
             CONCAT44((float)(dVar17 / (dVar13 + dVar17)),(float)(dVar15 / (dVar14 + dVar15)));
        pfVar7 = pfVar7 + 4;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
      param_4 = param_4 + uVar8;
      pfVar7 = param_2 + uVar8;
      if (uVar6 == uVar8) goto LAB_00370bc4;
    }
    do {
      pfVar10 = pfVar7 + 1;
      dVar15 = exp(0.0 - (double)*pfVar7);
      *param_4 = (float)(1.0 / (dVar15 + 1.0));
      param_4 = param_4 + 1;
      pfVar7 = pfVar10;
    } while (pfVar10 != param_2 + param_3);
  }
LAB_00370bc4:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
LAB_00370c9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370ca0  FUN_00370ca0 =====

void FUN_00370ca0(undefined8 param_1,float *param_2,long param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (float *)0x0) || (param_4 == (float *)0x0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00370e54 to 00370e63 has its CatchHandler @ 00370ec4 */
    FUN_002fd2b0(auStack_90,
                 "NonOptimizedVectorExtOps::affectVectorByTanh: nullptr passed as argument");
                    /* try { // try from 00370e68 to 00370e9f has its CatchHandler @ 00370ea0 */
    FUN_00374ee0(uVar5,auStack_90);
    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00370ee8;
  }
  if (param_3 != 0) {
    uVar6 = param_3 - 1U & 0x3fffffffffffffff;
    pfVar7 = param_2;
    if ((2 < uVar6) && (0xf < (ulong)((long)param_4 - (long)param_2))) {
      uVar6 = uVar6 + 1;
      auVar16 = NEON_fmov(0xbff0000000000000,8);
      auVar15 = NEON_fmov(0x3ff0000000000000,8);
      uVar8 = uVar6 & 0x7ffffffffffffffc;
      pfVar7 = param_4;
      uVar9 = uVar8;
      pfVar10 = param_2;
      do {
        fVar2 = *pfVar10;
        fVar3 = pfVar10[1];
        fVar4 = pfVar10[2];
        dVar11 = exp((double)pfVar10[3] + (double)pfVar10[3]);
        dVar12 = exp((double)fVar4 + (double)fVar4);
        dVar13 = exp((double)fVar3 + (double)fVar3);
        dVar14 = exp((double)fVar2 + (double)fVar2);
        uVar9 = uVar9 - 4;
        *(ulong *)(pfVar7 + 2) =
             CONCAT44((float)((dVar11 + auVar16._8_8_) / (dVar11 + auVar15._8_8_)),
                      (float)((dVar12 + auVar16._0_8_) / (dVar12 + auVar15._0_8_)));
        *(ulong *)pfVar7 =
             CONCAT44((float)((dVar13 + auVar16._8_8_) / (dVar13 + auVar15._8_8_)),
                      (float)((dVar14 + auVar16._0_8_) / (dVar14 + auVar15._0_8_)));
        pfVar7 = pfVar7 + 4;
        pfVar10 = pfVar10 + 4;
      } while (uVar9 != 0);
      param_4 = param_4 + uVar8;
      pfVar7 = param_2 + uVar8;
      if (uVar6 == uVar8) goto LAB_00370e10;
    }
    do {
      pfVar10 = pfVar7 + 1;
      dVar11 = exp((double)*pfVar7 + (double)*pfVar7);
      *param_4 = (float)((dVar11 + -1.0) / (dVar11 + 1.0));
      param_4 = param_4 + 1;
      pfVar7 = pfVar10;
    } while (pfVar10 != param_2 + param_3);
  }
LAB_00370e10:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
LAB_00370ee8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00370eec  FUN_00370eec =====

void FUN_00370eec(void)

{
  return;
}


// ===== 00370ef0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00370ef4  FUN_00370ef4 =====

void FUN_00370ef4(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_2 == 0) || (param_4 == 0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00370fc8 to 00370fd7 has its CatchHandler @ 0037103c */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasVsSqr: nullptr passed as argument");
                    /* try { // try from 00370fdc to 00371017 has its CatchHandler @ 00371018 */
    FUN_00374ee0(uVar5,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00371064;
  }
  if (param_3 != 0) {
    uVar6 = 0;
    if ((7 < param_3) && (0x1f < (ulong)(param_4 - param_2))) {
      uVar6 = param_3 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(param_2 + 0x10);
      puVar10 = (undefined8 *)(param_4 + 0x10);
      uVar12 = uVar6;
      do {
        puVar1 = puVar8 + -2;
        puVar3 = puVar8 + -1;
        puVar4 = puVar8 + 1;
        uVar5 = *puVar8;
        uVar12 = uVar12 - 8;
        puVar8 = puVar8 + 4;
        fVar13 = (float)*puVar1;
        fVar14 = (float)((ulong)*puVar1 >> 0x20);
        fVar15 = (float)*puVar3;
        fVar16 = (float)((ulong)*puVar3 >> 0x20);
        fVar17 = (float)uVar5;
        fVar18 = (float)((ulong)uVar5 >> 0x20);
        fVar19 = (float)*puVar4;
        fVar20 = (float)((ulong)*puVar4 >> 0x20);
        puVar10[-1] = CONCAT44(fVar16 * fVar16,fVar15 * fVar15);
        puVar10[-2] = CONCAT44(fVar14 * fVar14,fVar13 * fVar13);
        puVar10[1] = CONCAT44(fVar20 * fVar20,fVar19 * fVar19);
        *puVar10 = CONCAT44(fVar18 * fVar18,fVar17 * fVar17);
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar6 == param_3) goto LAB_00370f94;
    }
    lVar7 = param_3 - uVar6;
    pfVar9 = (float *)(param_4 + uVar6 * 4);
    pfVar11 = (float *)(param_2 + uVar6 * 4);
    do {
      lVar7 = lVar7 + -1;
      *pfVar9 = *pfVar11 * *pfVar11;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar7 != 0);
  }
LAB_00370f94:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00371064:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371068  FUN_00371068 =====

void FUN_00371068(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00371168 to 00371177 has its CatchHandler @ 003711dc */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasVsAdd: nullptr passed as argument");
                    /* try { // try from 0037117c to 003711b7 has its CatchHandler @ 003711b8 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00371204;
  }
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((0x1f < (ulong)(param_5 - param_3)) && (0x1f < (ulong)(param_5 - param_4))) {
        uVar5 = param_2 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(param_3 + 0x10);
        puVar10 = (undefined8 *)(param_4 + 0x10);
        puVar13 = (undefined8 *)(param_5 + 0x10);
        uVar14 = uVar5;
        do {
          puVar2 = puVar10 + -1;
          uVar4 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar14 = uVar14 - 8;
          puVar3 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
          puVar13[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)*puVar2 >> 0x20),
                                 (float)*puVar3 + (float)*puVar2);
          puVar13[-2] = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                                 (float)uVar15 + (float)uVar4);
          puVar13[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar19 >> 0x20),
                                (float)uVar17 + (float)uVar19);
          *puVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar18 >> 0x20),
                              (float)uVar16 + (float)uVar18);
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar5 == param_2) goto LAB_003710d0;
      }
    }
    lVar11 = uVar5 * 4;
    lVar6 = param_2 - uVar5;
    pfVar7 = (float *)(param_5 + lVar11);
    pfVar9 = (float *)(param_4 + lVar11);
    pfVar12 = (float *)(param_3 + lVar11);
    do {
      lVar6 = lVar6 + -1;
      *pfVar7 = *pfVar12 + *pfVar9;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_003710d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00371204:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371208  FUN_00371208 =====

void FUN_00371208(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00371308 to 00371317 has its CatchHandler @ 0037137c */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasVsSub: nullptr passed as argument");
                    /* try { // try from 0037131c to 00371357 has its CatchHandler @ 00371358 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003713a4;
  }
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((0x1f < (ulong)(param_5 - param_3)) && (0x1f < (ulong)(param_5 - param_4))) {
        uVar5 = param_2 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(param_3 + 0x10);
        puVar10 = (undefined8 *)(param_4 + 0x10);
        puVar13 = (undefined8 *)(param_5 + 0x10);
        uVar14 = uVar5;
        do {
          puVar2 = puVar10 + -1;
          uVar4 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar14 = uVar14 - 8;
          puVar3 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
          puVar13[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) - (float)((ulong)*puVar2 >> 0x20),
                                 (float)*puVar3 - (float)*puVar2);
          puVar13[-2] = CONCAT44((float)((ulong)uVar15 >> 0x20) - (float)((ulong)uVar4 >> 0x20),
                                 (float)uVar15 - (float)uVar4);
          puVar13[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar19 >> 0x20),
                                (float)uVar17 - (float)uVar19);
          *puVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar18 >> 0x20),
                              (float)uVar16 - (float)uVar18);
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar5 == param_2) goto LAB_00371270;
      }
    }
    lVar11 = uVar5 * 4;
    lVar6 = param_2 - uVar5;
    pfVar7 = (float *)(param_5 + lVar11);
    pfVar9 = (float *)(param_4 + lVar11);
    pfVar12 = (float *)(param_3 + lVar11);
    do {
      lVar6 = lVar6 + -1;
      *pfVar7 = *pfVar12 - *pfVar9;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_00371270:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003713a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003713a8  FUN_003713a8 =====

void FUN_003713a8(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003714a8 to 003714b7 has its CatchHandler @ 0037151c */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasVsMul: nullptr passed as argument");
                    /* try { // try from 003714bc to 003714f7 has its CatchHandler @ 003714f8 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00371544;
  }
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((0x1f < (ulong)(param_5 - param_3)) && (0x1f < (ulong)(param_5 - param_4))) {
        uVar5 = param_2 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(param_3 + 0x10);
        puVar10 = (undefined8 *)(param_4 + 0x10);
        puVar13 = (undefined8 *)(param_5 + 0x10);
        uVar14 = uVar5;
        do {
          puVar2 = puVar10 + -1;
          uVar4 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar14 = uVar14 - 8;
          puVar3 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
          puVar13[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) * (float)((ulong)*puVar2 >> 0x20),
                                 (float)*puVar3 * (float)*puVar2);
          puVar13[-2] = CONCAT44((float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar4 >> 0x20),
                                 (float)uVar15 * (float)uVar4);
          puVar13[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                                (float)uVar17 * (float)uVar19);
          *puVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar18 >> 0x20),
                              (float)uVar16 * (float)uVar18);
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar5 == param_2) goto LAB_00371410;
      }
    }
    lVar11 = uVar5 * 4;
    lVar6 = param_2 - uVar5;
    pfVar7 = (float *)(param_5 + lVar11);
    pfVar9 = (float *)(param_4 + lVar11);
    pfVar12 = (float *)(param_3 + lVar11);
    do {
      lVar6 = lVar6 + -1;
      *pfVar7 = *pfVar12 * *pfVar9;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_00371410:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00371544:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00371548  FUN_00371548 =====

void FUN_00371548(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_3 == 0) || (param_4 == 0)) || (param_5 == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00371648 to 00371657 has its CatchHandler @ 003716bc */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasVsDiv: nullptr passed as argument");
                    /* try { // try from 0037165c to 00371697 has its CatchHandler @ 00371698 */
    FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003716e4;
  }
  if (param_2 != 0) {
    if (param_2 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((0x1f < (ulong)(param_5 - param_3)) && (0x1f < (ulong)(param_5 - param_4))) {
        uVar5 = param_2 & 0xfffffffffffffff8;
        puVar8 = (undefined8 *)(param_3 + 0x10);
        puVar10 = (undefined8 *)(param_4 + 0x10);
        puVar13 = (undefined8 *)(param_5 + 0x10);
        uVar14 = uVar5;
        do {
          puVar2 = puVar10 + -1;
          uVar4 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          uVar14 = uVar14 - 8;
          puVar3 = puVar8 + -1;
          uVar15 = puVar8[-2];
          uVar17 = puVar8[1];
          uVar16 = *puVar8;
          puVar8 = puVar8 + 4;
          puVar10 = puVar10 + 4;
          puVar13[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) / (float)((ulong)*puVar2 >> 0x20),
                                 (float)*puVar3 / (float)*puVar2);
          puVar13[-2] = CONCAT44((float)((ulong)uVar15 >> 0x20) / (float)((ulong)uVar4 >> 0x20),
                                 (float)uVar15 / (float)uVar4);
          puVar13[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) / (float)((ulong)uVar19 >> 0x20),
                                (float)uVar17 / (float)uVar19);
          *puVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) / (float)((ulong)uVar18 >> 0x20),
                              (float)uVar16 / (float)uVar18);
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        if (uVar5 == param_2) goto LAB_003715b0;
      }
    }
    lVar11 = uVar5 * 4;
    lVar6 = param_2 - uVar5;
    pfVar7 = (float *)(param_5 + lVar11);
    pfVar9 = (float *)(param_4 + lVar11);
    pfVar12 = (float *)(param_3 + lVar11);
    do {
      lVar6 = lVar6 + -1;
      *pfVar7 = *pfVar12 / *pfVar9;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar6 != 0);
  }
LAB_003715b0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_003716e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003716e8  FUN_003716e8 =====

void FUN_003716e8(undefined8 param_1,ulong param_2,long param_3,int param_4,long param_5,int param_6
                 ,double *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((((param_6 == 0) || (param_4 == 0)) || (param_3 == 0)) ||
     ((param_5 == 0 || (param_7 == (double *)0x0)))) {
    uVar8 = FUN_00753a74(0x20);
                    /* try { // try from 0037184c to 0037185b has its CatchHandler @ 003718c0 */
    FUN_002fd2b0(auStack_50,"MklVectorOps::blasSdot: nullptr passed as argument");
                    /* try { // try from 00371860 to 0037189b has its CatchHandler @ 0037189c */
    FUN_00374ee0(uVar8,auStack_50);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar8,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003718e8;
  }
  *param_7 = 0.0;
  if (param_2 != 0) {
    dVar18 = 0.0;
    lVar9 = (long)param_4;
    lVar10 = (long)param_6;
    if (param_2 < 8) {
      uVar11 = 0;
LAB_0037173c:
      lVar12 = param_2 - uVar11;
      pfVar13 = (float *)(param_5 + uVar11 * lVar10 * 4);
      pfVar14 = (float *)(param_3 + uVar11 * lVar9 * 4);
      do {
        fVar19 = *pfVar14;
        fVar20 = *pfVar13;
        lVar12 = lVar12 + -1;
        pfVar13 = pfVar13 + lVar10;
        pfVar14 = pfVar14 + lVar9;
        dVar18 = dVar18 + (double)(fVar19 * fVar20);
      } while (lVar12 != 0);
    }
    else {
      uVar11 = 0;
      if ((param_4 != 1) || (param_6 != 1)) goto LAB_0037173c;
      uVar11 = param_2 & 0xfffffffffffffff8;
      puVar15 = (undefined8 *)(param_3 + 0x10);
      puVar16 = (undefined8 *)(param_5 + 0x10);
      uVar17 = uVar11;
      do {
        puVar1 = puVar16 + -2;
        puVar4 = puVar16 + -1;
        puVar7 = puVar16 + 1;
        uVar21 = *puVar16;
        uVar17 = uVar17 - 8;
        puVar2 = puVar15 + -2;
        puVar5 = puVar15 + -1;
        puVar6 = puVar15 + 1;
        uVar8 = *puVar15;
        puVar15 = puVar15 + lVar9 * 4;
        puVar16 = puVar16 + lVar10 * 4;
        dVar18 = dVar18 + (double)((float)*puVar2 * (float)*puVar1) +
                 (double)((float)((ulong)*puVar2 >> 0x20) * (float)((ulong)*puVar1 >> 0x20)) +
                 (double)((float)*puVar5 * (float)*puVar4) +
                 (double)((float)((ulong)*puVar5 >> 0x20) * (float)((ulong)*puVar4 >> 0x20)) +
                 (double)((float)uVar8 * (float)uVar21) +
                 (double)((float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar21 >> 0x20)) +
                 (double)((float)*puVar6 * (float)*puVar7) +
                 (double)((float)((ulong)*puVar6 >> 0x20) * (float)((ulong)*puVar7 >> 0x20));
      } while (uVar17 != 0);
      if (uVar11 != param_2) goto LAB_0037173c;
    }
    *param_7 = dVar18;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_003718e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003718ec  FUN_003718ec =====

void FUN_003718ec(void)

{
  return;
}


// ===== 003718f0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003718f4  FUN_003718f4 =====

void FUN_003718f4(undefined8 param_1,int param_2,int param_3,ulong param_4,ulong param_5,
                 long param_6,ulong param_7,long param_8,long param_9)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((param_6 == 0) || (param_8 == 0)) || (param_9 == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003719d0 to 003719df has its CatchHandler @ 00371b2c */
    FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemv: nullptr passed as argument");
                    /* try { // try from 003719e4 to 00371a1f has its CatchHandler @ 00371b10 */
    auVar7 = FUN_00374ee0(uVar4,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if (param_2 == 0) {
      uVar3 = param_5;
      if (param_5 < 2) {
        uVar3 = 1;
      }
      if (param_7 < uVar3) {
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00371a98 to 00371aa7 has its CatchHandler @ 00371af8 */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemv: lda < std::max(1, n)");
                    /* try { // try from 00371aac to 00371ae7 has its CatchHandler @ 00371ae8 */
        auVar7 = FUN_00374ee0(uVar4,auStack_50);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00371b54;
      }
      uVar3 = 0x65;
    }
    else {
      uVar3 = param_4;
      if (param_4 < 2) {
        uVar3 = 1;
      }
      if (param_7 < uVar3) {
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00371a34 to 00371a43 has its CatchHandler @ 00371b0c */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemv: lda < std::max(1, m)");
                    /* try { // try from 00371a48 to 00371a83 has its CatchHandler @ 00371afc */
        auVar7 = FUN_00374ee0(uVar4,auStack_50);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00371b54;
      }
      uVar5 = 0x65;
      if (param_2 == 1) {
        uVar5 = 0x66;
      }
      uVar3 = (ulong)uVar5;
    }
    uVar6 = 0x6f;
    if (param_3 == 1) {
      uVar6 = 0x70;
    }
    uVar1 = 0x71;
    if (param_3 != 2) {
      uVar1 = uVar6;
    }
    auVar7._8_4_ = uVar1;
    auVar7._0_8_ = uVar3;
    auVar7._12_4_ = 0;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      FUN_00708d18(uVar3,uVar1,param_4 & 0xffffffff,param_5 & 0xffffffff,param_6,
                   param_7 & 0xffffffff,param_8,1,param_9,1);
      return;
    }
  }
LAB_00371b54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
}


// ===== 00371b58  FUN_00371b58 =====

void FUN_00371b58(undefined8 param_1,int param_2,int param_3,int param_4,ulong param_5,ulong param_6
                 ,ulong param_7,long param_8,ulong param_9,long param_10,ulong param_11,
                 long param_12,ulong param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((param_8 == 0) || (param_10 == 0)) || (param_12 == 0)) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371d78 to 00371d87 has its CatchHandler @ 00371fec */
    FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: nullptr passed as argument");
                    /* try { // try from 00371d8c to 00371dc7 has its CatchHandler @ 00371fd0 */
    FUN_00374ee0(uVar5,auStack_50);
    if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if ((param_3 == 0 && param_2 == 0) || ((param_2 == 1 && (param_3 != 0)))) {
      uVar3 = param_7;
      if (param_7 < 2) {
        uVar3 = 1;
      }
      if (param_9 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371bc4 to 00371bd3 has its CatchHandler @ 00371fcc */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: lda < std::max(1, k)");
                    /* try { // try from 00371bd8 to 00371c13 has its CatchHandler @ 00371fbc */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
    }
    else {
      uVar3 = param_5;
      if (param_5 < 2) {
        uVar3 = 1;
      }
      if (param_9 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371ea4 to 00371eb3 has its CatchHandler @ 00371f7c */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: lda < std::max(1, m)");
                    /* try { // try from 00371eb8 to 00371ef3 has its CatchHandler @ 00371f6c */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
    }
    if ((param_4 == 0 && param_2 == 0) || ((param_2 == 1 && (param_4 != 0)))) {
      uVar3 = param_6;
      if (param_6 < 2) {
        uVar3 = 1;
      }
      if (param_11 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371c5c to 00371c6b has its CatchHandler @ 00371fb8 */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: ldb < std::max(1, n)");
                    /* try { // try from 00371c70 to 00371cab has its CatchHandler @ 00371fa8 */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
    }
    else {
      uVar3 = param_7;
      if (param_7 < 2) {
        uVar3 = 1;
      }
      if (param_11 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371f08 to 00371f17 has its CatchHandler @ 00371f68 */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: ldb < std::max(1, k)");
                    /* try { // try from 00371f1c to 00371f57 has its CatchHandler @ 00371f58 */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
    }
    if (param_2 == 0) {
      uVar3 = param_6;
      if (param_6 < 2) {
        uVar3 = 1;
      }
      if (param_13 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371e40 to 00371e4f has its CatchHandler @ 00371f90 */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: ldc < std::max(1, n)");
                    /* try { // try from 00371e54 to 00371e8f has its CatchHandler @ 00371f80 */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
      uVar6 = 0x65;
    }
    else {
      uVar3 = param_5;
      if (param_5 < 2) {
        uVar3 = 1;
      }
      if (param_13 < uVar3) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 00371ddc to 00371deb has its CatchHandler @ 00371fa4 */
        FUN_002fd2b0(auStack_50,"OpenBlasMatrixOps::sgemm: ldc < std::max(1, m)");
                    /* try { // try from 00371df0 to 00371e2b has its CatchHandler @ 00371f94 */
        FUN_00374ee0(uVar5,auStack_50);
        if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00372014;
      }
      uVar6 = 0x65;
      if (param_2 == 1) {
        uVar6 = 0x66;
      }
    }
    uVar7 = 0x6f;
    if (param_3 == 1) {
      uVar7 = 0x70;
    }
    uVar1 = 0x71;
    if (param_3 != 2) {
      uVar1 = uVar7;
    }
    uVar7 = 0x6f;
    if (param_4 == 1) {
      uVar7 = 0x70;
    }
    uVar2 = 0x71;
    if (param_4 != 2) {
      uVar2 = uVar7;
    }
    if (*(long *)(lVar4 + 0x28) == local_38) {
      FUN_0070905c(uVar6,uVar1,uVar2,param_5 & 0xffffffff,param_6 & 0xffffffff,param_7 & 0xffffffff,
                   param_8,param_9 & 0xffffffff);
      return;
    }
  }
LAB_00372014:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372018  FUN_00372018 =====

void FUN_00372018(void)

{
  return;
}


// ===== 0037201c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00372020  FUN_00372020 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00372020(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte local_238 [16];
  void *local_228;
  ulong local_220;
  ulong uStack_218;
  void *local_210;
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  ulong local_1e0;
  ulong uStack_1d8;
  void *local_1d0;
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_160;
  ulong uStack_158;
  void *local_150;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00714534(local_238,"Assertion failed: ",param_2);
                    /* try { // try from 00372060 to 0037206f has its CatchHandler @ 00372784 */
  puVar4 = (ulong *)FUN_00713bdc(local_238,&DAT_001e2980);
  local_210 = (void *)puVar4[2];
  uStack_218 = puVar4[1];
  local_220 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372088 to 00372097 has its CatchHandler @ 00372774 */
  puVar4 = (ulong *)FUN_00713bdc(&local_220,"File: ");
  local_1f0 = (void *)puVar4[2];
  uStack_1f8 = puVar4[1];
  local_200 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = (ulong)(*(byte *)(param_2 + 0x18) >> 1);
  lVar3 = param_2 + 0x19;
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar3 = *(long *)(param_2 + 0x28);
  }
                    /* try { // try from 003720cc to 003720d3 has its CatchHandler @ 00372764 */
  puVar4 = (ulong *)FUN_0071302c(&local_200,lVar3,uVar1);
  local_1d0 = (void *)puVar4[2];
  uStack_1d8 = puVar4[1];
  local_1e0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 003720ec to 003720fb has its CatchHandler @ 00372754 */
  puVar4 = (ulong *)FUN_00713bdc(&local_1e0,&DAT_001e2980);
  local_1b0 = (void *)puVar4[2];
  uStack_1b8 = puVar4[1];
  local_1c0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372114 to 00372123 has its CatchHandler @ 00372744 */
  puVar4 = (ulong *)FUN_00713bdc(&local_1c0,"Line: ");
  local_190 = (void *)puVar4[2];
  uStack_198 = puVar4[1];
  local_1a0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = (ulong)(*(byte *)(param_2 + 0x30) >> 1);
  lVar3 = param_2 + 0x31;
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x38);
    lVar3 = *(long *)(param_2 + 0x40);
  }
                    /* try { // try from 0037215c to 00372163 has its CatchHandler @ 00372734 */
  puVar4 = (ulong *)FUN_0071302c(&local_1a0,lVar3,uVar1);
  local_170 = (void *)puVar4[2];
  uStack_178 = puVar4[1];
  local_180 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 0037217c to 0037218b has its CatchHandler @ 00372724 */
  puVar4 = (ulong *)FUN_00713bdc(&local_180,&DAT_001e2980);
  local_150 = (void *)puVar4[2];
  uStack_158 = puVar4[1];
  local_160 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 003721a4 to 003721b3 has its CatchHandler @ 0037268c */
  puVar4 = (ulong *)FUN_00713bdc(&local_160,"Function: ");
  local_130 = (void *)puVar4[2];
  uStack_138 = puVar4[1];
  local_140 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = (ulong)(*(byte *)(param_2 + 0x48) >> 1);
  lVar3 = param_2 + 0x49;
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x50);
    lVar3 = *(long *)(param_2 + 0x58);
  }
                    /* try { // try from 003721e8 to 003721ef has its CatchHandler @ 0037266c */
  puVar4 = (ulong *)FUN_0071302c(&local_140,lVar3,uVar1);
  local_110 = (void *)puVar4[2];
  uStack_118 = puVar4[1];
  local_120 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372208 to 00372217 has its CatchHandler @ 0037264c */
  puVar4 = (ulong *)FUN_00713bdc(&local_120,&DAT_001e6970);
  local_f0 = (void *)puVar4[2];
  uStack_f8 = puVar4[1];
  local_100 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372230 to 0037223f has its CatchHandler @ 0037262c */
  puVar4 = (ulong *)FUN_00713bdc(&local_100,"Stack trace:\n");
  local_d0 = (void *)puVar4[2];
  uStack_d8 = puVar4[1];
  local_e0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = (ulong)(*(byte *)(param_2 + 0x60) >> 1);
  lVar3 = param_2 + 0x61;
  if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x68);
    lVar3 = *(long *)(param_2 + 0x70);
  }
                    /* try { // try from 00372274 to 0037227b has its CatchHandler @ 0037260c */
  puVar4 = (ulong *)FUN_0071302c(&local_e0,lVar3,uVar1);
  local_b0 = (void *)puVar4[2];
  uStack_b8 = puVar4[1];
  local_c0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372294 to 003722a3 has its CatchHandler @ 003725ec */
  puVar4 = (ulong *)FUN_00713bdc(&local_c0,&DAT_001e6970);
  local_90 = (void *)puVar4[2];
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 003722bc to 003722cb has its CatchHandler @ 003725cc */
  puVar4 = (ulong *)FUN_00713bdc(&local_a0,"Date: ");
  local_70 = (void *)puVar4[2];
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = (ulong)(*(byte *)(param_2 + 0x78) >> 1);
  lVar3 = param_2 + 0x79;
  if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x80);
    lVar3 = *(long *)(param_2 + 0x88);
  }
                    /* try { // try from 00372300 to 00372307 has its CatchHandler @ 003725ac */
  puVar4 = (ulong *)FUN_0071302c(&local_80,lVar3,uVar1);
  local_50 = (void *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
                    /* try { // try from 00372320 to 0037232f has its CatchHandler @ 003724fc */
  puVar5 = (undefined8 *)FUN_00713bdc(&local_60,&DAT_001e2980);
  uVar6 = puVar5[2];
  uVar8 = puVar5[1];
  uVar7 = *puVar5;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar6;
  if ((local_60 & 1) != 0) {
    free(local_50);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if ((local_c0 & 1) != 0) {
    free(local_b0);
  }
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if ((local_100 & 1) != 0) {
    free(local_f0);
  }
  if ((local_120 & 1) != 0) {
    free(local_110);
  }
  if ((local_140 & 1) != 0) {
    free(local_130);
  }
  if ((local_160 & 1) != 0) {
    free(local_150);
  }
  if ((local_180 & 1) != 0) {
    free(local_170);
  }
  if ((local_1a0 & 1) != 0) {
    free(local_190);
  }
  if ((local_1c0 & 1) != 0) {
    free(local_1b0);
  }
  if ((local_1e0 & 1) != 0) {
    free(local_1d0);
  }
  if ((local_200 & 1) != 0) {
    free(local_1f0);
  }
  if ((local_220 & 1) != 0) {
    free(local_210);
  }
  if ((local_238[0] & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
  else {
    free(local_228);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372794  FUN_00372794 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00372794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong local_270;
  undefined8 uStack_268;
  void *local_260;
  ulong local_258;
  undefined8 local_250;
  void *pvStack_248;
  tm *local_240;
  char *pcStack_238;
  void *local_230;
  ulong uStack_228;
  undefined8 uStack_220;
  void *local_218;
  tm *local_210;
  char *pcStack_208;
  void *local_200;
  tm *local_1f8;
  char *pcStack_1f0;
  void *pvStack_1e8;
  undefined1 auStack_1e0 [16];
  tm *local_1d0;
  char *pcStack_1c8;
  void *local_1c0;
  tm tStack_1b8;
  time_t local_180;
  undefined8 local_178;
  long *local_170 [3];
  undefined **appuStack_158 [8];
  byte local_118;
  void *local_108;
  undefined1 auStack_f0 [152];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_178 = FUN_007110f4();
  local_180 = FUN_0071116c(&local_178);
  localtime_r(&local_180,&tStack_1b8);
  FUN_00303c58(local_170);
  pcStack_1c8 = "%Y-%m-%d-%H.%M.%S";
                    /* try { // try from 00372808 to 00372813 has its CatchHandler @ 00372b2c */
  local_1d0 = &tStack_1b8;
  FUN_00372cd0(local_170 + 2,&local_1d0);
  uStack_268 = 0;
  local_270 = 0;
  local_258 = 0;
  local_260 = (void *)0x0;
  pvStack_248 = (void *)0x0;
  local_250 = 0;
  pcStack_238 = (char *)0x0;
  local_240 = (tm *)0x0;
  uStack_228 = 0;
  local_230 = (void *)0x0;
  local_218 = (void *)0x0;
  uStack_220 = 0;
  pcStack_208 = (char *)0x0;
  local_210 = (tm *)0x0;
  local_1f8 = (tm *)0x0;
  local_200 = (void *)0x0;
  pvStack_1e8 = (void *)0x0;
  pcStack_1f0 = (char *)0x0;
                    /* try { // try from 0037282c to 00372847 has its CatchHandler @ 00372b50 */
  FUN_007139b0(&local_270,param_1);
  FUN_0071396c(&local_258,param_2);
                    /* try { // try from 00372848 to 00372853 has its CatchHandler @ 00372b28 */
  FUN_00714ba0(&local_1d0,param_3);
  if (((ulong)local_240 & 1) != 0) {
    free(local_230);
  }
  pcStack_238 = pcStack_1c8;
  local_240 = local_1d0;
  local_230 = local_1c0;
                    /* try { // try from 00372878 to 00372883 has its CatchHandler @ 00372b50 */
  FUN_0071396c(&uStack_228,param_4);
                    /* try { // try from 00372884 to 0037289f has its CatchHandler @ 00372b4c */
  FUN_00372ea4(auStack_1e0,100,3);
  FUN_00372eac(&local_1d0,auStack_1e0);
  if (((ulong)local_210 & 1) != 0) {
    free(local_200);
  }
  pcStack_208 = pcStack_1c8;
  local_210 = local_1d0;
  local_200 = local_1c0;
                    /* try { // try from 003728c8 to 003728d3 has its CatchHandler @ 00372b24 */
  FUN_00718470(&local_1d0,appuStack_158);
  if (((ulong)local_1f8 & 1) != 0) {
    free(pvStack_1e8);
  }
  puVar3 = PTR_PTR_007a10f0;
  pcStack_1f0 = pcStack_1c8;
  local_1f8 = local_1d0;
  local_170[0] = *(long **)PTR_PTR_007a10f0;
  pvStack_1e8 = local_1c0;
  uVar1 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_170 + local_170[0][-3]) = *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  appuStack_158[0] = &PTR_FUN_0079be30;
  local_170[2] = (long *)uVar1;
  if ((local_118 & 1) != 0) {
    free(local_108);
  }
  FUN_00716098(appuStack_158);
  FUN_00717d80(local_170,puVar3 + 8);
  thunk_FUN_00715e00(auStack_f0);
  local_170[0] = (long *)0x0;
  local_170[1] = (long *)0x0;
  local_170[2] = (long *)0x0;
                    /* try { // try from 0037295c to 00372963 has its CatchHandler @ 00372b48 */
  plVar4 = (long *)FUN_00759c3c(8);
  *plVar4 = (long)(PTR_DAT_007a1900 + 0x10);
                    /* try { // try from 00372978 to 00372983 has its CatchHandler @ 00372b34 */
  plVar5 = (long *)FUN_00759c3c(8);
  local_170[1] = plVar5 + 1;
  *plVar5 = (long)plVar4;
  local_170[0] = plVar5;
  local_170[2] = local_170[1];
                    /* try { // try from 00372998 to 0037299f has its CatchHandler @ 00372b48 */
  plVar6 = (long *)FUN_00759c3c(8);
  *plVar6 = (long)(PTR_DAT_007a18f8 + 0x10);
                    /* try { // try from 003729b4 to 003729bb has its CatchHandler @ 00372b34 */
  local_170[0] = (long *)FUN_00759c3c(0x10);
  *local_170[0] = (long)plVar4;
  local_170[0][1] = (long)plVar6;
  plVar4 = local_170[0] + 2;
  local_170[2] = plVar4;
  free(plVar5);
  plVar5 = local_170[0];
  local_170[1] = plVar4;
  plVar6 = plVar4;
  plVar7 = plVar4;
  if (local_170[0] != plVar4) {
    do {
      plVar6 = (long *)*plVar5;
      if (plVar6 != (long *)0x0) {
                    /* try { // try from 00372a04 to 00372a0b has its CatchHandler @ 00372b68 */
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_270);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4);
    plVar6 = local_170[0];
    plVar4 = local_170[1];
    plVar7 = local_170[0];
    if (local_170[0] == (long *)0x0) goto LAB_00372a5c;
  }
  while (plVar4 != plVar7) {
    plVar4 = plVar4 + -1;
    plVar5 = (long *)*plVar4;
    *plVar4 = 0;
    plVar6 = local_170[0];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
      plVar6 = local_170[0];
    }
  }
  local_170[1] = plVar7;
  free(plVar6);
LAB_00372a5c:
  if (((ulong)local_1f8 & 1) != 0) {
    free(pvStack_1e8);
  }
  if (((ulong)local_210 & 1) != 0) {
    free(local_200);
  }
  if ((uStack_228 & 1) != 0) {
    free(local_218);
  }
  if (((ulong)local_240 & 1) != 0) {
    free(local_230);
  }
  if ((local_258 & 1) != 0) {
    free(pvStack_248);
  }
  if ((local_270 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_260);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372b98  FUN_00372b98 =====

void FUN_00372b98(undefined8 *param_1)

{
  long *plVar1;
  long *__ptr;
  long *plVar2;
  
  __ptr = (long *)*param_1;
  if (__ptr == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 == __ptr) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  do {
    plVar2 = plVar2 + -1;
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  } while (plVar2 != __ptr);
  param_1[1] = __ptr;
  free((void *)*param_1);
  return;
}


// ===== 00372c24  FUN_00372c24 =====

void FUN_00372c24(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    free(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    free(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    free(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    free(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    free(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00372cd0  FUN_00372cd0 =====

long * FUN_00372cd0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *__s;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  char local_70 [16];
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00372d00 to 00372d0b has its CatchHandler @ 00372e4c */
  FUN_00716f78(local_70,param_1);
  if (local_70[0] != '\0') {
                    /* try { // try from 00372d1c to 00372d27 has its CatchHandler @ 00372e38 */
    FUN_00715df0(auStack_60,(long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 00372d28 to 00372d37 has its CatchHandler @ 00372e28 */
    uVar4 = FUN_0073220c(auStack_60,PTR_DAT_007a1908);
    FUN_00732094(auStack_60);
    lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar3 = *(uint *)(lVar7 + 0x90);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    if (uVar3 == 0xffffffff) {
                    /* try { // try from 00372d60 to 00372d6b has its CatchHandler @ 00372e3c */
      FUN_00715df0(auStack_60,lVar7);
                    /* try { // try from 00372d6c to 00372d8b has its CatchHandler @ 00372e24 */
      plVar5 = (long *)FUN_0073220c(auStack_60,PTR_DAT_007a1108);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      FUN_00732094(auStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(lVar7 + 0x90) = uVar3;
    }
    uVar1 = *param_2;
    __s = (char *)param_2[1];
    sVar6 = strlen(__s);
                    /* try { // try from 00372dac to 00372dcb has its CatchHandler @ 00372e3c */
    lVar7 = FUN_00729c68(uVar4,uVar8,lVar7,uVar3,uVar1,__s,__s + sVar6);
    if (lVar7 == 0) {
      lVar7 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00372de0 to 00372de7 has its CatchHandler @ 00372e20 */
      FUN_00715ee0(lVar7,*(uint *)(lVar7 + 0x20) | 1);
    }
  }
  FUN_00716fdc(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00372ea4  FUN_00372ea4 =====

void FUN_00372ea4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// ===== 00372eac  FUN_00372eac =====

void FUN_00372eac(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  void *__s;
  void *__ptr;
  undefined8 uVar3;
  int iVar4;
  void *unaff_x19;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_2;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  if (uVar5 == 0) {
    __s = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00373008 to 0037300f has its CatchHandler @ 0037301c */
        uVar3 = FUN_00373070(&local_70);
                    /* catch() { ... } // from try @ 00372f24 with catch @ 00373010 */
                    /* catch() { ... } // from try @ 00372f18 with catch @ 00373014 */
        if (unaff_x19 != (void *)0x0) {
          free(unaff_x19);
        }
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar3);
        }
      }
      goto LAB_0037306c;
    }
                    /* try { // try from 00372ef8 to 00372eff has its CatchHandler @ 0037301c */
    __s = (void *)FUN_00759c3c(uVar5 << 3);
    memset(__s,0,uVar5 << 3);
  }
                    /* try { // try from 00372f18 to 00372f23 has its CatchHandler @ 00373014 */
  iVar2 = backtrace(__s,uVar5 & 0xffffffff);
                    /* try { // try from 00372f24 to 00372f33 has its CatchHandler @ 00373010 */
  __ptr = (void *)backtrace_symbols(__s,iVar2);
  if (__ptr == (void *)0x0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    uVar5 = param_2[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar4 = (int)uVar5;
    if (iVar4 < iVar2) {
      puVar6 = (undefined8 *)((long)__ptr + (long)iVar4 * 8);
      lVar7 = (long)iVar2 - (long)iVar4;
      do {
                    /* try { // try from 00372f68 to 00372f7b has its CatchHandler @ 00373034 */
        FUN_00713bdc(param_1,*puVar6);
        FUN_00713bdc(param_1,&DAT_001e2980);
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar7 != 0);
    }
    free(__ptr);
  }
  if (__s == (void *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_58) {
    free(__s);
    return;
  }
LAB_0037306c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373070  FUN_00373070 =====

void FUN_00373070(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00373084  FUN_00373084 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00373084(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  bool bVar14;
  long lVar15;
  byte local_208;
  undefined1 auStack_207 [7];
  ulong local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  wchar_t *local_1b0;
  byte local_1a8 [8];
  ulong local_1a0;
  void *local_198;
  ulong local_190 [2];
  void *local_180;
  uint auStack_170 [24];
  long local_110;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00373b14();
  FUN_00373bb0(local_1a8);
  bVar5 = local_1a8[0] & 1;
  uVar3 = (ulong)(local_1a8[0] >> 1);
  if ((local_1a8[0] & 1) != 0) {
    uVar3 = local_1a0;
  }
  if (uVar3 != 0) {
                    /* try { // try from 003730d0 to 003730d7 has its CatchHandler @ 003734f4 */
    local_1b0 = (wchar_t *)FUN_00759c3c(0x50);
    uVar12 = u_kms_assert_dump_txt_001b7278._68_8_;
    uVar11 = u_kms_assert_dump_txt_001b7278._48_8_;
    uVar10 = u_kms_assert_dump_txt_001b7278._40_8_;
    uVar9 = u_kms_assert_dump_txt_001b7278._32_8_;
    uVar7 = CONCAT44(u_kms_assert_dump_txt_001b7278[0xf],u_kms_assert_dump_txt_001b7278[0xe]);
    uVar8 = CONCAT44(u_kms_assert_dump_txt_001b7278[0x10],u_kms_assert_dump_txt_001b7278[0xf]);
    local_1b0[0x13] = L'\0';
    *(undefined8 *)(local_1b0 + 10) = uVar10;
    *(undefined8 *)(local_1b0 + 8) = uVar9;
    *(undefined8 *)(local_1b0 + 0xe) = uVar7;
    *(undefined8 *)(local_1b0 + 0xc) = uVar11;
    uVar11 = u_kms_assert_dump_txt_001b7278._24_8_;
    uVar10 = u_kms_assert_dump_txt_001b7278._16_8_;
    uVar9 = u_kms_assert_dump_txt_001b7278._8_8_;
    uVar7 = u_kms_assert_dump_txt_001b7278._0_8_;
    *(undefined8 *)(local_1b0 + 0x11) = uVar12;
    *(undefined8 *)(local_1b0 + 0xf) = uVar8;
    local_190[0] = 0;
    local_190[1] = 0;
    *(undefined8 *)(local_1b0 + 2) = uVar9;
    *(undefined8 *)local_1b0 = uVar7;
    *(undefined8 *)(local_1b0 + 6) = uVar11;
    *(undefined8 *)(local_1b0 + 4) = uVar10;
    local_180 = (void *)0x0;
    pvVar1 = (void *)((ulong)local_1a8 | 4);
    if (bVar5 != 0) {
      pvVar1 = local_198;
    }
    uStack_1b8 = _UNK_00200a18;
    local_1c0 = _DAT_00200a10;
                    /* try { // try from 0037312c to 00373133 has its CatchHandler @ 00373488 */
    FUN_0030dbb8(local_190,pvVar1,(void *)((long)pvVar1 + uVar3 * 4));
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = (void *)0x0;
                    /* try { // try from 0037313c to 0037314f has its CatchHandler @ 00373464 */
    FUN_0030dbb8(&local_1f0,&DAT_001b7338,&DAT_001b7348);
                    /* try { // try from 00373150 to 0037315f has its CatchHandler @ 00373460 */
    FUN_0030d708(local_1d8,local_190,&local_1f0);
    if ((local_1f0 & 1) != 0) {
      free(local_1e0);
    }
    if ((local_190[0] & 1) != 0) {
      free(local_180);
    }
                    /* try { // try from 00373180 to 0037318f has its CatchHandler @ 00373448 */
    FUN_00738988(local_190,local_1d8,0);
    if (((char)local_190[0] == -1) || ((char)local_190[0] == '\0')) {
                    /* try { // try from 003731a0 to 003731ab has its CatchHandler @ 00373370 */
      FUN_007383e8(local_1d8,0);
    }
    local_190[0] = 0;
    local_190[1] = 0;
    bVar14 = (local_1c0 & 1) != 0;
    pwVar2 = (wchar_t *)((ulong)&local_1c0 | 4);
    if (bVar14) {
      pwVar2 = local_1b0;
    }
    local_180 = (void *)0x0;
    uVar3 = local_1c0 >> 1 & 0x7f;
    if (bVar14) {
      uVar3 = uStack_1b8;
    }
                    /* try { // try from 003731d8 to 003731df has its CatchHandler @ 0037342c */
    FUN_0030dbb8(local_190,pwVar2,pwVar2 + uVar3);
                    /* try { // try from 003731e0 to 003731ef has its CatchHandler @ 00373428 */
    FUN_0030d708(&local_1f0,local_1d8,local_190);
    if ((local_190[0] & 1) != 0) {
      free(local_180);
    }
    pvVar1 = local_1e0;
    if ((local_1f0 & 1) == 0) {
      pvVar1 = (void *)((long)&local_1f0 + 1);
    }
                    /* try { // try from 00373214 to 0037321f has its CatchHandler @ 00373410 */
    FUN_00373948(local_190,pvVar1,0x10);
    if (local_110 != 0) {
                    /* try { // try from 00373228 to 00373237 has its CatchHandler @ 0037336c */
      FUN_00372020(&local_208,param_2);
      puVar6 = local_1f8;
      if ((local_208 & 1) == 0) {
        local_200 = (ulong)(local_208 >> 1);
        puVar6 = auStack_207;
      }
                    /* try { // try from 00373250 to 00373257 has its CatchHandler @ 00373350 */
      FUN_00303e0c(local_190,puVar6,local_200);
      if ((local_208 & 1) != 0) {
        free(local_1f8);
      }
                    /* try { // try from 0037326c to 00373293 has its CatchHandler @ 003733fc */
      lVar15 = FUN_00718d74(local_190 + 1);
      if (lVar15 == 0) {
        FUN_00715ee0((long)local_190 + *(long *)(local_190[0] - 0x18),
                     *(uint *)((long)auStack_170 + *(long *)(local_190[0] - 0x18)) | 4);
      }
    }
    puVar13 = PTR_PTR_007a1910;
    local_190[0] = *(ulong *)PTR_PTR_007a1910;
    *(undefined8 *)((long)local_190 + *(long *)(local_190[0] - 0x18)) =
         *(undefined8 *)(PTR_PTR_007a1910 + 0x18);
    FUN_00718ca0(local_190 + 1);
    FUN_00716ee4(local_190,puVar13 + 8);
    thunk_FUN_00715e00(auStack_e0);
    if ((local_1f0 & 1) != 0) {
      free(local_1e0);
    }
    if ((local_1d8[0] & 1) != 0) {
      free(local_1c8);
    }
    if ((local_1c0 & 1) != 0) {
      free(local_1b0);
    }
  }
  if ((local_1a8[0] & 1) != 0) {
    free(local_198);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373508  FUN_00373508 =====

void FUN_00373508(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_003736c4;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003735a4;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_003735a4:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 003735b8 to 003735c7 has its CatchHandler @ 003736a0 */
  FUN_00373720(local_70,&local_88,param_4);
                    /* try { // try from 003735d0 to 003735df has its CatchHandler @ 00373660 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_003736c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003736c8  FUN_003736c8 =====

void FUN_003736c8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_007a1910;
  lVar2 = *(long *)PTR_PTR_007a1910;
  uVar3 = *(undefined8 *)(PTR_PTR_007a1910 + 0x18);
  *param_1 = lVar2;
  *(undefined8 *)((long)param_1 + *(long *)(lVar2 + -0x18)) = uVar3;
  FUN_00718ca0(param_1 + 1);
  FUN_00716ee4(param_1,puVar1 + 8);
  thunk_FUN_00715e00(param_1 + 0x16);
  return;
}


// ===== 00373718  FUN_00373718 =====

void FUN_00373718(void)

{
  return;
}


// ===== 0037371c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00373720  FUN_00373720 =====

void FUN_00373720(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *local_70;
  byte *local_68;
  undefined1 uStack_51;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00373748 to 00373753 has its CatchHandler @ 0037381c */
  FUN_0037383c(local_50,&uStack_51);
                    /* try { // try from 00373754 to 00373763 has its CatchHandler @ 00373804 */
  FUN_00303a84(&local_70,local_50,1);
  if ((local_50[0] & 1) != 0) {
    free(local_40);
  }
                    /* try { // try from 00373774 to 00373783 has its CatchHandler @ 003737f4 */
  FUN_0030b424(param_1,param_2,&local_70);
  pbVar3 = local_70;
  if (local_70 != (byte *)0x0) {
    while (pbVar2 = local_68, pbVar2 != pbVar3) {
      local_68 = pbVar2 + -0x18;
      if ((*local_68 & 1) != 0) {
        free(*(void **)(pbVar2 + -8));
      }
    }
    local_68 = pbVar3;
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0037383c  FUN_0037383c =====

void FUN_0037383c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  char *__s;
  long local_160 [3];
  undefined **appuStack_148 [8];
  byte local_108;
  void *local_f8;
  undefined1 auStack_e0 [152];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00303c58(local_160);
  __s = (char *)*param_3;
  sVar4 = strlen(__s);
                    /* try { // try from 00373884 to 0037389b has its CatchHandler @ 00373920 */
  FUN_00303e0c(local_160 + 2,__s,sVar4);
  FUN_00718470(param_1,appuStack_148);
  puVar3 = PTR_PTR_007a10f0;
  local_160[0] = *(long *)PTR_PTR_007a10f0;
  uVar1 = *(undefined8 *)(PTR_PTR_007a10f0 + 0x48);
  *(undefined8 *)((long)local_160 + *(long *)(local_160[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a10f0 + 0x40);
  appuStack_148[0] = &PTR_FUN_0079be30;
  local_160[2] = uVar1;
  if ((local_108 & 1) != 0) {
    free(local_f8);
  }
  FUN_00716098(appuStack_148);
  FUN_00717d80(local_160,puVar3 + 8);
  thunk_FUN_00715e00(auStack_e0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373948  FUN_00373948 =====

void FUN_00373948(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_007a1918;
  puVar1 = PTR_PTR_007a1910;
  param_1[0x1c] = 0;
  lVar4 = *(long *)(puVar1 + 8);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  puVar1 = puVar3 + 0x40;
  param_1[0x16] = (long)puVar1;
  *param_1 = lVar4;
  *(undefined8 *)((long)param_1 + *(long *)(lVar4 + -0x18)) = uVar2;
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 003739a8 to 003739b3 has its CatchHandler @ 00373a20 */
  FUN_00715fc0(lVar4,param_1 + 1);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar3 + 0x18);
  param_1[0x16] = (long)puVar1;
                    /* try { // try from 003739cc to 003739d3 has its CatchHandler @ 00373a18 */
  FUN_00718b7c(param_1 + 1);
                    /* try { // try from 003739d4 to 003739ff has its CatchHandler @ 00373a34 */
  lVar4 = FUN_00718a1c(param_1 + 1,param_2,param_3 | 0x10);
  if (lVar4 == 0) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  }
  return;
}


// ===== 00373a5c  FUN_00373a5c =====

void FUN_00373a5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00753a74(0x90);
  FUN_003748f0(uVar1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a18e8,PTR_thunk_FUN_00372c24_007a18f0);
}


// ===== 00373a98  thunk_FUN_00372c24 =====

void thunk_FUN_00372c24(byte *param_1)

{
  byte bVar1;
  
  if ((param_1[0x78] & 1) == 0) {
    bVar1 = param_1[0x60];
  }
  else {
    free(*(void **)(param_1 + 0x88));
    bVar1 = param_1[0x60];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    free(*(void **)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x30];
  }
  else {
    free(*(void **)(param_1 + 0x58));
    bVar1 = param_1[0x30];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = param_1[0x18];
  }
  else {
    free(*(void **)(param_1 + 0x40));
    bVar1 = param_1[0x18];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    free(*(void **)(param_1 + 0x28));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) != 0) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00373a9c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00373aa0  FUN_00373aa0 =====

void FUN_00373aa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  return;
}


// ===== 00373ad0  FUN_00373ad0 =====

void FUN_00373ad0(undefined8 *param_1)

{
  byte *__ptr;
  
  __ptr = (byte *)*param_1;
  *param_1 = 0;
  if (__ptr != (byte *)0x0) {
    if ((*__ptr & 1) != 0) {
      free(*(void **)(__ptr + 0x10));
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 00373b14  FUN_00373b14 =====

undefined * FUN_00373b14(void)

{
  int iVar1;
  
  if (((DAT_007ab688 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ab688), iVar1 != 0)) {
                    /* try { // try from 00373b54 to 00373b63 has its CatchHandler @ 00373b98 */
    FUN_00373aa0(&DAT_007ab680);
    __cxa_atexit(PTR_FUN_007a1920,&DAT_007ab680,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ab688);
    return &DAT_007ab680;
  }
  return &DAT_007ab680;
}


// ===== 00373bb0  FUN_00373bb0 =====

void FUN_00373bb0(undefined8 *param_1)

{
  FUN_00373bc0(*param_1);
  return;
}


// ===== 00373bb8  FUN_00373bb8 =====

void FUN_00373bb8(undefined8 *param_1)

{
  FUN_003742dc(*param_1);
  return;
}


// ===== 00373bc0  FUN_00373bc0 =====

void FUN_00373bc0(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)(byte)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar1 = param_2[1];
  }
  if (uVar1 == 0) {
LAB_00373d14:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    FUN_00738988(&local_60,param_2,0);
    if (((char)local_60 != '\0') && ((char)local_60 != -1)) {
      FUN_00738988(&local_60,param_2,0);
      if ((char)local_60 != '\x02') {
        FUN_00375240(&local_48);
        if ((*param_2 & 1) == 0) {
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = (void *)param_2[2];
        }
        else {
                    /* try { // try from 00373cb4 to 00373cbb has its CatchHandler @ 00373d40 */
          FUN_002fb36c(&local_60,param_2[2],param_2[1]);
        }
                    /* try { // try from 00373cbc to 00373cd3 has its CatchHandler @ 00373d4c */
        FUN_00373f4c(local_48,4,"The given working directory is not a directory: {}",&local_60);
        if ((local_60 & 1) != 0) {
          free(local_50);
        }
        if ((local_40 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
          (**(code **)(*local_40 + 0x10))(local_40);
          FUN_0071245c(local_40);
        }
        goto LAB_00373d14;
      }
    }
    FUN_00738988(&local_60,param_2,0);
    if (((char)local_60 == -1) || ((char)local_60 == '\0')) {
                    /* try { // try from 00373c58 to 00373c63 has its CatchHandler @ 00373d88 */
      FUN_007383e8(param_2,0);
    }
    FUN_00374450(param_1,param_2,&local_60);
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00373e88  FUN_00373e88 =====

void FUN_00373e88(ulong *param_1,wchar_t *param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined4 *__dest;
  
  sVar2 = wcslen(param_2);
  if (sVar2 < 0x3ffffffffffffff8) {
    if (sVar2 < 5) {
      __dest = (undefined4 *)((long)param_1 + 4);
      *(char *)param_1 = (char)((int)sVar2 << 1);
      if (sVar2 == 0) {
        *__dest = 0;
        return;
      }
    }
    else {
      uVar1 = (sVar2 & 0x3ffffffffffffffe) + 2;
      if ((sVar2 | 1) != 5) {
        uVar1 = sVar2 | 1;
      }
      if (0x3ffffffffffffffe < uVar1) goto LAB_00373f48;
      __dest = (undefined4 *)FUN_00759c3c((uVar1 + 1) * 4);
      param_1[1] = sVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 + 1 | 1;
    }
    memmove(__dest,param_2,sVar2 << 2);
    __dest[sVar2] = 0;
    return;
  }
  FUN_002f9e4c(param_1);
LAB_00373f48:
                    /* WARNING: Subroutine does not return */
  FUN_002f9ee0();
}


// ===== 00373f4c  FUN_00373f4c =====

void FUN_00373f4c(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_88;
  size_t local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_88);
    }
    goto LAB_00374108;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00373fe8;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_88 = uVar1 + 1 | 1;
    local_80 = __n;
    local_78 = __dest;
LAB_00373fe8:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00373ffc to 0037400b has its CatchHandler @ 003740e4 */
  FUN_00303858(local_70,&local_88,param_4);
                    /* try { // try from 00374014 to 00374023 has its CatchHandler @ 003740a4 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_70);
  if ((local_70[0] & 1) != 0) {
    free(local_60);
  }
  if ((local_88 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else {
    free(local_78);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
LAB_00374108:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037410c  FUN_0037410c =====

void FUN_0037410c(long *param_1,undefined4 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  void *__dest;
  ulong local_98;
  size_t local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  __n = strlen(param_3);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_98);
    }
    goto LAB_003742d8;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003741b0;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_98 = uVar1 + 1 | 1;
    local_90 = __n;
    local_88 = __dest;
LAB_003741b0:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 003741c4 to 003741d7 has its CatchHandler @ 003742b4 */
  FUN_0030df98(local_80,&local_98,param_4,param_5);
                    /* try { // try from 003741e0 to 003741ef has its CatchHandler @ 00374274 */
  (**(code **)(*param_1 + 0x28))(param_1,param_2,local_80);
  if ((local_80[0] & 1) != 0) {
    free(local_70);
  }
  if ((local_98 & 1) == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
  else {
    free(local_88);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
  }
LAB_003742d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003742dc  FUN_003742dc =====

void FUN_003742dc(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  ulong local_70 [2];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 0) {
    local_58[0] = 0;
    local_58[1] = 0;
    pbVar2 = param_2 + 4;
    if ((bVar3 & 1) != 0) {
      pbVar2 = *(byte **)(param_2 + 0x10);
    }
    local_48 = (void *)0x0;
                    /* try { // try from 00374330 to 00374337 has its CatchHandler @ 00374420 */
    FUN_0030dbb8(local_58,pbVar2,pbVar2 + uVar1 * 4);
                    /* try { // try from 00374338 to 00374347 has its CatchHandler @ 0037441c */
    FUN_00737fc4(local_40,local_58,0);
    if ((local_58[0] & 1) != 0) {
      free(local_48);
    }
    local_70[0] = 0;
    local_70[1] = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 00374360 to 00374373 has its CatchHandler @ 003743f8 */
    FUN_0030dbb8(local_70,&DAT_001b7364,&DAT_001b7370);
                    /* try { // try from 00374374 to 00374383 has its CatchHandler @ 003743f4 */
    FUN_0030d708(local_58,local_40,local_70);
    if ((local_70[0] & 1) != 0) {
      free(local_60);
    }
                    /* try { // try from 00374394 to 0037439f has its CatchHandler @ 003743e0 */
    FUN_007139b0(param_1,local_58);
    if ((local_58[0] & 1) != 0) {
      free(local_48);
    }
    if ((local_40[0] & 1) != 0) {
      free(local_30);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374450  FUN_00374450 =====

void FUN_00374450(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined **local_f0;
  undefined8 uStack_e8;
  byte *local_e0;
  undefined4 *local_d8;
  undefined1 auStack_d0 [8];
  undefined4 local_c8 [32];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  bVar4 = *param_2;
  uVar8 = *(ulong *)(param_2 + 8);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar3 = uVar8;
  }
                    /* try { // try from 00374498 to 0037449f has its CatchHandler @ 003745b8 */
  FUN_00713f6c(param_1,uVar3);
  uVar3 = *(ulong *)(param_2 + 8);
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
    uVar3 = (ulong)(*param_2 >> 1);
  }
  local_f0 = &PTR_thunk_FUN_00712454_0079ce60;
  uStack_e8 = 0;
  if (0 < (long)uVar3) {
    pbVar1 = pbVar9 + uVar3;
    do {
      pbVar2 = pbVar9 + 0x20;
      if ((long)pbVar1 - (long)pbVar9 < 0x21) {
        pbVar2 = pbVar1;
      }
                    /* try { // try from 00374504 to 00374523 has its CatchHandler @ 003745c4 */
      local_e0 = pbVar9;
      iVar6 = (*(code *)local_f0[4])
                        (&local_f0,auStack_d0,pbVar9,pbVar2,&local_e0,local_c8,&local_48,&local_d8);
      if ((iVar6 == 2) || (local_e0 == pbVar9)) {
        if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* try { // try from 003745ac to 003745b7 has its CatchHandler @ 003745c0 */
          uVar7 = FUN_0071280c("locale not supported");
                    /* catch() { ... } // from try @ 00374498 with catch @ 003745b8 */
          if ((*param_1 & 1) != 0) {
            free(*(void **)(param_1 + 0x10));
          }
          if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar7);
          }
        }
        goto LAB_003745fc;
      }
      if (local_c8 < local_d8) {
        puVar10 = local_c8;
        do {
                    /* try { // try from 00374550 to 00374557 has its CatchHandler @ 003745c8 */
          FUN_0071428c(param_1,*puVar10);
          puVar10 = puVar10 + 1;
        } while (puVar10 < local_d8);
      }
      pbVar9 = local_e0;
    } while (local_e0 < pbVar1);
  }
  thunk_FUN_00712454(&local_f0);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_003745fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374600  FUN_00374600 =====

void FUN_00374600(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00374610  FUN_00374610 =====

long FUN_00374610(long *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = param_4[1];
  lVar3 = *param_4;
  if (param_3 * param_2 - (lVar4 - lVar3 >> 2) == 0) {
    __ptr = (void *)*param_1;
    if (__ptr != (void *)0x0) {
      param_1[1] = (long)__ptr;
      free(__ptr);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar4 = param_4[1];
      lVar3 = *param_4;
    }
    param_1[1] = lVar4;
    *param_1 = lVar3;
    param_1[2] = param_4[2];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_003747ec(param_1,param_2,param_3);
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return param_1[1] - *param_1 >> 2;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 003746e0 to 003746ef has its CatchHandler @ 00374750 */
    FUN_002fd2b0(auStack_60,"Matrix::resize: r * c is not equal to v.size()");
    FUN_00374b08(uVar2,auStack_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/common/src/containers/krisp_matrix.cpp"
                 ,0x7a,"resize");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00374720 to 00374737 has its CatchHandler @ 00374738 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00374778  FUN_00374778 =====

void FUN_00374778(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 003747a0 to 003747a3 has its CatchHandler @ 003747b4 */
  FUN_00374610(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}


// ===== 003747d4  FUN_003747d4 =====

undefined8 FUN_003747d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 003747dc  FUN_003747dc =====

undefined8 FUN_003747dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 003747e4  FUN_003747e4 =====

undefined8 FUN_003747e4(undefined8 *param_1)

{
  return *param_1;
}


// ===== 003747ec  FUN_003747ec =====

void FUN_003747ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x18) = param_2;
  *(long *)(param_1 + 0x20) = param_3;
  if (param_3 * param_2 == 0 && (param_3 != 0 || param_2 != 0)) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 00374850 to 0037485f has its CatchHandler @ 003748c4 */
    FUN_002fd2b0(auStack_40,"Matrix::initParams: assert(r * c != 0 || (r == 0 && c == 0))");
    FUN_00374b08(uVar2,auStack_40,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/common/src/containers/krisp_matrix.cpp"
                 ,0xfb,"initParams");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00374894 to 003748ab has its CatchHandler @ 003748ac */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003748f0  FUN_003748f0 =====

void FUN_003748f0(void)

{
                    /* try { // try from 003748f8 to 003748fb has its CatchHandler @ 00374904 */
  FUN_00374908();
  return;
}


// ===== 00374908  FUN_00374908 =====

void FUN_00374908(undefined8 *param_1,byte *param_2)

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
    bVar1 = param_2[0x30];
  }
  else {
                    /* try { // try from 00374944 to 0037494b has its CatchHandler @ 00374aec */
    FUN_002fb36c(param_1 + 3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
    bVar1 = param_2[0x30];
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    param_1[8] = *(undefined8 *)(param_2 + 0x40);
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  else {
                    /* try { // try from 003749a4 to 003749ab has its CatchHandler @ 00374acc */
    FUN_002fb36c(param_1 + 6,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  }
  if ((param_2[0x48] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  else {
                    /* try { // try from 003749d0 to 003749d7 has its CatchHandler @ 00374aac */
    FUN_002fb36c(param_1 + 9,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50));
  }
  if ((param_2[0x60] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  else {
                    /* try { // try from 003749fc to 00374a03 has its CatchHandler @ 00374a8c */
    FUN_002fb36c(param_1 + 0xc,*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x68));
  }
  if ((param_2[0x78] & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x80);
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
    param_1[0x10] = uVar3;
    param_1[0xf] = uVar2;
    return;
  }
                    /* try { // try from 00374a30 to 00374a37 has its CatchHandler @ 00374a44 */
  FUN_002fb36c(param_1 + 0xf,*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x80));
  return;
}


// ===== 00374b08  FUN_00374b08 =====

void FUN_00374b08(long *param_1,byte *param_2,char *param_3,undefined4 param_4,char *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long local_188;
  long lStack_180;
  long local_178;
  long local_170 [3];
  undefined **appuStack_158 [8];
  byte local_118;
  void *local_108;
  undefined1 auStack_f0 [152];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar6 = (byte *)(param_1 + 1);
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar8 = *(long *)(param_2 + 8);
    lVar7 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar8;
    *(long *)pbVar6 = lVar7;
  }
  else {
                    /* try { // try from 00374b74 to 00374c3f has its CatchHandler @ 00374cec */
    FUN_002fb36c(pbVar6,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  FUN_00303c58(local_170);
  uVar4 = FUN_00303e0c(local_170 + 2,"KMS exception was thrown in file ",0x21);
  sVar5 = strlen(param_3);
  uVar4 = FUN_00303e0c(uVar4,param_3,sVar5);
  uVar4 = FUN_00303e0c(uVar4,&DAT_001d9efd,1);
  uVar4 = FUN_00717214(uVar4,param_4);
  uVar4 = FUN_00303e0c(uVar4,"\nFunction: ",0xb);
  sVar5 = strlen(param_5);
  uVar4 = FUN_00303e0c(uVar4,param_5,sVar5);
  uVar4 = FUN_00303e0c(uVar4,"\nMessage: ",10);
  uVar1 = (ulong)(*(byte *)(param_1 + 1) >> 1);
  lVar7 = (long)param_1 + 9;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar1 = param_1[2];
    lVar7 = param_1[3];
  }
  FUN_00303e0c(uVar4,lVar7,uVar1);
  FUN_00718470(&local_188,appuStack_158);
  if ((*pbVar6 & 1) != 0) {
    free((void *)param_1[3]);
  }
  puVar3 = PTR_PTR_007a10f0;
  param_1[2] = lStack_180;
  *(long *)pbVar6 = local_188;
  local_170[0] = *(long *)puVar3;
  param_1[3] = local_178;
  uVar4 = *(undefined8 *)(puVar3 + 0x48);
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar3 + 0x40);
  appuStack_158[0] = &PTR_FUN_0079be30;
  local_170[2] = uVar4;
  if ((local_118 & 1) != 0) {
    free(local_108);
  }
  FUN_00716098(appuStack_158);
  FUN_00717d80(local_170,puVar3 + 8);
  thunk_FUN_00715e00(auStack_f0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00374cf0  FUN_00374cf0 =====

void FUN_00374cf0(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
    return;
  }
                    /* try { // try from 00374d38 to 00374d3f has its CatchHandler @ 00374d4c */
  FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  return;
}


// ===== 00374d60  FUN_00374d60 =====

long FUN_00374d60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  return lVar1;
}


// ===== 00374d78  FUN_00374d78 =====

void FUN_00374d78(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00374db8 to 00374dbf has its CatchHandler @ 00374ddc */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_007626f8;
  return;
}


// ===== 00374df0  FUN_00374df0 =====

void FUN_00374df0(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00374e30 to 00374e37 has its CatchHandler @ 00374e54 */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_00762720;
  return;
}


// ===== 00374e68  FUN_00374e68 =====

void FUN_00374e68(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00374ea8 to 00374eaf has its CatchHandler @ 00374ecc */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_00762748;
  return;
}


// ===== 00374ee0  FUN_00374ee0 =====

void FUN_00374ee0(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00374f20 to 00374f27 has its CatchHandler @ 00374f44 */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_00762770;
  return;
}


// ===== 00374f58  FUN_00374f58 =====

void FUN_00374f58(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00374f98 to 00374f9f has its CatchHandler @ 00374fbc */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_00762798;
  return;
}


// ===== 00374fd0  FUN_00374fd0 =====

void FUN_00374fd0(long *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*param_2 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 8);
    lVar1 = *(long *)param_2;
    param_1[3] = *(long *)(param_2 + 0x10);
    param_1[2] = lVar2;
    param_1[1] = lVar1;
  }
  else {
                    /* try { // try from 00375010 to 00375017 has its CatchHandler @ 00375034 */
    FUN_002fb36c(param_1 + 1,*(long *)(param_2 + 0x10),*(long *)(param_2 + 8));
  }
  *param_1 = (long)&PTR_FUN_007627c0;
  return;
}


// ===== 00375048  FUN_00375048 =====

void FUN_00375048(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00375090  FUN_00375090 =====

void FUN_00375090(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 003750d8  FUN_003750d8 =====

void FUN_003750d8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00375120  FUN_00375120 =====

void FUN_00375120(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00375168  FUN_00375168 =====

void FUN_00375168(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 003751b0  FUN_003751b0 =====

void FUN_003751b0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 003751f8  FUN_003751f8 =====

void FUN_003751f8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1230 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 00375240  FUN_00375240 =====

void FUN_00375240(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long lStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_007ab690 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007ab690), iVar3 != 0)) {
    local_58 = 0;
    local_5c = 6;
                    /* try { // try from 003752e0 to 003752ef has its CatchHandler @ 00375334 */
    FUN_002f9504(&local_50,&local_58,&local_5c);
    DAT_007ab6a8 = lStack_48;
    DAT_007ab6a0 = local_50;
    local_50 = 0;
    lStack_48 = 0;
    FUN_002f9624(&local_50);
    __cxa_atexit(FUN_002f9674,&DAT_007ab6a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ab690);
  }
  lVar2 = DAT_007ab6a8;
  *param_1 = DAT_007ab6a0;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00755c20(1,lVar2 + 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375364  FUN_00375364 =====

void FUN_00375364(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *local_38;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_38 = (long *)0x0;
  local_30 = (long *)0x0;
  if (param_2 == 1) {
                    /* try { // try from 003753d4 to 003753db has its CatchHandler @ 00375464 */
    local_30 = (long *)FUN_00759c3c(0x20);
    puVar3 = PTR_DAT_007a1970;
    local_30[2] = 0;
    puVar1 = PTR_DAT_007a1978 + 0x10;
    *local_30 = (long)(puVar3 + 0x10);
    local_30[1] = 0;
    local_38 = local_30 + 3;
    *local_38 = (long)puVar1;
  }
  else if (param_2 == 0) {
                    /* try { // try from 00375394 to 0037539b has its CatchHandler @ 00375468 */
    local_30 = (long *)FUN_00759c3c(0x28);
    puVar3 = PTR_DAT_007a1960;
    local_30[2] = 0;
    puVar1 = PTR_DAT_007a1968 + 0x10;
    *local_30 = (long)(puVar3 + 0x10);
    local_30[1] = 0;
    local_38 = local_30 + 3;
    *local_38 = (long)puVar1;
    local_30[4] = 0x7b65025b;
  }
                    /* try { // try from 00375408 to 00375413 has its CatchHandler @ 0037546c */
  FUN_00375494(param_1,&local_38);
  plVar4 = local_30;
  if ((local_30 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_30 + 1), lVar5 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00375494  FUN_00375494 =====

void FUN_00375494(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (*param_2 == 0) {
    uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 00375530 to 0037553b has its CatchHandler @ 00375564 */
    FUN_002fd1a0(uVar5,"Null crypto algorithm pointer.");
    if (*(long *)(lVar1 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    lVar3 = FUN_00759c3c(0x10);
                    /* try { // try from 003754d0 to 003754d7 has its CatchHandler @ 00375584 */
    FUN_003755fc(lVar3,param_2);
    *param_1 = lVar3;
                    /* try { // try from 003754e0 to 003754e7 has its CatchHandler @ 00375574 */
    plVar4 = (long *)FUN_00759c3c(0x20);
    puVar2 = PTR_DAT_007a1980;
    plVar4[2] = 0;
    plVar4[3] = lVar3;
    param_1[1] = (long)plVar4;
    *plVar4 = (long)(puVar2 + 0x10);
    plVar4[1] = 0;
    if (*(long *)(lVar1 + 0x28) == lVar6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003755ac  FUN_003755ac =====

void FUN_003755ac(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 003755fc  FUN_003755fc =====

void FUN_003755fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 00375624  FUN_00375624 =====

void FUN_00375624(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00375650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x18))();
    return;
  }
  uVar1 = FUN_00753a74(0x10);
                    /* try { // try from 00375660 to 0037566b has its CatchHandler @ 00375684 */
  FUN_002fd1a0(uVar1,"Invalid input argument");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar1,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
}


// ===== 00375698  FUN_00375698 =====

void FUN_00375698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00762800;
  FUN_00712454();
  return;
}


// ===== 003756ac  FUN_003756ac =====

void FUN_003756ac(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1960 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003756e0  FUN_003756e0 =====

void FUN_003756e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003756e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 003756ec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003756f0  FUN_003756f0 =====

void FUN_003756f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00762850;
  FUN_00712454();
  return;
}


// ===== 00375704  FUN_00375704 =====

void FUN_00375704(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1970 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00375738  FUN_00375738 =====

void FUN_00375738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00375740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00375744  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00375748  FUN_00375748 =====

void FUN_00375748(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 003757bc  FUN_003757bc =====

void FUN_003757bc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003757e0  FUN_003757e0 =====

void FUN_003757e0(long param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00375850  FUN_00375850 =====

long FUN_00375850(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5Krisp6C_007a1988) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0037586c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00375870  FUN_00375870 =====

void FUN_00375870(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int local_70;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*param_2 == param_2[1]) {
    uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375ae8 to 00375af3 has its CatchHandler @ 00375c78 */
    FUN_002fd1a0(uVar6,"CryptoAlgoOpenssl::encrypt: Invalid input argument");
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    lVar5 = FUN_0037fab8();
    if (lVar5 == 0) {
      uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375b28 to 00375b33 has its CatchHandler @ 00375c74 */
      FUN_0071274c(uVar6,"CryptoAlgoOpenssl::encrypt: Failed to allocate context");
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
      }
    }
    else {
                    /* try { // try from 003758b4 to 003758db has its CatchHandler @ 00375c94 */
      uVar6 = FUN_00376370();
      iVar4 = FUN_00381064(lVar5,uVar6,0,&DAT_00204618,&DAT_00204628);
      if (iVar4 == 0) {
        uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375b68 to 00375b73 has its CatchHandler @ 00375c64 */
        FUN_0071274c(uVar6,"CryptoAlgoOpenssl::encrypt: EVP_EncryptInit_ex failed");
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375b84 to 00375b9b has its CatchHandler @ 00375c94 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
        }
      }
      else {
                    /* try { // try from 003758e0 to 003758e7 has its CatchHandler @ 00375c88 */
        iVar4 = FUN_0038936c(lVar5);
        pvVar2 = (void *)*param_2;
        pvVar7 = (void *)param_2[1];
        uVar11 = (ulong)iVar4;
        uVar10 = (long)pvVar7 - (long)pvVar2;
        uVar1 = uVar10 + uVar11;
        if (uVar10 < uVar1) {
          if ((ulong)(param_2[2] - (long)pvVar7) < uVar11) {
            if ((long)uVar1 < 0) {
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375c38 to 00375c3f has its CatchHandler @ 00375c60 */
                    /* WARNING: Subroutine does not return */
                FUN_00323508(param_2);
              }
              goto LAB_00375d18;
            }
            uVar8 = param_2[2] - (long)pvVar2;
            uVar9 = uVar8 * 2;
            if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
              uVar9 = uVar1;
            }
            if (0x3ffffffffffffffe < uVar8) {
              uVar9 = 0x7fffffffffffffff;
            }
                    /* try { // try from 00375938 to 0037593f has its CatchHandler @ 00375c60 */
            pvVar7 = (void *)FUN_00759c3c(uVar9);
            memset((void *)((long)pvVar7 + uVar10),0,uVar11);
            memcpy(pvVar7,pvVar2,uVar10);
            *param_2 = (long)pvVar7;
            param_2[1] = (long)pvVar7 + uVar1;
            param_2[2] = (long)pvVar7 + uVar9;
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
            }
          }
          else {
            memset(pvVar7,0,uVar11);
            param_2[1] = (long)pvVar7 + uVar11;
          }
        }
        else if (uVar1 < uVar10) {
          param_2[1] = (long)pvVar2 + uVar1;
        }
        local_6c = 0;
                    /* try { // try from 003759b0 to 003759c3 has its CatchHandler @ 00375c8c */
        iVar4 = FUN_003803e0(lVar5,*param_2,&local_6c,*param_2,uVar10 & 0xffffffff);
        if (iVar4 == 0) {
          uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375bac to 00375bb7 has its CatchHandler @ 00375c5c */
          FUN_0071274c(uVar6,"CryptoAlgoOpenssl::encrypt: EVP_EncryptUpdate failed");
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375bc8 to 00375bdf has its CatchHandler @ 00375c8c */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
          }
        }
        else {
          local_70 = 0;
                    /* try { // try from 003759d4 to 00375a3b has its CatchHandler @ 00375c90 */
          iVar4 = FUN_0038096c(lVar5,*param_2 + (long)local_6c,&local_70);
          if (iVar4 == 0) {
            uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375bf0 to 00375bfb has its CatchHandler @ 00375c58 */
            FUN_0071274c(uVar6,"CryptoAlgoOpenssl::encrypt: EVP_EncryptFinal_ex failed");
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375c0c to 00375c23 has its CatchHandler @ 00375c90 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
            }
          }
          else {
            pvVar2 = (void *)*param_2;
            pvVar7 = (void *)param_2[1];
            uVar1 = (long)local_70 + (long)(int)local_68;
            uVar11 = (long)pvVar7 - (long)pvVar2;
            uVar10 = uVar1 - uVar11;
            if (uVar1 < uVar11 || uVar10 == 0) {
              if (uVar1 < uVar11) {
                param_2[1] = (long)pvVar2 + uVar1;
              }
            }
            else if ((ulong)(param_2[2] - (long)pvVar7) < uVar10) {
              if ((int)uVar1 < 0) {
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375c50 to 00375c57 has its CatchHandler @ 00375c90 */
                    /* WARNING: Subroutine does not return */
                  FUN_00323508(param_2);
                }
                goto LAB_00375d18;
              }
              uVar8 = param_2[2] - (long)pvVar2;
              uVar9 = uVar8 * 2;
              if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
                uVar9 = uVar1;
              }
              if (0x3ffffffffffffffe < uVar8) {
                uVar9 = 0x7fffffffffffffff;
              }
              pvVar7 = (void *)FUN_00759c3c(uVar9);
              memset((void *)((long)pvVar7 + uVar11),0,uVar10);
              memcpy(pvVar7,pvVar2,uVar11);
              *param_2 = (long)pvVar7;
              param_2[1] = (long)pvVar7 + uVar1;
              param_2[2] = (long)pvVar7 + uVar9;
              if (pvVar2 != (void *)0x0) {
                free(pvVar2);
              }
            }
            else {
              memset(pvVar7,0,uVar10);
              param_2[1] = (long)pvVar7 + uVar10;
            }
            FUN_0037fae8(lVar5);
            if (*(long *)(lVar3 + 0x28) == local_68) {
              return;
            }
          }
        }
      }
    }
  }
LAB_00375d18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00375d20  FUN_00375d20 =====

void FUN_00375d20(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *__src;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong __n;
  int local_70;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*param_2 == param_2[1]) {
    uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375ee8 to 00375ef3 has its CatchHandler @ 003760b4 */
    FUN_002fd1a0(uVar6,"CryptoAlgoOpenssl::decrypt: Invalid input argument");
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
    }
  }
  else {
    lVar5 = FUN_0037fab8();
    if (lVar5 == 0) {
      uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375f28 to 00375f33 has its CatchHandler @ 003760b0 */
      FUN_0071274c(uVar6,"CryptoAlgoOpenssl::decrypt: Failed to allocate context");
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
      }
    }
    else {
                    /* try { // try from 00375d64 to 00375d8b has its CatchHandler @ 003760d0 */
      uVar6 = FUN_00376370();
      iVar4 = FUN_003810dc(lVar5,uVar6,0,&DAT_00204618,&DAT_00204628);
      if (iVar4 == 0) {
        uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00375f68 to 00375f73 has its CatchHandler @ 003760a0 */
        FUN_0071274c(uVar6,"CryptoAlgoOpenssl::decrypt: EVP_DecryptInit_ex failed");
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375f84 to 00375f9b has its CatchHandler @ 003760d0 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
        }
      }
      else {
                    /* try { // try from 00375d90 to 00375d97 has its CatchHandler @ 003760c8 */
        iVar4 = FUN_0038936c(lVar5);
        lVar1 = *param_2;
        uVar10 = (ulong)iVar4;
        uVar2 = 0;
        if (uVar10 != 0) {
          uVar2 = (ulong)(param_2[1] - lVar1) / uVar10;
        }
        if (param_2[1] - lVar1 == uVar2 * uVar10) {
          local_6c = 0;
                    /* try { // try from 00375db4 to 00375dc3 has its CatchHandler @ 003760c4 */
          iVar4 = FUN_00380550(lVar5,lVar1,&local_6c,lVar1);
          if (iVar4 == 0) {
            uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00376000 to 0037600b has its CatchHandler @ 00376098 */
            FUN_0071274c(uVar6,"CryptoAlgoOpenssl::decrypt: EVP_DecryptUpdate failed");
            if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0037601c to 00376033 has its CatchHandler @ 003760c4 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
            }
          }
          else {
            local_70 = 0;
                    /* try { // try from 00375dd4 to 00375e3b has its CatchHandler @ 003760cc */
            iVar4 = FUN_00380c1c(lVar5,*param_2 + (long)local_6c,&local_70);
            if (iVar4 == 0) {
              uVar6 = FUN_00753a74(0x10);
                    /* try { // try from 00376044 to 0037604f has its CatchHandler @ 00376094 */
              FUN_0071274c(uVar6,"CryptoAlgoOpenssl::decrypt: EVP_DecryptFinal_ex failed");
              if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00376060 to 00376093 has its CatchHandler @ 003760cc */
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar6,PTR_PTR_007a1030,PTR_FUN_007a1038);
              }
            }
            else {
              __src = (void *)*param_2;
              pvVar7 = (void *)param_2[1];
              uVar2 = (long)local_70 + (long)(int)local_68;
              __n = (long)pvVar7 - (long)__src;
              uVar10 = uVar2 - __n;
              if (uVar2 < __n || uVar10 == 0) {
                if (uVar2 < __n) {
                  param_2[1] = (long)__src + uVar2;
                }
              }
              else if ((ulong)(param_2[2] - (long)pvVar7) < uVar10) {
                if ((int)uVar2 < 0) {
                  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_00323508(param_2);
                  }
                  goto LAB_00376154;
                }
                uVar9 = param_2[2] - (long)__src;
                uVar11 = uVar9 * 2;
                if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
                  uVar11 = uVar2;
                }
                if (0x3ffffffffffffffe < uVar9) {
                  uVar11 = 0x7fffffffffffffff;
                }
                pvVar7 = (void *)FUN_00759c3c(uVar11);
                memset((void *)((long)pvVar7 + __n),0,uVar10);
                memcpy(pvVar7,__src,__n);
                *param_2 = (long)pvVar7;
                param_2[1] = (long)pvVar7 + uVar2;
                param_2[2] = (long)pvVar7 + uVar11;
                if (__src != (void *)0x0) {
                  free(__src);
                }
              }
              else {
                memset(pvVar7,0,uVar10);
                param_2[1] = (long)pvVar7 + uVar10;
              }
              FUN_0037fae8(lVar5);
              if (*(long *)(lVar3 + 0x28) == local_68) {
                return;
              }
            }
          }
        }
        else {
          plVar8 = (long *)FUN_00753a74(0x10);
                    /* try { // try from 00375fac to 00375fb7 has its CatchHandler @ 0037609c */
          FUN_00712630(plVar8,"CryptoAlgoOpenssl::decrypt: Invalid buffer size");
          *plVar8 = (long)(PTR_DAT_007a0fb0 + 0x10);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00375fd8 to 00375fef has its CatchHandler @ 003760c8 */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar8,PTR_PTR_007a0fb8,PTR_FUN_007a0fc0);
          }
        }
      }
    }
  }
LAB_00376154:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0037615c  FUN_0037615c =====

void FUN_0037615c(void)

{
  return;
}


// ===== 00376160  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00376164  FUN_00376164 =====

void FUN_00376164(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar4 = *param_2;
  uVar8 = param_2[1] - lVar4;
  if ((uVar8 & 7) == 0) {
    if (4 < uVar8) {
      lVar9 = 0;
      do {
        puVar3 = (uint *)(lVar4 + lVar9 * 4);
        iVar6 = -0x61c88647;
        lVar7 = 0x20;
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        do {
          lVar7 = lVar7 + -1;
          uVar10 = ((uVar11 >> 5) + 0xf52eb135 ^
                   uVar11 + iVar6 ^ *(int *)(param_1 + 8) + uVar11 * 0x10) + uVar10;
          uVar2 = iVar6 + uVar10;
          iVar6 = iVar6 + -0x61c88647;
          uVar11 = (uVar10 * 0x10 + 0xda6ffa78 ^ uVar2 ^ (uVar10 >> 5) + 0x7d5b6a87) + uVar11;
        } while (lVar7 != 0);
        uVar1 = lVar9 + 3;
        lVar9 = lVar9 + 2;
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
      } while (uVar1 < uVar8 >> 2);
    }
    return;
  }
  uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 00376230 to 0037623b has its CatchHandler @ 00376254 */
  FUN_00712630(uVar5,"buffer size should be even");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar5,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
}


// ===== 00376268  FUN_00376268 =====

void FUN_00376268(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar4 = *param_2;
  uVar8 = param_2[1] - lVar4;
  if ((uVar8 & 7) == 0) {
    if (4 < uVar8) {
      lVar9 = 0;
      do {
        puVar3 = (uint *)(lVar4 + lVar9 * 4);
        iVar6 = -0x3910c8e0;
        lVar7 = 0x20;
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        do {
          lVar7 = lVar7 + -1;
          uVar11 = uVar11 - (uVar10 * 0x10 + 0xda6ffa78 ^ uVar10 + iVar6 ^
                            (uVar10 >> 5) + 0x7d5b6a87);
          uVar2 = iVar6 + uVar11;
          iVar6 = iVar6 + 0x61c88647;
          uVar10 = uVar10 - ((uVar11 >> 5) + 0xf52eb135 ^ uVar2 ^
                            *(int *)(param_1 + 8) + uVar11 * 0x10);
        } while (lVar7 != 0);
        uVar1 = lVar9 + 3;
        lVar9 = lVar9 + 2;
        *puVar3 = uVar10;
        puVar3[1] = uVar11;
      } while (uVar1 < uVar8 >> 2);
    }
    return;
  }
  uVar5 = FUN_00753a74(0x10);
                    /* try { // try from 00376334 to 0037633f has its CatchHandler @ 00376358 */
  FUN_00712630(uVar5,"buffer size should be even");
                    /* WARNING: Subroutine does not return */
  FUN_00753c5c(uVar5,PTR_PTR_007a0f38,PTR_FUN_007a0f40);
}


// ===== 0037636c  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00376370  FUN_00376370 =====

undefined * FUN_00376370(void)

{
  return &DAT_00762980;
}


// ===== 0037637c  FUN_0037637c =====

undefined * FUN_0037637c(void)

{
  return &DAT_00762a78;
}


// ===== 00376388  FUN_00376388 =====

undefined * FUN_00376388(void)

{
  return &DAT_00762b70;
}


// ===== 00376394  FUN_00376394 =====

undefined * FUN_00376394(void)

{
  return &DAT_00762c68;
}


// ===== 003763a0  FUN_003763a0 =====

undefined * FUN_003763a0(void)

{
  return &DAT_00762d60;
}


// ===== 003763ac  FUN_003763ac =====

undefined * FUN_003763ac(void)

{
  return &DAT_00762e58;
}


// ===== 003763b8  FUN_003763b8 =====

undefined * FUN_003763b8(void)

{
  return &DAT_00762f50;
}


// ===== 003763c4  FUN_003763c4 =====

undefined * FUN_003763c4(void)

{
  return &DAT_00763048;
}


// ===== 003763d0  FUN_003763d0 =====

undefined * FUN_003763d0(void)

{
  return &DAT_00763140;
}


// ===== 003763dc  FUN_003763dc =====

undefined * FUN_003763dc(void)

{
  return &DAT_00763238;
}


// ===== 003763e8  FUN_003763e8 =====

undefined * FUN_003763e8(void)

{
  return &DAT_00763330;
}


// ===== 003763f4  FUN_003763f4 =====

undefined * FUN_003763f4(void)

{
  return &DAT_00763428;
}


// ===== 00376400  FUN_00376400 =====

undefined * FUN_00376400(void)

{
  return &DAT_00763520;
}


// ===== 0037640c  FUN_0037640c =====

undefined * FUN_0037640c(void)

{
  return &DAT_00763618;
}


// ===== 00376418  FUN_00376418 =====

undefined * FUN_00376418(void)

{
  return &DAT_00763710;
}


// ===== 00376424  FUN_00376424 =====

undefined * FUN_00376424(void)

{
  return &DAT_00763808;
}


// ===== 00376430  FUN_00376430 =====

undefined * FUN_00376430(void)

{
  return &DAT_00763900;
}


// ===== 0037643c  FUN_0037643c =====

undefined * FUN_0037643c(void)

{
  return &DAT_007639f8;
}


// ===== 00376448  FUN_00376448 =====

undefined * FUN_00376448(void)

{
  return &DAT_00763af0;
}


// ===== 00376454  FUN_00376454 =====

undefined * FUN_00376454(void)

{
  return &DAT_00763be8;
}


// ===== 00376460  FUN_00376460 =====

undefined * FUN_00376460(void)

{
  return &DAT_00763ce0;
}


// ===== 0037646c  FUN_0037646c =====

undefined * FUN_0037646c(void)

{
  return &DAT_00763dd8;
}


// ===== 00376478  FUN_00376478 =====

undefined * FUN_00376478(void)

{
  return &DAT_00763ed0;
}


// ===== 00376484  FUN_00376484 =====

undefined * FUN_00376484(void)

{
  return &DAT_00763fc8;
}


// ===== 00376490  FUN_00376490 =====

undefined * FUN_00376490(void)

{
  return &DAT_007640c0;
}


// ===== 0037649c  FUN_0037649c =====

undefined * FUN_0037649c(void)

{
  return &DAT_007641b8;
}


// ===== 003764a8  FUN_003764a8 =====

undefined * FUN_003764a8(void)

{
  return &DAT_007642b0;
}


// ===== 003764b4  FUN_003764b4 =====

undefined * FUN_003764b4(void)

{
  return &DAT_007643a8;
}


// ===== 003764c0  FUN_003764c0 =====

undefined * FUN_003764c0(void)

{
  return &DAT_007644a0;
}


// ===== 003764cc  FUN_003764cc =====

undefined * FUN_003764cc(void)

{
  return &DAT_00764598;
}


// ===== 003764d8  FUN_003764d8 =====

undefined * FUN_003764d8(void)

{
  return &DAT_00764690;
}


// ===== 003764e4  FUN_003764e4 =====

undefined * FUN_003764e4(void)

{
  return &DAT_00764788;
}


// ===== 003764f0  FUN_003764f0 =====

undefined * FUN_003764f0(void)

{
  return &DAT_00764880;
}


// ===== 003764fc  FUN_003764fc =====

undefined * FUN_003764fc(void)

{
  return &DAT_00764978;
}


// ===== 00376508  FUN_00376508 =====

undefined * FUN_00376508(void)

{
  return &DAT_00764a70;
}


// ===== 00376514  FUN_00376514 =====

undefined * FUN_00376514(void)

{
  return &DAT_00764b68;
}


// ===== 00376520  FUN_00376520 =====

undefined * FUN_00376520(void)

{
  return &DAT_00764c60;
}


// ===== 0037652c  FUN_0037652c =====

undefined * FUN_0037652c(void)

{
  return &DAT_00764d58;
}


// ===== 00376538  FUN_00376538 =====

undefined8 FUN_00376538(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_003894a0();
  iVar2 = FUN_003897ac(param_1);
  if (iVar2 < 1) {
    uVar5 = 0x82;
    uVar6 = 0x96b;
  }
  else {
    FUN_0038944c(param_1);
    iVar3 = FUN_00388e4c();
    puVar1 = PTR_FUN_007a1990;
    if (iVar3 != 2) {
      puVar1 = (undefined *)0x0;
    }
    if ((param_4 == 0) && (0xfffffffd < iVar3 - 3U)) {
      iVar2 = FUN_00378fcc(param_2,iVar2 << 3,lVar4);
      *(undefined **)(lVar4 + 0xf8) = PTR_FUN_007a19a0;
      *(undefined **)(lVar4 + 0x100) = puVar1;
    }
    else {
      iVar2 = FUN_003789ec(param_2,iVar2 << 3,lVar4);
      *(undefined **)(lVar4 + 0xf8) = PTR_FUN_007a1998;
      *(undefined **)(lVar4 + 0x100) = puVar1;
    }
    if (-1 < iVar2) {
      return 1;
    }
    uVar5 = 0x8f;
    uVar6 = 0x9c0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/e_aes.c",uVar6,"aes_init_key");
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 00376650  FUN_00376650 =====

undefined8 FUN_00376650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = FUN_003894a0();
  pcVar4 = *(code **)(lVar3 + 0x100);
  if (pcVar4 != (code *)0x0) {
    uVar1 = FUN_00389488(param_1);
    (*pcVar4)(param_3,param_2,param_4,lVar3,param_1 + 0x28,uVar1);
    return 1;
  }
  iVar2 = FUN_00389488(param_1);
  if (iVar2 != 0) {
    FUN_003d666c(param_3,param_2,param_4,lVar3);
    return 1;
  }
  FUN_003d685c(param_3,param_2,param_4,lVar3,param_1 + 0x28,*(undefined8 *)(lVar3 + 0xf8));
  return 1;
}


// ===== 0037672c  FUN_0037672c =====

undefined8 FUN_0037672c(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = FUN_0038936c();
  uVar3 = (ulong)iVar1;
  lVar2 = FUN_003894a0(param_1);
  if (uVar3 <= param_4) {
    uVar4 = 0;
    do {
      (**(code **)(lVar2 + 0xf8))(param_3 + uVar4,param_2 + uVar4,lVar2);
      uVar4 = uVar4 + uVar3;
    } while (uVar4 <= param_4 - uVar3);
  }
  return 1;
}


// ===== 003767a8  FUN_003767a8 =====

undefined8 FUN_003767a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_24;
  
  lVar1 = FUN_003894a0();
  local_24 = FUN_003896c8(param_1);
  FUN_003db200(param_3,param_2,param_4,lVar1,param_1 + 0x28,&local_24,*(undefined8 *)(lVar1 + 0xf8))
  ;
  FUN_00389734(param_1,local_24);
  return 1;
}


// ===== 00376824  FUN_00376824 =====

undefined8 FUN_00376824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = FUN_003894a0();
  local_24 = FUN_003896c8(param_1);
  uVar1 = FUN_00389488(param_1);
  FUN_003d7ca4(param_3,param_2,param_4,lVar2,param_1 + 0x28,&local_24,uVar1,
               *(undefined8 *)(lVar2 + 0xf8));
  FUN_00389734(param_1,local_24);
  return 1;
}


// ===== 003768ac  FUN_003768ac =====

undefined8 FUN_003768ac(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_54;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar3 = FUN_003894a0();
  iVar1 = FUN_00389f54(param_1,0x2000);
  if (iVar1 == 0) {
    uVar4 = param_4 >> 0x3c;
    while (uVar4 != 0) {
      local_38 = FUN_003896c8(param_1);
      uVar2 = FUN_00389488(param_1);
      FUN_003d7f84(param_3,param_2,0x8000000000000000,lVar3,param_1 + 0x28,&local_38,uVar2,
                   *(undefined8 *)(lVar3 + 0xf8));
      FUN_00389734(param_1,local_38);
      param_4 = param_4 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
      param_3 = param_3 + 0x1000000000000000;
      uVar4 = param_4 >> 0x3c;
    }
    if (param_4 == 0) {
      return 1;
    }
    local_54 = FUN_003896c8(param_1);
    uVar2 = FUN_00389488(param_1);
    FUN_003d7f84(param_3,param_2,param_4 << 3,lVar3,param_1 + 0x28,&local_54,uVar2,
                 *(undefined8 *)(lVar3 + 0xf8));
    uVar2 = local_54;
  }
  else {
    local_34 = FUN_003896c8(param_1);
    uVar2 = FUN_00389488(param_1);
    FUN_003d7f84(param_3,param_2,param_4,lVar3,param_1 + 0x28,&local_34,uVar2,
                 *(undefined8 *)(lVar3 + 0xf8));
    uVar2 = local_34;
  }
  FUN_00389734(param_1,uVar2);
  return 1;
}


// ===== 00376a04  FUN_00376a04 =====

undefined8 FUN_00376a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = FUN_003894a0();
  local_24 = FUN_003896c8(param_1);
  uVar1 = FUN_00389488(param_1);
  FUN_003d8080(param_3,param_2,param_4,lVar2,param_1 + 0x28,&local_24,uVar1,
               *(undefined8 *)(lVar2 + 0xf8));
  FUN_00389734(param_1,local_24);
  return 1;
}


// ===== 00376a8c  FUN_00376a8c =====

undefined8 FUN_00376a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int local_34;
  
  iVar1 = FUN_003896c8();
  lVar2 = FUN_003894a0(param_1);
  if (-1 < iVar1) {
    lVar4 = *(long *)(lVar2 + 0x100);
    local_34 = iVar1;
    uVar3 = FUN_003896c0(param_1);
    if (lVar4 == 0) {
      FUN_003d816c(param_3,param_2,param_4,lVar2,param_1 + 0x28,uVar3,&local_34,
                   *(undefined8 *)(lVar2 + 0xf8));
    }
    else {
      FUN_003d8404(param_3,param_2,param_4,lVar2,param_1 + 0x28,uVar3,&local_34,
                   *(undefined8 *)(lVar2 + 0x100));
    }
    FUN_00389734(param_1,local_34);
    return 1;
  }
  return 0;
}


// ===== 00376b6c  FUN_00376b6c =====

undefined8 FUN_00376b6c(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003894a0();
  if (param_2 == 0 && param_3 == (void *)0x0) {
    return 1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_003897ac(param_1);
    if (0 < iVar1) {
      FUN_003789ec(param_2,iVar1 << 3,lVar2);
      FUN_003d8798(lVar2 + 0x100,lVar2,PTR_FUN_007a1998);
      *(undefined8 *)(lVar2 + 0x2e8) = 0;
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(lVar2 + 0xfc) != 0 &&
          (param_3 = *(void **)(lVar2 + 0x2c0), param_3 != (void *)0x0)))) {
        FUN_003d8960(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c8));
        *(undefined4 *)(lVar2 + 0xfc) = 1;
      }
      *(undefined4 *)(lVar2 + 0xf8) = 1;
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/e_aes.c",0xaf0,"aes_gcm_init_key");
    FUN_00379a5c(6,0x82,0);
    return 0;
  }
  if (*(int *)(lVar2 + 0xf8) == 0) {
    memcpy(*(void **)(lVar2 + 0x2c0),param_3,(long)*(int *)(lVar2 + 0x2c8));
  }
  else {
    FUN_003d8960(lVar2 + 0x100,param_3,(long)*(int *)(lVar2 + 0x2c8));
  }
  *(undefined4 *)(lVar2 + 0x2d0) = 0;
  *(undefined4 *)(lVar2 + 0xfc) = 1;
  return 1;
}


// ===== 00376cb8  FUN_00376cb8 =====

ulong FUN_00376cb8(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  
  lVar2 = FUN_003894a0();
  if (*(int *)(lVar2 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar2 + 0x2d8)) {
    lVar2 = FUN_003894a0(param_1);
    if (param_2 != param_3) {
      return 0xffffffff;
    }
    uVar4 = param_4 - 0x18;
    if (param_4 < 0x18) {
      return 0xffffffff;
    }
    iVar1 = FUN_00389488(param_1);
    if ((iVar1 == 0) ||
       (lVar6 = *(long *)(lVar2 + 0x2e0), *(long *)(lVar2 + 0x2e0) = lVar6 + 1, lVar6 != -1)) {
      iVar1 = FUN_00389488(param_1);
      uVar5 = 0x18;
      if (iVar1 != 0) {
        uVar5 = 0x13;
      }
      iVar1 = FUN_00381710(param_1,uVar5,8,param_3);
      if (0 < iVar1) {
        uVar3 = FUN_003896c0(param_1);
        iVar1 = FUN_003d8c28(lVar2 + 0x100,uVar3,(long)*(int *)(lVar2 + 0x2d8));
        if (iVar1 == 0) {
          param_3 = param_3 + 8;
          iVar1 = FUN_00389488(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar2 + 0x2e8) == 0) {
              iVar1 = FUN_003d91cc(lVar2 + 0x100,param_3,param_3,uVar4);
            }
            else {
              iVar1 = FUN_003d98a0();
            }
            if (iVar1 == 0) {
              uVar3 = FUN_003896c0(param_1);
              FUN_003d9dc0(lVar2 + 0x100,uVar3,0x10);
              uVar3 = FUN_003896c0(param_1);
              iVar1 = FUN_003c46d4(uVar3,param_3 + uVar4,0x10);
              if (iVar1 == 0) {
                param_4 = uVar4 & 0xffffffff;
                goto LAB_00376e0c;
              }
              FUN_003c89b8(param_3,uVar4);
            }
          }
          else {
            if (*(long *)(lVar2 + 0x2e8) == 0) {
              iVar1 = FUN_003d8e4c(lVar2 + 0x100,param_3,param_3,uVar4);
            }
            else {
              iVar1 = FUN_003d954c();
            }
            if (iVar1 == 0) {
              FUN_003d9dc0(lVar2 + 0x100,param_3 + uVar4,0x10);
              param_4 = param_4 & 0xffffffff;
              goto LAB_00376e0c;
            }
          }
        }
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/evp/e_aes.c",0xb4d,"aes_gcm_tls_cipher");
      FUN_00379a5c(6,0xb7,0);
    }
    param_4 = 0xffffffff;
LAB_00376e0c:
    *(undefined4 *)(lVar2 + 0xfc) = 0;
    *(undefined4 *)(lVar2 + 0x2d8) = 0xffffffff;
    return param_4;
  }
  if (*(int *)(lVar2 + 0xfc) == 0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    iVar1 = FUN_00389488(param_1);
    if (iVar1 != 0) {
      uVar3 = FUN_003896c0(param_1);
      FUN_003d9dc0(lVar2 + 0x100,uVar3,0x10);
      uVar4 = 0;
      *(undefined4 *)(lVar2 + 0x2cc) = 0x10;
LAB_00376e60:
      *(undefined4 *)(lVar2 + 0xfc) = 0;
      return uVar4;
    }
    if (-1 < *(int *)(lVar2 + 0x2cc)) {
      uVar3 = FUN_003896c0(param_1);
      uVar4 = FUN_003d9bfc(lVar2 + 0x100,uVar3,(long)*(int *)(lVar2 + 0x2cc));
      if ((int)uVar4 == 0) goto LAB_00376e60;
    }
  }
  else {
    if (param_2 == 0) {
      iVar1 = FUN_003d8c28(lVar2 + 0x100,param_3,param_4);
    }
    else {
      iVar1 = FUN_00389488(param_1);
      if (iVar1 == 0) {
        if (*(long *)(lVar2 + 0x2e8) == 0) {
          iVar1 = FUN_003d91cc(lVar2 + 0x100,param_3,param_2,param_4);
        }
        else {
          iVar1 = FUN_003d98a0();
        }
      }
      else {
        if (*(long *)(lVar2 + 0x2e8) != 0) {
          iVar1 = FUN_003d954c();
          if (iVar1 != 0) {
            return 0xffffffff;
          }
          goto LAB_00376f58;
        }
        iVar1 = FUN_003d8e4c(lVar2 + 0x100,param_3,param_2,param_4);
      }
    }
    if (iVar1 == 0) {
LAB_00376f58:
      return param_4 & 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 00376fe0  FUN_00376fe0 =====

long FUN_00376fe0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_003894a0();
  if (lVar1 != 0) {
    FUN_003c89b8(lVar1 + 0x100,0x1c0);
    if (*(long *)(lVar1 + 0x2c0) != param_1 + 0x28) {
      FUN_003c86b4(*(long *)(lVar1 + 0x2c0),"crypto/evp/e_aes.c",0xa56);
    }
    lVar1 = 1;
  }
  return lVar1;
}


// ===== 00377038  FUN_00377038 =====

ulong FUN_00377038(undefined8 *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  size_t __n;
  
  __n = (size_t)param_3;
  lVar5 = FUN_003894a0();
  uVar8 = 0xffffffff;
  if (param_2 < 0x12) {
    if (param_2 < 9) {
      if (param_2 == 0) {
        *(undefined8 *)(lVar5 + 0xf8) = 0;
        uVar3 = FUN_003894b8(*param_1);
        *(undefined8 **)(lVar5 + 0x2c0) = param_1 + 5;
        *(undefined4 *)(lVar5 + 0x2c8) = uVar3;
        *(undefined8 *)(lVar5 + 0x2cc) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x2d8) = 0xffffffff;
        return 1;
      }
      if (param_2 == 8) {
        lVar6 = FUN_003894a0(param_4);
        if (*(long *)(lVar5 + 0x288) != 0) {
          if (*(long *)(lVar5 + 0x288) != lVar5) {
            return 0;
          }
          *(long *)(lVar6 + 0x288) = lVar6;
        }
        if (*(undefined8 **)(lVar5 + 0x2c0) == param_1 + 5) {
          *(undefined8 **)(lVar6 + 0x2c0) = param_4 + 5;
          return 1;
        }
        param_4 = (undefined8 *)
                  FUN_003c83a4((long)*(int *)(lVar5 + 0x2c8),"crypto/evp/e_aes.c",0xad7);
        *(undefined8 **)(lVar6 + 0x2c0) = param_4;
        if (param_4 == (undefined8 *)0x0) {
          return 0;
        }
        param_1 = *(undefined8 **)(lVar5 + 0x2c0);
        __n = (size_t)*(int *)(lVar5 + 0x2c8);
LAB_0037740c:
        memcpy(param_4,param_1,__n);
        return 1;
      }
    }
    else {
      if (param_2 == 9) {
        if ((int)param_3 < 1) {
          return 0;
        }
        if ((0x10 < param_3) && (*(int *)(lVar5 + 0x2c8) < (int)param_3)) {
          if (*(undefined8 **)(lVar5 + 0x2c0) != param_1 + 5) {
            FUN_003c86b4(*(undefined8 **)(lVar5 + 0x2c0),"crypto/evp/e_aes.c",0xa72);
          }
          uVar8 = FUN_003c83a4(__n,"crypto/evp/e_aes.c",0xa73);
          *(ulong *)(lVar5 + 0x2c0) = uVar8;
          if (uVar8 == 0) goto LAB_00377480;
        }
        *(uint *)(lVar5 + 0x2c8) = param_3;
        return 1;
      }
      if (param_2 == 0x10) {
        if (param_3 - 0x11 < 0xfffffff0) {
          return 0;
        }
        uVar8 = (ulong)*(uint *)(param_1 + 2);
        if (*(uint *)(param_1 + 2) != 0) {
          if (*(int *)(lVar5 + 0x2cc) < 0) {
            return 0;
          }
          param_1 = param_1 + 7;
          goto LAB_0037740c;
        }
      }
      else if (param_2 == 0x11) {
        if (0xffffffef < param_3 - 0x11) {
          if (*(int *)(param_1 + 2) != 0) {
            return 0;
          }
          memcpy(param_1 + 7,param_4,(ulong)param_3);
          *(uint *)(lVar5 + 0x2cc) = param_3;
          return 1;
        }
        uVar8 = 0;
      }
    }
  }
  else if (param_2 < 0x16) {
    if (param_2 == 0x12) {
      if (param_3 == 0xffffffff) {
        memcpy(*(void **)(lVar5 + 0x2c0),param_4,(long)*(int *)(lVar5 + 0x2c8));
        *(undefined4 *)(lVar5 + 0x2d0) = 1;
        return 1;
      }
      if ((int)param_3 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar5 + 0x2c8) - param_3) < 8) {
        return 0;
      }
      memcpy(*(void **)(lVar5 + 0x2c0),param_4,__n);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar4 = FUN_003edd58(*(long *)(lVar5 + 0x2c0) + __n,*(int *)(lVar5 + 0x2c8) - param_3),
         iVar4 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar5 + 0x2d0) = 1;
      return 1;
    }
    if (((param_2 == 0x13) &&
        (uVar8 = (ulong)*(uint *)(lVar5 + 0x2d0), *(uint *)(lVar5 + 0x2d0) != 0)) &&
       (uVar8 = (ulong)*(uint *)(lVar5 + 0xf8), *(uint *)(lVar5 + 0xf8) != 0)) {
      FUN_003d8960(lVar5 + 0x100,*(undefined8 *)(lVar5 + 0x2c0),(long)*(int *)(lVar5 + 0x2c8));
      uVar7 = *(uint *)(lVar5 + 0x2c8);
      uVar2 = uVar7;
      if ((int)param_3 <= (int)uVar7) {
        uVar2 = param_3;
      }
      uVar1 = uVar7;
      if (0 < (int)param_3) {
        uVar1 = uVar2;
      }
      memcpy(param_4,(void *)((*(long *)(lVar5 + 0x2c0) + (long)(int)uVar7) - (long)(int)uVar1),
             (long)(int)uVar1);
      lVar6 = *(long *)(lVar5 + 0x2c0) + (long)*(int *)(lVar5 + 0x2c8);
      uVar2 = *(byte *)(lVar6 + -1) + 1;
      *(char *)(lVar6 + -1) = (char)uVar2;
      if (((((uVar2 >> 8 != 0) &&
            (uVar2 = *(byte *)(lVar6 + -2) + 1, *(char *)(lVar6 + -2) = (char)uVar2, uVar2 >> 8 != 0
            )) && ((uVar2 = *(byte *)(lVar6 + -3) + 1, *(char *)(lVar6 + -3) = (char)uVar2,
                   uVar2 >> 8 != 0 &&
                   ((uVar2 = *(byte *)(lVar6 + -4) + 1, *(char *)(lVar6 + -4) = (char)uVar2,
                    uVar2 >> 8 != 0 &&
                    (uVar2 = *(byte *)(lVar6 + -5) + 1, *(char *)(lVar6 + -5) = (char)uVar2,
                    uVar2 >> 8 != 0)))))) &&
          (uVar2 = *(byte *)(lVar6 + -6) + 1, *(char *)(lVar6 + -6) = (char)uVar2, uVar2 >> 8 != 0))
         && (uVar2 = *(byte *)(lVar6 + -7) + 1, *(char *)(lVar6 + -7) = (char)uVar2, uVar2 >> 8 != 0
            )) {
        *(char *)(lVar6 + -8) = *(char *)(lVar6 + -8) + '\x01';
      }
      *(undefined4 *)(lVar5 + 0xfc) = 1;
      return 1;
    }
  }
  else {
    if (param_2 == 0x16) {
      if (param_3 != 0xd) {
        return 0;
      }
      uVar9 = *param_4;
      *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_4 + 5);
      param_1[7] = uVar9;
      *(undefined4 *)(lVar5 + 0x2d8) = 0xd;
      *(undefined8 *)(lVar5 + 0x2e0) = 0;
      uVar2 = (uint)(*(ushort *)((long)param_1 + 0x43) >> 8) |
              (*(ushort *)((long)param_1 + 0x43) & 0xff00ff) << 8;
      uVar7 = uVar2 - 8;
      if (uVar2 < 8) {
        return 0;
      }
      if (*(int *)(param_1 + 2) == 0) {
        if (uVar7 < 0x10) {
          return 0;
        }
        uVar7 = uVar2 - 0x18;
      }
      *(ushort *)((long)param_1 + 0x43) =
           (ushort)(uVar7 >> 8) & 0xff | (ushort)((uVar7 & 0xff00ff) << 8);
      return 0x10;
    }
    if (param_2 == 0x18) {
      uVar8 = (ulong)*(uint *)(lVar5 + 0x2d0);
      if ((*(uint *)(lVar5 + 0x2d0) != 0) &&
         (uVar8 = (ulong)*(uint *)(lVar5 + 0xf8), *(uint *)(lVar5 + 0xf8) != 0)) {
        if (*(int *)(param_1 + 2) != 0) {
          return 0;
        }
        memcpy((void *)((*(long *)(lVar5 + 0x2c0) + (long)*(int *)(lVar5 + 0x2c8)) -
                       (long)(int)param_3),param_4,(long)(int)param_3);
        FUN_003d8960(lVar5 + 0x100,*(undefined8 *)(lVar5 + 0x2c0),(long)*(int *)(lVar5 + 0x2c8));
        *(undefined4 *)(lVar5 + 0xfc) = 1;
        return 1;
      }
    }
    else if (param_2 == 0x25) {
      *(undefined4 *)param_4 = *(undefined4 *)(lVar5 + 0x2c8);
      return 1;
    }
  }
LAB_00377480:
  return uVar8 & 0xffffffff;
}


// ===== 00377534  FUN_00377534 =====

undefined8 FUN_00377534(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = FUN_003894a0();
  if (param_2 != 0 || param_3 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      iVar3 = FUN_003897ac(param_1);
      puVar2 = PTR_FUN_007a1998;
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = iVar3 + 1;
      }
      if (iVar3 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/e_aes.c",0xca2,"aes_xts_init_key");
        uVar5 = 0x82;
LAB_0037767c:
        FUN_00379a5c(6,uVar5,0);
        return 0;
      }
      uVar6 = (ulong)(uint)(iVar1 >> 1);
      iVar1 = (iVar1 >> 1) << 3;
      if (param_4 == 0) {
        *(undefined8 *)(lVar4 + 0x210) = 0;
        FUN_00378fcc(param_2,iVar1,lVar4);
        *(undefined **)(lVar4 + 0x200) = PTR_FUN_007a19a0;
      }
      else {
        iVar3 = FUN_003c46d4(param_2,param_2 + uVar6,uVar6);
        if (iVar3 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/evp/e_aes.c",0xcb7,"aes_xts_init_key");
          uVar5 = 0xc0;
          goto LAB_0037767c;
        }
        *(undefined8 *)(lVar4 + 0x210) = 0;
        FUN_003789ec(param_2,iVar1,lVar4);
        *(undefined **)(lVar4 + 0x200) = puVar2;
      }
      FUN_003789ec(param_2 + uVar6,iVar1,lVar4 + 0xf8);
      *(undefined **)(lVar4 + 0x208) = puVar2;
      *(long *)(lVar4 + 0x1f0) = lVar4;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar4 + 0x1f8) = lVar4 + 0xf8;
      uVar5 = *param_3;
      *(undefined8 *)(param_1 + 0x30) = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = uVar5;
    }
  }
  return 1;
}


// ===== 003776a0  FUN_003776a0 =====

undefined8 FUN_003776a0(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_003894a0();
  if ((((*(long *)(lVar3 + 0x1f0) != 0) && (0xf < param_4)) && (param_3 != 0)) &&
     ((param_2 != 0 && (*(long *)(lVar3 + 0x1f8) != 0)))) {
    if (param_4 < 0x1000001) {
      if (*(code **)(lVar3 + 0x210) == (code *)0x0) {
        uVar1 = FUN_00389488(param_1);
        iVar2 = FUN_003dbdcc(lVar3 + 0x1f0,param_1 + 0x28,param_3,param_2,param_4,uVar1);
        if (iVar2 != 0) {
          return 0;
        }
      }
      else {
        (**(code **)(lVar3 + 0x210))
                  (param_3,param_2,param_4,*(long *)(lVar3 + 0x1f0),*(long *)(lVar3 + 0x1f8),
                   param_1 + 0x28);
      }
      return 1;
    }
    FUN_00379868(0);
    FUN_0037995c("crypto/evp/e_aes.c",0xd1a,"aes_xts_cipher");
    FUN_00379a5c(6,0xbf,0);
  }
  return 0;
}


// ===== 003777a8  FUN_003777a8 =====

undefined8 FUN_003777a8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_003894a0();
  if (param_2 == 0) {
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
    return 1;
  }
  if (param_2 != 8) {
    return 0xffffffff;
  }
  lVar2 = FUN_003894a0(param_4);
  if (*(long *)(lVar1 + 0x1f0) != 0) {
    if (*(long *)(lVar1 + 0x1f0) != lVar1) {
      return 0;
    }
    *(long *)(lVar2 + 0x1f0) = lVar2;
  }
  if (*(long *)(lVar1 + 0x1f8) != 0) {
    if (*(long *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
      return 0;
    }
    *(long *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    return 1;
  }
  return 1;
}


// ===== 00377888  FUN_00377888 =====

undefined8 FUN_00377888(long param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003894a0();
  if (param_2 != 0 || param_3 != (void *)0x0) {
    if (param_2 != 0) {
      iVar1 = FUN_003897ac(param_1);
      if (iVar1 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/e_aes.c",0xda2,"aes_ccm_init_key");
        FUN_00379a5c(6,0x82,0);
        return 0;
      }
      FUN_003789ec(param_2,iVar1 << 3,lVar2);
      FUN_003d6bb4(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2
                   ,PTR_FUN_007a1998);
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined4 *)(lVar2 + 0xf8) = 1;
    }
    if (param_3 != (void *)0x0) {
      memcpy((void *)(param_1 + 0x28),param_3,0xf - (long)*(int *)(lVar2 + 0x108));
      *(undefined4 *)(lVar2 + 0xfc) = 1;
      return 1;
    }
  }
  return 1;
}


// ===== 0037798c  FUN_0037798c =====

ulong FUN_0037798c(long param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [16];
  
  lVar2 = FUN_003894a0();
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (*(int *)(lVar2 + 0x110) < 0) {
      if ((param_2 != (undefined8 *)0x0) && (param_3 == (undefined8 *)0x0)) {
        param_4 = 0;
        goto LAB_00377adc;
      }
      if (*(int *)(lVar2 + 0xfc) != 0) {
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            iVar1 = FUN_003d6bdc(lVar2 + 0x118,param_1 + 0x28,0xf - (long)*(int *)(lVar2 + 0x108),
                                 param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x104) = 1;
              goto LAB_00377adc;
            }
          }
          else if ((param_4 == 0) || (*(int *)(lVar2 + 0x104) != 0)) {
            FUN_003d6c58(lVar2 + 0x118,param_3,param_4);
            goto LAB_00377adc;
          }
        }
        else {
          iVar1 = FUN_00389488(param_1);
          if ((iVar1 != 0) || (*(int *)(lVar2 + 0x100) != 0)) {
            if (*(int *)(lVar2 + 0x104) == 0) {
              iVar1 = FUN_003d6bdc(lVar2 + 0x118,param_1 + 0x28,0xf - (long)*(int *)(lVar2 + 0x108),
                                   param_4);
              if (iVar1 != 0) goto LAB_00377ad8;
              *(undefined4 *)(lVar2 + 0x104) = 1;
              iVar1 = FUN_00389488(param_1);
              lVar4 = *(long *)(lVar2 + 0x150);
            }
            else {
              iVar1 = FUN_00389488(param_1);
              lVar4 = *(long *)(lVar2 + 0x150);
            }
            if (iVar1 == 0) {
              if (lVar4 == 0) {
                iVar1 = FUN_003d7274(lVar2 + 0x118,param_3,param_2,param_4);
                if (iVar1 == 0) goto LAB_00377c34;
LAB_00377c64:
                FUN_003c89b8(param_2,param_4);
                param_4 = 0xffffffff;
              }
              else {
                iVar1 = FUN_003d79b0();
                if (iVar1 != 0) goto LAB_00377c64;
LAB_00377c34:
                lVar4 = FUN_003d7c48(lVar2 + 0x118,auStack_50,(long)*(int *)(lVar2 + 0x10c));
                if (lVar4 == 0) goto LAB_00377c64;
                uVar5 = FUN_003896c0(param_1);
                iVar1 = FUN_003c46d4(auStack_50,uVar5,(long)*(int *)(lVar2 + 0x10c));
                if ((iVar1 != 0) || ((int)param_4 == -1)) goto LAB_00377c64;
              }
              *(undefined8 *)(lVar2 + 0x100) = 0;
              *(undefined4 *)(lVar2 + 0xfc) = 0;
              goto LAB_00377adc;
            }
            if (lVar4 == 0) {
              iVar1 = FUN_003d6ea4(lVar2 + 0x118,param_3,param_2,param_4);
            }
            else {
              iVar1 = FUN_003d75c4();
            }
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x100) = 1;
              goto LAB_00377adc;
            }
          }
        }
      }
    }
    else {
      lVar2 = FUN_003894a0(param_1);
      if ((param_2 == param_3) && ((long)*(int *)(lVar2 + 0x10c) + 8U <= param_4)) {
        iVar1 = FUN_00389488(param_1);
        if (iVar1 == 0) {
          uVar5 = *param_3;
        }
        else {
          puVar3 = (undefined8 *)FUN_003896c0(param_1);
          uVar5 = *puVar3;
          *param_3 = uVar5;
        }
        *(undefined8 *)(param_1 + 0x2c) = uVar5;
        param_4 = (param_4 - (long)*(int *)(lVar2 + 0x10c)) - 8;
        iVar1 = FUN_003d6bdc(lVar2 + 0x118,param_1 + 0x28,0xf - (long)*(int *)(lVar2 + 0x108),
                             param_4);
        if (iVar1 == 0) {
          uVar5 = FUN_003896c0(param_1);
          FUN_003d6c58(lVar2 + 0x118,uVar5,(long)*(int *)(lVar2 + 0x110));
          param_3 = param_3 + 1;
          iVar1 = FUN_00389488(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = FUN_003d7274(lVar2 + 0x118,param_3,param_3,param_4);
            }
            else {
              iVar1 = FUN_003d79b0();
            }
            if (((iVar1 == 0) &&
                (lVar4 = FUN_003d7c48(lVar2 + 0x118,auStack_50,(long)*(int *)(lVar2 + 0x10c)),
                lVar4 != 0)) &&
               (iVar1 = FUN_003c46d4(auStack_50,(long)param_3 + param_4,
                                     (long)*(int *)(lVar2 + 0x10c)), iVar1 == 0)) goto LAB_00377adc;
            FUN_003c89b8(param_3,param_4);
          }
          else {
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = FUN_003d6ea4(lVar2 + 0x118,param_3,param_3,param_4);
            }
            else {
              iVar1 = FUN_003d75c4();
            }
            if ((iVar1 == 0) &&
               (lVar4 = FUN_003d7c48(lVar2 + 0x118,(long)param_3 + param_4,
                                     (long)*(int *)(lVar2 + 0x10c)), lVar4 != 0)) {
              param_4 = (ulong)((int)param_4 + *(int *)(lVar2 + 0x10c) + 8);
              goto LAB_00377adc;
            }
          }
        }
      }
    }
  }
LAB_00377ad8:
  param_4 = 0xffffffff;
LAB_00377adc:
  return param_4 & 0xffffffff;
}


// ===== 00377cd0  FUN_00377cd0 =====

ulong FUN_00377cd0(long param_1,int param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ushort uVar9;
  
  lVar4 = FUN_003894a0();
  uVar5 = 0xffffffff;
  if (param_2 < 0x11) {
    if (param_2 < 9) {
      if (param_2 == 0) {
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        *(undefined8 *)(lVar4 + 0x100) = 0;
        uVar8 = DAT_001b7190;
        *(undefined4 *)(lVar4 + 0x110) = 0xffffffff;
        *(undefined8 *)(lVar4 + 0x108) = uVar8;
        return 1;
      }
      if (param_2 == 8) {
        lVar7 = FUN_003894a0(param_4);
        if (*(long *)(lVar4 + 0x148) == 0) {
          return 1;
        }
        if (*(long *)(lVar4 + 0x148) == lVar4) {
          *(long *)(lVar7 + 0x148) = lVar7;
          return 1;
        }
        uVar5 = 0;
      }
      return uVar5;
    }
    if (param_2 != 9) {
      if (param_2 != 0x10) {
        return 0xffffffff;
      }
      uVar5 = FUN_00389488(param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      if (*(int *)(lVar4 + 0x100) == 0) {
        return 0;
      }
      lVar7 = FUN_003d7c48(lVar4 + 0x118,param_4,(long)(int)param_3);
      if (lVar7 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *(undefined4 *)(lVar4 + 0xfc) = 0;
      return 1;
    }
    param_3 = 0xf - param_3;
  }
  else {
    if (param_2 < 0x14) {
      if (param_2 == 0x11) {
        if ((param_3 & 1) != 0) {
          return 0;
        }
        if (param_3 - 0x11 < 0xfffffff3) {
          return 0;
        }
        iVar3 = FUN_00389488(param_1);
        if ((param_4 != (int *)0x0) && (iVar3 != 0)) {
          return 0;
        }
        if (param_4 != (int *)0x0) {
          *(undefined4 *)(lVar4 + 0x100) = 1;
          __dest = (void *)FUN_003896c0(param_1);
          memcpy(__dest,param_4,(ulong)param_3);
        }
        *(uint *)(lVar4 + 0x10c) = param_3;
        return 1;
      }
      if (param_2 != 0x12) {
        return 0xffffffff;
      }
      if (param_3 != 4) {
        return 0;
      }
      *(int *)(param_1 + 0x28) = *param_4;
      return 1;
    }
    if (param_2 != 0x14) {
      if (param_2 != 0x16) {
        if (param_2 != 0x25) {
          return 0xffffffff;
        }
        *param_4 = 0xf - *(int *)(lVar4 + 0x108);
        return 1;
      }
      if (param_3 != 0xd) {
        return 0;
      }
      puVar6 = (undefined8 *)FUN_003896c0(param_1);
      uVar8 = *(undefined8 *)((long)param_4 + 5);
      *puVar6 = *(undefined8 *)param_4;
      *(undefined8 *)((long)puVar6 + 5) = uVar8;
      *(undefined4 *)(lVar4 + 0x110) = 0xd;
      lVar7 = FUN_003896c0(param_1);
      uVar1 = *(undefined1 *)(lVar7 + 0xb);
      lVar7 = FUN_003896c0(param_1);
      uVar2 = CONCAT11(uVar1,*(undefined1 *)(lVar7 + 0xc));
      uVar9 = uVar2 - 8;
      if (uVar2 < 8) {
        return 0;
      }
      iVar3 = FUN_00389488(param_1);
      if (iVar3 == 0) {
        if ((int)(uint)uVar9 < *(int *)(lVar4 + 0x10c)) {
          return 0;
        }
        uVar9 = uVar9 - (short)*(int *)(lVar4 + 0x10c);
      }
      lVar7 = FUN_003896c0(param_1);
      *(char *)(lVar7 + 0xb) = (char)(uVar9 >> 8);
      lVar7 = FUN_003896c0(param_1);
      *(char *)(lVar7 + 0xc) = (char)uVar9;
      return (ulong)*(uint *)(lVar4 + 0x10c);
    }
  }
  if (param_3 - 9 < 0xfffffff9) {
    return 0;
  }
  *(uint *)(lVar4 + 0x108) = param_3;
  return 1;
}


// ===== 00377fb8  FUN_00377fb8 =====

undefined8 FUN_00377fb8(long param_1,long param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = FUN_003894a0();
  if (param_2 != 0 || param_3 != (void *)0x0) {
    if (param_2 == 0) {
      if (param_3 == (void *)0x0) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_003897ac(param_1);
      if (iVar1 < 1) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/e_aes.c",0xe60,"aes_wrap_init_key");
        FUN_00379a5c(6,0x82,0);
        return 0;
      }
      iVar2 = FUN_00389488(param_1);
      if (iVar2 == 0) {
        FUN_00378fcc(param_2,iVar1 << 3,lVar4);
      }
      else {
        FUN_003789ec(param_2,iVar1 << 3,lVar4);
      }
      if (param_3 == (void *)0x0) {
        *(undefined8 *)(lVar4 + 0xf8) = 0;
        return 1;
      }
    }
    uVar3 = FUN_00388c08(param_1);
    if ((int)uVar3 < 0) {
      return 0;
    }
    memcpy((void *)(param_1 + 0x28),param_3,(ulong)uVar3);
    *(void **)(lVar4 + 0xf8) = (void *)(param_1 + 0x28);
  }
  return 1;
}


// ===== 003780f4  FUN_003780f4 =====

int FUN_003780f4(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar4 = FUN_003894a0();
  iVar2 = FUN_00388c08(param_1);
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return -1;
  }
  iVar3 = FUN_00389488(param_1);
  if (iVar3 == 0) {
    if ((0xf < param_4) && ((param_4 & 7) == 0)) goto LAB_003781ac;
  }
  else if (((param_4 & 7) == 0) || (iVar2 == 4)) {
LAB_003781ac:
    iVar3 = FUN_00381100(param_2,param_3,param_4 & 0xffffffff);
    if (iVar3 != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/e_aes.c",0xe87,"aes_wrap_cipher");
      FUN_00379a5c(6,0xa2,0);
      return 0;
    }
    iVar3 = FUN_00389488(param_1);
    if (param_2 == 0) {
      uVar6 = (uint)param_4;
      if (iVar3 == 0) {
        return uVar6 - 8;
      }
      uVar1 = uVar6 + 7 & 0xfffffff8;
      if (iVar2 != 4) {
        uVar1 = uVar6;
      }
      return uVar1 + 8;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0xf8);
    if (iVar2 == 4) {
      if (iVar3 == 0) {
        lVar4 = FUN_003dbc9c(lVar4,uVar5,param_2,param_3,param_4,PTR_FUN_007a19a0);
      }
      else {
        lVar4 = FUN_003dbb58(lVar4,uVar5,param_2,param_3,param_4,PTR_FUN_007a1998);
      }
    }
    else if (iVar3 == 0) {
      lVar4 = FUN_003db72c(lVar4,uVar5,param_2,param_3,param_4,PTR_FUN_007a19a0);
    }
    else {
      lVar4 = FUN_003db380(lVar4,uVar5,param_2,param_3,param_4,PTR_FUN_007a1998);
    }
    iVar2 = (int)lVar4;
    if (lVar4 == 0) {
      iVar2 = -1;
    }
    return iVar2;
  }
  return -1;
}


// ===== 00378300  FUN_00378300 =====

undefined8 FUN_00378300(undefined8 param_1,long param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_003894a0();
  if (param_2 == 0 && param_3 == (void *)0x0) {
    uVar3 = 1;
  }
  else {
    if (param_2 == 0) {
      if (*(int *)(lVar2 + 0x1f0) != 0) {
        FUN_003da7c4(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                     (long)*(int *)(lVar2 + 0x2ec));
        *(undefined4 *)(lVar2 + 500) = 1;
        return 1;
      }
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(long)*(int *)(lVar2 + 0x2e8));
      *(undefined4 *)(lVar2 + 500) = 1;
      return 1;
    }
    iVar1 = FUN_003897ac(param_1);
    if (iVar1 < 1) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/e_aes.c",0xf52,"aes_ocb_init_key");
      FUN_00379a5c(6,0x82,0);
      return 0;
    }
    FUN_003789ec(param_2,iVar1 << 3,lVar2);
    FUN_00378fcc(param_2,iVar1 << 3,lVar2 + 0xf8);
    uVar3 = FUN_003da238(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,PTR_FUN_007a1998,PTR_FUN_007a19a0,0);
    if ((int)uVar3 != 0) {
      if ((param_3 == (void *)0x0) &&
         ((*(int *)(lVar2 + 500) == 0 ||
          (param_3 = *(void **)(lVar2 + 0x2a8), param_3 == (void *)0x0)))) {
        *(undefined4 *)(lVar2 + 0x1f0) = 1;
        return 1;
      }
      iVar1 = FUN_003da7c4(lVar2 + 0x1f8,param_3,(long)*(int *)(lVar2 + 0x2e8),
                           (long)*(int *)(lVar2 + 0x2ec));
      if (iVar1 == 1) {
        *(undefined4 *)(lVar2 + 500) = 1;
        *(undefined4 *)(lVar2 + 0x1f0) = 1;
        return 1;
      }
      return 0;
    }
  }
  return uVar3;
}


// ===== 003784b8  FUN_003784b8 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_003784b8(undefined8 param_1,long param_2,void *param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  ulong __n;
  uint *puVar8;
  
  lVar6 = FUN_003894a0();
  if (*(int *)(lVar6 + 500) == 0) {
    return -1;
  }
  if (*(int *)(lVar6 + 0x1f0) == 0) {
    return -1;
  }
  if (param_3 == (void *)0x0) {
    if (*(int *)(lVar6 + 0x2e0) < 1) {
      iVar5 = 0;
      iVar4 = *(int *)(lVar6 + 0x2e4);
    }
    else {
      iVar4 = FUN_00389488(param_1);
      if (iVar4 == 0) {
        iVar4 = FUN_003dae64(lVar6 + 0x1f8,lVar6 + 0x2c0,param_2,(long)*(int *)(lVar6 + 0x2e0));
      }
      else {
        iVar4 = FUN_003dac40(lVar6 + 0x1f8,lVar6 + 0x2c0,param_2);
      }
      if (iVar4 == 0) {
        return -1;
      }
      iVar5 = *(int *)(lVar6 + 0x2e0);
      *(undefined4 *)(lVar6 + 0x2e0) = 0;
      iVar4 = *(int *)(lVar6 + 0x2e4);
    }
    if (0 < iVar4) {
      iVar4 = FUN_003da994(lVar6 + 0x1f8,lVar6 + 0x2d0);
      if (iVar4 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar6 + 0x2e4) = 0;
    }
    iVar4 = FUN_00389488(param_1);
    if (iVar4 == 0) {
      if (*(int *)(lVar6 + 0x2ec) < 0) {
        return -1;
      }
      iVar4 = FUN_003db088(lVar6 + 0x1f8,lVar6 + 0x2b0);
      if (iVar4 != 0) {
        return -1;
      }
    }
    else {
      iVar4 = FUN_003db11c(lVar6 + 0x1f8,lVar6 + 0x2b0,0x10);
      if (iVar4 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar6 + 500) = 0;
    return iVar5;
  }
  if (param_2 == 0) {
    __dest = (void *)(lVar6 + 0x2d0);
    puVar8 = (uint *)(lVar6 + 0x2e4);
    uVar2 = *puVar8;
    if (0 < (int)uVar2) goto LAB_00378598;
LAB_003785e0:
    iVar4 = 0;
    uVar7 = param_4;
    if (param_4 < 0x10) goto LAB_00378758;
  }
  else {
    iVar4 = FUN_00381100(param_2 + *(int *)(lVar6 + 0x2e0),param_3,param_4 & 0xffffffff);
    if (iVar4 != 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/e_aes.c",0xfb9,"aes_ocb_cipher");
      FUN_00379a5c(6,0xa2,0);
      return 0;
    }
    __dest = (void *)(lVar6 + 0x2c0);
    puVar8 = (uint *)(lVar6 + 0x2e0);
    uVar2 = *puVar8;
    if ((int)uVar2 < 1) goto LAB_003785e0;
LAB_00378598:
    __n = (ulong)(0x10 - uVar2);
    uVar7 = param_4 - __n;
    if (param_4 < __n) {
      memcpy((void *)((long)__dest + (ulong)uVar2),param_3,param_4);
      *puVar8 = *puVar8 + (int)param_4;
      return 0;
    }
    memcpy((void *)((long)__dest + (ulong)uVar2),param_3,__n);
    if (param_2 == 0) {
      iVar4 = FUN_003da994(lVar6 + 0x1f8,__dest,0x10);
    }
    else {
      iVar4 = FUN_00389488(param_1);
      if (iVar4 == 0) {
        iVar4 = FUN_003dae64(lVar6 + 0x1f8,__dest,param_2,0x10);
      }
      else {
        iVar4 = FUN_003dac40(lVar6 + 0x1f8,__dest,param_2,0x10);
      }
    }
    if (iVar4 == 0) {
      return -1;
    }
    lVar1 = param_2 + 0x10;
    bVar3 = param_2 != 0;
    param_3 = (void *)((long)param_3 + __n);
    param_2 = 0;
    if (bVar3) {
      param_2 = lVar1;
    }
    iVar4 = 0x10;
    *puVar8 = 0;
    param_4 = uVar7;
    if (uVar7 < 0x10) goto LAB_00378758;
  }
  if (param_2 == 0) {
    iVar5 = FUN_003da994(lVar6 + 0x1f8,param_3,uVar7 & 0xfffffffffffffff0);
  }
  else {
    iVar5 = FUN_00389488(param_1);
    if (iVar5 == 0) {
      iVar5 = FUN_003dae64(lVar6 + 0x1f8,param_3,param_2,uVar7 & 0xfffffffffffffff0);
    }
    else {
      iVar5 = FUN_003dac40(lVar6 + 0x1f8,param_3,param_2,uVar7 & 0xfffffffffffffff0);
    }
  }
  if (iVar5 == 0) {
    return -1;
  }
  param_3 = (void *)((long)param_3 + (uVar7 & 0xfffffffffffffff0));
  iVar4 = iVar4 + (int)(uVar7 & 0xfffffffffffffff0);
  param_4 = uVar7;
LAB_00378758:
  param_4 = param_4 & 0xf;
  if (param_4 != 0) {
    memcpy(__dest,param_3,param_4);
    *puVar8 = (uint)param_4;
    return iVar4;
  }
  return iVar4;
}


// ===== 003787d4  FUN_003787d4 =====

undefined8 FUN_003787d4(void)

{
  long lVar1;
  
  lVar1 = FUN_003894a0();
  FUN_003db1b4(lVar1 + 0x1f8);
  return 1;
}


// ===== 003787f4  FUN_003787f4 =====

undefined8 FUN_003787f4(undefined8 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_003894a0();
  uVar4 = 0xffffffff;
  if (param_2 < 0x10) {
    if (param_2 == 0) {
      uVar4 = *param_1;
      *(undefined8 *)(lVar3 + 0x1f0) = 0;
      uVar1 = FUN_003894b8(uVar4);
      *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
      *(undefined8 **)(lVar3 + 0x2a8) = param_1 + 5;
      *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
      *(undefined8 *)(lVar3 + 0x2e0) = 0;
      return 1;
    }
    if (param_2 == 8) {
      lVar5 = FUN_003894a0(param_4);
      uVar4 = FUN_003da724(lVar5 + 0x1f8,lVar3 + 0x1f8,lVar5,lVar5 + 0xf8);
      return uVar4;
    }
    if (param_2 == 9) {
      if (0xfffffff0 < param_3 - 0x10) {
        *(uint *)(lVar3 + 0x2e8) = param_3;
        return 1;
      }
      uVar4 = 0;
    }
  }
  else if (param_2 == 0x10) {
    if (*(uint *)(lVar3 + 0x2ec) != param_3) {
      return 0;
    }
    uVar4 = FUN_00389488(param_1);
    if ((int)uVar4 != 0) {
      memcpy(param_4,(void *)(lVar3 + 0x2b0),(long)(int)param_3);
      return 1;
    }
  }
  else {
    if (param_2 == 0x11) {
      if (param_4 == (undefined4 *)0x0) {
        if (param_3 < 0x11) {
          *(uint *)(lVar3 + 0x2ec) = param_3;
          return 1;
        }
      }
      else if ((*(uint *)(lVar3 + 0x2ec) == param_3) && (iVar2 = FUN_00389488(param_1), iVar2 == 0))
      {
        memcpy((void *)(lVar3 + 0x2b0),param_4,(long)(int)param_3);
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x25) {
      *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
      return 1;
    }
  }
  return uVar4;
}


// ===== 003789d0  FUN_003789d0 =====

void FUN_003789d0(void)

{
  int in_w5;
  
  if (in_w5 != 0) {
    FUN_003d666c();
    return;
  }
  FUN_003d685c();
  return;
}


// ===== 003789ec  FUN_003789ec =====

undefined8 FUN_003789ec(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
    if ((param_2 != 0x80) && ((param_2 != 0x100 && (param_2 != 0xc0)))) {
      return 0xfffffffe;
    }
    if (param_2 == 0x80) {
      uVar11 = 10;
    }
    else if (param_2 == 0xc0) {
      uVar11 = 0xc;
    }
    else {
      uVar11 = 0xe;
    }
    param_3[0x3c] = uVar11;
    uVar11 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar13 = uVar11 >> 0x10 | uVar11 << 0x10;
    *param_3 = uVar13;
    uVar11 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    param_3[1] = uVar11;
    uVar12 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    param_3[2] = uVar12;
    uVar14 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    param_3[3] = uVar14;
    if (param_2 == 0x80) {
      lVar10 = 0;
      param_3 = param_3 + 4;
      do {
        uVar12 = param_3[-1];
        puVar1 = (uint *)((long)&DAT_00205684 + lVar10);
        lVar10 = lVar10 + 4;
        uVar13 = uVar13 ^ (uint)(byte)(&DAT_00204687)[(ulong)(byte)(uVar12 >> 0x10) * 4] << 0x18 ^
                 (uint)(byte)(&DAT_00204a86)[(ulong)(byte)(uVar12 >> 8) * 4] << 0x10 ^
                 (uint)(byte)(&DAT_00204e85)[(ulong)(byte)uVar12 * 4] << 8 ^
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar12 >> 0x16) & 0x3fc] ^ *puVar1;
        uVar11 = param_3[-2] ^ param_3[-3] ^ uVar13;
        *param_3 = uVar13;
        param_3[1] = param_3[-3] ^ uVar13;
        param_3[2] = uVar11;
        param_3[3] = uVar11 ^ uVar12;
        param_3 = param_3 + 4;
      } while (lVar10 != 0x28);
    }
    else {
      uVar9 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      param_3[4] = uVar9 >> 0x10 | uVar9 << 0x10;
      uVar7 = param_1[5];
      bVar4 = *(byte *)((long)param_1 + 0x15);
      bVar5 = *(byte *)((long)param_1 + 0x16);
      bVar6 = *(byte *)((long)param_1 + 0x17);
      uVar9 = (uint)CONCAT11(bVar5,bVar6) | (uint)(byte)uVar7 << 0x18 | (uint)bVar4 << 0x10;
      param_3[5] = uVar9;
      if (param_2 == 0xc0) {
        uVar13 = ((uint)(byte)(&DAT_00204a86)[(ulong)bVar5 * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)bVar4 * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)bVar6 * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(byte)uVar7 * 4]) ^ uVar13 ^ 0x1000000;
        uVar11 = uVar11 ^ uVar13;
        param_3[6] = uVar13;
        param_3[7] = uVar11;
        uVar14 = uVar14 ^ uVar12 ^ uVar11;
        uVar2 = param_3[4] ^ uVar14;
        param_3[8] = uVar12 ^ uVar11;
        param_3[9] = uVar14;
        uVar9 = uVar2 ^ uVar9;
        param_3[10] = uVar2;
        param_3[0xb] = uVar9;
        uVar13 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar13 ^ 0x2000000;
        uVar12 = uVar12 ^ uVar13;
        param_3[0xc] = uVar13;
        param_3[0xd] = uVar11 ^ uVar13;
        uVar2 = uVar2 ^ uVar14 ^ uVar12;
        param_3[0xe] = uVar12;
        param_3[0xf] = uVar14 ^ uVar12;
        uVar9 = uVar2 ^ uVar9;
        param_3[0x10] = uVar2;
        param_3[0x11] = uVar9;
        uVar7 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                 (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                 (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar13 ^ 0x4000000;
        uVar3 = uVar11 ^ uVar13 ^ uVar7;
        uVar14 = uVar14 ^ uVar3;
        param_3[0x12] = uVar7;
        param_3[0x13] = uVar3;
        uVar2 = uVar2 ^ uVar14;
        param_3[0x14] = uVar12 ^ uVar3;
        param_3[0x15] = uVar14;
        uVar9 = uVar2 ^ uVar9;
        param_3[0x16] = uVar2;
        param_3[0x17] = uVar9;
        uVar11 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar7 ^ 0x8000000;
        uVar12 = uVar12 ^ uVar11;
        param_3[0x18] = uVar11;
        param_3[0x19] = uVar3 ^ uVar11;
        uVar2 = uVar2 ^ uVar14 ^ uVar12;
        param_3[0x1a] = uVar12;
        param_3[0x1b] = uVar14 ^ uVar12;
        uVar9 = uVar2 ^ uVar9;
        param_3[0x1c] = uVar2;
        param_3[0x1d] = uVar9;
        uVar13 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar11 ^ 0x10000000;
        uVar7 = uVar3 ^ uVar11 ^ uVar13;
        uVar14 = uVar14 ^ uVar7;
        param_3[0x1e] = uVar13;
        param_3[0x1f] = uVar7;
        uVar2 = uVar2 ^ uVar14;
        param_3[0x20] = uVar12 ^ uVar7;
        param_3[0x21] = uVar14;
        uVar9 = uVar2 ^ uVar9;
        param_3[0x22] = uVar2;
        param_3[0x23] = uVar9;
        uVar11 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar13 ^ 0x20000000;
        uVar12 = uVar12 ^ uVar11;
        param_3[0x24] = uVar11;
        param_3[0x25] = uVar7 ^ uVar11;
        uVar2 = uVar2 ^ uVar14 ^ uVar12;
        param_3[0x26] = uVar12;
        param_3[0x27] = uVar14 ^ uVar12;
        uVar9 = uVar2 ^ uVar9;
        param_3[0x28] = uVar2;
        param_3[0x29] = uVar9;
        uVar13 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar11 ^ 0x40000000;
        uVar7 = uVar7 ^ uVar11 ^ uVar13;
        uVar14 = uVar14 ^ uVar7;
        param_3[0x2a] = uVar13;
        param_3[0x2b] = uVar7;
        param_3[0x2c] = uVar12 ^ uVar7;
        param_3[0x2d] = uVar14;
        uVar9 = uVar2 ^ uVar14 ^ uVar9;
        param_3[0x2e] = uVar2 ^ uVar14;
        param_3[0x2f] = uVar9;
        uVar11 = ((uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 |
                  (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 |
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 |
                 (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4]) ^ uVar13 ^ 0x80000000;
        param_3[0x30] = uVar11;
        param_3[0x31] = uVar7 ^ uVar11;
        param_3[0x32] = uVar12 ^ uVar11;
        param_3[0x33] = uVar14 ^ uVar12 ^ uVar11;
        return 0;
      }
      uVar9 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      param_3[6] = uVar9 >> 0x10 | uVar9 << 0x10;
      uVar9 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      param_3[7] = uVar9;
      if (param_2 == 0x100) {
        lVar10 = 0;
        param_3 = param_3 + 8;
        while( true ) {
          uVar13 = uVar13 ^ (uint)(byte)(&DAT_00204687)[(ulong)(uVar9 >> 0x10 & 0xff) * 4] << 0x18 ^
                   (uint)(byte)(&DAT_00204a86)[(ulong)(uVar9 >> 8 & 0xff) * 4] << 0x10 ^
                   (uint)(byte)(&DAT_00204e85)[(ulong)(uVar9 & 0xff) * 4] << 8 ^
                   (uint)(byte)(&DAT_00205284)[(ulong)(uVar9 >> 0x18) * 4] ^
                   *(uint *)((long)&DAT_00205684 + lVar10);
          uVar11 = uVar11 ^ uVar13;
          uVar12 = uVar12 ^ uVar11;
          *param_3 = uVar13;
          param_3[1] = uVar11;
          uVar14 = uVar14 ^ uVar12;
          param_3[2] = uVar12;
          param_3[3] = uVar14;
          if (lVar10 == 0x18) break;
          lVar10 = lVar10 + 4;
          uVar7 = param_3[-4] ^ (uint)(byte)(&DAT_00204687)[(ulong)(uVar14 >> 0x18) * 4] << 0x18 ^
                  (uint)(byte)(&DAT_00204a86)[(ulong)(uVar14 >> 0x10 & 0xff) * 4] << 0x10 ^
                  (uint)(byte)(&DAT_00204e85)[(ulong)(uVar14 >> 8 & 0xff) * 4] << 8 ^
                  (uint)(byte)(&DAT_00205284)[(ulong)(uVar14 & 0xff) * 4];
          uVar3 = param_3[-3] ^ uVar7;
          param_3[4] = uVar7;
          param_3[5] = uVar3;
          uVar3 = param_3[-2] ^ uVar3;
          uVar9 = uVar3 ^ uVar9;
          param_3[6] = uVar3;
          param_3[7] = uVar9;
          param_3 = param_3 + 8;
        }
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}


// ===== 00378fcc  FUN_00378fcc =====

undefined8 FUN_00378fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  
  uVar5 = FUN_003789ec();
  if (-1 < (int)uVar5) {
    if (0 < *(int *)(param_3 + 0xf0)) {
      iVar11 = *(int *)(param_3 + 0xf0) << 2;
      puVar7 = (undefined4 *)(param_3 + 8);
      lVar6 = 0;
      lVar9 = (long)iVar11;
      puVar8 = puVar7 + iVar11;
      do {
        lVar9 = lVar9 + -4;
        uVar3 = puVar7[-2];
        lVar6 = lVar6 + 4;
        puVar7[-2] = puVar8[-2];
        puVar8[-2] = uVar3;
        uVar3 = puVar7[-1];
        puVar7[-1] = puVar8[-1];
        puVar8[-1] = uVar3;
        uVar3 = *puVar7;
        *puVar7 = *puVar8;
        *puVar8 = uVar3;
        uVar3 = puVar7[1];
        puVar7[1] = puVar8[1];
        puVar7 = puVar7 + 4;
        puVar8[1] = uVar3;
        puVar8 = puVar8 + -4;
      } while (lVar6 < lVar9);
      if (1 < *(int *)(param_3 + 0xf0)) {
        iVar11 = 1;
        puVar10 = (uint *)(param_3 + 0x1c);
        do {
          uVar1 = puVar10[-3];
          uVar2 = puVar10[-2];
          iVar11 = iVar11 + 1;
          puVar10[-3] = *(uint *)(&DAT_00205aac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar1 >> 0x10) & 0xff) * 4] *
                                 4) ^
                        *(uint *)(&DAT_002056ac +
                                 (ulong)(byte)(&DAT_00205284)[(ulong)(uVar1 >> 0x16) & 0x3fc] * 4) ^
                        *(uint *)(&DAT_00205eac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar1 >> 8) & 0xff) * 4] * 4)
                        ^ *(uint *)(&DAT_002062ac +
                                   (ulong)(byte)(&DAT_00205284)[((ulong)uVar1 & 0xff) * 4] * 4);
          uVar4 = puVar10[-1];
          puVar10[-2] = *(uint *)(&DAT_00205aac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar2 >> 0x10) & 0xff) * 4] *
                                 4) ^
                        *(uint *)(&DAT_002056ac +
                                 (ulong)(byte)(&DAT_00205284)[(ulong)(uVar2 >> 0x16) & 0x3fc] * 4) ^
                        *(uint *)(&DAT_00205eac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar2 >> 8) & 0xff) * 4] * 4)
                        ^ *(uint *)(&DAT_002062ac +
                                   (ulong)(byte)(&DAT_00205284)[((ulong)uVar2 & 0xff) * 4] * 4);
          uVar1 = *puVar10;
          puVar10[-1] = *(uint *)(&DAT_00205aac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar4 >> 0x10) & 0xff) * 4] *
                                 4) ^
                        *(uint *)(&DAT_002056ac +
                                 (ulong)(byte)(&DAT_00205284)[(ulong)(uVar4 >> 0x16) & 0x3fc] * 4) ^
                        *(uint *)(&DAT_00205eac +
                                 (ulong)(byte)(&DAT_00205284)[((ulong)(uVar4 >> 8) & 0xff) * 4] * 4)
                        ^ *(uint *)(&DAT_002062ac +
                                   (ulong)(byte)(&DAT_00205284)[((ulong)uVar4 & 0xff) * 4] * 4);
          *puVar10 = *(uint *)(&DAT_00205aac +
                              (ulong)(byte)(&DAT_00205284)[((ulong)(uVar1 >> 0x10) & 0xff) * 4] * 4)
                     ^ *(uint *)(&DAT_002056ac +
                                (ulong)(byte)(&DAT_00205284)[(ulong)(uVar1 >> 0x16) & 0x3fc] * 4) ^
                     *(uint *)(&DAT_00205eac +
                              (ulong)(byte)(&DAT_00205284)[((ulong)(uVar1 >> 8) & 0xff) * 4] * 4) ^
                     *(uint *)(&DAT_002062ac +
                              (ulong)(byte)(&DAT_00205284)[((ulong)uVar1 & 0xff) * 4] * 4);
          puVar10 = puVar10 + 4;
        } while (iVar11 < *(int *)(param_3 + 0xf0));
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 00379208  FUN_00379208 =====

void FUN_00379208(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar18 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar13 = (uVar13 >> 0x10 | uVar13 << 0x10) ^ *param_3;
  uVar18 = (uVar18 >> 0x10 | uVar18 << 0x10) ^ param_3[1];
  uVar17 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  puVar16 = param_3 + 6;
  uVar17 = (uVar17 >> 0x10 | uVar17 << 0x10) ^ param_3[2];
  uVar19 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar14 = (ulong)(((int)param_3[0x3c] >> 1) - 1);
  uVar19 = (uVar19 >> 0x10 | uVar19 << 0x10) ^ param_3[3];
  uVar15 = uVar14;
  while( true ) {
    uVar3 = *(uint *)(&DAT_00205284 + (ulong)(uVar18 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00204e84 + (ulong)(uVar13 >> 0x18) * 4) ^
            *(uint *)(&DAT_00204684 + (ulong)(uVar17 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00204a84 + (ulong)(uVar19 & 0xff) * 4) ^ puVar16[-2];
    uVar4 = *(uint *)(&DAT_00205284 + (ulong)(uVar17 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00204e84 + (ulong)(uVar18 >> 0x18) * 4) ^
            *(uint *)(&DAT_00204684 + (ulong)(uVar19 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00204a84 + (ulong)(uVar13 & 0xff) * 4) ^ puVar16[-1];
    uVar8 = uVar4 >> 0x10 & 0xff;
    uVar9 = uVar3 >> 8 & 0xff;
    uVar5 = *(uint *)(&DAT_00205284 + (ulong)(uVar19 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00204e84 + (ulong)(uVar17 >> 0x18) * 4) ^
            *(uint *)(&DAT_00204684 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00204a84 + (ulong)(uVar18 & 0xff) * 4) ^ *puVar16;
    uVar19 = *(uint *)(&DAT_00205284 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_00204e84 + (ulong)(uVar19 >> 0x18) * 4) ^
             *(uint *)(&DAT_00204684 + (ulong)(uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_00204a84 + (ulong)(uVar17 & 0xff) * 4) ^ puVar16[1];
    uVar10 = uVar3 >> 0x10 & 0xff;
    uVar13 = uVar5 >> 8 & 0xff;
    uVar18 = uVar5 >> 0x10 & 0xff;
    uVar17 = uVar19 >> 8 & 0xff;
    uVar11 = uVar19 >> 0x10 & 0xff;
    uVar12 = uVar4 >> 8 & 0xff;
    if ((int)uVar15 == 0) break;
    puVar1 = puVar16 + 2;
    puVar6 = puVar16 + 3;
    puVar2 = puVar16 + 4;
    puVar7 = puVar16 + 5;
    puVar16 = puVar16 + 8;
    uVar13 = *(uint *)(&DAT_00205284 + (ulong)uVar8 * 4) ^
             *(uint *)(&DAT_00204e84 + (ulong)(uVar3 >> 0x18) * 4) ^
             *(uint *)(&DAT_00204684 + (ulong)uVar13 * 4) ^
             *(uint *)(&DAT_00204a84 + (ulong)(uVar19 & 0xff) * 4) ^ *puVar1;
    uVar18 = *(uint *)(&DAT_00205284 + (ulong)uVar18 * 4) ^
             *(uint *)(&DAT_00204e84 + (ulong)(uVar4 >> 0x18) * 4) ^
             *(uint *)(&DAT_00204684 + (ulong)uVar17 * 4) ^
             *(uint *)(&DAT_00204a84 + (ulong)(uVar3 & 0xff) * 4) ^ *puVar6;
    uVar17 = *(uint *)(&DAT_00205284 + (ulong)uVar11 * 4) ^
             *(uint *)(&DAT_00204e84 + (ulong)(uVar5 >> 0x18) * 4) ^
             *(uint *)(&DAT_00204684 + (ulong)uVar9 * 4) ^
             *(uint *)(&DAT_00204a84 + (ulong)(uVar4 & 0xff) * 4) ^ *puVar2;
    uVar19 = *(uint *)(&DAT_00205284 + (ulong)uVar10 * 4) ^
             *(uint *)(&DAT_00204e84 + (ulong)(uVar19 >> 0x18) * 4) ^
             *(uint *)(&DAT_00204684 + (ulong)uVar12 * 4) ^
             *(uint *)(&DAT_00204a84 + (ulong)(uVar5 & 0xff) * 4) ^ *puVar7;
    uVar15 = (ulong)((int)uVar15 - 1);
  }
  uVar13 = ((uint)(byte)(&DAT_00204687)[(ulong)(uVar3 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&DAT_00204a86)[(ulong)uVar8 * 4] << 0x10 |
            (uint)(byte)(&DAT_00204e85)[(ulong)uVar13 * 4] << 8 |
           (uint)(byte)(&DAT_00205284)[(ulong)(uVar19 & 0xff) * 4]) ^ param_3[uVar14 * 8 + 8];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  *param_2 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_00204687)[(ulong)(uVar4 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&DAT_00204a86)[(ulong)uVar18 * 4] << 0x10 |
            (uint)(byte)(&DAT_00204e85)[(ulong)uVar17 * 4] << 8 |
           (uint)(byte)(&DAT_00205284)[(ulong)(uVar3 & 0xff) * 4]) ^ param_3[uVar14 * 8 + 9];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[1] = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_00204687)[(ulong)(uVar5 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&DAT_00204a86)[(ulong)uVar11 * 4] << 0x10 |
            (uint)(byte)(&DAT_00204e85)[(ulong)uVar9 * 4] << 8 |
           (uint)(byte)(&DAT_00205284)[(ulong)(uVar4 & 0xff) * 4]) ^ param_3[uVar14 * 8 + 10];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[2] = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_00204687)[(ulong)(uVar19 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&DAT_00204a86)[(ulong)uVar10 * 4] << 0x10 |
            (uint)(byte)(&DAT_00204e85)[(ulong)uVar12 * 4] << 8 |
           (uint)(byte)(&DAT_00205284)[(ulong)(uVar5 & 0xff) * 4]) ^ param_3[uVar14 * 8 + 0xb];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[3] = uVar13 >> 0x10 | uVar13 << 0x10;
  return;
}


// ===== 00379544  FUN_00379544 =====

void FUN_00379544(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar12 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar13 = (uVar13 >> 0x10 | uVar13 << 0x10) ^ *param_3;
  uVar12 = (uVar12 >> 0x10 | uVar12 << 0x10) ^ param_3[1];
  uVar7 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  puVar11 = param_3 + 6;
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ param_3[2];
  uVar8 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar8 = (uVar8 >> 0x10 | uVar8 << 0x10) ^ param_3[3];
  uVar9 = (ulong)(((int)param_3[0x3c] >> 1) - 1);
  uVar10 = uVar9;
  while( true ) {
    uVar2 = *(uint *)(&DAT_00205aac + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar13 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar12 & 0xff) * 4) ^ puVar11[-2];
    uVar3 = *(uint *)(&DAT_00205aac + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar7 & 0xff) * 4) ^ puVar11[-1];
    uVar4 = *(uint *)(&DAT_00205aac + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar8 & 0xff) * 4) ^ *puVar11;
    uVar8 = *(uint *)(&DAT_00205aac + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar13 & 0xff) * 4) ^ puVar11[1];
    if ((int)uVar10 == 0) break;
    uVar10 = (ulong)((int)uVar10 - 1);
    puVar5 = puVar11 + 3;
    uVar13 = *(uint *)(&DAT_00205aac + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_002056ac + (ulong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&DAT_00205eac + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_002062ac + (ulong)(uVar3 & 0xff) * 4) ^ puVar11[2];
    puVar1 = puVar11 + 4;
    puVar6 = puVar11 + 5;
    puVar11 = puVar11 + 8;
    uVar12 = *(uint *)(&DAT_00205aac + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_002056ac + (ulong)(uVar3 >> 0x18) * 4) ^
             *(uint *)(&DAT_00205eac + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_002062ac + (ulong)(uVar4 & 0xff) * 4) ^ *puVar5;
    uVar7 = *(uint *)(&DAT_00205aac + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar8 & 0xff) * 4) ^ *puVar1;
    uVar8 = *(uint *)(&DAT_00205aac + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_002056ac + (ulong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_00205eac + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_002062ac + (ulong)(uVar2 & 0xff) * 4) ^ *puVar6;
  }
  uVar13 = ((uint)(byte)(&DAT_002066ac)[uVar2 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar8 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar4 >> 8) & 0xff] << 8 |
           (uint)(byte)(&DAT_002066ac)[(ulong)uVar3 & 0xff]) ^ param_3[uVar9 * 8 + 8];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  *param_2 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_002066ac)[uVar3 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar8 >> 8) & 0xff] << 8 |
           (uint)(byte)(&DAT_002066ac)[(ulong)uVar4 & 0xff]) ^ param_3[uVar9 * 8 + 9];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[1] = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_002066ac)[uVar4 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar2 >> 8) & 0xff] << 8 |
           (uint)(byte)(&DAT_002066ac)[(ulong)uVar8 & 0xff]) ^ param_3[uVar9 * 8 + 10];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[2] = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar13 = ((uint)(byte)(&DAT_002066ac)[uVar8 >> 0x18] << 0x18 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar4 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&DAT_002066ac)[(ulong)(uVar3 >> 8) & 0xff] << 8 |
           (uint)(byte)(&DAT_002066ac)[(ulong)uVar2 & 0xff]) ^ param_3[uVar9 * 8 + 0xb];
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  param_2[3] = uVar13 >> 0x10 | uVar13 << 0x10;
  return;
}


// ===== 00379868  FUN_00379868 =====

void FUN_00379868(void)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  
  lVar6 = FUN_0037a18c();
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *(int *)(lVar6 + 0x380) + 1;
  uVar4 = uVar1 & 0xf;
  if ((int)uVar1 < 1) {
    uVar4 = -(-uVar1 & 0xf);
  }
  *(uint *)(lVar6 + 0x380) = uVar4;
  if (uVar4 == *(uint *)(lVar6 + 900)) {
    cVar5 = (char)uVar4 + '\x01';
    *(int *)(lVar6 + 900) =
         (int)(char)(cVar5 - (cVar5 + ((byte)((uint)(int)cVar5 >> 0xb) & 0xf) & 0xf0));
  }
  lVar8 = (long)(int)uVar4;
  if ((*(uint *)(lVar6 + 0x200 + (long)(int)uVar4 * 4) & 1) == 0) {
    uVar9 = 0;
    *(undefined8 *)(lVar6 + 0x100 + lVar8 * 8) = 0;
    *(undefined8 *)(lVar6 + lVar8 * 8 + 0x180) = 0;
  }
  else {
    puVar10 = *(undefined1 **)(lVar6 + 0x100 + lVar8 * 8);
    if (puVar10 == (undefined1 *)0x0) goto LAB_00379904;
    *puVar10 = 0;
    uVar9 = 1;
  }
  *(undefined4 *)(lVar6 + 0x200 + lVar8 * 4) = uVar9;
LAB_00379904:
  lVar2 = lVar6 + lVar8 * 8;
  puVar3 = (undefined4 *)(lVar6 + lVar8 * 4);
  uVar7 = *(undefined8 *)(lVar2 + 0x240);
  puVar3[0x10] = 0;
  *puVar3 = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  puVar3[0xb0] = 0xffffffff;
  FUN_003c86b4(uVar7,"crypto/err/err_local.h",0x5b);
  *(undefined8 *)(lVar2 + 0x240) = 0;
  FUN_003c86b4(*(undefined8 *)(lVar2 + 0x300),"crypto/err/err_local.h",0x5d);
  *(undefined8 *)(lVar2 + 0x300) = 0;
  return;
}


// ===== 0037995c  FUN_0037995c =====

void FUN_0037995c(char *param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = FUN_0037a18c();
  if (lVar2 != 0) {
    lVar6 = (long)*(int *)(lVar2 + 0x380);
    lVar1 = lVar2 + 0x240;
    FUN_003c86b4(*(undefined8 *)(lVar1 + lVar6 * 8),"crypto/err/err_local.h",0x39);
    if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
      *(undefined8 *)(lVar1 + lVar6 * 8) = 0;
    }
    else {
      sVar3 = strlen(param_1);
      pcVar4 = (char *)FUN_003c83a4(sVar3 + 1,0,0);
      *(char **)(lVar1 + lVar6 * 8) = pcVar4;
      if (pcVar4 != (char *)0x0) {
        strcpy(pcVar4,param_1);
      }
    }
    lVar1 = lVar2 + 0x300;
    uVar5 = *(undefined8 *)(lVar1 + lVar6 * 8);
    *(undefined4 *)(lVar2 + lVar6 * 4 + 0x2c0) = param_2;
    FUN_003c86b4(uVar5,"crypto/err/err_local.h",0x42);
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      *(undefined8 *)(lVar1 + lVar6 * 8) = 0;
    }
    else {
      sVar3 = strlen(param_3);
      pcVar4 = (char *)FUN_003c83a4(sVar3 + 1,0,0);
      *(char **)(lVar1 + lVar6 * 8) = pcVar4;
      if (pcVar4 != (char *)0x0) {
        strcpy(pcVar4,param_3);
        return;
      }
    }
  }
  return;
}


// ===== 00379a5c  FUN_00379a5c =====

void FUN_00379a5c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd8;
  local_78 = in_x3;
  uStack_70 = in_x4;
  local_68 = in_x5;
  uStack_60 = in_x6;
  local_58 = in_x7;
  local_50 = (undefined1 *)register0x00000008;
  FUN_00379ac4();
  return;
}


// ===== 00379ac4  FUN_00379ac4 =====

void FUN_00379ac4(uint param_1,uint param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = FUN_0037a18c();
  if (lVar3 == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar8 = 0;
    uVar5 = 0;
    lVar9 = 0;
    lVar4 = (long)*(int *)(lVar3 + 0x380);
    if ((*(uint *)(lVar3 + 0x200 + lVar4 * 4) & 1) != 0) goto LAB_00379b9c;
LAB_00379c00:
    uVar6 = 0;
    *(undefined8 *)(lVar3 + 0x100 + lVar4 * 8) = 0;
    *(undefined8 *)(lVar3 + lVar4 * 8 + 0x180) = 0;
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x380);
    lVar4 = lVar3 + (long)iVar1 * 8;
    uVar8 = *(ulong *)(lVar4 + 0x180);
    lVar9 = *(long *)(lVar4 + 0x100);
    *(undefined8 *)(lVar4 + 0x100) = 0;
    *(undefined4 *)(lVar3 + (long)iVar1 * 4 + 0x200) = 0;
    if ((uVar8 < 0x400) &&
       (lVar4 = FUN_003c8558(lVar9,0x400,"crypto/err/err_blocks.c",0x54), lVar4 != 0)) {
      uVar8 = 0x400;
      lVar9 = lVar4;
    }
    if (lVar9 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_78 = param_4[1];
      local_80 = *param_4;
      uStack_68 = param_4[3];
      uStack_70 = param_4[2];
      uVar2 = FUN_0037ce0c(lVar9,uVar8,param_3,&local_80);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      *(undefined1 *)(lVar9 + (ulong)uVar2) = 0;
    }
    lVar4 = FUN_003c8558(lVar9,(ulong)(uVar2 + 1),"crypto/err/err_blocks.c",0x67);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + (ulong)uVar2) = 0;
      uVar8 = (ulong)(uVar2 + 1);
      lVar9 = lVar4;
    }
    uVar5 = 0;
    if (lVar9 != 0) {
      uVar5 = 3;
    }
    lVar4 = (long)*(int *)(lVar3 + 0x380);
    if ((*(uint *)(lVar3 + 0x200 + lVar4 * 4) & 1) == 0) goto LAB_00379c00;
LAB_00379b9c:
    puVar7 = *(undefined1 **)(lVar3 + 0x100 + lVar4 * 8);
    if (puVar7 == (undefined1 *)0x0) goto LAB_00379c1c;
    *puVar7 = 0;
    uVar6 = 1;
  }
  *(undefined4 *)(lVar3 + 0x200 + lVar4 * 4) = uVar6;
  lVar4 = (long)*(int *)(lVar3 + 0x380);
LAB_00379c1c:
  if (param_1 == 2) {
    *(ulong *)(lVar3 + lVar4 * 8 + 0x80) = (ulong)(param_2 | 0x80000000);
  }
  else {
    *(ulong *)(lVar3 + lVar4 * 8 + 0x80) = (ulong)(param_2 & 0x7fffff | (param_1 & 0xff) << 0x17);
  }
  if (param_3 != 0) {
    if ((*(uint *)(lVar3 + 0x200 + lVar4 * 4) & 1) != 0) {
      FUN_003c86b4(*(undefined8 *)(lVar3 + 0x100 + lVar4 * 8),"crypto/err/err_local.h",0x4e);
    }
    *(undefined4 *)(lVar3 + 0x200 + lVar4 * 4) = uVar5;
    *(long *)(lVar3 + 0x100 + lVar4 * 8) = lVar9;
    *(ulong *)(lVar3 + lVar4 * 8 + 0x180) = uVar8;
  }
  return;
}


// ===== 00379ca4  FUN_00379ca4 =====

void FUN_00379ca4(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 != 0) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x180);
    do {
      puVar1 = (undefined4 *)(param_1 + lVar3);
      if ((*(byte *)(puVar1 + 0x80) & 1) != 0) {
        FUN_003c86b4(puVar4[-0x10],"crypto/err/err_local.h",0x19);
      }
      uVar2 = puVar4[0x18];
      puVar4[-0x10] = 0;
      *puVar4 = 0;
      puVar1[0x80] = 0;
      puVar1[0x10] = 0;
      *puVar1 = 0;
      puVar4[-0x20] = 0;
      puVar1[0xb0] = 0xffffffff;
      FUN_003c86b4(uVar2,"crypto/err/err_local.h",0x5b);
      puVar4[0x18] = 0;
      FUN_003c86b4(puVar4[0x30],"crypto/err/err_local.h",0x5d);
      lVar3 = lVar3 + 4;
      puVar4[0x30] = 0;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0x40);
    FUN_003c86b4(param_1,"crypto/err/err.c",0xd2);
    return;
  }
  return;
}


// ===== 00379d74  FUN_00379d74 =====

void FUN_00379d74(void)

{
  if (DAT_007ab7b0 == '\x01') {
    FUN_003d5294(&DAT_007ab7b4);
  }
  FUN_003d51ac(DAT_007ab7c8);
  DAT_007ab7c8 = 0;
  FUN_003b8b74(DAT_007ab7d0);
  DAT_007ab7d0 = 0;
  return;
}


// ===== 00379dc8  FUN_00379dc8 =====

undefined8 FUN_00379dc8(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  iVar1 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  uVar2 = 0;
  if ((iVar1 != 0) && (DAT_007ab7bc != 0)) {
    iVar1 = FUN_003d518c(DAT_007ab7c8);
    if (iVar1 != 0) {
      if (DAT_007a85e0 != 0) {
        plVar3 = &DAT_007a85e0;
        do {
          FUN_003b8ca4(DAT_007ab7d0,plVar3);
          plVar3 = plVar3 + 2;
        } while (*plVar3 != 0);
      }
      FUN_003d519c(DAT_007ab7c8);
    }
    iVar1 = FUN_003d518c(DAT_007ab7c8);
    if (iVar1 != 0) {
      if (DAT_007a8360 != 0) {
        plVar3 = &DAT_007a8360;
        do {
          FUN_003b8ca4(DAT_007ab7d0,plVar3);
          plVar3 = plVar3 + 2;
        } while (*plVar3 != 0);
      }
      FUN_003d519c(DAT_007ab7c8);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00379e9c  FUN_00379e9c =====

void FUN_00379e9c(void)

{
  int iVar1;
  
  iVar1 = FUN_003c575c(0x40000,0);
  if (iVar1 != 0) {
    DAT_007ab7c8 = FUN_003d5150();
    if (DAT_007ab7c8 != 0) {
      DAT_007ab7d0 = FUN_003b8a34(FUN_0037b1d8,FUN_0037b220);
      if (DAT_007ab7d0 != 0) {
        DAT_007ab7bc = 1;
        return;
      }
      FUN_003d51ac(DAT_007ab7c8);
      DAT_007ab7c8 = 0;
      DAT_007ab7bc = 0;
      return;
    }
  }
  DAT_007ab7bc = 0;
  return;
}


// ===== 00379f34  FUN_00379f34 =====

undefined8 FUN_00379f34(uint param_1,ulong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar2 = FUN_00379dc8();
  if ((int)uVar2 != 0) {
    uVar3 = *param_2;
    if (uVar3 != 0) {
      puVar4 = param_2 + 2;
      do {
        uVar5 = uVar3 | (param_1 & 0xff) << 0x17;
        uVar3 = *puVar4;
        puVar4[-2] = uVar5;
        puVar4 = puVar4 + 2;
      } while (uVar3 != 0);
    }
    iVar1 = FUN_003d518c(DAT_007ab7c8);
    if (iVar1 != 0) {
      uVar3 = *param_2;
      while (uVar3 != 0) {
        FUN_003b8ca4(DAT_007ab7d0,param_2);
        param_2 = param_2 + 2;
        uVar3 = *param_2;
      }
      FUN_003d519c(DAT_007ab7c8);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00379fc4  FUN_00379fc4 =====

undefined8 FUN_00379fc4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00379dc8();
  if ((int)uVar2 != 0) {
    iVar1 = FUN_003d518c(DAT_007ab7c8);
    if (iVar1 != 0) {
      lVar3 = *param_1;
      while (lVar3 != 0) {
        FUN_003b8ca4(DAT_007ab7d0,param_1);
        param_1 = param_1 + 2;
        lVar3 = *param_1;
      }
      FUN_003d519c(DAT_007ab7c8);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0037a02c  FUN_0037a02c =====

undefined8 FUN_0037a02c(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  uVar2 = 0;
  if (((iVar1 != 0) && (DAT_007ab7bc != 0)) && (uVar2 = FUN_003d518c(DAT_007ab7c8), (int)uVar2 != 0)
     ) {
    lVar3 = *param_2;
    while (lVar3 != 0) {
      FUN_003b8ea4(DAT_007ab7d0,param_2);
      param_2 = param_2 + 2;
      lVar3 = *param_2;
    }
    FUN_003d519c(DAT_007ab7c8);
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0037a0b8  FUN_0037a0b8 =====

void FUN_0037a0b8(void)

{
  return;
}


// ===== 0037a0bc  FUN_0037a0bc =====

void FUN_0037a0bc(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar2 = FUN_0037a18c();
  if (lVar2 != 0) {
    lVar5 = 0;
    puVar6 = (undefined8 *)(lVar2 + 0x180);
    do {
      if ((*(byte *)(lVar2 + lVar5 + 0x200) & 1) == 0) {
        uVar4 = 0;
        puVar6[-0x10] = 0;
        *puVar6 = 0;
LAB_0037a100:
        *(undefined4 *)(lVar2 + lVar5 + 0x200) = uVar4;
      }
      else if ((undefined1 *)puVar6[-0x10] != (undefined1 *)0x0) {
        *(undefined1 *)puVar6[-0x10] = 0;
        uVar4 = 1;
        goto LAB_0037a100;
      }
      uVar3 = puVar6[0x18];
      puVar1 = (undefined4 *)(lVar2 + lVar5);
      puVar1[0x10] = 0;
      *puVar1 = 0;
      puVar6[-0x20] = 0;
      puVar1[0xb0] = 0xffffffff;
      FUN_003c86b4(uVar3,"crypto/err/err_local.h",0x5b);
      puVar6[0x18] = 0;
      FUN_003c86b4(puVar6[0x30],"crypto/err/err_local.h",0x5d);
      lVar5 = lVar5 + 4;
      puVar6[0x30] = 0;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0x40);
    *(undefined8 *)(lVar2 + 0x380) = 0;
  }
  return;
}


// ===== 0037a18c  FUN_0037a18c =====

long FUN_0037a18c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined4 *)__errno();
  uVar1 = *puVar3;
  iVar2 = FUN_003c575c(0x40000,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_003d51c8(&DAT_007ab7c0,FUN_0037ab90);
  lVar5 = 0;
  if ((iVar2 != 0) && (DAT_007ab7c4 != 0)) {
    lVar5 = FUN_003d5240(&DAT_007ab7b4);
    if (lVar5 == -1) {
      return 0;
    }
    if (lVar5 == 0) {
      iVar2 = FUN_003d5268(&DAT_007ab7b4,0xffffffffffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      lVar5 = FUN_0037b23c();
      if (lVar5 == 0) {
        FUN_003d5268(&DAT_007ab7b4,0);
        return 0;
      }
      iVar2 = FUN_003c8118(0,0,FUN_0037abc8);
      if ((iVar2 == 0) || (iVar2 = FUN_003d5268(&DAT_007ab7b4,lVar5), iVar2 == 0)) {
        lVar6 = 0;
        puVar7 = (undefined8 *)(lVar5 + 0x180);
        do {
          puVar3 = (undefined4 *)(lVar5 + lVar6);
          if ((*(byte *)(puVar3 + 0x80) & 1) != 0) {
            FUN_003c86b4(puVar7[-0x10],"crypto/err/err_local.h",0x19);
          }
          uVar4 = puVar7[0x18];
          puVar7[-0x10] = 0;
          *puVar7 = 0;
          puVar3[0x80] = 0;
          puVar3[0x10] = 0;
          *puVar3 = 0;
          puVar7[-0x20] = 0;
          puVar3[0xb0] = 0xffffffff;
          FUN_003c86b4(uVar4,"crypto/err/err_local.h",0x5b);
          puVar7[0x18] = 0;
          FUN_003c86b4(puVar7[0x30],"crypto/err/err_local.h",0x5d);
          lVar6 = lVar6 + 4;
          puVar7[0x30] = 0;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0x40);
        FUN_003c86b4(lVar5,"crypto/err/err.c",0xd2);
        FUN_003d5268(&DAT_007ab7b4,0);
        return 0;
      }
      FUN_003c575c(2,0);
    }
    *puVar3 = uVar1;
  }
  return lVar5;
}


// ===== 0037a368  FUN_0037a368 =====

void FUN_0037a368(void)

{
  FUN_0037a384(0,0,0,0,0,0);
  return;
}


// ===== 0037a384  FUN_0037a384 =====

long FUN_0037a384(int param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                 long *param_5,undefined4 *param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  int iVar18;
  long lVar19;
  undefined1 *puVar20;
  
  lVar11 = FUN_0037a18c();
  if (lVar11 != 0) {
    iVar18 = *(int *)(lVar11 + 900);
    iVar14 = *(int *)(lVar11 + 0x380);
    if (iVar18 != iVar14) {
      lVar2 = lVar11 + 0x200;
      lVar3 = lVar11 + 0x100;
      lVar4 = lVar11 + 0x180;
      lVar5 = lVar11 + 0x80;
      lVar6 = lVar11 + 0x2c0;
      lVar7 = lVar11 + 0x240;
      lVar8 = lVar11 + 0x300;
      do {
        while (lVar15 = (long)iVar14, (*(uint *)(lVar11 + (long)iVar14 * 4) >> 1 & 1) != 0) {
          lVar19 = lVar15 * 8;
          if ((*(uint *)(lVar2 + lVar15 * 4) & 1) == 0) {
            uVar17 = 0;
            *(undefined8 *)(lVar3 + lVar19) = 0;
            *(undefined8 *)(lVar4 + lVar19) = 0;
LAB_0037a428:
            *(undefined4 *)(lVar2 + lVar15 * 4) = uVar17;
          }
          else {
            puVar16 = *(undefined1 **)(lVar3 + lVar15 * 8);
            if (puVar16 != (undefined1 *)0x0) {
              *puVar16 = 0;
              uVar17 = 1;
              goto LAB_0037a428;
            }
          }
          lVar15 = lVar15 * 4;
          uVar12 = *(undefined8 *)(lVar7 + lVar19);
          *(undefined8 *)(lVar5 + lVar19) = 0;
          *(undefined4 *)(lVar11 + 0x40 + lVar15) = 0;
          *(undefined4 *)(lVar11 + lVar15) = 0;
          *(undefined4 *)(lVar6 + lVar15) = 0xffffffff;
          FUN_003c86b4(uVar12,"crypto/err/err_local.h",0x5b);
          *(undefined8 *)(lVar7 + lVar19) = 0;
          FUN_003c86b4(*(undefined8 *)(lVar8 + lVar19),"crypto/err/err_local.h",0x5d);
          iVar18 = *(int *)(lVar11 + 0x380);
          *(undefined8 *)(lVar8 + lVar19) = 0;
          iVar14 = iVar18 + -1;
          if (iVar18 < 1) {
            iVar14 = 0xf;
          }
          *(int *)(lVar11 + 0x380) = iVar14;
          iVar18 = *(int *)(lVar11 + 900);
          if (iVar18 == iVar14) goto LAB_0037a564;
        }
        uVar1 = iVar18 + 1;
        uVar9 = uVar1 & 0xf;
        if ((int)uVar1 < 1) {
          uVar9 = -(-uVar1 & 0xf);
        }
        lVar19 = (long)(int)uVar9;
        if ((*(uint *)(lVar11 + (long)(int)uVar9 * 4) >> 1 & 1) == 0) {
          if (param_1 == 2) {
            lVar13 = *(long *)(lVar5 + lVar15 * 8);
            bVar10 = false;
          }
          else {
            lVar13 = *(long *)(lVar5 + lVar19 * 8);
            lVar15 = lVar19;
            if (param_1 == 0) {
              *(uint *)(lVar11 + 900) = uVar9;
              bVar10 = true;
              *(undefined8 *)(lVar5 + lVar19 * 8) = 0;
            }
            else {
              bVar10 = false;
            }
          }
          if (param_2 != (undefined8 *)0x0) {
            puVar20 = *(undefined1 **)(lVar7 + lVar15 * 8);
            puVar16 = &DAT_001c717f;
            if (puVar20 != (undefined1 *)0x0) {
              puVar16 = puVar20;
            }
            *param_2 = puVar16;
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(lVar6 + lVar15 * 4);
          }
          if (param_4 != (undefined8 *)0x0) {
            puVar20 = *(undefined1 **)(lVar8 + lVar15 * 8);
            puVar16 = &DAT_001c717f;
            if (puVar20 != (undefined1 *)0x0) {
              puVar16 = puVar20;
            }
            *param_4 = puVar16;
          }
          if (param_6 != (undefined4 *)0x0) {
            *param_6 = *(undefined4 *)(lVar2 + lVar15 * 4);
          }
          if (param_5 == (long *)0x0) {
            if (!bVar10) {
              return lVar13;
            }
            if ((*(uint *)(lVar2 + lVar15 * 4) & 1) == 0) {
              *(undefined4 *)(lVar2 + lVar15 * 4) = 0;
              *(undefined8 *)(lVar3 + lVar15 * 8) = 0;
              *(undefined8 *)(lVar4 + lVar15 * 8) = 0;
              return lVar13;
            }
            puVar16 = *(undefined1 **)(lVar3 + lVar15 * 8);
            if (puVar16 == (undefined1 *)0x0) {
              return lVar13;
            }
            *puVar16 = 0;
            *(undefined4 *)(lVar2 + lVar15 * 4) = 1;
            return lVar13;
          }
          lVar11 = *(long *)(lVar3 + lVar15 * 8);
          *param_5 = lVar11;
          if (lVar11 != 0) {
            return lVar13;
          }
          *param_5 = (long)&DAT_001c717f;
          if (param_6 == (undefined4 *)0x0) {
            return lVar13;
          }
          *param_6 = 0;
          return lVar13;
        }
        uVar1 = *(uint *)(lVar2 + lVar19 * 4);
        lVar15 = lVar19 * 8;
        *(uint *)(lVar11 + 900) = uVar9;
        if ((uVar1 & 1) == 0) {
          uVar17 = 0;
          *(undefined8 *)(lVar3 + lVar15) = 0;
          *(undefined8 *)(lVar4 + lVar15) = 0;
LAB_0037a510:
          *(undefined4 *)(lVar2 + lVar19 * 4) = uVar17;
        }
        else {
          puVar16 = *(undefined1 **)(lVar3 + lVar19 * 8);
          if (puVar16 != (undefined1 *)0x0) {
            *puVar16 = 0;
            uVar17 = 1;
            goto LAB_0037a510;
          }
        }
        lVar19 = lVar19 * 4;
        uVar12 = *(undefined8 *)(lVar7 + lVar15);
        *(undefined8 *)(lVar5 + lVar15) = 0;
        *(undefined4 *)(lVar11 + 0x40 + lVar19) = 0;
        *(undefined4 *)(lVar11 + lVar19) = 0;
        *(undefined4 *)(lVar6 + lVar19) = 0xffffffff;
        FUN_003c86b4(uVar12,"crypto/err/err_local.h",0x5b);
        *(undefined8 *)(lVar7 + lVar15) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar8 + lVar15),"crypto/err/err_local.h",0x5d);
        iVar14 = *(int *)(lVar11 + 0x380);
        *(undefined8 *)(lVar8 + lVar15) = 0;
        iVar18 = *(int *)(lVar11 + 900);
      } while (iVar18 != iVar14);
    }
LAB_0037a564:
    lVar11 = 0;
  }
  return lVar11;
}


// ===== 0037a69c  FUN_0037a69c =====

void FUN_0037a69c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0037a384(0,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 0037a6b8  FUN_0037a6b8 =====

void FUN_0037a6b8(void)

{
  FUN_0037a384(1,0,0,0,0,0);
  return;
}


// ===== 0037a6d4  FUN_0037a6d4 =====

void FUN_0037a6d4(undefined8 param_1,undefined8 param_2)

{
  FUN_0037a384(1,param_1,param_2,0,0,0);
  return;
}


// ===== 0037a6f0  FUN_0037a6f0 =====

void FUN_0037a6f0(undefined8 param_1)

{
  FUN_0037a384(1,0,0,param_1,0,0);
  return;
}


// ===== 0037a70c  FUN_0037a70c =====

void FUN_0037a70c(undefined8 param_1,undefined8 param_2)

{
  FUN_0037a384(1,0,0,0,param_1,param_2);
  return;
}


// ===== 0037a728  FUN_0037a728 =====

void FUN_0037a728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0037a384(1,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 0037a744  FUN_0037a744 =====

void FUN_0037a744(void)

{
  FUN_0037a384(2,0,0,0,0,0);
  return;
}


// ===== 0037a760  FUN_0037a760 =====

void FUN_0037a760(undefined8 param_1,undefined8 param_2)

{
  FUN_0037a384(2,param_1,param_2,0,0,0);
  return;
}


// ===== 0037a77c  FUN_0037a77c =====

void FUN_0037a77c(undefined8 param_1)

{
  FUN_0037a384(2,0,0,param_1,0,0);
  return;
}


// ===== 0037a798  FUN_0037a798 =====

void FUN_0037a798(undefined8 param_1,undefined8 param_2)

{
  FUN_0037a384(2,0,0,0,param_1,param_2);
  return;
}


// ===== 0037a7b4  FUN_0037a7b4 =====

void FUN_0037a7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0037a384(2,param_1,param_2,param_3,param_4,param_5);
  return;
}


// ===== 0037a7d0  FUN_0037a7d0 =====

void FUN_0037a7d0(ulong param_1,undefined8 param_2,char *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong local_1a0 [32];
  undefined1 auStack_a0 [64];
  
  if (param_4 == 0) {
    return;
  }
  puVar3 = local_1a0;
  uVar6 = param_1 >> 0x17 & 0x1ff;
  uVar7 = (uint)param_1;
  if ((int)uVar7 < 0) {
    uVar6 = 2;
  }
  iVar1 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  if ((iVar1 == 0) || (DAT_007ab7bc == 0)) {
LAB_0037a8b8:
    puVar8 = auStack_a0;
    FUN_0037cd5c(auStack_a0,0x40,"lib(%lu)",uVar6);
    uVar5 = 0x7fffff;
    if ((param_1 & 0x80000000) != 0) {
      uVar5 = 0x7fffffff;
    }
    uVar5 = uVar5 & uVar7;
    if (-1 < (int)uVar7) goto LAB_0037a8a4;
LAB_0037a8ec:
    iVar1 = FUN_003caaa8(uVar5,local_1a0,0x100);
    if (iVar1 != 0) goto LAB_0037a920;
  }
  else {
    local_1a0[0] = param_1 & 0xff800000;
    if ((int)uVar7 < 0) {
      local_1a0[0] = 0x1000000;
    }
    iVar1 = FUN_003d517c(DAT_007ab7c8);
    if (iVar1 == 0) goto LAB_0037a8b8;
    lVar2 = FUN_003b908c(DAT_007ab7d0,local_1a0);
    FUN_003d519c(DAT_007ab7c8);
    if ((lVar2 == 0) || (puVar8 = *(undefined1 **)(lVar2 + 8), puVar8 == (undefined1 *)0x0))
    goto LAB_0037a8b8;
    uVar5 = 0x7fffff;
    if ((param_1 & 0x80000000) != 0) {
      uVar5 = 0x7fffffff;
    }
    uVar5 = uVar5 & uVar7;
    if ((int)uVar7 < 0) goto LAB_0037a8ec;
LAB_0037a8a4:
    puVar3 = (ulong *)FUN_0037aa50(param_1);
    if (puVar3 != (ulong *)0x0) goto LAB_0037a920;
  }
  FUN_0037cd5c(local_1a0,0x100,"reason(%lu)",uVar5 & 0xff83ffff);
  puVar3 = local_1a0;
LAB_0037a920:
  FUN_0037cd5c(param_3,param_4,"error:%08lX:%s:%s:%s",param_1,puVar8,param_2,puVar3);
  sVar4 = strlen(param_3);
  if (sVar4 == param_4 - 1U) {
    FUN_0037cd5c(param_3,param_4,"err:%lx:%lx:%lx:%lx",param_1,uVar6,0,uVar5);
  }
  return;
}


// ===== 0037a99c  FUN_0037a99c =====

undefined8 FUN_0037a99c(ulong param_1)

{
  int iVar1;
  long lVar2;
  ulong local_30 [2];
  
  iVar1 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  if ((iVar1 != 0) && (DAT_007ab7bc != 0)) {
    local_30[0] = param_1 & 0xff800000;
    if ((int)param_1 < 0) {
      local_30[0] = 0x1000000;
    }
    iVar1 = FUN_003d517c(DAT_007ab7c8);
    if (iVar1 != 0) {
      lVar2 = FUN_003b908c(DAT_007ab7d0,local_30);
      FUN_003d519c(DAT_007ab7c8);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 8);
      }
    }
    return 0;
  }
  return 0;
}


// ===== 0037aa50  FUN_0037aa50 =====

undefined8 FUN_0037aa50(ulong param_1)

{
  int iVar1;
  long lVar2;
  ulong local_40 [2];
  
  iVar1 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  if ((int)param_1 < 0) {
    return 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_007ab7bc == 0) {
    return 0;
  }
  local_40[0] = param_1 & 0x7fffffff;
  iVar1 = FUN_003d517c(DAT_007ab7c8);
  if (iVar1 != 0) {
    lVar2 = FUN_003b908c(DAT_007ab7d0,local_40);
    FUN_003d519c(DAT_007ab7c8);
    if (lVar2 != 0) goto LAB_0037ab0c;
  }
  local_40[0] = param_1 & 0x7fffff;
  iVar1 = FUN_003d517c(DAT_007ab7c8);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_003b908c(DAT_007ab7d0,local_40);
  FUN_003d519c(DAT_007ab7c8);
  if (lVar2 == 0) {
    return 0;
  }
LAB_0037ab0c:
  return *(undefined8 *)(lVar2 + 8);
}


// ===== 0037ab3c  FUN_0037ab3c =====

void FUN_0037ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0037a7d0(param_1,&DAT_001c717f,param_2,param_3);
  return;
}


// ===== 0037ab50  FUN_0037ab50 =====

long FUN_0037ab50(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x7ab6b0;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  FUN_0037a7d0(param_1,&DAT_001c717f,lVar1,0x100);
  return lVar1;
}


// ===== 0037ab90  FUN_0037ab90 =====

void FUN_0037ab90(void)

{
  DAT_007ab7b0 = 1;
  DAT_007ab7c4 = FUN_003d5204(&DAT_007ab7b4,0);
  return;
}


// ===== 0037abc8  FUN_0037abc8 =====

void FUN_0037abc8(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_003d5240(&DAT_007ab7b4);
  if (lVar2 != 0) {
    FUN_003d5268(&DAT_007ab7b4,0);
    lVar4 = 0;
    puVar5 = (undefined8 *)(lVar2 + 0x180);
    do {
      puVar1 = (undefined4 *)(lVar2 + lVar4);
      if ((*(byte *)(puVar1 + 0x80) & 1) != 0) {
        FUN_003c86b4(puVar5[-0x10],"crypto/err/err_local.h",0x19);
      }
      uVar3 = puVar5[0x18];
      puVar5[-0x10] = 0;
      *puVar5 = 0;
      puVar1[0x80] = 0;
      puVar1[0x10] = 0;
      *puVar1 = 0;
      puVar5[-0x20] = 0;
      puVar1[0xb0] = 0xffffffff;
      FUN_003c86b4(uVar3,"crypto/err/err_local.h",0x5b);
      puVar5[0x18] = 0;
      FUN_003c86b4(puVar5[0x30],"crypto/err/err_local.h",0x5d);
      lVar4 = lVar4 + 4;
      puVar5[0x30] = 0;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0x40);
    FUN_003c86b4(lVar2,"crypto/err/err.c",0xd2);
    return;
  }
  return;
}


// ===== 0037acc4  FUN_0037acc4 =====

undefined8 FUN_0037acc4(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)__errno();
  uVar1 = *puVar3;
  uVar4 = FUN_003c575c(0x40000,0);
  if ((int)uVar4 != 0) {
    iVar2 = FUN_003d51c8(&DAT_007ab7c0,FUN_0037ab90);
    uVar4 = 0;
    if ((iVar2 != 0) && (DAT_007ab7c4 != 0)) {
      uVar4 = FUN_003d5240(&DAT_007ab7b4);
      *param_1 = uVar4;
      uVar4 = FUN_003d5268(&DAT_007ab7b4,0xffffffffffffffff);
      if ((int)uVar4 != 0) {
        uVar4 = 1;
        *puVar3 = uVar1;
      }
    }
  }
  return uVar4;
}


// ===== 0037ad5c  FUN_0037ad5c =====

void FUN_0037ad5c(long param_1)

{
  if (param_1 != -1) {
    FUN_003d5268(&DAT_007ab7b4,param_1);
    return;
  }
  return;
}


// ===== 0037ad78  FUN_0037ad78 =====

ulong FUN_0037ad78(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_003d51c8(&DAT_007ab7b8,FUN_00379e9c);
  uVar3 = 0;
  if (((iVar2 != 0) && (DAT_007ab7bc != 0)) &&
     (uVar3 = FUN_003d518c(DAT_007ab7c8), uVar1 = DAT_007a8358, (int)uVar3 != 0)) {
    DAT_007a8358 = DAT_007a8358 + 1;
    FUN_003d519c(DAT_007ab7c8);
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}


// ===== 0037ade8  FUN_0037ade8 =====

void FUN_0037ade8(char *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  sVar4 = strlen(param_1);
  lVar5 = FUN_0037a18c();
  if (lVar5 != 0) {
    lVar6 = (long)*(int *)(lVar5 + 0x380);
    lVar1 = lVar5 + 0x200;
    if ((*(uint *)(lVar1 + lVar6 * 4) & 1) != 0) {
      FUN_003c86b4(*(undefined8 *)(lVar5 + 0x100 + lVar6 * 8),"crypto/err/err_local.h",0x19);
    }
    *(undefined4 *)(lVar1 + lVar6 * 4) = 0;
    lVar7 = (long)*(int *)(lVar5 + 0x380);
    *(undefined8 *)(lVar5 + 0x100 + lVar6 * 8) = 0;
    uVar3 = *(uint *)(lVar1 + lVar7 * 4);
    lVar2 = lVar5 + lVar7 * 8;
    *(undefined8 *)(lVar5 + lVar6 * 8 + 0x180) = 0;
    if ((uVar3 & 1) != 0) {
      FUN_003c86b4(*(undefined8 *)(lVar2 + 0x100),"crypto/err/err_local.h",0x4e);
    }
    *(char **)(lVar2 + 0x100) = param_1;
    *(size_t *)(lVar2 + 0x180) = sVar4 + 1;
    *(undefined4 *)(lVar1 + lVar7 * 4) = param_2;
  }
  return;
}


// ===== 0037aeac  FUN_0037aeac =====

void FUN_0037aeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffc8;
  local_98 = param_2;
  uStack_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  FUN_0037af20(param_1,&local_60);
  return;
}


// ===== 0037af20  FUN_0037af20 =====

void FUN_0037af20(int param_1,long *param_2)

{
  long lVar1;
  char *__s;
  uint uVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  char *__s_00;
  uint *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  lVar3 = FUN_0037a18c();
  if (lVar3 == 0) {
    return;
  }
  lVar8 = (long)*(int *)(lVar3 + 0x380);
  if (((*(uint *)(lVar3 + 0x200 + lVar8 * 4) ^ 0xffffffff) & 3) == 0) {
    __s_00 = *(char **)(lVar3 + 0x100 + lVar8 * 8);
    if (__s_00 == (char *)0x0) goto LAB_0037afdc;
    *(undefined4 *)(lVar3 + 0x200 + lVar8 * 4) = 0;
    *(undefined8 *)(lVar3 + 0x100 + lVar8 * 8) = 0;
    iVar13 = *(int *)(lVar3 + lVar8 * 8 + 0x180);
    if (0 < param_1) goto LAB_0037b008;
LAB_0037af8c:
    lVar3 = (long)iVar13;
  }
  else {
LAB_0037afdc:
    __s_00 = (char *)FUN_003c83a4(0x51,"crypto/err/err.c",0x353);
    if (__s_00 == (char *)0x0) {
      return;
    }
    iVar13 = 0x51;
    *__s_00 = '\0';
    if (param_1 < 1) goto LAB_0037af8c;
LAB_0037b008:
    sVar4 = strlen(__s_00);
    uVar14 = param_1 + 1;
    do {
      uVar2 = *(uint *)(param_2 + 3);
      if (((int)uVar2 < 0) && (*(uint *)(param_2 + 3) = uVar2 + 8, uVar2 < 0xfffffff9)) {
        puVar9 = (undefined8 *)(param_2[1] + (long)(int)uVar2);
      }
      else {
        puVar9 = (undefined8 *)*param_2;
        *param_2 = (long)(puVar9 + 1);
      }
      __s = "<NULL>";
      if ((char *)*puVar9 != (char *)0x0) {
        __s = (char *)*puVar9;
      }
      sVar5 = strlen(__s);
      sVar4 = sVar5 + (long)(int)sVar4;
      if ((int)sVar4 < iVar13) {
        lVar3 = (long)iVar13;
        pcVar6 = __s_00;
      }
      else {
        iVar13 = (int)sVar4 + 0x14;
        lVar3 = (long)iVar13;
        pcVar6 = (char *)FUN_003c8558(__s_00,lVar3,"crypto/err/err.c",0x363);
        if (pcVar6 == (char *)0x0) {
          uVar7 = 0x365;
          goto LAB_0037b160;
        }
      }
      FUN_003ca4e8(pcVar6,__s,lVar3);
      uVar14 = uVar14 - 1;
      __s_00 = pcVar6;
    } while (1 < uVar14);
  }
  lVar8 = FUN_0037a18c();
  if (lVar8 == 0) {
    uVar7 = 0x36d;
LAB_0037b160:
    FUN_003c86b4(__s_00,"crypto/err/err.c",uVar7);
    return;
  }
  lVar12 = (long)*(int *)(lVar8 + 0x380);
  lVar1 = lVar8 + 0x200;
  puVar11 = (uint *)(lVar1 + lVar12 * 4);
  if ((*puVar11 & 1) == 0) {
    *(undefined8 *)(lVar8 + 0x100 + lVar12 * 8) = 0;
    *(undefined8 *)(lVar8 + lVar12 * 8 + 0x180) = 0;
    *puVar11 = 0;
    lVar12 = (long)*(int *)(lVar8 + 0x380);
    puVar11 = (uint *)(lVar1 + lVar12 * 4);
    uVar14 = *puVar11;
joined_r0x0037b0f8:
    if ((uVar14 & 1) == 0) goto LAB_0037b120;
  }
  else {
    puVar10 = *(undefined1 **)(lVar8 + 0x100 + lVar12 * 8);
    if (puVar10 != (undefined1 *)0x0) {
      *puVar10 = 0;
      *puVar11 = 1;
      lVar12 = (long)*(int *)(lVar8 + 0x380);
      puVar11 = (uint *)(lVar1 + lVar12 * 4);
      uVar14 = *puVar11;
      goto joined_r0x0037b0f8;
    }
  }
  FUN_003c86b4(*(undefined8 *)(lVar8 + lVar12 * 8 + 0x100),"crypto/err/err_local.h",0x4e);
LAB_0037b120:
  lVar8 = lVar8 + lVar12 * 8;
  *puVar11 = 3;
  *(char **)(lVar8 + 0x100) = __s_00;
  *(long *)(lVar8 + 0x180) = lVar3;
  return;
}


// ===== 0037b17c  FUN_0037b17c =====

void FUN_0037b17c(uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0037a18c();
  if (lVar1 != 0) {
    lVar2 = (long)*(int *)(lVar1 + 0x380) * 4;
    *(uint *)(lVar1 + lVar2) =
         *(uint *)(lVar1 + lVar2) | ~((int)(param_1 - 1 & (param_1 ^ 0xffffffff)) >> 0x1f) & 2U;
  }
  return;
}


// ===== 0037b1d8  FUN_0037b1d8 =====

ulong FUN_0037b1d8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 0x17 & 0x1ff;
  if ((int)uVar1 < 0) {
    uVar2 = 2;
  }
  return ((uVar2 ^ uVar1) % 0x13) * 0xd ^ uVar2 ^ uVar1;
}


// ===== 0037b220  FUN_0037b220 =====

undefined4 FUN_0037b220(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0xffffffff;
  if (*param_2 < *param_1) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (*param_1 != *param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}


// ===== 0037b23c  FUN_0037b23c =====

void FUN_0037b23c(void)

{
  FUN_003c8474(0x388,0,0);
  return;
}


// ===== 0037b24c  FUN_0037b24c =====

void FUN_0037b24c(void *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  void *__src;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1 != (void *)0x0) {
    lVar3 = 0;
    puVar4 = (undefined8 *)((long)param_1 + 0x180);
    do {
      puVar1 = (undefined4 *)((long)param_1 + lVar3);
      if ((*(byte *)(puVar1 + 0x80) & 1) != 0) {
        FUN_003c86b4(puVar4[-0x10],"crypto/err/err_local.h",0x19);
      }
      uVar2 = puVar4[0x18];
      puVar4[-0x10] = 0;
      *puVar4 = 0;
      puVar1[0x80] = 0;
      puVar1[0x10] = 0;
      *puVar1 = 0;
      puVar4[-0x20] = 0;
      puVar1[0xb0] = 0xffffffff;
      FUN_003c86b4(uVar2,"crypto/err/err_local.h",0x5b);
      puVar4[0x18] = 0;
      FUN_003c86b4(puVar4[0x30],"crypto/err/err_local.h",0x5d);
      lVar3 = lVar3 + 4;
      puVar4[0x30] = 0;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0x40);
    __src = (void *)FUN_0037a18c();
    if (__src != (void *)0x0) {
      memcpy(param_1,__src,0x388);
      memset(__src,0,0x388);
      return;
    }
  }
  return;
}


// ===== 0037b344  FUN_0037b344 =====

void FUN_0037b344(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  lVar5 = FUN_0037a18c();
  if (lVar5 == 0) {
    lVar5 = 0;
    puVar12 = (undefined8 *)(param_1 + 0x60);
    do {
      puVar10 = (undefined4 *)((long)param_1 + lVar5);
      if ((*(byte *)(puVar10 + 0x80) & 1) != 0) {
        FUN_003c86b4(puVar12[-0x10],"crypto/err/err_local.h",0x19);
      }
      uVar6 = puVar12[0x18];
      puVar12[-0x10] = 0;
      *puVar12 = 0;
      puVar10[0x80] = 0;
      puVar10[0x10] = 0;
      *puVar10 = 0;
      puVar12[-0x20] = 0;
      puVar10[0xb0] = 0xffffffff;
      FUN_003c86b4(uVar6,"crypto/err/err_local.h",0x5b);
      puVar12[0x18] = 0;
      FUN_003c86b4(puVar12[0x30],"crypto/err/err_local.h",0x5d);
      lVar5 = lVar5 + 4;
      puVar12[0x30] = 0;
      puVar12 = puVar12 + 1;
    } while (lVar5 != 0x40);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
  }
  uVar1 = *(uint *)(lVar5 + 900);
  if (uVar1 != *(uint *)(lVar5 + 0x380)) {
    uVar11 = 0;
    uVar4 = *(uint *)(lVar5 + 0x380);
    do {
      uVar14 = uVar4;
      if (*(int *)(lVar5 + 0x40 + (long)(int)uVar4 * 4) != 0) break;
      uVar3 = uVar4 - 1;
      uVar11 = uVar11 + 1;
      if ((int)uVar4 < 1) {
        uVar3 = 0xf;
      }
      uVar14 = uVar1;
      uVar4 = uVar3;
    } while (uVar1 != uVar3);
    if (uVar11 != 0) {
      uVar15 = (ulong)uVar14;
      puVar12 = (undefined8 *)(param_1 + 0x60);
      puVar10 = param_1;
      uVar13 = uVar11;
      do {
        if ((*(byte *)(puVar10 + 0x80) & 1) != 0) {
          FUN_003c86b4(puVar12[-0x10],"crypto/err/err_local.h",0x19);
        }
        uVar6 = puVar12[0x18];
        uVar15 = (ulong)((int)uVar15 + 1) & 0xf;
        puVar12[-0x10] = 0;
        *puVar12 = 0;
        puVar10[0x80] = 0;
        puVar10[0x10] = 0;
        *puVar10 = 0;
        puVar12[-0x20] = 0;
        puVar10[0xb0] = 0xffffffff;
        FUN_003c86b4(uVar6,"crypto/err/err_local.h",0x5b);
        puVar12[0x18] = 0;
        FUN_003c86b4(puVar12[0x30],"crypto/err/err_local.h",0x5d);
        lVar7 = uVar15 * 4;
        lVar8 = uVar15 * 8;
        puVar12[0x30] = 0;
        uVar2 = *(undefined4 *)(lVar5 + lVar7);
        uVar9 = *(undefined8 *)(lVar5 + 0x100 + lVar8);
        uVar13 = uVar13 - 1;
        puVar10[0x10] = 0;
        *puVar10 = uVar2;
        uVar6 = *(undefined8 *)(lVar5 + 0x80 + lVar8);
        puVar12[-0x10] = uVar9;
        uVar2 = *(undefined4 *)(lVar5 + 0x200 + lVar7);
        puVar12[-0x20] = uVar6;
        uVar6 = *(undefined8 *)(lVar5 + 0x240 + lVar8);
        puVar10[0x80] = uVar2;
        uVar9 = *(undefined8 *)(lVar5 + 0x180 + lVar8);
        puVar12[0x18] = uVar6;
        uVar2 = *(undefined4 *)(lVar5 + 0x2c0 + lVar7);
        *puVar12 = uVar9;
        uVar6 = *(undefined8 *)(lVar5 + 0x300 + lVar8);
        puVar10[0xb0] = uVar2;
        puVar10 = puVar10 + 1;
        puVar12[0x30] = uVar6;
        puVar12 = puVar12 + 1;
        *(undefined4 *)(lVar5 + lVar7) = 0;
        *(undefined8 *)(lVar5 + 0x80 + lVar8) = 0;
        *(undefined8 *)(lVar5 + 0x100 + lVar8) = 0;
        *(undefined8 *)(lVar5 + 0x180 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 0x200 + lVar7) = 0;
        *(undefined8 *)(lVar5 + 0x240 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 0x2c0 + lVar7) = 0;
        *(undefined8 *)(lVar5 + 0x300 + lVar8) = 0;
      } while (uVar13 != 0);
      *(uint *)(lVar5 + 0x380) = uVar14;
      param_1[0xe1] = 0xf;
      param_1[0xe0] = (int)uVar11 + -1;
      if (0xf < uVar11) {
        return;
      }
      goto LAB_0037b508;
    }
  }
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
LAB_0037b508:
  lVar5 = uVar11 << 2;
  puVar12 = (undefined8 *)(param_1 + uVar11 * 2 + 0x60);
  do {
    puVar10 = (undefined4 *)((long)param_1 + lVar5);
    if ((*(byte *)(puVar10 + 0x80) & 1) != 0) {
      FUN_003c86b4(puVar12[-0x10],"crypto/err/err_local.h",0x19);
    }
    uVar6 = puVar12[0x18];
    puVar12[-0x10] = 0;
    *puVar12 = 0;
    puVar10[0x80] = 0;
    puVar10[0x10] = 0;
    *puVar10 = 0;
    puVar12[-0x20] = 0;
    puVar10[0xb0] = 0xffffffff;
    FUN_003c86b4(uVar6,"crypto/err/err_local.h",0x5b);
    puVar12[0x18] = 0;
    FUN_003c86b4(puVar12[0x30],"crypto/err/err_local.h",0x5d);
    lVar5 = lVar5 + 4;
    puVar12[0x30] = 0;
    puVar12 = puVar12 + 1;
  } while (lVar5 != 0x40);
  return;
}


// ===== 0037b66c  FUN_0037b66c =====

void FUN_0037b66c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  char *__dest;
  void *__dest_00;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  char *__s;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 900) != *(int *)(param_1 + 0x380))) &&
      (lVar9 = FUN_0037a18c(), lVar9 != 0)) &&
     (uVar18 = (ulong)*(uint *)(param_1 + 900),
     *(uint *)(param_1 + 900) != *(uint *)(param_1 + 0x380))) {
    lVar1 = lVar9 + 0x180;
    lVar2 = lVar9 + 0x200;
    lVar3 = lVar9 + 0x100;
    lVar4 = lVar9 + 0x240;
    lVar5 = lVar9 + 0x300;
    lVar6 = param_1 + 0x100;
    do {
      uVar18 = (ulong)((int)uVar18 + 1) & 0xf;
      if ((*(uint *)(param_1 + uVar18 * 4) >> 1 & 1) == 0) {
        uVar12 = *(int *)(lVar9 + 0x380) + 1;
        uVar7 = uVar12 & 0xf;
        if ((int)uVar12 < 1) {
          uVar7 = -(-uVar12 & 0xf);
        }
        *(uint *)(lVar9 + 0x380) = uVar7;
        if (uVar7 == *(uint *)(lVar9 + 900)) {
          cVar8 = (char)uVar7 + '\x01';
          *(int *)(lVar9 + 900) =
               (int)(char)(cVar8 - (cVar8 + ((byte)((uint)(int)cVar8 >> 0xb) & 0xf) & 0xf0));
        }
        lVar20 = (long)(int)uVar7;
        lVar16 = lVar20 * 8;
        if ((*(uint *)(lVar2 + (long)(int)uVar7 * 4) & 1) == 0) {
          uVar13 = 0;
          *(undefined8 *)(lVar3 + lVar16) = 0;
          *(undefined8 *)(lVar1 + lVar16) = 0;
LAB_0037b804:
          *(undefined4 *)(lVar2 + lVar20 * 4) = uVar13;
        }
        else {
          puVar14 = *(undefined1 **)(lVar3 + lVar20 * 8);
          if (puVar14 != (undefined1 *)0x0) {
            *puVar14 = 0;
            uVar13 = 1;
            goto LAB_0037b804;
          }
        }
        lVar19 = lVar20 * 4;
        uVar10 = *(undefined8 *)(lVar4 + lVar16);
        *(undefined4 *)(lVar9 + lVar19) = 0;
        *(undefined4 *)(lVar9 + 0x40 + lVar19) = 0;
        *(undefined8 *)(lVar9 + 0x80 + lVar16) = 0;
        *(undefined4 *)(lVar9 + 0x2c0 + lVar19) = 0xffffffff;
        FUN_003c86b4(uVar10,"crypto/err/err_local.h",0x5b);
        *(undefined8 *)(lVar4 + lVar16) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar5 + lVar16),"crypto/err/err_local.h",0x5d);
        lVar15 = uVar18 * 8;
        *(undefined8 *)(lVar5 + lVar16) = 0;
        uVar10 = *(undefined8 *)(lVar4 + lVar16);
        *(undefined4 *)(lVar9 + lVar19) = *(undefined4 *)(param_1 + uVar18 * 4);
        pcVar17 = *(char **)(param_1 + 0x240 + lVar15);
        *(undefined8 *)(lVar9 + 0x80 + lVar16) = *(undefined8 *)(param_1 + 0x80 + lVar15);
        uVar13 = *(undefined4 *)(param_1 + 0x2c0 + uVar18 * 4);
        __s = *(char **)(param_1 + 0x300 + lVar15);
        FUN_003c86b4(uVar10,"crypto/err/err_local.h",0x39);
        if ((pcVar17 == (char *)0x0) || (*pcVar17 == '\0')) {
          *(undefined8 *)(lVar4 + lVar20 * 8) = 0;
        }
        else {
          sVar11 = strlen(pcVar17);
          __dest = (char *)FUN_003c83a4(sVar11 + 1,0,0);
          *(char **)(lVar4 + lVar20 * 8) = __dest;
          if (__dest != (char *)0x0) {
            strcpy(__dest,pcVar17);
          }
        }
        uVar10 = *(undefined8 *)(lVar5 + lVar20 * 8);
        *(undefined4 *)(lVar9 + 0x2c0 + lVar20 * 4) = uVar13;
        FUN_003c86b4(uVar10,"crypto/err/err_local.h",0x42);
        if ((__s == (char *)0x0) || (*__s == '\0')) {
          *(undefined8 *)(lVar5 + lVar20 * 8) = 0;
          if (*(long *)(lVar6 + uVar18 * 8) != 0) goto LAB_0037b970;
LAB_0037b9dc:
          if ((*(byte *)(lVar2 + lVar19) & 1) == 0) {
            uVar12 = 0;
            *(undefined8 *)(lVar3 + lVar16) = 0;
            *(undefined8 *)(lVar1 + lVar16) = 0;
          }
          else {
            puVar14 = *(undefined1 **)(lVar3 + lVar20 * 8);
            if (puVar14 == (undefined1 *)0x0) goto LAB_0037b768;
            *puVar14 = 0;
            uVar12 = 1;
          }
        }
        else {
          sVar11 = strlen(__s);
          pcVar17 = (char *)FUN_003c83a4(sVar11 + 1,0,0);
          *(char **)(lVar5 + lVar20 * 8) = pcVar17;
          if (pcVar17 != (char *)0x0) {
            strcpy(pcVar17,__s);
          }
          if (*(long *)(lVar6 + uVar18 * 8) == 0) goto LAB_0037b9dc;
LAB_0037b970:
          sVar11 = *(size_t *)(param_1 + 0x180 + uVar18 * 8);
          if (sVar11 == 0) goto LAB_0037b9dc;
          __dest_00 = (void *)FUN_003c83a4(sVar11,0,0);
          if (__dest_00 == (void *)0x0) goto LAB_0037b768;
          memcpy(__dest_00,*(void **)(lVar6 + uVar18 * 8),sVar11);
          uVar12 = *(uint *)(param_1 + 0x200 + uVar18 * 4);
          if ((*(byte *)(lVar2 + lVar19) & 1) != 0) {
            FUN_003c86b4(*(undefined8 *)(lVar3 + lVar20 * 8),"crypto/err/err_local.h",0x4e);
          }
          *(void **)(lVar3 + lVar16) = __dest_00;
          uVar12 = uVar12 | 1;
          *(size_t *)(lVar1 + lVar16) = sVar11;
        }
        *(uint *)(lVar2 + lVar20 * 4) = uVar12;
      }
LAB_0037b768:
    } while (uVar18 != (long)*(int *)(param_1 + 0x380));
  }
  return;
}


// ===== 0037b9f8  FUN_0037b9f8 =====

void FUN_0037b9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &local_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  FUN_0037ba60(param_1,param_2,&local_50);
  return;
}


// ===== 0037ba60  FUN_0037ba60 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0037ba60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined1 auStack_844 [4];
  long local_840 [2];
  undefined1 *local_830;
  undefined1 auStack_828 [2048];
  undefined4 local_28 [2];
  
  uStack_868 = param_3[1];
  local_870 = *param_3;
  uStack_858 = param_3[3];
  uStack_860 = param_3[2];
  local_830 = auStack_828;
  local_840[0] = 0;
  local_840[1] = 0x800;
  iVar1 = FUN_0037bb3c(&local_830,local_840,local_840 + 1,local_28,auStack_844,param_2,&local_870);
  if (iVar1 == 0) {
    FUN_003c86b4(local_840[0],"crypto/bio/bio_print.c",0x38a);
    return 0xffffffff;
  }
  if (local_840[0] != 0) {
    uVar2 = FUN_0037df4c(param_1,local_840[0],local_28[0]);
    FUN_003c86b4(local_840[0],"crypto/bio/bio_print.c",0x38f);
    return uVar2 & 0xffffffff;
  }
  uVar2 = FUN_0037df4c(param_1,auStack_828,local_28[0]);
  return uVar2;
}


// ===== 0037bb3c  FUN_0037bb3c =====

undefined8
FUN_0037bb3c(long *param_1,long *param_2,ulong *param_3,long *param_4,uint *param_5,byte *param_6,
            long *param_7)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint *puVar14;
  int *piVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  short *psVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined *puVar28;
  size_t __n;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  ulong local_68;
  
  pbVar31 = param_6 + 1;
  uVar27 = (uint)*param_6;
  uVar29 = 0;
  uVar26 = 0;
  uVar12 = 0;
  iVar7 = 0;
  uVar30 = 0xffffffff;
  local_68 = 0;
  do {
    uVar10 = local_68;
    if (uVar27 == 0) break;
    if ((param_2 == (long *)0x0) && (*param_3 <= local_68)) {
      __n = *param_3;
      goto LAB_0037cc48;
    }
    uVar25 = uVar26;
    uVar23 = uVar29;
    uVar22 = uVar30;
    iVar6 = iVar7;
    if (uVar12 < 3) {
      if (uVar12 == 0) {
        if (uVar27 == 0x25) {
          uVar12 = 1;
        }
        else {
          if (param_2 == (long *)0x0 && *param_1 == 0) {
            return 0;
          }
          if (*param_3 < local_68) {
            return 0;
          }
          if ((param_2 != (long *)0x0) && (local_68 == *param_3)) {
            if (0x7ffffbff < local_68) {
              return 0;
            }
            lVar24 = *param_2;
            uVar21 = local_68 + 0x400;
            *param_3 = uVar21;
            if (lVar24 == 0) {
              pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
              *param_2 = (long)pvVar9;
              if (pvVar9 == (void *)0x0) {
                return 0;
              }
              if (uVar10 != 0) {
                if ((void *)*param_1 == (void *)0x0) {
                  return 0;
                }
                memcpy(pvVar9,(void *)*param_1,uVar10);
              }
              *param_1 = 0;
            }
            else {
              lVar24 = FUN_003c8558(lVar24,uVar21,"crypto/bio/bio_print.c",0x35b);
              if (lVar24 == 0) {
                return 0;
              }
              *param_2 = lVar24;
            }
          }
          if (uVar10 < *param_3) {
            lVar24 = *param_1;
            if (lVar24 == 0) {
              lVar24 = *param_2;
            }
            local_68 = uVar10 + 1;
            *(char *)(lVar24 + uVar10) = (char)uVar27;
          }
          uVar12 = 0;
        }
      }
      else if (uVar12 == 1) {
        uVar12 = 2;
        if (uVar27 < 0x2b) {
          if (uVar27 == 0x20) {
            uVar25 = uVar26 | 4;
          }
          else {
            if (uVar27 != 0x23) goto LAB_0037bbbc;
            uVar25 = uVar26 | 8;
          }
        }
        else if (uVar27 == 0x2b) {
          uVar25 = uVar26 | 2;
        }
        else if (uVar27 == 0x30) {
          uVar25 = uVar26 | 0x10;
        }
        else {
          if (uVar27 != 0x2d) goto LAB_0037bbbc;
          uVar25 = uVar26 | 1;
        }
        uVar12 = 1;
      }
      else {
        if (uVar12 != 2) goto LAB_0037bbbc;
        iVar6 = FUN_003c4784(uVar27);
        if (iVar6 == 0) {
          if (uVar27 != 0x2a) {
            uVar12 = 3;
            goto LAB_0037bbbc;
          }
          uVar30 = *(uint *)(param_7 + 3);
          if (((int)uVar30 < 0) && (*(uint *)(param_7 + 3) = uVar30 + 8, uVar30 < 0xfffffff9)) {
            piVar15 = (int *)(param_7[1] + (long)(int)uVar30);
          }
          else {
            piVar15 = (int *)*param_7;
            *param_7 = (long)(piVar15 + 2);
          }
          uVar12 = 3;
          iVar6 = *piVar15;
        }
        else {
          uVar12 = 2;
          iVar6 = uVar27 + iVar7 * 10 + -0x30;
        }
      }
      goto switchD_0037bcb4_caseD_26;
    }
    if (uVar12 < 5) {
      if (uVar12 == 3) {
        if (uVar27 == 0x2e) {
          uVar12 = 4;
          goto switchD_0037bcb4_caseD_26;
        }
LAB_0037be60:
        uVar12 = 5;
      }
      else if (uVar12 == 4) {
        iVar5 = FUN_003c4784(uVar27);
        if (iVar5 == 0) {
          if (uVar27 != 0x2a) goto LAB_0037be60;
          uVar30 = *(uint *)(param_7 + 3);
          if (((int)uVar30 < 0) && (*(uint *)(param_7 + 3) = uVar30 + 8, uVar30 < 0xfffffff9)) {
            puVar14 = (uint *)(param_7[1] + (long)(int)uVar30);
          }
          else {
            puVar14 = (uint *)*param_7;
            *param_7 = (long)(puVar14 + 2);
          }
          uVar12 = 5;
          uVar22 = *puVar14;
        }
        else {
          uVar12 = 4;
          uVar22 = (uVar27 + (uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU)) * 10) - 0x30;
        }
        goto switchD_0037bcb4_caseD_26;
      }
      goto LAB_0037bbbc;
    }
    if (uVar12 == 5) {
      uVar12 = 6;
      if (uVar27 < 0x6c) {
        if (uVar27 == 0x4c) {
          uVar23 = 3;
        }
        else {
          if (uVar27 != 0x68) {
            if (uVar27 == 0x6a) goto LAB_0037be98;
            goto LAB_0037bbbc;
          }
          uVar23 = 1;
        }
      }
      else if (uVar27 == 0x7a) {
        uVar23 = 5;
      }
      else if (uVar27 == 0x71) {
LAB_0037be98:
        uVar23 = 4;
      }
      else {
        if (uVar27 != 0x6c) goto LAB_0037bbbc;
        bVar2 = *pbVar31;
        if (bVar2 == 0x6c) {
          pbVar31 = pbVar31 + 1;
        }
        uVar23 = 4;
        if (bVar2 != 0x6c) {
          uVar23 = 2;
        }
      }
      uVar12 = 6;
      goto switchD_0037bcb4_caseD_26;
    }
    if (uVar12 != 6) goto LAB_0037bbbc;
    uVar12 = 0;
    uVar25 = 0;
    uVar23 = 0;
    uVar22 = 0xffffffff;
    iVar6 = 0;
    switch(uVar27) {
    case 0x25:
      if (param_2 == (long *)0x0 && *param_1 == 0) {
        return 0;
      }
      if (*param_3 < local_68) {
        return 0;
      }
      if ((param_2 == (long *)0x0) || (local_68 != *param_3)) {
LAB_0037c12c:
        uVar21 = *param_3;
      }
      else {
        if (0x7ffffbff < local_68) {
          return 0;
        }
        lVar24 = *param_2;
        uVar21 = local_68 + 0x400;
        *param_3 = uVar21;
        if (lVar24 != 0) {
          lVar24 = FUN_003c8558(lVar24,uVar21,"crypto/bio/bio_print.c",0x35b);
          if (lVar24 == 0) {
            return 0;
          }
          *param_2 = lVar24;
          goto LAB_0037c12c;
        }
        pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
        *param_2 = (long)pvVar9;
        if (pvVar9 == (void *)0x0) {
          return 0;
        }
        if (uVar10 != 0) {
          if ((void *)*param_1 == (void *)0x0) {
            return 0;
          }
          memcpy(pvVar9,(void *)*param_1,uVar10);
        }
        *param_1 = 0;
        uVar21 = *param_3;
      }
      if (uVar10 < uVar21) {
        lVar24 = *param_1;
        if (lVar24 == 0) {
          lVar24 = *param_2;
        }
        local_68 = uVar10 + 1;
        uVar12 = 0;
        *(undefined1 *)(lVar24 + uVar10) = 0x25;
        uVar25 = 0;
        uVar23 = 0;
        uVar22 = 0xffffffff;
        iVar6 = 0;
      }
      else {
LAB_0037ca44:
        uVar12 = 0;
        uVar25 = 0;
        uVar23 = 0;
        uVar22 = 0xffffffff;
        iVar6 = 0;
      }
      break;
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x46:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x68:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
      break;
    case 0x45:
      uVar26 = uVar26 | 0x20;
    case 0x65:
      uVar12 = *(uint *)((long)param_7 + 0x1c);
      if (((int)uVar12 < 0) &&
         (*(uint *)((long)param_7 + 0x1c) = uVar12 + 0x10, uVar12 < 0xfffffff1)) {
        puVar17 = (undefined8 *)(param_7[2] + (long)(int)uVar12);
      }
      else {
        puVar17 = (undefined8 *)*param_7;
        *param_7 = (long)(puVar17 + 1);
      }
      iVar7 = FUN_0037d280(*puVar17,param_1,param_2,&local_68,param_3,iVar7,uVar30,uVar26,1);
      goto LAB_0037c6a4;
    case 0x47:
      uVar26 = uVar26 | 0x20;
    case 0x67:
      uVar12 = *(uint *)((long)param_7 + 0x1c);
      if (((int)uVar12 < 0) &&
         (*(uint *)((long)param_7 + 0x1c) = uVar12 + 0x10, uVar12 < 0xfffffff1)) {
        puVar17 = (undefined8 *)(param_7[2] + (long)(int)uVar12);
      }
      else {
        puVar17 = (undefined8 *)*param_7;
        *param_7 = (long)(puVar17 + 1);
      }
      iVar7 = FUN_0037d280(*puVar17,param_1,param_2,&local_68,param_3,iVar7,uVar30,uVar26,2);
      goto LAB_0037c6a4;
    case 0x58:
      uVar26 = uVar26 | 0x20;
      lVar24 = (long)(int)param_7[3];
      if (3 < uVar29) goto LAB_0037c204;
LAB_0037bcc4:
      if (uVar29 != 1) {
        if (uVar29 != 2) goto LAB_0037c570;
        goto LAB_0037c214;
      }
      uVar12 = (uint)lVar24;
      if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
        puVar19 = (ushort *)(param_7[1] + lVar24);
      }
      else {
        puVar19 = (ushort *)*param_7;
        *param_7 = (long)(puVar19 + 4);
      }
      uVar10 = (ulong)*puVar19;
      goto LAB_0037c5d4;
    case 99:
      uVar30 = *(uint *)(param_7 + 3);
      if (((int)uVar30 < 0) && (*(uint *)(param_7 + 3) = uVar30 + 8, uVar30 < 0xfffffff9)) {
        puVar18 = (undefined4 *)(param_7[1] + (long)(int)uVar30);
      }
      else {
        puVar18 = (undefined4 *)*param_7;
        *param_7 = (long)(puVar18 + 2);
      }
      if (param_2 == (long *)0x0 && *param_1 == 0) {
        return 0;
      }
      if (*param_3 < local_68) {
        return 0;
      }
      uVar11 = *puVar18;
      if ((param_2 == (long *)0x0) || (local_68 != *param_3)) {
LAB_0037c504:
        uVar21 = *param_3;
      }
      else {
        if (0x7ffffbff < local_68) {
          return 0;
        }
        lVar24 = *param_2;
        uVar21 = local_68 + 0x400;
        *param_3 = uVar21;
        if (lVar24 != 0) {
          lVar24 = FUN_003c8558(lVar24,uVar21,"crypto/bio/bio_print.c",0x35b);
          if (lVar24 == 0) {
            return 0;
          }
          *param_2 = lVar24;
          goto LAB_0037c504;
        }
        pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
        *param_2 = (long)pvVar9;
        if (pvVar9 == (void *)0x0) {
          return 0;
        }
        if (uVar10 != 0) {
          if ((void *)*param_1 == (void *)0x0) {
            return 0;
          }
          memcpy(pvVar9,(void *)*param_1,uVar10);
        }
        *param_1 = 0;
        uVar21 = *param_3;
      }
      if (uVar21 <= uVar10) goto LAB_0037ca44;
      lVar24 = *param_1;
      if (lVar24 == 0) {
        lVar24 = *param_2;
      }
      local_68 = uVar10 + 1;
      uVar12 = 0;
      *(char *)(lVar24 + uVar10) = (char)uVar11;
      uVar25 = 0;
      uVar23 = 0;
      uVar22 = 0xffffffff;
      iVar6 = 0;
      break;
    case 100:
    case 0x69:
      uVar12 = *(uint *)(param_7 + 3);
      lVar24 = (long)(int)uVar12;
      if (uVar29 < 4) {
        if (uVar29 == 1) {
          if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
            psVar20 = (short *)(param_7[1] + lVar24);
          }
          else {
            psVar20 = (short *)*param_7;
            *param_7 = (long)(psVar20 + 4);
          }
          uVar10 = (ulong)*psVar20;
        }
        else {
          if (uVar29 == 2) goto LAB_0037bfd8;
LAB_0037c610:
          if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
            piVar15 = (int *)(param_7[1] + lVar24);
          }
          else {
            piVar15 = (int *)*param_7;
            *param_7 = (long)(piVar15 + 2);
          }
          uVar10 = (ulong)*piVar15;
        }
      }
      else {
        if ((uVar29 != 4) && (uVar29 != 5)) goto LAB_0037c610;
LAB_0037bfd8:
        if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
          puVar16 = (ulong *)(param_7[1] + lVar24);
        }
        else {
          puVar16 = (ulong *)*param_7;
          *param_7 = (long)(puVar16 + 1);
        }
        uVar10 = *puVar16;
      }
      uVar11 = 10;
      goto LAB_0037c6a0;
    case 0x66:
      uVar12 = *(uint *)((long)param_7 + 0x1c);
      if (((int)uVar12 < 0) &&
         (*(uint *)((long)param_7 + 0x1c) = uVar12 + 0x10, uVar12 < 0xfffffff1)) {
        puVar17 = (undefined8 *)(param_7[2] + (long)(int)uVar12);
      }
      else {
        puVar17 = (undefined8 *)*param_7;
        *param_7 = (long)(puVar17 + 1);
      }
      iVar7 = FUN_0037d280(*puVar17,param_1,param_2,&local_68,param_3,iVar7,uVar30,uVar26,0);
      goto LAB_0037c6a4;
    case 0x6e:
      uVar30 = *(uint *)(param_7 + 3);
      if (((int)uVar30 < 0) && (*(uint *)(param_7 + 3) = uVar30 + 8, uVar30 < 0xfffffff9)) {
        puVar17 = (undefined8 *)(param_7[1] + (long)(int)uVar30);
      }
      else {
        puVar17 = (undefined8 *)*param_7;
        *param_7 = (long)(puVar17 + 1);
      }
      uVar12 = 0;
      *(int *)*puVar17 = (int)local_68;
      uVar25 = 0;
      uVar23 = 0;
      uVar22 = 0xffffffff;
      iVar6 = 0;
      break;
    case 0x6f:
    case 0x75:
    case 0x78:
      lVar24 = (long)(int)param_7[3];
      if (uVar29 < 4) goto LAB_0037bcc4;
LAB_0037c204:
      if ((uVar29 == 4) || (uVar29 == 5)) {
LAB_0037c214:
        uVar12 = (uint)lVar24;
        if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
          puVar16 = (ulong *)(param_7[1] + lVar24);
        }
        else {
          puVar16 = (ulong *)*param_7;
          *param_7 = (long)(puVar16 + 1);
        }
        uVar10 = *puVar16;
      }
      else {
LAB_0037c570:
        uVar12 = (uint)lVar24;
        if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
          puVar14 = (uint *)(param_7[1] + lVar24);
        }
        else {
          puVar14 = (uint *)*param_7;
          *param_7 = (long)(puVar14 + 2);
        }
        uVar10 = (ulong)*puVar14;
      }
LAB_0037c5d4:
      uVar13 = 10;
      if (uVar27 != 0x75) {
        uVar13 = 0x10;
      }
      uVar26 = uVar26 | 0x40;
      uVar11 = 8;
      if (uVar27 != 0x6f) {
        uVar11 = uVar13;
      }
      goto LAB_0037c6a0;
    case 0x70:
      uVar12 = *(uint *)(param_7 + 3);
      if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
        puVar16 = (ulong *)(param_7[1] + (long)(int)uVar12);
      }
      else {
        puVar16 = (ulong *)*param_7;
        *param_7 = (long)(puVar16 + 1);
      }
      uVar10 = *puVar16;
      uVar26 = uVar26 | 8;
      uVar11 = 0x10;
LAB_0037c6a0:
      iVar7 = FUN_0037cfdc(param_1,param_2,&local_68,param_3,uVar10,uVar11,iVar7,uVar30,uVar26);
LAB_0037c6a4:
      if (iVar7 == 0) {
        return 0;
      }
switchD_0037bcb4_default:
      uVar12 = 0;
      uVar25 = 0;
      uVar23 = 0;
      uVar22 = 0xffffffff;
      iVar6 = 0;
      break;
    case 0x73:
      uVar12 = *(uint *)(param_7 + 3);
      if (((int)uVar12 < 0) && (*(uint *)(param_7 + 3) = uVar12 + 8, uVar12 < 0xfffffff9)) {
        puVar17 = (undefined8 *)(param_7[1] + (long)(int)uVar12);
      }
      else {
        puVar17 = (undefined8 *)*param_7;
        *param_7 = (long)(puVar17 + 1);
      }
      if (((int)uVar30 < 0) && (uVar30 = 0x7fffffff, param_2 == (long *)0x0)) {
        uVar30 = (uint)*param_3;
      }
      puVar28 = &UNK_001e0781;
      if ((undefined *)*puVar17 != (undefined *)0x0) {
        puVar28 = (undefined *)*puVar17;
      }
      uVar12 = uVar30;
      if ((int)uVar30 < 0) {
        uVar12 = 0xffffffff;
      }
      lVar24 = FUN_003ca3d4(puVar28,(long)(int)uVar12);
      iVar6 = (int)lVar24;
      uVar12 = 0;
      if (-1 < iVar7) {
        uVar12 = iVar7 - iVar6 & (iVar7 - iVar6 >> 0x1f ^ 0xffffffffU);
      }
      uVar29 = uVar12 + uVar30;
      if ((int)(uVar12 ^ 0x7fffffff) <= (int)uVar30) {
        uVar29 = 0x7fffffff;
      }
      if (-1 < (int)uVar30) {
        uVar30 = uVar29;
      }
      uVar29 = -uVar12;
      if ((uVar26 & 1) == 0) {
        uVar29 = uVar12;
      }
      uVar10 = local_68;
      if ((int)uVar29 < 1) {
        uVar26 = uVar29;
        uVar12 = 0;
      }
      else {
        uVar26 = uVar29;
        if ((int)uVar30 < 0) {
          do {
            if (param_2 == (long *)0x0 && *param_1 == 0) {
              return 0;
            }
            if (*param_3 < uVar10) {
              return 0;
            }
            if ((param_2 != (long *)0x0) && (uVar10 == *param_3)) {
              if (0x7ffffbff < uVar10) {
                return 0;
              }
              lVar8 = *param_2;
              uVar21 = uVar10 + 0x400;
              *param_3 = uVar21;
              if (lVar8 == 0) {
                pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
                *param_2 = (long)pvVar9;
                if (pvVar9 == (void *)0x0) {
                  return 0;
                }
                if (uVar10 != 0) {
                  if ((void *)*param_1 == (void *)0x0) {
                    return 0;
                  }
                  memcpy(pvVar9,(void *)*param_1,uVar10);
                }
                *param_1 = 0;
              }
              else {
                lVar8 = FUN_003c8558(lVar8,uVar21,"crypto/bio/bio_print.c",0x35b);
                if (lVar8 == 0) {
                  return 0;
                }
                *param_2 = lVar8;
              }
            }
            uVar21 = uVar10;
            if (uVar10 < *param_3) {
              lVar8 = *param_1;
              if (lVar8 == 0) {
                lVar8 = *param_2;
              }
              uVar21 = uVar10 + 1;
              *(undefined1 *)(lVar8 + uVar10) = 0x20;
            }
            uVar26 = uVar26 - 1;
            uVar10 = uVar21;
          } while (uVar26 != 0);
        }
        else {
          uVar27 = 0;
          uVar26 = uVar29 - uVar30;
          do {
            uVar12 = uVar30;
            if (uVar30 == uVar27) goto joined_r0x0037c658;
            if (param_2 == (long *)0x0 && *param_1 == 0) {
              return 0;
            }
            if (*param_3 < uVar10) {
              return 0;
            }
            if ((param_2 != (long *)0x0) && (uVar10 == *param_3)) {
              if (0x7ffffbff < uVar10) {
                return 0;
              }
              lVar8 = *param_2;
              uVar21 = uVar10 + 0x400;
              *param_3 = uVar21;
              if (lVar8 == 0) {
                pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
                *param_2 = (long)pvVar9;
                if (pvVar9 == (void *)0x0) {
                  return 0;
                }
                if (uVar10 != 0) {
                  if ((void *)*param_1 == (void *)0x0) {
                    return 0;
                  }
                  memcpy(pvVar9,(void *)*param_1,uVar10);
                }
                *param_1 = 0;
              }
              else {
                lVar8 = FUN_003c8558(lVar8,uVar21,"crypto/bio/bio_print.c",0x35b);
                if (lVar8 == 0) {
                  return 0;
                }
                *param_2 = lVar8;
              }
            }
            uVar21 = uVar10;
            if (uVar10 < *param_3) {
              lVar8 = *param_1;
              if (lVar8 == 0) {
                lVar8 = *param_2;
              }
              uVar21 = uVar10 + 1;
              *(undefined1 *)(lVar8 + uVar10) = 0x20;
            }
            uVar27 = uVar27 + 1;
            uVar10 = uVar21;
          } while (uVar29 != uVar27);
        }
        uVar26 = 0;
        uVar12 = uVar29;
        uVar10 = uVar21;
      }
joined_r0x0037c658:
      local_68 = uVar10;
      uVar29 = uVar12;
      uVar10 = local_68;
      if (lVar24 != 0) {
        if ((int)uVar30 < 0) {
          uVar21 = local_68;
          do {
            if (param_2 == (long *)0x0 && *param_1 == 0) {
              return 0;
            }
            if (*param_3 < uVar21) {
              return 0;
            }
            uVar3 = *puVar28;
            if ((param_2 != (long *)0x0) && (uVar21 == *param_3)) {
              if (0x7ffffbff < uVar21) {
                return 0;
              }
              lVar8 = *param_2;
              uVar10 = uVar21 + 0x400;
              *param_3 = uVar10;
              if (lVar8 == 0) {
                pvVar9 = (void *)FUN_003c83a4(uVar10,"crypto/bio/bio_print.c",0x350);
                *param_2 = (long)pvVar9;
                if (pvVar9 == (void *)0x0) {
                  return 0;
                }
                if (uVar21 != 0) {
                  if ((void *)*param_1 == (void *)0x0) {
                    return 0;
                  }
                  memcpy(pvVar9,(void *)*param_1,uVar21);
                }
                *param_1 = 0;
              }
              else {
                lVar8 = FUN_003c8558(lVar8,uVar10,"crypto/bio/bio_print.c",0x35b);
                if (lVar8 == 0) {
                  return 0;
                }
                *param_2 = lVar8;
              }
            }
            uVar10 = uVar21;
            if (uVar21 < *param_3) {
              lVar8 = *param_1;
              if (lVar8 == 0) {
                lVar8 = *param_2;
              }
              uVar10 = uVar21 + 1;
              *(undefined1 *)(lVar8 + uVar21) = uVar3;
            }
            lVar24 = lVar24 + -1;
            puVar28 = puVar28 + 1;
            uVar21 = uVar10;
            uVar29 = uVar12 + iVar6;
          } while (lVar24 != 0);
        }
        else {
          uVar27 = uVar30;
          if ((int)uVar30 <= (int)uVar12) {
            uVar27 = uVar12;
          }
          iVar7 = uVar27 - uVar12;
          do {
            uVar29 = uVar27;
            if (iVar7 == 0) break;
            if (param_2 == (long *)0x0 && *param_1 == 0) {
              return 0;
            }
            if (*param_3 < uVar10) {
              return 0;
            }
            uVar3 = *puVar28;
            if ((param_2 != (long *)0x0) && (uVar10 == *param_3)) {
              if (0x7ffffbff < uVar10) {
                return 0;
              }
              lVar8 = *param_2;
              uVar21 = uVar10 + 0x400;
              *param_3 = uVar21;
              if (lVar8 == 0) {
                pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
                *param_2 = (long)pvVar9;
                if (pvVar9 == (void *)0x0) {
                  return 0;
                }
                if (uVar10 != 0) {
                  if ((void *)*param_1 == (void *)0x0) {
                    return 0;
                  }
                  memcpy(pvVar9,(void *)*param_1,uVar10);
                }
                *param_1 = 0;
              }
              else {
                lVar8 = FUN_003c8558(lVar8,uVar21,"crypto/bio/bio_print.c",0x35b);
                if (lVar8 == 0) {
                  return 0;
                }
                *param_2 = lVar8;
              }
            }
            uVar21 = uVar10;
            if (uVar10 < *param_3) {
              lVar8 = *param_1;
              if (lVar8 == 0) {
                lVar8 = *param_2;
              }
              uVar21 = uVar10 + 1;
              *(undefined1 *)(lVar8 + uVar10) = uVar3;
            }
            lVar24 = lVar24 + -1;
            puVar28 = puVar28 + 1;
            iVar7 = iVar7 + -1;
            uVar10 = uVar21;
            uVar29 = uVar12 + iVar6;
          } while (lVar24 != 0);
        }
      }
      local_68 = uVar10;
      if (-1 < (int)uVar26) goto LAB_0037ca44;
      uVar10 = local_68;
      if ((int)uVar30 < 0) {
        do {
          if (param_2 == (long *)0x0 && *param_1 == 0) {
            return 0;
          }
          if (*param_3 < uVar10) {
            return 0;
          }
          if ((param_2 != (long *)0x0) && (uVar10 == *param_3)) {
            if (0x7ffffbff < uVar10) {
              return 0;
            }
            lVar24 = *param_2;
            uVar21 = uVar10 + 0x400;
            *param_3 = uVar21;
            if (lVar24 == 0) {
              pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
              *param_2 = (long)pvVar9;
              if (pvVar9 == (void *)0x0) {
                return 0;
              }
              if (uVar10 != 0) {
                if ((void *)*param_1 == (void *)0x0) {
                  return 0;
                }
                memcpy(pvVar9,(void *)*param_1,uVar10);
              }
              *param_1 = 0;
            }
            else {
              lVar24 = FUN_003c8558(lVar24,uVar21,"crypto/bio/bio_print.c",0x35b);
              if (lVar24 == 0) {
                return 0;
              }
              *param_2 = lVar24;
            }
          }
          uVar21 = uVar10;
          if (uVar10 < *param_3) {
            lVar24 = *param_1;
            if (lVar24 == 0) {
              lVar24 = *param_2;
            }
            uVar21 = uVar10 + 1;
            *(undefined1 *)(lVar24 + uVar10) = 0x20;
          }
          bVar4 = uVar26 != 0xffffffff;
          uVar26 = uVar26 + 1;
          uVar10 = uVar21;
        } while (bVar4);
      }
      else {
        if ((int)uVar30 <= (int)uVar29) {
          uVar30 = uVar29;
        }
        iVar7 = uVar30 - uVar29;
        do {
          uVar21 = uVar10;
          if (iVar7 == 0) break;
          if (param_2 == (long *)0x0 && *param_1 == 0) {
            return 0;
          }
          if (*param_3 < uVar10) {
            return 0;
          }
          if ((param_2 != (long *)0x0) && (uVar10 == *param_3)) {
            if (0x7ffffbff < uVar10) {
              return 0;
            }
            lVar24 = *param_2;
            uVar1 = uVar10 + 0x400;
            *param_3 = uVar1;
            if (lVar24 == 0) {
              pvVar9 = (void *)FUN_003c83a4(uVar1,"crypto/bio/bio_print.c",0x350);
              *param_2 = (long)pvVar9;
              if (pvVar9 == (void *)0x0) {
                return 0;
              }
              if (uVar10 != 0) {
                if ((void *)*param_1 == (void *)0x0) {
                  return 0;
                }
                memcpy(pvVar9,(void *)*param_1,uVar10);
              }
              *param_1 = 0;
            }
            else {
              lVar24 = FUN_003c8558(lVar24,uVar1,"crypto/bio/bio_print.c",0x35b);
              if (lVar24 == 0) {
                return 0;
              }
              *param_2 = lVar24;
            }
          }
          if (uVar10 < *param_3) {
            lVar24 = *param_1;
            if (lVar24 == 0) {
              lVar24 = *param_2;
            }
            uVar21 = uVar10 + 1;
            *(undefined1 *)(lVar24 + uVar10) = 0x20;
          }
          bVar4 = uVar26 != 0xffffffff;
          uVar26 = uVar26 + 1;
          iVar7 = iVar7 + -1;
          uVar10 = uVar21;
        } while (bVar4);
      }
      uVar12 = 0;
      uVar25 = 0;
      local_68 = uVar21;
      uVar23 = 0;
      uVar22 = 0xffffffff;
      iVar6 = 0;
      break;
    case 0x77:
      uVar12 = 0;
      pbVar31 = pbVar31 + 1;
      uVar25 = 0;
      uVar23 = 0;
      iVar6 = 0;
      break;
    default:
      goto switchD_0037bcb4_default;
    }
switchD_0037bcb4_caseD_26:
    uVar29 = uVar23;
    uVar26 = uVar25;
    uVar27 = (uint)*pbVar31;
    pbVar31 = pbVar31 + 1;
    uVar30 = uVar22;
    iVar7 = iVar6;
LAB_0037bbbc:
  } while (uVar12 != 7);
  __n = *param_3;
  uVar10 = local_68;
  if (param_2 == (long *)0x0) {
LAB_0037cc48:
    uVar21 = __n - 1;
    lVar24 = *param_1;
    uVar10 = local_68;
    if (uVar21 <= local_68) {
      uVar10 = uVar21;
    }
    *param_5 = (uint)(uVar21 < local_68);
    if (lVar24 == 0) {
      return 0;
    }
  }
  if (__n < uVar10) {
    return 0;
  }
  if ((param_2 != (long *)0x0) && (uVar10 == __n)) {
    if (0x7ffffbff < __n) {
      return 0;
    }
    lVar24 = *param_2;
    uVar21 = __n + 0x400;
    *param_3 = uVar21;
    if (lVar24 == 0) {
      pvVar9 = (void *)FUN_003c83a4(uVar21,"crypto/bio/bio_print.c",0x350);
      *param_2 = (long)pvVar9;
      if (pvVar9 == (void *)0x0) {
        return 0;
      }
      if (__n != 0) {
        if ((void *)*param_1 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar9,(void *)*param_1,__n);
      }
      *param_1 = 0;
      uVar21 = *param_3;
      goto joined_r0x0037cd28;
    }
    lVar24 = FUN_003c8558(lVar24,uVar21,"crypto/bio/bio_print.c",0x35b);
    if (lVar24 == 0) {
      return 0;
    }
    *param_2 = lVar24;
  }
  uVar21 = *param_3;
joined_r0x0037cd28:
  if (uVar10 < uVar21) {
    lVar24 = *param_1;
    if (lVar24 == 0) {
      lVar24 = *param_2;
    }
    *(undefined1 *)(lVar24 + uVar10) = 0;
    uVar10 = uVar10 + 1;
  }
  *param_4 = uVar10 - 1;
  return 1;
}


// ===== 0037cd5c  FUN_0037cd5c =====

undefined4
FUN_0037cd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int local_34;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_8;
  
  puStack_50 = auStack_b0;
  puStack_58 = &stack0xffffffffffffff80;
  uStack_48 = 0xffffff80ffffffd8;
  local_a8 = param_5;
  uStack_a0 = param_6;
  local_98 = param_7;
  uStack_90 = param_8;
  local_88 = param_9;
  local_60 = (undefined1 *)register0x00000008;
  local_28 = param_3;
  local_8 = param_2;
  iVar1 = FUN_0037bb3c(&local_8,0,&local_28,&local_30,&local_34,param_4,&local_60,param_9,param_1);
  uVar2 = (undefined4)local_30;
  if ((iVar1 == 0 || local_30 >> 0x1f != 0) || local_34 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 0037ce0c  FUN_0037ce0c =====

undefined4
FUN_0037ce0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int local_2c;
  ulong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_48 = param_4[1];
  local_50 = *param_4;
  uStack_38 = param_4[3];
  uStack_40 = param_4[2];
  local_20 = param_2;
  uStack_18 = param_1;
  iVar1 = FUN_0037bb3c(&uStack_18,0,&local_20,&local_28,&local_2c,param_3,&local_50);
  uVar2 = (undefined4)local_28;
  if ((iVar1 == 0 || local_28 >> 0x1f != 0) || local_2c != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


// ===== 0037ce6c  FUN_0037ce6c =====

undefined8
FUN_0037ce6c(long *param_1,long *param_2,ulong *param_3,ulong *param_4,undefined1 param_5)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  
  if (param_2 == (long *)0x0 && *param_1 == 0) {
    return 0;
  }
  uVar2 = *param_3;
  if (uVar2 <= *param_4) {
    if ((param_2 != (long *)0x0) && (uVar2 == *param_4)) {
      if (0x7ffffbff < uVar2) {
        return 0;
      }
      lVar1 = *param_2;
      uVar2 = uVar2 + 0x400;
      *param_4 = uVar2;
      if (lVar1 == 0) {
        __dest = (void *)FUN_003c83a4(uVar2,"crypto/bio/bio_print.c",0x350);
        *param_2 = (long)__dest;
        if (__dest == (void *)0x0) {
          return 0;
        }
        uVar2 = *param_3;
        if (uVar2 != 0) {
          if ((void *)*param_1 == (void *)0x0) {
            return 0;
          }
          memcpy(__dest,(void *)*param_1,uVar2);
        }
        *param_1 = 0;
      }
      else {
        lVar1 = FUN_003c8558(lVar1,uVar2,"crypto/bio/bio_print.c",0x35b);
        if (lVar1 == 0) {
          return 0;
        }
        uVar2 = *param_3;
        *param_2 = lVar1;
      }
    }
    if (uVar2 < *param_4) {
      lVar1 = *param_1;
      if (lVar1 == 0) {
        lVar1 = *param_2;
      }
      *param_3 = uVar2 + 1;
      *(undefined1 *)(lVar1 + uVar2) = param_5;
    }
    return 1;
  }
  return 0;
}


// ===== 0037cfdc  FUN_0037cfdc =====

undefined8
FUN_0037cfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5,uint param_6,int param_7,uint param_8,uint param_9)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  size_t sVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  ulong uVar15;
  char acStack_7b [27];
  
  bVar7 = (param_9 & 2) == 0;
  uVar10 = 0;
  if (bVar7) {
    uVar10 = (uint)((param_9 & 4) == 0);
  }
  iVar12 = 0x2b;
  if (bVar7) {
    iVar12 = (param_9 & 4) << 3;
  }
  bVar7 = (param_5 & 0x8000000000000000) != 0;
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  if (bVar7) {
    uVar10 = 0;
    iVar12 = 0x2d;
  }
  uVar15 = -param_5;
  if (!bVar7) {
    uVar15 = param_5;
  }
  bVar7 = (param_9 & 0x40) == 0;
  uVar2 = 1;
  if (bVar7) {
    uVar2 = uVar10;
  }
  iVar6 = 0;
  if (bVar7) {
    param_5 = uVar15;
    iVar6 = iVar12;
  }
  pcVar14 = "0";
  if (param_6 != 8) {
    pcVar14 = "";
  }
  pcVar3 = "0x";
  if (param_6 != 0x10) {
    pcVar3 = pcVar14;
  }
  pcVar14 = "0123456789abcdef";
  if ((param_9 & 0x20) != 0) {
    pcVar14 = "0123456789ABCDEF";
  }
  uVar11 = (ulong)param_6;
  uVar15 = 0;
  do {
    uVar5 = 0;
    if (uVar11 != 0) {
      uVar5 = param_5 / uVar11;
    }
    uVar1 = uVar15 + 1;
    acStack_7b[uVar15 + 1] = pcVar14[param_5 - uVar5 * uVar11];
  } while ((uVar11 <= param_5) && (bVar7 = uVar15 < 0x19, uVar15 = uVar1, param_5 = uVar5, bVar7));
  uVar10 = (uint)uVar1;
  pcVar14 = "";
  if ((param_9 & 8) != 0) {
    pcVar14 = pcVar3;
  }
  uVar13 = uVar10 - 1;
  if (uVar10 != 0x1a) {
    uVar13 = uVar10;
  }
  uVar15 = (ulong)uVar13;
  uVar10 = param_8 - uVar13;
  acStack_7b[uVar15 + 1] = '\0';
  if (uVar10 == 0 || (int)param_8 < (int)uVar13) {
    param_8 = uVar13;
  }
  sVar8 = strlen(pcVar14);
  uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  param_8 = ((param_7 - (uVar2 ^ 1)) - (int)sVar8) - param_8;
  param_8 = param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU);
  uVar13 = uVar10;
  if (uVar10 <= param_8) {
    uVar13 = param_8;
  }
  if ((param_9 & 0x10) != 0) {
    param_8 = 0;
    uVar10 = uVar13;
  }
  uVar13 = -param_8;
  if ((param_9 & 1) == 0) {
    uVar13 = param_8;
  }
  if (0 < (int)uVar13) {
    iVar12 = uVar13 + 1;
    do {
      uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4,0x20);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
    uVar13 = 0;
  }
  if ((uVar2 == 0) && (uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4,iVar6), (int)uVar9 == 0)
     ) {
    return uVar9;
  }
  cVar4 = *pcVar14;
  while (cVar4 != '\0') {
    pcVar14 = pcVar14 + 1;
    uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    cVar4 = *pcVar14;
  }
  if (uVar10 != 0) {
    iVar12 = uVar10 + 1;
    do {
      uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4,0x30);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
  }
  do {
    if ((int)uVar15 < 1) {
      if (-1 < (int)uVar13) {
        return 1;
      }
      do {
        uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4,0x20);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        bVar7 = uVar13 != 0xffffffff;
        uVar13 = uVar13 + 1;
      } while (bVar7);
      return 1;
    }
    pcVar14 = acStack_7b + uVar15;
    uVar15 = uVar15 - 1;
    uVar9 = FUN_0037ce6c(param_1,param_2,param_3,param_4,*pcVar14);
  } while ((int)uVar9 != 0);
  return uVar9;
}


// ===== 0037d280  FUN_0037d280 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0037d280(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,uint param_7,uint param_8,int param_9)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 local_a0;
  char local_9c [19];
  char acStack_89 [20];
  char acStack_75 [21];
  ulong uVar10;
  
  uVar8 = 6;
  if (-1 < (int)param_7) {
    uVar8 = param_7;
  }
  dVar20 = param_1;
  if (0.0 <= param_1) {
    if ((param_8 >> 1 & 1) != 0) {
      iVar4 = 0x2b;
      goto joined_r0x0037d314;
    }
    iVar4 = (param_8 & 4) << 3;
    uVar7 = (uint)((param_8 & 4) == 0);
    if (param_9 != 2) goto LAB_0037d2d8;
LAB_0037d318:
    if (param_1 == 0.0) {
      iVar6 = 0;
    }
    else if ((param_1 < DAT_001b71b0) || ((param_1 < 10.0 == NAN(param_1) && (uVar8 == 0)))) {
      iVar6 = 1;
    }
    else {
      if (uVar8 == 0) {
LAB_0037d63c:
        iVar6 = 0;
      }
      else {
        dVar21 = 1.0;
        uVar9 = uVar8;
        do {
          dVar21 = dVar21 * 10.0;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        if (param_1 < dVar21) goto LAB_0037d63c;
        iVar6 = 1;
      }
      if (param_9 == 0) goto LAB_0037d2dc;
    }
LAB_0037d34c:
    if (param_1 == 0.0) {
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      if (1.0 <= param_1) {
        if (param_1 != 10.0 && param_1 < 10.0 == NAN(param_1)) goto LAB_0037d3a8;
      }
      else {
        do {
          dVar20 = dVar20 * 10.0;
          lVar19 = lVar19 + -1;
        } while (dVar20 < 1.0);
        if (dVar20 != 10.0 && dVar20 < 10.0 == NAN(dVar20)) {
LAB_0037d3a8:
          do {
            dVar20 = dVar20 / 10.0;
            lVar19 = lVar19 + 1;
          } while (dVar20 != 10.0 && dVar20 < 10.0 == NAN(dVar20));
        }
      }
    }
    if (param_9 == 2) {
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      if (iVar6 == 0) {
        uVar8 = uVar8 + ~(uint)lVar19;
        if ((int)uVar8 < 0) goto LAB_0037d70c;
      }
      else {
        uVar8 = uVar8 - 1;
      }
    }
    if (iVar6 != 1) {
      dVar20 = param_1;
    }
  }
  else {
    iVar4 = 0x2d;
joined_r0x0037d314:
    uVar7 = 0;
    if (param_9 == 2) goto LAB_0037d318;
LAB_0037d2d8:
    iVar6 = param_9;
    if (param_9 != 0) goto LAB_0037d34c;
LAB_0037d2dc:
    lVar19 = 0;
  }
  dVar21 = -dVar20;
  if (0.0 <= dVar20) {
    dVar21 = dVar20;
  }
  if (dVar21 < 1.8446744073709552e+19 == NAN(dVar21)) goto LAB_0037d70c;
  uVar11 = (ulong)dVar21;
  dVar20 = 1.0;
  uVar9 = uVar8;
  if (8 < (int)uVar8) {
    uVar9 = 9;
  }
  uVar10 = (ulong)uVar9;
  uVar17 = uVar10;
  if (uVar8 == 0) {
    uVar17 = 1;
  }
  else {
    do {
      dVar20 = dVar20 * 10.0;
      uVar2 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar2;
    } while (uVar2 != 0);
    lVar12 = (long)dVar20;
    dVar22 = dVar20 - (double)(long)dVar20;
    dVar20 = 1.0;
    uVar17 = uVar10;
    do {
      dVar20 = dVar20 * 10.0;
      uVar2 = (int)uVar17 - 1;
      uVar17 = (ulong)uVar2;
    } while (uVar2 != 0);
    uVar17 = (ulong)(dVar22 < 0.5 == NAN(dVar22)) + lVar12;
  }
  uVar15 = 0;
  dVar20 = (dVar21 - (double)uVar11) * dVar20;
  uVar13 = (ulong)dVar20;
  if (dVar20 - (double)(long)dVar20 < 0.5 == NAN(dVar20 - (double)(long)dVar20)) {
    uVar13 = uVar13 + 1;
  }
  if (uVar13 < uVar17) {
    uVar17 = 0;
  }
  else {
    uVar11 = uVar11 + 1;
  }
  do {
    acStack_75[uVar15 + 1] = "0123456789"[uVar11 % 10];
    uVar1 = uVar15 + 1;
    if (0x12 < uVar15) break;
    bVar3 = 9 < uVar11;
    uVar15 = uVar1;
    uVar11 = uVar11 / 10;
  } while (bVar3);
  uVar14 = (uint)uVar1;
  uVar2 = uVar14 - 1;
  if (uVar14 != 0x14) {
    uVar2 = uVar14;
  }
  uVar11 = (ulong)uVar2;
  acStack_75[uVar11 + 1] = '\0';
  if (param_9 == 2) {
    lVar12 = -uVar10;
    uVar17 = uVar13 - uVar17;
    do {
      lVar12 = lVar12 + 1;
      uVar9 = (uint)uVar10;
      if ((int)uVar9 < 1) {
        acStack_89[1] = '\0';
        uVar9 = uVar8 & (int)uVar8 >> 0x1f;
        local_a0 = 0;
        goto joined_r0x0037d5e0;
      }
      if (uVar17 % 10 != 0) {
        acStack_89[1] = "0123456789"[uVar17 % 10];
        if (uVar9 != 1) {
          lVar12 = -lVar12;
          pcVar16 = (char *)((ulong)(acStack_89 + 1) | 1);
          do {
            lVar12 = lVar12 + -1;
            uVar17 = uVar17 / 10;
            *pcVar16 = "0123456789"[uVar17 % 10];
            pcVar16 = pcVar16 + 1;
          } while (lVar12 != 0);
          goto LAB_0037d688;
        }
        uVar9 = 1;
        acStack_89[2] = 0;
        local_a0 = 1;
        goto joined_r0x0037d5e0;
      }
      uVar10 = (ulong)(uVar9 - 1);
      uVar17 = uVar17 / 10;
    } while (uVar9 - 1 != 0);
    uVar9 = 0;
    acStack_89[1] = 0;
joined_r0x0037d5c4:
    acStack_89[1] = '\0';
    local_a0 = 0;
  }
  else {
    if ((int)uVar8 < 1) {
      acStack_89[1] = 0;
      goto joined_r0x0037d5c4;
    }
    pcVar16 = acStack_89;
    uVar17 = uVar13 - uVar17;
    do {
      pcVar16 = pcVar16 + 1;
      uVar10 = uVar10 - 1;
      *pcVar16 = "0123456789"[uVar17 % 10];
      uVar17 = uVar17 / 10;
    } while (uVar10 != 0);
LAB_0037d688:
    acStack_89[(long)(int)uVar9 + 1] = '\0';
    local_a0 = uVar9;
  }
joined_r0x0037d5e0:
  uVar10 = 0;
  if (iVar6 == 1) {
    uVar17 = 0;
    uVar8 = -(uint)lVar19;
    if (-1 < lVar19) {
      uVar8 = (uint)lVar19;
    }
    do {
      uVar14 = uVar8;
      local_9c[uVar17] = "0123456789"[(int)uVar14 % 10];
      uVar10 = uVar17 + 1;
      if (0x12 < uVar17) break;
      uVar17 = uVar10;
      uVar8 = uVar14 / 10;
    } while (9 < (int)uVar14);
    if (9 < (int)uVar14) {
LAB_0037d70c:
      FUN_0037ce6c(param_2,param_3,param_4,param_5,0);
      return 0;
    }
    if (uVar10 == 1) {
      uVar10 = 2;
      local_9c[1] = 0x30;
    }
  }
  iVar18 = -3 - (int)uVar10;
  if (iVar6 != 1) {
    iVar18 = -1;
  }
  uVar2 = (((uVar7 + param_6) - (uVar2 + uVar9)) - (uint)(0 < (int)uVar9)) + iVar18;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar8 = -uVar2;
  if ((param_8 & 1) == 0) {
    uVar8 = uVar2;
  }
  if (((param_8 >> 4 & 1) == 0) || ((int)uVar8 < 1)) {
    if (0 < (int)uVar8) {
      iVar18 = uVar8 + 1;
      do {
        uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        iVar18 = iVar18 + -1;
      } while (1 < iVar18);
      uVar8 = 0;
    }
    if ((iVar4 != 0) &&
       (uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,iVar4), (int)uVar5 == 0)) {
      return uVar5;
    }
  }
  else {
    if (uVar7 == 0) {
      uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,iVar4);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) goto LAB_0037d85c;
    }
    iVar4 = uVar8 + 1;
    do {
      uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
    uVar8 = 0;
  }
LAB_0037d85c:
  uVar7 = uVar9 - local_a0;
  while (0 < (int)uVar11) {
    pcVar16 = acStack_75 + uVar11;
    uVar11 = uVar11 - 1;
    uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,*pcVar16);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  if (((param_8 >> 3 & 1) != 0) || (0 < (int)uVar9)) {
    uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,0x2e);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    uVar11 = (ulong)local_a0;
    while (0 < (int)uVar11) {
      pcVar16 = acStack_89 + uVar11;
      uVar11 = uVar11 - 1;
      iVar4 = FUN_0037ce6c(param_2,param_3,param_4,param_5,*pcVar16);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  if (0 < (int)uVar7) {
    iVar4 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + 1;
    do {
      uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,0x30);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
  }
  if (iVar6 == 1) {
    uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,param_8 & 0x20 ^ 0x65);
    if ((int)uVar5 != 0) {
      if (lVar19 < 0) {
        uVar5 = 0x2d;
      }
      else {
        uVar5 = 0x2b;
      }
      uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,uVar5);
      if ((int)uVar5 != 0) {
        uVar11 = uVar10 & 0xffffffff;
        do {
          if ((long)uVar11 < 1) goto LAB_0037d9fc;
          iVar4 = FUN_0037ce6c(param_2,param_3,param_4,param_5,local_9c[uVar11 - 1]);
          uVar5 = 0;
          uVar11 = uVar11 - 1;
        } while (iVar4 != 0);
      }
    }
  }
  else {
LAB_0037d9fc:
    if ((int)uVar8 < 0) {
      do {
        uVar5 = FUN_0037ce6c(param_2,param_3,param_4,param_5,0x20);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        bVar3 = uVar8 != 0xffffffff;
        uVar8 = uVar8 + 1;
        uVar5 = 1;
      } while (bVar3);
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}


// ===== 0037da34  FUN_0037da34 =====

undefined8 * FUN_0037da34(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_003c8474(0x78,"crypto/bio/bio_lib.c",0x53);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined4 *)((long)puVar2 + 0x24) = 1;
  *(undefined4 *)(puVar2 + 10) = 1;
  iVar1 = FUN_003c4ee0(0xc,puVar2,puVar2 + 0xd);
  if (iVar1 == 0) {
LAB_0037db18:
    FUN_003c86b4(puVar2,"crypto/bio/bio_lib.c",0x6e);
    return (undefined8 *)0x0;
  }
  if (*(code **)(param_2 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_2 + 0x48))(puVar2);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",99,"BIO_new_ex");
      FUN_00379a5c(0x20,0xc0105,0);
      FUN_003c525c(0xc,puVar2,puVar2 + 0xd);
      goto LAB_0037db18;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      return puVar2;
    }
  }
  *(undefined4 *)(puVar2 + 4) = 1;
  return puVar2;
}


// ===== 0037db44  FUN_0037db44 =====

void FUN_0037db44(undefined8 param_1)

{
  FUN_0037da34(0,param_1);
  return;
}


// ===== 0037db50  FUN_0037db50 =====

long FUN_0037db50(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x50);
    iVar1 = iVar2 + -1;
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0 || iVar2 < 1) {
      if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x10))(param_1,1,0,0,0,0,1,0), iVar2 < 1)) {
        return 0;
      }
      if ((*(long *)(param_1 + 8) != 0) &&
         (pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x50), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_003c525c(0xc,param_1,param_1 + 0x68);
      FUN_003c86b4(param_1,"crypto/bio/bio_lib.c",0x93);
      return 1;
    }
    param_1 = 1;
  }
  return param_1;
}


// ===== 0037dc18  FUN_0037dc18 =====

void FUN_0037dc18(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}


// ===== 0037dc20  FUN_0037dc20 =====

undefined8 FUN_0037dc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 0037dc28  FUN_0037dc28 =====

void FUN_0037dc28(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 0037dc30  FUN_0037dc30 =====

undefined4 FUN_0037dc30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// ===== 0037dc38  FUN_0037dc38 =====

void FUN_0037dc38(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}


// ===== 0037dc40  FUN_0037dc40 =====

undefined4 FUN_0037dc40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 0037dc48  FUN_0037dc48 =====

void FUN_0037dc48(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  if (((param_1 != 0) &&
      (iVar2 = *(int *)(param_1 + 0x50), iVar1 = iVar2 + -1, *(int *)(param_1 + 0x50) = iVar1,
      iVar1 == 0 || iVar2 < 1)) &&
     ((*(code **)(param_1 + 0x10) == (code *)0x0 ||
      (iVar2 = (**(code **)(param_1 + 0x10))(param_1,1,0,0,0,0,1,0), 0 < iVar2)))) {
    if ((*(long *)(param_1 + 8) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x50), pcVar3 != (code *)0x0)) {
      (*pcVar3)();
    }
    FUN_003c525c(0xc,param_1,param_1 + 0x68);
    FUN_003c86b4(param_1,"crypto/bio/bio_lib.c",0x93);
    return;
  }
  return;
}


// ===== 0037dcfc  FUN_0037dcfc =====

bool FUN_0037dcfc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  return 0 < iVar1;
}


// ===== 0037dd18  FUN_0037dd18 =====

void FUN_0037dd18(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & (param_2 ^ 0xffffffff);
  return;
}


// ===== 0037dd28  FUN_0037dd28 =====

uint FUN_0037dd28(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x28) & param_2;
}


// ===== 0037dd34  FUN_0037dd34 =====

void FUN_0037dd34(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | param_2;
  return;
}


// ===== 0037dd44  FUN_0037dd44 =====

undefined8 FUN_0037dd44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0037dd4c  FUN_0037dd4c =====

void FUN_0037dd4c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 0037dd54  FUN_0037dd54 =====

void FUN_0037dd54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


// ===== 0037dd5c  FUN_0037dd5c =====

undefined8 FUN_0037dd5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0037dd64  FUN_0037dd64 =====

undefined8 FUN_0037dd64(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}


// ===== 0037dd70  FUN_0037dd70 =====

undefined4 FUN_0037dd70(long param_1)

{
  return **(undefined4 **)(param_1 + 8);
}


// ===== 0037dd7c  FUN_0037dd7c =====

int FUN_0037dd7c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_18 [2];
  
  if (-1 < param_3) {
    iVar1 = FUN_0037ddb8(param_1,param_2,param_3,local_18);
    if (iVar1 < 1) {
      local_18[0] = iVar1;
    }
    return local_18[0];
  }
  return 0;
}


// ===== 0037ddb8  FUN_0037ddb8 =====

int FUN_0037ddb8(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0xc0102;
  if (param_1 == 0) {
    iVar1 = -1;
    uVar3 = 0x10b;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x20) == 0)) {
    iVar1 = -2;
    uVar2 = 0x79;
    uVar3 = 0x10f;
  }
  else {
    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_1 + 0x10))(param_1,2,param_2,param_3,0,0,1,0), iVar1 < 1)) {
      return iVar1;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar1 = -1;
      uVar2 = 0x78;
      uVar3 = 0x119;
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1,param_2,param_3,param_4);
      if (0 < iVar1) {
        *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + *param_4;
      }
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x10))(param_1,0x82,param_2,param_3,0,0,iVar1,param_4);
      }
      if (iVar1 < 1) {
        return iVar1;
      }
      if (*param_4 <= param_3) {
        return iVar1;
      }
      uVar2 = 0xc0103;
      iVar1 = -1;
      uVar3 = 0x128;
    }
  }
  FUN_00379868();
  FUN_0037995c("crypto/bio/bio_lib.c",uVar3,"bio_read_intern");
  FUN_00379a5c(0x20,uVar2,0);
  return iVar1;
}


// ===== 0037df30  FUN_0037df30 =====

bool FUN_0037df30(void)

{
  int iVar1;
  
  iVar1 = FUN_0037ddb8();
  return 0 < iVar1;
}


// ===== 0037df4c  FUN_0037df4c =====

int FUN_0037df4c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_18 [2];
  
  if (0 < param_3) {
    iVar1 = FUN_0037df8c(param_1,param_2,param_3,local_18);
    if (iVar1 < 1) {
      local_18[0] = iVar1;
    }
    return local_18[0];
  }
  return 0;
}


// ===== 0037df8c  FUN_0037df8c =====

int FUN_0037df8c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long local_38;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 8) != 0) && (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0)) {
      if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
         (iVar1 = (**(code **)(param_1 + 0x10))(param_1,3,param_2,param_3,0,0,1,0), 0 < iVar1)) {
        if (*(int *)(param_1 + 0x20) == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/bio/bio_lib.c",0x160,"bio_write_intern");
          FUN_00379a5c(0x20,0x78,0);
          return -1;
        }
        iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,&local_38);
        if (0 < iVar1) {
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + local_38;
        }
        if (*(code **)(param_1 + 0x10) != (code *)0x0) {
          iVar1 = (**(code **)(param_1 + 0x10))(param_1,0x83,param_2,param_3,0,0,iVar1,&local_38);
        }
        if (param_4 != (long *)0x0) {
          *param_4 = local_38;
        }
      }
      return iVar1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x156,"bio_write_intern");
    FUN_00379a5c(0x20,0x79,0);
    return -2;
  }
  return 0;
}


// ===== 0037e148  FUN_0037e148 =====

bool FUN_0037e148(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_0037df8c();
  return param_1 != 0 && param_3 == 0 || 0 < iVar1;
}


// ===== 0037e17c  FUN_0037e17c =====

int FUN_0037e17c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  
  if (param_1 == 0) {
    *param_6 = 0;
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x193,"BIO_sendmmsg");
    uVar3 = 0xc0102;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x60) == 0)) {
    *param_6 = 0;
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x199,"BIO_sendmmsg");
    uVar3 = 0x79;
  }
  else {
    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
       (local_68 = param_2, uStack_60 = param_3, local_58 = param_4, uStack_50 = param_5,
       local_48 = param_6, lVar2 = (**(code **)(param_1 + 0x10))(param_1,8,&local_68,0,0,0,1,0),
       lVar2 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x60))();
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x10))(param_1,0x88,&local_68,(long)iVar1,0,0,iVar1,0);
        return iVar1;
      }
      return iVar1;
    }
    *param_6 = 0;
    FUN_00379868(param_1,param_2,param_3,param_4,param_5);
    FUN_0037995c("crypto/bio/bio_lib.c",0x1ac,"BIO_sendmmsg");
    uVar3 = 0x78;
  }
  FUN_00379a5c(0x20,uVar3,0);
  return 0;
}


// ===== 0037e30c  FUN_0037e30c =====

int FUN_0037e30c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  
  if (param_1 == 0) {
    *param_6 = 0;
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x1c2,"BIO_recvmmsg");
    uVar3 = 0xc0102;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x68) == 0)) {
    *param_6 = 0;
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x1c8,"BIO_recvmmsg");
    uVar3 = 0x79;
  }
  else {
    if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
       (local_68 = param_2, uStack_60 = param_3, local_58 = param_4, uStack_50 = param_5,
       local_48 = param_6, lVar2 = (**(code **)(param_1 + 0x10))(param_1,7,&local_68,0,0,0,1,0),
       lVar2 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))();
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x10))(param_1,0x87,&local_68,(long)iVar1,0,0,iVar1,0);
        return iVar1;
      }
      return iVar1;
    }
    *param_6 = 0;
    FUN_00379868(param_1,param_2,param_3,param_4,param_5);
    FUN_0037995c("crypto/bio/bio_lib.c",0x1db,"BIO_recvmmsg");
    uVar3 = 0x78;
  }
  FUN_00379a5c(0x20,uVar3,0);
  return 0;
}


// ===== 0037e49c  FUN_0037e49c =====

void FUN_0037e49c(undefined8 param_1,undefined8 param_2)

{
  FUN_0037e4bc(param_1,0x5b,0,param_2);
  return;
}


// ===== 0037e4bc  FUN_0037e4bc =====

long FUN_0037e4bc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(long *)(param_1 + 8) == 0) ||
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x40), pcVar2 == (code *)0x0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x29b,"BIO_ctrl");
    FUN_00379a5c(0x20,0x79,0);
    lVar1 = -2;
  }
  else {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      lVar1 = (**(code **)(param_1 + 0x10))(param_1,6,param_4,0,param_2,param_3,1,0);
      if (lVar1 < 1) {
        return lVar1;
      }
      pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x40);
    }
    lVar1 = (*pcVar2)(param_1,param_2,param_3);
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0037e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(param_1 + 0x10))(param_1,0x86,param_4,0,param_2,param_3,lVar1,0);
      return lVar1;
    }
  }
  return lVar1;
}


// ===== 0037e5e8  FUN_0037e5e8 =====

void FUN_0037e5e8(undefined8 param_1,undefined8 param_2)

{
  FUN_0037e4bc(param_1,0x5c,0,param_2);
  return;
}


// ===== 0037e608  FUN_0037e608 =====

ulong FUN_0037e608(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x1f8,"BIO_puts");
    uVar3 = 0xc0102;
    goto LAB_0037e784;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x30) == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x1fc,"BIO_puts");
    FUN_00379a5c(0x20,0x79,0);
    uVar2 = 0xfffffffe;
  }
  else if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
          (uVar2 = (**(code **)(param_1 + 0x10))(param_1,4,param_2,0,0,0,1,0), 0 < (int)uVar2)) {
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x207,"BIO_puts");
      uVar3 = 0x78;
    }
    else {
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x30))(param_1,param_2);
      uVar4 = (ulong)uVar1;
      if ((int)uVar1 < 1) {
        pcVar5 = *(code **)(param_1 + 0x10);
        uVar2 = uVar4;
      }
      else {
        uVar2 = 1;
        *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar4;
        pcVar5 = *(code **)(param_1 + 0x10);
        local_28 = uVar4;
      }
      if (pcVar5 != (code *)0x0) {
        uVar2 = (*pcVar5)(param_1,0x84,param_2,0,0,0,uVar2,&local_28);
        uVar2 = uVar2 & 0xffffffff;
      }
      if ((int)uVar2 < 1) goto LAB_0037e748;
      if (local_28 >> 0x1f == 0) {
        return local_28 & 0xffffffff;
      }
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x219,"BIO_puts");
      uVar3 = 0x66;
    }
LAB_0037e784:
    FUN_00379a5c(0x20,uVar3,0);
    return 0xffffffff;
  }
LAB_0037e748:
  return uVar2 & 0xffffffff;
}


// ===== 0037e7f0  FUN_0037e7f0 =====

ulong FUN_0037e7f0(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x229,"BIO_gets");
    uVar3 = 0xc0102;
  }
  else {
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x38) == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x22d,"BIO_gets");
      FUN_00379a5c(0x20,0x79,0);
      return 0xfffffffe;
    }
    if ((int)param_3 < 0) {
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x232,"BIO_gets");
      uVar3 = 0x7d;
      goto LAB_0037e964;
    }
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x10))(param_1,5,param_2,param_3,0,0,1,0);
      if ((int)uVar2 < 1) goto LAB_0037e8e4;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x38))(param_1,param_2);
      uVar2 = (ulong)uVar1;
      if (0 < (int)uVar1) {
        uVar2 = 1;
        local_18 = (ulong)uVar1;
      }
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        uVar2 = (**(code **)(param_1 + 0x10))
                          (param_1,0x85,param_2,(ulong)param_3,0,0,uVar2,&local_18);
        uVar2 = uVar2 & 0xffffffff;
      }
      if (0 < (int)uVar2) {
        uVar1 = (uint)local_18;
        if (param_3 < local_18) {
          uVar1 = 0xffffffff;
        }
        uVar2 = (ulong)uVar1;
      }
LAB_0037e8e4:
      return uVar2 & 0xffffffff;
    }
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x23d,"BIO_gets");
    uVar3 = 0x78;
  }
LAB_0037e964:
  FUN_00379a5c(0x20,uVar3,0);
  return 0xffffffff;
}


// ===== 0037e9d4  FUN_0037e9d4 =====

int FUN_0037e9d4(long param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_48 [2];
  
  if (param_2 == (char *)0x0) {
    FUN_00379868();
    uVar3 = 0x25d;
  }
  else {
    if (param_3 < 1) {
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x261,"BIO_get_line");
      uVar3 = 0x7d;
      goto LAB_0037ea90;
    }
    *param_2 = '\0';
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/bio/bio_lib.c",0x26b,"BIO_get_line");
        uVar3 = 0x78;
        goto LAB_0037ea90;
      }
      pcVar5 = param_2;
      if (param_3 == 1) {
        iVar4 = 0;
      }
      else {
        iVar2 = param_3 + 1;
        do {
          iVar1 = FUN_0037ddb8(param_1,pcVar5,1,local_48);
          iVar4 = local_48[0];
          if (iVar1 < 1) {
            iVar4 = iVar1;
          }
          if (iVar4 < 1) {
            *pcVar5 = '\0';
            goto LAB_0037eb50;
          }
          pcVar6 = pcVar5 + 1;
          if (*pcVar5 == '\n') {
            pcVar5[1] = '\0';
            goto LAB_0037eb7c;
          }
          iVar2 = iVar2 + -1;
          pcVar5 = pcVar6;
        } while (2 < iVar2);
        iVar4 = 0;
        *pcVar6 = '\0';
        if (param_3 != 1) goto LAB_0037eb7c;
      }
LAB_0037eb50:
      iVar2 = FUN_0037e4bc(iVar4,param_1,2,0,0);
      pcVar6 = pcVar5;
      if (iVar2 == 0) {
        return iVar4;
      }
LAB_0037eb7c:
      return (int)pcVar6 - (int)param_2;
    }
    FUN_00379868();
    uVar3 = 0x267;
  }
  FUN_0037995c("crypto/bio/bio_lib.c",uVar3,"BIO_get_line");
  uVar3 = 0xc0102;
LAB_0037ea90:
  FUN_00379a5c(0x20,uVar3,0);
  return -1;
}


// ===== 0037eb98  FUN_0037eb98 =====

undefined8 FUN_0037eb98(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if ((int)param_3 <= (int)param_2) {
    param_2 = param_3;
  }
  iVar2 = param_2 + 1;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_0037e608(param_1,&DAT_001bc0af);
  } while (iVar1 == 1);
  return 0;
}


// ===== 0037ec08  FUN_0037ec08 =====

void FUN_0037ec08(void)

{
  FUN_0037e4bc();
  return;
}


// ===== 0037ec2c  FUN_0037ec2c =====

undefined8 FUN_0037ec2c(void)

{
  FUN_0037e4bc();
  return 0;
}


// ===== 0037ec5c  FUN_0037ec5c =====

long FUN_0037ec5c(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_8;
  
  if (param_1 == 0) {
    return -2;
  }
  local_8 = param_3;
  if (((*(long *)(param_1 + 8) != 0) && (param_2 == 0xe)) &&
     (pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x58), pcVar2 != (code *)0x0)) {
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      lVar1 = (**(code **)(param_1 + 0x10))(param_1,6,&local_8,0,0xe,0,1,0);
      if (lVar1 < 1) {
        return lVar1;
      }
      pcVar2 = *(code **)(*(long *)(param_1 + 8) + 0x58);
    }
    lVar1 = (*pcVar2)(param_1,0xe,local_8);
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      lVar1 = (**(code **)(param_1 + 0x10))(param_1,0x86,&local_8,0,0xe,0,lVar1,0);
    }
    return lVar1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/bio/bio_lib.c",0x2b6,"BIO_callback_ctrl");
  FUN_00379a5c(0x20,0x79,0);
  return -2;
}


// ===== 0037ed58  FUN_0037ed58 =====

ulong FUN_0037ed58(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0037e4bc(param_1,10,0,0);
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}


// ===== 0037ed7c  FUN_0037ed7c =====

ulong FUN_0037ed7c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0037e4bc(param_1,0xd,0,0);
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}


// ===== 0037eda0  FUN_0037eda0 =====

long FUN_0037eda0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    return param_2;
  }
  do {
    lVar2 = lVar1;
    lVar1 = *(long *)(lVar2 + 0x40);
  } while (*(long *)(lVar2 + 0x40) != 0);
  *(long *)(lVar2 + 0x40) = param_2;
  if (param_2 != 0) {
    *(long *)(param_2 + 0x48) = lVar2;
  }
  FUN_0037e4bc(param_1,6,0);
  return param_1;
}


// ===== 0037edf4  FUN_0037edf4 =====

long FUN_0037edf4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1 != 0) {
    plVar4 = (long *)(param_1 + 0x40);
    lVar3 = *plVar4;
    FUN_0037e4bc(param_1,7,0,param_1);
    lVar1 = *(long *)(param_1 + 0x48);
    lVar2 = *plVar4;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x40) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x48) = lVar1;
    }
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    return lVar3;
  }
  return 0;
}


// ===== 0037ee6c  FUN_0037ee6c =====

void FUN_0037ee6c(long param_1,undefined4 *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  lVar3 = param_1;
  while ((lVar2 = param_1, (bVar1 >> 3 & 1) != 0 &&
         (param_1 = *(long *)(lVar2 + 0x40), lVar3 = lVar2, param_1 != 0))) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar3 + 0x2c);
  }
  return;
}


// ===== 0037eea4  FUN_0037eea4 =====

undefined4 FUN_0037eea4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}


// ===== 0037eeac  FUN_0037eeac =====

void FUN_0037eeac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


// ===== 0037eeb4  FUN_0037eeb4 =====

long FUN_0037eeb4(long param_1,uint param_2)

{
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x331,"BIO_find_type");
    FUN_00379a5c(0x20,0xc0102,0);
    return 0;
  }
  if ((param_2 & 0xff) == 0) {
    do {
      if ((*(uint **)(param_1 + 8) != (uint *)0x0) && ((**(uint **)(param_1 + 8) & param_2) != 0)) {
        return param_1;
      }
      param_1 = *(long *)(param_1 + 0x40);
    } while (param_1 != 0);
  }
  else {
    do {
      if ((*(uint **)(param_1 + 8) != (uint *)0x0) && (**(uint **)(param_1 + 8) == param_2)) {
        return param_1;
      }
      param_1 = *(long *)(param_1 + 0x40);
    } while (param_1 != 0);
  }
  return param_1;
}


// ===== 0037ef4c  FUN_0037ef4c =====

long FUN_0037ef4c(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x40);
  }
  return param_1;
}


// ===== 0037ef58  FUN_0037ef58 =====

void FUN_0037ef58(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}


// ===== 0037ef60  FUN_0037ef60 =====

void FUN_0037ef60(long param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  
  if (param_1 != 0) {
    do {
      iVar2 = *(int *)(param_1 + 0x50);
      lVar4 = *(long *)(param_1 + 0x40);
      iVar1 = iVar2 + -1;
      *(int *)(param_1 + 0x50) = iVar1;
      if (iVar1 != 0 && 0 < iVar2) {
        return;
      }
      if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x10))(param_1,1,0,0,0,0,1,0), 0 < iVar2)) {
        if ((*(long *)(param_1 + 8) != 0) &&
           (pcVar3 = *(code **)(*(long *)(param_1 + 8) + 0x50), pcVar3 != (code *)0x0)) {
          (*pcVar3)(param_1);
        }
        FUN_003c525c(0xc,param_1,param_1 + 0x68);
        FUN_003c86b4(param_1,"crypto/bio/bio_lib.c",0x93);
      }
      param_1 = lVar4;
    } while (lVar4 != 0);
  }
  return;
}


// ===== 0037f020  FUN_0037f020 =====

long FUN_0037f020(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar10 = 0;
  lVar9 = 0;
  do {
    lVar5 = FUN_0037da34(0,*(undefined8 *)(param_1 + 8));
    if (lVar5 == 0) {
joined_r0x0037f1e0:
      while( true ) {
        lVar9 = lVar10;
        if (lVar9 == 0) {
          return 0;
        }
        iVar4 = *(int *)(lVar9 + 0x50);
        lVar10 = *(long *)(lVar9 + 0x40);
        iVar3 = iVar4 + -1;
        *(int *)(lVar9 + 0x50) = iVar3;
        if (iVar3 != 0 && 0 < iVar4) break;
        if ((*(code **)(lVar9 + 0x10) == (code *)0x0) ||
           (iVar4 = (**(code **)(lVar9 + 0x10))(lVar9,1,0,0,0,0,1,0), 0 < iVar4)) {
          if ((*(long *)(lVar9 + 8) != 0) &&
             (pcVar8 = *(code **)(*(long *)(lVar9 + 8) + 0x50), pcVar8 != (code *)0x0)) {
            (*pcVar8)(lVar9);
          }
          FUN_003c525c(0xc,lVar9,lVar9 + 0x68);
          FUN_003c86b4(lVar9,"crypto/bio/bio_lib.c",0x93);
        }
      }
      return 0;
    }
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(lVar5 + 0x18) = uVar12;
    *(undefined8 *)(lVar5 + 0x10) = uVar11;
    *(undefined4 *)(lVar5 + 0x28) = uVar1;
    *(undefined4 *)(lVar5 + 0x30) = uVar2;
    lVar6 = FUN_0037e4bc(param_1,0xc,0,lVar5);
    if (lVar6 < 1) {
      iVar4 = *(int *)(lVar5 + 0x50);
      iVar3 = iVar4 + -1;
      *(int *)(lVar5 + 0x50) = iVar3;
      if ((iVar3 == 0 || iVar4 < 1) &&
         ((*(code **)(lVar5 + 0x10) == (code *)0x0 ||
          (iVar4 = (**(code **)(lVar5 + 0x10))(lVar5,1,0,0,0,0,1,0), 0 < iVar4)))) {
        if ((*(long *)(lVar5 + 8) != 0) &&
           (pcVar8 = *(code **)(*(long *)(lVar5 + 8) + 0x50), pcVar8 != (code *)0x0)) {
          (*pcVar8)(lVar5);
        }
LAB_0037f1bc:
        FUN_003c525c(0xc,lVar5,lVar5 + 0x68);
        FUN_003c86b4(lVar5,"crypto/bio/bio_lib.c",0x93);
      }
      goto joined_r0x0037f1e0;
    }
    iVar4 = FUN_003c4ef4(0xc,lVar5 + 0x68,param_1 + 0x68);
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar5 + 0x50);
      iVar3 = iVar4 + -1;
      *(int *)(lVar5 + 0x50) = iVar3;
      if ((iVar3 == 0 || iVar4 < 1) &&
         ((*(code **)(lVar5 + 0x10) == (code *)0x0 ||
          (iVar4 = (**(code **)(lVar5 + 0x10))(lVar5,1,0,0,0,0,1,0), 0 < iVar4)))) {
        if ((*(long *)(lVar5 + 8) != 0) &&
           (pcVar8 = *(code **)(*(long *)(lVar5 + 8) + 0x50), pcVar8 != (code *)0x0)) {
          (*pcVar8)(lVar5);
        }
        goto LAB_0037f1bc;
      }
      goto joined_r0x0037f1e0;
    }
    lVar6 = lVar5;
    if ((lVar10 != 0) && (lVar6 = lVar10, lVar10 = lVar9, lVar9 != 0)) {
      do {
        lVar7 = lVar10;
        lVar10 = *(long *)(lVar7 + 0x40);
      } while (*(long *)(lVar7 + 0x40) != 0);
      *(long *)(lVar7 + 0x40) = lVar5;
      *(long *)(lVar5 + 0x48) = lVar7;
      FUN_0037e4bc(lVar9,6,0);
    }
    param_1 = *(long *)(param_1 + 0x40);
    lVar10 = lVar6;
    lVar9 = lVar5;
    if (param_1 == 0) {
      return lVar6;
    }
  } while( true );
}


// ===== 0037f294  FUN_0037f294 =====

void FUN_0037f294(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x2c);
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) | *(uint *)(*(long *)(param_1 + 0x40) + 0x28) & 0xf;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}


// ===== 0037f2b0  FUN_0037f2b0 =====

void FUN_0037f2b0(long param_1)

{
  FUN_003c5168(param_1 + 0x68);
  return;
}


// ===== 0037f2b8  FUN_0037f2b8 =====

void FUN_0037f2b8(long param_1)

{
  FUN_003c4e94(param_1 + 0x68);
  return;
}


// ===== 0037f2c0  FUN_0037f2c0 =====

long FUN_0037f2c0(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x58);
  }
  return param_1;
}


// ===== 0037f2cc  FUN_0037f2cc =====

long FUN_0037f2cc(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x60);
  }
  return param_1;
}


// ===== 0037f2d8  FUN_0037f2d8 =====

void FUN_0037f2d8(long param_1)

{
  FUN_003c525c(0xc,param_1,param_1 + 0x68);
  return;
}


// ===== 0037f2e8  FUN_0037f2e8 =====

void FUN_0037f2e8(void)

{
  return;
}


// ===== 0037f2ec  FUN_0037f2ec =====

undefined8 FUN_0037f2ec(undefined8 param_1,long param_2,uint param_3)

{
  time_t tVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  tVar1 = time((time_t *)0x0);
  param_2 = param_2 - tVar1;
  if (-1 < param_2) {
    if (param_2 == 0) {
      if (999 < param_3) {
        param_3 = 1000;
      }
      FUN_003d5104(param_3);
      return 1;
    }
    if ((ulong)(param_2 * 1000) < (ulong)param_3) {
      param_3 = (int)param_2 * 1000;
    }
    FUN_003d5104(param_3);
    return 1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/bio/bio_lib.c",0x3eb,"BIO_wait");
  FUN_00379a5c(0x20,0x69,0);
  return 0;
}


// ===== 0037f3ac  FUN_0037f3ac =====

undefined8 FUN_0037f3ac(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  time_t tVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((int)param_2 < 1) {
    lVar9 = 0;
  }
  else {
    tVar4 = time((time_t *)0x0);
    lVar9 = tVar4 + (ulong)param_2;
  }
  if (param_1 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/bio/bio_lib.c",0x3fe,"BIO_do_connect_retry");
    uVar5 = 0xc0102;
LAB_0037f480:
    FUN_00379a5c(0x20,uVar5,0);
    return 0xffffffff;
  }
  uVar6 = 100;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  uVar8 = (ulong)uVar6;
  FUN_0037e4bc(param_1,0x66,0 < (int)param_2,0);
  FUN_0037f6d4();
  uVar5 = FUN_0037e4bc(param_1,0x65,0,0);
  if ((int)uVar5 < 1) {
    if (999 < uVar6) {
      uVar6 = 1000;
    }
    if ((int)param_2 < 0) {
      uVar3 = FUN_0037a744();
      if (((int)uVar3 < 0) || ((uVar3 & 0xff800000) != 0x10000000)) {
LAB_0037f658:
        FUN_0037f8c4();
      }
      else {
        uVar6 = uVar3 & 0x7fffff;
        if (((uVar6 == 0x67) || (uVar6 == 0x80002)) || (uVar6 == 0x6e)) {
          FUN_0037e4bc(param_1,1,0,0);
        }
        FUN_0037f8c4();
      }
      if (uVar3 != 0) {
        return 0xffffffff;
      }
      FUN_00379868();
      FUN_0037995c("crypto/bio/bio_lib.c",0x42f,"BIO_do_connect_retry");
      uVar5 = 0x67;
      goto LAB_0037f480;
    }
    if (lVar9 == 0) {
      do {
        uVar3 = FUN_0037a744();
        if ((((int)uVar3 < 0) || ((uVar3 & 0xff800000) != 0x10000000)) ||
           ((uVar6 = uVar3 & 0x7fffff, uVar6 != 0x67 && ((uVar6 != 0x80002 && (uVar6 != 0x6e)))))) {
          if ((*(uint *)(param_1 + 0x28) >> 3 & 1) == 0) goto LAB_0037f658;
        }
        else {
          FUN_0037e4bc(param_1,1,0,0);
        }
        FUN_0037f71c();
        FUN_0037f6d4();
        uVar5 = FUN_0037e4bc(param_1,0x65,0,0);
      } while ((int)uVar5 < 1);
    }
    else {
      do {
        uVar3 = FUN_0037a744();
        if ((((int)uVar3 < 0) || ((uVar3 & 0xff800000) != 0x10000000)) ||
           ((uVar1 = uVar3 & 0x7fffff, uVar1 != 0x67 && ((uVar1 != 0x80002 && (uVar1 != 0x6e)))))) {
          if ((*(uint *)(param_1 + 0x28) >> 3 & 1) == 0) goto LAB_0037f658;
        }
        else {
          FUN_0037e4bc(param_1,1,0,0);
        }
        FUN_0037f71c();
        tVar4 = time((time_t *)0x0);
        lVar2 = lVar9 - tVar4;
        if (lVar2 < 0) {
          FUN_00379868();
          FUN_0037995c("crypto/bio/bio_lib.c",0x429,"BIO_do_connect_retry");
          FUN_00379a5c(0x20,0x93,0);
          return 0;
        }
        uVar7 = (ulong)uVar6;
        if ((lVar2 != 0) && (uVar7 = uVar8, (ulong)(lVar2 * 1000) < uVar8)) {
          uVar7 = (ulong)(uint)((int)lVar2 * 1000);
        }
        FUN_003d5104(uVar7);
        FUN_0037f6d4();
        uVar5 = FUN_0037e4bc(param_1,0x65,0,0);
      } while ((int)uVar5 < 1);
    }
  }
  FUN_0037f8c4();
  return uVar5;
}


// ===== 0037f6d4  FUN_0037f6d4 =====

long FUN_0037f6d4(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_0037a18c();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 900) == *(int *)(lVar2 + 0x380)) {
      return 0;
    }
    lVar1 = lVar2 + (long)*(int *)(lVar2 + 0x380) * 4;
    lVar2 = 1;
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
  }
  return lVar2;
}


// ===== 0037f71c  FUN_0037f71c =====

long FUN_0037f71c(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar4 = FUN_0037a18c();
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x380);
    if (*(int *)(lVar4 + 900) != iVar6) {
      lVar1 = lVar4 + 0x40;
      do {
        iVar3 = *(int *)(lVar1 + (long)iVar6 * 4);
        lVar7 = (long)iVar6;
        if (iVar3 != 0) {
          *(int *)(lVar1 + lVar7 * 4) = iVar3 + -1;
          return 1;
        }
        lVar10 = lVar7 * 8;
        if ((*(uint *)(lVar4 + 0x200 + lVar7 * 4) & 1) == 0) {
          uVar8 = 0;
          *(undefined8 *)(lVar4 + 0x100 + lVar10) = 0;
          *(undefined8 *)(lVar4 + 0x180 + lVar10) = 0;
LAB_0037f7a0:
          *(undefined4 *)(lVar4 + 0x200 + lVar7 * 4) = uVar8;
        }
        else {
          puVar9 = *(undefined1 **)(lVar4 + 0x100 + lVar7 * 8);
          if (puVar9 != (undefined1 *)0x0) {
            *puVar9 = 0;
            uVar8 = 1;
            goto LAB_0037f7a0;
          }
        }
        lVar7 = lVar7 * 4;
        uVar5 = *(undefined8 *)(lVar4 + 0x240 + lVar10);
        *(undefined8 *)(lVar4 + 0x80 + lVar10) = 0;
        *(undefined4 *)(lVar1 + lVar7) = 0;
        *(undefined4 *)(lVar4 + lVar7) = 0;
        *(undefined4 *)(lVar4 + 0x2c0 + lVar7) = 0xffffffff;
        FUN_003c86b4(uVar5,"crypto/err/err_local.h",0x5b);
        *(undefined8 *)(lVar4 + 0x240 + lVar10) = 0;
        FUN_003c86b4(*(undefined8 *)(lVar4 + 0x300 + lVar10),"crypto/err/err_local.h",0x5d);
        iVar3 = *(int *)(lVar4 + 0x380);
        iVar2 = *(int *)(lVar4 + 900);
        *(undefined8 *)(lVar4 + 0x300 + lVar10) = 0;
        iVar6 = iVar3 + -1;
        if (iVar3 < 1) {
          iVar6 = 0xf;
        }
        *(int *)(lVar4 + 0x380) = iVar6;
      } while (iVar2 != iVar6);
    }
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 0037f860  FUN_0037f860 =====

ulong FUN_0037f860(void)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  uVar5 = FUN_0037a18c();
  if (uVar5 != 0) {
    piVar1 = (int *)(uVar5 + 0x380);
    piVar2 = (int *)(uVar5 + 900);
    if (*piVar2 == *piVar1) {
      return 0;
    }
    lVar3 = uVar5 + 0x40;
    uVar5 = 0;
    iVar6 = *piVar1;
    do {
      if (*(int *)(lVar3 + (long)iVar6 * 4) != 0) {
        return uVar5;
      }
      iVar4 = iVar6 + -1;
      uVar5 = (ulong)((int)uVar5 + 1);
      if (iVar6 < 1) {
        iVar4 = 0xf;
      }
      iVar6 = iVar4;
    } while (*piVar2 != iVar4);
  }
  return uVar5;
}


// ===== 0037f8c4  FUN_0037f8c4 =====

long FUN_0037f8c4(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = FUN_0037a18c();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 900) == *(int *)(lVar3 + 0x380)) {
      return 0;
    }
    lVar1 = lVar3 + 0x40;
    iVar4 = *(int *)(lVar3 + 0x380);
    while( true ) {
      iVar2 = *(int *)(lVar1 + (long)iVar4 * 4);
      if (iVar2 != 0) break;
      iVar2 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar2 = 0xf;
      }
      iVar4 = iVar2;
      if (*(int *)(lVar3 + 900) == iVar2) {
        return 0;
      }
    }
    lVar3 = 1;
    *(int *)(lVar1 + (long)iVar4 * 4) = iVar2 + -1;
  }
  return lVar3;
}


// ===== 0037f938  FUN_0037f938 =====

undefined8 FUN_0037f938(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_0037f9fc:
    lVar4 = param_1[0xf];
    uVar3 = 0x3f;
  }
  else {
    if (*(long *)(lVar4 + 0x78) == 0) {
      if ((*(code **)(lVar4 + 0x30) != (code *)0x0) &&
         (uVar3 = (**(code **)(lVar4 + 0x30))(param_1), (int)uVar3 == 0)) {
        return uVar3;
      }
      if ((param_1[0xf] != 0) && (*(int *)(*param_1 + 0x38) != 0)) {
        FUN_003c89b8();
      }
      goto LAB_0037f9fc;
    }
    if (param_1[0x15] != 0) {
      if (*(code **)(lVar4 + 0xb8) != (code *)0x0) {
        (**(code **)(lVar4 + 0xb8))();
      }
      param_1[0x15] = 0;
    }
    lVar4 = param_1[0x16];
    if (((lVar4 == 0) || (*(int *)(lVar4 + 0x18) != 0)) ||
       (iVar1 = *(int *)(lVar4 + 0x80), iVar2 = iVar1 + -1, *(int *)(lVar4 + 0x80) = iVar2,
       iVar2 != 0 && 0 < iVar1)) goto LAB_0037fa10;
    FUN_003c86b4(*(undefined8 *)(lVar4 + 0x68),"crypto/evp/evp_enc.c",0x6c7);
    FUN_003d27b0(*(undefined8 *)(lVar4 + 0x78));
    uVar3 = 0x6ca;
  }
  FUN_003c86b4(lVar4,"crypto/evp/evp_enc.c",uVar3);
LAB_0037fa10:
  param_1[0x16] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  param_1[1] = 0;
  *param_1 = 0;
  return 1;
}


// ===== 0037fa4c  FUN_0037fa4c =====

void FUN_0037fa4c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0x80), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x80) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x68),"crypto/evp/evp_enc.c",0x6c7);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x78));
    FUN_003c86b4(param_1,"crypto/evp/evp_enc.c",0x6ca);
    return;
  }
  return;
}


// ===== 0037fab8  FUN_0037fab8 =====

void FUN_0037fab8(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0xb8,"crypto/evp/evp_enc.c",0x4c);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x6c) = 0xffffffff;
  }
  return;
}


// ===== 0037fae8  FUN_0037fae8 =====

void FUN_0037fae8(long param_1)

{
  if (param_1 != 0) {
    FUN_0037f938();
    FUN_003c86b4(param_1,"crypto/evp/evp_enc.c",0x59);
    return;
  }
  return;
}


// ===== 0037fb20  FUN_0037fb20 =====

void FUN_0037fb20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,param_5,param_6);
  return;
}


// ===== 0037fb38  FUN_0037fb38 =====

/* WARNING: Type propagation algorithm not settling */

int * FUN_0037fb38(long *param_1,int *param_2,long param_3,long param_4,long *param_5,int param_6,
                  long param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *__src;
  long lVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  size_t __n;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_54;
  
  puVar14 = &local_d0;
  if (param_6 == -1) {
    uVar10 = *(uint *)(param_1 + 2);
    if (param_2 != (int *)0x0) goto LAB_0037fb80;
LAB_0037fb9c:
    piVar4 = (int *)*param_1;
    if (piVar4 == (int *)0x0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x75,"evp_cipher_init_internal");
      uVar8 = 0x83;
      goto LAB_00380328;
    }
    if ((param_3 != 0 || param_1[1] != 0) || (piVar4[6] == 2)) goto LAB_0037fbd8;
    lVar12 = *(long *)(piVar4 + 0x1e);
    param_2 = piVar4;
joined_r0x0037fbc0:
    if (lVar12 == 0) {
      if (*param_2 == 0) {
        puVar5 = &DAT_001b77b8;
      }
      else {
        puVar5 = (undefined *)FUN_003dce44();
      }
      param_2 = (int *)FUN_00382990(0,2,puVar5,&DAT_001c717f,FUN_00382404,FUN_00382844,FUN_00382868)
      ;
      if (param_2 == (int *)0x0) {
        return (int *)0x0;
      }
      lVar12 = param_1[0x16];
      if (((lVar12 != 0) && (*(int *)(lVar12 + 0x18) == 0)) &&
         (iVar2 = *(int *)(lVar12 + 0x80), iVar1 = iVar2 + -1, *(int *)(lVar12 + 0x80) = iVar1,
         iVar1 == 0 || iVar2 < 1)) {
        FUN_003c86b4(*(undefined8 *)(lVar12 + 0x68),"crypto/evp/evp_enc.c",0x6c7);
        FUN_003d27b0(*(undefined8 *)(lVar12 + 0x78));
        FUN_003c86b4(lVar12,"crypto/evp/evp_enc.c",0x6ca);
      }
      param_1[0x16] = (long)param_2;
      if (*(long *)(param_2 + 0x1e) == 0) {
        FUN_00379868();
        uVar8 = 0xcc;
        goto LAB_003802b4;
      }
    }
    piVar4 = (int *)param_1[0x16];
    if (param_2 != piVar4) {
      if (param_2[6] == 0) {
        param_2[0x20] = param_2[0x20] + 1;
      }
      if (((piVar4 != (int *)0x0) && (piVar4[6] == 0)) &&
         (iVar2 = piVar4[0x20], iVar1 = iVar2 + -1, piVar4[0x20] = iVar1, iVar1 == 0 || iVar2 < 1))
      {
        FUN_003c86b4(*(undefined8 *)(piVar4 + 0x1a),"crypto/evp/evp_enc.c",0x6c7);
        FUN_003d27b0(*(undefined8 *)(piVar4 + 0x1e));
        FUN_003c86b4(piVar4,"crypto/evp/evp_enc.c",0x6ca);
      }
      param_1[0x16] = (long)param_2;
    }
    *param_1 = (long)param_2;
    if (param_1[0x15] == 0) {
      pcVar13 = *(code **)(param_2 + 0x22);
      FUN_003d3bf8(*(undefined8 *)(param_2 + 0x1e));
      lVar12 = (*pcVar13)();
      param_1[0x15] = lVar12;
      if (lVar12 != 0) goto LAB_0038009c;
      FUN_00379868();
      uVar8 = 0xde;
    }
    else {
LAB_0038009c:
      if (((uint)param_1[0xe] >> 8 & 1) != 0) {
        local_54 = 0;
        param_1[0xe] = param_1[0xe];
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        local_88 = 0;
        uStack_90 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        if ((*param_1 == 0) || (*(long *)(*param_1 + 0x78) != 0)) {
          FUN_003cbb64(&local_d0,"padding",&local_54);
          piVar4 = (int *)FUN_0039f148(*param_1,param_1[0x15],&local_d0);
          if ((int)piVar4 == 0) {
            return piVar4;
          }
        }
      }
      if (param_7 != 0) {
        local_60 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        local_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        puVar6 = (undefined8 *)FUN_003cb19c(param_7,"keylen");
        if (puVar6 != (undefined8 *)0x0) {
          uStack_c8 = puVar6[1];
          local_d0 = *puVar6;
          uStack_b8 = puVar6[3];
          local_c0 = puVar6[2];
          puVar14 = &uStack_a8;
          local_b0 = puVar6[4];
        }
        puVar7 = (undefined8 *)FUN_003cb19c(param_7,"ivlen");
        puVar6 = puVar14;
        if (puVar7 != (undefined8 *)0x0) {
          uVar18 = puVar7[1];
          uVar17 = *puVar7;
          uVar16 = puVar7[3];
          uVar8 = puVar7[2];
          puVar14[4] = puVar7[4];
          puVar6 = puVar14 + 5;
          puVar14[1] = uVar18;
          *puVar14 = uVar17;
          puVar14[3] = uVar16;
          puVar14[2] = uVar8;
        }
        if (puVar6 != &local_d0) {
          if ((*param_1 != 0) && (pcVar13 = *(code **)(*param_1 + 0xd8), pcVar13 != (code *)0x0)) {
            iVar2 = (*pcVar13)(param_1[0x15],&local_d0);
            if (iVar2 < 1) {
              if (iVar2 != 0) goto LAB_00380220;
            }
            else {
              lVar12 = FUN_003cb19c(&local_d0,"keylen");
              if ((lVar12 == 0) || (iVar2 = thunk_FUN_003cb238(lVar12,param_1 + 0xd), iVar2 != 0)) {
                lVar12 = FUN_003cb19c(&local_d0,"ivlen");
                if ((lVar12 == 0) ||
                   (iVar2 = thunk_FUN_003cb238(lVar12,(long)param_1 + 0x6c), iVar2 != 0))
                goto LAB_00380220;
                *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
              }
              else {
                *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
              }
            }
          }
          FUN_00379868();
          FUN_0037995c("crypto/evp/evp_enc.c",0x109,"evp_cipher_init_internal");
          uVar8 = 0xdd;
          goto LAB_00380328;
        }
      }
LAB_00380220:
      if (uVar10 == 0) {
        pcVar13 = *(code **)(*param_1 + 0x98);
        if (pcVar13 != (code *)0x0) {
          lVar12 = param_1[0x15];
          if (param_4 == 0) {
            lVar15 = 0;
          }
          else {
            iVar2 = FUN_003897ac(param_1);
            lVar15 = (long)iVar2;
          }
          goto joined_r0x003802c8;
        }
        FUN_00379868();
        uVar8 = 0x121;
      }
      else {
        pcVar13 = *(code **)(*param_1 + 0x90);
        if (pcVar13 != (code *)0x0) {
          lVar12 = param_1[0x15];
          if (param_4 == 0) {
            lVar15 = 0;
          }
          else {
            iVar2 = FUN_003897ac(param_1);
            lVar15 = (long)iVar2;
          }
joined_r0x003802c8:
          if (param_5 == (long *)0x0) {
            lVar9 = 0;
          }
          else {
            iVar2 = FUN_00388c08(param_1);
            lVar9 = (long)iVar2;
          }
          piVar4 = (int *)(*pcVar13)(lVar12,param_4,lVar15,param_5,lVar9,param_7);
          return piVar4;
        }
        FUN_00379868();
        uVar8 = 0x112;
      }
    }
LAB_003802b4:
    FUN_0037995c("crypto/evp/evp_enc.c",uVar8,"evp_cipher_init_internal");
    uVar8 = 0x86;
    goto LAB_00380328;
  }
  uVar10 = (uint)(param_6 != 0);
  *(uint *)(param_1 + 2) = (uint)(param_6 != 0);
  if (param_2 == (int *)0x0) goto LAB_0037fb9c;
LAB_0037fb80:
  if (param_3 == 0 && param_1[1] == 0) {
    piVar4 = (int *)*param_1;
    if (param_2[6] == 2) goto LAB_0037fbd8;
    if (piVar4 == (int *)0x0) {
      lVar12 = *(long *)(param_2 + 0x1e);
    }
    else {
      if (*(code **)(piVar4 + 0xc) != (code *)0x0) {
        piVar4 = (int *)(**(code **)(piVar4 + 0xc))(param_1);
        if ((int)piVar4 == 0) {
          return piVar4;
        }
        piVar4 = (int *)*param_1;
      }
      FUN_003c893c(param_1[0xf],(long)piVar4[0xe],"crypto/evp/evp_enc.c",0xa4);
      param_1[0xf] = 0;
      if (*param_1 == 0) {
        lVar12 = *(long *)(param_2 + 0x1e);
      }
      else {
        lVar12 = param_1[0xe];
        FUN_0037f938(param_1);
        *(uint *)(param_1 + 2) = uVar10;
        param_1[0xe] = lVar12;
        lVar12 = *(long *)(param_2 + 0x1e);
      }
    }
    goto joined_r0x0037fbc0;
  }
  piVar4 = (int *)*param_1;
LAB_0037fbd8:
  piVar11 = (int *)param_1[0x16];
  if (piVar4 == piVar11) {
    piVar4 = (int *)0x0;
    *param_1 = 0;
  }
  if (((piVar11 != (int *)0x0) && (piVar11[6] == 0)) &&
     (iVar2 = piVar11[0x20], iVar1 = iVar2 + -1, piVar11[0x20] = iVar1, iVar1 == 0 || iVar2 < 1)) {
    FUN_003c86b4(*(undefined8 *)(piVar11 + 0x1a),"crypto/evp/evp_enc.c",0x6c7);
    FUN_003d27b0(*(undefined8 *)(piVar11 + 0x1e));
    FUN_003c86b4(piVar11,"crypto/evp/evp_enc.c",0x6ca);
    piVar4 = (int *)*param_1;
  }
  param_1[0x16] = 0;
  if (param_2 == (int *)0x0) {
LAB_0037fd34:
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  else {
    if (piVar4 != (int *)0x0) {
      lVar12 = param_1[0xe];
      FUN_0037f938(param_1);
      *(uint *)(param_1 + 2) = uVar10;
      param_1[0xe] = lVar12;
    }
    *param_1 = (long)param_2;
    if (param_2[0xe] == 0) {
      param_1[0xf] = 0;
      piVar4 = param_2;
    }
    else {
      lVar12 = FUN_003c8474((long)param_2[0xe],"crypto/evp/evp_enc.c",0x162);
      param_1[0xf] = lVar12;
      if (lVar12 == 0) {
        *param_1 = 0;
        return (int *)0x0;
      }
      piVar4 = (int *)*param_1;
    }
    *(int *)(param_1 + 0xd) = param_2[2];
    param_1[0xe] = param_1[0xe] & 1;
    if ((*(byte *)(piVar4 + 4) >> 6 & 1) != 0) {
      iVar2 = FUN_00381710(param_1,0,0,0);
      if (iVar2 < 1) {
        *param_1 = 0;
        FUN_00379868();
        uVar8 = 0x170;
        goto LAB_003802b4;
      }
      piVar4 = (int *)*param_1;
      goto LAB_0037fd34;
    }
  }
  if ((0x10 < (uint)piVar4[1]) || ((1 << (ulong)(piVar4[1] & 0x1f) & 0x10102U) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                 ,"crypto/evp/evp_enc.c",0x17e);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    FUN_0038944c(param_1);
    iVar2 = FUN_00388e4c();
    if (iVar2 == 0x10002) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x182,"evp_cipher_init_internal");
      uVar8 = 0xaa;
      goto LAB_00380328;
    }
  }
  FUN_0038944c(param_1);
  uVar3 = FUN_00388e44();
  if ((uVar3 >> 4 & 1) != 0) goto LAB_0037fef0;
  FUN_0038944c(param_1);
  uVar3 = FUN_00388e4c();
  if ((int)uVar3 < 3) {
    if (uVar3 < 2) goto LAB_0037fef0;
    if (uVar3 != 2) {
      return (int *)0x0;
    }
LAB_0037fe20:
    uVar3 = FUN_00388c08(param_1);
    if (0x10 < uVar3) {
      FUN_00379868();
      uVar8 = 0x197;
LAB_0037fe48:
      FUN_0037995c("crypto/evp/evp_enc.c",uVar8,"evp_cipher_init_internal");
      uVar8 = 0xc2;
LAB_00380328:
      FUN_00379a5c(6,uVar8,0);
      return (int *)0x0;
    }
    __n = (size_t)uVar3;
    if (param_5 != (long *)0x0) {
      memcpy(param_1 + 3,param_5,__n);
    }
    __src = param_1 + 3;
  }
  else {
    if (uVar3 - 3 < 2) {
      *(undefined4 *)(param_1 + 0xb) = 0;
      goto LAB_0037fe20;
    }
    if (uVar3 != 5) {
      return (int *)0x0;
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_5 == (long *)0x0) goto LAB_0037fef0;
    uVar3 = FUN_00388c08(param_1);
    if (uVar3 - 0x11 < 0xfffffff0) {
      FUN_00379868();
      uVar8 = 0x1a5;
      goto LAB_0037fe48;
    }
    __n = (size_t)uVar3;
    __src = param_5;
  }
  memcpy(param_1 + 5,__src,__n);
LAB_0037fef0:
  lVar12 = *param_1;
  if ((param_4 != 0) || ((*(byte *)(lVar12 + 0x10) >> 5 & 1) != 0)) {
    piVar4 = (int *)(**(code **)(lVar12 + 0x20))(param_1,param_4,param_5,uVar10);
    if ((int)piVar4 == 0) {
      return piVar4;
    }
    lVar12 = *param_1;
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)((long)param_1 + 0x84) = *(int *)(lVar12 + 4) + -1;
  return (int *)0x1;
}


// ===== 00380368  FUN_00380368 =====

void FUN_00380368(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  if (param_2 != 0) {
    FUN_0037f938();
  }
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,param_5,0);
  return;
}


// ===== 003803c8  FUN_003803c8 =====

void FUN_003803c8(void)

{
  FUN_0037fb38();
  return;
}


// ===== 003803d0  FUN_003803d0 =====

void FUN_003803d0(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_003803e0();
    return;
  }
  FUN_00380550();
  return;
}


// ===== 003803e0  FUN_003803e0 =====

undefined8
FUN_003803e0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_8;
  
  if (param_3 == (undefined4 *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x29c,"EVP_EncryptUpdate");
    uVar3 = 0xc0102;
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x2a2,"EVP_EncryptUpdate");
      uVar3 = 0x94;
    }
    else {
      lVar4 = *param_1;
      if (lVar4 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x2a7,"EVP_EncryptUpdate");
        uVar3 = 0x83;
      }
      else {
        if (*(long *)(lVar4 + 0x78) == 0) {
          uVar3 = FUN_00381124(param_1,param_2,param_3,param_4);
          return uVar3;
        }
        if ((*(code **)(lVar4 + 0xa0) == (code *)0x0) ||
           (uVar2 = *(uint *)(lVar4 + 4), (int)uVar2 < 1)) {
          FUN_00379868();
          uVar3 = 0x2b1;
        }
        else {
          uVar1 = 0;
          if (uVar2 != 1) {
            uVar1 = uVar2;
          }
          uVar3 = (**(code **)(lVar4 + 0xa0))
                            (param_1[0x15],param_2,&local_8,(ulong)uVar1 + (long)param_5,param_4);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          if (local_8 >> 0x1f == 0) {
            *param_3 = (int)local_8;
            return uVar3;
          }
          FUN_00379868();
          uVar3 = 699;
        }
        FUN_0037995c("crypto/evp/evp_enc.c",uVar3,"EVP_EncryptUpdate");
        uVar3 = 0xbd;
      }
    }
  }
  FUN_00379a5c(6,uVar3,0);
  return 0;
}


// ===== 00380550  FUN_00380550 =====

ulong FUN_00380550(long *param_1,void *param_2,int *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong local_38;
  
  if (param_3 == (int *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x331,"EVP_DecryptUpdate");
    uVar6 = 0xc0102;
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      lVar7 = *param_1;
      if (lVar7 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x33c,"EVP_DecryptUpdate");
        uVar6 = 0x83;
      }
      else {
        lVar8 = (long)(int)param_5;
        if (*(long *)(lVar7 + 0x78) == 0) {
          uVar1 = *(uint *)(lVar7 + 4);
          uVar4 = (ulong)uVar1;
          iVar2 = FUN_00389f54(param_1,0x2000);
          uVar3 = param_5;
          if (iVar2 != 0) {
            uVar3 = FUN_003814ac(param_5);
          }
          if ((*(byte *)(*param_1 + 0x12) >> 4 & 1) == 0) {
            if ((int)param_5 < 1) {
              *param_3 = 0;
              return (ulong)(param_5 == 0);
            }
            if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
              uVar4 = FUN_00381124(param_1,param_2,param_3,param_4,param_5);
              return uVar4;
            }
            if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_003c4750("assertion failed: b <= sizeof(ctx->final)","crypto/evp/evp_enc.c",0x375)
              ;
            }
            lVar7 = param_1[0x10];
            if ((int)lVar7 == 0) {
LAB_003808d0:
              uVar5 = FUN_00381124(param_1,param_2,param_3,param_4,param_5);
              if ((int)uVar5 == 0) {
                return uVar5;
              }
              if ((uVar1 < 2) || (*(int *)((long)param_1 + 0x14) != 0)) {
                *(undefined4 *)(param_1 + 0x10) = 0;
              }
              else {
                *param_3 = *param_3 - uVar1;
                *(undefined4 *)(param_1 + 0x10) = 1;
                memcpy(param_1 + 0x11,(void *)((long)param_2 + (long)*param_3),uVar4);
              }
              if ((int)lVar7 == 0) {
                return 1;
              }
              *param_3 = *param_3 + uVar1;
              return 1;
            }
            if (param_2 != param_4) {
              if ((uVar1 == 0) ||
                 (uVar4 <= (ulong)((long)param_2 - (long)param_4) &&
                  (ulong)((long)param_2 - (long)param_4) <= -uVar4)) {
                if ((uVar1 ^ 0x7fffffff) < (-uVar1 & param_5)) {
                  FUN_00379868();
                  FUN_0037995c("crypto/evp/evp_enc.c",0x388,"EVP_DecryptUpdate");
                  uVar6 = 0xca;
                  goto LAB_00380618;
                }
                memcpy(param_2,param_1 + 0x11,uVar4);
                param_2 = (void *)((long)param_2 + uVar4);
                goto LAB_003808d0;
              }
            }
            FUN_00379868();
            uVar6 = 0x37b;
          }
          else {
            if (uVar1 != 1) {
LAB_003807d8:
              iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,lVar8);
              if (-1 < iVar2) {
                *param_3 = iVar2;
                return 1;
              }
              *param_3 = 0;
              return 0;
            }
            if (((param_2 == param_4) || ((int)uVar3 < 1)) ||
               ((ulong)(long)(int)uVar3 <= (ulong)((long)param_2 - (long)param_4) &&
                (ulong)((long)param_2 - (long)param_4) <= (ulong)-(long)(int)uVar3))
            goto LAB_003807d8;
            FUN_00379868();
            uVar6 = 0x360;
          }
          FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptUpdate");
          uVar6 = 0xa2;
        }
        else {
          uVar1 = FUN_0038936c(param_1);
          if ((*(code **)(*param_1 + 0xa0) == (code *)0x0) || ((int)uVar1 < 1)) {
            FUN_00379868();
            uVar6 = 0x345;
          }
          else {
            uVar3 = 0;
            if (uVar1 != 1) {
              uVar3 = uVar1;
            }
            uVar4 = (**(code **)(*param_1 + 0xa0))
                              (param_1[0x15],param_2,&local_38,(ulong)uVar3 + lVar8,param_4,lVar8);
            if ((int)uVar4 == 0) {
              return uVar4;
            }
            if (local_38 >> 0x1f == 0) {
              *param_3 = (int)local_38;
              return uVar4;
            }
            FUN_00379868();
            uVar6 = 0x34e;
          }
          FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptUpdate");
          uVar6 = 0xbd;
        }
      }
    }
    else {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x337,"EVP_DecryptUpdate");
      uVar6 = 0x94;
    }
  }
LAB_00380618:
  FUN_00379a5c(6,uVar6,0);
  return 0;
}


// ===== 0038095c  FUN_0038095c =====

void FUN_0038095c(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0038096c();
    return;
  }
  FUN_00380c1c();
  return;
}


// ===== 0038096c  FUN_0038096c =====

undefined8 FUN_0038096c(long *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_28;
  
  if (param_3 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x2da,"EVP_EncryptFinal_ex");
    uVar5 = 0xc0102;
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x2e0,"EVP_EncryptFinal_ex");
      uVar5 = 0x94;
    }
    else {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x2e5,"EVP_EncryptFinal_ex");
        uVar5 = 0x83;
      }
      else if (*(long *)(lVar6 + 0x78) == 0) {
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
          uVar4 = (**(code **)(lVar6 + 0x28))(param_1,param_2,0,0);
          if ((int)uVar4 < 0) {
            return 0;
          }
          *param_3 = uVar4;
          return 1;
        }
        uVar4 = *(uint *)(lVar6 + 4);
        if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: b <= sizeof(ctx->buf)","crypto/evp/evp_enc.c",0x30c);
        }
        if (uVar4 == 1) {
          return 1;
        }
        uVar2 = *(uint *)((long)param_1 + 0x14);
        if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
          if (uVar2 < uVar4) {
            memset((void *)((long)param_1 + (ulong)uVar2 + 0x38),uVar4 - uVar2,
                   (ulong)(uVar4 + ~uVar2) + 1);
          }
          uVar5 = (**(code **)(lVar6 + 0x28))(param_1,param_2,param_1 + 7,uVar4);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          *param_3 = uVar4;
          return uVar5;
        }
        if (uVar2 == 0) {
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x314,"EVP_EncryptFinal_ex");
        uVar5 = 0x8a;
      }
      else {
        iVar3 = FUN_0038936c();
        if ((iVar3 < 1) || (*(code **)(*param_1 + 0xa8) == (code *)0x0)) {
          FUN_00379868();
          uVar5 = 0x2ee;
        }
        else {
          iVar1 = 0;
          if (iVar3 != 1) {
            iVar1 = iVar3;
          }
          uVar5 = (**(code **)(*param_1 + 0xa8))(param_1[0x15],param_2,&local_28,iVar1);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (local_28 >> 0x1f == 0) {
            *param_3 = (uint)local_28;
            return uVar5;
          }
          FUN_00379868();
          uVar5 = 0x2f7;
        }
        FUN_0037995c("crypto/evp/evp_enc.c",uVar5,"EVP_EncryptFinal_ex");
        uVar5 = 0xbc;
      }
    }
  }
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 00380c1c  FUN_00380c1c =====

undefined8 FUN_00380c1c(long *param_1,long param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong local_18;
  
  if (param_3 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3b7,"EVP_DecryptFinal_ex");
    uVar6 = 0xc0102;
    goto LAB_00380c8c;
  }
  *param_3 = 0;
  if ((int)param_1[2] != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3bd,"EVP_DecryptFinal_ex");
    uVar6 = 0x94;
    goto LAB_00380c8c;
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3c2,"EVP_DecryptFinal_ex");
    uVar6 = 0x83;
    goto LAB_00380c8c;
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    iVar4 = FUN_0038936c();
    if ((iVar4 < 1) || (*(code **)(*param_1 + 0xa8) == (code *)0x0)) {
      FUN_00379868();
      uVar6 = 0x3cc;
    }
    else {
      iVar1 = 0;
      if (iVar4 != 1) {
        iVar1 = iVar4;
      }
      uVar6 = (**(code **)(*param_1 + 0xa8))(param_1[0x15],param_2,&local_18,iVar1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if (local_18 >> 0x1f == 0) {
        *param_3 = (uint)local_18;
        return uVar6;
      }
      FUN_00379868();
      uVar6 = 0x3d5;
    }
    FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptFinal_ex");
    uVar6 = 0xbc;
    goto LAB_00380c8c;
  }
  if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
    uVar5 = (**(code **)(lVar8 + 0x28))(param_1,param_2,0,0);
    if (-1 < (int)uVar5) {
      *param_3 = uVar5;
      return 1;
    }
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3ed,"EVP_DecryptFinal_ex");
    uVar6 = 0x8a;
    goto LAB_00380c8c;
  }
  uVar5 = *(uint *)(lVar8 + 4);
  if (uVar5 < 2) {
    uVar7 = 0;
    goto LAB_00380e50;
  }
  if ((*(int *)((long)param_1 + 0x14) != 0) || ((int)param_1[0x10] == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3f5,"EVP_DecryptFinal_ex");
    uVar6 = 0x6d;
    goto LAB_00380c8c;
  }
  if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: b <= sizeof(ctx->final)","crypto/evp/evp_enc.c",0x3f8);
  }
  uVar14 = uVar5 - 1;
  bVar2 = *(byte *)((long)param_1 + (ulong)uVar14 + 0x88);
  uVar16 = (uint)bVar2;
  uVar17 = (uint)bVar2;
  if (uVar17 != 0) {
    uVar7 = uVar5 - uVar17;
    uVar9 = (ulong)uVar7;
    if (uVar17 <= uVar5) {
      do {
        if (*(byte *)((long)param_1 + (ulong)uVar14 + 0x88) != bVar2) {
          FUN_00379868();
          uVar6 = 0x405;
          goto LAB_00380f2c;
        }
        uVar16 = uVar16 - 1;
        uVar14 = uVar14 - 1;
      } while (uVar16 != 0);
      if ((int)uVar7 < 1) goto LAB_00380e50;
      if ((uVar7 < 8) || ((param_2 - (long)param_1) - 0x88U < 0x20)) {
        uVar12 = 0;
      }
      else {
        if (uVar7 < 0x20) {
          uVar13 = 0;
        }
        else {
          uVar12 = uVar9 & 0x7fffffe0;
          plVar10 = param_1 + 0x13;
          plVar19 = (long *)(param_2 + 0x10);
          uVar13 = uVar12;
          do {
            plVar3 = plVar10 + -1;
            lVar8 = plVar10[-2];
            lVar22 = plVar10[1];
            lVar21 = *plVar10;
            uVar13 = uVar13 - 0x20;
            plVar10 = plVar10 + 4;
            plVar19[-1] = *plVar3;
            plVar19[-2] = lVar8;
            plVar19[1] = lVar22;
            *plVar19 = lVar21;
            plVar19 = plVar19 + 4;
          } while (uVar13 != 0);
          if (uVar12 == uVar9) goto LAB_00380e50;
          uVar13 = uVar12;
          if ((uVar7 & 0x18) == 0) goto LAB_00380ed4;
        }
        uVar12 = uVar9 & 0x7ffffff8;
        lVar8 = uVar13 - uVar12;
        puVar11 = (undefined8 *)((long)param_1 + uVar13 + 0x88);
        puVar20 = (undefined8 *)(param_2 + uVar13);
        do {
          lVar8 = lVar8 + 8;
          *puVar20 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar20 = puVar20 + 1;
        } while (lVar8 != 0);
        if (uVar12 == uVar9) goto LAB_00380e50;
      }
LAB_00380ed4:
      lVar8 = uVar9 - uVar12;
      puVar15 = (undefined1 *)(param_2 + uVar12);
      puVar18 = (undefined1 *)((long)param_1 + uVar12 + 0x88);
      do {
        lVar8 = lVar8 + -1;
        *puVar15 = *puVar18;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar8 != 0);
LAB_00380e50:
      *param_3 = uVar7;
      return 1;
    }
  }
  FUN_00379868();
  uVar6 = 0x400;
LAB_00380f2c:
  FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptFinal_ex");
  uVar6 = 100;
LAB_00380c8c:
  FUN_00379a5c(6,uVar6,0);
  return 0;
}


// ===== 00380ff8  FUN_00380ff8 =====

void FUN_00380ff8(long param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0038096c();
    return;
  }
  FUN_00380c1c();
  return;
}


// ===== 00381008  thunk_FUN_0038096c =====

undefined8 thunk_FUN_0038096c(long *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uStack_28;
  
  if (param_3 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x2da,"EVP_EncryptFinal_ex");
    uVar5 = 0xc0102;
  }
  else {
    *param_3 = 0;
    if ((int)param_1[2] == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x2e0,"EVP_EncryptFinal_ex");
      uVar5 = 0x94;
    }
    else {
      lVar6 = *param_1;
      if (lVar6 == 0) {
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x2e5,"EVP_EncryptFinal_ex");
        uVar5 = 0x83;
      }
      else if (*(long *)(lVar6 + 0x78) == 0) {
        if ((*(byte *)(lVar6 + 0x12) >> 4 & 1) != 0) {
          uVar4 = (**(code **)(lVar6 + 0x28))(param_1,param_2,0,0);
          if ((int)uVar4 < 0) {
            return 0;
          }
          *param_3 = uVar4;
          return 1;
        }
        uVar4 = *(uint *)(lVar6 + 4);
        if (0x20 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_003c4750("assertion failed: b <= sizeof(ctx->buf)","crypto/evp/evp_enc.c",0x30c);
        }
        if (uVar4 == 1) {
          return 1;
        }
        uVar2 = *(uint *)((long)param_1 + 0x14);
        if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
          if (uVar2 < uVar4) {
            memset((void *)((long)param_1 + (ulong)uVar2 + 0x38),uVar4 - uVar2,
                   (ulong)(uVar4 + ~uVar2) + 1);
          }
          uVar5 = (**(code **)(lVar6 + 0x28))(param_1,param_2,param_1 + 7,uVar4);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          *param_3 = uVar4;
          return uVar5;
        }
        if (uVar2 == 0) {
          return 1;
        }
        FUN_00379868();
        FUN_0037995c("crypto/evp/evp_enc.c",0x314,"EVP_EncryptFinal_ex");
        uVar5 = 0x8a;
      }
      else {
        iVar3 = FUN_0038936c();
        if ((iVar3 < 1) || (*(code **)(*param_1 + 0xa8) == (code *)0x0)) {
          FUN_00379868();
          uVar5 = 0x2ee;
        }
        else {
          iVar1 = 0;
          if (iVar3 != 1) {
            iVar1 = iVar3;
          }
          uVar5 = (**(code **)(*param_1 + 0xa8))(param_1[0x15],param_2,&uStack_28,iVar1);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (uStack_28 >> 0x1f == 0) {
            *param_3 = (uint)uStack_28;
            return uVar5;
          }
          FUN_00379868();
          uVar5 = 0x2f7;
        }
        FUN_0037995c("crypto/evp/evp_enc.c",uVar5,"EVP_EncryptFinal_ex");
        uVar5 = 0xbc;
      }
    }
  }
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 0038100c  thunk_FUN_00380c1c =====

undefined8 thunk_FUN_00380c1c(long *param_1,long param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uStack_18;
  
  if (param_3 == (uint *)0x0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3b7,"EVP_DecryptFinal_ex");
    uVar6 = 0xc0102;
    goto LAB_00380c8c;
  }
  *param_3 = 0;
  if ((int)param_1[2] != 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3bd,"EVP_DecryptFinal_ex");
    uVar6 = 0x94;
    goto LAB_00380c8c;
  }
  lVar8 = *param_1;
  if (lVar8 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3c2,"EVP_DecryptFinal_ex");
    uVar6 = 0x83;
    goto LAB_00380c8c;
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    iVar4 = FUN_0038936c();
    if ((iVar4 < 1) || (*(code **)(*param_1 + 0xa8) == (code *)0x0)) {
      FUN_00379868();
      uVar6 = 0x3cc;
    }
    else {
      iVar1 = 0;
      if (iVar4 != 1) {
        iVar1 = iVar4;
      }
      uVar6 = (**(code **)(*param_1 + 0xa8))(param_1[0x15],param_2,&uStack_18,iVar1);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if (uStack_18 >> 0x1f == 0) {
        *param_3 = (uint)uStack_18;
        return uVar6;
      }
      FUN_00379868();
      uVar6 = 0x3d5;
    }
    FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptFinal_ex");
    uVar6 = 0xbc;
    goto LAB_00380c8c;
  }
  if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
    uVar5 = (**(code **)(lVar8 + 0x28))(param_1,param_2,0,0);
    if (-1 < (int)uVar5) {
      *param_3 = uVar5;
      return 1;
    }
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x71) & 1) != 0) {
    if (*(int *)((long)param_1 + 0x14) == 0) {
      return 1;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3ed,"EVP_DecryptFinal_ex");
    uVar6 = 0x8a;
    goto LAB_00380c8c;
  }
  uVar5 = *(uint *)(lVar8 + 4);
  if (uVar5 < 2) {
    uVar7 = 0;
    goto LAB_00380e50;
  }
  if ((*(int *)((long)param_1 + 0x14) != 0) || ((int)param_1[0x10] == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x3f5,"EVP_DecryptFinal_ex");
    uVar6 = 0x6d;
    goto LAB_00380c8c;
  }
  if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_003c4750("assertion failed: b <= sizeof(ctx->final)","crypto/evp/evp_enc.c",0x3f8);
  }
  uVar14 = uVar5 - 1;
  bVar2 = *(byte *)((long)param_1 + (ulong)uVar14 + 0x88);
  uVar16 = (uint)bVar2;
  uVar17 = (uint)bVar2;
  if (uVar17 != 0) {
    uVar7 = uVar5 - uVar17;
    uVar9 = (ulong)uVar7;
    if (uVar17 <= uVar5) {
      do {
        if (*(byte *)((long)param_1 + (ulong)uVar14 + 0x88) != bVar2) {
          FUN_00379868();
          uVar6 = 0x405;
          goto LAB_00380f2c;
        }
        uVar16 = uVar16 - 1;
        uVar14 = uVar14 - 1;
      } while (uVar16 != 0);
      if ((int)uVar7 < 1) goto LAB_00380e50;
      if ((uVar7 < 8) || ((param_2 - (long)param_1) - 0x88U < 0x20)) {
        uVar12 = 0;
      }
      else {
        if (uVar7 < 0x20) {
          uVar13 = 0;
        }
        else {
          uVar12 = uVar9 & 0x7fffffe0;
          plVar10 = param_1 + 0x13;
          plVar19 = (long *)(param_2 + 0x10);
          uVar13 = uVar12;
          do {
            plVar3 = plVar10 + -1;
            lVar8 = plVar10[-2];
            lVar22 = plVar10[1];
            lVar21 = *plVar10;
            uVar13 = uVar13 - 0x20;
            plVar10 = plVar10 + 4;
            plVar19[-1] = *plVar3;
            plVar19[-2] = lVar8;
            plVar19[1] = lVar22;
            *plVar19 = lVar21;
            plVar19 = plVar19 + 4;
          } while (uVar13 != 0);
          if (uVar12 == uVar9) goto LAB_00380e50;
          uVar13 = uVar12;
          if ((uVar7 & 0x18) == 0) goto LAB_00380ed4;
        }
        uVar12 = uVar9 & 0x7ffffff8;
        lVar8 = uVar13 - uVar12;
        puVar11 = (undefined8 *)((long)param_1 + uVar13 + 0x88);
        puVar20 = (undefined8 *)(param_2 + uVar13);
        do {
          lVar8 = lVar8 + 8;
          *puVar20 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar20 = puVar20 + 1;
        } while (lVar8 != 0);
        if (uVar12 == uVar9) goto LAB_00380e50;
      }
LAB_00380ed4:
      lVar8 = uVar9 - uVar12;
      puVar15 = (undefined1 *)(param_2 + uVar12);
      puVar18 = (undefined1 *)((long)param_1 + uVar12 + 0x88);
      do {
        lVar8 = lVar8 + -1;
        *puVar15 = *puVar18;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar8 != 0);
LAB_00380e50:
      *param_3 = uVar7;
      return 1;
    }
  }
  FUN_00379868();
  uVar6 = 0x400;
LAB_00380f2c:
  FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"EVP_DecryptFinal_ex");
  uVar6 = 100;
LAB_00380c8c:
  FUN_00379a5c(6,uVar6,0);
  return 0;
}


// ===== 00381010  FUN_00381010 =====

void FUN_00381010(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    FUN_0037f938();
  }
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,1,0);
  return;
}


// ===== 00381064  FUN_00381064 =====

void FUN_00381064(void)

{
  FUN_0037fb38();
  return;
}


// ===== 00381070  FUN_00381070 =====

void FUN_00381070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,1,param_5);
  return;
}


// ===== 00381088  FUN_00381088 =====

void FUN_00381088(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    FUN_0037f938();
  }
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,0,0);
  return;
}


// ===== 003810dc  FUN_003810dc =====

void FUN_003810dc(void)

{
  FUN_0037fb38();
  return;
}


// ===== 003810e8  FUN_003810e8 =====

void FUN_003810e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0037fb38(param_1,param_2,0,param_3,param_4,0,param_5);
  return;
}


// ===== 00381100  FUN_00381100 =====

bool FUN_00381100(long param_1,long param_2,int param_3)

{
  return ((ulong)(param_1 - param_2) < (ulong)(long)param_3 ||
         (ulong)-(long)param_3 < (ulong)(param_1 - param_2)) &&
         ((param_1 != param_2 && param_3 != 0) && (param_1 == param_2 || -1 < param_3));
}


// ===== 00381124  FUN_00381124 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00381124(long *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar3 = FUN_00389f54(param_1,0x2000);
  uVar4 = param_5;
  if (iVar3 == 0) {
LAB_003811ac:
    lVar7 = *param_1;
    bVar2 = *(byte *)(lVar7 + 0x12);
    uVar1 = *(uint *)(lVar7 + 4);
joined_r0x00381190:
    if ((bVar2 >> 4 & 1) != 0) goto joined_r0x00381370;
    if ((int)param_5 < 1) {
LAB_003812e4:
      *param_3 = 0;
      return (ulong)(param_5 == 0);
    }
    iVar3 = *(int *)((long)param_1 + 0x14);
    lVar8 = (long)iVar3;
    uVar5 = ((long)param_2 + lVar8) - (long)param_4;
    if (((0 < (int)uVar4) && ((void *)((long)param_2 + lVar8) != param_4)) &&
       (uVar5 < (ulong)(long)(int)uVar4 || (ulong)-(long)(int)uVar4 < uVar5)) {
      FUN_00379868();
      uVar6 = 0x256;
      goto LAB_00381280;
    }
    if (iVar3 != 0) {
      if (0x20 < (int)uVar1) {
LAB_00381494:
                    /* WARNING: Subroutine does not return */
        FUN_003c4750("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto/evp/evp_enc.c",0x264);
      }
      iVar3 = uVar1 - iVar3;
      uVar4 = param_5 - iVar3;
      if ((int)param_5 < iVar3) {
        memcpy((void *)((long)param_1 + lVar8 + 0x38),param_4,(ulong)param_5);
        *(uint *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + param_5;
        *param_3 = 0;
        goto LAB_00381394;
      }
      if ((int)(uVar4 & -uVar1) <= (int)(uVar1 ^ 0x7fffffff)) {
        memcpy((void *)((long)(param_1 + 7) + lVar8),param_4,(long)iVar3);
        uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_1 + 7,(long)(int)uVar1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        param_4 = (void *)((long)param_4 + (long)iVar3);
        param_2 = (void *)((long)param_2 + (long)(int)uVar1);
        *param_3 = uVar1;
        uVar1 = uVar4 & uVar1 - 1;
        iVar3 = uVar4 - uVar1;
        goto joined_r0x0038141c;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x276,"evp_EncryptDecryptUpdate");
      uVar6 = 0xca;
      goto LAB_0038128c;
    }
    if ((*(uint *)((long)param_1 + 0x84) & param_5) == 0) {
      uVar5 = (**(code **)(lVar7 + 0x28))(param_1,param_2,param_4,param_5);
      if ((int)uVar5 == 0) {
        *param_3 = 0;
        return uVar5;
      }
      *param_3 = param_5;
    }
    else {
      if (0x20 < (int)uVar1) goto LAB_00381494;
      *param_3 = 0;
      uVar1 = param_5 & uVar1 - 1;
      iVar3 = param_5 - uVar1;
joined_r0x0038141c:
      if (0 < iVar3) {
        uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,iVar3);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
        *param_3 = *param_3 + iVar3;
      }
      if (uVar1 != 0) {
        memcpy(param_1 + 7,(void *)((long)param_4 + (long)iVar3),(long)(int)uVar1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar1;
    }
LAB_00381394:
    uVar5 = 1;
  }
  else {
    if (0 < (int)param_5) {
      if (param_5 < 0x7ffffff7) {
        uVar4 = param_5 + 7 >> 3;
        lVar7 = *param_1;
        bVar2 = *(byte *)(lVar7 + 0x12);
        uVar1 = *(uint *)(lVar7 + 4);
      }
      else {
        uVar4 = param_5 >> 3;
        if ((param_5 & 7) != 0) {
          uVar4 = uVar4 + 1;
        }
        lVar7 = *param_1;
        bVar2 = *(byte *)(lVar7 + 0x12);
        uVar1 = *(uint *)(lVar7 + 4);
      }
      goto joined_r0x00381190;
    }
    if (param_5 != 0) {
      uVar4 = (uint)((-param_5 & 7) != 0) - (-param_5 >> 3);
      goto LAB_003811ac;
    }
    lVar7 = *param_1;
    if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) == 0) goto LAB_003812e4;
    uVar1 = *(uint *)(lVar7 + 4);
    uVar4 = 0;
joined_r0x00381370:
    if (uVar1 == 1) {
      if (((param_2 == param_4) || ((int)uVar4 < 1)) ||
         ((ulong)(long)(int)uVar4 <= (ulong)((long)param_2 - (long)param_4) &&
          (ulong)((long)param_2 - (long)param_4) <= (ulong)-(long)(int)uVar4)) goto LAB_00381374;
      FUN_00379868();
      uVar6 = 0x245;
LAB_00381280:
      FUN_0037995c("crypto/evp/evp_enc.c",uVar6,"evp_EncryptDecryptUpdate");
      uVar6 = 0xa2;
LAB_0038128c:
      FUN_00379a5c(6,uVar6,0);
    }
    else {
LAB_00381374:
      uVar4 = (**(code **)(lVar7 + 0x28))(param_1,param_2,param_4,(long)(int)param_5);
      if (-1 < (int)uVar4) {
        *param_3 = uVar4;
        goto LAB_00381394;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 003814ac  FUN_003814ac =====

ulong FUN_003814ac(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (0 < (int)uVar2) {
    uVar1 = uVar2 >> 3;
    if ((param_1 & 7) != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar2 < 0x7ffffff7) {
      uVar1 = uVar2 + 7 >> 3;
    }
    return (ulong)uVar1;
  }
  if (uVar2 != 0) {
    param_1 = (ulong)((uint)((-uVar2 & 7) != 0) - (-uVar2 >> 3));
  }
  return param_1;
}


// ===== 003814f4  FUN_003814f4 =====

undefined8 FUN_003814f4(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_18 [8];
  
  if (*(long *)(*param_1 + 0x78) == 0) {
    if (*(char *)(*param_1 + 0x10) < '\0') {
      uVar2 = FUN_00381710(param_1,1,param_2,0);
      return uVar2;
    }
    iVar1 = FUN_003897ac(param_1);
    if (iVar1 == param_2) {
      return 1;
    }
    if ((0 < param_2) && ((*(byte *)(*param_1 + 0x10) >> 3 & 1) != 0)) {
      *(int *)(param_1 + 0xd) = param_2;
      return 1;
    }
    FUN_00379868();
    uVar2 = 0x43b;
LAB_00381684:
    FUN_0037995c("crypto/evp/evp_enc.c",uVar2,"EVP_CIPHER_CTX_set_key_length");
    FUN_00379a5c(6,0x82,0);
    return 0;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  iVar1 = FUN_003897ac(param_1);
  if (iVar1 != param_2) {
    lVar3 = *param_1;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xf0) == 0)) {
      lVar3 = FUN_003cb19c(0,"keylen");
    }
    else {
      FUN_003898dc(lVar3);
      uVar2 = FUN_003d3bf8();
      uVar2 = (**(code **)(lVar3 + 0xf0))(0,uVar2);
      lVar3 = FUN_003cb19c(uVar2,"keylen");
    }
    if (lVar3 == 0) {
      FUN_00379868();
      uVar2 = 0x41f;
      goto LAB_00381684;
    }
    FUN_003ccbb0(&local_80,"keylen",auStack_18);
    uVar2 = thunk_FUN_003cb490(&local_80,param_2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_80);
    if (iVar1 < 1) {
      return 0;
    }
    *(int *)(param_1 + 0xd) = param_2;
  }
  return 1;
}


// ===== 003816cc  FUN_003816cc =====

undefined8 FUN_003816cc(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xf0) != 0)) {
    FUN_003898dc();
    uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x00381704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xf0))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 00381710  FUN_00381710 =====

int FUN_00381710(long *param_1,ulong param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  uint local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
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
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_48;
  
  local_48 = (ulong)(int)param_3;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((param_1 == (long *)0x0) || (lVar3 = *param_1, lVar3 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x45d,"EVP_CIPHER_CTX_ctrl");
    uVar2 = 0x83;
    goto LAB_003817ec;
  }
  if (*(long *)(lVar3 + 0x78) == 0) {
    if (*(code **)(lVar3 + 0x50) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0x50))(param_1,param_2,param_3);
      goto LAB_00381c44;
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x51c,"EVP_CIPHER_CTX_ctrl");
    uVar2 = 0x84;
    goto LAB_003817ec;
  }
  iVar1 = 1;
  switch(param_2 & 0xffffffff) {
  case 0:
    goto switchD_00381788_caseD_0;
  case 1:
    if ((int)param_3 < 0) break;
    if (*(uint *)(param_1 + 0xd) == param_3) {
      return 1;
    }
    FUN_003ccbb0(&local_f0,"keylen",&local_48);
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
    goto LAB_00381c34;
  default:
    goto switchD_00381788_caseD_2;
  case 4:
    iVar1 = 0;
  case 5:
    if (-1 < (int)param_3) {
      local_118 = param_3;
      FUN_003cbb64(&local_f0,"rounds",&local_118);
LAB_0038199c:
      if (iVar1 == 0) {
LAB_00381bd8:
        iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_f0);
      }
      else {
LAB_00381c34:
        iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_f0);
      }
LAB_00381c44:
      if (iVar1 != -1) {
        return iVar1;
      }
switchD_00381788_caseD_2:
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x524,"EVP_CIPHER_CTX_ctrl");
      uVar2 = 0x85;
LAB_003817ec:
      FUN_00379a5c(6,uVar2,0);
    }
    break;
  case 6:
    pcVar4 = "randkey";
    goto LAB_00381bcc;
  case 9:
    if (-1 < (int)param_3) {
      if (*(uint *)((long)param_1 + 0x6c) == param_3) {
        return 1;
      }
LAB_003818b0:
      FUN_003ccbb0(&local_f0,"ivlen",&local_48);
      *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
      goto LAB_00381c34;
    }
    break;
  case 0x10:
    iVar1 = 0;
  case 0x11:
    FUN_003cd924(&local_f0,&DAT_001e2a1d,param_4);
    goto LAB_0038199c;
  case 0x12:
    pcVar4 = "tlsivfixed";
    goto LAB_00381bf4;
  case 0x13:
    if ((int)param_3 < 0) {
      local_48 = 0;
    }
    pcVar4 = "tlsivgen";
LAB_00381bcc:
    FUN_003cd924(&local_f0,pcVar4,param_4,local_48);
    goto LAB_00381bd8;
  case 0x14:
    if (0xfffffff8 < param_3 - 9) {
      local_48 = (ulong)(param_3 ^ 0xf);
      goto LAB_003818b0;
    }
    break;
  case 0x16:
    FUN_003cd924(&local_f0,"tlsaad",param_4);
    iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_f0);
    if (0 < iVar1) {
      FUN_003ccbb0(&local_118,"tlsaadpad",&local_48);
      local_f0 = CONCAT44(uStack_114,local_118);
      uStack_e8 = uStack_110;
      uStack_d8 = uStack_100;
      uStack_e0 = local_108;
      local_d0 = local_f8;
      iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_f0);
      if (0 < iVar1) goto LAB_00381d10;
    }
    goto LAB_00381c44;
  case 0x17:
    if ((int)param_3 < 0) {
      return -1;
    }
    pcVar4 = "mackey";
LAB_00381bf4:
    FUN_003cd924(&local_f0,pcVar4,param_4);
    goto LAB_00381c34;
  case 0x18:
    if (-1 < (int)param_3) {
      pcVar4 = "tlsivinv";
      goto LAB_00381bf4;
    }
    break;
  case 0x19:
    if (0x1f < (int)param_3) {
      FUN_003cd924(&local_f0,"tls1multi_aad",param_4[1],param_4[2]);
      FUN_003cbb64(&local_118,"tls1multi_interleave",param_4 + 3);
      uStack_c0 = uStack_110;
      local_b0 = uStack_100;
      uStack_b8 = local_108;
      uStack_a8 = local_f8;
      iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_f0);
      if (iVar1 < 1) {
        return iVar1;
      }
      FUN_003ccbb0(&local_118,"tls1multi_aadpacklen",&local_48);
      local_d0 = local_f8;
      uStack_e8 = uStack_110;
      uStack_d8 = uStack_100;
      uStack_e0 = local_108;
      FUN_003cbb64(&local_118,"tls1multi_interleave",param_4 + 3);
      uStack_a8 = local_f8;
      uStack_c0 = uStack_110;
      local_b0 = uStack_100;
      uStack_b8 = local_108;
      FUN_003cdfcc(&local_118);
      uStack_98 = uStack_110;
      uStack_88 = uStack_100;
      local_90 = local_108;
      local_80 = local_f8;
      iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_f0);
      goto joined_r0x00381d0c;
    }
    break;
  case 0x1a:
    FUN_003cd924(&local_f0,"tls1multi_enc",*param_4,param_4[2]);
    FUN_003cd924(&local_118,"tls1multi_encin",param_4[1],param_4[2]);
    uStack_a8 = local_f8;
    uStack_c0 = uStack_110;
    local_b0 = uStack_100;
    uStack_b8 = local_108;
    FUN_003cbb64(&local_118,"tls1multi_interleave",param_4 + 3);
    uStack_98 = uStack_110;
    uStack_88 = uStack_100;
    local_90 = local_108;
    local_80 = local_f8;
    iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_f0);
    if (iVar1 < 1) {
      return iVar1;
    }
    FUN_003ccbb0(&local_118,"tls1multi_enclen",&local_48);
    local_d0 = local_f8;
    uStack_e8 = uStack_110;
    uStack_d8 = uStack_100;
    uStack_e0 = local_108;
    FUN_003cdfcc(&local_118);
    uStack_c0 = uStack_110;
    local_b0 = uStack_100;
    uStack_b8 = local_108;
    uStack_a8 = local_f8;
    iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_f0);
joined_r0x00381d0c:
    if (0 < iVar1) {
LAB_00381d10:
      return (int)local_48;
    }
    break;
  case 0x1c:
    FUN_003ccbb0(&local_f0,"tls1multi_maxsndfrag",&local_48);
    iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_f0);
    if (0 < iVar1) {
      FUN_003ccbb0(&local_118,"tls1multi_maxbufsz",&local_48);
      local_d0 = local_f8;
      uStack_e8 = uStack_110;
      uStack_d8 = uStack_100;
      uStack_e0 = local_108;
      FUN_003cdfcc(&local_118);
      uStack_c0 = uStack_110;
      local_b0 = uStack_100;
      uStack_b8 = local_108;
      uStack_a8 = local_f8;
      iVar1 = FUN_0039f0e0(*param_1,param_1[0x15],&local_f0);
      goto joined_r0x00381d0c;
    }
    break;
  case 0x27:
    if (-1 < (int)param_3) {
      local_118 = param_3;
      FUN_003cbb64(&local_f0,"speed",&local_118);
      goto LAB_00381c34;
    }
  }
  iVar1 = 0;
switchD_00381788_caseD_0:
  return iVar1;
}


// ===== 00381d28  FUN_00381d28 =====

bool FUN_00381d28(long *param_1,int param_2)

{
  int iVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int local_4;
  
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_68 = 0;
  local_70 = 0;
  param_1[0xe] = param_1[0xe] & 0xfffffffffffffe00U |
                 param_1[0xe] & 0xffU | (ulong)(param_2 == 0) << 8;
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x78) == 0)) {
    return true;
  }
  local_4 = param_2;
  FUN_003cbb64(&local_70,"padding",&local_4);
  iVar1 = FUN_0039f148(*param_1,param_1[0x15],&local_70);
  return iVar1 != 0;
}


// ===== 00381dc4  FUN_00381dc4 =====

undefined8 FUN_00381dc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 200) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00381dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 200))(param_2);
    return uVar1;
  }
  return 0;
}


// ===== 00381de0  FUN_00381de0 =====

ulong FUN_00381de0(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  
  if (*param_1 == 0) {
    return 0;
  }
  pcVar5 = *(code **)(*param_1 + 0xd8);
  if (pcVar5 == (code *)0x0) {
    return 0;
  }
  uVar2 = (*pcVar5)(param_1[0x15]);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 & 0xffffffff;
    lVar3 = FUN_003cb19c(param_2,"keylen");
    if ((lVar3 != 0) && (uVar4 = thunk_FUN_003cb238(lVar3,param_1 + 0xd), (int)uVar4 == 0)) {
      *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
      return uVar4;
    }
    lVar3 = FUN_003cb19c(param_2,"ivlen");
    if (lVar3 == 0) {
      return uVar2;
    }
    iVar1 = thunk_FUN_003cb238(lVar3,(long)param_1 + 0x6c);
    if (iVar1 == 0) {
      *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
      return 0;
    }
  }
  return uVar2;
}


// ===== 00381ed8  FUN_00381ed8 =====

undefined8 FUN_00381ed8(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xd0), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00381eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[0x15]);
    return uVar1;
  }
  return 0;
}


// ===== 00381ef8  FUN_00381ef8 =====

undefined8 FUN_00381ef8(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xe0), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    FUN_003898dc();
    FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x00381f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00381f34  FUN_00381f34 =====

undefined8 FUN_00381f34(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_003898dc();
    uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x00381f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xe8))(0,uVar1);
    return uVar1;
  }
  return 0;
}


// ===== 00381f78  FUN_00381f78 =====

undefined8 FUN_00381f78(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0xf0) != 0) {
      FUN_003898dc();
      uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x00381fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0xf0))(param_1[0x15],uVar1);
      return uVar1;
    }
  }
  return 0;
}


// ===== 00381fcc  FUN_00381fcc =====

undefined8 FUN_00381fcc(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
    if (*(long *)(*param_1 + 0xe8) != 0) {
      FUN_003898dc();
      uVar1 = FUN_003d3bf8();
                    /* WARNING: Could not recover jumptable at 0x0038200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0xe8))(param_1[0x15],uVar1);
      return uVar1;
    }
  }
  return 0;
}


// ===== 00382020  FUN_00382020 =====

ulong FUN_00382020(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(byte *)(*param_1 + 0x11) >> 1 & 1) != 0) {
    uVar3 = FUN_00381710(param_1,6,0,param_2);
    return uVar3;
  }
  FUN_003898dc(*param_1);
  uVar2 = FUN_003d40a4();
  iVar1 = FUN_003897ac(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_003edab0(uVar2,param_2,iVar1,0);
    return (ulong)(0 < iVar1);
  }
  return 0;
}


// ===== 003820c0  FUN_003820c0 =====

long FUN_003820c0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_003c8474(0xb8,"crypto/evp/evp_enc.c",0x4c);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x6c) = 0xffffffff;
    iVar1 = FUN_0038213c(lVar2,param_1);
    if (iVar1 == 0) {
      FUN_0037f938(lVar2);
      FUN_003c86b4(lVar2,"crypto/evp/evp_enc.c",0x59);
      return 0;
    }
  }
  return lVar2;
}


// ===== 0038213c  FUN_0038213c =====

undefined8 FUN_0038213c(long *param_1,long *param_2)

{
  int iVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if ((param_2 == (long *)0x0) || (lVar3 = *param_2, lVar3 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x5b5,"EVP_CIPHER_CTX_copy");
    uVar2 = 0x6f;
  }
  else if (*(long *)(lVar3 + 0x78) == 0) {
    FUN_0037f938(param_1);
    lVar5 = param_2[4];
    lVar4 = param_2[7];
    lVar3 = param_2[6];
    lVar9 = param_2[1];
    lVar8 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = lVar5;
    param_1[7] = lVar4;
    param_1[6] = lVar3;
    param_1[1] = lVar9;
    *param_1 = lVar8;
    param_1[3] = lVar7;
    param_1[2] = lVar6;
    lVar5 = param_2[0xc];
    lVar4 = param_2[0xf];
    lVar3 = param_2[0xe];
    lVar9 = param_2[9];
    lVar8 = param_2[8];
    lVar7 = param_2[0xb];
    lVar6 = param_2[10];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar5;
    param_1[0xf] = lVar4;
    param_1[0xe] = lVar3;
    param_1[9] = lVar9;
    param_1[8] = lVar8;
    param_1[0xb] = lVar7;
    param_1[10] = lVar6;
    lVar6 = param_2[0x13];
    lVar5 = param_2[0x12];
    lVar4 = param_2[0x15];
    lVar3 = param_2[0x14];
    lVar8 = param_2[0x11];
    lVar7 = param_2[0x10];
    param_1[0x16] = param_2[0x16];
    param_1[0x13] = lVar6;
    param_1[0x12] = lVar5;
    param_1[0x15] = lVar4;
    param_1[0x14] = lVar3;
    param_1[0x11] = lVar8;
    param_1[0x10] = lVar7;
    lVar3 = *param_2;
    if ((param_2[0xf] != 0) && (*(int *)(lVar3 + 0x38) != 0)) {
      __dest = (void *)FUN_003c83a4((long)*(int *)(lVar3 + 0x38),"crypto/evp/evp_enc.c",0x5e2);
      param_1[0xf] = (long)__dest;
      if (__dest == (void *)0x0) {
        *param_1 = 0;
        return 0;
      }
      lVar3 = *param_2;
      memcpy(__dest,(void *)param_2[0xf],(long)*(int *)(lVar3 + 0x38));
    }
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) {
      return 1;
    }
    iVar1 = (**(code **)(lVar3 + 0x50))(param_2,8,0,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    *param_1 = 0;
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x5ed,"EVP_CIPHER_CTX_copy");
    uVar2 = 0x86;
  }
  else {
    if (*(long *)(lVar3 + 0xc0) == 0) {
      FUN_00379868();
      uVar2 = 0x5bd;
    }
    else {
      FUN_0037f938(param_1);
      lVar7 = param_2[0x13];
      lVar6 = param_2[0x12];
      lVar4 = param_2[0x14];
      lVar3 = param_2[0x16];
      lVar9 = param_2[0x11];
      lVar8 = param_2[0x10];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = lVar4;
      lVar10 = param_2[4];
      lVar5 = param_2[7];
      lVar4 = param_2[6];
      lVar12 = param_2[1];
      lVar11 = *param_2;
      lVar14 = param_2[3];
      lVar13 = param_2[2];
      param_1[5] = param_2[5];
      param_1[4] = lVar10;
      param_1[7] = lVar5;
      param_1[6] = lVar4;
      param_1[1] = lVar12;
      *param_1 = lVar11;
      param_1[3] = lVar14;
      param_1[2] = lVar13;
      lVar11 = param_2[0xd];
      lVar10 = param_2[0xc];
      lVar5 = param_2[0xf];
      lVar4 = param_2[0xe];
      lVar13 = param_2[9];
      lVar12 = param_2[8];
      lVar15 = param_2[0xb];
      lVar14 = param_2[10];
      param_1[0x11] = lVar9;
      param_1[0x10] = lVar8;
      param_1[0x13] = lVar7;
      param_1[0x12] = lVar6;
      param_1[0x16] = lVar3;
      param_1[0xd] = lVar11;
      param_1[0xc] = lVar10;
      param_1[0xf] = lVar5;
      param_1[0xe] = lVar4;
      param_1[9] = lVar13;
      param_1[8] = lVar12;
      param_1[0xb] = lVar15;
      param_1[10] = lVar14;
      lVar3 = param_2[0x16];
      param_1[0x15] = 0;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x18) == 0)) {
        *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      }
      lVar3 = (**(code **)(*param_2 + 0xc0))(param_2[0x15]);
      param_1[0x15] = lVar3;
      if (lVar3 != 0) {
        return 1;
      }
      FUN_00379868();
      uVar2 = 0x5cd;
    }
    FUN_0037995c("crypto/evp/evp_enc.c",uVar2,"EVP_CIPHER_CTX_copy");
    uVar2 = 0xbe;
  }
  FUN_00379a5c(6,uVar2,0);
  return 0;
}


// ===== 00382388  FUN_00382388 =====

undefined8 FUN_00382388(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return 1;
}


// ===== 003823ac  FUN_003823ac =====

void FUN_003823ac(void)

{
  long lVar1;
  
  lVar1 = FUN_003c8474(0xf8,"crypto/evp/evp_enc.c",0x5f5);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x80) = 1;
  }
  return;
}


// ===== 003823dc  FUN_003823dc =====

void FUN_003823dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00382990(param_1,2,param_2,param_3,FUN_00382404,FUN_00382844,FUN_00382868);
  return;
}


// ===== 00382404  FUN_00382404 =====

int * FUN_00382404(int param_1,long param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_2 + 0x10);
  piVar2 = (int *)FUN_003c8474(0xf8,"crypto/evp/evp_enc.c",0x5f5);
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[0x20] = 1;
    iVar1 = FUN_00383588(param_3,param_1,FUN_00382944,piVar2);
    if ((iVar1 == 0) || (*piVar2 == -1)) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_enc.c",0x62e,"evp_cipher_from_algorithm");
      FUN_00379a5c(6,0xc0103,0);
      if (piVar2[6] != 0) {
        return (int *)0x0;
      }
      iVar1 = piVar2[0x20];
      iVar5 = iVar1 + -1;
      piVar2[0x20] = iVar5;
      if (iVar5 != 0 && 0 < iVar1) {
        return (int *)0x0;
      }
      uVar4 = *(undefined8 *)(piVar2 + 0x1a);
    }
    else {
      piVar2[0x18] = param_1;
      lVar3 = FUN_003c34fc(param_2);
      *(long *)(piVar2 + 0x1a) = lVar3;
      if (lVar3 != 0) {
        iVar5 = 0;
        iVar1 = 0;
        *(undefined8 *)(piVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x18);
        puVar6 = (undefined8 *)(lVar7 + 8);
LAB_003824b8:
        switch(*(undefined4 *)(puVar6 + -1)) {
        case 0:
          goto switchD_003824d0_caseD_0;
        case 1:
          if (*(long *)(piVar2 + 0x22) == 0) {
            iVar1 = iVar1 + 1;
            *(undefined8 *)(piVar2 + 0x22) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 2:
          if (*(long *)(piVar2 + 0x24) == 0) {
            iVar5 = iVar5 + 1;
            *(undefined8 *)(piVar2 + 0x24) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 3:
          if (*(long *)(piVar2 + 0x26) == 0) {
            iVar5 = iVar5 + 1;
            *(undefined8 *)(piVar2 + 0x26) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 4:
          if (*(long *)(piVar2 + 0x28) == 0) {
            iVar5 = iVar5 + 1;
            *(undefined8 *)(piVar2 + 0x28) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 5:
          if (*(long *)(piVar2 + 0x2a) == 0) {
            iVar5 = iVar5 + 1;
            *(undefined8 *)(piVar2 + 0x2a) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 6:
          if (*(long *)(piVar2 + 0x2c) == 0) {
            *(undefined8 *)(piVar2 + 0x2c) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 7:
          if (*(long *)(piVar2 + 0x2e) == 0) {
            iVar1 = iVar1 + 1;
            *(undefined8 *)(piVar2 + 0x2e) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 8:
          if (*(long *)(piVar2 + 0x30) == 0) {
            *(undefined8 *)(piVar2 + 0x30) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 9:
          if (*(long *)(piVar2 + 0x32) == 0) {
            *(undefined8 *)(piVar2 + 0x32) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 10:
          if (*(long *)(piVar2 + 0x34) == 0) {
            *(undefined8 *)(piVar2 + 0x34) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 0xb:
          if (*(long *)(piVar2 + 0x36) == 0) {
            *(undefined8 *)(piVar2 + 0x36) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 0xc:
          if (*(long *)(piVar2 + 0x38) == 0) {
            *(undefined8 *)(piVar2 + 0x38) = *puVar6;
            puVar6 = puVar6 + 2;
            goto LAB_003824b8;
          }
          break;
        case 0xd:
          if (*(long *)(piVar2 + 0x3a) != 0) break;
          *(undefined8 *)(piVar2 + 0x3a) = *puVar6;
          puVar6 = puVar6 + 2;
          goto LAB_003824b8;
        case 0xe:
          if (*(long *)(piVar2 + 0x3c) == 0) {
            *(undefined8 *)(piVar2 + 0x3c) = *puVar6;
          }
        }
        puVar6 = puVar6 + 2;
        goto LAB_003824b8;
      }
      if (piVar2[6] != 0) {
        return (int *)0x0;
      }
      iVar1 = piVar2[0x20];
      iVar5 = iVar1 + -1;
      piVar2[0x20] = iVar5;
      if (iVar5 != 0 && 0 < iVar1) {
        return (int *)0x0;
      }
      uVar4 = 0;
    }
    FUN_003c86b4(uVar4,"crypto/evp/evp_enc.c",0x6c7);
    FUN_003d27b0(*(undefined8 *)(piVar2 + 0x1e));
    FUN_003c86b4(piVar2,"crypto/evp/evp_enc.c",0x6ca);
    return (int *)0x0;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_enc.c",0x626,"evp_cipher_from_algorithm");
  uVar4 = 0x80006;
LAB_0038278c:
  FUN_00379a5c(6,uVar4,0);
  return (int *)0x0;
switchD_003824d0_caseD_0:
  if (((iVar5 - 3U < 2) || ((iVar5 == 0 && (*(long *)(piVar2 + 0x2c) != 0)))) && (iVar1 == 2)) {
    *(long *)(piVar2 + 0x1e) = param_3;
    if (param_3 != 0) {
      FUN_003d2754(param_3);
    }
    iVar1 = FUN_00389104(piVar2);
    if (iVar1 != 0) {
      return piVar2;
    }
    if ((piVar2[6] == 0) &&
       (iVar1 = piVar2[0x20], iVar5 = iVar1 + -1, piVar2[0x20] = iVar5, iVar5 == 0 || iVar1 < 1)) {
      FUN_003c86b4(*(undefined8 *)(piVar2 + 0x1a),"crypto/evp/evp_enc.c",0x6c7);
      FUN_003d27b0(*(undefined8 *)(piVar2 + 0x1e));
      FUN_003c86b4(piVar2,"crypto/evp/evp_enc.c",0x6ca);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x6a0,"evp_cipher_from_algorithm");
    uVar4 = 0xe1;
  }
  else {
    if ((piVar2[6] == 0) &&
       (iVar1 = piVar2[0x20], iVar5 = iVar1 + -1, piVar2[0x20] = iVar5, iVar5 == 0 || iVar1 < 1)) {
      FUN_003c86b4(lVar3,"crypto/evp/evp_enc.c",0x6c7);
      FUN_003d27b0(*(undefined8 *)(piVar2 + 0x1e));
      FUN_003c86b4(piVar2,"crypto/evp/evp_enc.c",0x6ca);
    }
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_enc.c",0x697,"evp_cipher_from_algorithm");
    uVar4 = 0xc1;
  }
  goto LAB_0038278c;
}


// ===== 00382844  FUN_00382844 =====

undefined8 FUN_00382844(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return 1;
}


// ===== 00382868  FUN_00382868 =====

void FUN_00382868(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0x80), iVar2 = iVar1 + -1, *(int *)(param_1 + 0x80) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x68),"crypto/evp/evp_enc.c",0x6c7);
    FUN_003d27b0(*(undefined8 *)(param_1 + 0x78));
    FUN_003c86b4(param_1,"crypto/evp/evp_enc.c",0x6ca);
    return;
  }
  return;
}


// ===== 003828d4  FUN_003828d4 =====

void FUN_003828d4(long param_1)

{
  FUN_003c86b4(*(undefined8 *)(param_1 + 0x68),"crypto/evp/evp_enc.c",0x6c7);
  FUN_003d27b0(*(undefined8 *)(param_1 + 0x78));
  FUN_003c86b4(param_1,"crypto/evp/evp_enc.c",0x6ca);
  return;
}


// ===== 0038291c  FUN_0038291c =====

void FUN_0038291c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0038345c(param_1,2,param_2,param_3,FUN_00382404,FUN_00382844,FUN_00382868);
  return;
}


// ===== 00382944  FUN_00382944 =====

void FUN_00382944(undefined4 param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_003dc410(param_1,2);
  if ((*param_2 != -1) && (lVar1 != 0)) {
    iVar2 = FUN_003890fc();
    if (*param_2 != iVar2 && *param_2 != 0) {
      iVar2 = -1;
    }
    *param_2 = iVar2;
  }
  return;
}


// ===== 00382990  FUN_00382990 =====

undefined8
FUN_00382990(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 local_68 [4];
  long local_48;
  
  local_48 = 0;
  local_68[0] = param_1;
  uVar1 = FUN_003829f4(local_68,0,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_48 != 0) {
    FUN_003e8bb4(local_48);
  }
  return uVar1;
}


// ===== 003829f4  FUN_003829f4 =====

long FUN_003829f4(undefined8 *param_1,undefined8 param_2,uint param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  long local_70;
  undefined8 local_68;
  
  local_68 = param_2;
  lVar6 = FUN_003b9c48(*param_1,0);
  lVar7 = FUN_003c3bb8(*param_1);
  puVar1 = &DAT_001c717f;
  if (param_5 != (undefined1 *)0x0) {
    puVar1 = param_5;
  }
  local_70 = 0;
  if ((lVar6 == 0) || (lVar7 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/evp/evp_fetch.c",0x102,"inner_evp_generic_fetch");
    uVar9 = 0x80106;
    goto LAB_00382bf8;
  }
  if ((int)param_3 < 1) {
    FUN_00379868();
    uVar8 = 0x10b;
LAB_00382be8:
    FUN_0037995c("crypto/evp/evp_fetch.c",uVar8,"inner_evp_generic_fetch");
    uVar9 = 0xc0103;
LAB_00382bf8:
    FUN_00379a5c(6,uVar9,0);
    return 0;
  }
  if (param_4 == (undefined1 *)0x0) {
    uVar4 = 0;
LAB_00382b18:
    bVar3 = true;
  }
  else {
    uVar4 = FUN_003c3b2c(lVar7,param_4);
    if (uVar4 == 0) goto LAB_00382b18;
    if ((0xff < param_3) || (0x7fffff < uVar4)) {
      FUN_00379868();
      uVar8 = 0x11b;
      goto LAB_00382be8;
    }
    iVar5 = FUN_003e97ac(lVar6,param_2,param_3 | uVar4 << 8,puVar1,&local_70);
    if (iVar5 != 0) {
      uVar9 = 0x8010d;
      goto LAB_00382c80;
    }
    bVar3 = false;
  }
  local_80 = PTR_FUN_00764e80;
  puStack_88 = PTR_FUN_00764e78;
  local_90 = PTR_FUN_00764e70;
  puStack_98 = PTR_FUN_00764e68;
  puStack_a0 = PTR_FUN_00764e60;
  puStack_a8 = PTR_FUN_00764e58;
  local_b0 = PTR_FUN_00764e50;
  param_1[6] = param_6;
  param_1[7] = param_7;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = uVar4;
  param_1[2] = param_4;
  param_1[3] = puVar1;
  param_1[8] = param_8;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  local_70 = FUN_003c3560(*param_1,param_3,&local_68,0,&local_b0,param_1);
  if (local_70 != 0) {
    if (bVar3) {
      uVar4 = FUN_003c3b2c(lVar7,param_4);
    }
    if (uVar4 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_fetch.c",0x14b,"inner_evp_generic_fetch");
      FUN_00379a5c(6,0x8010d,"Algorithm %s cannot be found",param_4);
      (*param_8)(local_70);
      local_70 = 0;
    }
    else if ((param_3 < 0x100) && (uVar4 >> 0x17 == 0)) {
      FUN_003e9864(lVar6,local_68,param_3 | uVar4 << 8,puVar1,local_70,param_7,param_8);
    }
  }
  uVar9 = 0x8010c;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar9 = 0x8010d;
  }
LAB_00382c80:
  if (uVar4 == 0 && param_4 == (undefined1 *)0x0) {
    return local_70;
  }
  if (local_70 != 0) {
    return local_70;
  }
  if (param_4 == (undefined1 *)0x0) {
    param_4 = (undefined1 *)FUN_003c3dbc(lVar7,uVar4,0);
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_fetch.c",0x163,"inner_evp_generic_fetch");
  uVar8 = FUN_003b9ecc(*param_1);
  puVar1 = &UNK_001e8ca4;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  puVar2 = &UNK_001e8ca4;
  if (param_5 != (undefined1 *)0x0) {
    puVar2 = param_5;
  }
  FUN_00379a5c(6,uVar9,"%s, Algorithm (%s : %d), Properties (%s)",uVar8,puVar1,uVar4,puVar2);
  return local_70;
}


// ===== 00382d14  FUN_00382d14 =====

undefined8
FUN_00382d14(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 local_98 [4];
  long local_78;
  
  local_98[0] = FUN_003d40a4();
  local_78 = 0;
  uVar1 = FUN_003829f4(local_98,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (local_78 != 0) {
    FUN_003e8bb4(local_78);
  }
  return uVar1;
}


// ===== 00382db0  FUN_00382db0 =====

undefined8 FUN_00382db0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(param_1,0);
  if (lVar1 != 0) {
    uVar2 = FUN_003e9730();
    return uVar2;
  }
  return 1;
}


// ===== 00382dd8  FUN_00382dd8 =====

undefined8 FUN_00382dd8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003d40a4();
  lVar2 = FUN_003b9c48(uVar1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_003e919c(lVar2,param_1);
    return uVar1;
  }
  return 1;
}


// ===== 00382e18  FUN_00382e18 =====

undefined8 FUN_00382e18(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    lVar2 = 0;
    iVar1 = FUN_00382ee0(param_1,0);
  }
  else {
    auVar3 = FUN_003ead78(param_1,param_2,1);
    lVar2 = auVar3._0_8_;
    if (lVar2 == 0) {
      FUN_00379868(param_1,auVar3._8_8_,param_3,param_4);
      FUN_0037995c("crypto/evp/evp_fetch.c",0x1ea,"evp_set_default_properties_int");
      FUN_00379a5c(6,0xd2,0);
      return 0;
    }
    iVar1 = FUN_00382ee0(param_1,lVar2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  FUN_003eb16c(lVar2);
  return 0;
}


// ===== 00382ee0  FUN_00382ee0 =====

undefined4 FUN_00382ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = FUN_003b9c48(param_1,0);
  puVar4 = (undefined8 *)FUN_003e8aa4(param_1,param_3);
  if ((puVar4 == (undefined8 *)0x0) || (lVar3 == 0)) {
    FUN_00379868();
    uVar7 = 0x1e0;
  }
  else {
    if (param_4 == 0) {
      FUN_003e8ad0(param_1);
      lVar5 = FUN_003eb3c0(param_1,param_2,0,0);
    }
    else {
      iVar1 = FUN_003e8aac();
      if (iVar1 != 0) {
        return 0;
      }
      lVar5 = FUN_003eb3c0(param_1,param_2,0,0);
    }
    if ((lVar5 == 0) || (lVar6 = FUN_003c83a4(lVar5,"crypto/evp/evp_fetch.c",0x1c9), lVar6 == 0)) {
      FUN_00379868();
      uVar7 = 0x1cb;
    }
    else {
      lVar5 = FUN_003eb3c0(param_1,param_2,lVar6,lVar5);
      if (lVar5 != 0) {
        FUN_003d4358(param_1,lVar6);
        FUN_003c86b4(lVar6,"crypto/evp/evp_fetch.c",0x1d5);
        FUN_003eb16c(*puVar4);
        *puVar4 = param_2;
        uVar2 = FUN_003e9730(lVar3);
        FUN_00383cbc(param_1);
        return uVar2;
      }
      FUN_003c86b4(lVar6,"crypto/evp/evp_fetch.c",0x1d0);
      FUN_00379868();
      uVar7 = 0x1d1;
    }
  }
  FUN_0037995c("crypto/evp/evp_fetch.c",uVar7,"evp_set_parsed_default_properties");
  FUN_00379a5c(6,0xc0103,0);
  return 0;
}


// ===== 00383090  FUN_00383090 =====

undefined8 FUN_00383090(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_003ead78(param_1,param_2,1);
    if (lVar2 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_fetch.c",0x1ea,"evp_set_default_properties_int");
      FUN_00379a5c(6,0xd2,0);
      return 0;
    }
  }
  iVar1 = FUN_00382ee0(param_1,lVar2,1,0);
  if (iVar1 != 0) {
    return 1;
  }
  FUN_003eb16c(lVar2);
  return 0;
}


// ===== 00383140  FUN_00383140 =====

undefined8 * FUN_00383140(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_003e8aa4(param_1,1);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = FUN_003ebb58(param_1,&DAT_001f9519,*puVar2);
    puVar2 = (undefined8 *)(ulong)(iVar1 != 0);
  }
  return puVar2;
}


// ===== 00383184  FUN_00383184 =====

undefined8 FUN_00383184(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = "-fips";
  if (param_2 != 0) {
    pcVar6 = "fips=yes";
  }
  plVar2 = (long *)FUN_003e8aa4(param_1,param_3);
  if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
    lVar4 = FUN_003ead78(param_1,pcVar6,1);
    if (lVar4 != 0) {
      iVar1 = FUN_00382ee0(param_1,lVar4,0,0);
      if (iVar1 != 0) {
        return 1;
      }
LAB_00383284:
      FUN_003eb16c(lVar4);
      return 0;
    }
    FUN_00379868();
    pcVar6 = "evp_set_default_properties_int";
    uVar5 = 0x1ea;
  }
  else {
    lVar3 = FUN_003ead78(param_1,pcVar6,1);
    if (lVar3 != 0) {
      lVar4 = FUN_003eb17c(lVar3,*plVar2);
      FUN_003eb16c(lVar3);
      if (lVar4 != 0) {
        iVar1 = FUN_00382ee0(param_1,lVar4,0,0);
        if (iVar1 != 0) {
          return 1;
        }
        goto LAB_00383284;
      }
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_fetch.c",0x20a,"evp_default_properties_merge");
      uVar5 = 0x8000f;
      goto LAB_003832c4;
    }
    FUN_00379868();
    pcVar6 = "evp_default_properties_merge";
    uVar5 = 0x204;
  }
  FUN_0037995c("crypto/evp/evp_fetch.c",uVar5,pcVar6);
  uVar5 = 0xd2;
LAB_003832c4:
  FUN_00379a5c(6,uVar5,0);
  return 0;
}


// ===== 0038330c  FUN_0038330c =====

void FUN_0038330c(undefined8 param_1,undefined8 param_2)

{
  FUN_00383184(param_1,param_2,1);
  return;
}


// ===== 00383314  FUN_00383314 =====

long FUN_00383314(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_003e8aa4();
  if (puVar1 == (undefined8 *)0x0) {
    lVar2 = FUN_003ca2f4(&DAT_001c717f,"crypto/evp/evp_fetch.c",0x235);
    return lVar2;
  }
  lVar2 = FUN_003eb3c0(param_1,*puVar1,0,0);
  if (lVar2 != 0) {
    lVar3 = FUN_003c83a4(lVar2,"crypto/evp/evp_fetch.c",0x23d);
    if ((lVar3 != 0) && (lVar2 = FUN_003eb3c0(param_1,*puVar1,lVar3,lVar2), lVar2 == 0)) {
      FUN_00379868();
      FUN_0037995c("crypto/evp/evp_fetch.c",0x241,"evp_get_global_properties_str");
      FUN_00379a5c(6,0xc0103,0);
      FUN_003c86b4(lVar3,"crypto/evp/evp_fetch.c",0x242);
      return 0;
    }
    return lVar3;
  }
  FUN_00379868();
  FUN_0037995c("crypto/evp/evp_fetch.c",0x239,"evp_get_global_properties_str");
  FUN_00379a5c(6,0xc0103,0);
  return 0;
}


// ===== 0038345c  FUN_0038345c =====

void FUN_0038345c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78 [4];
  long local_58;
  
  local_58 = 0;
  local_78[0] = param_1;
  FUN_003829f4(local_78,0,param_2,0,0,param_5,param_6,param_7);
  local_90[0] = param_2;
  local_88 = param_3;
  uStack_80 = param_4;
  if (local_58 != 0) {
    FUN_003e9304(local_58,FUN_00383508,local_90);
  }
  uVar1 = FUN_003b9c48(param_1,0);
  FUN_003e9304(uVar1,FUN_00383508,local_90);
  if (local_58 != 0) {
    FUN_003e8bb4();
  }
  return;
}


// ===== 00383508  FUN_00383508 =====

void FUN_00383508(byte param_1,undefined8 param_2,uint *param_3)

{
  if (*param_3 == (uint)param_1) {
                    /* WARNING: Could not recover jumptable at 0x00383520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 2))(param_2,*(undefined8 *)(param_3 + 4));
    return;
  }
  return;
}


// ===== 00383528  FUN_00383528 =====

bool FUN_00383528(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_003d40a4();
  uVar2 = FUN_003c3bb8();
  if (param_1 == 0) {
    param_2 = FUN_003c3b2c(uVar2,param_3);
  }
  iVar1 = FUN_003c3b2c(uVar2,param_4);
  return iVar1 == param_2;
}


// ===== 00383588  FUN_00383588 =====

void FUN_00383588(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_003d40a4();
  uVar1 = FUN_003c3bb8();
  FUN_003c3a08(uVar1,param_2,param_3,param_4);
  return;
}


// ===== 003835c8  FUN_003835c8 =====

void FUN_003835c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    return;
  }
  uVar1 = FUN_003e8af8(*param_1);
  param_1[4] = uVar1;
  return;
}


// ===== 00383600  FUN_00383600 =====

void FUN_00383600(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8ca8();
  return;
}


// ===== 00383628  FUN_00383628 =====

void FUN_00383628(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_003b9c48(*param_2,0);
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_003e8cb8();
  return;
}


// ===== 00383650  FUN_00383650 =====

long FUN_00383650(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  char *__s;
  long local_28;
  
  uVar2 = *(uint *)((long)param_3 + 0xc);
  local_28 = 0;
  if (uVar2 == 0) {
    if (param_3[2] == 0) {
      return 0;
    }
    lVar3 = FUN_003c3bb8(*param_3);
    __s = (char *)param_3[2];
    pcVar4 = strchr(__s,0x3a);
    if (pcVar4 == (char *)0x0) {
      sVar5 = strlen(__s);
    }
    else {
      sVar5 = (long)pcVar4 - (long)__s;
    }
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_003c3ce0(lVar3,__s,sVar5);
    if (uVar2 == 0) {
      return 0;
    }
  }
  lVar3 = 0;
  if ((uVar2 >> 0x17 == 0) && (iVar1 = *(int *)(param_3 + 1), 0xffffff00 < iVar1 - 0x100U)) {
    if ((param_1 == 0) && (param_1 = FUN_003b9c48(*param_3,0), param_1 == 0)) {
      return 0;
    }
    iVar1 = FUN_003e93a4(param_1,iVar1 + uVar2 * 0x100,param_3[3],param_2,&local_28);
    lVar3 = 0;
    if (iVar1 != 0) {
      lVar3 = local_28;
    }
  }
  return lVar3;
}


// ===== 00383760  FUN_00383760 =====

undefined8
FUN_00383760(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  
  if (param_4 == (char *)0x0) {
    sVar6 = 0;
    lVar4 = FUN_003c3bb8(*param_6);
  }
  else {
    pcVar3 = strchr(param_4,0x3a);
    if (pcVar3 == (char *)0x0) {
      sVar6 = strlen(param_4);
      lVar4 = FUN_003c3bb8(*param_6);
    }
    else {
      sVar6 = (long)pcVar3 - (long)param_4;
      lVar4 = FUN_003c3bb8(*param_6);
    }
  }
  if ((((lVar4 != 0) && (uVar2 = FUN_003c3ce0(lVar4,param_4,sVar6), uVar2 != 0)) &&
      (uVar2 >> 0x17 == 0)) &&
     ((iVar1 = *(int *)(param_6 + 1), 0xffffff00 < iVar1 - 0x100U &&
      ((param_1 != 0 || (param_1 = FUN_003b9c48(*param_6,0), param_1 != 0)))))) {
    uVar5 = FUN_003e8cc8(param_1,param_3,iVar1 + uVar2 * 0x100,param_5,param_2,param_6[7],param_6[8]
                        );
    return uVar5;
  }
  return 0;
}


// ===== 0038387c  FUN_0038387c =====

long FUN_0038387c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_003d40a4(param_2);
  uVar1 = FUN_003c3bb8();
  uVar1 = FUN_003c3fc4(uVar1,0,*param_1,0x3a);
  if ((int)uVar1 == 0) {
    return 0;
  }
  lVar2 = (**(code **)(param_3 + 0x30))(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    return lVar2;
  }
  *(byte *)(param_3 + 0x28) = *(byte *)(param_3 + 0x28) | 1;
  return 0;
}


// ===== 0038390c  FUN_0038390c =====

void FUN_0038390c(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00383910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x40))();
  return;
}


// ===== 00383914  FUN_00383914 =====

void FUN_00383914(long param_1)

{
  FUN_003d065c(param_1 + 0x38);
  return;
}


// ===== 0038391c  FUN_0038391c =====

void FUN_0038391c(long param_1)

{
  FUN_003d0904(param_1 + 0x38);
  return;
}


// ===== 00383924  FUN_00383924 =====

void FUN_00383924(long param_1)

{
  FUN_003d0774(param_1 + 0x38);
  return;
}


// ===== 0038392c  FUN_0038392c =====

void FUN_0038392c(long param_1)

{
  FUN_003d083c(param_1 + 0x38);
  return;
}


// ===== 00383934  FUN_00383934 =====

long * FUN_00383934(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_003c83a4(0x10,"crypto/encode_decode/decoder_pkey.c",0x2ac);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = FUN_003d5150();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x2b3;
  }
  else {
    lVar2 = FUN_003b8a34(FUN_003839cc,FUN_00383a74);
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      return plVar1;
    }
    FUN_003d51ac(*plVar1);
    uVar3 = 0x2ba;
  }
  FUN_003c86b4(plVar1,"crypto/encode_decode/decoder_pkey.c",uVar3);
  return (long *)0x0;
}


// ===== 003839cc  FUN_003839cc =====

ulong FUN_003839cc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[4] == 0) {
    lVar1 = 0x2321;
    if (param_1[1] == 0) goto LAB_00383a58;
LAB_00383a00:
    lVar2 = FUN_003b923c();
    if (*param_1 != 0) goto LAB_00383a10;
LAB_00383a64:
    lVar3 = 0;
    if (param_1[2] == 0) {
      lVar4 = 0;
      goto LAB_00383a24;
    }
  }
  else {
    lVar1 = FUN_003b923c();
    lVar1 = lVar1 * 0x17 + 0x2321;
    if (param_1[1] != 0) goto LAB_00383a00;
LAB_00383a58:
    lVar2 = 0;
    if (*param_1 == 0) goto LAB_00383a64;
LAB_00383a10:
    lVar3 = FUN_003b923c();
    lVar4 = param_1[2];
    if (lVar4 == 0) goto LAB_00383a24;
  }
  lVar4 = FUN_003b923c();
LAB_00383a24:
  return lVar4 + (lVar3 + (lVar2 + lVar1) * 0x17) * 0x17 ^ (long)(int)param_1[3];
}


// ===== 00383a74  FUN_00383a74 =====

uint FUN_00383a74(long *param_1,long *param_2)

{
  uint uVar1;
  char *__s1;
  char *__s2;
  long lVar2;
  long lVar3;
  
  if ((int)param_1[3] == (int)param_2[3]) {
    lVar3 = param_1[2];
    lVar2 = param_2[2];
    if ((lVar3 == 0) || (lVar2 == 0)) {
      uVar1 = (uint)(lVar2 != 0);
      if (lVar3 != 0) {
        return 0xffffffff;
      }
    }
    else {
      uVar1 = FUN_003cab04(lVar3,lVar2);
    }
    if (uVar1 == 0) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      if ((lVar3 == 0) || (lVar2 == 0)) {
        uVar1 = (uint)(lVar2 != 0);
        if (lVar3 != 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar1 = FUN_003cab04(lVar3,lVar2);
      }
      if (uVar1 == 0) {
        lVar3 = param_1[1];
        lVar2 = param_2[1];
        if ((lVar3 == 0) || (lVar2 == 0)) {
          uVar1 = (uint)(lVar2 != 0);
          if (lVar3 != 0) {
            return 0xffffffff;
          }
        }
        else {
          uVar1 = FUN_003cab04(lVar3,lVar2);
        }
        if (uVar1 == 0) {
          __s1 = (char *)param_1[4];
          __s2 = (char *)param_2[4];
          if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
            uVar1 = strcmp(__s1,__s2);
            return uVar1;
          }
          uVar1 = (uint)(__s2 != (char *)0x0);
          if (__s1 != (char *)0x0) {
            uVar1 = 0xffffffff;
          }
          return uVar1;
        }
      }
    }
  }
  else {
    uVar1 = 1;
    if ((int)param_1[3] < (int)param_2[3]) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// ===== 00383bec  FUN_00383bec =====

void FUN_00383bec(undefined8 *param_1)

{
  FUN_003b9160(param_1[1],FUN_00383c38);
  FUN_003b8b74(param_1[1]);
  FUN_003d51ac(*param_1);
  FUN_003c86b4(param_1,"crypto/encode_decode/decoder_pkey.c",0x2c8);
  return;
}


// ===== 00383c38  FUN_00383c38 =====

void FUN_00383c38(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_003c86b4(*param_1,"crypto/encode_decode/decoder_pkey.c",0x260);
    FUN_003c86b4(param_1[1],"crypto/encode_decode/decoder_pkey.c",0x261);
    FUN_003c86b4(param_1[2],"crypto/encode_decode/decoder_pkey.c",0x262);
    FUN_003c86b4(param_1[4],"crypto/encode_decode/decoder_pkey.c",0x263);
    FUN_00385540(param_1[5]);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_pkey.c",0x265);
    return;
  }
  return;
}


// ===== 00383cbc  FUN_00383cbc =====

undefined8 * FUN_00383cbc(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_003b9c48(param_1,0x14);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = FUN_003d518c(*puVar2);
    if (iVar1 == 0) {
      FUN_00379868();
      FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x2d9,"ossl_decoder_cache_flush");
      FUN_00379a5c(0x3c,0x8003c,0);
      return (undefined8 *)0x0;
    }
    FUN_003b9160(puVar2[1],FUN_00383c38);
    FUN_003b8c20(puVar2[1]);
    FUN_003d519c(*puVar2);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}


// ===== 00383d54  FUN_00383d54 =====

long FUN_00383d54(undefined8 param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                 undefined8 param_6,long param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  long local_120;
  long lStack_118;
  long local_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  puVar3 = (undefined8 *)FUN_003b9c48(param_6,0x14);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_00379868();
    uVar6 = 0x2f5;
LAB_00383f6c:
    FUN_0037995c("crypto/encode_decode/decoder_pkey.c",uVar6,"OSSL_DECODER_CTX_new_for_pkey");
    uVar11 = 0x8003c;
LAB_00383fac:
    FUN_00379a5c(0x3c,uVar11,0);
    return 0;
  }
  if (param_7 != 0) {
    FUN_003cd8cc(&local_a0,"properties",param_7,0);
    local_d0 = local_80;
    lStack_e8 = lStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    local_e0 = local_90;
  }
  local_120 = param_2;
  lStack_118 = param_3;
  local_110 = param_4;
  local_108 = param_5;
  local_100 = param_7;
  iVar2 = FUN_003d517c(*puVar3);
  if (iVar2 == 0) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x304,"OSSL_DECODER_CTX_new_for_pkey");
    uVar11 = 0x8000f;
    goto LAB_00383fac;
  }
  lVar4 = FUN_003b908c(puVar3[1],&local_120);
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + 0x28);
    if (lVar10 != 0) goto LAB_00383e14;
LAB_00384134:
    lVar4 = 0;
LAB_0038416c:
    FUN_003d519c(*puVar3);
    return lVar4;
  }
  FUN_003d519c(*puVar3);
  lVar10 = FUN_00385440();
  if (lVar10 == 0) {
    FUN_00379868();
    uVar6 = 0x314;
    goto LAB_00383f6c;
  }
  iVar2 = FUN_003860d8(lVar10,param_2);
  if (((iVar2 != 0) && (iVar2 = FUN_0038612c(lVar10,param_3), iVar2 != 0)) &&
     (iVar2 = FUN_00386084(lVar10,param_5), iVar2 != 0)) {
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    local_80 = 0;
    lStack_98 = 0;
    local_a0 = 0;
    puVar7 = (undefined8 *)FUN_003c8474(0x30,"crypto/encode_decode/decoder_pkey.c",0x194);
    if (puVar7 != (undefined8 *)0x0) {
      if (param_7 == 0) {
LAB_00384050:
        lVar4 = FUN_0040bf0c();
        if (lVar4 == 0) {
          FUN_00379868();
          FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x19d,"ossl_decoder_ctx_setup_for_pkey"
                      );
          FUN_00379a5c(0x3c,0x8000f,0);
          goto LAB_00384248;
        }
        puVar7[5] = 0;
        *puVar7 = param_6;
        uVar11 = *(undefined4 *)(lVar10 + 0x10);
        puVar7[3] = lVar4;
        *(undefined4 *)(puVar7 + 2) = uVar11;
        local_a0 = param_6;
        lStack_98 = lVar10;
        local_90 = param_4;
        local_78 = lVar4;
        FUN_003a067c(param_6,FUN_003844d8,&local_a0);
        if (local_80._4_1_ != '\0') goto LAB_00384248;
        FUN_003852a8(param_6,FUN_003845d4,&local_a0);
        if (local_80._4_1_ != '\0') goto LAB_00384248;
        iVar2 = FUN_00385bb8(lVar10);
        if (iVar2 == 0) {
          bVar1 = false;
          goto LAB_00384250;
        }
        iVar2 = FUN_00386b1c(lVar10,FUN_00384704);
        if (((iVar2 == 0) || (iVar2 = FUN_00386b70(lVar10,puVar7), iVar2 == 0)) ||
           (iVar2 = FUN_00386bc4(lVar10,FUN_00384910), iVar2 == 0)) goto LAB_00384248;
      }
      else {
        lVar4 = FUN_003ca2f4(param_7,"crypto/encode_decode/decoder_pkey.c",0x197);
        puVar7[1] = lVar4;
        if (lVar4 != 0) goto LAB_00384050;
LAB_00384248:
        bVar1 = true;
LAB_00384250:
        FUN_0040ca6c(puVar7[3],PTR_FUN_007a1af8);
        FUN_003c86b4(puVar7[1],"crypto/encode_decode/decoder_pkey.c",200);
        FUN_003c86b4(puVar7[4],"crypto/encode_decode/decoder_pkey.c",0xc9);
        FUN_003c86b4(puVar7,"crypto/encode_decode/decoder_pkey.c",0xca);
        if (bVar1) goto LAB_003843b4;
      }
      iVar2 = FUN_00386718(lVar10,param_6,param_7);
      if ((iVar2 != 0) && ((param_7 == 0 || (iVar2 = FUN_00385454(lVar10,&local_f0), iVar2 != 0))))
      {
        plVar9 = (long *)FUN_003c8474(0x30,"crypto/encode_decode/decoder_pkey.c",0x331);
        if (plVar9 == (long *)0x0) goto LAB_003843e4;
        if (param_2 == 0) {
LAB_00384314:
          if (param_3 != 0) {
            lVar4 = FUN_003ca2f4(param_3,"crypto/encode_decode/decoder_pkey.c",0x33d);
            plVar9[1] = lVar4;
            if (lVar4 == 0) goto LAB_003844cc;
          }
          if (param_4 != 0) {
            lVar4 = FUN_003ca2f4(param_4,"crypto/encode_decode/decoder_pkey.c",0x342);
            plVar9[2] = lVar4;
            if (lVar4 == 0) goto LAB_003844cc;
          }
          if (param_7 != 0) {
            lVar4 = FUN_003ca2f4(param_7,"crypto/encode_decode/decoder_pkey.c",0x347);
            plVar9[4] = lVar4;
            if (lVar4 == 0) goto LAB_003844cc;
          }
          *(undefined4 *)(plVar9 + 3) = param_5;
          plVar9[5] = lVar10;
          iVar2 = FUN_003d518c(*puVar3);
          if (iVar2 != 0) {
            lVar4 = FUN_003b908c(puVar3[1],&local_120);
            if (lVar4 == 0) {
              FUN_003b8ca4(puVar3[1],plVar9);
              lVar4 = FUN_003b92bc(puVar3[1]);
              if ((int)lVar4 != 0) {
                uVar6 = 0x358;
                goto LAB_0038449c;
              }
            }
            else {
              FUN_00383c38(plVar9);
              lVar10 = *(long *)(lVar4 + 0x28);
              if (lVar10 == 0) goto LAB_00384134;
            }
LAB_00383e14:
            lVar4 = FUN_00385440(lVar4);
            if (lVar4 == 0) {
              FUN_00379868();
              FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x1fb,
                           "ossl_decoder_ctx_for_pkey_dup");
              FUN_00379a5c(0x3c,0x8003c,0);
              goto LAB_0038416c;
            }
            iVar2 = FUN_003860d8(lVar4,param_2);
            if ((iVar2 == 0) || (iVar2 = FUN_0038612c(lVar4,param_3), iVar2 == 0)) {
              FUN_00379868();
              uVar6 = 0x201;
LAB_00384114:
              FUN_0037995c("crypto/encode_decode/decoder_pkey.c",uVar6,
                           "ossl_decoder_ctx_for_pkey_dup");
              uVar11 = 0x8003c;
LAB_00384124:
              FUN_00379a5c(0x3c,uVar11,0);
            }
            else {
              *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar10 + 0x10);
              if (*(long *)(lVar10 + 0x18) != 0) {
                lVar5 = FUN_0040bdc4(*(long *)(lVar10 + 0x18),PTR_FUN_007a1a68,PTR_FUN_007a1a60);
                *(long *)(lVar4 + 0x18) = lVar5;
                if (lVar5 == 0) {
                  FUN_00379868();
                  uVar6 = 0x20c;
                  goto LAB_00384114;
                }
              }
              uVar6 = FUN_00386c18(lVar10);
              iVar2 = FUN_00386b1c(lVar4,uVar6);
              if (iVar2 == 0) {
                FUN_00379868();
                uVar6 = 0x213;
                goto LAB_00384114;
              }
              puVar7 = (undefined8 *)FUN_00386c24(lVar10);
              if (puVar7 == (undefined8 *)0x0) {
LAB_00383f20:
                uVar6 = FUN_00386c30(lVar10);
                iVar2 = FUN_00386bc4(lVar4,uVar6);
                if (iVar2 != 0) goto LAB_0038416c;
                FUN_00379868();
                uVar6 = 0x23d;
                goto LAB_00384114;
              }
              puVar8 = (undefined8 *)FUN_003c8474(0x30,"crypto/encode_decode/decoder_pkey.c",0x219);
              if (puVar8 == (undefined8 *)0x0) {
                FUN_00379868();
                FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x21b,
                             "ossl_decoder_ctx_for_pkey_dup");
                uVar11 = 0x8000f;
                goto LAB_00384124;
              }
              uVar11 = 0x8003c;
              if (puVar7[1] == 0) {
LAB_00383ed8:
                if (puVar7[3] != 0) {
                  lVar5 = FUN_0040bdc4(puVar7[3],FUN_0038497c,PTR_FUN_007a1af8);
                  puVar8[3] = lVar5;
                  if (lVar5 == 0) {
                    uVar11 = 0x80006;
                    uVar6 = 0x22c;
                    goto LAB_0038440c;
                  }
                }
                puVar8[5] = param_1;
                *puVar8 = *puVar7;
                *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar7 + 2);
                iVar2 = FUN_00386b70(lVar4,puVar8);
                if (iVar2 != 0) goto LAB_00383f20;
                uVar6 = 0x235;
              }
              else {
                lVar5 = FUN_003ca2f4(puVar7[1],"crypto/encode_decode/decoder_pkey.c",0x21f);
                puVar8[1] = lVar5;
                if (lVar5 != 0) goto LAB_00383ed8;
                uVar11 = 0x8000f;
                uVar6 = 0x221;
              }
LAB_0038440c:
              FUN_00379868();
              FUN_0037995c("crypto/encode_decode/decoder_pkey.c",uVar6,
                           "ossl_decoder_ctx_for_pkey_dup");
              FUN_00379a5c(0x3c,uVar11,0);
              FUN_003c86b4(puVar8[1],"crypto/encode_decode/decoder_pkey.c",0x244);
              FUN_0040ca6c(puVar8[3],PTR_FUN_007a1af8);
              FUN_003c86b4(puVar8,"crypto/encode_decode/decoder_pkey.c",0x246);
            }
            FUN_00385540(lVar4);
            goto LAB_00384134;
          }
          uVar6 = 0x350;
LAB_0038449c:
          FUN_00379868();
          FUN_0037995c("crypto/encode_decode/decoder_pkey.c",uVar6,"OSSL_DECODER_CTX_new_for_pkey");
          FUN_00379a5c(0x3c,0x8000f,0);
          lVar10 = 0;
        }
        else {
          lVar4 = FUN_003ca2f4(param_2,"crypto/encode_decode/decoder_pkey.c",0x338);
          *plVar9 = lVar4;
          if (lVar4 != 0) goto LAB_00384314;
        }
LAB_003844cc:
        FUN_00383c38(plVar9);
        goto LAB_003843e4;
      }
    }
  }
LAB_003843b4:
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_pkey.c",0x32c,"OSSL_DECODER_CTX_new_for_pkey");
  FUN_00379a5c(0x3c,0x8003c,0);
LAB_003843e4:
  FUN_00385540(lVar10);
  return 0;
}


// ===== 003844d8  FUN_003844d8 =====

void FUN_003844d8(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *__s1;
  
  if (param_2[2] != 0) {
    if (*(char *)((long)param_2 + 0x25) == '\0') {
      uVar3 = FUN_003c3bb8(*param_2);
      iVar1 = FUN_003c3b2c(uVar3,param_2[2]);
      *(int *)(param_2 + 3) = iVar1;
      if (iVar1 != 0) {
        __s1 = (char *)param_2[2];
        iVar1 = strcmp(__s1,"id-ecPublicKey");
        if ((iVar1 == 0) || (iVar1 = strcmp(__s1,"1.2.840.10045.2.1"), iVar1 == 0)) {
          uVar2 = FUN_003c3b2c(uVar3,&DAT_001c9780);
          *(undefined4 *)((long)param_2 + 0x1c) = uVar2;
        }
      }
      *(undefined1 *)((long)param_2 + 0x25) = 1;
    }
    if (*(int *)(param_2 + 3) == 0) {
      return;
    }
    if ((*(int *)(param_1 + 4) != *(int *)(param_2 + 3)) &&
       (*(int *)(param_1 + 4) != *(int *)((long)param_2 + 0x1c))) {
      return;
    }
  }
  iVar1 = FUN_003a0584(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_0040c89c(param_2[5],param_1), iVar1 < 1)) {
    FUN_003a059c(param_1);
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return;
  }
  return;
}


// ===== 003845d4  FUN_003845d4 =====

void FUN_003845d4(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(char *)(param_2 + 0x24) != '\0') {
    return;
  }
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  FUN_00385044();
  uVar4 = thunk_FUN_003d408c();
  if ((*(code **)(param_1 + 0x60) == (code *)0x0) ||
     (iVar2 = (**(code **)(param_1 + 0x60))(uVar4,*(undefined4 *)(*(long *)(param_2 + 8) + 0x10)),
     iVar2 != 0)) {
    iVar2 = FUN_0040caf8(uVar7);
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar5 = FUN_0040cb0c(uVar7,iVar8);
        if (*(int *)(param_1 + 8) == *(int *)(lVar5 + 4)) {
          lVar5 = (**(code **)(param_1 + 0x30))(uVar4);
          if (lVar5 == 0) {
LAB_003846e4:
            *(undefined1 *)(param_2 + 0x24) = 1;
            return;
          }
          lVar6 = FUN_00386180(param_1,lVar5);
          if (lVar6 == 0) {
            (**(code **)(param_1 + 0x38))(lVar5);
            goto LAB_003846e4;
          }
          iVar3 = FUN_00386524(*(undefined8 *)(param_2 + 8),lVar6);
          if (iVar3 == 0) {
            FUN_003863b8(lVar6);
            goto LAB_003846e4;
          }
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        }
      } while ((*(char *)(param_2 + 0x24) == '\0') &&
              (bVar1 = iVar2 + -1 != iVar8, iVar8 = iVar8 + 1, bVar1));
    }
  }
  return;
}


// ===== 00384704  FUN_00384704 =====

ulong FUN_00384704(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long local_78;
  long local_70;
  int local_68;
  
  lVar5 = FUN_00386c9c();
  uVar6 = FUN_00386ca8(param_1);
  lVar7 = FUN_00385044(lVar5);
  lVar8 = FUN_003cb19c(param_2,"data-type");
  if (lVar8 != 0) {
    local_78 = 0;
    uVar9 = FUN_003cd3d4(lVar8,&local_78,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    FUN_003c86b4(param_3[4],"crypto/encode_decode/decoder_pkey.c",99);
    param_3[4] = local_78;
  }
  lVar8 = FUN_003cb19c(param_2,"reference");
  if (lVar8 == 0) {
    return 0;
  }
  if (*(int *)(lVar8 + 8) != 5) {
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar8 + 0x10);
  uVar2 = *(undefined8 *)(lVar8 + 0x18);
  iVar3 = FUN_0040caf8(param_3[3]);
  if (0 < iVar3) {
    iVar11 = 0;
    do {
      lVar8 = FUN_0040cb0c(param_3[3],iVar11);
      lVar10 = FUN_003a0628();
      if (((lVar10 == lVar7) && (iVar4 = FUN_003a0818(lVar8), iVar4 != 0)) &&
         (iVar4 = FUN_003a0648(lVar8,param_3[4]), iVar4 != 0)) {
        uVar9 = FUN_003a0584(lVar8);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        if (lVar8 != 0) goto LAB_00384898;
        goto LAB_003848e0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
  lVar8 = FUN_003a0600(*param_3,param_3[4],param_3[1]);
  if (lVar8 == 0) goto LAB_003848e0;
  lVar10 = FUN_003a0628();
  if (lVar10 == lVar7) {
LAB_00384898:
    lVar5 = FUN_003a082c(lVar8,uVar1,uVar2);
    if (lVar5 != 0) goto LAB_003848b0;
LAB_003848cc:
    lVar7 = 0;
  }
  else {
    local_70 = 0;
    local_68 = 0x87;
    if (*(int *)(param_3 + 2) != 0) {
      local_68 = *(int *)(param_3 + 2);
    }
    local_78 = lVar8;
    (**(code **)(lVar5 + 0x70))(uVar6,uVar1,uVar2,PTR_FUN_007a1b08,&local_78);
    lVar5 = local_70;
    if (local_70 == 0) goto LAB_003848cc;
LAB_003848b0:
    lVar7 = FUN_0039f528(lVar8,lVar5);
    if (lVar7 == 0) {
      FUN_003a0704(lVar8,lVar5);
      goto LAB_003848cc;
    }
  }
  *(long *)param_3[5] = lVar7;
  FUN_003a059c(lVar8);
LAB_003848e0:
  return (ulong)(*(long *)param_3[5] != 0);
}


// ===== 00384910  FUN_00384910 =====

void FUN_00384910(long param_1)

{
  if (param_1 != 0) {
    FUN_0040ca6c(*(undefined8 *)(param_1 + 0x18),PTR_FUN_007a1af8);
    FUN_003c86b4(*(undefined8 *)(param_1 + 8),"crypto/encode_decode/decoder_pkey.c",200);
    FUN_003c86b4(*(undefined8 *)(param_1 + 0x20),"crypto/encode_decode/decoder_pkey.c",0xc9);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_pkey.c",0xca);
    return;
  }
  return;
}


// ===== 0038497c  FUN_0038497c =====

undefined8 FUN_0038497c(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_003a0584();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = param_1;
  }
  return uVar1;
}


// ===== 003849a4  FUN_003849a4 =====

undefined8 FUN_003849a4(long param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return 1;
}


// ===== 003849bc  FUN_003849bc =====

void FUN_003849bc(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = *(int *)(param_1 + 5), iVar2 = iVar1 + -1, *(int *)(param_1 + 5) = iVar2,
     iVar2 == 0 || iVar1 < 1)) {
    FUN_003c86b4(param_1[2],"crypto/encode_decode/decoder_meth.c",0x3c);
    FUN_003eb16c(param_1[4]);
    FUN_003d27b0(*param_1);
    FUN_003c86b4(param_1,"crypto/encode_decode/decoder_meth.c",0x40);
    return;
  }
  return;
}


// ===== 00384a28  FUN_00384a28 =====

/* WARNING: Type propagation algorithm not settling */

long * FUN_00384a28(undefined4 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 0x10);
  uVar6 = FUN_003d40a4(param_3);
  plVar7 = (long *)FUN_003c8474(0x78,"crypto/encode_decode/decoder_meth.c",0x20);
  if (plVar7 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined4 *)(plVar7 + 1) = param_1;
  *(undefined4 *)(plVar7 + 5) = 1;
  lVar8 = FUN_003c34fc(param_2);
  plVar7[2] = lVar8;
  if (lVar8 == 0) {
    lVar11 = plVar7[5];
    iVar5 = (int)lVar11 + -1;
    *(int *)(plVar7 + 5) = iVar5;
    if (iVar5 != 0 && 0 < (int)lVar11) {
      return (long *)0x0;
    }
    lVar11 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    plVar7[3] = param_2;
    lVar8 = FUN_003ea160(uVar6,uVar9);
    plVar7[4] = lVar8;
    if (lVar8 != 0) {
      plVar1 = plVar7 + 0xd;
      plVar2 = plVar7 + 7;
      plVar3 = plVar7 + 6;
      plVar10 = (long *)(lVar11 + 8);
      do {
        iVar5 = (int)plVar10[-1];
        if (iVar5 < 5) {
          if (2 < iVar5) {
            if (iVar5 == 3) {
              lVar11 = plVar7[8];
              plVar4 = plVar7 + 8;
            }
            else {
              if (iVar5 != 4) goto LAB_00384adc;
              lVar11 = plVar7[9];
              plVar4 = plVar7 + 9;
            }
            goto joined_r0x00384b14;
          }
          if (iVar5 == 1) {
            lVar11 = *plVar3;
            plVar4 = plVar3;
            goto joined_r0x00384b14;
          }
          if (iVar5 == 2) {
            lVar11 = *plVar2;
            plVar4 = plVar2;
            goto joined_r0x00384b14;
          }
          if (iVar5 == 0) goto code_r0x00384bd8;
        }
        else {
          if (iVar5 < 10) {
            if (iVar5 == 5) {
              lVar11 = plVar7[10];
              plVar4 = plVar7 + 10;
            }
            else {
              if (iVar5 != 6) goto LAB_00384adc;
              lVar11 = plVar7[0xb];
              plVar4 = plVar7 + 0xb;
            }
          }
          else if (iVar5 == 10) {
            lVar11 = plVar7[0xc];
            plVar4 = plVar7 + 0xc;
          }
          else if (iVar5 == 0xb) {
            lVar11 = *plVar1;
            plVar4 = plVar1;
          }
          else {
            if (iVar5 != 0x14) goto LAB_00384adc;
            lVar11 = plVar7[0xe];
            plVar4 = plVar7 + 0xe;
          }
joined_r0x00384b14:
          if (lVar11 == 0) {
            *plVar4 = *plVar10;
          }
        }
LAB_00384adc:
        plVar10 = plVar10 + 2;
      } while( true );
    }
    lVar11 = plVar7[5];
    iVar5 = (int)lVar11 + -1;
    *(int *)(plVar7 + 5) = iVar5;
    if (iVar5 != 0 && 0 < (int)lVar11) {
      return (long *)0x0;
    }
    lVar11 = plVar7[2];
  }
  FUN_003c86b4(lVar11,"crypto/encode_decode/decoder_meth.c",0x3c);
  FUN_003eb16c(plVar7[4]);
  FUN_003d27b0(*plVar7);
  FUN_003c86b4(plVar7,"crypto/encode_decode/decoder_meth.c",0x40);
  return (long *)0x0;
code_r0x00384bd8:
  if (*plVar3 == 0) {
    if (*plVar2 != 0) goto LAB_00384cac;
  }
  else if (*plVar2 == 0) goto LAB_00384cac;
  if (*plVar1 != 0) {
    if ((param_3 != 0) && (iVar5 = FUN_003d2754(param_3), iVar5 == 0)) {
      FUN_003849bc(plVar7);
      return (long *)0x0;
    }
    *plVar7 = param_3;
    return plVar7;
  }
LAB_00384cac:
  lVar11 = plVar7[5];
  iVar5 = (int)lVar11 + -1;
  *(int *)(plVar7 + 5) = iVar5;
  if (iVar5 == 0 || (int)lVar11 < 1) {
    FUN_003c86b4(plVar7[2],"crypto/encode_decode/decoder_meth.c",0x3c);
    FUN_003eb16c(plVar7[4]);
    FUN_003d27b0(*plVar7);
    FUN_003c86b4(plVar7,"crypto/encode_decode/decoder_meth.c",0x40);
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x112,"ossl_decoder_from_algorithm");
  FUN_00379a5c(0x3c,0xc0108,0);
  return (long *)0x0;
}


// ===== 00384d4c  FUN_00384d4c =====

undefined8 FUN_00384d4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_50 [4];
  long local_30;
  
  local_30 = 0;
  local_50[0] = param_1;
  uVar1 = FUN_00384d94(local_50);
  if (local_30 != 0) {
    FUN_003e8bb4(local_30);
  }
  return uVar1;
}


// ===== 00384d94  FUN_00384d94 =====

long FUN_00384d94(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long local_48;
  
  lVar6 = FUN_003b9c48(*param_1,0xb);
  lVar7 = FUN_003c3bb8(*param_1);
  puVar1 = &DAT_001c717f;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  local_48 = 0;
  if ((lVar6 == 0) || (lVar7 == 0)) {
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x15f,"inner_ossl_decoder_fetch");
    FUN_00379a5c(0x3c,0x80106,0);
    return 0;
  }
  if (param_2 == (undefined1 *)0x0) {
    iVar4 = 0;
LAB_00384e78:
    bVar10 = 1;
  }
  else {
    iVar4 = FUN_003c3b2c(lVar7,param_2);
    if (iVar4 == 0) goto LAB_00384e78;
    iVar5 = FUN_003e97ac(lVar6,0,iVar4,puVar1,&local_48);
    uVar9 = 0x8010d;
    if (iVar5 != 0) goto LAB_00384f34;
    bVar10 = 0;
  }
  local_70 = PTR_FUN_00764eb8;
  puStack_98 = PTR_FUN_00764e90;
  local_a0 = PTR_FUN_00764e88;
  puStack_88 = PTR_FUN_00764ea0;
  puStack_90 = PTR_FUN_00764e98;
  puStack_78 = PTR_FUN_00764eb0;
  local_80 = PTR_FUN_00764ea8;
  local_a8 = 0;
  *(int *)(param_1 + 1) = iVar4;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  param_1[2] = param_2;
  param_1[3] = puVar1;
  local_48 = FUN_003c3560(*param_1,0x15,&local_a8,0,&local_a0,param_1);
  if (local_48 != 0) {
    bVar3 = (bool)(bVar10 ^ 1);
    if (param_2 == (undefined1 *)0x0) {
      bVar3 = true;
    }
    if (!bVar3) {
      iVar4 = FUN_003c3b2c(lVar7,param_2);
    }
    if (iVar4 != 0) {
      FUN_003e9864(lVar6,local_a8,iVar4,puVar1,local_48,FUN_00385910,FUN_00385928);
    }
  }
  uVar9 = 0x8010c;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar9 = 0x8010d;
  }
LAB_00384f34:
  if ((iVar4 != 0 || param_2 != (undefined1 *)0x0) && (local_48 == 0)) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = (undefined1 *)FUN_003c3dbc(lVar7,iVar4,0);
    }
    FUN_00379868();
    FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x198,"inner_ossl_decoder_fetch");
    uVar8 = FUN_003b9ecc(*param_1);
    puVar1 = &UNK_001e8ca4;
    if (param_2 != (undefined1 *)0x0) {
      puVar1 = param_2;
    }
    puVar2 = &UNK_001e8ca4;
    if (param_3 != (undefined1 *)0x0) {
      puVar2 = param_3;
    }
    FUN_00379a5c(0x3c,uVar9,"%s, Name (%s : %d), Properties (%s)",uVar8,puVar1,iVar4,puVar2);
  }
  return local_48;
}


// ===== 00384fdc  FUN_00384fdc =====

undefined8 FUN_00384fdc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_003b9c48(param_1,0xb);
  if (lVar1 != 0) {
    uVar2 = FUN_003e9730();
    return uVar2;
  }
  return 1;
}


// ===== 00385004  FUN_00385004 =====

undefined8 FUN_00385004(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_003d40a4();
  lVar2 = FUN_003b9c48(uVar1,0xb);
  if (lVar2 != 0) {
    uVar1 = FUN_003e919c(lVar2,param_1);
    return uVar1;
  }
  return 1;
}


// ===== 00385044  FUN_00385044 =====

undefined8 FUN_00385044(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x1c9,"OSSL_DECODER_get0_provider");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00385094  FUN_00385094 =====

undefined8 FUN_00385094(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x1d3,"OSSL_DECODER_get0_properties");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 003850e8  FUN_003850e8 =====

undefined8 FUN_003850e8(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x1de,"ossl_decoder_parsed_properties");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


// ===== 00385138  FUN_00385138 =====

undefined4 FUN_00385138(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  FUN_00379868();
  FUN_0037995c("crypto/encode_decode/decoder_meth.c",0x1e8,"ossl_decoder_get_number");
  FUN_00379a5c(0x3c,0xc0102,0);
  return 0;
}


